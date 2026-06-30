#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169670
// Address: 0x169670 - 0x169688
void sub_00169670_0x169670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169670_0x169670");
#endif

    ctx->pc = 0x169670u;

    // 0x169670: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x169670u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x169674: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x169674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x169678: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16967c: 0x8c6376b0  lw          $v1, 0x76B0($v1)
    ctx->pc = 0x16967cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30384)));
    // 0x169680: 0x3e00008  jr          $ra
    ctx->pc = 0x169680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169680u;
            // 0x169684: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169688u;
}
