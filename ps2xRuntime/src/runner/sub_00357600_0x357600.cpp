#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00357600
// Address: 0x357600 - 0x3579e0
void sub_00357600_0x357600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357600_0x357600");
#endif

    switch (ctx->pc) {
        case 0x357600u: goto label_357600;
        case 0x357604u: goto label_357604;
        case 0x357608u: goto label_357608;
        case 0x35760cu: goto label_35760c;
        case 0x357610u: goto label_357610;
        case 0x357614u: goto label_357614;
        case 0x357618u: goto label_357618;
        case 0x35761cu: goto label_35761c;
        case 0x357620u: goto label_357620;
        case 0x357624u: goto label_357624;
        case 0x357628u: goto label_357628;
        case 0x35762cu: goto label_35762c;
        case 0x357630u: goto label_357630;
        case 0x357634u: goto label_357634;
        case 0x357638u: goto label_357638;
        case 0x35763cu: goto label_35763c;
        case 0x357640u: goto label_357640;
        case 0x357644u: goto label_357644;
        case 0x357648u: goto label_357648;
        case 0x35764cu: goto label_35764c;
        case 0x357650u: goto label_357650;
        case 0x357654u: goto label_357654;
        case 0x357658u: goto label_357658;
        case 0x35765cu: goto label_35765c;
        case 0x357660u: goto label_357660;
        case 0x357664u: goto label_357664;
        case 0x357668u: goto label_357668;
        case 0x35766cu: goto label_35766c;
        case 0x357670u: goto label_357670;
        case 0x357674u: goto label_357674;
        case 0x357678u: goto label_357678;
        case 0x35767cu: goto label_35767c;
        case 0x357680u: goto label_357680;
        case 0x357684u: goto label_357684;
        case 0x357688u: goto label_357688;
        case 0x35768cu: goto label_35768c;
        case 0x357690u: goto label_357690;
        case 0x357694u: goto label_357694;
        case 0x357698u: goto label_357698;
        case 0x35769cu: goto label_35769c;
        case 0x3576a0u: goto label_3576a0;
        case 0x3576a4u: goto label_3576a4;
        case 0x3576a8u: goto label_3576a8;
        case 0x3576acu: goto label_3576ac;
        case 0x3576b0u: goto label_3576b0;
        case 0x3576b4u: goto label_3576b4;
        case 0x3576b8u: goto label_3576b8;
        case 0x3576bcu: goto label_3576bc;
        case 0x3576c0u: goto label_3576c0;
        case 0x3576c4u: goto label_3576c4;
        case 0x3576c8u: goto label_3576c8;
        case 0x3576ccu: goto label_3576cc;
        case 0x3576d0u: goto label_3576d0;
        case 0x3576d4u: goto label_3576d4;
        case 0x3576d8u: goto label_3576d8;
        case 0x3576dcu: goto label_3576dc;
        case 0x3576e0u: goto label_3576e0;
        case 0x3576e4u: goto label_3576e4;
        case 0x3576e8u: goto label_3576e8;
        case 0x3576ecu: goto label_3576ec;
        case 0x3576f0u: goto label_3576f0;
        case 0x3576f4u: goto label_3576f4;
        case 0x3576f8u: goto label_3576f8;
        case 0x3576fcu: goto label_3576fc;
        case 0x357700u: goto label_357700;
        case 0x357704u: goto label_357704;
        case 0x357708u: goto label_357708;
        case 0x35770cu: goto label_35770c;
        case 0x357710u: goto label_357710;
        case 0x357714u: goto label_357714;
        case 0x357718u: goto label_357718;
        case 0x35771cu: goto label_35771c;
        case 0x357720u: goto label_357720;
        case 0x357724u: goto label_357724;
        case 0x357728u: goto label_357728;
        case 0x35772cu: goto label_35772c;
        case 0x357730u: goto label_357730;
        case 0x357734u: goto label_357734;
        case 0x357738u: goto label_357738;
        case 0x35773cu: goto label_35773c;
        case 0x357740u: goto label_357740;
        case 0x357744u: goto label_357744;
        case 0x357748u: goto label_357748;
        case 0x35774cu: goto label_35774c;
        case 0x357750u: goto label_357750;
        case 0x357754u: goto label_357754;
        case 0x357758u: goto label_357758;
        case 0x35775cu: goto label_35775c;
        case 0x357760u: goto label_357760;
        case 0x357764u: goto label_357764;
        case 0x357768u: goto label_357768;
        case 0x35776cu: goto label_35776c;
        case 0x357770u: goto label_357770;
        case 0x357774u: goto label_357774;
        case 0x357778u: goto label_357778;
        case 0x35777cu: goto label_35777c;
        case 0x357780u: goto label_357780;
        case 0x357784u: goto label_357784;
        case 0x357788u: goto label_357788;
        case 0x35778cu: goto label_35778c;
        case 0x357790u: goto label_357790;
        case 0x357794u: goto label_357794;
        case 0x357798u: goto label_357798;
        case 0x35779cu: goto label_35779c;
        case 0x3577a0u: goto label_3577a0;
        case 0x3577a4u: goto label_3577a4;
        case 0x3577a8u: goto label_3577a8;
        case 0x3577acu: goto label_3577ac;
        case 0x3577b0u: goto label_3577b0;
        case 0x3577b4u: goto label_3577b4;
        case 0x3577b8u: goto label_3577b8;
        case 0x3577bcu: goto label_3577bc;
        case 0x3577c0u: goto label_3577c0;
        case 0x3577c4u: goto label_3577c4;
        case 0x3577c8u: goto label_3577c8;
        case 0x3577ccu: goto label_3577cc;
        case 0x3577d0u: goto label_3577d0;
        case 0x3577d4u: goto label_3577d4;
        case 0x3577d8u: goto label_3577d8;
        case 0x3577dcu: goto label_3577dc;
        case 0x3577e0u: goto label_3577e0;
        case 0x3577e4u: goto label_3577e4;
        case 0x3577e8u: goto label_3577e8;
        case 0x3577ecu: goto label_3577ec;
        case 0x3577f0u: goto label_3577f0;
        case 0x3577f4u: goto label_3577f4;
        case 0x3577f8u: goto label_3577f8;
        case 0x3577fcu: goto label_3577fc;
        case 0x357800u: goto label_357800;
        case 0x357804u: goto label_357804;
        case 0x357808u: goto label_357808;
        case 0x35780cu: goto label_35780c;
        case 0x357810u: goto label_357810;
        case 0x357814u: goto label_357814;
        case 0x357818u: goto label_357818;
        case 0x35781cu: goto label_35781c;
        case 0x357820u: goto label_357820;
        case 0x357824u: goto label_357824;
        case 0x357828u: goto label_357828;
        case 0x35782cu: goto label_35782c;
        case 0x357830u: goto label_357830;
        case 0x357834u: goto label_357834;
        case 0x357838u: goto label_357838;
        case 0x35783cu: goto label_35783c;
        case 0x357840u: goto label_357840;
        case 0x357844u: goto label_357844;
        case 0x357848u: goto label_357848;
        case 0x35784cu: goto label_35784c;
        case 0x357850u: goto label_357850;
        case 0x357854u: goto label_357854;
        case 0x357858u: goto label_357858;
        case 0x35785cu: goto label_35785c;
        case 0x357860u: goto label_357860;
        case 0x357864u: goto label_357864;
        case 0x357868u: goto label_357868;
        case 0x35786cu: goto label_35786c;
        case 0x357870u: goto label_357870;
        case 0x357874u: goto label_357874;
        case 0x357878u: goto label_357878;
        case 0x35787cu: goto label_35787c;
        case 0x357880u: goto label_357880;
        case 0x357884u: goto label_357884;
        case 0x357888u: goto label_357888;
        case 0x35788cu: goto label_35788c;
        case 0x357890u: goto label_357890;
        case 0x357894u: goto label_357894;
        case 0x357898u: goto label_357898;
        case 0x35789cu: goto label_35789c;
        case 0x3578a0u: goto label_3578a0;
        case 0x3578a4u: goto label_3578a4;
        case 0x3578a8u: goto label_3578a8;
        case 0x3578acu: goto label_3578ac;
        case 0x3578b0u: goto label_3578b0;
        case 0x3578b4u: goto label_3578b4;
        case 0x3578b8u: goto label_3578b8;
        case 0x3578bcu: goto label_3578bc;
        case 0x3578c0u: goto label_3578c0;
        case 0x3578c4u: goto label_3578c4;
        case 0x3578c8u: goto label_3578c8;
        case 0x3578ccu: goto label_3578cc;
        case 0x3578d0u: goto label_3578d0;
        case 0x3578d4u: goto label_3578d4;
        case 0x3578d8u: goto label_3578d8;
        case 0x3578dcu: goto label_3578dc;
        case 0x3578e0u: goto label_3578e0;
        case 0x3578e4u: goto label_3578e4;
        case 0x3578e8u: goto label_3578e8;
        case 0x3578ecu: goto label_3578ec;
        case 0x3578f0u: goto label_3578f0;
        case 0x3578f4u: goto label_3578f4;
        case 0x3578f8u: goto label_3578f8;
        case 0x3578fcu: goto label_3578fc;
        case 0x357900u: goto label_357900;
        case 0x357904u: goto label_357904;
        case 0x357908u: goto label_357908;
        case 0x35790cu: goto label_35790c;
        case 0x357910u: goto label_357910;
        case 0x357914u: goto label_357914;
        case 0x357918u: goto label_357918;
        case 0x35791cu: goto label_35791c;
        case 0x357920u: goto label_357920;
        case 0x357924u: goto label_357924;
        case 0x357928u: goto label_357928;
        case 0x35792cu: goto label_35792c;
        case 0x357930u: goto label_357930;
        case 0x357934u: goto label_357934;
        case 0x357938u: goto label_357938;
        case 0x35793cu: goto label_35793c;
        case 0x357940u: goto label_357940;
        case 0x357944u: goto label_357944;
        case 0x357948u: goto label_357948;
        case 0x35794cu: goto label_35794c;
        case 0x357950u: goto label_357950;
        case 0x357954u: goto label_357954;
        case 0x357958u: goto label_357958;
        case 0x35795cu: goto label_35795c;
        case 0x357960u: goto label_357960;
        case 0x357964u: goto label_357964;
        case 0x357968u: goto label_357968;
        case 0x35796cu: goto label_35796c;
        case 0x357970u: goto label_357970;
        case 0x357974u: goto label_357974;
        case 0x357978u: goto label_357978;
        case 0x35797cu: goto label_35797c;
        case 0x357980u: goto label_357980;
        case 0x357984u: goto label_357984;
        case 0x357988u: goto label_357988;
        case 0x35798cu: goto label_35798c;
        case 0x357990u: goto label_357990;
        case 0x357994u: goto label_357994;
        case 0x357998u: goto label_357998;
        case 0x35799cu: goto label_35799c;
        case 0x3579a0u: goto label_3579a0;
        case 0x3579a4u: goto label_3579a4;
        case 0x3579a8u: goto label_3579a8;
        case 0x3579acu: goto label_3579ac;
        case 0x3579b0u: goto label_3579b0;
        case 0x3579b4u: goto label_3579b4;
        case 0x3579b8u: goto label_3579b8;
        case 0x3579bcu: goto label_3579bc;
        case 0x3579c0u: goto label_3579c0;
        case 0x3579c4u: goto label_3579c4;
        case 0x3579c8u: goto label_3579c8;
        case 0x3579ccu: goto label_3579cc;
        case 0x3579d0u: goto label_3579d0;
        case 0x3579d4u: goto label_3579d4;
        case 0x3579d8u: goto label_3579d8;
        case 0x3579dcu: goto label_3579dc;
        default: break;
    }

    ctx->pc = 0x357600u;

