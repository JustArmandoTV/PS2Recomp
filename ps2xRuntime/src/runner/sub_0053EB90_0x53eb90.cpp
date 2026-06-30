#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053EB90
// Address: 0x53eb90 - 0x53eba0
void sub_0053EB90_0x53eb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053EB90_0x53eb90");
#endif

    ctx->pc = 0x53eb90u;

    // 0x53eb90: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x53eb90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x53eb94: 0x3e00008  jr          $ra
    ctx->pc = 0x53EB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53EB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53EB94u;
            // 0x53eb98: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53EB9Cu;
    // 0x53eb9c: 0x0  nop
    ctx->pc = 0x53eb9cu;
    // NOP
}
