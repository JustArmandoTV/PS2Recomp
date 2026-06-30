#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C690
// Address: 0x15c690 - 0x15c6a0
void sub_0015C690_0x15c690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C690_0x15c690");
#endif

    ctx->pc = 0x15c690u;

    // 0x15c690: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x15c690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x15c694: 0x3e00008  jr          $ra
    ctx->pc = 0x15C694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C694u;
            // 0x15c698: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C69Cu;
    // 0x15c69c: 0x0  nop
    ctx->pc = 0x15c69cu;
    // NOP
}