label_357600:
    // 0x357600: 0x3e00008  jr          $ra
label_357604:
    if (ctx->pc == 0x357604u) {
        ctx->pc = 0x357604u;
            // 0x357604: 0x90820020  lbu         $v0, 0x20($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->pc = 0x357608u;
        goto label_357608;
    }
    ctx->pc = 0x357600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357600u;
            // 0x357604: 0x90820020  lbu         $v0, 0x20($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357608u;
label_357608:
    // 0x357608: 0x0  nop
    ctx->pc = 0x357608u;
    // NOP
label_35760c:
    // 0x35760c: 0x0  nop
    ctx->pc = 0x35760cu;
    // NOP
label_357610:
    // 0x357610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x357610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_357614:
    // 0x357614: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x357614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_357618:
    // 0x357618: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x357618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_35761c:
    // 0x35761c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35761cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_357620:
    // 0x357620: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x357620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_357624:
    // 0x357624: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_357628:
    // 0x357628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x357628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35762c:
    // 0x35762c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x35762cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_357630:
    // 0x357630: 0x10a30065  beq         $a1, $v1, . + 4 + (0x65 << 2)
label_357634:
    if (ctx->pc == 0x357634u) {
        ctx->pc = 0x357634u;
            // 0x357634: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357638u;
        goto label_357638;
    }
    ctx->pc = 0x357630u;
    {
        const bool branch_taken_0x357630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x357634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357630u;
            // 0x357634: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357630) {
            ctx->pc = 0x3577C8u;
            goto label_3577c8;
        }
    }
    ctx->pc = 0x357638u;
