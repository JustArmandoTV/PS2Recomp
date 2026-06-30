#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001415F0
// Address: 0x1415f0 - 0x1418a0
void sub_001415F0_0x1415f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001415F0_0x1415f0");
#endif

    switch (ctx->pc) {
        case 0x1415f0u: goto label_1415f0;
        case 0x1415f4u: goto label_1415f4;
        case 0x1415f8u: goto label_1415f8;
        case 0x1415fcu: goto label_1415fc;
        case 0x141600u: goto label_141600;
        case 0x141604u: goto label_141604;
        case 0x141608u: goto label_141608;
        case 0x14160cu: goto label_14160c;
        case 0x141610u: goto label_141610;
        case 0x141614u: goto label_141614;
        case 0x141618u: goto label_141618;
        case 0x14161cu: goto label_14161c;
        case 0x141620u: goto label_141620;
        case 0x141624u: goto label_141624;
        case 0x141628u: goto label_141628;
        case 0x14162cu: goto label_14162c;
        case 0x141630u: goto label_141630;
        case 0x141634u: goto label_141634;
        case 0x141638u: goto label_141638;
        case 0x14163cu: goto label_14163c;
        case 0x141640u: goto label_141640;
        case 0x141644u: goto label_141644;
        case 0x141648u: goto label_141648;
        case 0x14164cu: goto label_14164c;
        case 0x141650u: goto label_141650;
        case 0x141654u: goto label_141654;
        case 0x141658u: goto label_141658;
        case 0x14165cu: goto label_14165c;
        case 0x141660u: goto label_141660;
        case 0x141664u: goto label_141664;
        case 0x141668u: goto label_141668;
        case 0x14166cu: goto label_14166c;
        case 0x141670u: goto label_141670;
        case 0x141674u: goto label_141674;
        case 0x141678u: goto label_141678;
        case 0x14167cu: goto label_14167c;
        case 0x141680u: goto label_141680;
        case 0x141684u: goto label_141684;
        case 0x141688u: goto label_141688;
        case 0x14168cu: goto label_14168c;
        case 0x141690u: goto label_141690;
        case 0x141694u: goto label_141694;
        case 0x141698u: goto label_141698;
        case 0x14169cu: goto label_14169c;
        case 0x1416a0u: goto label_1416a0;
        case 0x1416a4u: goto label_1416a4;
        case 0x1416a8u: goto label_1416a8;
        case 0x1416acu: goto label_1416ac;
        case 0x1416b0u: goto label_1416b0;
        case 0x1416b4u: goto label_1416b4;
        case 0x1416b8u: goto label_1416b8;
        case 0x1416bcu: goto label_1416bc;
        case 0x1416c0u: goto label_1416c0;
        case 0x1416c4u: goto label_1416c4;
        case 0x1416c8u: goto label_1416c8;
        case 0x1416ccu: goto label_1416cc;
        case 0x1416d0u: goto label_1416d0;
        case 0x1416d4u: goto label_1416d4;
        case 0x1416d8u: goto label_1416d8;
        case 0x1416dcu: goto label_1416dc;
        case 0x1416e0u: goto label_1416e0;
        case 0x1416e4u: goto label_1416e4;
        case 0x1416e8u: goto label_1416e8;
        case 0x1416ecu: goto label_1416ec;
        case 0x1416f0u: goto label_1416f0;
        case 0x1416f4u: goto label_1416f4;
        case 0x1416f8u: goto label_1416f8;
        case 0x1416fcu: goto label_1416fc;
        case 0x141700u: goto label_141700;
        case 0x141704u: goto label_141704;
        case 0x141708u: goto label_141708;
        case 0x14170cu: goto label_14170c;
        case 0x141710u: goto label_141710;
        case 0x141714u: goto label_141714;
        case 0x141718u: goto label_141718;
        case 0x14171cu: goto label_14171c;
        case 0x141720u: goto label_141720;
        case 0x141724u: goto label_141724;
        case 0x141728u: goto label_141728;
        case 0x14172cu: goto label_14172c;
        case 0x141730u: goto label_141730;
        case 0x141734u: goto label_141734;
        case 0x141738u: goto label_141738;
        case 0x14173cu: goto label_14173c;
        case 0x141740u: goto label_141740;
        case 0x141744u: goto label_141744;
        case 0x141748u: goto label_141748;
        case 0x14174cu: goto label_14174c;
        case 0x141750u: goto label_141750;
        case 0x141754u: goto label_141754;
        case 0x141758u: goto label_141758;
        case 0x14175cu: goto label_14175c;
        case 0x141760u: goto label_141760;
        case 0x141764u: goto label_141764;
        case 0x141768u: goto label_141768;
        case 0x14176cu: goto label_14176c;
        case 0x141770u: goto label_141770;
        case 0x141774u: goto label_141774;
        case 0x141778u: goto label_141778;
        case 0x14177cu: goto label_14177c;
        case 0x141780u: goto label_141780;
        case 0x141784u: goto label_141784;
        case 0x141788u: goto label_141788;
        case 0x14178cu: goto label_14178c;
        case 0x141790u: goto label_141790;
        case 0x141794u: goto label_141794;
        case 0x141798u: goto label_141798;
        case 0x14179cu: goto label_14179c;
        case 0x1417a0u: goto label_1417a0;
        case 0x1417a4u: goto label_1417a4;
        case 0x1417a8u: goto label_1417a8;
        case 0x1417acu: goto label_1417ac;
        case 0x1417b0u: goto label_1417b0;
        case 0x1417b4u: goto label_1417b4;
        case 0x1417b8u: goto label_1417b8;
        case 0x1417bcu: goto label_1417bc;
        case 0x1417c0u: goto label_1417c0;
        case 0x1417c4u: goto label_1417c4;
        case 0x1417c8u: goto label_1417c8;
        case 0x1417ccu: goto label_1417cc;
        case 0x1417d0u: goto label_1417d0;
        case 0x1417d4u: goto label_1417d4;
        case 0x1417d8u: goto label_1417d8;
        case 0x1417dcu: goto label_1417dc;
        case 0x1417e0u: goto label_1417e0;
        case 0x1417e4u: goto label_1417e4;
        case 0x1417e8u: goto label_1417e8;
        case 0x1417ecu: goto label_1417ec;
        case 0x1417f0u: goto label_1417f0;
        case 0x1417f4u: goto label_1417f4;
        case 0x1417f8u: goto label_1417f8;
        case 0x1417fcu: goto label_1417fc;
        case 0x141800u: goto label_141800;
        case 0x141804u: goto label_141804;
        case 0x141808u: goto label_141808;
        case 0x14180cu: goto label_14180c;
        case 0x141810u: goto label_141810;
        case 0x141814u: goto label_141814;
        case 0x141818u: goto label_141818;
        case 0x14181cu: goto label_14181c;
        case 0x141820u: goto label_141820;
        case 0x141824u: goto label_141824;
        case 0x141828u: goto label_141828;
        case 0x14182cu: goto label_14182c;
        case 0x141830u: goto label_141830;
        case 0x141834u: goto label_141834;
        case 0x141838u: goto label_141838;
        case 0x14183cu: goto label_14183c;
        case 0x141840u: goto label_141840;
        case 0x141844u: goto label_141844;
        case 0x141848u: goto label_141848;
        case 0x14184cu: goto label_14184c;
        case 0x141850u: goto label_141850;
        case 0x141854u: goto label_141854;
        case 0x141858u: goto label_141858;
        case 0x14185cu: goto label_14185c;
        case 0x141860u: goto label_141860;
        case 0x141864u: goto label_141864;
        case 0x141868u: goto label_141868;
        case 0x14186cu: goto label_14186c;
        case 0x141870u: goto label_141870;
        case 0x141874u: goto label_141874;
        case 0x141878u: goto label_141878;
        case 0x14187cu: goto label_14187c;
        case 0x141880u: goto label_141880;
        case 0x141884u: goto label_141884;
        case 0x141888u: goto label_141888;
        case 0x14188cu: goto label_14188c;
        case 0x141890u: goto label_141890;
        case 0x141894u: goto label_141894;
        case 0x141898u: goto label_141898;
        case 0x14189cu: goto label_14189c;
        default: break;
    }

    ctx->pc = 0x1415f0u;

