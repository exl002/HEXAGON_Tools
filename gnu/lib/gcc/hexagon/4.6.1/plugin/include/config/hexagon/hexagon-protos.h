/* Prototypes for hexagon.c functions used in the md file & elsewhere.
   Copyright (C) 1999, 2000, 2002 Free Software Foundation, Inc.

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

extern void hexagon_override_options(void);
extern void hexagon_init_expanders(void);
extern void hexagon_conditional_register_usage(void);
extern bool hexagon_cannot_change_mode_class(
  enum machine_mode,
  enum machine_mode,
  enum reg_class);
extern bool const_ok_for_s8s8 (HOST_WIDE_INT val);
extern bool const_ok_for_s32s8 (HOST_WIDE_INT val);
extern bool const_ok_for_s8s32 (HOST_WIDE_INT val);
extern bool const_ok_for_s32s16 (HOST_WIDE_INT val);
extern bool const_ok_for_s16s32 (HOST_WIDE_INT val);
extern bool const_ok_for_onehot (HOST_WIDE_INT val);
extern HOST_WIDE_INT hexagon_initial_elimination_offset(int, int);
extern bool hexagon_store_by_pieces_p(unsigned HOST_WIDE_INT, unsigned int);
extern const char *hexagon_asm_output_opcode(FILE *, const char *);
extern void hexagon_expand_prologue(void);
extern void hexagon_expand_epilogue(bool);
extern bool hexagon_direct_return(void);
extern void hexagon_hardware_loop (void);
extern int hexagon_trampoline_size (void);

#ifdef TREE_CODE
extern int  hexagon_data_alignment(tree, int);
extern int  hexagon_constant_alignment(tree, int);
extern unsigned int hexagon_local_alignment(tree, int);
extern int  hexagon_function_arg_advance(CUMULATIVE_ARGS, enum machine_mode, tree, int);
extern void hexagon_asm_output_aligned_decl_common (FILE *,
                                                    tree,
                                                    const char *,
                                                    unsigned HOST_WIDE_INT,
                                                    unsigned HOST_WIDE_INT,
                                                    bool);
#endif /* TREE_CODE */

#ifdef RTX_CODE
extern rtx  hexagon_return_addr_rtx(int, rtx);
bool hexagon_noext_mem_operand (enum machine_mode mode, rtx x, bool strict_p);
bool hexagon_cond_mem_operand (enum machine_mode mode, rtx x, bool extended);
bool hexagon_storeimm_mem_operand (enum machine_mode mode, rtx x);
bool hexagon_rmw_mem_operand (enum machine_mode mode, rtx x, bool extended);
bool hexagon_subinst_mem_operand (enum machine_mode mode, rtx x, int bits);
bool hexagon_subinst_stack_mem_operand (enum machine_mode mode, rtx x,
					int bits);
extern bool hexagon_legitimate_address_p (enum machine_mode, rtx, bool);
extern bool hexagon_address_adjacent_p (rtx, rtx);
extern void hexagon_expand_binary_operator (enum rtx_code code,
					    enum machine_mode mode,
					    rtx operands[], int immed_operand,
					    int (*regop_imm_pred) (rtx,
					      enum machine_mode),
					    int (*memop_imm_pred) (rtx,
					      enum machine_mode),
					    bool commutative);
extern bool hexagon_loop_invalid_for_forced_unroll(rtx loop_header);
extern void hexagon_final_prescan_insn(rtx, rtx *, int);
extern void hexagon_print_operand(FILE *, rtx, int);
extern void hexagon_print_operand_address(FILE *, rtx);
extern rtx  hexagon_expand_compare (enum rtx_code, rtx, rtx);
extern void hexagon_split_subword_compare (enum machine_mode, rtx[], rtx);
extern bool hexagon_expand_movmem(rtx dst, rtx src, rtx nbytes, rtx min_align);
extern bool hexagon_expand_setmem(rtx[]);
extern rtx  hexagon_branch_hint(rtx);
extern bool hexagon_valid_parallel_combine_insn_p(rtx);
extern bool hexagon_must_not_swap_parallel_insn_p(rtx, rtx);
extern int  hexagon_instructions_dependent(rtx, rtx);
unsigned HOST_WIDE_INT sdata_symbolic_operand_size (rtx op);
extern bool hexagon_tls_symbol_p (rtx);
#endif /* RTX_CODE */

extern void hexagon_fast_math_libfunc(rtx);

#if defined(TREE_CODE) && defined(RTX_CODE)
extern rtx  hexagon_function_arg(CUMULATIVE_ARGS, enum machine_mode, tree, int);
#endif /* TREE_CODE && RTX_CODE */

/* PIC support */
bool hexagon_legitimate_pic_operand_p (rtx operand);
extern rtx legitimize_pic_address(rtx, enum machine_mode, rtx);
extern rtx legitimize_tls_address(rtx);
extern bool hexagon_tls_referenced_p (rtx);
extern rtx hexagon_legitimize_address (rtx, rtx, enum machine_mode);
extern void require_pic_register (void);