label_357638:
    // 0x357638: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x357638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35763c:
    // 0x35763c: 0x50a3005f  beql        $a1, $v1, . + 4 + (0x5F << 2)
label_357640:
    if (ctx->pc == 0x357640u) {
        ctx->pc = 0x357640u;
            // 0x357640: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x357644u;
        goto label_357644;
    }
    ctx->pc = 0x35763Cu;
    {
        const bool branch_taken_0x35763c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35763c) {
            ctx->pc = 0x357640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35763Cu;
            // 0x357640: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3577BCu;
            goto label_3577bc;
        }
    }
    ctx->pc = 0x357644u;
label_357644:
    // 0x357644: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x357644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_357648:
    // 0x357648: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_35764c:
    if (ctx->pc == 0x35764Cu) {
        ctx->pc = 0x357650u;
        goto label_357650;
    }
    ctx->pc = 0x357648u;
    {
        const bool branch_taken_0x357648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x357648) {
            ctx->pc = 0x357658u;
            goto label_357658;
        }
    }
    ctx->pc = 0x357650u;
label_357650:
    // 0x357650: 0x1000006b  b           . + 4 + (0x6B << 2)
label_357654:
    if (ctx->pc == 0x357654u) {
        ctx->pc = 0x357658u;
        goto label_357658;
    }
    ctx->pc = 0x357650u;
    {
        const bool branch_taken_0x357650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357650) {
            ctx->pc = 0x357800u;
            goto label_357800;
        }
    }
    ctx->pc = 0x357658u;
label_357658:
    // 0x357658: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x357658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_35765c:
    // 0x35765c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35765cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_357660:
    // 0x357660: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x357660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_357664:
    // 0x357664: 0x8ca30cb4  lw          $v1, 0xCB4($a1)
    ctx->pc = 0x357664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3252)));
label_357668:
    // 0x357668: 0x10640065  beq         $v1, $a0, . + 4 + (0x65 << 2)
label_35766c:
    if (ctx->pc == 0x35766Cu) {
        ctx->pc = 0x357670u;
        goto label_357670;
    }
    ctx->pc = 0x357668u;
    {
        const bool branch_taken_0x357668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x357668) {
            ctx->pc = 0x357800u;
            goto label_357800;
        }
    }
    ctx->pc = 0x357670u;
label_357670:
    // 0x357670: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x357670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_357674:
    // 0x357674: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x357674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_357678:
    // 0x357678: 0x8ca50968  lw          $a1, 0x968($a1)
    ctx->pc = 0x357678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2408)));
label_35767c:
    // 0x35767c: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
label_357680:
    if (ctx->pc == 0x357680u) {
        ctx->pc = 0x357680u;
            // 0x357680: 0x8c630030  lw          $v1, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->pc = 0x357684u;
        goto label_357684;
    }
    ctx->pc = 0x35767Cu;
    {
        const bool branch_taken_0x35767c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x357680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35767Cu;
            // 0x357680: 0x8c630030  lw          $v1, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35767c) {
            ctx->pc = 0x35768Cu;
            goto label_35768c;
        }
    }
    ctx->pc = 0x357684u;