label_1415f0:
    // 0x1415f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1415f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1415f4:
    // 0x1415f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1415f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1415f8:
    // 0x1415f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1415f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1415fc:
    // 0x1415fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1415fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_141600:
    // 0x141600: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x141600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_141604:
    // 0x141604: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_141608:
    // 0x141608: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x141608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_14160c:
    // 0x14160c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_141610:
    if (ctx->pc == 0x141610u) {
        ctx->pc = 0x141610u;
            // 0x141610: 0x94840006  lhu         $a0, 0x6($a0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
        ctx->pc = 0x141614u;
        goto label_141614;
    }
    ctx->pc = 0x14160Cu;
    {
        const bool branch_taken_0x14160c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14160Cu;
            // 0x141610: 0x94840006  lhu         $a0, 0x6($a0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14160c) {
            ctx->pc = 0x14161Cu;
            goto label_14161c;
        }
    }
    ctx->pc = 0x141614u;
label_141614:
    // 0x141614: 0x10000099  b           . + 4 + (0x99 << 2)
label_141618:
    if (ctx->pc == 0x141618u) {
        ctx->pc = 0x141618u;
            // 0x141618: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x14161Cu;
        goto label_14161c;
    }
    ctx->pc = 0x141614u;
    {
        const bool branch_taken_0x141614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141614u;
            // 0x141618: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141614) {
            ctx->pc = 0x14187Cu;
            goto label_14187c;
        }
    }
    ctx->pc = 0x14161Cu;
