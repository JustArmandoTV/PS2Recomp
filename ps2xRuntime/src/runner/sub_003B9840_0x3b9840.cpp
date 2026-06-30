#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B9840
// Address: 0x3b9840 - 0x3b98b0
void sub_003B9840_0x3b9840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9840_0x3b9840");
#endif

    switch (ctx->pc) {
        case 0x3b9854u: goto label_3b9854;
        default: break;
    }

    ctx->pc = 0x3b9840u;

    // 0x3b9840: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x3b9840u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3b9844: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x3B9844u;
    {
        const bool branch_taken_0x3b9844 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9844u;
            // 0x3b9848: 0x24a80004  addiu       $t0, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9844) {
            ctx->pc = 0x3B9880u;
            goto label_3b9880;
        }
    }
    ctx->pc = 0x3B984Cu;
    // 0x3b984c: 0x94c70000  lhu         $a3, 0x0($a2)
    ctx->pc = 0x3b984cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b9850: 0x9523000c  lhu         $v1, 0xC($t1)
    ctx->pc = 0x3b9850u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
label_3b9854:
    // 0x3b9854: 0x67182a  slt         $v1, $v1, $a3
    ctx->pc = 0x3b9854u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3b9858: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B9858u;
    {
        const bool branch_taken_0x3b9858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b9858) {
            ctx->pc = 0x3B9870u;
            goto label_3b9870;
        }
    }
    ctx->pc = 0x3B9860u;
    // 0x3b9860: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3b9860u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9864: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B9864u;
    {
        const bool branch_taken_0x3b9864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9864u;
            // 0x3b9868: 0x8d290000  lw          $t1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9864) {
            ctx->pc = 0x3B9878u;
            goto label_3b9878;
        }
    }
    ctx->pc = 0x3B986Cu;
    // 0x3b986c: 0x0  nop
    ctx->pc = 0x3b986cu;
    // NOP
label_3b9870:
    // 0x3b9870: 0x8d290004  lw          $t1, 0x4($t1)
    ctx->pc = 0x3b9870u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3b9874: 0x0  nop
    ctx->pc = 0x3b9874u;
    // NOP
label_3b9878:
    // 0x3b9878: 0x5520fff6  bnel        $t1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3B9878u;
    {
        const bool branch_taken_0x3b9878 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b9878) {
            ctx->pc = 0x3B987Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9878u;
            // 0x3b987c: 0x9523000c  lhu         $v1, 0xC($t1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9854u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b9854;
        }
    }
    ctx->pc = 0x3B9880u;
label_3b9880:
    // 0x3b9880: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x3b9880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3b9884: 0x51030007  beql        $t0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B9884u;
    {
        const bool branch_taken_0x3b9884 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b9884) {
            ctx->pc = 0x3B9888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9884u;
            // 0x3b9888: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B98A4u;
            goto label_3b98a4;
        }
    }
    ctx->pc = 0x3B988Cu;
    // 0x3b988c: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x3b988cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b9890: 0x9503000c  lhu         $v1, 0xC($t0)
    ctx->pc = 0x3b9890u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x3b9894: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x3b9894u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3b9898: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B9898u;
    {
        const bool branch_taken_0x3b9898 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9898) {
            ctx->pc = 0x3B989Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9898u;
            // 0x3b989c: 0xac880000  sw          $t0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B98A8u;
            goto label_3b98a8;
        }
    }
    ctx->pc = 0x3B98A0u;
    // 0x3b98a0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x3b98a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3b98a4:
    // 0x3b98a4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3b98a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3b98a8:
    // 0x3b98a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B98A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B98B0u;
}
