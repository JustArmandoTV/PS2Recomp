#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ACE98
// Address: 0x1ace98 - 0x1ad120
void sub_001ACE98_0x1ace98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACE98_0x1ace98");
#endif

    switch (ctx->pc) {
        case 0x1acedcu: goto label_1acedc;
        case 0x1acef0u: goto label_1acef0;
        case 0x1acf60u: goto label_1acf60;
        case 0x1acff8u: goto label_1acff8;
        case 0x1ad01cu: goto label_1ad01c;
        case 0x1ad0c8u: goto label_1ad0c8;
        default: break;
    }

    ctx->pc = 0x1ace98u;

    // 0x1ace98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ace98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ace9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ace9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1acea0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1acea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acea4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1acea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1acea8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1acea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aceac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aceacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aceb0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1aceb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1aceb4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1aceb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aceb8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1aceb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1acebc: 0x26550d88  addiu       $s5, $s2, 0xD88
    ctx->pc = 0x1acebcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 3464));
    // 0x1acec0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1acec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1acec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1acec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acec8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1acec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1acecc: 0x26450da4  addiu       $a1, $s2, 0xDA4
    ctx->pc = 0x1aceccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3492));
    // 0x1aced0: 0x26511240  addiu       $s1, $s2, 0x1240
    ctx->pc = 0x1aced0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4672));
    // 0x1aced4: 0xc06b670  jal         func_1AD9C0
    ctx->pc = 0x1ACED4u;
    SET_GPR_U32(ctx, 31, 0x1ACEDCu);
    ctx->pc = 0x1ACED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACED4u;
            // 0x1aced8: 0x8e532030  lw          $s3, 0x2030($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8240)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD9C0u;
    if (runtime->hasFunction(0x1AD9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1AD9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEDCu; }
        if (ctx->pc != 0x1ACEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD9C0_0x1ad9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACEDCu; }
        if (ctx->pc != 0x1ACEDCu) { return; }
    }
    ctx->pc = 0x1ACEDCu;
label_1acedc:
    // 0x1acedc: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x1ACEDCu;
    {
        const bool branch_taken_0x1acedc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACEDCu;
            // 0x1acee0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acedc) {
            ctx->pc = 0x1ACF20u;
            goto label_1acf20;
        }
    }
    ctx->pc = 0x1ACEE4u;
    // 0x1acee4: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x1acee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1acee8: 0x2642133c  addiu       $v0, $s2, 0x133C
    ctx->pc = 0x1acee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4924));
    // 0x1aceec: 0x0  nop
    ctx->pc = 0x1aceecu;
    // NOP
label_1acef0:
    // 0x1acef0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1acef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1acef4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1acef4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acef8: 0x0  nop
    ctx->pc = 0x1acef8u;
    // NOP
    // 0x1acefc: 0x0  nop
    ctx->pc = 0x1acefcu;
    // NOP
    // 0x1acf00: 0x0  nop
    ctx->pc = 0x1acf00u;
    // NOP
    // 0x1acf04: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ACF04u;
    {
        const bool branch_taken_0x1acf04 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1ACF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF04u;
            // 0x1acf08: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf04) {
            ctx->pc = 0x1ACEF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1acef0;
        }
    }
    ctx->pc = 0x1ACF0Cu;
    // 0x1acf0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1acf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1acf10: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x1acf10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1acf14: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x1acf14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1acf18: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1ACF18u;
    {
        const bool branch_taken_0x1acf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF18u;
            // 0x1acf1c: 0x8e0a0018  lw          $t2, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf18) {
            ctx->pc = 0x1ACFA0u;
            goto label_1acfa0;
        }
    }
    ctx->pc = 0x1ACF20u;
label_1acf20:
    // 0x1acf20: 0x8e0a0018  lw          $t2, 0x18($s0)
    ctx->pc = 0x1acf20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1acf24: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x1acf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1acf28: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1acf28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1acf2c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1ACF2Cu;
    {
        const bool branch_taken_0x1acf2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF2Cu;
            // 0x1acf30: 0x8e070014  lw          $a3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf2c) {
            ctx->pc = 0x1ACFA0u;
            goto label_1acfa0;
        }
    }
    ctx->pc = 0x1ACF34u;
    // 0x1acf34: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x1acf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x1acf38: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x1acf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1acf3c: 0x24e50400  addiu       $a1, $a3, 0x400
    ctx->pc = 0x1acf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x1acf40: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1acf40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf44: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x1acf44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1acf48: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x1acf48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1acf4c: 0xa3400b  movn        $t0, $a1, $v1
    ctx->pc = 0x1acf4cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x1acf50: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x1acf50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1acf54: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1ACF54u;
    {
        const bool branch_taken_0x1acf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF54u;
            // 0x1acf58: 0x28e30000  slti        $v1, $a3, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf54) {
            ctx->pc = 0x1ACFA4u;
            goto label_1acfa4;
        }
    }
    ctx->pc = 0x1ACF5Cu;
    // 0x1acf5c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1acf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1acf60:
    // 0x1acf60: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x1acf60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1acf64: 0x24c4003f  addiu       $a0, $a2, 0x3F
    ctx->pc = 0x1acf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x1acf68: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1acf68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acf6c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1acf6cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1acf70: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1acf70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1acf74: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1acf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1acf78: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1acf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1acf7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1acf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1acf80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1acf80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1acf84: 0xc8182a  slt         $v1, $a2, $t0
    ctx->pc = 0x1acf84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1acf88: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1acf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1acf8c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1ACF8Cu;
    {
        const bool branch_taken_0x1acf8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF8Cu;
            // 0x1acf90: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf8c) {
            ctx->pc = 0x1ACF60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1acf60;
        }
    }
    ctx->pc = 0x1ACF94u;
    // 0x1acf94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACF94u;
    {
        const bool branch_taken_0x1acf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACF94u;
            // 0x1acf98: 0x28e30000  slti        $v1, $a3, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf94) {
            ctx->pc = 0x1ACFA4u;
            goto label_1acfa4;
        }
    }
    ctx->pc = 0x1ACF9Cu;
    // 0x1acf9c: 0x0  nop
    ctx->pc = 0x1acf9cu;
    // NOP
