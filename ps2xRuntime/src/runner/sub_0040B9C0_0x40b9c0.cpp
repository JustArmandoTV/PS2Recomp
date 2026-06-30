#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040B9C0
// Address: 0x40b9c0 - 0x40b9f0
void sub_0040B9C0_0x40b9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B9C0_0x40b9c0");
#endif

    switch (ctx->pc) {
        case 0x40b9c0u: goto label_40b9c0;
        case 0x40b9c4u: goto label_40b9c4;
        case 0x40b9c8u: goto label_40b9c8;
        case 0x40b9ccu: goto label_40b9cc;
        case 0x40b9d0u: goto label_40b9d0;
        case 0x40b9d4u: goto label_40b9d4;
        case 0x40b9d8u: goto label_40b9d8;
        case 0x40b9dcu: goto label_40b9dc;
        case 0x40b9e0u: goto label_40b9e0;
        case 0x40b9e4u: goto label_40b9e4;
        case 0x40b9e8u: goto label_40b9e8;
        case 0x40b9ecu: goto label_40b9ec;
        default: break;
    }

    ctx->pc = 0x40b9c0u;

label_40b9c0:
    // 0x40b9c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x40b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_40b9c4:
    // 0x40b9c4: 0x8c4200c8  lw          $v0, 0xC8($v0)
    ctx->pc = 0x40b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_40b9c8:
    // 0x40b9c8: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x40b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
label_40b9cc:
    // 0x40b9cc: 0x8062010d  lb          $v0, 0x10D($v1)
    ctx->pc = 0x40b9ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 269)));
label_40b9d0:
    // 0x40b9d0: 0xa062010e  sb          $v0, 0x10E($v1)
    ctx->pc = 0x40b9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 270), (uint8_t)GPR_U32(ctx, 2));
label_40b9d4:
    // 0x40b9d4: 0xa060010d  sb          $zero, 0x10D($v1)
    ctx->pc = 0x40b9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 269), (uint8_t)GPR_U32(ctx, 0));
label_40b9d8:
    // 0x40b9d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40b9d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40b9dc:
    // 0x40b9dc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x40b9dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_40b9e0:
    // 0x40b9e0: 0x3200008  jr          $t9
label_40b9e4:
    if (ctx->pc == 0x40B9E4u) {
        ctx->pc = 0x40B9E8u;
        goto label_40b9e8;
    }
    ctx->pc = 0x40B9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40B9E8u;
label_40b9e8:
    // 0x40b9e8: 0x0  nop
    ctx->pc = 0x40b9e8u;
    // NOP
label_40b9ec:
    // 0x40b9ec: 0x0  nop
    ctx->pc = 0x40b9ecu;
    // NOP
}
