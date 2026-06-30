#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00323F70
// Address: 0x323f70 - 0x323fb0
void sub_00323F70_0x323f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323F70_0x323f70");
#endif

    ctx->pc = 0x323f70u;

    // 0x323f70: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x323f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x323f74: 0x8c66fa20  lw          $a2, -0x5E0($v1)
    ctx->pc = 0x323f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965792)));
    // 0x323f78: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x323f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x323f7c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x323f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x323f80: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x323F80u;
    {
        const bool branch_taken_0x323f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x323f80) {
            ctx->pc = 0x323F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x323F80u;
            // 0x323f84: 0x8c830034  lw          $v1, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x323F9Cu;
            goto label_323f9c;
        }
    }
    ctx->pc = 0x323F88u;
    // 0x323f88: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x323f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x323f8c: 0x8c63fa18  lw          $v1, -0x5E8($v1)
    ctx->pc = 0x323f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965784)));
    // 0x323f90: 0x601827  not         $v1, $v1
    ctx->pc = 0x323f90u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x323f94: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x323f94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x323f98: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x323f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_323f9c:
    // 0x323f9c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x323f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x323fa0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x323fa0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x323fa4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x323fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x323fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x323FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323FA8u;
            // 0x323fac: 0xac830034  sw          $v1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x323FB0u;
}
