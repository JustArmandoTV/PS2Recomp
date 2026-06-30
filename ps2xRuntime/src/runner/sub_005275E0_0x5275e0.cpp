#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005275E0
// Address: 0x5275e0 - 0x5275f0
void sub_005275E0_0x5275e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005275E0_0x5275e0");
#endif

    ctx->pc = 0x5275e0u;

    // 0x5275e0: 0x80a6dec  j           func_29B7B0
    ctx->pc = 0x5275E0u;
    ctx->pc = 0x29B7B0u;
    {
        auto targetFn = runtime->lookupFunction(0x29B7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x5275E8u;
    // 0x5275e8: 0x0  nop
    ctx->pc = 0x5275e8u;
    // NOP
    // 0x5275ec: 0x0  nop
    ctx->pc = 0x5275ecu;
    // NOP
}
