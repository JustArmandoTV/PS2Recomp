#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA190
// Address: 0x1ba190 - 0x1ba1a0
void sub_001BA190_0x1ba190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA190_0x1ba190");
#endif

    ctx->pc = 0x1ba190u;

    // 0x1ba190: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ba190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ba194: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA194u;
            // 0x1ba198: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA19Cu;
    // 0x1ba19c: 0x0  nop
    ctx->pc = 0x1ba19cu;
    // NOP
}
