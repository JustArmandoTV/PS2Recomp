#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184AA0
// Address: 0x184aa0 - 0x184ad0
void sub_00184AA0_0x184aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184AA0_0x184aa0");
#endif

    switch (ctx->pc) {
        case 0x184ab0u: goto label_184ab0;
        case 0x184ab8u: goto label_184ab8;
        case 0x184ac0u: goto label_184ac0;
        default: break;
    }

    ctx->pc = 0x184aa0u;

    // 0x184aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x184aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x184aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184aa8: 0xc061262  jal         func_184988
    ctx->pc = 0x184AA8u;
    SET_GPR_U32(ctx, 31, 0x184AB0u);
    ctx->pc = 0x184988u;
    if (runtime->hasFunction(0x184988u)) {
        auto targetFn = runtime->lookupFunction(0x184988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AB0u; }
        if (ctx->pc != 0x184AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184988_0x184988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AB0u; }
        if (ctx->pc != 0x184AB0u) { return; }
    }
    ctx->pc = 0x184AB0u;
label_184ab0:
    // 0x184ab0: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x184AB0u;
    SET_GPR_U32(ctx, 31, 0x184AB8u);
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AB8u; }
        if (ctx->pc != 0x184AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AB8u; }
        if (ctx->pc != 0x184AB8u) { return; }
    }
    ctx->pc = 0x184AB8u;
label_184ab8:
    // 0x184ab8: 0xc0612b4  jal         func_184AD0
    ctx->pc = 0x184AB8u;
    SET_GPR_U32(ctx, 31, 0x184AC0u);
    ctx->pc = 0x184AD0u;
    if (runtime->hasFunction(0x184AD0u)) {
        auto targetFn = runtime->lookupFunction(0x184AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AC0u; }
        if (ctx->pc != 0x184AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184AD0_0x184ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AC0u; }
        if (ctx->pc != 0x184AC0u) { return; }
    }
    ctx->pc = 0x184AC0u;
label_184ac0:
    // 0x184ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184ac4: 0x8061282  j           func_184A08
    ctx->pc = 0x184AC4u;
    ctx->pc = 0x184AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184AC4u;
            // 0x184ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x184ACCu;
    // 0x184acc: 0x0  nop
    ctx->pc = 0x184accu;
    // NOP
}
