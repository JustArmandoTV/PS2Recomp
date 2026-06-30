#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CFB40
// Address: 0x3cfb40 - 0x3cfdd0
void sub_003CFB40_0x3cfb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CFB40_0x3cfb40");
#endif

    switch (ctx->pc) {
        case 0x3cfc74u: goto label_3cfc74;
        default: break;
    }

    ctx->pc = 0x3cfb40u;

    // 0x3cfb40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3cfb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3cfb44: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cfb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3cfb48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3cfb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3cfb4c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3cfb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3cfb50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3cfb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3cfb54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cfb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3cfb58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cfb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3cfb5c: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x3cfb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x3cfb60: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3cfb60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3cfb64: 0x8cad0788  lw          $t5, 0x788($a1)
    ctx->pc = 0x3cfb64u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
    // 0x3cfb68: 0x8c630eac  lw          $v1, 0xEAC($v1)
    ctx->pc = 0x3cfb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
    // 0x3cfb6c: 0x8c660098  lw          $a2, 0x98($v1)
    ctx->pc = 0x3cfb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x3cfb70: 0x8c6500a0  lw          $a1, 0xA0($v1)
    ctx->pc = 0x3cfb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x3cfb74: 0x8c6f0078  lw          $t7, 0x78($v1)
    ctx->pc = 0x3cfb74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x3cfb78: 0x8c670094  lw          $a3, 0x94($v1)
    ctx->pc = 0x3cfb78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3cfb7c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3cfb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3cfb80: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x3cfb80u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x3cfb84: 0xef6023  subu        $t4, $a3, $t7
    ctx->pc = 0x3cfb84u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x3cfb88: 0x11a4001b  beq         $t5, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3CFB88u;
    {
        const bool branch_taken_0x3cfb88 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 4));
        ctx->pc = 0x3CFB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFB88u;
            // 0x3cfb8c: 0xc58021  addu        $s0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfb88) {
            ctx->pc = 0x3CFBF8u;
            goto label_3cfbf8;
        }
    }
    ctx->pc = 0x3CFB90u;
    // 0x3cfb90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cfb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3cfb94: 0x11a40018  beq         $t5, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3CFB94u;
    {
        const bool branch_taken_0x3cfb94 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 4));
        if (branch_taken_0x3cfb94) {
            ctx->pc = 0x3CFBF8u;
            goto label_3cfbf8;
        }
    }
    ctx->pc = 0x3CFB9Cu;
    // 0x3cfb9c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3cfb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cfba0: 0x11a4000c  beq         $t5, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3CFBA0u;
    {
        const bool branch_taken_0x3cfba0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 4));
        if (branch_taken_0x3cfba0) {
            ctx->pc = 0x3CFBD4u;
            goto label_3cfbd4;
        }
    }
    ctx->pc = 0x3CFBA8u;
    // 0x3cfba8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3cfba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cfbac: 0x11a40003  beq         $t5, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CFBACu;
    {
        const bool branch_taken_0x3cfbac = (GPR_U64(ctx, 13) == GPR_U64(ctx, 4));
        if (branch_taken_0x3cfbac) {
            ctx->pc = 0x3CFBBCu;
            goto label_3cfbbc;
        }
    }
    ctx->pc = 0x3CFBB4u;
    // 0x3cfbb4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3CFBB4u;
    {
        const bool branch_taken_0x3cfbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfbb4) {
            ctx->pc = 0x3CFC1Cu;
            goto label_3cfc1c;
        }
    }
    ctx->pc = 0x3CFBBCu;
label_3cfbbc:
    // 0x3cfbbc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3cfbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3cfbc0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3cfbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x3cfbc4: 0x24a590f0  addiu       $a1, $a1, -0x6F10
    ctx->pc = 0x3cfbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938864));
    // 0x3cfbc8: 0xac8566c8  sw          $a1, 0x66C8($a0)
    ctx->pc = 0x3cfbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 26312), GPR_U32(ctx, 5));
    // 0x3cfbcc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3CFBCCu;
    {
        const bool branch_taken_0x3cfbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFBCCu;
            // 0x3cfbd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfbcc) {
            ctx->pc = 0x3CFC24u;
            goto label_3cfc24;
        }
    }
    ctx->pc = 0x3CFBD4u;
