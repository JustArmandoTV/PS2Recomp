#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174AA8
// Address: 0x174aa8 - 0x174ad0
void sub_00174AA8_0x174aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174AA8_0x174aa8");
#endif

    switch (ctx->pc) {
        case 0x174ab8u: goto label_174ab8;
        case 0x174ac0u: goto label_174ac0;
        default: break;
    }

    ctx->pc = 0x174aa8u;

    // 0x174aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174aac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174ab0: 0xc0599de  jal         func_166778
    ctx->pc = 0x174AB0u;
    SET_GPR_U32(ctx, 31, 0x174AB8u);
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AB8u; }
        if (ctx->pc != 0x174AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AB8u; }
        if (ctx->pc != 0x174AB8u) { return; }
    }
    ctx->pc = 0x174AB8u;
label_174ab8:
    // 0x174ab8: 0xc05d2b4  jal         func_174AD0
    ctx->pc = 0x174AB8u;
    SET_GPR_U32(ctx, 31, 0x174AC0u);
    ctx->pc = 0x174AD0u;
    if (runtime->hasFunction(0x174AD0u)) {
        auto targetFn = runtime->lookupFunction(0x174AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AC0u; }
        if (ctx->pc != 0x174AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174AD0_0x174ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174AC0u; }
        if (ctx->pc != 0x174AC0u) { return; }
    }
    ctx->pc = 0x174AC0u;
label_174ac0:
    // 0x174ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174ac4: 0x80599e0  j           func_166780
    ctx->pc = 0x174AC4u;
    ctx->pc = 0x174AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174AC4u;
            // 0x174ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x174ACCu;
    // 0x174acc: 0x0  nop
    ctx->pc = 0x174accu;
    // NOP
}
