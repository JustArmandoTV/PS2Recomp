#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E3150
// Address: 0x2e3150 - 0x2e3170
void sub_002E3150_0x2e3150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3150_0x2e3150");
#endif

    ctx->pc = 0x2e3150u;

    // 0x2e3150: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e3150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e3154: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x2e3154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
    // 0x2e3158: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2e3158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e315c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e315cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e3160: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3160u;
            // 0x2e3164: 0xa065043c  sb          $a1, 0x43C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1084), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3168u;
    // 0x2e3168: 0x0  nop
    ctx->pc = 0x2e3168u;
    // NOP
    // 0x2e316c: 0x0  nop
    ctx->pc = 0x2e316cu;
    // NOP
}
