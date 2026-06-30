#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162078
// Address: 0x162078 - 0x1620c0
void sub_00162078_0x162078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162078_0x162078");
#endif

    ctx->pc = 0x162078u;

    // 0x162078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16207c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16207Cu;
    {
        const bool branch_taken_0x16207c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x162080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16207Cu;
            // 0x162080: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16207c) {
            ctx->pc = 0x162098u;
            goto label_162098;
        }
    }
    ctx->pc = 0x162084u;
    // 0x162084: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x162084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x162088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16208c: 0x24842900  addiu       $a0, $a0, 0x2900
    ctx->pc = 0x16208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10496));
    // 0x162090: 0x805856c  j           func_1615B0
    ctx->pc = 0x162090u;
    ctx->pc = 0x162094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162090u;
            // 0x162094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1615B0u;
    if (runtime->hasFunction(0x1615B0u)) {
        auto targetFn = runtime->lookupFunction(0x1615B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001615B0_0x1615b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x162098u;
label_162098:
    // 0x162098: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162098u;
    {
        const bool branch_taken_0x162098 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x162098) {
            ctx->pc = 0x1620A8u;
            goto label_1620a8;
        }
    }
    ctx->pc = 0x1620A0u;
    // 0x1620a0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1620a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1620a4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1620a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1620a8:
    // 0x1620a8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1620A8u;
    {
        const bool branch_taken_0x1620a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1620A8u;
            // 0x1620ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620a8) {
            ctx->pc = 0x1620B8u;
            goto label_1620b8;
        }
    }
    ctx->pc = 0x1620B0u;
    // 0x1620b0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1620b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1620b4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1620b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1620b8:
    // 0x1620b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1620B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1620BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1620B8u;
            // 0x1620bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1620C0u;
}
