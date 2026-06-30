#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D4B0
// Address: 0x31d4b0 - 0x31d4c0
void sub_0031D4B0_0x31d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D4B0_0x31d4b0");
#endif

    ctx->pc = 0x31d4b0u;

    // 0x31d4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x31D4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D4B0u;
            // 0x31d4b4: 0xa0850034  sb          $a1, 0x34($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 52), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D4B8u;
    // 0x31d4b8: 0x0  nop
    ctx->pc = 0x31d4b8u;
    // NOP
    // 0x31d4bc: 0x0  nop
    ctx->pc = 0x31d4bcu;
    // NOP
}
