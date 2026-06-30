#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC300
// Address: 0x1dc300 - 0x1dc310
void sub_001DC300_0x1dc300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC300_0x1dc300");
#endif

    ctx->pc = 0x1dc300u;

    // 0x1dc300: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC300u;
            // 0x1dc304: 0x24820580  addiu       $v0, $a0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1408));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC308u;
    // 0x1dc308: 0x0  nop
    ctx->pc = 0x1dc308u;
    // NOP
    // 0x1dc30c: 0x0  nop
    ctx->pc = 0x1dc30cu;
    // NOP
}
