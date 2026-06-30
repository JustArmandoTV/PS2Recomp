#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029D2D0
// Address: 0x29d2d0 - 0x29d300
void sub_0029D2D0_0x29d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D2D0_0x29d2d0");
#endif

    switch (ctx->pc) {
        case 0x29d2dcu: goto label_29d2dc;
        default: break;
    }

    ctx->pc = 0x29d2d0u;

    // 0x29d2d0: 0x28810005  slti        $at, $a0, 0x5
    ctx->pc = 0x29d2d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x29d2d4: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x29D2D4u;
    {
        const bool branch_taken_0x29d2d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D2D4u;
            // 0x29d2d8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d2d4) {
            ctx->pc = 0x29D2F8u;
            goto label_29d2f8;
        }
    }
    ctx->pc = 0x29D2DCu;
label_29d2dc:
    // 0x29d2dc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x29d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x29d2e0: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x29d2e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29d2e4: 0x0  nop
    ctx->pc = 0x29d2e4u;
    // NOP
    // 0x29d2e8: 0x0  nop
    ctx->pc = 0x29d2e8u;
    // NOP
    // 0x29d2ec: 0x0  nop
    ctx->pc = 0x29d2ecu;
    // NOP
    // 0x29d2f0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29D2F0u;
    {
        const bool branch_taken_0x29d2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d2f0) {
            ctx->pc = 0x29D2DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d2dc;
        }
    }
    ctx->pc = 0x29D2F8u;
label_29d2f8:
    // 0x29d2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x29D2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D2F8u;
            // 0x29d2fc: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D300u;
}
