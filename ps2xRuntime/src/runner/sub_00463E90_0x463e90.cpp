#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00463E90
// Address: 0x463e90 - 0x463ea0
void sub_00463E90_0x463e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463E90_0x463e90");
#endif

    ctx->pc = 0x463e90u;

    // 0x463e90: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x463e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x463e94: 0x3e00008  jr          $ra
    ctx->pc = 0x463E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463E94u;
            // 0x463e98: 0x8c4275e8  lw          $v0, 0x75E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30184)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x463E9Cu;
    // 0x463e9c: 0x0  nop
    ctx->pc = 0x463e9cu;
    // NOP
}
