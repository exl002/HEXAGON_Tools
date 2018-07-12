//===------ polly/CodeGeneration.h - The Polly code generator *- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
//===----------------------------------------------------------------------===//

#ifndef POLLY_CODEGENERATION_H
#define POLLY_CODEGENERATION_H

#include "polly/Config/config.h"

#include "isl/set.h"
#include "isl/map.h"

#include "llvm/Support/CommandLine.h"

namespace polly {
  enum VectorizerChoice {
    VECTORIZER_NONE,
    VECTORIZER_POLLY,
    VECTORIZER_NEON,
    VECTORIZER_HEXAGON,
    VECTORIZER_UNROLL_ONLY,
    VECTORIZER_FIRST_NEED_GROUPED_UNROLL = VECTORIZER_UNROLL_ONLY,
    VECTORIZER_BB
  };
  extern VectorizerChoice PollyVectorizerChoice;
  extern bool Reduction;
  extern bool VecIndVar;
  extern bool QuantizeVF;
  extern bool PrintVectLoops;
  extern unsigned MinLoopNumToVectorize;
  extern unsigned MaxLoopNumToVectorize;
  extern unsigned VectorizableLoopNum;
  typedef struct {
    int Dim, Out1, Out2;
  } getIterationsFromEachPointStr;

  static inline int getIterationsFromEachPoint(__isl_take isl_basic_set *BSet,
                                               void *U) {
    getIterationsFromEachPointStr *User = (getIterationsFromEachPointStr *) U;
    isl_point *P = isl_basic_set_sample_point(BSet);
    assert(P);
    isl_int V;
    isl_int_init(V);
    isl_point_get_coordinate(P, isl_dim_set, User->Dim, &V);
    int NumberIterations = isl_int_get_si(V);
    isl_int_clear(V);
    isl_point_free(P);

    if (User->Out1 == NumberIterations || User->Out2 == NumberIterations)
      return 0;

    if (User->Out1 == -1) {
      User->Out1 = NumberIterations;
    } else {
      if (NumberIterations > User->Out1) {
        User->Out2 = User->Out1;
        User->Out1 = NumberIterations;
      } else if (User->Out2 > NumberIterations || User->Out2 == -1) {
        User->Out2 = NumberIterations;
      }
    }
    return 0;
  }

  static inline int getNumberOfIterations(__isl_take isl_set *Domain,
                                          int *ModIterations,
                                          int *LeftOverIterations,
                                          int Stride) {
    int Dim = isl_set_dim(Domain, isl_dim_set);

    // Calculate a map similar to the identity map, but with the last input
    // and output dimension not related.
    //  [i0, i1, i2, i3] -> [i0, i1, i2, o0]
    isl_space *Space = isl_set_get_space(Domain);

    // FIXME: Polly should not use undocumented ISL functions.
    Space = isl_space_drop_outputs(Space, Dim == 1 ? 0 : Dim - 2, 1);
    Space = isl_space_map_from_set(Space);
    isl_map *Identity = isl_map_identity(Space);
    Identity = isl_map_add_dims(Identity, isl_dim_in, 1);
    Identity = isl_map_add_dims(Identity, isl_dim_out, 1);

    isl_map *Map = isl_map_from_domain_and_range(isl_set_copy(Domain), Domain);
    Map = isl_map_intersect(Map, Identity);

    isl_map *LexMax = isl_map_lexmax(isl_map_copy(Map));
    isl_map *LexMin = isl_map_lexmin(Map);
    isl_map *Sub = isl_map_sum(LexMax, isl_map_neg(LexMin));

    isl_set *Elements = isl_map_range(Sub);

    assert(isl_set_n_basic_set(Elements) &&
           "Elements should contain at least one point!");

    // |Elements|==1 means there is no leftover iteration. Otherwise, compute
    // iterations for the vector loop as well as the leftover loop.
    getIterationsFromEachPointStr V;
    V.Dim = Dim - 1;
    V.Out1 = V.Out2 = -1;
    isl_set_foreach_basic_set(Elements, &getIterationsFromEachPoint,
                              (void *) &V);
    isl_set_free(Elements);

    if (!ModIterations) {
      if (V.Out2 == -1)
        return V.Out1 / Stride + 1;
      else
        return -1;
    }

    *ModIterations = V.Out1 / Stride + 1;

    if (LeftOverIterations) {
      if (V.Out1 == V.Out2 || V.Out2 == -1)
        *LeftOverIterations = 0;
      else
        *LeftOverIterations = V.Out2 / Stride + 1;
    }

    if (V.Out2 == -1)
      return *ModIterations;
    return -1;
  }
}

#endif // POLLY_CODEGENERATION_H

