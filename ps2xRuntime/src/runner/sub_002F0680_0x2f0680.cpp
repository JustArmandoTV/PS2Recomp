#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0680
// Address: 0x2f0680 - 0x2f0690
void sub_002F0680_0x2f0680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0680_0x2f0680");
#endif

    ctx->pc = 0x2f0680u;

    // 0x2f0680: 0x80517cc  j           func_145F30
    ctx->pc = 0x2F0680u;
    ctx->pc = 0x145F30u;
    if (runtime->hasFunction(0x145F30u)) {
        auto targetFn = runtime->lookupFunction(0x145F30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00145F30_0x145f30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2F0688u;
    // 0x2f0688: 0x0  nop
    ctx->pc = 0x2f0688u;
    // NOP
    // 0x2f068c: 0x0  nop
    ctx->pc = 0x2f068cu;
    // NOP
}
