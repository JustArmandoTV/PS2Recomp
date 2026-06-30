#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3A40
// Address: 0x3c3a40 - 0x3c3a50
void sub_003C3A40_0x3c3a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3A40_0x3c3a40");
#endif

    ctx->pc = 0x3c3a40u;

    // 0x3c3a40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3c3a44: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3A44u;
            // 0x3c3a48: 0x8c423e58  lw          $v0, 0x3E58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15960)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3A4Cu;
    // 0x3c3a4c: 0x0  nop
    ctx->pc = 0x3c3a4cu;
    // NOP
}
