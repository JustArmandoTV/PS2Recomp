#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3CB8
// Address: 0x1b3cb8 - 0x1b3cc8
void sub_001B3CB8_0x1b3cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3CB8_0x1b3cb8");
#endif

    ctx->pc = 0x1b3cb8u;

    // 0x1b3cb8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b3cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3cbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b3cbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3CC0u;
            // 0x1b3cc4: 0xac83004c  sw          $v1, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3CC8u;
}
