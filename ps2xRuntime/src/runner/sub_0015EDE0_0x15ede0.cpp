#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015EDE0
// Address: 0x15ede0 - 0x15edf0
void sub_0015EDE0_0x15ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EDE0_0x15ede0");
#endif

    ctx->pc = 0x15ede0u;

    // 0x15ede0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ede4: 0x3e00008  jr          $ra
    ctx->pc = 0x15EDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EDE4u;
            // 0x15ede8: 0xa0830124  sb          $v1, 0x124($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 292), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15EDECu;
    // 0x15edec: 0x0  nop
    ctx->pc = 0x15edecu;
    // NOP
}
