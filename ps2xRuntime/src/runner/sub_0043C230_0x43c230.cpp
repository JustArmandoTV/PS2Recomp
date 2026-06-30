#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043C230
// Address: 0x43c230 - 0x43c240
void sub_0043C230_0x43c230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043C230_0x43c230");
#endif

    ctx->pc = 0x43c230u;

    // 0x43c230: 0x3e00008  jr          $ra
    ctx->pc = 0x43C230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43C234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C230u;
            // 0x43c234: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43C238u;
    // 0x43c238: 0x0  nop
    ctx->pc = 0x43c238u;
    // NOP
    // 0x43c23c: 0x0  nop
    ctx->pc = 0x43c23cu;
    // NOP
}
