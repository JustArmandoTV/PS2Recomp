#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ED630
// Address: 0x4ed630 - 0x4ed690
void sub_004ED630_0x4ed630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED630_0x4ed630");
#endif

    switch (ctx->pc) {
        case 0x4ed630u: goto label_4ed630;
        case 0x4ed634u: goto label_4ed634;
        case 0x4ed638u: goto label_4ed638;
        case 0x4ed63cu: goto label_4ed63c;
        case 0x4ed640u: goto label_4ed640;
        case 0x4ed644u: goto label_4ed644;
        case 0x4ed648u: goto label_4ed648;
        case 0x4ed64cu: goto label_4ed64c;
        case 0x4ed650u: goto label_4ed650;
        case 0x4ed654u: goto label_4ed654;
        case 0x4ed658u: goto label_4ed658;
        case 0x4ed65cu: goto label_4ed65c;
        case 0x4ed660u: goto label_4ed660;
        case 0x4ed664u: goto label_4ed664;
        case 0x4ed668u: goto label_4ed668;
        case 0x4ed66cu: goto label_4ed66c;
        case 0x4ed670u: goto label_4ed670;
        case 0x4ed674u: goto label_4ed674;
        case 0x4ed678u: goto label_4ed678;
        case 0x4ed67cu: goto label_4ed67c;
        case 0x4ed680u: goto label_4ed680;
        case 0x4ed684u: goto label_4ed684;
        case 0x4ed688u: goto label_4ed688;
        case 0x4ed68cu: goto label_4ed68c;
        default: break;
    }

    ctx->pc = 0x4ed630u;

label_4ed630:
    // 0x4ed630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ed630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ed634:
    // 0x4ed634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ed634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ed638:
    // 0x4ed638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ed63c:
    // 0x4ed63c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ed63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ed640:
    // 0x4ed640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ed640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ed644:
    // 0x4ed644: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x4ed644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4ed648:
    // 0x4ed648: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4ed648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ed64c:
    // 0x4ed64c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4ed64cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4ed650:
    // 0x4ed650: 0x320f809  jalr        $t9
label_4ed654:
    if (ctx->pc == 0x4ED654u) {
        ctx->pc = 0x4ED654u;
            // 0x4ed654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4ED658u;
        goto label_4ed658;
    }
    ctx->pc = 0x4ED650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4ED658u);
        ctx->pc = 0x4ED654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED650u;
            // 0x4ed654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4ED658u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4ED658u; }
            if (ctx->pc != 0x4ED658u) { return; }
        }
        }
    }
    ctx->pc = 0x4ED658u;
label_4ed658:
    // 0x4ed658: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4ed658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4ed65c:
    // 0x4ed65c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x4ed65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4ed660:
    // 0x4ed660: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x4ed660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_4ed664:
    // 0x4ed664: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4ed664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4ed668:
    // 0x4ed668: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x4ed668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_4ed66c:
    // 0x4ed66c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ed66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4ed670:
    // 0x4ed670: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x4ed670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_4ed674:
    // 0x4ed674: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ed674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ed678:
    // 0x4ed678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ed678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ed67c:
    // 0x4ed67c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ed67cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ed680:
    // 0x4ed680: 0x3e00008  jr          $ra
label_4ed684:
    if (ctx->pc == 0x4ED684u) {
        ctx->pc = 0x4ED684u;
            // 0x4ed684: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4ED688u;
        goto label_4ed688;
    }
    ctx->pc = 0x4ED680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED680u;
            // 0x4ed684: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ED688u;
label_4ed688:
    // 0x4ed688: 0x0  nop
    ctx->pc = 0x4ed688u;
    // NOP
label_4ed68c:
    // 0x4ed68c: 0x0  nop
    ctx->pc = 0x4ed68cu;
    // NOP
}
