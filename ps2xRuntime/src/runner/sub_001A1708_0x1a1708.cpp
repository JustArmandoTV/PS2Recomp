#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1708
// Address: 0x1a1708 - 0x1a1720
void sub_001A1708_0x1a1708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1708_0x1a1708");
#endif

    ctx->pc = 0x1a1708u;

    // 0x1a1708: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1a1708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a170c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1a170cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1a1710: 0x24219940  addiu       $at, $at, -0x66C0
    ctx->pc = 0x1a1710u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294940992));
    // 0x1a1714: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1714u;
            // 0x1a1718: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A171Cu;
    // 0x1a171c: 0x0  nop
    ctx->pc = 0x1a171cu;
    // NOP
}
