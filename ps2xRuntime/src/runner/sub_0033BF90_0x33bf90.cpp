#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BF90
// Address: 0x33bf90 - 0x33bfa0
void sub_0033BF90_0x33bf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BF90_0x33bf90");
#endif

    ctx->pc = 0x33bf90u;

    // 0x33bf90: 0x3e00008  jr          $ra
    ctx->pc = 0x33BF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BF90u;
            // 0x33bf94: 0x84820054  lh          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33BF98u;
    // 0x33bf98: 0x0  nop
    ctx->pc = 0x33bf98u;
    // NOP
    // 0x33bf9c: 0x0  nop
    ctx->pc = 0x33bf9cu;
    // NOP
}
