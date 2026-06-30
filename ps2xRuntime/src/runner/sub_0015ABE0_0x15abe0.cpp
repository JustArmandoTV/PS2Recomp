#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015ABE0
// Address: 0x15abe0 - 0x15abf0
void sub_0015ABE0_0x15abe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ABE0_0x15abe0");
#endif

    ctx->pc = 0x15abe0u;

    // 0x15abe0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15abe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15abe4: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x15abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x15abe8: 0x8056c1c  j           func_15B070
    ctx->pc = 0x15ABE8u;
    ctx->pc = 0x15ABECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ABE8u;
            // 0x15abec: 0xaf858430  sw          $a1, -0x7BD0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935600), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B070u;
    {
        auto targetFn = runtime->lookupFunction(0x15B070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15ABF0u;
}
