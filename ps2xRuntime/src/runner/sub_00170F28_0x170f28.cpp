#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170F28
// Address: 0x170f28 - 0x170f38
void sub_00170F28_0x170f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170F28_0x170f28");
#endif

    ctx->pc = 0x170f28u;

    // 0x170f28: 0xac860040  sw          $a2, 0x40($a0)
    ctx->pc = 0x170f28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 6));
    // 0x170f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x170F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170F2Cu;
            // 0x170f30: 0xac85003c  sw          $a1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170F34u;
    // 0x170f34: 0x0  nop
    ctx->pc = 0x170f34u;
    // NOP
}
