#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BEE18
// Address: 0x1bee18 - 0x1bee30
void sub_001BEE18_0x1bee18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEE18_0x1bee18");
#endif

    ctx->pc = 0x1bee18u;

    // 0x1bee18: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1bee18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1bee1c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1bee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1bee20: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1bee20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1bee24: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1bee24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1bee28: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEE28u;
            // 0x1bee2c: 0xac800048  sw          $zero, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEE30u;
}
