#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6A80
// Address: 0x1b6a80 - 0x1b6aa8
void sub_001B6A80_0x1b6a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6A80_0x1b6a80");
#endif

    ctx->pc = 0x1b6a80u;

    // 0x1b6a80: 0x8ca302cc  lw          $v1, 0x2CC($a1)
    ctx->pc = 0x1b6a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 716)));
    // 0x1b6a84: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1b6a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6a88: 0x10660004  beq         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6A88u;
    {
        const bool branch_taken_0x1b6a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1B6A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A88u;
            // 0x1b6a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a88) {
            ctx->pc = 0x1B6A9Cu;
            goto label_1b6a9c;
        }
    }
    ctx->pc = 0x1B6A90u;
    // 0x1b6a90: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1b6a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1b6a94: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1b6a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x1b6a98: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b6a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b6a9c:
    // 0x1b6a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6AA4u;
    // 0x1b6aa4: 0x0  nop
    ctx->pc = 0x1b6aa4u;
    // NOP
}
