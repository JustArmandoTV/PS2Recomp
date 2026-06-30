#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481300
// Address: 0x481300 - 0x481320
void sub_00481300_0x481300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481300_0x481300");
#endif

    ctx->pc = 0x481300u;

    // 0x481300: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x481300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x481304: 0x24840054  addiu       $a0, $a0, 0x54
    ctx->pc = 0x481304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x481308: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x481308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x48130c: 0x80b90e0  j           func_2E4380
    ctx->pc = 0x48130Cu;
    ctx->pc = 0x481310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48130Cu;
            // 0x481310: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002E4380_0x2e4380(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x481314u;
    // 0x481314: 0x0  nop
    ctx->pc = 0x481314u;
    // NOP
    // 0x481318: 0x0  nop
    ctx->pc = 0x481318u;
    // NOP
    // 0x48131c: 0x0  nop
    ctx->pc = 0x48131cu;
    // NOP
}
