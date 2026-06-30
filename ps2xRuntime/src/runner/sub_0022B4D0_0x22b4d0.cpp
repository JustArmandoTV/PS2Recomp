#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B4D0
// Address: 0x22b4d0 - 0x22b550
void sub_0022B4D0_0x22b4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B4D0_0x22b4d0");
#endif

    switch (ctx->pc) {
        case 0x22b4e0u: goto label_22b4e0;
        case 0x22b524u: goto label_22b524;
        default: break;
    }

    ctx->pc = 0x22b4d0u;

    // 0x22b4d0: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x22b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x22b4d4: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x22B4D4u;
    {
        const bool branch_taken_0x22b4d4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22B4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B4D4u;
            // 0x22b4d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4d4) {
            ctx->pc = 0x22B508u;
            goto label_22b508;
        }
    }
    ctx->pc = 0x22B4DCu;
    // 0x22b4dc: 0x8c860058  lw          $a2, 0x58($a0)
    ctx->pc = 0x22b4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_22b4e0:
    // 0x22b4e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22b4e4: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B4E4u;
    {
        const bool branch_taken_0x22b4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x22b4e4) {
            ctx->pc = 0x22B4E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B4E4u;
            // 0x22b4e8: 0x8c83005c  lw          $v1, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B4F4u;
            goto label_22b4f4;
        }
    }
    ctx->pc = 0x22B4ECu;
    // 0x22b4ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22B4ECu;
    {
        const bool branch_taken_0x22b4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B4ECu;
            // 0x22b4f0: 0x8c83005c  lw          $v1, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4ec) {
            ctx->pc = 0x22B510u;
            goto label_22b510;
        }
    }
    ctx->pc = 0x22B4F4u;
label_22b4f4:
    // 0x22b4f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22b4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22b4f8: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x22b4f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22b4fc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22B4FCu;
    {
        const bool branch_taken_0x22b4fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B4FCu;
            // 0x22b500: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4fc) {
            ctx->pc = 0x22B4E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b4e0;
        }
    }
    ctx->pc = 0x22B504u;
    // 0x22b504: 0x0  nop
    ctx->pc = 0x22b504u;
    // NOP
label_22b508:
    // 0x22b508: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x22b508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22b50c: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x22b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_22b510:
    // 0x22b510: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22b510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22b514: 0xe3082a  slt         $at, $a3, $v1
    ctx->pc = 0x22b514u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22b518: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x22B518u;
    {
        const bool branch_taken_0x22b518 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B518u;
            // 0x22b51c: 0xac83005c  sw          $v1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b518) {
            ctx->pc = 0x22B548u;
            goto label_22b548;
        }
    }
    ctx->pc = 0x22B520u;
    // 0x22b520: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x22b520u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_22b524:
    // 0x22b524: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x22b524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x22b528: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22b528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22b52c: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x22b52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22b530: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x22b530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x22b534: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x22b534u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x22b538: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x22b538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x22b53c: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x22b53cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22b540: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22B540u;
    {
        const bool branch_taken_0x22b540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B540u;
            // 0x22b544: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b540) {
            ctx->pc = 0x22B524u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b524;
        }
    }
    ctx->pc = 0x22B548u;
label_22b548:
    // 0x22b548: 0x3e00008  jr          $ra
    ctx->pc = 0x22B548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B550u;
}
