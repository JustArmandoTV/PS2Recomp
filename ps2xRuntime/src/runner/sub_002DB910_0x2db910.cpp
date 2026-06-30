#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB910
// Address: 0x2db910 - 0x2db920
void sub_002DB910_0x2db910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB910_0x2db910");
#endif

    ctx->pc = 0x2db910u;

    // 0x2db910: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB918u;
    // 0x2db918: 0x0  nop
    ctx->pc = 0x2db918u;
    // NOP
    // 0x2db91c: 0x0  nop
    ctx->pc = 0x2db91cu;
    // NOP
}
