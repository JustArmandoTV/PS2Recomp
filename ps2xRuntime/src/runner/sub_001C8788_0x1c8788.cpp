#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8788
// Address: 0x1c8788 - 0x1c87a0
void sub_001C8788_0x1c8788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8788_0x1c8788");
#endif

    ctx->pc = 0x1c8788u;

    // 0x1c8788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c878c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c878cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8794: 0x8072174  j           func_1C85D0
    ctx->pc = 0x1C8794u;
    ctx->pc = 0x1C8798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8794u;
            // 0x1c8798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C85D0u;
    if (runtime->hasFunction(0x1C85D0u)) {
        auto targetFn = runtime->lookupFunction(0x1C85D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C85D0_0x1c85d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C879Cu;
    // 0x1c879c: 0x0  nop
    ctx->pc = 0x1c879cu;
    // NOP
}
