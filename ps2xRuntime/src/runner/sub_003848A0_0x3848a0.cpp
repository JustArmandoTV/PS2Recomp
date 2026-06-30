#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003848A0
// Address: 0x3848a0 - 0x3848b0
void sub_003848A0_0x3848a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003848A0_0x3848a0");
#endif

    ctx->pc = 0x3848a0u;

    // 0x3848a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3848A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3848A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3848A0u;
            // 0x3848a4: 0xac850050  sw          $a1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3848A8u;
    // 0x3848a8: 0x0  nop
    ctx->pc = 0x3848a8u;
    // NOP
    // 0x3848ac: 0x0  nop
    ctx->pc = 0x3848acu;
    // NOP
}
