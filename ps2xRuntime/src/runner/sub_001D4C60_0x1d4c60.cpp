#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D4C60
// Address: 0x1d4c60 - 0x1d4ca0
void sub_001D4C60_0x1d4c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4C60_0x1d4c60");
#endif

    switch (ctx->pc) {
        case 0x1d4c7cu: goto label_1d4c7c;
        case 0x1d4c88u: goto label_1d4c88;
        default: break;
    }

    ctx->pc = 0x1d4c60u;

    // 0x1d4c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d4c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d4c64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d4c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d4c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d4c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d4c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4c70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d4c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c74: 0xc075328  jal         func_1D4CA0
    ctx->pc = 0x1D4C74u;
    SET_GPR_U32(ctx, 31, 0x1D4C7Cu);
    ctx->pc = 0x1D4C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C74u;
            // 0x1d4c78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4CA0u;
    if (runtime->hasFunction(0x1D4CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C7Cu; }
        if (ctx->pc != 0x1D4C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4CA0_0x1d4ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C7Cu; }
        if (ctx->pc != 0x1D4C7Cu) { return; }
    }
    ctx->pc = 0x1D4C7Cu;
label_1d4c7c:
    // 0x1d4c7c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1d4c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1d4c80: 0xc04cc44  jal         func_133110
    ctx->pc = 0x1D4C80u;
    SET_GPR_U32(ctx, 31, 0x1D4C88u);
    ctx->pc = 0x1D4C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C80u;
            // 0x1d4c84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C88u; }
        if (ctx->pc != 0x1D4C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C88u; }
        if (ctx->pc != 0x1D4C88u) { return; }
    }
    ctx->pc = 0x1D4C88u;
label_1d4c88:
    // 0x1d4c88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d4c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4c8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d4c8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4c90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4c94: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C94u;
            // 0x1d4c98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4C9Cu;
    // 0x1d4c9c: 0x0  nop
    ctx->pc = 0x1d4c9cu;
    // NOP
}
