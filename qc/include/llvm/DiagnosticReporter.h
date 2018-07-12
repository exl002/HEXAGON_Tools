//===-- DiagnosticReporter.h ------------------------------------*- C++ -*-===//
//
// (c) 2013 Qualcomm Innovation Center, Inc. All rights reserved.
//
//===----------------------------------------------------------------------===//
// Provides an interface for other passes to report diagnostics to the
// front-end.
//
// Front-ends should inherit from DiagnosticReporter and override reportDiag.
//
// Passes that wish to report diagnostics should use
//   getAnalysisIfAvailable<DiagnosticReporter>()
// to get a pointer to this interface and then call reportDiag to notify the
// front-end of diagnostic issues.
//===----------------------------------------------------------------------===//

#ifndef LLVM_DIAGNOSTICREPORTER_H
#define LLVM_DIAGNOSTICREPORTER_H

#include "llvm/Pass.h"
#include "DebugInfo.h"

namespace llvm {

class DiagnosticReporter : public ImmutablePass {

public:

  // Pass
  static char ID;
  static AnalysisID getClassPassID();

  enum DiagId {
    invalid_kind = 0,
    null_dereference
  };

  DiagnosticReporter();
  virtual ~DiagnosticReporter();

  virtual void reportDiag(DiagId, const Function *, const DILocation *) const;

};

}

#endif
