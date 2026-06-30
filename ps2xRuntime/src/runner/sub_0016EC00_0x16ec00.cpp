#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016EC00
// Address: 0x16ec00 - 0x16ec10
void sub_0016EC00_0x16ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EC00_0x16ec00");
#endif

    ctx->pc = 0x16ec00u;

    // 0x16ec00: 0x3e00008  jr          $ra
    ctx->pc = 0x16EC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16EC08u;
    // 0x16ec08: 0x3e00008  jr          $ra
    ctx->pc = 0x16EC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16EC10u;
}
