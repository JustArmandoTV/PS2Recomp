#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015E850
// Address: 0x15e850 - 0x15e860
void sub_0015E850_0x15e850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E850_0x15e850");
#endif

    ctx->pc = 0x15e850u;

    // 0x15e850: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x15e850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x15e854: 0x3e00008  jr          $ra
    ctx->pc = 0x15E854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E854u;
            // 0x15e858: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E85Cu;
    // 0x15e85c: 0x0  nop
    ctx->pc = 0x15e85cu;
    // NOP
}
