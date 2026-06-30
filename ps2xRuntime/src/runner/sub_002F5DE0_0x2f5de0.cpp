#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F5DE0
// Address: 0x2f5de0 - 0x2f5e00
void sub_002F5DE0_0x2f5de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5DE0_0x2f5de0");
#endif

    switch (ctx->pc) {
        case 0x2f5de0u: goto label_2f5de0;
        case 0x2f5de4u: goto label_2f5de4;
        case 0x2f5de8u: goto label_2f5de8;
        case 0x2f5decu: goto label_2f5dec;
        case 0x2f5df0u: goto label_2f5df0;
        case 0x2f5df4u: goto label_2f5df4;
        case 0x2f5df8u: goto label_2f5df8;
        case 0x2f5dfcu: goto label_2f5dfc;
        default: break;
    }

    ctx->pc = 0x2f5de0u;

label_2f5de0:
    // 0x2f5de0: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x2f5de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2f5de4:
    // 0x2f5de4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f5de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f5de8:
    // 0x2f5de8: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2f5de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2f5dec:
    // 0x2f5dec: 0x3200008  jr          $t9
label_2f5df0:
    if (ctx->pc == 0x2F5DF0u) {
        ctx->pc = 0x2F5DF4u;
        goto label_2f5df4;
    }
    ctx->pc = 0x2F5DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5DF4u;
label_2f5df4:
    // 0x2f5df4: 0x0  nop
    ctx->pc = 0x2f5df4u;
    // NOP
label_2f5df8:
    // 0x2f5df8: 0x0  nop
    ctx->pc = 0x2f5df8u;
    // NOP
label_2f5dfc:
    // 0x2f5dfc: 0x0  nop
    ctx->pc = 0x2f5dfcu;
    // NOP
}
