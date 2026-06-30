#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001700F0
// Address: 0x1700f0 - 0x170100
void sub_001700F0_0x1700f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001700F0_0x1700f0");
#endif

    ctx->pc = 0x1700f0u;

    // 0x1700f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1700F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1700F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1700F0u;
            // 0x1700f4: 0xac850044  sw          $a1, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1700F8u;
    // 0x1700f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1700F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1700FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1700F8u;
            // 0x1700fc: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170100u;
}
