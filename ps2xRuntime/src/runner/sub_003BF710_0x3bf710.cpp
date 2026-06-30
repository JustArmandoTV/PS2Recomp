#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF710
// Address: 0x3bf710 - 0x3bf730
void sub_003BF710_0x3bf710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF710_0x3bf710");
#endif

    switch (ctx->pc) {
        case 0x3bf720u: goto label_3bf720;
        default: break;
    }

    ctx->pc = 0x3bf710u;

    // 0x3bf710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3bf710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3bf714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bf714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3bf718: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x3BF718u;
    SET_GPR_U32(ctx, 31, 0x3BF720u);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF720u; }
        if (ctx->pc != 0x3BF720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF720u; }
        if (ctx->pc != 0x3BF720u) { return; }
    }
    ctx->pc = 0x3BF720u;
label_3bf720:
    // 0x3bf720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bf720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf724: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x3bf724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3bf728: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF728u;
            // 0x3bf72c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF730u;
}
