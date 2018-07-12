/*****************************************************************
# Copyright (c) $Date$ QUALCOMM INCORPORATED.
# All Rights Reserved.
# Modified by QUALCOMM INCORPORATED on $Date$
*****************************************************************/
#ifndef Q6TYPES_H
#define Q6TYPES_H

#include <q6protos.h>




/* Old names */

#define Q6Vect Q6Vect64
#define Q6V_GET_D Q6V64_GET_D
#define Q6V_GET_UD Q6V64_GET_UD
#define Q6V_GET_W0 Q6V64_GET_W0
#define Q6V_GET_W1 Q6V64_GET_W1
#define Q6V_GET_UW0 Q6V64_GET_UW0
#define Q6V_GET_UW1 Q6V64_GET_UW1
#define Q6V_GET_H0 Q6V64_GET_H0
#define Q6V_GET_H1 Q6V64_GET_H1
#define Q6V_GET_H2 Q6V64_GET_H2
#define Q6V_GET_H3 Q6V64_GET_H3
#define Q6V_GET_UH0 Q6V64_GET_UH0
#define Q6V_GET_UH1 Q6V64_GET_UH1
#define Q6V_GET_UH2 Q6V64_GET_UH2
#define Q6V_GET_UH3 Q6V64_GET_UH3
#define Q6V_GET_B0 Q6V64_GET_B0
#define Q6V_GET_B1 Q6V64_GET_B1
#define Q6V_GET_B2 Q6V64_GET_B2
#define Q6V_GET_B3 Q6V64_GET_B3
#define Q6V_GET_B4 Q6V64_GET_B4
#define Q6V_GET_B5 Q6V64_GET_B5
#define Q6V_GET_B6 Q6V64_GET_B6
#define Q6V_GET_B7 Q6V64_GET_B7
#define Q6V_GET_UB0 Q6V64_GET_UB0
#define Q6V_GET_UB1 Q6V64_GET_UB1
#define Q6V_GET_UB2 Q6V64_GET_UB2
#define Q6V_GET_UB3 Q6V64_GET_UB3
#define Q6V_GET_UB4 Q6V64_GET_UB4
#define Q6V_GET_UB5 Q6V64_GET_UB5
#define Q6V_GET_UB6 Q6V64_GET_UB6
#define Q6V_GET_UB7 Q6V64_GET_UB7
#define Q6V_PUT_D Q6V64_PUT_D
#define Q6V_PUT_W0 Q6V64_PUT_W0
#define Q6V_PUT_W1 Q6V64_PUT_W1
#define Q6V_PUT_H0 Q6V64_PUT_H0
#define Q6V_PUT_H1 Q6V64_PUT_H1
#define Q6V_PUT_H2 Q6V64_PUT_H2
#define Q6V_PUT_H3 Q6V64_PUT_H3
#define Q6V_PUT_B0 Q6V64_PUT_B0
#define Q6V_PUT_B1 Q6V64_PUT_B1
#define Q6V_PUT_B2 Q6V64_PUT_B2
#define Q6V_PUT_B3 Q6V64_PUT_B3
#define Q6V_PUT_B4 Q6V64_PUT_B4
#define Q6V_PUT_B5 Q6V64_PUT_B5
#define Q6V_PUT_B6 Q6V64_PUT_B6
#define Q6V_PUT_B7 Q6V64_PUT_B7
#define Q6V_CREATE_D Q6V64_CREATE_D
#define Q6V_CREATE_W Q6V64_CREATE_W
#define Q6V_CREATE_H Q6V64_CREATE_H
#define Q6V_CREATE_B Q6V64_CREATE_B




#ifdef __cplusplus
  #define Q6VectC Q6Vect64C
#endif /* __cplusplus */




/* 64 Bit Vectors */

typedef long long __attribute__((__may_alias__)) Q6Vect64;




/* Extract doubleword macros */

#define Q6V64_GET_D(v) \
  (v)
#define Q6V64_GET_UD(v) \
  ((unsigned long long) (v))




/* Extract word macros */

#if defined(__GNUC__) && !defined(__QDSP6_OPEN64__)

  #define Q6V64_GET_W0(v) \
    __extension__ \
    ({ \
      union {long long d; int w[2];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.w[0]; \
    })
  #define Q6V64_GET_W1(v) \
    __extension__ \
    ({ \
      union {long long d; int w[2];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.w[1]; \
    })
  #define Q6V64_GET_UW0(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned int uw[2];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.uw[0]; \
    })
  #define Q6V64_GET_UW1(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned int uw[2];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.uw[1]; \
    })

#else /* !(__GNUC__ && __QDSP6_OPEN64__) */

  #define Q6V64_GET_W0(v) \
    ((int) (v))
  #define Q6V64_GET_W1(v) \
    ((int) ((v) >> 32LL))
  #define Q6V64_GET_UW0(v) \
    ((unsigned int) (v))
  #define Q6V64_GET_UW1(v) \
    ((unsigned int) ((v) >> 32LL))

#endif /* !(__GNUC__ && __QDSP6_OPEN64__) */




/* Extract half word macros */

