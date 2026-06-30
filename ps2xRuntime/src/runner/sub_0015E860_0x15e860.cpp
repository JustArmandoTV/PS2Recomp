#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015E860
// Address: 0x15e860 - 0x15e870
void sub_0015E860_0x15e860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E860_0x15e860");
#endif

    ctx->pc = 0x15e860u;

    // 0x15e860: 0x805823c  j           func_1608F0
    ctx->pc = 0x15E860u;
    ctx->pc = 0x1608F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1608F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15E868u;
    // 0x15e868: 0x0  nop
    ctx->pc = 0x15e868u;
    // NOP
    // 0x15e86c: 0x0  nop
    ctx->pc = 0x15e86cu;
    // NOP
}
