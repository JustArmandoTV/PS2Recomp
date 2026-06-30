#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF740
// Address: 0x3bf740 - 0x3bf750
void sub_003BF740_0x3bf740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF740_0x3bf740");
#endif

    ctx->pc = 0x3bf740u;

    // 0x3bf740: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF740u;
            // 0x3bf744: 0x24820028  addiu       $v0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF748u;
    // 0x3bf748: 0x0  nop
    ctx->pc = 0x3bf748u;
    // NOP
    // 0x3bf74c: 0x0  nop
    ctx->pc = 0x3bf74cu;
    // NOP
}
