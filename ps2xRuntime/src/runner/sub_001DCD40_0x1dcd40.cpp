#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCD40
// Address: 0x1dcd40 - 0x1dcd50
void sub_001DCD40_0x1dcd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCD40_0x1dcd40");
#endif

    ctx->pc = 0x1dcd40u;

    // 0x1dcd40: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCD40u;
            // 0x1dcd44: 0x8c820da8  lw          $v0, 0xDA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3496)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCD48u;
    // 0x1dcd48: 0x0  nop
    ctx->pc = 0x1dcd48u;
    // NOP
    // 0x1dcd4c: 0x0  nop
    ctx->pc = 0x1dcd4cu;
    // NOP
}
