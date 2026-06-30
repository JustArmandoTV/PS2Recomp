#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C0310
// Address: 0x3c0310 - 0x3c0320
void sub_003C0310_0x3c0310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0310_0x3c0310");
#endif

    ctx->pc = 0x3c0310u;

    // 0x3c0310: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C0310u;
            // 0x3c0314: 0x8c8200cc  lw          $v0, 0xCC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C0318u;
    // 0x3c0318: 0x0  nop
    ctx->pc = 0x3c0318u;
    // NOP
    // 0x3c031c: 0x0  nop
    ctx->pc = 0x3c031cu;
    // NOP
}
