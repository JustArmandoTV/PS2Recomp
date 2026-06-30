#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C47E0
// Address: 0x1c47e0 - 0x1c47f8
void sub_001C47E0_0x1c47e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C47E0_0x1c47e0");
#endif

    ctx->pc = 0x1c47e0u;

    // 0x1c47e0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1c47e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1c47e4: 0x94620014  lhu         $v0, 0x14($v1)
    ctx->pc = 0x1c47e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1c47e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c47e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c47ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C47ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C47F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C47ECu;
            // 0x1c47f0: 0xa4620014  sh          $v0, 0x14($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C47F4u;
    // 0x1c47f4: 0x0  nop
    ctx->pc = 0x1c47f4u;
    // NOP
}
