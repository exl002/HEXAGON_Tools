/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_load_tls_tprel_hi 1
#define HAVE_load_tls_tprel_lo 1
#define HAVE_load_tls_hi 1
#define HAVE_load_tls_lo 1
#define HAVE_pic_movsi_hi_gotoff (flag_pic)
#define HAVE_pic_movsi_lo_gotoff (flag_pic)
#define HAVE_pic_movsi_pcrel (flag_pic && TARGET_V4_FEATURES)
#define HAVE_pic_movsi (flag_pic)
#define HAVE_pic_movsi_hi_got (flag_pic)
#define HAVE_pic_movsi_lo_got (flag_pic)
#define HAVE_pic_movsi_got_v4 (flag_pic && TARGET_V4_FEATURES)
#define HAVE_movbi_real (!(memory_operand(operands[0], BImode) \
     && immediate_operand(operands[1], BImode)))
#define HAVE_movbi_new_value (TARGET_V4_FEATURES)
#define HAVE_movqi_real_v4 (TARGET_V4_FEATURES)
#define HAVE_movqi_new_value (TARGET_V4_FEATURES)
#define HAVE_movqi_real (!TARGET_V4_FEATURES \
   && (!memory_operand(operands[0], QImode) \
       || gr_register_operand(operands[1], QImode)))
#define HAVE_cond_movqi 1
#define HAVE_cond_movqi_new_value (TARGET_V4_FEATURES)
#define HAVE_movhi_real_v4 (TARGET_V4_FEATURES)
#define HAVE_movhi_new_value (TARGET_V4_FEATURES)
#define HAVE_movhi_real (!TARGET_V4_FEATURES \
   && (!memory_operand(operands[0], HImode) \
       || gr_register_operand(operands[1], HImode)))
#define HAVE_cond_movhi 1
#define HAVE_cond_movhi_new_value (TARGET_V4_FEATURES)
#define HAVE_movsi_high 1
#define HAVE_movsi_low 1
#define HAVE_movsi_real_v4 (TARGET_V4_FEATURES)
#define HAVE_movsi_new_value (TARGET_V4_FEATURES)
#define HAVE_movsi_const32 1
#define HAVE_movsi_real (!TARGET_V4_FEATURES \
   && (!memory_operand(operands[0], SImode) \
       || gr_register_operand(operands[1], SImode)))
#define HAVE_cond_movsi 1
#define HAVE_cond_movsi_new_value (TARGET_V4_FEATURES)
#define HAVE_movdi_real (!(memory_operand(operands[0], DImode) \
     && immediate_operand(operands[1], DImode)))
#define HAVE_movdi_real_new_mem (TARGET_V5_FEATURES)
#define HAVE_cond_movdi (!memory_operand(operands[0], DImode) \
   || gr_register_operand(operands[1], DImode))
#define HAVE_cond_movdi_new_mem (TARGET_V5_FEATURES)
#define HAVE_store_pair (reload_completed && REGNO (operands[3]) == REGNO (operands[1]) + 1 \
   && hexagon_address_adjacent_p (operands[0], operands[2]))
#define HAVE_movsf_real_v4 (TARGET_V4_FEATURES)
#define HAVE_movsf_new_value (TARGET_V4_FEATURES)
#define HAVE_movsf_real (!TARGET_V4_FEATURES \
   && (!memory_operand(operands[0], SFmode) \
       || gr_register_operand(operands[1], SFmode)))
#define HAVE_cond_movsf 1
#define HAVE_cond_movsf_new_value (TARGET_V4_FEATURES)
#define HAVE_movdf_real 1
#define HAVE_movdf_real_new_mem (TARGET_V5_FEATURES)
#define HAVE_cond_movdf (!memory_operand(operands[0], DFmode) \
   || gr_register_operand(operands[1], DFmode))
#define HAVE_cond_movdf_new_mem (TARGET_V5_FEATURES)
#define HAVE_addsi3_real_v4 (TARGET_V4_FEATURES && TARGET_MEMOPS)
#define HAVE_addsi3_nomemops_v4 (TARGET_V4_FEATURES && !TARGET_MEMOPS)
#define HAVE_addqi3_real_v4 (TARGET_V4_FEATURES && TARGET_MEMOPS)
#define HAVE_addhi3_real_v4 (TARGET_V4_FEATURES && TARGET_MEMOPS)
#define HAVE_addsi3_real (!TARGET_V4_FEATURES)
#define HAVE_cond_addqi3 1
#define HAVE_cond_addhi3 1
#define HAVE_cond_addsi3 1
#define HAVE_adddi3 1
#define HAVE_adddisi3 (TARGET_V3_FEATURES)
#define HAVE_ssaddsi3 (TARGET_V4_FEATURES)
#define HAVE_subsi3_real_v4 (TARGET_V4_FEATURES && TARGET_MEMOPS)
#define HAVE_subsi3_nomemops_v4 (TARGET_V4_FEATURES && !TARGET_MEMOPS)
#define HAVE_subqi3_real_v4 (TARGET_V4_FEATURES && TARGET_MEMOPS)
#define HAVE_subhi3_real_v4 (TARGET_V4_FEATURES && TARGET_MEMOPS)
#define HAVE_subsi3_real (!TARGET_V4_FEATURES)
#define HAVE_cond_subsi3 1
#define HAVE_subdi3 1
#define HAVE_sssubsi3 (TARGET_V4_FEATURES)
#define HAVE_mulsi3_real_v4 (TARGET_V4_FEATURES)
#define HAVE_mulsi3_real (!TARGET_V4_FEATURES)
#define HAVE_muldi3 1
#define HAVE_muldi3_helper_1 1
#define HAVE_muldi3_helper_2 1
#define HAVE_uminsi3 1
#define HAVE_umindi3 (TARGET_V3_FEATURES)
#define HAVE_umaxsi3 1
#define HAVE_umaxdi3 (TARGET_V3_FEATURES)
#define HAVE_andbi3 1
#define HAVE_andsi3_real_v4 (TARGET_V4_FEATURES && TARGET_MEMOPS)
#define HAVE_andsi3_nomemops_v4 (TARGET_V4_FEATURES && !TARGET_MEMOPS)
#define HAVE_andqi3_real_v4 (TARGET_V4_FEATURES && TARGET_MEMOPS)
#define HAVE_andhi3_real_v4 (TARGET_V4_FEATURES && TARGET_MEMOPS)
#define HAVE_andsi3_real (!TARGET_V4_FEATURES)
#define HAVE_cond_andsi3 1
#define HAVE_anddi3 1
#define HAVE_iorbi3 1
#define HAVE_iorsi3_real_v4 (TARGET_V4_FEATURES && TARGET_MEMOPS)
#define HAVE_iorsi3_nomemops_v4 (TARGET_V4_FEATURES && !TARGET_MEMOPS)
#define HAVE_iorqi3_real_v4 (TARGET_V4_FEATURES && TARGET_MEMOPS)
#define HAVE_iorhi3_real_v4 (TARGET_V4_FEATURES && TARGET_MEMOPS)
#define HAVE_iorsi3_real (!TARGET_V4_FEATURES)
#define HAVE_cond_iorsi3 1
#define HAVE_iordi3 1
#define HAVE_xorbi3 1
#define HAVE_xorsi3 1
#define HAVE_cond_xorsi3 1
#define HAVE_xordi3 1
#define HAVE_sminsi3 1
#define HAVE_smindi3 (TARGET_V3_FEATURES)
#define HAVE_smaxsi3 1
#define HAVE_smaxdi3 (TARGET_V3_FEATURES)
#define HAVE_mulhisi3 1
#define HAVE_mulsidi3 1
#define HAVE_umulhisi3 1
#define HAVE_umulsidi3 1
#define HAVE_smulsi3_highpart 1
#define HAVE_umulsi3_highpart 1
#define HAVE_ashlsi3_real_v4 (TARGET_V4_FEATURES)
#define HAVE_ashlsi3_real (!TARGET_V4_FEATURES)
#define HAVE_ashldi3 1
#define HAVE_ashrsi3 1
#define HAVE_ashrdi3 1
#define HAVE_lshrsi3 1
#define HAVE_lshrdi3 1
#define HAVE_negsi2 1
#define HAVE_negdi2 1
#define HAVE_abssi2 1
#define HAVE_absdi2 1
#define HAVE_clzsi2 1
#define HAVE_ctzsi2 1
#define HAVE_one_cmplbi2 1
#define HAVE_one_cmplsi2 1
#define HAVE_one_cmpldi2 1
#define HAVE_cmpsi_eq_v4 (TARGET_V4_FEATURES)
#define HAVE_cmpsi_gt_v4 (TARGET_V4_FEATURES)
#define HAVE_cmpsi_ge_v4 (TARGET_V4_FEATURES)
#define HAVE_cmpsi_gtu_v4 (TARGET_V4_FEATURES)
#define HAVE_cmpsi_geu_v4 (TARGET_V4_FEATURES)
#define HAVE_cmpsi_ne (TARGET_V4_FEATURES)
#define HAVE_cmpsi_le (TARGET_V4_FEATURES)
#define HAVE_cmpsi_lt_v4 (TARGET_V4_FEATURES)
#define HAVE_cmpsi_leu (TARGET_V4_FEATURES)
#define HAVE_cmpsi_ltu_v4 (TARGET_V4_FEATURES)
#define HAVE_cmpsi_eq_imm (!TARGET_V4_FEATURES)
#define HAVE_cmpsi_gt_imm (!TARGET_V4_FEATURES)
#define HAVE_cmpsi_gtu_imm (!TARGET_V4_FEATURES)
#define HAVE_cmpsi_eq (!TARGET_V4_FEATURES)
#define HAVE_cmpsi_gt (!TARGET_V4_FEATURES)
#define HAVE_cmpsi_gtu (!TARGET_V4_FEATURES)
#define HAVE_cmpsi_ne_zero (!TARGET_V4_FEATURES)
#define HAVE_cmpdi_eq 1
#define HAVE_cmpdi_gt 1
#define HAVE_cmpdi_gtu 1
#define HAVE_extendqisi2 1
#define HAVE_extendqisi2_new_mem (TARGET_V5_FEATURES)
#define HAVE_extendqidi2 1
#define HAVE_extendhisi2 1
#define HAVE_extendhisi2_new_mem (TARGET_V5_FEATURES)
#define HAVE_extendhidi2 1
#define HAVE_extendsidi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendqisi2_new_mem (TARGET_V5_FEATURES)
#define HAVE_zero_extendqidi2 1
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendhisi2_new_mem (TARGET_V5_FEATURES)
#define HAVE_zero_extendhidi2 1
#define HAVE_zero_extendsidi2 1
#define HAVE_extzv 1
#define HAVE_insv 1
#define HAVE_muxtsi_v4 (TARGET_V4_FEATURES)
#define HAVE_muxfsi_v4 (TARGET_V4_FEATURES)
#define HAVE_muxtsi (!TARGET_V4_FEATURES)
#define HAVE_muxfsi (!TARGET_V4_FEATURES)
#define HAVE_gpr_cond_jump (TARGET_V3_FEATURES && !TARGET_V4_FEATURES)
#define HAVE_cond_jump 1
#define HAVE_cond_jump_v4 (TARGET_V4_FEATURES)
#define HAVE_new_value_jump_tstbit (TARGET_V4_FEATURES)
#define HAVE_compare_and_jump_tstbit (TARGET_V4_FEATURES && reload_completed)
#define HAVE_new_value_jump1 (TARGET_V4_FEATURES)
#define HAVE_compare_and_jump1 (TARGET_V4_FEATURES && reload_completed)
#define HAVE_new_value_jump2 (TARGET_V4_FEATURES)
#define HAVE_compare_and_jump2 (TARGET_V4_FEATURES && reload_completed)
#define HAVE_jump 1
#define HAVE_long_call_pc_relative (TARGET_LONG_CALLS && TARGET_V4_FEATURES \
   && !(GET_CODE (operands[0]) == SYMBOL_REF \
   && SYMBOL_REF_LOCAL_P (operands[0])))
#define HAVE_call_pc_relative (!TARGET_LONG_CALLS \
   || (GET_CODE (operands[0]) == SYMBOL_REF \
       && SYMBOL_REF_LOCAL_P (operands[0])))
#define HAVE_call_register 1
#define HAVE_long_sibcall_real (TARGET_LONG_CALLS && TARGET_V4_FEATURES \
   && !(GET_CODE (operands[0]) == SYMBOL_REF \
        && SYMBOL_REF_LOCAL_P (operands[0])))
#define HAVE_sibcall_real (!TARGET_LONG_CALLS \
   || (GET_CODE (operands[0]) == SYMBOL_REF \
       && SYMBOL_REF_LOCAL_P (operands[0])))
#define HAVE_long_call_value_pc_relative (TARGET_LONG_CALLS && TARGET_V4_FEATURES \
   && !(GET_CODE (operands[1]) == SYMBOL_REF \
        && SYMBOL_REF_LOCAL_P (operands[1])) \
   && !hexagon_tls_symbol_p (operands[1]))
#define HAVE_call_value_pc_relative ((!TARGET_LONG_CALLS \
    || (GET_CODE (operands[1]) == SYMBOL_REF \
        && SYMBOL_REF_LOCAL_P (operands[1]))) \
   && !hexagon_tls_symbol_p (operands[1]))
#define HAVE_call_value_pc_relative_tls (hexagon_tls_symbol_p (operands[1]))
#define HAVE_call_value_register 1
#define HAVE_long_sibcall_value_real (TARGET_LONG_CALLS && TARGET_V4_FEATURES \
   && !(GET_CODE (operands[1]) == SYMBOL_REF \
        && SYMBOL_REF_LOCAL_P (operands[1])))
#define HAVE_sibcall_value_real (!TARGET_LONG_CALLS \
   || (GET_CODE (operands[1]) == SYMBOL_REF \
       && SYMBOL_REF_LOCAL_P (operands[1])))
