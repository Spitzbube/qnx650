/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define UNSPEC_GOTOFF 8
#define UNSPEC_DIV_INV_M0 30
#define PR_REG 146
#define UNSPEC_PIC 6
#define MACL_REG 149
#define UNSPEC_DATALABEL 3
#define MACH_REG 148
#define UNSPEC_BBR 4
#define UNSPECV_ALIGN 1
#define UNSPEC_EXTRACT_U16 44
#define UNSPEC_ASHIFTRT 35
#define R21_REG 21
#define UNSPEC_CALLER 10
#define R7_REG 7
#define R3_REG 3
#define DR2_REG 66
#define UNSPEC_GOTPLT 11
#define UNSPEC_ALLOCO 18
#define UNSPECV_WINDOW_END 10
#define UNSPECV_GBR 13
#define UNSPEC_PLT 9
#define UNSPEC_RA 26
#define UNSPEC_FCOSA 14
#define UNSPEC_DIV_INV_TABLE 37
#define UNSPEC_DIV_INV20 34
#define UNSPEC_SP_TEST 41
#define PIC_REG 12
#define UNSPEC_NSB 17
#define UNSPEC_TPOFF 25
#define TR2_REG 130
#define R22_REG 22
#define R10_REG 10
#define UNSPEC_SP_SET 40
#define UNSPEC_GOTTPOFF 24
#define UNSPEC_EXTRACT_S16 43
#define RAP_REG 152
#define FP_REG 14
#define UNSPEC_MOVA 1
#define R8_REG 8
#define UNSPEC_TLSLDM 21
#define DR4_REG 68
#define FPUL_REG 150
#define DR0_REG 64
#define UNSPEC_DTPOFF 23
#define UNSPEC_DIV_INV_M2 32
#define UNSPEC_DIV_INV_M3 33
#define SP_REG 15
#define FR23_REG 87
#define UNSPEC_SFUNC 5
#define UNSPEC_CASESI 2
#define UNSPEC_ICACHE 12
#define R23_REG 23
#define UNSPEC_INIT_TRAMP 13
#define T_MEDIA_REG 19
#define PR_MEDIA_REG 18
#define TR0_REG 128
#define UNSPEC_DIV_INV_M1 31
#define R9_REG 9
#define UNSPEC_TLSGD 20
#define R5_REG 5
#define UNSPEC_CHKADD 38
#define R1_REG 1
#define UNSPEC_GOT 7
#define UNSPEC_MOVUA 42
#define UNSPEC_TLSIE 22
#define UNSPEC_SYMOFF 45
#define UNSPECV_CONST_END 11
#define XD0_REG 136
#define UNSPEC_PCREL_SYMOFF 46
#define UNSPECV_BLOCKAGE 0
#define R4_REG 4
#define UNSPEC_COMPACT_ARGS 0
#define TR1_REG 129
#define UNSPECV_CONST4 4
#define AP_REG 145
#define UNSPEC_THUNK 36
#define UNSPEC_FSRRA 15
#define R20_REG 20
#define R6_REG 6
#define UNSPECV_CONST8 6
#define UNSPEC_FSINA 16
#define R2_REG 2
#define UNSPECV_SP_SWITCH_B 14
#define T_REG 147
#define UNSPECV_SP_SWITCH_E 15
#define R0_REG 0
#define FPSCR_REG 151
#define GBR_REG 144
#define UNSPECV_EH_RETURN 12
#define UNSPECV_CONST2 2

enum unspec {
  UNSPEC_ATOMIC = 0
};
#define NUM_UNSPEC_VALUES 1
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_CMPXCHG_1 = 0,
  UNSPECV_CMPXCHG_2 = 1,
  UNSPECV_CMPXCHG_3 = 2
};
#define NUM_UNSPECV_VALUES 3
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */