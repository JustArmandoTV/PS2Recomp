#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001545E0
// Address: 0x1545e0 - 0x1548d0
void sub_001545E0_0x1545e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001545E0_0x1545e0");
#endif

    switch (ctx->pc) {
        case 0x1545e0u: goto label_1545e0;
        case 0x1545e4u: goto label_1545e4;
        case 0x1545e8u: goto label_1545e8;
        case 0x1545ecu: goto label_1545ec;
        case 0x1545f0u: goto label_1545f0;
        case 0x1545f4u: goto label_1545f4;
        case 0x1545f8u: goto label_1545f8;
        case 0x1545fcu: goto label_1545fc;
        case 0x154600u: goto label_154600;
        case 0x154604u: goto label_154604;
        case 0x154608u: goto label_154608;
        case 0x15460cu: goto label_15460c;
        case 0x154610u: goto label_154610;
        case 0x154614u: goto label_154614;
        case 0x154618u: goto label_154618;
        case 0x15461cu: goto label_15461c;
        case 0x154620u: goto label_154620;
        case 0x154624u: goto label_154624;
        case 0x154628u: goto label_154628;
        case 0x15462cu: goto label_15462c;
        case 0x154630u: goto label_154630;
        case 0x154634u: goto label_154634;
        case 0x154638u: goto label_154638;
        case 0x15463cu: goto label_15463c;
        case 0x154640u: goto label_154640;
        case 0x154644u: goto label_154644;
        case 0x154648u: goto label_154648;
        case 0x15464cu: goto label_15464c;
        case 0x154650u: goto label_154650;
        case 0x154654u: goto label_154654;
        case 0x154658u: goto label_154658;
        case 0x15465cu: goto label_15465c;
        case 0x154660u: goto label_154660;
        case 0x154664u: goto label_154664;
        case 0x154668u: goto label_154668;
        case 0x15466cu: goto label_15466c;
        case 0x154670u: goto label_154670;
        case 0x154674u: goto label_154674;
        case 0x154678u: goto label_154678;
        case 0x15467cu: goto label_15467c;
        case 0x154680u: goto label_154680;
        case 0x154684u: goto label_154684;
        case 0x154688u: goto label_154688;
        case 0x15468cu: goto label_15468c;
        case 0x154690u: goto label_154690;
        case 0x154694u: goto label_154694;
        case 0x154698u: goto label_154698;
        case 0x15469cu: goto label_15469c;
        case 0x1546a0u: goto label_1546a0;
        case 0x1546a4u: goto label_1546a4;
        case 0x1546a8u: goto label_1546a8;
        case 0x1546acu: goto label_1546ac;
        case 0x1546b0u: goto label_1546b0;
        case 0x1546b4u: goto label_1546b4;
        case 0x1546b8u: goto label_1546b8;
        case 0x1546bcu: goto label_1546bc;
        case 0x1546c0u: goto label_1546c0;
        case 0x1546c4u: goto label_1546c4;
        case 0x1546c8u: goto label_1546c8;
        case 0x1546ccu: goto label_1546cc;
        case 0x1546d0u: goto label_1546d0;
        case 0x1546d4u: goto label_1546d4;
        case 0x1546d8u: goto label_1546d8;
        case 0x1546dcu: goto label_1546dc;
        case 0x1546e0u: goto label_1546e0;
        case 0x1546e4u: goto label_1546e4;
        case 0x1546e8u: goto label_1546e8;
        case 0x1546ecu: goto label_1546ec;
        case 0x1546f0u: goto label_1546f0;
        case 0x1546f4u: goto label_1546f4;
        case 0x1546f8u: goto label_1546f8;
        case 0x1546fcu: goto label_1546fc;
        case 0x154700u: goto label_154700;
        case 0x154704u: goto label_154704;
        case 0x154708u: goto label_154708;
        case 0x15470cu: goto label_15470c;
        case 0x154710u: goto label_154710;
        case 0x154714u: goto label_154714;
        case 0x154718u: goto label_154718;
        case 0x15471cu: goto label_15471c;
        case 0x154720u: goto label_154720;
        case 0x154724u: goto label_154724;
        case 0x154728u: goto label_154728;
        case 0x15472cu: goto label_15472c;
        case 0x154730u: goto label_154730;
        case 0x154734u: goto label_154734;
        case 0x154738u: goto label_154738;
        case 0x15473cu: goto label_15473c;
        case 0x154740u: goto label_154740;
        case 0x154744u: goto label_154744;
        case 0x154748u: goto label_154748;
        case 0x15474cu: goto label_15474c;
        case 0x154750u: goto label_154750;
        case 0x154754u: goto label_154754;
        case 0x154758u: goto label_154758;
        case 0x15475cu: goto label_15475c;
        case 0x154760u: goto label_154760;
        case 0x154764u: goto label_154764;
        case 0x154768u: goto label_154768;
        case 0x15476cu: goto label_15476c;
        case 0x154770u: goto label_154770;
        case 0x154774u: goto label_154774;
        case 0x154778u: goto label_154778;
        case 0x15477cu: goto label_15477c;
        case 0x154780u: goto label_154780;
        case 0x154784u: goto label_154784;
        case 0x154788u: goto label_154788;
        case 0x15478cu: goto label_15478c;
        case 0x154790u: goto label_154790;
        case 0x154794u: goto label_154794;
        case 0x154798u: goto label_154798;
        case 0x15479cu: goto label_15479c;
        case 0x1547a0u: goto label_1547a0;
        case 0x1547a4u: goto label_1547a4;
        case 0x1547a8u: goto label_1547a8;
        case 0x1547acu: goto label_1547ac;
        case 0x1547b0u: goto label_1547b0;
        case 0x1547b4u: goto label_1547b4;
        case 0x1547b8u: goto label_1547b8;
        case 0x1547bcu: goto label_1547bc;
        case 0x1547c0u: goto label_1547c0;
        case 0x1547c4u: goto label_1547c4;
        case 0x1547c8u: goto label_1547c8;
        case 0x1547ccu: goto label_1547cc;
        case 0x1547d0u: goto label_1547d0;
        case 0x1547d4u: goto label_1547d4;
        case 0x1547d8u: goto label_1547d8;
        case 0x1547dcu: goto label_1547dc;
        case 0x1547e0u: goto label_1547e0;
        case 0x1547e4u: goto label_1547e4;
        case 0x1547e8u: goto label_1547e8;
        case 0x1547ecu: goto label_1547ec;
        case 0x1547f0u: goto label_1547f0;
        case 0x1547f4u: goto label_1547f4;
        case 0x1547f8u: goto label_1547f8;
        case 0x1547fcu: goto label_1547fc;
        case 0x154800u: goto label_154800;
        case 0x154804u: goto label_154804;
        case 0x154808u: goto label_154808;
        case 0x15480cu: goto label_15480c;
        case 0x154810u: goto label_154810;
        case 0x154814u: goto label_154814;
        case 0x154818u: goto label_154818;
        case 0x15481cu: goto label_15481c;
        case 0x154820u: goto label_154820;
        case 0x154824u: goto label_154824;
        case 0x154828u: goto label_154828;
        case 0x15482cu: goto label_15482c;
        case 0x154830u: goto label_154830;
        case 0x154834u: goto label_154834;
        case 0x154838u: goto label_154838;
        case 0x15483cu: goto label_15483c;
        case 0x154840u: goto label_154840;
        case 0x154844u: goto label_154844;
        case 0x154848u: goto label_154848;
        case 0x15484cu: goto label_15484c;
        case 0x154850u: goto label_154850;
        case 0x154854u: goto label_154854;
        case 0x154858u: goto label_154858;
        case 0x15485cu: goto label_15485c;
        case 0x154860u: goto label_154860;
        case 0x154864u: goto label_154864;
        case 0x154868u: goto label_154868;
        case 0x15486cu: goto label_15486c;
        case 0x154870u: goto label_154870;
        case 0x154874u: goto label_154874;
        case 0x154878u: goto label_154878;
        case 0x15487cu: goto label_15487c;
        case 0x154880u: goto label_154880;
        case 0x154884u: goto label_154884;
        case 0x154888u: goto label_154888;
        case 0x15488cu: goto label_15488c;
        case 0x154890u: goto label_154890;
        case 0x154894u: goto label_154894;
        case 0x154898u: goto label_154898;
        case 0x15489cu: goto label_15489c;
        case 0x1548a0u: goto label_1548a0;
        case 0x1548a4u: goto label_1548a4;
        case 0x1548a8u: goto label_1548a8;
        case 0x1548acu: goto label_1548ac;
        case 0x1548b0u: goto label_1548b0;
        case 0x1548b4u: goto label_1548b4;
        case 0x1548b8u: goto label_1548b8;
        case 0x1548bcu: goto label_1548bc;
        case 0x1548c0u: goto label_1548c0;
        case 0x1548c4u: goto label_1548c4;
        case 0x1548c8u: goto label_1548c8;
        case 0x1548ccu: goto label_1548cc;
        default: break;
    }

    ctx->pc = 0x1545e0u;

