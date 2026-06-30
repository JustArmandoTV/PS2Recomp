#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00385630
// Address: 0x385630 - 0x385680
void sub_00385630_0x385630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385630_0x385630");
#endif

    switch (ctx->pc) {
        case 0x38566cu: goto label_38566c;
        default: break;
    }

    ctx->pc = 0x385630u;

    // 0x385630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x385630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x385634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x385634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x385638: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x385638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38563c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x38563cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x385640: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x385640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x385644: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x385644u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x385648: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x385648u;
    {
        const bool branch_taken_0x385648 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x385648) {
            ctx->pc = 0x38564Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x385648u;
            // 0x38564c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x385670u;
            goto label_385670;
        }
    }
    ctx->pc = 0x385650u;
    // 0x385650: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x385650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x385654: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x385654u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x385658: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x385658u;
    {
        const bool branch_taken_0x385658 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x385658) {
            ctx->pc = 0x38565Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x385658u;
            // 0x38565c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x385660u;
            goto label_385660;
        }
    }
    ctx->pc = 0x385660u;
label_385660:
    // 0x385660: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x385660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385664: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x385664u;
    SET_GPR_U32(ctx, 31, 0x38566Cu);
    ctx->pc = 0x385668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385664u;
            // 0x385668: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38566Cu; }
        if (ctx->pc != 0x38566Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38566Cu; }
        if (ctx->pc != 0x38566Cu) { return; }
    }
    ctx->pc = 0x38566Cu;
label_38566c:
    // 0x38566c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38566cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_385670:
    // 0x385670: 0x3e00008  jr          $ra
    ctx->pc = 0x385670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385670u;
            // 0x385674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385678u;
    // 0x385678: 0x0  nop
    ctx->pc = 0x385678u;
    // NOP
    // 0x38567c: 0x0  nop
    ctx->pc = 0x38567cu;
    // NOP
}
