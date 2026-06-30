#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00141AB0
// Address: 0x141ab0 - 0x141ae0
void sub_00141AB0_0x141ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141AB0_0x141ab0");
#endif

    ctx->pc = 0x141ab0u;

    // 0x141ab0: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x141ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x141ab4: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141AB4u;
    {
        const bool branch_taken_0x141ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x141ab4) {
            ctx->pc = 0x141AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141AB4u;
            // 0x141ab8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141ACCu;
            goto label_141acc;
        }
    }
    ctx->pc = 0x141ABCu;
    // 0x141abc: 0x8f83821c  lw          $v1, -0x7DE4($gp)
    ctx->pc = 0x141abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935068)));
    // 0x141ac0: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x141AC0u;
    {
        const bool branch_taken_0x141ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x141ac0) {
            ctx->pc = 0x141AD8u;
            goto label_141ad8;
        }
    }
    ctx->pc = 0x141AC8u;
    // 0x141ac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141acc:
    // 0x141acc: 0xaf848218  sw          $a0, -0x7DE8($gp)
    ctx->pc = 0x141accu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935064), GPR_U32(ctx, 4));
    // 0x141ad0: 0xaf85821c  sw          $a1, -0x7DE4($gp)
    ctx->pc = 0x141ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935068), GPR_U32(ctx, 5));
    // 0x141ad4: 0xaf838220  sw          $v1, -0x7DE0($gp)
    ctx->pc = 0x141ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935072), GPR_U32(ctx, 3));
label_141ad8:
    // 0x141ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x141AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141AE0u;
}
