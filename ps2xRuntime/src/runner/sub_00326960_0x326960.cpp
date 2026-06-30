#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00326960
// Address: 0x326960 - 0x326980
void sub_00326960_0x326960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326960_0x326960");
#endif

    ctx->pc = 0x326960u;

    // 0x326960: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x326960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x326964: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x326964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x326968: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x326968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32696c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x32696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x326970: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x326970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x326974: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x326974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326978: 0x3e00008  jr          $ra
    ctx->pc = 0x326978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32697Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326978u;
            // 0x32697c: 0x24420164  addiu       $v0, $v0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x326980u;
}
