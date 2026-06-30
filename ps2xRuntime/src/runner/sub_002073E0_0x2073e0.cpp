#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002073E0
// Address: 0x2073e0 - 0x207980
void sub_002073E0_0x2073e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002073E0_0x2073e0");
#endif

    switch (ctx->pc) {
        case 0x2073e0u: goto label_2073e0;
        case 0x2073e4u: goto label_2073e4;
        case 0x2073e8u: goto label_2073e8;
        case 0x2073ecu: goto label_2073ec;
        case 0x2073f0u: goto label_2073f0;
        case 0x2073f4u: goto label_2073f4;
        case 0x2073f8u: goto label_2073f8;
        case 0x2073fcu: goto label_2073fc;
        case 0x207400u: goto label_207400;
        case 0x207404u: goto label_207404;
        case 0x207408u: goto label_207408;
        case 0x20740cu: goto label_20740c;
        case 0x207410u: goto label_207410;
        case 0x207414u: goto label_207414;
        case 0x207418u: goto label_207418;
        case 0x20741cu: goto label_20741c;
        case 0x207420u: goto label_207420;
        case 0x207424u: goto label_207424;
        case 0x207428u: goto label_207428;
        case 0x20742cu: goto label_20742c;
        case 0x207430u: goto label_207430;
        case 0x207434u: goto label_207434;
        case 0x207438u: goto label_207438;
        case 0x20743cu: goto label_20743c;
        case 0x207440u: goto label_207440;
        case 0x207444u: goto label_207444;
        case 0x207448u: goto label_207448;
        case 0x20744cu: goto label_20744c;
        case 0x207450u: goto label_207450;
        case 0x207454u: goto label_207454;
        case 0x207458u: goto label_207458;
        case 0x20745cu: goto label_20745c;
        case 0x207460u: goto label_207460;
        case 0x207464u: goto label_207464;
        case 0x207468u: goto label_207468;
        case 0x20746cu: goto label_20746c;
        case 0x207470u: goto label_207470;
        case 0x207474u: goto label_207474;
        case 0x207478u: goto label_207478;
        case 0x20747cu: goto label_20747c;
        case 0x207480u: goto label_207480;
        case 0x207484u: goto label_207484;
        case 0x207488u: goto label_207488;
        case 0x20748cu: goto label_20748c;
        case 0x207490u: goto label_207490;
        case 0x207494u: goto label_207494;
        case 0x207498u: goto label_207498;
        case 0x20749cu: goto label_20749c;
        case 0x2074a0u: goto label_2074a0;
        case 0x2074a4u: goto label_2074a4;
        case 0x2074a8u: goto label_2074a8;
        case 0x2074acu: goto label_2074ac;
        case 0x2074b0u: goto label_2074b0;
        case 0x2074b4u: goto label_2074b4;
        case 0x2074b8u: goto label_2074b8;
        case 0x2074bcu: goto label_2074bc;
        case 0x2074c0u: goto label_2074c0;
        case 0x2074c4u: goto label_2074c4;
        case 0x2074c8u: goto label_2074c8;
        case 0x2074ccu: goto label_2074cc;
        case 0x2074d0u: goto label_2074d0;
        case 0x2074d4u: goto label_2074d4;
        case 0x2074d8u: goto label_2074d8;
        case 0x2074dcu: goto label_2074dc;
        case 0x2074e0u: goto label_2074e0;
        case 0x2074e4u: goto label_2074e4;
        case 0x2074e8u: goto label_2074e8;
        case 0x2074ecu: goto label_2074ec;
        case 0x2074f0u: goto label_2074f0;
        case 0x2074f4u: goto label_2074f4;
        case 0x2074f8u: goto label_2074f8;
        case 0x2074fcu: goto label_2074fc;
        case 0x207500u: goto label_207500;
        case 0x207504u: goto label_207504;
        case 0x207508u: goto label_207508;
        case 0x20750cu: goto label_20750c;
        case 0x207510u: goto label_207510;
        case 0x207514u: goto label_207514;
        case 0x207518u: goto label_207518;
        case 0x20751cu: goto label_20751c;
        case 0x207520u: goto label_207520;
        case 0x207524u: goto label_207524;
        case 0x207528u: goto label_207528;
        case 0x20752cu: goto label_20752c;
        case 0x207530u: goto label_207530;
        case 0x207534u: goto label_207534;
        case 0x207538u: goto label_207538;
        case 0x20753cu: goto label_20753c;
        case 0x207540u: goto label_207540;
        case 0x207544u: goto label_207544;
        case 0x207548u: goto label_207548;
        case 0x20754cu: goto label_20754c;
        case 0x207550u: goto label_207550;
        case 0x207554u: goto label_207554;
        case 0x207558u: goto label_207558;
        case 0x20755cu: goto label_20755c;
        case 0x207560u: goto label_207560;
        case 0x207564u: goto label_207564;
        case 0x207568u: goto label_207568;
        case 0x20756cu: goto label_20756c;
        case 0x207570u: goto label_207570;
        case 0x207574u: goto label_207574;
        case 0x207578u: goto label_207578;
        case 0x20757cu: goto label_20757c;
        case 0x207580u: goto label_207580;
        case 0x207584u: goto label_207584;
        case 0x207588u: goto label_207588;
        case 0x20758cu: goto label_20758c;
        case 0x207590u: goto label_207590;
        case 0x207594u: goto label_207594;
        case 0x207598u: goto label_207598;
        case 0x20759cu: goto label_20759c;
        case 0x2075a0u: goto label_2075a0;
        case 0x2075a4u: goto label_2075a4;
        case 0x2075a8u: goto label_2075a8;
        case 0x2075acu: goto label_2075ac;
        case 0x2075b0u: goto label_2075b0;
        case 0x2075b4u: goto label_2075b4;
        case 0x2075b8u: goto label_2075b8;
        case 0x2075bcu: goto label_2075bc;
        case 0x2075c0u: goto label_2075c0;
        case 0x2075c4u: goto label_2075c4;
        case 0x2075c8u: goto label_2075c8;
        case 0x2075ccu: goto label_2075cc;
        case 0x2075d0u: goto label_2075d0;
        case 0x2075d4u: goto label_2075d4;
        case 0x2075d8u: goto label_2075d8;
        case 0x2075dcu: goto label_2075dc;
        case 0x2075e0u: goto label_2075e0;
        case 0x2075e4u: goto label_2075e4;
        case 0x2075e8u: goto label_2075e8;
        case 0x2075ecu: goto label_2075ec;
        case 0x2075f0u: goto label_2075f0;
        case 0x2075f4u: goto label_2075f4;
        case 0x2075f8u: goto label_2075f8;
        case 0x2075fcu: goto label_2075fc;
        case 0x207600u: goto label_207600;
        case 0x207604u: goto label_207604;
        case 0x207608u: goto label_207608;
        case 0x20760cu: goto label_20760c;
        case 0x207610u: goto label_207610;
        case 0x207614u: goto label_207614;
        case 0x207618u: goto label_207618;
        case 0x20761cu: goto label_20761c;
        case 0x207620u: goto label_207620;
        case 0x207624u: goto label_207624;
        case 0x207628u: goto label_207628;
        case 0x20762cu: goto label_20762c;
        case 0x207630u: goto label_207630;
        case 0x207634u: goto label_207634;
        case 0x207638u: goto label_207638;
        case 0x20763cu: goto label_20763c;
        case 0x207640u: goto label_207640;
        case 0x207644u: goto label_207644;
        case 0x207648u: goto label_207648;
        case 0x20764cu: goto label_20764c;
        case 0x207650u: goto label_207650;
        case 0x207654u: goto label_207654;
        case 0x207658u: goto label_207658;
        case 0x20765cu: goto label_20765c;
        case 0x207660u: goto label_207660;
        case 0x207664u: goto label_207664;
        case 0x207668u: goto label_207668;
        case 0x20766cu: goto label_20766c;
        case 0x207670u: goto label_207670;
        case 0x207674u: goto label_207674;
        case 0x207678u: goto label_207678;
        case 0x20767cu: goto label_20767c;
        case 0x207680u: goto label_207680;
        case 0x207684u: goto label_207684;
        case 0x207688u: goto label_207688;
        case 0x20768cu: goto label_20768c;
        case 0x207690u: goto label_207690;
        case 0x207694u: goto label_207694;
        case 0x207698u: goto label_207698;
        case 0x20769cu: goto label_20769c;
        case 0x2076a0u: goto label_2076a0;
        case 0x2076a4u: goto label_2076a4;
        case 0x2076a8u: goto label_2076a8;
        case 0x2076acu: goto label_2076ac;
        case 0x2076b0u: goto label_2076b0;
        case 0x2076b4u: goto label_2076b4;
        case 0x2076b8u: goto label_2076b8;
        case 0x2076bcu: goto label_2076bc;
        case 0x2076c0u: goto label_2076c0;
        case 0x2076c4u: goto label_2076c4;
        case 0x2076c8u: goto label_2076c8;
        case 0x2076ccu: goto label_2076cc;
        case 0x2076d0u: goto label_2076d0;
        case 0x2076d4u: goto label_2076d4;
        case 0x2076d8u: goto label_2076d8;
        case 0x2076dcu: goto label_2076dc;
        case 0x2076e0u: goto label_2076e0;
        case 0x2076e4u: goto label_2076e4;
        case 0x2076e8u: goto label_2076e8;
        case 0x2076ecu: goto label_2076ec;
        case 0x2076f0u: goto label_2076f0;
        case 0x2076f4u: goto label_2076f4;
        case 0x2076f8u: goto label_2076f8;
        case 0x2076fcu: goto label_2076fc;
        case 0x207700u: goto label_207700;
        case 0x207704u: goto label_207704;
        case 0x207708u: goto label_207708;
        case 0x20770cu: goto label_20770c;
        case 0x207710u: goto label_207710;
        case 0x207714u: goto label_207714;
        case 0x207718u: goto label_207718;
        case 0x20771cu: goto label_20771c;
        case 0x207720u: goto label_207720;
        case 0x207724u: goto label_207724;
        case 0x207728u: goto label_207728;
        case 0x20772cu: goto label_20772c;
        case 0x207730u: goto label_207730;
        case 0x207734u: goto label_207734;
        case 0x207738u: goto label_207738;
        case 0x20773cu: goto label_20773c;
        case 0x207740u: goto label_207740;
        case 0x207744u: goto label_207744;
        case 0x207748u: goto label_207748;
        case 0x20774cu: goto label_20774c;
        case 0x207750u: goto label_207750;
        case 0x207754u: goto label_207754;
        case 0x207758u: goto label_207758;
        case 0x20775cu: goto label_20775c;
        case 0x207760u: goto label_207760;
        case 0x207764u: goto label_207764;
        case 0x207768u: goto label_207768;
        case 0x20776cu: goto label_20776c;
        case 0x207770u: goto label_207770;
        case 0x207774u: goto label_207774;
        case 0x207778u: goto label_207778;
        case 0x20777cu: goto label_20777c;
        case 0x207780u: goto label_207780;
        case 0x207784u: goto label_207784;
        case 0x207788u: goto label_207788;
        case 0x20778cu: goto label_20778c;
        case 0x207790u: goto label_207790;
        case 0x207794u: goto label_207794;
        case 0x207798u: goto label_207798;
        case 0x20779cu: goto label_20779c;
        case 0x2077a0u: goto label_2077a0;
        case 0x2077a4u: goto label_2077a4;
        case 0x2077a8u: goto label_2077a8;
        case 0x2077acu: goto label_2077ac;
        case 0x2077b0u: goto label_2077b0;
        case 0x2077b4u: goto label_2077b4;
        case 0x2077b8u: goto label_2077b8;
        case 0x2077bcu: goto label_2077bc;
        case 0x2077c0u: goto label_2077c0;
        case 0x2077c4u: goto label_2077c4;
        case 0x2077c8u: goto label_2077c8;
        case 0x2077ccu: goto label_2077cc;
        case 0x2077d0u: goto label_2077d0;
        case 0x2077d4u: goto label_2077d4;
        case 0x2077d8u: goto label_2077d8;
        case 0x2077dcu: goto label_2077dc;
        case 0x2077e0u: goto label_2077e0;
        case 0x2077e4u: goto label_2077e4;
        case 0x2077e8u: goto label_2077e8;
        case 0x2077ecu: goto label_2077ec;
        case 0x2077f0u: goto label_2077f0;
        case 0x2077f4u: goto label_2077f4;
        case 0x2077f8u: goto label_2077f8;
        case 0x2077fcu: goto label_2077fc;
        case 0x207800u: goto label_207800;
        case 0x207804u: goto label_207804;
        case 0x207808u: goto label_207808;
        case 0x20780cu: goto label_20780c;
        case 0x207810u: goto label_207810;
        case 0x207814u: goto label_207814;
        case 0x207818u: goto label_207818;
        case 0x20781cu: goto label_20781c;
        case 0x207820u: goto label_207820;
        case 0x207824u: goto label_207824;
        case 0x207828u: goto label_207828;
        case 0x20782cu: goto label_20782c;
        case 0x207830u: goto label_207830;
        case 0x207834u: goto label_207834;
        case 0x207838u: goto label_207838;
        case 0x20783cu: goto label_20783c;
        case 0x207840u: goto label_207840;
        case 0x207844u: goto label_207844;
        case 0x207848u: goto label_207848;
        case 0x20784cu: goto label_20784c;
        case 0x207850u: goto label_207850;
        case 0x207854u: goto label_207854;
        case 0x207858u: goto label_207858;
        case 0x20785cu: goto label_20785c;
        case 0x207860u: goto label_207860;
        case 0x207864u: goto label_207864;
        case 0x207868u: goto label_207868;
        case 0x20786cu: goto label_20786c;
        case 0x207870u: goto label_207870;
        case 0x207874u: goto label_207874;
        case 0x207878u: goto label_207878;
        case 0x20787cu: goto label_20787c;
        case 0x207880u: goto label_207880;
        case 0x207884u: goto label_207884;
        case 0x207888u: goto label_207888;
        case 0x20788cu: goto label_20788c;
        case 0x207890u: goto label_207890;
        case 0x207894u: goto label_207894;
        case 0x207898u: goto label_207898;
        case 0x20789cu: goto label_20789c;
        case 0x2078a0u: goto label_2078a0;
        case 0x2078a4u: goto label_2078a4;
        case 0x2078a8u: goto label_2078a8;
        case 0x2078acu: goto label_2078ac;
        case 0x2078b0u: goto label_2078b0;
        case 0x2078b4u: goto label_2078b4;
        case 0x2078b8u: goto label_2078b8;
        case 0x2078bcu: goto label_2078bc;
        case 0x2078c0u: goto label_2078c0;
        case 0x2078c4u: goto label_2078c4;
        case 0x2078c8u: goto label_2078c8;
        case 0x2078ccu: goto label_2078cc;
        case 0x2078d0u: goto label_2078d0;
        case 0x2078d4u: goto label_2078d4;
        case 0x2078d8u: goto label_2078d8;
        case 0x2078dcu: goto label_2078dc;
        case 0x2078e0u: goto label_2078e0;
        case 0x2078e4u: goto label_2078e4;
        case 0x2078e8u: goto label_2078e8;
        case 0x2078ecu: goto label_2078ec;
        case 0x2078f0u: goto label_2078f0;
        case 0x2078f4u: goto label_2078f4;
        case 0x2078f8u: goto label_2078f8;
        case 0x2078fcu: goto label_2078fc;
        case 0x207900u: goto label_207900;
        case 0x207904u: goto label_207904;
        case 0x207908u: goto label_207908;
        case 0x20790cu: goto label_20790c;
        case 0x207910u: goto label_207910;
        case 0x207914u: goto label_207914;
        case 0x207918u: goto label_207918;
        case 0x20791cu: goto label_20791c;
        case 0x207920u: goto label_207920;
        case 0x207924u: goto label_207924;
        case 0x207928u: goto label_207928;
        case 0x20792cu: goto label_20792c;
        case 0x207930u: goto label_207930;
        case 0x207934u: goto label_207934;
        case 0x207938u: goto label_207938;
        case 0x20793cu: goto label_20793c;
        case 0x207940u: goto label_207940;
        case 0x207944u: goto label_207944;
        case 0x207948u: goto label_207948;
        case 0x20794cu: goto label_20794c;
        case 0x207950u: goto label_207950;
        case 0x207954u: goto label_207954;
        case 0x207958u: goto label_207958;
        case 0x20795cu: goto label_20795c;
        case 0x207960u: goto label_207960;
        case 0x207964u: goto label_207964;
        case 0x207968u: goto label_207968;
        case 0x20796cu: goto label_20796c;
        case 0x207970u: goto label_207970;
        case 0x207974u: goto label_207974;
        case 0x207978u: goto label_207978;
        case 0x20797cu: goto label_20797c;
        default: break;
    }

    ctx->pc = 0x2073e0u;