label_3cfbd4:
    // 0x3cfbd4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3cfbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3cfbd8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3cfbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x3cfbdc: 0x24a59130  addiu       $a1, $a1, -0x6ED0
    ctx->pc = 0x3cfbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938928));
    // 0x3cfbe0: 0xac8566c8  sw          $a1, 0x66C8($a0)
    ctx->pc = 0x3cfbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 26312), GPR_U32(ctx, 5));
    // 0x3cfbe4: 0x8c66008c  lw          $a2, 0x8C($v1)
    ctx->pc = 0x3cfbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x3cfbe8: 0x90640090  lbu         $a0, 0x90($v1)
    ctx->pc = 0x3cfbe8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x3cfbec: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x3cfbecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x3cfbf0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3CFBF0u;
    {
        const bool branch_taken_0x3cfbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFBF0u;
            // 0x3cfbf4: 0xc42023  subu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfbf0) {
            ctx->pc = 0x3CFC24u;
            goto label_3cfc24;
        }
    }
    ctx->pc = 0x3CFBF8u;
label_3cfbf8:
    // 0x3cfbf8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3cfbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3cfbfc: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3cfbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x3cfc00: 0x24a59170  addiu       $a1, $a1, -0x6E90
    ctx->pc = 0x3cfc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938992));
    // 0x3cfc04: 0xac8566c8  sw          $a1, 0x66C8($a0)
    ctx->pc = 0x3cfc04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 26312), GPR_U32(ctx, 5));
    // 0x3cfc08: 0x8c66008c  lw          $a2, 0x8C($v1)
    ctx->pc = 0x3cfc08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x3cfc0c: 0x90640090  lbu         $a0, 0x90($v1)
    ctx->pc = 0x3cfc0cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x3cfc10: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x3cfc10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x3cfc14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3CFC14u;
    {
        const bool branch_taken_0x3cfc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFC14u;
            // 0x3cfc18: 0xc42023  subu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfc14) {
            ctx->pc = 0x3CFC24u;
            goto label_3cfc24;
        }
    }
    ctx->pc = 0x3CFC1Cu;
label_3cfc1c:
    // 0x3cfc1c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x3CFC1Cu;
    {
        const bool branch_taken_0x3cfc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFC1Cu;
            // 0x3cfc20: 0x7bb30030  lq          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfc1c) {
            ctx->pc = 0x3CFDB8u;
            goto label_3cfdb8;
        }
    }
    ctx->pc = 0x3CFC24u;
label_3cfc24:
    // 0x3cfc24: 0x5583c  dsll32      $t3, $a1, 0
    ctx->pc = 0x3cfc24u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3cfc28: 0x904823  subu        $t1, $a0, $s0
    ctx->pc = 0x3cfc28u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3cfc2c: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x3cfc2cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x3cfc30: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x3cfc30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
    // 0x3cfc34: 0xc5600024  lwc1        $f0, 0x24($t3)
    ctx->pc = 0x3cfc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cfc38: 0x3c0e00af  lui         $t6, 0xAF
    ctx->pc = 0x3cfc38u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)175 << 16));
    // 0x3cfc3c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3cfc3cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3cfc40: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3cfc40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x3cfc44: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x3cfc44u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfc48: 0x25ce66d0  addiu       $t6, $t6, 0x66D0
    ctx->pc = 0x3cfc48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 26320));
    // 0x3cfc4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3cfc4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3cfc50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3cfc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cfc54: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3cfc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3cfc58: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3cfc58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cfc5c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3cfc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3cfc60: 0xe48067d0  swc1        $f0, 0x67D0($a0)
    ctx->pc = 0x3cfc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 26576), bits); }
    // 0x3cfc64: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x3cfc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x3cfc68: 0x2092021  addu        $a0, $s0, $t1
    ctx->pc = 0x3cfc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x3cfc6c: 0x6f5023  subu        $t2, $v1, $t7
    ctx->pc = 0x3cfc6cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x3cfc70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3cfc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3cfc74:
    // 0x3cfc74: 0x1e0982d  daddu       $s3, $t7, $zero
    ctx->pc = 0x3cfc74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfc78: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3cfc78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfc7c: 0x11a7000e  beq         $t5, $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x3CFC7Cu;
    {
        const bool branch_taken_0x3cfc7c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 7));
        ctx->pc = 0x3CFC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFC7Cu;
            // 0x3cfc80: 0x100c82d  daddu       $t9, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfc7c) {
            ctx->pc = 0x3CFCB8u;
            goto label_3cfcb8;
        }
    }
    ctx->pc = 0x3CFC84u;
    // 0x3cfc84: 0x11a6000c  beq         $t5, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x3CFC84u;
    {
        const bool branch_taken_0x3cfc84 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 6));
        if (branch_taken_0x3cfc84) {
            ctx->pc = 0x3CFCB8u;
            goto label_3cfcb8;
        }
    }
    ctx->pc = 0x3CFC8Cu;
    // 0x3cfc8c: 0x11a50004  beq         $t5, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CFC8Cu;
    {
        const bool branch_taken_0x3cfc8c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 5));
        if (branch_taken_0x3cfc8c) {
            ctx->pc = 0x3CFCA0u;
            goto label_3cfca0;
        }
    }
    ctx->pc = 0x3CFC94u;
    // 0x3cfc94: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3CFC94u;
    {
        const bool branch_taken_0x3cfc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfc94) {
            ctx->pc = 0x3CFCE0u;
            goto label_3cfce0;
        }
    }
    ctx->pc = 0x3CFC9Cu;
    // 0x3cfc9c: 0x0  nop
    ctx->pc = 0x3cfc9cu;
    // NOP
