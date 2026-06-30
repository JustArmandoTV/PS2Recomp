#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5778
// Address: 0x1a5778 - 0x1a5788
void sub_001A5778_0x1a5778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5778_0x1a5778");
#endif

    ctx->pc = 0x1a5778u;

    // 0x1a5778: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1a5778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1a577c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A577Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A577Cu;
            // 0x1a5780: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5784u;
    // 0x1a5784: 0x0  nop
    ctx->pc = 0x1a5784u;
    // NOP
}
