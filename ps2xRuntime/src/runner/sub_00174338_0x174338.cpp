#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174338
// Address: 0x174338 - 0x174340
void sub_00174338_0x174338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174338_0x174338");
#endif

    ctx->pc = 0x174338u;

    // 0x174338: 0x3e00008  jr          $ra
    ctx->pc = 0x174338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17433Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174338u;
            // 0x17433c: 0xa08500ad  sb          $a1, 0xAD($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 173), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174340u;
}
