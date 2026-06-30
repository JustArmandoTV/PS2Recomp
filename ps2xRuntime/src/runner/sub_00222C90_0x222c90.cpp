#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00222C90
// Address: 0x222c90 - 0x222ce0
void sub_00222C90_0x222c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222C90_0x222c90");
#endif

    switch (ctx->pc) {
        case 0x222ca0u: goto label_222ca0;
        default: break;
    }

    ctx->pc = 0x222c90u;

    // 0x222c90: 0x948301e4  lhu         $v1, 0x1E4($a0)
    ctx->pc = 0x222c90u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x222c94: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x222C94u;
    {
        const bool branch_taken_0x222c94 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x222C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222C94u;
            // 0x222c98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c94) {
            ctx->pc = 0x222CC8u;
            goto label_222cc8;
        }
    }
    ctx->pc = 0x222C9Cu;
    // 0x222c9c: 0x8c8601e0  lw          $a2, 0x1E0($a0)
    ctx->pc = 0x222c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
label_222ca0:
    // 0x222ca0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x222ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x222ca4: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x222CA4u;
    {
        const bool branch_taken_0x222ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x222ca4) {
            ctx->pc = 0x222CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222CA4u;
            // 0x222ca8: 0x948301e4  lhu         $v1, 0x1E4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222CB4u;
            goto label_222cb4;
        }
    }
    ctx->pc = 0x222CACu;
    // 0x222cac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x222CACu;
    {
        const bool branch_taken_0x222cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222CACu;
            // 0x222cb0: 0x8c8301e0  lw          $v1, 0x1E0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cac) {
            ctx->pc = 0x222CD0u;
            goto label_222cd0;
        }
    }
    ctx->pc = 0x222CB4u;
label_222cb4:
    // 0x222cb4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x222cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x222cb8: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x222cb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x222cbc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x222CBCu;
    {
        const bool branch_taken_0x222cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x222CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222CBCu;
            // 0x222cc0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cbc) {
            ctx->pc = 0x222CA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222ca0;
        }
    }
    ctx->pc = 0x222CC4u;
    // 0x222cc4: 0x0  nop
    ctx->pc = 0x222cc4u;
    // NOP
label_222cc8:
    // 0x222cc8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x222cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222ccc: 0x8c8301e0  lw          $v1, 0x1E0($a0)
    ctx->pc = 0x222cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
label_222cd0:
    // 0x222cd0: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x222cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x222cd4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x222cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x222cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x222CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222CD8u;
            // 0x222cdc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222CE0u;
}
