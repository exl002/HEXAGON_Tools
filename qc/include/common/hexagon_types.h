/*****************************************************************
# Copyright (c) $Date$ QUALCOMM INCORPORATED.
# All Rights Reserved.
# Modified by QUALCOMM INCORPORATED on $Date$
*****************************************************************/
#ifndef HEXAGON_TYPES_H
#define HEXAGON_TYPES_H

#include <hexagon_protos.h>




/* Old names */

#define HEXAGON_Vect HEXAGON_Vect64
#define HEXAGON_V_GET_D HEXAGON_V64_GET_D
#define HEXAGON_V_GET_UD HEXAGON_V64_GET_UD
#define HEXAGON_V_GET_W0 HEXAGON_V64_GET_W0
#define HEXAGON_V_GET_W1 HEXAGON_V64_GET_W1
#define HEXAGON_V_GET_UW0 HEXAGON_V64_GET_UW0
#define HEXAGON_V_GET_UW1 HEXAGON_V64_GET_UW1
#define HEXAGON_V_GET_H0 HEXAGON_V64_GET_H0
#define HEXAGON_V_GET_H1 HEXAGON_V64_GET_H1
#define HEXAGON_V_GET_H2 HEXAGON_V64_GET_H2
#define HEXAGON_V_GET_H3 HEXAGON_V64_GET_H3
#define HEXAGON_V_GET_UH0 HEXAGON_V64_GET_UH0
#define HEXAGON_V_GET_UH1 HEXAGON_V64_GET_UH1
#define HEXAGON_V_GET_UH2 HEXAGON_V64_GET_UH2
#define HEXAGON_V_GET_UH3 HEXAGON_V64_GET_UH3
#define HEXAGON_V_GET_B0 HEXAGON_V64_GET_B0
#define HEXAGON_V_GET_B1 HEXAGON_V64_GET_B1
#define HEXAGON_V_GET_B2 HEXAGON_V64_GET_B2
#define HEXAGON_V_GET_B3 HEXAGON_V64_GET_B3
#define HEXAGON_V_GET_B4 HEXAGON_V64_GET_B4
#define HEXAGON_V_GET_B5 HEXAGON_V64_GET_B5
#define HEXAGON_V_GET_B6 HEXAGON_V64_GET_B6
#define HEXAGON_V_GET_B7 HEXAGON_V64_GET_B7
#define HEXAGON_V_GET_UB0 HEXAGON_V64_GET_UB0
#define HEXAGON_V_GET_UB1 HEXAGON_V64_GET_UB1
#define HEXAGON_V_GET_UB2 HEXAGON_V64_GET_UB2
#define HEXAGON_V_GET_UB3 HEXAGON_V64_GET_UB3
#define HEXAGON_V_GET_UB4 HEXAGON_V64_GET_UB4
#define HEXAGON_V_GET_UB5 HEXAGON_V64_GET_UB5
#define HEXAGON_V_GET_UB6 HEXAGON_V64_GET_UB6
#define HEXAGON_V_GET_UB7 HEXAGON_V64_GET_UB7
#define HEXAGON_V_PUT_D HEXAGON_V64_PUT_D
#define HEXAGON_V_PUT_W0 HEXAGON_V64_PUT_W0
#define HEXAGON_V_PUT_W1 HEXAGON_V64_PUT_W1
#define HEXAGON_V_PUT_H0 HEXAGON_V64_PUT_H0
#define HEXAGON_V_PUT_H1 HEXAGON_V64_PUT_H1
#define HEXAGON_V_PUT_H2 HEXAGON_V64_PUT_H2
#define HEXAGON_V_PUT_H3 HEXAGON_V64_PUT_H3
#define HEXAGON_V_PUT_B0 HEXAGON_V64_PUT_B0
#define HEXAGON_V_PUT_B1 HEXAGON_V64_PUT_B1
#define HEXAGON_V_PUT_B2 HEXAGON_V64_PUT_B2
#define HEXAGON_V_PUT_B3 HEXAGON_V64_PUT_B3
#define HEXAGON_V_PUT_B4 HEXAGON_V64_PUT_B4
#define HEXAGON_V_PUT_B5 HEXAGON_V64_PUT_B5
#define HEXAGON_V_PUT_B6 HEXAGON_V64_PUT_B6
#define HEXAGON_V_PUT_B7 HEXAGON_V64_PUT_B7
#define HEXAGON_V_CREATE_D HEXAGON_V64_CREATE_D
#define HEXAGON_V_CREATE_W HEXAGON_V64_CREATE_W
#define HEXAGON_V_CREATE_H HEXAGON_V64_CREATE_H
#define HEXAGON_V_CREATE_B HEXAGON_V64_CREATE_B




#ifdef __cplusplus
  #define HEXAGON_VectC HEXAGON_Vect64C
#endif /* __cplusplus */




/* 64 Bit Vectors */

typedef long long __attribute__((__may_alias__)) HEXAGON_Vect64;




/* Extract doubleword macros */

#define HEXAGON_V64_GET_D(v) \
  (v)
#define HEXAGON_V64_GET_UD(v) \
  ((unsigned long long) (v))




/* Extract word macros */

#if defined(__GNUC__) && !defined(__HEXAGON_OPEN64__)

  #define HEXAGON_V64_GET_W0(v) \
    __extension__ \
    ({ \
      union {long long d; int w[2];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.w[0]; \
    })
  #define HEXAGON_V64_GET_W1(v) \
    __extension__ \
    ({ \
      union {long long d; int w[2];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.w[1]; \
    })
  #define HEXAGON_V64_GET_UW0(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned int uw[2];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.uw[0]; \
    })
  #define HEXAGON_V64_GET_UW1(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned int uw[2];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.uw[1]; \
    })

#else /* !(__GNUC__ && __HEXAGON_OPEN64__) */

  #define HEXAGON_V64_GET_W0(v) \
    ((int) (v))
  #define HEXAGON_V64_GET_W1(v) \
    ((int) ((v) >> 32LL))
  #define HEXAGON_V64_GET_UW0(v) \
    ((unsigned int) (v))
  #define HEXAGON_V64_GET_UW1(v) \
    ((unsigned int) ((v) >> 32LL))

#endif /* !(__GNUC__ && __HEXAGON_OPEN64__) */




/* Extract half word macros */

