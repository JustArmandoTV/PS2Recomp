#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00386BB0
// Address: 0x386bb0 - 0x386bd0
void sub_00386BB0_0x386bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386BB0_0x386bb0");
#endif

    ctx->pc = 0x386bb0u;

    // 0x386bb0: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x386bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x386bb4: 0xc02827  not         $a1, $a2
    ctx->pc = 0x386bb4u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
    // 0x386bb8: 0x8c8600b0  lw          $a2, 0xB0($a0)
    ctx->pc = 0x386bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x386bbc: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x386bbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x386bc0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x386bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x386bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x386BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386BC4u;
            // 0x386bc8: 0xac8300b0  sw          $v1, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x386BCCu;
    // 0x386bcc: 0x0  nop
    ctx->pc = 0x386bccu;
    // NOP
}
