#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF760
// Address: 0x3bf760 - 0x3bf770
void sub_003BF760_0x3bf760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF760_0x3bf760");
#endif

    ctx->pc = 0x3bf760u;

    // 0x3bf760: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF760u;
            // 0x3bf764: 0xac850e30  sw          $a1, 0xE30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3632), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF768u;
    // 0x3bf768: 0x0  nop
    ctx->pc = 0x3bf768u;
    // NOP
    // 0x3bf76c: 0x0  nop
    ctx->pc = 0x3bf76cu;
    // NOP
}
