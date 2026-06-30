#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCC30
// Address: 0x1dcc30 - 0x1dcc50
void sub_001DCC30_0x1dcc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCC30_0x1dcc30");
#endif

    switch (ctx->pc) {
        case 0x1dcc30u: goto label_1dcc30;
        case 0x1dcc34u: goto label_1dcc34;
        case 0x1dcc38u: goto label_1dcc38;
        case 0x1dcc3cu: goto label_1dcc3c;
        case 0x1dcc40u: goto label_1dcc40;
        case 0x1dcc44u: goto label_1dcc44;
        case 0x1dcc48u: goto label_1dcc48;
        case 0x1dcc4cu: goto label_1dcc4c;
        default: break;
    }

    ctx->pc = 0x1dcc30u;

label_1dcc30:
    // 0x1dcc30: 0x8c840148  lw          $a0, 0x148($a0)
    ctx->pc = 0x1dcc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_1dcc34:
    // 0x1dcc34: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x1dcc34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_1dcc38:
    // 0x1dcc38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dcc38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dcc3c:
    // 0x1dcc3c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1dcc3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1dcc40:
    // 0x1dcc40: 0x3200008  jr          $t9
label_1dcc44:
    if (ctx->pc == 0x1DCC44u) {
        ctx->pc = 0x1DCC48u;
        goto label_1dcc48;
    }
    ctx->pc = 0x1DCC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCC48u;
label_1dcc48:
    // 0x1dcc48: 0x0  nop
    ctx->pc = 0x1dcc48u;
    // NOP
label_1dcc4c:
    // 0x1dcc4c: 0x0  nop
    ctx->pc = 0x1dcc4cu;
    // NOP
}
