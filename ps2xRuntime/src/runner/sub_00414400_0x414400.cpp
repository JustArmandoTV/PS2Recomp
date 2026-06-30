#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00414400
// Address: 0x414400 - 0x414410
void sub_00414400_0x414400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414400_0x414400");
#endif

    ctx->pc = 0x414400u;

    // 0x414400: 0x3e00008  jr          $ra
    ctx->pc = 0x414400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414400u;
            // 0x414404: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x414408u;
    // 0x414408: 0x0  nop
    ctx->pc = 0x414408u;
    // NOP
    // 0x41440c: 0x0  nop
    ctx->pc = 0x41440cu;
    // NOP
}