label_2073e0:
    // 0x2073e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2073e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2073e4:
    // 0x2073e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2073e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2073e8:
    // 0x2073e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2073e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2073ec:
    // 0x2073ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2073ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2073f0:
    // 0x2073f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2073f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2073f4:
    // 0x2073f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2073f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2073f8:
    // 0x2073f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2073f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2073fc:
    // 0x2073fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2073fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_207400:
    // 0x207400: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x207400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_207404:
    // 0x207404: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x207404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_207408:
    // 0x207408: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x207408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_20740c:
    // 0x20740c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x20740cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_207410:
    // 0x207410: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x207410u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_207414:
    // 0x207414: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_207418:
    if (ctx->pc == 0x207418u) {
        ctx->pc = 0x207418u;
            // 0x207418: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20741Cu;
        goto label_20741c;
    }
    ctx->pc = 0x207414u;
    {
        const bool branch_taken_0x207414 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x207418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207414u;
            // 0x207418: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207414) {
            ctx->pc = 0x207438u;
            goto label_207438;
        }
    }
    ctx->pc = 0x20741Cu;
label_20741c:
    // 0x20741c: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x20741cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_207420:
    // 0x207420: 0x225082a  slt         $at, $s1, $a1
    ctx->pc = 0x207420u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_207424:
    // 0x207424: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_207428:
    if (ctx->pc == 0x207428u) {
        ctx->pc = 0x207428u;
            // 0x207428: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20742Cu;
        goto label_20742c;
    }
    ctx->pc = 0x207424u;
    {
        const bool branch_taken_0x207424 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x207424) {
            ctx->pc = 0x207428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207424u;
            // 0x207428: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20742Cu;
            goto label_20742c;
        }
    }
    ctx->pc = 0x20742Cu;
