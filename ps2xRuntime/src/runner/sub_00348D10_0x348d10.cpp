#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00348D10
// Address: 0x348d10 - 0x348d20
void sub_00348D10_0x348d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348D10_0x348d10");
#endif

    ctx->pc = 0x348d10u;

    // 0x348d10: 0x3e00008  jr          $ra
    ctx->pc = 0x348D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348D10u;
            // 0x348d14: 0x24820150  addiu       $v0, $a0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x348D18u;
    // 0x348d18: 0x0  nop
    ctx->pc = 0x348d18u;
    // NOP
    // 0x348d1c: 0x0  nop
    ctx->pc = 0x348d1cu;
    // NOP
}
