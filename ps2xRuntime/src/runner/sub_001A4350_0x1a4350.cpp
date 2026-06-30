#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4350
// Address: 0x1a4350 - 0x1a4360
void sub_001A4350_0x1a4350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4350_0x1a4350");
#endif

    ctx->pc = 0x1a4350u;

    // 0x1a4350: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1a4350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1a4354: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4354u;
            // 0x1a4358: 0x8c629b88  lw          $v0, -0x6478($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941576)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A435Cu;
    // 0x1a435c: 0x0  nop
    ctx->pc = 0x1a435cu;
    // NOP
}