label_3cfca0:
    // 0x3cfca0: 0x33110001  andi        $s1, $t8, 0x1
    ctx->pc = 0x3cfca0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x3cfca4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x3CFCA4u;
    {
        const bool branch_taken_0x3cfca4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfca4) {
            ctx->pc = 0x3CFCE0u;
            goto label_3cfce0;
        }
    }
    ctx->pc = 0x3CFCACu;
    // 0x3cfcac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3CFCACu;
    {
        const bool branch_taken_0x3cfcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFCACu;
            // 0x3cfcb0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfcac) {
            ctx->pc = 0x3CFCE0u;
            goto label_3cfce0;
        }
    }
    ctx->pc = 0x3CFCB4u;
    // 0x3cfcb4: 0x0  nop
    ctx->pc = 0x3cfcb4u;
    // NOP
label_3cfcb8:
    // 0x3cfcb8: 0x33110001  andi        $s1, $t8, 0x1
    ctx->pc = 0x3cfcb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x3cfcbc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CFCBCu;
    {
        const bool branch_taken_0x3cfcbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfcbc) {
            ctx->pc = 0x3CFCD0u;
            goto label_3cfcd0;
        }
    }
    ctx->pc = 0x3CFCC4u;
    // 0x3cfcc4: 0x26a9821  addu        $s3, $s3, $t2
    ctx->pc = 0x3cfcc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 10)));
    // 0x3cfcc8: 0x60c82d  daddu       $t9, $v1, $zero
    ctx->pc = 0x3cfcc8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfccc: 0x0  nop
    ctx->pc = 0x3cfcccu;
    // NOP
