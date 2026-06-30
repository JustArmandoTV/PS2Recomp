#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015A7D0
// Address: 0x15a7d0 - 0x15a7e0
void sub_0015A7D0_0x15a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A7D0_0x15a7d0");
#endif

    ctx->pc = 0x15a7d0u;

    // 0x15a7d0: 0x80564a4  j           func_159290
    ctx->pc = 0x15A7D0u;
    ctx->pc = 0x159290u;
    if (runtime->hasFunction(0x159290u)) {
        auto targetFn = runtime->lookupFunction(0x159290u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00159290_0x159290(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15A7D8u;
    // 0x15a7d8: 0x0  nop
    ctx->pc = 0x15a7d8u;
    // NOP
    // 0x15a7dc: 0x0  nop
    ctx->pc = 0x15a7dcu;
    // NOP
}
