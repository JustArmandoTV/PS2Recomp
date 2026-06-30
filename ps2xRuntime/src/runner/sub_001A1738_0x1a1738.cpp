#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1738
// Address: 0x1a1738 - 0x1a1750
void sub_001A1738_0x1a1738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1738_0x1a1738");
#endif

    ctx->pc = 0x1a1738u;

    // 0x1a1738: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1a1738u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a173c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1a173cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1a1740: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x1a1740u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x1a1744: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1744u;
            // 0x1a1748: 0xac249940  sw          $a0, -0x66C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940992), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A174Cu;
    // 0x1a174c: 0x0  nop
    ctx->pc = 0x1a174cu;
    // NOP
}