label_357684:
    // 0x357684: 0x10000043  b           . + 4 + (0x43 << 2)
label_357688:
    if (ctx->pc == 0x357688u) {
        ctx->pc = 0x357688u;
            // 0x357688: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->pc = 0x35768Cu;
        goto label_35768c;
    }
    ctx->pc = 0x357684u;
    {
        const bool branch_taken_0x357684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357684u;
            // 0x357688: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357684) {
            ctx->pc = 0x357794u;
            goto label_357794;
        }
    }
    ctx->pc = 0x35768Cu;
label_35768c:
    // 0x35768c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x35768cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_357690:
    // 0x357690: 0x8c650120  lw          $a1, 0x120($v1)
    ctx->pc = 0x357690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_357694:
    // 0x357694: 0x8c861730  lw          $a2, 0x1730($a0)
    ctx->pc = 0x357694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5936)));
label_357698:
    // 0x357698: 0x3c0e0060  lui         $t6, 0x60
    ctx->pc = 0x357698u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)96 << 16));
label_35769c:
    // 0x35769c: 0x3c0d0060  lui         $t5, 0x60
    ctx->pc = 0x35769cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)96 << 16));
label_3576a0:
    // 0x3576a0: 0x3c0c0060  lui         $t4, 0x60
    ctx->pc = 0x3576a0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)96 << 16));
label_3576a4:
    // 0x3576a4: 0x3c0b0060  lui         $t3, 0x60
    ctx->pc = 0x3576a4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)96 << 16));
label_3576a8:
    // 0x3576a8: 0x3c0a0060  lui         $t2, 0x60
    ctx->pc = 0x3576a8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)96 << 16));
label_3576ac:
    // 0x3576ac: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x3576acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_3576b0:
    // 0x3576b0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x3576b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_3576b4:
    // 0x3576b4: 0xac650120  sw          $a1, 0x120($v1)
    ctx->pc = 0x3576b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 5));
label_3576b8:
    // 0x3576b8: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x3576b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
label_3576bc:
    // 0x3576bc: 0x8c901738  lw          $s0, 0x1738($a0)
    ctx->pc = 0x3576bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5944)));
label_3576c0:
    // 0x3576c0: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x3576c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_3576c4:
    // 0x3576c4: 0x8c6f01b0  lw          $t7, 0x1B0($v1)
    ctx->pc = 0x3576c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_3576c8:
    // 0x3576c8: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3576c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_3576cc:
    // 0x3576cc: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3576ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_3576d0:
    // 0x3576d0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3576d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3576d4:
    // 0x3576d4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x3576d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_3576d8:
    // 0x3576d8: 0x1f07825  or          $t7, $t7, $s0
    ctx->pc = 0x3576d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 16));
label_3576dc:
    // 0x3576dc: 0xac6f01b0  sw          $t7, 0x1B0($v1)
    ctx->pc = 0x3576dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 432), GPR_U32(ctx, 15));
label_3576e0:
    // 0x3576e0: 0x8dcf1740  lw          $t7, 0x1740($t6)
    ctx->pc = 0x3576e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 5952)));
label_3576e4:
    // 0x3576e4: 0x8c6e0240  lw          $t6, 0x240($v1)
    ctx->pc = 0x3576e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 576)));
label_3576e8:
    // 0x3576e8: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x3576e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
label_3576ec:
    // 0x3576ec: 0xac6e0240  sw          $t6, 0x240($v1)
    ctx->pc = 0x3576ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 576), GPR_U32(ctx, 14));
label_3576f0:
    // 0x3576f0: 0x8dae1748  lw          $t6, 0x1748($t5)
    ctx->pc = 0x3576f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 5960)));
label_3576f4:
    // 0x3576f4: 0x8c6d02d0  lw          $t5, 0x2D0($v1)
    ctx->pc = 0x3576f4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_3576f8:
    // 0x3576f8: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x3576f8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
label_3576fc:
    // 0x3576fc: 0xac6d02d0  sw          $t5, 0x2D0($v1)
    ctx->pc = 0x3576fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 720), GPR_U32(ctx, 13));
label_357700:
    // 0x357700: 0x8d8d1750  lw          $t5, 0x1750($t4)
    ctx->pc = 0x357700u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 5968)));
label_357704:
    // 0x357704: 0x8c6c0360  lw          $t4, 0x360($v1)
    ctx->pc = 0x357704u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 864)));
label_357708:
    // 0x357708: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x357708u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
label_35770c:
    // 0x35770c: 0xac6c0360  sw          $t4, 0x360($v1)
    ctx->pc = 0x35770cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 864), GPR_U32(ctx, 12));
label_357710:
    // 0x357710: 0x8d6c1758  lw          $t4, 0x1758($t3)
    ctx->pc = 0x357710u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 5976)));
label_357714:
    // 0x357714: 0x8c6b03f0  lw          $t3, 0x3F0($v1)
    ctx->pc = 0x357714u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1008)));
label_357718:
    // 0x357718: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x357718u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_35771c:
    // 0x35771c: 0xac6b03f0  sw          $t3, 0x3F0($v1)
    ctx->pc = 0x35771cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 11));
label_357720:
    // 0x357720: 0x8d4b1760  lw          $t3, 0x1760($t2)
    ctx->pc = 0x357720u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 5984)));
label_357724:
    // 0x357724: 0x8c6a0480  lw          $t2, 0x480($v1)
    ctx->pc = 0x357724u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1152)));
label_357728:
    // 0x357728: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x357728u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_35772c:
    // 0x35772c: 0xac6a0480  sw          $t2, 0x480($v1)
    ctx->pc = 0x35772cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 10));
