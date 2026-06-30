#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BE30
// Address: 0x33be30 - 0x33be40
void sub_0033BE30_0x33be30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BE30_0x33be30");
#endif

    ctx->pc = 0x33be30u;

    // 0x33be30: 0x8075ee8  j           func_1D7BA0
    ctx->pc = 0x33BE30u;
    ctx->pc = 0x33BE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BE30u;
            // 0x33be34: 0xa08511a4  sb          $a1, 0x11A4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4516), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7BA0u;
    if (runtime->hasFunction(0x1D7BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7BA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001D7BA0_0x1d7ba0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x33BE38u;
    // 0x33be38: 0x0  nop
    ctx->pc = 0x33be38u;
    // NOP
    // 0x33be3c: 0x0  nop
    ctx->pc = 0x33be3cu;
    // NOP
}