label_1acfa0:
    // 0x1acfa0: 0x28e30000  slti        $v1, $a3, 0x0
    ctx->pc = 0x1acfa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
label_1acfa4:
    // 0x1acfa4: 0x24e4003f  addiu       $a0, $a3, 0x3F
    ctx->pc = 0x1acfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x1acfa8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1acfa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acfac: 0x96a50038  lhu         $a1, 0x38($s5)
    ctx->pc = 0x1acfacu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x1acfb0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1acfb0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1acfb4: 0x24183  sra         $t0, $v0, 6
    ctx->pc = 0x1acfb4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1acfb8: 0x81980  sll         $v1, $t0, 6
    ctx->pc = 0x1acfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x1acfbc: 0xe34023  subu        $t0, $a3, $v1
    ctx->pc = 0x1acfbcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1acfc0: 0x84880  sll         $t1, $t0, 2
    ctx->pc = 0x1acfc0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1acfc4: 0x1311021  addu        $v0, $t1, $s1
    ctx->pc = 0x1acfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x1acfc8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACFC8u;
    {
        const bool branch_taken_0x1acfc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACFC8u;
            // 0x1acfcc: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfc8) {
            ctx->pc = 0x1ACFD8u;
            goto label_1acfd8;
        }
    }
    ctx->pc = 0x1ACFD0u;
    // 0x1acfd0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1ACFD0u;
    {
        const bool branch_taken_0x1acfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACFD0u;
            // 0x1acfd4: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfd0) {
            ctx->pc = 0x1AD060u;
            goto label_1ad060;
        }
    }
    ctx->pc = 0x1ACFD8u;
label_1acfd8:
    // 0x1acfd8: 0x14e0000d  bnez        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x1ACFD8u;
    {
        const bool branch_taken_0x1acfd8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACFD8u;
            // 0x1acfdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfd8) {
            ctx->pc = 0x1AD010u;
            goto label_1ad010;
        }
    }
    ctx->pc = 0x1ACFE0u;
    // 0x1acfe0: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x1acfe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1acfe4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1acfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1acfe8: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ACFE8u;
    {
        const bool branch_taken_0x1acfe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1acfe8) {
            ctx->pc = 0x1ACFECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACFE8u;
            // 0x1acfec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD018u;
            goto label_1ad018;
        }
    }
    ctx->pc = 0x1ACFF0u;
    // 0x1acff0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1ACFF0u;
    {
        const bool branch_taken_0x1acff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACFF0u;
            // 0x1acff4: 0xa6200002  sh          $zero, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acff0) {
            ctx->pc = 0x1AD060u;
            goto label_1ad060;
        }
    }
    ctx->pc = 0x1ACFF8u;
label_1acff8:
    // 0x1acff8: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x1acff8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1acffc: 0x1311821  addu        $v1, $t1, $s1
    ctx->pc = 0x1acffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x1ad000: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ad000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ad004: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1AD004u;
    {
        const bool branch_taken_0x1ad004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD004u;
            // 0x1ad008: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad004) {
            ctx->pc = 0x1AD060u;
            goto label_1ad060;
        }
    }
    ctx->pc = 0x1AD00Cu;
    // 0x1ad00c: 0x0  nop
    ctx->pc = 0x1ad00cu;
    // NOP
label_1ad010:
    // 0x1ad010: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1ad010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad014: 0x0  nop
    ctx->pc = 0x1ad014u;
    // NOP
