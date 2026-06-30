#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00494310
// Address: 0x494310 - 0x494330
void sub_00494310_0x494310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494310_0x494310");
#endif

    ctx->pc = 0x494310u;

    // 0x494310: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x494310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x494314: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x494314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x494318: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x494318u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x49431c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x49431cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x494320: 0x3e00008  jr          $ra
    ctx->pc = 0x494320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x494324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494320u;
            // 0x494324: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x494328u;
    // 0x494328: 0x0  nop
    ctx->pc = 0x494328u;
    // NOP
    // 0x49432c: 0x0  nop
    ctx->pc = 0x49432cu;
    // NOP
}
