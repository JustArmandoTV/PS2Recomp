#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A88F8
// Address: 0x1a88f8 - 0x1a8910
void sub_001A88F8_0x1a88f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A88F8_0x1a88f8");
#endif

    ctx->pc = 0x1a88f8u;

    // 0x1a88f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a88f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a88fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a88fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8904: 0x806152e  j           func_1854B8
    ctx->pc = 0x1A8904u;
    ctx->pc = 0x1A8908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8904u;
            // 0x1a8908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1854B8u;
    if (runtime->hasFunction(0x1854B8u)) {
        auto targetFn = runtime->lookupFunction(0x1854B8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001854B8_0x1854b8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A890Cu;
    // 0x1a890c: 0x0  nop
    ctx->pc = 0x1a890cu;
    // NOP
}