label_20742c:
    // 0x20742c: 0x26640018  addiu       $a0, $s3, 0x18
    ctx->pc = 0x20742cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_207430:
    // 0x207430: 0xc0a725c  jal         func_29C970
label_207434:
    if (ctx->pc == 0x207434u) {
        ctx->pc = 0x207434u;
            // 0x207434: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x207438u;
        goto label_207438;
    }
    ctx->pc = 0x207430u;
    SET_GPR_U32(ctx, 31, 0x207438u);
    ctx->pc = 0x207434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207430u;
            // 0x207434: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207438u; }
        if (ctx->pc != 0x207438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207438u; }
        if (ctx->pc != 0x207438u) { return; }
    }
    ctx->pc = 0x207438u;
label_207438:
    // 0x207438: 0xae71001c  sw          $s1, 0x1C($s3)
    ctx->pc = 0x207438u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 17));
label_20743c:
    // 0x20743c: 0x1a200022  blez        $s1, . + 4 + (0x22 << 2)
label_207440:
    if (ctx->pc == 0x207440u) {
        ctx->pc = 0x207440u;
            // 0x207440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207444u;
        goto label_207444;
    }
    ctx->pc = 0x20743Cu;
    {
        const bool branch_taken_0x20743c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x207440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20743Cu;
            // 0x207440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20743c) {
            ctx->pc = 0x2074C8u;
            goto label_2074c8;
        }
    }
    ctx->pc = 0x207444u;
label_207444:
    // 0x207444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207448:
    // 0x207448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20744c:
    // 0x20744c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x20744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_207450:
    // 0x207450: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_207454:
    if (ctx->pc == 0x207454u) {
        ctx->pc = 0x207458u;
        goto label_207458;
    }
    ctx->pc = 0x207450u;
    {
        const bool branch_taken_0x207450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x207450) {
            ctx->pc = 0x2074B0u;
            goto label_2074b0;
        }
    }
    ctx->pc = 0x207458u;
label_207458:
    // 0x207458: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x207458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_20745c:
    // 0x20745c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20745cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_207460:
    // 0x207460: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_207464:
    if (ctx->pc == 0x207464u) {
        ctx->pc = 0x207464u;
            // 0x207464: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x207468u;
        goto label_207468;
    }
    ctx->pc = 0x207460u;
    {
        const bool branch_taken_0x207460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x207464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207460u;
            // 0x207464: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207460) {
            ctx->pc = 0x207470u;
            goto label_207470;
        }
    }
    ctx->pc = 0x207468u;
