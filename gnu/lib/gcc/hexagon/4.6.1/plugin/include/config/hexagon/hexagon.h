/* Definitions of HEXAGON target
   Copyright (C) 1998, 1999, 2000, 2001, 2002 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */


/*-----------------------------------------------------------------------
This target description is used for both GCC 3.4.6 and one of the latest
versions of GCC.  This macro and some includes in the machine description
are used to switch between the two implementations.
-----------------------------------------------------------------------*/

#ifndef GCC_HEXAGON_H
#define GCC_HEXAGON_H


/*--------------------------------------------------------
For documentation, please see the appropriate section of
the GCC Internals Manual, which can be found at
http://gcc.gnu.org/onlinedocs/gcc-<version.triplet>/gccint
--------------------------------------------------------*/

/*-------------------------------------
Controlling the Compilation Driver, gcc
-------------------------------------*/

#define CC1_SPEC "%{G*}"

#define CC1PLUS_SPEC "%{G*}"

#define DWARF2_DEBUGGING_INFO 1         /* dwarf2 debugging info */
#define DWARF2_ASM_LINE_DEBUG_INFO 1
#define PREFERRED_DEBUGGING_TYPE DWARF2_DEBUG

/*---------------------------
Run-time Target Specification
---------------------------*/

/* Define hexagon and __HEXAGON_<architecture>__ */
#define TARGET_CPU_CPP_BUILTINS() \
  do { \
    switch(hexagon_arch){ \
      case HEXAGON_ARCH_V1: \
        builtin_define ("__HEXAGON_V1__"); \
        builtin_define ("__HEXAGON_ARCH__=1"); \
        break; \
      case HEXAGON_ARCH_V2: \
        builtin_define ("__HEXAGON_V2__"); \
        builtin_define ("__HEXAGON_ARCH__=2"); \
        break; \
      case HEXAGON_ARCH_V3: \
        builtin_define ("__HEXAGON_V3__"); \
        builtin_define ("__HEXAGON_ARCH__=3"); \
        break; \
      case HEXAGON_ARCH_V4: \
        builtin_define ("__HEXAGON_V4__"); \
        builtin_define ("__HEXAGON_ARCH__=4"); \
        break; \
      case HEXAGON_ARCH_V5: \
        builtin_define ("__HEXAGON_V5__"); \
        builtin_define ("__HEXAGON_ARCH__=5"); \
        break; \
      case HEXAGON_ARCH_V55: \
	builtin_define ("__HEXAGON_V55__"); \
	builtin_define ("__HEXAGON_ARCH__=55"); \
	break; \
      default: \
        abort(); \
    } \
    builtin_define ("__hexagon__"); \
    QDSP6_COMPAT_MACROS \
    builtin_assert ("machine=hexagon"); \
  }while(0)

/* Append (hexagon) to the version string. */
#define TARGET_VERSION fprintf(stderr, " (hexagon)");


/*---------------------------------------------------
Defining data structures for per-function information
---------------------------------------------------*/

#define INIT_EXPANDERS \
  hexagon_init_expanders()


/*------------
Storage Layout
------------*/

/* HEXAGON is little endian. */
#define BITS_BIG_ENDIAN 0

#define BYTES_BIG_ENDIAN 0

#define WORDS_BIG_ENDIAN 0

/* Bytes (units) are 8 bits on HEXAGON. */

/* HEXAGON general purpose registers each hold 4 bytes (32 bits). */
#define UNITS_PER_WORD 4

/* Pointers on HEXAGON are 32 bits (word sized). */

/* Most HEXAGON instructions operate on words. */
#define PROMOTE_MODE(MODE, UNSIGNEDP, TYPE) \
  if(GET_MODE_CLASS (MODE) == MODE_INT \
     && GET_MODE_SIZE (MODE) < GET_MODE_SIZE (SImode)){ \
      (MODE) = SImode; \
  }

/* As specified by the ABI, all arguments passed on the stack are at least word
   aligned. */
#define PARM_BOUNDARY 32

/* As specified by the ABI, SP should be 8-byte aligned upon function entry. */
#define STACK_BOUNDARY 64

/* Code must be 32-bit aligned. */
#define FUNCTION_BOUNDARY 32

/* No native data types have more than 8-byte alignment by default. */
#define BIGGEST_ALIGNMENT 64

/* GCC uses the following internal structure to represent a
   pointer-to-member-function:

   struct {
    union {
        void (*fn)();
        ptrdiff_t vtable_index;
    };
    ptrdiff_t delta;
   };

   Generally GCC must use one bit to indicate whether the function that will be
   called through a pointer-to-member-function is virtual.
   Normally, we assume that the low-order bit of a function pointer must always
   be zero (word aligned). Then, by ensuring that the vtable_index is odd,
   we can distinguish which variant of the union is in use. But, on some
   platforms function pointers can be odd, and so this doesn't work. In that
   case, we use the low-order bit of the delta field, and shift the remainder
   of the delta field to the left.
   On HEXAGON use of delta field is not _needed_ but produces a better code for
   several scenarios. Particularly for an empty class with function
   definitions:

   (from bug 3711)

   struct S {
       int func(char)      { return 100; }
   } s;

   int main(void)
   {
      int (S::*pfc)(char)    = &S::func;
      (s.*pfc)(0);
   }

   GCC will use default alignment of "char" for 's', but might use memw/mov_si
   to access nonexistent vtable in "front" of s, resulting in potential conflict.

   When delta field is used via TARGET_PTRMEMFUNC_VBIT_LOCATION, compiler is
   capable to determine that there is _no_ vtable to access in this case, and
   simply optimizes out the access code. If a vtable does exist, it will be word
   aligned by definition.
   */
#define TARGET_PTRMEMFUNC_VBIT_LOCATION ptrmemfunc_vbit_in_delta


/* This is only used for internal sorting during packetization
   and eventually need to be replaced with a linked list or any
   other scalable method of bookkeeping */
#define MAX_NUM_EDGES_IN_BB	1024

/* HEXAGON has byte-sized stores. */

#define DATA_ALIGNMENT(TYPE, ALIGN) \
  hexagon_data_alignment(TYPE, ALIGN)

#define CONSTANT_ALIGNMENT(CONSTANT, ALIGN) \
  hexagon_constant_alignment(CONSTANT, ALIGN)

#define LOCAL_ALIGNMENT(TYPE, ALIGN) \
  hexagon_local_alignment(TYPE, ALIGN)

/* Mis-aligned accesses are exceptions. */
#define STRICT_ALIGNMENT 1

/* As specified by the ABI, the type used to declare a bitfield affects the
  alignment of the containing struct as if a member of that type were present.
  Also, bitfields do not cross the alignment boundaries of their type. */
