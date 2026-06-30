#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171E48
// Address: 0x171e48 - 0x171e88
void sub_00171E48_0x171e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171E48_0x171e48");
#endif

    switch (ctx->pc) {
        case 0x171e64u: goto label_171e64;
        case 0x171e70u: goto label_171e70;
        default: break;
    }

    ctx->pc = 0x171e48u;

    // 0x171e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171e50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171e54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171e58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171e5c: 0xc05c846  jal         func_172118
    ctx->pc = 0x171E5Cu;
    SET_GPR_U32(ctx, 31, 0x171E64u);
    ctx->pc = 0x171E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171E5Cu;
            // 0x171e60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E64u; }
        if (ctx->pc != 0x171E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E64u; }
        if (ctx->pc != 0x171E64u) { return; }
    }
    ctx->pc = 0x171E64u;
label_171e64:
    // 0x171e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171e68: 0xc05c7a2  jal         func_171E88
    ctx->pc = 0x171E68u;
    SET_GPR_U32(ctx, 31, 0x171E70u);
    ctx->pc = 0x171E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171E68u;
            // 0x171e6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171E88u;
    if (runtime->hasFunction(0x171E88u)) {
        auto targetFn = runtime->lookupFunction(0x171E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E70u; }
        if (ctx->pc != 0x171E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171E88_0x171e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E70u; }
        if (ctx->pc != 0x171E70u) { return; }
    }
    ctx->pc = 0x171E70u;
label_171e70:
    // 0x171e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171e74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171e78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171e7c: 0x805c84c  j           func_172130
    ctx->pc = 0x171E7Cu;
    ctx->pc = 0x171E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171E7Cu;
            // 0x171e80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00172130_0x172130(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x171E84u;
    // 0x171e84: 0x0  nop
    ctx->pc = 0x171e84u;
    // NOP
}
