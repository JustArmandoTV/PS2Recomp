#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A91E0
// Address: 0x2a91e0 - 0x2a91f0
void sub_002A91E0_0x2a91e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A91E0_0x2a91e0");
#endif

    switch (ctx->pc) {
        case 0x2a91e0u: goto label_2a91e0;
        case 0x2a91e4u: goto label_2a91e4;
        case 0x2a91e8u: goto label_2a91e8;
        case 0x2a91ecu: goto label_2a91ec;
        default: break;
    }

    ctx->pc = 0x2a91e0u;

label_2a91e0:
    // 0x2a91e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2a91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2a91e4:
    // 0x2a91e4: 0x8c420c60  lw          $v0, 0xC60($v0)
    ctx->pc = 0x2a91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3168)));
label_2a91e8:
    // 0x2a91e8: 0x400008  jr          $v0
label_2a91ec:
    if (ctx->pc == 0x2A91ECu) {
        ctx->pc = 0x2A91F0u;
        goto label_fallthrough_0x2a91e8;
    }
    ctx->pc = 0x2A91E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2a91e8:
    ctx->pc = 0x2A91F0u;
}
