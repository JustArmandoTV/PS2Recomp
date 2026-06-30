#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00153100
// Address: 0x153100 - 0x153110
void sub_00153100_0x153100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153100_0x153100");
#endif

    ctx->pc = 0x153100u;

    // 0x153100: 0x3e00008  jr          $ra
    ctx->pc = 0x153100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153100u;
            // 0x153104: 0xaf84838c  sw          $a0, -0x7C74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935436), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x153108u;
    // 0x153108: 0x0  nop
    ctx->pc = 0x153108u;
    // NOP
    // 0x15310c: 0x0  nop
    ctx->pc = 0x15310cu;
    // NOP
}