label_207468:
    // 0x207468: 0x10000002  b           . + 4 + (0x2 << 2)
label_20746c:
    if (ctx->pc == 0x20746Cu) {
        ctx->pc = 0x20746Cu;
            // 0x20746c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x207470u;
        goto label_207470;
    }
    ctx->pc = 0x207468u;
    {
        const bool branch_taken_0x207468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20746Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207468u;
            // 0x20746c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207468) {
            ctx->pc = 0x207474u;
            goto label_207474;
        }
    }
    ctx->pc = 0x207470u;
label_207470:
    // 0x207470: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x207470u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207474:
    // 0x207474: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x207474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_207478:
    // 0x207478: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x207478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20747c:
    // 0x20747c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x20747cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_207480:
    // 0x207480: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x207480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_207484:
    // 0x207484: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x207484u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_207488:
    // 0x207488: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20748c:
    if (ctx->pc == 0x20748Cu) {
        ctx->pc = 0x207490u;
        goto label_207490;
    }
    ctx->pc = 0x207488u;
    {
        const bool branch_taken_0x207488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207488) {
            ctx->pc = 0x2074A0u;
            goto label_2074a0;
        }
    }
    ctx->pc = 0x207490u;
label_207490:
    // 0x207490: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x207490u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_207494:
    // 0x207494: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x207494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_207498:
    // 0x207498: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x207498u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_20749c:
    // 0x20749c: 0x0  nop
    ctx->pc = 0x20749cu;
    // NOP
label_2074a0:
    // 0x2074a0: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x2074a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2074a4:
    // 0x2074a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2074a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2074a8:
    // 0x2074a8: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x2074a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
label_2074ac:
    // 0x2074ac: 0x0  nop
    ctx->pc = 0x2074acu;
    // NOP
label_2074b0:
    // 0x2074b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2074b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2074b4:
    // 0x2074b4: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x2074b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2074b8:
    // 0x2074b8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2074b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2074bc:
    // 0x2074bc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2074bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2074c0:
    // 0x2074c0: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_2074c4:
    if (ctx->pc == 0x2074C4u) {
        ctx->pc = 0x2074C4u;
            // 0x2074c4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x2074C8u;
        goto label_2074c8;
    }
    ctx->pc = 0x2074C0u;
    {
        const bool branch_taken_0x2074c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2074C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2074C0u;
            // 0x2074c4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074c0) {
            ctx->pc = 0x20744Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20744c;
        }
    }
    ctx->pc = 0x2074C8u;
label_2074c8:
    // 0x2074c8: 0xc081e60  jal         func_207980
label_2074cc:
    if (ctx->pc == 0x2074CCu) {
        ctx->pc = 0x2074CCu;
            // 0x2074cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2074D0u;
        goto label_2074d0;
    }
    ctx->pc = 0x2074C8u;
    SET_GPR_U32(ctx, 31, 0x2074D0u);
    ctx->pc = 0x2074CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2074C8u;
            // 0x2074cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207980u;
    if (runtime->hasFunction(0x207980u)) {
        auto targetFn = runtime->lookupFunction(0x207980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2074D0u; }
        if (ctx->pc != 0x2074D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207980_0x207980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2074D0u; }
        if (ctx->pc != 0x2074D0u) { return; }
    }
    ctx->pc = 0x2074D0u;
label_2074d0:
    // 0x2074d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2074d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2074d4:
    // 0x2074d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2074d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2074d8:
    // 0x2074d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2074d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2074dc:
    // 0x2074dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2074dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2074e0:
    // 0x2074e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2074e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2074e4:
    // 0x2074e4: 0x3e00008  jr          $ra
label_2074e8:
    if (ctx->pc == 0x2074E8u) {
        ctx->pc = 0x2074E8u;
            // 0x2074e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2074ECu;
        goto label_2074ec;
    }
    ctx->pc = 0x2074E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2074E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2074E4u;
            // 0x2074e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2074ECu;
label_2074ec:
    // 0x2074ec: 0x0  nop
    ctx->pc = 0x2074ecu;
    // NOP
label_2074f0:
    // 0x2074f0: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x2074f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_2074f4:
    // 0x2074f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2074f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2074f8:
    // 0x2074f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2074f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2074fc:
    // 0x2074fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2074fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_207500:
    // 0x207500: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x207500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_207504:
    // 0x207504: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x207504u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207508:
    // 0x207508: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x207508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_20750c:
    // 0x20750c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x20750cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_207510:
    // 0x207510: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x207510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_207514:
    // 0x207514: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x207514u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_207518:
    // 0x207518: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x207518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20751c:
    // 0x20751c: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x20751cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_207520:
    // 0x207520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_207524:
    // 0x207524: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x207524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_207528:
    // 0x207528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x207528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20752c:
    // 0x20752c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20752cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207530:
    // 0x207530: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x207530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_207534:
    // 0x207534: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x207534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_207538:
    // 0x207538: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x207538u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20753c:
    // 0x20753c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_207540:
    if (ctx->pc == 0x207540u) {
        ctx->pc = 0x207540u;
            // 0x207540: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x207544u;
        goto label_207544;
    }
    ctx->pc = 0x20753Cu;
    {
        const bool branch_taken_0x20753c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20753Cu;
            // 0x207540: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20753c) {
            ctx->pc = 0x20756Cu;
            goto label_20756c;
        }
    }
    ctx->pc = 0x207544u;
label_207544:
    // 0x207544: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x207544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_207548:
    // 0x207548: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x207548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_20754c:
    // 0x20754c: 0x2463bb88  addiu       $v1, $v1, -0x4478
    ctx->pc = 0x20754cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949768));
label_207550:
    // 0x207550: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x207550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_207554:
    // 0x207554: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x207554u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_207558:
    // 0x207558: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x207558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_20755c:
    // 0x20755c: 0x4007c803  .word       0x4007C803                   # mfc0        $a3, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20755cu;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_perf);
label_207560:
    // 0x207560: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x207560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_207564:
    // 0x207564: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x207564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_207568:
    // 0x207568: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x207568u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_20756c:
    // 0x20756c: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x20756cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_207570:
    // 0x207570: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x207570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_207574:
    // 0x207574: 0xae630040  sw          $v1, 0x40($s3)
    ctx->pc = 0x207574u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 3));
label_207578:
    // 0x207578: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x207578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_20757c:
    // 0x20757c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_207580:
    if (ctx->pc == 0x207580u) {
        ctx->pc = 0x207580u;
            // 0x207580: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x207584u;
        goto label_207584;
    }
    ctx->pc = 0x20757Cu;
    {
        const bool branch_taken_0x20757c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20757Cu;
            // 0x207580: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20757c) {
            ctx->pc = 0x2075F4u;
            goto label_2075f4;
        }
    }
    ctx->pc = 0x207584u;
label_207584:
    // 0x207584: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x207584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_207588:
    // 0x207588: 0x1860003f  blez        $v1, . + 4 + (0x3F << 2)
