#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6610
// Address: 0x1a6610 - 0x1a6758
void sub_001A6610_0x1a6610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6610_0x1a6610");
#endif

    switch (ctx->pc) {
        case 0x1a6610u: goto label_1a6610;
        case 0x1a6614u: goto label_1a6614;
        case 0x1a6618u: goto label_1a6618;
        case 0x1a661cu: goto label_1a661c;
        case 0x1a6620u: goto label_1a6620;
        case 0x1a6624u: goto label_1a6624;
        case 0x1a6628u: goto label_1a6628;
        case 0x1a662cu: goto label_1a662c;
        case 0x1a6630u: goto label_1a6630;
        case 0x1a6634u: goto label_1a6634;
        case 0x1a6638u: goto label_1a6638;
        case 0x1a663cu: goto label_1a663c;
        case 0x1a6640u: goto label_1a6640;
        case 0x1a6644u: goto label_1a6644;
        case 0x1a6648u: goto label_1a6648;
        case 0x1a664cu: goto label_1a664c;
        case 0x1a6650u: goto label_1a6650;
        case 0x1a6654u: goto label_1a6654;
        case 0x1a6658u: goto label_1a6658;
        case 0x1a665cu: goto label_1a665c;
        case 0x1a6660u: goto label_1a6660;
        case 0x1a6664u: goto label_1a6664;
        case 0x1a6668u: goto label_1a6668;
        case 0x1a666cu: goto label_1a666c;
        case 0x1a6670u: goto label_1a6670;
        case 0x1a6674u: goto label_1a6674;
        case 0x1a6678u: goto label_1a6678;
        case 0x1a667cu: goto label_1a667c;
        case 0x1a6680u: goto label_1a6680;
        case 0x1a6684u: goto label_1a6684;
        case 0x1a6688u: goto label_1a6688;
        case 0x1a668cu: goto label_1a668c;
        case 0x1a6690u: goto label_1a6690;
        case 0x1a6694u: goto label_1a6694;
        case 0x1a6698u: goto label_1a6698;
        case 0x1a669cu: goto label_1a669c;
        case 0x1a66a0u: goto label_1a66a0;
        case 0x1a66a4u: goto label_1a66a4;
        case 0x1a66a8u: goto label_1a66a8;
        case 0x1a66acu: goto label_1a66ac;
        case 0x1a66b0u: goto label_1a66b0;
        case 0x1a66b4u: goto label_1a66b4;
        case 0x1a66b8u: goto label_1a66b8;
        case 0x1a66bcu: goto label_1a66bc;
        case 0x1a66c0u: goto label_1a66c0;
        case 0x1a66c4u: goto label_1a66c4;
        case 0x1a66c8u: goto label_1a66c8;
        case 0x1a66ccu: goto label_1a66cc;
        case 0x1a66d0u: goto label_1a66d0;
        case 0x1a66d4u: goto label_1a66d4;
        case 0x1a66d8u: goto label_1a66d8;
        case 0x1a66dcu: goto label_1a66dc;
        case 0x1a66e0u: goto label_1a66e0;
        case 0x1a66e4u: goto label_1a66e4;
        case 0x1a66e8u: goto label_1a66e8;
        case 0x1a66ecu: goto label_1a66ec;
        case 0x1a66f0u: goto label_1a66f0;
        case 0x1a66f4u: goto label_1a66f4;
        case 0x1a66f8u: goto label_1a66f8;
        case 0x1a66fcu: goto label_1a66fc;
        case 0x1a6700u: goto label_1a6700;
        case 0x1a6704u: goto label_1a6704;
        case 0x1a6708u: goto label_1a6708;
        case 0x1a670cu: goto label_1a670c;
        case 0x1a6710u: goto label_1a6710;
        case 0x1a6714u: goto label_1a6714;
        case 0x1a6718u: goto label_1a6718;
        case 0x1a671cu: goto label_1a671c;
        case 0x1a6720u: goto label_1a6720;
        case 0x1a6724u: goto label_1a6724;
        case 0x1a6728u: goto label_1a6728;
        case 0x1a672cu: goto label_1a672c;
        case 0x1a6730u: goto label_1a6730;
        case 0x1a6734u: goto label_1a6734;
        case 0x1a6738u: goto label_1a6738;
        case 0x1a673cu: goto label_1a673c;
        case 0x1a6740u: goto label_1a6740;
        case 0x1a6744u: goto label_1a6744;
        case 0x1a6748u: goto label_1a6748;
        case 0x1a674cu: goto label_1a674c;
        case 0x1a6750u: goto label_1a6750;
        case 0x1a6754u: goto label_1a6754;
        default: break;
    }

    ctx->pc = 0x1a6610u;

