#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E9000
// Address: 0x1e9000 - 0x1e90a0
void sub_001E9000_0x1e9000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9000_0x1e9000");
#endif

    switch (ctx->pc) {
        case 0x1e9028u: goto label_1e9028;
        default: break;
    }

    ctx->pc = 0x1e9000u;

    // 0x1e9000: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e9000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e9004: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e9004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e9008: 0x8c69fffc  lw          $t1, -0x4($v1)
    ctx->pc = 0x1e9008u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x1e900c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E900Cu;
    {
        const bool branch_taken_0x1e900c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E9010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E900Cu;
            // 0x1e9010: 0x64043  sra         $t0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e900c) {
            ctx->pc = 0x1E901Cu;
            goto label_1e901c;
        }
    }
    ctx->pc = 0x1E9014u;
    // 0x1e9014: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1e9014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e9018: 0x34043  sra         $t0, $v1, 1
    ctx->pc = 0x1e9018u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 1));
label_1e901c:
    // 0x1e901c: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x1e901cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1e9020: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E9020u;
    {
        const bool branch_taken_0x1e9020 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9020) {
            ctx->pc = 0x1E9090u;
            goto label_1e9090;
        }
    }
    ctx->pc = 0x1E9028u;
label_1e9028:
    // 0x1e9028: 0x55040  sll         $t2, $a1, 1
    ctx->pc = 0x1e9028u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1e902c: 0x146082a  slt         $at, $t2, $a2
    ctx->pc = 0x1e902cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1e9030: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E9030u;
    {
        const bool branch_taken_0x1e9030 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9030) {
            ctx->pc = 0x1E9058u;
            goto label_1e9058;
        }
    }
    ctx->pc = 0x1E9038u;
    // 0x1e9038: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x1e9038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1e903c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1e903cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e9040: 0x8c67fffc  lw          $a3, -0x4($v1)
    ctx->pc = 0x1e9040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x1e9044: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e9044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e9048: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x1e9048u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e904c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E904Cu;
    {
        const bool branch_taken_0x1e904c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e904c) {
            ctx->pc = 0x1E9058u;
            goto label_1e9058;
        }
    }
    ctx->pc = 0x1E9054u;
    // 0x1e9054: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1e9054u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1e9058:
    // 0x1e9058: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x1e9058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1e905c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1e905cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e9060: 0x2467fffc  addiu       $a3, $v1, -0x4
    ctx->pc = 0x1e9060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1e9064: 0x8c63fffc  lw          $v1, -0x4($v1)
    ctx->pc = 0x1e9064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x1e9068: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x1e9068u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e906c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E906Cu;
    {
        const bool branch_taken_0x1e906c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e906c) {
            ctx->pc = 0x1E9090u;
            goto label_1e9090;
        }
    }
    ctx->pc = 0x1E9074u;
    // 0x1e9074: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1e9074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e9078: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e9078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e907c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1e907cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e9080: 0x10a082a  slt         $at, $t0, $t2
    ctx->pc = 0x1e9080u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1e9084: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1e9084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9088: 0x1020ffe7  beqz        $at, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1E9088u;
    {
        const bool branch_taken_0x1e9088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E908Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9088u;
            // 0x1e908c: 0xac67fffc  sw          $a3, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9088) {
            ctx->pc = 0x1E9028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e9028;
        }
    }
    ctx->pc = 0x1E9090u;
label_1e9090:
    // 0x1e9090: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e9090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e9094: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e9094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e9098: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E909Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9098u;
            // 0x1e909c: 0xac69fffc  sw          $t1, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E90A0u;
}
