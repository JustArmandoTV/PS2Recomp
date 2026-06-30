#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CD950
// Address: 0x2cd950 - 0x2cd960
void sub_002CD950_0x2cd950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD950_0x2cd950");
#endif

    ctx->pc = 0x2cd950u;

    // 0x2cd950: 0x80b4630  j           func_2D18C0
    ctx->pc = 0x2CD950u;
    ctx->pc = 0x2D18C0u;
    {
        auto targetFn = runtime->lookupFunction(0x2D18C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2CD958u;
    // 0x2cd958: 0x0  nop
    ctx->pc = 0x2cd958u;
    // NOP
    // 0x2cd95c: 0x0  nop
    ctx->pc = 0x2cd95cu;
    // NOP
}