label_1a6610:
    // 0x1a6610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a6614:
    // 0x1a6614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a6618:
    // 0x1a6618: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a661c:
    // 0x1a661c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a661cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a6620:
    // 0x1a6620: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a6620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a6624:
    // 0x1a6624: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a6628:
    // 0x1a6628: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a6628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a662c:
    // 0x1a662c: 0xc0699d6  jal         func_1A6758
label_1a6630:
    if (ctx->pc == 0x1A6630u) {
        ctx->pc = 0x1A6630u;
            // 0x1a6630: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6634u;
        goto label_1a6634;
    }
    ctx->pc = 0x1A662Cu;
    SET_GPR_U32(ctx, 31, 0x1A6634u);
    ctx->pc = 0x1A6630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A662Cu;
            // 0x1a6630: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6758u;
    if (runtime->hasFunction(0x1A6758u)) {
        auto targetFn = runtime->lookupFunction(0x1A6758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6634u; }
        if (ctx->pc != 0x1A6634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6758_0x1a6758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6634u; }
        if (ctx->pc != 0x1A6634u) { return; }
    }
    ctx->pc = 0x1A6634u;
label_1a6634:
    // 0x1a6634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6638:
    // 0x1a6638: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a663c:
    // 0x1a663c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1a6640:
    if (ctx->pc == 0x1A6640u) {
        ctx->pc = 0x1A6640u;
            // 0x1a6640: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A6644u;
        goto label_1a6644;
    }
    ctx->pc = 0x1A663Cu;
    {
        const bool branch_taken_0x1a663c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A663Cu;
            // 0x1a6640: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a663c) {
            ctx->pc = 0x1A6668u;
            goto label_1a6668;
        }
    }
    ctx->pc = 0x1A6644u;
label_1a6644:
    // 0x1a6644: 0xc06189a  jal         func_186268
label_1a6648:
    if (ctx->pc == 0x1A6648u) {
        ctx->pc = 0x1A664Cu;
        goto label_1a664c;
    }
    ctx->pc = 0x1A6644u;
    SET_GPR_U32(ctx, 31, 0x1A664Cu);
    ctx->pc = 0x186268u;
    if (runtime->hasFunction(0x186268u)) {
        auto targetFn = runtime->lookupFunction(0x186268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A664Cu; }
        if (ctx->pc != 0x1A664Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186268_0x186268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A664Cu; }
        if (ctx->pc != 0x1A664Cu) { return; }
    }
    ctx->pc = 0x1A664Cu;
label_1a664c:
    // 0x1a664c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a664cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6650:
    // 0x1a6650: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a6650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1a6654:
    // 0x1a6654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6658:
    // 0x1a6658: 0xc06189a  jal         func_186268
label_1a665c:
    if (ctx->pc == 0x1A665Cu) {
        ctx->pc = 0x1A665Cu;
            // 0x1a665c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A6660u;
        goto label_1a6660;
    }
    ctx->pc = 0x1A6658u;
    SET_GPR_U32(ctx, 31, 0x1A6660u);
    ctx->pc = 0x1A665Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6658u;
            // 0x1a665c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186268u;
    if (runtime->hasFunction(0x186268u)) {
        auto targetFn = runtime->lookupFunction(0x186268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6660u; }
        if (ctx->pc != 0x1A6660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186268_0x186268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6660u; }
        if (ctx->pc != 0x1A6660u) { return; }
    }
    ctx->pc = 0x1A6660u;
label_1a6660:
    // 0x1a6660: 0x10000013  b           . + 4 + (0x13 << 2)
label_1a6664:
    if (ctx->pc == 0x1A6664u) {
        ctx->pc = 0x1A6664u;
            // 0x1a6664: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1A6668u;
        goto label_1a6668;
    }
    ctx->pc = 0x1A6660u;
    {
        const bool branch_taken_0x1a6660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6660u;
            // 0x1a6664: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6660) {
            ctx->pc = 0x1A66B0u;
            goto label_1a66b0;
        }
    }
    ctx->pc = 0x1A6668u;
label_1a6668:
    // 0x1a6668: 0xc0699e4  jal         func_1A6790
label_1a666c:
    if (ctx->pc == 0x1A666Cu) {
        ctx->pc = 0x1A666Cu;
            // 0x1a666c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6670u;
        goto label_1a6670;
    }
    ctx->pc = 0x1A6668u;
    SET_GPR_U32(ctx, 31, 0x1A6670u);
    ctx->pc = 0x1A666Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6668u;
            // 0x1a666c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6790u;
    if (runtime->hasFunction(0x1A6790u)) {
        auto targetFn = runtime->lookupFunction(0x1A6790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6670u; }
        if (ctx->pc != 0x1A6670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6790_0x1a6790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6670u; }
        if (ctx->pc != 0x1A6670u) { return; }
    }
    ctx->pc = 0x1A6670u;
