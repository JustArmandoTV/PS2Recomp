#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D1610
// Address: 0x2d1610 - 0x2d1620
void sub_002D1610_0x2d1610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1610_0x2d1610");
#endif

    ctx->pc = 0x2d1610u;

    // 0x2d1610: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2d1610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d1614: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2d1614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2d1618: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D161Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1618u;
            // 0x2d161c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1620u;
}
