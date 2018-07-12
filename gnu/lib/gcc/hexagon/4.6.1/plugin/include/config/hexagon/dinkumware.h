/*-------------------------------------
Controlling the Compilation Driver, gcc
-------------------------------------*/

#define TARGET_OS_CPP_BUILTINS()					      \
  do {									      \
    /* There isn't a standard macro identifying Dinkumware, but we don't want
       to tread on any toes by using something that the official library might
       use (now or in the future). Make something up that we can use in
       internal tests.  */						      \
    builtin_define ("__dinkumware_gnu__");				      \
  } while (0)

/* Link crt0 first. */
#undef STARTFILE_SPEC
#define STARTFILE_SPEC \
  "%{shared: initS.o%s;" \
  ":%{moslib=standalone: crt0_standalone.o%s;" \
  "moslib=*:;: crt0_standalone.o%s} crt0.o%s init.o%s}"

#undef ENDFILE_SPEC
#define ENDFILE_SPEC "%{shared: finiS.o%s;:fini.o%s}"

#undef LINK_GCC_C_SEQUENCE_SPEC
#define LINK_GCC_C_SEQUENCE_SPEC \
  "--start-group %{shared: ;moslib=*: -l%*;: -lstandalone} %L %G --end-group"

#undef LIB_SPEC
#define LIB_SPEC "-lc"


/*--------------------------------
Implicit Calls to Library Routines
--------------------------------*/

/* Dinkumware provides C99 functions.  */
#define TARGET_C99_FUNCTIONS 1


/*----------------------
Miscellaneous Parameters
----------------------*/

#define NO_IMPLICIT_EXTERN_C 1


/*------------
HEXAGON specific
------------*/

#define HEXAGON_DINKUMWARE 1


/* Dinkumware types used in GCC builtins.  */

#undef SIZE_TYPE
#define SIZE_TYPE "unsigned int"

#undef PTRDIFF_TYPE
#define PTRDIFF_TYPE "int"

#undef WCHAR_TYPE
#define WCHAR_TYPE "short unsigned int"

#undef WCHAR_TYPE_SIZE
#define WCHAR_TYPE_SIZE 16

#undef WINT_TYPE
#define WINT_TYPE "int"

#define INT8_TYPE "signed char"
#define INT16_TYPE "short int"
#define INT32_TYPE "int"
#define INT64_TYPE "long long int"

#define UINT8_TYPE "unsigned char"
#define UINT16_TYPE "short unsigned int"
#define UINT32_TYPE "unsigned int"
#define UINT64_TYPE "long long unsigned int"

#define INT_LEAST8_TYPE "signed char"
#define INT_LEAST16_TYPE "short int"
#define INT_LEAST32_TYPE "int"
#define INT_LEAST64_TYPE "long long int"

#define UINT_LEAST8_TYPE "unsigned char"
#define UINT_LEAST16_TYPE "short unsigned int"
#define UINT_LEAST32_TYPE "unsigned int"
#define UINT_LEAST64_TYPE "long long unsigned int"

#define INT_FAST8_TYPE "signed char"
#define INT_FAST16_TYPE "int"
#define INT_FAST32_TYPE "int"
#define INT_FAST64_TYPE "long long int"

#define UINT_FAST8_TYPE "unsigned char"
#define UINT_FAST16_TYPE "unsigned int"
#define UINT_FAST32_TYPE "unsigned int"
#define UINT_FAST64_TYPE "long long unsigned int"

#define INTPTR_TYPE "int"
#define UINTPTR_TYPE "unsigned int"