#if defined(__GNUC__) && !defined(__HEXAGON_OPEN64__)

  #define HEXAGON_V64_GET_H0(v) \
    __extension__ \
    ({ \
      union {long long d; short h[4];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.h[0]; \
    })
  #define HEXAGON_V64_GET_H1(v) \
    __extension__ \
    ({ \
      union {long long d; short h[4];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.h[1]; \
    })
  #define HEXAGON_V64_GET_H2(v) \
    __extension__ \
    ({ \
      union {long long d; short h[4];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.h[2]; \
    })
  #define HEXAGON_V64_GET_H3(v) \
    __extension__ \
    ({ \
      union {long long d; short h[4];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.h[3]; \
    })
  #define HEXAGON_V64_GET_UH0(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned short uh[4];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.uh[0]; \
    })
  #define HEXAGON_V64_GET_UH1(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned short uh[4];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.uh[1]; \
    })
  #define HEXAGON_V64_GET_UH2(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned short uh[4];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.uh[2]; \
    })
  #define HEXAGON_V64_GET_UH3(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned short uh[4];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.uh[3]; \
    })

#else /* !(__GNUC__ && __HEXAGON_OPEN64__) */

  #define HEXAGON_V64_GET_H0(v) \
    ((short) ((v)))
  #define HEXAGON_V64_GET_H1(v) \
    ((short) (((v)) >> 16LL))
  #define HEXAGON_V64_GET_H2(v) \
    ((short) ((v) >> 32LL))
  #define HEXAGON_V64_GET_H3(v) \
    ((short) ((v) >> 48LL))
  #define HEXAGON_V64_GET_UH0(v) \
    ((unsigned short) ((v)))
  #define HEXAGON_V64_GET_UH1(v) \
    ((unsigned short) (((v)) >> 16LL))
  #define HEXAGON_V64_GET_UH2(v) \
    ((unsigned short) ((v) >> 32LL))
  #define HEXAGON_V64_GET_UH3(v) \
    ((unsigned short) ((v) >> 48LL))

#endif /* !(__GNUC__ && __HEXAGON_OPEN64__) */




/* Extract byte macros */

#if defined(__GNUC__) && !defined(__HEXAGON_OPEN64__)

  #define HEXAGON_V64_GET_B0(v) \
    __extension__ \
    ({ \
      union {long long d; signed char b[8];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.b[0]; \
    })
  #define HEXAGON_V64_GET_B1(v) \
    __extension__ \
    ({ \
      union {long long d; signed char b[8];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.b[1]; \
    })
  #define HEXAGON_V64_GET_B2(v) \
    __extension__ \
    ({ \
      union {long long d; signed char b[8];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.b[2]; \
    })
  #define HEXAGON_V64_GET_B3(v) \
    __extension__ \
    ({ \
      union {long long d; signed char b[8];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.b[3]; \
    })
  #define HEXAGON_V64_GET_B4(v) \
    __extension__ \
    ({ \
      union {long long d; signed char b[8];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.b[4]; \
    })
  #define HEXAGON_V64_GET_B5(v) \
    __extension__ \
    ({ \
      union {long long d; signed char b[8];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.b[5]; \
    })
  #define HEXAGON_V64_GET_B6(v) \
    __extension__ \
    ({ \
      union {long long d; signed char b[8];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.b[6]; \
    })
  #define HEXAGON_V64_GET_B7(v) \
    __extension__ \
    ({ \
      union {long long d; signed char b[8];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.b[7]; \
    })
  #define HEXAGON_V64_GET_UB0(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned char ub[8];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.ub[0]; \
    })
  #define HEXAGON_V64_GET_UB1(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned char ub[8];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.ub[1]; \
    })
  #define HEXAGON_V64_GET_UB2(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned char ub[8];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.ub[2]; \
    })
  #define HEXAGON_V64_GET_UB3(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned char ub[8];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.ub[3]; \
    })
  #define HEXAGON_V64_GET_UB4(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned char ub[8];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.ub[4]; \
    })
  #define HEXAGON_V64_GET_UB5(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned char ub[8];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.ub[5]; \
    })
  #define HEXAGON_V64_GET_UB6(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned char ub[8];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.ub[6]; \
    })
  #define HEXAGON_V64_GET_UB7(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned char ub[8];} _HEXAGON_V64_internal_union; \
      _HEXAGON_V64_internal_union.d = (v); \
      _HEXAGON_V64_internal_union.ub[7]; \
    })

#else /* !(__GNUC__ && __HEXAGON_OPEN64__) */

  #define HEXAGON_V64_GET_B0(v) \
    ((signed char) ((v)))
  #define HEXAGON_V64_GET_B1(v) \
    ((signed char) (((v)) >> 8LL))
  #define HEXAGON_V64_GET_B2(v) \
    ((signed char) (((v)) >> 16LL))
  #define HEXAGON_V64_GET_B3(v) \
    ((signed char) (((v)) >> 24LL))
  #define HEXAGON_V64_GET_B4(v) \
    ((signed char) ((v) >> 32LL))
  #define HEXAGON_V64_GET_B5(v) \
    ((signed char) ((v) >> 40LL))
  #define HEXAGON_V64_GET_B6(v) \
    ((signed char) ((v) >> 48LL))
  #define HEXAGON_V64_GET_B7(v) \
    ((signed char) ((v) >> 56LL))
  #define HEXAGON_V64_GET_UB0(v) \
    ((unsigned char) ((v)))
  #define HEXAGON_V64_GET_UB1(v) \
    ((unsigned char) (((v)) >> 8LL))
  #define HEXAGON_V64_GET_UB2(v) \
    ((unsigned char) (((v)) >> 16LL))
  #define HEXAGON_V64_GET_UB3(v) \
    ((unsigned char) (((v)) >> 24LL))
  #define HEXAGON_V64_GET_UB4(v) \
    ((unsigned char) ((v) >> 32LL))
  #define HEXAGON_V64_GET_UB5(v) \
    ((unsigned char) ((v) >> 40LL))
  #define HEXAGON_V64_GET_UB6(v) \
    ((unsigned char) ((v) >> 48LL))
  #define HEXAGON_V64_GET_UB7(v) \
    ((unsigned char) ((v) >> 56LL))

#endif /* !(__GNUC__ && __HEXAGON_OPEN64__) */




/* NOTE: All set macros return a HEXAGON_Vect64 type */

/* Set doubleword macro */

