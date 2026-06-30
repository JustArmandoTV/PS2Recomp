#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001608D0
// Address: 0x1608d0 - 0x1608e0
void sub_001608D0_0x1608d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001608D0_0x1608d0");
#endif

    ctx->pc = 0x1608d0u;

    // 0x1608d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1608D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1608D8u;
    // 0x1608d8: 0x0  nop
    ctx->pc = 0x1608d8u;
    // NOP
    // 0x1608dc: 0x0  nop
    ctx->pc = 0x1608dcu;
    // NOP
}
