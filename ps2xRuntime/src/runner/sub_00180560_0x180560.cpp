#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180560
// Address: 0x180560 - 0x1805a0
void sub_00180560_0x180560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180560_0x180560");
#endif

    ctx->pc = 0x180560u;

    // 0x180560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180564: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x180564u;
    {
        const bool branch_taken_0x180564 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x180568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180564u;
            // 0x180568: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180564) {
            ctx->pc = 0x180580u;
            goto label_180580;
        }
    }
    ctx->pc = 0x18056Cu;
    // 0x18056c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x18056cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x180570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180574: 0x24846848  addiu       $a0, $a0, 0x6848
    ctx->pc = 0x180574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26696));
    // 0x180578: 0x8060334  j           func_180CD0
    ctx->pc = 0x180578u;
    ctx->pc = 0x18057Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180578u;
            // 0x18057c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180CD0_0x180cd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x180580u;
label_180580:
    // 0x180580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180584: 0x54a20002  bnel        $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x180584u;
    {
        const bool branch_taken_0x180584 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x180584) {
            ctx->pc = 0x180588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180584u;
            // 0x180588: 0xa0800004  sb          $zero, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180590u;
            goto label_180590;
        }
    }
    ctx->pc = 0x18058Cu;
    // 0x18058c: 0xa0850004  sb          $a1, 0x4($a0)
    ctx->pc = 0x18058cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 5));
label_180590:
    // 0x180590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180594: 0x3e00008  jr          $ra
    ctx->pc = 0x180594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180594u;
            // 0x180598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18059Cu;
    // 0x18059c: 0x0  nop
    ctx->pc = 0x18059cu;
    // NOP
}