label_357730:
    // 0x357730: 0x8d2a1768  lw          $t2, 0x1768($t1)
    ctx->pc = 0x357730u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 5992)));
label_357734:
    // 0x357734: 0x8c690510  lw          $t1, 0x510($v1)
    ctx->pc = 0x357734u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1296)));
label_357738:
    // 0x357738: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x357738u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
label_35773c:
    // 0x35773c: 0xac690510  sw          $t1, 0x510($v1)
    ctx->pc = 0x35773cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 9));
label_357740:
    // 0x357740: 0x8d091770  lw          $t1, 0x1770($t0)
    ctx->pc = 0x357740u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6000)));
label_357744:
    // 0x357744: 0x8c6805a0  lw          $t0, 0x5A0($v1)
    ctx->pc = 0x357744u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1440)));
label_357748:
    // 0x357748: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x357748u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_35774c:
    // 0x35774c: 0xac6805a0  sw          $t0, 0x5A0($v1)
    ctx->pc = 0x35774cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1440), GPR_U32(ctx, 8));
label_357750:
    // 0x357750: 0x8ce81778  lw          $t0, 0x1778($a3)
    ctx->pc = 0x357750u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 6008)));
label_357754:
    // 0x357754: 0x8c670630  lw          $a3, 0x630($v1)
    ctx->pc = 0x357754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1584)));
label_357758:
    // 0x357758: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x357758u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_35775c:
    // 0x35775c: 0xac670630  sw          $a3, 0x630($v1)
    ctx->pc = 0x35775cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1584), GPR_U32(ctx, 7));
label_357760:
    // 0x357760: 0x8cc71780  lw          $a3, 0x1780($a2)
    ctx->pc = 0x357760u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 6016)));
label_357764:
    // 0x357764: 0x8c6606c0  lw          $a2, 0x6C0($v1)
    ctx->pc = 0x357764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1728)));
label_357768:
    // 0x357768: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x357768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_35776c:
    // 0x35776c: 0xac6606c0  sw          $a2, 0x6C0($v1)
    ctx->pc = 0x35776cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1728), GPR_U32(ctx, 6));
label_357770:
    // 0x357770: 0x8ca61788  lw          $a2, 0x1788($a1)
    ctx->pc = 0x357770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6024)));
label_357774:
    // 0x357774: 0x8c650750  lw          $a1, 0x750($v1)
    ctx->pc = 0x357774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1872)));
label_357778:
    // 0x357778: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x357778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_35777c:
    // 0x35777c: 0xac650750  sw          $a1, 0x750($v1)
    ctx->pc = 0x35777cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1872), GPR_U32(ctx, 5));
label_357780:
    // 0x357780: 0x8c851790  lw          $a1, 0x1790($a0)
    ctx->pc = 0x357780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6032)));
label_357784:
    // 0x357784: 0x8c6407e0  lw          $a0, 0x7E0($v1)
    ctx->pc = 0x357784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2016)));
label_357788:
    // 0x357788: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x357788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_35778c:
    // 0x35778c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_357790:
    if (ctx->pc == 0x357790u) {
        ctx->pc = 0x357790u;
            // 0x357790: 0xac6407e0  sw          $a0, 0x7E0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2016), GPR_U32(ctx, 4));
        ctx->pc = 0x357794u;
        goto label_357794;
    }
    ctx->pc = 0x35778Cu;
    {
        const bool branch_taken_0x35778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35778Cu;
            // 0x357790: 0xac6407e0  sw          $a0, 0x7E0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2016), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35778c) {
            ctx->pc = 0x357800u;
            goto label_357800;
        }
    }
    ctx->pc = 0x357794u;
label_357794:
    // 0x357794: 0x8c650090  lw          $a1, 0x90($v1)
    ctx->pc = 0x357794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_357798:
    // 0x357798: 0x8c861798  lw          $a2, 0x1798($a0)
    ctx->pc = 0x357798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6040)));
label_35779c:
    // 0x35779c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x35779cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_3577a0:
    // 0x3577a0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x3577a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_3577a4:
    // 0x3577a4: 0xac650090  sw          $a1, 0x90($v1)
    ctx->pc = 0x3577a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 5));
label_3577a8:
    // 0x3577a8: 0x8c8517a0  lw          $a1, 0x17A0($a0)
    ctx->pc = 0x3577a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6048)));
label_3577ac:
    // 0x3577ac: 0x8c640120  lw          $a0, 0x120($v1)
    ctx->pc = 0x3577acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_3577b0:
    // 0x3577b0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3577b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_3577b4:
    // 0x3577b4: 0x10000012  b           . + 4 + (0x12 << 2)
label_3577b8:
    if (ctx->pc == 0x3577B8u) {
        ctx->pc = 0x3577B8u;
            // 0x3577b8: 0xac640120  sw          $a0, 0x120($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 4));
        ctx->pc = 0x3577BCu;
        goto label_3577bc;
    }
    ctx->pc = 0x3577B4u;
    {
        const bool branch_taken_0x3577b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3577B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3577B4u;
            // 0x3577b8: 0xac640120  sw          $a0, 0x120($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3577b4) {
            ctx->pc = 0x357800u;
            goto label_357800;
        }
    }
    ctx->pc = 0x3577BCu;
label_3577bc:
    // 0x3577bc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3577bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3577c0:
    // 0x3577c0: 0x320f809  jalr        $t9