#if defined(__GNUC__) && !defined(__QDSP6_OPEN64__)

  #define Q6V64_GET_H0(v) \
    __extension__ \
    ({ \
      union {long long d; short h[4];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.h[0]; \
    })
  #define Q6V64_GET_H1(v) \
    __extension__ \
    ({ \
      union {long long d; short h[4];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.h[1]; \
    })
  #define Q6V64_GET_H2(v) \
    __extension__ \
    ({ \
      union {long long d; short h[4];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.h[2]; \
    })
  #define Q6V64_GET_H3(v) \
    __extension__ \
    ({ \
      union {long long d; short h[4];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.h[3]; \
    })
  #define Q6V64_GET_UH0(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned short uh[4];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.uh[0]; \
    })
  #define Q6V64_GET_UH1(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned short uh[4];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.uh[1]; \
    })
  #define Q6V64_GET_UH2(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned short uh[4];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.uh[2]; \
    })
  #define Q6V64_GET_UH3(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned short uh[4];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.uh[3]; \
    })

#else /* !(__GNUC__ && __QDSP6_OPEN64__) */

  #define Q6V64_GET_H0(v) \
    ((short) ((v)))
  #define Q6V64_GET_H1(v) \
    ((short) (((v)) >> 16LL))
  #define Q6V64_GET_H2(v) \
    ((short) ((v) >> 32LL))
  #define Q6V64_GET_H3(v) \
    ((short) ((v) >> 48LL))
  #define Q6V64_GET_UH0(v) \
    ((unsigned short) ((v)))
  #define Q6V64_GET_UH1(v) \
    ((unsigned short) (((v)) >> 16LL))
  #define Q6V64_GET_UH2(v) \
    ((unsigned short) ((v) >> 32LL))
  #define Q6V64_GET_UH3(v) \
    ((unsigned short) ((v) >> 48LL))

#endif /* !(__GNUC__ && __QDSP6_OPEN64__) */




/* Extract byte macros */

#if defined(__GNUC__) && !defined(__QDSP6_OPEN64__)

  #define Q6V64_GET_B0(v) \
    __extension__ \
    ({ \
      union {long long d; signed char b[8];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.b[0]; \
    })
  #define Q6V64_GET_B1(v) \
    __extension__ \
    ({ \
      union {long long d; signed char b[8];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.b[1]; \
    })
  #define Q6V64_GET_B2(v) \
    __extension__ \
    ({ \
      union {long long d; signed char b[8];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.b[2]; \
    })
  #define Q6V64_GET_B3(v) \
    __extension__ \
    ({ \
      union {long long d; signed char b[8];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.b[3]; \
    })
  #define Q6V64_GET_B4(v) \
    __extension__ \
    ({ \
      union {long long d; signed char b[8];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.b[4]; \
    })
  #define Q6V64_GET_B5(v) \
    __extension__ \
    ({ \
      union {long long d; signed char b[8];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.b[5]; \
    })
  #define Q6V64_GET_B6(v) \
    __extension__ \
    ({ \
      union {long long d; signed char b[8];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.b[6]; \
    })
  #define Q6V64_GET_B7(v) \
    __extension__ \
    ({ \
      union {long long d; signed char b[8];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.b[7]; \
    })
  #define Q6V64_GET_UB0(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned char ub[8];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.ub[0]; \
    })
  #define Q6V64_GET_UB1(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned char ub[8];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.ub[1]; \
    })
  #define Q6V64_GET_UB2(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned char ub[8];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.ub[2]; \
    })
  #define Q6V64_GET_UB3(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned char ub[8];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.ub[3]; \
    })
  #define Q6V64_GET_UB4(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned char ub[8];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.ub[4]; \
    })
  #define Q6V64_GET_UB5(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned char ub[8];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.ub[5]; \
    })
  #define Q6V64_GET_UB6(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned char ub[8];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.ub[6]; \
    })
  #define Q6V64_GET_UB7(v) \
    __extension__ \
    ({ \
      union {long long d; unsigned char ub[8];} _Q6V64_internal_union; \
      _Q6V64_internal_union.d = (v); \
      _Q6V64_internal_union.ub[7]; \
    })

#else /* !(__GNUC__ && __QDSP6_OPEN64__) */

  #define Q6V64_GET_B0(v) \
    ((signed char) ((v)))
  #define Q6V64_GET_B1(v) \
    ((signed char) (((v)) >> 8LL))
  #define Q6V64_GET_B2(v) \
    ((signed char) (((v)) >> 16LL))
  #define Q6V64_GET_B3(v) \
    ((signed char) (((v)) >> 24LL))
  #define Q6V64_GET_B4(v) \
    ((signed char) ((v) >> 32LL))
  #define Q6V64_GET_B5(v) \
    ((signed char) ((v) >> 40LL))
  #define Q6V64_GET_B6(v) \
    ((signed char) ((v) >> 48LL))
  #define Q6V64_GET_B7(v) \
    ((signed char) ((v) >> 56LL))
  #define Q6V64_GET_UB0(v) \
    ((unsigned char) ((v)))
  #define Q6V64_GET_UB1(v) \
    ((unsigned char) (((v)) >> 8LL))
  #define Q6V64_GET_UB2(v) \
    ((unsigned char) (((v)) >> 16LL))
  #define Q6V64_GET_UB3(v) \
    ((unsigned char) (((v)) >> 24LL))
  #define Q6V64_GET_UB4(v) \
    ((unsigned char) ((v) >> 32LL))
  #define Q6V64_GET_UB5(v) \
    ((unsigned char) ((v) >> 40LL))
  #define Q6V64_GET_UB6(v) \
    ((unsigned char) ((v) >> 48LL))
  #define Q6V64_GET_UB7(v) \
    ((unsigned char) ((v) >> 56LL))

#endif /* !(__GNUC__ && __QDSP6_OPEN64__) */




/* NOTE: All set macros return a Q6Vect64 type */

/* Set doubleword macro */

#define Q6V64_PUT_D(v, new) (new)




/* Set word macros */

