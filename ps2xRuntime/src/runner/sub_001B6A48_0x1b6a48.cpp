#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6A48
// Address: 0x1b6a48 - 0x1b6a80
void sub_001B6A48_0x1b6a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6A48_0x1b6a48");
#endif

    ctx->pc = 0x1b6a48u;

    // 0x1b6a48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b6a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a4c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1b6a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b6a50: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x1b6a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1b6a54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b6a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a58: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6A58u;
    {
        const bool branch_taken_0x1b6a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B6A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A58u;
            // 0x1b6a5c: 0x24a60950  addiu       $a2, $a1, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a58) {
            ctx->pc = 0x1B6A74u;
            goto label_1b6a74;
        }
    }
    ctx->pc = 0x1B6A60u;
    // 0x1b6a60: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x1b6a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1b6a64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6A64u;
    {
        const bool branch_taken_0x1b6a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a64) {
            ctx->pc = 0x1B6A74u;
            goto label_1b6a74;
        }
    }
    ctx->pc = 0x1B6A6Cu;
    // 0x1b6a6c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1b6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1b6a70: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b6a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b6a74:
    // 0x1b6a74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6A7Cu;
    // 0x1b6a7c: 0x0  nop
    ctx->pc = 0x1b6a7cu;
    // NOP
}
