/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/scratch/lgustavo/tmp/hexagon/src/gcc-hexagon-2012.03/gcc/config/hexagon/hexagon.md'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef HAVE_MACHINE_MODES
extern int general_operand (rtx, enum machine_mode);
extern int address_operand (rtx, enum machine_mode);
extern int register_operand (rtx, enum machine_mode);
extern int pmode_register_operand (rtx, enum machine_mode);
extern int scratch_operand (rtx, enum machine_mode);
extern int immediate_operand (rtx, enum machine_mode);
extern int const_int_operand (rtx, enum machine_mode);
extern int const_double_operand (rtx, enum machine_mode);
extern int nonimmediate_operand (rtx, enum machine_mode);
extern int nonmemory_operand (rtx, enum machine_mode);
extern int push_operand (rtx, enum machine_mode);
extern int pop_operand (rtx, enum machine_mode);
extern int memory_operand (rtx, enum machine_mode);
extern int indirect_operand (rtx, enum machine_mode);
extern int ordered_comparison_operator (rtx, enum machine_mode);
extern int comparison_operator (rtx, enum machine_mode);
extern int gr_register_operand (rtx, enum machine_mode);
extern int pr_register_operand (rtx, enum machine_mode);
extern int nongr_register_operand (rtx, enum machine_mode);
extern int splattable_vector (rtx, enum machine_mode);
extern int gr_reg_or_scratch_operand (rtx, enum machine_mode);
extern int indirect_memory_operand (rtx, enum machine_mode);
extern int absolute_address_operand (rtx, enum machine_mode);
extern int call_target_operand (rtx, enum machine_mode);
extern int sdata_symbolic_operand (rtx, enum machine_mode);
extern int rmw_memory_operand (rtx, enum machine_mode);
extern int gr_reg_or_rmw_mem_operand (rtx, enum machine_mode);
extern int gr_reg_rmw_or_imm_operand (rtx, enum machine_mode);
extern int s16_const_int_operand (rtx, enum machine_mode);
extern int s12_const_int_operand (rtx, enum machine_mode);
extern int s10_const_int_operand (rtx, enum machine_mode);
extern int s8_const_int_operand (rtx, enum machine_mode);
extern int s7_const_int_operand (rtx, enum machine_mode);
extern int s6_const_int_operand (rtx, enum machine_mode);
extern int s5_const_int_operand (rtx, enum machine_mode);
extern int s4_const_int_operand (rtx, enum machine_mode);
extern int u9_const_int_operand (rtx, enum machine_mode);
extern int u8_const_int_operand (rtx, enum machine_mode);
extern int u7_const_int_operand (rtx, enum machine_mode);
extern int u6_const_int_operand (rtx, enum machine_mode);
extern int u5_const_int_operand (rtx, enum machine_mode);
extern int u3_const_int_operand (rtx, enum machine_mode);
extern int u2_const_int_operand (rtx, enum machine_mode);
extern int u1_const_int_operand (rtx, enum machine_mode);
extern int zero_constant (rtx, enum machine_mode);
extern int m9_const_int_operand (rtx, enum machine_mode);
extern int power_of_two_operand (rtx, enum machine_mode);
extern int inv_power_of_two_operand (rtx, enum machine_mode);
extern int addasl_const_int_operand (rtx, enum machine_mode);
extern int immediate_not_s16_operand (rtx, enum machine_mode);
extern int minus_31_to_31_operand (rtx, enum machine_mode);
extern int no_int_operand (rtx, enum machine_mode);
extern int gr_reg_or_memory_operand (rtx, enum machine_mode);
extern int nongr_reg_or_memory_operand (rtx, enum machine_mode);
extern int conditional_dest_operand (rtx, enum machine_mode);
extern int gr_or_s16_operand (rtx, enum machine_mode);
extern int gr_or_u6_operand (rtx, enum machine_mode);
extern int gr_or_m9_operand (rtx, enum machine_mode);
extern int conditional_add_operand (rtx, enum machine_mode);
extern int combine_imm_operand (rtx, enum machine_mode);
extern int conditional_src_operand (rtx, enum machine_mode);
extern int sym_or_lab_operand (rtx, enum machine_mode);
extern int tls_symbolic_operand (rtx, enum machine_mode);
extern int predicate_operator (rtx, enum machine_mode);
extern int gpr_cond_jump_operator (rtx, enum machine_mode);
extern int subword_reg_compare_operator (rtx, enum machine_mode);
extern int binary_operator (rtx, enum machine_mode);
extern int GP_or_reg_operand (rtx, enum machine_mode);
extern int nonimmediate_operand_with_GP (rtx, enum machine_mode);
#endif /* HAVE_MACHINE_MODES */

