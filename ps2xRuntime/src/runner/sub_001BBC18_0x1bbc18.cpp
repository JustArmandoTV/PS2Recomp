#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBC18
// Address: 0x1bbc18 - 0x1bbc40
void sub_001BBC18_0x1bbc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBC18_0x1bbc18");
#endif

    ctx->pc = 0x1bbc18u;

    // 0x1bbc18: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1bbc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bbc1c: 0x2863006e  slti        $v1, $v1, 0x6E
    ctx->pc = 0x1bbc1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x1bbc20: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBC20u;
    {
        const bool branch_taken_0x1bbc20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC20u;
            // 0x1bbc24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc20) {
            ctx->pc = 0x1BBC38u;
            goto label_1bbc38;
        }
    }
    ctx->pc = 0x1BBC28u;
    // 0x1bbc28: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bbc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bbc2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbc30: 0x8c8300b4  lw          $v1, 0xB4($a0)
    ctx->pc = 0x1bbc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x1bbc34: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1bbc34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1bbc38:
    // 0x1bbc38: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBC40u;
}
