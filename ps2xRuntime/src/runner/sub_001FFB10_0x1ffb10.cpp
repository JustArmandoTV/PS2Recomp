#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FFB10
// Address: 0x1ffb10 - 0x1ffb20
void sub_001FFB10_0x1ffb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFB10_0x1ffb10");
#endif

    ctx->pc = 0x1ffb10u;

    // 0x1ffb10: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFB10u;
            // 0x1ffb14: 0xa0851c32  sb          $a1, 0x1C32($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 7218), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FFB18u;
    // 0x1ffb18: 0x0  nop
    ctx->pc = 0x1ffb18u;
    // NOP
    // 0x1ffb1c: 0x0  nop
    ctx->pc = 0x1ffb1cu;
    // NOP
}
