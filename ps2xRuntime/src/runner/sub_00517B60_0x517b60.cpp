#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00517B60
// Address: 0x517b60 - 0x517bd0
void sub_00517B60_0x517b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00517B60_0x517b60");
#endif

    switch (ctx->pc) {
        case 0x517b60u: goto label_517b60;
        case 0x517b64u: goto label_517b64;
        case 0x517b68u: goto label_517b68;
        case 0x517b6cu: goto label_517b6c;
        case 0x517b70u: goto label_517b70;
        case 0x517b74u: goto label_517b74;
        case 0x517b78u: goto label_517b78;
        case 0x517b7cu: goto label_517b7c;
        case 0x517b80u: goto label_517b80;
        case 0x517b84u: goto label_517b84;
        case 0x517b88u: goto label_517b88;
        case 0x517b8cu: goto label_517b8c;
        case 0x517b90u: goto label_517b90;
        case 0x517b94u: goto label_517b94;
        case 0x517b98u: goto label_517b98;
        case 0x517b9cu: goto label_517b9c;
        case 0x517ba0u: goto label_517ba0;
        case 0x517ba4u: goto label_517ba4;
        case 0x517ba8u: goto label_517ba8;
        case 0x517bacu: goto label_517bac;
        case 0x517bb0u: goto label_517bb0;
        case 0x517bb4u: goto label_517bb4;
        case 0x517bb8u: goto label_517bb8;
        case 0x517bbcu: goto label_517bbc;
        case 0x517bc0u: goto label_517bc0;
        case 0x517bc4u: goto label_517bc4;
        case 0x517bc8u: goto label_517bc8;
        case 0x517bccu: goto label_517bcc;
        default: break;
    }

    ctx->pc = 0x517b60u;

label_517b60:
    // 0x517b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x517b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_517b64:
    // 0x517b64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x517b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_517b68:
    // 0x517b68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x517b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_517b6c:
    // 0x517b6c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x517b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_517b70:
    // 0x517b70: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_517b74:
    if (ctx->pc == 0x517B74u) {
        ctx->pc = 0x517B74u;
            // 0x517b74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x517B78u;
        goto label_517b78;
    }
    ctx->pc = 0x517B70u;
    {
        const bool branch_taken_0x517b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x517B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517B70u;
            // 0x517b74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517b70) {
            ctx->pc = 0x517BB8u;
            goto label_517bb8;
        }
    }
    ctx->pc = 0x517B78u;
label_517b78:
    // 0x517b78: 0xc145e7c  jal         func_5179F0
label_517b7c:
    if (ctx->pc == 0x517B7Cu) {
        ctx->pc = 0x517B80u;
        goto label_517b80;
    }
    ctx->pc = 0x517B78u;
    SET_GPR_U32(ctx, 31, 0x517B80u);
    ctx->pc = 0x5179F0u;
    if (runtime->hasFunction(0x5179F0u)) {
        auto targetFn = runtime->lookupFunction(0x5179F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517B80u; }
        if (ctx->pc != 0x517B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005179F0_0x5179f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517B80u; }
        if (ctx->pc != 0x517B80u) { return; }
    }
    ctx->pc = 0x517B80u;
label_517b80:
    // 0x517b80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x517b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_517b84:
    // 0x517b84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x517b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_517b88:
    // 0x517b88: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x517b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_517b8c:
    // 0x517b8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x517b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_517b90:
    // 0x517b90: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x517b90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_517b94:
    // 0x517b94: 0x320f809  jalr        $t9
label_517b98:
    if (ctx->pc == 0x517B98u) {
        ctx->pc = 0x517B9Cu;
        goto label_517b9c;
    }
    ctx->pc = 0x517B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x517B9Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x517B9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x517B9Cu; }
            if (ctx->pc != 0x517B9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x517B9Cu;
label_517b9c:
    // 0x517b9c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x517b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_517ba0:
    // 0x517ba0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x517ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_517ba4:
    // 0x517ba4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x517ba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_517ba8:
    // 0x517ba8: 0x320f809  jalr        $t9
label_517bac:
    if (ctx->pc == 0x517BACu) {
        ctx->pc = 0x517BB0u;
        goto label_517bb0;
    }
    ctx->pc = 0x517BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x517BB0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x517BB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x517BB0u; }
            if (ctx->pc != 0x517BB0u) { return; }
        }
        }
    }
    ctx->pc = 0x517BB0u;
label_517bb0:
    // 0x517bb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x517bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_517bb4:
    // 0x517bb4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x517bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_517bb8:
    // 0x517bb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x517bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_517bbc:
    // 0x517bbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x517bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_517bc0:
    // 0x517bc0: 0x3e00008  jr          $ra
label_517bc4:
    if (ctx->pc == 0x517BC4u) {
        ctx->pc = 0x517BC4u;
            // 0x517bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x517BC8u;
        goto label_517bc8;
    }
    ctx->pc = 0x517BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x517BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517BC0u;
            // 0x517bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x517BC8u;
label_517bc8:
    // 0x517bc8: 0x0  nop
    ctx->pc = 0x517bc8u;
    // NOP
label_517bcc:
    // 0x517bcc: 0x0  nop
    ctx->pc = 0x517bccu;
    // NOP
}
