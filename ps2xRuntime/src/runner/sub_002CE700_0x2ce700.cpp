#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE700
// Address: 0x2ce700 - 0x2ce720
void sub_002CE700_0x2ce700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE700_0x2ce700");
#endif

    ctx->pc = 0x2ce700u;

    // 0x2ce700: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ce700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ce704: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ce704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ce708: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ce708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ce70c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x2ce70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2ce710: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE710u;
            // 0x2ce714: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE718u;
    // 0x2ce718: 0x0  nop
    ctx->pc = 0x2ce718u;
    // NOP
    // 0x2ce71c: 0x0  nop
    ctx->pc = 0x2ce71cu;
    // NOP
}
