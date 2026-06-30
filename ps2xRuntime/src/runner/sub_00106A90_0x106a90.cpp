#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00106A90
// Address: 0x106a90 - 0x106a98
void sub_00106A90_0x106a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106A90_0x106a90");
#endif

    ctx->pc = 0x106a90u;

    // 0x106a90: 0x8041a70  j           func_1069C0
    ctx->pc = 0x106A90u;
    ctx->pc = 0x1069C0u;
    {
        auto targetFn = runtime->lookupFunction(0x1069C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x106A98u;
}
