#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051A9C0
// Address: 0x51a9c0 - 0x51a9d0
void sub_0051A9C0_0x51a9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051A9C0_0x51a9c0");
#endif

    ctx->pc = 0x51a9c0u;

    // 0x51a9c0: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x51a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x51a9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x51A9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51A9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A9C4u;
            // 0x51a9c8: 0x451024  and         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51A9CCu;
    // 0x51a9cc: 0x0  nop
    ctx->pc = 0x51a9ccu;
    // NOP
}