#define HEXAGON_V64_PUT_D(v, new) (new)




/* Set word macros */

#ifdef __hexagon__

  #if defined(__GNUC__) && !defined(__HEXAGON_OPEN64__)

    #define HEXAGON_V64_PUT_W0(v, new) \
      __extension__ \
      ({ \
        union {long long d; int w[2];} _HEXAGON_V64_internal_union; \
        _HEXAGON_V64_internal_union.d = (v); \
        _HEXAGON_V64_internal_union.w[0] = (new); \
        _HEXAGON_V64_internal_union.d; \
      })
    #define HEXAGON_V64_PUT_W1(v, new) \
      __extension__ \
      ({ \
        union {long long d; int w[2];} _HEXAGON_V64_internal_union; \
        _HEXAGON_V64_internal_union.d = (v); \
        _HEXAGON_V64_internal_union.w[1] = (new); \
        _HEXAGON_V64_internal_union.d; \
      })

  #else /* !(__GNUC__ && __HEXAGON_OPEN64__) */

    #define HEXAGON_V64_PUT_W0(v, new) HEXAGON_P_insert_PII(v, new, 32, 0)
    #define HEXAGON_V64_PUT_W1(v, new) HEXAGON_P_insert_PII(v, new, 32, 32)

  #endif /* !(__GNUC__ && __HEXAGON_OPEN64__) */

#else /* !__hexagon__ */

  #define HEXAGON_V64_PUT_W0(v, new) \
    (((v) & 0xffffffff00000000LL) | ((HEXAGON_Vect64) ((unsigned int) (new))))
  #define HEXAGON_V64_PUT_W1(v, new) \
    (((v) & 0x00000000ffffffffLL) | (((HEXAGON_Vect64) (new)) << 32LL))

#endif /* !__hexagon__ */




/* Set half word macros */

#ifdef __hexagon__

  #if defined(__GNUC__) && !defined(__HEXAGON_OPEN64__)

    #define HEXAGON_V64_PUT_H0(v, new) \
      __extension__ \
      ({ \
        union {long long d; short h[4];} _HEXAGON_V64_internal_union; \
        _HEXAGON_V64_internal_union.d = (v); \
        _HEXAGON_V64_internal_union.h[0] = (new); \
        _HEXAGON_V64_internal_union.d; \
      })
    #define HEXAGON_V64_PUT_H1(v, new) \
      __extension__ \
      ({ \
        union {long long d; short h[4];} _HEXAGON_V64_internal_union; \
        _HEXAGON_V64_internal_union.d = (v); \
        _HEXAGON_V64_internal_union.h[1] = (new); \
        _HEXAGON_V64_internal_union.d; \
      })
    #define HEXAGON_V64_PUT_H2(v, new) \
      __extension__ \
      ({ \
        union {long long d; short h[4];} _HEXAGON_V64_internal_union; \
        _HEXAGON_V64_internal_union.d = (v); \
        _HEXAGON_V64_internal_union.h[2] = (new); \
        _HEXAGON_V64_internal_union.d; \
      })
    #define HEXAGON_V64_PUT_H3(v, new) \
      __extension__ \
      ({ \
        union {long long d; short h[4];} _HEXAGON_V64_internal_union; \
        _HEXAGON_V64_internal_union.d = (v); \
        _HEXAGON_V64_internal_union.h[3] = (new); \
        _HEXAGON_V64_internal_union.d; \
      })

  #else /* !(__GNUC__ && __HEXAGON_OPEN64__) */

    #define HEXAGON_V64_PUT_H0(v, new)  HEXAGON_P_insert_PII(v, new, 16, 0)
    #define HEXAGON_V64_PUT_H1(v, new)  HEXAGON_P_insert_PII(v, new, 16, 16)
    #define HEXAGON_V64_PUT_H2(v, new)  HEXAGON_P_insert_PII(v, new, 16, 32)
    #define HEXAGON_V64_PUT_H3(v, new)  HEXAGON_P_insert_PII(v, new, 16, 48)

  #endif /* !(__GNUC__ && __HEXAGON_OPEN64__) */

#else /* !__hexagon__ */

  #define HEXAGON_V64_PUT_H0(v, new) \
    (((v) & 0xffffffffffff0000LL) | ((HEXAGON_Vect64) ((unsigned short) (new))))
  #define HEXAGON_V64_PUT_H1(v, new) \
    (((v) & 0xffffffff0000ffffLL) | (((HEXAGON_Vect64) ((unsigned short) (new))) << 16LL))
  #define HEXAGON_V64_PUT_H2(v, new) \
    (((v) & 0xffff0000ffffffffLL) | (((HEXAGON_Vect64) ((unsigned short) (new))) << 32LL))
  #define HEXAGON_V64_PUT_H3(v, new) \
    (((v) & 0x0000ffffffffffffLL) | (((HEXAGON_Vect64) (new)) << 48LL))

#endif /* !__hexagon__ */




/* Set byte macros */