#ifdef __qdsp6__

  #if defined(__GNUC__) && !defined(__QDSP6_OPEN64__)

    #define Q6V64_PUT_W0(v, new) \
      __extension__ \
      ({ \
        union {long long d; int w[2];} _Q6V64_internal_union; \
        _Q6V64_internal_union.d = (v); \
        _Q6V64_internal_union.w[0] = (new); \
        _Q6V64_internal_union.d; \
      })
    #define Q6V64_PUT_W1(v, new) \
      __extension__ \
      ({ \
        union {long long d; int w[2];} _Q6V64_internal_union; \
        _Q6V64_internal_union.d = (v); \
        _Q6V64_internal_union.w[1] = (new); \
        _Q6V64_internal_union.d; \
      })

  #else /* !(__GNUC__ && __QDSP6_OPEN64__) */

    #define Q6V64_PUT_W0(v, new) Q6_P_insert_PII(v, new, 32, 0)
    #define Q6V64_PUT_W1(v, new) Q6_P_insert_PII(v, new, 32, 32)

  #endif /* !(__GNUC__ && __QDSP6_OPEN64__) */

#else /* !__qdsp6__ */

  #define Q6V64_PUT_W0(v, new) \
    (((v) & 0xffffffff00000000LL) | ((Q6Vect64) ((unsigned int) (new))))
  #define Q6V64_PUT_W1(v, new) \
    (((v) & 0x00000000ffffffffLL) | (((Q6Vect64) (new)) << 32LL))

#endif /* !__qdsp6__ */




/* Set half word macros */

#ifdef __qdsp6__

  #if defined(__GNUC__) && !defined(__QDSP6_OPEN64__)

    #define Q6V64_PUT_H0(v, new) \
      __extension__ \
      ({ \
        union {long long d; short h[4];} _Q6V64_internal_union; \
        _Q6V64_internal_union.d = (v); \
        _Q6V64_internal_union.h[0] = (new); \
        _Q6V64_internal_union.d; \
      })
    #define Q6V64_PUT_H1(v, new) \
      __extension__ \
      ({ \
        union {long long d; short h[4];} _Q6V64_internal_union; \
        _Q6V64_internal_union.d = (v); \
        _Q6V64_internal_union.h[1] = (new); \
        _Q6V64_internal_union.d; \
      })
    #define Q6V64_PUT_H2(v, new) \
      __extension__ \
      ({ \
        union {long long d; short h[4];} _Q6V64_internal_union; \
        _Q6V64_internal_union.d = (v); \
        _Q6V64_internal_union.h[2] = (new); \
        _Q6V64_internal_union.d; \
      })
    #define Q6V64_PUT_H3(v, new) \
      __extension__ \
      ({ \
        union {long long d; short h[4];} _Q6V64_internal_union; \
        _Q6V64_internal_union.d = (v); \
        _Q6V64_internal_union.h[3] = (new); \
        _Q6V64_internal_union.d; \
      })

  #else /* !(__GNUC__ && __QDSP6_OPEN64__) */

    #define Q6V64_PUT_H0(v, new)  Q6_P_insert_PII(v, new, 16, 0)
    #define Q6V64_PUT_H1(v, new)  Q6_P_insert_PII(v, new, 16, 16)
    #define Q6V64_PUT_H2(v, new)  Q6_P_insert_PII(v, new, 16, 32)
    #define Q6V64_PUT_H3(v, new)  Q6_P_insert_PII(v, new, 16, 48)

  #endif /* !(__GNUC__ && __QDSP6_OPEN64__) */

#else /* !__qdsp6__ */

  #define Q6V64_PUT_H0(v, new) \
    (((v) & 0xffffffffffff0000LL) | ((Q6Vect64) ((unsigned short) (new))))
  #define Q6V64_PUT_H1(v, new) \
    (((v) & 0xffffffff0000ffffLL) | (((Q6Vect64) ((unsigned short) (new))) << 16LL))
  #define Q6V64_PUT_H2(v, new) \
    (((v) & 0xffff0000ffffffffLL) | (((Q6Vect64) ((unsigned short) (new))) << 32LL))
  #define Q6V64_PUT_H3(v, new) \
    (((v) & 0x0000ffffffffffffLL) | (((Q6Vect64) (new)) << 48LL))

#endif /* !__qdsp6__ */




/* Set byte macros */

