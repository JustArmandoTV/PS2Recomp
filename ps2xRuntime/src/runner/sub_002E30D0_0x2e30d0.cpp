#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E30D0
// Address: 0x2e30d0 - 0x2e30f0
void sub_002E30D0_0x2e30d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E30D0_0x2e30d0");
#endif

    ctx->pc = 0x2e30d0u;

    // 0x2e30d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e30d4: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x2e30d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x2e30d8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e30d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e30dc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e30e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E30E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E30E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E30E0u;
            // 0x2e30e4: 0x80420432  lb          $v0, 0x432($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1074)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E30E8u;
    // 0x2e30e8: 0x0  nop
    ctx->pc = 0x2e30e8u;
    // NOP
    // 0x2e30ec: 0x0  nop
    ctx->pc = 0x2e30ecu;
    // NOP
}
