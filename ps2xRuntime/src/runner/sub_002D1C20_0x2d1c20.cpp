#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D1C20
// Address: 0x2d1c20 - 0x2d1c30
void sub_002D1C20_0x2d1c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1C20_0x2d1c20");
#endif

    ctx->pc = 0x2d1c20u;

    // 0x2d1c20: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1C28u;
    // 0x2d1c28: 0x0  nop
    ctx->pc = 0x2d1c28u;
    // NOP
    // 0x2d1c2c: 0x0  nop
    ctx->pc = 0x2d1c2cu;
    // NOP
}
