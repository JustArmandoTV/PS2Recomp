#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00567440
// Address: 0x567440 - 0x567450
void sub_00567440_0x567440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00567440_0x567440");
#endif

    ctx->pc = 0x567440u;

    // 0x567440: 0x3e00008  jr          $ra
    ctx->pc = 0x567440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x567444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567440u;
            // 0x567444: 0x2482002c  addiu       $v0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x567448u;
    // 0x567448: 0x0  nop
    ctx->pc = 0x567448u;
    // NOP
    // 0x56744c: 0x0  nop
    ctx->pc = 0x56744cu;
    // NOP
}