#define HAVE_cond_return (hexagon_direct_return () && !cfun->machine->frame_info.use_allocframe)
#define HAVE_cond_dealloc_return (TARGET_V4_FEATURES && TARGET_DEALLOC_RETURN && hexagon_direct_return ())
#define HAVE_nop 1
#define HAVE_hintjr (TARGET_V4_FEATURES)
#define HAVE_indirect_jump 1
#define HAVE_cond_jump_reg_indirect 1
#define HAVE_tablejump_real 1
#define HAVE_doloop_end_internal 1
#define HAVE_endloop0 1
#define HAVE_endloop1 1
#define HAVE_loop0_v4 (TARGET_V4_FEATURES)
#define HAVE_loop0 (!TARGET_V4_FEATURES)
#define HAVE_loop0_pic (flag_pic && !TARGET_V4_FEATURES)
#define HAVE_loop0_pic_v4 (flag_pic && TARGET_V4_FEATURES)
#define HAVE_loop1_v4 (TARGET_V4_FEATURES)
#define HAVE_loop1 (!TARGET_V4_FEATURES)
#define HAVE_loop1_pic (flag_pic && !TARGET_V4_FEATURES)
#define HAVE_loop1_pic_v4 (flag_pic && TARGET_V4_FEATURES)
#define HAVE_prefetch_real 1
#define HAVE_hexagon_unspec_HEXAGON_C2_cmpeq 1
#define HAVE_hexagon_unspec_HEXAGON_C2_cmpgt 1
#define HAVE_hexagon_unspec_HEXAGON_C2_cmpgtu 1
#define HAVE_hexagon_unspec_HEXAGON_C2_cmpeqp 1
#define HAVE_hexagon_unspec_HEXAGON_C2_cmpgtp 1
#define HAVE_hexagon_unspec_HEXAGON_C2_cmpgtup 1
#define HAVE_hexagon_unspec_HEXAGON_A4_rcmpeqi (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_rcmpneqi (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_rcmpeq (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_rcmpneq (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_bitsset (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_bitsclr (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_nbitsset (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_nbitsclr (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_cmpeqi_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_cmpeqi_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_cmpgti_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_cmpgti_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_cmpgtui_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_cmpgtui_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_cmpgei 1
#define HAVE_hexagon_unspec_HEXAGON_C2_cmpgeui 1
#define HAVE_hexagon_unspec_HEXAGON_C2_cmplt (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_cmpltu (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_bitsclri (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_nbitsclri (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_cmpneqi (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_cmpltei (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_cmplteui (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_cmpneq (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_cmplte (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_cmplteu (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_and_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_and_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_or_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_or_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_xor_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_xor_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_andn_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_andn_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_not_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_not_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_orn (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_and_and (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_and_or (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_or_and (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_or_or (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_and_andn (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_and_orn (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_or_andn (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_or_orn (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_pxfer_map (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_any8_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_any8_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_all8_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_all8_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_vitpack 1
#define HAVE_hexagon_unspec_HEXAGON_C2_mux 1
#define HAVE_hexagon_unspec_HEXAGON_C2_muxii (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_muxir (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_muxri (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_vmux 1
#define HAVE_hexagon_unspec_HEXAGON_C2_mask 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vcmpbeq 1
#define HAVE_hexagon_unspec_HEXAGON_A4_vcmpbeqi (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_vcmpbeq_any (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vcmpbgtu 1
#define HAVE_hexagon_unspec_HEXAGON_A4_vcmpbgtui (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_vcmpbgt (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_vcmpbgti (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_cmpbeq (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_cmpbeqi (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_cmpbgtu (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_cmpbgtui (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_cmpbgt (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_cmpbgti (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vcmpheq 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vcmphgt 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vcmphgtu 1
#define HAVE_hexagon_unspec_HEXAGON_A4_vcmpheqi (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_vcmphgti (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_vcmphgtui (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_cmpheq (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_cmphgt (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_cmphgtu (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_cmpheqi (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_cmphgti (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_cmphgtui (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vcmpweq 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vcmpwgt 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vcmpwgtu 1
#define HAVE_hexagon_unspec_HEXAGON_A4_vcmpweqi (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_vcmpwgti (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_vcmpwgtui (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_boundscheck (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_tlbmatch (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C2_tfrpr 1
#define HAVE_hexagon_unspec_HEXAGON_C2_tfrrp 1
#define HAVE_hexagon_unspec_HEXAGON_C4_fastcorner9 (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_C4_fastcorner9_not (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_acc_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_acc_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_acc_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_acc_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_acc_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_acc_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_acc_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_acc_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_nac_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_nac_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_nac_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_nac_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_nac_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_nac_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_nac_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_nac_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_acc_sat_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_acc_sat_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_acc_sat_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_acc_sat_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_acc_sat_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_acc_sat_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_acc_sat_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_acc_sat_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_nac_sat_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_nac_sat_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_nac_sat_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_nac_sat_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_nac_sat_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_nac_sat_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_nac_sat_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_nac_sat_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_sat_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_sat_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_sat_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_sat_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_sat_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_sat_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_sat_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_sat_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_rnd_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_rnd_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_rnd_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_rnd_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_rnd_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_rnd_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_rnd_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_rnd_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_sat_rnd_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_sat_rnd_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_sat_rnd_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_sat_rnd_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_sat_rnd_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_sat_rnd_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_sat_rnd_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_sat_rnd_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_acc_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_acc_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_acc_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_acc_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_acc_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_acc_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_acc_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_acc_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_nac_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_nac_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_nac_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_nac_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_nac_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_nac_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_nac_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_nac_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_rnd_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_rnd_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_rnd_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_rnd_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_rnd_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_rnd_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_rnd_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyd_rnd_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_acc_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_acc_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_acc_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_acc_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_acc_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_acc_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_acc_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_acc_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_nac_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_nac_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_nac_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_nac_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_nac_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_nac_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_nac_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_nac_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_acc_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_acc_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_acc_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_acc_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_acc_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_acc_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_acc_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_acc_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_nac_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_nac_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_nac_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_nac_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_nac_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_nac_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_nac_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_nac_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_hh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_hh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_hl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_hl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_lh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_lh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_ll_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyud_ll_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpysmi (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_macsip (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_macsin (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_dpmpyss_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_dpmpyss_acc_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_dpmpyss_nac_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_dpmpyuu_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_dpmpyuu_acc_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_dpmpyuu_nac_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_up 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_up_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_mpy_up_s1_sat (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyu_up 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpysu_up (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_dpmpyss_rnd_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M4_mac_up_s1_sat (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_nac_up_s1_sat (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyi 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyui_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_mpyui_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_maci (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_acci (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_accii (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_nacci (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_naccii (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_subacc (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_mpyrr_addr (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_mpyri_addr_u2 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_mpyri_addr (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_mpyri_addi (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_mpyrr_addi (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vmpy2s_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vmpy2s_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vmac2s_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vmac2s_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vmpy2su_s0 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vmpy2su_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vmac2su_s0 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vmac2su_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vmpy2s_s0pack (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vmpy2s_s1pack (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vmac2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vmpy2es_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vmpy2es_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vmac2es_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vmac2es_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vmac2es (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vrmac_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vrmpy_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vdmpyrs_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vdmpyrs_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M5_vrmpybuu (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M5_vrmacbuu (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M5_vrmpybsu (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M5_vrmacbsu (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M5_vmpybuu (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M5_vmpybsu (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M5_vmacbuu (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M5_vmacbsu (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M5_vdmpybsu (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M5_vdmacbsu (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vdmacs_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vdmacs_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vdmpys_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vdmpys_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_cmpyrs_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_cmpyrs_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_cmpyrsc_s0 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_cmpyrsc_s1 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_cmacs_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_cmacs_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_cmacsc_s0 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_cmacsc_s1 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_cmpys_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_cmpys_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_cmpysc_s0 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_cmpysc_s1 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_cnacs_s0 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_cnacs_s1 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_cnacsc_s0 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_cnacsc_s1 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vrcmpys_s1 (TARGET_V3_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vrcmpys_acc_s1 (TARGET_V3_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vrcmpys_s1rp (TARGET_V3_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_mmacls_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmacls_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmachs_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmachs_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmpyl_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmpyl_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmpyh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmpyh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmacls_rs0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmacls_rs1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmachs_rs0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmachs_rs1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmpyl_rs0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmpyl_rs1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmpyh_rs0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmpyh_rs1 1
#define HAVE_hexagon_unspec_HEXAGON_M4_vrmpyeh_s0 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_vrmpyeh_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_vrmpyeh_acc_s0 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_vrmpyeh_acc_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_vrmpyoh_s0 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_vrmpyoh_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_vrmpyoh_acc_s0 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_vrmpyoh_acc_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_hmmpyl_rs1 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_hmmpyh_rs1 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_hmmpyl_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_hmmpyh_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_mmaculs_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmaculs_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmacuhs_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmacuhs_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmpyul_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmpyul_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmpyuh_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmpyuh_s1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmaculs_rs0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmaculs_rs1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmacuhs_rs0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmacuhs_rs1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmpyul_rs0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmpyul_rs1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmpyuh_rs0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_mmpyuh_rs1 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vrcmaci_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vrcmacr_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vrcmaci_s0c (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vrcmacr_s0c (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_cmaci_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_cmacr_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vrcmpyi_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vrcmpyr_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vrcmpyi_s0c (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vrcmpyr_s0c (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_cmpyi_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M2_cmpyr_s0 1
#define HAVE_hexagon_unspec_HEXAGON_M4_cmpyi_wh (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_cmpyr_wh (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_cmpyi_whc (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_cmpyr_whc (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vcmpy_s0_sat_i (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vcmpy_s0_sat_r (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vcmpy_s1_sat_i (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vcmpy_s1_sat_r (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vcmac_s0_sat_i (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vcmac_s0_sat_r (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_vcrotate (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_vrcrotate_acc (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_vrcrotate (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_vcnegh (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_vrcnegh (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_pmpyw (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_vpmpyh (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_pmpyw_acc (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_vpmpyh_acc (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_add 1
#define HAVE_hexagon_unspec_HEXAGON_A2_sub 1
#define HAVE_hexagon_unspec_HEXAGON_A2_addsat_v4 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_addsat_v1 (!TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_subsat_v4 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_subsat_v1 (!TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_addi 1
#define HAVE_hexagon_unspec_HEXAGON_A2_addh_l16_ll 1
#define HAVE_hexagon_unspec_HEXAGON_A2_addh_l16_hl 1
#define HAVE_hexagon_unspec_HEXAGON_A2_addh_l16_sat_ll 1
#define HAVE_hexagon_unspec_HEXAGON_A2_addh_l16_sat_hl 1
#define HAVE_hexagon_unspec_HEXAGON_A2_subh_l16_ll 1
#define HAVE_hexagon_unspec_HEXAGON_A2_subh_l16_hl 1
#define HAVE_hexagon_unspec_HEXAGON_A2_subh_l16_sat_ll 1
#define HAVE_hexagon_unspec_HEXAGON_A2_subh_l16_sat_hl 1
#define HAVE_hexagon_unspec_HEXAGON_A2_addh_h16_ll 1
#define HAVE_hexagon_unspec_HEXAGON_A2_addh_h16_lh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_addh_h16_hl 1
#define HAVE_hexagon_unspec_HEXAGON_A2_addh_h16_hh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_addh_h16_sat_ll 1
#define HAVE_hexagon_unspec_HEXAGON_A2_addh_h16_sat_lh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_addh_h16_sat_hl 1
#define HAVE_hexagon_unspec_HEXAGON_A2_addh_h16_sat_hh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_subh_h16_ll 1
#define HAVE_hexagon_unspec_HEXAGON_A2_subh_h16_lh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_subh_h16_hl 1
#define HAVE_hexagon_unspec_HEXAGON_A2_subh_h16_hh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_subh_h16_sat_ll 1
#define HAVE_hexagon_unspec_HEXAGON_A2_subh_h16_sat_lh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_subh_h16_sat_hl 1
#define HAVE_hexagon_unspec_HEXAGON_A2_subh_h16_sat_hh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_aslh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_asrh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_addp 1
#define HAVE_hexagon_unspec_HEXAGON_A2_addpsat (TARGET_V3_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_addsp (TARGET_V3_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_subp 1
#define HAVE_hexagon_unspec_HEXAGON_A2_neg 1
#define HAVE_hexagon_unspec_HEXAGON_A2_negsat 1
#define HAVE_hexagon_unspec_HEXAGON_A2_abs 1
#define HAVE_hexagon_unspec_HEXAGON_A2_abssat 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vconj (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_negp 1
#define HAVE_hexagon_unspec_HEXAGON_A2_absp 1
#define HAVE_hexagon_unspec_HEXAGON_A2_max 1
#define HAVE_hexagon_unspec_HEXAGON_A2_maxu 1
#define HAVE_hexagon_unspec_HEXAGON_A2_min 1
#define HAVE_hexagon_unspec_HEXAGON_A2_minu 1
#define HAVE_hexagon_unspec_HEXAGON_A2_maxp (TARGET_V3_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_maxup (TARGET_V3_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_minp (TARGET_V3_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_minup (TARGET_V3_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_tfr 1
#define HAVE_hexagon_unspec_HEXAGON_A2_tfrsi 1
#define HAVE_hexagon_unspec_HEXAGON_A2_tfrp_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_tfrp_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_tfrpi (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_zxtb 1
#define HAVE_hexagon_unspec_HEXAGON_A2_sxtb 1
#define HAVE_hexagon_unspec_HEXAGON_A2_zxth 1
#define HAVE_hexagon_unspec_HEXAGON_A2_sxth 1
#define HAVE_hexagon_unspec_HEXAGON_A2_combinew 1
#define HAVE_hexagon_unspec_HEXAGON_A4_combineri (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_combineir (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_combineii (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_combine_hh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_combine_hl 1
#define HAVE_hexagon_unspec_HEXAGON_A2_combine_lh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_combine_ll 1
#define HAVE_hexagon_unspec_HEXAGON_A2_tfril 1
#define HAVE_hexagon_unspec_HEXAGON_A2_tfrih 1
#define HAVE_hexagon_unspec_HEXAGON_A2_and_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_and_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_or_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_or_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_xor_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_xor_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_not_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_not_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_xor_xacc (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_xor_xacc (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_andn (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_orn (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_andnp (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_ornp (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_addaddi (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_subaddi (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_and_and (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_and_andn (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_and_or (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_and_xor (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_or_and (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_or_andn (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_or_or (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_or_xor (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_or_andix (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_or_andi (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_or_ori (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_xor_and (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_xor_or (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M4_xor_andn (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_subri (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_andir (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_orir (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_andp 1
#define HAVE_hexagon_unspec_HEXAGON_A2_orp 1
#define HAVE_hexagon_unspec_HEXAGON_A2_xorp 1
#define HAVE_hexagon_unspec_HEXAGON_A2_notp 1
#define HAVE_hexagon_unspec_HEXAGON_A2_sxtw 1
#define HAVE_hexagon_unspec_HEXAGON_A2_sat 1
#define HAVE_hexagon_unspec_HEXAGON_A2_roundsat (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_sath 1
#define HAVE_hexagon_unspec_HEXAGON_A2_satuh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_satub 1
#define HAVE_hexagon_unspec_HEXAGON_A2_satb (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vaddub 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vaddb_map (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vaddubs 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vaddh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vaddhs 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vadduhs 1
#define HAVE_hexagon_unspec_HEXAGON_A5_vaddhubs (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vaddw 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vaddws 1
#define HAVE_hexagon_unspec_HEXAGON_S4_vxaddsubw (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_vxsubaddw (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_vxaddsubh (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_vxsubaddh (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_vxaddsubhr (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_vxsubaddhr (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_svavgh (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_svavghs (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_svnavgh (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_svaddh_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_svaddh_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_svaddhs_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_svaddhs_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_svadduhs_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_svadduhs_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_svsubh_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_svsubh_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_svsubhs_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_svsubhs_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_svsubuhs_v2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_svsubuhs_v1 (!TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vraddub 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vraddub_acc 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vraddh (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vradduh (TARGET_V3_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vsubub 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vsubb_map (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vsububs 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vsubh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vsubhs 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vsubuhs 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vsubw 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vsubws 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vabsh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vabshsat 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vabsw 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vabswsat 1
#define HAVE_hexagon_unspec_HEXAGON_M2_vabsdiffw (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_M2_vabsdiffh (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vrsadub 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vrsadub_acc 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vavgub 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vavguh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vavgh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vnavgh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vavgw 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vnavgw (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vavgwr 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vnavgwr (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vavgwcr (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vnavgwcr (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vavghcr (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vnavghcr (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vavguw 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vavguwr 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vavgubr 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vavguhr 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vavghr 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vnavghr (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_round_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_round_rr (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_round_ri_sat (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_round_rr_sat (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_cround_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_cround_rr (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_vrminh (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_vrmaxh (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_vrminuh (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_vrmaxuh (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_vrminw (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_vrmaxw (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_vrminuw (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_vrmaxuw (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vminb (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vmaxb (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_vminub 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vmaxub 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vminh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vmaxh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vminuh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vmaxuh 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vminw 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vmaxw 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vminuw 1
#define HAVE_hexagon_unspec_HEXAGON_A2_vmaxuw 1
#define HAVE_hexagon_unspec_HEXAGON_A4_modwrapu (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sfadd (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sfsub (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sfmpy (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sffma (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sffma_sc (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sffms (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sffma_lib (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sffms_lib (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sfcmpeq (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sfcmpgt (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sfcmpge (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sfcmpuo (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sfmax (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sfmin (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sfclass (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sfimm_p (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sfimm_n (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sffixupn (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sffixupd (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_sffixupr (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_dfcmpeq (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_dfcmpgt (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_dfcmpge (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_dfcmpuo (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_dfclass (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_dfimm_p (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_dfimm_n (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_sf2df (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_df2sf (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_uw2sf (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_uw2df (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_w2sf (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_w2df (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_ud2sf (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_ud2df (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_d2sf (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_d2df (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_sf2uw (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_sf2w (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_sf2ud (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_sf2d (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_df2uw (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_df2w (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_df2ud (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_df2d (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_sf2uw_chop (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_sf2w_chop (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_sf2ud_chop (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_sf2d_chop (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_df2uw_chop (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_df2w_chop (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_df2ud_chop (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_F2_conv_df2d_chop (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_r_r 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_r_r 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_r_r 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsl_r_r 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_r_p 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_r_p 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_r_p 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsl_r_p 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_r_r_acc 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_r_r_acc 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_r_r_acc 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsl_r_r_acc 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_r_p_acc 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_r_p_acc 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_r_p_acc 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsl_r_p_acc 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_r_r_nac 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_r_r_nac 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_r_r_nac 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsl_r_r_nac 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_r_p_nac 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_r_p_nac 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_r_p_nac 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsl_r_p_nac 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_r_r_and 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_r_r_and 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_r_r_and 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsl_r_r_and 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_r_r_or 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_r_r_or 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_r_r_or 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsl_r_r_or 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_r_p_and 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_r_p_and 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_r_p_and 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsl_r_p_and 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_r_p_or 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_r_p_or 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_r_p_or 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsl_r_p_or 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_r_p_xor (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_r_p_xor (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_r_p_xor (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_lsl_r_p_xor (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_r_r_sat 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_r_r_sat 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_i_r 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_i_r 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_i_r 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_i_p 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_i_p 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_i_p 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_i_r_acc 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_i_r_acc 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_i_r_acc 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_i_p_acc 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_i_p_acc 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_i_p_acc 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_i_r_nac 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_i_r_nac 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_i_r_nac 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_i_p_nac 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_i_p_nac 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_i_p_nac 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_i_r_xacc (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_i_r_xacc (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_i_p_xacc (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_i_p_xacc (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_i_r_and 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_i_r_and 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_i_r_and 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_i_r_or 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_i_r_or 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_i_r_or 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_i_p_and 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_i_p_and 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_i_p_and 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_i_p_or 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_i_p_or 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_i_p_or 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_i_r_sat 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_i_r_rnd 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_i_r_rnd_goodsyntax (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_i_p_rnd (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_i_p_rnd_goodsyntax (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_lsli (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_addasl_rrri 1
#define HAVE_hexagon_unspec_HEXAGON_S4_andi_asl_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_ori_asl_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_addi_asl_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_subi_asl_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_andi_lsr_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_ori_lsr_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_addi_lsr_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_subi_lsr_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_valignib 1
#define HAVE_hexagon_unspec_HEXAGON_S2_valignrb 1
#define HAVE_hexagon_unspec_HEXAGON_S2_vspliceib 1
#define HAVE_hexagon_unspec_HEXAGON_S2_vsplicerb 1
#define HAVE_hexagon_unspec_HEXAGON_S2_vsplatrh 1
#define HAVE_hexagon_unspec_HEXAGON_S2_vsplatrb 1
#define HAVE_hexagon_unspec_HEXAGON_S2_insert 1
#define HAVE_hexagon_unspec_HEXAGON_S2_tableidxb_goodsyntax (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_tableidxh_goodsyntax (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_tableidxw_goodsyntax (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_tableidxd_goodsyntax (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_bitspliti (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A4_bitsplit (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_extract (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_extractu 1
#define HAVE_hexagon_unspec_HEXAGON_S2_insertp 1
#define HAVE_hexagon_unspec_HEXAGON_S4_extractp (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_extractup 1
#define HAVE_hexagon_unspec_HEXAGON_S2_insert_rp 1
#define HAVE_hexagon_unspec_HEXAGON_S4_extract_rp (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_extractu_rp 1
#define HAVE_hexagon_unspec_HEXAGON_S2_insertp_rp 1
#define HAVE_hexagon_unspec_HEXAGON_S4_extractp_rp (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_extractup_rp 1
#define HAVE_hexagon_unspec_HEXAGON_S2_tstbit_i 1
#define HAVE_hexagon_unspec_HEXAGON_S4_ntstbit_i (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_setbit_i 1
#define HAVE_hexagon_unspec_HEXAGON_S2_togglebit_i 1
#define HAVE_hexagon_unspec_HEXAGON_S2_clrbit_i 1
#define HAVE_hexagon_unspec_HEXAGON_S2_tstbit_r 1
#define HAVE_hexagon_unspec_HEXAGON_S4_ntstbit_r (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_setbit_r 1
#define HAVE_hexagon_unspec_HEXAGON_S2_togglebit_r 1
#define HAVE_hexagon_unspec_HEXAGON_S2_clrbit_r 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_i_vh 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_i_vh 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_i_vh 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_r_vh 1
#define HAVE_hexagon_unspec_HEXAGON_S5_asrhub_rnd_sat_goodsyntax (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S5_asrhub_sat (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S5_vasrhrnd_goodsyntax (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_r_vh 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_r_vh 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsl_r_vh 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_i_vw 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_i_svw_trun (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_r_svw_trun (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_i_vw 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_i_vw 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asr_r_vw 1
#define HAVE_hexagon_unspec_HEXAGON_S2_asl_r_vw 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsr_r_vw 1
#define HAVE_hexagon_unspec_HEXAGON_S2_lsl_r_vw 1
#define HAVE_hexagon_unspec_HEXAGON_S2_vrndpackwh 1
#define HAVE_hexagon_unspec_HEXAGON_S2_vrndpackwhs 1
#define HAVE_hexagon_unspec_HEXAGON_S2_vsxtbh (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_vzxtbh 1
#define HAVE_hexagon_unspec_HEXAGON_S2_vsathub 1
#define HAVE_hexagon_unspec_HEXAGON_S2_svsathub (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_svsathb (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_vsathb (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_vtrunohb (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_vtrunewh (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_vtrunowh (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_vtrunehb 1
#define HAVE_hexagon_unspec_HEXAGON_S2_vsxthw 1
#define HAVE_hexagon_unspec_HEXAGON_S2_vzxthw 1
#define HAVE_hexagon_unspec_HEXAGON_S2_vsatwh 1
#define HAVE_hexagon_unspec_HEXAGON_S2_vsatwuh 1
#define HAVE_hexagon_unspec_HEXAGON_S2_packhl_v4 (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_packhl_v1 (!TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_A2_swiz (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_vsathub_nopack 1
#define HAVE_hexagon_unspec_HEXAGON_S2_vsathb_nopack (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_vsatwh_nopack 1
#define HAVE_hexagon_unspec_HEXAGON_S2_vsatwuh_nopack 1
#define HAVE_hexagon_unspec_HEXAGON_S2_shuffob 1
#define HAVE_hexagon_unspec_HEXAGON_S2_shuffeb 1
#define HAVE_hexagon_unspec_HEXAGON_S2_shuffoh 1
#define HAVE_hexagon_unspec_HEXAGON_S2_shuffeh 1
#define HAVE_hexagon_unspec_HEXAGON_S5_popcountp (TARGET_V5_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_parity (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_parityp (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_lfsp (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_clbnorm (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_clbaddi (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_clbpnorm (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S4_clbpaddi (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_clb 1
#define HAVE_hexagon_unspec_HEXAGON_S2_cl0 1
#define HAVE_hexagon_unspec_HEXAGON_S2_cl1 1
#define HAVE_hexagon_unspec_HEXAGON_S2_clbp 1
#define HAVE_hexagon_unspec_HEXAGON_S2_cl0p 1
#define HAVE_hexagon_unspec_HEXAGON_S2_cl1p 1
#define HAVE_hexagon_unspec_HEXAGON_S2_brev (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_brevp (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_ct0 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_ct1 (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_ct0p (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_ct1p (TARGET_V4_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_interleave (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_HEXAGON_S2_deinterleave (TARGET_V2_FEATURES)
#define HAVE_hexagon_unspec_SI_to_SXTHI_asrh 1
#define HAVE_hexagon_builtin_val_for_valignb 1
#define HAVE_hexagon_unspec_circ_ldd 1
#define HAVE_hexagon_unspec_circ_ldw 1
#define HAVE_hexagon_unspec_circ_ldh 1
#define HAVE_hexagon_unspec_circ_lduh 1
#define HAVE_hexagon_unspec_circ_ldb 1
#define HAVE_hexagon_unspec_circ_ldub 1
#define HAVE_hexagon_unspec_circ_std 1
#define HAVE_hexagon_unspec_circ_stw 1
#define HAVE_hexagon_unspec_circ_sth 1
#define HAVE_hexagon_unspec_circ_sthhi 1
#define HAVE_hexagon_unspec_circ_stb 1
#define HAVE_hexagon_unspec_brev_ldd 1
#define HAVE_hexagon_unspec_brev_ldw 1
#define HAVE_hexagon_unspec_brev_ldh 1
#define HAVE_hexagon_unspec_brev_lduh 1
#define HAVE_hexagon_unspec_brev_ldb 1
#define HAVE_hexagon_unspec_brev_ldub 1
#define HAVE_hexagon_unspec_brev_std 1
#define HAVE_hexagon_unspec_brev_stw 1
#define HAVE_hexagon_unspec_brev_sth 1
#define HAVE_hexagon_unspec_brev_sthhi 1
#define HAVE_hexagon_unspec_brev_stb 1
#define HAVE_andttbisi3 1
#define HAVE_iorttbisi3 1
#define HAVE_xorttbisi3 1
#define HAVE_andftbisi3 1
#define HAVE_iorftbisi3 1
#define HAVE_xorftbisi3 1
#define HAVE_andtfbisi3 1
#define HAVE_iortfbisi3 1
#define HAVE_xortfbisi3 1
#define HAVE_andffbisi3 1
#define HAVE_iorffbisi3 1
#define HAVE_xorffbisi3 1
#define HAVE_addhi3_ll 1
#define HAVE_addhi3_lh 1
#define HAVE_subhi3_ll 1
#define HAVE_subhi3_lh 1
#define HAVE_ssaddhi3_ll 1
#define HAVE_ssaddhi3_lh 1
#define HAVE_sssubhi3_ll 1
#define HAVE_sssubhi3_lh 1
#define HAVE_andnotsi3 (TARGET_V4_FEATURES)
#define HAVE_ornotsi3 (TARGET_V4_FEATURES)
#define HAVE_andnotdi3 (TARGET_V4_FEATURES)
#define HAVE_ornotdi3 (TARGET_V4_FEATURES)
#define HAVE_andandbi3 (TARGET_V4_FEATURES)
#define HAVE_andandnotbi3 (TARGET_V4_FEATURES)
#define HAVE_andorbi3 (TARGET_V4_FEATURES)
#define HAVE_andornotbi3 (TARGET_V4_FEATURES)
#define HAVE_andandsi3 (TARGET_V4_FEATURES)
#define HAVE_andandnotsi3 (TARGET_V4_FEATURES)
#define HAVE_andorsi3 (TARGET_V4_FEATURES)
#define HAVE_andxorsi3 (TARGET_V4_FEATURES)
#define HAVE_orandbi3 (TARGET_V4_FEATURES)
#define HAVE_orandnotbi3 (TARGET_V4_FEATURES)
#define HAVE_ororbi3 (TARGET_V4_FEATURES)
#define HAVE_orornotbi3 (TARGET_V4_FEATURES)
#define HAVE_orandsi3 (TARGET_V4_FEATURES)
#define HAVE_ororsi3 (TARGET_V4_FEATURES)
#define HAVE_orxorsi3 (TARGET_V4_FEATURES)
#define HAVE_xorandsi3 (TARGET_V4_FEATURES)
#define HAVE_xororsi3 (TARGET_V4_FEATURES)
#define HAVE_xorxorsi3 1
#define HAVE_addaccsi3_v4 (TARGET_V4_FEATURES)
#define HAVE_addaccsi3 (!TARGET_V4_FEATURES)
#define HAVE_subacc1si3_v4 (TARGET_V4_FEATURES)
#define HAVE_subacc1si3 (!TARGET_V4_FEATURES)
#define HAVE_subacc2si3 1
#define HAVE_subnaccsi3 1
#define HAVE_addnacc1si3_v4 (TARGET_V4_FEATURES)
#define HAVE_addnacc1si3 (!TARGET_V4_FEATURES)
#define HAVE_addnacc2si3_v4 (TARGET_V4_FEATURES)
#define HAVE_addnacc2si3 (!TARGET_V4_FEATURES)
#define HAVE_addaslmsi4 1
#define HAVE_addaslsi4 1
#define HAVE_mulhisi3_hh 1
#define HAVE_mulhisi3_hl 1
#define HAVE_mulhisi3_lh 1
#define HAVE_mulhisi3_hh_s1 1
#define HAVE_mulhisi3_hl_s1 1
#define HAVE_mulhisi3_lh_s1 1
#define HAVE_mulhisi3_ll_s1 1
#define HAVE_ssmulhisi3_hh 1
#define HAVE_ssmulhisi3_hl 1
#define HAVE_ssmulhisi3_lh 1
#define HAVE_ssmulhisi3_ll 1
#define HAVE_ssmulhisi3_hh_s1 1
#define HAVE_ssmulhisi3_hl_s1 1
#define HAVE_ssmulhisi3_lh_s1 1
#define HAVE_ssmulhisi3_ll_s1 1
#define HAVE_macsi4 (TARGET_V4_FEATURES)
#define HAVE_macsi3 (!TARGET_V4_FEATURES)
#define HAVE_macsidi3 1
#define HAVE_mnacsidi3 1
#define HAVE_macn1sidi3 1
#define HAVE_macn2sidi3 1
#define HAVE_umacsidi3 1
#define HAVE_umnacsidi3 1
#define HAVE_umacn1sidi3 1
#define HAVE_umacn2sidi3 1
#define HAVE_machisi3_hh 1
#define HAVE_machisi3_hl 1
#define HAVE_machisi3_lh 1
#define HAVE_machisi3_ll 1
#define HAVE_machisi3_hh_s1 1
#define HAVE_machisi3_hl_s1 1
#define HAVE_machisi3_lh_s1 1
#define HAVE_machisi3_ll_s1 1
#define HAVE_mnachisi3_hh 1
#define HAVE_mnachisi3_hl 1
#define HAVE_mnachisi3_lh 1
#define HAVE_mnachisi3_ll 1
#define HAVE_mnachisi3_hh_s1 1
#define HAVE_mnachisi3_hl_s1 1
#define HAVE_mnachisi3_lh_s1 1
#define HAVE_mnachisi3_ll_s1 1
#define HAVE_ssmachisi3_hh 1
#define HAVE_ssmachisi3_hl 1
#define HAVE_ssmachisi3_lh 1
#define HAVE_ssmachisi3_ll 1
#define HAVE_ssmachisi3_hh_s1 1
#define HAVE_ssmachisi3_hl_s1 1
#define HAVE_ssmachisi3_lh_s1 1
#define HAVE_ssmachisi3_ll_s1 1
#define HAVE_ssmnachisi3_hh 1
#define HAVE_ssmnachisi3_hl 1
#define HAVE_ssmnachisi3_lh 1
#define HAVE_ssmnachisi3_ll 1
#define HAVE_ssmnachisi3_hh_s1 1
#define HAVE_ssmnachisi3_hl_s1 1
#define HAVE_ssmnachisi3_lh_s1 1
#define HAVE_ssmnachisi3_ll_s1 1
#define HAVE_addashlsi3 (TARGET_V4_FEATURES)
#define HAVE_ashlsi3_acc (!TARGET_V4_FEATURES)
#define HAVE_subashlsi3 (TARGET_V4_FEATURES)
#define HAVE_submulsi3 (TARGET_V4_FEATURES)
#define HAVE_ashlsi3_nacc (!TARGET_V4_FEATURES)
#define HAVE_andashlsi3 (TARGET_V4_FEATURES)
#define HAVE_andmulsi3 (TARGET_V4_FEATURES)
#define HAVE_ashlsi3_and (!TARGET_V4_FEATURES)
#define HAVE_orashlsi3 (TARGET_V4_FEATURES)
#define HAVE_ormulsi3 (TARGET_V4_FEATURES)
#define HAVE_ashlsi3_or (!TARGET_V4_FEATURES)
#define HAVE_ashlsi3_xor 1
#define HAVE_ashrsi3_acc 1
#define HAVE_ashrsi3_nacc 1
#define HAVE_ashrsi3_and 1
#define HAVE_ashrsi3_or 1
#define HAVE_addlshrsi3 (TARGET_V4_FEATURES)
#define HAVE_lshrsi3_acc (!TARGET_V4_FEATURES)
#define HAVE_sublshrsi3 (TARGET_V4_FEATURES)
#define HAVE_lshrsi3_nacc (!TARGET_V4_FEATURES)
#define HAVE_andlshrsi3 (TARGET_V4_FEATURES)
#define HAVE_lshrsi3_and (!TARGET_V4_FEATURES)
#define HAVE_orlshrsi3 (TARGET_V4_FEATURES)
#define HAVE_lshrsi3_or (!TARGET_V4_FEATURES)
#define HAVE_lshrsi3_xor 1
#define HAVE_ashldi3_acc 1
#define HAVE_ashldi3_nacc 1
#define HAVE_ashldi3_and 1
#define HAVE_ashldi3_or 1
#define HAVE_ashldi3_xor 1
#define HAVE_ashrdi3_acc 1
#define HAVE_ashrdi3_nacc 1
#define HAVE_ashrdi3_and 1
#define HAVE_ashrdi3_or 1
#define HAVE_lshrdi3_acc 1
#define HAVE_lshrdi3_nacc 1
#define HAVE_lshrdi3_and 1
#define HAVE_lshrdi3_or 1
#define HAVE_lshrdi3_xor 1
#define HAVE_setbitsi 1
#define HAVE_clrbitsi 1
#define HAVE_togglebitsi 1
#define HAVE_tstbitsi 1
#define HAVE_not_tstbitsi_v4 (TARGET_V4_FEATURES)
#define HAVE_not_tstbitsi (!TARGET_V4_FEATURES)
#define HAVE_bitsclrsi 1
#define HAVE_bitsclrsi_2 1
#define HAVE_not_bitsclrsi_v4 (TARGET_V4_FEATURES)
#define HAVE_not_bitsclrsi_2_v4 (TARGET_V4_FEATURES)
#define HAVE_not_bitsclrsi (!TARGET_V4_FEATURES)
#define HAVE_not_bitsclrsi_2 (!TARGET_V4_FEATURES)
#define HAVE_bitssetsi 1
#define HAVE_not_bitssetsi_v4 (TARGET_V4_FEATURES)
#define HAVE_not_bitssetsi (!TARGET_V4_FEATURES)
#define HAVE_r_cmpsi_eq (TARGET_V4_FEATURES)
#define HAVE_r_cmpsi_ne (TARGET_V4_FEATURES)
#define HAVE_cmpqi_eq (TARGET_V4_FEATURES)
#define HAVE_cmpqi_gt (TARGET_V4_FEATURES)
#define HAVE_cmpqi_ge (TARGET_V4_FEATURES)
#define HAVE_cmpqi_gtu (TARGET_V4_FEATURES)
#define HAVE_cmpqi_geu (TARGET_V4_FEATURES)
#define HAVE_cmphi_eq (TARGET_V4_FEATURES)
#define HAVE_cmphi_gt (TARGET_V4_FEATURES)
#define HAVE_cmphi_ge (TARGET_V4_FEATURES)
#define HAVE_cmphi_gtu (TARGET_V4_FEATURES)
#define HAVE_cmphi_geu (TARGET_V4_FEATURES)
#define HAVE_andnotbi3 1
#define HAVE_ornotbi3 1
#define HAVE_storehhi 1
#define HAVE_absloadsetbi (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadsetbi_new_mem (TARGET_V5_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadsxtsetbi (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadsxtsetbi_new_mem (TARGET_V5_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadzxtsetbi (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadzxtsetbi_new_mem (TARGET_V5_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadsetqi (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadsetqi_new_mem (TARGET_V5_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadsxtsetqi (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadsxtsetqi_new_mem (TARGET_V5_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadzxtsetqi (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadzxtsetqi_new_mem (TARGET_V5_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadsethi (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadsethi_new_mem (TARGET_V5_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadsxtsethi (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadsxtsethi_new_mem (TARGET_V5_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadzxtsethi (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadzxtsethi_new_mem (TARGET_V5_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadsetsi (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadsetsi_new_mem (TARGET_V5_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadsetdi (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absloadsetdi_new_mem (TARGET_V5_FEATURES \
   && rtx_equal_p (operands[1], operands[3]))
