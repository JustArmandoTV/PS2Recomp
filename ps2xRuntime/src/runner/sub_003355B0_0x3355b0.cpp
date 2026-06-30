#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003355B0
// Address: 0x3355b0 - 0x3355c0
void sub_003355B0_0x3355b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003355B0_0x3355b0");
#endif

    ctx->pc = 0x3355b0u;

    // 0x3355b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3355B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3355B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3355B0u;
            // 0x3355b4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3355B8u;
    // 0x3355b8: 0x0  nop
    ctx->pc = 0x3355b8u;
    // NOP
    // 0x3355bc: 0x0  nop
    ctx->pc = 0x3355bcu;
    // NOP
}
