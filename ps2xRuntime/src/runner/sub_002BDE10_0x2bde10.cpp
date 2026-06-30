#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BDE10
// Address: 0x2bde10 - 0x2bde20
void sub_002BDE10_0x2bde10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDE10_0x2bde10");
#endif

    ctx->pc = 0x2bde10u;

    // 0x2bde10: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDE10u;
            // 0x2bde14: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BDE18u;
    // 0x2bde18: 0x0  nop
    ctx->pc = 0x2bde18u;
    // NOP
    // 0x2bde1c: 0x0  nop
    ctx->pc = 0x2bde1cu;
    // NOP
}