label_1545e0:
    // 0x1545e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1545e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1545e4:
    // 0x1545e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1545e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1545e8:
    // 0x1545e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1545e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1545ec:
    // 0x1545ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1545ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1545f0:
    // 0x1545f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1545f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1545f4:
    // 0x1545f4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1545f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1545f8:
    // 0x1545f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1545f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1545fc:
    // 0x1545fc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1545fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_154600:
    // 0x154600: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_154604:
    // 0x154604: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x154604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154608:
    // 0x154608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15460c:
    // 0x15460c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x15460cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_154610:
    // 0x154610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_154614:
    // 0x154614: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x154614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_154618:
    // 0x154618: 0x8cb00008  lw          $s0, 0x8($a1)
    ctx->pc = 0x154618u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15461c:
    // 0x15461c: 0xac605774  sw          $zero, 0x5774($v1)
    ctx->pc = 0x15461cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22388), GPR_U32(ctx, 0));
label_154620:
    // 0x154620: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x154620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_154624:
    // 0x154624: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x154624u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_154628:
    // 0x154628: 0x1020009f  beqz        $at, . + 4 + (0x9F << 2)
label_15462c:
    if (ctx->pc == 0x15462Cu) {
        ctx->pc = 0x15462Cu;
            // 0x15462c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x154630u;
        goto label_154630;
    }
    ctx->pc = 0x154628u;
    {
        const bool branch_taken_0x154628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15462Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154628u;
            // 0x15462c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154628) {
            ctx->pc = 0x1548A8u;
            goto label_1548a8;
        }
    }
    ctx->pc = 0x154630u;
