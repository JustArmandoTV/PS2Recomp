#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AA920
// Address: 0x2aa920 - 0x2aa930
void sub_002AA920_0x2aa920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA920_0x2aa920");
#endif

    switch (ctx->pc) {
        case 0x2aa920u: goto label_2aa920;
        case 0x2aa924u: goto label_2aa924;
        case 0x2aa928u: goto label_2aa928;
        case 0x2aa92cu: goto label_2aa92c;
        default: break;
    }

    ctx->pc = 0x2aa920u;

label_2aa920:
    // 0x2aa920: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2aa920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2aa924:
    // 0x2aa924: 0x8c4267e0  lw          $v0, 0x67E0($v0)
    ctx->pc = 0x2aa924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26592)));
label_2aa928:
    // 0x2aa928: 0x400008  jr          $v0
label_2aa92c:
    if (ctx->pc == 0x2AA92Cu) {
        ctx->pc = 0x2AA930u;
        goto label_fallthrough_0x2aa928;
    }
    ctx->pc = 0x2AA928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2aa928:
    ctx->pc = 0x2AA930u;
}
