#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B9A10
// Address: 0x4b9a10 - 0x4b9af0
void sub_004B9A10_0x4b9a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B9A10_0x4b9a10");
#endif

    switch (ctx->pc) {
        case 0x4b9a10u: goto label_4b9a10;
        case 0x4b9a14u: goto label_4b9a14;
        case 0x4b9a18u: goto label_4b9a18;
        case 0x4b9a1cu: goto label_4b9a1c;
        case 0x4b9a20u: goto label_4b9a20;
        case 0x4b9a24u: goto label_4b9a24;
        case 0x4b9a28u: goto label_4b9a28;
        case 0x4b9a2cu: goto label_4b9a2c;
        case 0x4b9a30u: goto label_4b9a30;
        case 0x4b9a34u: goto label_4b9a34;
        case 0x4b9a38u: goto label_4b9a38;
        case 0x4b9a3cu: goto label_4b9a3c;
        case 0x4b9a40u: goto label_4b9a40;
        case 0x4b9a44u: goto label_4b9a44;
        case 0x4b9a48u: goto label_4b9a48;
        case 0x4b9a4cu: goto label_4b9a4c;
        case 0x4b9a50u: goto label_4b9a50;
        case 0x4b9a54u: goto label_4b9a54;
        case 0x4b9a58u: goto label_4b9a58;
        case 0x4b9a5cu: goto label_4b9a5c;
        case 0x4b9a60u: goto label_4b9a60;
        case 0x4b9a64u: goto label_4b9a64;
        case 0x4b9a68u: goto label_4b9a68;
        case 0x4b9a6cu: goto label_4b9a6c;
        case 0x4b9a70u: goto label_4b9a70;
        case 0x4b9a74u: goto label_4b9a74;
        case 0x4b9a78u: goto label_4b9a78;
        case 0x4b9a7cu: goto label_4b9a7c;
        case 0x4b9a80u: goto label_4b9a80;
        case 0x4b9a84u: goto label_4b9a84;
        case 0x4b9a88u: goto label_4b9a88;
        case 0x4b9a8cu: goto label_4b9a8c;
        case 0x4b9a90u: goto label_4b9a90;
        case 0x4b9a94u: goto label_4b9a94;
        case 0x4b9a98u: goto label_4b9a98;
        case 0x4b9a9cu: goto label_4b9a9c;
        case 0x4b9aa0u: goto label_4b9aa0;
        case 0x4b9aa4u: goto label_4b9aa4;
        case 0x4b9aa8u: goto label_4b9aa8;
        case 0x4b9aacu: goto label_4b9aac;
        case 0x4b9ab0u: goto label_4b9ab0;
        case 0x4b9ab4u: goto label_4b9ab4;
        case 0x4b9ab8u: goto label_4b9ab8;
        case 0x4b9abcu: goto label_4b9abc;
        case 0x4b9ac0u: goto label_4b9ac0;
        case 0x4b9ac4u: goto label_4b9ac4;
        case 0x4b9ac8u: goto label_4b9ac8;
        case 0x4b9accu: goto label_4b9acc;
        case 0x4b9ad0u: goto label_4b9ad0;
        case 0x4b9ad4u: goto label_4b9ad4;
        case 0x4b9ad8u: goto label_4b9ad8;
        case 0x4b9adcu: goto label_4b9adc;
        case 0x4b9ae0u: goto label_4b9ae0;
        case 0x4b9ae4u: goto label_4b9ae4;
        case 0x4b9ae8u: goto label_4b9ae8;
        case 0x4b9aecu: goto label_4b9aec;
        default: break;
    }

    ctx->pc = 0x4b9a10u;

label_4b9a10:
    // 0x4b9a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b9a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b9a14:
    // 0x4b9a14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b9a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b9a18:
    // 0x4b9a18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b9a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b9a1c:
    // 0x4b9a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b9a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b9a20:
    // 0x4b9a20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b9a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b9a24:
    // 0x4b9a24: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_4b9a28:
    if (ctx->pc == 0x4B9A28u) {
        ctx->pc = 0x4B9A28u;
            // 0x4b9a28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9A2Cu;
        goto label_4b9a2c;
    }
    ctx->pc = 0x4B9A24u;
    {
        const bool branch_taken_0x4b9a24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9A24u;
            // 0x4b9a28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9a24) {
            ctx->pc = 0x4B9AD8u;
            goto label_4b9ad8;
        }
    }
    ctx->pc = 0x4B9A2Cu;
