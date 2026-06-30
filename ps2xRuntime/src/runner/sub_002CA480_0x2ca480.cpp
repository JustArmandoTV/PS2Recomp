#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CA480
// Address: 0x2ca480 - 0x2ca490
void sub_002CA480_0x2ca480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA480_0x2ca480");
#endif

    ctx->pc = 0x2ca480u;

    // 0x2ca480: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA480u;
            // 0x2ca484: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA488u;
    // 0x2ca488: 0x0  nop
    ctx->pc = 0x2ca488u;
    // NOP
    // 0x2ca48c: 0x0  nop
    ctx->pc = 0x2ca48cu;
    // NOP
}
