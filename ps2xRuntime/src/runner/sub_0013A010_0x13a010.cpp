#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A010
// Address: 0x13a010 - 0x13a020
void sub_0013A010_0x13a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A010_0x13a010");
#endif

    ctx->pc = 0x13a010u;

    // 0x13a010: 0x8056354  j           func_158D50
    ctx->pc = 0x13A010u;
    ctx->pc = 0x158D50u;
    if (runtime->hasFunction(0x158D50u)) {
        auto targetFn = runtime->lookupFunction(0x158D50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00158D50_0x158d50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x13A018u;
    // 0x13a018: 0x0  nop
    ctx->pc = 0x13a018u;
    // NOP
    // 0x13a01c: 0x0  nop
    ctx->pc = 0x13a01cu;
    // NOP
}
