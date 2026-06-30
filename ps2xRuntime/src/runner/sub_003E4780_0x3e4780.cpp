#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E4780
// Address: 0x3e4780 - 0x3e4790
void sub_003E4780_0x3e4780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4780_0x3e4780");
#endif

    ctx->pc = 0x3e4780u;

    // 0x3e4780: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x3E4780u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3E4788u;
    // 0x3e4788: 0x0  nop
    ctx->pc = 0x3e4788u;
    // NOP
    // 0x3e478c: 0x0  nop
    ctx->pc = 0x3e478cu;
    // NOP
}
