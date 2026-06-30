#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D9170
// Address: 0x2d9170 - 0x2d9180
void sub_002D9170_0x2d9170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9170_0x2d9170");
#endif

    ctx->pc = 0x2d9170u;

    // 0x2d9170: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9170u;
            // 0x2d9174: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9178u;
    // 0x2d9178: 0x0  nop
    ctx->pc = 0x2d9178u;
    // NOP
    // 0x2d917c: 0x0  nop
    ctx->pc = 0x2d917cu;
    // NOP
}
