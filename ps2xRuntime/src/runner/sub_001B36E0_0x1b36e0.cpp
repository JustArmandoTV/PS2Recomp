#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B36E0
// Address: 0x1b36e0 - 0x1b3720
void sub_001B36E0_0x1b36e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B36E0_0x1b36e0");
#endif

    switch (ctx->pc) {
        case 0x1b36f0u: goto label_1b36f0;
        default: break;
    }

    ctx->pc = 0x1b36e0u;

    // 0x1b36e0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b36e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b36e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36e8: 0x24469b8c  addiu       $a2, $v0, -0x6474
    ctx->pc = 0x1b36e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941580));
    // 0x1b36ec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1b36ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1b36f0:
    // 0x1b36f0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1b36f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1b36f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1b36f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b36f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b36f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b36fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B36FCu;
    {
        const bool branch_taken_0x1b36fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B36FCu;
            // 0x1b3700: 0x28a40008  slti        $a0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b36fc) {
            ctx->pc = 0x1B3718u;
            goto label_1b3718;
        }
    }
    ctx->pc = 0x1B3704u;
    // 0x1b3704: 0x0  nop
    ctx->pc = 0x1b3704u;
    // NOP
    // 0x1b3708: 0x0  nop
    ctx->pc = 0x1b3708u;
    // NOP
    // 0x1b370c: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B370Cu;
    {
        const bool branch_taken_0x1b370c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b370c) {
            ctx->pc = 0x1B3710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B370Cu;
            // 0x1b3710: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B36F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b36f0;
        }
    }
    ctx->pc = 0x1B3714u;
    // 0x1b3714: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b3714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b3718:
    // 0x1b3718: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3720u;
}