label_154630:
    // 0x154630: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x154630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_154634:
    // 0x154634: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_154638:
    // 0x154638: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_15463c:
    if (ctx->pc == 0x15463Cu) {
        ctx->pc = 0x15463Cu;
            // 0x15463c: 0xac435770  sw          $v1, 0x5770($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22384), GPR_U32(ctx, 3));
        ctx->pc = 0x154640u;
        goto label_154640;
    }
    ctx->pc = 0x154638u;
    {
        const bool branch_taken_0x154638 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15463Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154638u;
            // 0x15463c: 0xac435770  sw          $v1, 0x5770($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154638) {
            ctx->pc = 0x154650u;
            goto label_154650;
        }
    }
    ctx->pc = 0x154640u;
label_154640:
    // 0x154640: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x154640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_154644:
    // 0x154644: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x154644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_154648:
    // 0x154648: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x154648u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15464c:
    // 0x15464c: 0x0  nop
    ctx->pc = 0x15464cu;
    // NOP
label_154650:
    // 0x154650: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x154650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_154654:
    // 0x154654: 0xc0535e0  jal         func_14D780
label_154658:
    if (ctx->pc == 0x154658u) {
        ctx->pc = 0x154658u;
            // 0x154658: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15465Cu;
        goto label_15465c;
    }
    ctx->pc = 0x154654u;
    SET_GPR_U32(ctx, 31, 0x15465Cu);
    ctx->pc = 0x154658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154654u;
            // 0x154658: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D780u;
    if (runtime->hasFunction(0x14D780u)) {
        auto targetFn = runtime->lookupFunction(0x14D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15465Cu; }
        if (ctx->pc != 0x15465Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D780_0x14d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15465Cu; }
        if (ctx->pc != 0x15465Cu) { return; }
    }
    ctx->pc = 0x15465Cu;
label_15465c:
    // 0x15465c: 0x14400082  bnez        $v0, . + 4 + (0x82 << 2)
label_154660:
    if (ctx->pc == 0x154660u) {
        ctx->pc = 0x154664u;
        goto label_154664;
    }
    ctx->pc = 0x15465Cu;
    {
        const bool branch_taken_0x15465c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15465c) {
            ctx->pc = 0x154868u;
            goto label_154868;
        }
    }
    ctx->pc = 0x154664u;
label_154664:
    // 0x154664: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_154668:
    // 0x154668: 0x8c4257f4  lw          $v0, 0x57F4($v0)
    ctx->pc = 0x154668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22516)));
label_15466c:
    // 0x15466c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_154670:
    if (ctx->pc == 0x154670u) {
        ctx->pc = 0x154674u;
        goto label_154674;
    }
    ctx->pc = 0x15466Cu;
    {
        const bool branch_taken_0x15466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15466c) {
            ctx->pc = 0x154698u;
            goto label_154698;
        }
    }
    ctx->pc = 0x154674u;
label_154674:
    // 0x154674: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_154678:
    // 0x154678: 0x8c4257f0  lw          $v0, 0x57F0($v0)
    ctx->pc = 0x154678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22512)));
label_15467c:
    // 0x15467c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_154680:
    if (ctx->pc == 0x154680u) {
        ctx->pc = 0x154684u;
        goto label_154684;
    }
    ctx->pc = 0x15467Cu;
    {
        const bool branch_taken_0x15467c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15467c) {
            ctx->pc = 0x154698u;
            goto label_154698;
        }
    }
    ctx->pc = 0x154684u;
