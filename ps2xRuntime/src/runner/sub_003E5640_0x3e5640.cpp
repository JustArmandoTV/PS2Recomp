#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E5640
// Address: 0x3e5640 - 0x3e5650
void sub_003E5640_0x3e5640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5640_0x3e5640");
#endif

    ctx->pc = 0x3e5640u;

    // 0x3e5640: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5640u;
            // 0x3e5644: 0xa0850091  sb          $a1, 0x91($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 145), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E5648u;
    // 0x3e5648: 0x0  nop
    ctx->pc = 0x3e5648u;
    // NOP
    // 0x3e564c: 0x0  nop
    ctx->pc = 0x3e564cu;
    // NOP
}
