#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00222DA0
// Address: 0x222da0 - 0x222dd0
void sub_00222DA0_0x222da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222DA0_0x222da0");
#endif

    ctx->pc = 0x222da0u;

    // 0x222da0: 0x8ca30094  lw          $v1, 0x94($a1)
    ctx->pc = 0x222da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x222da4: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x222DA4u;
    {
        const bool branch_taken_0x222da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222da4) {
            ctx->pc = 0x222DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222DA4u;
            // 0x222da8: 0x90630028  lbu         $v1, 0x28($v1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222DB4u;
            goto label_222db4;
        }
    }
    ctx->pc = 0x222DACu;
    // 0x222dac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x222DACu;
    {
        const bool branch_taken_0x222dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222DACu;
            // 0x222db0: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222dac) {
            ctx->pc = 0x222DC0u;
            goto label_222dc0;
        }
    }
    ctx->pc = 0x222DB4u;
label_222db4:
    // 0x222db4: 0x31f3c  dsll32      $v1, $v1, 28
    ctx->pc = 0x222db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 28));
    // 0x222db8: 0x31fbe  dsrl32      $v1, $v1, 30
    ctx->pc = 0x222db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 30));
    // 0x222dbc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x222dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_222dc0:
    // 0x222dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x222DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222DC8u;
    // 0x222dc8: 0x0  nop
    ctx->pc = 0x222dc8u;
    // NOP
    // 0x222dcc: 0x0  nop
    ctx->pc = 0x222dccu;
    // NOP
}
