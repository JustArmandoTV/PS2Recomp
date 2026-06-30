#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00166628
// Address: 0x166628 - 0x166690
void sub_00166628_0x166628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166628_0x166628");
#endif

    switch (ctx->pc) {
        case 0x166648u: goto label_166648;
        case 0x166664u: goto label_166664;
        default: break;
    }

    ctx->pc = 0x166628u;

    // 0x166628: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x166628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x16662c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16662cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x166630: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x166630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x166634: 0x24a532d0  addiu       $a1, $a1, 0x32D0
    ctx->pc = 0x166634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13008));
    // 0x166638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x166638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16663c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16663cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x166640: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x166640u;
    SET_GPR_U32(ctx, 31, 0x166648u);
    ctx->pc = 0x166644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166640u;
            // 0x166644: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166648u; }
        if (ctx->pc != 0x166648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166648u; }
        if (ctx->pc != 0x166648u) { return; }
    }
    ctx->pc = 0x166648u;
label_166648:
    // 0x166648: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x166648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x16664c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x16664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x166650: 0x24a532d8  addiu       $a1, $a1, 0x32D8
    ctx->pc = 0x166650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13016));
    // 0x166654: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x166654u;
    {
        const bool branch_taken_0x166654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166654u;
            // 0x166658: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166654) {
            ctx->pc = 0x166678u;
            goto label_166678;
        }
    }
    ctx->pc = 0x16665Cu;
    // 0x16665c: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x16665Cu;
    SET_GPR_U32(ctx, 31, 0x166664u);
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166664u; }
        if (ctx->pc != 0x166664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166664u; }
        if (ctx->pc != 0x166664u) { return; }
    }
    ctx->pc = 0x166664u;
label_166664:
    // 0x166664: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x166664u;
    {
        const bool branch_taken_0x166664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166664) {
            ctx->pc = 0x166668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x166664u;
            // 0x166668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16667Cu;
            goto label_16667c;
        }
    }
    ctx->pc = 0x16666Cu;
    // 0x16666c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16666Cu;
    {
        const bool branch_taken_0x16666c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16666Cu;
            // 0x166670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16666c) {
            ctx->pc = 0x16667Cu;
            goto label_16667c;
        }
    }
    ctx->pc = 0x166674u;
    // 0x166674: 0x0  nop
    ctx->pc = 0x166674u;
    // NOP
label_166678:
    // 0x166678: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x166678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16667c:
    // 0x16667c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16667cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166680: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x166680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166684: 0x3e00008  jr          $ra
    ctx->pc = 0x166684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166684u;
            // 0x166688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16668Cu;
    // 0x16668c: 0x0  nop
    ctx->pc = 0x16668cu;
    // NOP
}