label_4b9a2c:
    // 0x4b9a2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b9a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b9a30:
    // 0x4b9a30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b9a34:
    // 0x4b9a34: 0x24630d40  addiu       $v1, $v1, 0xD40
    ctx->pc = 0x4b9a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3392));
label_4b9a38:
    // 0x4b9a38: 0x24420d80  addiu       $v0, $v0, 0xD80
    ctx->pc = 0x4b9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3456));
label_4b9a3c:
    // 0x4b9a3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b9a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b9a40:
    // 0x4b9a40: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_4b9a44:
    if (ctx->pc == 0x4B9A44u) {
        ctx->pc = 0x4B9A44u;
            // 0x4b9a44: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x4B9A48u;
        goto label_4b9a48;
    }
    ctx->pc = 0x4B9A40u;
    {
        const bool branch_taken_0x4b9a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9A40u;
            // 0x4b9a44: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9a40) {
            ctx->pc = 0x4B9AC0u;
            goto label_4b9ac0;
        }
    }
    ctx->pc = 0x4B9A48u;
label_4b9a48:
    // 0x4b9a48: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4b9a4c:
    // 0x4b9a4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b9a50:
    // 0x4b9a50: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4b9a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4b9a54:
    // 0x4b9a54: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4b9a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4b9a58:
    // 0x4b9a58: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b9a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b9a5c:
    // 0x4b9a5c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4b9a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4b9a60:
    // 0x4b9a60: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x4b9a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4b9a64:
    // 0x4b9a64: 0xc0aecc4  jal         func_2BB310
label_4b9a68:
    if (ctx->pc == 0x4B9A68u) {
        ctx->pc = 0x4B9A68u;
            // 0x4b9a68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B9A6Cu;
        goto label_4b9a6c;
    }
    ctx->pc = 0x4B9A64u;
    SET_GPR_U32(ctx, 31, 0x4B9A6Cu);
    ctx->pc = 0x4B9A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9A64u;
            // 0x4b9a68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9A6Cu; }
        if (ctx->pc != 0x4B9A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9A6Cu; }
        if (ctx->pc != 0x4B9A6Cu) { return; }
    }
    ctx->pc = 0x4B9A6Cu;
label_4b9a6c:
    // 0x4b9a6c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4b9a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4b9a70:
    // 0x4b9a70: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4b9a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4b9a74:
    // 0x4b9a74: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4b9a78:
    if (ctx->pc == 0x4B9A78u) {
        ctx->pc = 0x4B9A78u;
            // 0x4b9a78: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4B9A7Cu;
        goto label_4b9a7c;
    }
    ctx->pc = 0x4B9A74u;
    {
        const bool branch_taken_0x4b9a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9a74) {
            ctx->pc = 0x4B9A78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9A74u;
            // 0x4b9a78: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B9A90u;
            goto label_4b9a90;
        }
    }
    ctx->pc = 0x4B9A7Cu;
label_4b9a7c:
    // 0x4b9a7c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4b9a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4b9a80:
    // 0x4b9a80: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4b9a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4b9a84:
    // 0x4b9a84: 0x320f809  jalr        $t9
label_4b9a88:
    if (ctx->pc == 0x4B9A88u) {
        ctx->pc = 0x4B9A88u;
            // 0x4b9a88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B9A8Cu;
        goto label_4b9a8c;
    }
    ctx->pc = 0x4B9A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B9A8Cu);
        ctx->pc = 0x4B9A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9A84u;
            // 0x4b9a88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B9A8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B9A8Cu; }
            if (ctx->pc != 0x4B9A8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B9A8Cu;
label_4b9a8c:
    // 0x4b9a8c: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4b9a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4b9a90:
    // 0x4b9a90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4b9a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b9a94:
    // 0x4b9a94: 0xc0aec9c  jal         func_2BB270
label_4b9a98:
    if (ctx->pc == 0x4B9A98u) {
        ctx->pc = 0x4B9A98u;
            // 0x4b9a98: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4B9A9Cu;
        goto label_4b9a9c;
    }
    ctx->pc = 0x4B9A94u;
    SET_GPR_U32(ctx, 31, 0x4B9A9Cu);
    ctx->pc = 0x4B9A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9A94u;
            // 0x4b9a98: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9A9Cu; }
        if (ctx->pc != 0x4B9A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9A9Cu; }
        if (ctx->pc != 0x4B9A9Cu) { return; }
    }
    ctx->pc = 0x4B9A9Cu;
