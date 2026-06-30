#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E3030
// Address: 0x2e3030 - 0x2e3050
void sub_002E3030_0x2e3030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3030_0x2e3030");
#endif

    ctx->pc = 0x2e3030u;

    // 0x2e3030: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e3030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e3034: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x2e3034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x2e3038: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e3038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e303c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e303cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e3040: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3040u;
            // 0x2e3044: 0x80420437  lb          $v0, 0x437($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1079)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3048u;
    // 0x2e3048: 0x0  nop
    ctx->pc = 0x2e3048u;
    // NOP
    // 0x2e304c: 0x0  nop
    ctx->pc = 0x2e304cu;
    // NOP
}
