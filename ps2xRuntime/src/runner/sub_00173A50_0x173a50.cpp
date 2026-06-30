#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173A50
// Address: 0x173a50 - 0x173a88
void sub_00173A50_0x173a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173A50_0x173a50");
#endif

    switch (ctx->pc) {
        case 0x173a64u: goto label_173a64;
        case 0x173a6cu: goto label_173a6c;
        case 0x173a74u: goto label_173a74;
        default: break;
    }

    ctx->pc = 0x173a50u;

    // 0x173a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173a54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173a58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x173a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x173a5c: 0xc0599de  jal         func_166778
    ctx->pc = 0x173A5Cu;
    SET_GPR_U32(ctx, 31, 0x173A64u);
    ctx->pc = 0x173A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173A5Cu;
            // 0x173a60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A64u; }
        if (ctx->pc != 0x173A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A64u; }
        if (ctx->pc != 0x173A64u) { return; }
    }
    ctx->pc = 0x173A64u;
label_173a64:
    // 0x173a64: 0xc05cea2  jal         func_173A88
    ctx->pc = 0x173A64u;
    SET_GPR_U32(ctx, 31, 0x173A6Cu);
    ctx->pc = 0x173A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173A64u;
            // 0x173a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173A88u;
    if (runtime->hasFunction(0x173A88u)) {
        auto targetFn = runtime->lookupFunction(0x173A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A6Cu; }
        if (ctx->pc != 0x173A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173A88_0x173a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A6Cu; }
        if (ctx->pc != 0x173A6Cu) { return; }
    }
    ctx->pc = 0x173A6Cu;
label_173a6c:
    // 0x173a6c: 0xc0599e0  jal         func_166780
    ctx->pc = 0x173A6Cu;
    SET_GPR_U32(ctx, 31, 0x173A74u);
    ctx->pc = 0x173A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173A6Cu;
            // 0x173a70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A74u; }
        if (ctx->pc != 0x173A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A74u; }
        if (ctx->pc != 0x173A74u) { return; }
    }
    ctx->pc = 0x173A74u;
label_173a74:
    // 0x173a74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x173a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173a78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x173a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173a80: 0x3e00008  jr          $ra
    ctx->pc = 0x173A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173A80u;
            // 0x173a84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173A88u;
}
