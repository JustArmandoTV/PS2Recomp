#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023DF90
// Address: 0x23df90 - 0x23e1b0
void sub_0023DF90_0x23df90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DF90_0x23df90");
#endif

    switch (ctx->pc) {
        case 0x23dfd0u: goto label_23dfd0;
        case 0x23e030u: goto label_23e030;
        case 0x23e0a8u: goto label_23e0a8;
        case 0x23e0d4u: goto label_23e0d4;
        case 0x23e0f0u: goto label_23e0f0;
        case 0x23e154u: goto label_23e154;
        case 0x23e184u: goto label_23e184;
        default: break;
    }

    ctx->pc = 0x23df90u;

    // 0x23df90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23df90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23df94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23df94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23df98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23df98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23df9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23df9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23dfa0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23dfa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dfa4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23dfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23dfa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23dfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23dfac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23dfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23dfb0: 0xacb40008  sw          $s4, 0x8($a1)
    ctx->pc = 0x23dfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 20));
    // 0x23dfb4: 0x90a200a8  lbu         $v0, 0xA8($a1)
    ctx->pc = 0x23dfb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x23dfb8: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x23dfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x23dfbc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23dfbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x23dfc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DFC0u;
    {
        const bool branch_taken_0x23dfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DFC0u;
            // 0x23dfc4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfc0) {
            ctx->pc = 0x23DFD8u;
            goto label_23dfd8;
        }
    }
    ctx->pc = 0x23DFC8u;
    // 0x23dfc8: 0xc08b66c  jal         func_22D9B0
    ctx->pc = 0x23DFC8u;
    SET_GPR_U32(ctx, 31, 0x23DFD0u);
    ctx->pc = 0x23DFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DFC8u;
            // 0x23dfcc: 0x8e840020  lw          $a0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D9B0u;
    if (runtime->hasFunction(0x22D9B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DFD0u; }
        if (ctx->pc != 0x23DFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D9B0_0x22d9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DFD0u; }
        if (ctx->pc != 0x23DFD0u) { return; }
    }
    ctx->pc = 0x23DFD0u;
label_23dfd0:
    // 0x23dfd0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x23DFD0u;
    {
        const bool branch_taken_0x23dfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DFD0u;
            // 0x23dfd4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfd0) {
            ctx->pc = 0x23E190u;
            goto label_23e190;
        }
    }
    ctx->pc = 0x23DFD8u;
label_23dfd8:
    // 0x23dfd8: 0x828200c4  lb          $v0, 0xC4($s4)
    ctx->pc = 0x23dfd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x23dfdc: 0x50400065  beql        $v0, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x23DFDCu;
    {
        const bool branch_taken_0x23dfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dfdc) {
            ctx->pc = 0x23DFE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23DFDCu;
            // 0x23dfe0: 0x8e820028  lw          $v0, 0x28($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23E174u;
            goto label_23e174;
        }
    }
    ctx->pc = 0x23DFE4u;
    // 0x23dfe4: 0x38c20001  xori        $v0, $a2, 0x1
    ctx->pc = 0x23dfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x23dfe8: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x23dfe8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x23dfec: 0x52000002  beql        $s0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x23DFECu;
    {
        const bool branch_taken_0x23dfec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dfec) {
            ctx->pc = 0x23DFF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23DFECu;
            // 0x23dff0: 0x26910034  addiu       $s1, $s4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23DFF8u;
            goto label_23dff8;
        }
    }
    ctx->pc = 0x23DFF4u;
    // 0x23dff4: 0x26910028  addiu       $s1, $s4, 0x28
    ctx->pc = 0x23dff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_23dff8:
    // 0x23dff8: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x23DFF8u;
    {
        const bool branch_taken_0x23dff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dff8) {
            ctx->pc = 0x23E0C0u;
            goto label_23e0c0;
        }
    }
    ctx->pc = 0x23E000u;
    // 0x23e000: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x23e000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23e004: 0x2445fff6  addiu       $a1, $v0, -0xA
    ctx->pc = 0x23e004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x23e008: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23E008u;
    {
        const bool branch_taken_0x23e008 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x23e008) {
            ctx->pc = 0x23E014u;
            goto label_23e014;
        }
    }
    ctx->pc = 0x23E010u;
    // 0x23e010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e014:
    // 0x23e014: 0x2449ffff  addiu       $t1, $v0, -0x1
    ctx->pc = 0x23e014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23e018: 0x125102a  slt         $v0, $t1, $a1
    ctx->pc = 0x23e018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x23e01c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x23E01Cu;
    {
        const bool branch_taken_0x23e01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e01c) {
            ctx->pc = 0x23E0C0u;
            goto label_23e0c0;
        }
    }
    ctx->pc = 0x23E024u;
    // 0x23e024: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x23e024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23e028: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x23e028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x23e02c: 0xc23821  addu        $a3, $a2, $v0
    ctx->pc = 0x23e02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_23e030:
    // 0x23e030: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x23e030u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23e034: 0x8d03001c  lw          $v1, 0x1C($t0)
    ctx->pc = 0x23e034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x23e038: 0x8d020050  lw          $v0, 0x50($t0)
    ctx->pc = 0x23e038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x23e03c: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x23e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x23e040: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x23e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23e044: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x23e044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23e048: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E048u;
    {
        const bool branch_taken_0x23e048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e048) {
            ctx->pc = 0x23E04Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23E048u;
            // 0x23e04c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23E050u;
            goto label_23e050;
        }
    }
    ctx->pc = 0x23E050u;
