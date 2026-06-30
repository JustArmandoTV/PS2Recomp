#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171808
// Address: 0x171808 - 0x171888
void sub_00171808_0x171808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171808_0x171808");
#endif

    switch (ctx->pc) {
        case 0x17182cu: goto label_17182c;
        case 0x171840u: goto label_171840;
        case 0x171854u: goto label_171854;
        default: break;
    }

    ctx->pc = 0x171808u;

    // 0x171808: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17180c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17180cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x171810: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x171810u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
    // 0x171814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171818: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17181c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17181cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x171820: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x171820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x171824: 0xc05c840  jal         func_172100
    ctx->pc = 0x171824u;
    SET_GPR_U32(ctx, 31, 0x17182Cu);
    ctx->pc = 0x171828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171824u;
            // 0x171828: 0x26642e70  addiu       $a0, $s3, 0x2E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172100u;
    if (runtime->hasFunction(0x172100u)) {
        auto targetFn = runtime->lookupFunction(0x172100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17182Cu; }
        if (ctx->pc != 0x17182Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172100_0x172100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17182Cu; }
        if (ctx->pc != 0x17182Cu) { return; }
    }
    ctx->pc = 0x17182Cu;
label_17182c:
    // 0x17182c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17182Cu;
    {
        const bool branch_taken_0x17182c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17182Cu;
            // 0x171830: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17182c) {
            ctx->pc = 0x171868u;
            goto label_171868;
        }
    }
    ctx->pc = 0x171834u;
    // 0x171834: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x171834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171838: 0x24502e80  addiu       $s0, $v0, 0x2E80
    ctx->pc = 0x171838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11904));
    // 0x17183c: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x17183cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_171840:
    // 0x171840: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x171840u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171844: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x171844u;
    {
        const bool branch_taken_0x171844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x171844) {
            ctx->pc = 0x171848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x171844u;
            // 0x171848: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x171858u;
            goto label_171858;
        }
    }
    ctx->pc = 0x17184Cu;
    // 0x17184c: 0xc05c5e4  jal         func_171790
    ctx->pc = 0x17184Cu;
    SET_GPR_U32(ctx, 31, 0x171854u);
    ctx->pc = 0x171850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17184Cu;
            // 0x171850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171790u;
    if (runtime->hasFunction(0x171790u)) {
        auto targetFn = runtime->lookupFunction(0x171790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171854u; }
        if (ctx->pc != 0x171854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171790_0x171790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171854u; }
        if (ctx->pc != 0x171854u) { return; }
    }
    ctx->pc = 0x171854u;
label_171854:
    // 0x171854: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x171854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_171858:
    // 0x171858: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x171858u;
    {
        const bool branch_taken_0x171858 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17185Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171858u;
            // 0x17185c: 0x26100068  addiu       $s0, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171858) {
            ctx->pc = 0x171840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_171840;
        }
    }
    ctx->pc = 0x171860u;
    // 0x171860: 0x26622e70  addiu       $v0, $s3, 0x2E70
    ctx->pc = 0x171860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11888));
    // 0x171864: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x171864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_171868:
    // 0x171868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17186c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17186cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171870: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x171870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171874: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x171874u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x171878: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x171878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17187c: 0x3e00008  jr          $ra
    ctx->pc = 0x17187Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17187Cu;
            // 0x171880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171884u;
    // 0x171884: 0x0  nop
    ctx->pc = 0x171884u;
    // NOP
}