label_1ad018:
    // 0x1ad018: 0x1061823  subu        $v1, $t0, $a2
    ctx->pc = 0x1ad018u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_1ad01c:
    // 0x1ad01c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ad01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ad020: 0x2465003f  addiu       $a1, $v1, 0x3F
    ctx->pc = 0x1ad020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x1ad024: 0x2463007e  addiu       $v1, $v1, 0x7E
    ctx->pc = 0x1ad024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x1ad028: 0x28a40000  slti        $a0, $a1, 0x0
    ctx->pc = 0x1ad028u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ad02c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ad02cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad030: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1ad030u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1ad034: 0x28c40040  slti        $a0, $a2, 0x40
    ctx->pc = 0x1ad034u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1ad038: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1ad038u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1ad03c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1ad03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1ad040: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x1ad040u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ad044: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ad044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ad048: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ad048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ad04c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1ad04cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad050: 0x1467ffe9  bne         $v1, $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1AD050u;
    {
        const bool branch_taken_0x1ad050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x1AD054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD050u;
            // 0x1ad054: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad050) {
            ctx->pc = 0x1ACFF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1acff8;
        }
    }
    ctx->pc = 0x1AD058u;
    // 0x1ad058: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1AD058u;
    {
        const bool branch_taken_0x1ad058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD058u;
            // 0x1ad05c: 0x1061823  subu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad058) {
            ctx->pc = 0x1AD01Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ad01c;
        }
    }
    ctx->pc = 0x1AD060u;
label_1ad060:
    // 0x1ad060: 0x1312821  addu        $a1, $t1, $s1
    ctx->pc = 0x1ad060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x1ad064: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ad064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad068: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x1ad068u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1ad06c: 0x15430022  bne         $t2, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1AD06Cu;
    {
        const bool branch_taken_0x1ad06c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AD070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD06Cu;
            // 0x1ad070: 0xa6a2003a  sh          $v0, 0x3A($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 58), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad06c) {
            ctx->pc = 0x1AD0F8u;
            goto label_1ad0f8;
        }
    }
    ctx->pc = 0x1AD074u;
    // 0x1ad074: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x1ad074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ad078: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1AD078u;
    {
        const bool branch_taken_0x1ad078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD078u;
            // 0x1ad07c: 0x94a30000  lhu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad078) {
            ctx->pc = 0x1AD0F8u;
            goto label_1ad0f8;
        }
    }
    ctx->pc = 0x1AD080u;
    // 0x1ad080: 0x8e690164  lw          $t1, 0x164($s3)
    ctx->pc = 0x1ad080u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x1ad084: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ad084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad088: 0x94a70002  lhu         $a3, 0x2($a1)
    ctx->pc = 0x1ad088u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1ad08c: 0x8d260070  lw          $a2, 0x70($t1)
    ctx->pc = 0x1ad08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 112)));
    // 0x1ad090: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1ad090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad094: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1ad094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1ad098: 0x24c8003f  addiu       $t0, $a2, 0x3F
    ctx->pc = 0x1ad098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x1ad09c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1ad09cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0a0: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x1ad0a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ad0a4: 0x103100b  movn        $v0, $t0, $v1
    ctx->pc = 0x1ad0a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x1ad0a8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1ad0a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1ad0ac: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1ad0acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1ad0b0: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x1ad0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ad0b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ad0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ad0b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ad0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ad0bc: 0xa4470002  sh          $a3, 0x2($v0)
    ctx->pc = 0x1ad0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x1ad0c0: 0xc06b448  jal         func_1AD120
    ctx->pc = 0x1AD0C0u;
    SET_GPR_U32(ctx, 31, 0x1AD0C8u);
    ctx->pc = 0x1AD0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD0C0u;
            // 0x1ad0c4: 0xa527002e  sh          $a3, 0x2E($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 46), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD120u;
    if (runtime->hasFunction(0x1AD120u)) {
        auto targetFn = runtime->lookupFunction(0x1AD120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0C8u; }
        if (ctx->pc != 0x1AD0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD120_0x1ad120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD0C8u; }
        if (ctx->pc != 0x1AD0C8u) { return; }
    }
    ctx->pc = 0x1AD0C8u;
label_1ad0c8:
    // 0x1ad0c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ad0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0cc: 0x8e650164  lw          $a1, 0x164($s3)
    ctx->pc = 0x1ad0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x1ad0d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad0d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ad0d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad0d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ad0d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad0dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ad0dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ad0e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ad0e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad0e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ad0e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ad0e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ad0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad0ec: 0x806bb50  j           func_1AED40
    ctx->pc = 0x1AD0ECu;
    ctx->pc = 0x1AD0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD0ECu;
            // 0x1ad0f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AED40u;
    {
        auto targetFn = runtime->lookupFunction(0x1AED40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1AD0F4u;
    // 0x1ad0f4: 0x0  nop
    ctx->pc = 0x1ad0f4u;
    // NOP
label_1ad0f8:
    // 0x1ad0f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad0f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad0fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ad0fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad100: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ad100u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad104: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ad104u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ad108: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ad108u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad10c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ad10cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ad110: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ad110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad114: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD114u;
            // 0x1ad118: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD11Cu;
    // 0x1ad11c: 0x0  nop
    ctx->pc = 0x1ad11cu;
    // NOP
}
