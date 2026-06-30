#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB980
// Address: 0x2db980 - 0x2db990
void sub_002DB980_0x2db980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB980_0x2db980");
#endif

    ctx->pc = 0x2db980u;

    // 0x2db980: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB980u;
            // 0x2db984: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB988u;
    // 0x2db988: 0x0  nop
    ctx->pc = 0x2db988u;
    // NOP
    // 0x2db98c: 0x0  nop
    ctx->pc = 0x2db98cu;
    // NOP
}
