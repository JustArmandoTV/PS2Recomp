#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00401810
// Address: 0x401810 - 0x401820
void sub_00401810_0x401810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00401810_0x401810");
#endif

    ctx->pc = 0x401810u;

    // 0x401810: 0x3e00008  jr          $ra
    ctx->pc = 0x401810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x401814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401810u;
            // 0x401814: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x401818u;
    // 0x401818: 0x0  nop
    ctx->pc = 0x401818u;
    // NOP
    // 0x40181c: 0x0  nop
    ctx->pc = 0x40181cu;
    // NOP
}
