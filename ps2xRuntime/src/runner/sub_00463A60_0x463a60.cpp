#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00463A60
// Address: 0x463a60 - 0x463af0
void sub_00463A60_0x463a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463A60_0x463a60");
#endif

    switch (ctx->pc) {
        case 0x463a60u: goto label_463a60;
        case 0x463a64u: goto label_463a64;
        case 0x463a68u: goto label_463a68;
        case 0x463a6cu: goto label_463a6c;
        case 0x463a70u: goto label_463a70;
        case 0x463a74u: goto label_463a74;
        case 0x463a78u: goto label_463a78;
        case 0x463a7cu: goto label_463a7c;
        case 0x463a80u: goto label_463a80;
        case 0x463a84u: goto label_463a84;
        case 0x463a88u: goto label_463a88;
        case 0x463a8cu: goto label_463a8c;
        case 0x463a90u: goto label_463a90;
        case 0x463a94u: goto label_463a94;
        case 0x463a98u: goto label_463a98;
        case 0x463a9cu: goto label_463a9c;
        case 0x463aa0u: goto label_463aa0;
        case 0x463aa4u: goto label_463aa4;
        case 0x463aa8u: goto label_463aa8;
        case 0x463aacu: goto label_463aac;
        case 0x463ab0u: goto label_463ab0;
        case 0x463ab4u: goto label_463ab4;
        case 0x463ab8u: goto label_463ab8;
        case 0x463abcu: goto label_463abc;
        case 0x463ac0u: goto label_463ac0;
        case 0x463ac4u: goto label_463ac4;
        case 0x463ac8u: goto label_463ac8;
        case 0x463accu: goto label_463acc;
        case 0x463ad0u: goto label_463ad0;
        case 0x463ad4u: goto label_463ad4;
        case 0x463ad8u: goto label_463ad8;
        case 0x463adcu: goto label_463adc;
        case 0x463ae0u: goto label_463ae0;
        case 0x463ae4u: goto label_463ae4;
        case 0x463ae8u: goto label_463ae8;
        case 0x463aecu: goto label_463aec;
        default: break;
    }

    ctx->pc = 0x463a60u;

label_463a60:
    // 0x463a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x463a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_463a64:
    // 0x463a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x463a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_463a68:
    // 0x463a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x463a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_463a6c:
    // 0x463a6c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x463a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_463a70:
    // 0x463a70: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x463a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_463a74:
    // 0x463a74: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x463a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_463a78:
    // 0x463a78: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x463a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_463a7c:
    // 0x463a7c: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x463a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_463a80:
    // 0x463a80: 0xc088b74  jal         func_222DD0
label_463a84:
    if (ctx->pc == 0x463A84u) {
        ctx->pc = 0x463A84u;
            // 0x463a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463A88u;
        goto label_463a88;
    }
    ctx->pc = 0x463A80u;
    SET_GPR_U32(ctx, 31, 0x463A88u);
    ctx->pc = 0x463A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463A80u;
            // 0x463a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463A88u; }
        if (ctx->pc != 0x463A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463A88u; }
        if (ctx->pc != 0x463A88u) { return; }
    }
    ctx->pc = 0x463A88u;
label_463a88:
    // 0x463a88: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x463a88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_463a8c:
    // 0x463a8c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x463a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_463a90:
    // 0x463a90: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x463a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_463a94:
    // 0x463a94: 0x320f809  jalr        $t9
label_463a98:
    if (ctx->pc == 0x463A98u) {
        ctx->pc = 0x463A98u;
            // 0x463a98: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x463A9Cu;
        goto label_463a9c;
    }
    ctx->pc = 0x463A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x463A9Cu);
        ctx->pc = 0x463A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463A94u;
            // 0x463a98: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x463A9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x463A9Cu; }
            if (ctx->pc != 0x463A9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x463A9Cu;
label_463a9c:
    // 0x463a9c: 0x3c024402  lui         $v0, 0x4402
    ctx->pc = 0x463a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17410 << 16));
label_463aa0:
    // 0x463aa0: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x463aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
label_463aa4:
    // 0x463aa4: 0x3442e652  ori         $v0, $v0, 0xE652
    ctx->pc = 0x463aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58962);
label_463aa8:
    // 0x463aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x463aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_463aac:
    // 0x463aac: 0xc088b74  jal         func_222DD0
label_463ab0:
    if (ctx->pc == 0x463AB0u) {
        ctx->pc = 0x463AB0u;
            // 0x463ab0: 0xae020154  sw          $v0, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
        ctx->pc = 0x463AB4u;
        goto label_463ab4;
    }
    ctx->pc = 0x463AACu;
    SET_GPR_U32(ctx, 31, 0x463AB4u);
    ctx->pc = 0x463AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463AACu;
            // 0x463ab0: 0xae020154  sw          $v0, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463AB4u; }
        if (ctx->pc != 0x463AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463AB4u; }
        if (ctx->pc != 0x463AB4u) { return; }
    }
    ctx->pc = 0x463AB4u;
label_463ab4:
    // 0x463ab4: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x463ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_463ab8:
    // 0x463ab8: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x463ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_463abc:
    // 0x463abc: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x463abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_463ac0:
    // 0x463ac0: 0x320f809  jalr        $t9
label_463ac4:
    if (ctx->pc == 0x463AC4u) {
        ctx->pc = 0x463AC4u;
            // 0x463ac4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x463AC8u;
        goto label_463ac8;
    }
    ctx->pc = 0x463AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x463AC8u);
        ctx->pc = 0x463AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463AC0u;
            // 0x463ac4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x463AC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x463AC8u; }
            if (ctx->pc != 0x463AC8u) { return; }
        }
        }
    }
    ctx->pc = 0x463AC8u;
label_463ac8:
    // 0x463ac8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x463ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_463acc:
    // 0x463acc: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x463accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_463ad0:
    // 0x463ad0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x463ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_463ad4:
    // 0x463ad4: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x463ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_463ad8:
    // 0x463ad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x463ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_463adc:
    // 0x463adc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x463adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_463ae0:
    // 0x463ae0: 0x3e00008  jr          $ra
label_463ae4:
    if (ctx->pc == 0x463AE4u) {
        ctx->pc = 0x463AE4u;
            // 0x463ae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x463AE8u;
        goto label_463ae8;
    }
    ctx->pc = 0x463AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463AE0u;
            // 0x463ae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x463AE8u;
label_463ae8:
    // 0x463ae8: 0x0  nop
    ctx->pc = 0x463ae8u;
    // NOP
label_463aec:
    // 0x463aec: 0x0  nop
    ctx->pc = 0x463aecu;
    // NOP
}
