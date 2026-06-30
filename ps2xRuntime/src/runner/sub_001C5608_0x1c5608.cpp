#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5608
// Address: 0x1c5608 - 0x1c56c8
void sub_001C5608_0x1c5608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5608_0x1c5608");
#endif

    switch (ctx->pc) {
        case 0x1c5608u: goto label_1c5608;
        case 0x1c560cu: goto label_1c560c;
        case 0x1c5610u: goto label_1c5610;
        case 0x1c5614u: goto label_1c5614;
        case 0x1c5618u: goto label_1c5618;
        case 0x1c561cu: goto label_1c561c;
        case 0x1c5620u: goto label_1c5620;
        case 0x1c5624u: goto label_1c5624;
        case 0x1c5628u: goto label_1c5628;
        case 0x1c562cu: goto label_1c562c;
        case 0x1c5630u: goto label_1c5630;
        case 0x1c5634u: goto label_1c5634;
        case 0x1c5638u: goto label_1c5638;
        case 0x1c563cu: goto label_1c563c;
        case 0x1c5640u: goto label_1c5640;
        case 0x1c5644u: goto label_1c5644;
        case 0x1c5648u: goto label_1c5648;
        case 0x1c564cu: goto label_1c564c;
        case 0x1c5650u: goto label_1c5650;
        case 0x1c5654u: goto label_1c5654;
        case 0x1c5658u: goto label_1c5658;
        case 0x1c565cu: goto label_1c565c;
        case 0x1c5660u: goto label_1c5660;
        case 0x1c5664u: goto label_1c5664;
        case 0x1c5668u: goto label_1c5668;
        case 0x1c566cu: goto label_1c566c;
        case 0x1c5670u: goto label_1c5670;
        case 0x1c5674u: goto label_1c5674;
        case 0x1c5678u: goto label_1c5678;
        case 0x1c567cu: goto label_1c567c;
        case 0x1c5680u: goto label_1c5680;
        case 0x1c5684u: goto label_1c5684;
        case 0x1c5688u: goto label_1c5688;
        case 0x1c568cu: goto label_1c568c;
        case 0x1c5690u: goto label_1c5690;
        case 0x1c5694u: goto label_1c5694;
        case 0x1c5698u: goto label_1c5698;
        case 0x1c569cu: goto label_1c569c;
        case 0x1c56a0u: goto label_1c56a0;
        case 0x1c56a4u: goto label_1c56a4;
        case 0x1c56a8u: goto label_1c56a8;
        case 0x1c56acu: goto label_1c56ac;
        case 0x1c56b0u: goto label_1c56b0;
        case 0x1c56b4u: goto label_1c56b4;
        case 0x1c56b8u: goto label_1c56b8;
        case 0x1c56bcu: goto label_1c56bc;
        case 0x1c56c0u: goto label_1c56c0;
        case 0x1c56c4u: goto label_1c56c4;
        default: break;
    }

    ctx->pc = 0x1c5608u;

label_1c5608:
    // 0x1c5608: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c5608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c560c:
    // 0x1c560c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c560cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c5610:
    // 0x1c5610: 0x8c42a5e0  lw          $v0, -0x5A20($v0)
    ctx->pc = 0x1c5610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944224)));
label_1c5614:
    // 0x1c5614: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1c5618:
    if (ctx->pc == 0x1C5618u) {
        ctx->pc = 0x1C5618u;
            // 0x1c5618: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1C561Cu;
        goto label_1c561c;
    }
    ctx->pc = 0x1C5614u;
    {
        const bool branch_taken_0x1c5614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5614u;
            // 0x1c5618: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5614) {
            ctx->pc = 0x1C5640u;
            goto label_1c5640;
        }
    }
    ctx->pc = 0x1C561Cu;
label_1c561c:
    // 0x1c561c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1c561cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1c5620:
    // 0x1c5620: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1c5624:
    if (ctx->pc == 0x1C5624u) {
        ctx->pc = 0x1C5624u;
            // 0x1c5624: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x1C5628u;
        goto label_1c5628;
    }
    ctx->pc = 0x1C5620u;
    {
        const bool branch_taken_0x1c5620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5620) {
            ctx->pc = 0x1C5624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5620u;
            // 0x1c5624: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5644u;
            goto label_1c5644;
        }
    }
    ctx->pc = 0x1C5628u;
label_1c5628:
    // 0x1c5628: 0x40f809  jalr        $v0
label_1c562c:
    if (ctx->pc == 0x1C562Cu) {
        ctx->pc = 0x1C5630u;
        goto label_1c5630;
    }
    ctx->pc = 0x1C5628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C5630u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C5630u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C5630u; }
            if (ctx->pc != 0x1C5630u) { return; }
        }
        }
    }
    ctx->pc = 0x1C5630u;
label_1c5630:
    // 0x1c5630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c5634:
    // 0x1c5634: 0x3e00008  jr          $ra
label_1c5638:
    if (ctx->pc == 0x1C5638u) {
        ctx->pc = 0x1C5638u;
            // 0x1c5638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C563Cu;
        goto label_1c563c;
    }
    ctx->pc = 0x1C5634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5634u;
            // 0x1c5638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C563Cu;
