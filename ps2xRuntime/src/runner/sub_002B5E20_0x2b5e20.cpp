#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B5E20
// Address: 0x2b5e20 - 0x2b5e30
void sub_002B5E20_0x2b5e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5E20_0x2b5e20");
#endif

    ctx->pc = 0x2b5e20u;

    // 0x2b5e20: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x2b5e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2b5e24: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5E24u;
            // 0x2b5e28: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5E2Cu;
    // 0x2b5e2c: 0x0  nop
    ctx->pc = 0x2b5e2cu;
    // NOP
}
