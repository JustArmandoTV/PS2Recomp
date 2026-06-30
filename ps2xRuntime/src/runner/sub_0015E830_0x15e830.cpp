#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015E830
// Address: 0x15e830 - 0x15e840
void sub_0015E830_0x15e830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E830_0x15e830");
#endif

    ctx->pc = 0x15e830u;

    // 0x15e830: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15e830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15e834: 0x3e00008  jr          $ra
    ctx->pc = 0x15E834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E834u;
            // 0x15e838: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E83Cu;
    // 0x15e83c: 0x0  nop
    ctx->pc = 0x15e83cu;
    // NOP
}