label_3577c4:
    if (ctx->pc == 0x3577C4u) {
        ctx->pc = 0x3577C8u;
        goto label_3577c8;
    }
    ctx->pc = 0x3577C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3577C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3577C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3577C8u; }
            if (ctx->pc != 0x3577C8u) { return; }
        }
        }
    }
    ctx->pc = 0x3577C8u;
label_3577c8:
    // 0x3577c8: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x3577c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_3577cc:
    // 0x3577cc: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3577d0:
    if (ctx->pc == 0x3577D0u) {
        ctx->pc = 0x3577D4u;
        goto label_3577d4;
    }
    ctx->pc = 0x3577CCu;
    {
        const bool branch_taken_0x3577cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3577cc) {
            ctx->pc = 0x357800u;
            goto label_357800;
        }
    }
    ctx->pc = 0x3577D4u;
label_3577d4:
    // 0x3577d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3577d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3577d8:
    // 0x3577d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3577d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3577dc:
    // 0x3577dc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3577dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3577e0:
    // 0x3577e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3577e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3577e4:
    // 0x3577e4: 0xc0e3658  jal         func_38D960
label_3577e8:
    if (ctx->pc == 0x3577E8u) {
        ctx->pc = 0x3577E8u;
            // 0x3577e8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3577ECu;
        goto label_3577ec;
    }
    ctx->pc = 0x3577E4u;
    SET_GPR_U32(ctx, 31, 0x3577ECu);
    ctx->pc = 0x3577E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3577E4u;
            // 0x3577e8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3577ECu; }
        if (ctx->pc != 0x3577ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3577ECu; }
        if (ctx->pc != 0x3577ECu) { return; }
    }
    ctx->pc = 0x3577ECu;
label_3577ec:
    // 0x3577ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3577ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3577f0:
    // 0x3577f0: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3577f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3577f4:
    // 0x3577f4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_3577f8:
    if (ctx->pc == 0x3577F8u) {
        ctx->pc = 0x3577F8u;
            // 0x3577f8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3577FCu;
        goto label_3577fc;
    }
    ctx->pc = 0x3577F4u;
    {
        const bool branch_taken_0x3577f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3577F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3577F4u;
            // 0x3577f8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3577f4) {
            ctx->pc = 0x3577DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3577dc;
        }
    }
    ctx->pc = 0x3577FCu;
label_3577fc:
    // 0x3577fc: 0x0  nop
    ctx->pc = 0x3577fcu;
    // NOP
label_357800:
    // 0x357800: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x357800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_357804:
    // 0x357804: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x357804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_357808:
    // 0x357808: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x357808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35780c:
    // 0x35780c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35780cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_357810:
    // 0x357810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_357814:
    // 0x357814: 0x3e00008  jr          $ra
label_357818:
    if (ctx->pc == 0x357818u) {
        ctx->pc = 0x357818u;
            // 0x357818: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x35781Cu;
        goto label_35781c;
    }
    ctx->pc = 0x357814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357814u;
            // 0x357818: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35781Cu;
label_35781c:
    // 0x35781c: 0x0  nop
    ctx->pc = 0x35781cu;
    // NOP
label_357820:
    // 0x357820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x357820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_357824:
    // 0x357824: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x357824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_357828:
    // 0x357828: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x357828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_35782c:
    // 0x35782c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_357830:
    // 0x357830: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_357834:
    // 0x357834: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x357834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_357838:
    // 0x357838: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x357838u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_35783c:
    // 0x35783c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_357840:
    if (ctx->pc == 0x357840u) {
        ctx->pc = 0x357840u;
            // 0x357840: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357844u;
        goto label_357844;
    }
    ctx->pc = 0x35783Cu;
    {
        const bool branch_taken_0x35783c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x357840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35783Cu;
            // 0x357840: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35783c) {
            ctx->pc = 0x357878u;
            goto label_357878;
        }
    }
    ctx->pc = 0x357844u;
label_357844:
    // 0x357844: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x357844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357848:
    // 0x357848: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x357848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35784c:
    // 0x35784c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x35784cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_357850:
    // 0x357850: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x357850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_357854:
    // 0x357854: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x357854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_357858:
    // 0x357858: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x357858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35785c:
    // 0x35785c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x35785cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_357860:
    // 0x357860: 0x320f809  jalr        $t9
label_357864:
    if (ctx->pc == 0x357864u) {
        ctx->pc = 0x357868u;
        goto label_357868;
    }
    ctx->pc = 0x357860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x357868u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x357868u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x357868u; }
            if (ctx->pc != 0x357868u) { return; }
        }
        }
    }
    ctx->pc = 0x357868u;
label_357868:
    // 0x357868: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x357868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_35786c:
    // 0x35786c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x35786cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_357870:
    // 0x357870: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_357874:
    if (ctx->pc == 0x357874u) {
        ctx->pc = 0x357874u;
            // 0x357874: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x357878u;
        goto label_357878;
    }
    ctx->pc = 0x357870u;
    {
        const bool branch_taken_0x357870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x357874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357870u;
            // 0x357874: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357870) {
            ctx->pc = 0x35784Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35784c;
        }
    }
    ctx->pc = 0x357878u;
label_357878:
    // 0x357878: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x357878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_35787c:
    // 0x35787c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35787cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_357880:
    // 0x357880: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x357880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_357884:
    // 0x357884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_357888:
    // 0x357888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35788c:
    // 0x35788c: 0x3e00008  jr          $ra
label_357890:
    if (ctx->pc == 0x357890u) {
        ctx->pc = 0x357890u;
            // 0x357890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x357894u;
        goto label_357894;
    }
    ctx->pc = 0x35788Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35788Cu;
            // 0x357890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357894u;
