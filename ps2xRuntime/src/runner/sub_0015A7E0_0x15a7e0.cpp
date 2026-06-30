#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015A7E0
// Address: 0x15a7e0 - 0x15a7f0
void sub_0015A7E0_0x15a7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A7E0_0x15a7e0");
#endif

    ctx->pc = 0x15a7e0u;

    // 0x15a7e0: 0x805646c  j           func_1591B0
    ctx->pc = 0x15A7E0u;
    ctx->pc = 0x1591B0u;
    if (runtime->hasFunction(0x1591B0u)) {
        auto targetFn = runtime->lookupFunction(0x1591B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001591B0_0x1591b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15A7E8u;
    // 0x15a7e8: 0x0  nop
    ctx->pc = 0x15a7e8u;
    // NOP
    // 0x15a7ec: 0x0  nop
    ctx->pc = 0x15a7ecu;
    // NOP
}