label_20758c:
    if (ctx->pc == 0x20758Cu) {
        ctx->pc = 0x20758Cu;
            // 0x20758c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207590u;
        goto label_207590;
    }
    ctx->pc = 0x207588u;
    {
        const bool branch_taken_0x207588 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x20758Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207588u;
            // 0x20758c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207588) {
            ctx->pc = 0x207688u;
            goto label_207688;
        }
    }
    ctx->pc = 0x207590u;
label_207590:
    // 0x207590: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x207590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_207594:
    // 0x207594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x207594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_207598:
    // 0x207598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x207598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20759c:
    // 0x20759c: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x20759cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_2075a0:
    // 0x2075a0: 0x320f809  jalr        $t9
label_2075a4:
    if (ctx->pc == 0x2075A4u) {
        ctx->pc = 0x2075A4u;
            // 0x2075a4: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2075A8u;
        goto label_2075a8;
    }
    ctx->pc = 0x2075A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2075A8u);
        ctx->pc = 0x2075A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2075A0u;
            // 0x2075a4: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2075A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2075A8u; }
            if (ctx->pc != 0x2075A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2075A8u;
label_2075a8:
    // 0x2075a8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2075a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2075ac:
    // 0x2075ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2075acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2075b0:
    // 0x2075b0: 0x27a4028c  addiu       $a0, $sp, 0x28C
    ctx->pc = 0x2075b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 652));
label_2075b4:
    // 0x2075b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2075b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2075b8:
    // 0x2075b8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2075b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2075bc:
    // 0x2075bc: 0x320f809  jalr        $t9
label_2075c0:
    if (ctx->pc == 0x2075C0u) {
        ctx->pc = 0x2075C0u;
            // 0x2075c0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2075C4u;
        goto label_2075c4;
    }
    ctx->pc = 0x2075BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2075C4u);
        ctx->pc = 0x2075C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2075BCu;
            // 0x2075c0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2075C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2075C4u; }
            if (ctx->pc != 0x2075C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2075C4u;
label_2075c4:
    // 0x2075c4: 0x83a3028c  lb          $v1, 0x28C($sp)
    ctx->pc = 0x2075c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 652)));
label_2075c8:
    // 0x2075c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2075cc:
    if (ctx->pc == 0x2075CCu) {
        ctx->pc = 0x2075D0u;
        goto label_2075d0;
    }
    ctx->pc = 0x2075C8u;
    {
        const bool branch_taken_0x2075c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2075c8) {
            ctx->pc = 0x2075D8u;
            goto label_2075d8;
        }
    }
    ctx->pc = 0x2075D0u;
label_2075d0:
    // 0x2075d0: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2075d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2075d4:
    // 0x2075d4: 0x0  nop
    ctx->pc = 0x2075d4u;
    // NOP
label_2075d8:
    // 0x2075d8: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x2075d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2075dc:
    // 0x2075dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2075dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2075e0:
    // 0x2075e0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2075e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2075e4:
    // 0x2075e4: 0x5460ffeb  bnel        $v1, $zero, . + 4 + (-0x15 << 2)
label_2075e8:
    if (ctx->pc == 0x2075E8u) {
        ctx->pc = 0x2075E8u;
            // 0x2075e8: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x2075ECu;
        goto label_2075ec;
    }
    ctx->pc = 0x2075E4u;
    {
        const bool branch_taken_0x2075e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2075e4) {
            ctx->pc = 0x2075E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2075E4u;
            // 0x2075e8: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207594u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_207594;
        }
    }
    ctx->pc = 0x2075ECu;
label_2075ec:
    // 0x2075ec: 0x10000026  b           . + 4 + (0x26 << 2)
label_2075f0:
    if (ctx->pc == 0x2075F0u) {
        ctx->pc = 0x2075F4u;
        goto label_2075f4;
    }
    ctx->pc = 0x2075ECu;
    {
        const bool branch_taken_0x2075ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2075ec) {
            ctx->pc = 0x207688u;
            goto label_207688;
        }
    }
    ctx->pc = 0x2075F4u;
label_2075f4:
    // 0x2075f4: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2075f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2075f8:
    // 0x2075f8: 0x18600023  blez        $v1, . + 4 + (0x23 << 2)
label_2075fc:
    if (ctx->pc == 0x2075FCu) {
        ctx->pc = 0x2075FCu;
            // 0x2075fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207600u;
        goto label_207600;
    }
    ctx->pc = 0x2075F8u;
    {
        const bool branch_taken_0x2075f8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2075FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2075F8u;
            // 0x2075fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2075f8) {
            ctx->pc = 0x207688u;
            goto label_207688;
        }
    }
    ctx->pc = 0x207600u;
label_207600:
    // 0x207600: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x207600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207604:
    // 0x207604: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x207604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_207608:
    // 0x207608: 0x27a40288  addiu       $a0, $sp, 0x288
    ctx->pc = 0x207608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_20760c:
    // 0x20760c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x20760cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_207610:
    // 0x207610: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x207610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_207614:
    // 0x207614: 0x26480010  addiu       $t0, $s2, 0x10
    ctx->pc = 0x207614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_207618:
    // 0x207618: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x207618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20761c:
    // 0x20761c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x20761cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_207620:
    // 0x207620: 0x320f809  jalr        $t9
label_207624:
    if (ctx->pc == 0x207624u) {
        ctx->pc = 0x207624u;
            // 0x207624: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207628u;
        goto label_207628;
    }
    ctx->pc = 0x207620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x207628u);
        ctx->pc = 0x207624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207620u;
            // 0x207624: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x207628u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x207628u; }
            if (ctx->pc != 0x207628u) { return; }
        }
        }
    }
    ctx->pc = 0x207628u;
label_207628:
    // 0x207628: 0x27a30288  addiu       $v1, $sp, 0x288
    ctx->pc = 0x207628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_20762c:
    // 0x20762c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x20762cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_207630:
    // 0x207630: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_207634:
    if (ctx->pc == 0x207634u) {
        ctx->pc = 0x207638u;
        goto label_207638;
    }
    ctx->pc = 0x207630u;
    {
        const bool branch_taken_0x207630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x207630) {
            ctx->pc = 0x207670u;
            goto label_207670;
        }
    }
    ctx->pc = 0x207638u;
label_207638:
    // 0x207638: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x207638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_20763c:
    // 0x20763c: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x20763cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
label_207640:
    // 0x207640: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x207640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_207644:
    // 0x207644: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x207644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_207648:
    // 0x207648: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x207648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20764c:
    // 0x20764c: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x20764cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_207650:
    // 0x207650: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x207650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_207654:
    // 0x207654: 0x320f809  jalr        $t9
label_207658:
    if (ctx->pc == 0x207658u) {
        ctx->pc = 0x207658u;
            // 0x207658: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20765Cu;
        goto label_20765c;
    }
    ctx->pc = 0x207654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20765Cu);
        ctx->pc = 0x207658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207654u;
            // 0x207658: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20765Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20765Cu; }
            if (ctx->pc != 0x20765Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20765Cu;
label_20765c:
    // 0x20765c: 0x83a30284  lb          $v1, 0x284($sp)
    ctx->pc = 0x20765cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 644)));
