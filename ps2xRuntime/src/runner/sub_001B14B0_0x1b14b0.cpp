#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B14B0
// Address: 0x1b14b0 - 0x1b14c0
void sub_001B14B0_0x1b14b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B14B0_0x1b14b0");
#endif

    ctx->pc = 0x1b14b0u;

    // 0x1b14b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b14b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B14B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B14B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B14B4u;
            // 0x1b14b8: 0xac449bc0  sw          $a0, -0x6440($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294941632), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B14BCu;
    // 0x1b14bc: 0x0  nop
    ctx->pc = 0x1b14bcu;
    // NOP
}
