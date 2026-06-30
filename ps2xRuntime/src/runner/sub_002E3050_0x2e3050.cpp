#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E3050
// Address: 0x2e3050 - 0x2e3070
void sub_002E3050_0x2e3050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3050_0x2e3050");
#endif

    ctx->pc = 0x2e3050u;

    // 0x2e3050: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e3050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e3054: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x2e3054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x2e3058: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e3058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e305c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e305cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e3060: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3060u;
            // 0x2e3064: 0x80420436  lb          $v0, 0x436($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1078)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3068u;
    // 0x2e3068: 0x0  nop
    ctx->pc = 0x2e3068u;
    // NOP
    // 0x2e306c: 0x0  nop
    ctx->pc = 0x2e306cu;
    // NOP
}
