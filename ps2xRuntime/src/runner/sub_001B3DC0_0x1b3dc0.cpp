#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3DC0
// Address: 0x1b3dc0 - 0x1b3dd0
void sub_001B3DC0_0x1b3dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3DC0_0x1b3dc0");
#endif

    ctx->pc = 0x1b3dc0u;

    // 0x1b3dc0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1b3dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1b3dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3DC4u;
            // 0x1b3dc8: 0x8c629b84  lw          $v0, -0x647C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941572)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3DCCu;
    // 0x1b3dcc: 0x0  nop
    ctx->pc = 0x1b3dccu;
    // NOP
}
