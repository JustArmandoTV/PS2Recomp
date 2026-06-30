#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC830
// Address: 0x1ac830 - 0x1ac848
void sub_001AC830_0x1ac830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC830_0x1ac830");
#endif

    ctx->pc = 0x1ac830u;

    // 0x1ac830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac838: 0x8c852038  lw          $a1, 0x2038($a0)
    ctx->pc = 0x1ac838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8248)));
    // 0x1ac83c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac840: 0x8069962  j           func_1A6588
    ctx->pc = 0x1AC840u;
    ctx->pc = 0x1AC844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC840u;
            // 0x1ac844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6588u;
    if (runtime->hasFunction(0x1A6588u)) {
        auto targetFn = runtime->lookupFunction(0x1A6588u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A6588_0x1a6588(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AC848u;
}