#ifdef __hexagon__

  #if defined(__GNUC__) && !defined(__HEXAGON_OPEN64__)

    #define HEXAGON_V64_PUT_B0(v, new) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _HEXAGON_V64_internal_union; \
        _HEXAGON_V64_internal_union.d = (v); \
        _HEXAGON_V64_internal_union.b[0] = (new); \
        _HEXAGON_V64_internal_union.d; \
      })
    #define HEXAGON_V64_PUT_B1(v, new) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _HEXAGON_V64_internal_union; \
        _HEXAGON_V64_internal_union.d = (v); \
        _HEXAGON_V64_internal_union.b[1] = (new); \
        _HEXAGON_V64_internal_union.d; \
      })
    #define HEXAGON_V64_PUT_B2(v, new) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _HEXAGON_V64_internal_union; \
        _HEXAGON_V64_internal_union.d = (v); \
        _HEXAGON_V64_internal_union.b[2] = (new); \
        _HEXAGON_V64_internal_union.d; \
      })
    #define HEXAGON_V64_PUT_B3(v, new) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _HEXAGON_V64_internal_union; \
        _HEXAGON_V64_internal_union.d = (v); \
        _HEXAGON_V64_internal_union.b[3] = (new); \
        _HEXAGON_V64_internal_union.d; \
      })
    #define HEXAGON_V64_PUT_B4(v, new) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _HEXAGON_V64_internal_union; \
        _HEXAGON_V64_internal_union.d = (v); \
        _HEXAGON_V64_internal_union.b[4] = (new); \
        _HEXAGON_V64_internal_union.d; \
      })
    #define HEXAGON_V64_PUT_B5(v, new) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _HEXAGON_V64_internal_union; \
        _HEXAGON_V64_internal_union.d = (v); \
        _HEXAGON_V64_internal_union.b[5] = (new); \
        _HEXAGON_V64_internal_union.d; \
      })
    #define HEXAGON_V64_PUT_B6(v, new) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _HEXAGON_V64_internal_union; \
        _HEXAGON_V64_internal_union.d = (v); \
        _HEXAGON_V64_internal_union.b[6] = (new); \
        _HEXAGON_V64_internal_union.d; \
      })
    #define HEXAGON_V64_PUT_B7(v, new) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _HEXAGON_V64_internal_union; \
        _HEXAGON_V64_internal_union.d = (v); \
        _HEXAGON_V64_internal_union.b[7] = (new); \
        _HEXAGON_V64_internal_union.d; \
      })

  #else /* !(__GNUC__ && __HEXAGON_OPEN64__) */

    #define HEXAGON_V64_PUT_B0(v, new)  HEXAGON_P_insert_PII(v, new, 8, 0)
    #define HEXAGON_V64_PUT_B1(v, new)  HEXAGON_P_insert_PII(v, new, 8, 8)
    #define HEXAGON_V64_PUT_B2(v, new)  HEXAGON_P_insert_PII(v, new, 8, 16)
    #define HEXAGON_V64_PUT_B3(v, new)  HEXAGON_P_insert_PII(v, new, 8, 24)
    #define HEXAGON_V64_PUT_B4(v, new)  HEXAGON_P_insert_PII(v, new, 8, 32)
    #define HEXAGON_V64_PUT_B5(v, new)  HEXAGON_P_insert_PII(v, new, 8, 40)
    #define HEXAGON_V64_PUT_B6(v, new)  HEXAGON_P_insert_PII(v, new, 8, 48)
    #define HEXAGON_V64_PUT_B7(v, new)  HEXAGON_P_insert_PII(v, new, 8, 56)

  #endif /* !(__GNUC__ && __HEXAGON_OPEN64__) */

#else /* !__hexagon__ */

  #define HEXAGON_V64_PUT_B0(v, new) \
    (((v) & 0xffffffffffffff00LL) | ((HEXAGON_Vect64) ((unsigned char) (new))))
  #define HEXAGON_V64_PUT_B1(v, new) \
    (((v) & 0xffffffffffff00ffLL) | (((HEXAGON_Vect64) ((unsigned char) (new))) << 8LL))
  #define HEXAGON_V64_PUT_B2(v, new) \
    (((v) & 0xffffffffff00ffffLL) | (((HEXAGON_Vect64) ((unsigned char) (new))) << 16LL))
  #define HEXAGON_V64_PUT_B3(v, new) \
    (((v) & 0xffffffff00ffffffLL) | (((HEXAGON_Vect64) ((unsigned char) (new))) << 24LL))
  #define HEXAGON_V64_PUT_B4(v, new) \
    (((v) & 0xffffff00ffffffffLL) | (((HEXAGON_Vect64) ((unsigned char) (new))) << 32LL))
  #define HEXAGON_V64_PUT_B5(v, new) \
    (((v) & 0xffff00ffffffffffLL) | (((HEXAGON_Vect64) ((unsigned char) (new))) << 40LL))
  #define HEXAGON_V64_PUT_B6(v, new) \
    (((v) & 0xff00ffffffffffffLL) | (((HEXAGON_Vect64) ((unsigned char) (new))) << 48LL))
  #define HEXAGON_V64_PUT_B7(v, new) \
    (((v) & 0x00ffffffffffffffLL) | (((HEXAGON_Vect64) (new)) << 56LL))

#endif /* !__hexagon__ */




/* NOTE: All create macros return a HEXAGON_Vect64 type */

/* Create from a doubleword */

#define HEXAGON_V64_CREATE_D(d) (d)




/* Create from words */

#ifdef __hexagon__

  #if defined(__GNUC__) && !defined(__HEXAGON_OPEN64__)

    #define HEXAGON_V64_CREATE_W(w1, w0) \
      __extension__ \
      ({ \
        union {long long d; int w[2];} _HEXAGON_V64_internal_union; \
        _HEXAGON_V64_internal_union.w[0] = (w0); \
        _HEXAGON_V64_internal_union.w[1] = (w1); \
        _HEXAGON_V64_internal_union.d; \
      })

  #else /* !(__GNUC__ && __HEXAGON_OPEN64__) */

    #define HEXAGON_V64_CREATE_W(w1, w0) HEXAGON_P_combine_RR(w1, w0)

  #endif /* !(__GNUC__ && __HEXAGON_OPEN64__) */

#else /* !__hexagon__ */

  #define HEXAGON_V64_CREATE_W(w1, w0) \
    ((((HEXAGON_Vect64) (w1)) << 32LL) | ((HEXAGON_Vect64) ((w0) & 0xffffffff)))

#endif /* !__hexagon__ */




/* Create from half words */

#ifdef __hexagon__

  #if defined(__GNUC__) && !defined(__HEXAGON_OPEN64__)

    #define HEXAGON_V64_CREATE_H(h3, h2, h1, h0) \
      __extension__ \
      ({ \
        union {long long d; short h[4];} _HEXAGON_V64_internal_union; \
        _HEXAGON_V64_internal_union.h[0] = (h0); \
        _HEXAGON_V64_internal_union.h[1] = (h1); \
        _HEXAGON_V64_internal_union.h[2] = (h2); \
        _HEXAGON_V64_internal_union.h[3] = (h3); \
        _HEXAGON_V64_internal_union.d; \
      })

  #else /* !(__GNUC__ && __HEXAGON_OPEN64__) */

    #define HEXAGON_V64_CREATE_H(h3, h2, h1, h0) \
      HEXAGON_P_combine_RR(HEXAGON_R_combine_RlRl(h3, h2), HEXAGON_R_combine_RlRl(h1, h0))

  #endif /* !(__GNUC__ && __HEXAGON_OPEN64__) */