label_154684:
    // 0x154684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154688:
    // 0x154688: 0xc0536d0  jal         func_14DB40
label_15468c:
    if (ctx->pc == 0x15468Cu) {
        ctx->pc = 0x15468Cu;
            // 0x15468c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x154690u;
        goto label_154690;
    }
    ctx->pc = 0x154688u;
    SET_GPR_U32(ctx, 31, 0x154690u);
    ctx->pc = 0x15468Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154688u;
            // 0x15468c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB40u;
    if (runtime->hasFunction(0x14DB40u)) {
        auto targetFn = runtime->lookupFunction(0x14DB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154690u; }
        if (ctx->pc != 0x154690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014DB40_0x14db40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154690u; }
        if (ctx->pc != 0x154690u) { return; }
    }
    ctx->pc = 0x154690u;
label_154690:
    // 0x154690: 0x4400075  bltz        $v0, . + 4 + (0x75 << 2)
label_154694:
    if (ctx->pc == 0x154694u) {
        ctx->pc = 0x154698u;
        goto label_154698;
    }
    ctx->pc = 0x154690u;
    {
        const bool branch_taken_0x154690 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x154690) {
            ctx->pc = 0x154868u;
            goto label_154868;
        }
    }
    ctx->pc = 0x154698u;
label_154698:
    // 0x154698: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_15469c:
    // 0x15469c: 0x8c445760  lw          $a0, 0x5760($v0)
    ctx->pc = 0x15469cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22368)));
label_1546a0:
    // 0x1546a0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1546a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1546a4:
    // 0x1546a4: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x1546a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
label_1546a8:
    // 0x1546a8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1546a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_1546ac:
    // 0x1546ac: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x1546acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_1546b0:
    // 0x1546b0: 0xac645764  sw          $a0, 0x5764($v1)
    ctx->pc = 0x1546b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22372), GPR_U32(ctx, 4));
label_1546b4:
    // 0x1546b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1546b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1546b8:
    // 0x1546b8: 0x8e090018  lw          $t1, 0x18($s0)
    ctx->pc = 0x1546b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1546bc:
    // 0x1546bc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1546bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_1546c0:
    // 0x1546c0: 0x8c485768  lw          $t0, 0x5768($v0)
    ctx->pc = 0x1546c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22376)));
label_1546c4:
    // 0x1546c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1546c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1546c8:
    // 0x1546c8: 0xace95760  sw          $t1, 0x5760($a3)
    ctx->pc = 0x1546c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 22368), GPR_U32(ctx, 9));
label_1546cc:
    // 0x1546cc: 0x8e870014  lw          $a3, 0x14($s4)
    ctx->pc = 0x1546ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_1546d0:
    // 0x1546d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1546d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1546d4:
    // 0x1546d4: 0x8c425814  lw          $v0, 0x5814($v0)
    ctx->pc = 0x1546d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22548)));
label_1546d8:
    // 0x1546d8: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x1546d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_1546dc:
    // 0x1546dc: 0xaca8576c  sw          $t0, 0x576C($a1)
    ctx->pc = 0x1546dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22380), GPR_U32(ctx, 8));
label_1546e0:
    // 0x1546e0: 0xe92821  addu        $a1, $a3, $t1
    ctx->pc = 0x1546e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1546e4:
    // 0x1546e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1546e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1546e8:
    // 0x1546e8: 0xacc5577c  sw          $a1, 0x577C($a2)
    ctx->pc = 0x1546e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22396), GPR_U32(ctx, 5));
label_1546ec:
    // 0x1546ec: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1546ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1546f0:
    // 0x1546f0: 0xac855768  sw          $a1, 0x5768($a0)
    ctx->pc = 0x1546f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22376), GPR_U32(ctx, 5));
label_1546f4:
    // 0x1546f4: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x1546f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_1546f8:
    // 0x1546f8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1546f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1546fc:
    // 0x1546fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1546fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_154700:
    // 0x154700: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_154704:
    if (ctx->pc == 0x154704u) {
        ctx->pc = 0x154704u;
            // 0x154704: 0xac645780  sw          $a0, 0x5780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 4));
        ctx->pc = 0x154708u;
        goto label_154708;
    }
    ctx->pc = 0x154700u;
    {
        const bool branch_taken_0x154700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154700u;
            // 0x154704: 0xac645780  sw          $a0, 0x5780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154700) {
            ctx->pc = 0x154740u;
            goto label_154740;
        }
    }
    ctx->pc = 0x154708u;
label_154708:
    // 0x154708: 0xc053658  jal         func_14D960
