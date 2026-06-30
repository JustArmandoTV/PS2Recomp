#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180B50
// Address: 0x180b50 - 0x180bc0
void sub_00180B50_0x180b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180B50_0x180b50");
#endif

    switch (ctx->pc) {
        case 0x180b68u: goto label_180b68;
        default: break;
    }

    ctx->pc = 0x180b50u;

    // 0x180b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180b54: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x180B54u;
    {
        const bool branch_taken_0x180b54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x180B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180B54u;
            // 0x180b58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b54) {
            ctx->pc = 0x180B70u;
            goto label_180b70;
        }
    }
    ctx->pc = 0x180B5Cu;
    // 0x180b5c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x180b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x180b60: 0xc060334  jal         func_180CD0
    ctx->pc = 0x180B60u;
    SET_GPR_U32(ctx, 31, 0x180B68u);
    ctx->pc = 0x180B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180B60u;
            // 0x180b64: 0x24846ab0  addiu       $a0, $a0, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B68u; }
        if (ctx->pc != 0x180B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B68u; }
        if (ctx->pc != 0x180B68u) { return; }
    }
    ctx->pc = 0x180B68u;
label_180b68:
    // 0x180b68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x180B68u;
    {
        const bool branch_taken_0x180b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180B68u;
            // 0x180b6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b68) {
            ctx->pc = 0x180B74u;
            goto label_180b74;
        }
    }
    ctx->pc = 0x180B70u;
label_180b70:
    // 0x180b70: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x180b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_180b74:
    // 0x180b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180b78: 0x3e00008  jr          $ra
    ctx->pc = 0x180B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180B78u;
            // 0x180b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180B80u;
    // 0x180b80: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x180b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b84: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x180B84u;
    {
        const bool branch_taken_0x180b84 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x180B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180B84u;
            // 0x180b88: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b84) {
            ctx->pc = 0x180BA8u;
            goto label_180ba8;
        }
    }
    ctx->pc = 0x180B8Cu;
    // 0x180b8c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x180b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x180b90: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x180b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x180b94: 0xac406c48  sw          $zero, 0x6C48($v0)
    ctx->pc = 0x180b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 27720), GPR_U32(ctx, 0));
    // 0x180b98: 0xac606c4c  sw          $zero, 0x6C4C($v1)
    ctx->pc = 0x180b98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27724), GPR_U32(ctx, 0));
    // 0x180b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x180B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180B9Cu;
            // 0x180ba0: 0xac806c50  sw          $zero, 0x6C50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 27728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180BA4u;
    // 0x180ba4: 0x0  nop
    ctx->pc = 0x180ba4u;
    // NOP
label_180ba8:
    // 0x180ba8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x180ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x180bac: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x180bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x180bb0: 0xac476c48  sw          $a3, 0x6C48($v0)
    ctx->pc = 0x180bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 27720), GPR_U32(ctx, 7));
    // 0x180bb4: 0xac656c4c  sw          $a1, 0x6C4C($v1)
    ctx->pc = 0x180bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27724), GPR_U32(ctx, 5));
    // 0x180bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x180BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180BB8u;
            // 0x180bbc: 0xac866c50  sw          $a2, 0x6C50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 27728), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180BC0u;
}
