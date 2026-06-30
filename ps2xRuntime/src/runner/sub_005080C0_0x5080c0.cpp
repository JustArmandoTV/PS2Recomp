#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005080C0
// Address: 0x5080c0 - 0x5080d0
void sub_005080C0_0x5080c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005080C0_0x5080c0");
#endif

    ctx->pc = 0x5080c0u;

    // 0x5080c0: 0x3e00008  jr          $ra
    ctx->pc = 0x5080C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5080C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5080C0u;
            // 0x5080c4: 0xa085004c  sb          $a1, 0x4C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 76), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5080C8u;
    // 0x5080c8: 0x0  nop
    ctx->pc = 0x5080c8u;
    // NOP
    // 0x5080cc: 0x0  nop
    ctx->pc = 0x5080ccu;
    // NOP
}
