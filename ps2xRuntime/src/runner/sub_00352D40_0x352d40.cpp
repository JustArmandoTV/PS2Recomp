#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00352D40
// Address: 0x352d40 - 0x352d50
void sub_00352D40_0x352d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352D40_0x352d40");
#endif

    ctx->pc = 0x352d40u;

    // 0x352d40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x352d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x352d44: 0x3e00008  jr          $ra
    ctx->pc = 0x352D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352D44u;
            // 0x352d48: 0x8c423ff0  lw          $v0, 0x3FF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16368)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352D4Cu;
    // 0x352d4c: 0x0  nop
    ctx->pc = 0x352d4cu;
    // NOP
}
