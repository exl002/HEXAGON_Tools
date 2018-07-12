/*****************************************************************
# Copyright (c) $Date$ QUALCOMM INCORPORATED.
# All Rights Reserved.
# Modified by QUALCOMM INCORPORATED on $Date$
*****************************************************************/
#ifndef _HEXAGON_CIRC_BREV_INTRINSICS_H_
#define _HEXAGON_CIRC_BREV_INTRINSICS_H_ 1

#include <hexagon_protos.h>


#if !defined __HEXAGON_OPEN64__

/* Circular Load */
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_circ_load_update_D(Address dst, Address ptr, Word32 incr, Word32 bufsize, Word32 K)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_circ_load_update_D(dest,ptr,incr,bufsize,K)  \
    { ptr = (long long *) HEXAGON_circ_ldd (ptr, &dest, (((K+1)<<24)|(bufsize<<3)), (incr<<3)); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_circ_load_update_W(Address dst, Address ptr, Word32 incr, Word32 bufsize, Word32 K)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_circ_load_update_W(dest,ptr,incr,bufsize,K)  \
    { ptr = (int *) HEXAGON_circ_ldw (ptr, &dest, ((K<<24)|(bufsize<<2)), (incr<<2)); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_circ_load_update_H(Address dst, Address ptr, Word32 incr, Word32 bufsize, Word32 K)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_circ_load_update_H(dest,ptr,incr,bufsize,K)  \
    { ptr = (short *) HEXAGON_circ_ldh (ptr, &dest, (((K-1)<<24)|(bufsize<<1)), (incr<<1)); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_circ_load_update_UH(Address dst, Address ptr, Word32 incr, Word32 bufsize, Word32 K)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_circ_load_update_UH(dest,ptr,incr,bufsize,K) \
    { ptr = (unsigned short *) HEXAGON_circ_lduh (ptr, &dest, (((K-1)<<24)|(bufsize<<1)), (incr<<1)); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_circ_load_update_B(Address dst, Address ptr, Word32 I4, Word32 bufsize, Word64 K)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_circ_load_update_B(dest,ptr,incr,bufsize,K)  \
    { ptr = (char *) HEXAGON_circ_ldb (ptr, &dest, (((K-2)<<24)|(bufsize)), incr); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void  Q6_circ_load_update_UB(Address dst, Address ptr, Word32 I4, Word32 bufsize, Word64 K)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_circ_load_update_UB(dest,ptr,incr,bufsize,K) \
    { ptr = (unsigned char *) HEXAGON_circ_ldub (ptr, &dest, (((K-2)<<24)|(bufsize)), incr); }

/* Circular Store */
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_circ_store_update_D(Address src, Address ptr, Word32 incr, Word32 bufsize, Word32 K)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_circ_store_update_D(src,ptr,incr,bufsize,K)  \
    { ptr = (long long *) HEXAGON_circ_std (ptr, src, (((K+1)<<24)|(bufsize<<3)), (incr<<3)); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_circ_store_update_W(Address src, Address ptr, Word32 incr, Word32 bufsize, Word32 K)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_circ_store_update_W(src,ptr,incr,bufsize,K)  \
    { ptr = (int *) HEXAGON_circ_stw (ptr, src, ((K<<24)|(bufsize<<2)), (incr<<2)); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_circ_store_update_HL(Address src, Address ptr, Word32 incr, Word32 bufsize, Word32 K)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_circ_store_update_HL(src,ptr,incr,bufsize,K) \
    { ptr = (short *) HEXAGON_circ_sth (ptr, src, (((K-1)<<24)|(bufsize<<1)), (incr<<1)); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_circ_store_update_HH(Address src, Address ptr, Word32 incr, Word32 bufsize, Word32 K)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_circ_store_update_HH(src,ptr,incr,bufsize,K) \
    { ptr = (short *) HEXAGON_circ_sthhi (ptr, src, (((K-1)<<24)|(bufsize<<1)), (incr<<1)); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_circ_store_update_B(Word32 I4, Address ptr, Word32 I4, Word32 bufsize, Word64 K)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_circ_store_update_B(src,ptr,incr,bufsize,K)  \
    { ptr = (char *) HEXAGON_circ_stb (ptr, src, (((K-2)<<24)|bufsize), incr); }


/* Bit Reverse Load */
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_bitrev_load_update_D(Address dst, Address ptr, Word32 Iu4)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_bitrev_load_update_D(dest,ptr,log2bufsize) \
    { ptr = (long long *) HEXAGON_brev_ldd (ptr, &dest, (1<<(16-((log2bufsize) + 3)))); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_bitrev_load_update_W(Address dst, Address ptr, Word32 Iu4)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_bitrev_load_update_W(dest,ptr,log2bufsize) \
    { ptr = (int *) HEXAGON_brev_ldw (ptr, &dest, (1<<(16-((log2bufsize) + 2)))); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_bitrev_load_update_H(Address dst, Address ptr, Word32 Iu4)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_bitrev_load_update_H(dest,ptr,log2bufsize) \
    { ptr = (short *) HEXAGON_brev_ldh (ptr, &dest, (1<<(16-((log2bufsize) + 1)))); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_bitrev_load_update_UH(Address dst, Address ptr, Word32 Iu4)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_bitrev_load_update_UH(dest,ptr,log2bufsize) \
    { ptr = (unsigned short *) HEXAGON_brev_lduh (ptr, &dest, (1<<(16-((log2bufsize) + 1)))); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_bitrev_load_update_B(Address dst, Address ptr, Word32 Iu4)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_bitrev_load_update_B(dest,ptr,log2bufsize) \
    { ptr = (char *) HEXAGON_brev_ldb (ptr, &dest, (1<<(16-((log2bufsize))))); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_bitrev_load_update_UB(Address dst, Address ptr, Word32 Iu4)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_bitrev_load_update_UB(dest,ptr,log2bufsize) \
    { ptr = (unsigned char *) HEXAGON_brev_ldub (ptr, &dest, (1<<(16-((log2bufsize))))); }

/* Bit Reverse Store */

/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_bitrev_store_update_D(Address src, Address ptr, Word32 Iu4)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_bitrev_store_update_D(src,ptr,log2bufsize)   \
    { ptr = (long long *) HEXAGON_brev_std (ptr, src, (1<<(16-((log2bufsize) + 3)))); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_bitrev_store_update_W(Address src, Address ptr, Word32 Iu4)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_bitrev_store_update_W(src,ptr,log2bufsize)   \
    { ptr = (int *) HEXAGON_brev_stw (ptr, src, (1<<(16-((log2bufsize) + 2)))); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_bitrev_store_update_HL(Address src, Address ptr, Word32 Iu4)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_bitrev_store_update_HL(src,ptr,log2bufsize)   \
    { ptr = (short *) HEXAGON_brev_sth (ptr, src, (1<<(16-((log2bufsize) + 1)))); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_bitrev_store_update_HH(Address src, Address ptr, Word32 Iu4)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_bitrev_store_update_HH(src,ptr,log2bufsize)   \
    { ptr = (short *) HEXAGON_brev_sthhi (ptr, src, (1<<(16-((log2bufsize) + 1)))); }
/* ==========================================================================
   Assembly Syntax:       Return=instruction()
   C Intrinsic Prototype: void Q6_bitrev_store_update_B(Address src, Address ptr, Word32 Iu4)
   Instruction Type:      InstructionType
   Execution Slots:       SLOT0123
   ========================================================================== */
#define Q6_bitrev_store_update_B(src,ptr,log2bufsize)   \
    { ptr = (char *) HEXAGON_brev_stb (ptr, src, (1<<(16-((log2bufsize))))); }


#define HEXAGON_circ_ldd  __builtin_circ_ldd
#define HEXAGON_circ_ldw  __builtin_circ_ldw
#define HEXAGON_circ_ldh  __builtin_circ_ldh
#define HEXAGON_circ_lduh __builtin_circ_lduh
#define HEXAGON_circ_ldb  __builtin_circ_ldb
#define HEXAGON_circ_ldub __builtin_circ_ldub


#define HEXAGON_circ_std  __builtin_circ_std
#define HEXAGON_circ_stw  __builtin_circ_stw
#define HEXAGON_circ_sth  __builtin_circ_sth
#define HEXAGON_circ_sthhi __builtin_circ_sthhi
#define HEXAGON_circ_stb  __builtin_circ_stb


#define HEXAGON_brev_ldd  __builtin_brev_ldd
#define HEXAGON_brev_ldw  __builtin_brev_ldw
#define HEXAGON_brev_ldh  __builtin_brev_ldh
#define HEXAGON_brev_lduh __builtin_brev_lduh
#define HEXAGON_brev_ldb  __builtin_brev_ldb
#define HEXAGON_brev_ldub __builtin_brev_ldub

#define HEXAGON_brev_std  __builtin_brev_std
#define HEXAGON_brev_stw  __builtin_brev_stw
#define HEXAGON_brev_sth  __builtin_brev_sth
#define HEXAGON_brev_sthhi __builtin_brev_sthhi
#define HEXAGON_brev_stb  __builtin_brev_stb


#else /* #if !defined __HEXAGON_OPEN64__ */


#ifdef __cplusplus
extern "C"
{
#endif
	/* To prevent Circular Update Function Name mangling in C++ */
	void* __builtinfunction_circular_update8_for_load(void *ptr ,int __builtinvariable_hexagon_mr_assignment, int incr);
	void* __builtinfunction_circular_update4_for_load(void *ptr ,int __builtinvariable_hexagon_mr_assignment, int incr);
	void* __builtinfunction_circular_update2_for_load(void *ptr ,int __builtinvariable_hexagon_mr_assignment, int incr);
	void* __builtinfunction_circular_update1_for_load(void *ptr ,int __builtinvariable_hexagon_mr_assignment, int incr);
	void* __builtinfunction_circular_update8_for_store(void *ptr ,int __builtinvariable_hexagon_mr_assignment, int incr);
	void* __builtinfunction_circular_update4_for_store(void *ptr ,int __builtinvariable_hexagon_mr_assignment, int incr);
	void* __builtinfunction_circular_update2_for_store(void *ptr ,int __builtinvariable_hexagon_mr_assignment, int incr);
	void* __builtinfunction_circular_update1_for_store(void *ptr ,int __builtinvariable_hexagon_mr_assignment, int incr);


    /* To prevent Bitreverse Update Function Name mangling in C++ */
	void* __builtinfunction_bitreverse(void * pointer);

	void* __builtinfunction_bitrev_update8_for_load(void *ptr ,int __builtinvariable_hexagon_mr_assignment);
	void* __builtinfunction_bitrev_update4_for_load(void *ptr ,int __builtinvariable_hexagon_mr_assignment);
	void* __builtinfunction_bitrev_update2_for_load(void *ptr ,int __builtinvariable_hexagon_mr_assignment);
	void* __builtinfunction_bitrev_update1_for_load(void *ptr ,int __builtinvariable_hexagon_mr_assignment);
	void* __builtinfunction_bitrev_update8_for_store(void *ptr ,int __builtinvariable_hexagon_mr_assignment);
	void* __builtinfunction_bitrev_update4_for_store(void *ptr ,int __builtinvariable_hexagon_mr_assignment);
	void* __builtinfunction_bitrev_update2_for_store(void *ptr ,int __builtinvariable_hexagon_mr_assignment);
	void* __builtinfunction_bitrev_update1_for_store(void *ptr ,int __builtinvariable_hexagon_mr_assignment);

	/* The following two below needs to be present when the test is run with hexagon_-g++ (maybe also hexagon_-gcc) */
  #if !defined __HEXAGON_OPEN64__
  	int __builtin_mr_assignment(int x);
  	void* __builtin_pseudo_barrier(unsigned int ptr, int x);
  #endif

#ifdef __cplusplus
}
#endif


/* ************************** COMMON V1 & V2 CIRCULAR LOAD ***************************** */

#define Q6_circ_load_update_D(dest,ptr,incr,bufsize,K) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)+1)<<24) | ( (bufsize)*8))); \
	 (ptr) = (long long*)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (dest) = (*(ptr)); \
	 (ptr) =  (long long*)__builtinfunction_circular_update8_for_load(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment),((incr)*8));}

#define Q6_circ_load_update_W(dest,ptr,incr,bufsize,K) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment((((K)<<24) | ( (bufsize)*4))); \
	 (ptr) = (int*)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (dest) = (*(ptr)); \
	 (ptr) =  (int*)__builtinfunction_circular_update4_for_load((((void *)(ptr))),(__builtinvariable_hexagon_mr_assignment),((incr)*4));}


#define Q6_circ_load_update_H(dest,ptr,incr,bufsize,K) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)-1)<<24) | ( (bufsize)*2))); \
	 (ptr) = (short *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (dest) = (*(ptr)); \
	 (ptr) =  (short *)__builtinfunction_circular_update2_for_load(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment),((incr)*2));}

#define Q6_circ_load_update_B(dest,ptr,incr,bufsize,K) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)-2)<<24) | ( (bufsize)))); \
	 (ptr) = (char *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (dest) = (*(ptr)); \
	 (ptr) =  (char *)__builtinfunction_circular_update1_for_load(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment),((incr)));}

#define Q6_circ_load_update_UH(dest,ptr,incr,bufsize,K) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)-1)<<24) | ( (bufsize)*2))); \
	 (ptr) = (unsigned short *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (dest) = (*(ptr)); \
	 (ptr) =  (unsigned short *)__builtinfunction_circular_update2_for_load(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment),((incr)*2));}

#define Q6_circ_load_update_UB(dest,ptr,incr,bufsize,K) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)-2)<<24) | ( (bufsize)))); \
	 (ptr) = (unsigned char *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (dest) = (*(ptr)); \
	 (ptr) =  (unsigned char *)__builtinfunction_circular_update1_for_load(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment),((incr)));}

/* ********************* COMMON V1 & V2 CIRCULAR STORE  ******************************* */

#define Q6_circ_store_update_D(src,ptr,incr,bufsize,K) \
	  {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)+1)<<24) | ( (bufsize)*8))); \
	  (ptr) = (long long*)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	  (*(ptr)) = (src);  \
	  (ptr) =  (long long*)__builtinfunction_circular_update8_for_store(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment),((incr)*8));}

#define Q6_circ_store_update_W(src,ptr,incr,bufsize,K) \
	  {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment((((K)<<24) | ( (bufsize)*4))); \
	  (ptr) = (int*)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	  (*(ptr)) = (src);  \
	  (ptr) =  (int*)__builtinfunction_circular_update4_for_store(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment),((incr)*4));}

#define Q6_circ_store_update_HL(src,ptr,incr,bufsize,K) \
	  {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)-1)<<24) | ( (bufsize)*2))); \
	  (ptr) = (short *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	  (*(ptr)) = (src);  \
	  (ptr) =  (short *)__builtinfunction_circular_update2_for_store(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment),((incr)*2));}

