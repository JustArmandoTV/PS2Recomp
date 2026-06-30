#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00422380
// Address: 0x422380 - 0x422390
void sub_00422380_0x422380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422380_0x422380");
#endif

    ctx->pc = 0x422380u;

    // 0x422380: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x422380u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x422388u;
    // 0x422388: 0x0  nop
    ctx->pc = 0x422388u;
    // NOP
    // 0x42238c: 0x0  nop
    ctx->pc = 0x42238cu;
    // NOP
}
