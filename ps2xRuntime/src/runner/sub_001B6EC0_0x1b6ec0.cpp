#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6EC0
// Address: 0x1b6ec0 - 0x1b6ed8
void sub_001B6EC0_0x1b6ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6EC0_0x1b6ec0");
#endif

    ctx->pc = 0x1b6ec0u;

    // 0x1b6ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6ecc: 0x806dbb6  j           func_1B6ED8
    ctx->pc = 0x1B6ECCu;
    ctx->pc = 0x1B6ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6ECCu;
            // 0x1b6ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6ED8u;
    if (runtime->hasFunction(0x1B6ED8u)) {
        auto targetFn = runtime->lookupFunction(0x1B6ED8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B6ED8_0x1b6ed8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B6ED4u;
    // 0x1b6ed4: 0x0  nop
    ctx->pc = 0x1b6ed4u;
    // NOP
}