label_15470c:
    if (ctx->pc == 0x15470Cu) {
        ctx->pc = 0x154710u;
        goto label_154710;
    }
    ctx->pc = 0x154708u;
    SET_GPR_U32(ctx, 31, 0x154710u);
    ctx->pc = 0x14D960u;
    if (runtime->hasFunction(0x14D960u)) {
        auto targetFn = runtime->lookupFunction(0x14D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154710u; }
        if (ctx->pc != 0x154710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D960_0x14d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154710u; }
        if (ctx->pc != 0x154710u) { return; }
    }
    ctx->pc = 0x154710u;
label_154710:
    // 0x154710: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_154714:
    // 0x154714: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x154714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_154718:
    // 0x154718: 0x8c445780  lw          $a0, 0x5780($v0)
    ctx->pc = 0x154718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22400)));
label_15471c:
    // 0x15471c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15471cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_154720:
    // 0x154720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x154720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154724:
    // 0x154724: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x154724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_154728:
    // 0x154728: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x154728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_15472c:
    // 0x15472c: 0xc053684  jal         func_14DA10
label_154730:
    if (ctx->pc == 0x154730u) {
        ctx->pc = 0x154730u;
            // 0x154730: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x154734u;
        goto label_154734;
    }
    ctx->pc = 0x15472Cu;
    SET_GPR_U32(ctx, 31, 0x154734u);
    ctx->pc = 0x154730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15472Cu;
            // 0x154730: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DA10u;
    if (runtime->hasFunction(0x14DA10u)) {
        auto targetFn = runtime->lookupFunction(0x14DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154734u; }
        if (ctx->pc != 0x154734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014DA10_0x14da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154734u; }
        if (ctx->pc != 0x154734u) { return; }
    }
    ctx->pc = 0x154734u;
label_154734:
    // 0x154734: 0x1000004c  b           . + 4 + (0x4C << 2)
label_154738:
    if (ctx->pc == 0x154738u) {
        ctx->pc = 0x15473Cu;
        goto label_15473c;
    }
    ctx->pc = 0x154734u;
    {
        const bool branch_taken_0x154734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154734) {
            ctx->pc = 0x154868u;
            goto label_154868;
        }
    }
    ctx->pc = 0x15473Cu;
label_15473c:
    // 0x15473c: 0x0  nop
    ctx->pc = 0x15473cu;
    // NOP
label_154740:
    // 0x154740: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_154744:
    // 0x154744: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x154744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_154748:
    // 0x154748: 0xac405798  sw          $zero, 0x5798($v0)
    ctx->pc = 0x154748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22424), GPR_U32(ctx, 0));
label_15474c:
    // 0x15474c: 0xc05056c  jal         func_1415B0
label_154750:
    if (ctx->pc == 0x154750u) {
        ctx->pc = 0x154750u;
            // 0x154750: 0x24845760  addiu       $a0, $a0, 0x5760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22368));
        ctx->pc = 0x154754u;
        goto label_154754;
    }
    ctx->pc = 0x15474Cu;
    SET_GPR_U32(ctx, 31, 0x154754u);
    ctx->pc = 0x154750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15474Cu;
            // 0x154750: 0x24845760  addiu       $a0, $a0, 0x5760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1415B0u;
    if (runtime->hasFunction(0x1415B0u)) {
        auto targetFn = runtime->lookupFunction(0x1415B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154754u; }
        if (ctx->pc != 0x154754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001415B0_0x1415b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154754u; }
        if (ctx->pc != 0x154754u) { return; }
    }
    ctx->pc = 0x154754u;
label_154754:
    // 0x154754: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_154758:
    if (ctx->pc == 0x154758u) {
        ctx->pc = 0x15475Cu;
        goto label_15475c;
    }
    ctx->pc = 0x154754u;
    {
        const bool branch_taken_0x154754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154754) {
            ctx->pc = 0x154868u;
            goto label_154868;
        }
    }
    ctx->pc = 0x15475Cu;
label_15475c:
    // 0x15475c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15475cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_154760:
    // 0x154760: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x154760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_154764:
    // 0x154764: 0x8c445828  lw          $a0, 0x5828($v0)
    ctx->pc = 0x154764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_154768:
    // 0x154768: 0x8c655824  lw          $a1, 0x5824($v1)
    ctx->pc = 0x154768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
label_15476c:
    // 0x15476c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15476cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_154770:
    // 0x154770: 0x8c4254d8  lw          $v0, 0x54D8($v0)
    ctx->pc = 0x154770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21720)));
label_154774:
    // 0x154774: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x154774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_154778:
    // 0x154778: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x154778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_15477c:
    // 0x15477c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_154780:
    if (ctx->pc == 0x154780u) {
        ctx->pc = 0x154780u;
            // 0x154780: 0xac645824  sw          $a0, 0x5824($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
        ctx->pc = 0x154784u;
        goto label_154784;
    }
    ctx->pc = 0x15477Cu;
    {
        const bool branch_taken_0x15477c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15477Cu;
            // 0x154780: 0xac645824  sw          $a0, 0x5824($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15477c) {
            ctx->pc = 0x154790u;
            goto label_154790;
        }
    }
    ctx->pc = 0x154784u;
