#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A000
// Address: 0x13a000 - 0x13a010
void sub_0013A000_0x13a000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A000_0x13a000");
#endif

    ctx->pc = 0x13a000u;

    // 0x13a000: 0x80562e0  j           func_158B80
    ctx->pc = 0x13A000u;
    ctx->pc = 0x158B80u;
    if (runtime->hasFunction(0x158B80u)) {
        auto targetFn = runtime->lookupFunction(0x158B80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00158B80_0x158b80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x13A008u;
    // 0x13a008: 0x0  nop
    ctx->pc = 0x13a008u;
    // NOP
    // 0x13a00c: 0x0  nop
    ctx->pc = 0x13a00cu;
    // NOP
}
