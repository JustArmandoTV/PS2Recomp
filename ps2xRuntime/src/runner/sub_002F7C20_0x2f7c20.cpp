#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F7C20
// Address: 0x2f7c20 - 0x2f7cc0
void sub_002F7C20_0x2f7c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7C20_0x2f7c20");
#endif

    switch (ctx->pc) {
        case 0x2f7c20u: goto label_2f7c20;
        case 0x2f7c24u: goto label_2f7c24;
        case 0x2f7c28u: goto label_2f7c28;
        case 0x2f7c2cu: goto label_2f7c2c;
        case 0x2f7c30u: goto label_2f7c30;
        case 0x2f7c34u: goto label_2f7c34;
        case 0x2f7c38u: goto label_2f7c38;
        case 0x2f7c3cu: goto label_2f7c3c;
        case 0x2f7c40u: goto label_2f7c40;
        case 0x2f7c44u: goto label_2f7c44;
        case 0x2f7c48u: goto label_2f7c48;
        case 0x2f7c4cu: goto label_2f7c4c;
        case 0x2f7c50u: goto label_2f7c50;
        case 0x2f7c54u: goto label_2f7c54;
        case 0x2f7c58u: goto label_2f7c58;
        case 0x2f7c5cu: goto label_2f7c5c;
        case 0x2f7c60u: goto label_2f7c60;
        case 0x2f7c64u: goto label_2f7c64;
        case 0x2f7c68u: goto label_2f7c68;
        case 0x2f7c6cu: goto label_2f7c6c;
        case 0x2f7c70u: goto label_2f7c70;
        case 0x2f7c74u: goto label_2f7c74;
        case 0x2f7c78u: goto label_2f7c78;
        case 0x2f7c7cu: goto label_2f7c7c;
        case 0x2f7c80u: goto label_2f7c80;
        case 0x2f7c84u: goto label_2f7c84;
        case 0x2f7c88u: goto label_2f7c88;
        case 0x2f7c8cu: goto label_2f7c8c;
        case 0x2f7c90u: goto label_2f7c90;
        case 0x2f7c94u: goto label_2f7c94;
        case 0x2f7c98u: goto label_2f7c98;
        case 0x2f7c9cu: goto label_2f7c9c;
        case 0x2f7ca0u: goto label_2f7ca0;
        case 0x2f7ca4u: goto label_2f7ca4;
        case 0x2f7ca8u: goto label_2f7ca8;
        case 0x2f7cacu: goto label_2f7cac;
        case 0x2f7cb0u: goto label_2f7cb0;
        case 0x2f7cb4u: goto label_2f7cb4;
        case 0x2f7cb8u: goto label_2f7cb8;
        case 0x2f7cbcu: goto label_2f7cbc;
        default: break;
    }

    ctx->pc = 0x2f7c20u;

label_2f7c20:
    // 0x2f7c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f7c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2f7c24:
    // 0x2f7c24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f7c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2f7c28:
    // 0x2f7c28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f7c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f7c2c:
    // 0x2f7c2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f7c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f7c30:
    // 0x2f7c30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f7c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f7c34:
    // 0x2f7c34: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x2f7c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2f7c38:
    // 0x2f7c38: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f7c3c:
    if (ctx->pc == 0x2F7C3Cu) {
        ctx->pc = 0x2F7C3Cu;
            // 0x2f7c3c: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x2F7C40u;
        goto label_2f7c40;
    }
    ctx->pc = 0x2F7C38u;
    {
        const bool branch_taken_0x2f7c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7c38) {
            ctx->pc = 0x2F7C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7C38u;
            // 0x2f7c3c: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7C54u;
            goto label_2f7c54;
        }
    }
    ctx->pc = 0x2F7C40u;
label_2f7c40:
    // 0x2f7c40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7c44:
    // 0x2f7c44: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f7c44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f7c48:
    // 0x2f7c48: 0x320f809  jalr        $t9
label_2f7c4c:
    if (ctx->pc == 0x2F7C4Cu) {
        ctx->pc = 0x2F7C50u;
        goto label_2f7c50;
    }
    ctx->pc = 0x2F7C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7C50u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7C50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7C50u; }
            if (ctx->pc != 0x2F7C50u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7C50u;
label_2f7c50:
    // 0x2f7c50: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2f7c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2f7c54:
    // 0x2f7c54: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2f7c58:
    if (ctx->pc == 0x2F7C58u) {
        ctx->pc = 0x2F7C5Cu;
        goto label_2f7c5c;
    }
    ctx->pc = 0x2F7C54u;
    {
        const bool branch_taken_0x2f7c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7c54) {
            ctx->pc = 0x2F7C88u;
            goto label_2f7c88;
        }
    }
    ctx->pc = 0x2F7C5Cu;