#ifdef __qdsp6__

  #if defined(__GNUC__) && !defined(__QDSP6_OPEN64__)

    #define Q6V64_PUT_B0(v, new) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _Q6V64_internal_union; \
        _Q6V64_internal_union.d = (v); \
        _Q6V64_internal_union.b[0] = (new); \
        _Q6V64_internal_union.d; \
      })
    #define Q6V64_PUT_B1(v, new) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _Q6V64_internal_union; \
        _Q6V64_internal_union.d = (v); \
        _Q6V64_internal_union.b[1] = (new); \
        _Q6V64_internal_union.d; \
      })
    #define Q6V64_PUT_B2(v, new) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _Q6V64_internal_union; \
        _Q6V64_internal_union.d = (v); \
        _Q6V64_internal_union.b[2] = (new); \
        _Q6V64_internal_union.d; \
      })
    #define Q6V64_PUT_B3(v, new) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _Q6V64_internal_union; \
        _Q6V64_internal_union.d = (v); \
        _Q6V64_internal_union.b[3] = (new); \
        _Q6V64_internal_union.d; \
      })
    #define Q6V64_PUT_B4(v, new) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _Q6V64_internal_union; \
        _Q6V64_internal_union.d = (v); \
        _Q6V64_internal_union.b[4] = (new); \
        _Q6V64_internal_union.d; \
      })
    #define Q6V64_PUT_B5(v, new) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _Q6V64_internal_union; \
        _Q6V64_internal_union.d = (v); \
        _Q6V64_internal_union.b[5] = (new); \
        _Q6V64_internal_union.d; \
      })
    #define Q6V64_PUT_B6(v, new) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _Q6V64_internal_union; \
        _Q6V64_internal_union.d = (v); \
        _Q6V64_internal_union.b[6] = (new); \
        _Q6V64_internal_union.d; \
      })
    #define Q6V64_PUT_B7(v, new) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _Q6V64_internal_union; \
        _Q6V64_internal_union.d = (v); \
        _Q6V64_internal_union.b[7] = (new); \
        _Q6V64_internal_union.d; \
      })

  #else /* !(__GNUC__ && __QDSP6_OPEN64__) */

    #define Q6V64_PUT_B0(v, new)  Q6_P_insert_PII(v, new, 8, 0)
    #define Q6V64_PUT_B1(v, new)  Q6_P_insert_PII(v, new, 8, 8)
    #define Q6V64_PUT_B2(v, new)  Q6_P_insert_PII(v, new, 8, 16)
    #define Q6V64_PUT_B3(v, new)  Q6_P_insert_PII(v, new, 8, 24)
    #define Q6V64_PUT_B4(v, new)  Q6_P_insert_PII(v, new, 8, 32)
    #define Q6V64_PUT_B5(v, new)  Q6_P_insert_PII(v, new, 8, 40)
    #define Q6V64_PUT_B6(v, new)  Q6_P_insert_PII(v, new, 8, 48)
    #define Q6V64_PUT_B7(v, new)  Q6_P_insert_PII(v, new, 8, 56)

  #endif /* !(__GNUC__ && __QDSP6_OPEN64__) */

#else /* !__qdsp6__ */

  #define Q6V64_PUT_B0(v, new) \
    (((v) & 0xffffffffffffff00LL) | ((Q6Vect64) ((unsigned char) (new))))
  #define Q6V64_PUT_B1(v, new) \
    (((v) & 0xffffffffffff00ffLL) | (((Q6Vect64) ((unsigned char) (new))) << 8LL))
  #define Q6V64_PUT_B2(v, new) \
    (((v) & 0xffffffffff00ffffLL) | (((Q6Vect64) ((unsigned char) (new))) << 16LL))
  #define Q6V64_PUT_B3(v, new) \
    (((v) & 0xffffffff00ffffffLL) | (((Q6Vect64) ((unsigned char) (new))) << 24LL))
  #define Q6V64_PUT_B4(v, new) \
    (((v) & 0xffffff00ffffffffLL) | (((Q6Vect64) ((unsigned char) (new))) << 32LL))
  #define Q6V64_PUT_B5(v, new) \
    (((v) & 0xffff00ffffffffffLL) | (((Q6Vect64) ((unsigned char) (new))) << 40LL))
  #define Q6V64_PUT_B6(v, new) \
    (((v) & 0xff00ffffffffffffLL) | (((Q6Vect64) ((unsigned char) (new))) << 48LL))
  #define Q6V64_PUT_B7(v, new) \
    (((v) & 0x00ffffffffffffffLL) | (((Q6Vect64) (new)) << 56LL))

#endif /* !__qdsp6__ */




/* NOTE: All create macros return a Q6Vect64 type */

/* Create from a doubleword */

#define Q6V64_CREATE_D(d) (d)




/* Create from words */

#ifdef __qdsp6__

  #if defined(__GNUC__) && !defined(__QDSP6_OPEN64__)

    #define Q6V64_CREATE_W(w1, w0) \
      __extension__ \
      ({ \
        union {long long d; int w[2];} _Q6V64_internal_union; \
        _Q6V64_internal_union.w[0] = (w0); \
        _Q6V64_internal_union.w[1] = (w1); \
        _Q6V64_internal_union.d; \
      })

  #else /* !(__GNUC__ && __QDSP6_OPEN64__) */

    #define Q6V64_CREATE_W(w1, w0) Q6_P_combine_RR(w1, w0)

  #endif /* !(__GNUC__ && __QDSP6_OPEN64__) */

#else /* !__qdsp6__ */

  #define Q6V64_CREATE_W(w1, w0) \
    ((((Q6Vect64) (w1)) << 32LL) | ((Q6Vect64) ((w0) & 0xffffffff)))

#endif /* !__qdsp6__ */




/* Create from half words */

#ifdef __qdsp6__

  #if defined(__GNUC__) && !defined(__QDSP6_OPEN64__)

    #define Q6V64_CREATE_H(h3, h2, h1, h0) \
      __extension__ \
      ({ \
        union {long long d; short h[4];} _Q6V64_internal_union; \
        _Q6V64_internal_union.h[0] = (h0); \
        _Q6V64_internal_union.h[1] = (h1); \
        _Q6V64_internal_union.h[2] = (h2); \
        _Q6V64_internal_union.h[3] = (h3); \
        _Q6V64_internal_union.d; \
      })

  #else /* !(__GNUC__ && __QDSP6_OPEN64__) */

    #define Q6V64_CREATE_H(h3, h2, h1, h0) \
      Q6_P_combine_RR(Q6_R_combine_RlRl(h3, h2), Q6_R_combine_RlRl(h1, h0))

  #endif /* !(__GNUC__ && __QDSP6_OPEN64__) */