label_357894:
    // 0x357894: 0x0  nop
    ctx->pc = 0x357894u;
    // NOP
label_357898:
    // 0x357898: 0x0  nop
    ctx->pc = 0x357898u;
    // NOP
label_35789c:
    // 0x35789c: 0x0  nop
    ctx->pc = 0x35789cu;
    // NOP
label_3578a0:
    // 0x3578a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3578a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3578a4:
    // 0x3578a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3578a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3578a8:
    // 0x3578a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3578a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3578ac:
    // 0x3578ac: 0x3c054416  lui         $a1, 0x4416
    ctx->pc = 0x3578acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17430 << 16));
label_3578b0:
    // 0x3578b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3578b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3578b4:
    // 0x3578b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3578b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3578b8:
    // 0x3578b8: 0xac82008c  sw          $v0, 0x8C($a0)
    ctx->pc = 0x3578b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
label_3578bc:
    // 0x3578bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3578bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3578c0:
    // 0x3578c0: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x3578c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
label_3578c4:
    // 0x3578c4: 0x3c0200e0  lui         $v0, 0xE0
    ctx->pc = 0x3578c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)224 << 16));
label_3578c8:
    // 0x3578c8: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x3578c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
label_3578cc:
    // 0x3578cc: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x3578ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_3578d0:
    // 0x3578d0: 0xac850080  sw          $a1, 0x80($a0)
    ctx->pc = 0x3578d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
label_3578d4:
    // 0x3578d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3578d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3578d8:
    // 0x3578d8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x3578d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3578dc:
    // 0x3578dc: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3578dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_3578e0:
    // 0x3578e0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3578e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3578e4:
    // 0x3578e4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3578e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3578e8:
    // 0x3578e8: 0xc08bff0  jal         func_22FFC0
label_3578ec:
    if (ctx->pc == 0x3578ECu) {
        ctx->pc = 0x3578ECu;
            // 0x3578ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3578F0u;
        goto label_3578f0;
    }
    ctx->pc = 0x3578E8u;
    SET_GPR_U32(ctx, 31, 0x3578F0u);
    ctx->pc = 0x3578ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3578E8u;
            // 0x3578ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3578F0u; }
        if (ctx->pc != 0x3578F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3578F0u; }
        if (ctx->pc != 0x3578F0u) { return; }
    }
    ctx->pc = 0x3578F0u;
label_3578f0:
    // 0x3578f0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3578f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3578f4:
    // 0x3578f4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3578f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3578f8:
    // 0x3578f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3578f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3578fc:
    // 0x3578fc: 0xc08914c  jal         func_224530
label_357900:
    if (ctx->pc == 0x357900u) {
        ctx->pc = 0x357900u;
            // 0x357900: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357904u;
        goto label_357904;
    }
    ctx->pc = 0x3578FCu;
    SET_GPR_U32(ctx, 31, 0x357904u);
    ctx->pc = 0x357900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3578FCu;
            // 0x357900: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357904u; }
        if (ctx->pc != 0x357904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357904u; }
        if (ctx->pc != 0x357904u) { return; }
    }
    ctx->pc = 0x357904u;
label_357904:
    // 0x357904: 0xc0e393c  jal         func_38E4F0
label_357908:
    if (ctx->pc == 0x357908u) {
        ctx->pc = 0x357908u;
            // 0x357908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35790Cu;
        goto label_35790c;
    }
    ctx->pc = 0x357904u;
    SET_GPR_U32(ctx, 31, 0x35790Cu);
    ctx->pc = 0x357908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357904u;
            // 0x357908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35790Cu; }
        if (ctx->pc != 0x35790Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35790Cu; }
        if (ctx->pc != 0x35790Cu) { return; }
    }
    ctx->pc = 0x35790Cu;
label_35790c:
    // 0x35790c: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x35790cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_357910:
    // 0x357910: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x357910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_357914:
    // 0x357914: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x357914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_357918:
    // 0x357918: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x357918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_35791c:
    // 0x35791c: 0xacc0015c  sw          $zero, 0x15C($a2)
    ctx->pc = 0x35791cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 348), GPR_U32(ctx, 0));
label_357920:
    // 0x357920: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x357920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_357924:
    // 0x357924: 0xac650160  sw          $a1, 0x160($v1)
    ctx->pc = 0x357924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 5));
label_357928:
    // 0x357928: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x357928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_35792c:
    // 0x35792c: 0xac640158  sw          $a0, 0x158($v1)
    ctx->pc = 0x35792cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 4));
label_357930:
    // 0x357930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_357934:
    // 0x357934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_357938:
    // 0x357938: 0x3e00008  jr          $ra
label_35793c:
    if (ctx->pc == 0x35793Cu) {
        ctx->pc = 0x35793Cu;
            // 0x35793c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x357940u;
        goto label_357940;
    }
    ctx->pc = 0x357938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35793Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357938u;
            // 0x35793c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357940u;
label_357940:
    // 0x357940: 0x3e00008  jr          $ra
label_357944:
    if (ctx->pc == 0x357944u) {
        ctx->pc = 0x357948u;
        goto label_357948;
    }
    ctx->pc = 0x357940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357948u;
label_357948:
    // 0x357948: 0x0  nop
    ctx->pc = 0x357948u;
    // NOP
label_35794c:
    // 0x35794c: 0x0  nop
    ctx->pc = 0x35794cu;
    // NOP
label_357950:
    // 0x357950: 0x3e00008  jr          $ra
label_357954:
    if (ctx->pc == 0x357954u) {
        ctx->pc = 0x357958u;
        goto label_357958;
    }
    ctx->pc = 0x357950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357958u;
