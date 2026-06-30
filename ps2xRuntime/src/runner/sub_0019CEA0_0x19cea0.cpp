#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CEA0
// Address: 0x19cea0 - 0x19ceb0
void sub_0019CEA0_0x19cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CEA0_0x19cea0");
#endif

    switch (ctx->pc) {
        case 0x19cea8u: goto label_19cea8;
        default: break;
    }

    ctx->pc = 0x19cea0u;

    // 0x19cea0: 0x3e00008  jr          $ra
    ctx->pc = 0x19CEA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CEA8u;
label_19cea8:
    // 0x19cea8: 0x3e00008  jr          $ra
    ctx->pc = 0x19CEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CEB0u;
}
