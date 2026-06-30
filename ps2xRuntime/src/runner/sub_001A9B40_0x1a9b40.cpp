#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9B40
// Address: 0x1a9b40 - 0x1a9bb8
void sub_001A9B40_0x1a9b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9B40_0x1a9b40");
#endif

    switch (ctx->pc) {
        case 0x1a9b40u: goto label_1a9b40;
        case 0x1a9b44u: goto label_1a9b44;
        case 0x1a9b48u: goto label_1a9b48;
        case 0x1a9b4cu: goto label_1a9b4c;
        case 0x1a9b50u: goto label_1a9b50;
        case 0x1a9b54u: goto label_1a9b54;
        case 0x1a9b58u: goto label_1a9b58;
        case 0x1a9b5cu: goto label_1a9b5c;
        case 0x1a9b60u: goto label_1a9b60;
        case 0x1a9b64u: goto label_1a9b64;
        case 0x1a9b68u: goto label_1a9b68;
        case 0x1a9b6cu: goto label_1a9b6c;
        case 0x1a9b70u: goto label_1a9b70;
        case 0x1a9b74u: goto label_1a9b74;
        case 0x1a9b78u: goto label_1a9b78;
        case 0x1a9b7cu: goto label_1a9b7c;
        case 0x1a9b80u: goto label_1a9b80;
        case 0x1a9b84u: goto label_1a9b84;
        case 0x1a9b88u: goto label_1a9b88;
        case 0x1a9b8cu: goto label_1a9b8c;
        case 0x1a9b90u: goto label_1a9b90;
        case 0x1a9b94u: goto label_1a9b94;
        case 0x1a9b98u: goto label_1a9b98;
        case 0x1a9b9cu: goto label_1a9b9c;
        case 0x1a9ba0u: goto label_1a9ba0;
        case 0x1a9ba4u: goto label_1a9ba4;
        case 0x1a9ba8u: goto label_1a9ba8;
        case 0x1a9bacu: goto label_1a9bac;
        case 0x1a9bb0u: goto label_1a9bb0;
        case 0x1a9bb4u: goto label_1a9bb4;
        default: break;
    }

    ctx->pc = 0x1a9b40u;

label_1a9b40:
    // 0x1a9b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a9b44:
    // 0x1a9b44: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a9b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a9b48:
    // 0x1a9b48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a9b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b4c:
    // 0x1a9b4c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a9b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1a9b50:
    // 0x1a9b50: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a9b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b54:
    // 0x1a9b54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a9b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a9b58:
    // 0x1a9b58: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1a9b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b5c:
    // 0x1a9b5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a9b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9b60:
    // 0x1a9b60: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1a9b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1a9b64:
    // 0x1a9b64: 0x40f809  jalr        $v0
label_1a9b68:
    if (ctx->pc == 0x1A9B68u) {
        ctx->pc = 0x1A9B68u;
            // 0x1a9b68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B6Cu;
        goto label_1a9b6c;
    }
    ctx->pc = 0x1A9B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9B6Cu);
        ctx->pc = 0x1A9B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B64u;
            // 0x1a9b68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A9B6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B6Cu; }
            if (ctx->pc != 0x1A9B6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A9B6Cu;
label_1a9b6c:
    // 0x1a9b6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a9b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b70:
    // 0x1a9b70: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1a9b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9b74:
    // 0x1a9b74: 0xc064080  jal         func_190200
label_1a9b78:
    if (ctx->pc == 0x1A9B78u) {
        ctx->pc = 0x1A9B78u;
            // 0x1a9b78: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1A9B7Cu;
        goto label_1a9b7c;
    }
    ctx->pc = 0x1A9B74u;
    SET_GPR_U32(ctx, 31, 0x1A9B7Cu);
    ctx->pc = 0x1A9B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B74u;
            // 0x1a9b78: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->hasFunction(0x190200u)) {
        auto targetFn = runtime->lookupFunction(0x190200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B7Cu; }
        if (ctx->pc != 0x1A9B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190200_0x190200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B7Cu; }
        if (ctx->pc != 0x1A9B7Cu) { return; }
    }
    ctx->pc = 0x1A9B7Cu;
label_1a9b7c:
    // 0x1a9b7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9b80:
    // 0x1a9b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b84:
    // 0x1a9b84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a9b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9b88:
    // 0x1a9b88: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a9b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1a9b8c:
    // 0x1a9b8c: 0x40f809  jalr        $v0
label_1a9b90:
    if (ctx->pc == 0x1A9B90u) {
        ctx->pc = 0x1A9B90u;
            // 0x1a9b90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B94u;
        goto label_1a9b94;
    }
    ctx->pc = 0x1A9B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9B94u);
        ctx->pc = 0x1A9B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B8Cu;
            // 0x1a9b90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A9B94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B94u; }
            if (ctx->pc != 0x1A9B94u) { return; }
        }
        }
    }
    ctx->pc = 0x1A9B94u;
label_1a9b94:
    // 0x1a9b94: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a9b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a9b98:
    // 0x1a9b98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a9b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9b9c:
    // 0x1a9b9c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a9b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a9ba0:
    // 0x1a9ba0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a9ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9ba4:
    // 0x1a9ba4: 0x3e00008  jr          $ra
label_1a9ba8:
    if (ctx->pc == 0x1A9BA8u) {
        ctx->pc = 0x1A9BA8u;
            // 0x1a9ba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A9BACu;
        goto label_1a9bac;
    }
    ctx->pc = 0x1A9BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9BA4u;
            // 0x1a9ba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9BACu;
label_1a9bac:
    // 0x1a9bac: 0x0  nop
    ctx->pc = 0x1a9bacu;
    // NOP
label_1a9bb0:
    // 0x1a9bb0: 0x3e00008  jr          $ra
label_1a9bb4:
    if (ctx->pc == 0x1A9BB4u) {
        ctx->pc = 0x1A9BB4u;
            // 0x1a9bb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A9BB8u;
        goto label_fallthrough_0x1a9bb0;
    }
    ctx->pc = 0x1A9BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9BB0u;
            // 0x1a9bb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a9bb0:
    ctx->pc = 0x1A9BB8u;
}