label_14161c:
    // 0x14161c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x14161cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_141620:
    // 0x141620: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_141624:
    if (ctx->pc == 0x141624u) {
        ctx->pc = 0x141624u;
            // 0x141624: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x141628u;
        goto label_141628;
    }
    ctx->pc = 0x141620u;
    {
        const bool branch_taken_0x141620 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x141620) {
            ctx->pc = 0x141624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141620u;
            // 0x141624: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141630u;
            goto label_141630;
        }
    }
    ctx->pc = 0x141628u;
label_141628:
    // 0x141628: 0x10000094  b           . + 4 + (0x94 << 2)
label_14162c:
    if (ctx->pc == 0x14162Cu) {
        ctx->pc = 0x14162Cu;
            // 0x14162c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x141630u;
        goto label_141630;
    }
    ctx->pc = 0x141628u;
    {
        const bool branch_taken_0x141628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14162Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141628u;
            // 0x14162c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141628) {
            ctx->pc = 0x14187Cu;
            goto label_14187c;
        }
    }
    ctx->pc = 0x141630u;
label_141630:
    // 0x141630: 0x8f83819c  lw          $v1, -0x7E64($gp)
    ctx->pc = 0x141630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934940)));
label_141634:
    // 0x141634: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x141634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_141638:
    // 0x141638: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x141638u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_14163c:
    // 0x14163c: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x14163cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_141640:
    // 0x141640: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_141644:
    if (ctx->pc == 0x141644u) {
        ctx->pc = 0x141644u;
            // 0x141644: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x141648u;
        goto label_141648;
    }
    ctx->pc = 0x141640u;
    {
        const bool branch_taken_0x141640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x141644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141640u;
            // 0x141644: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141640) {
            ctx->pc = 0x14169Cu;
            goto label_14169c;
        }
    }
    ctx->pc = 0x141648u;
label_141648:
    // 0x141648: 0x8f828220  lw          $v0, -0x7DE0($gp)
    ctx->pc = 0x141648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935072)));
label_14164c:
    // 0x14164c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_141650:
    if (ctx->pc == 0x141650u) {
        ctx->pc = 0x141650u;
            // 0x141650: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x141654u;
        goto label_141654;
    }
    ctx->pc = 0x14164Cu;
    {
        const bool branch_taken_0x14164c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14164c) {
            ctx->pc = 0x141650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14164Cu;
            // 0x141650: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1416A0u;
            goto label_1416a0;
        }
    }
    ctx->pc = 0x141654u;
label_141654:
    // 0x141654: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x141654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_141658:
    // 0x141658: 0x60f809  jalr        $v1
