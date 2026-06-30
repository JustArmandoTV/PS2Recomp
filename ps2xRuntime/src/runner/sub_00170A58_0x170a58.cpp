#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170A58
// Address: 0x170a58 - 0x170a88
void sub_00170A58_0x170a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170A58_0x170a58");
#endif

    switch (ctx->pc) {
        case 0x170a6cu: goto label_170a6c;
        case 0x170a74u: goto label_170a74;
        default: break;
    }

    ctx->pc = 0x170a58u;

    // 0x170a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170a5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170a60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x170a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170a64: 0xc05c846  jal         func_172118
    ctx->pc = 0x170A64u;
    SET_GPR_U32(ctx, 31, 0x170A6Cu);
    ctx->pc = 0x170A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A64u;
            // 0x170a68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A6Cu; }
        if (ctx->pc != 0x170A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A6Cu; }
        if (ctx->pc != 0x170A6Cu) { return; }
    }
    ctx->pc = 0x170A6Cu;
label_170a6c:
    // 0x170a6c: 0xc05c2a2  jal         func_170A88
    ctx->pc = 0x170A6Cu;
    SET_GPR_U32(ctx, 31, 0x170A74u);
    ctx->pc = 0x170A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A6Cu;
            // 0x170a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A88u;
    if (runtime->hasFunction(0x170A88u)) {
        auto targetFn = runtime->lookupFunction(0x170A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A74u; }
        if (ctx->pc != 0x170A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A88_0x170a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A74u; }
        if (ctx->pc != 0x170A74u) { return; }
    }
    ctx->pc = 0x170A74u;
label_170a74:
    // 0x170a74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170a78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x170a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170a7c: 0x805c84c  j           func_172130
    ctx->pc = 0x170A7Cu;
    ctx->pc = 0x170A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170A7Cu;
            // 0x170a80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00172130_0x172130(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x170A84u;
    // 0x170a84: 0x0  nop
    ctx->pc = 0x170a84u;
    // NOP
}
