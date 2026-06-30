#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225CE0
// Address: 0x225ce0 - 0x225cf0
void sub_00225CE0_0x225ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225CE0_0x225ce0");
#endif

    ctx->pc = 0x225ce0u;

    // 0x225ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x225CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225CE0u;
            // 0x225ce4: 0xa48500c4  sh          $a1, 0xC4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225CE8u;
    // 0x225ce8: 0x0  nop
    ctx->pc = 0x225ce8u;
    // NOP
    // 0x225cec: 0x0  nop
    ctx->pc = 0x225cecu;
    // NOP
}