#define Q6_circ_store_update_HH(src,ptr,incr,bufsize,K) \
	  {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)-1)<<24) | ( (bufsize)*2))); \
	  (ptr) = (short *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	  (*(ptr)) = (((src))>>16);  \
	  (ptr) =  (short *)__builtinfunction_circular_update2_for_store(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment),((incr)*2));}

#define Q6_circ_store_update_B(src,ptr,incr,bufsize,K) \
	  {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)-2)<<24) | ( (bufsize)))); \
	  (ptr) = (char *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	  (*(ptr)) = (src);  \
	  (ptr) =  (char *)__builtinfunction_circular_update1_for_store(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment),(incr));}








/* ************************** BITREV LOAD ***************************** */

#define Q6_bitrev_load_update_D(dest,ptr,log2bufsize) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment( (1<<(16-((log2bufsize) + 3))) ); \
	 (ptr) = (long long*)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (ptr) = (long long*)__builtinfunction_bitreverse(((void *)(ptr))); \
	 (dest) = (*(ptr)); \
	 (ptr) =  (long long*)__builtinfunction_bitrev_update8_for_load((((void *)(ptr))),(__builtinvariable_hexagon_mr_assignment));}

#define Q6_bitrev_load_update_W(dest,ptr,log2bufsize) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment((1<<(16-((log2bufsize) + 2)))); \
	 (ptr) = (int *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (ptr) = (int*)__builtinfunction_bitreverse(((void *)(ptr))); \
	 (dest) = (*(ptr)); \
	 (ptr) =  (int*)__builtinfunction_bitrev_update4_for_load((((void *)(ptr))),(__builtinvariable_hexagon_mr_assignment));}

