#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D1FB0
// Address: 0x2d1fb0 - 0x2d1fc0
void sub_002D1FB0_0x2d1fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1FB0_0x2d1fb0");
#endif

    ctx->pc = 0x2d1fb0u;

    // 0x2d1fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1FB8u;
    // 0x2d1fb8: 0x0  nop
    ctx->pc = 0x2d1fb8u;
    // NOP
    // 0x2d1fbc: 0x0  nop
    ctx->pc = 0x2d1fbcu;
    // NOP
}
