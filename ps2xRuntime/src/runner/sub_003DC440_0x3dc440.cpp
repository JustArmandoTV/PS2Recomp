#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DC440
// Address: 0x3dc440 - 0x3dc450
void sub_003DC440_0x3dc440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC440_0x3dc440");
#endif

    ctx->pc = 0x3dc440u;

    // 0x3dc440: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DC440u;
            // 0x3dc444: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DC448u;
    // 0x3dc448: 0x0  nop
    ctx->pc = 0x3dc448u;
    // NOP
    // 0x3dc44c: 0x0  nop
    ctx->pc = 0x3dc44cu;
    // NOP
}
