#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033C030
// Address: 0x33c030 - 0x33c040
void sub_0033C030_0x33c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C030_0x33c030");
#endif

    ctx->pc = 0x33c030u;

    // 0x33c030: 0x3e00008  jr          $ra
    ctx->pc = 0x33C030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C030u;
            // 0x33c034: 0x9482119c  lhu         $v0, 0x119C($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4508)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33C038u;
    // 0x33c038: 0x0  nop
    ctx->pc = 0x33c038u;
    // NOP
    // 0x33c03c: 0x0  nop
    ctx->pc = 0x33c03cu;
    // NOP
}
