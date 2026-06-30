#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047B7B0
// Address: 0x47b7b0 - 0x47b7c0
void sub_0047B7B0_0x47b7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B7B0_0x47b7b0");
#endif

    ctx->pc = 0x47b7b0u;

    // 0x47b7b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x47b7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x47B7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47B7B4u;
            // 0x47b7b8: 0x8c420d50  lw          $v0, 0xD50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3408)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47B7BCu;
    // 0x47b7bc: 0x0  nop
    ctx->pc = 0x47b7bcu;
    // NOP
}
