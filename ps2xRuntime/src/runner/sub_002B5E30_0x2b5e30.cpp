#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B5E30
// Address: 0x2b5e30 - 0x2b5e40
void sub_002B5E30_0x2b5e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5E30_0x2b5e30");
#endif

    ctx->pc = 0x2b5e30u;

    // 0x2b5e30: 0x80b464c  j           func_2D1930
    ctx->pc = 0x2B5E30u;
    ctx->pc = 0x2D1930u;
    {
        auto targetFn = runtime->lookupFunction(0x2D1930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2B5E38u;
    // 0x2b5e38: 0x0  nop
    ctx->pc = 0x2b5e38u;
    // NOP
    // 0x2b5e3c: 0x0  nop
    ctx->pc = 0x2b5e3cu;
    // NOP
}
