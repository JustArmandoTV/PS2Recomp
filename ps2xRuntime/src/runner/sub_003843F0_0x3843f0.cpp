#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003843F0
// Address: 0x3843f0 - 0x384400
void sub_003843F0_0x3843f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003843F0_0x3843f0");
#endif

    ctx->pc = 0x3843f0u;

    // 0x3843f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3843F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3843F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3843F0u;
            // 0x3843f4: 0x8082010e  lb          $v0, 0x10E($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 270)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3843F8u;
    // 0x3843f8: 0x0  nop
    ctx->pc = 0x3843f8u;
    // NOP
    // 0x3843fc: 0x0  nop
    ctx->pc = 0x3843fcu;
    // NOP
}
