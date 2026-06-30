#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E30B0
// Address: 0x2e30b0 - 0x2e30d0
void sub_002E30B0_0x2e30b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E30B0_0x2e30b0");
#endif

    ctx->pc = 0x2e30b0u;

    // 0x2e30b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e30b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e30b4: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x2e30b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x2e30b8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e30bc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e30c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E30C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E30C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E30C0u;
            // 0x2e30c4: 0x80420433  lb          $v0, 0x433($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1075)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E30C8u;
    // 0x2e30c8: 0x0  nop
    ctx->pc = 0x2e30c8u;
    // NOP
    // 0x2e30cc: 0x0  nop
    ctx->pc = 0x2e30ccu;
    // NOP
}
