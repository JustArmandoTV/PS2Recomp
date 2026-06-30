#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178A58
// Address: 0x178a58 - 0x178ac0
void sub_00178A58_0x178a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178A58_0x178a58");
#endif

    switch (ctx->pc) {
        case 0x178a78u: goto label_178a78;
        default: break;
    }

    ctx->pc = 0x178a58u;

    // 0x178a58: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x178a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x178a5c: 0x24a2d298  addiu       $v0, $a1, -0x2D68
    ctx->pc = 0x178a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955672));
    // 0x178a60: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x178a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x178a64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178a68: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x178A68u;
    {
        const bool branch_taken_0x178a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A68u;
            // 0x178a6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a68) {
            ctx->pc = 0x178A9Cu;
            goto label_178a9c;
        }
    }
    ctx->pc = 0x178A70u;
    // 0x178a70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x178a70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x178a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_178a78:
    // 0x178a78: 0x28820028  slti        $v0, $a0, 0x28
    ctx->pc = 0x178a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x178a7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x178A7Cu;
    {
        const bool branch_taken_0x178a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A7Cu;
            // 0x178a80: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a7c) {
            ctx->pc = 0x178A9Cu;
            goto label_178a9c;
        }
    }
    ctx->pc = 0x178A84u;
    // 0x178a84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x178a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178a88: 0x0  nop
    ctx->pc = 0x178a88u;
    // NOP
    // 0x178a8c: 0x0  nop
    ctx->pc = 0x178a8cu;
    // NOP
    // 0x178a90: 0x0  nop
    ctx->pc = 0x178a90u;
    // NOP
    // 0x178a94: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x178A94u;
    {
        const bool branch_taken_0x178a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178a94) {
            ctx->pc = 0x178A98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178A94u;
            // 0x178a98: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178A78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178a78;
        }
    }
    ctx->pc = 0x178A9Cu;
label_178a9c:
    // 0x178a9c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x178a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x178aa0: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x178AA0u;
    {
        const bool branch_taken_0x178aa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x178AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178AA0u;
            // 0x178aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178aa0) {
            ctx->pc = 0x178AB4u;
            goto label_178ab4;
        }
    }
    ctx->pc = 0x178AA8u;
    // 0x178aa8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x178aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x178aac: 0x24a2d298  addiu       $v0, $a1, -0x2D68
    ctx->pc = 0x178aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955672));
    // 0x178ab0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x178ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_178ab4:
    // 0x178ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x178AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178ABCu;
    // 0x178abc: 0x0  nop
    ctx->pc = 0x178abcu;
    // NOP
}
