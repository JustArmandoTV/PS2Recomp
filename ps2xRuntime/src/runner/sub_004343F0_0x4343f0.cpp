#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004343F0
// Address: 0x4343f0 - 0x434400
void sub_004343F0_0x4343f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004343F0_0x4343f0");
#endif

    ctx->pc = 0x4343f0u;

    // 0x4343f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4343f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4343f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4343F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4343F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4343F4u;
            // 0x4343f8: 0x8c426ed8  lw          $v0, 0x6ED8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28376)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4343FCu;
    // 0x4343fc: 0x0  nop
    ctx->pc = 0x4343fcu;
    // NOP
}
