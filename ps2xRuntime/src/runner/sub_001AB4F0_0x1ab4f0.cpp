#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB4F0
// Address: 0x1ab4f0 - 0x1ab508
void sub_001AB4F0_0x1ab4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB4F0_0x1ab4f0");
#endif

    ctx->pc = 0x1ab4f0u;

    // 0x1ab4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab4f8: 0x8c85203c  lw          $a1, 0x203C($a0)
    ctx->pc = 0x1ab4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8252)));
    // 0x1ab4fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab500: 0x8069962  j           func_1A6588
    ctx->pc = 0x1AB500u;
    ctx->pc = 0x1AB504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB500u;
            // 0x1ab504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6588u;
    if (runtime->hasFunction(0x1A6588u)) {
        auto targetFn = runtime->lookupFunction(0x1A6588u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A6588_0x1a6588(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AB508u;
}
