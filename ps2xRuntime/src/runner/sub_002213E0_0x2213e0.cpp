#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002213E0
// Address: 0x2213e0 - 0x2213f0
void sub_002213E0_0x2213e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002213E0_0x2213e0");
#endif

    ctx->pc = 0x2213e0u;

    // 0x2213e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2213E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2213E8u;
    // 0x2213e8: 0x0  nop
    ctx->pc = 0x2213e8u;
    // NOP
    // 0x2213ec: 0x0  nop
    ctx->pc = 0x2213ecu;
    // NOP
}
