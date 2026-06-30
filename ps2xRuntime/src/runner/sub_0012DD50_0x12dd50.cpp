#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012DD50
// Address: 0x12dd50 - 0x12dd98
void sub_0012DD50_0x12dd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DD50_0x12dd50");
#endif

    switch (ctx->pc) {
        case 0x12dd70u: goto label_12dd70;
        case 0x12dd88u: goto label_12dd88;
        default: break;
    }

    ctx->pc = 0x12dd50u;

    // 0x12dd50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12dd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12dd54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12dd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12dd58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12dd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12dd5c: 0x8caf0008  lw          $t7, 0x8($a1)
    ctx->pc = 0x12dd5cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12dd60: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12DD60u;
    {
        const bool branch_taken_0x12dd60 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DD60u;
            // 0x12dd64: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd60) {
            ctx->pc = 0x12DD80u;
            goto label_12dd80;
        }
    }
    ctx->pc = 0x12DD68u;
    // 0x12dd68: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x12dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x12dd6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12dd6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12dd70:
    // 0x12dd70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12dd70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dd74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12dd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12dd78: 0x3e00008  jr          $ra
    ctx->pc = 0x12DD78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DD78u;
            // 0x12dd7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12DD80u;
label_12dd80:
    // 0x12dd80: 0xc04a00a  jal         func_128028
    ctx->pc = 0x12DD80u;
    SET_GPR_U32(ctx, 31, 0x12DD88u);
    ctx->pc = 0x128028u;
    if (runtime->hasFunction(0x128028u)) {
        auto targetFn = runtime->lookupFunction(0x128028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DD88u; }
        if (ctx->pc != 0x12DD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128028_0x128028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DD88u; }
        if (ctx->pc != 0x12DD88u) { return; }
    }
    ctx->pc = 0x12DD88u;
label_12dd88:
    // 0x12dd88: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12dd88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12dd8c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x12DD8Cu;
    {
        const bool branch_taken_0x12dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DD8Cu;
            // 0x12dd90: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd8c) {
            ctx->pc = 0x12DD70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12dd70;
        }
    }
    ctx->pc = 0x12DD94u;
    // 0x12dd94: 0x0  nop
    ctx->pc = 0x12dd94u;
    // NOP
}
