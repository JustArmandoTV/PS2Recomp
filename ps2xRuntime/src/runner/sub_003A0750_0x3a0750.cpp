#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A0750
// Address: 0x3a0750 - 0x3a0760
void sub_003A0750_0x3a0750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0750_0x3a0750");
#endif

    ctx->pc = 0x3a0750u;

    // 0x3a0750: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a0750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3a0754: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0754u;
            // 0x3a0758: 0x8c426498  lw          $v0, 0x6498($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25752)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A075Cu;
    // 0x3a075c: 0x0  nop
    ctx->pc = 0x3a075cu;
    // NOP
}
