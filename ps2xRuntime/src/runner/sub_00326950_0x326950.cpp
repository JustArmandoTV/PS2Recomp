#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00326950
// Address: 0x326950 - 0x326960
void sub_00326950_0x326950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326950_0x326950");
#endif

    ctx->pc = 0x326950u;

    // 0x326950: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x326950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x326954: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x326954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326958: 0x3e00008  jr          $ra
    ctx->pc = 0x326958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32695Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326958u;
            // 0x32695c: 0x244205dc  addiu       $v0, $v0, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x326960u;
}
