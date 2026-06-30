#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042CD30
// Address: 0x42cd30 - 0x42cd40
void sub_0042CD30_0x42cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042CD30_0x42cd30");
#endif

    ctx->pc = 0x42cd30u;

    // 0x42cd30: 0x3e00008  jr          $ra
    ctx->pc = 0x42CD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42CD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CD30u;
            // 0x42cd34: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42CD38u;
    // 0x42cd38: 0x0  nop
    ctx->pc = 0x42cd38u;
    // NOP
    // 0x42cd3c: 0x0  nop
    ctx->pc = 0x42cd3cu;
    // NOP
}
