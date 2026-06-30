#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139C40
// Address: 0x139c40 - 0x139c60
void sub_00139C40_0x139c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139C40_0x139c40");
#endif

    ctx->pc = 0x139c40u;

    // 0x139c40: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x139c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x139c44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x139c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x139c48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x139c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x139c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x139C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139C4Cu;
            // 0x139c50: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139C54u;
    // 0x139c54: 0x0  nop
    ctx->pc = 0x139c54u;
    // NOP
    // 0x139c58: 0x0  nop
    ctx->pc = 0x139c58u;
    // NOP
    // 0x139c5c: 0x0  nop
    ctx->pc = 0x139c5cu;
    // NOP
}
