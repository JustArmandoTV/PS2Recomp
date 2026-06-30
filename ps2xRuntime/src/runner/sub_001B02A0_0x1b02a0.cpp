#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B02A0
// Address: 0x1b02a0 - 0x1b02b0
void sub_001B02A0_0x1b02a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B02A0_0x1b02a0");
#endif

    ctx->pc = 0x1b02a0u;

    // 0x1b02a0: 0x8c832030  lw          $v1, 0x2030($a0)
    ctx->pc = 0x1b02a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1b02a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B02A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B02A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B02A4u;
            // 0x1b02a8: 0x8c62007c  lw          $v0, 0x7C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B02ACu;
    // 0x1b02ac: 0x0  nop
    ctx->pc = 0x1b02acu;
    // NOP
}
