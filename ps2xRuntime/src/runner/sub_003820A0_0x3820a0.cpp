#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003820A0
// Address: 0x3820a0 - 0x3820b0
void sub_003820A0_0x3820a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003820A0_0x3820a0");
#endif

    ctx->pc = 0x3820a0u;

    // 0x3820a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3820a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3820a4: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x3820a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x3820a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3820A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3820ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3820A8u;
            // 0x3820ac: 0xa0800024  sb          $zero, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3820B0u;
}
