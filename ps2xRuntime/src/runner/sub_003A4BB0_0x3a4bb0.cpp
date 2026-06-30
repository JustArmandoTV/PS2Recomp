#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A4BB0
// Address: 0x3a4bb0 - 0x3a4bc0
void sub_003A4BB0_0x3a4bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4BB0_0x3a4bb0");
#endif

    ctx->pc = 0x3a4bb0u;

    // 0x3a4bb0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3a4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3a4bb4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3a4bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a4bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4BB8u;
            // 0x3a4bbc: 0x24420094  addiu       $v0, $v0, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A4BC0u;
}
