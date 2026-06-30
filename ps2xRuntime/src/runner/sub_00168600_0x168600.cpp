#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168600
// Address: 0x168600 - 0x1686b0
void sub_00168600_0x168600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168600_0x168600");
#endif

    switch (ctx->pc) {
        case 0x168638u: goto label_168638;
        case 0x168674u: goto label_168674;
        case 0x168688u: goto label_168688;
        case 0x168690u: goto label_168690;
        default: break;
    }

    ctx->pc = 0x168600u;

    // 0x168600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168604: 0x2c840100  sltiu       $a0, $a0, 0x100
    ctx->pc = 0x168604u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x168608: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x168608u;
    {
        const bool branch_taken_0x168608 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16860Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168608u;
            // 0x16860c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168608) {
            ctx->pc = 0x168620u;
            goto label_168620;
        }
    }
    ctx->pc = 0x168610u;
    // 0x168610: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x168610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x168614: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x168614u;
    {
        const bool branch_taken_0x168614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168614u;
            // 0x168618: 0x24843390  addiu       $a0, $a0, 0x3390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168614) {
            ctx->pc = 0x168630u;
            goto label_168630;
        }
    }
    ctx->pc = 0x16861Cu;
    // 0x16861c: 0x0  nop
    ctx->pc = 0x16861cu;
    // NOP
label_168620:
    // 0x168620: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x168620u;
    {
        const bool branch_taken_0x168620 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x168624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168620u;
            // 0x168624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168620) {
            ctx->pc = 0x16863Cu;
            goto label_16863c;
        }
    }
    ctx->pc = 0x168628u;
    // 0x168628: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x168628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16862c: 0x248433c8  addiu       $a0, $a0, 0x33C8
    ctx->pc = 0x16862cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13256));
label_168630:
    // 0x168630: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x168630u;
    SET_GPR_U32(ctx, 31, 0x168638u);
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168638u; }
        if (ctx->pc != 0x168638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168638u; }
        if (ctx->pc != 0x168638u) { return; }
    }
    ctx->pc = 0x168638u;
label_168638:
    // 0x168638: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x168638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_16863c:
    // 0x16863c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16863cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168640: 0x3e00008  jr          $ra
    ctx->pc = 0x168640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168640u;
            // 0x168644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168648u;
    // 0x168648: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16864c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16864cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168650: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168654: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x168654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168658: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x168658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16865c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16865cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x168660: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x168660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168664: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x168664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x168668: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16866c: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16866Cu;
    SET_GPR_U32(ctx, 31, 0x168674u);
    ctx->pc = 0x168670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16866Cu;
            // 0x168670: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168674u; }
        if (ctx->pc != 0x168674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168674u; }
        if (ctx->pc != 0x168674u) { return; }
    }
    ctx->pc = 0x168674u;
label_168674:
    // 0x168674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168678: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16867c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16867cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168680: 0xc05a1ac  jal         func_1686B0
    ctx->pc = 0x168680u;
    SET_GPR_U32(ctx, 31, 0x168688u);
    ctx->pc = 0x168684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168680u;
            // 0x168684: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1686B0u;
    if (runtime->hasFunction(0x1686B0u)) {
        auto targetFn = runtime->lookupFunction(0x1686B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168688u; }
        if (ctx->pc != 0x168688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001686B0_0x1686b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168688u; }
        if (ctx->pc != 0x168688u) { return; }
    }
    ctx->pc = 0x168688u;
label_168688:
    // 0x168688: 0xc05adca  jal         func_16B728
    ctx->pc = 0x168688u;
    SET_GPR_U32(ctx, 31, 0x168690u);
    ctx->pc = 0x16868Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168688u;
            // 0x16868c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168690u; }
        if (ctx->pc != 0x168690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168690u; }
        if (ctx->pc != 0x168690u) { return; }
    }
    ctx->pc = 0x168690u;
label_168690:
    // 0x168690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168694: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x168694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168698: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x168698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16869c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16869cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1686a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1686a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1686a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1686a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1686a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1686A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1686ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1686A8u;
            // 0x1686ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1686B0u;
}
