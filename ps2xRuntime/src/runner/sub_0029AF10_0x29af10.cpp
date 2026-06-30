#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029AF10
// Address: 0x29af10 - 0x29af20
void sub_0029AF10_0x29af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AF10_0x29af10");
#endif

    ctx->pc = 0x29af10u;

    // 0x29af10: 0x3e00008  jr          $ra
    ctx->pc = 0x29AF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29AF18u;
    // 0x29af18: 0x0  nop
    ctx->pc = 0x29af18u;
    // NOP
    // 0x29af1c: 0x0  nop
    ctx->pc = 0x29af1cu;
    // NOP
}
