#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F5D60
// Address: 0x2f5d60 - 0x2f5de0
void sub_002F5D60_0x2f5d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5D60_0x2f5d60");
#endif

    switch (ctx->pc) {
        case 0x2f5d78u: goto label_2f5d78;
        case 0x2f5d90u: goto label_2f5d90;
        default: break;
    }

    ctx->pc = 0x2f5d60u;

    // 0x2f5d60: 0x908800d8  lbu         $t0, 0xD8($a0)
    ctx->pc = 0x2f5d60u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x2f5d64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d68: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2f5d68u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f5d6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d70: 0x8c870030  lw          $a3, 0x30($a0)
    ctx->pc = 0x2f5d70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2f5d74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f5d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5d78:
    // 0x2f5d78: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F5D78u;
    {
        const bool branch_taken_0x2f5d78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5d78) {
            ctx->pc = 0x2F5DC0u;
            goto label_2f5dc0;
        }
    }
    ctx->pc = 0x2F5D80u;
    // 0x2f5d80: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x2f5d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2f5d84: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2f5d84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5d88: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2f5d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f5d8c: 0x0  nop
    ctx->pc = 0x2f5d8cu;
    // NOP
label_2f5d90:
    // 0x2f5d90: 0x8d430030  lw          $v1, 0x30($t2)
    ctx->pc = 0x2f5d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x2f5d94: 0x14c30006  bne         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5D94u;
    {
        const bool branch_taken_0x2f5d94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f5d94) {
            ctx->pc = 0x2F5DB0u;
            goto label_2f5db0;
        }
    }
    ctx->pc = 0x2F5D9Cu;
    // 0x2f5d9c: 0x1651804  sllv        $v1, $a1, $t3
    ctx->pc = 0x2f5d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 11) & 0x1F));
    // 0x2f5da0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f5da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f5da4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f5da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f5da8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5DA8u;
    {
        const bool branch_taken_0x2f5da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5DA8u;
            // 0x2f5dac: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5da8) {
            ctx->pc = 0x2F5DC0u;
            goto label_2f5dc0;
        }
    }
    ctx->pc = 0x2F5DB0u;
label_2f5db0:
    // 0x2f5db0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2f5db0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2f5db4: 0x8d430030  lw          $v1, 0x30($t2)
    ctx->pc = 0x2f5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x2f5db8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2F5DB8u;
    {
        const bool branch_taken_0x2f5db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5db8) {
            ctx->pc = 0x2F5D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d90;
        }
    }
    ctx->pc = 0x2F5DC0u;
label_2f5dc0:
    // 0x2f5dc0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2f5dc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2f5dc4: 0x168182a  slt         $v1, $t3, $t0
    ctx->pc = 0x2f5dc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2f5dc8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2F5DC8u;
    {
        const bool branch_taken_0x2f5dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5DC8u;
            // 0x2f5dcc: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5dc8) {
            ctx->pc = 0x2F5D78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5d78;
        }
    }
    ctx->pc = 0x2F5DD0u;
    // 0x2f5dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5DD8u;
    // 0x2f5dd8: 0x0  nop
    ctx->pc = 0x2f5dd8u;
    // NOP
    // 0x2f5ddc: 0x0  nop
    ctx->pc = 0x2f5ddcu;
    // NOP
}
