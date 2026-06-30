#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172DD8
// Address: 0x172dd8 - 0x172e00
void sub_00172DD8_0x172dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172DD8_0x172dd8");
#endif

    switch (ctx->pc) {
        case 0x172de8u: goto label_172de8;
        case 0x172df0u: goto label_172df0;
        default: break;
    }

    ctx->pc = 0x172dd8u;

    // 0x172dd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172de0: 0xc0599de  jal         func_166778
    ctx->pc = 0x172DE0u;
    SET_GPR_U32(ctx, 31, 0x172DE8u);
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DE8u; }
        if (ctx->pc != 0x172DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DE8u; }
        if (ctx->pc != 0x172DE8u) { return; }
    }
    ctx->pc = 0x172DE8u;
label_172de8:
    // 0x172de8: 0xc05cb80  jal         func_172E00
    ctx->pc = 0x172DE8u;
    SET_GPR_U32(ctx, 31, 0x172DF0u);
    ctx->pc = 0x172E00u;
    if (runtime->hasFunction(0x172E00u)) {
        auto targetFn = runtime->lookupFunction(0x172E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DF0u; }
        if (ctx->pc != 0x172DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172E00_0x172e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DF0u; }
        if (ctx->pc != 0x172DF0u) { return; }
    }
    ctx->pc = 0x172DF0u;
label_172df0:
    // 0x172df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172df4: 0x80599e0  j           func_166780
    ctx->pc = 0x172DF4u;
    ctx->pc = 0x172DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172DF4u;
            // 0x172df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x172DFCu;
    // 0x172dfc: 0x0  nop
    ctx->pc = 0x172dfcu;
    // NOP
}
