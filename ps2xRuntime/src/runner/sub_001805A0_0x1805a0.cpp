#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001805A0
// Address: 0x1805a0 - 0x1805c8
void sub_001805A0_0x1805a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001805A0_0x1805a0");
#endif

    switch (ctx->pc) {
        case 0x1805b0u: goto label_1805b0;
        case 0x1805b8u: goto label_1805b8;
        default: break;
    }

    ctx->pc = 0x1805a0u;

    // 0x1805a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1805a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1805a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1805a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1805a8: 0xc06031a  jal         func_180C68
    ctx->pc = 0x1805A8u;
    SET_GPR_U32(ctx, 31, 0x1805B0u);
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805B0u; }
        if (ctx->pc != 0x1805B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805B0u; }
        if (ctx->pc != 0x1805B0u) { return; }
    }
    ctx->pc = 0x1805B0u;
label_1805b0:
    // 0x1805b0: 0xc060172  jal         func_1805C8
    ctx->pc = 0x1805B0u;
    SET_GPR_U32(ctx, 31, 0x1805B8u);
    ctx->pc = 0x1805C8u;
    if (runtime->hasFunction(0x1805C8u)) {
        auto targetFn = runtime->lookupFunction(0x1805C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805B8u; }
        if (ctx->pc != 0x1805B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001805C8_0x1805c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805B8u; }
        if (ctx->pc != 0x1805B8u) { return; }
    }
    ctx->pc = 0x1805B8u;
label_1805b8:
    // 0x1805b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1805b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1805bc: 0x806031c  j           func_180C70
    ctx->pc = 0x1805BCu;
    ctx->pc = 0x1805C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1805BCu;
            // 0x1805c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180C70_0x180c70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1805C4u;
    // 0x1805c4: 0x0  nop
    ctx->pc = 0x1805c4u;
    // NOP
}