label_14165c:
    if (ctx->pc == 0x14165Cu) {
        ctx->pc = 0x14165Cu;
            // 0x14165c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x141660u;
        goto label_141660;
    }
    ctx->pc = 0x141658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x141660u);
        ctx->pc = 0x14165Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141658u;
            // 0x14165c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x141660u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x141660u; }
            if (ctx->pc != 0x141660u) { return; }
        }
        }
    }
    ctx->pc = 0x141660u;
label_141660:
    // 0x141660: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_141664:
    if (ctx->pc == 0x141664u) {
        ctx->pc = 0x141664u;
            // 0x141664: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x141668u;
        goto label_141668;
    }
    ctx->pc = 0x141660u;
    {
        const bool branch_taken_0x141660 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x141660) {
            ctx->pc = 0x141664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141660u;
            // 0x141664: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141670u;
            goto label_141670;
        }
    }
    ctx->pc = 0x141668u;
label_141668:
    // 0x141668: 0x10000085  b           . + 4 + (0x85 << 2)
label_14166c:
    if (ctx->pc == 0x14166Cu) {
        ctx->pc = 0x14166Cu;
            // 0x14166c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x141670u;
        goto label_141670;
    }
    ctx->pc = 0x141668u;
    {
        const bool branch_taken_0x141668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14166Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141668u;
            // 0x14166c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141668) {
            ctx->pc = 0x141880u;
            goto label_141880;
        }
    }
    ctx->pc = 0x141670u;
label_141670:
    // 0x141670: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_141674:
    if (ctx->pc == 0x141674u) {
        ctx->pc = 0x141674u;
            // 0x141674: 0xaf808220  sw          $zero, -0x7DE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935072), GPR_U32(ctx, 0));
        ctx->pc = 0x141678u;
        goto label_141678;
    }
    ctx->pc = 0x141670u;
    {
        const bool branch_taken_0x141670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x141670) {
            ctx->pc = 0x141674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141670u;
            // 0x141674: 0xaf808220  sw          $zero, -0x7DE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935072), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14169Cu;
            goto label_14169c;
        }
    }
    ctx->pc = 0x141678u;
label_141678:
    // 0x141678: 0x8f858214  lw          $a1, -0x7DEC($gp)
    ctx->pc = 0x141678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_14167c:
    // 0x14167c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14167cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_141680:
    // 0x141680: 0x24845980  addiu       $a0, $a0, 0x5980
    ctx->pc = 0x141680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22912));
label_141684:
    // 0x141684: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x141684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_141688:
    // 0x141688: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x141688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14168c:
    // 0x14168c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_141690:
    // 0x141690: 0xc057540  jal         func_15D500
label_141694:
    if (ctx->pc == 0x141694u) {
        ctx->pc = 0x141694u;
            // 0x141694: 0xaf828214  sw          $v0, -0x7DEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935060), GPR_U32(ctx, 2));
        ctx->pc = 0x141698u;
        goto label_141698;
    }
    ctx->pc = 0x141690u;
    SET_GPR_U32(ctx, 31, 0x141698u);
    ctx->pc = 0x141694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141690u;
            // 0x141694: 0xaf828214  sw          $v0, -0x7DEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141698u; }
        if (ctx->pc != 0x141698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141698u; }
        if (ctx->pc != 0x141698u) { return; }
    }
    ctx->pc = 0x141698u;
label_141698:
    // 0x141698: 0xaf808220  sw          $zero, -0x7DE0($gp)
    ctx->pc = 0x141698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935072), GPR_U32(ctx, 0));
label_14169c:
    // 0x14169c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x14169cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1416a0:
    // 0x1416a0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1416a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1416a4:
    // 0x1416a4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1416a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_1416a8:
    // 0x1416a8: 0x8f858214  lw          $a1, -0x7DEC($gp)
    ctx->pc = 0x1416a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1416ac:
    // 0x1416ac: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x1416acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_1416b0:
    // 0x1416b0: 0x24845980  addiu       $a0, $a0, 0x5980
    ctx->pc = 0x1416b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22912));
