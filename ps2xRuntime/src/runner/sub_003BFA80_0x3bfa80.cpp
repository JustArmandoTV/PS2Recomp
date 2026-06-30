#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BFA80
// Address: 0x3bfa80 - 0x3bfa90
void sub_003BFA80_0x3bfa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFA80_0x3bfa80");
#endif

    ctx->pc = 0x3bfa80u;

    // 0x3bfa80: 0x3e00008  jr          $ra
    ctx->pc = 0x3BFA80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFA80u;
            // 0x3bfa84: 0x8c820e30  lw          $v0, 0xE30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3632)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BFA88u;
    // 0x3bfa88: 0x0  nop
    ctx->pc = 0x3bfa88u;
    // NOP
    // 0x3bfa8c: 0x0  nop
    ctx->pc = 0x3bfa8cu;
    // NOP
}
