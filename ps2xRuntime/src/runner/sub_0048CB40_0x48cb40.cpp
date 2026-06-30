#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048CB40
// Address: 0x48cb40 - 0x48cb60
void sub_0048CB40_0x48cb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CB40_0x48cb40");
#endif

    switch (ctx->pc) {
        case 0x48cb40u: goto label_48cb40;
        case 0x48cb44u: goto label_48cb44;
        case 0x48cb48u: goto label_48cb48;
        case 0x48cb4cu: goto label_48cb4c;
        case 0x48cb50u: goto label_48cb50;
        case 0x48cb54u: goto label_48cb54;
        case 0x48cb58u: goto label_48cb58;
        case 0x48cb5cu: goto label_48cb5c;
        default: break;
    }

    ctx->pc = 0x48cb40u;

label_48cb40:
    // 0x48cb40: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x48cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_48cb44:
    // 0x48cb44: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x48cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_48cb48:
    // 0x48cb48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48cb4c:
    // 0x48cb4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48cb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48cb50:
    // 0x48cb50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48cb50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48cb54:
    // 0x48cb54: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x48cb54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_48cb58:
    // 0x48cb58: 0x3200008  jr          $t9
label_48cb5c:
    if (ctx->pc == 0x48CB5Cu) {
        ctx->pc = 0x48CB60u;
        goto label_fallthrough_0x48cb58;
    }
    ctx->pc = 0x48CB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x48cb58:
    ctx->pc = 0x48CB60u;
}
