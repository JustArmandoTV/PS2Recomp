#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C9808
// Address: 0x1c9808 - 0x1c9b40
void sub_001C9808_0x1c9808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9808_0x1c9808");
#endif

    switch (ctx->pc) {
        case 0x1c9890u: goto label_1c9890;
        case 0x1c98c8u: goto label_1c98c8;
        case 0x1c992cu: goto label_1c992c;
        case 0x1c9930u: goto label_1c9930;
        case 0x1c9938u: goto label_1c9938;
        case 0x1c99c0u: goto label_1c99c0;
        case 0x1c9b10u: goto label_1c9b10;
        default: break;
    }

    ctx->pc = 0x1c9808u;

    // 0x1c9808: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c9808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c980c: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x1c980cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1c9810: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1c9810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1c9814: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c9814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9818: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1c9818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1c981c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1c981cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9820: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1c9820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1c9824: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c9824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9828: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1c9828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1c982c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1c982cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9830: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1c9830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1c9834: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1c9834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1c9838: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1c9838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1c983c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1c983cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1c9840: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1c9840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1c9844: 0x12600098  beqz        $s3, . + 4 + (0x98 << 2)
    ctx->pc = 0x1C9844u;
    {
        const bool branch_taken_0x1c9844 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9844u;
            // 0x1c9848: 0xffbf0068  sd          $ra, 0x68($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9844) {
            ctx->pc = 0x1C9AA8u;
            goto label_1c9aa8;
        }
    }
    ctx->pc = 0x1C984Cu;
    // 0x1c984c: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x1c984cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x1c9850: 0x12a880  sll         $s5, $s2, 2
    ctx->pc = 0x1c9850u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1c9854: 0x26d0a70c  addiu       $s0, $s6, -0x58F4
    ctx->pc = 0x1c9854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944524));
    // 0x1c9858: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1c9858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c985c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c985cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9860: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1c9860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1c9864: 0x8c850dfc  lw          $a1, 0xDFC($a0)
    ctx->pc = 0x1c9864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3580)));
    // 0x1c9868: 0x14a3008f  bne         $a1, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x1C9868u;
    {
        const bool branch_taken_0x1c9868 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C986Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9868u;
            // 0x1c986c: 0x2402ffec  addiu       $v0, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9868) {
            ctx->pc = 0x1C9AA8u;
            goto label_1c9aa8;
        }
    }
    ctx->pc = 0x1C9870u;
    // 0x1c9870: 0x322307ff  andi        $v1, $s1, 0x7FF
    ctx->pc = 0x1c9870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2047);
    // 0x1c9874: 0x1460008c  bnez        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x1C9874u;
    {
        const bool branch_taken_0x1c9874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9874u;
            // 0x1c9878: 0x2402fff3  addiu       $v0, $zero, -0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9874) {
            ctx->pc = 0x1C9AA8u;
            goto label_1c9aa8;
        }
    }
    ctx->pc = 0x1C987Cu;
    // 0x1c987c: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x1c987cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1c9880: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c9880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9884: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x1c9884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1c9888: 0xc043316  jal         func_10CC58
    ctx->pc = 0x1C9888u;
    SET_GPR_U32(ctx, 31, 0x1C9890u);
    ctx->pc = 0x1C988Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9888u;
            // 0x1c988c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC58u;
    if (runtime->hasFunction(0x10CC58u)) {
        auto targetFn = runtime->lookupFunction(0x10CC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9890u; }
        if (ctx->pc != 0x1C9890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC58_0x10cc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9890u; }
        if (ctx->pc != 0x1C9890u) { return; }
    }
    ctx->pc = 0x1C9890u;
label_1c9890:
    // 0x1c9890: 0x2e430030  sltiu       $v1, $s2, 0x30
    ctx->pc = 0x1c9890u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1c9894: 0x10600084  beqz        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x1C9894u;
    {
        const bool branch_taken_0x1c9894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9894u;
            // 0x1c9898: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9894) {
            ctx->pc = 0x1C9AA8u;
            goto label_1c9aa8;
        }
    }
    ctx->pc = 0x1C989Cu;
    // 0x1c989c: 0x12a040  sll         $s4, $s2, 1
    ctx->pc = 0x1c989cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1c98a0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1c98a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c98a4: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1c98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1c98a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c98a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c98ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c98acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c98b0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1c98b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c98b4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c98b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c98b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c98b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c98bc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1c98bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1c98c0: 0xc0726fe  jal         func_1C9BF8
    ctx->pc = 0x1C98C0u;
    SET_GPR_U32(ctx, 31, 0x1C98C8u);
    ctx->pc = 0x1C98C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C98C0u;
            // 0x1c98c4: 0x24c60ed4  addiu       $a2, $a2, 0xED4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3796));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9BF8u;
    if (runtime->hasFunction(0x1C9BF8u)) {
        auto targetFn = runtime->lookupFunction(0x1C9BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C98C8u; }
        if (ctx->pc != 0x1C98C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9BF8_0x1c9bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C98C8u; }
        if (ctx->pc != 0x1C98C8u) { return; }
    }
    ctx->pc = 0x1C98C8u;
