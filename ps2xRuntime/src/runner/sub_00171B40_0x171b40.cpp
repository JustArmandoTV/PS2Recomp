#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171B40
// Address: 0x171b40 - 0x171b80
void sub_00171B40_0x171b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171B40_0x171b40");
#endif

    switch (ctx->pc) {
        case 0x171b5cu: goto label_171b5c;
        case 0x171b64u: goto label_171b64;
        case 0x171b6cu: goto label_171b6c;
        default: break;
    }

    ctx->pc = 0x171b40u;

    // 0x171b40: 0x3e00008  jr          $ra
    ctx->pc = 0x171B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171B40u;
            // 0x171b44: 0xdc820010  ld          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171B48u;
    // 0x171b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171b4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171b50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x171b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x171b54: 0xc05c846  jal         func_172118
    ctx->pc = 0x171B54u;
    SET_GPR_U32(ctx, 31, 0x171B5Cu);
    ctx->pc = 0x171B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B54u;
            // 0x171b58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B5Cu; }
        if (ctx->pc != 0x171B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B5Cu; }
        if (ctx->pc != 0x171B5Cu) { return; }
    }
    ctx->pc = 0x171B5Cu;
label_171b5c:
    // 0x171b5c: 0xc05c6e0  jal         func_171B80
    ctx->pc = 0x171B5Cu;
    SET_GPR_U32(ctx, 31, 0x171B64u);
    ctx->pc = 0x171B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B5Cu;
            // 0x171b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B80u;
    if (runtime->hasFunction(0x171B80u)) {
        auto targetFn = runtime->lookupFunction(0x171B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B64u; }
        if (ctx->pc != 0x171B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B80_0x171b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B64u; }
        if (ctx->pc != 0x171B64u) { return; }
    }
    ctx->pc = 0x171B64u;
label_171b64:
    // 0x171b64: 0xc05c84c  jal         func_172130
    ctx->pc = 0x171B64u;
    SET_GPR_U32(ctx, 31, 0x171B6Cu);
    ctx->pc = 0x171B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B64u;
            // 0x171b68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B6Cu; }
        if (ctx->pc != 0x171B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B6Cu; }
        if (ctx->pc != 0x171B6Cu) { return; }
    }
    ctx->pc = 0x171B6Cu;
label_171b6c:
    // 0x171b6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x171b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171b70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171b78: 0x3e00008  jr          $ra
    ctx->pc = 0x171B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171B78u;
            // 0x171b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171B80u;
}
