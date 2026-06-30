#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BF698
// Address: 0x1bf698 - 0x1bf6a8
void sub_001BF698_0x1bf698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF698_0x1bf698");
#endif

    ctx->pc = 0x1bf698u;

    // 0x1bf698: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1bf698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1bf69c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF69Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF69Cu;
            // 0x1bf6a0: 0x8c62a244  lw          $v0, -0x5DBC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943300)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF6A4u;
    // 0x1bf6a4: 0x0  nop
    ctx->pc = 0x1bf6a4u;
    // NOP
}