#else /* !__hexagon__ */

  #define HEXAGON_V64_CREATE_H(h3, h2, h1, h0) \
    ((((HEXAGON_Vect64) (h3)) << 48LL) | \
     (((HEXAGON_Vect64) ((h2) & 0xffff)) << 32LL) | \
     (((HEXAGON_Vect64) ((h1) & 0xffff)) << 16LL) | \
     ((HEXAGON_Vect64) ((h0) & 0xffff)))

#endif /* !__hexagon__ */




/* Create from bytes */

#ifdef __hexagon__

  #if defined(__GNUC__) && !defined(__HEXAGON_OPEN64__)

    #define HEXAGON_V64_CREATE_B(b7, b6, b5, b4, b3, b2, b1, b0) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _HEXAGON_V64_internal_union; \
        _HEXAGON_V64_internal_union.b[0] = (b0); \
        _HEXAGON_V64_internal_union.b[1] = (b1); \
        _HEXAGON_V64_internal_union.b[2] = (b2); \
        _HEXAGON_V64_internal_union.b[3] = (b3); \
        _HEXAGON_V64_internal_union.b[4] = (b4); \
        _HEXAGON_V64_internal_union.b[5] = (b5); \
        _HEXAGON_V64_internal_union.b[6] = (b6); \
        _HEXAGON_V64_internal_union.b[7] = (b7); \
        _HEXAGON_V64_internal_union.d; \
      })

  #else /* !(__GNUC__ && __HEXAGON_OPEN64__) */

    #define HEXAGON_V64_CREATE_B(b7, b6, b5, b4, b3, b2, b1, b0) \
      HEXAGON_V64_PUT_B0(HEXAGON_V64_PUT_B1(HEXAGON_V64_PUT_B2(HEXAGON_V64_PUT_B3(HEXAGON_V64_PUT_B4(HEXAGON_V64_PUT_B5(HEXAGON_V64_PUT_B6(HEXAGON_V64_PUT_B7(0, b7), b6), b5), b4), b3), b2), b1), b0)

  #endif /* !(__GNUC__ && __HEXAGON_OPEN64__) */

#else /* !__hexagon__ */

  #define HEXAGON_V64_CREATE_B(b7, b6, b5, b4, b3, b2, b1, b0) \
    ((((HEXAGON_Vect64) (b7)) << 56LL) | \
     (((HEXAGON_Vect64) ((b6) & 0xff)) << 48LL) | \
     (((HEXAGON_Vect64) ((b5) & 0xff)) << 40LL) | \
     (((HEXAGON_Vect64) ((b4) & 0xff)) << 32LL) | \
     (((HEXAGON_Vect64) ((b3) & 0xff)) << 24LL) | \
     (((HEXAGON_Vect64) ((b2) & 0xff)) << 16LL) | \
     (((HEXAGON_Vect64) ((b1) & 0xff)) << 8LL) | \
     ((HEXAGON_Vect64) ((b0) & 0xff)))

#endif /* !__hexagon__ */




#ifdef __cplusplus

class HEXAGON_Vect64C {
  public:
    // Constructors
    HEXAGON_Vect64C(long long d = 0) : data(d) {};
    HEXAGON_Vect64C(int w1, int w0) : data(HEXAGON_V64_CREATE_W(w1, w0)) {};
    HEXAGON_Vect64C(short h3, short h2, short h1, short h0)
      : data(HEXAGON_V64_CREATE_H(h3, h2, h1, h0)) {};
    HEXAGON_Vect64C(signed char b7, signed char b6, signed char b5, signed char b4,
              signed char b3, signed char b2, signed char b1, signed char b0)
      : data(HEXAGON_V64_CREATE_B(b7, b6, b5, b4, b3, b2, b1, b0)) {};
    HEXAGON_Vect64C(const HEXAGON_Vect64C & v) : data(v.data) {};

    HEXAGON_Vect64C& operator = (const HEXAGON_Vect64C & v) {
      data = v.data;
      return *this;
    };

    operator long long() { return data; };

    // Extract doubleword methods
    long long D(void) { return HEXAGON_V64_GET_D(data); };
    unsigned long long UD(void) { return HEXAGON_V64_GET_UD(data); };

    // Extract word methods
    int W0(void) { return HEXAGON_V64_GET_W0(data); };
    int W1(void) { return HEXAGON_V64_GET_W1(data); };
    unsigned int UW0(void) { return HEXAGON_V64_GET_UW0(data); };
    unsigned int UW1(void) { return HEXAGON_V64_GET_UW1(data); };

    // Extract half word methods
    short H0(void) { return HEXAGON_V64_GET_H0(data); };
    short H1(void) { return HEXAGON_V64_GET_H1(data); };
    short H2(void) { return HEXAGON_V64_GET_H2(data); };
    short H3(void) { return HEXAGON_V64_GET_H3(data); };
    unsigned short UH0(void) { return HEXAGON_V64_GET_UH0(data); };
    unsigned short UH1(void) { return HEXAGON_V64_GET_UH1(data); };
    unsigned short UH2(void) { return HEXAGON_V64_GET_UH2(data); };
    unsigned short UH3(void) { return HEXAGON_V64_GET_UH3(data); };

    // Extract byte methods
    signed char B0(void) { return HEXAGON_V64_GET_B0(data); };
    signed char B1(void) { return HEXAGON_V64_GET_B1(data); };
    signed char B2(void) { return HEXAGON_V64_GET_B2(data); };
    signed char B3(void) { return HEXAGON_V64_GET_B3(data); };
    signed char B4(void) { return HEXAGON_V64_GET_B4(data); };
    signed char B5(void) { return HEXAGON_V64_GET_B5(data); };
    signed char B6(void) { return HEXAGON_V64_GET_B6(data); };
    signed char B7(void) { return HEXAGON_V64_GET_B7(data); };
    unsigned char UB0(void) { return HEXAGON_V64_GET_UB0(data); };
    unsigned char UB1(void) { return HEXAGON_V64_GET_UB1(data); };
    unsigned char UB2(void) { return HEXAGON_V64_GET_UB2(data); };
    unsigned char UB3(void) { return HEXAGON_V64_GET_UB3(data); };
    unsigned char UB4(void) { return HEXAGON_V64_GET_UB4(data); };
    unsigned char UB5(void) { return HEXAGON_V64_GET_UB5(data); };
    unsigned char UB6(void) { return HEXAGON_V64_GET_UB6(data); };
    unsigned char UB7(void) { return HEXAGON_V64_GET_UB7(data); };

