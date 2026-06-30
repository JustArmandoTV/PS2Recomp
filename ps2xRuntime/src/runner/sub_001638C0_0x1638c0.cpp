#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001638C0
// Address: 0x1638c0 - 0x1638e8
void sub_001638C0_0x1638c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001638C0_0x1638c0");
#endif

    ctx->pc = 0x1638c0u;

    // 0x1638c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1638c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1638c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1638c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1638c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1638c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1638cc: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x1638ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x1638d0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1638D0u;
    {
        const bool branch_taken_0x1638d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1638D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1638D0u;
            // 0x1638d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1638d0) {
            ctx->pc = 0x1638E0u;
            goto label_1638e0;
        }
    }
    ctx->pc = 0x1638D8u;
    // 0x1638d8: 0x8058dd0  j           func_163740
    ctx->pc = 0x1638D8u;
    ctx->pc = 0x1638DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1638D8u;
            // 0x1638dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x163740u;
    {
        auto targetFn = runtime->lookupFunction(0x163740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1638E0u;
label_1638e0:
    // 0x1638e0: 0x8058d62  j           func_163588
    ctx->pc = 0x1638E0u;
    ctx->pc = 0x1638E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1638E0u;
            // 0x1638e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x163588u;
    {
        auto targetFn = runtime->lookupFunction(0x163588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1638E8u;
}
