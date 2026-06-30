#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2508
// Address: 0x1b2508 - 0x1b2530
void sub_001B2508_0x1b2508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2508_0x1b2508");
#endif

    ctx->pc = 0x1b2508u;

    // 0x1b2508: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1b2508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1b250c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b250cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b2510: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x1b2510u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b2514: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2514u;
    {
        const bool branch_taken_0x1b2514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2514u;
            // 0x1b2518: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2514) {
            ctx->pc = 0x1B2524u;
            goto label_1b2524;
        }
    }
    ctx->pc = 0x1B251Cu;
    // 0x1b251c: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1b251cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1b2520: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b2524:
    // 0x1b2524: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B252Cu;
    // 0x1b252c: 0x0  nop
    ctx->pc = 0x1b252cu;
    // NOP
}