#define PCC_BITFIELD_TYPE_MATTERS 1

/* HEXAGON emulates IEEE floating point. */

/* The prevailing floating point rounding mode is round towards nearest. */


/*----------------------------------
Layout of Source Language Data Types
----------------------------------*/

/* On HEXAGON,
   ints         are word sized,
   shorts       are half-word sized,
   longs        are word sized,
   long longs   are doubleword sized,
   chars        are 8 bits,
   bools        are 8 bits,
   floats       are word sized,
   doubles      are doubleword sized, and
   long doubles are doubleword sized. */

/* As specified by the ABI, the "char" type behaves like the "unsigned char"
   type. */
#define DEFAULT_SIGNED_CHAR 0

/* GCC uses the following internal structure to represent a
   pointer-to-member-function:

   struct {
    union {
        void (*fn)();
        ptrdiff_t vtable_index;
    };
    ptrdiff_t delta;
   };

   Generally GCC must use one bit to indicate whether the function that will be
   called through a pointer-to-member-function is virtual.
   Normally, we assume that the low-order bit of a function pointer must always
   be zero (word aligned). Then, by ensuring that the vtable_index is odd,
   we can distinguish which variant of the union is in use. But, on some
   platforms function pointers can be odd, and so this doesn't work. In that
   case, we use the low-order bit of the delta field, and shift the remainder
   of the delta field to the left.
   On HEXAGON use of delta field is not _needed_ but produces a better code for
   several scenarios. Particularly for an empty class with function
   definitions:

   (from bug 3711)

   struct S {
       int func(char)      { return 100; }
   } s;

   int main(void)
   {
      int (S::*pfc)(char)    = &S::func;
      (s.*pfc)(0);
   }

   GCC will use default alignment of "char" for 's', but might use memw/mov_si
   to access nonexistent vtable in "front" of s, resulting in potential conflict.

   When delta field is used via TARGET_PTRMEMFUNC_VBIT_LOCATION, compiler is
   capable to determine that there is _no_ vtable to access in this case, and
   simply optimizes out the access code. If a vtable does exist, it will be word
   aligned by definition.
   */
#define TARGET_PTRMEMFUNC_VBIT_LOCATION ptrmemfunc_vbit_in_delta


/*--------------------------------
Basic Characteristics of Registers
--------------------------------*/

/* 32 GPRs, 4 predicate regs, 11 CRs (sa0/lc0, sa1/lc1, m0/m1, usr, ugp, gp,
   cs0/1), and fake frame pointer and argument pointer registers */
#define FIRST_PSEUDO_REGISTER (32 + 4 + 11 + 2)

#define FIXED_REGISTERS \
  { \
    0, 0, 0, 0, 0, 0, 0, 0, /*  0 -  7 */ \
    0, 0, 0, 0, 0, 0, 0, 0, /*  8 - 15 */ \
    0, 0, 0, 0, 0, 0, 0, 0, /* 16 - 23 */ \
    0, 0, 0, 0, 0, 1, 1, 0, /* 24 - 31 */ \
    0, 0, 0, 0,             /* p0 - p3 */ \
    1, 1, 1, 1, 1, 1, 1, 1, /* sa0, lc0, sa1, lc1, m0, m1, usr, ugp */ \
    1, 1, 1,                /* gp, cs0, cs1 */ \
    1, 1,                   /* fake _fp and _ap */ \
  }

#define CALL_USED_REGISTERS \
  { \
    1, 1, 1, 1, 1, 1, 1, 1, /*  0 -  7 */ \
    1, 1, 1, 1, 1, 1, 1, 1, /*  8 - 15 */ \
    1, 1, 1, 1, 1, 1, 1, 1, /* 16 - 23 */ \
    0, 0, 0, 0, 1, 1, 1, 1, /* 24 - 31 */ \
    1, 1, 1, 1,             /* p0 - p3 */ \
    1, 1, 1, 1, 1, 1, 1, 1, /* sa0, lc0, sa1, lc1, m0, m1, usr, ugp */ \
    1, 1, 1,                /* gp, cs0, cs1 */ \
    1, 1,                   /* fake _fp and _ap */ \
  }


/*-------------------------
How Values Fit in Registers
-------------------------*/

/* Values are stored in the smallest number of word sized registers needed to
   fit the mode. */
#define HARD_REGNO_NREGS(REGNO, MODE) \
  (P_REGNO_P (REGNO) ? 1 \
   : ((GET_MODE_SIZE (MODE) + UNITS_PER_WORD - 1) / UNITS_PER_WORD))

/* For HEXAGON, register pairs must start on an even numbered register. */
#define HARD_REGNO_MODE_OK(REGNO, MODE) \
  (P_REGNO_P (REGNO) \
   ? ((MODE) == BImode || (MODE) == QImode) \
   : G_REGNO_P(REGNO) \
     ? (GET_MODE_SIZE(MODE) > UNITS_PER_WORD ? (REGNO) % 2 == 0 : 1) \
     : (REGNO) == FRAME_POINTER_REGNUM || (REGNO) == ARG_POINTER_REGNUM \
       ? GET_MODE_CLASS (MODE) == MODE_INT \
       : 0 /* HARD_REGNO_MODE_OK(control-reg) == 0 */)

/* ??? not sure about this one: */
#define MODES_TIEABLE_P(MODE1, MODE2) \
  (GET_MODE_CLASS (MODE1) == GET_MODE_CLASS (MODE2) \
   && (((MODE1) == BImode) == ((MODE2) == BImode)))

/* ??? Does this affect us? */
#define AVOID_CCMODE_COPIES 1


/*---------------------
Handling Leaf Functions
---------------------*/

/* HEXAGON does not have register windows. */


/*-------------------------
Registers That Form a Stack
-------------------------*/

/* HEXAGON does not have any stack-like registers. */


/*--------------
Register Classes
--------------*/

enum reg_class {
  NO_REGS,
  STACK_REGS,             /* stack pointer */
  GENERAL_REGS,           /* registers r0 through r31 */
  PREDICATE_REGS,         /* predicates p0 through p3 */
  CONTROL_REGS,           /* sa0, lc0, sa1, lc1, m0, m1, usr, ugp */
  FAKE_REGS,              /* _fp, _ap */
  ALL_REGS,
  LIM_REG_CLASSES
};

#define N_REG_CLASSES ((int) LIM_REG_CLASSES)

#define REG_CLASS_NAMES       \
  {                           \
    "NO_REGS",                \
    "STACK_REGS",             \
    "GENERAL_REGS",           \
    "PREDICATE_REGS",         \
    "CONTROL_REGS",           \
    "FAKE_REGS",              \
    "ALL_REGS"                \
  }

