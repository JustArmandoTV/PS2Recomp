#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015AC30
// Address: 0x15ac30 - 0x15ac40
void sub_0015AC30_0x15ac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AC30_0x15ac30");
#endif

    ctx->pc = 0x15ac30u;

    // 0x15ac30: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15ac30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac34: 0x8056dbc  j           func_15B6F0
    ctx->pc = 0x15AC34u;
    ctx->pc = 0x15AC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC34u;
            // 0x15ac38: 0x8f848418  lw          $a0, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B6F0u;
    {
        auto targetFn = runtime->lookupFunction(0x15B6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15AC3Cu;
    // 0x15ac3c: 0x0  nop
    ctx->pc = 0x15ac3cu;
    // NOP
}
