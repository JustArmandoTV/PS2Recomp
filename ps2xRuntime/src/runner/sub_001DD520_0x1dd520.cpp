#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD520
// Address: 0x1dd520 - 0x1dd530
void sub_001DD520_0x1dd520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD520_0x1dd520");
#endif

    ctx->pc = 0x1dd520u;

    // 0x1dd520: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD520u;
            // 0x1dd524: 0x24820940  addiu       $v0, $a0, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD528u;
    // 0x1dd528: 0x0  nop
    ctx->pc = 0x1dd528u;
    // NOP
    // 0x1dd52c: 0x0  nop
    ctx->pc = 0x1dd52cu;
    // NOP
}
