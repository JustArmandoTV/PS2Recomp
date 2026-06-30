#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BE20
// Address: 0x33be20 - 0x33be30
void sub_0033BE20_0x33be20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BE20_0x33be20");
#endif

    ctx->pc = 0x33be20u;

    // 0x33be20: 0x3e00008  jr          $ra
    ctx->pc = 0x33BE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BE20u;
            // 0x33be24: 0x908211a7  lbu         $v0, 0x11A7($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4519)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33BE28u;
    // 0x33be28: 0x0  nop
    ctx->pc = 0x33be28u;
    // NOP
    // 0x33be2c: 0x0  nop
    ctx->pc = 0x33be2cu;
    // NOP
}
