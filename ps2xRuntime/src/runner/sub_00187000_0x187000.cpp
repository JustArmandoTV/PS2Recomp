#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187000
// Address: 0x187000 - 0x187080
void sub_00187000_0x187000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187000_0x187000");
#endif

    switch (ctx->pc) {
        case 0x187044u: goto label_187044;
        case 0x187058u: goto label_187058;
        default: break;
    }

    ctx->pc = 0x187000u;

    // 0x187000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187004: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x187004u;
    {
        const bool branch_taken_0x187004 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x187008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187004u;
            // 0x187008: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187004) {
            ctx->pc = 0x187020u;
            goto label_187020;
        }
    }
    ctx->pc = 0x18700Cu;
    // 0x18700c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x18700cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x187010: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x187010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x187014: 0x24847e00  addiu       $a0, $a0, 0x7E00
    ctx->pc = 0x187014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32256));
    // 0x187018: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x187018u;
    {
        const bool branch_taken_0x187018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18701Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187018u;
            // 0x18701c: 0x24a57c90  addiu       $a1, $a1, 0x7C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187018) {
            ctx->pc = 0x18703Cu;
            goto label_18703c;
        }
    }
    ctx->pc = 0x187020u;
label_187020:
    // 0x187020: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x187020u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x187024: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x187024u;
    {
        const bool branch_taken_0x187024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187024) {
            ctx->pc = 0x187028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187024u;
            // 0x187028: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187050u;
            goto label_187050;
        }
    }
    ctx->pc = 0x18702Cu;
    // 0x18702c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x18702cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x187030: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x187030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x187034: 0x24847e10  addiu       $a0, $a0, 0x7E10
    ctx->pc = 0x187034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32272));
    // 0x187038: 0x24a57cc0  addiu       $a1, $a1, 0x7CC0
    ctx->pc = 0x187038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31936));
label_18703c:
    // 0x18703c: 0xc0618a8  jal         func_1862A0
    ctx->pc = 0x18703Cu;
    SET_GPR_U32(ctx, 31, 0x187044u);
    ctx->pc = 0x1862A0u;
    if (runtime->hasFunction(0x1862A0u)) {
        auto targetFn = runtime->lookupFunction(0x1862A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187044u; }
        if (ctx->pc != 0x187044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001862A0_0x1862a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187044u; }
        if (ctx->pc != 0x187044u) { return; }
    }
    ctx->pc = 0x187044u;
label_187044:
    // 0x187044: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x187044u;
    {
        const bool branch_taken_0x187044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187044u;
            // 0x187048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187044) {
            ctx->pc = 0x187074u;
            goto label_187074;
        }
    }
    ctx->pc = 0x18704Cu;
    // 0x18704c: 0x0  nop
    ctx->pc = 0x18704cu;
    // NOP
label_187050:
    // 0x187050: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x187050u;
    {
        const bool branch_taken_0x187050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187050u;
            // 0x187054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187050) {
            ctx->pc = 0x187074u;
            goto label_187074;
        }
    }
    ctx->pc = 0x187058u;
label_187058:
    // 0x187058: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x187058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18705c: 0x0  nop
    ctx->pc = 0x18705cu;
    // NOP
    // 0x187060: 0x0  nop
    ctx->pc = 0x187060u;
    // NOP
    // 0x187064: 0x0  nop
    ctx->pc = 0x187064u;
    // NOP
    // 0x187068: 0x0  nop
    ctx->pc = 0x187068u;
    // NOP
    // 0x18706c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18706Cu;
    {
        const bool branch_taken_0x18706c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x187070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18706Cu;
            // 0x187070: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18706c) {
            ctx->pc = 0x187058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_187058;
        }
    }
    ctx->pc = 0x187074u;
label_187074:
    // 0x187074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187078: 0x3e00008  jr          $ra
    ctx->pc = 0x187078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18707Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187078u;
            // 0x18707c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187080u;
}