    // NOTE: All set methods return a HEXAGON_Vect64C type

    // Set doubleword method
    HEXAGON_Vect64C D(long long d) { return HEXAGON_Vect64C(HEXAGON_V64_PUT_D(data, d)); };

    // Set word methods
    HEXAGON_Vect64C W0(int w) { return HEXAGON_Vect64C(HEXAGON_V64_PUT_W0(data, w)); };
    HEXAGON_Vect64C W1(int w) { return HEXAGON_Vect64C(HEXAGON_V64_PUT_W1(data, w)); };

    // Set half word methods
    HEXAGON_Vect64C H0(short h) { return HEXAGON_Vect64C(HEXAGON_V64_PUT_H0(data, h)); };
    HEXAGON_Vect64C H1(short h) { return HEXAGON_Vect64C(HEXAGON_V64_PUT_H1(data, h)); };
    HEXAGON_Vect64C H2(short h) { return HEXAGON_Vect64C(HEXAGON_V64_PUT_H2(data, h)); };
    HEXAGON_Vect64C H3(short h) { return HEXAGON_Vect64C(HEXAGON_V64_PUT_H3(data, h)); };

    // Set byte methods
    HEXAGON_Vect64C B0(signed char b) { return HEXAGON_Vect64C(HEXAGON_V64_PUT_B0(data, b)); };
    HEXAGON_Vect64C B1(signed char b) { return HEXAGON_Vect64C(HEXAGON_V64_PUT_B1(data, b)); };
    HEXAGON_Vect64C B2(signed char b) { return HEXAGON_Vect64C(HEXAGON_V64_PUT_B2(data, b)); };
    HEXAGON_Vect64C B3(signed char b) { return HEXAGON_Vect64C(HEXAGON_V64_PUT_B3(data, b)); };
    HEXAGON_Vect64C B4(signed char b) { return HEXAGON_Vect64C(HEXAGON_V64_PUT_B4(data, b)); };
    HEXAGON_Vect64C B5(signed char b) { return HEXAGON_Vect64C(HEXAGON_V64_PUT_B5(data, b)); };
    HEXAGON_Vect64C B6(signed char b) { return HEXAGON_Vect64C(HEXAGON_V64_PUT_B6(data, b)); };
    HEXAGON_Vect64C B7(signed char b) { return HEXAGON_Vect64C(HEXAGON_V64_PUT_B7(data, b)); };

  private:
    long long data;
};

#endif /* __cplusplus */




/* 32 Bit Vectors */

typedef int HEXAGON_Vect32;




/* Extract word macros */

#define HEXAGON_V32_GET_W(v) (v)
#define HEXAGON_V32_GET_UW(v) ((unsigned int) (v))




/* Extract half word macros */

#if defined(__GNUC__) && !defined(__HEXAGON_OPEN64__)

  #define HEXAGON_V32_GET_H0(v) \
    __extension__ \
    ({ \
      union {int w; short h[2];} _HEXAGON_V32_internal_union; \
      _HEXAGON_V32_internal_union.w = (v); \
      _HEXAGON_V32_internal_union.h[0]; \
    })
  #define HEXAGON_V32_GET_H1(v) \
    __extension__ \
    ({ \
      union {int w; short h[2];} _HEXAGON_V32_internal_union; \
      _HEXAGON_V32_internal_union.w = (v); \
      _HEXAGON_V32_internal_union.h[1]; \
    })
  #define HEXAGON_V32_GET_UH0(v) \
    __extension__ \
    ({ \
      union {int w; unsigned short uh[2];} _HEXAGON_V32_internal_union; \
      _HEXAGON_V32_internal_union.w = (v); \
      _HEXAGON_V32_internal_union.uh[0]; \
    })
  #define HEXAGON_V32_GET_UH1(v) \
    __extension__ \
    ({ \
      union {int w; unsigned short uh[2];} _HEXAGON_V32_internal_union; \
      _HEXAGON_V32_internal_union.w = (v); \
      _HEXAGON_V32_internal_union.uh[1]; \
    })

#else /* !(__GNUC__ && __HEXAGON_OPEN64__) */

  #define HEXAGON_V32_GET_H0(v) \
    ((short) (v))
  #define HEXAGON_V32_GET_H1(v) \
    ((short) ((v) >> 16))
  #define HEXAGON_V32_GET_UH0(v) \
    ((unsigned short) (v))
  #define HEXAGON_V32_GET_UH1(v) \
    ((unsigned short) ((v) >> 16))

#endif /* !(__GNUC__ && __HEXAGON_OPEN64__) */





/* Extract byte macros */

#if defined(__GNUC__) && !defined(__HEXAGON_OPEN64__)

  #define HEXAGON_V32_GET_B0(v) \
    __extension__ \
    ({ \
      union {int w; signed char b[4];} _HEXAGON_V32_internal_union; \
      _HEXAGON_V32_internal_union.w = (v); \
      _HEXAGON_V32_internal_union.b[0]; \
    })
  #define HEXAGON_V32_GET_B1(v) \
    __extension__ \
    ({ \
      union {int w; signed char b[4];} _HEXAGON_V32_internal_union; \
      _HEXAGON_V32_internal_union.w = (v); \
      _HEXAGON_V32_internal_union.b[1]; \
    })
  #define HEXAGON_V32_GET_B2(v) \
    __extension__ \
    ({ \
      union {int w; signed char b[4];} _HEXAGON_V32_internal_union; \
      _HEXAGON_V32_internal_union.w = (v); \
      _HEXAGON_V32_internal_union.b[2]; \
    })
  #define HEXAGON_V32_GET_B3(v) \
    __extension__ \
    ({ \
      union {int w; signed char b[4];} _HEXAGON_V32_internal_union; \
      _HEXAGON_V32_internal_union.w = (v); \
      _HEXAGON_V32_internal_union.b[3]; \
    })
  #define HEXAGON_V32_GET_UB0(v) \
    __extension__ \
    ({ \
      union {int w; unsigned char ub[4];} _HEXAGON_V32_internal_union; \
      _HEXAGON_V32_internal_union.w = (v); \
      _HEXAGON_V32_internal_union.ub[0]; \
    })
  #define HEXAGON_V32_GET_UB1(v) \
    __extension__ \
    ({ \
      union {int w; unsigned char ub[4];} _HEXAGON_V32_internal_union; \
      _HEXAGON_V32_internal_union.w = (v); \
      _HEXAGON_V32_internal_union.ub[1]; \
    })
  #define HEXAGON_V32_GET_UB2(v) \
    __extension__ \
    ({ \
      union {int w; unsigned char ub[4];} _HEXAGON_V32_internal_union; \
      _HEXAGON_V32_internal_union.w = (v); \
      _HEXAGON_V32_internal_union.ub[2]; \
    })
  #define HEXAGON_V32_GET_UB3(v) \
    __extension__ \
    ({ \
      union {int w; unsigned char ub[4];} _HEXAGON_V32_internal_union; \
      _HEXAGON_V32_internal_union.w = (v); \
      _HEXAGON_V32_internal_union.ub[3]; \
    })