label_154784:
    // 0x154784: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x154784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_154788:
    // 0x154788: 0xc0534dc  jal         func_14D370
label_15478c:
    if (ctx->pc == 0x15478Cu) {
        ctx->pc = 0x15478Cu;
            // 0x15478c: 0x24847bd0  addiu       $a0, $a0, 0x7BD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31696));
        ctx->pc = 0x154790u;
        goto label_154790;
    }
    ctx->pc = 0x154788u;
    SET_GPR_U32(ctx, 31, 0x154790u);
    ctx->pc = 0x15478Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154788u;
            // 0x15478c: 0x24847bd0  addiu       $a0, $a0, 0x7BD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (runtime->hasFunction(0x14D370u)) {
        auto targetFn = runtime->lookupFunction(0x14D370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154790u; }
        if (ctx->pc != 0x154790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D370_0x14d370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154790u; }
        if (ctx->pc != 0x154790u) { return; }
    }
    ctx->pc = 0x154790u;
label_154790:
    // 0x154790: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_154794:
    // 0x154794: 0x8c425828  lw          $v0, 0x5828($v0)
    ctx->pc = 0x154794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_154798:
    // 0x154798: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x154798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15479c:
    // 0x15479c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x15479cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_1547a0:
    // 0x1547a0: 0x1065001d  beq         $v1, $a1, . + 4 + (0x1D << 2)
label_1547a4:
    if (ctx->pc == 0x1547A4u) {
        ctx->pc = 0x1547A8u;
        goto label_1547a8;
    }
    ctx->pc = 0x1547A0u;
    {
        const bool branch_taken_0x1547a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1547a0) {
            ctx->pc = 0x154818u;
            goto label_154818;
        }
    }
    ctx->pc = 0x1547A8u;
label_1547a8:
    // 0x1547a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1547a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1547ac:
    // 0x1547ac: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_1547b0:
    if (ctx->pc == 0x1547B0u) {
        ctx->pc = 0x1547B4u;
        goto label_1547b4;
    }
    ctx->pc = 0x1547ACu;
    {
        const bool branch_taken_0x1547ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1547ac) {
            ctx->pc = 0x154800u;
            goto label_154800;
        }
    }
    ctx->pc = 0x1547B4u;
label_1547b4:
    // 0x1547b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1547b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1547b8:
    // 0x1547b8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1547bc:
    if (ctx->pc == 0x1547BCu) {
        ctx->pc = 0x1547C0u;
        goto label_1547c0;
    }
    ctx->pc = 0x1547B8u;
    {
        const bool branch_taken_0x1547b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1547b8) {
            ctx->pc = 0x1547F0u;
            goto label_1547f0;
        }
    }
    ctx->pc = 0x1547C0u;
label_1547c0:
    // 0x1547c0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1547c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1547c4:
    // 0x1547c4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1547c8:
    if (ctx->pc == 0x1547C8u) {
        ctx->pc = 0x1547CCu;
        goto label_1547cc;
    }
    ctx->pc = 0x1547C4u;
    {
        const bool branch_taken_0x1547c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1547c4) {
            ctx->pc = 0x1547D8u;
            goto label_1547d8;
        }
    }
    ctx->pc = 0x1547CCu;
label_1547cc:
    // 0x1547cc: 0x10000016  b           . + 4 + (0x16 << 2)
label_1547d0:
    if (ctx->pc == 0x1547D0u) {
        ctx->pc = 0x1547D4u;
        goto label_1547d4;
    }
    ctx->pc = 0x1547CCu;
    {
        const bool branch_taken_0x1547cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1547cc) {
            ctx->pc = 0x154828u;
            goto label_154828;
        }
    }
    ctx->pc = 0x1547D4u;
label_1547d4:
    // 0x1547d4: 0x0  nop
    ctx->pc = 0x1547d4u;
    // NOP
label_1547d8:
    // 0x1547d8: 0x8f828018  lw          $v0, -0x7FE8($gp)
    ctx->pc = 0x1547d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_1547dc:
    // 0x1547dc: 0x40f809  jalr        $v0
label_1547e0:
    if (ctx->pc == 0x1547E0u) {
        ctx->pc = 0x1547E0u;
            // 0x1547e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1547E4u;
        goto label_1547e4;
    }
    ctx->pc = 0x1547DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1547E4u);
        ctx->pc = 0x1547E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1547DCu;
            // 0x1547e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1547E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1547E4u; }
            if (ctx->pc != 0x1547E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1547E4u;
label_1547e4:
    // 0x1547e4: 0x10000010  b           . + 4 + (0x10 << 2)
label_1547e8:
    if (ctx->pc == 0x1547E8u) {
        ctx->pc = 0x1547ECu;
        goto label_1547ec;
    }
    ctx->pc = 0x1547E4u;
    {
        const bool branch_taken_0x1547e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1547e4) {
            ctx->pc = 0x154828u;
            goto label_154828;
        }
    }
    ctx->pc = 0x1547ECu;