label_1416b4:
    // 0x1416b4: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1416b4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_1416b8:
    // 0x1416b8: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x1416b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_1416bc:
    // 0x1416bc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1416bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1416c0:
    // 0x1416c0: 0xdc630018  ld          $v1, 0x18($v1)
    ctx->pc = 0x1416c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_1416c4:
    // 0x1416c4: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x1416c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
label_1416c8:
    // 0x1416c8: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x1416c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
label_1416cc:
    // 0x1416cc: 0xc057540  jal         func_15D500
label_1416d0:
    if (ctx->pc == 0x1416D0u) {
        ctx->pc = 0x1416D0u;
            // 0x1416d0: 0xaf828214  sw          $v0, -0x7DEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935060), GPR_U32(ctx, 2));
        ctx->pc = 0x1416D4u;
        goto label_1416d4;
    }
    ctx->pc = 0x1416CCu;
    SET_GPR_U32(ctx, 31, 0x1416D4u);
    ctx->pc = 0x1416D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1416CCu;
            // 0x1416d0: 0xaf828214  sw          $v0, -0x7DEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1416D4u; }
        if (ctx->pc != 0x1416D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1416D4u; }
        if (ctx->pc != 0x1416D4u) { return; }
    }
    ctx->pc = 0x1416D4u;
label_1416d4:
    // 0x1416d4: 0x8f858214  lw          $a1, -0x7DEC($gp)
    ctx->pc = 0x1416d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1416d8:
    // 0x1416d8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1416d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_1416dc:
    // 0x1416dc: 0x24845980  addiu       $a0, $a0, 0x5980
    ctx->pc = 0x1416dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22912));
label_1416e0:
    // 0x1416e0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1416e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1416e4:
    // 0x1416e4: 0xaf828214  sw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1416e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935060), GPR_U32(ctx, 2));
label_1416e8:
    // 0x1416e8: 0x96470004  lhu         $a3, 0x4($s2)
    ctx->pc = 0x1416e8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_1416ec:
    // 0x1416ec: 0xc057540  jal         func_15D500
label_1416f0:
    if (ctx->pc == 0x1416F0u) {
        ctx->pc = 0x1416F0u;
            // 0x1416f0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1416F4u;
        goto label_1416f4;
    }
    ctx->pc = 0x1416ECu;
    SET_GPR_U32(ctx, 31, 0x1416F4u);
    ctx->pc = 0x1416F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1416ECu;
            // 0x1416f0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1416F4u; }
        if (ctx->pc != 0x1416F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1416F4u; }
        if (ctx->pc != 0x1416F4u) { return; }
    }
    ctx->pc = 0x1416F4u;
label_1416f4:
    // 0x1416f4: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x1416f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_1416f8:
    // 0x1416f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1416f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1416fc:
    // 0x1416fc: 0xac43585c  sw          $v1, 0x585C($v0)
    ctx->pc = 0x1416fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22620), GPR_U32(ctx, 3));
label_141700:
    // 0x141700: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x141700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_141704:
    // 0x141704: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x141704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_141708:
    // 0x141708: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_14170c:
    if (ctx->pc == 0x14170Cu) {
        ctx->pc = 0x14170Cu;
            // 0x14170c: 0x93a30050  lbu         $v1, 0x50($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x141710u;
        goto label_141710;
    }
    ctx->pc = 0x141708u;
    {
        const bool branch_taken_0x141708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141708) {
            ctx->pc = 0x14170Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141708u;
            // 0x14170c: 0x93a30050  lbu         $v1, 0x50($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141758u;
            goto label_141758;
        }
    }
    ctx->pc = 0x141710u;
label_141710:
    // 0x141710: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x141710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_141714:
    // 0x141714: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x141714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_141718:
    // 0x141718: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_14171c:
    if (ctx->pc == 0x14171Cu) {
        ctx->pc = 0x14171Cu;
            // 0x14171c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x141720u;
        goto label_141720;
    }
    ctx->pc = 0x141718u;
    {
        const bool branch_taken_0x141718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14171Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141718u;
            // 0x14171c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141718) {
            ctx->pc = 0x141734u;
            goto label_141734;
        }
    }
    ctx->pc = 0x141720u;
