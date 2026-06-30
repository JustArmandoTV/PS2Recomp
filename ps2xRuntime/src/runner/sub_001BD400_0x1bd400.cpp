#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD400
// Address: 0x1bd400 - 0x1bd450
void sub_001BD400_0x1bd400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD400_0x1bd400");
#endif

    switch (ctx->pc) {
        case 0x1bd420u: goto label_1bd420;
        default: break;
    }

    ctx->pc = 0x1bd400u;

    // 0x1bd400: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1bd400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1bd404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bd404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd408: 0x24429c08  addiu       $v0, $v0, -0x63F8
    ctx->pc = 0x1bd408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941704));
    // 0x1bd40c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bd40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bd410: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BD410u;
    {
        const bool branch_taken_0x1bd410 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1BD414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD410u;
            // 0x1bd414: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd410) {
            ctx->pc = 0x1BD444u;
            goto label_1bd444;
        }
    }
    ctx->pc = 0x1BD418u;
    // 0x1bd418: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bd418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd41c: 0x0  nop
    ctx->pc = 0x1bd41cu;
    // NOP
label_1bd420:
    // 0x1bd420: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bd420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bd424: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bd424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd428: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD428u;
    {
        const bool branch_taken_0x1bd428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD428u;
            // 0x1bd42c: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd428) {
            ctx->pc = 0x1BD448u;
            goto label_1bd448;
        }
    }
    ctx->pc = 0x1BD430u;
    // 0x1bd430: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1bd430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bd434: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1bd434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1bd438: 0x0  nop
    ctx->pc = 0x1bd438u;
    // NOP
    // 0x1bd43c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BD43Cu;
    {
        const bool branch_taken_0x1bd43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd43c) {
            ctx->pc = 0x1BD420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bd420;
        }
    }
    ctx->pc = 0x1BD444u;
label_1bd444:
    // 0x1bd444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bd444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd448:
    // 0x1bd448: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD450u;
}
