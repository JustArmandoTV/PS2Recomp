#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001854B8
// Address: 0x1854b8 - 0x1854e8
void sub_001854B8_0x1854b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001854B8_0x1854b8");
#endif

    switch (ctx->pc) {
        case 0x1854c8u: goto label_1854c8;
        case 0x1854d0u: goto label_1854d0;
        case 0x1854d8u: goto label_1854d8;
        default: break;
    }

    ctx->pc = 0x1854b8u;

    // 0x1854b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1854b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1854bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1854bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1854c0: 0xc061262  jal         func_184988
    ctx->pc = 0x1854C0u;
    SET_GPR_U32(ctx, 31, 0x1854C8u);
    ctx->pc = 0x184988u;
    if (runtime->hasFunction(0x184988u)) {
        auto targetFn = runtime->lookupFunction(0x184988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1854C8u; }
        if (ctx->pc != 0x1854C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184988_0x184988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1854C8u; }
        if (ctx->pc != 0x1854C8u) { return; }
    }
    ctx->pc = 0x1854C8u;
label_1854c8:
    // 0x1854c8: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x1854C8u;
    SET_GPR_U32(ctx, 31, 0x1854D0u);
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1854D0u; }
        if (ctx->pc != 0x1854D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1854D0u; }
        if (ctx->pc != 0x1854D0u) { return; }
    }
    ctx->pc = 0x1854D0u;
label_1854d0:
    // 0x1854d0: 0xc06153a  jal         func_1854E8
    ctx->pc = 0x1854D0u;
    SET_GPR_U32(ctx, 31, 0x1854D8u);
    ctx->pc = 0x1854E8u;
    if (runtime->hasFunction(0x1854E8u)) {
        auto targetFn = runtime->lookupFunction(0x1854E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1854D8u; }
        if (ctx->pc != 0x1854D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001854E8_0x1854e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1854D8u; }
        if (ctx->pc != 0x1854D8u) { return; }
    }
    ctx->pc = 0x1854D8u;
label_1854d8:
    // 0x1854d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1854d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1854dc: 0x8061282  j           func_184A08
    ctx->pc = 0x1854DCu;
    ctx->pc = 0x1854E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1854DCu;
            // 0x1854e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1854E4u;
    // 0x1854e4: 0x0  nop
    ctx->pc = 0x1854e4u;
    // NOP
}