label_1547ec:
    // 0x1547ec: 0x0  nop
    ctx->pc = 0x1547ecu;
    // NOP
label_1547f0:
    // 0x1547f0: 0xc04e550  jal         func_139540
label_1547f4:
    if (ctx->pc == 0x1547F4u) {
        ctx->pc = 0x1547F4u;
            // 0x1547f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1547F8u;
        goto label_1547f8;
    }
    ctx->pc = 0x1547F0u;
    SET_GPR_U32(ctx, 31, 0x1547F8u);
    ctx->pc = 0x1547F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1547F0u;
            // 0x1547f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139540u;
    if (runtime->hasFunction(0x139540u)) {
        auto targetFn = runtime->lookupFunction(0x139540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1547F8u; }
        if (ctx->pc != 0x1547F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139540_0x139540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1547F8u; }
        if (ctx->pc != 0x1547F8u) { return; }
    }
    ctx->pc = 0x1547F8u;
label_1547f8:
    // 0x1547f8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1547fc:
    if (ctx->pc == 0x1547FCu) {
        ctx->pc = 0x154800u;
        goto label_154800;
    }
    ctx->pc = 0x1547F8u;
    {
        const bool branch_taken_0x1547f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1547f8) {
            ctx->pc = 0x154828u;
            goto label_154828;
        }
    }
    ctx->pc = 0x154800u;
label_154800:
    // 0x154800: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154804:
    // 0x154804: 0x8f828018  lw          $v0, -0x7FE8($gp)
    ctx->pc = 0x154804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_154808:
    // 0x154808: 0x40f809  jalr        $v0
label_15480c:
    if (ctx->pc == 0x15480Cu) {
        ctx->pc = 0x15480Cu;
            // 0x15480c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x154810u;
        goto label_154810;
    }
    ctx->pc = 0x154808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154810u);
        ctx->pc = 0x15480Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154808u;
            // 0x15480c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x154810u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x154810u; }
            if (ctx->pc != 0x154810u) { return; }
        }
        }
    }
    ctx->pc = 0x154810u;
label_154810:
    // 0x154810: 0x10000005  b           . + 4 + (0x5 << 2)
label_154814:
    if (ctx->pc == 0x154814u) {
        ctx->pc = 0x154818u;
        goto label_154818;
    }
    ctx->pc = 0x154810u;
    {
        const bool branch_taken_0x154810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154810) {
            ctx->pc = 0x154828u;
            goto label_154828;
        }
    }
    ctx->pc = 0x154818u;
label_154818:
    // 0x154818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x154818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15481c:
    // 0x15481c: 0xc04e550  jal         func_139540
label_154820:
    if (ctx->pc == 0x154820u) {
        ctx->pc = 0x154820u;
            // 0x154820: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x154824u;
        goto label_154824;
    }
    ctx->pc = 0x15481Cu;
    SET_GPR_U32(ctx, 31, 0x154824u);
    ctx->pc = 0x154820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15481Cu;
            // 0x154820: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139540u;
    if (runtime->hasFunction(0x139540u)) {
        auto targetFn = runtime->lookupFunction(0x139540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154824u; }
        if (ctx->pc != 0x154824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139540_0x139540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154824u; }
        if (ctx->pc != 0x154824u) { return; }
    }
    ctx->pc = 0x154824u;
label_154824:
    // 0x154824: 0x0  nop
    ctx->pc = 0x154824u;
    // NOP
label_154828:
    // 0x154828: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_15482c:
    // 0x15482c: 0x8c445780  lw          $a0, 0x5780($v0)
    ctx->pc = 0x15482cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22400)));
label_154830:
    // 0x154830: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x154830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_154834:
    // 0x154834: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x154834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_154838:
    // 0x154838: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x154838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15483c:
    // 0x15483c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_154840:
    if (ctx->pc == 0x154840u) {
        ctx->pc = 0x154844u;
        goto label_154844;
    }
    ctx->pc = 0x15483Cu;
    {
        const bool branch_taken_0x15483c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15483c) {
            ctx->pc = 0x154860u;
            goto label_154860;
        }
    }
    ctx->pc = 0x154844u;
label_154844:
    // 0x154844: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x154844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_154848:
    // 0x154848: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x154848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_15484c:
    // 0x15484c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x15484cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_154850:
    // 0x154850: 0xc054484  jal         func_151210
