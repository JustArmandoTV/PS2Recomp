#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7A28
// Address: 0x1b7a28 - 0x1b7a88
void sub_001B7A28_0x1b7a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7A28_0x1b7a28");
#endif

    switch (ctx->pc) {
        case 0x1b7a58u: goto label_1b7a58;
        case 0x1b7a68u: goto label_1b7a68;
        case 0x1b7a78u: goto label_1b7a78;
        default: break;
    }

    ctx->pc = 0x1b7a28u;

    // 0x1b7a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7a2c: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1b7a2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b7a30: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b7a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b7a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a38: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B7A38u;
    {
        const bool branch_taken_0x1b7a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A38u;
            // 0x1b7a3c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a38) {
            ctx->pc = 0x1B7A78u;
            goto label_1b7a78;
        }
    }
    ctx->pc = 0x1B7A40u;
    // 0x1b7a40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b7a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b7a44: 0x54a2000d  bnel        $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B7A44u;
    {
        const bool branch_taken_0x1b7a44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7a44) {
            ctx->pc = 0x1B7A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A44u;
            // 0x1b7a48: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A7Cu;
            goto label_1b7a7c;
        }
    }
    ctx->pc = 0x1B7A4Cu;
    // 0x1b7a4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b7a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a50: 0xc06ded0  jal         func_1B7B40
    ctx->pc = 0x1B7A50u;
    SET_GPR_U32(ctx, 31, 0x1B7A58u);
    ctx->pc = 0x1B7A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A50u;
            // 0x1b7a54: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7B40u;
    if (runtime->hasFunction(0x1B7B40u)) {
        auto targetFn = runtime->lookupFunction(0x1B7B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A58u; }
        if (ctx->pc != 0x1B7A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7B40_0x1b7b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A58u; }
        if (ctx->pc != 0x1B7A58u) { return; }
    }
    ctx->pc = 0x1B7A58u;
label_1b7a58:
    // 0x1b7a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a5c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b7a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7a60: 0xc06dea2  jal         func_1B7A88
    ctx->pc = 0x1B7A60u;
    SET_GPR_U32(ctx, 31, 0x1B7A68u);
    ctx->pc = 0x1B7A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A60u;
            // 0x1b7a64: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A88u;
    if (runtime->hasFunction(0x1B7A88u)) {
        auto targetFn = runtime->lookupFunction(0x1B7A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A68u; }
        if (ctx->pc != 0x1B7A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7A88_0x1b7a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A68u; }
        if (ctx->pc != 0x1B7A68u) { return; }
    }
    ctx->pc = 0x1B7A68u;
label_1b7a68:
    // 0x1b7a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a6c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1b7a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7a70: 0xc06debc  jal         func_1B7AF0
    ctx->pc = 0x1B7A70u;
    SET_GPR_U32(ctx, 31, 0x1B7A78u);
    ctx->pc = 0x1B7A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A70u;
            // 0x1b7a74: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7AF0u;
    if (runtime->hasFunction(0x1B7AF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A78u; }
        if (ctx->pc != 0x1B7A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7AF0_0x1b7af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A78u; }
        if (ctx->pc != 0x1B7A78u) { return; }
    }
    ctx->pc = 0x1B7A78u;
label_1b7a78:
    // 0x1b7a78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b7a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7a7c:
    // 0x1b7a7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b7a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b7a80: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A80u;
            // 0x1b7a84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7A88u;
}