#define HAVE_absstoresetbi (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[0], operands[3]))
#define HAVE_absstoresetbi_new_value (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[0], operands[3]))
#define HAVE_absstoresetqi (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[0], operands[3]))
#define HAVE_absstoresetqi_new_value (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[0], operands[3]))
#define HAVE_absstoresethi (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[0], operands[3]))
#define HAVE_absstoresethi_new_value (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[0], operands[3]))
#define HAVE_absstorehsethi (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[0], operands[3]))
#define HAVE_absstoresetsi (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[0], operands[3]))
#define HAVE_absstoresetsi_new_value (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[0], operands[3]))
#define HAVE_absstoresetdi (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[0], operands[3]))
#define HAVE_absstoresetsf (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[0], operands[3]))
#define HAVE_absstoresetsf_new_value (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[0], operands[3]))
#define HAVE_absstoresetdf (TARGET_V4_FEATURES \
   && rtx_equal_p (operands[0], operands[3]))
#define HAVE_return_jump 1
#define HAVE_allocframe_real 1
#define HAVE_allocframe_and_save_r16_real (TARGET_V4_FEATURES)
#define HAVE_allocframe_and_save_r16_and_r17_real (TARGET_V4_FEATURES)
#define HAVE_allocate_stack_and_save_r16 1
#define HAVE_allocate_stack_and_save_r16_and_r17 1
#define HAVE_allocate_stack_and_save_r16_through_r18 (TARGET_V4_FEATURES)
#define HAVE_allocate_stack_and_save_r16_through_r19 (TARGET_V4_FEATURES)
#define HAVE_deallocframe 1
#define HAVE_save_r24_through_r27 1
#define HAVE_restore_r24_through_r27_and_deallocframe_before_sibcall 1
#define HAVE_restore_r24_through_r25_and_deallocframe_before_sibcall 1
#define HAVE_restore_r24_through_r27_and_deallocframe 1
#define HAVE_restore_r24_through_r25_and_deallocframe 1
#define HAVE_save_r16_through_r19 1
#define HAVE_save_r16_through_r21 1
#define HAVE_save_r16_through_r23 1
#define HAVE_save_r16_through_r25 1
#define HAVE_save_r16_through_r27 1
#define HAVE_restore_r16_through_r27_and_deallocframe_before_sibcall 1
#define HAVE_restore_r16_through_r25_and_deallocframe_before_sibcall 1
#define HAVE_restore_r16_through_r23_and_deallocframe_before_sibcall 1
#define HAVE_restore_r16_through_r21_and_deallocframe_before_sibcall 1
#define HAVE_restore_r16_through_r19_and_deallocframe_before_sibcall 1
#define HAVE_restore_r16_through_r17_and_deallocframe_before_sibcall 1
#define HAVE_restore_r16_through_r27_and_deallocframe 1
#define HAVE_restore_r16_through_r25_and_deallocframe 1
#define HAVE_restore_r16_through_r23_and_deallocframe 1
#define HAVE_restore_r16_through_r21_and_deallocframe 1
#define HAVE_restore_r16_through_r19_and_deallocframe 1
#define HAVE_restore_r16_through_r17_and_deallocframe 1
#define HAVE_deallocframe_return (TARGET_V4_FEATURES && TARGET_DEALLOC_RETURN && hexagon_direct_return ())
#define HAVE_deallocframe_function (!TARGET_V4_FEATURES || !TARGET_DEALLOC_RETURN)
#define HAVE_falign 1
#define HAVE_memcpy_kernelqi 1
#define HAVE_memcpy_kernelhi 1
#define HAVE_memcpy_kernelsi 1
#define HAVE_memcpy_kerneldi 1
#define HAVE_vcmpb_eq 1
#define HAVE_vcmpb_gtu 1
#define HAVE_any8 1
#define HAVE_all8 1
#define HAVE_combinesi_v4 (reload_completed && TARGET_V4_FEATURES)
#define HAVE_combinesi (reload_completed && !TARGET_V4_FEATURES)
#define HAVE_abssf2 1
#define HAVE_negsf2 1
#define HAVE_smaxsf3 (TARGET_V5_FEATURES)
#define HAVE_sminsf3 (TARGET_V5_FEATURES)
#define HAVE_addsf3 (TARGET_V5_FEATURES)
#define HAVE_subsf3 (TARGET_V5_FEATURES)
#define HAVE_mulsf3 (TARGET_V5_FEATURES)
#define HAVE_cmpsf_gt (TARGET_V5_FEATURES)
#define HAVE_cmpdf_gt (TARGET_V5_FEATURES)
#define HAVE_cmpsf_ge (TARGET_V5_FEATURES)
#define HAVE_cmpdf_ge (TARGET_V5_FEATURES)
#define HAVE_cmpsf_le (TARGET_V5_FEATURES)
#define HAVE_cmpdf_le (TARGET_V5_FEATURES)
#define HAVE_cmpsf_lt (TARGET_V5_FEATURES)
#define HAVE_cmpdf_lt (TARGET_V5_FEATURES)
#define HAVE_cmpsf_eq (TARGET_V5_FEATURES)
#define HAVE_cmpdf_eq (TARGET_V5_FEATURES)
#define HAVE_cmpsf_uo (TARGET_V5_FEATURES)
#define HAVE_cmpdf_uo (TARGET_V5_FEATURES)
#define HAVE_fixuns_truncsfsi2 (TARGET_V5_FEATURES)
#define HAVE_fixuns_truncsfdi2 (TARGET_V5_FEATURES)
#define HAVE_fixuns_truncdfsi2 (TARGET_V5_FEATURES)
#define HAVE_fixuns_truncdfdi2 (TARGET_V5_FEATURES)
#define HAVE_fix_truncsfsi2 (TARGET_V5_FEATURES)
#define HAVE_fix_truncsfdi2 (TARGET_V5_FEATURES)
#define HAVE_fix_truncdfsi2 (TARGET_V5_FEATURES)
#define HAVE_fix_truncdfdi2 (TARGET_V5_FEATURES)
#define HAVE_floatunssisf2 (TARGET_V5_FEATURES)
#define HAVE_floatunssidf2 (TARGET_V5_FEATURES)
#define HAVE_floatunsdisf2 (TARGET_V5_FEATURES)
#define HAVE_floatunsdidf2 (TARGET_V5_FEATURES)
#define HAVE_floatsisf2 (TARGET_V5_FEATURES)
#define HAVE_floatsidf2 (TARGET_V5_FEATURES)
#define HAVE_floatdisf2 (TARGET_V5_FEATURES)
#define HAVE_floatdidf2 (TARGET_V5_FEATURES)
#define HAVE_extendsfdf2 (TARGET_V5_FEATURES)
#define HAVE_truncdfsf2 (TARGET_V5_FEATURES)
#define HAVE_cond_combinesi (reload_completed)
#define HAVE_compute_got_base (flag_pic)
#define HAVE_compute_got_base_v4 (flag_pic && TARGET_V4_FEATURES)
#define HAVE_compute_tls_base 1
#define HAVE_clean_cache 1
#define HAVE_movbi 1
#define HAVE_movqi 1
#define HAVE_movhi 1
#define HAVE_movsi 1
#define HAVE_movdi 1
#define HAVE_movsf 1
#define HAVE_movdf 1
#define HAVE_addqi3 1
#define HAVE_addhi3 1
#define HAVE_addsi3 1
#define HAVE_subqi3 1
#define HAVE_subhi3 1
#define HAVE_subsi3 1
#define HAVE_mulsi3 1
#define HAVE_andqi3 1
#define HAVE_andhi3 1
#define HAVE_andsi3 1
#define HAVE_iorqi3 1
#define HAVE_iorhi3 1
#define HAVE_iorsi3 1
#define HAVE_umuldi3_highpart 1
#define HAVE_ashlsi3 1
#define HAVE_movmemsi 1
#define HAVE_setmemsi (optimize && !optimize_size)
#define HAVE_cstoresi4 1
#define HAVE_cstoreqi4 (QImode == DImode || TARGET_V5_FEATURES \
   || (TARGET_V4_FEATURES && GET_MODE_CLASS (QImode) == MODE_INT))
#define HAVE_cstorehi4 (HImode == DImode || TARGET_V5_FEATURES \
   || (TARGET_V4_FEATURES && GET_MODE_CLASS (HImode) == MODE_INT))
#define HAVE_cstoredi4 1
#define HAVE_cstoresf4 (SFmode == DImode || TARGET_V5_FEATURES \
   || (TARGET_V4_FEATURES && GET_MODE_CLASS (SFmode) == MODE_INT))
