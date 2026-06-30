#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00352D10
// Address: 0x352d10 - 0x352d20
void sub_00352D10_0x352d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352D10_0x352d10");
#endif

    ctx->pc = 0x352d10u;

    // 0x352d10: 0x3e00008  jr          $ra
    ctx->pc = 0x352D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352D10u;
            // 0x352d14: 0x90820074  lbu         $v0, 0x74($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352D18u;
    // 0x352d18: 0x0  nop
    ctx->pc = 0x352d18u;
    // NOP
    // 0x352d1c: 0x0  nop
    ctx->pc = 0x352d1cu;
    // NOP
}
