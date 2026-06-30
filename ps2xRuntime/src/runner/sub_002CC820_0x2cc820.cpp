#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CC820
// Address: 0x2cc820 - 0x2cc830
void sub_002CC820_0x2cc820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC820_0x2cc820");
#endif

    ctx->pc = 0x2cc820u;

    // 0x2cc820: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC820u;
            // 0x2cc824: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CC828u;
    // 0x2cc828: 0x0  nop
    ctx->pc = 0x2cc828u;
    // NOP
    // 0x2cc82c: 0x0  nop
    ctx->pc = 0x2cc82cu;
    // NOP
}
