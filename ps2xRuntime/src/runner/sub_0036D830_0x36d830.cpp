#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036D830
// Address: 0x36d830 - 0x36d870
void sub_0036D830_0x36d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D830_0x36d830");
#endif

    switch (ctx->pc) {
        case 0x36d844u: goto label_36d844;
        default: break;
    }

    ctx->pc = 0x36d830u;

    // 0x36d830: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x36d830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36d834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36d834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d838: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x36D838u;
    {
        const bool branch_taken_0x36d838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D838u;
            // 0x36d83c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d838) {
            ctx->pc = 0x36D868u;
            goto label_36d868;
        }
    }
    ctx->pc = 0x36D840u;
    // 0x36d840: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x36d840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_36d844:
    // 0x36d844: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x36d844u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36d848: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36D848u;
    {
        const bool branch_taken_0x36d848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d848) {
            ctx->pc = 0x36D858u;
            goto label_36d858;
        }
    }
    ctx->pc = 0x36D850u;
    // 0x36d850: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36d850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36d854: 0x0  nop
    ctx->pc = 0x36d854u;
    // NOP
label_36d858:
    // 0x36d858: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36d858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36d85c: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x36d85cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x36d860: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x36D860u;
    {
        const bool branch_taken_0x36d860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D860u;
            // 0x36d864: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d860) {
            ctx->pc = 0x36D844u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36d844;
        }
    }
    ctx->pc = 0x36D868u;
label_36d868:
    // 0x36d868: 0x3e00008  jr          $ra
    ctx->pc = 0x36D868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36D870u;
}
