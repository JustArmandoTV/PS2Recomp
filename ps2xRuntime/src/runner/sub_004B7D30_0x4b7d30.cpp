#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B7D30
// Address: 0x4b7d30 - 0x4b7d50
void sub_004B7D30_0x4b7d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7D30_0x4b7d30");
#endif

    ctx->pc = 0x4b7d30u;

    // 0x4b7d30: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4b7d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b7d34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b7d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b7d38: 0xa02827  not         $a1, $a1
    ctx->pc = 0x4b7d38u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x4b7d3c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4b7d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4b7d40: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B7D40u;
            // 0x4b7d44: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B7D48u;
    // 0x4b7d48: 0x0  nop
    ctx->pc = 0x4b7d48u;
    // NOP
    // 0x4b7d4c: 0x0  nop
    ctx->pc = 0x4b7d4cu;
    // NOP
}
