#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199578
// Address: 0x199578 - 0x1995b0
void sub_00199578_0x199578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199578_0x199578");
#endif

    switch (ctx->pc) {
        case 0x199578u: goto label_199578;
        case 0x19957cu: goto label_19957c;
        case 0x199580u: goto label_199580;
        case 0x199584u: goto label_199584;
        case 0x199588u: goto label_199588;
        case 0x19958cu: goto label_19958c;
        case 0x199590u: goto label_199590;
        case 0x199594u: goto label_199594;
        case 0x199598u: goto label_199598;
        case 0x19959cu: goto label_19959c;
        case 0x1995a0u: goto label_1995a0;
        case 0x1995a4u: goto label_1995a4;
        case 0x1995a8u: goto label_1995a8;
        case 0x1995acu: goto label_1995ac;
        default: break;
    }

    ctx->pc = 0x199578u;

label_199578:
    // 0x199578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19957c:
    // 0x19957c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19957cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_199580:
    // 0x199580: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x199580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_199584:
    // 0x199584: 0xc066c68  jal         func_19B1A0
label_199588:
    if (ctx->pc == 0x199588u) {
        ctx->pc = 0x199588u;
            // 0x199588: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19958Cu;
        goto label_19958c;
    }
    ctx->pc = 0x199584u;
    SET_GPR_U32(ctx, 31, 0x19958Cu);
    ctx->pc = 0x199588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199584u;
            // 0x199588: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19958Cu; }
        if (ctx->pc != 0x19958Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19958Cu; }
        if (ctx->pc != 0x19958Cu) { return; }
    }
    ctx->pc = 0x19958Cu;
label_19958c:
    // 0x19958c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x19958cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_199590:
    // 0x199590: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x199590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_199594:
    // 0x199594: 0x60f809  jalr        $v1
label_199598:
    if (ctx->pc == 0x199598u) {
        ctx->pc = 0x199598u;
            // 0x199598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19959Cu;
        goto label_19959c;
    }
    ctx->pc = 0x199594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19959Cu);
        ctx->pc = 0x199598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199594u;
            // 0x199598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19959Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19959Cu; }
            if (ctx->pc != 0x19959Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19959Cu;
label_19959c:
    // 0x19959c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19959cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1995a0:
    // 0x1995a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1995a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1995a4:
    // 0x1995a4: 0x3e00008  jr          $ra
label_1995a8:
    if (ctx->pc == 0x1995A8u) {
        ctx->pc = 0x1995A8u;
            // 0x1995a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1995ACu;
        goto label_1995ac;
    }
    ctx->pc = 0x1995A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1995A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1995A4u;
            // 0x1995a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1995ACu;
label_1995ac:
    // 0x1995ac: 0x0  nop
    ctx->pc = 0x1995acu;
    // NOP
}