#else /* !(__GNUC__ && __HEXAGON_OPEN64__) */

  #define HEXAGON_V32_GET_B0(v) \
    ((signed char) (v))
  #define HEXAGON_V32_GET_B1(v) \
    ((signed char) ((v) >> 8))
  #define HEXAGON_V32_GET_B2(v) \
    ((signed char) ((v) >> 16))
  #define HEXAGON_V32_GET_B3(v) \
    ((signed char) ((v) >> 24))
  #define HEXAGON_V32_GET_UB0(v) \
    ((unsigned char) (v))
  #define HEXAGON_V32_GET_UB1(v) \
    ((unsigned char) ((v) >> 8))
  #define HEXAGON_V32_GET_UB2(v) \
    ((unsigned char) ((v) >> 16))
  #define HEXAGON_V32_GET_UB3(v) \
    ((unsigned char) ((v) >> 24))

#endif /* !(__GNUC__ && __HEXAGON_OPEN64__) */




/* NOTE: All set macros return a HEXAGON_Vect32 type */

/* Set word macro */

#define HEXAGON_V32_PUT_W(v, new) (new)




/* Set half word macros */

#ifdef __hexagon__

  #if defined(__GNUC__) && !defined(__HEXAGON_OPEN64__)

    #define HEXAGON_V32_PUT_H0(v, new) \
      __extension__ \
      ({ \
        union {int w; short h[2];} _HEXAGON_V32_internal_union; \
        _HEXAGON_V32_internal_union.w = (v); \
        _HEXAGON_V32_internal_union.h[0] = (new); \
        _HEXAGON_V32_internal_union.w; \
      })
    #define HEXAGON_V32_PUT_H1(v, new) \
      __extension__ \
      ({ \
        union {int w; short h[2];} _HEXAGON_V32_internal_union; \
        _HEXAGON_V32_internal_union.w = (v); \
        _HEXAGON_V32_internal_union.h[1] = (new); \
        _HEXAGON_V32_internal_union.w; \
      })

  #else /* !(__GNUC__ && __HEXAGON_OPEN64__) */

    #define HEXAGON_V32_PUT_H0(v, new)  HEXAGON_R_insert_RII(v, new, 16, 0)
    #define HEXAGON_V32_PUT_H1(v, new)  HEXAGON_R_insert_RII(v, new, 16, 16)

  #endif /* !(__GNUC__ && __HEXAGON_OPEN64__) */

#else /* !__hexagon__ */

  #define HEXAGON_V32_PUT_H0(v, new) \
    (((v) & 0xffff0000) | ((HEXAGON_Vect32) ((unsigned short) (new))))
  #define HEXAGON_V32_PUT_H1(v, new) \
    (((v) & 0x0000ffff) | (((HEXAGON_Vect32) (new)) << 16))

#endif /* !__hexagon__ */




/* Set byte macros */

#ifdef __hexagon__

  #if defined(__GNUC__) && !defined(__HEXAGON_OPEN64__)

    #define HEXAGON_V32_PUT_B0(v, new) \
      __extension__ \
      ({ \
        union {int w; char b[4];} _HEXAGON_V32_internal_union; \
        _HEXAGON_V32_internal_union.w = (v); \
        _HEXAGON_V32_internal_union.b[0] = (new); \
        _HEXAGON_V32_internal_union.w; \
      })
    #define HEXAGON_V32_PUT_B1(v, new) \
      __extension__ \
      ({ \
        union {int w; char b[4];} _HEXAGON_V32_internal_union; \
        _HEXAGON_V32_internal_union.w = (v); \
        _HEXAGON_V32_internal_union.b[1] = (new); \
        _HEXAGON_V32_internal_union.w; \
      })
    #define HEXAGON_V32_PUT_B2(v, new) \
      __extension__ \
      ({ \
        union {int w; char b[4];} _HEXAGON_V32_internal_union; \
        _HEXAGON_V32_internal_union.w = (v); \
        _HEXAGON_V32_internal_union.b[2] = (new); \
        _HEXAGON_V32_internal_union.w; \
      })
    #define HEXAGON_V32_PUT_B3(v, new) \
      __extension__ \
      ({ \
        union {int w; char b[4];} _HEXAGON_V32_internal_union; \
        _HEXAGON_V32_internal_union.w = (v); \
        _HEXAGON_V32_internal_union.b[3] = (new); \
        _HEXAGON_V32_internal_union.w; \
      })

  #else /* !(__GNUC__ && __HEXAGON_OPEN64__) */

    #define HEXAGON_V32_PUT_B0(v, new)  HEXAGON_R_insert_RII(v, new, 8, 0)
    #define HEXAGON_V32_PUT_B1(v, new)  HEXAGON_R_insert_RII(v, new, 8, 8)
    #define HEXAGON_V32_PUT_B2(v, new)  HEXAGON_R_insert_RII(v, new, 8, 16)
    #define HEXAGON_V32_PUT_B3(v, new)  HEXAGON_R_insert_RII(v, new, 8, 24)

  #endif /* !(__GNUC__ && __HEXAGON_OPEN64__) */

#else /* !__hexagon__ */

  #define HEXAGON_V32_PUT_B0(v, new) \
    (((v) & 0xffffff00) | ((HEXAGON_Vect32) ((unsigned char) (new))))
  #define HEXAGON_V32_PUT_B1(v, new) \
    (((v) & 0xffff00ff) | (((HEXAGON_Vect32) ((unsigned char) (new))) << 8))
  #define HEXAGON_V32_PUT_B2(v, new) \
    (((v) & 0xff00ffff) | (((HEXAGON_Vect32) ((unsigned char) (new))) << 16))
  #define HEXAGON_V32_PUT_B3(v, new) \
    (((v) & 0x00ffffff) | (((HEXAGON_Vect32) (new)) << 24))