label_1c98c8:
    // 0x1c98c8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1c98c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c98cc: 0x7c20077  bltzl       $fp, . + 4 + (0x77 << 2)
    ctx->pc = 0x1C98CCu;
    {
        const bool branch_taken_0x1c98cc = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x1c98cc) {
            ctx->pc = 0x1C98D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C98CCu;
            // 0x1c98d0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9AACu;
            goto label_1c9aac;
        }
    }
    ctx->pc = 0x1C98D4u;
    // 0x1c98d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c98d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c98d8: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x1c98d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1c98dc: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x1c98dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c98e0: 0x2a62021  addu        $a0, $s5, $a2
    ctx->pc = 0x1c98e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x1c98e4: 0x8c831880  lw          $v1, 0x1880($a0)
    ctx->pc = 0x1c98e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6272)));
    // 0x1c98e8: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x1c98e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c98ec: 0x1460006e  bnez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x1C98ECu;
    {
        const bool branch_taken_0x1c98ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C98F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C98ECu;
            // 0x1c98f0: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98ec) {
            ctx->pc = 0x1C9AA8u;
            goto label_1c9aa8;
        }
    }
    ctx->pc = 0x1C98F4u;
    // 0x1c98f4: 0x2a61021  addu        $v0, $s5, $a2
    ctx->pc = 0x1c98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x1c98f8: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x1c98f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1c98fc: 0x8c431940  lw          $v1, 0x1940($v0)
    ctx->pc = 0x1c98fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6464)));
    // 0x1c9900: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x1c9900u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c9904: 0x14600068  bnez        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x1C9904u;
    {
        const bool branch_taken_0x1c9904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9904u;
            // 0x1c9908: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9904) {
            ctx->pc = 0x1C9AA8u;
            goto label_1c9aa8;
        }
    }
    ctx->pc = 0x1C990Cu;
    // 0x1c990c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9910: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c9910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9914: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c9914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9918: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x1c9918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x1c991c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1c991cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1c9920: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1c9920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x1c9924: 0xc043ca2  jal         func_10F288
    ctx->pc = 0x1C9924u;
    SET_GPR_U32(ctx, 31, 0x1C992Cu);
    ctx->pc = 0x1C9928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9924u;
            // 0x1c9928: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F288u;
    if (runtime->hasFunction(0x10F288u)) {
        auto targetFn = runtime->lookupFunction(0x10F288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C992Cu; }
        if (ctx->pc != 0x1C992Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F288_0x10f288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C992Cu; }
        if (ctx->pc != 0x1C992Cu) { return; }
    }
    ctx->pc = 0x1C992Cu;
label_1c992c:
    // 0x1c992c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c992cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c9930:
    // 0x1c9930: 0xc0431c0  jal         func_10C700
    ctx->pc = 0x1C9930u;
    SET_GPR_U32(ctx, 31, 0x1C9938u);
    ctx->pc = 0x1C9934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9930u;
            // 0x1c9934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C700u;
    if (runtime->hasFunction(0x10C700u)) {
        auto targetFn = runtime->lookupFunction(0x10C700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9938u; }
        if (ctx->pc != 0x1C9938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C700_0x10c700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9938u; }
        if (ctx->pc != 0x1C9938u) { return; }
    }
    ctx->pc = 0x1C9938u;
label_1c9938:
    // 0x1c9938: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1C9938u;
    {
        const bool branch_taken_0x1c9938 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c9938) {
            ctx->pc = 0x1C9930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9930;
        }
    }
    ctx->pc = 0x1C9940u;
    // 0x1c9940: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9940u;
    {
        const bool branch_taken_0x1c9940 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9940u;
            // 0x1c9944: 0x2921021  addu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9940) {
            ctx->pc = 0x1C9968u;
            goto label_1c9968;
        }
    }
    ctx->pc = 0x1C9948u;
    // 0x1c9948: 0x8ec4a70c  lw          $a0, -0x58F4($s6)
    ctx->pc = 0x1c9948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294944524)));
    // 0x1c994c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c994cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c9950: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1c9950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1c9954: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c9954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c9958: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c9958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c995c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c9960: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9960u;
    {
        const bool branch_taken_0x1c9960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9960u;
            // 0x1c9964: 0xac430ec4  sw          $v1, 0xEC4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3780), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9960) {
            ctx->pc = 0x1C9980u;
            goto label_1c9980;
        }
    }
    ctx->pc = 0x1C9968u;
