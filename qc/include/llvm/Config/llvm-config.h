/* include/llvm/Config/llvm-config.h.  Generated from llvm-config.h.in by configure.  */
/*===-- llvm/config/llvm-config.h - llvm configure variable -------*- C -*-===*/
/*                                                                            */
/*                     The LLVM Compiler Infrastructure                       */
/*                                                                            */
/* This file is distributed under the University of Illinois Open Source      */
/* License. See LICENSE.TXT for details.                                      */
/*                                                                            */
/*===----------------------------------------------------------------------===*/

/* This file enumerates all of the llvm variables from configure so that
   they can be in exported headers and won't override package specific
   directives.  This is a C file so we can include it in the llvm-c headers.  */

/* To avoid multiple inclusions of these variables when we include the exported
   headers and config.h, conditionally include these.  */
/* TODO: This is a bit of a hack.  */
#ifndef CONFIG_H

/* Installation directory for binary executables */
#define LLVM_BINDIR "/tmp/bots/hexbotmaster-sles6/hexagon-clang-64/inst/qc/bin"

/* Time at which LLVM was configured */
#define LLVM_CONFIGTIME "Thu Jul 30 17:55:02 CDT 2015"

/* Installation directory for data files */
#define LLVM_DATADIR "/tmp/bots/hexbotmaster-sles6/hexagon-clang-64/inst/qc/share/llvm"

/* Target triple LLVM will generate code for by default */
#define LLVM_DEFAULT_TARGET_TRIPLE "hexagon-unknown-elf"

/* Installation directory for documentation */
#define LLVM_DOCSDIR "/tmp/bots/hexbotmaster-sles6/hexagon-clang-64/inst/qc/share/doc/llvm"

/* Define if threads enabled */
#define LLVM_ENABLE_THREADS 1

/* Installation directory for config files */
#define LLVM_ETCDIR "/tmp/bots/hexbotmaster-sles6/hexagon-clang-64/inst/qc/etc/llvm"

/* Has gcc/MSVC atomic intrinsics */
#define LLVM_HAS_ATOMICS 1

/* Host triple LLVM will be executed on */
#define LLVM_HOSTTRIPLE "x86_64-unknown-linux-gnu"

/* Installation directory for include files */
#define LLVM_INCLUDEDIR "/tmp/bots/hexbotmaster-sles6/hexagon-clang-64/inst/qc/include"

/* Installation directory for .info files */
#define LLVM_INFODIR "/tmp/bots/hexbotmaster-sles6/hexagon-clang-64/inst/qc/info"

/* Installation directory for libraries */
#define LLVM_LIBDIR "/tmp/bots/hexbotmaster-sles6/hexagon-clang-64/inst/qc/lib"

/* Installation directory for man pages */
#define LLVM_MANDIR "/tmp/bots/hexbotmaster-sles6/hexagon-clang-64/inst/qc/man"

/* LLVM architecture name for the native architecture, if available */
#define LLVM_NATIVE_ARCH Hexagon

/* LLVM name for the native AsmParser init function, if available */
/* #undef LLVM_NATIVE_ASMPARSER */

/* LLVM name for the native AsmPrinter init function, if available */
#define LLVM_NATIVE_ASMPRINTER LLVMInitializeHexagonAsmPrinter

/* LLVM name for the native Disassembler init function, if available */
/* #undef LLVM_NATIVE_DISASSEMBLER */

/* LLVM name for the native Target init function, if available */
#define LLVM_NATIVE_TARGET LLVMInitializeHexagonTarget

/* LLVM name for the native TargetInfo init function, if available */
#define LLVM_NATIVE_TARGETINFO LLVMInitializeHexagonTargetInfo

/* LLVM name for the native target MC init function, if available */
#define LLVM_NATIVE_TARGETMC LLVMInitializeHexagonTargetMC

/* Define if this is Unixish platform */
#define LLVM_ON_UNIX 1

/* Define if this is Win32ish platform */
/* #undef LLVM_ON_WIN32 */

/* Define to path to circo program if found or 'echo circo' otherwise */
/* #undef LLVM_PATH_CIRCO */

/* Define to path to dot program if found or 'echo dot' otherwise */
/* #undef LLVM_PATH_DOT */

/* Define to path to dotty program if found or 'echo dotty' otherwise */
/* #undef LLVM_PATH_DOTTY */

/* Define to path to fdp program if found or 'echo fdp' otherwise */
/* #undef LLVM_PATH_FDP */

/* Define to path to Graphviz program if found or 'echo Graphviz' otherwise */
/* #undef LLVM_PATH_GRAPHVIZ */

/* Define to path to gv program if found or 'echo gv' otherwise */
/* #undef LLVM_PATH_GV */

/* Define to path to neato program if found or 'echo neato' otherwise */
/* #undef LLVM_PATH_NEATO */

/* Define to path to twopi program if found or 'echo twopi' otherwise */
/* #undef LLVM_PATH_TWOPI */

/* Define to path to xdot.py program if found or 'echo xdot.py' otherwise */
/* #undef LLVM_PATH_XDOT_PY */

/* Installation prefix directory */
#define LLVM_PREFIX "/tmp/bots/hexbotmaster-sles6/hexagon-clang-64/inst/qc"

/* Vendor name string. */
#define LLVM_VENDOR_NAME "QuIC LLVM Hexagon Clang version"

/* Vendor version string. */
#define LLVM_VENDOR_VERSION "6.4.06"

/* Vendor version GCC string. */
#define LLVM_VENDOR_GCC_VERSION "4.2.1"

/* Major version of the LLVM API */
#define LLVM_VERSION_MAJOR 3

/* Minor version of the LLVM API */
#define LLVM_VERSION_MINOR 2

#endif