label_1c563c:
    // 0x1c563c: 0x0  nop
    ctx->pc = 0x1c563cu;
    // NOP
label_1c5640:
    // 0x1c5640: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c5640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c5644:
    // 0x1c5644: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c5644u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c5648:
    // 0x1c5648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c564c:
    // 0x1c564c: 0x2484bee8  addiu       $a0, $a0, -0x4118
    ctx->pc = 0x1c564cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
label_1c5650:
    // 0x1c5650: 0x24c6bf00  addiu       $a2, $a2, -0x4100
    ctx->pc = 0x1c5650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950656));
label_1c5654:
    // 0x1c5654: 0x2405009b  addiu       $a1, $zero, 0x9B
    ctx->pc = 0x1c5654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
label_1c5658:
    // 0x1c5658: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c5658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c565c:
    // 0x1c565c: 0x2408ff35  addiu       $t0, $zero, -0xCB
    ctx->pc = 0x1c565cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
label_1c5660:
    // 0x1c5660: 0x80711fe  j           func_1C47F8
label_1c5664:
    if (ctx->pc == 0x1C5664u) {
        ctx->pc = 0x1C5664u;
            // 0x1c5664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C5668u;
        goto label_1c5668;
    }
    ctx->pc = 0x1C5660u;
    ctx->pc = 0x1C5664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5660u;
            // 0x1c5664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C5668u;
label_1c5668:
    // 0x1c5668: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c5668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c566c:
    // 0x1c566c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c566cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c5670:
    // 0x1c5670: 0x8c42a5e0  lw          $v0, -0x5A20($v0)
    ctx->pc = 0x1c5670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944224)));
label_1c5674:
    // 0x1c5674: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1c5678:
    if (ctx->pc == 0x1C5678u) {
        ctx->pc = 0x1C5678u;
            // 0x1c5678: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1C567Cu;
        goto label_1c567c;
    }
    ctx->pc = 0x1C5674u;
    {
        const bool branch_taken_0x1c5674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5674u;
            // 0x1c5678: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5674) {
            ctx->pc = 0x1C56A0u;
            goto label_1c56a0;
        }
    }
    ctx->pc = 0x1C567Cu;
label_1c567c:
    // 0x1c567c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1c567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1c5680:
    // 0x1c5680: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1c5684:
    if (ctx->pc == 0x1C5684u) {
        ctx->pc = 0x1C5684u;
            // 0x1c5684: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x1C5688u;
        goto label_1c5688;
    }
    ctx->pc = 0x1C5680u;
    {
        const bool branch_taken_0x1c5680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5680) {
            ctx->pc = 0x1C5684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5680u;
            // 0x1c5684: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C56A4u;
            goto label_1c56a4;
        }
    }
    ctx->pc = 0x1C5688u;
label_1c5688:
    // 0x1c5688: 0x40f809  jalr        $v0
label_1c568c:
    if (ctx->pc == 0x1C568Cu) {
        ctx->pc = 0x1C5690u;
        goto label_1c5690;
    }
    ctx->pc = 0x1C5688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C5690u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C5690u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C5690u; }
            if (ctx->pc != 0x1C5690u) { return; }
        }
        }
    }
    ctx->pc = 0x1C5690u;
label_1c5690:
    // 0x1c5690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c5694:
    // 0x1c5694: 0x3e00008  jr          $ra
label_1c5698:
    if (ctx->pc == 0x1C5698u) {
        ctx->pc = 0x1C5698u;
            // 0x1c5698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C569Cu;
        goto label_1c569c;
    }
    ctx->pc = 0x1C5694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5694u;
            // 0x1c5698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C569Cu;
label_1c569c:
    // 0x1c569c: 0x0  nop
    ctx->pc = 0x1c569cu;
    // NOP
label_1c56a0:
    // 0x1c56a0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c56a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c56a4:
    // 0x1c56a4: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c56a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c56a8:
    // 0x1c56a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c56a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c56ac:
    // 0x1c56ac: 0x2484bee8  addiu       $a0, $a0, -0x4118
    ctx->pc = 0x1c56acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
label_1c56b0:
    // 0x1c56b0: 0x24c6bf08  addiu       $a2, $a2, -0x40F8
    ctx->pc = 0x1c56b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950664));
label_1c56b4:
    // 0x1c56b4: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x1c56b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_1c56b8:
    // 0x1c56b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c56b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c56bc:
    // 0x1c56bc: 0x2408ff35  addiu       $t0, $zero, -0xCB
    ctx->pc = 0x1c56bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
label_1c56c0:
    // 0x1c56c0: 0x80711fe  j           func_1C47F8
label_1c56c4:
    if (ctx->pc == 0x1C56C4u) {
        ctx->pc = 0x1C56C4u;
            // 0x1c56c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C56C8u;
        goto label_fallthrough_0x1c56c0;
    }
    ctx->pc = 0x1C56C0u;
    ctx->pc = 0x1C56C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C56C0u;
            // 0x1c56c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
label_fallthrough_0x1c56c0:
    ctx->pc = 0x1C56C8u;
}
