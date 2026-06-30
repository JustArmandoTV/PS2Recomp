#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00428870
// Address: 0x428870 - 0x428880
void sub_00428870_0x428870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00428870_0x428870");
#endif

    ctx->pc = 0x428870u;

    // 0x428870: 0x3e00008  jr          $ra
    ctx->pc = 0x428870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428870u;
            // 0x428874: 0xac850160  sw          $a1, 0x160($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x428878u;
    // 0x428878: 0x0  nop
    ctx->pc = 0x428878u;
    // NOP
    // 0x42887c: 0x0  nop
    ctx->pc = 0x42887cu;
    // NOP
}