label_23e050:
    // 0x23e050: 0x91020028  lbu         $v0, 0x28($t0)
    ctx->pc = 0x23e050u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x23e054: 0x2173c  dsll32      $v0, $v0, 28
    ctx->pc = 0x23e054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 28));
    // 0x23e058: 0x217be  dsrl32      $v0, $v0, 30
    ctx->pc = 0x23e058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 30));
    // 0x23e05c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x23E05Cu;
    {
        const bool branch_taken_0x23e05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e05c) {
            ctx->pc = 0x23E060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23E05Cu;
            // 0x23e060: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23E0B4u;
            goto label_23e0b4;
        }
    }
    ctx->pc = 0x23E064u;
    // 0x23e064: 0x8e8200a4  lw          $v0, 0xA4($s4)
    ctx->pc = 0x23e064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
    // 0x23e068: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x23e068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23e06c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x23E06Cu;
    {
        const bool branch_taken_0x23e06c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e06c) {
            ctx->pc = 0x23E0B0u;
            goto label_23e0b0;
        }
    }
    ctx->pc = 0x23E074u;
    // 0x23e074: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x23e074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23e078: 0x2402fff3  addiu       $v0, $zero, -0xD
    ctx->pc = 0x23e078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x23e07c: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x23e07cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x23e080: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23e080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e084: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23e084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23e088: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23e088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23e08c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x23e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x23e090: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x23e090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23e094: 0x90860027  lbu         $a2, 0x27($a0)
    ctx->pc = 0x23e094u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    // 0x23e098: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x23e098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x23e09c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23e09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23e0a0: 0xc08b66c  jal         func_22D9B0
    ctx->pc = 0x23E0A0u;
    SET_GPR_U32(ctx, 31, 0x23E0A8u);
    ctx->pc = 0x23E0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E0A0u;
            // 0x23e0a4: 0xa0820027  sb          $v0, 0x27($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D9B0u;
    if (runtime->hasFunction(0x22D9B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E0A8u; }
        if (ctx->pc != 0x23E0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D9B0_0x22d9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E0A8u; }
        if (ctx->pc != 0x23E0A8u) { return; }
    }
    ctx->pc = 0x23E0A8u;
label_23e0a8:
    // 0x23e0a8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x23E0A8u;
    {
        const bool branch_taken_0x23e0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e0a8) {
            ctx->pc = 0x23E18Cu;
            goto label_23e18c;
        }
    }
    ctx->pc = 0x23E0B0u;
label_23e0b0:
    // 0x23e0b0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x23e0b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_23e0b4:
    // 0x23e0b4: 0x125082a  slt         $at, $t1, $a1
    ctx->pc = 0x23e0b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x23e0b8: 0x1020ffdd  beqz        $at, . + 4 + (-0x23 << 2)
    ctx->pc = 0x23E0B8u;
    {
        const bool branch_taken_0x23e0b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E0B8u;
            // 0x23e0bc: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0b8) {
            ctx->pc = 0x23E030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23e030;
        }
    }
    ctx->pc = 0x23E0C0u;
label_23e0c0:
    // 0x23e0c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x23e0c4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x23e0c8: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x23e0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x23e0cc: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x23E0CCu;
    SET_GPR_U32(ctx, 31, 0x23E0D4u);
    ctx->pc = 0x23E0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E0CCu;
            // 0x23e0d0: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E0D4u; }
        if (ctx->pc != 0x23E0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E0D4u; }
        if (ctx->pc != 0x23E0D4u) { return; }
    }
    ctx->pc = 0x23E0D4u;
