#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F3F80
// Address: 0x3f3f80 - 0x3f3fb0
void sub_003F3F80_0x3f3f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3F80_0x3f3f80");
#endif

    switch (ctx->pc) {
        case 0x3f3f88u: goto label_3f3f88;
        default: break;
    }

    ctx->pc = 0x3f3f80u;

    // 0x3f3f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f3f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3f84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f3f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f3f88:
    // 0x3f3f88: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x3f3f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x3f3f8c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F3F8Cu;
    {
        const bool branch_taken_0x3f3f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f3f8c) {
            ctx->pc = 0x3F3F90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3F8Cu;
            // 0x3f3f90: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3F9Cu;
            goto label_3f3f9c;
        }
    }
    ctx->pc = 0x3F3F94u;
    // 0x3f3f94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F3F94u;
    {
        const bool branch_taken_0x3f3f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3F94u;
            // 0x3f3f98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3f94) {
            ctx->pc = 0x3F3FA8u;
            goto label_3f3fa8;
        }
    }
    ctx->pc = 0x3F3F9Cu;
label_3f3f9c:
    // 0x3f3f9c: 0x28a30015  slti        $v1, $a1, 0x15
    ctx->pc = 0x3f3f9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x3f3fa0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3F3FA0u;
    {
        const bool branch_taken_0x3f3fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F3FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3FA0u;
            // 0x3f3fa4: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3fa0) {
            ctx->pc = 0x3F3F88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f3f88;
        }
    }
    ctx->pc = 0x3F3FA8u;
label_3f3fa8:
    // 0x3f3fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F3FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F3FB0u;
}