label_1c9968:
    // 0x1c9968: 0x8ec3a70c  lw          $v1, -0x58F4($s6)
    ctx->pc = 0x1c9968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294944524)));
    // 0x1c996c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c996cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c9970: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c9970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c9974: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c9974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c9978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c9978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c997c: 0xac510ec4  sw          $s1, 0xEC4($v0)
    ctx->pc = 0x1c997cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3780), GPR_U32(ctx, 17));
label_1c9980:
    // 0x1c9980: 0x16e00015  bnez        $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C9980u;
    {
        const bool branch_taken_0x1c9980 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9980u;
            // 0x1c9984: 0x2921021  addu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9980) {
            ctx->pc = 0x1C99D8u;
            goto label_1c99d8;
        }
    }
    ctx->pc = 0x1C9988u;
    // 0x1c9988: 0x2928021  addu        $s0, $s4, $s2
    ctx->pc = 0x1c9988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1c998c: 0x26d1a70c  addiu       $s1, $s6, -0x58F4
    ctx->pc = 0x1c998cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944524));
    // 0x1c9990: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1c9990u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c9994: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c9994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9998: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x1c9998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1c999c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c999cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c99a0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1c99a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c99a4: 0x26040eb0  addiu       $a0, $s0, 0xEB0
    ctx->pc = 0x1c99a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3760));
    // 0x1c99a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c99ac: 0xa065000d  sb          $a1, 0xD($v1)
    ctx->pc = 0x1c99acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 13), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c99b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c99b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c99b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c99b8: 0xc045208  jal         func_114820
    ctx->pc = 0x1C99B8u;
    SET_GPR_U32(ctx, 31, 0x1C99C0u);
    ctx->pc = 0x1C99BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C99B8u;
            // 0x1c99bc: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114820u;
    if (runtime->hasFunction(0x114820u)) {
        auto targetFn = runtime->lookupFunction(0x114820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99C0u; }
        if (ctx->pc != 0x1C99C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114820_0x114820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99C0u; }
        if (ctx->pc != 0x1C99C0u) { return; }
    }
    ctx->pc = 0x1C99C0u;
label_1c99c0:
    // 0x1c99c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c99c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c99c4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1c99c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1c99c8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C99C8u;
    {
        const bool branch_taken_0x1c99c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C99CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C99C8u;
            // 0x1c99cc: 0xae020ecc  sw          $v0, 0xECC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99c8) {
            ctx->pc = 0x1C9A00u;
            goto label_1c9a00;
        }
    }
    ctx->pc = 0x1C99D0u;
    // 0x1c99d0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1C99D0u;
    {
        const bool branch_taken_0x1c99d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C99D0u;
            // 0x1c99d4: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99d0) {
            ctx->pc = 0x1C9AA8u;
            goto label_1c9aa8;
        }
    }
    ctx->pc = 0x1C99D8u;
label_1c99d8:
    // 0x1c99d8: 0x26c5a70c  addiu       $a1, $s6, -0x58F4
    ctx->pc = 0x1c99d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944524));
    // 0x1c99dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c99dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c99e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1c99e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c99e4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c99e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c99e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c99ec: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c99ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c99f0: 0xa0600ebd  sb          $zero, 0xEBD($v1)
    ctx->pc = 0x1c99f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3773), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c99f4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1c99f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c99f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c99fc: 0xac570ecc  sw          $s7, 0xECC($v0)
    ctx->pc = 0x1c99fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3788), GPR_U32(ctx, 23));
