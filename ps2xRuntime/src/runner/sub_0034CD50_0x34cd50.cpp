#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034CD50
// Address: 0x34cd50 - 0x34cd60
void sub_0034CD50_0x34cd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CD50_0x34cd50");
#endif

    ctx->pc = 0x34cd50u;

    // 0x34cd50: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x34cd54: 0x3e00008  jr          $ra
    ctx->pc = 0x34CD54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34CD54u;
            // 0x34cd58: 0x24427560  addiu       $v0, $v0, 0x7560 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34CD5Cu;
    // 0x34cd5c: 0x0  nop
    ctx->pc = 0x34cd5cu;
    // NOP
}
