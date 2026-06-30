#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E2F90
// Address: 0x2e2f90 - 0x2e2fb0
void sub_002E2F90_0x2e2f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2F90_0x2e2f90");
#endif

    ctx->pc = 0x2e2f90u;

    // 0x2e2f90: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e2f94: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x2e2f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x2e2f98: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e2f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e2f9c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e2f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e2fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2FA0u;
            // 0x2e2fa4: 0x8042043c  lb          $v0, 0x43C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1084)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2FA8u;
    // 0x2e2fa8: 0x0  nop
    ctx->pc = 0x2e2fa8u;
    // NOP
    // 0x2e2fac: 0x0  nop
    ctx->pc = 0x2e2facu;
    // NOP
}