label_2f7c5c:
    // 0x2f7c5c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2f7c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f7c60:
    // 0x2f7c60: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2f7c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2f7c64:
    // 0x2f7c64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7c64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7c68:
    // 0x2f7c68: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f7c68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f7c6c:
    // 0x2f7c6c: 0x320f809  jalr        $t9
label_2f7c70:
    if (ctx->pc == 0x2F7C70u) {
        ctx->pc = 0x2F7C74u;
        goto label_2f7c74;
    }
    ctx->pc = 0x2F7C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7C74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7C74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7C74u; }
            if (ctx->pc != 0x2F7C74u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7C74u;
label_2f7c74:
    // 0x2f7c74: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2f7c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2f7c78:
    // 0x2f7c78: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2f7c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2f7c7c:
    // 0x2f7c7c: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_2f7c80:
    if (ctx->pc == 0x2F7C80u) {
        ctx->pc = 0x2F7C80u;
            // 0x2f7c80: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x2F7C84u;
        goto label_2f7c84;
    }
    ctx->pc = 0x2F7C7Cu;
    {
        const bool branch_taken_0x2f7c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7c7c) {
            ctx->pc = 0x2F7C80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7C7Cu;
            // 0x2f7c80: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7C64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7c64;
        }
    }
    ctx->pc = 0x2F7C84u;
label_2f7c84:
    // 0x2f7c84: 0x0  nop
    ctx->pc = 0x2f7c84u;
    // NOP
label_2f7c88:
    // 0x2f7c88: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x2f7c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_2f7c8c:
    // 0x2f7c8c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_2f7c90:
    if (ctx->pc == 0x2F7C90u) {
        ctx->pc = 0x2F7C90u;
            // 0x2f7c90: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F7C94u;
        goto label_2f7c94;
    }
    ctx->pc = 0x2F7C8Cu;
    {
        const bool branch_taken_0x2f7c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7c8c) {
            ctx->pc = 0x2F7C90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7C8Cu;
            // 0x2f7c90: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7CA4u;
            goto label_2f7ca4;
        }
    }
    ctx->pc = 0x2F7C94u;
label_2f7c94:
    // 0x2f7c94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f7c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f7c98:
    // 0x2f7c98: 0xc0bd7b8  jal         func_2F5EE0
label_2f7c9c:
    if (ctx->pc == 0x2F7C9Cu) {
        ctx->pc = 0x2F7C9Cu;
            // 0x2f7c9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F7CA0u;
        goto label_2f7ca0;
    }
    ctx->pc = 0x2F7C98u;
    SET_GPR_U32(ctx, 31, 0x2F7CA0u);
    ctx->pc = 0x2F7C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7C98u;
            // 0x2f7c9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5EE0u;
    if (runtime->hasFunction(0x2F5EE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7CA0u; }
        if (ctx->pc != 0x2F7CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5EE0_0x2f5ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7CA0u; }
        if (ctx->pc != 0x2F7CA0u) { return; }
    }
    ctx->pc = 0x2F7CA0u;
label_2f7ca0:
    // 0x2f7ca0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7ca4:
    // 0x2f7ca4: 0xae2300cc  sw          $v1, 0xCC($s1)
    ctx->pc = 0x2f7ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
label_2f7ca8:
    // 0x2f7ca8: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x2f7ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_2f7cac:
    // 0x2f7cac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f7cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f7cb0:
    // 0x2f7cb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f7cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f7cb4:
    // 0x2f7cb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f7cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f7cb8:
    // 0x2f7cb8: 0x3e00008  jr          $ra
label_2f7cbc:
    if (ctx->pc == 0x2F7CBCu) {
        ctx->pc = 0x2F7CBCu;
            // 0x2f7cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2F7CC0u;
        goto label_fallthrough_0x2f7cb8;
    }
    ctx->pc = 0x2F7CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7CB8u;
            // 0x2f7cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f7cb8:
    ctx->pc = 0x2F7CC0u;
}
