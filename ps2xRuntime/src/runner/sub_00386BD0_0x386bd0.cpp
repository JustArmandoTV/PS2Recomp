#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00386BD0
// Address: 0x386bd0 - 0x386bf0
void sub_00386BD0_0x386bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386BD0_0x386bd0");
#endif

    ctx->pc = 0x386bd0u;

    // 0x386bd0: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x386bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x386bd4: 0x8c850214  lw          $a1, 0x214($a0)
    ctx->pc = 0x386bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
    // 0x386bd8: 0xc03027  not         $a2, $a2
    ctx->pc = 0x386bd8u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
    // 0x386bdc: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x386bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x386be0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x386be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x386be4: 0x3e00008  jr          $ra
    ctx->pc = 0x386BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386BE4u;
            // 0x386be8: 0xac830214  sw          $v1, 0x214($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x386BECu;
    // 0x386bec: 0x0  nop
    ctx->pc = 0x386becu;
    // NOP
}