#define REG_CLASS_CONTENTS       \
  {                              \
    /* NO_REGS */                \
    {0x00000000, 0x00000},       \
    /* STACK_REGS */             \
    {(1 << (STACK_POINTER_REGNUM)), 0x00000},       \
    /* GENERAL_REGS */           \
    {0xffffffff, 0x00000},       \
    /* PREDICATE_REGS */         \
    {0x00000000, 0x0000f},       \
    /* CONTROL_REGS */           \
    {0x00000000, 0x07ff0},       \
    /* FAKE_REGS */              \
    {0x00000000, 0x18000},       \
    /* ALL_REGS */               \
    {0xffffffff, 0x18fff},       \
  }

#define REGNO_REG_CLASS(REGNO) \
  ( (REGNO) == (STACK_POINTER_REGNUM) ? STACK_REGS \
  : (REGNO) <  32 ? GENERAL_REGS \
  : (REGNO) < (32 + 4) ? PREDICATE_REGS \
  : (REGNO) < (32 + 4 + 11) ? CONTROL_REGS \
  : (REGNO) < (32 + 4 + 11 + 2) ? FAKE_REGS \
  : ALL_REGS)

/* In base+offset and base+index addressing, the base must be a general purpose
   register. */
#define BASE_REG_CLASS GENERAL_REGS

/* In base+index addressing, the index must be a general purpose register. */
#define INDEX_REG_CLASS \
  ((TARGET_V4_FEATURES && TARGET_BASE_PLUS_INDEX) ? GENERAL_REGS : NO_REGS)

#define CANNOT_CHANGE_MODE_CLASS(FROM, TO, CLASS) \
  hexagon_cannot_change_mode_class(FROM, TO, CLASS)

/* The following macro defines cover classes for Integrated Register
   Allocator.  Cover classes is a set of non-intersected register
   classes covering all hard registers used for register allocation
   purpose.  Any move between two registers of a cover class should be
   cheaper than load or store of the registers.  The macro value is
   array of register classes with LIM_REG_CLASSES used as the end
   marker.  */
#define IRA_COVER_CLASSES \
{                 \
  ALL_REGS,       \
  LIM_REG_CLASSES \
}

/* In base+offset addressing, the base must be a general purpose register. */
#define REGNO_OK_FOR_BASE_P(NUM) ((NUM) < 32)

/* HEXAGON does not have base+index addressing pre-V4.  */
#define REGNO_OK_FOR_INDEX_P(NUM) \
  (TARGET_V4_FEATURES && REGNO_OK_FOR_BASE_P (NUM))

#define PREFERRED_RELOAD_CLASS(X, CLASS) CLASS

/* ??? maybe try this with predicates? */
/*#define SMALL_REGISTER_CLASSES*/
/*#define CLASS_LIKELY_SPILLED_P(CLASS)*/

#define CLASS_MAX_NREGS(CLASS, MODE) HARD_REGNO_NREGS (0, MODE)

/*----------------
Basic Stack Layout
----------------*/

/* See the comment in hexagon.c containing "HEXAGON stack frames look like:" for a
   diagram of stack frames on HEXAGON. */
#define STACK_GROWS_DOWNWARD 1
#define FRAME_GROWS_DOWNWARD 1

#ifdef LINUX
#undef TARGET_LIBC_PROVIDES_SSP
#else
#define TARGET_LIBC_PROVIDES_SSP 1
#endif


#define STARTING_FRAME_OFFSET 0

#define FIRST_PARM_OFFSET(FUNDECL) 0

#define RETURN_ADDR_RTX(COUNT, FRAMEADDR) \
  hexagon_return_addr_rtx(COUNT, FRAMEADDR)

#define INCOMING_RETURN_ADDR_RTX gen_rtx_REG (Pmode, LINK_REGNUM)

#define INCOMING_FRAME_SP_OFFSET 0


/*------------------------
Exception Handling Support
------------------------*/

#define EH_RETURN_DATA_REGNO(N) \
  ((N) < 4 ? (N) + (hexagon_abi != HEXAGON_ABI_1 ? 0 : 20) : INVALID_REGNUM)

#define EH_RETURN_STACKADJ_RTX gen_rtx_REG (Pmode, 14)

/* Set frame_related, as otherwise its optimized away */
#define EH_RETURN_HANDLER_RTX \
  ({ rtx tmp = gen_frame_mem (Pmode, \
              plus_constant(hard_frame_pointer_rtx, UNITS_PER_WORD)); \
     MEM_VOLATILE_P(tmp) = 1; \
     tmp; })

#define ASM_PREFERRED_EH_DATA_FORMAT(CODE, GLOBAL) \
  (flag_pic  ? DW_EH_PE_aligned : DW_EH_PE_absptr)

/* ??? do we want this? */
/*#define ASM_MAYBE_OUTPUT_ENCODED_ADDR_RTX(FILE, ENCODING, SIZE, ADDR, DONE)*/


/*------------------------------------
Registers That Address the Stack Frame
------------------------------------*/

#define STACK_POINTER_REGNUM 29

/* Fake frame pointer register that will always be eliminated */
#define FRAME_POINTER_REGNUM 47

#define HARD_FRAME_POINTER_REGNUM 30

/* Fake argument pointer register that will always be eliminated */
#define ARG_POINTER_REGNUM 48

/* Must not be an arg reg */
#define STATIC_CHAIN_REGNUM 15

/*#define DWARF_FRAME_REGISTERS*/ /* ??? 14? */

#define DWARF_FRAME_RETURN_COLUMN DWARF_FRAME_REGNUM (LINK_REGNUM)
#define DWARF_ALT_FRAME_RETURN_COLUMN DWARF_FRAME_REGISTERS


/*---------------------------------------
Eliminating Frame Pointer and Arg Pointer
---------------------------------------*/

/* Eliminate the fake frame pointer and argument pointer and use the stack
   pointer instead of the frame pointer whenever possible. */
#define ELIMINABLE_REGS                                \
  {                                                    \
    {ARG_POINTER_REGNUM,   STACK_POINTER_REGNUM},      \
    {FRAME_POINTER_REGNUM, STACK_POINTER_REGNUM},      \
    {HARD_FRAME_POINTER_REGNUM, STACK_POINTER_REGNUM}, \
    {ARG_POINTER_REGNUM,   HARD_FRAME_POINTER_REGNUM}, \
    {FRAME_POINTER_REGNUM, HARD_FRAME_POINTER_REGNUM}  \
  }