#else /* !__qdsp6__ */

  #define Q6V64_CREATE_H(h3, h2, h1, h0) \
    ((((Q6Vect64) (h3)) << 48LL) | \
     (((Q6Vect64) ((h2) & 0xffff)) << 32LL) | \
     (((Q6Vect64) ((h1) & 0xffff)) << 16LL) | \
     ((Q6Vect64) ((h0) & 0xffff)))

#endif /* !__qdsp6__ */




/* Create from bytes */

#ifdef __qdsp6__

  #if defined(__GNUC__) && !defined(__QDSP6_OPEN64__)

    #define Q6V64_CREATE_B(b7, b6, b5, b4, b3, b2, b1, b0) \
      __extension__ \
      ({ \
        union {long long d; char b[8];} _Q6V64_internal_union; \
        _Q6V64_internal_union.b[0] = (b0); \
        _Q6V64_internal_union.b[1] = (b1); \
        _Q6V64_internal_union.b[2] = (b2); \
        _Q6V64_internal_union.b[3] = (b3); \
        _Q6V64_internal_union.b[4] = (b4); \
        _Q6V64_internal_union.b[5] = (b5); \
        _Q6V64_internal_union.b[6] = (b6); \
        _Q6V64_internal_union.b[7] = (b7); \
        _Q6V64_internal_union.d; \
      })

  #else /* !(__GNUC__ && __QDSP6_OPEN64__) */

    #define Q6V64_CREATE_B(b7, b6, b5, b4, b3, b2, b1, b0) \
      Q6V64_PUT_B0(Q6V64_PUT_B1(Q6V64_PUT_B2(Q6V64_PUT_B3(Q6V64_PUT_B4(Q6V64_PUT_B5(Q6V64_PUT_B6(Q6V64_PUT_B7(0, b7), b6), b5), b4), b3), b2), b1), b0)

  #endif /* !(__GNUC__ && __QDSP6_OPEN64__) */

#else /* !__qdsp6__ */

  #define Q6V64_CREATE_B(b7, b6, b5, b4, b3, b2, b1, b0) \
    ((((Q6Vect64) (b7)) << 56LL) | \
     (((Q6Vect64) ((b6) & 0xff)) << 48LL) | \
     (((Q6Vect64) ((b5) & 0xff)) << 40LL) | \
     (((Q6Vect64) ((b4) & 0xff)) << 32LL) | \
     (((Q6Vect64) ((b3) & 0xff)) << 24LL) | \
     (((Q6Vect64) ((b2) & 0xff)) << 16LL) | \
     (((Q6Vect64) ((b1) & 0xff)) << 8LL) | \
     ((Q6Vect64) ((b0) & 0xff)))

#endif /* !__qdsp6__ */




#ifdef __cplusplus

class Q6Vect64C {
  public:
    // Constructors
    Q6Vect64C(long long d = 0) : data(d) {};
    Q6Vect64C(int w1, int w0) : data(Q6V64_CREATE_W(w1, w0)) {};
    Q6Vect64C(short h3, short h2, short h1, short h0)
      : data(Q6V64_CREATE_H(h3, h2, h1, h0)) {};
    Q6Vect64C(signed char b7, signed char b6, signed char b5, signed char b4,
              signed char b3, signed char b2, signed char b1, signed char b0)
      : data(Q6V64_CREATE_B(b7, b6, b5, b4, b3, b2, b1, b0)) {};
    Q6Vect64C(const Q6Vect64C & v) : data(v.data) {};

    Q6Vect64C& operator = (const Q6Vect64C & v) {
      data = v.data;
      return *this;
    };

    operator long long() { return data; };

    // Extract doubleword methods
    long long D(void) { return Q6V64_GET_D(data); };
    unsigned long long UD(void) { return Q6V64_GET_UD(data); };

    // Extract word methods
    int W0(void) { return Q6V64_GET_W0(data); };
    int W1(void) { return Q6V64_GET_W1(data); };
    unsigned int UW0(void) { return Q6V64_GET_UW0(data); };
    unsigned int UW1(void) { return Q6V64_GET_UW1(data); };

    // Extract half word methods
    short H0(void) { return Q6V64_GET_H0(data); };
    short H1(void) { return Q6V64_GET_H1(data); };
    short H2(void) { return Q6V64_GET_H2(data); };
    short H3(void) { return Q6V64_GET_H3(data); };
    unsigned short UH0(void) { return Q6V64_GET_UH0(data); };
    unsigned short UH1(void) { return Q6V64_GET_UH1(data); };
    unsigned short UH2(void) { return Q6V64_GET_UH2(data); };
    unsigned short UH3(void) { return Q6V64_GET_UH3(data); };

    // Extract byte methods
    signed char B0(void) { return Q6V64_GET_B0(data); };
    signed char B1(void) { return Q6V64_GET_B1(data); };
    signed char B2(void) { return Q6V64_GET_B2(data); };
    signed char B3(void) { return Q6V64_GET_B3(data); };
    signed char B4(void) { return Q6V64_GET_B4(data); };
    signed char B5(void) { return Q6V64_GET_B5(data); };
    signed char B6(void) { return Q6V64_GET_B6(data); };
    signed char B7(void) { return Q6V64_GET_B7(data); };
    unsigned char UB0(void) { return Q6V64_GET_UB0(data); };
    unsigned char UB1(void) { return Q6V64_GET_UB1(data); };
    unsigned char UB2(void) { return Q6V64_GET_UB2(data); };
    unsigned char UB3(void) { return Q6V64_GET_UB3(data); };
    unsigned char UB4(void) { return Q6V64_GET_UB4(data); };
    unsigned char UB5(void) { return Q6V64_GET_UB5(data); };
    unsigned char UB6(void) { return Q6V64_GET_UB6(data); };
    unsigned char UB7(void) { return Q6V64_GET_UB7(data); };

