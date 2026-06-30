#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384860
// Address: 0x384860 - 0x384870
void sub_00384860_0x384860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384860_0x384860");
#endif

    ctx->pc = 0x384860u;

    // 0x384860: 0x3e00008  jr          $ra
    ctx->pc = 0x384860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384860u;
            // 0x384864: 0xac850118  sw          $a1, 0x118($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384868u;
    // 0x384868: 0x0  nop
    ctx->pc = 0x384868u;
    // NOP
    // 0x38486c: 0x0  nop
    ctx->pc = 0x38486cu;
    // NOP
}
