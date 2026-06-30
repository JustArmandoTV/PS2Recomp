#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041A5B0
// Address: 0x41a5b0 - 0x41a5c0
void sub_0041A5B0_0x41a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A5B0_0x41a5b0");
#endif

    ctx->pc = 0x41a5b0u;

    // 0x41a5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x41A5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A5B0u;
            // 0x41a5b4: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41A5B8u;
    // 0x41a5b8: 0x0  nop
    ctx->pc = 0x41a5b8u;
    // NOP
    // 0x41a5bc: 0x0  nop
    ctx->pc = 0x41a5bcu;
    // NOP
}
