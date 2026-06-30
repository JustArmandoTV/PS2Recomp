#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00358F30
// Address: 0x358f30 - 0x358f40
void sub_00358F30_0x358f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358F30_0x358f30");
#endif

    ctx->pc = 0x358f30u;

    // 0x358f30: 0x3e00008  jr          $ra
    ctx->pc = 0x358F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358F30u;
            // 0x358f34: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358F38u;
    // 0x358f38: 0x0  nop
    ctx->pc = 0x358f38u;
    // NOP
    // 0x358f3c: 0x0  nop
    ctx->pc = 0x358f3cu;
    // NOP
}