label_1a6670:
    // 0x1a6670: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1a6674:
    if (ctx->pc == 0x1A6674u) {
        ctx->pc = 0x1A6674u;
            // 0x1a6674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6678u;
        goto label_1a6678;
    }
    ctx->pc = 0x1A6670u;
    {
        const bool branch_taken_0x1a6670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6670u;
            // 0x1a6674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6670) {
            ctx->pc = 0x1A66A8u;
            goto label_1a66a8;
        }
    }
    ctx->pc = 0x1A6678u;
label_1a6678:
    // 0x1a6678: 0xc061512  jal         func_185448
label_1a667c:
    if (ctx->pc == 0x1A667Cu) {
        ctx->pc = 0x1A6680u;
        goto label_1a6680;
    }
    ctx->pc = 0x1A6678u;
    SET_GPR_U32(ctx, 31, 0x1A6680u);
    ctx->pc = 0x185448u;
    if (runtime->hasFunction(0x185448u)) {
        auto targetFn = runtime->lookupFunction(0x185448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6680u; }
        if (ctx->pc != 0x1A6680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185448_0x185448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6680u; }
        if (ctx->pc != 0x1A6680u) { return; }
    }
    ctx->pc = 0x1A6680u;
label_1a6680:
    // 0x1a6680: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6684:
    // 0x1a6684: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a6684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6688:
    // 0x1a6688: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a6688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1a668c:
    // 0x1a668c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a6690:
    // 0x1a6690: 0x40f809  jalr        $v0
label_1a6694:
    if (ctx->pc == 0x1A6694u) {
        ctx->pc = 0x1A6694u;
            // 0x1a6694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6698u;
        goto label_1a6698;
    }
    ctx->pc = 0x1A6690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6698u);
        ctx->pc = 0x1A6694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6690u;
            // 0x1a6694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6698u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6698u; }
            if (ctx->pc != 0x1A6698u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6698u;
label_1a6698:
    // 0x1a6698: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a6698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a669c:
    // 0x1a669c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a669cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a66a0:
    // 0x1a66a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a66a4:
    if (ctx->pc == 0x1A66A4u) {
        ctx->pc = 0x1A66A4u;
            // 0x1a66a4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1A66A8u;
        goto label_1a66a8;
    }
    ctx->pc = 0x1A66A0u;
    {
        const bool branch_taken_0x1a66a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A66A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A66A0u;
            // 0x1a66a4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66a0) {
            ctx->pc = 0x1A66B0u;
            goto label_1a66b0;
        }
    }
    ctx->pc = 0x1A66A8u;
label_1a66a8:
    // 0x1a66a8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1a66a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1a66ac:
    // 0x1a66ac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1a66acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1a66b0:
    // 0x1a66b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a66b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a66b4:
    // 0x1a66b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a66b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a66b8:
    // 0x1a66b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a66b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a66bc:
    // 0x1a66bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a66bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a66c0:
    // 0x1a66c0: 0x3e00008  jr          $ra
label_1a66c4:
    if (ctx->pc == 0x1A66C4u) {
        ctx->pc = 0x1A66C4u;
            // 0x1a66c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A66C8u;
        goto label_1a66c8;
    }
    ctx->pc = 0x1A66C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A66C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A66C0u;
            // 0x1a66c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A66C8u;
label_1a66c8:
    // 0x1a66c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a66c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a66cc:
    // 0x1a66cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a66ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a66d0:
    // 0x1a66d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a66d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a66d4:
    // 0x1a66d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a66d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a66d8:
    // 0x1a66d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a66d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a66dc:
    // 0x1a66dc: 0xc06156e  jal         func_1855B8
label_1a66e0:
    if (ctx->pc == 0x1A66E0u) {
        ctx->pc = 0x1A66E0u;
            // 0x1a66e0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1A66E4u;
        goto label_1a66e4;
    }
    ctx->pc = 0x1A66DCu;
    SET_GPR_U32(ctx, 31, 0x1A66E4u);
    ctx->pc = 0x1A66E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A66DCu;
            // 0x1a66e0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1855B8u;
    if (runtime->hasFunction(0x1855B8u)) {
        auto targetFn = runtime->lookupFunction(0x1855B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66E4u; }
        if (ctx->pc != 0x1A66E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001855B8_0x1855b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A66E4u; }
        if (ctx->pc != 0x1A66E4u) { return; }
    }
    ctx->pc = 0x1A66E4u;
