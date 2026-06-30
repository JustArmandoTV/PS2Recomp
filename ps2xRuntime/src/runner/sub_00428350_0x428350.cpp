#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00428350
// Address: 0x428350 - 0x428360
void sub_00428350_0x428350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00428350_0x428350");
#endif

    ctx->pc = 0x428350u;

    // 0x428350: 0x3e00008  jr          $ra
    ctx->pc = 0x428350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428350u;
            // 0x428354: 0xa08011a9  sb          $zero, 0x11A9($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4521), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x428358u;
    // 0x428358: 0x0  nop
    ctx->pc = 0x428358u;
    // NOP
    // 0x42835c: 0x0  nop
    ctx->pc = 0x42835cu;
    // NOP
}
