#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00155400
// Address: 0x155400 - 0x155460
void sub_00155400_0x155400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155400_0x155400");
#endif

    ctx->pc = 0x155400u;

    // 0x155400: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x155400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x155404: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x155404u;
    {
        const bool branch_taken_0x155404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155404) {
            ctx->pc = 0x155408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x155404u;
            // 0x155408: 0x30830022  andi        $v1, $a0, 0x22 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)34);
        ctx->in_delay_slot = false;
            ctx->pc = 0x155414u;
            goto label_155414;
        }
    }
    ctx->pc = 0x15540Cu;
    // 0x15540c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15540Cu;
    {
        const bool branch_taken_0x15540c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15540Cu;
            // 0x155410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15540c) {
            ctx->pc = 0x155450u;
            goto label_155450;
        }
    }
    ctx->pc = 0x155414u;
label_155414:
    // 0x155414: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155418: 0x8c4457b0  lw          $a0, 0x57B0($v0)
    ctx->pc = 0x155418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22448)));
    // 0x15541c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15541cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155420: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x155420u;
    {
        const bool branch_taken_0x155420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x155424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155420u;
            // 0x155424: 0xac4457f0  sw          $a0, 0x57F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155420) {
            ctx->pc = 0x155434u;
            goto label_155434;
        }
    }
    ctx->pc = 0x155428u;
    // 0x155428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x155428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15542c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15542cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155430: 0xac4357f0  sw          $v1, 0x57F0($v0)
    ctx->pc = 0x155430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22512), GPR_U32(ctx, 3));
label_155434:
    // 0x155434: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x155434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x155438: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x155438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x15543c: 0x8c455824  lw          $a1, 0x5824($v0)
    ctx->pc = 0x15543cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22564)));
    // 0x155440: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x155440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x155444: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x155444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x155448: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x155448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15544c: 0xac645824  sw          $a0, 0x5824($v1)
    ctx->pc = 0x15544cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
label_155450:
    // 0x155450: 0x3e00008  jr          $ra
    ctx->pc = 0x155450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155458u;
    // 0x155458: 0x0  nop
    ctx->pc = 0x155458u;
    // NOP
    // 0x15545c: 0x0  nop
    ctx->pc = 0x15545cu;
    // NOP
}