#define INITIAL_ELIMINATION_OFFSET(FROM, TO, OFFSET) \
  (OFFSET) = hexagon_initial_elimination_offset(FROM, TO)


/*-------------------------------------
Passing Function Arguments on the Stack
-------------------------------------*/

/* We allocate stack for all stack-passed arguments in one go instead of pushing
   them. */
#define PUSH_ARGS 0

/* All of the space needed to pass arguments is allocated in the prologue. */
#define ACCUMULATE_OUTGOING_ARGS 1

#define CALL_POPS_ARGS(CUM) 0


/*----------------------------
Passing Arguments in Registers
----------------------------*/

#define FUNCTION_ARG(CUM, MODE, TYPE, NAMED) \
  hexagon_function_arg(CUM, MODE, TYPE, NAMED)

/* On the HEXAGON this value is an accumulating count of the number of argument
   registers that have been filled with argument values or skipped. */
#define CUMULATIVE_ARGS int

extern struct hexagon_frame_info *hexagon_frame_info(void);
#define INIT_CUMULATIVE_ARGS(CUM, FNTYPE, LIBNAME, INDIRECT, N_NAMED_ARGS) \
  hexagon_frame_info()->named_arg_stack_words = 0; \
  (CUM) = 0

#define FUNCTION_ARG_ADVANCE(CUM, MODE, TYPE, NAMED) \
  (CUM) = hexagon_function_arg_advance(CUM, MODE, TYPE, NAMED)

#define FUNCTION_ARG_REGNO_P(REGNO) \
  (IN_RANGE ((REGNO), FIRST_ARG_REGNUM, \
                      FIRST_ARG_REGNUM + HEXAGON_NUM_ARG_REGS - 1))


/*-------------------------------------
How Scalar Function Values Are Returned
-------------------------------------*/

#define LIBCALL_VALUE(MODE) gen_rtx_REG (MODE, RETURN_VALUE_REGNUM)

#define FUNCTION_VALUE_REGNO_P(REGNO) ((REGNO) == RETURN_VALUE_REGNUM)


/*---------------------------
How Large Values Are Returned
---------------------------*/

/* Structs that fit in a register or register pair should be returned in one. */
#define DEFAULT_PCC_STRUCT_RETURN 0


/*---------------------
Function Entry and Exit
---------------------*/

/* ??? maybe? */
/*#define EXIT_IGNORE_STACK*/

/* The link regsiter is live across leaf functions that do not use
   allocframe. */
#define EPILOGUE_USES(REGNO) ((REGNO) == LINK_REGNUM)

/* ??? maybe? */
/*#define EH_USES(REGNO)*/


/*---------------------------
Generating Code for Profiling
---------------------------*/

/* Hexagon (like all modern profilers) does not use counters. */
#define NO_PROFILE_COUNTERS 1

/* Use PROFILE_HOOK instead of FUNCTION_PROFILER; by emitting rtx,
   the packetizer can slot in the call to _mcount as appropriate. */
#define FUNCTION_PROFILER(FILE, LABELNO)
#define PROFILE_HOOK(X) \
	emit_library_call (init_one_libfunc ("_mcount"), LCT_NORMAL, VOIDmode, 0);


/*------------------------------
Trampolines for Nested Functions
------------------------------*/

#define TRAMPOLINE_SIZE hexagon_trampoline_size ()

/*--------------
Addressing Modes
--------------*/

#define HAVE_PRE_INCREMENT 0

#define HAVE_PRE_DECREMENT 0

#define HAVE_POST_INCREMENT 1

#define HAVE_POST_DECREMENT 1

#define HAVE_PRE_MODIFY_DISP 0

#define HAVE_POST_MODIFY_DISP 1

#define HAVE_PRE_MODIFY_REG 0

#define HAVE_POST_MODIFY_REG 0

/* ??? What happens if I change this to CONSTANT_P (X)? */
/*#define CONSTANT_ADDRESS_P(X) (GET_CODE (X) == LABEL_REF)*/
#define CONSTANT_ADDRESS_P(X) CONSTANT_P (X)

/* HEXAGON V4 and later has base + index addressing. */
#define MAX_REGS_PER_ADDRESS 2

#ifdef HAVE_AS_TLS
#undef TARGET_HAVE_TLS
#define TARGET_HAVE_TLS true
#else
#undef TARGET_HAVE_TLS
#define TARGET_HAVE_TLS false
#endif

extern int symbol_mentioned_p (rtx x);
extern int label_mentioned_p (rtx x);

#define PIC_OFFSET_TABLE_REGNUM (flag_pic ? 24 : INVALID_REGNUM)

#define LEGITIMATE_PIC_OPERAND_P(X)   \
  hexagon_legitimate_pic_operand_p(X)

#define GO_IF_MODE_DEPENDENT_ADDRESS(ADDR, LABEL) \
  if(GET_CODE (ADDR) == POST_INC || GET_CODE (ADDR) == POST_DEC){ \
    goto LABEL; \
  }

#define LEGITIMATE_CONSTANT_P(X) \
  (!hexagon_tls_referenced_p (X))


/*----------------
Anchored Addresses
----------------*/

/* ??? maybe? */


/*-------------------------------------
Describing Relative Costs of Operations
-------------------------------------*/

/* Non general purpose transfers have slot restrictions. */
#define REGISTER_MOVE_COST(MODE, FROM, TO)               \
  ( FROM == GENERAL_REGS   ? ( TO == GENERAL_REGS   ? 2  \
                             : TO == PREDICATE_REGS ? 3  \
                             :     /*CONTROL_REGS*/   3) \
  : FROM == PREDICATE_REGS ? ( TO == GENERAL_REGS   ? 3  \
                             : TO == PREDICATE_REGS ? 6  \
                             :     /*CONTROL_REGS*/   6) \
  :       /*CONTROL_REGS*/   ( TO == GENERAL_REGS   ? 3  \
                             : TO == PREDICATE_REGS ? 6  \
                             :     /*CONTROL_REGS*/   6))

/* Loads and stores are cheap on HEXAGON.  Yay, IMT. */
#define MEMORY_MOVE_COST(MODE, CLASS, IN) 4

/* Branches are very cheap on HEXAGON, but they restrict scheduling. */
#define BRANCH_COST(speed_p, predictable_p) (speed_p ? (predictable_p ? 1 : 3) : (predictable_p ? 1 : 3))

/* Load and store cycles are independent of access size. */
#define SLOW_BYTE_ACCESS 1

/* V4's store-immediate instructions allow efficient copying of constant
   strings. */
#define STORE_BY_PIECES_P(SIZE, ALIGNMENT) \
  hexagon_store_by_pieces_p(SIZE, ALIGNMENT)

