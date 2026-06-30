#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029E6F0
// Address: 0x29e6f0 - 0x29e700
void sub_0029E6F0_0x29e6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E6F0_0x29e6f0");
#endif

    ctx->pc = 0x29e6f0u;

    // 0x29e6f0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29e6f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29e6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29e6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x29E6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E6F8u;
            // 0x29e6fc: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29E700u;
}