label_23e0d4:
    // 0x23e0d4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x23e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x23e0d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23e0d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e0dc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E0DCu;
    {
        const bool branch_taken_0x23e0dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E0DCu;
            // 0x23e0e0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0dc) {
            ctx->pc = 0x23E0F0u;
            goto label_23e0f0;
        }
    }
    ctx->pc = 0x23E0E4u;
    // 0x23e0e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23e0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e0e8: 0xc08b5a8  jal         func_22D6A0
    ctx->pc = 0x23E0E8u;
    SET_GPR_U32(ctx, 31, 0x23E0F0u);
    ctx->pc = 0x23E0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E0E8u;
            // 0x23e0ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6A0u;
    if (runtime->hasFunction(0x22D6A0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E0F0u; }
        if (ctx->pc != 0x23E0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6A0_0x22d6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E0F0u; }
        if (ctx->pc != 0x23E0F0u) { return; }
    }
    ctx->pc = 0x23E0F0u;
label_23e0f0:
    // 0x23e0f0: 0x92460028  lbu         $a2, 0x28($s2)
    ctx->pc = 0x23e0f0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x23e0f4: 0x32050003  andi        $a1, $s0, 0x3
    ctx->pc = 0x23e0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x23e0f8: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x23e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x23e0fc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x23e0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23e100: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x23e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x23e104: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x23e104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x23e108: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23e108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23e10c: 0xa2430028  sb          $v1, 0x28($s2)
    ctx->pc = 0x23e10cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x23e110: 0x92430028  lbu         $v1, 0x28($s2)
    ctx->pc = 0x23e110u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x23e114: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23e114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23e118: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x23e118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x23e11c: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x23e11cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e120: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x23e120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23e124: 0xa6420020  sh          $v0, 0x20($s2)
    ctx->pc = 0x23e124u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x23e128: 0x96420020  lhu         $v0, 0x20($s2)
    ctx->pc = 0x23e128u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x23e12c: 0xa2420024  sb          $v0, 0x24($s2)
    ctx->pc = 0x23e12cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x23e130: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x23e130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x23e134: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x23e134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23e138: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x23e138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x23e13c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23e13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x23e140: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E140u;
    {
        const bool branch_taken_0x23e140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23e140) {
            ctx->pc = 0x23E144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23E140u;
            // 0x23e144: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23E158u;
            goto label_23e158;
        }
    }
    ctx->pc = 0x23E148u;
    // 0x23e148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23e148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e14c: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x23E14Cu;
    SET_GPR_U32(ctx, 31, 0x23E154u);
    ctx->pc = 0x23E150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E14Cu;
            // 0x23e150: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E154u; }
        if (ctx->pc != 0x23E154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E154u; }
        if (ctx->pc != 0x23E154u) { return; }
    }
    ctx->pc = 0x23E154u;
label_23e154:
    // 0x23e154: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x23e154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23e158:
    // 0x23e158: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x23e158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23e15c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x23e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x23e160: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23e160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23e164: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23e164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23e168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23e168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23e16c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23E16Cu;
    {
        const bool branch_taken_0x23e16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E16Cu;
            // 0x23e170: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e16c) {
            ctx->pc = 0x23E178u;
            goto label_23e178;
        }
    }
    ctx->pc = 0x23E174u;
label_23e174:
    // 0x23e174: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x23e174u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23e178:
    // 0x23e178: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23e178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e17c: 0xc08b66c  jal         func_22D9B0
    ctx->pc = 0x23E17Cu;
    SET_GPR_U32(ctx, 31, 0x23E184u);
    ctx->pc = 0x23E180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E17Cu;
            // 0x23e180: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D9B0u;
    if (runtime->hasFunction(0x22D9B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E184u; }
        if (ctx->pc != 0x23E184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D9B0_0x22d9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E184u; }
        if (ctx->pc != 0x23E184u) { return; }
    }
    ctx->pc = 0x23E184u;
label_23e184:
    // 0x23e184: 0x8e63009c  lw          $v1, 0x9C($s3)
    ctx->pc = 0x23e184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x23e188: 0xa2430024  sb          $v1, 0x24($s2)
    ctx->pc = 0x23e188u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 3));
label_23e18c:
    // 0x23e18c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23e18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23e190:
    // 0x23e190: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23e190u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23e194: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23e194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23e198: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23e198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e19c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23e19cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e1a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e1a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x23E1A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E1A4u;
            // 0x23e1a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E1ACu;
    // 0x23e1ac: 0x0  nop
    ctx->pc = 0x23e1acu;
    // NOP
}