/* Direct calls can be executed on more slots than indirect calls. */
#define NO_FUNCTION_CSE 1


/*--------------------------------------------------
Dividing the Output into Sections (Texts, Data, ...)
--------------------------------------------------*/

#define TEXT_SECTION_ASM_OP "\t.text"

#define DATA_SECTION_ASM_OP "\t.data"

#define SDATA_SECTION_ASM_OP "\t.section .sdata"

#define BSS_SECTION_ASM_OP "\t.section .bss"

#define SBSS_SECTION_ASM_OP "\t.section .sbss"


/*----------------------------------------
The Overall Framework of an Assembler File
----------------------------------------*/

#define ASM_COMMENT_START "//"

#define ASM_APP_ON "//APP\n"

#define ASM_APP_OFF "//NO_APP\n"


/*-------------------------------
Output of Uninitialized Variables
-------------------------------*/

#define ASM_OUTPUT_ALIGNED_DECL_COMMON(STREAM, DECL, NAME, SIZE, ALIGNMENT) \
  hexagon_asm_output_aligned_decl_common(STREAM, DECL, NAME, SIZE, ALIGNMENT, false)

#define ASM_OUTPUT_ALIGNED_DECL_LOCAL(STREAM, DECL, NAME, SIZE, ALIGNMENT) \
  hexagon_asm_output_aligned_decl_common(STREAM, DECL, NAME, SIZE, ALIGNMENT, true)


/*-----------------------------
Output and Generation of Labels
-----------------------------*/

/* used by the default version of TARGET_ASM_GLOBALIZE_LABEL */
#define GLOBAL_ASM_OP "\t.globl "


/*------------------------------
Output of Assembler Instructions
------------------------------*/

#define REGISTER_NAMES                                      \
  { /* general purpose registers */                         \
     "r0",  "r1",  "r2",  "r3",  "r4",  "r5",  "r6",  "r7", \
     "r8",  "r9", "r10", "r11", "r12", "r13", "r14", "r15", \
    "r16", "r17", "r18", "r19", "r20", "r21", "r22", "r23", \
    "r24", "r25", "r26", "r27", "r28", "r29", "r30", "r31", \
    /* predicate registers */                               \
    "p0", "p1", "p2", "p3",                                 \
    /* control registers */                                 \
    "sa0", "lc0", "sa1", "lc1", "m0", "m1", "usr", "ugp",   \
    "gp",  "cs0", "cs1",                                    \
    /* fake frame pointer and argument pointer */           \
    "_fp", "_ap"                                            \
  }

#define ADDITIONAL_REGISTER_NAMES \
  { \
    {"sp", 29}, \
    {"fp", 30}, \
    {"lr", 31}, \
  }

#define ASM_OUTPUT_OPCODE(STREAM, PTR) \
   (PTR) = hexagon_asm_output_opcode(STREAM, PTR)

#define FINAL_PRESCAN_INSN(INSN, OPVEC, NOPERANDS) \
  hexagon_final_prescan_insn(INSN, OPVEC, NOPERANDS)

#define PRINT_OPERAND(STREAM, X, CODE) \
  hexagon_print_operand(STREAM, X, CODE)

#define PRINT_OPERAND_ADDRESS(STREAM, X) \
  hexagon_print_operand_address(STREAM, X)


/*-----------------------
Output of Dispatch Tables
-----------------------*/

#define ASM_OUTPUT_ADDR_DIFF_ELT(STREAM, BODY, VALUE, REL) \
  fprintf(STREAM, "\t.word .L%d-.L%d\n", VALUE, REL)

#define ASM_OUTPUT_ADDR_VEC_ELT(STREAM, VALUE) \
  fprintf(STREAM, "\t.word .L%d\n", VALUE)

#define JUMP_TABLES_IN_TEXT_SECTION (flag_pic)

/*------------------------------
Assembler Commands for Alignment
------------------------------*/

#define ASM_OUTPUT_ALIGN(STREAM, POWER) \
  fprintf((STREAM), "\t.p2align %d\n", (POWER))

#define ASM_OUTPUT_MAX_SKIP_ALIGN(STREAM, POWER, MAX_SKIP) \
  fprintf((STREAM), "\t.p2align %d,,%d\n", (POWER), (MAX_SKIP))

#define ASM_OUTPUT_SUBSECTION(STREAM, POWER) \
  fprintf((STREAM), "\t.subsection -%d\n", (POWER))

/*----------------------
Miscellaneous Parameters
----------------------*/

#define CASE_VECTOR_MODE Pmode

/* ??? smaller? */
/*#define CASE_VALUES_THRESHOLD*/

#define WORD_REGISTER_OPERATIONS 1

/* ??? maybe? */
/*#define SHORT_IMMEDIATES_SIGN_EXTEND*/

#define MOVE_MAX 8

#define TRULY_NOOP_TRUNCATION(OUTPREC, INPREC) 1

/* ??? const1_rtx? */
/*#define VECTOR_STORE_FLAG_VALUE(MODE)*/

#define CLZ_DEFINED_VALUE_AT_ZERO(MODE, VALUE) ((VALUE) = 32)

#define CTZ_DEFINED_VALUE_AT_ZERO(MODE, VALUE) ((VALUE) = 32)

#define Pmode SImode

#define FUNCTION_MODE HImode

/* ??? play with this? */
/*#define MAX_CONDITIONAL_EXECUTE*/

/* Allow querying the cpu units */
#define CPU_UNITS_QUERY 1


/*------------
HEXAGON specific
------------*/

/* Don't include this section in code that is not part of GCC. */
#ifndef USED_FOR_TARGET

/* wrapper for HEXAGON specific changes outside the back-end */
#define TARGET_HEXAGON

/* option handling code */
enum hexagon_architecture {
  HEXAGON_ARCH_V1,
  HEXAGON_ARCH_V2,
  HEXAGON_ARCH_V3,
  HEXAGON_ARCH_V4,
  HEXAGON_ARCH_V5,
  HEXAGON_ARCH_V55,
  NUM_HEXAGON_ARCH,
  HEXAGON_ARCH_UNSPECIFIED
};

extern enum hexagon_architecture hexagon_arch;

/* Used for qdsp6 backward compat */
extern int hexagon_qdsp6_compat;

#define HEXAGON_FEAT_V1 (1 << HEXAGON_ARCH_V1)
#define HEXAGON_FEAT_V2 (1 << HEXAGON_ARCH_V2)
#define HEXAGON_FEAT_V3 (1 << HEXAGON_ARCH_V3)
#define HEXAGON_FEAT_V4 (1 << HEXAGON_ARCH_V4)
#define HEXAGON_FEAT_V5 (1 << HEXAGON_ARCH_V5)
#define HEXAGON_FEAT_V55 (1 << HEXAGON_ARCH_V55)

