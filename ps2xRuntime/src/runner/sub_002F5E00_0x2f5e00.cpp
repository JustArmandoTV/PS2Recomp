#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F5E00
// Address: 0x2f5e00 - 0x2f5e20
void sub_002F5E00_0x2f5e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5E00_0x2f5e00");
#endif

    switch (ctx->pc) {
        case 0x2f5e00u: goto label_2f5e00;
        case 0x2f5e04u: goto label_2f5e04;
        case 0x2f5e08u: goto label_2f5e08;
        case 0x2f5e0cu: goto label_2f5e0c;
        case 0x2f5e10u: goto label_2f5e10;
        case 0x2f5e14u: goto label_2f5e14;
        case 0x2f5e18u: goto label_2f5e18;
        case 0x2f5e1cu: goto label_2f5e1c;
        default: break;
    }

    ctx->pc = 0x2f5e00u;

label_2f5e00:
    // 0x2f5e00: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x2f5e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2f5e04:
    // 0x2f5e04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f5e04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f5e08:
    // 0x2f5e08: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f5e08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f5e0c:
    // 0x2f5e0c: 0x3200008  jr          $t9
label_2f5e10:
    if (ctx->pc == 0x2F5E10u) {
        ctx->pc = 0x2F5E14u;
        goto label_2f5e14;
    }
    ctx->pc = 0x2F5E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5E14u;
label_2f5e14:
    // 0x2f5e14: 0x0  nop
    ctx->pc = 0x2f5e14u;
    // NOP
label_2f5e18:
    // 0x2f5e18: 0x0  nop
    ctx->pc = 0x2f5e18u;
    // NOP
label_2f5e1c:
    // 0x2f5e1c: 0x0  nop
    ctx->pc = 0x2f5e1cu;
    // NOP
}