label_1c9a00:
    // 0x1c9a00: 0x26c9a70c  addiu       $t1, $s6, -0x58F4
    ctx->pc = 0x1c9a00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944524));
    // 0x1c9a04: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x1c9a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1c9a08: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x1c9a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1c9a0c: 0x324800ff  andi        $t0, $s2, 0xFF
    ctx->pc = 0x1c9a0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1c9a10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9a14: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1c9a14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9a18: 0x24c5000c  addiu       $a1, $a2, 0xC
    ctx->pc = 0x1c9a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x1c9a1c: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x1c9a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x1c9a20: 0x2a53821  addu        $a3, $s5, $a1
    ctx->pc = 0x1c9a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x1c9a24: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1c9a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1c9a28: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1c9a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9a30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a34: 0xac4a0bb0  sw          $t2, 0xBB0($v0)
    ctx->pc = 0x1c9a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2992), GPR_U32(ctx, 10));
    // 0x1c9a38: 0xac800c70  sw          $zero, 0xC70($a0)
    ctx->pc = 0x1c9a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3184), GPR_U32(ctx, 0));
    // 0x1c9a3c: 0x24710eb0  addiu       $s1, $v1, 0xEB0
    ctx->pc = 0x1c9a3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 3760));
    // 0x1c9a40: 0xace80df0  sw          $t0, 0xDF0($a3)
    ctx->pc = 0x1c9a40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3568), GPR_U32(ctx, 8));
    // 0x1c9a44: 0x24680ed0  addiu       $t0, $v1, 0xED0
    ctx->pc = 0x1c9a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 3792));
    // 0x1c9a48: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x1c9a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1c9a4c: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x1c9a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1c9a50: 0x8e670018  lw          $a3, 0x18($s3)
    ctx->pc = 0x1c9a50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1c9a54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1c9a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c9a58: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1c9a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1c9a5c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1c9a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1c9a60: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1c9a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1c9a64: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1c9a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c9a68: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1c9a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c9a6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9A6Cu;
    {
        const bool branch_taken_0x1c9a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A6Cu;
            // 0x1c9a70: 0xac640ee0  sw          $a0, 0xEE0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3808), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a6c) {
            ctx->pc = 0x1C9A78u;
            goto label_1c9a78;
        }
    }
    ctx->pc = 0x1C9A74u;
    // 0x1c9a74: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1c9a74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_1c9a78:
    // 0x1c9a78: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x1c9a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1c9a7c: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x1c9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1c9a80: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1c9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c9a84: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9A84u;
    {
        const bool branch_taken_0x1c9a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A84u;
            // 0x1c9a88: 0xb11021  addu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a84) {
            ctx->pc = 0x1C9AA0u;
            goto label_1c9aa0;
        }
    }
    ctx->pc = 0x1C9A8Cu;
    // 0x1c9a8c: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x1c9a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1c9a90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9a94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9A94u;
    {
        const bool branch_taken_0x1c9a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A94u;
            // 0x1c9a98: 0xa062000e  sb          $v0, 0xE($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 14), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a94) {
            ctx->pc = 0x1C9AA4u;
            goto label_1c9aa4;
        }
    }
    ctx->pc = 0x1C9A9Cu;
    // 0x1c9a9c: 0x0  nop
    ctx->pc = 0x1c9a9cu;
    // NOP
label_1c9aa0:
    // 0x1c9aa0: 0xa04a000e  sb          $t2, 0xE($v0)
    ctx->pc = 0x1c9aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 10));
label_1c9aa4:
    // 0x1c9aa4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1c9aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1c9aa8:
    // 0x1c9aa8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1c9aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c9aac:
    // 0x1c9aac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1c9aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c9ab0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c9ab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9ab4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1c9ab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c9ab8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1c9ab8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c9abc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1c9abcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c9ac0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1c9ac0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9ac4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1c9ac4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c9ac8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1c9ac8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c9acc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1c9accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c9ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9AD0u;
            // 0x1c9ad4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9AD8u;
    // 0x1c9ad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9adc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1c9adcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ae0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c9ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c9ae4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ae8: 0x2e030030  sltiu       $v1, $s0, 0x30
    ctx->pc = 0x1c9ae8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1c9aec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c9aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c9af0: 0x36040800  ori         $a0, $s0, 0x800
    ctx->pc = 0x1c9af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2048);
    // 0x1c9af4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c9af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C9AF8u;
    {
        const bool branch_taken_0x1c9af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9AF8u;
            // 0x1c9afc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9af8) {
            ctx->pc = 0x1C9B2Cu;
            goto label_1c9b2c;
        }
    }
    ctx->pc = 0x1C9B00u;
    // 0x1c9b00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c9b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b04: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1c9b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c9b08: 0xc0728d0  jal         func_1CA340
    ctx->pc = 0x1C9B08u;
    SET_GPR_U32(ctx, 31, 0x1C9B10u);
    ctx->pc = 0x1C9B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B08u;
            // 0x1c9b0c: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B10u; }
        if (ctx->pc != 0x1C9B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA340_0x1ca340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B10u; }
        if (ctx->pc != 0x1C9B10u) { return; }
    }
    ctx->pc = 0x1C9B10u;
label_1c9b10:
    // 0x1c9b10: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9B10u;
    {
        const bool branch_taken_0x1c9b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b10) {
            ctx->pc = 0x1C9B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B10u;
            // 0x1c9b14: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9B30u;
            goto label_1c9b30;
        }
    }
    ctx->pc = 0x1C9B18u;
    // 0x1c9b18: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c9b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c9b1c: 0x8c64a70c  lw          $a0, -0x58F4($v1)
    ctx->pc = 0x1c9b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944524)));
    // 0x1c9b20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c9b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b24: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1c9b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1c9b28: 0xa0830080  sb          $v1, 0x80($a0)
    ctx->pc = 0x1c9b28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 128), (uint8_t)GPR_U32(ctx, 3));
label_1c9b2c:
    // 0x1c9b2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c9b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c9b30:
    // 0x1c9b30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c9b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c9b34: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B34u;
            // 0x1c9b38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9B3Cu;
    // 0x1c9b3c: 0x0  nop
    ctx->pc = 0x1c9b3cu;
    // NOP
}
