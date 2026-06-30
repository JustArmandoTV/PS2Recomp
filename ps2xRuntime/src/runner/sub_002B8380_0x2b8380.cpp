#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B8380
// Address: 0x2b8380 - 0x2b8390
void sub_002B8380_0x2b8380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8380_0x2b8380");
#endif

    ctx->pc = 0x2b8380u;

    // 0x2b8380: 0x80b4588  j           func_2D1620
    ctx->pc = 0x2B8380u;
    ctx->pc = 0x2D1620u;
    if (runtime->hasFunction(0x2D1620u)) {
        auto targetFn = runtime->lookupFunction(0x2D1620u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002D1620_0x2d1620(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2B8388u;
    // 0x2b8388: 0x0  nop
    ctx->pc = 0x2b8388u;
    // NOP
    // 0x2b838c: 0x0  nop
    ctx->pc = 0x2b838cu;
    // NOP
}
