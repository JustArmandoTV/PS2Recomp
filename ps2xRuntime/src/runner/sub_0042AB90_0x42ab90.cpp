#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042AB90
// Address: 0x42ab90 - 0x42aba0
void sub_0042AB90_0x42ab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042AB90_0x42ab90");
#endif

    ctx->pc = 0x42ab90u;

    // 0x42ab90: 0x3e00008  jr          $ra
    ctx->pc = 0x42AB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42AB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AB90u;
            // 0x42ab94: 0x8c820cc8  lw          $v0, 0xCC8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3272)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42AB98u;
    // 0x42ab98: 0x0  nop
    ctx->pc = 0x42ab98u;
    // NOP
    // 0x42ab9c: 0x0  nop
    ctx->pc = 0x42ab9cu;
    // NOP
}
