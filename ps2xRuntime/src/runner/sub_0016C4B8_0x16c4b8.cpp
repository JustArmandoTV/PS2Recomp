#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016C4B8
// Address: 0x16c4b8 - 0x16c4e0
void sub_0016C4B8_0x16c4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C4B8_0x16c4b8");
#endif

    switch (ctx->pc) {
        case 0x16c4c8u: goto label_16c4c8;
        case 0x16c4d0u: goto label_16c4d0;
        default: break;
    }

    ctx->pc = 0x16c4b8u;

    // 0x16c4b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c4bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c4c0: 0xc0599de  jal         func_166778
    ctx->pc = 0x16C4C0u;
    SET_GPR_U32(ctx, 31, 0x16C4C8u);
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4C8u; }
        if (ctx->pc != 0x16C4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4C8u; }
        if (ctx->pc != 0x16C4C8u) { return; }
    }
    ctx->pc = 0x16C4C8u;
label_16c4c8:
    // 0x16c4c8: 0xc05b138  jal         func_16C4E0
    ctx->pc = 0x16C4C8u;
    SET_GPR_U32(ctx, 31, 0x16C4D0u);
    ctx->pc = 0x16C4E0u;
    if (runtime->hasFunction(0x16C4E0u)) {
        auto targetFn = runtime->lookupFunction(0x16C4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4D0u; }
        if (ctx->pc != 0x16C4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C4E0_0x16c4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4D0u; }
        if (ctx->pc != 0x16C4D0u) { return; }
    }
    ctx->pc = 0x16C4D0u;
label_16c4d0:
    // 0x16c4d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c4d4: 0x80599e0  j           func_166780
    ctx->pc = 0x16C4D4u;
    ctx->pc = 0x16C4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C4D4u;
            // 0x16c4d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C4DCu;
    // 0x16c4dc: 0x0  nop
    ctx->pc = 0x16c4dcu;
    // NOP
}
