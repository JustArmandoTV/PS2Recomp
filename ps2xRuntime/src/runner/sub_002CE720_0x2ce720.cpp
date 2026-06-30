#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE720
// Address: 0x2ce720 - 0x2ce730
void sub_002CE720_0x2ce720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE720_0x2ce720");
#endif

    ctx->pc = 0x2ce720u;

    // 0x2ce720: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ce720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ce724: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ce724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ce728: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE728u;
            // 0x2ce72c: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE730u;
}
