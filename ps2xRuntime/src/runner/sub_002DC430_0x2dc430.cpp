#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DC430
// Address: 0x2dc430 - 0x2dc450
void sub_002DC430_0x2dc430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC430_0x2dc430");
#endif

    ctx->pc = 0x2dc430u;

    // 0x2dc430: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2dc430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2dc434: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2dc434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2dc438: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2dc438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2dc43c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2dc43cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2dc440: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2dc440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2dc444: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x2dc444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x2dc448: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC448u;
            // 0x2dc44c: 0xac800054  sw          $zero, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC450u;
}
