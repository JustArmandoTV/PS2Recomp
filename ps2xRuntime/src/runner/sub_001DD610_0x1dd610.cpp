#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD610
// Address: 0x1dd610 - 0x1dd620
void sub_001DD610_0x1dd610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD610_0x1dd610");
#endif

    ctx->pc = 0x1dd610u;

    // 0x1dd610: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD610u;
            // 0x1dd614: 0x24820440  addiu       $v0, $a0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD618u;
    // 0x1dd618: 0x0  nop
    ctx->pc = 0x1dd618u;
    // NOP
    // 0x1dd61c: 0x0  nop
    ctx->pc = 0x1dd61cu;
    // NOP
}
