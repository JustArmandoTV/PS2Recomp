#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00371A60
// Address: 0x371a60 - 0x371af0
void sub_00371A60_0x371a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371A60_0x371a60");
#endif

    switch (ctx->pc) {
        case 0x371a60u: goto label_371a60;
        case 0x371a64u: goto label_371a64;
        case 0x371a68u: goto label_371a68;
        case 0x371a6cu: goto label_371a6c;
        case 0x371a70u: goto label_371a70;
        case 0x371a74u: goto label_371a74;
        case 0x371a78u: goto label_371a78;
        case 0x371a7cu: goto label_371a7c;
        case 0x371a80u: goto label_371a80;
        case 0x371a84u: goto label_371a84;
        case 0x371a88u: goto label_371a88;
        case 0x371a8cu: goto label_371a8c;
        case 0x371a90u: goto label_371a90;
        case 0x371a94u: goto label_371a94;
        case 0x371a98u: goto label_371a98;
        case 0x371a9cu: goto label_371a9c;
        case 0x371aa0u: goto label_371aa0;
        case 0x371aa4u: goto label_371aa4;
        case 0x371aa8u: goto label_371aa8;
        case 0x371aacu: goto label_371aac;
        case 0x371ab0u: goto label_371ab0;
        case 0x371ab4u: goto label_371ab4;
        case 0x371ab8u: goto label_371ab8;
        case 0x371abcu: goto label_371abc;
        case 0x371ac0u: goto label_371ac0;
        case 0x371ac4u: goto label_371ac4;
        case 0x371ac8u: goto label_371ac8;
        case 0x371accu: goto label_371acc;
        case 0x371ad0u: goto label_371ad0;
        case 0x371ad4u: goto label_371ad4;
        case 0x371ad8u: goto label_371ad8;
        case 0x371adcu: goto label_371adc;
        case 0x371ae0u: goto label_371ae0;
        case 0x371ae4u: goto label_371ae4;
        case 0x371ae8u: goto label_371ae8;
        case 0x371aecu: goto label_371aec;
        default: break;
    }

    ctx->pc = 0x371a60u;

label_371a60:
    // 0x371a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x371a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_371a64:
    // 0x371a64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x371a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_371a68:
    // 0x371a68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_371a6c:
    // 0x371a6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x371a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_371a70:
    // 0x371a70: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x371a70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_371a74:
    // 0x371a74: 0x24900080  addiu       $s0, $a0, 0x80
    ctx->pc = 0x371a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_371a78:
    // 0x371a78: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x371a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_371a7c:
    // 0x371a7c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x371a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_371a80:
    // 0x371a80: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x371a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_371a84:
    // 0x371a84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x371a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_371a88:
    // 0x371a88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x371a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_371a8c:
    // 0x371a8c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x371a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_371a90:
    // 0x371a90: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x371a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_371a94:
    // 0x371a94: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x371a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_371a98:
    // 0x371a98: 0xc08bff0  jal         func_22FFC0
label_371a9c:
    if (ctx->pc == 0x371A9Cu) {
        ctx->pc = 0x371A9Cu;
            // 0x371a9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371AA0u;
        goto label_371aa0;
    }
    ctx->pc = 0x371A98u;
    SET_GPR_U32(ctx, 31, 0x371AA0u);
    ctx->pc = 0x371A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371A98u;
            // 0x371a9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371AA0u; }
        if (ctx->pc != 0x371AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371AA0u; }
        if (ctx->pc != 0x371AA0u) { return; }
    }
    ctx->pc = 0x371AA0u;
label_371aa0:
    // 0x371aa0: 0xc0d8760  jal         func_361D80
label_371aa4:
    if (ctx->pc == 0x371AA4u) {
        ctx->pc = 0x371AA4u;
            // 0x371aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371AA8u;
        goto label_371aa8;
    }
    ctx->pc = 0x371AA0u;
    SET_GPR_U32(ctx, 31, 0x371AA8u);
    ctx->pc = 0x371AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371AA0u;
            // 0x371aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361D80u;
    if (runtime->hasFunction(0x361D80u)) {
        auto targetFn = runtime->lookupFunction(0x361D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371AA8u; }
        if (ctx->pc != 0x371AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361D80_0x361d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371AA8u; }
        if (ctx->pc != 0x371AA8u) { return; }
    }
    ctx->pc = 0x371AA8u;
label_371aa8:
    // 0x371aa8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x371aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_371aac:
    // 0x371aac: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x371aacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_371ab0:
    // 0x371ab0: 0x320f809  jalr        $t9
label_371ab4:
    if (ctx->pc == 0x371AB4u) {
        ctx->pc = 0x371AB4u;
            // 0x371ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371AB8u;
        goto label_371ab8;
    }
    ctx->pc = 0x371AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x371AB8u);
        ctx->pc = 0x371AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371AB0u;
            // 0x371ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x371AB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x371AB8u; }
            if (ctx->pc != 0x371AB8u) { return; }
        }
        }
    }
    ctx->pc = 0x371AB8u;
label_371ab8:
    // 0x371ab8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x371ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_371abc:
    // 0x371abc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x371abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_371ac0:
    // 0x371ac0: 0x320f809  jalr        $t9
label_371ac4:
    if (ctx->pc == 0x371AC4u) {
        ctx->pc = 0x371AC4u;
            // 0x371ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371AC8u;
        goto label_371ac8;
    }
    ctx->pc = 0x371AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x371AC8u);
        ctx->pc = 0x371AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371AC0u;
            // 0x371ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x371AC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x371AC8u; }
            if (ctx->pc != 0x371AC8u) { return; }
        }
        }
    }
    ctx->pc = 0x371AC8u;
label_371ac8:
    // 0x371ac8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x371ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_371acc:
    // 0x371acc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x371accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_371ad0:
    // 0x371ad0: 0x1620ffe9  bnez        $s1, . + 4 + (-0x17 << 2)
label_371ad4:
    if (ctx->pc == 0x371AD4u) {
        ctx->pc = 0x371AD4u;
            // 0x371ad4: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x371AD8u;
        goto label_371ad8;
    }
    ctx->pc = 0x371AD0u;
    {
        const bool branch_taken_0x371ad0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x371AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371AD0u;
            // 0x371ad4: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ad0) {
            ctx->pc = 0x371A78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_371a78;
        }
    }
    ctx->pc = 0x371AD8u;
label_371ad8:
    // 0x371ad8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x371ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_371adc:
    // 0x371adc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_371ae0:
    // 0x371ae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_371ae4:
    // 0x371ae4: 0x3e00008  jr          $ra
label_371ae8:
    if (ctx->pc == 0x371AE8u) {
        ctx->pc = 0x371AE8u;
            // 0x371ae8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x371AECu;
        goto label_371aec;
    }
    ctx->pc = 0x371AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371AE4u;
            // 0x371ae8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x371AECu;
label_371aec:
    // 0x371aec: 0x0  nop
    ctx->pc = 0x371aecu;
    // NOP
}
