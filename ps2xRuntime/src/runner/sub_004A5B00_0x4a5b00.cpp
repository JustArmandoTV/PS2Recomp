#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A5B00
// Address: 0x4a5b00 - 0x4a5b10
void sub_004A5B00_0x4a5b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5B00_0x4a5b00");
#endif

    ctx->pc = 0x4a5b00u;

    // 0x4a5b00: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a5b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4a5b04: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5B04u;
            // 0x4a5b08: 0x8c420e48  lw          $v0, 0xE48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3656)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A5B0Cu;
    // 0x4a5b0c: 0x0  nop
    ctx->pc = 0x4a5b0cu;
    // NOP
}
