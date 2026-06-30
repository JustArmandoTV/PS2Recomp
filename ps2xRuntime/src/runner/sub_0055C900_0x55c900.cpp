#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055C900
// Address: 0x55c900 - 0x55c940
void sub_0055C900_0x55c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055C900_0x55c900");
#endif

    ctx->pc = 0x55c900u;

    // 0x55c900: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x55c900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x55c904: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x55c904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x55c908: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x55c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x55c90c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x55c90cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x55c910: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x55c910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x55c914: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x55c914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x55c918: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x55c918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x55c91c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x55c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x55c920: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x55c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x55c924: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x55c924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x55c928: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x55c928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x55c92c: 0x3e00008  jr          $ra
    ctx->pc = 0x55C92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55C930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C92Cu;
            // 0x55c930: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55C934u;
    // 0x55c934: 0x0  nop
    ctx->pc = 0x55c934u;
    // NOP
    // 0x55c938: 0x0  nop
    ctx->pc = 0x55c938u;
    // NOP
    // 0x55c93c: 0x0  nop
    ctx->pc = 0x55c93cu;
    // NOP
}
