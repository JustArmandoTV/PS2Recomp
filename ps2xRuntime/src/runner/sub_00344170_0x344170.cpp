#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00344170
// Address: 0x344170 - 0x344180
void sub_00344170_0x344170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344170_0x344170");
#endif

    ctx->pc = 0x344170u;

    // 0x344170: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x344170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x344174: 0x3e00008  jr          $ra
    ctx->pc = 0x344174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344174u;
            // 0x344178: 0x8c4289f0  lw          $v0, -0x7610($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34417Cu;
    // 0x34417c: 0x0  nop
    ctx->pc = 0x34417cu;
    // NOP
}
