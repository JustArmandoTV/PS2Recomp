#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F47A0
// Address: 0x3f47a0 - 0x3f47b0
void sub_003F47A0_0x3f47a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F47A0_0x3f47a0");
#endif

    ctx->pc = 0x3f47a0u;

    // 0x3f47a0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3f47a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3f47a4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3f47a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3f47a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F47A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F47ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F47A8u;
            // 0x3f47ac: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F47B0u;
}
