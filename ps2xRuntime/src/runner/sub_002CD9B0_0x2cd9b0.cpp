#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CD9B0
// Address: 0x2cd9b0 - 0x2cd9c0
void sub_002CD9B0_0x2cd9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD9B0_0x2cd9b0");
#endif

    ctx->pc = 0x2cd9b0u;

    // 0x2cd9b0: 0x80b47f4  j           func_2D1FD0
    ctx->pc = 0x2CD9B0u;
    ctx->pc = 0x2D1FD0u;
    {
        auto targetFn = runtime->lookupFunction(0x2D1FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2CD9B8u;
    // 0x2cd9b8: 0x0  nop
    ctx->pc = 0x2cd9b8u;
    // NOP
    // 0x2cd9bc: 0x0  nop
    ctx->pc = 0x2cd9bcu;
    // NOP
}
