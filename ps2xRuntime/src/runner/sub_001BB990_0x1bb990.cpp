#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB990
// Address: 0x1bb990 - 0x1bb9a0
void sub_001BB990_0x1bb990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB990_0x1bb990");
#endif

    ctx->pc = 0x1bb990u;

    // 0x1bb990: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1bb990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1bb994: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb998: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB998u;
            // 0x1bb99c: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB9A0u;
}
