#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001700D0
// Address: 0x1700d0 - 0x1700e0
void sub_001700D0_0x1700d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001700D0_0x1700d0");
#endif

    ctx->pc = 0x1700d0u;

    // 0x1700d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1700D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1700D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1700D0u;
            // 0x1700d4: 0xac85003c  sw          $a1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1700D8u;
    // 0x1700d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1700D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1700DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1700D8u;
            // 0x1700dc: 0x8c82003c  lw          $v0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1700E0u;
}