extern int hexagon_features;

#define TARGET_V1_FEATURES ((hexagon_features & HEXAGON_FEAT_V1) != 0)
#define TARGET_V2_FEATURES ((hexagon_features & HEXAGON_FEAT_V2) != 0)
#define TARGET_V3_FEATURES ((hexagon_features & HEXAGON_FEAT_V3) != 0)
#define TARGET_V4_FEATURES ((hexagon_features & HEXAGON_FEAT_V4) != 0)
#define TARGET_V5_FEATURES ((hexagon_features & HEXAGON_FEAT_V5) != 0)
#define TARGET_V55_FEATURES ((hexagon_features & HEXAGON_FEAT_V55) != 0)

#define TARGET_HARD_FLOAT (TARGET_V5_FEATURES)
#define TARGET_SOFT_FLOAT (!TARGET_HARD_FLOAT)

struct hexagon_arch_table_entry {
  const char *const name;
  const enum hexagon_architecture arch;
  const int features;
};

#define HEXAGON_ARCH_TABLE_INITIALIZER \
  { \
    {"hexagonv1", HEXAGON_ARCH_V1,   HEXAGON_FEAT_V1}, \
    {"hexagonv2", HEXAGON_ARCH_V2,   HEXAGON_FEAT_V1 \
                                   | HEXAGON_FEAT_V2}, \
    {"hexagonv3", HEXAGON_ARCH_V3,   HEXAGON_FEAT_V1 \
                                   | HEXAGON_FEAT_V2 \
                                   | HEXAGON_FEAT_V3}, \
    {"hexagonv4", HEXAGON_ARCH_V4,   HEXAGON_FEAT_V1 \
                                   | HEXAGON_FEAT_V2 \
                                   | HEXAGON_FEAT_V3 \
                                   | HEXAGON_FEAT_V4}, \
    {"hexagonv5", HEXAGON_ARCH_V5,   HEXAGON_FEAT_V1 \
                                   | HEXAGON_FEAT_V2 \
                                   | HEXAGON_FEAT_V3 \
                                   | HEXAGON_FEAT_V4 \
                                   | HEXAGON_FEAT_V5}, \
    {"hexagonv55", HEXAGON_ARCH_V55, HEXAGON_FEAT_V1 \
				   | HEXAGON_FEAT_V2 \
				   | HEXAGON_FEAT_V3 \
				   | HEXAGON_FEAT_V4 \
				   | HEXAGON_FEAT_V5 \
				   | HEXAGON_FEAT_V55} \
  }

#ifdef LINUX
#define HEXAGON_ARCH_TABLE_DEFAULT_INDEX HEXAGON_ARCH_V5
#else
#define HEXAGON_ARCH_TABLE_DEFAULT_INDEX HEXAGON_ARCH_V4
#endif

enum hexagon_abi {
  HEXAGON_ABI_1,
  HEXAGON_ABI_2,
  HEXAGON_ABI_LINUX,
  NUM_HEXAGON_ABI,
  HEXAGON_ABI_UNSPECIFIED
};

extern enum hexagon_abi hexagon_abi;

struct hexagon_abi_table_entry {
  const char *const name;
  const enum hexagon_abi abi;
};

#define HEXAGON_ABI_TABLE_INITIALIZER \
  { \
    {"abi1", HEXAGON_ABI_1}, \
    {"abi2", HEXAGON_ABI_2}, \
    {"linux", HEXAGON_ABI_LINUX} \
  }

#define HEXAGON_ABI_TABLE_DEFAULT_INDEX \
  (TARGET_V3_FEATURES ? HEXAGON_ABI_2 : HEXAGON_ABI_1)

enum hexagon_falign {
  HEXAGON_NO_FALIGN,
  HEXAGON_FALIGN_LOOPS,
  HEXAGON_FALIGN_LABELS,
  HEXAGON_FALIGN_ALL,
  HEXAGON_FALIGN_UNSPECIFIED
};

extern bool hexagon_dual_memory_accesses;

#define TARGET_CONST32 (TARGET_LITERAL_POOL && g_switch_value >= 4)
#define TARGET_CONST64 (TARGET_LITERAL_POOL && g_switch_value >= 8)

#define TARGET_PACKET_OPTIMIZATIONS (TARGET_PULLUP || TARGET_NEW_VALUE_JUMP)

/* ranges for the various kinds of registers */
#define G_REGNO_P(REGNO) (IN_RANGE ((REGNO), 0, 31))
#define P_REGNO_P(REGNO) (IN_RANGE ((REGNO), 32, 35))
#define C_REGNO_P(REGNO) (IN_RANGE ((REGNO), 36, 43))

#define G_REG_P(RTX) (REG_P (RTX) && G_REGNO_P (REGNO (RTX)))
#define P_REG_P(RTX) (REG_P (RTX) && P_REGNO_P (REGNO (RTX)))
#define C_REG_P(RTX) (REG_P (RTX) && C_REGNO_P (REGNO (RTX)))

#define G_REG(REGNO) ((REGNO) + 0)
#define P_REG(REGNO) ((REGNO) + 32)

/* Fixed register assignments: */

/* The register that contains the result of a function call. */
#define RETURN_VALUE_REGNUM 0

/* The first register that can contain the arguments to a function. */
#define FIRST_ARG_REGNUM 0

/* The number of register assigned to holding function arguments. */
#define HEXAGON_NUM_ARG_REGS 6

/* The maximum number of instructions allowed in a packet */
#define HEXAGON_MAX_INSNS_PER_PACKET 6

/* If cross-compiling, don't require stdio.h etc to build libgcc.a. */
#if defined CROSS_COMPILE && ! defined inhibit_libc
#define inhibit_libc
#endif

enum hexagon_builtins {
#define BUILTIN_INFO(TAG, TYPE, NARGS) HEXAGON_BUILTIN_##TAG,
#define BUILTIN_INFO_NONCONST(TAG, TYPE, NARGS) HEXAGON_BUILTIN_##TAG,
#include "builtins.def"
#include "manual_builtins.def"
#undef BUILTIN_INFO
#undef BUILTIN_INFO_NONCONST
  HEXAGON_BUILTIN_NONEXISTANT_THING_TO_SHUT_UP_GCC_WARNING
};

/* Structure to be filled in by hexagon_compute_frame_info() with sizes of various
   parts of the stack frame and which registers need to be saved in the prologue
   and restored in the epilogue for the current function. */
