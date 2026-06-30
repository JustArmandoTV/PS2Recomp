#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C430
// Address: 0x51c430 - 0x51c440
void sub_0051C430_0x51c430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C430_0x51c430");
#endif

    ctx->pc = 0x51c430u;

    // 0x51c430: 0xac8503a0  sw          $a1, 0x3A0($a0)
    ctx->pc = 0x51c430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 928), GPR_U32(ctx, 5));
    // 0x51c434: 0x3e00008  jr          $ra
    ctx->pc = 0x51C434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C434u;
            // 0x51c438: 0xac8603a4  sw          $a2, 0x3A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 932), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C43Cu;
    // 0x51c43c: 0x0  nop
    ctx->pc = 0x51c43cu;
    // NOP
}
