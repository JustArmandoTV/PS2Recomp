#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00344180
// Address: 0x344180 - 0x344190
void sub_00344180_0x344180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344180_0x344180");
#endif

    ctx->pc = 0x344180u;

    // 0x344180: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x344180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x344184: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x344184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x344188: 0x3e00008  jr          $ra
    ctx->pc = 0x344188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34418Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344188u;
            // 0x34418c: 0x8c42004c  lw          $v0, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x344190u;
}