#define Q6_bitrev_load_update_H(dest,ptr,log2bufsize) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment((1<<(16-((log2bufsize) + 1)))); \
	 (ptr) = (short *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (ptr) = (short*)__builtinfunction_bitreverse(((void *)(ptr))); \
	 (dest) = (*(ptr)); \
	 (ptr) =  (short *)__builtinfunction_bitrev_update2_for_load((((void *)(ptr))),(__builtinvariable_hexagon_mr_assignment));}

#define Q6_bitrev_load_update_B(dest,ptr,log2bufsize) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment((1<<(16-((log2bufsize))))); \
	 (ptr) = (char *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (ptr) = (char*)__builtinfunction_bitreverse(((void *)(ptr))); \
	 (dest) = (*(ptr)); \
	 (ptr) =  (char *)__builtinfunction_bitrev_update1_for_load((((void *)(ptr))),(__builtinvariable_hexagon_mr_assignment));}

#define Q6_bitrev_load_update_UH(dest,ptr,log2bufsize) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment((1<<(16-((log2bufsize) + 1)))); \
	 (ptr) = (unsigned short *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (ptr) = (unsigned short*)__builtinfunction_bitreverse(((void *)(ptr))); \
	 (dest) = (*(ptr)); \
	 (ptr) =  (unsigned short *)__builtinfunction_bitrev_update2_for_load((((void *)(ptr))),(__builtinvariable_hexagon_mr_assignment));}

