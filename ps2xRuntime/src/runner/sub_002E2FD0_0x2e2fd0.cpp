#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E2FD0
// Address: 0x2e2fd0 - 0x2e2ff0
void sub_002E2FD0_0x2e2fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2FD0_0x2e2fd0");
#endif

    ctx->pc = 0x2e2fd0u;

    // 0x2e2fd0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e2fd4: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x2e2fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x2e2fd8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e2fdc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e2fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e2fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2FE0u;
            // 0x2e2fe4: 0x8042043a  lb          $v0, 0x43A($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1082)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2FE8u;
    // 0x2e2fe8: 0x0  nop
    ctx->pc = 0x2e2fe8u;
    // NOP
    // 0x2e2fec: 0x0  nop
    ctx->pc = 0x2e2fecu;
    // NOP
}
