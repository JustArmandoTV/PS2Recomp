#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0458
// Address: 0x1b0458 - 0x1b0480
void sub_001B0458_0x1b0458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0458_0x1b0458");
#endif

    ctx->pc = 0x1b0458u;

    // 0x1b0458: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0458u;
    {
        const bool branch_taken_0x1b0458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B045Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0458u;
            // 0x1b045c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0458) {
            ctx->pc = 0x1B0478u;
            goto label_1b0478;
        }
    }
    ctx->pc = 0x1B0460u;
    // 0x1b0460: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b0460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b0464: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0464u;
    {
        const bool branch_taken_0x1b0464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0464) {
            ctx->pc = 0x1B0468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0464u;
            // 0x1b0468: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0478u;
            goto label_1b0478;
        }
    }
    ctx->pc = 0x1B046Cu;
    // 0x1b046c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0470: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0470u;
            // 0x1b0474: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0478u;
label_1b0478:
    // 0x1b0478: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0480u;
}
