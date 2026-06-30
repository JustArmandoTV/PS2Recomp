#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0A50
// Address: 0x1b0a50 - 0x1b0a78
void sub_001B0A50_0x1b0a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0A50_0x1b0a50");
#endif

    ctx->pc = 0x1b0a50u;

    // 0x1b0a50: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b0a50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b0a54: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1b0a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1b0a58: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x1b0a58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x1b0a5c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1b0a5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1b0a60: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1b0a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1b0a64: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1b0a64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1b0a68: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x1b0a68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1b0a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0A6Cu;
            // 0x1b0a70: 0xfc850000  sd          $a1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0A74u;
    // 0x1b0a74: 0x0  nop
    ctx->pc = 0x1b0a74u;
    // NOP
}