label_141720:
    // 0x141720: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_141724:
    // 0x141724: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_141728:
    if (ctx->pc == 0x141728u) {
        ctx->pc = 0x141728u;
            // 0x141728: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x14172Cu;
        goto label_14172c;
    }
    ctx->pc = 0x141724u;
    {
        const bool branch_taken_0x141724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141724) {
            ctx->pc = 0x141728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141724u;
            // 0x141728: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141738u;
            goto label_141738;
        }
    }
    ctx->pc = 0x14172Cu;
label_14172c:
    // 0x14172c: 0x10000003  b           . + 4 + (0x3 << 2)
label_141730:
    if (ctx->pc == 0x141730u) {
        ctx->pc = 0x141730u;
            // 0x141730: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->pc = 0x141734u;
        goto label_141734;
    }
    ctx->pc = 0x14172Cu;
    {
        const bool branch_taken_0x14172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14172Cu;
            // 0x141730: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14172c) {
            ctx->pc = 0x14173Cu;
            goto label_14173c;
        }
    }
    ctx->pc = 0x141734u;
label_141734:
    // 0x141734: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x141734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_141738:
    // 0x141738: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x141738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_14173c:
    // 0x14173c: 0x93a4004c  lbu         $a0, 0x4C($sp)
    ctx->pc = 0x14173cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 76)));
label_141740:
    // 0x141740: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x141740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_141744:
    // 0x141744: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x141744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_141748:
    // 0x141748: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x141748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_14174c:
    // 0x14174c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14174cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_141750:
    // 0x141750: 0xa3a2004c  sb          $v0, 0x4C($sp)
    ctx->pc = 0x141750u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 2));
label_141754:
    // 0x141754: 0x93a30050  lbu         $v1, 0x50($sp)
    ctx->pc = 0x141754u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
label_141758:
    // 0x141758: 0x316fc  dsll32      $v0, $v1, 27
    ctx->pc = 0x141758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 27));
label_14175c:
    // 0x14175c: 0x2177e  dsrl32      $v0, $v0, 29
    ctx->pc = 0x14175cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 29));
label_141760:
    // 0x141760: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_141764:
    if (ctx->pc == 0x141764u) {
        ctx->pc = 0x141764u;
            // 0x141764: 0x8f858214  lw          $a1, -0x7DEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
        ctx->pc = 0x141768u;
        goto label_141768;
    }
    ctx->pc = 0x141760u;
    {
        const bool branch_taken_0x141760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141760) {
            ctx->pc = 0x141764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141760u;
            // 0x141764: 0x8f858214  lw          $a1, -0x7DEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1417DCu;
            goto label_1417dc;
        }
    }
    ctx->pc = 0x141768u;
label_141768:
    // 0x141768: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x141768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_14176c:
    // 0x14176c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x14176cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_141770:
    // 0x141770: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x141770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_141774:
    // 0x141774: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_141778:
    if (ctx->pc == 0x141778u) {
        ctx->pc = 0x14177Cu;
        goto label_14177c;
    }
    ctx->pc = 0x141774u;
    {
        const bool branch_taken_0x141774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141774) {
            ctx->pc = 0x1417D8u;
            goto label_1417d8;
        }
    }
    ctx->pc = 0x14177Cu;
label_14177c:
    // 0x14177c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x14177cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_141780:
    // 0x141780: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x141780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_141784:
    // 0x141784: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x141784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_141788:
    // 0x141788: 0x96440014  lhu         $a0, 0x14($s2)
    ctx->pc = 0x141788u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_14178c:
    // 0x14178c: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x14178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
label_141790:
    // 0x141790: 0x86420016  lh          $v0, 0x16($s2)
    ctx->pc = 0x141790u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
label_141794:
    // 0x141794: 0x30a70040  andi        $a3, $a1, 0x40
    ctx->pc = 0x141794u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
label_141798:
    // 0x141798: 0x93a50052  lbu         $a1, 0x52($sp)
    ctx->pc = 0x141798u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 82)));
label_14179c:
    // 0x14179c: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x14179cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_1417a0:
    // 0x1417a0: 0x73982  srl         $a3, $a3, 6
    ctx->pc = 0x1417a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
