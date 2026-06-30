#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D4760
// Address: 0x4d4760 - 0x4d4770
void sub_004D4760_0x4d4760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D4760_0x4d4760");
#endif

    ctx->pc = 0x4d4760u;

    // 0x4d4760: 0x3e00008  jr          $ra
    ctx->pc = 0x4D4760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4760u;
            // 0x4d4764: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D4768u;
    // 0x4d4768: 0x0  nop
    ctx->pc = 0x4d4768u;
    // NOP
    // 0x4d476c: 0x0  nop
    ctx->pc = 0x4d476cu;
    // NOP
}
