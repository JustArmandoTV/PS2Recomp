#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBCB0
// Address: 0x1bbcb0 - 0x1bbcd8
void sub_001BBCB0_0x1bbcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBCB0_0x1bbcb0");
#endif

    ctx->pc = 0x1bbcb0u;

    // 0x1bbcb0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1bbcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bbcb4: 0x286300e1  slti        $v1, $v1, 0xE1
    ctx->pc = 0x1bbcb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x1bbcb8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBCB8u;
    {
        const bool branch_taken_0x1bbcb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBCB8u;
            // 0x1bbcbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbcb8) {
            ctx->pc = 0x1BBCD0u;
            goto label_1bbcd0;
        }
    }
    ctx->pc = 0x1BBCC0u;
    // 0x1bbcc0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bbcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bbcc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbcc8: 0x8c8300c8  lw          $v1, 0xC8($a0)
    ctx->pc = 0x1bbcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x1bbccc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1bbcccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1bbcd0:
    // 0x1bbcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBCD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBCD8u;
}
