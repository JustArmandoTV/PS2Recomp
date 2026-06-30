#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB520
// Address: 0x2db520 - 0x2db530
void sub_002DB520_0x2db520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB520_0x2db520");
#endif

    ctx->pc = 0x2db520u;

    // 0x2db520: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB520u;
            // 0x2db524: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB528u;
    // 0x2db528: 0x0  nop
    ctx->pc = 0x2db528u;
    // NOP
    // 0x2db52c: 0x0  nop
    ctx->pc = 0x2db52cu;
    // NOP
}
