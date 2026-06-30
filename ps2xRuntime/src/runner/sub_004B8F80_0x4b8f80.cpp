#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B8F80
// Address: 0x4b8f80 - 0x4b8f90
void sub_004B8F80_0x4b8f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8F80_0x4b8f80");
#endif

    ctx->pc = 0x4b8f80u;

    // 0x4b8f80: 0x8125fa0  j           func_497E80
    ctx->pc = 0x4B8F80u;
    ctx->pc = 0x497E80u;
    if (runtime->hasFunction(0x497E80u)) {
        auto targetFn = runtime->lookupFunction(0x497E80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00497E80_0x497e80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4B8F88u;
    // 0x4b8f88: 0x0  nop
    ctx->pc = 0x4b8f88u;
    // NOP
    // 0x4b8f8c: 0x0  nop
    ctx->pc = 0x4b8f8cu;
    // NOP
}
