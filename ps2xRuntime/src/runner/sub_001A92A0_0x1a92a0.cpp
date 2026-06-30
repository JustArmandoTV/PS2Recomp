#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A92A0
// Address: 0x1a92a0 - 0x1a92e0
void sub_001A92A0_0x1a92a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A92A0_0x1a92a0");
#endif

    switch (ctx->pc) {
        case 0x1a92b0u: goto label_1a92b0;
        default: break;
    }

    ctx->pc = 0x1a92a0u;

    // 0x1a92a0: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A92A0u;
    {
        const bool branch_taken_0x1a92a0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1A92A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92A0u;
            // 0x1a92a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92a0) {
            ctx->pc = 0x1A92D4u;
            goto label_1a92d4;
        }
    }
    ctx->pc = 0x1A92A8u;
    // 0x1a92a8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1a92a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a92ac: 0x0  nop
    ctx->pc = 0x1a92acu;
    // NOP
label_1a92b0:
    // 0x1a92b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a92b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a92b4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A92B4u;
    {
        const bool branch_taken_0x1a92b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A92B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92B4u;
            // 0x1a92b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92b4) {
            ctx->pc = 0x1A92D8u;
            goto label_1a92d8;
        }
    }
    ctx->pc = 0x1A92BCu;
    // 0x1a92bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a92bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a92c0: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1a92c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a92c4: 0x0  nop
    ctx->pc = 0x1a92c4u;
    // NOP
    // 0x1a92c8: 0x0  nop
    ctx->pc = 0x1a92c8u;
    // NOP
    // 0x1a92cc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A92CCu;
    {
        const bool branch_taken_0x1a92cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a92cc) {
            ctx->pc = 0x1A92D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92CCu;
            // 0x1a92d0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A92B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a92b0;
        }
    }
    ctx->pc = 0x1A92D4u;
label_1a92d4:
    // 0x1a92d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a92d8:
    // 0x1a92d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A92D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A92E0u;
}
