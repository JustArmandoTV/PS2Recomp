#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C8F0
// Address: 0x15c8f0 - 0x15c900
void sub_0015C8F0_0x15c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C8F0_0x15c8f0");
#endif

    ctx->pc = 0x15c8f0u;

    // 0x15c8f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15c8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c8f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15c8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15c8f8: 0x80573a8  j           func_15CEA0
    ctx->pc = 0x15C8F8u;
    ctx->pc = 0x15C8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C8F8u;
            // 0x15c8fc: 0x240401f4  addiu       $a0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CEA0u;
    {
        auto targetFn = runtime->lookupFunction(0x15CEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15C900u;
}
