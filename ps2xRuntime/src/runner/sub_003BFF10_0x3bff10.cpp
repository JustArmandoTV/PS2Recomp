#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BFF10
// Address: 0x3bff10 - 0x3bff30
void sub_003BFF10_0x3bff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFF10_0x3bff10");
#endif

    ctx->pc = 0x3bff10u;

    // 0x3bff10: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x3bff10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x3bff14: 0xc02827  not         $a1, $a2
    ctx->pc = 0x3bff14u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
    // 0x3bff18: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3bff18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bff1c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x3bff1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x3bff20: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3bff20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3bff24: 0x3e00008  jr          $ra
    ctx->pc = 0x3BFF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFF24u;
            // 0x3bff28: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BFF2Cu;
    // 0x3bff2c: 0x0  nop
    ctx->pc = 0x3bff2cu;
    // NOP
}
