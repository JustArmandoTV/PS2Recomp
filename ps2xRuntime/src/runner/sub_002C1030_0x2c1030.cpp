#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C1030
// Address: 0x2c1030 - 0x2c1040
void sub_002C1030_0x2c1030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1030_0x2c1030");
#endif

    ctx->pc = 0x2c1030u;

    // 0x2c1030: 0x80b4710  j           func_2D1C40
    ctx->pc = 0x2C1030u;
    ctx->pc = 0x2D1C40u;
    {
        auto targetFn = runtime->lookupFunction(0x2D1C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2C1038u;
    // 0x2c1038: 0x0  nop
    ctx->pc = 0x2c1038u;
    // NOP
    // 0x2c103c: 0x0  nop
    ctx->pc = 0x2c103cu;
    // NOP
}
