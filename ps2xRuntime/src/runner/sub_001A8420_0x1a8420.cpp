#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8420
// Address: 0x1a8420 - 0x1a8458
void sub_001A8420_0x1a8420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8420_0x1a8420");
#endif

    ctx->pc = 0x1a8420u;

    // 0x1a8420: 0x24840078  addiu       $a0, $a0, 0x78
    ctx->pc = 0x1a8420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x1a8424: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a8424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a8428: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8428u;
    {
        const bool branch_taken_0x1a8428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A842Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8428u;
            // 0x1a842c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8428) {
            ctx->pc = 0x1A8450u;
            goto label_1a8450;
        }
    }
    ctx->pc = 0x1A8430u;
    // 0x1a8430: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1a8430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a8434: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1a8434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a8438: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a8438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a843c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8440: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8448: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a844c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a8450:
    // 0x1a8450: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8458u;
}