#define Q6_bitrev_load_update_UB(dest,ptr,log2bufsize) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment((1<<(16-((log2bufsize))))); \
	 (ptr) = (unsigned char *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (ptr) = (unsigned char*)__builtinfunction_bitreverse(((void *)(ptr))); \
	 (dest) = (*(ptr)); \
	 (ptr) =  (unsigned char *)__builtinfunction_bitrev_update1_for_load((((void *)(ptr))),(__builtinvariable_hexagon_mr_assignment));}

/* ********************* BITREV STORE ******************************* */

#define Q6_bitrev_store_update_D(src,ptr,log2bufsize) \
	  {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment((1<<(16-((log2bufsize) + 3)))); \
	  (ptr) = (long long*)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	  (ptr) = (long long*)__builtinfunction_bitreverse(((void *)(ptr))); \
	  (*(ptr)) = (src);  \
	  (ptr) =  (long long*)__builtinfunction_bitrev_update8_for_store(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment));}

#define Q6_bitrev_store_update_W(src,ptr,log2bufsize) \
	  {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment((1<<(16-((log2bufsize) + 2)))); \
	  (ptr) = (int*)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	  (ptr) = (int*)__builtinfunction_bitreverse(((void *)(ptr))); \
	  (*(ptr)) = (src);  \
	  (ptr) =  (int*)__builtinfunction_bitrev_update4_for_store(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment));}

