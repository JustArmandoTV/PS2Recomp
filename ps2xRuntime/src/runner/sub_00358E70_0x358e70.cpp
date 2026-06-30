#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00358E70
// Address: 0x358e70 - 0x358e80
void sub_00358E70_0x358e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358E70_0x358e70");
#endif

    ctx->pc = 0x358e70u;

    // 0x358e70: 0x3e00008  jr          $ra
    ctx->pc = 0x358E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358E70u;
            // 0x358e74: 0x90820024  lbu         $v0, 0x24($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358E78u;
    // 0x358e78: 0x0  nop
    ctx->pc = 0x358e78u;
    // NOP
    // 0x358e7c: 0x0  nop
    ctx->pc = 0x358e7cu;
    // NOP
}
