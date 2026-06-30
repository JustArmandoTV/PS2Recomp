#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015F1C0
// Address: 0x15f1c0 - 0x15f1d0
void sub_0015F1C0_0x15f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F1C0_0x15f1c0");
#endif

    ctx->pc = 0x15f1c0u;

    // 0x15f1c0: 0x8057f64  j           func_15FD90
    ctx->pc = 0x15F1C0u;
    ctx->pc = 0x15FD90u;
    if (runtime->hasFunction(0x15FD90u)) {
        auto targetFn = runtime->lookupFunction(0x15FD90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015FD90_0x15fd90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15F1C8u;
    // 0x15f1c8: 0x0  nop
    ctx->pc = 0x15f1c8u;
    // NOP
    // 0x15f1cc: 0x0  nop
    ctx->pc = 0x15f1ccu;
    // NOP
}