#define Q6_bitrev_store_update_HL(src,ptr,log2bufsize) \
	  {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment((1<<(16-((log2bufsize) + 1)))); \
	  (ptr) = (short *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	  (ptr) = (short*)__builtinfunction_bitreverse(((void *)(ptr))); \
	  (*(ptr)) = (src);  \
	  (ptr) =  (short *)__builtinfunction_bitrev_update2_for_store(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment));}

#define Q6_bitrev_store_update_HH(src,ptr,log2bufsize) \
	  {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment((1<<(16-((log2bufsize) + 1)))); \
	  (ptr) = (short *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	  (ptr) = (short*)__builtinfunction_bitreverse(((void *)(ptr))); \
	  (*(ptr)) = (((src))>>16);  \
	  (ptr) =  (short *)__builtinfunction_bitrev_update2_for_store(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment));}

#define Q6_bitrev_store_update_B(src,ptr,log2bufsize) \
	  {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment((1<<(16-((log2bufsize))))); \
	  (ptr) = (char *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	  (ptr) = (char*)__builtinfunction_bitreverse(((void *)(ptr))); \
	  (*(ptr)) = (src);  \
	  (ptr) =  (char *)__builtinfunction_bitrev_update1_for_store(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment));}


/************************** V2 specific CIRCULAR LOAD with ++I *****************************/

#define Q6_circ_load_updateI_D(dest,ptr,incr,bufsize,K) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)+1)<<24) | ( (bufsize)*8))); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,(incr),7,17); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,HEXAGON_R_extractu_RII((incr),4,7),4,28); \
	 (ptr) = (long long*)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (dest) = (*(ptr)); \
	 (ptr) =  (long long*)__builtinfunction_circular_update8I_for_load(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment));}

#define Q6_circ_load_updateI_W(dest,ptr,incr,bufsize,K) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment((((K)<<24) | ( (bufsize)*4))); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,((incr)),7,17); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,HEXAGON_R_extractu_RII((incr),4,7),4,28); \
	 (ptr) = (int*)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (dest) = (*(ptr)); \
	 (ptr) =  (int*)__builtinfunction_circular_update4I_for_load((((void *)(ptr))),(__builtinvariable_hexagon_mr_assignment));}


