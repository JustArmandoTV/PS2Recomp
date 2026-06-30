#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100920
// Address: 0x100920 - 0x100930
void sub_00100920_0x100920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100920_0x100920");
#endif

    ctx->pc = 0x100920u;

    // 0x100920: 0x8040884  j           func_102210
    ctx->pc = 0x100920u;
    ctx->pc = 0x102210u;
    {
        auto targetFn = runtime->lookupFunction(0x102210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x100928u;
    // 0x100928: 0x0  nop
    ctx->pc = 0x100928u;
    // NOP
    // 0x10092c: 0x0  nop
    ctx->pc = 0x10092cu;
    // NOP
}