    // NOTE: All set methods return a Q6Vect64C type

    // Set doubleword method
    Q6Vect64C D(long long d) { return Q6Vect64C(Q6V64_PUT_D(data, d)); };

    // Set word methods
    Q6Vect64C W0(int w) { return Q6Vect64C(Q6V64_PUT_W0(data, w)); };
    Q6Vect64C W1(int w) { return Q6Vect64C(Q6V64_PUT_W1(data, w)); };

    // Set half word methods
    Q6Vect64C H0(short h) { return Q6Vect64C(Q6V64_PUT_H0(data, h)); };
    Q6Vect64C H1(short h) { return Q6Vect64C(Q6V64_PUT_H1(data, h)); };
    Q6Vect64C H2(short h) { return Q6Vect64C(Q6V64_PUT_H2(data, h)); };
    Q6Vect64C H3(short h) { return Q6Vect64C(Q6V64_PUT_H3(data, h)); };

    // Set byte methods
    Q6Vect64C B0(signed char b) { return Q6Vect64C(Q6V64_PUT_B0(data, b)); };
    Q6Vect64C B1(signed char b) { return Q6Vect64C(Q6V64_PUT_B1(data, b)); };
    Q6Vect64C B2(signed char b) { return Q6Vect64C(Q6V64_PUT_B2(data, b)); };
    Q6Vect64C B3(signed char b) { return Q6Vect64C(Q6V64_PUT_B3(data, b)); };
    Q6Vect64C B4(signed char b) { return Q6Vect64C(Q6V64_PUT_B4(data, b)); };
    Q6Vect64C B5(signed char b) { return Q6Vect64C(Q6V64_PUT_B5(data, b)); };
    Q6Vect64C B6(signed char b) { return Q6Vect64C(Q6V64_PUT_B6(data, b)); };
    Q6Vect64C B7(signed char b) { return Q6Vect64C(Q6V64_PUT_B7(data, b)); };

  private:
    long long data;
};

#endif /* __cplusplus */




/* 32 Bit Vectors */

typedef int Q6Vect32;




/* Extract word macros */

#define Q6V32_GET_W(v) (v)
#define Q6V32_GET_UW(v) ((unsigned int) (v))




/* Extract half word macros */

#if defined(__GNUC__) && !defined(__QDSP6_OPEN64__)

  #define Q6V32_GET_H0(v) \
    __extension__ \
    ({ \
      union {int w; short h[2];} _Q6V32_internal_union; \
      _Q6V32_internal_union.w = (v); \
      _Q6V32_internal_union.h[0]; \
    })
  #define Q6V32_GET_H1(v) \
    __extension__ \
    ({ \
      union {int w; short h[2];} _Q6V32_internal_union; \
      _Q6V32_internal_union.w = (v); \
      _Q6V32_internal_union.h[1]; \
    })
  #define Q6V32_GET_UH0(v) \
    __extension__ \
    ({ \
      union {int w; unsigned short uh[2];} _Q6V32_internal_union; \
      _Q6V32_internal_union.w = (v); \
      _Q6V32_internal_union.uh[0]; \
    })
  #define Q6V32_GET_UH1(v) \
    __extension__ \
    ({ \
      union {int w; unsigned short uh[2];} _Q6V32_internal_union; \
      _Q6V32_internal_union.w = (v); \
      _Q6V32_internal_union.uh[1]; \
    })

#else /* !(__GNUC__ && __QDSP6_OPEN64__) */

  #define Q6V32_GET_H0(v) \
    ((short) (v))
  #define Q6V32_GET_H1(v) \
    ((short) ((v) >> 16))
  #define Q6V32_GET_UH0(v) \
    ((unsigned short) (v))
  #define Q6V32_GET_UH1(v) \
    ((unsigned short) ((v) >> 16))

#endif /* !(__GNUC__ && __QDSP6_OPEN64__) */





/* Extract byte macros */

#if defined(__GNUC__) && !defined(__QDSP6_OPEN64__)

  #define Q6V32_GET_B0(v) \
    __extension__ \
    ({ \
      union {int w; signed char b[4];} _Q6V32_internal_union; \
      _Q6V32_internal_union.w = (v); \
      _Q6V32_internal_union.b[0]; \
    })
  #define Q6V32_GET_B1(v) \
    __extension__ \
    ({ \
      union {int w; signed char b[4];} _Q6V32_internal_union; \
      _Q6V32_internal_union.w = (v); \
      _Q6V32_internal_union.b[1]; \
    })
  #define Q6V32_GET_B2(v) \
    __extension__ \
    ({ \
      union {int w; signed char b[4];} _Q6V32_internal_union; \
      _Q6V32_internal_union.w = (v); \
      _Q6V32_internal_union.b[2]; \
    })
  #define Q6V32_GET_B3(v) \
    __extension__ \
    ({ \
      union {int w; signed char b[4];} _Q6V32_internal_union; \
      _Q6V32_internal_union.w = (v); \
      _Q6V32_internal_union.b[3]; \
    })
  #define Q6V32_GET_UB0(v) \
    __extension__ \
    ({ \
      union {int w; unsigned char ub[4];} _Q6V32_internal_union; \
      _Q6V32_internal_union.w = (v); \
      _Q6V32_internal_union.ub[0]; \
    })
  #define Q6V32_GET_UB1(v) \
    __extension__ \
    ({ \
      union {int w; unsigned char ub[4];} _Q6V32_internal_union; \
      _Q6V32_internal_union.w = (v); \
      _Q6V32_internal_union.ub[1]; \
    })
  #define Q6V32_GET_UB2(v) \
    __extension__ \
    ({ \
      union {int w; unsigned char ub[4];} _Q6V32_internal_union; \
      _Q6V32_internal_union.w = (v); \
      _Q6V32_internal_union.ub[2]; \
    })
  #define Q6V32_GET_UB3(v) \
    __extension__ \
    ({ \
      union {int w; unsigned char ub[4];} _Q6V32_internal_union; \
      _Q6V32_internal_union.w = (v); \
      _Q6V32_internal_union.ub[3]; \
    })

