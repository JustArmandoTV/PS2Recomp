#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CDA00
// Address: 0x2cda00 - 0x2cda10
void sub_002CDA00_0x2cda00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDA00_0x2cda00");
#endif

    ctx->pc = 0x2cda00u;

    // 0x2cda00: 0x80b4a18  j           func_2D2860
    ctx->pc = 0x2CDA00u;
    ctx->pc = 0x2D2860u;
    if (runtime->hasFunction(0x2D2860u)) {
        auto targetFn = runtime->lookupFunction(0x2D2860u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002D2860_0x2d2860(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2CDA08u;
    // 0x2cda08: 0x0  nop
    ctx->pc = 0x2cda08u;
    // NOP
    // 0x2cda0c: 0x0  nop
    ctx->pc = 0x2cda0cu;
    // NOP
}