struct GTY(()) hexagon_frame_info {
  unsigned HOST_WIDE_INT total_size; /* # bytes in the entire frame */
  unsigned HOST_WIDE_INT frame_size; /* # bytes in the frame excluding LR:FP */
  unsigned HOST_WIDE_INT var_size;   /* # bytes for locals and spills */
  unsigned HOST_WIDE_INT args_size;  /* # bytes for outgoing arguments */
  unsigned HOST_WIDE_INT reg_size;   /* # bytes for callee save registers */
  unsigned HOST_WIDE_INT lrfp_size;  /* # bytes for LR:FP */
  unsigned int saved_pairs[FIRST_PSEUDO_REGISTER / 2];
  unsigned int num_saved_pairs;
  unsigned int saved_singles[FIRST_PSEUDO_REGISTER];
  unsigned int num_saved_singles;
  /* whether to use the allocframe instruction */
  bool use_allocframe;
  /* argument to allocframe */
  unsigned HOST_WIDE_INT allocframe_size;
  /* # bytes to decrement SP after or instead of using allocframe */
  unsigned HOST_WIDE_INT sp_adjustment;
  /* insn to emit for allocframe that possibly saves registers in parallel */
  int allocframe_insn;
  /* insn to emit for allocating stack that possibly saves registers in
     parallel */
  int allocate_stack_insn;
  /* register used to address the callee-save register save of the frame */
  rtx base_reg;
  /* offset from base_reg to the callee-save register area of the frame */
  HOST_WIDE_INT offset;
  /* function to implement a common prologue sequence */
  int prologue_function;
  /* number of callee-save register pairs saved by that function */
  unsigned int num_function_saved_pairs;
  /* function to implement a common epilogue sequence */
  int epilogue_function;
  /* number of callee-save register pairs restored by that function */
  unsigned int num_function_restored_pairs;
  /* function to implement a common sibcall epilogue sequence */
  int sibcall_epilogue_function;
  /* number of callee-save register pairs restored by that function */
  unsigned int num_sibcall_function_restored_pairs;
  /* number of callee-save register pairs saved in some special manner */
  unsigned int num_specially_saved_pairs;
  /* number of unpaired callee-save registers saved in some special manner */
  unsigned int num_specially_saved_singles;
  bool computed;  /* true if frame info has already been computed */
  bool tls_set;   /* true if tls register is set */
  rtx tls_offset_table_rtx;
  unsigned int pretend_size;
  unsigned int first_anon_arg;
  unsigned int named_arg_stack_words;
  unsigned int named_stack_words;
};

struct GTY(()) hexagon_final_info {
  /* the operands of the current instruction */
  rtx * GTY ((skip)) insn_ops;
  /* whether the current insn starts a packet */
  bool start_packet;
  /* whether the current insn ends a packet */
  bool end_packet;
  /* whether the current insn should be indented */
  bool indent_insn;
  /* whether the current insn should be printed */
  bool print_insn;
  /* whether the current insn is an endloop0 */
  bool print_endloop0;
  /* whether the current insn is an endloop1 */
  bool print_endloop1;
  /* whether to falign the following packet */
  bool print_falign;
  /* whether the current packet ends an inner hardware loop */
  bool endloop0;
  /* the label at the start of a hardware loop */
  rtx endloop_label;
  bool dot_new_predicate_p;
  bool dot_new_gpr_p;
  bool dot_new_mem_p;
  bool duplex;
};

struct GTY(()) machine_function {
  struct hexagon_frame_info frame_info;
  struct hexagon_final_info final_info;
  rtx combine_parallel_pattern1;
  rtx combine_parallel_pattern2;
  int calls_builtin_return_address;
  int has_hardware_loops;
  rtx pic_reg;
};

struct GTY((chain_next ("%h.next"))) hexagon_reg_access {
  rtx reg;
  unsigned int regno;
  int flags;
  struct hexagon_reg_access *next;
};

struct GTY((chain_next ("%h.next"))) hexagon_mem_access {
  rtx mem;
  int flags;
  struct hexagon_mem_access *next;
};

struct GTY((chain_next ("%h.stack"))) hexagon_insn_info {
  rtx insn;
  struct hexagon_reg_access *reg_reads;
  struct hexagon_reg_access *reg_writes;
  struct hexagon_mem_access *loads;
  struct hexagon_mem_access *stores;
  int flags;
  struct hexagon_insn_info *stack;
  struct hexagon_packet_info *transformed_at_packet;
};

struct GTY((chain_prev ("%h.prev"), chain_next ("%h.next"))) hexagon_packet_info {
  struct hexagon_insn_info *insns[HEXAGON_MAX_INSNS_PER_PACKET];
  int num_insns;
  rtx location;
  struct hexagon_packet_info *prev;
  struct hexagon_packet_info *next;
};

#include "hard-reg-set.h"


struct GTY((chain_next ("%h.next"))) hexagon_bb_aux_info {
  HARD_REG_SET live_out;
  struct hexagon_packet_info *head_packet;
  struct hexagon_packet_info *end_packet;
  struct hexagon_bb_aux_info *next;
};

#define HEXAGON_BB_AUX(BB) ((struct hexagon_bb_aux_info *) (BB->aux))
#define BB_LIVE_OUT(BB) (HEXAGON_BB_AUX (BB)->live_out)
#define BB_HEAD_PACKET(BB) (HEXAGON_BB_AUX (BB)->head_packet)
#define BB_END_PACKET(BB) (HEXAGON_BB_AUX (BB)->end_packet)

enum hexagon_dependence_type {
  HEXAGON_DEP_REGISTER,
  HEXAGON_DEP_MEMORY,
  HEXAGON_DEP_CONTROL,
  HEXAGON_DEP_VOLATILE
};

struct GTY((chain_next ("%h.next"))) hexagon_dependence {
  enum hexagon_dependence_type type;
  rtx set;
  rtx use;
  struct hexagon_dependence *next;
};




#define HEXAGON_MASK(WIDTH, LOW) (((1 << (WIDTH)) - 1) << (LOW))

#define HEXAGON_PREDICATE_MASK HEXAGON_MASK(2, 0)
#define HEXAGON_IF_TRUE        HEXAGON_MASK(1, 2)
#define HEXAGON_IF_FALSE       HEXAGON_MASK(1, 3)
#define HEXAGON_GPR_CONDITION  HEXAGON_MASK(1, 4)
#define HEXAGON_SENSE_MASK     (HEXAGON_IF_TRUE | HEXAGON_IF_FALSE)
#define HEXAGON_UNCONDITIONAL  HEXAGON_SENSE_MASK
#define HEXAGON_CONDITION_MASK \
  (HEXAGON_GPR_CONDITION | HEXAGON_SENSE_MASK | HEXAGON_PREDICATE_MASK)