label_207660:
    // 0x207660: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_207664:
    if (ctx->pc == 0x207664u) {
        ctx->pc = 0x207668u;
        goto label_207668;
    }
    ctx->pc = 0x207660u;
    {
        const bool branch_taken_0x207660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x207660) {
            ctx->pc = 0x207670u;
            goto label_207670;
        }
    }
    ctx->pc = 0x207668u;
label_207668:
    // 0x207668: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x207668u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20766c:
    // 0x20766c: 0x0  nop
    ctx->pc = 0x20766cu;
    // NOP
label_207670:
    // 0x207670: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x207670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_207674:
    // 0x207674: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x207674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_207678:
    // 0x207678: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x207678u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_20767c:
    // 0x20767c: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_207680:
    if (ctx->pc == 0x207680u) {
        ctx->pc = 0x207680u;
            // 0x207680: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x207684u;
        goto label_207684;
    }
    ctx->pc = 0x20767Cu;
    {
        const bool branch_taken_0x20767c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20767Cu;
            // 0x207680: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20767c) {
            ctx->pc = 0x207604u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_207604;
        }
    }
    ctx->pc = 0x207684u;
label_207684:
    // 0x207684: 0x0  nop
    ctx->pc = 0x207684u;
    // NOP
label_207688:
    // 0x207688: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x207688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_20768c:
    // 0x20768c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20768cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_207690:
    // 0x207690: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x207690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_207694:
    // 0x207694: 0x12a30005  beq         $s5, $v1, . + 4 + (0x5 << 2)
label_207698:
    if (ctx->pc == 0x207698u) {
        ctx->pc = 0x207698u;
            // 0x207698: 0xae640040  sw          $a0, 0x40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 4));
        ctx->pc = 0x20769Cu;
        goto label_20769c;
    }
    ctx->pc = 0x207694u;
    {
        const bool branch_taken_0x207694 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        ctx->pc = 0x207698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207694u;
            // 0x207698: 0xae640040  sw          $a0, 0x40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207694) {
            ctx->pc = 0x2076ACu;
            goto label_2076ac;
        }
    }
    ctx->pc = 0x20769Cu;
label_20769c:
    // 0x20769c: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x20769cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_2076a0:
    // 0x2076a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2076a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2076a4:
    // 0x2076a4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2076a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2076a8:
    // 0x2076a8: 0xac750020  sw          $s5, 0x20($v1)
    ctx->pc = 0x2076a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 21));
label_2076ac:
    // 0x2076ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2076acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2076b0:
    // 0x2076b0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2076b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2076b4:
    // 0x2076b4: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x2076b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_2076b8:
    // 0x2076b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2076b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2076bc:
    // 0x2076bc: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x2076bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_2076c0:
    // 0x2076c0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2076c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2076c4:
    // 0x2076c4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2076c8:
    if (ctx->pc == 0x2076C8u) {
        ctx->pc = 0x2076C8u;
            // 0x2076c8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x2076CCu;
        goto label_2076cc;
    }
    ctx->pc = 0x2076C4u;
    {
        const bool branch_taken_0x2076c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2076C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2076C4u;
            // 0x2076c8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076c4) {
            ctx->pc = 0x2076F4u;
            goto label_2076f4;
        }
    }
    ctx->pc = 0x2076CCu;
label_2076cc:
    // 0x2076cc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2076ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2076d0:
    // 0x2076d0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2076d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2076d4:
    // 0x2076d4: 0x2463bb98  addiu       $v1, $v1, -0x4468
    ctx->pc = 0x2076d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949784));
label_2076d8:
    // 0x2076d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2076d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2076dc:
    // 0x2076dc: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2076dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2076e0:
    // 0x2076e0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2076e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2076e4:
    // 0x2076e4: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2076e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_2076e8:
    // 0x2076e8: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x2076e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_2076ec:
    // 0x2076ec: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2076ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_2076f0:
    // 0x2076f0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2076f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_2076f4:
    // 0x2076f4: 0x2a01827  not         $v1, $s5
    ctx->pc = 0x2076f4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 21) | GPR_U64(ctx, 0)));
label_2076f8:
    // 0x2076f8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2076f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2076fc:
    // 0x2076fc: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x2076fcu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
label_207700:
    // 0x207700: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x207700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_207704:
    // 0x207704: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x207704u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_207708:
    // 0x207708: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x207708u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20770c:
    // 0x20770c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20770cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_207710:
    // 0x207710: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x207710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_207714:
    // 0x207714: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x207714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_207718:
    // 0x207718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x207718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20771c:
    // 0x20771c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20771cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_207720:
    // 0x207720: 0x3e00008  jr          $ra
label_207724:
    if (ctx->pc == 0x207724u) {
        ctx->pc = 0x207724u;
            // 0x207724: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x207728u;
        goto label_207728;
    }
    ctx->pc = 0x207720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207720u;
            // 0x207724: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207728u;
label_207728:
    // 0x207728: 0x0  nop
    ctx->pc = 0x207728u;
    // NOP
label_20772c:
    // 0x20772c: 0x0  nop
    ctx->pc = 0x20772cu;
    // NOP
label_207730:
    // 0x207730: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x207730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_207734:
    // 0x207734: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x207734u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
label_207738:
    // 0x207738: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x207738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_20773c:
    // 0x20773c: 0x24e70350  addiu       $a3, $a3, 0x350
    ctx->pc = 0x20773cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 848));
label_207740:
    // 0x207740: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x207740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_207744:
    // 0x207744: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x207744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207748:
    // 0x207748: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x207748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_20774c:
    // 0x20774c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20774cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207750:
    // 0x207750: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x207750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_207754:
    // 0x207754: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x207754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207758:
    // 0x207758: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x207758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20775c:
    // 0x20775c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20775cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_207760:
    // 0x207760: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x207760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_207764:
    // 0x207764: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x207764u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_207768:
    // 0x207768: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x207768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20776c:
    // 0x20776c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20776cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207770:
    // 0x207770: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_207774:
    if (ctx->pc == 0x207774u) {
        ctx->pc = 0x207774u;
            // 0x207774: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x207778u;
        goto label_207778;
    }
    ctx->pc = 0x207770u;
    {
        const bool branch_taken_0x207770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x207774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207770u;
            // 0x207774: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207770) {
            ctx->pc = 0x207780u;
            goto label_207780;
        }
    }
    ctx->pc = 0x207778u;
label_207778:
    // 0x207778: 0x10000002  b           . + 4 + (0x2 << 2)
label_20777c:
    if (ctx->pc == 0x20777Cu) {
        ctx->pc = 0x20777Cu;
            // 0x20777c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x207780u;
        goto label_207780;
    }
    ctx->pc = 0x207778u;
    {
        const bool branch_taken_0x207778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20777Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207778u;
            // 0x20777c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207778) {
            ctx->pc = 0x207784u;
            goto label_207784;
        }
    }
    ctx->pc = 0x207780u;