#else /* !(__GNUC__ && __QDSP6_OPEN64__) */

  #define Q6V32_GET_B0(v) \
    ((signed char) (v))
  #define Q6V32_GET_B1(v) \
    ((signed char) ((v) >> 8))
  #define Q6V32_GET_B2(v) \
    ((signed char) ((v) >> 16))
  #define Q6V32_GET_B3(v) \
    ((signed char) ((v) >> 24))
  #define Q6V32_GET_UB0(v) \
    ((unsigned char) (v))
  #define Q6V32_GET_UB1(v) \
    ((unsigned char) ((v) >> 8))
  #define Q6V32_GET_UB2(v) \
    ((unsigned char) ((v) >> 16))
  #define Q6V32_GET_UB3(v) \
    ((unsigned char) ((v) >> 24))

#endif /* !(__GNUC__ && __QDSP6_OPEN64__) */




/* NOTE: All set macros return a Q6Vect32 type */

/* Set word macro */

#define Q6V32_PUT_W(v, new) (new)




/* Set half word macros */

#ifdef __qdsp6__

  #if defined(__GNUC__) && !defined(__QDSP6_OPEN64__)

    #define Q6V32_PUT_H0(v, new) \
      __extension__ \
      ({ \
        union {int w; short h[2];} _Q6V32_internal_union; \
        _Q6V32_internal_union.w = (v); \
        _Q6V32_internal_union.h[0] = (new); \
        _Q6V32_internal_union.w; \
      })
    #define Q6V32_PUT_H1(v, new) \
      __extension__ \
      ({ \
        union {int w; short h[2];} _Q6V32_internal_union; \
        _Q6V32_internal_union.w = (v); \
        _Q6V32_internal_union.h[1] = (new); \
        _Q6V32_internal_union.w; \
      })

  #else /* !(__GNUC__ && __QDSP6_OPEN64__) */

    #define Q6V32_PUT_H0(v, new)  Q6_R_insert_RII(v, new, 16, 0)
    #define Q6V32_PUT_H1(v, new)  Q6_R_insert_RII(v, new, 16, 16)

  #endif /* !(__GNUC__ && __QDSP6_OPEN64__) */

#else /* !__qdsp6__ */

  #define Q6V32_PUT_H0(v, new) \
    (((v) & 0xffff0000) | ((Q6Vect32) ((unsigned short) (new))))
  #define Q6V32_PUT_H1(v, new) \
    (((v) & 0x0000ffff) | (((Q6Vect32) (new)) << 16))

#endif /* !__qdsp6__ */




/* Set byte macros */

#ifdef __qdsp6__

  #if defined(__GNUC__) && !defined(__QDSP6_OPEN64__)

    #define Q6V32_PUT_B0(v, new) \
      __extension__ \
      ({ \
        union {int w; char b[4];} _Q6V32_internal_union; \
        _Q6V32_internal_union.w = (v); \
        _Q6V32_internal_union.b[0] = (new); \
        _Q6V32_internal_union.w; \
      })
    #define Q6V32_PUT_B1(v, new) \
      __extension__ \
      ({ \
        union {int w; char b[4];} _Q6V32_internal_union; \
        _Q6V32_internal_union.w = (v); \
        _Q6V32_internal_union.b[1] = (new); \
        _Q6V32_internal_union.w; \
      })
    #define Q6V32_PUT_B2(v, new) \
      __extension__ \
      ({ \
        union {int w; char b[4];} _Q6V32_internal_union; \
        _Q6V32_internal_union.w = (v); \
        _Q6V32_internal_union.b[2] = (new); \
        _Q6V32_internal_union.w; \
      })
    #define Q6V32_PUT_B3(v, new) \
      __extension__ \
      ({ \
        union {int w; char b[4];} _Q6V32_internal_union; \
        _Q6V32_internal_union.w = (v); \
        _Q6V32_internal_union.b[3] = (new); \
        _Q6V32_internal_union.w; \
      })

  #else /* !(__GNUC__ && __QDSP6_OPEN64__) */

    #define Q6V32_PUT_B0(v, new)  Q6_R_insert_RII(v, new, 8, 0)
    #define Q6V32_PUT_B1(v, new)  Q6_R_insert_RII(v, new, 8, 8)
    #define Q6V32_PUT_B2(v, new)  Q6_R_insert_RII(v, new, 8, 16)
    #define Q6V32_PUT_B3(v, new)  Q6_R_insert_RII(v, new, 8, 24)

  #endif /* !(__GNUC__ && __QDSP6_OPEN64__) */

#else /* !__qdsp6__ */

  #define Q6V32_PUT_B0(v, new) \
    (((v) & 0xffffff00) | ((Q6Vect32) ((unsigned char) (new))))
  #define Q6V32_PUT_B1(v, new) \
    (((v) & 0xffff00ff) | (((Q6Vect32) ((unsigned char) (new))) << 8))
  #define Q6V32_PUT_B2(v, new) \
    (((v) & 0xff00ffff) | (((Q6Vect32) ((unsigned char) (new))) << 16))
  #define Q6V32_PUT_B3(v, new) \
    (((v) & 0x00ffffff) | (((Q6Vect32) (new)) << 24))

