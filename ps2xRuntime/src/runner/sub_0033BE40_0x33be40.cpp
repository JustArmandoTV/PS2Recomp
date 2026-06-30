#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BE40
// Address: 0x33be40 - 0x33be50
void sub_0033BE40_0x33be40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BE40_0x33be40");
#endif

    ctx->pc = 0x33be40u;

    // 0x33be40: 0x3e00008  jr          $ra
    ctx->pc = 0x33BE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BE40u;
            // 0x33be44: 0x908211a6  lbu         $v0, 0x11A6($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4518)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33BE48u;
    // 0x33be48: 0x0  nop
    ctx->pc = 0x33be48u;
    // NOP
    // 0x33be4c: 0x0  nop
    ctx->pc = 0x33be4cu;
    // NOP
}