#endif /* !__hexagon__ */




/* NOTE: All create macros return a HEXAGON_Vect32 type */

/* Create from a word */

#define HEXAGON_V32_CREATE_W(w) (w)




/* Create from half words */

#ifdef __hexagon__

  #if defined(__GNUC__) && !defined(__HEXAGON_OPEN64__)

    #define HEXAGON_V32_CREATE_H(h1, h0) \
      __extension__ \
      ({ \
        union {long long d; short h[2];} _HEXAGON_V32_internal_union; \
        _HEXAGON_V32_internal_union.h[0] = (h0); \
        _HEXAGON_V32_internal_union.h[1] = (h1); \
        _HEXAGON_V32_internal_union.d; \
      })

  #else /* !(__GNUC__ && __HEXAGON_OPEN64__) */

    #define HEXAGON_V32_CREATE_H(h1, h0) \
      HEXAGON_R_combine_RlRl(h1, h0)

  #endif /* !(__GNUC__ && __HEXAGON_OPEN64__) */

#else /* !__hexagon__ */

  #define HEXAGON_V32_CREATE_H(h1, h0) \
    ((((HEXAGON_Vect32) (h1)) << 16) | \
     ((HEXAGON_Vect32) ((h0) & 0xffff)))

#endif /* !__hexagon__ */




/* Create from bytes */
#ifdef __hexagon__

  #if defined(__GNUC__) && !defined(__HEXAGON_OPEN64__)

    #define HEXAGON_V32_CREATE_B(b3, b2, b1, b0) \
      __extension__ \
      ({ \
        union {long long d; char b[4];} _HEXAGON_V32_internal_union; \
        _HEXAGON_V32_internal_union.b[0] = (b0); \
        _HEXAGON_V32_internal_union.b[1] = (b1); \
        _HEXAGON_V32_internal_union.b[2] = (b2); \
        _HEXAGON_V32_internal_union.b[3] = (b3); \
        _HEXAGON_V32_internal_union.d; \
      })

  #else /* !(__GNUC__ && __HEXAGON_OPEN64__) */

    #define HEXAGON_V32_CREATE_B(b3, b2, b1, b0) \
      HEXAGON_V32_PUT_B0(HEXAGON_V32_PUT_B1(HEXAGON_V32_PUT_B2(HEXAGON_V32_PUT_B3(0, b3), b2), b1), b0)

  #endif /* !(__GNUC__ && __HEXAGON_OPEN64__) */

#else /* !__hexagon__ */


  #define HEXAGON_V32_CREATE_B(b3, b2, b1, b0) \
    ((((HEXAGON_Vect32) (b3)) << 24) | \
     (((HEXAGON_Vect32) ((b2) & 0xff)) << 16) | \
     (((HEXAGON_Vect32) ((b1) & 0xff)) << 8) | \
     ((HEXAGON_Vect32) ((b0) & 0xff)))

#endif /* !__hexagon__ */




#ifdef __cplusplus

class HEXAGON_Vect32C {
  public:
    // Constructors
    HEXAGON_Vect32C(int w = 0) : data(w) {};
    HEXAGON_Vect32C(short h1, short h0) : data(HEXAGON_V32_CREATE_H(h1, h0)) {};
    HEXAGON_Vect32C(signed char b3, signed char b2, signed char b1, signed char b0)
      : data(HEXAGON_V32_CREATE_B(b3, b2, b1, b0)) {};
    HEXAGON_Vect32C(const HEXAGON_Vect32C & v) : data(v.data) {};

    HEXAGON_Vect32C& operator = (const HEXAGON_Vect32C & v) {
      data = v.data;
      return *this;
    };

    operator int() { return data; };

    // Extract word methods
    int W(void) { return HEXAGON_V32_GET_W(data); };
    unsigned int UW(void) { return HEXAGON_V32_GET_UW(data); };

    // Extract half word methods
    short H0(void) { return HEXAGON_V32_GET_H0(data); };
    short H1(void) { return HEXAGON_V32_GET_H1(data); };
    unsigned short UH0(void) { return HEXAGON_V32_GET_UH0(data); };
    unsigned short UH1(void) { return HEXAGON_V32_GET_UH1(data); };

    // Extract byte methods
    signed char B0(void) { return HEXAGON_V32_GET_B0(data); };
    signed char B1(void) { return HEXAGON_V32_GET_B1(data); };
    signed char B2(void) { return HEXAGON_V32_GET_B2(data); };
    signed char B3(void) { return HEXAGON_V32_GET_B3(data); };
    unsigned char UB0(void) { return HEXAGON_V32_GET_UB0(data); };
    unsigned char UB1(void) { return HEXAGON_V32_GET_UB1(data); };
    unsigned char UB2(void) { return HEXAGON_V32_GET_UB2(data); };
    unsigned char UB3(void) { return HEXAGON_V32_GET_UB3(data); };

    // NOTE: All set methods return a HEXAGON_Vect32C type

    // Set word method
    HEXAGON_Vect32C W(int w) { return HEXAGON_Vect32C(HEXAGON_V32_PUT_W(data, w)); };

    // Set half word methods
    HEXAGON_Vect32C H0(short h) { return HEXAGON_Vect32C(HEXAGON_V32_PUT_H0(data, h)); };
    HEXAGON_Vect32C H1(short h) { return HEXAGON_Vect32C(HEXAGON_V32_PUT_H1(data, h)); };

    // Set byte methods
    HEXAGON_Vect32C B0(signed char b) { return HEXAGON_Vect32C(HEXAGON_V32_PUT_B0(data, b)); };
    HEXAGON_Vect32C B1(signed char b) { return HEXAGON_Vect32C(HEXAGON_V32_PUT_B1(data, b)); };
    HEXAGON_Vect32C B2(signed char b) { return HEXAGON_Vect32C(HEXAGON_V32_PUT_B2(data, b)); };
    HEXAGON_Vect32C B3(signed char b) { return HEXAGON_Vect32C(HEXAGON_V32_PUT_B3(data, b)); };

  private:
    int data;
};

#endif /* __cplusplus */




/* Predicates */

typedef int HEXAGON_Pred;

#endif /* !HEXAGON_TYPES_H */