label_1417a4:
    // 0x1417a4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1417a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1417a8:
    // 0x1417a8: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x1417a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_1417ac:
    // 0x1417ac: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1417acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1417b0:
    // 0x1417b0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1417b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1417b4:
    // 0x1417b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1417b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1417b8:
    // 0x1417b8: 0xa3a60050  sb          $a2, 0x50($sp)
    ctx->pc = 0x1417b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 6));
label_1417bc:
    // 0x1417bc: 0xa3a30052  sb          $v1, 0x52($sp)
    ctx->pc = 0x1417bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 82), (uint8_t)GPR_U32(ctx, 3));
label_1417c0:
    // 0x1417c0: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x1417c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1417c4:
    // 0x1417c4: 0x97a40054  lhu         $a0, 0x54($sp)
    ctx->pc = 0x1417c4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 84)));
label_1417c8:
    // 0x1417c8: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x1417c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_1417cc:
    // 0x1417cc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1417ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1417d0:
    // 0x1417d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1417d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1417d4:
    // 0x1417d4: 0xa7a20054  sh          $v0, 0x54($sp)
    ctx->pc = 0x1417d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 2));
label_1417d8:
    // 0x1417d8: 0x8f858214  lw          $a1, -0x7DEC($gp)
    ctx->pc = 0x1417d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1417dc:
    // 0x1417dc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1417dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_1417e0:
    // 0x1417e0: 0xdfa70050  ld          $a3, 0x50($sp)
    ctx->pc = 0x1417e0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1417e4:
    // 0x1417e4: 0x24845980  addiu       $a0, $a0, 0x5980
    ctx->pc = 0x1417e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22912));
label_1417e8:
    // 0x1417e8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1417e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1417ec:
    // 0x1417ec: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1417ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1417f0:
    // 0x1417f0: 0xc057540  jal         func_15D500
label_1417f4:
    if (ctx->pc == 0x1417F4u) {
        ctx->pc = 0x1417F4u;
            // 0x1417f4: 0xaf828214  sw          $v0, -0x7DEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935060), GPR_U32(ctx, 2));
        ctx->pc = 0x1417F8u;
        goto label_1417f8;
    }
    ctx->pc = 0x1417F0u;
    SET_GPR_U32(ctx, 31, 0x1417F8u);
    ctx->pc = 0x1417F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1417F0u;
            // 0x1417f4: 0xaf828214  sw          $v0, -0x7DEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417F8u; }
        if (ctx->pc != 0x1417F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1417F8u; }
        if (ctx->pc != 0x1417F8u) { return; }
    }
    ctx->pc = 0x1417F8u;
label_1417f8:
    // 0x1417f8: 0x8f858214  lw          $a1, -0x7DEC($gp)
    ctx->pc = 0x1417f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1417fc:
    // 0x1417fc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1417fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_141800:
    // 0x141800: 0xdfa70048  ld          $a3, 0x48($sp)
    ctx->pc = 0x141800u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_141804:
    // 0x141804: 0x24845980  addiu       $a0, $a0, 0x5980
    ctx->pc = 0x141804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22912));
label_141808:
    // 0x141808: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x141808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14180c:
    // 0x14180c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14180cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_141810:
    // 0x141810: 0xc057540  jal         func_15D500
label_141814:
    if (ctx->pc == 0x141814u) {
        ctx->pc = 0x141814u;
            // 0x141814: 0xaf828214  sw          $v0, -0x7DEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935060), GPR_U32(ctx, 2));
        ctx->pc = 0x141818u;
        goto label_141818;
    }
    ctx->pc = 0x141810u;
    SET_GPR_U32(ctx, 31, 0x141818u);
    ctx->pc = 0x141814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141810u;
            // 0x141814: 0xaf828214  sw          $v0, -0x7DEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141818u; }
        if (ctx->pc != 0x141818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141818u; }
        if (ctx->pc != 0x141818u) { return; }
    }
    ctx->pc = 0x141818u;
label_141818:
    // 0x141818: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x141818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_14181c:
    // 0x14181c: 0xc4405864  lwc1        $f0, 0x5864($v0)
    ctx->pc = 0x14181cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_141820:
    // 0x141820: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x141820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_141824:
    // 0x141824: 0x0  nop
    ctx->pc = 0x141824u;
    // NOP