label_207780:
    // 0x207780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x207780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207784:
    // 0x207784: 0xc6810030  lwc1        $f1, 0x30($s4)
    ctx->pc = 0x207784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207788:
    // 0x207788: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x207788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20778c:
    // 0x20778c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20778cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207790:
    // 0x207790: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_207794:
    if (ctx->pc == 0x207794u) {
        ctx->pc = 0x207794u;
            // 0x207794: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207798u;
        goto label_207798;
    }
    ctx->pc = 0x207790u;
    {
        const bool branch_taken_0x207790 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207790) {
            ctx->pc = 0x207794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207790u;
            // 0x207794: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20779Cu;
            goto label_20779c;
        }
    }
    ctx->pc = 0x207798u;
label_207798:
    // 0x207798: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x207798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20779c:
    // 0x20779c: 0xc6810038  lwc1        $f1, 0x38($s4)
    ctx->pc = 0x20779cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2077a0:
    // 0x2077a0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2077a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2077a4:
    // 0x2077a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2077a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2077a8:
    // 0x2077a8: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_2077ac:
    if (ctx->pc == 0x2077ACu) {
        ctx->pc = 0x2077ACu;
            // 0x2077ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2077B0u;
        goto label_2077b0;
    }
    ctx->pc = 0x2077A8u;
    {
        const bool branch_taken_0x2077a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2077a8) {
            ctx->pc = 0x2077ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2077A8u;
            // 0x2077ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2077B4u;
            goto label_2077b4;
        }
    }
    ctx->pc = 0x2077B0u;
label_2077b0:
    // 0x2077b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2077b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2077b4:
    // 0x2077b4: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x2077b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2077b8:
    // 0x2077b8: 0xc681003c  lwc1        $f1, 0x3C($s4)
    ctx->pc = 0x2077b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2077bc:
    // 0x2077bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2077bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2077c0:
    // 0x2077c0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2077c4:
    if (ctx->pc == 0x2077C4u) {
        ctx->pc = 0x2077C4u;
            // 0x2077c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2077C8u;
        goto label_2077c8;
    }
    ctx->pc = 0x2077C0u;
    {
        const bool branch_taken_0x2077c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2077C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2077C0u;
            // 0x2077c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077c0) {
            ctx->pc = 0x2077CCu;
            goto label_2077cc;
        }
    }
    ctx->pc = 0x2077C8u;
label_2077c8:
    // 0x2077c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2077c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2077cc:
    // 0x2077cc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2077ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_2077d0:
    // 0x2077d0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2077d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2077d4:
    // 0x2077d4: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2077d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_2077d8:
    // 0x2077d8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2077d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2077dc:
    // 0x2077dc: 0x3863000f  xori        $v1, $v1, 0xF
    ctx->pc = 0x2077dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)15);
label_2077e0:
    // 0x2077e0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2077e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2077e4:
    // 0x2077e4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2077e8:
    if (ctx->pc == 0x2077E8u) {
        ctx->pc = 0x2077E8u;
            // 0x2077e8: 0x3c037eff  lui         $v1, 0x7EFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32511 << 16));
        ctx->pc = 0x2077ECu;
        goto label_2077ec;
    }
    ctx->pc = 0x2077E4u;
    {
        const bool branch_taken_0x2077e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2077e4) {
            ctx->pc = 0x2077E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2077E4u;
            // 0x2077e8: 0x3c037eff  lui         $v1, 0x7EFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32511 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2077F8u;
            goto label_2077f8;
        }
    }
    ctx->pc = 0x2077ECu;
label_2077ec:
    // 0x2077ec: 0xc081e60  jal         func_207980
label_2077f0:
    if (ctx->pc == 0x2077F0u) {
        ctx->pc = 0x2077F0u;
            // 0x2077f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2077F4u;
        goto label_2077f4;
    }
    ctx->pc = 0x2077ECu;
    SET_GPR_U32(ctx, 31, 0x2077F4u);
    ctx->pc = 0x2077F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2077ECu;
            // 0x2077f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207980u;
    if (runtime->hasFunction(0x207980u)) {
        auto targetFn = runtime->lookupFunction(0x207980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2077F4u; }
        if (ctx->pc != 0x2077F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207980_0x207980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2077F4u; }
        if (ctx->pc != 0x2077F4u) { return; }
    }
    ctx->pc = 0x2077F4u;
label_2077f4:
    // 0x2077f4: 0x3c037eff  lui         $v1, 0x7EFF
    ctx->pc = 0x2077f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32511 << 16));
label_2077f8:
    // 0x2077f8: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x2077f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_2077fc:
    // 0x2077fc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2077fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_207800:
    // 0x207800: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x207800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_207804:
    // 0x207804: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x207804u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_207808:
    // 0x207808: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x207808u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_20780c:
    // 0x20780c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x20780cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207810:
    // 0x207810: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x207810u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_207814:
    // 0x207814: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x207814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_207818:
    // 0x207818: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x207818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20781c:
    // 0x20781c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x20781cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_207820:
    // 0x207820: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x207820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_207824:
    // 0x207824: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x207824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207828:
    // 0x207828: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x207828u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_20782c:
    // 0x20782c: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x20782cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_207830:
    // 0x207830: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x207830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207834:
    // 0x207834: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x207834u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_207838:
    // 0x207838: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x207838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_20783c:
    // 0x20783c: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x20783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_207840:
    // 0x207840: 0x18600043  blez        $v1, . + 4 + (0x43 << 2)
label_207844:
    if (ctx->pc == 0x207844u) {
        ctx->pc = 0x207844u;
            // 0x207844: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207848u;
        goto label_207848;
    }
    ctx->pc = 0x207840u;
    {
        const bool branch_taken_0x207840 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x207844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207840u;
            // 0x207844: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207840) {
            ctx->pc = 0x207950u;
            goto label_207950;
        }
    }
    ctx->pc = 0x207848u;
label_207848:
    // 0x207848: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x207848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20784c:
    // 0x20784c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x20784cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_207850:
    // 0x207850: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x207850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_207854:
    // 0x207854: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x207854u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_207858:
    // 0x207858: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x207858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20785c:
    // 0x20785c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20785cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207860:
    // 0x207860: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x207860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_207864:
    // 0x207864: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x207864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_207868:
    // 0x207868: 0x320f809  jalr        $t9
label_20786c:
    if (ctx->pc == 0x20786Cu) {
        ctx->pc = 0x20786Cu;
            // 0x20786c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x207870u;
        goto label_207870;
    }
    ctx->pc = 0x207868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x207870u);
        ctx->pc = 0x20786Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207868u;
            // 0x20786c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x207870u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x207870u; }
            if (ctx->pc != 0x207870u) { return; }
        }
        }
    }
    ctx->pc = 0x207870u;
label_207870:
    // 0x207870: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x207870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207874:
    // 0x207874: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x207874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207878:
    // 0x207878: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20787c:
    // 0x20787c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_207880:
    if (ctx->pc == 0x207880u) {
        ctx->pc = 0x207880u;
            // 0x207880: 0xc7a20070  lwc1        $f2, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x207884u;
        goto label_207884;
    }
    ctx->pc = 0x20787Cu;
    {
        const bool branch_taken_0x20787c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x207880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20787Cu;
            // 0x207880: 0xc7a20070  lwc1        $f2, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20787c) {
            ctx->pc = 0x20788Cu;
            goto label_20788c;
        }
    }
    ctx->pc = 0x207884u;