#endif /* !__qdsp6__ */




/* NOTE: All create macros return a Q6Vect32 type */

/* Create from a word */

#define Q6V32_CREATE_W(w) (w)




/* Create from half words */

#ifdef __qdsp6__

  #if defined(__GNUC__) && !defined(__QDSP6_OPEN64__)

    #define Q6V32_CREATE_H(h1, h0) \
      __extension__ \
      ({ \
        union {long long d; short h[2];} _Q6V32_internal_union; \
        _Q6V32_internal_union.h[0] = (h0); \
        _Q6V32_internal_union.h[1] = (h1); \
        _Q6V32_internal_union.d; \
      })

  #else /* !(__GNUC__ && __QDSP6_OPEN64__) */

    #define Q6V32_CREATE_H(h1, h0) \
      Q6_R_combine_RlRl(h1, h0)

  #endif /* !(__GNUC__ && __QDSP6_OPEN64__) */

#else /* !__qdsp6__ */

  #define Q6V32_CREATE_H(h1, h0) \
    ((((Q6Vect32) (h1)) << 16) | \
     ((Q6Vect32) ((h0) & 0xffff)))

#endif /* !__qdsp6__ */




/* Create from bytes */
#ifdef __qdsp6__

  #if defined(__GNUC__) && !defined(__QDSP6_OPEN64__)

    #define Q6V32_CREATE_B(b3, b2, b1, b0) \
      __extension__ \
      ({ \
        union {long long d; char b[4];} _Q6V32_internal_union; \
        _Q6V32_internal_union.b[0] = (b0); \
        _Q6V32_internal_union.b[1] = (b1); \
        _Q6V32_internal_union.b[2] = (b2); \
        _Q6V32_internal_union.b[3] = (b3); \
        _Q6V32_internal_union.d; \
      })

  #else /* !(__GNUC__ && __QDSP6_OPEN64__) */

    #define Q6V32_CREATE_B(b3, b2, b1, b0) \
      Q6V32_PUT_B0(Q6V32_PUT_B1(Q6V32_PUT_B2(Q6V32_PUT_B3(0, b3), b2), b1), b0)

  #endif /* !(__GNUC__ && __QDSP6_OPEN64__) */

#else /* !__qdsp6__ */


  #define Q6V32_CREATE_B(b3, b2, b1, b0) \
    ((((Q6Vect32) (b3)) << 24) | \
     (((Q6Vect32) ((b2) & 0xff)) << 16) | \
     (((Q6Vect32) ((b1) & 0xff)) << 8) | \
     ((Q6Vect32) ((b0) & 0xff)))

#endif /* !__qdsp6__ */




#ifdef __cplusplus

class Q6Vect32C {
  public:
    // Constructors
    Q6Vect32C(int w = 0) : data(w) {};
    Q6Vect32C(short h1, short h0) : data(Q6V32_CREATE_H(h1, h0)) {};
    Q6Vect32C(signed char b3, signed char b2, signed char b1, signed char b0)
      : data(Q6V32_CREATE_B(b3, b2, b1, b0)) {};
    Q6Vect32C(const Q6Vect32C & v) : data(v.data) {};

    Q6Vect32C& operator = (const Q6Vect32C & v) {
      data = v.data;
      return *this;
    };

    operator int() { return data; };

    // Extract word methods
    int W(void) { return Q6V32_GET_W(data); };
    unsigned int UW(void) { return Q6V32_GET_UW(data); };

    // Extract half word methods
    short H0(void) { return Q6V32_GET_H0(data); };
    short H1(void) { return Q6V32_GET_H1(data); };
    unsigned short UH0(void) { return Q6V32_GET_UH0(data); };
    unsigned short UH1(void) { return Q6V32_GET_UH1(data); };

    // Extract byte methods
    signed char B0(void) { return Q6V32_GET_B0(data); };
    signed char B1(void) { return Q6V32_GET_B1(data); };
    signed char B2(void) { return Q6V32_GET_B2(data); };
    signed char B3(void) { return Q6V32_GET_B3(data); };
    unsigned char UB0(void) { return Q6V32_GET_UB0(data); };
    unsigned char UB1(void) { return Q6V32_GET_UB1(data); };
    unsigned char UB2(void) { return Q6V32_GET_UB2(data); };
    unsigned char UB3(void) { return Q6V32_GET_UB3(data); };

    // NOTE: All set methods return a Q6Vect32C type

    // Set word method
    Q6Vect32C W(int w) { return Q6Vect32C(Q6V32_PUT_W(data, w)); };

    // Set half word methods
    Q6Vect32C H0(short h) { return Q6Vect32C(Q6V32_PUT_H0(data, h)); };
    Q6Vect32C H1(short h) { return Q6Vect32C(Q6V32_PUT_H1(data, h)); };

    // Set byte methods
    Q6Vect32C B0(signed char b) { return Q6Vect32C(Q6V32_PUT_B0(data, b)); };
    Q6Vect32C B1(signed char b) { return Q6Vect32C(Q6V32_PUT_B1(data, b)); };
    Q6Vect32C B2(signed char b) { return Q6Vect32C(Q6V32_PUT_B2(data, b)); };
    Q6Vect32C B3(signed char b) { return Q6Vect32C(Q6V32_PUT_B3(data, b)); };

  private:
    int data;
};

#endif /* __cplusplus */




/* Predicates */

typedef int Q6Pred;

#endif /* !Q6TYPES_H */