label_4b9a9c:
    // 0x4b9a9c: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4b9a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4b9aa0:
    // 0x4b9aa0: 0xc0aec88  jal         func_2BB220
label_4b9aa4:
    if (ctx->pc == 0x4B9AA4u) {
        ctx->pc = 0x4B9AA4u;
            // 0x4b9aa4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4B9AA8u;
        goto label_4b9aa8;
    }
    ctx->pc = 0x4B9AA0u;
    SET_GPR_U32(ctx, 31, 0x4B9AA8u);
    ctx->pc = 0x4B9AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9AA0u;
            // 0x4b9aa4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9AA8u; }
        if (ctx->pc != 0x4B9AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9AA8u; }
        if (ctx->pc != 0x4B9AA8u) { return; }
    }
    ctx->pc = 0x4B9AA8u;
label_4b9aa8:
    // 0x4b9aa8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4b9aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4b9aac:
    // 0x4b9aac: 0xc0aec0c  jal         func_2BB030
label_4b9ab0:
    if (ctx->pc == 0x4B9AB0u) {
        ctx->pc = 0x4B9AB0u;
            // 0x4b9ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9AB4u;
        goto label_4b9ab4;
    }
    ctx->pc = 0x4B9AACu;
    SET_GPR_U32(ctx, 31, 0x4B9AB4u);
    ctx->pc = 0x4B9AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9AACu;
            // 0x4b9ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9AB4u; }
        if (ctx->pc != 0x4B9AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9AB4u; }
        if (ctx->pc != 0x4B9AB4u) { return; }
    }
    ctx->pc = 0x4B9AB4u;
label_4b9ab4:
    // 0x4b9ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b9ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b9ab8:
    // 0x4b9ab8: 0xc0aeaa8  jal         func_2BAAA0
label_4b9abc:
    if (ctx->pc == 0x4B9ABCu) {
        ctx->pc = 0x4B9ABCu;
            // 0x4b9abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9AC0u;
        goto label_4b9ac0;
    }
    ctx->pc = 0x4B9AB8u;
    SET_GPR_U32(ctx, 31, 0x4B9AC0u);
    ctx->pc = 0x4B9ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9AB8u;
            // 0x4b9abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9AC0u; }
        if (ctx->pc != 0x4B9AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9AC0u; }
        if (ctx->pc != 0x4B9AC0u) { return; }
    }
    ctx->pc = 0x4B9AC0u;
label_4b9ac0:
    // 0x4b9ac0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4b9ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4b9ac4:
    // 0x4b9ac4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b9ac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b9ac8:
    // 0x4b9ac8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b9acc:
    if (ctx->pc == 0x4B9ACCu) {
        ctx->pc = 0x4B9ACCu;
            // 0x4b9acc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9AD0u;
        goto label_4b9ad0;
    }
    ctx->pc = 0x4B9AC8u;
    {
        const bool branch_taken_0x4b9ac8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b9ac8) {
            ctx->pc = 0x4B9ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9AC8u;
            // 0x4b9acc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B9ADCu;
            goto label_4b9adc;
        }
    }
    ctx->pc = 0x4B9AD0u;
label_4b9ad0:
    // 0x4b9ad0: 0xc0400a8  jal         func_1002A0
label_4b9ad4:
    if (ctx->pc == 0x4B9AD4u) {
        ctx->pc = 0x4B9AD4u;
            // 0x4b9ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9AD8u;
        goto label_4b9ad8;
    }
    ctx->pc = 0x4B9AD0u;
    SET_GPR_U32(ctx, 31, 0x4B9AD8u);
    ctx->pc = 0x4B9AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9AD0u;
            // 0x4b9ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9AD8u; }
        if (ctx->pc != 0x4B9AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9AD8u; }
        if (ctx->pc != 0x4B9AD8u) { return; }
    }
    ctx->pc = 0x4B9AD8u;
label_4b9ad8:
    // 0x4b9ad8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b9ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b9adc:
    // 0x4b9adc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b9adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b9ae0:
    // 0x4b9ae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b9ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b9ae4:
    // 0x4b9ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b9ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b9ae8:
    // 0x4b9ae8: 0x3e00008  jr          $ra
label_4b9aec:
    if (ctx->pc == 0x4B9AECu) {
        ctx->pc = 0x4B9AECu;
            // 0x4b9aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B9AF0u;
        goto label_fallthrough_0x4b9ae8;
    }
    ctx->pc = 0x4B9AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B9AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9AE8u;
            // 0x4b9aec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4b9ae8:
    ctx->pc = 0x4B9AF0u;
}