label_3cfcd0:
    // 0x3cfcd0: 0x33110002  andi        $s1, $t8, 0x2
    ctx->pc = 0x3cfcd0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)2);
    // 0x3cfcd4: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3CFCD4u;
    {
        const bool branch_taken_0x3cfcd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfcd4) {
            ctx->pc = 0x3CFCE0u;
            goto label_3cfce0;
        }
    }
    ctx->pc = 0x3CFCDCu;
    // 0x3cfcdc: 0x2499021  addu        $s2, $s2, $t1
    ctx->pc = 0x3cfcdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_3cfce0:
    // 0x3cfce0: 0xadd30000  sw          $s3, 0x0($t6)
    ctx->pc = 0x3cfce0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 19));
    // 0x3cfce4: 0xadd20004  sw          $s2, 0x4($t6)
    ctx->pc = 0x3cfce4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 18));
    // 0x3cfce8: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x3cfce8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x3cfcec: 0x1999018  mult        $s2, $t4, $t9
    ctx->pc = 0x3cfcecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x3cfcf0: 0xadd90008  sw          $t9, 0x8($t6)
    ctx->pc = 0x3cfcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 25));
    // 0x3cfcf4: 0xadc00010  sw          $zero, 0x10($t6)
    ctx->pc = 0x3cfcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 0));
    // 0x3cfcf8: 0x30d882a  slt         $s1, $t8, $t5
    ctx->pc = 0x3cfcf8u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x3cfcfc: 0xa5d20018  sh          $s2, 0x18($t6)
    ctx->pc = 0x3cfcfcu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 24), (uint16_t)GPR_U32(ctx, 18));
    // 0x3cfd00: 0xa5d20014  sh          $s2, 0x14($t6)
    ctx->pc = 0x3cfd00u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 20), (uint16_t)GPR_U32(ctx, 18));
    // 0x3cfd04: 0x8573001e  lh          $s3, 0x1E($t3)
    ctx->pc = 0x3cfd04u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 30)));
    // 0x3cfd08: 0x91720022  lbu         $s2, 0x22($t3)
    ctx->pc = 0x3cfd08u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 34)));
    // 0x3cfd0c: 0x2729023  subu        $s2, $s3, $s2
    ctx->pc = 0x3cfd0cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x3cfd10: 0xa5d20016  sh          $s2, 0x16($t6)
    ctx->pc = 0x3cfd10u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 22), (uint16_t)GPR_U32(ctx, 18));
    // 0x3cfd14: 0x8572001e  lh          $s2, 0x1E($t3)
    ctx->pc = 0x3cfd14u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 30)));
    // 0x3cfd18: 0xa5d2001a  sh          $s2, 0x1A($t6)
    ctx->pc = 0x3cfd18u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 26), (uint16_t)GPR_U32(ctx, 18));
    // 0x3cfd1c: 0xc5600024  lwc1        $f0, 0x24($t3)
    ctx->pc = 0x3cfd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cfd20: 0xe5c0001c  swc1        $f0, 0x1C($t6)
    ctx->pc = 0x3cfd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 28), bits); }
    // 0x3cfd24: 0x85720018  lh          $s2, 0x18($t3)
    ctx->pc = 0x3cfd24u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x3cfd28: 0x73329018  mult1       $s2, $t9, $s2
    ctx->pc = 0x3cfd28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 18); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x3cfd2c: 0xa5d20024  sh          $s2, 0x24($t6)
    ctx->pc = 0x3cfd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 36), (uint16_t)GPR_U32(ctx, 18));
    // 0x3cfd30: 0xa5d20020  sh          $s2, 0x20($t6)
    ctx->pc = 0x3cfd30u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 32), (uint16_t)GPR_U32(ctx, 18));
    // 0x3cfd34: 0x8573001e  lh          $s3, 0x1E($t3)
    ctx->pc = 0x3cfd34u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 30)));
    // 0x3cfd38: 0x91720022  lbu         $s2, 0x22($t3)
    ctx->pc = 0x3cfd38u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 34)));
    // 0x3cfd3c: 0x2729023  subu        $s2, $s3, $s2
    ctx->pc = 0x3cfd3cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x3cfd40: 0xa5d20022  sh          $s2, 0x22($t6)
    ctx->pc = 0x3cfd40u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 34), (uint16_t)GPR_U32(ctx, 18));
    // 0x3cfd44: 0x8572001e  lh          $s2, 0x1E($t3)
    ctx->pc = 0x3cfd44u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 30)));
    // 0x3cfd48: 0xa5d20026  sh          $s2, 0x26($t6)
    ctx->pc = 0x3cfd48u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 38), (uint16_t)GPR_U32(ctx, 18));
    // 0x3cfd4c: 0xc5600024  lwc1        $f0, 0x24($t3)
    ctx->pc = 0x3cfd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cfd50: 0xe5c00028  swc1        $f0, 0x28($t6)
    ctx->pc = 0x3cfd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 40), bits); }
    // 0x3cfd54: 0x8572001a  lh          $s2, 0x1A($t3)
    ctx->pc = 0x3cfd54u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 26)));
    // 0x3cfd58: 0x3329018  mult        $s2, $t9, $s2
    ctx->pc = 0x3cfd58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x3cfd5c: 0xa5d20030  sh          $s2, 0x30($t6)
    ctx->pc = 0x3cfd5cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 48), (uint16_t)GPR_U32(ctx, 18));
    // 0x3cfd60: 0xa5d2002c  sh          $s2, 0x2C($t6)
    ctx->pc = 0x3cfd60u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 44), (uint16_t)GPR_U32(ctx, 18));
    // 0x3cfd64: 0x85730020  lh          $s3, 0x20($t3)
    ctx->pc = 0x3cfd64u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x3cfd68: 0x91720022  lbu         $s2, 0x22($t3)
    ctx->pc = 0x3cfd68u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 34)));
    // 0x3cfd6c: 0x2729023  subu        $s2, $s3, $s2
    ctx->pc = 0x3cfd6cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x3cfd70: 0xa5d2002e  sh          $s2, 0x2E($t6)
    ctx->pc = 0x3cfd70u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 46), (uint16_t)GPR_U32(ctx, 18));
    // 0x3cfd74: 0x85720020  lh          $s2, 0x20($t3)
    ctx->pc = 0x3cfd74u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x3cfd78: 0xa5d20032  sh          $s2, 0x32($t6)
    ctx->pc = 0x3cfd78u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 50), (uint16_t)GPR_U32(ctx, 18));
    // 0x3cfd7c: 0xc5600024  lwc1        $f0, 0x24($t3)
    ctx->pc = 0x3cfd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cfd80: 0xe5c00034  swc1        $f0, 0x34($t6)
    ctx->pc = 0x3cfd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 52), bits); }
    // 0x3cfd84: 0x8572001c  lh          $s2, 0x1C($t3)
    ctx->pc = 0x3cfd84u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x3cfd88: 0x73329018  mult1       $s2, $t9, $s2
    ctx->pc = 0x3cfd88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 18); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x3cfd8c: 0xa5d2003c  sh          $s2, 0x3C($t6)
    ctx->pc = 0x3cfd8cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 60), (uint16_t)GPR_U32(ctx, 18));
    // 0x3cfd90: 0xa5d20038  sh          $s2, 0x38($t6)
    ctx->pc = 0x3cfd90u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 56), (uint16_t)GPR_U32(ctx, 18));
    // 0x3cfd94: 0x85720020  lh          $s2, 0x20($t3)
    ctx->pc = 0x3cfd94u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x3cfd98: 0x91790022  lbu         $t9, 0x22($t3)
    ctx->pc = 0x3cfd98u;
    SET_GPR_U32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 34)));
    // 0x3cfd9c: 0x259c823  subu        $t9, $s2, $t9
    ctx->pc = 0x3cfd9cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 25)));
    // 0x3cfda0: 0xa5d9003a  sh          $t9, 0x3A($t6)
    ctx->pc = 0x3cfda0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 58), (uint16_t)GPR_U32(ctx, 25));
    // 0x3cfda4: 0x85790020  lh          $t9, 0x20($t3)
    ctx->pc = 0x3cfda4u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x3cfda8: 0xa5d9003e  sh          $t9, 0x3E($t6)
    ctx->pc = 0x3cfda8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 62), (uint16_t)GPR_U32(ctx, 25));
    // 0x3cfdac: 0x1620ffb1  bnez        $s1, . + 4 + (-0x4F << 2)
    ctx->pc = 0x3CFDACu;
    {
        const bool branch_taken_0x3cfdac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CFDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFDACu;
            // 0x3cfdb0: 0x25ce0040  addiu       $t6, $t6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfdac) {
            ctx->pc = 0x3CFC74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3cfc74;
        }
    }
    ctx->pc = 0x3CFDB4u;
    // 0x3cfdb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3cfdb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3cfdb8:
    // 0x3cfdb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3cfdb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cfdbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cfdbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cfdc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cfdc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cfdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x3CFDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CFDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CFDC4u;
            // 0x3cfdc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CFDCCu;
    // 0x3cfdcc: 0x0  nop
    ctx->pc = 0x3cfdccu;
    // NOP
}
