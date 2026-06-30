#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1F40
// Address: 0x1d1f40 - 0x1d1f70
void sub_001D1F40_0x1d1f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1F40_0x1d1f40");
#endif

    switch (ctx->pc) {
        case 0x1d1f58u: goto label_1d1f58;
        case 0x1d1f60u: goto label_1d1f60;
        default: break;
    }

    ctx->pc = 0x1d1f40u;

    // 0x1d1f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1f44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d1f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d1f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1f4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d1f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d1f50: 0xc054c3c  jal         func_1530F0
    ctx->pc = 0x1D1F50u;
    SET_GPR_U32(ctx, 31, 0x1D1F58u);
    ctx->pc = 0x1D1F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F50u;
            // 0x1d1f54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F58u; }
        if (ctx->pc != 0x1D1F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F58u; }
        if (ctx->pc != 0x1D1F58u) { return; }
    }
    ctx->pc = 0x1D1F58u;
label_1d1f58:
    // 0x1d1f58: 0xc054c40  jal         func_153100
    ctx->pc = 0x1D1F58u;
    SET_GPR_U32(ctx, 31, 0x1D1F60u);
    ctx->pc = 0x1D1F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F58u;
            // 0x1d1f5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F60u; }
        if (ctx->pc != 0x1D1F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1F60u; }
        if (ctx->pc != 0x1D1F60u) { return; }
    }
    ctx->pc = 0x1D1F60u;
label_1d1f60:
    // 0x1d1f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1f64: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1F64u;
            // 0x1d1f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1F6Cu;
    // 0x1d1f6c: 0x0  nop
    ctx->pc = 0x1d1f6cu;
    // NOP
}
