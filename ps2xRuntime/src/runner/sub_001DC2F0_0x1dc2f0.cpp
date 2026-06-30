#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC2F0
// Address: 0x1dc2f0 - 0x1dc300
void sub_001DC2F0_0x1dc2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC2F0_0x1dc2f0");
#endif

    ctx->pc = 0x1dc2f0u;

    // 0x1dc2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC2F0u;
            // 0x1dc2f4: 0x908211a4  lbu         $v0, 0x11A4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4516)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC2F8u;
    // 0x1dc2f8: 0x0  nop
    ctx->pc = 0x1dc2f8u;
    // NOP
    // 0x1dc2fc: 0x0  nop
    ctx->pc = 0x1dc2fcu;
    // NOP
}
