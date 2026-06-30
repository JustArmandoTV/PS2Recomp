#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384720
// Address: 0x384720 - 0x384730
void sub_00384720_0x384720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384720_0x384720");
#endif

    ctx->pc = 0x384720u;

    // 0x384720: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x384720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x384724: 0x3e00008  jr          $ra
    ctx->pc = 0x384724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384724u;
            // 0x384728: 0x8c420e30  lw          $v0, 0xE30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3632)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38472Cu;
    // 0x38472c: 0x0  nop
    ctx->pc = 0x38472cu;
    // NOP
}
