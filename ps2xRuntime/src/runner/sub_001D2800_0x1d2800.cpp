#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2800
// Address: 0x1d2800 - 0x1d2820
void sub_001D2800_0x1d2800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2800_0x1d2800");
#endif

    ctx->pc = 0x1d2800u;

    // 0x1d2800: 0x41902  srl         $v1, $a0, 4
    ctx->pc = 0x1d2800u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x1d2804: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d2804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d2808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d2808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d280c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d280cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d2810: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d2810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d2814: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2814u;
            // 0x1d2818: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D281Cu;
    // 0x1d281c: 0x0  nop
    ctx->pc = 0x1d281cu;
    // NOP
}
