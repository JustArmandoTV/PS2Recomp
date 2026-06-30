#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E9C80
// Address: 0x3e9c80 - 0x3e9c90
void sub_003E9C80_0x3e9c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9C80_0x3e9c80");
#endif

    switch (ctx->pc) {
        case 0x3e9c80u: goto label_3e9c80;
        case 0x3e9c84u: goto label_3e9c84;
        case 0x3e9c88u: goto label_3e9c88;
        case 0x3e9c8cu: goto label_3e9c8c;
        default: break;
    }

    ctx->pc = 0x3e9c80u;

label_3e9c80:
    // 0x3e9c80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e9c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e9c84:
    // 0x3e9c84: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x3e9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_3e9c88:
    // 0x3e9c88: 0x400008  jr          $v0
label_3e9c8c:
    if (ctx->pc == 0x3E9C8Cu) {
        ctx->pc = 0x3E9C90u;
        goto label_fallthrough_0x3e9c88;
    }
    ctx->pc = 0x3E9C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3e9c88:
    ctx->pc = 0x3E9C90u;
}
