#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D9160
// Address: 0x2d9160 - 0x2d9170
void sub_002D9160_0x2d9160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9160_0x2d9160");
#endif

    ctx->pc = 0x2d9160u;

    // 0x2d9160: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9160u;
            // 0x2d9164: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9168u;
    // 0x2d9168: 0x0  nop
    ctx->pc = 0x2d9168u;
    // NOP
    // 0x2d916c: 0x0  nop
    ctx->pc = 0x2d916cu;
    // NOP
}
