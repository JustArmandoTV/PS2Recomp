#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E05B0
// Address: 0x3e05b0 - 0x3e05c0
void sub_003E05B0_0x3e05b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E05B0_0x3e05b0");
#endif

    ctx->pc = 0x3e05b0u;

    // 0x3e05b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e05b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3e05b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E05B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E05B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E05B4u;
            // 0x3e05b8: 0x8c426ee0  lw          $v0, 0x6EE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28384)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E05BCu;
    // 0x3e05bc: 0x0  nop
    ctx->pc = 0x3e05bcu;
    // NOP
}
