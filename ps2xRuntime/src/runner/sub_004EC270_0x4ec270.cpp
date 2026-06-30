#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EC270
// Address: 0x4ec270 - 0x4ec280
void sub_004EC270_0x4ec270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC270_0x4ec270");
#endif

    ctx->pc = 0x4ec270u;

    // 0x4ec270: 0x813b030  j           func_4EC0C0
    ctx->pc = 0x4EC270u;
    ctx->pc = 0x4EC0C0u;
    if (runtime->hasFunction(0x4EC0C0u)) {
        auto targetFn = runtime->lookupFunction(0x4EC0C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004EC0C0_0x4ec0c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4EC278u;
    // 0x4ec278: 0x0  nop
    ctx->pc = 0x4ec278u;
    // NOP
    // 0x4ec27c: 0x0  nop
    ctx->pc = 0x4ec27cu;
    // NOP
}
