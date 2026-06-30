#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF160
// Address: 0x3bf160 - 0x3bf170
void sub_003BF160_0x3bf160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF160_0x3bf160");
#endif

    ctx->pc = 0x3bf160u;

    // 0x3bf160: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF160u;
            // 0x3bf164: 0xac850024  sw          $a1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF168u;
    // 0x3bf168: 0x0  nop
    ctx->pc = 0x3bf168u;
    // NOP
    // 0x3bf16c: 0x0  nop
    ctx->pc = 0x3bf16cu;
    // NOP
}
