#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B5DE0
// Address: 0x2b5de0 - 0x2b5df0
void sub_002B5DE0_0x2b5de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5DE0_0x2b5de0");
#endif

    switch (ctx->pc) {
        case 0x2b5de0u: goto label_2b5de0;
        case 0x2b5de4u: goto label_2b5de4;
        case 0x2b5de8u: goto label_2b5de8;
        case 0x2b5decu: goto label_2b5dec;
        default: break;
    }

    ctx->pc = 0x2b5de0u;

label_2b5de0:
    // 0x2b5de0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b5de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b5de4:
    // 0x2b5de4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2b5de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2b5de8:
    // 0x2b5de8: 0x3200008  jr          $t9
label_2b5dec:
    if (ctx->pc == 0x2B5DECu) {
        ctx->pc = 0x2B5DF0u;
        goto label_fallthrough_0x2b5de8;
    }
    ctx->pc = 0x2B5DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b5de8:
    ctx->pc = 0x2B5DF0u;
}
