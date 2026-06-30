#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015F130
// Address: 0x15f130 - 0x15f140
void sub_0015F130_0x15f130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F130_0x15f130");
#endif

    ctx->pc = 0x15f130u;

    // 0x15f130: 0x8058070  j           func_1601C0
    ctx->pc = 0x15F130u;
    ctx->pc = 0x1601C0u;
    if (runtime->hasFunction(0x1601C0u)) {
        auto targetFn = runtime->lookupFunction(0x1601C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001601C0_0x1601c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15F138u;
    // 0x15f138: 0x0  nop
    ctx->pc = 0x15f138u;
    // NOP
    // 0x15f13c: 0x0  nop
    ctx->pc = 0x15f13cu;
    // NOP
}