label_357958:
    // 0x357958: 0x0  nop
    ctx->pc = 0x357958u;
    // NOP
label_35795c:
    // 0x35795c: 0x0  nop
    ctx->pc = 0x35795cu;
    // NOP
label_357960:
    // 0x357960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_357964:
    // 0x357964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x357964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_357968:
    // 0x357968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x357968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35796c:
    // 0x35796c: 0xc0e3584  jal         func_38D610
label_357970:
    if (ctx->pc == 0x357970u) {
        ctx->pc = 0x357970u;
            // 0x357970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357974u;
        goto label_357974;
    }
    ctx->pc = 0x35796Cu;
    SET_GPR_U32(ctx, 31, 0x357974u);
    ctx->pc = 0x357970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35796Cu;
            // 0x357970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D610u;
    if (runtime->hasFunction(0x38D610u)) {
        auto targetFn = runtime->lookupFunction(0x38D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357974u; }
        if (ctx->pc != 0x357974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D610_0x38d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357974u; }
        if (ctx->pc != 0x357974u) { return; }
    }
    ctx->pc = 0x357974u;
label_357974:
    // 0x357974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357978:
    // 0x357978: 0xc0d5e78  jal         func_3579E0
label_35797c:
    if (ctx->pc == 0x35797Cu) {
        ctx->pc = 0x35797Cu;
            // 0x35797c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357980u;
        goto label_357980;
    }
    ctx->pc = 0x357978u;
    SET_GPR_U32(ctx, 31, 0x357980u);
    ctx->pc = 0x35797Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357978u;
            // 0x35797c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3579E0u;
    if (runtime->hasFunction(0x3579E0u)) {
        auto targetFn = runtime->lookupFunction(0x3579E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357980u; }
        if (ctx->pc != 0x357980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003579E0_0x3579e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357980u; }
        if (ctx->pc != 0x357980u) { return; }
    }
    ctx->pc = 0x357980u;
label_357980:
    // 0x357980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_357984:
    // 0x357984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_357988:
    // 0x357988: 0x3e00008  jr          $ra
label_35798c:
    if (ctx->pc == 0x35798Cu) {
        ctx->pc = 0x35798Cu;
            // 0x35798c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x357990u;
        goto label_357990;
    }
    ctx->pc = 0x357988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35798Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357988u;
            // 0x35798c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357990u;
label_357990:
    // 0x357990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_357994:
    // 0x357994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x357994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_357998:
    // 0x357998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35799c:
    // 0x35799c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35799cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3579a0:
    // 0x3579a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3579a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3579a4:
    // 0x3579a4: 0xc0e34b0  jal         func_38D2C0
label_3579a8:
    if (ctx->pc == 0x3579A8u) {
        ctx->pc = 0x3579A8u;
            // 0x3579a8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3579ACu;
        goto label_3579ac;
    }
    ctx->pc = 0x3579A4u;
    SET_GPR_U32(ctx, 31, 0x3579ACu);
    ctx->pc = 0x3579A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3579A4u;
            // 0x3579a8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D2C0u;
    if (runtime->hasFunction(0x38D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x38D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3579ACu; }
        if (ctx->pc != 0x3579ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D2C0_0x38d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3579ACu; }
        if (ctx->pc != 0x3579ACu) { return; }
    }
    ctx->pc = 0x3579ACu;
label_3579ac:
    // 0x3579ac: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x3579acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3579b0:
    // 0x3579b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3579b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3579b4:
    // 0x3579b4: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_3579b8:
    if (ctx->pc == 0x3579B8u) {
        ctx->pc = 0x3579B8u;
            // 0x3579b8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3579BCu;
        goto label_3579bc;
    }
    ctx->pc = 0x3579B4u;
    {
        const bool branch_taken_0x3579b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3579b4) {
            ctx->pc = 0x3579B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3579B4u;
            // 0x3579b8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3579CCu;
            goto label_3579cc;
        }
    }
    ctx->pc = 0x3579BCu;
label_3579bc:
    // 0x3579bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3579bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3579c0:
    // 0x3579c0: 0xc0d5e78  jal         func_3579E0
label_3579c4:
    if (ctx->pc == 0x3579C4u) {
        ctx->pc = 0x3579C4u;
            // 0x3579c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3579C8u;
        goto label_3579c8;
    }
    ctx->pc = 0x3579C0u;
    SET_GPR_U32(ctx, 31, 0x3579C8u);
    ctx->pc = 0x3579C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3579C0u;
            // 0x3579c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3579E0u;
    if (runtime->hasFunction(0x3579E0u)) {
        auto targetFn = runtime->lookupFunction(0x3579E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3579C8u; }
        if (ctx->pc != 0x3579C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003579E0_0x3579e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3579C8u; }
        if (ctx->pc != 0x3579C8u) { return; }
    }
    ctx->pc = 0x3579C8u;
label_3579c8:
    // 0x3579c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3579c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3579cc:
    // 0x3579cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3579ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3579d0:
    // 0x3579d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3579d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3579d4:
    // 0x3579d4: 0x3e00008  jr          $ra
label_3579d8:
    if (ctx->pc == 0x3579D8u) {
        ctx->pc = 0x3579D8u;
            // 0x3579d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3579DCu;
        goto label_3579dc;
    }
    ctx->pc = 0x3579D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3579D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3579D4u;
            // 0x3579d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3579DCu;
label_3579dc:
    // 0x3579dc: 0x0  nop
    ctx->pc = 0x3579dcu;
    // NOP
}
