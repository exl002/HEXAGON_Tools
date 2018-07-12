#ifndef SUPPRESSDIAGCONSUMER_H
#define SUPPRESSDIAGCONSUMER_H
#include "clang/Basic/Diagnostic.h"
#include "clang/Lex/Preprocessor.h"

#include <vector>
#include <string>
#include <map>

namespace clang {

typedef std::map<SourceLocation, std::vector<std::string> > AnalyzerIgnores_t;

class UserSuppressions {
public:
  virtual ~UserSuppressions() {}
  virtual const AnalyzerIgnores_t &GetUserSuppressions() = 0;
};

class SuppressDiagConsumer : public DiagnosticConsumer,
                             public CommentHandler,
                             public UserSuppressions {
  const Preprocessor* CurrentPreprocessor;
public:

  AnalyzerIgnores_t AnalyzerIgnores;
  SuppressDiagConsumer() {}
  ~SuppressDiagConsumer() {}
  DiagnosticConsumer *clone(DiagnosticsEngine &Diags) const {
    return new SuppressDiagConsumer();
  }
  void BeginSourceFile(const LangOptions &LangOpts,
                       const Preprocessor *PP);
  void EndSourceFile();
  bool HandleComment(Preprocessor &PP, SourceRange Comment);
  void HandleDiagnostic(DiagnosticsEngine::Level DiagLevel,
                        const Diagnostic &Info) {}
  virtual const AnalyzerIgnores_t &GetUserSuppressions() {
    return AnalyzerIgnores;
  }
};

} // end namespace clang
#endif // SUPPRESSDIAGCONSUMER_H