label_141828:
    // 0x141828: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x141828u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14182c:
    // 0x14182c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_141830:
    if (ctx->pc == 0x141830u) {
        ctx->pc = 0x141830u;
            // 0x141830: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x141834u;
        goto label_141834;
    }
    ctx->pc = 0x14182Cu;
    {
        const bool branch_taken_0x14182c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14182c) {
            ctx->pc = 0x141830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14182Cu;
            // 0x141830: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14184Cu;
            goto label_14184c;
        }
    }
    ctx->pc = 0x141834u;
label_141834:
    // 0x141834: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x141834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_141838:
    // 0x141838: 0xc4405868  lwc1        $f0, 0x5868($v0)
    ctx->pc = 0x141838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 22632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14183c:
    // 0x14183c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x14183cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_141840:
    // 0x141840: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_141844:
    if (ctx->pc == 0x141844u) {
        ctx->pc = 0x141844u;
            // 0x141844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x141848u;
        goto label_141848;
    }
    ctx->pc = 0x141840u;
    {
        const bool branch_taken_0x141840 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x141840) {
            ctx->pc = 0x141844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141840u;
            // 0x141844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14187Cu;
            goto label_14187c;
        }
    }
    ctx->pc = 0x141848u;
label_141848:
    // 0x141848: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x141848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14184c:
    // 0x14184c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14184cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_141850:
    // 0x141850: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x141850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_141854:
    // 0x141854: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x141854u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_141858:
    // 0x141858: 0xc057470  jal         func_15D1C0
label_14185c:
    if (ctx->pc == 0x14185Cu) {
        ctx->pc = 0x14185Cu;
            // 0x14185c: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x141860u;
        goto label_141860;
    }
    ctx->pc = 0x141858u;
    SET_GPR_U32(ctx, 31, 0x141860u);
    ctx->pc = 0x14185Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141858u;
            // 0x14185c: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D1C0u;
    if (runtime->hasFunction(0x15D1C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141860u; }
        if (ctx->pc != 0x141860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D1C0_0x15d1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141860u; }
        if (ctx->pc != 0x141860u) { return; }
    }
    ctx->pc = 0x141860u;
label_141860:
    // 0x141860: 0xc057480  jal         func_15D200
label_141864:
    if (ctx->pc == 0x141864u) {
        ctx->pc = 0x141868u;
        goto label_141868;
    }
    ctx->pc = 0x141860u;
    SET_GPR_U32(ctx, 31, 0x141868u);
    ctx->pc = 0x15D200u;
    if (runtime->hasFunction(0x15D200u)) {
        auto targetFn = runtime->lookupFunction(0x15D200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141868u; }
        if (ctx->pc != 0x141868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D200_0x15d200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141868u; }
        if (ctx->pc != 0x141868u) { return; }
    }
    ctx->pc = 0x141868u;
label_141868:
    // 0x141868: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x141868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_14186c:
    // 0x14186c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14186cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_141870:
    // 0x141870: 0xac605864  sw          $zero, 0x5864($v1)
    ctx->pc = 0x141870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22628), GPR_U32(ctx, 0));
label_141874:
    // 0x141874: 0xac405868  sw          $zero, 0x5868($v0)
    ctx->pc = 0x141874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22632), GPR_U32(ctx, 0));
label_141878:
    // 0x141878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14187c:
    // 0x14187c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14187cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_141880:
    // 0x141880: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x141880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_141884:
    // 0x141884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_141888:
    // 0x141888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14188c:
    // 0x14188c: 0x3e00008  jr          $ra
label_141890:
    if (ctx->pc == 0x141890u) {
        ctx->pc = 0x141890u;
            // 0x141890: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x141894u;
        goto label_141894;
    }
    ctx->pc = 0x14188Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14188Cu;
            // 0x141890: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141894u;
label_141894:
    // 0x141894: 0x0  nop
    ctx->pc = 0x141894u;
    // NOP
label_141898:
    // 0x141898: 0x0  nop
    ctx->pc = 0x141898u;
    // NOP
label_14189c:
    // 0x14189c: 0x0  nop
    ctx->pc = 0x14189cu;
    // NOP
}
