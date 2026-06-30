#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047CA40
// Address: 0x47ca40 - 0x47ca50
void sub_0047CA40_0x47ca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047CA40_0x47ca40");
#endif

    ctx->pc = 0x47ca40u;

    // 0x47ca40: 0x811f370  j           func_47CDC0
    ctx->pc = 0x47CA40u;
    ctx->pc = 0x47CA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CA40u;
            // 0x47ca44: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47CDC0u;
    if (runtime->hasFunction(0x47CDC0u)) {
        auto targetFn = runtime->lookupFunction(0x47CDC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0047CDC0_0x47cdc0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x47CA48u;
    // 0x47ca48: 0x0  nop
    ctx->pc = 0x47ca48u;
    // NOP
    // 0x47ca4c: 0x0  nop
    ctx->pc = 0x47ca4cu;
    // NOP
}
