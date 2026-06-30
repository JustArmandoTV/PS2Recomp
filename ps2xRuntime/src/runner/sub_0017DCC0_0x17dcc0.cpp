#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017DCC0
// Address: 0x17dcc0 - 0x17dce8
void sub_0017DCC0_0x17dcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DCC0_0x17dcc0");
#endif

    ctx->pc = 0x17dcc0u;

    // 0x17dcc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17dcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17dcc4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x17dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x17dcc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17dcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17dccc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17dcccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dcd0: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x17dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x17dcd4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x17dcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17dcd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17dcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dcdc: 0x804a576  j           func_1295D8
    ctx->pc = 0x17DCDCu;
    ctx->pc = 0x17DCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DCDCu;
            // 0x17dce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17DCE4u;
    // 0x17dce4: 0x0  nop
    ctx->pc = 0x17dce4u;
    // NOP
}
