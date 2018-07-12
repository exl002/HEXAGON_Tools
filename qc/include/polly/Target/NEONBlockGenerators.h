//===------ NEONCodeGeneration.h - Code generate the Scops for ARM NEON----===//
//
//                     The LLVM Compiler Infrastructure
//
// Author: Zino Benaissa
// History:
//      Aug, 2012: Support for type conversions.
//===----------------------------------------------------------------------===//
//
// This files defines NeonBlockGenerator class, an extension of  Polly
// VectorBlockGenerator. This class targets ARM NEON instructions.
//
//
//===----------------------------------------------------------------------===//

namespace llvm {
  class Pass;
  class ScalarEvolution;
}

namespace polly {
using namespace llvm;
class ScopStmt;

class NEONBlockGenerator : VectorBlockGenerator {
public:

  static void generateNEON(IRBuilder<> &B, ScopStmt &Stmt,
                           VectorValueMapT &GlobalMaps,
                           __isl_keep isl_map *Schedule, Pass *P,
                           MapValueVectorT &Reductions,
                           ValueVectorT &InductionMap) {
    NEONBlockGenerator Generator(B, GlobalMaps, Stmt, Schedule, P, Reductions,
                                 InductionMap);

    Generator.copyBB();
  }

protected:

  NEONBlockGenerator(IRBuilder<> &B, VectorValueMapT &GlobalMaps,
                     ScopStmt &Stmt, __isl_keep isl_map *Schedule, Pass *P,
                     MapValueVectorT &Reductions, ValueVectorT &InductionMap) :
    VectorBlockGenerator(B, GlobalMaps, Stmt, Schedule, P, Reductions),
    InductionMap(InductionMap) { };

  ValueVectorT &InductionMap;

  bool hasVectorOperands(const Instruction *Inst, ValueMapT &ScalarMap,
                         VectorValueMapT &VectorMaps,
                         bool *HasBothVectorAndScalarMap, int *Idx);

  /// copyUnaryInst vectorizes type conversion operation. It performs this
  /// operation so that it never produces a vector that exceeds the size
  /// of the register size. For example to convert <16 x i8> to <16 x i32>,
  /// it emits the following code:
  ///
  /// lo = shufflevector src, src, < 0, 1, 2, 3, 4, 5, 6, 7 >
  /// loTo16 = sext <8 x i8> lo to <8 x i16>
  /// hi = shufflevector src, src, < 7, 8, 9, 10, 11, 12, 13, 14, 15 >
  /// hiTo16 = sext <8 x i8> hi to <8 x i16>
  /// lo_lo = shufflevector loTo16, lo_to16, < 0, 1, 2, 3 >
  /// lo_loTo32 = sext <4 x i16> lo_lo to <4 x i32>
  /// lo_hi = shufflevector loTo16, lo_to16, < 4, 5, 6, 7 >
  /// lo_hiTo32 = sext <4 x i16> lo_hi to <4 x i32>
  /// hi_lo = shufflevector hiTo16, hi_to16, < 0, 1, 2, 3 >
  /// hi_loTo32 = sext <4 x i16> hi_lo to <4 x i32>
  /// hi_hi = shufflevector hiTo16, lo_to16, < 4, 5, 6, 7 >
  /// hi_hiTo32 = sext <4 x i16> hi_hi to <4 x i32>
  ///
  /// Four vector values are generated to fit <16 x i32>.
  void copyUnaryInst(const UnaryInstruction *Inst, VectorValueMapT &VectorMap,
                     VectorValueMapT &ScalarMaps, int Idx);

  bool extractScalarValues(const Instruction *Inst, VectorValueMapT &VectorMap,
                           VectorValueMapT &ScalarMaps);


  /// coptInstructions decides which instruction can be vectorized by NEON
  /// and if the instruction is vecotrized then it emits the code so that the
  /// input/output vector values fit in a NEON 128-bits register.
  void copyInstruction(const Instruction *Inst, VectorValueMapT &VectorMap,
                       VectorValueMapT &ScalarMaps);

  virtual void copyBB();

private:

  void setElementsPerVector(Type *ScalarType, int *Index);

  // Vector primitive support functions.

  /// @brief Combines half vectors into full vectors.
  /// @param Vectors       an array of half vectors.
  /// @param NumVectors    number of vectors.
  ///
  /// Each consecutive pair of vectors is combined into one full vector.
  /// Returns NumVector / 2.
  int combineHalfVectors(Value *Vectors[], int NumVectors);

  /// @brief Split vectors in two halves.
  /// @param Vectors       an array of full vectors.
  /// @param NumVectors    number of vectors.
  ///
  /// Each vector is split in two halves.
  /// Returns 2 * NumVector.
  int splitVectorsIntoHalves(Value *Opnd[], int NumVectors);

  /// Merge two halves (or pad when Opnd2 == NULL) to form one vector.
  Value *mergeHalves(Value *Opnd, Value *Opnd2 = NULL);

  Value *getHalf(Value *Opnd, unsigned i = 0);

  /// Sign/zero extend each element of the vector to double its size.
  Value *extendVector(Value *Opnd, llvm::Instruction::CastOps Opcode);

  /// Truncate each element of the vector to half it size.
  Value *truncateVector(Value *Opnd, llvm::Instruction::CastOps Opcode);

  Type *getScalarTypeFromIndex(int Index);

  int getIndex(const Value *Oper, VectorValueMapT &VectorMaps);
};
}
