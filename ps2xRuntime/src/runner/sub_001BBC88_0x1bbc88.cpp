#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBC88
// Address: 0x1bbc88 - 0x1bbcb0
void sub_001BBC88_0x1bbc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBC88_0x1bbc88");
#endif

    ctx->pc = 0x1bbc88u;

    // 0x1bbc88: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1bbc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bbc8c: 0x286300e1  slti        $v1, $v1, 0xE1
    ctx->pc = 0x1bbc8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x1bbc90: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBC90u;
    {
        const bool branch_taken_0x1bbc90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC90u;
            // 0x1bbc94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc90) {
            ctx->pc = 0x1BBCA8u;
            goto label_1bbca8;
        }
    }
    ctx->pc = 0x1BBC98u;
    // 0x1bbc98: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bbc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bbc9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbca0: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x1bbca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x1bbca4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1bbca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1bbca8:
    // 0x1bbca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBCA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBCB0u;
}