label_207884:
    // 0x207884: 0x10000003  b           . + 4 + (0x3 << 2)
label_207888:
    if (ctx->pc == 0x207888u) {
        ctx->pc = 0x207888u;
            // 0x207888: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->pc = 0x20788Cu;
        goto label_20788c;
    }
    ctx->pc = 0x207884u;
    {
        const bool branch_taken_0x207884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207884u;
            // 0x207888: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x207884) {
            ctx->pc = 0x207894u;
            goto label_207894;
        }
    }
    ctx->pc = 0x20788Cu;
label_20788c:
    // 0x20788c: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x20788cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_207890:
    // 0x207890: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x207890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_207894:
    // 0x207894: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x207894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207898:
    // 0x207898: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x207898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20789c:
    // 0x20789c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20789cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2078a0:
    // 0x2078a0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_2078a4:
    if (ctx->pc == 0x2078A4u) {
        ctx->pc = 0x2078A4u;
            // 0x2078a4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x2078A8u;
        goto label_2078a8;
    }
    ctx->pc = 0x2078A0u;
    {
        const bool branch_taken_0x2078a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2078a0) {
            ctx->pc = 0x2078A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2078A0u;
            // 0x2078a4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2078A8u;
            goto label_2078a8;
        }
    }
    ctx->pc = 0x2078A8u;
label_2078a8:
    // 0x2078a8: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2078a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_2078ac:
    // 0x2078ac: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2078acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2078b0:
    // 0x2078b0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2078b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2078b4:
    // 0x2078b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2078b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2078b8:
    // 0x2078b8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_2078bc:
    if (ctx->pc == 0x2078BCu) {
        ctx->pc = 0x2078BCu;
            // 0x2078bc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x2078C0u;
        goto label_2078c0;
    }
    ctx->pc = 0x2078B8u;
    {
        const bool branch_taken_0x2078b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2078b8) {
            ctx->pc = 0x2078BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2078B8u;
            // 0x2078bc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2078C0u;
            goto label_2078c0;
        }
    }
    ctx->pc = 0x2078C0u;
label_2078c0:
    // 0x2078c0: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2078c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_2078c4:
    // 0x2078c4: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x2078c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2078c8:
    // 0x2078c8: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x2078c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2078cc:
    // 0x2078cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2078ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2078d0:
    // 0x2078d0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_2078d4:
    if (ctx->pc == 0x2078D4u) {
        ctx->pc = 0x2078D4u;
            // 0x2078d4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x2078D8u;
        goto label_2078d8;
    }
    ctx->pc = 0x2078D0u;
    {
        const bool branch_taken_0x2078d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2078d0) {
            ctx->pc = 0x2078D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2078D0u;
            // 0x2078d4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2078D8u;
            goto label_2078d8;
        }
    }
    ctx->pc = 0x2078D8u;
label_2078d8:
    // 0x2078d8: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x2078d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_2078dc:
    // 0x2078dc: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2078dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2078e0:
    // 0x2078e0: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x2078e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2078e4:
    // 0x2078e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2078e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2078e8:
    // 0x2078e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2078ec:
    if (ctx->pc == 0x2078ECu) {
        ctx->pc = 0x2078ECu;
            // 0x2078ec: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x2078F0u;
        goto label_2078f0;
    }
    ctx->pc = 0x2078E8u;
    {
        const bool branch_taken_0x2078e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2078e8) {
            ctx->pc = 0x2078ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2078E8u;
            // 0x2078ec: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2078F0u;
            goto label_2078f0;
        }
    }
    ctx->pc = 0x2078F0u;
label_2078f0:
    // 0x2078f0: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x2078f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_2078f4:
    // 0x2078f4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2078f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2078f8:
    // 0x2078f8: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2078f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2078fc:
    // 0x2078fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2078fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207900:
    // 0x207900: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_207904:
    if (ctx->pc == 0x207904u) {
        ctx->pc = 0x207904u;
            // 0x207904: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x207908u;
        goto label_207908;
    }
    ctx->pc = 0x207900u;
    {
        const bool branch_taken_0x207900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x207900) {
            ctx->pc = 0x207904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207900u;
            // 0x207904: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x207908u;
            goto label_207908;
        }
    }
    ctx->pc = 0x207908u;
label_207908:
    // 0x207908: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x207908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_20790c:
    // 0x20790c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x20790cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207910:
    // 0x207910: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x207910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_207914:
    // 0x207914: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x207914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207918:
    // 0x207918: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_20791c:
    if (ctx->pc == 0x20791Cu) {
        ctx->pc = 0x20791Cu;
            // 0x20791c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x207920u;
        goto label_207920;
    }
    ctx->pc = 0x207918u;
    {
        const bool branch_taken_0x207918 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x207918) {
            ctx->pc = 0x20791Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207918u;
            // 0x20791c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x207920u;
            goto label_207920;
        }
    }
    ctx->pc = 0x207920u;
label_207920:
    // 0x207920: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x207920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_207924:
    // 0x207924: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x207924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_207928:
    // 0x207928: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x207928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20792c:
    // 0x20792c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20792cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207930:
    // 0x207930: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_207934:
    if (ctx->pc == 0x207934u) {
        ctx->pc = 0x207934u;
            // 0x207934: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x207938u;
        goto label_207938;
    }
    ctx->pc = 0x207930u;
    {
        const bool branch_taken_0x207930 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x207930) {
            ctx->pc = 0x207934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207930u;
            // 0x207934: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x207938u;
            goto label_207938;
        }
    }
    ctx->pc = 0x207938u;
label_207938:
    // 0x207938: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x207938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_20793c:
    // 0x20793c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20793cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_207940:
    // 0x207940: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x207940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_207944:
    // 0x207944: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x207944u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_207948:
    // 0x207948: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
label_20794c:
    if (ctx->pc == 0x20794Cu) {
        ctx->pc = 0x20794Cu;
            // 0x20794c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x207950u;
        goto label_207950;
    }
    ctx->pc = 0x207948u;
    {
        const bool branch_taken_0x207948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20794Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207948u;
            // 0x20794c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207948) {
            ctx->pc = 0x20784Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20784c;
        }
    }
    ctx->pc = 0x207950u;
label_207950:
    // 0x207950: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x207950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_207954:
    // 0x207954: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x207954u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_207958:
    // 0x207958: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x207958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20795c:
    // 0x20795c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20795cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_207960:
    // 0x207960: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x207960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_207964:
    // 0x207964: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x207964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_207968:
    // 0x207968: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x207968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20796c:
    // 0x20796c: 0x3e00008  jr          $ra
label_207970:
    if (ctx->pc == 0x207970u) {
        ctx->pc = 0x207970u;
            // 0x207970: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x207974u;
        goto label_207974;
    }
    ctx->pc = 0x20796Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20796Cu;
            // 0x207970: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207974u;
label_207974:
    // 0x207974: 0x0  nop
    ctx->pc = 0x207974u;
    // NOP
label_207978:
    // 0x207978: 0x0  nop
    ctx->pc = 0x207978u;
    // NOP
label_20797c:
    // 0x20797c: 0x0  nop
    ctx->pc = 0x20797cu;
    // NOP
}
