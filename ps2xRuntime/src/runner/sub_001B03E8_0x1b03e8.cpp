#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B03E8
// Address: 0x1b03e8 - 0x1b03f8
void sub_001B03E8_0x1b03e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B03E8_0x1b03e8");
#endif

    ctx->pc = 0x1b03e8u;

    // 0x1b03e8: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B03E8u;
    {
        const bool branch_taken_0x1b03e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b03e8) {
            ctx->pc = 0x1B03ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B03E8u;
            // 0x1b03ec: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B03F0u;
            goto label_1b03f0;
        }
    }
    ctx->pc = 0x1B03F0u;
label_1b03f0:
    // 0x1b03f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B03F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B03F8u;
}