label_154854:
    if (ctx->pc == 0x154854u) {
        ctx->pc = 0x154854u;
            // 0x154854: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x154858u;
        goto label_154858;
    }
    ctx->pc = 0x154850u;
    SET_GPR_U32(ctx, 31, 0x154858u);
    ctx->pc = 0x154854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154850u;
            // 0x154854: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151210u;
    if (runtime->hasFunction(0x151210u)) {
        auto targetFn = runtime->lookupFunction(0x151210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154858u; }
        if (ctx->pc != 0x154858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151210_0x151210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154858u; }
        if (ctx->pc != 0x154858u) { return; }
    }
    ctx->pc = 0x154858u;
label_154858:
    // 0x154858: 0x10000003  b           . + 4 + (0x3 << 2)
label_15485c:
    if (ctx->pc == 0x15485Cu) {
        ctx->pc = 0x154860u;
        goto label_154860;
    }
    ctx->pc = 0x154858u;
    {
        const bool branch_taken_0x154858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154858) {
            ctx->pc = 0x154868u;
            goto label_154868;
        }
    }
    ctx->pc = 0x154860u;
label_154860:
    // 0x154860: 0xc053a0c  jal         func_14E830
label_154864:
    if (ctx->pc == 0x154864u) {
        ctx->pc = 0x154868u;
        goto label_154868;
    }
    ctx->pc = 0x154860u;
    SET_GPR_U32(ctx, 31, 0x154868u);
    ctx->pc = 0x14E830u;
    if (runtime->hasFunction(0x14E830u)) {
        auto targetFn = runtime->lookupFunction(0x14E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154868u; }
        if (ctx->pc != 0x154868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E830_0x14e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154868u; }
        if (ctx->pc != 0x154868u) { return; }
    }
    ctx->pc = 0x154868u;
label_154868:
    // 0x154868: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x154868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_15486c:
    // 0x15486c: 0x8c63579c  lw          $v1, 0x579C($v1)
    ctx->pc = 0x15486cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22428)));
label_154870:
    // 0x154870: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_154874:
    if (ctx->pc == 0x154874u) {
        ctx->pc = 0x154878u;
        goto label_154878;
    }
    ctx->pc = 0x154870u;
    {
        const bool branch_taken_0x154870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x154870) {
            ctx->pc = 0x154890u;
            goto label_154890;
        }
    }
    ctx->pc = 0x154878u;
label_154878:
    // 0x154878: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x154878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_15487c:
    // 0x15487c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15487cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_154880:
    // 0x154880: 0x8c845774  lw          $a0, 0x5774($a0)
    ctx->pc = 0x154880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22388)));
label_154884:
    // 0x154884: 0x26100024  addiu       $s0, $s0, 0x24
    ctx->pc = 0x154884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_154888:
    // 0x154888: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x154888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15488c:
    // 0x15488c: 0xac645774  sw          $a0, 0x5774($v1)
    ctx->pc = 0x15488cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22388), GPR_U32(ctx, 4));
label_154890:
    // 0x154890: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x154890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_154894:
    // 0x154894: 0x8c645774  lw          $a0, 0x5774($v1)
    ctx->pc = 0x154894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22388)));
label_154898:
    // 0x154898: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x154898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_15489c:
    // 0x15489c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x15489cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1548a0:
    // 0x1548a0: 0x5460ff64  bnel        $v1, $zero, . + 4 + (-0x9C << 2)
label_1548a4:
    if (ctx->pc == 0x1548A4u) {
        ctx->pc = 0x1548A4u;
            // 0x1548a4: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x1548A8u;
        goto label_1548a8;
    }
    ctx->pc = 0x1548A0u;
    {
        const bool branch_taken_0x1548a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1548a0) {
            ctx->pc = 0x1548A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1548A0u;
            // 0x1548a4: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x154634u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154634;
        }
    }
    ctx->pc = 0x1548A8u;
label_1548a8:
    // 0x1548a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1548a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1548ac:
    // 0x1548ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1548acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1548b0:
    // 0x1548b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1548b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1548b4:
    // 0x1548b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1548b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1548b8:
    // 0x1548b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1548b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1548bc:
    // 0x1548bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1548bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1548c0:
    // 0x1548c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1548c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1548c4:
    // 0x1548c4: 0x3e00008  jr          $ra
label_1548c8:
    if (ctx->pc == 0x1548C8u) {
        ctx->pc = 0x1548C8u;
            // 0x1548c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1548CCu;
        goto label_1548cc;
    }
    ctx->pc = 0x1548C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1548C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1548C4u;
            // 0x1548c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1548CCu;
label_1548cc:
    // 0x1548cc: 0x0  nop
    ctx->pc = 0x1548ccu;
    // NOP
}
