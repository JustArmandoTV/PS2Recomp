#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00306FC0
// Address: 0x306fc0 - 0x306fd0
void sub_00306FC0_0x306fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306FC0_0x306fc0");
#endif

    ctx->pc = 0x306fc0u;

    // 0x306fc0: 0x804c74c  j           func_131D30
    ctx->pc = 0x306FC0u;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00131D30_0x131d30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x306FC8u;
    // 0x306fc8: 0x0  nop
    ctx->pc = 0x306fc8u;
    // NOP
    // 0x306fcc: 0x0  nop
    ctx->pc = 0x306fccu;
    // NOP
}
