#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00500860
// Address: 0x500860 - 0x500870
void sub_00500860_0x500860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500860_0x500860");
#endif

    ctx->pc = 0x500860u;

    // 0x500860: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x500860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x500864: 0x3e00008  jr          $ra
    ctx->pc = 0x500864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500864u;
            // 0x500868: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50086Cu;
    // 0x50086c: 0x0  nop
    ctx->pc = 0x50086cu;
    // NOP
}
