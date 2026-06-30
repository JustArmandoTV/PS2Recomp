#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E3290
// Address: 0x2e3290 - 0x2e32b0
void sub_002E3290_0x2e3290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3290_0x2e3290");
#endif

    ctx->pc = 0x2e3290u;

    // 0x2e3290: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e3290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e3294: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x2e3294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
    // 0x2e3298: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2e3298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e329c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e329cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e32a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E32A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E32A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E32A0u;
            // 0x2e32a4: 0xa0650432  sb          $a1, 0x432($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1074), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E32A8u;
    // 0x2e32a8: 0x0  nop
    ctx->pc = 0x2e32a8u;
    // NOP
    // 0x2e32ac: 0x0  nop
    ctx->pc = 0x2e32acu;
    // NOP
}
