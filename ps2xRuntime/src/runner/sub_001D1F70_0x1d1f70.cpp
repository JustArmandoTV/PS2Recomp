#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1F70
// Address: 0x1d1f70 - 0x1d1fa0
void sub_001D1F70_0x1d1f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1F70_0x1d1f70");
#endif

    switch (ctx->pc) {
        case 0x1d1f80u: goto label_1d1f80;
        case 0x1d1f88u: goto label_1d1f88;
        default: break;
    }

    ctx->pc = 0x1d1f70u;

    // 0x1d1f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1f78: 0xc054c3c  jal         func_1530F0
    ctx->pc = 0x1D1F78u;
    SET_GPR_U32(ctx, 31, 0x1D1F80u);
    ctx->pc = 0x1D1F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F78u;
            // 0x1d1f7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F80u; }
        if (ctx->pc != 0x1D1F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F80u; }
        if (ctx->pc != 0x1D1F80u) { return; }
    }
    ctx->pc = 0x1D1F80u;
label_1d1f80:
    // 0x1d1f80: 0xc054c40  jal         func_153100
    ctx->pc = 0x1D1F80u;
    SET_GPR_U32(ctx, 31, 0x1D1F88u);
    ctx->pc = 0x1D1F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F80u;
            // 0x1d1f84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F88u; }
        if (ctx->pc != 0x1D1F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F88u; }
        if (ctx->pc != 0x1D1F88u) { return; }
    }
    ctx->pc = 0x1D1F88u;
label_1d1f88:
    // 0x1d1f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1f8c: 0x3c020280  lui         $v0, 0x280
    ctx->pc = 0x1d1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)640 << 16));
    // 0x1d1f90: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1d1f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1d1f94: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F94u;
            // 0x1d1f98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1F9Cu;
    // 0x1d1f9c: 0x0  nop
    ctx->pc = 0x1d1f9cu;
    // NOP
}
