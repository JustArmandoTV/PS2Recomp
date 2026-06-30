#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BE50
// Address: 0x33be50 - 0x33be60
void sub_0033BE50_0x33be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BE50_0x33be50");
#endif

    ctx->pc = 0x33be50u;

    // 0x33be50: 0x3e00008  jr          $ra
    ctx->pc = 0x33BE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BE50u;
            // 0x33be54: 0x24820820  addiu       $v0, $a0, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2080));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33BE58u;
    // 0x33be58: 0x0  nop
    ctx->pc = 0x33be58u;
    // NOP
    // 0x33be5c: 0x0  nop
    ctx->pc = 0x33be5cu;
    // NOP
}
