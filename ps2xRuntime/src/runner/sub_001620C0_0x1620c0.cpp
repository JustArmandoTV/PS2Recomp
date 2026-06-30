#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001620C0
// Address: 0x1620c0 - 0x162100
void sub_001620C0_0x1620c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001620C0_0x1620c0");
#endif

    ctx->pc = 0x1620c0u;

    // 0x1620c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1620c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1620c4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1620C4u;
    {
        const bool branch_taken_0x1620c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1620C4u;
            // 0x1620c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620c4) {
            ctx->pc = 0x1620DCu;
            goto label_1620dc;
        }
    }
    ctx->pc = 0x1620CCu;
    // 0x1620cc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1620CCu;
    {
        const bool branch_taken_0x1620cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1620cc) {
            ctx->pc = 0x1620D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1620CCu;
            // 0x1620d0: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1620E0u;
            goto label_1620e0;
        }
    }
    ctx->pc = 0x1620D4u;
    // 0x1620d4: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1620D4u;
    {
        const bool branch_taken_0x1620d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1620D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1620D4u;
            // 0x1620d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620d4) {
            ctx->pc = 0x1620F0u;
            goto label_1620f0;
        }
    }
    ctx->pc = 0x1620DCu;
label_1620dc:
    // 0x1620dc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1620dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1620e0:
    // 0x1620e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1620e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1620e4: 0x24842928  addiu       $a0, $a0, 0x2928
    ctx->pc = 0x1620e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10536));
    // 0x1620e8: 0x805856c  j           func_1615B0
    ctx->pc = 0x1620E8u;
    ctx->pc = 0x1620ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1620E8u;
            // 0x1620ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1615B0u;
    if (runtime->hasFunction(0x1615B0u)) {
        auto targetFn = runtime->lookupFunction(0x1615B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001615B0_0x1615b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1620F0u;
label_1620f0:
    // 0x1620f0: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x1620f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x1620f4: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x1620f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x1620f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1620F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1620FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1620F8u;
            // 0x1620fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162100u;
}
