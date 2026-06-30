#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8680
// Address: 0x1a8680 - 0x1a8698
void sub_001A8680_0x1a8680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8680_0x1a8680");
#endif

    ctx->pc = 0x1a8680u;

    // 0x1a8680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a868c: 0x806a1a6  j           func_1A8698
    ctx->pc = 0x1A868Cu;
    ctx->pc = 0x1A8690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A868Cu;
            // 0x1a8690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8698u;
    if (runtime->hasFunction(0x1A8698u)) {
        auto targetFn = runtime->lookupFunction(0x1A8698u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A8698_0x1a8698(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A8694u;
    // 0x1a8694: 0x0  nop
    ctx->pc = 0x1a8694u;
    // NOP
}
