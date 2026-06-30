#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001862E8
// Address: 0x1862e8 - 0x186318
void sub_001862E8_0x1862e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001862E8_0x1862e8");
#endif

    switch (ctx->pc) {
        case 0x1862f8u: goto label_1862f8;
        case 0x186300u: goto label_186300;
        case 0x186308u: goto label_186308;
        default: break;
    }

    ctx->pc = 0x1862e8u;

    // 0x1862e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1862e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1862ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1862ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1862f0: 0xc061262  jal         func_184988
    ctx->pc = 0x1862F0u;
    SET_GPR_U32(ctx, 31, 0x1862F8u);
    ctx->pc = 0x184988u;
    if (runtime->hasFunction(0x184988u)) {
        auto targetFn = runtime->lookupFunction(0x184988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862F8u; }
        if (ctx->pc != 0x1862F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184988_0x184988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1862F8u; }
        if (ctx->pc != 0x1862F8u) { return; }
    }
    ctx->pc = 0x1862F8u;
label_1862f8:
    // 0x1862f8: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x1862F8u;
    SET_GPR_U32(ctx, 31, 0x186300u);
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186300u; }
        if (ctx->pc != 0x186300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186300u; }
        if (ctx->pc != 0x186300u) { return; }
    }
    ctx->pc = 0x186300u;
label_186300:
    // 0x186300: 0xc0618c6  jal         func_186318
    ctx->pc = 0x186300u;
    SET_GPR_U32(ctx, 31, 0x186308u);
    ctx->pc = 0x186318u;
    if (runtime->hasFunction(0x186318u)) {
        auto targetFn = runtime->lookupFunction(0x186318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186308u; }
        if (ctx->pc != 0x186308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186318_0x186318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186308u; }
        if (ctx->pc != 0x186308u) { return; }
    }
    ctx->pc = 0x186308u;
label_186308:
    // 0x186308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18630c: 0x8061282  j           func_184A08
    ctx->pc = 0x18630Cu;
    ctx->pc = 0x186310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18630Cu;
            // 0x186310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x186314u;
    // 0x186314: 0x0  nop
    ctx->pc = 0x186314u;
    // NOP
}
