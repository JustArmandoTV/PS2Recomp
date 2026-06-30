#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00108BC0
// Address: 0x108bc0 - 0x108bc8
void sub_00108BC0_0x108bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108BC0_0x108bc0");
#endif

    ctx->pc = 0x108bc0u;

    // 0x108bc0: 0x8041a70  j           func_1069C0
    ctx->pc = 0x108BC0u;
    ctx->pc = 0x1069C0u;
    {
        auto targetFn = runtime->lookupFunction(0x1069C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x108BC8u;
}
