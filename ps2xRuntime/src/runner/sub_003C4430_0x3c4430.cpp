#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C4430
// Address: 0x3c4430 - 0x3c4440
void sub_003C4430_0x3c4430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4430_0x3c4430");
#endif

    ctx->pc = 0x3c4430u;

    // 0x3c4430: 0x3e00008  jr          $ra
    ctx->pc = 0x3C4430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4430u;
            // 0x3c4434: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C4438u;
    // 0x3c4438: 0x0  nop
    ctx->pc = 0x3c4438u;
    // NOP
    // 0x3c443c: 0x0  nop
    ctx->pc = 0x3c443cu;
    // NOP
}
