#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3DB0
// Address: 0x1b3db0 - 0x1b3dc0
void sub_001B3DB0_0x1b3db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3DB0_0x1b3db0");
#endif

    ctx->pc = 0x1b3db0u;

    // 0x1b3db0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b3db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b3db4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3DB4u;
            // 0x1b3db8: 0xac449b84  sw          $a0, -0x647C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294941572), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3DBCu;
    // 0x1b3dbc: 0x0  nop
    ctx->pc = 0x1b3dbcu;
    // NOP
}
