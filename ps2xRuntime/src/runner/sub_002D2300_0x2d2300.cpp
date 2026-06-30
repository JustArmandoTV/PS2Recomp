#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D2300
// Address: 0x2d2300 - 0x2d2310
void sub_002D2300_0x2d2300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2300_0x2d2300");
#endif

    ctx->pc = 0x2d2300u;

    // 0x2d2300: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2300u;
            // 0x2d2304: 0x24820004  addiu       $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2308u;
    // 0x2d2308: 0x0  nop
    ctx->pc = 0x2d2308u;
    // NOP
    // 0x2d230c: 0x0  nop
    ctx->pc = 0x2d230cu;
    // NOP
}