#define HAVE_cstoredf4 (DFmode == DImode || TARGET_V5_FEATURES \
   || (TARGET_V4_FEATURES && GET_MODE_CLASS (DFmode) == MODE_INT))
#define HAVE_hexagon_cstoresi 1
#define HAVE_cbranchbi4 1
#define HAVE_cbranchsi4 1
#define HAVE_cbranchqi4 (QImode == DImode || TARGET_V5_FEATURES \
   || (TARGET_V4_FEATURES && GET_MODE_CLASS (QImode) == MODE_INT))
#define HAVE_cbranchhi4 (HImode == DImode || TARGET_V5_FEATURES \
   || (TARGET_V4_FEATURES && GET_MODE_CLASS (HImode) == MODE_INT))
#define HAVE_cbranchdi4 1
#define HAVE_cbranchsf4 (SFmode == DImode || TARGET_V5_FEATURES \
   || (TARGET_V4_FEATURES && GET_MODE_CLASS (SFmode) == MODE_INT))
#define HAVE_cbranchdf4 (DFmode == DImode || TARGET_V5_FEATURES \
   || (TARGET_V4_FEATURES && GET_MODE_CLASS (DFmode) == MODE_INT))
#define HAVE_hexagon_cbranchbi 1
#define HAVE_call 1
#define HAVE_call_register_expand 1
#define HAVE_sibcall (!TARGET_LONG_CALLS || TARGET_V4_FEATURES)
#define HAVE_call_value 1
#define HAVE_sibcall_value (!TARGET_LONG_CALLS || TARGET_V4_FEATURES)
#define HAVE_return (TARGET_DEALLOC_RETURN && hexagon_direct_return ())
#define HAVE_tablejump 1
#define HAVE_doloop_end (TARGET_HARDWARE_LOOPS)
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue 1
#define HAVE_prefetch 1
#define HAVE_hexagon_builtin_HEXAGON_C2_cmpeq 1
#define HAVE_hexagon_builtin_HEXAGON_C2_cmpgt 1
#define HAVE_hexagon_builtin_HEXAGON_C2_cmpgtu 1
#define HAVE_hexagon_builtin_HEXAGON_C2_cmpeqp 1
#define HAVE_hexagon_builtin_HEXAGON_C2_cmpgtp 1
#define HAVE_hexagon_builtin_HEXAGON_C2_cmpgtup 1
#define HAVE_hexagon_builtin_HEXAGON_A4_rcmpeqi (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_rcmpneqi (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_rcmpeq (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_rcmpneq (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C2_bitsset (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C2_bitsclr (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_nbitsset (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_nbitsclr (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C2_cmpeqi 1
#define HAVE_hexagon_builtin_HEXAGON_C2_cmpgti 1
#define HAVE_hexagon_builtin_HEXAGON_C2_cmpgtui 1
#define HAVE_hexagon_builtin_HEXAGON_C2_cmpgei 1
#define HAVE_hexagon_builtin_HEXAGON_C2_cmpgeui 1
#define HAVE_hexagon_builtin_HEXAGON_C2_cmplt (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C2_cmpltu (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C2_bitsclri (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_nbitsclri (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_cmpneqi (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_cmpltei (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_cmplteui (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_cmpneq (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_cmplte (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_cmplteu (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C2_and 1
#define HAVE_hexagon_builtin_HEXAGON_C2_or 1
#define HAVE_hexagon_builtin_HEXAGON_C2_xor 1
#define HAVE_hexagon_builtin_HEXAGON_C2_andn 1
#define HAVE_hexagon_builtin_HEXAGON_C2_not 1
#define HAVE_hexagon_builtin_HEXAGON_C2_orn (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_and_and (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_and_or (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_or_and (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_or_or (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_and_andn (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_and_orn (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_or_andn (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_or_orn (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C2_pxfer_map (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C2_any8 1
#define HAVE_hexagon_builtin_HEXAGON_C2_all8 1
#define HAVE_hexagon_builtin_HEXAGON_C2_vitpack 1
#define HAVE_hexagon_builtin_HEXAGON_C2_mux 1
#define HAVE_hexagon_builtin_HEXAGON_C2_muxii (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C2_muxir (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C2_muxri (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C2_vmux 1
#define HAVE_hexagon_builtin_HEXAGON_C2_mask 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vcmpbeq 1
#define HAVE_hexagon_builtin_HEXAGON_A4_vcmpbeqi (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_vcmpbeq_any (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vcmpbgtu 1
#define HAVE_hexagon_builtin_HEXAGON_A4_vcmpbgtui (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_vcmpbgt (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_vcmpbgti (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_cmpbeq (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_cmpbeqi (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_cmpbgtu (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_cmpbgtui (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_cmpbgt (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_cmpbgti (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vcmpheq 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vcmphgt 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vcmphgtu 1
#define HAVE_hexagon_builtin_HEXAGON_A4_vcmpheqi (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_vcmphgti (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_vcmphgtui (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_cmpheq (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_cmphgt (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_cmphgtu (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_cmpheqi (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_cmphgti (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_cmphgtui (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vcmpweq 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vcmpwgt 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vcmpwgtu 1
#define HAVE_hexagon_builtin_HEXAGON_A4_vcmpweqi (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_vcmpwgti (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_vcmpwgtui (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_boundscheck (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_tlbmatch (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C2_tfrpr 1
#define HAVE_hexagon_builtin_HEXAGON_C2_tfrrp 1
#define HAVE_hexagon_builtin_HEXAGON_C4_fastcorner9 (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_C4_fastcorner9_not (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_acc_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_acc_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_acc_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_acc_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_acc_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_acc_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_acc_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_acc_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_nac_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_nac_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_nac_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_nac_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_nac_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_nac_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_nac_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_nac_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_acc_sat_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_acc_sat_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_acc_sat_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_acc_sat_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_acc_sat_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_acc_sat_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_acc_sat_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_acc_sat_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_nac_sat_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_nac_sat_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_nac_sat_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_nac_sat_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_nac_sat_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_nac_sat_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_nac_sat_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_nac_sat_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_sat_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_sat_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_sat_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_sat_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_sat_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_sat_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_sat_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_sat_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_rnd_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_rnd_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_rnd_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_rnd_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_rnd_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_rnd_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_rnd_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_rnd_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_sat_rnd_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_sat_rnd_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_sat_rnd_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_sat_rnd_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_sat_rnd_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_sat_rnd_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_sat_rnd_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_sat_rnd_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_acc_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_acc_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_acc_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_acc_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_acc_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_acc_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_acc_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_acc_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_nac_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_nac_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_nac_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_nac_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_nac_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_nac_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_nac_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_nac_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_rnd_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_rnd_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_rnd_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_rnd_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_rnd_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_rnd_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_rnd_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyd_rnd_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_acc_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_acc_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_acc_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_acc_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_acc_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_acc_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_acc_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_acc_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_nac_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_nac_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_nac_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_nac_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_nac_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_nac_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_nac_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_nac_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_acc_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_acc_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_acc_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_acc_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_acc_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_acc_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_acc_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_acc_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_nac_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_nac_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_nac_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_nac_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_nac_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_nac_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_nac_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_nac_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_hh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_hh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_hl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_hl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_lh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_lh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_ll_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyud_ll_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpysmi (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_macsip (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_macsin (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_dpmpyss_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_dpmpyss_acc_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_dpmpyss_nac_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_dpmpyuu_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_dpmpyuu_acc_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_dpmpyuu_nac_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_up 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_up_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_mpy_up_s1_sat (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyu_up 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpysu_up (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_dpmpyss_rnd_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M4_mac_up_s1_sat (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_nac_up_s1_sat (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyi 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mpyui 1
#define HAVE_hexagon_builtin_HEXAGON_M2_maci (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_acci (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_accii (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_nacci (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_naccii (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_subacc (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_mpyrr_addr (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_mpyri_addr_u2 (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_mpyri_addr (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_mpyri_addi (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_mpyrr_addi (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vmpy2s_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vmpy2s_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vmac2s_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vmac2s_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vmpy2su_s0 (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vmpy2su_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vmac2su_s0 (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vmac2su_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vmpy2s_s0pack (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vmpy2s_s1pack (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vmac2 (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vmpy2es_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vmpy2es_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vmac2es_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vmac2es_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vmac2es (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vrmac_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vrmpy_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vdmpyrs_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vdmpyrs_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M5_vrmpybuu (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M5_vrmacbuu (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M5_vrmpybsu (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M5_vrmacbsu (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M5_vmpybuu (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M5_vmpybsu (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M5_vmacbuu (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M5_vmacbsu (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M5_vdmpybsu (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M5_vdmacbsu (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vdmacs_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vdmacs_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vdmpys_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vdmpys_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_cmpyrs_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_cmpyrs_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_cmpyrsc_s0 (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_cmpyrsc_s1 (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_cmacs_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_cmacs_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_cmacsc_s0 (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_cmacsc_s1 (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_cmpys_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_cmpys_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_cmpysc_s0 (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_cmpysc_s1 (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_cnacs_s0 (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_cnacs_s1 (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_cnacsc_s0 (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_cnacsc_s1 (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vrcmpys_s1 (TARGET_V3_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vrcmpys_acc_s1 (TARGET_V3_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vrcmpys_s1rp (TARGET_V3_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_mmacls_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmacls_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmachs_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmachs_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmpyl_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmpyl_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmpyh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmpyh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmacls_rs0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmacls_rs1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmachs_rs0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmachs_rs1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmpyl_rs0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmpyl_rs1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmpyh_rs0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmpyh_rs1 1
#define HAVE_hexagon_builtin_HEXAGON_M4_vrmpyeh_s0 (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_vrmpyeh_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_vrmpyeh_acc_s0 (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_vrmpyeh_acc_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_vrmpyoh_s0 (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_vrmpyoh_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_vrmpyoh_acc_s0 (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_vrmpyoh_acc_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_hmmpyl_rs1 (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_hmmpyh_rs1 (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_hmmpyl_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_hmmpyh_s1 (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_mmaculs_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmaculs_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmacuhs_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmacuhs_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmpyul_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmpyul_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmpyuh_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmpyuh_s1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmaculs_rs0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmaculs_rs1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmacuhs_rs0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmacuhs_rs1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmpyul_rs0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmpyul_rs1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmpyuh_rs0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_mmpyuh_rs1 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vrcmaci_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vrcmacr_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vrcmaci_s0c (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vrcmacr_s0c (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_cmaci_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_cmacr_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vrcmpyi_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vrcmpyr_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vrcmpyi_s0c (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vrcmpyr_s0c (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_cmpyi_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M2_cmpyr_s0 1
#define HAVE_hexagon_builtin_HEXAGON_M4_cmpyi_wh (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_cmpyr_wh (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_cmpyi_whc (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_cmpyr_whc (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vcmpy_s0_sat_i (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vcmpy_s0_sat_r (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vcmpy_s1_sat_i (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vcmpy_s1_sat_r (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vcmac_s0_sat_i (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vcmac_s0_sat_r (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_vcrotate (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_vrcrotate_acc (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_vrcrotate (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_vcnegh (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_vrcnegh (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_pmpyw (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_vpmpyh (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_pmpyw_acc (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_vpmpyh_acc (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_add 1
#define HAVE_hexagon_builtin_HEXAGON_A2_sub 1
#define HAVE_hexagon_builtin_HEXAGON_A2_addsat 1
#define HAVE_hexagon_builtin_HEXAGON_A2_subsat 1
#define HAVE_hexagon_builtin_HEXAGON_A2_addi 1
#define HAVE_hexagon_builtin_HEXAGON_A2_addh_l16_ll 1
#define HAVE_hexagon_builtin_HEXAGON_A2_addh_l16_hl 1
#define HAVE_hexagon_builtin_HEXAGON_A2_addh_l16_sat_ll 1
#define HAVE_hexagon_builtin_HEXAGON_A2_addh_l16_sat_hl 1
#define HAVE_hexagon_builtin_HEXAGON_A2_subh_l16_ll 1
#define HAVE_hexagon_builtin_HEXAGON_A2_subh_l16_hl 1
#define HAVE_hexagon_builtin_HEXAGON_A2_subh_l16_sat_ll 1
#define HAVE_hexagon_builtin_HEXAGON_A2_subh_l16_sat_hl 1
#define HAVE_hexagon_builtin_HEXAGON_A2_addh_h16_ll 1
#define HAVE_hexagon_builtin_HEXAGON_A2_addh_h16_lh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_addh_h16_hl 1
#define HAVE_hexagon_builtin_HEXAGON_A2_addh_h16_hh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_addh_h16_sat_ll 1
#define HAVE_hexagon_builtin_HEXAGON_A2_addh_h16_sat_lh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_addh_h16_sat_hl 1
#define HAVE_hexagon_builtin_HEXAGON_A2_addh_h16_sat_hh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_subh_h16_ll 1
#define HAVE_hexagon_builtin_HEXAGON_A2_subh_h16_lh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_subh_h16_hl 1
#define HAVE_hexagon_builtin_HEXAGON_A2_subh_h16_hh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_subh_h16_sat_ll 1
#define HAVE_hexagon_builtin_HEXAGON_A2_subh_h16_sat_lh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_subh_h16_sat_hl 1
#define HAVE_hexagon_builtin_HEXAGON_A2_subh_h16_sat_hh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_aslh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_asrh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_addp 1
#define HAVE_hexagon_builtin_HEXAGON_A2_addpsat (TARGET_V3_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_addsp (TARGET_V3_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_subp 1
#define HAVE_hexagon_builtin_HEXAGON_A2_neg 1
#define HAVE_hexagon_builtin_HEXAGON_A2_negsat 1
#define HAVE_hexagon_builtin_HEXAGON_A2_abs 1
#define HAVE_hexagon_builtin_HEXAGON_A2_abssat 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vconj (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_negp 1
#define HAVE_hexagon_builtin_HEXAGON_A2_absp 1
#define HAVE_hexagon_builtin_HEXAGON_A2_max 1
#define HAVE_hexagon_builtin_HEXAGON_A2_maxu 1
#define HAVE_hexagon_builtin_HEXAGON_A2_min 1
#define HAVE_hexagon_builtin_HEXAGON_A2_minu 1
#define HAVE_hexagon_builtin_HEXAGON_A2_maxp (TARGET_V3_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_maxup (TARGET_V3_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_minp (TARGET_V3_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_minup (TARGET_V3_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_tfr 1
#define HAVE_hexagon_builtin_HEXAGON_A2_tfrsi 1
#define HAVE_hexagon_builtin_HEXAGON_A2_tfrp 1
#define HAVE_hexagon_builtin_HEXAGON_A2_tfrpi (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_zxtb 1
#define HAVE_hexagon_builtin_HEXAGON_A2_sxtb 1
#define HAVE_hexagon_builtin_HEXAGON_A2_zxth 1
#define HAVE_hexagon_builtin_HEXAGON_A2_sxth 1
#define HAVE_hexagon_builtin_HEXAGON_A2_combinew 1
#define HAVE_hexagon_builtin_HEXAGON_A4_combineri (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_combineir (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_combineii (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_combine_hh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_combine_hl 1
#define HAVE_hexagon_builtin_HEXAGON_A2_combine_lh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_combine_ll 1
#define HAVE_hexagon_builtin_HEXAGON_A2_tfril 1
#define HAVE_hexagon_builtin_HEXAGON_A2_tfrih 1
#define HAVE_hexagon_builtin_HEXAGON_A2_and 1
#define HAVE_hexagon_builtin_HEXAGON_A2_or 1
#define HAVE_hexagon_builtin_HEXAGON_A2_xor 1
#define HAVE_hexagon_builtin_HEXAGON_A2_not 1
#define HAVE_hexagon_builtin_HEXAGON_M2_xor_xacc (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_xor_xacc (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_andn (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_orn (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_andnp (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_ornp (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_addaddi (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_subaddi (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_and_and (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_and_andn (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_and_or (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_and_xor (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_or_and (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_or_andn (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_or_or (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_or_xor (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_or_andix (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_or_andi (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_or_ori (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_xor_and (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_xor_or (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M4_xor_andn (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_subri (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_andir (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_orir (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_andp 1
#define HAVE_hexagon_builtin_HEXAGON_A2_orp 1
#define HAVE_hexagon_builtin_HEXAGON_A2_xorp 1
#define HAVE_hexagon_builtin_HEXAGON_A2_notp 1
#define HAVE_hexagon_builtin_HEXAGON_A2_sxtw 1
#define HAVE_hexagon_builtin_HEXAGON_A2_sat 1
#define HAVE_hexagon_builtin_HEXAGON_A2_roundsat (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_sath 1
#define HAVE_hexagon_builtin_HEXAGON_A2_satuh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_satub 1
#define HAVE_hexagon_builtin_HEXAGON_A2_satb (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vaddub 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vaddb_map (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vaddubs 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vaddh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vaddhs 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vadduhs 1
#define HAVE_hexagon_builtin_HEXAGON_A5_vaddhubs (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vaddw 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vaddws 1
#define HAVE_hexagon_builtin_HEXAGON_S4_vxaddsubw (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_vxsubaddw (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_vxaddsubh (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_vxsubaddh (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_vxaddsubhr (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_vxsubaddhr (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_svavgh (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_svavghs (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_svnavgh (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_svaddh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_svaddhs 1
#define HAVE_hexagon_builtin_HEXAGON_A2_svadduhs 1
#define HAVE_hexagon_builtin_HEXAGON_A2_svsubh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_svsubhs 1
#define HAVE_hexagon_builtin_HEXAGON_A2_svsubuhs 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vraddub 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vraddub_acc 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vraddh (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vradduh (TARGET_V3_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vsubub 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vsubb_map (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vsububs 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vsubh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vsubhs 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vsubuhs 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vsubw 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vsubws 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vabsh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vabshsat 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vabsw 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vabswsat 1
#define HAVE_hexagon_builtin_HEXAGON_M2_vabsdiffw (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_M2_vabsdiffh (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vrsadub 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vrsadub_acc 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vavgub 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vavguh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vavgh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vnavgh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vavgw 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vnavgw (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vavgwr 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vnavgwr (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vavgwcr (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vnavgwcr (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vavghcr (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vnavghcr (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vavguw 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vavguwr 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vavgubr 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vavguhr 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vavghr 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vnavghr (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_round_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_round_rr (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_round_ri_sat (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_round_rr_sat (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_cround_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_cround_rr (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_vrminh (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_vrmaxh (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_vrminuh (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_vrmaxuh (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_vrminw (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_vrmaxw (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_vrminuw (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_vrmaxuw (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vminb (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vmaxb (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A2_vminub 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vmaxub 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vminh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vmaxh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vminuh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vmaxuh 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vminw 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vmaxw 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vminuw 1
#define HAVE_hexagon_builtin_HEXAGON_A2_vmaxuw 1
#define HAVE_hexagon_builtin_HEXAGON_A4_modwrapu (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sfadd (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sfsub (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sfmpy (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sffma (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sffma_sc (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sffms (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sffma_lib (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sffms_lib (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sfcmpeq (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sfcmpgt (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sfcmpge (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sfcmpuo (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sfmax (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sfmin (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sfclass (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sfimm_p (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sfimm_n (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sffixupn (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sffixupd (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_sffixupr (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_dfcmpeq (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_dfcmpgt (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_dfcmpge (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_dfcmpuo (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_dfclass (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_dfimm_p (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_dfimm_n (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_sf2df (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_df2sf (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_uw2sf (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_uw2df (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_w2sf (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_w2df (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_ud2sf (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_ud2df (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_d2sf (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_d2df (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_sf2uw (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_sf2w (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_sf2ud (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_sf2d (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_df2uw (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_df2w (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_df2ud (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_df2d (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_sf2uw_chop (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_sf2w_chop (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_sf2ud_chop (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_sf2d_chop (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_df2uw_chop (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_df2w_chop (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_df2ud_chop (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_F2_conv_df2d_chop (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_r_r 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_r_r 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_r_r 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsl_r_r 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_r_p 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_r_p 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_r_p 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsl_r_p 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_r_r_acc 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_r_r_acc 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_r_r_acc 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsl_r_r_acc 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_r_p_acc 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_r_p_acc 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_r_p_acc 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsl_r_p_acc 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_r_r_nac 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_r_r_nac 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_r_r_nac 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsl_r_r_nac 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_r_p_nac 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_r_p_nac 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_r_p_nac 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsl_r_p_nac 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_r_r_and 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_r_r_and 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_r_r_and 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsl_r_r_and 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_r_r_or 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_r_r_or 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_r_r_or 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsl_r_r_or 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_r_p_and 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_r_p_and 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_r_p_and 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsl_r_p_and 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_r_p_or 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_r_p_or 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_r_p_or 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsl_r_p_or 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_r_p_xor (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_r_p_xor (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_r_p_xor (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_lsl_r_p_xor (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_r_r_sat 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_r_r_sat 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_i_r 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_i_r 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_i_r 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_i_p 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_i_p 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_i_p 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_i_r_acc 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_i_r_acc 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_i_r_acc 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_i_p_acc 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_i_p_acc 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_i_p_acc 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_i_r_nac 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_i_r_nac 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_i_r_nac 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_i_p_nac 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_i_p_nac 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_i_p_nac 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_i_r_xacc (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_i_r_xacc (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_i_p_xacc (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_i_p_xacc (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_i_r_and 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_i_r_and 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_i_r_and 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_i_r_or 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_i_r_or 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_i_r_or 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_i_p_and 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_i_p_and 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_i_p_and 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_i_p_or 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_i_p_or 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_i_p_or 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_i_r_sat 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_i_r_rnd 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_i_r_rnd_goodsyntax (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_i_p_rnd (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_i_p_rnd_goodsyntax (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_lsli (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_addasl_rrri 1
#define HAVE_hexagon_builtin_HEXAGON_S4_andi_asl_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_ori_asl_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_addi_asl_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_subi_asl_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_andi_lsr_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_ori_lsr_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_addi_lsr_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_subi_lsr_ri (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_valignib 1
#define HAVE_hexagon_builtin_HEXAGON_S2_valignrb 1
#define HAVE_hexagon_builtin_HEXAGON_S2_vspliceib 1
#define HAVE_hexagon_builtin_HEXAGON_S2_vsplicerb 1
#define HAVE_hexagon_builtin_HEXAGON_S2_vsplatrh 1
#define HAVE_hexagon_builtin_HEXAGON_S2_vsplatrb 1
#define HAVE_hexagon_builtin_HEXAGON_S2_insert 1
#define HAVE_hexagon_builtin_HEXAGON_S2_tableidxb_goodsyntax (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_tableidxh_goodsyntax (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_tableidxw_goodsyntax (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_tableidxd_goodsyntax (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_bitspliti (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_A4_bitsplit (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_extract (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_extractu 1
#define HAVE_hexagon_builtin_HEXAGON_S2_insertp 1
#define HAVE_hexagon_builtin_HEXAGON_S4_extractp (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_extractup 1
#define HAVE_hexagon_builtin_HEXAGON_S2_insert_rp 1
#define HAVE_hexagon_builtin_HEXAGON_S4_extract_rp (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_extractu_rp 1
#define HAVE_hexagon_builtin_HEXAGON_S2_insertp_rp 1
#define HAVE_hexagon_builtin_HEXAGON_S4_extractp_rp (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_extractup_rp 1
#define HAVE_hexagon_builtin_HEXAGON_S2_tstbit_i 1
#define HAVE_hexagon_builtin_HEXAGON_S4_ntstbit_i (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_setbit_i 1
#define HAVE_hexagon_builtin_HEXAGON_S2_togglebit_i 1
#define HAVE_hexagon_builtin_HEXAGON_S2_clrbit_i 1
#define HAVE_hexagon_builtin_HEXAGON_S2_tstbit_r 1
#define HAVE_hexagon_builtin_HEXAGON_S4_ntstbit_r (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_setbit_r 1
#define HAVE_hexagon_builtin_HEXAGON_S2_togglebit_r 1
#define HAVE_hexagon_builtin_HEXAGON_S2_clrbit_r 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_i_vh 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_i_vh 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_i_vh 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_r_vh 1
#define HAVE_hexagon_builtin_HEXAGON_S5_asrhub_rnd_sat_goodsyntax (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S5_asrhub_sat (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S5_vasrhrnd_goodsyntax (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_r_vh 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_r_vh 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsl_r_vh 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_i_vw 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_i_svw_trun (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_r_svw_trun (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_i_vw 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_i_vw 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asr_r_vw 1
#define HAVE_hexagon_builtin_HEXAGON_S2_asl_r_vw 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsr_r_vw 1
#define HAVE_hexagon_builtin_HEXAGON_S2_lsl_r_vw 1
#define HAVE_hexagon_builtin_HEXAGON_S2_vrndpackwh 1
#define HAVE_hexagon_builtin_HEXAGON_S2_vrndpackwhs 1
#define HAVE_hexagon_builtin_HEXAGON_S2_vsxtbh (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_vzxtbh 1
#define HAVE_hexagon_builtin_HEXAGON_S2_vsathub 1
#define HAVE_hexagon_builtin_HEXAGON_S2_svsathub (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_svsathb (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_vsathb (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_vtrunohb (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_vtrunewh (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_vtrunowh (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_vtrunehb 1
#define HAVE_hexagon_builtin_HEXAGON_S2_vsxthw 1
#define HAVE_hexagon_builtin_HEXAGON_S2_vzxthw 1
#define HAVE_hexagon_builtin_HEXAGON_S2_vsatwh 1
#define HAVE_hexagon_builtin_HEXAGON_S2_vsatwuh 1
#define HAVE_hexagon_builtin_HEXAGON_S2_packhl 1
#define HAVE_hexagon_builtin_HEXAGON_A2_swiz (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_vsathub_nopack 1
#define HAVE_hexagon_builtin_HEXAGON_S2_vsathb_nopack (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_vsatwh_nopack 1
#define HAVE_hexagon_builtin_HEXAGON_S2_vsatwuh_nopack 1
#define HAVE_hexagon_builtin_HEXAGON_S2_shuffob 1
#define HAVE_hexagon_builtin_HEXAGON_S2_shuffeb 1
#define HAVE_hexagon_builtin_HEXAGON_S2_shuffoh 1
#define HAVE_hexagon_builtin_HEXAGON_S2_shuffeh 1
#define HAVE_hexagon_builtin_HEXAGON_S5_popcountp (TARGET_V5_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_parity (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_parityp (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_lfsp (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_clbnorm (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_clbaddi (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_clbpnorm (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S4_clbpaddi (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_clb 1
#define HAVE_hexagon_builtin_HEXAGON_S2_cl0 1
#define HAVE_hexagon_builtin_HEXAGON_S2_cl1 1
#define HAVE_hexagon_builtin_HEXAGON_S2_clbp 1
#define HAVE_hexagon_builtin_HEXAGON_S2_cl0p 1
#define HAVE_hexagon_builtin_HEXAGON_S2_cl1p 1
#define HAVE_hexagon_builtin_HEXAGON_S2_brev (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_brevp (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_ct0 (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_ct1 (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_ct0p (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_ct1p (TARGET_V4_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_interleave (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_HEXAGON_S2_deinterleave (TARGET_V2_FEATURES)
#define HAVE_hexagon_builtin_SI_to_SXTHI_asrh 1
#define HAVE_hexagon_builtin_circ_ldd 1
#define HAVE_hexagon_builtin_circ_ldw 1
#define HAVE_hexagon_builtin_circ_ldh 1
#define HAVE_hexagon_builtin_circ_lduh 1
#define HAVE_hexagon_builtin_circ_ldb 1
#define HAVE_hexagon_builtin_circ_ldub 1
#define HAVE_hexagon_builtin_circ_std 1
#define HAVE_hexagon_builtin_circ_stw 1
#define HAVE_hexagon_builtin_circ_sth 1
#define HAVE_hexagon_builtin_circ_sthhi 1
#define HAVE_hexagon_builtin_circ_stb 1
#define HAVE_hexagon_builtin_brev_ldd 1
#define HAVE_hexagon_builtin_brev_ldw 1
#define HAVE_hexagon_builtin_brev_ldh 1
#define HAVE_hexagon_builtin_brev_lduh 1
#define HAVE_hexagon_builtin_brev_ldb 1
#define HAVE_hexagon_builtin_brev_ldub 1
#define HAVE_hexagon_builtin_brev_std 1
#define HAVE_hexagon_builtin_brev_stw 1
#define HAVE_hexagon_builtin_brev_sth 1
#define HAVE_hexagon_builtin_brev_sthhi 1
#define HAVE_hexagon_builtin_brev_stb 1
#define HAVE_allocframe 1
#define HAVE_allocframe_and_save_r16 (TARGET_V4_FEATURES)
#define HAVE_allocframe_and_save_r16_and_r17 (TARGET_V4_FEATURES)
#define HAVE_increment_stack_pointer 1
extern rtx        gen_load_tls_tprel_hi                                       (rtx, rtx);
extern rtx        gen_load_tls_tprel_lo                                       (rtx, rtx, rtx);
extern rtx        gen_load_tls_hi                                             (rtx, rtx);
extern rtx        gen_load_tls_lo                                             (rtx, rtx, rtx);
extern rtx        gen_pic_movsi_hi_gotoff                                     (rtx, rtx);
extern rtx        gen_pic_movsi_lo_gotoff                                     (rtx, rtx, rtx);
extern rtx        gen_pic_movsi_pcrel                                         (rtx, rtx);
extern rtx        gen_pic_movsi                                               (rtx, rtx);
extern rtx        gen_pic_movsi_hi_got                                        (rtx, rtx);
extern rtx        gen_pic_movsi_lo_got                                        (rtx, rtx, rtx);
extern rtx        gen_pic_movsi_got_v4                                        (rtx, rtx, rtx);
extern rtx        gen_movbi_real                                              (rtx, rtx);
extern rtx        gen_movbi_new_value                                         (rtx, rtx);
extern rtx        gen_movqi_real_v4                                           (rtx, rtx);
extern rtx        gen_movqi_new_value                                         (rtx, rtx);
extern rtx        gen_movqi_real                                              (rtx, rtx);
extern rtx        gen_cond_movqi                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cond_movqi_new_value                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_movhi_real_v4                                           (rtx, rtx);
extern rtx        gen_movhi_new_value                                         (rtx, rtx);
extern rtx        gen_movhi_real                                              (rtx, rtx);
extern rtx        gen_cond_movhi                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cond_movhi_new_value                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_movsi_high                                              (rtx, rtx);
extern rtx        gen_movsi_low                                               (rtx, rtx, rtx);
extern rtx        gen_movsi_real_v4                                           (rtx, rtx);
extern rtx        gen_movsi_new_value                                         (rtx, rtx);
extern rtx        gen_movsi_const32                                           (rtx, rtx, rtx);
extern rtx        gen_movsi_real                                              (rtx, rtx);
extern rtx        gen_cond_movsi                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cond_movsi_new_value                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_movdi_real                                              (rtx, rtx);
extern rtx        gen_movdi_real_new_mem                                      (rtx, rtx);
extern rtx        gen_cond_movdi                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cond_movdi_new_mem                                      (rtx, rtx, rtx, rtx);
extern rtx        gen_store_pair                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_movsf_real_v4                                           (rtx, rtx);
extern rtx        gen_movsf_new_value                                         (rtx, rtx);
extern rtx        gen_movsf_real                                              (rtx, rtx);
extern rtx        gen_cond_movsf                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cond_movsf_new_value                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_movdf_real                                              (rtx, rtx);
extern rtx        gen_movdf_real_new_mem                                      (rtx, rtx);
extern rtx        gen_cond_movdf                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cond_movdf_new_mem                                      (rtx, rtx, rtx, rtx);
extern rtx        gen_addsi3_real_v4                                          (rtx, rtx, rtx);
extern rtx        gen_addsi3_nomemops_v4                                      (rtx, rtx, rtx);
extern rtx        gen_addqi3_real_v4                                          (rtx, rtx, rtx);
extern rtx        gen_addhi3_real_v4                                          (rtx, rtx, rtx);
extern rtx        gen_addsi3_real                                             (rtx, rtx, rtx);
extern rtx        gen_cond_addqi3                                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_cond_addhi3                                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_cond_addsi3                                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_adddi3                                                  (rtx, rtx, rtx);
extern rtx        gen_adddisi3                                                (rtx, rtx, rtx);
extern rtx        gen_ssaddsi3                                                (rtx, rtx, rtx);
extern rtx        gen_subsi3_real_v4                                          (rtx, rtx, rtx);
extern rtx        gen_subsi3_nomemops_v4                                      (rtx, rtx, rtx);
extern rtx        gen_subqi3_real_v4                                          (rtx, rtx, rtx);
extern rtx        gen_subhi3_real_v4                                          (rtx, rtx, rtx);
extern rtx        gen_subsi3_real                                             (rtx, rtx, rtx);
extern rtx        gen_cond_subsi3                                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_subdi3                                                  (rtx, rtx, rtx);
extern rtx        gen_sssubsi3                                                (rtx, rtx, rtx);
extern rtx        gen_mulsi3_real_v4                                          (rtx, rtx, rtx);
extern rtx        gen_mulsi3_real                                             (rtx, rtx, rtx);
extern rtx        gen_muldi3                                                  (rtx, rtx, rtx);
extern rtx        gen_muldi3_helper_1                                         (rtx, rtx, rtx);
extern rtx        gen_muldi3_helper_2                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_uminsi3                                                 (rtx, rtx, rtx);
extern rtx        gen_umindi3                                                 (rtx, rtx, rtx);
extern rtx        gen_umaxsi3                                                 (rtx, rtx, rtx);
extern rtx        gen_umaxdi3                                                 (rtx, rtx, rtx);
extern rtx        gen_andbi3                                                  (rtx, rtx, rtx);
extern rtx        gen_andsi3_real_v4                                          (rtx, rtx, rtx);
extern rtx        gen_andsi3_nomemops_v4                                      (rtx, rtx, rtx);
extern rtx        gen_andqi3_real_v4                                          (rtx, rtx, rtx);
extern rtx        gen_andhi3_real_v4                                          (rtx, rtx, rtx);
extern rtx        gen_andsi3_real                                             (rtx, rtx, rtx);
extern rtx        gen_cond_andsi3                                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_anddi3                                                  (rtx, rtx, rtx);
extern rtx        gen_iorbi3                                                  (rtx, rtx, rtx);
extern rtx        gen_iorsi3_real_v4                                          (rtx, rtx, rtx);
extern rtx        gen_iorsi3_nomemops_v4                                      (rtx, rtx, rtx);
extern rtx        gen_iorqi3_real_v4                                          (rtx, rtx, rtx);
extern rtx        gen_iorhi3_real_v4                                          (rtx, rtx, rtx);
extern rtx        gen_iorsi3_real                                             (rtx, rtx, rtx);
extern rtx        gen_cond_iorsi3                                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_iordi3                                                  (rtx, rtx, rtx);
extern rtx        gen_xorbi3                                                  (rtx, rtx, rtx);
extern rtx        gen_xorsi3                                                  (rtx, rtx, rtx);
extern rtx        gen_cond_xorsi3                                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_xordi3                                                  (rtx, rtx, rtx);
extern rtx        gen_sminsi3                                                 (rtx, rtx, rtx);
extern rtx        gen_smindi3                                                 (rtx, rtx, rtx);
extern rtx        gen_smaxsi3                                                 (rtx, rtx, rtx);
extern rtx        gen_smaxdi3                                                 (rtx, rtx, rtx);
extern rtx        gen_mulhisi3                                                (rtx, rtx, rtx);
extern rtx        gen_mulsidi3                                                (rtx, rtx, rtx);
extern rtx        gen_umulhisi3                                               (rtx, rtx, rtx);
extern rtx        gen_umulsidi3                                               (rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart                                        (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart                                        (rtx, rtx, rtx);
extern rtx        gen_ashlsi3_real_v4                                         (rtx, rtx, rtx);
extern rtx        gen_ashlsi3_real                                            (rtx, rtx, rtx);
extern rtx        gen_ashldi3                                                 (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                                                 (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                                                 (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                                                 (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                                                 (rtx, rtx, rtx);
extern rtx        gen_negsi2                                                  (rtx, rtx);
extern rtx        gen_negdi2                                                  (rtx, rtx);
extern rtx        gen_abssi2                                                  (rtx, rtx);
extern rtx        gen_absdi2                                                  (rtx, rtx);
extern rtx        gen_clzsi2                                                  (rtx, rtx);
extern rtx        gen_ctzsi2                                                  (rtx, rtx);
extern rtx        gen_one_cmplbi2                                             (rtx, rtx);
extern rtx        gen_one_cmplsi2                                             (rtx, rtx);
extern rtx        gen_one_cmpldi2                                             (rtx, rtx);
extern rtx        gen_cmpsi_eq_v4                                             (rtx, rtx, rtx);
extern rtx        gen_cmpsi_gt_v4                                             (rtx, rtx, rtx);
extern rtx        gen_cmpsi_ge_v4                                             (rtx, rtx, rtx);
extern rtx        gen_cmpsi_gtu_v4                                            (rtx, rtx, rtx);
extern rtx        gen_cmpsi_geu_v4                                            (rtx, rtx, rtx);
extern rtx        gen_cmpsi_ne                                                (rtx, rtx, rtx);
extern rtx        gen_cmpsi_le                                                (rtx, rtx, rtx);
extern rtx        gen_cmpsi_lt_v4                                             (rtx, rtx, rtx);
extern rtx        gen_cmpsi_leu                                               (rtx, rtx, rtx);
extern rtx        gen_cmpsi_ltu_v4                                            (rtx, rtx, rtx);
extern rtx        gen_cmpsi_eq_imm                                            (rtx, rtx, rtx);
extern rtx        gen_cmpsi_gt_imm                                            (rtx, rtx, rtx);
extern rtx        gen_cmpsi_gtu_imm                                           (rtx, rtx, rtx);
extern rtx        gen_cmpsi_eq                                                (rtx, rtx, rtx);
extern rtx        gen_cmpsi_gt                                                (rtx, rtx, rtx);
extern rtx        gen_cmpsi_gtu                                               (rtx, rtx, rtx);
extern rtx        gen_cmpsi_ne_zero                                           (rtx, rtx);
extern rtx        gen_cmpdi_eq                                                (rtx, rtx, rtx);
extern rtx        gen_cmpdi_gt                                                (rtx, rtx, rtx);
extern rtx        gen_cmpdi_gtu                                               (rtx, rtx, rtx);
extern rtx        gen_extendqisi2                                             (rtx, rtx);
extern rtx        gen_extendqisi2_new_mem                                     (rtx, rtx);
extern rtx        gen_extendqidi2                                             (rtx, rtx);
extern rtx        gen_extendhisi2                                             (rtx, rtx);
extern rtx        gen_extendhisi2_new_mem                                     (rtx, rtx);
extern rtx        gen_extendhidi2                                             (rtx, rtx);
extern rtx        gen_extendsidi2                                             (rtx, rtx);
extern rtx        gen_zero_extendqisi2                                        (rtx, rtx);
extern rtx        gen_zero_extendqisi2_new_mem                                (rtx, rtx);
extern rtx        gen_zero_extendqidi2                                        (rtx, rtx);
extern rtx        gen_zero_extendhisi2                                        (rtx, rtx);
extern rtx        gen_zero_extendhisi2_new_mem                                (rtx, rtx);
extern rtx        gen_zero_extendhidi2                                        (rtx, rtx);
extern rtx        gen_zero_extendsidi2                                        (rtx, rtx);
extern rtx        gen_extzv                                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_insv                                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_muxtsi_v4                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_muxfsi_v4                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_muxtsi                                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_muxfsi                                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_gpr_cond_jump                                           (rtx, rtx, rtx);
extern rtx        gen_cond_jump                                               (rtx, rtx, rtx);
extern rtx        gen_cond_jump_v4                                            (rtx, rtx, rtx);
extern rtx        gen_new_value_jump_tstbit                                   (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_compare_and_jump_tstbit                                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_new_value_jump1                                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_compare_and_jump1                                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_new_value_jump2                                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_compare_and_jump2                                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_jump                                                    (rtx);
extern rtx        gen_long_call_pc_relative                                   (rtx, rtx);
extern rtx        gen_call_pc_relative                                        (rtx, rtx);
extern rtx        gen_call_register                                           (rtx, rtx);
extern rtx        gen_long_sibcall_real                                       (rtx, rtx);
extern rtx        gen_sibcall_real                                            (rtx, rtx);
extern rtx        gen_long_call_value_pc_relative                             (rtx, rtx, rtx);
extern rtx        gen_call_value_pc_relative                                  (rtx, rtx, rtx);
extern rtx        gen_call_value_pc_relative_tls                              (rtx, rtx, rtx);
extern rtx        gen_call_value_register                                     (rtx, rtx, rtx);
extern rtx        gen_long_sibcall_value_real                                 (rtx, rtx, rtx);
extern rtx        gen_sibcall_value_real                                      (rtx, rtx, rtx);
extern rtx        gen_cond_return                                             (rtx, rtx);
extern rtx        gen_cond_dealloc_return                                     (rtx, rtx);
extern rtx        gen_nop                                                     (void);
extern rtx        gen_hintjr                                                  (rtx);
extern rtx        gen_indirect_jump                                           (rtx);
extern rtx        gen_cond_jump_reg_indirect                                  (rtx, rtx, rtx);
extern rtx        gen_tablejump_real                                          (rtx, rtx);
extern rtx        gen_doloop_end_internal                                     (rtx, rtx, rtx);
extern rtx        gen_endloop0                                                (rtx);
extern rtx        gen_endloop1                                                (rtx);
extern rtx        gen_loop0_v4                                                (rtx, rtx, rtx);
extern rtx        gen_loop0                                                   (rtx, rtx, rtx);
extern rtx        gen_loop0_pic                                               (rtx, rtx, rtx);
extern rtx        gen_loop0_pic_v4                                            (rtx, rtx, rtx);
extern rtx        gen_loop1_v4                                                (rtx, rtx, rtx);
extern rtx        gen_loop1                                                   (rtx, rtx, rtx);
extern rtx        gen_loop1_pic                                               (rtx, rtx, rtx);
extern rtx        gen_loop1_pic_v4                                            (rtx, rtx, rtx);
extern rtx        gen_prefetch_real                                           (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_cmpeq                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_cmpgt                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_cmpgtu                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_cmpeqp                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_cmpgtp                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_cmpgtup                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_rcmpeqi                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_rcmpneqi                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_rcmpeq                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_rcmpneq                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_bitsset                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_bitsclr                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_nbitsset                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_nbitsclr                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_cmpeqi_v2                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_cmpeqi_v1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_cmpgti_v2                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_cmpgti_v1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_cmpgtui_v2                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_cmpgtui_v1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_cmpgei                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_cmpgeui                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_cmplt                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_cmpltu                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_bitsclri                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_nbitsclri                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_cmpneqi                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_cmpltei                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_cmplteui                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_cmpneq                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_cmplte                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_cmplteu                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_and_v2                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_and_v1                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_or_v2                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_or_v1                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_xor_v2                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_xor_v1                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_andn_v2                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_andn_v1                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_not_v2                        (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_not_v1                        (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_orn                           (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_and_and                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_and_or                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_or_and                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_or_or                         (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_and_andn                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_and_orn                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_or_andn                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_or_orn                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_pxfer_map                     (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_any8_v2                       (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_any8_v1                       (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_all8_v2                       (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_all8_v1                       (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_vitpack                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_mux                           (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_muxii                         (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_muxir                         (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_muxri                         (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_vmux                          (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_mask                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vcmpbeq                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vcmpbeqi                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vcmpbeq_any                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vcmpbgtu                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vcmpbgtui                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vcmpbgt                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vcmpbgti                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_cmpbeq                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_cmpbeqi                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_cmpbgtu                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_cmpbgtui                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_cmpbgt                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_cmpbgti                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vcmpheq                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vcmphgt                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vcmphgtu                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vcmpheqi                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vcmphgti                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vcmphgtui                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_cmpheq                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_cmphgt                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_cmphgtu                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_cmpheqi                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_cmphgti                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_cmphgtui                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vcmpweq                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vcmpwgt                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vcmpwgtu                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vcmpweqi                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vcmpwgti                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vcmpwgtui                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_boundscheck                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_tlbmatch                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_tfrpr                         (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C2_tfrrp                         (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_fastcorner9                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_C4_fastcorner9_not               (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_acc_hh_s0                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_acc_hh_s1                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_acc_hl_s0                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_acc_hl_s1                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_acc_lh_s0                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_acc_lh_s1                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_acc_ll_s0                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_acc_ll_s1                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_nac_hh_s0                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_nac_hh_s1                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_nac_hl_s0                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_nac_hl_s1                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_nac_lh_s0                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_nac_lh_s1                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_nac_ll_s0                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_nac_ll_s1                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_acc_sat_hh_s0             (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_acc_sat_hh_s1             (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_acc_sat_hl_s0             (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_acc_sat_hl_s1             (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_acc_sat_lh_s0             (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_acc_sat_lh_s1             (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_acc_sat_ll_s0             (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_acc_sat_ll_s1             (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_nac_sat_hh_s0             (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_nac_sat_hh_s1             (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_nac_sat_hl_s0             (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_nac_sat_hl_s1             (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_nac_sat_lh_s0             (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_nac_sat_lh_s1             (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_nac_sat_ll_s0             (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_nac_sat_ll_s1             (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_hh_s0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_hh_s1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_hl_s0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_hl_s1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_lh_s0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_lh_s1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_ll_s0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_ll_s1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_sat_hh_s0                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_sat_hh_s1                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_sat_hl_s0                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_sat_hl_s1                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_sat_lh_s0                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_sat_lh_s1                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_sat_ll_s0                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_sat_ll_s1                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_rnd_hh_s0                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_rnd_hh_s1                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_rnd_hl_s0                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_rnd_hl_s1                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_rnd_lh_s0                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_rnd_lh_s1                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_rnd_ll_s0                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_rnd_ll_s1                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_sat_rnd_hh_s0             (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_sat_rnd_hh_s1             (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_sat_rnd_hl_s0             (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_sat_rnd_hl_s1             (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_sat_rnd_lh_s0             (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_sat_rnd_lh_s1             (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_sat_rnd_ll_s0             (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_sat_rnd_ll_s1             (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_acc_hh_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_acc_hh_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_acc_hl_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_acc_hl_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_acc_lh_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_acc_lh_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_acc_ll_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_acc_ll_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_nac_hh_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_nac_hh_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_nac_hl_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_nac_hl_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_nac_lh_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_nac_lh_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_nac_ll_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_nac_ll_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_hh_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_hh_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_hl_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_hl_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_lh_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_lh_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_ll_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_ll_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_rnd_hh_s0                (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_rnd_hh_s1                (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_rnd_hl_s0                (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_rnd_hl_s1                (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_rnd_lh_s0                (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_rnd_lh_s1                (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_rnd_ll_s0                (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyd_rnd_ll_s1                (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_acc_hh_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_acc_hh_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_acc_hl_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_acc_hl_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_acc_lh_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_acc_lh_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_acc_ll_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_acc_ll_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_nac_hh_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_nac_hh_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_nac_hl_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_nac_hl_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_nac_lh_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_nac_lh_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_nac_ll_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_nac_ll_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_hh_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_hh_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_hl_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_hl_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_lh_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_lh_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_ll_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_ll_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_acc_hh_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_acc_hh_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_acc_hl_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_acc_hl_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_acc_lh_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_acc_lh_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_acc_ll_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_acc_ll_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_nac_hh_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_nac_hh_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_nac_hl_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_nac_hl_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_nac_lh_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_nac_lh_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_nac_ll_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_nac_ll_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_hh_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_hh_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_hl_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_hl_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_lh_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_lh_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_ll_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyud_ll_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpysmi                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_macsip                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_macsin                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_dpmpyss_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_dpmpyss_acc_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_dpmpyss_nac_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_dpmpyuu_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_dpmpyuu_acc_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_dpmpyuu_nac_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_up                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_up_s1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpy_up_s1_sat                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyu_up                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpysu_up                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_dpmpyss_rnd_s0                (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_mac_up_s1_sat                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_nac_up_s1_sat                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyi                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyui_v2                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mpyui_v1                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_maci                          (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_acci                          (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_accii                         (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_nacci                         (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_naccii                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_subacc                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_mpyrr_addr                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_mpyri_addr_u2                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_mpyri_addr                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_mpyri_addi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_mpyrr_addi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vmpy2s_s0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vmpy2s_s1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vmac2s_s0                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vmac2s_s1                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vmpy2su_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vmpy2su_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vmac2su_s0                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vmac2su_s1                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vmpy2s_s0pack                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vmpy2s_s1pack                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vmac2                         (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vmpy2es_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vmpy2es_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vmac2es_s0                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vmac2es_s1                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vmac2es                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vrmac_s0                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vrmpy_s0                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vdmpyrs_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vdmpyrs_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M5_vrmpybuu                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M5_vrmacbuu                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M5_vrmpybsu                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M5_vrmacbsu                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M5_vmpybuu                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M5_vmpybsu                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M5_vmacbuu                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M5_vmacbsu                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M5_vdmpybsu                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M5_vdmacbsu                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vdmacs_s0                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vdmacs_s1                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vdmpys_s0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vdmpys_s1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cmpyrs_s0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cmpyrs_s1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cmpyrsc_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cmpyrsc_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cmacs_s0                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cmacs_s1                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cmacsc_s0                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cmacsc_s1                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cmpys_s0                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cmpys_s1                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cmpysc_s0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cmpysc_s1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cnacs_s0                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cnacs_s1                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cnacsc_s0                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cnacsc_s1                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vrcmpys_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vrcmpys_acc_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vrcmpys_s1rp                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmacls_s0                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmacls_s1                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmachs_s0                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmachs_s1                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmpyl_s0                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmpyl_s1                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmpyh_s0                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmpyh_s1                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmacls_rs0                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmacls_rs1                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmachs_rs0                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmachs_rs1                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmpyl_rs0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmpyl_rs1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmpyh_rs0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmpyh_rs1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_vrmpyeh_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_vrmpyeh_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_vrmpyeh_acc_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_vrmpyeh_acc_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_vrmpyoh_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_vrmpyoh_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_vrmpyoh_acc_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_vrmpyoh_acc_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_hmmpyl_rs1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_hmmpyh_rs1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_hmmpyl_s1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_hmmpyh_s1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmaculs_s0                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmaculs_s1                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmacuhs_s0                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmacuhs_s1                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmpyul_s0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmpyul_s1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmpyuh_s0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmpyuh_s1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmaculs_rs0                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmaculs_rs1                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmacuhs_rs0                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmacuhs_rs1                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmpyul_rs0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmpyul_rs1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmpyuh_rs0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_mmpyuh_rs1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vrcmaci_s0                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vrcmacr_s0                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vrcmaci_s0c                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vrcmacr_s0c                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cmaci_s0                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cmacr_s0                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vrcmpyi_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vrcmpyr_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vrcmpyi_s0c                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vrcmpyr_s0c                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cmpyi_s0                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_cmpyr_s0                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_cmpyi_wh                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_cmpyr_wh                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_cmpyi_whc                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_cmpyr_whc                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vcmpy_s0_sat_i                (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vcmpy_s0_sat_r                (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vcmpy_s1_sat_i                (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vcmpy_s1_sat_r                (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vcmac_s0_sat_i                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vcmac_s0_sat_r                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vcrotate                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_vrcrotate_acc                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_vrcrotate                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vcnegh                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vrcnegh                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_pmpyw                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_vpmpyh                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_pmpyw_acc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_vpmpyh_acc                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_add                           (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_sub                           (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addsat_v4                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addsat_v1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_subsat_v4                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_subsat_v1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addi                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addh_l16_ll                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addh_l16_hl                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addh_l16_sat_ll               (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addh_l16_sat_hl               (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_subh_l16_ll                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_subh_l16_hl                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_subh_l16_sat_ll               (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_subh_l16_sat_hl               (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addh_h16_ll                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addh_h16_lh                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addh_h16_hl                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addh_h16_hh                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addh_h16_sat_ll               (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addh_h16_sat_lh               (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addh_h16_sat_hl               (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addh_h16_sat_hh               (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_subh_h16_ll                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_subh_h16_lh                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_subh_h16_hl                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_subh_h16_hh                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_subh_h16_sat_ll               (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_subh_h16_sat_lh               (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_subh_h16_sat_hl               (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_subh_h16_sat_hh               (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_aslh                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_asrh                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addp                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addpsat                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_addsp                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_subp                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_neg                           (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_negsat                        (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_abs                           (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_abssat                        (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vconj                         (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_negp                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_absp                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_max                           (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_maxu                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_min                           (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_minu                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_maxp                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_maxup                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_minp                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_minup                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_tfr                           (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_tfrsi                         (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_tfrp_v2                       (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_tfrp_v1                       (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_tfrpi                         (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_zxtb                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_sxtb                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_zxth                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_sxth                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_combinew                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_combineri                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_combineir                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_combineii                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_combine_hh                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_combine_hl                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_combine_lh                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_combine_ll                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_tfril                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_tfrih                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_and_v2                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_and_v1                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_or_v2                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_or_v1                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_xor_v2                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_xor_v1                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_not_v2                        (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_not_v1                        (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_xor_xacc                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_xor_xacc                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_andn                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_orn                           (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_andnp                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_ornp                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_addaddi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_subaddi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_and_and                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_and_andn                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_and_or                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_and_xor                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_or_and                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_or_andn                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_or_or                         (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_or_xor                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_or_andix                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_or_andi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_or_ori                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_xor_and                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_xor_or                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M4_xor_andn                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_subri                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_andir                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_orir                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_andp                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_orp                           (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_xorp                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_notp                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_sxtw                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_sat                           (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_roundsat                      (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_sath                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_satuh                         (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_satub                         (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_satb                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vaddub                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vaddb_map                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vaddubs                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vaddh                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vaddhs                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vadduhs                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A5_vaddhubs                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vaddw                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vaddws                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_vxaddsubw                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_vxsubaddw                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_vxaddsubh                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_vxsubaddh                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_vxaddsubhr                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_vxsubaddhr                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_svavgh                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_svavghs                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_svnavgh                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_svaddh_v2                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_svaddh_v1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_svaddhs_v2                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_svaddhs_v1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_svadduhs_v2                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_svadduhs_v1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_svsubh_v2                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_svsubh_v1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_svsubhs_v2                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_svsubhs_v1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_svsubuhs_v2                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_svsubuhs_v1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vraddub                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vraddub_acc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vraddh                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vradduh                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vsubub                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vsubb_map                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vsububs                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vsubh                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vsubhs                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vsubuhs                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vsubw                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vsubws                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vabsh                         (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vabshsat                      (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vabsw                         (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vabswsat                      (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vabsdiffw                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_M2_vabsdiffh                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vrsadub                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vrsadub_acc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vavgub                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vavguh                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vavgh                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vnavgh                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vavgw                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vnavgw                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vavgwr                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vnavgwr                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vavgwcr                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vnavgwcr                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vavghcr                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vnavghcr                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vavguw                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vavguwr                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vavgubr                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vavguhr                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vavghr                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vnavghr                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_round_ri                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_round_rr                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_round_ri_sat                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_round_rr_sat                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_cround_ri                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_cround_rr                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vrminh                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vrmaxh                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vrminuh                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vrmaxuh                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vrminw                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vrmaxw                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vrminuw                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_vrmaxuw                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vminb                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vmaxb                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vminub                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vmaxub                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vminh                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vmaxh                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vminuh                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vmaxuh                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vminw                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vmaxw                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vminuw                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_vmaxuw                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_modwrapu                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sfadd                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sfsub                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sfmpy                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sffma                         (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sffma_sc                      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sffms                         (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sffma_lib                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sffms_lib                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sfcmpeq                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sfcmpgt                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sfcmpge                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sfcmpuo                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sfmax                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sfmin                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sfclass                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sfimm_p                       (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sfimm_n                       (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sffixupn                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sffixupd                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_sffixupr                      (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_dfcmpeq                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_dfcmpgt                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_dfcmpge                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_dfcmpuo                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_dfclass                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_dfimm_p                       (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_dfimm_n                       (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_sf2df                    (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_df2sf                    (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_uw2sf                    (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_uw2df                    (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_w2sf                     (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_w2df                     (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_ud2sf                    (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_ud2df                    (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_d2sf                     (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_d2df                     (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_sf2uw                    (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_sf2w                     (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_sf2ud                    (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_sf2d                     (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_df2uw                    (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_df2w                     (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_df2ud                    (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_df2d                     (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_sf2uw_chop               (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_sf2w_chop                (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_sf2ud_chop               (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_sf2d_chop                (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_df2uw_chop               (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_df2w_chop                (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_df2ud_chop               (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_F2_conv_df2d_chop                (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_r_r                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_r_r                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_r_r                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsl_r_r                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_r_p                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_r_p                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_r_p                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsl_r_p                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_r_r_acc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_r_r_acc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_r_r_acc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsl_r_r_acc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_r_p_acc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_r_p_acc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_r_p_acc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsl_r_p_acc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_r_r_nac                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_r_r_nac                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_r_r_nac                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsl_r_r_nac                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_r_p_nac                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_r_p_nac                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_r_p_nac                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsl_r_p_nac                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_r_r_and                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_r_r_and                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_r_r_and                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsl_r_r_and                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_r_r_or                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_r_r_or                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_r_r_or                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsl_r_r_or                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_r_p_and                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_r_p_and                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_r_p_and                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsl_r_p_and                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_r_p_or                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_r_p_or                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_r_p_or                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsl_r_p_or                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_r_p_xor                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_r_p_xor                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_r_p_xor                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsl_r_p_xor                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_r_r_sat                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_r_r_sat                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_i_r                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_i_r                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_i_r                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_i_p                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_i_p                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_i_p                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_i_r_acc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_i_r_acc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_i_r_acc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_i_p_acc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_i_p_acc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_i_p_acc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_i_r_nac                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_i_r_nac                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_i_r_nac                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_i_p_nac                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_i_p_nac                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_i_p_nac                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_i_r_xacc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_i_r_xacc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_i_p_xacc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_i_p_xacc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_i_r_and                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_i_r_and                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_i_r_and                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_i_r_or                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_i_r_or                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_i_r_or                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_i_p_and                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_i_p_and                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_i_p_and                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_i_p_or                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_i_p_or                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_i_p_or                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_i_r_sat                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_i_r_rnd                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_i_r_rnd_goodsyntax        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_i_p_rnd                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_i_p_rnd_goodsyntax        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_lsli                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_addasl_rrri                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_andi_asl_ri                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_ori_asl_ri                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_addi_asl_ri                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_subi_asl_ri                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_andi_lsr_ri                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_ori_lsr_ri                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_addi_lsr_ri                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_subi_lsr_ri                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_valignib                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_valignrb                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vspliceib                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vsplicerb                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vsplatrh                      (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vsplatrb                      (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_insert                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_tableidxb_goodsyntax          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_tableidxh_goodsyntax          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_tableidxw_goodsyntax          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_tableidxd_goodsyntax          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_bitspliti                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A4_bitsplit                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_extract                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_extractu                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_insertp                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_extractp                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_extractup                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_insert_rp                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_extract_rp                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_extractu_rp                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_insertp_rp                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_extractp_rp                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_extractup_rp                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_tstbit_i                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_ntstbit_i                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_setbit_i                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_togglebit_i                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_clrbit_i                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_tstbit_r                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_ntstbit_r                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_setbit_r                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_togglebit_r                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_clrbit_r                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_i_vh                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_i_vh                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_i_vh                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_r_vh                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S5_asrhub_rnd_sat_goodsyntax     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S5_asrhub_sat                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S5_vasrhrnd_goodsyntax           (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_r_vh                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_r_vh                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsl_r_vh                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_i_vw                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_i_svw_trun                (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_r_svw_trun                (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_i_vw                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_i_vw                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asr_r_vw                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_asl_r_vw                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsr_r_vw                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lsl_r_vw                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vrndpackwh                    (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vrndpackwhs                   (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vsxtbh                        (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vzxtbh                        (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vsathub                       (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_svsathub                      (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_svsathb                       (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vsathb                        (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vtrunohb                      (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vtrunewh                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vtrunowh                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vtrunehb                      (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vsxthw                        (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vzxthw                        (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vsatwh                        (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vsatwuh                       (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_packhl_v4                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_packhl_v1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_A2_swiz                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vsathub_nopack                (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vsathb_nopack                 (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vsatwh_nopack                 (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_vsatwuh_nopack                (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_shuffob                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_shuffeb                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_shuffoh                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_shuffeh                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S5_popcountp                     (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_parity                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_parityp                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_lfsp                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_clbnorm                       (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_clbaddi                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_clbpnorm                      (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S4_clbpaddi                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_clb                           (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_cl0                           (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_cl1                           (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_clbp                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_cl0p                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_cl1p                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_brev                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_brevp                         (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_ct0                           (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_ct1                           (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_ct0p                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_ct1p                          (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_interleave                    (rtx, rtx);
extern rtx        gen_hexagon_unspec_HEXAGON_S2_deinterleave                  (rtx, rtx);
extern rtx        gen_hexagon_unspec_SI_to_SXTHI_asrh                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_val_for_valignb                         (rtx, rtx);
extern rtx        gen_hexagon_unspec_circ_ldd                                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_circ_ldw                                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_circ_ldh                                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_circ_lduh                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_circ_ldb                                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_circ_ldub                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_circ_std                                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_circ_stw                                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_circ_sth                                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_circ_sthhi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_circ_stb                                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_brev_ldd                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_brev_ldw                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_brev_ldh                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_brev_lduh                                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_brev_ldb                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_brev_ldub                                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_brev_std                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_brev_stw                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_brev_sth                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_brev_sthhi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_unspec_brev_stb                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_andttbisi3                                              (rtx, rtx, rtx);
extern rtx        gen_iorttbisi3                                              (rtx, rtx, rtx);
extern rtx        gen_xorttbisi3                                              (rtx, rtx, rtx);
extern rtx        gen_andftbisi3                                              (rtx, rtx, rtx);
extern rtx        gen_iorftbisi3                                              (rtx, rtx, rtx);
extern rtx        gen_xorftbisi3                                              (rtx, rtx, rtx);
extern rtx        gen_andtfbisi3                                              (rtx, rtx, rtx);
extern rtx        gen_iortfbisi3                                              (rtx, rtx, rtx);
extern rtx        gen_xortfbisi3                                              (rtx, rtx, rtx);
extern rtx        gen_andffbisi3                                              (rtx, rtx, rtx);
extern rtx        gen_iorffbisi3                                              (rtx, rtx, rtx);
extern rtx        gen_xorffbisi3                                              (rtx, rtx, rtx);
extern rtx        gen_addhi3_ll                                               (rtx, rtx, rtx);
extern rtx        gen_addhi3_lh                                               (rtx, rtx, rtx);
extern rtx        gen_subhi3_ll                                               (rtx, rtx, rtx);
extern rtx        gen_subhi3_lh                                               (rtx, rtx, rtx);
extern rtx        gen_ssaddhi3_ll                                             (rtx, rtx, rtx);
extern rtx        gen_ssaddhi3_lh                                             (rtx, rtx, rtx);
extern rtx        gen_sssubhi3_ll                                             (rtx, rtx, rtx);
extern rtx        gen_sssubhi3_lh                                             (rtx, rtx, rtx);
extern rtx        gen_andnotsi3                                               (rtx, rtx, rtx);
extern rtx        gen_ornotsi3                                                (rtx, rtx, rtx);
extern rtx        gen_andnotdi3                                               (rtx, rtx, rtx);
extern rtx        gen_ornotdi3                                                (rtx, rtx, rtx);
extern rtx        gen_andandbi3                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_andandnotbi3                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_andorbi3                                                (rtx, rtx, rtx, rtx);
extern rtx        gen_andornotbi3                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_andandsi3                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_andandnotsi3                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_andorsi3                                                (rtx, rtx, rtx, rtx);
extern rtx        gen_andxorsi3                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_orandbi3                                                (rtx, rtx, rtx, rtx);
extern rtx        gen_orandnotbi3                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_ororbi3                                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_orornotbi3                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_orandsi3                                                (rtx, rtx, rtx, rtx);
extern rtx        gen_ororsi3                                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_orxorsi3                                                (rtx, rtx, rtx, rtx);
extern rtx        gen_xorandsi3                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_xororsi3                                                (rtx, rtx, rtx, rtx);
extern rtx        gen_xorxorsi3                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_addaccsi3_v4                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_addaccsi3                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_subacc1si3_v4                                           (rtx, rtx, rtx, rtx);
extern rtx        gen_subacc1si3                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_subacc2si3                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_subnaccsi3                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_addnacc1si3_v4                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_addnacc1si3                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_addnacc2si3_v4                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_addnacc2si3                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_addaslmsi4                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_addaslsi4                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mulhisi3_hh                                             (rtx, rtx, rtx);
extern rtx        gen_mulhisi3_hl                                             (rtx, rtx, rtx);
extern rtx        gen_mulhisi3_lh                                             (rtx, rtx, rtx);
extern rtx        gen_mulhisi3_hh_s1                                          (rtx, rtx, rtx);
extern rtx        gen_mulhisi3_hl_s1                                          (rtx, rtx, rtx);
extern rtx        gen_mulhisi3_lh_s1                                          (rtx, rtx, rtx);
extern rtx        gen_mulhisi3_ll_s1                                          (rtx, rtx, rtx);
extern rtx        gen_ssmulhisi3_hh                                           (rtx, rtx, rtx);
extern rtx        gen_ssmulhisi3_hl                                           (rtx, rtx, rtx);
extern rtx        gen_ssmulhisi3_lh                                           (rtx, rtx, rtx);
extern rtx        gen_ssmulhisi3_ll                                           (rtx, rtx, rtx);
extern rtx        gen_ssmulhisi3_hh_s1                                        (rtx, rtx, rtx);
extern rtx        gen_ssmulhisi3_hl_s1                                        (rtx, rtx, rtx);
extern rtx        gen_ssmulhisi3_lh_s1                                        (rtx, rtx, rtx);
extern rtx        gen_ssmulhisi3_ll_s1                                        (rtx, rtx, rtx);
extern rtx        gen_macsi4                                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_macsi3                                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_macsidi3                                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mnacsidi3                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_macn1sidi3                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_macn2sidi3                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_umacsidi3                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_umnacsidi3                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_umacn1sidi3                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_umacn2sidi3                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_machisi3_hh                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_machisi3_hl                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_machisi3_lh                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_machisi3_ll                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_machisi3_hh_s1                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_machisi3_hl_s1                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_machisi3_lh_s1                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_machisi3_ll_s1                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_mnachisi3_hh                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mnachisi3_hl                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mnachisi3_lh                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mnachisi3_ll                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mnachisi3_hh_s1                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mnachisi3_hl_s1                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mnachisi3_lh_s1                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mnachisi3_ll_s1                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmachisi3_hh                                           (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmachisi3_hl                                           (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmachisi3_lh                                           (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmachisi3_ll                                           (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmachisi3_hh_s1                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmachisi3_hl_s1                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmachisi3_lh_s1                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmachisi3_ll_s1                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmnachisi3_hh                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmnachisi3_hl                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmnachisi3_lh                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmnachisi3_ll                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmnachisi3_hh_s1                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmnachisi3_hl_s1                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmnachisi3_lh_s1                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_ssmnachisi3_ll_s1                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_addashlsi3                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_ashlsi3_acc                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_subashlsi3                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_submulsi3                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_ashlsi3_nacc                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_andashlsi3                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_andmulsi3                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_ashlsi3_and                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_orashlsi3                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_ormulsi3                                                (rtx, rtx, rtx, rtx);
extern rtx        gen_ashlsi3_or                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_ashlsi3_xor                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_ashrsi3_acc                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_ashrsi3_nacc                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_ashrsi3_and                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_ashrsi3_or                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_addlshrsi3                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_lshrsi3_acc                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_sublshrsi3                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_lshrsi3_nacc                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_andlshrsi3                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_lshrsi3_and                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_orlshrsi3                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_lshrsi3_or                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_lshrsi3_xor                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_ashldi3_acc                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_ashldi3_nacc                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_ashldi3_and                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_ashldi3_or                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_ashldi3_xor                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_ashrdi3_acc                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_ashrdi3_nacc                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_ashrdi3_and                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_ashrdi3_or                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_lshrdi3_acc                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_lshrdi3_nacc                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_lshrdi3_and                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_lshrdi3_or                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_lshrdi3_xor                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_setbitsi                                                (rtx, rtx, rtx);
extern rtx        gen_clrbitsi                                                (rtx, rtx, rtx);
extern rtx        gen_togglebitsi                                             (rtx, rtx, rtx);
extern rtx        gen_tstbitsi                                                (rtx, rtx, rtx);
extern rtx        gen_not_tstbitsi_v4                                         (rtx, rtx, rtx);
extern rtx        gen_not_tstbitsi                                            (rtx, rtx, rtx);
extern rtx        gen_bitsclrsi                                               (rtx, rtx, rtx);
extern rtx        gen_bitsclrsi_2                                             (rtx, rtx, rtx);
extern rtx        gen_not_bitsclrsi_v4                                        (rtx, rtx, rtx);
extern rtx        gen_not_bitsclrsi_2_v4                                      (rtx, rtx, rtx);
extern rtx        gen_not_bitsclrsi                                           (rtx, rtx, rtx);
extern rtx        gen_not_bitsclrsi_2                                         (rtx, rtx, rtx);
extern rtx        gen_bitssetsi                                               (rtx, rtx, rtx);
extern rtx        gen_not_bitssetsi_v4                                        (rtx, rtx, rtx);
extern rtx        gen_not_bitssetsi                                           (rtx, rtx, rtx);
extern rtx        gen_r_cmpsi_eq                                              (rtx, rtx, rtx);
extern rtx        gen_r_cmpsi_ne                                              (rtx, rtx, rtx);
extern rtx        gen_cmpqi_eq                                                (rtx, rtx, rtx);
extern rtx        gen_cmpqi_gt                                                (rtx, rtx, rtx);
extern rtx        gen_cmpqi_ge                                                (rtx, rtx, rtx);
extern rtx        gen_cmpqi_gtu                                               (rtx, rtx, rtx);
extern rtx        gen_cmpqi_geu                                               (rtx, rtx, rtx);
extern rtx        gen_cmphi_eq                                                (rtx, rtx, rtx);
extern rtx        gen_cmphi_gt                                                (rtx, rtx, rtx);
extern rtx        gen_cmphi_ge                                                (rtx, rtx, rtx);
extern rtx        gen_cmphi_gtu                                               (rtx, rtx, rtx);
extern rtx        gen_cmphi_geu                                               (rtx, rtx, rtx);
extern rtx        gen_andnotbi3                                               (rtx, rtx, rtx);
extern rtx        gen_ornotbi3                                                (rtx, rtx, rtx);
extern rtx        gen_storehhi                                                (rtx, rtx);
extern rtx        gen_absloadsetbi                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadsetbi_new_mem                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadsxtsetbi                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadsxtsetbi_new_mem                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadzxtsetbi                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadzxtsetbi_new_mem                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadsetqi                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadsetqi_new_mem                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadsxtsetqi                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadsxtsetqi_new_mem                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadzxtsetqi                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadzxtsetqi_new_mem                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadsethi                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadsethi_new_mem                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadsxtsethi                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadsxtsethi_new_mem                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadzxtsethi                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadzxtsethi_new_mem                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadsetsi                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadsetsi_new_mem                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadsetdi                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_absloadsetdi_new_mem                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_absstoresetbi                                           (rtx, rtx, rtx, rtx);
extern rtx        gen_absstoresetbi_new_value                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_absstoresetqi                                           (rtx, rtx, rtx, rtx);
extern rtx        gen_absstoresetqi_new_value                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_absstoresethi                                           (rtx, rtx, rtx, rtx);
extern rtx        gen_absstoresethi_new_value                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_absstorehsethi                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_absstoresetsi                                           (rtx, rtx, rtx, rtx);
extern rtx        gen_absstoresetsi_new_value                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_absstoresetdi                                           (rtx, rtx, rtx, rtx);
extern rtx        gen_absstoresetsf                                           (rtx, rtx, rtx, rtx);
extern rtx        gen_absstoresetsf_new_value                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_absstoresetdf                                           (rtx, rtx, rtx, rtx);
extern rtx        gen_return_jump                                             (void);
extern rtx        gen_allocframe_real                                         (rtx);
extern rtx        gen_allocframe_and_save_r16_real                            (rtx);
extern rtx        gen_allocframe_and_save_r16_and_r17_real                    (rtx);
extern rtx        gen_allocate_stack_and_save_r16                             (rtx);
extern rtx        gen_allocate_stack_and_save_r16_and_r17                     (rtx);
extern rtx        gen_allocate_stack_and_save_r16_through_r18                 (rtx);
extern rtx        gen_allocate_stack_and_save_r16_through_r19                 (rtx);
extern rtx        gen_deallocframe                                            (void);
extern rtx        gen_save_r24_through_r27                                    (void);
extern rtx        gen_restore_r24_through_r27_and_deallocframe_before_sibcall (void);
extern rtx        gen_restore_r24_through_r25_and_deallocframe_before_sibcall (void);
extern rtx        gen_restore_r24_through_r27_and_deallocframe                (void);
extern rtx        gen_restore_r24_through_r25_and_deallocframe                (void);
extern rtx        gen_save_r16_through_r19                                    (void);
extern rtx        gen_save_r16_through_r21                                    (void);
extern rtx        gen_save_r16_through_r23                                    (void);
extern rtx        gen_save_r16_through_r25                                    (void);
extern rtx        gen_save_r16_through_r27                                    (void);
extern rtx        gen_restore_r16_through_r27_and_deallocframe_before_sibcall (void);
extern rtx        gen_restore_r16_through_r25_and_deallocframe_before_sibcall (void);
extern rtx        gen_restore_r16_through_r23_and_deallocframe_before_sibcall (void);
extern rtx        gen_restore_r16_through_r21_and_deallocframe_before_sibcall (void);
extern rtx        gen_restore_r16_through_r19_and_deallocframe_before_sibcall (void);
extern rtx        gen_restore_r16_through_r17_and_deallocframe_before_sibcall (void);
extern rtx        gen_restore_r16_through_r27_and_deallocframe                (void);
extern rtx        gen_restore_r16_through_r25_and_deallocframe                (void);
extern rtx        gen_restore_r16_through_r23_and_deallocframe                (void);
extern rtx        gen_restore_r16_through_r21_and_deallocframe                (void);
extern rtx        gen_restore_r16_through_r19_and_deallocframe                (void);
extern rtx        gen_restore_r16_through_r17_and_deallocframe                (void);
extern rtx        gen_deallocframe_return                                     (void);
extern rtx        gen_deallocframe_function                                   (void);
extern rtx        gen_falign                                                  (void);
extern rtx        gen_memcpy_kernelqi                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_memcpy_kernelhi                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_memcpy_kernelsi                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_memcpy_kerneldi                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_vcmpb_eq                                                (rtx, rtx, rtx);
extern rtx        gen_vcmpb_gtu                                               (rtx, rtx, rtx);
extern rtx        gen_any8                                                    (rtx, rtx);
extern rtx        gen_all8                                                    (rtx, rtx);
extern rtx        gen_combinesi_v4                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_combinesi                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_abssf2                                                  (rtx, rtx);
extern rtx        gen_negsf2                                                  (rtx, rtx);
extern rtx        gen_smaxsf3                                                 (rtx, rtx, rtx);
extern rtx        gen_sminsf3                                                 (rtx, rtx, rtx);
extern rtx        gen_addsf3                                                  (rtx, rtx, rtx);
extern rtx        gen_subsf3                                                  (rtx, rtx, rtx);
extern rtx        gen_mulsf3                                                  (rtx, rtx, rtx);
extern rtx        gen_cmpsf_gt                                                (rtx, rtx, rtx);
extern rtx        gen_cmpdf_gt                                                (rtx, rtx, rtx);
extern rtx        gen_cmpsf_ge                                                (rtx, rtx, rtx);
extern rtx        gen_cmpdf_ge                                                (rtx, rtx, rtx);
extern rtx        gen_cmpsf_le                                                (rtx, rtx, rtx);
extern rtx        gen_cmpdf_le                                                (rtx, rtx, rtx);
extern rtx        gen_cmpsf_lt                                                (rtx, rtx, rtx);
extern rtx        gen_cmpdf_lt                                                (rtx, rtx, rtx);
extern rtx        gen_cmpsf_eq                                                (rtx, rtx, rtx);
extern rtx        gen_cmpdf_eq                                                (rtx, rtx, rtx);
extern rtx        gen_cmpsf_uo                                                (rtx, rtx, rtx);
extern rtx        gen_cmpdf_uo                                                (rtx, rtx, rtx);
extern rtx        gen_fixuns_truncsfsi2                                       (rtx, rtx);
extern rtx        gen_fixuns_truncsfdi2                                       (rtx, rtx);
extern rtx        gen_fixuns_truncdfsi2                                       (rtx, rtx);
extern rtx        gen_fixuns_truncdfdi2                                       (rtx, rtx);
extern rtx        gen_fix_truncsfsi2                                          (rtx, rtx);
extern rtx        gen_fix_truncsfdi2                                          (rtx, rtx);
extern rtx        gen_fix_truncdfsi2                                          (rtx, rtx);
extern rtx        gen_fix_truncdfdi2                                          (rtx, rtx);
extern rtx        gen_floatunssisf2                                           (rtx, rtx);
extern rtx        gen_floatunssidf2                                           (rtx, rtx);
extern rtx        gen_floatunsdisf2                                           (rtx, rtx);
extern rtx        gen_floatunsdidf2                                           (rtx, rtx);
extern rtx        gen_floatsisf2                                              (rtx, rtx);
extern rtx        gen_floatsidf2                                              (rtx, rtx);
extern rtx        gen_floatdisf2                                              (rtx, rtx);
extern rtx        gen_floatdidf2                                              (rtx, rtx);
extern rtx        gen_extendsfdf2                                             (rtx, rtx);
extern rtx        gen_truncdfsf2                                              (rtx, rtx);
extern rtx        gen_cond_combinesi                                          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_compute_got_base                                        (rtx, rtx);
extern rtx        gen_compute_got_base_v4                                     (rtx);
extern rtx        gen_compute_tls_base                                        (rtx);
extern rtx        gen_clean_cache                                             (rtx);
extern rtx        gen_movbi                                                   (rtx, rtx);
extern rtx        gen_movqi                                                   (rtx, rtx);
extern rtx        gen_movhi                                                   (rtx, rtx);
extern rtx        gen_movsi                                                   (rtx, rtx);
extern rtx        gen_movdi                                                   (rtx, rtx);
extern rtx        gen_movsf                                                   (rtx, rtx);
extern rtx        gen_movdf                                                   (rtx, rtx);
extern rtx        gen_addqi3                                                  (rtx, rtx, rtx);
extern rtx        gen_addhi3                                                  (rtx, rtx, rtx);
extern rtx        gen_addsi3                                                  (rtx, rtx, rtx);
extern rtx        gen_subqi3                                                  (rtx, rtx, rtx);
extern rtx        gen_subhi3                                                  (rtx, rtx, rtx);
extern rtx        gen_subsi3                                                  (rtx, rtx, rtx);
extern rtx        gen_mulsi3                                                  (rtx, rtx, rtx);
extern rtx        gen_andqi3                                                  (rtx, rtx, rtx);
extern rtx        gen_andhi3                                                  (rtx, rtx, rtx);
extern rtx        gen_andsi3                                                  (rtx, rtx, rtx);
extern rtx        gen_iorqi3                                                  (rtx, rtx, rtx);
extern rtx        gen_iorhi3                                                  (rtx, rtx, rtx);
extern rtx        gen_iorsi3                                                  (rtx, rtx, rtx);
extern rtx        gen_umuldi3_highpart                                        (rtx, rtx, rtx);
extern rtx        gen_ashlsi3                                                 (rtx, rtx, rtx);
extern rtx        gen_movmemsi                                                (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_setmemsi                                                (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresi4                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoreqi4                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_cstorehi4                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredi4                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresf4                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredf4                                               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_cstoresi                                        (rtx, rtx);
extern rtx        gen_cbranchbi4                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchqi4                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchhi4                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdi4                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsf4                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdf4                                              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_cbranchbi                                       (rtx, rtx);
#define GEN_CALL(A, B, C, D) gen_call ((A), (B))
extern rtx        gen_call                                                    (rtx, rtx);
extern rtx        gen_call_register_expand                                    (rtx, rtx);
#define GEN_SIBCALL(A, B, C, D) gen_sibcall ((A), (B))
extern rtx        gen_sibcall                                                 (rtx, rtx);
#define GEN_CALL_VALUE(A, B, C, D, E) gen_call_value ((A), (B), (C))
extern rtx        gen_call_value                                              (rtx, rtx, rtx);
#define GEN_SIBCALL_VALUE(A, B, C, D, E) gen_sibcall_value ((A), (B), (C))
extern rtx        gen_sibcall_value                                           (rtx, rtx, rtx);
extern rtx        gen_return                                                  (void);
extern rtx        gen_tablejump                                               (rtx, rtx);
extern rtx        gen_doloop_end                                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_prologue                                                (void);
extern rtx        gen_epilogue                                                (void);
extern rtx        gen_sibcall_epilogue                                        (void);
extern rtx        gen_prefetch                                                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_cmpeq                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_cmpgt                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_cmpgtu                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_cmpeqp                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_cmpgtp                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_cmpgtup                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_rcmpeqi                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_rcmpneqi                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_rcmpeq                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_rcmpneq                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_bitsset                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_bitsclr                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_nbitsset                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_nbitsclr                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_cmpeqi                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_cmpgti                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_cmpgtui                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_cmpgei                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_cmpgeui                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_cmplt                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_cmpltu                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_bitsclri                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_nbitsclri                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_cmpneqi                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_cmpltei                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_cmplteui                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_cmpneq                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_cmplte                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_cmplteu                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_and                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_or                           (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_xor                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_andn                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_not                          (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_orn                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_and_and                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_and_or                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_or_and                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_or_or                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_and_andn                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_and_orn                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_or_andn                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_or_orn                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_pxfer_map                    (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_any8                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_all8                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_vitpack                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_mux                          (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_muxii                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_muxir                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_muxri                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_vmux                         (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_mask                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vcmpbeq                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vcmpbeqi                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vcmpbeq_any                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vcmpbgtu                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vcmpbgtui                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vcmpbgt                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vcmpbgti                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_cmpbeq                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_cmpbeqi                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_cmpbgtu                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_cmpbgtui                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_cmpbgt                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_cmpbgti                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vcmpheq                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vcmphgt                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vcmphgtu                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vcmpheqi                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vcmphgti                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vcmphgtui                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_cmpheq                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_cmphgt                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_cmphgtu                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_cmpheqi                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_cmphgti                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_cmphgtui                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vcmpweq                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vcmpwgt                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vcmpwgtu                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vcmpweqi                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vcmpwgti                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vcmpwgtui                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_boundscheck                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_tlbmatch                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_tfrpr                        (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C2_tfrrp                        (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_fastcorner9                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_C4_fastcorner9_not              (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_acc_hh_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_acc_hh_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_acc_hl_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_acc_hl_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_acc_lh_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_acc_lh_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_acc_ll_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_acc_ll_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_nac_hh_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_nac_hh_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_nac_hl_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_nac_hl_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_nac_lh_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_nac_lh_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_nac_ll_s0                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_nac_ll_s1                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_acc_sat_hh_s0            (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_acc_sat_hh_s1            (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_acc_sat_hl_s0            (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_acc_sat_hl_s1            (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_acc_sat_lh_s0            (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_acc_sat_lh_s1            (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_acc_sat_ll_s0            (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_acc_sat_ll_s1            (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_nac_sat_hh_s0            (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_nac_sat_hh_s1            (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_nac_sat_hl_s0            (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_nac_sat_hl_s1            (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_nac_sat_lh_s0            (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_nac_sat_lh_s1            (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_nac_sat_ll_s0            (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_nac_sat_ll_s1            (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_hh_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_hh_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_hl_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_hl_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_lh_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_lh_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_ll_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_ll_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_sat_hh_s0                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_sat_hh_s1                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_sat_hl_s0                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_sat_hl_s1                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_sat_lh_s0                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_sat_lh_s1                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_sat_ll_s0                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_sat_ll_s1                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_rnd_hh_s0                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_rnd_hh_s1                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_rnd_hl_s0                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_rnd_hl_s1                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_rnd_lh_s0                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_rnd_lh_s1                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_rnd_ll_s0                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_rnd_ll_s1                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_sat_rnd_hh_s0            (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_sat_rnd_hh_s1            (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_sat_rnd_hl_s0            (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_sat_rnd_hl_s1            (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_sat_rnd_lh_s0            (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_sat_rnd_lh_s1            (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_sat_rnd_ll_s0            (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_sat_rnd_ll_s1            (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_acc_hh_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_acc_hh_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_acc_hl_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_acc_hl_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_acc_lh_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_acc_lh_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_acc_ll_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_acc_ll_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_nac_hh_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_nac_hh_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_nac_hl_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_nac_hl_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_nac_lh_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_nac_lh_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_nac_ll_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_nac_ll_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_hh_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_hh_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_hl_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_hl_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_lh_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_lh_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_ll_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_ll_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_rnd_hh_s0               (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_rnd_hh_s1               (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_rnd_hl_s0               (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_rnd_hl_s1               (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_rnd_lh_s0               (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_rnd_lh_s1               (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_rnd_ll_s0               (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyd_rnd_ll_s1               (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_acc_hh_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_acc_hh_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_acc_hl_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_acc_hl_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_acc_lh_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_acc_lh_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_acc_ll_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_acc_ll_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_nac_hh_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_nac_hh_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_nac_hl_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_nac_hl_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_nac_lh_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_nac_lh_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_nac_ll_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_nac_ll_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_hh_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_hh_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_hl_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_hl_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_lh_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_lh_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_ll_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_ll_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_acc_hh_s0              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_acc_hh_s1              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_acc_hl_s0              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_acc_hl_s1              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_acc_lh_s0              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_acc_lh_s1              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_acc_ll_s0              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_acc_ll_s1              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_nac_hh_s0              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_nac_hh_s1              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_nac_hl_s0              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_nac_hl_s1              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_nac_lh_s0              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_nac_lh_s1              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_nac_ll_s0              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_nac_ll_s1              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_hh_s0                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_hh_s1                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_hl_s0                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_hl_s1                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_lh_s0                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_lh_s1                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_ll_s0                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyud_ll_s1                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpysmi                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_macsip                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_macsin                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_dpmpyss_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_dpmpyss_acc_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_dpmpyss_nac_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_dpmpyuu_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_dpmpyuu_acc_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_dpmpyuu_nac_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_up                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_up_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpy_up_s1_sat                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyu_up                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpysu_up                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_dpmpyss_rnd_s0               (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_mac_up_s1_sat                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_nac_up_s1_sat                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyi                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mpyui                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_maci                         (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_acci                         (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_accii                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_nacci                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_naccii                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_subacc                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_mpyrr_addr                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_mpyri_addr_u2                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_mpyri_addr                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_mpyri_addi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_mpyrr_addi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vmpy2s_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vmpy2s_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vmac2s_s0                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vmac2s_s1                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vmpy2su_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vmpy2su_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vmac2su_s0                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vmac2su_s1                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vmpy2s_s0pack                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vmpy2s_s1pack                (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vmac2                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vmpy2es_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vmpy2es_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vmac2es_s0                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vmac2es_s1                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vmac2es                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vrmac_s0                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vrmpy_s0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vdmpyrs_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vdmpyrs_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M5_vrmpybuu                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M5_vrmacbuu                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M5_vrmpybsu                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M5_vrmacbsu                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M5_vmpybuu                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M5_vmpybsu                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M5_vmacbuu                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M5_vmacbsu                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M5_vdmpybsu                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M5_vdmacbsu                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vdmacs_s0                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vdmacs_s1                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vdmpys_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vdmpys_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cmpyrs_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cmpyrs_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cmpyrsc_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cmpyrsc_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cmacs_s0                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cmacs_s1                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cmacsc_s0                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cmacsc_s1                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cmpys_s0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cmpys_s1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cmpysc_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cmpysc_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cnacs_s0                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cnacs_s1                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cnacsc_s0                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cnacsc_s1                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vrcmpys_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vrcmpys_acc_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vrcmpys_s1rp                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmacls_s0                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmacls_s1                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmachs_s0                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmachs_s1                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmpyl_s0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmpyl_s1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmpyh_s0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmpyh_s1                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmacls_rs0                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmacls_rs1                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmachs_rs0                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmachs_rs1                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmpyl_rs0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmpyl_rs1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmpyh_rs0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmpyh_rs1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_vrmpyeh_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_vrmpyeh_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_vrmpyeh_acc_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_vrmpyeh_acc_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_vrmpyoh_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_vrmpyoh_s1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_vrmpyoh_acc_s0               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_vrmpyoh_acc_s1               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_hmmpyl_rs1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_hmmpyh_rs1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_hmmpyl_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_hmmpyh_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmaculs_s0                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmaculs_s1                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmacuhs_s0                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmacuhs_s1                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmpyul_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmpyul_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmpyuh_s0                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmpyuh_s1                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmaculs_rs0                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmaculs_rs1                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmacuhs_rs0                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmacuhs_rs1                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmpyul_rs0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmpyul_rs1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmpyuh_rs0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_mmpyuh_rs1                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vrcmaci_s0                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vrcmacr_s0                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vrcmaci_s0c                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vrcmacr_s0c                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cmaci_s0                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cmacr_s0                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vrcmpyi_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vrcmpyr_s0                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vrcmpyi_s0c                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vrcmpyr_s0c                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cmpyi_s0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_cmpyr_s0                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_cmpyi_wh                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_cmpyr_wh                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_cmpyi_whc                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_cmpyr_whc                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vcmpy_s0_sat_i               (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vcmpy_s0_sat_r               (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vcmpy_s1_sat_i               (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vcmpy_s1_sat_r               (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vcmac_s0_sat_i               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vcmac_s0_sat_r               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vcrotate                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_vrcrotate_acc                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_vrcrotate                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vcnegh                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vrcnegh                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_pmpyw                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_vpmpyh                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_pmpyw_acc                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_vpmpyh_acc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_add                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_sub                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_addsat                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_subsat                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_addi                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_addh_l16_ll                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_addh_l16_hl                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_addh_l16_sat_ll              (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_addh_l16_sat_hl              (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_subh_l16_ll                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_subh_l16_hl                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_subh_l16_sat_ll              (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_subh_l16_sat_hl              (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_addh_h16_ll                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_addh_h16_lh                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_addh_h16_hl                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_addh_h16_hh                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_addh_h16_sat_ll              (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_addh_h16_sat_lh              (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_addh_h16_sat_hl              (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_addh_h16_sat_hh              (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_subh_h16_ll                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_subh_h16_lh                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_subh_h16_hl                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_subh_h16_hh                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_subh_h16_sat_ll              (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_subh_h16_sat_lh              (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_subh_h16_sat_hl              (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_subh_h16_sat_hh              (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_aslh                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_asrh                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_addp                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_addpsat                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_addsp                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_subp                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_neg                          (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_negsat                       (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_abs                          (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_abssat                       (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vconj                        (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_negp                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_absp                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_max                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_maxu                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_min                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_minu                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_maxp                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_maxup                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_minp                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_minup                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_tfr                          (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_tfrsi                        (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_tfrp                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_tfrpi                        (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_zxtb                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_sxtb                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_zxth                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_sxth                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_combinew                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_combineri                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_combineir                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_combineii                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_combine_hh                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_combine_hl                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_combine_lh                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_combine_ll                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_tfril                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_tfrih                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_and                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_or                           (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_xor                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_not                          (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_xor_xacc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_xor_xacc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_andn                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_orn                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_andnp                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_ornp                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_addaddi                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_subaddi                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_and_and                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_and_andn                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_and_or                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_and_xor                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_or_and                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_or_andn                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_or_or                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_or_xor                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_or_andix                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_or_andi                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_or_ori                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_xor_and                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_xor_or                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M4_xor_andn                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_subri                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_andir                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_orir                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_andp                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_orp                          (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_xorp                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_notp                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_sxtw                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_sat                          (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_roundsat                     (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_sath                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_satuh                        (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_satub                        (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_satb                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vaddub                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vaddb_map                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vaddubs                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vaddh                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vaddhs                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vadduhs                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A5_vaddhubs                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vaddw                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vaddws                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_vxaddsubw                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_vxsubaddw                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_vxaddsubh                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_vxsubaddh                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_vxaddsubhr                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_vxsubaddhr                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_svavgh                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_svavghs                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_svnavgh                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_svaddh                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_svaddhs                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_svadduhs                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_svsubh                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_svsubhs                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_svsubuhs                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vraddub                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vraddub_acc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vraddh                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vradduh                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vsubub                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vsubb_map                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vsububs                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vsubh                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vsubhs                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vsubuhs                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vsubw                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vsubws                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vabsh                        (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vabshsat                     (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vabsw                        (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vabswsat                     (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vabsdiffw                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_M2_vabsdiffh                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vrsadub                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vrsadub_acc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vavgub                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vavguh                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vavgh                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vnavgh                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vavgw                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vnavgw                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vavgwr                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vnavgwr                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vavgwcr                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vnavgwcr                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vavghcr                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vnavghcr                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vavguw                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vavguwr                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vavgubr                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vavguhr                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vavghr                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vnavghr                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_round_ri                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_round_rr                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_round_ri_sat                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_round_rr_sat                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_cround_ri                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_cround_rr                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vrminh                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vrmaxh                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vrminuh                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vrmaxuh                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vrminw                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vrmaxw                       (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vrminuw                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_vrmaxuw                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vminb                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vmaxb                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vminub                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vmaxub                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vminh                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vmaxh                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vminuh                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vmaxuh                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vminw                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vmaxw                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vminuw                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_vmaxuw                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_modwrapu                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sfadd                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sfsub                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sfmpy                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sffma                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sffma_sc                     (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sffms                        (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sffma_lib                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sffms_lib                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sfcmpeq                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sfcmpgt                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sfcmpge                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sfcmpuo                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sfmax                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sfmin                        (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sfclass                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sfimm_p                      (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sfimm_n                      (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sffixupn                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sffixupd                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_sffixupr                     (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_dfcmpeq                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_dfcmpgt                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_dfcmpge                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_dfcmpuo                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_dfclass                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_dfimm_p                      (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_dfimm_n                      (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_sf2df                   (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_df2sf                   (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_uw2sf                   (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_uw2df                   (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_w2sf                    (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_w2df                    (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_ud2sf                   (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_ud2df                   (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_d2sf                    (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_d2df                    (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_sf2uw                   (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_sf2w                    (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_sf2ud                   (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_sf2d                    (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_df2uw                   (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_df2w                    (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_df2ud                   (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_df2d                    (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_sf2uw_chop              (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_sf2w_chop               (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_sf2ud_chop              (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_sf2d_chop               (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_df2uw_chop              (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_df2w_chop               (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_df2ud_chop              (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_F2_conv_df2d_chop               (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_r_r                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_r_r                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_r_r                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsl_r_r                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_r_p                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_r_p                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_r_p                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsl_r_p                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_r_r_acc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_r_r_acc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_r_r_acc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsl_r_r_acc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_r_p_acc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_r_p_acc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_r_p_acc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsl_r_p_acc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_r_r_nac                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_r_r_nac                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_r_r_nac                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsl_r_r_nac                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_r_p_nac                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_r_p_nac                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_r_p_nac                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsl_r_p_nac                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_r_r_and                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_r_r_and                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_r_r_and                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsl_r_r_and                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_r_r_or                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_r_r_or                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_r_r_or                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsl_r_r_or                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_r_p_and                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_r_p_and                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_r_p_and                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsl_r_p_and                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_r_p_or                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_r_p_or                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_r_p_or                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsl_r_p_or                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_r_p_xor                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_r_p_xor                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_r_p_xor                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsl_r_p_xor                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_r_r_sat                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_r_r_sat                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_i_r                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_i_r                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_i_r                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_i_p                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_i_p                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_i_p                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_i_r_acc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_i_r_acc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_i_r_acc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_i_p_acc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_i_p_acc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_i_p_acc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_i_r_nac                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_i_r_nac                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_i_r_nac                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_i_p_nac                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_i_p_nac                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_i_p_nac                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_i_r_xacc                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_i_r_xacc                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_i_p_xacc                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_i_p_xacc                 (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_i_r_and                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_i_r_and                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_i_r_and                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_i_r_or                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_i_r_or                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_i_r_or                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_i_p_and                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_i_p_and                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_i_p_and                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_i_p_or                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_i_p_or                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_i_p_or                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_i_r_sat                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_i_r_rnd                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_i_r_rnd_goodsyntax       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_i_p_rnd                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_i_p_rnd_goodsyntax       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_lsli                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_addasl_rrri                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_andi_asl_ri                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_ori_asl_ri                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_addi_asl_ri                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_subi_asl_ri                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_andi_lsr_ri                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_ori_lsr_ri                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_addi_lsr_ri                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_subi_lsr_ri                  (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_valignib                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_valignrb                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vspliceib                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vsplicerb                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vsplatrh                     (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vsplatrb                     (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_insert                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_tableidxb_goodsyntax         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_tableidxh_goodsyntax         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_tableidxw_goodsyntax         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_tableidxd_goodsyntax         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_bitspliti                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A4_bitsplit                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_extract                      (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_extractu                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_insertp                      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_extractp                     (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_extractup                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_insert_rp                    (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_extract_rp                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_extractu_rp                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_insertp_rp                   (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_extractp_rp                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_extractup_rp                 (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_tstbit_i                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_ntstbit_i                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_setbit_i                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_togglebit_i                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_clrbit_i                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_tstbit_r                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_ntstbit_r                    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_setbit_r                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_togglebit_r                  (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_clrbit_r                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_i_vh                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_i_vh                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_i_vh                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_r_vh                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S5_asrhub_rnd_sat_goodsyntax    (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S5_asrhub_sat                   (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S5_vasrhrnd_goodsyntax          (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_r_vh                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_r_vh                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsl_r_vh                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_i_vw                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_i_svw_trun               (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_r_svw_trun               (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_i_vw                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_i_vw                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asr_r_vw                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_asl_r_vw                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsr_r_vw                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lsl_r_vw                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vrndpackwh                   (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vrndpackwhs                  (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vsxtbh                       (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vzxtbh                       (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vsathub                      (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_svsathub                     (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_svsathb                      (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vsathb                       (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vtrunohb                     (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vtrunewh                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vtrunowh                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vtrunehb                     (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vsxthw                       (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vzxthw                       (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vsatwh                       (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vsatwuh                      (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_packhl                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_A2_swiz                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vsathub_nopack               (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vsathb_nopack                (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vsatwh_nopack                (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_vsatwuh_nopack               (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_shuffob                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_shuffeb                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_shuffoh                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_shuffeh                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S5_popcountp                    (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_parity                       (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_parityp                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_lfsp                         (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_clbnorm                      (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_clbaddi                      (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_clbpnorm                     (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S4_clbpaddi                     (rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_clb                          (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_cl0                          (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_cl1                          (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_clbp                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_cl0p                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_cl1p                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_brev                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_brevp                        (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_ct0                          (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_ct1                          (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_ct0p                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_ct1p                         (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_interleave                   (rtx, rtx);
extern rtx        gen_hexagon_builtin_HEXAGON_S2_deinterleave                 (rtx, rtx);
extern rtx        gen_hexagon_builtin_SI_to_SXTHI_asrh                        (rtx, rtx);
extern rtx        gen_hexagon_builtin_circ_ldd                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_circ_ldw                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_circ_ldh                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_circ_lduh                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_circ_ldb                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_circ_ldub                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_circ_std                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_circ_stw                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_circ_sth                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_circ_sthhi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_circ_stb                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_brev_ldd                                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_brev_ldw                                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_brev_ldh                                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_brev_lduh                               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_brev_ldb                                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_brev_ldub                               (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_brev_std                                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_brev_stw                                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_brev_sth                                (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_brev_sthhi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_hexagon_builtin_brev_stb                                (rtx, rtx, rtx, rtx);
extern rtx        gen_allocframe                                              (rtx);
extern rtx        gen_allocframe_and_save_r16                                 (rtx);
extern rtx        gen_allocframe_and_save_r16_and_r17                         (rtx);
extern rtx        gen_increment_stack_pointer                                 (rtx);

#endif /* GCC_INSN_FLAGS_H */
