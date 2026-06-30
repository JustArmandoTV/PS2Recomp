#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00145EF0
// Address: 0x145ef0 - 0x145f00
void sub_00145EF0_0x145ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145EF0_0x145ef0");
#endif

    ctx->pc = 0x145ef0u;

    // 0x145ef0: 0x804a508  j           func_129420
    ctx->pc = 0x145EF0u;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129420_0x129420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x145EF8u;
    // 0x145ef8: 0x0  nop
    ctx->pc = 0x145ef8u;
    // NOP
    // 0x145efc: 0x0  nop
    ctx->pc = 0x145efcu;
    // NOP
}
