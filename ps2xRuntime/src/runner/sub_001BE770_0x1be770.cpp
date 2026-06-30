#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE770
// Address: 0x1be770 - 0x1be780
void sub_001BE770_0x1be770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE770_0x1be770");
#endif

    ctx->pc = 0x1be770u;

    // 0x1be770: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1be770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1be774: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE774u;
            // 0x1be778: 0xac449d4c  sw          $a0, -0x62B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294942028), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE77Cu;
    // 0x1be77c: 0x0  nop
    ctx->pc = 0x1be77cu;
    // NOP
}
