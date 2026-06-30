#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B9010
// Address: 0x2b9010 - 0x2b91b0
void sub_002B9010_0x2b9010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9010_0x2b9010");
#endif

    switch (ctx->pc) {
        case 0x2b9040u: goto label_2b9040;
        case 0x2b9094u: goto label_2b9094;
        case 0x2b9118u: goto label_2b9118;
        case 0x2b9138u: goto label_2b9138;
        case 0x2b914cu: goto label_2b914c;
        case 0x2b9158u: goto label_2b9158;
        case 0x2b915cu: goto label_2b915c;
        case 0x2b9180u: goto label_2b9180;
        default: break;
    }

    ctx->pc = 0x2b9010u;

    // 0x2b9010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b9010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b9014: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2b9014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b9018: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b9018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b901c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b901cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b9020: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b9020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b9024: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b9024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b902c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b902cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b9030: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b9030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9034: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b9034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9038: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2B9038u;
    SET_GPR_U32(ctx, 31, 0x2B9040u);
    ctx->pc = 0x2B903Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9038u;
            // 0x2b903c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9040u; }
        if (ctx->pc != 0x2B9040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9040u; }
        if (ctx->pc != 0x2B9040u) { return; }
    }
    ctx->pc = 0x2B9040u;
label_2b9040:
    // 0x2b9040: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b9040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b9044: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b9044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b9048: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2b9048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2b904c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2b904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2b9050: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2b9050u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2b9054: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2b9054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2b9058: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2b9058u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2b905c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b905cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b9060: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2b9060u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2b9064: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b9064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2b9068: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2b9068u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2b906c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2b906cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b9070: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2b9070u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2b9074: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2b9074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2b9078: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2b9078u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2b907c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2b907cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2b9080: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2b9080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2b9084: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2b9084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b9088: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2b9088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2b908c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2B908Cu;
    SET_GPR_U32(ctx, 31, 0x2B9094u);
    ctx->pc = 0x2B9090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B908Cu;
            // 0x2b9090: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9094u; }
        if (ctx->pc != 0x2B9094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9094u; }
        if (ctx->pc != 0x2B9094u) { return; }
    }
    ctx->pc = 0x2B9094u;
label_2b9094:
    // 0x2b9094: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b9094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b9098: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2b9098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2b909c: 0x24632788  addiu       $v1, $v1, 0x2788
    ctx->pc = 0x2b909cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10120));
    // 0x2b90a0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2b90a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2b90a4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2b90a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2b90a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2b90ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b90acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b90b0: 0xac440cc8  sw          $a0, 0xCC8($v0)
    ctx->pc = 0x2b90b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3272), GPR_U32(ctx, 4));
    // 0x2b90b4: 0x246327a0  addiu       $v1, $v1, 0x27A0
    ctx->pc = 0x2b90b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10144));
    // 0x2b90b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b90bc: 0x244227d8  addiu       $v0, $v0, 0x27D8
    ctx->pc = 0x2b90bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10200));
    // 0x2b90c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2b90c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2b90c4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2b90c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2b90c8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2b90c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2b90cc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2b90ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2b90d0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2b90d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2b90d4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2b90d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2b90d8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2b90d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2b90dc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2b90dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2b90e0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2b90e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2b90e4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2b90e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2b90e8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2b90e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2b90ec: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2b90ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2b90f0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2b90f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2b90f4: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2B90F4u;
    {
        const bool branch_taken_0x2b90f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b90f4) {
            ctx->pc = 0x2B9190u;
            goto label_2b9190;
        }
    }
    ctx->pc = 0x2B90FCu;
    // 0x2b90fc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2b90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2b9100: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x2b9100u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b9104: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b9104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b9108: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2b9108u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b910c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b910cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b9110: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2B9110u;
    SET_GPR_U32(ctx, 31, 0x2B9118u);
    ctx->pc = 0x2B9114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9110u;
            // 0x2b9114: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9118u; }
        if (ctx->pc != 0x2B9118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9118u; }
        if (ctx->pc != 0x2B9118u) { return; }
    }
    ctx->pc = 0x2B9118u;
label_2b9118:
    // 0x2b9118: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2b9118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2b911c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x2b911cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x2b9120: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9124: 0x24a50cd0  addiu       $a1, $a1, 0xCD0
    ctx->pc = 0x2b9124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3280));
    // 0x2b9128: 0x24c60bf0  addiu       $a2, $a2, 0xBF0
    ctx->pc = 0x2b9128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3056));
    // 0x2b912c: 0x24070150  addiu       $a3, $zero, 0x150
    ctx->pc = 0x2b912cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x2b9130: 0xc040840  jal         func_102100
    ctx->pc = 0x2B9130u;
    SET_GPR_U32(ctx, 31, 0x2B9138u);
    ctx->pc = 0x2B9134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9130u;
            // 0x2b9134: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9138u; }
        if (ctx->pc != 0x2B9138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9138u; }
        if (ctx->pc != 0x2B9138u) { return; }
    }
    ctx->pc = 0x2B9138u;
label_2b9138:
    // 0x2b9138: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2b9138u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2b913c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b913cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9140: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2b9140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2b9144: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2B9144u;
    SET_GPR_U32(ctx, 31, 0x2B914Cu);
    ctx->pc = 0x2B9148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9144u;
            // 0x2b9148: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B914Cu; }
        if (ctx->pc != 0x2B914Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B914Cu; }
        if (ctx->pc != 0x2B914Cu) { return; }
    }
    ctx->pc = 0x2B914Cu;
label_2b914c:
    // 0x2b914c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2b914cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2b9150: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2B9150u;
    SET_GPR_U32(ctx, 31, 0x2B9158u);
    ctx->pc = 0x2B9154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9150u;
            // 0x2b9154: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9158u; }
        if (ctx->pc != 0x2B9158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9158u; }
        if (ctx->pc != 0x2B9158u) { return; }
    }
    ctx->pc = 0x2B9158u;
label_2b9158:
    // 0x2b9158: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b9158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b915c:
    // 0x2b915c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2b915cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2b9160: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2b9160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2b9164: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2b9164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2b9168: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b9168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b916c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2b916cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2b9170: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2b9170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2b9174: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b9174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b9178: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2B9178u;
    SET_GPR_U32(ctx, 31, 0x2B9180u);
    ctx->pc = 0x2B917Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9178u;
            // 0x2b917c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9180u; }
        if (ctx->pc != 0x2B9180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9180u; }
        if (ctx->pc != 0x2B9180u) { return; }
    }
    ctx->pc = 0x2B9180u;
label_2b9180:
    // 0x2b9180: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b9180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b9184: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2b9184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2b9188: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B9188u;
    {
        const bool branch_taken_0x2b9188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B918Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9188u;
            // 0x2b918c: 0x26520150  addiu       $s2, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9188) {
            ctx->pc = 0x2B915Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b915c;
        }
    }
    ctx->pc = 0x2B9190u;
label_2b9190:
    // 0x2b9190: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2b9190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9194: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b9194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b9198: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b9198u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b919c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b919cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b91a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b91a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b91a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b91a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b91a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B91A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B91ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B91A8u;
            // 0x2b91ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B91B0u;
}