#define Q6_circ_load_updateI_H(dest,ptr,incr,bufsize,K) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)-1)<<24) | ( (bufsize)*2))); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,(incr),7,17); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,HEXAGON_R_extractu_RII((incr),4,7),4,28); \
	 (ptr) = (short *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (dest) = (*(ptr)); \
	 (ptr) =  (short *)__builtinfunction_circular_update2I_for_load(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment));}

#define Q6_circ_load_updateI_B(dest,ptr,incr,bufsize,K) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)-2)<<24) | ( (bufsize)))); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,(incr),7,17); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,HEXAGON_R_extractu_RII((incr),4,7),4,28); \
	 (ptr) = (char *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (dest) = (*(ptr)); \
	 (ptr) =  (char *)__builtinfunction_circular_update1I_for_load(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment));}

#define Q6_circ_load_updateI_UH(dest,ptr,incr,bufsize,K) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)-1)<<24) | ( (bufsize)*2))); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,(incr),7,17); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,HEXAGON_R_extractu_RII((incr),4,7),4,28); \
	 (ptr) = (unsigned short *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (dest) = (*(ptr)); \
	 (ptr) =  (unsigned short *)__builtinfunction_circular_update2I_for_load(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment));}

#define Q6_circ_load_updateI_UB(dest,ptr,incr,bufsize,K) \
	 {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)-2)<<24) | ( (bufsize)))); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,(incr),7,17); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,HEXAGON_R_extractu_RII((incr),4,7),4,28); \
	 (ptr) = (unsigned char *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	 (dest) = (*(ptr)); \
	 (ptr) =  (unsigned char *)__builtinfunction_circular_update1I_for_load(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment));}


/* ********************* V2 specific CIRCULAR STORE with ++I ******************************* */


#define Q6_circ_store_updateI_D(src,ptr,incr,bufsize,K) \
	  {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)+1)<<24) | ( (bufsize)*8))); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,(incr),7,17); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,HEXAGON_R_extractu_RII((incr),4,7),4,28); \
	  (ptr) = (long long*)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	  (*(ptr)) = (src);  \
	  (ptr) =  (long long*)__builtinfunction_circular_update8I_for_store(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment));}

#define Q6_circ_store_updateI_W(src,ptr,incr,bufsize,K) \
	  {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment((((K)<<24) | ( (bufsize)*4))); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,(incr),7,17); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,HEXAGON_R_extractu_RII((incr),4,7),4,28); \
	  (ptr) = (int*)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	  (*(ptr)) = (src);  \
	  (ptr) =  (int*)__builtinfunction_circular_update4I_for_store(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment));}

#define Q6_circ_store_updateI_HL(src,ptr,incr,bufsize,K) \
	  {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)-1)<<24) | ( (bufsize)*2))); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,(incr),7,17); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,HEXAGON_R_extractu_RII((incr),4,7),4,28); \
	  (ptr) = (short *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	  (*(ptr)) = (src);  \
	  (ptr) =  (short *)__builtinfunction_circular_update2I_for_store(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment));}

#define Q6_circ_store_updateI_HH(src,ptr,incr,bufsize,K) \
	  {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)-1)<<24) | ( (bufsize)*2))); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,(incr),7,17); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,HEXAGON_R_extractu_RII((incr),4,7),4,28); \
	  (ptr) = (short *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	  (*(ptr)) = (((src))>>16);  \
	  (ptr) =  (short *)__builtinfunction_circular_update2I_for_store(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment));}

#define Q6_circ_store_updateI_B(src,ptr,incr,bufsize,K) \
	  {int __builtinvariable_hexagon_mr_assignment = __builtin_mr_assignment(((((K)-2)<<24) | ( (bufsize)))); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,(incr),7,17); \
	 __builtinvariable_hexagon_mr_assignment = HEXAGON_R_insert_RII(__builtinvariable_hexagon_mr_assignment,HEXAGON_R_extractu_RII((incr),4,7),4,28); \
	  (ptr) = (char *)__builtin_pseudo_barrier(((unsigned int)(ptr)),__builtinvariable_hexagon_mr_assignment);	\
	  (*(ptr)) = (src);  \
	  (ptr) =  (char *)__builtinfunction_circular_update1I_for_store(((void *)(ptr)),(__builtinvariable_hexagon_mr_assignment));}

#endif  /* #if !defined __HEXAGON_OPEN64__ */


#endif  /* #ifndef _HEXAGON_CIRC_BREV_INTRINSICS_H_ */