label_1a66e4:
    // 0x1a66e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a66e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a66e8:
    // 0x1a66e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a66e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a66ec:
    // 0x1a66ec: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a66ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a66f0:
    // 0x1a66f0: 0x40f809  jalr        $v0
label_1a66f4:
    if (ctx->pc == 0x1A66F4u) {
        ctx->pc = 0x1A66F4u;
            // 0x1a66f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A66F8u;
        goto label_1a66f8;
    }
    ctx->pc = 0x1A66F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A66F8u);
        ctx->pc = 0x1A66F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A66F0u;
            // 0x1a66f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A66F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A66F8u; }
            if (ctx->pc != 0x1A66F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A66F8u;
label_1a66f8:
    // 0x1a66f8: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1a66f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
label_1a66fc:
    // 0x1a66fc: 0xac62beb0  sw          $v0, -0x4150($v1)
    ctx->pc = 0x1a66fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950576), GPR_U32(ctx, 2));
label_1a6700:
    // 0x1a6700: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6704:
    // 0x1a6704: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a6704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a6708:
    // 0x1a6708: 0x60f809  jalr        $v1
label_1a670c:
    if (ctx->pc == 0x1A670Cu) {
        ctx->pc = 0x1A670Cu;
            // 0x1a670c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6710u;
        goto label_1a6710;
    }
    ctx->pc = 0x1A6708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6710u);
        ctx->pc = 0x1A670Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6708u;
            // 0x1a670c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6710u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6710u; }
            if (ctx->pc != 0x1A6710u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6710u;
label_1a6710:
    // 0x1a6710: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1a6710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a6714:
    // 0x1a6714: 0xc0612e8  jal         func_184BA0
label_1a6718:
    if (ctx->pc == 0x1A6718u) {
        ctx->pc = 0x1A6718u;
            // 0x1a6718: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A671Cu;
        goto label_1a671c;
    }
    ctx->pc = 0x1A6714u;
    SET_GPR_U32(ctx, 31, 0x1A671Cu);
    ctx->pc = 0x1A6718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6714u;
            // 0x1a6718: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184BA0u;
    if (runtime->hasFunction(0x184BA0u)) {
        auto targetFn = runtime->lookupFunction(0x184BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A671Cu; }
        if (ctx->pc != 0x1A671Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184BA0_0x184ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A671Cu; }
        if (ctx->pc != 0x1A671Cu) { return; }
    }
    ctx->pc = 0x1A671Cu;
label_1a671c:
    // 0x1a671c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a671cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6720:
    // 0x1a6720: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a6720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6724:
    // 0x1a6724: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a6724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a6728:
    // 0x1a6728: 0x40f809  jalr        $v0
label_1a672c:
    if (ctx->pc == 0x1A672Cu) {
        ctx->pc = 0x1A672Cu;
            // 0x1a672c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6730u;
        goto label_1a6730;
    }
    ctx->pc = 0x1A6728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6730u);
        ctx->pc = 0x1A672Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6728u;
            // 0x1a672c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6730u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6730u; }
            if (ctx->pc != 0x1A6730u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6730u;
label_1a6730:
    // 0x1a6730: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1a6730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
label_1a6734:
    // 0x1a6734: 0xac62beb4  sw          $v0, -0x414C($v1)
    ctx->pc = 0x1a6734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950580), GPR_U32(ctx, 2));
label_1a6738:
    // 0x1a6738: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a673c:
    // 0x1a673c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a673cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a6740:
    // 0x1a6740: 0x60f809  jalr        $v1
label_1a6744:
    if (ctx->pc == 0x1A6744u) {
        ctx->pc = 0x1A6744u;
            // 0x1a6744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6748u;
        goto label_1a6748;
    }
    ctx->pc = 0x1A6740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6748u);
        ctx->pc = 0x1A6744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6740u;
            // 0x1a6744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6748u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6748u; }
            if (ctx->pc != 0x1A6748u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6748u;
label_1a6748:
    // 0x1a6748: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a6748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a674c:
    // 0x1a674c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a674cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a6750:
    // 0x1a6750: 0x3e00008  jr          $ra
label_1a6754:
    if (ctx->pc == 0x1A6754u) {
        ctx->pc = 0x1A6754u;
            // 0x1a6754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A6758u;
        goto label_fallthrough_0x1a6750;
    }
    ctx->pc = 0x1A6750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6750u;
            // 0x1a6754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a6750:
    ctx->pc = 0x1A6758u;
}