#define HEXAGON_DIRECT_JUMP    HEXAGON_MASK(1, 5)
#define HEXAGON_INDIRECT_JUMP  HEXAGON_MASK(1, 6)
#define HEXAGON_RETURN         HEXAGON_MASK(1, 7)
#define HEXAGON_ENDLOOP        HEXAGON_MASK(1, 8)
#define HEXAGON_DIRECT_CALL    HEXAGON_MASK(1, 9)
#define HEXAGON_INDIRECT_CALL  HEXAGON_MASK(1, 10)
#define HEXAGON_EMULATION_CALL HEXAGON_MASK(1, 11)
#define HEXAGON_JUMP \
  (HEXAGON_DIRECT_JUMP | HEXAGON_INDIRECT_JUMP | HEXAGON_RETURN | HEXAGON_ENDLOOP)
#define HEXAGON_CALL           (HEXAGON_DIRECT_CALL | HEXAGON_INDIRECT_CALL)
#define HEXAGON_CONTROL        (HEXAGON_CALL | HEXAGON_JUMP)

#define HEXAGON_MEM            HEXAGON_MASK(1, 12)
#define HEXAGON_VOLATILE       HEXAGON_MASK(1, 13)
#define HEXAGON_NEW_PREDICATE  HEXAGON_MASK(1, 14)
#define HEXAGON_NEW_GPR        HEXAGON_MASK(1, 15)
#define HEXAGON_NEW_MEM        HEXAGON_MASK(1, 16)

#define HEXAGON_MOVED          HEXAGON_MASK(1, 17)

#define HEXAGON_CONDITION(INSN)       ((INSN)->flags & HEXAGON_CONDITION_MASK)
#define HEXAGON_PREDICATE(INSN)       ((INSN)->flags & HEXAGON_PREDICATE_MASK)
#define HEXAGON_SENSE(INSN)           ((INSN)->flags & HEXAGON_SENSE_MASK)
#define HEXAGON_GPR_CONDITION_P(INSN) (((INSN)->flags & HEXAGON_GPR_CONDITION) != 0)
#define HEXAGON_CONFLICT_P(ACCESS0, ACCESS1) \
  (HEXAGON_SENSE (ACCESS0) & HEXAGON_SENSE (ACCESS1) \
   || HEXAGON_PREDICATE (ACCESS0) != HEXAGON_PREDICATE (ACCESS1))
#define HEXAGON_CONDITIONAL_P(INSN) \
  (HEXAGON_SENSE (INSN) != HEXAGON_UNCONDITIONAL || HEXAGON_GPR_CONDITION_P (INSN))

#define HEXAGON_DIRECT_JUMP_P(INSN)    (((INSN)->flags & HEXAGON_DIRECT_JUMP) != 0)
#define HEXAGON_INDIRECT_JUMP_P(INSN)  (((INSN)->flags & HEXAGON_INDIRECT_JUMP) != 0)
#define HEXAGON_RETURN_P(INSN)         (((INSN)->flags & HEXAGON_RETURN) != 0)
#define HEXAGON_ENDLOOP_P(INSN)        (((INSN)->flags & HEXAGON_ENDLOOP) != 0)
#define HEXAGON_DIRECT_CALL_P(INSN)    (((INSN)->flags & HEXAGON_DIRECT_CALL) != 0)
#define HEXAGON_INDIRECT_CALL_P(INSN)  (((INSN)->flags & HEXAGON_INDIRECT_CALL) != 0)
#define HEXAGON_EMULATION_CALL_P(INSN) (((INSN)->flags & HEXAGON_EMULATION_CALL) != 0)
#define HEXAGON_JUMP_P(INSN)           (((INSN)->flags & HEXAGON_JUMP) != 0)
#define HEXAGON_CALL_P(INSN)           (((INSN)->flags & HEXAGON_CALL) != 0)
#define HEXAGON_CONTROL_P(INSN)        (((INSN)->flags & HEXAGON_CONTROL) != 0)

#define HEXAGON_MEM_P(INSN)           (((INSN)->flags & HEXAGON_MEM) != 0)
#define HEXAGON_VOLATILE_P(INSN)      (((INSN)->flags & HEXAGON_VOLATILE) != 0)
#define HEXAGON_NEW_PREDICATE_P(INSN) (((INSN)->flags & HEXAGON_NEW_PREDICATE) != 0)
#define HEXAGON_NEW_GPR_P(INSN)       (((INSN)->flags & HEXAGON_NEW_GPR) != 0)
#define HEXAGON_NEW_MEM_P(INSN)       (((INSN)->flags & HEXAGON_NEW_MEM) != 0)

#define HEXAGON_MOVED_P(INSN)  (((INSN)->flags & HEXAGON_MOVED) != 0)

#define QDSP6_COMPAT_MACROS \
    if (hexagon_qdsp6_compat){ \
      switch(hexagon_arch){ \
        case HEXAGON_ARCH_V1: \
          builtin_define ("__QDSP6_V1__"); \
          builtin_define ("__QDSP6_ARCH__=1"); \
          break; \
        case HEXAGON_ARCH_V2: \
          builtin_define ("__QDSP6_V2__"); \
          builtin_define ("__QDSP6_ARCH__=2"); \
          break; \
        case HEXAGON_ARCH_V3: \
          builtin_define ("__QDSP6_V3__"); \
          builtin_define ("__QDSP6_ARCH__=3"); \
          break; \
        case HEXAGON_ARCH_V4: \
          builtin_define ("__QDSP6_V4__"); \
          builtin_define ("__QDSP6_ARCH__=4"); \
          break; \
        case HEXAGON_ARCH_V5: /* ??? Disallow? */ \
          builtin_define ("__QDSP6_V5__"); \
          builtin_define ("__QDSP6_ARCH__=5"); \
          break; \
        case HEXAGON_ARCH_V55: \
          builtin_define ("__QDSP6_V55__"); \
          builtin_define ("__QDSP6_ARCH__=55"); \
          break; \
        default: \
          abort(); \
      } \
      builtin_define ("__qdsp6__"); \
    };

/* Disable the store-followed-by-load feature that did not make it into V5.
   This code may be ressurected for a future architecture version.
   To re-enable, remove these #defines and uncomment the mnew-memory-loads
   option in hexagon.opt. */
#define MASK_NEW_MEMORY_LOADS 0
#define TARGET_NEW_MEMORY_LOADS 0

#endif /* !USED_FOR_TARGET */

#endif /* !GCC_HEXAGON_H */
