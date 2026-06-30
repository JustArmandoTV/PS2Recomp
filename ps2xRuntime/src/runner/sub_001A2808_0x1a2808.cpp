#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2808
// Address: 0x1a2808 - 0x1a2810
void sub_001A2808_0x1a2808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2808_0x1a2808");
#endif

    ctx->pc = 0x1a2808u;

    // 0x1a2808: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A280Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2808u;
            // 0x1a280c: 0xac85006c  sw          $a1, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2810u;
}