#define CONSTRAINT_NUM_DEFINED_P 1
enum constraint_num
{
  CONSTRAINT__UNKNOWN = 0,
  CONSTRAINT_Rg,
  CONSTRAINT_Rp,
  CONSTRAINT_Rc,
  CONSTRAINT_Rq,
  CONSTRAINT_Is4,
  CONSTRAINT_Is5,
  CONSTRAINT_Is6,
  CONSTRAINT_Is7,
  CONSTRAINT_Is8,
  CONSTRAINT_IsA,
  CONSTRAINT_IsC,
  CONSTRAINT_IsG,
  CONSTRAINT_Iu0,
  CONSTRAINT_Iu1,
  CONSTRAINT_Iu2,
  CONSTRAINT_Iu3,
  CONSTRAINT_Iu4,
  CONSTRAINT_Iu5,
  CONSTRAINT_Iu6,
  CONSTRAINT_Iu7,
  CONSTRAINT_Iu8,
  CONSTRAINT_Iu9,
  CONSTRAINT_IuA,
  CONSTRAINT_IuG,
  CONSTRAINT_In5,
  CONSTRAINT_In8,
  CONSTRAINT_Im6,
  CONSTRAINT_Im9,
  CONSTRAINT_Ju6__2,
  CONSTRAINT_Km1,
  CONSTRAINT_K01,
  CONSTRAINT_K16,
  CONSTRAINT_K32,
  CONSTRAINT_Ku7,
  CONSTRAINT_K8p,
  CONSTRAINT_K82,
  CONSTRAINT_Ku9,
  CONSTRAINT_KXp,
  CONSTRAINT_K88,
  CONSTRAINT_K83,
  CONSTRAINT_K38,
  CONSTRAINT_K13,
  CONSTRAINT_K31,
  CONSTRAINT_K1h,
  CONSTRAINT_K1n,
  CONSTRAINT_Kp2,
  CONSTRAINT_G,
  CONSTRAINT_Q,
  CONSTRAINT_Anx,
  CONSTRAINT_Aco,
  CONSTRAINT_Aec,
  CONSTRAINT_Asi,
  CONSTRAINT_Acs,
  CONSTRAINT_Amo,
  CONSTRAINT_Aem,
  CONSTRAINT_Ad3,
  CONSTRAINT_Ad4,
  CONSTRAINT_Au5,
  CONSTRAINT_As6,
  CONSTRAINT__LIMIT
};

extern enum constraint_num lookup_constraint (const char *);
extern bool constraint_satisfied_p (rtx, enum constraint_num);

static inline size_t
insn_constraint_len (char fc, const char *str ATTRIBUTE_UNUSED)
{
  switch (fc)
    {
    case 'A': return 3;
    case 'I': return 3;
    case 'J': return 5;
    case 'K': return 3;
    case 'R': return 2;
    default: break;
    }
  return 1;
}

#define CONSTRAINT_LEN(c_,s_) insn_constraint_len (c_,s_)

extern enum reg_class regclass_for_constraint (enum constraint_num);
#define REG_CLASS_FROM_CONSTRAINT(c_,s_) \
    regclass_for_constraint (lookup_constraint (s_))
#define REG_CLASS_FOR_CONSTRAINT(x_) \
    regclass_for_constraint (x_)

extern bool insn_const_int_ok_for_constraint (HOST_WIDE_INT, enum constraint_num);
#define CONST_OK_FOR_CONSTRAINT_P(v_,c_,s_) \
    insn_const_int_ok_for_constraint (v_, lookup_constraint (s_))

#define CONST_DOUBLE_OK_FOR_CONSTRAINT_P(v_,c_,s_) \
    constraint_satisfied_p (v_, lookup_constraint (s_))

#define EXTRA_CONSTRAINT_STR(v_,c_,s_) \
    constraint_satisfied_p (v_, lookup_constraint (s_))

extern bool insn_extra_memory_constraint (enum constraint_num);
#define EXTRA_MEMORY_CONSTRAINT(c_,s_) insn_extra_memory_constraint (lookup_constraint (s_))

#define EXTRA_ADDRESS_CONSTRAINT(c_,s_) false

#endif /* tm-preds.h */
