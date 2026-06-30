#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C39F0
// Address: 0x3c39f0 - 0x3c3a00
void sub_003C39F0_0x3c39f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C39F0_0x3c39f0");
#endif

    ctx->pc = 0x3c39f0u;

    // 0x3c39f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C39F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C39F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C39F0u;
            // 0x3c39f4: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C39F8u;
    // 0x3c39f8: 0x0  nop
    ctx->pc = 0x3c39f8u;
    // NOP
    // 0x3c39fc: 0x0  nop
    ctx->pc = 0x3c39fcu;
    // NOP
}
