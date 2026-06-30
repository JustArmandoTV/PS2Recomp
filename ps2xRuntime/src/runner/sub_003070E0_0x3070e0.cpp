#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003070E0
// Address: 0x3070e0 - 0x307730
void sub_003070E0_0x3070e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003070E0_0x3070e0");
#endif

    switch (ctx->pc) {
        case 0x3070e0u: goto label_3070e0;
        case 0x3070e4u: goto label_3070e4;
        case 0x3070e8u: goto label_3070e8;
        case 0x3070ecu: goto label_3070ec;
        case 0x3070f0u: goto label_3070f0;
        case 0x3070f4u: goto label_3070f4;
        case 0x3070f8u: goto label_3070f8;
        case 0x3070fcu: goto label_3070fc;
        case 0x307100u: goto label_307100;
        case 0x307104u: goto label_307104;
        case 0x307108u: goto label_307108;
        case 0x30710cu: goto label_30710c;
        case 0x307110u: goto label_307110;
        case 0x307114u: goto label_307114;
        case 0x307118u: goto label_307118;
        case 0x30711cu: goto label_30711c;
        case 0x307120u: goto label_307120;
        case 0x307124u: goto label_307124;
        case 0x307128u: goto label_307128;
        case 0x30712cu: goto label_30712c;
        case 0x307130u: goto label_307130;
        case 0x307134u: goto label_307134;
        case 0x307138u: goto label_307138;
        case 0x30713cu: goto label_30713c;
        case 0x307140u: goto label_307140;
        case 0x307144u: goto label_307144;
        case 0x307148u: goto label_307148;
        case 0x30714cu: goto label_30714c;
        case 0x307150u: goto label_307150;
        case 0x307154u: goto label_307154;
        case 0x307158u: goto label_307158;
        case 0x30715cu: goto label_30715c;
        case 0x307160u: goto label_307160;
        case 0x307164u: goto label_307164;
        case 0x307168u: goto label_307168;
        case 0x30716cu: goto label_30716c;
        case 0x307170u: goto label_307170;
        case 0x307174u: goto label_307174;
        case 0x307178u: goto label_307178;
        case 0x30717cu: goto label_30717c;
        case 0x307180u: goto label_307180;
        case 0x307184u: goto label_307184;
        case 0x307188u: goto label_307188;
        case 0x30718cu: goto label_30718c;
        case 0x307190u: goto label_307190;
        case 0x307194u: goto label_307194;
        case 0x307198u: goto label_307198;
        case 0x30719cu: goto label_30719c;
        case 0x3071a0u: goto label_3071a0;
        case 0x3071a4u: goto label_3071a4;
        case 0x3071a8u: goto label_3071a8;
        case 0x3071acu: goto label_3071ac;
        case 0x3071b0u: goto label_3071b0;
        case 0x3071b4u: goto label_3071b4;
        case 0x3071b8u: goto label_3071b8;
        case 0x3071bcu: goto label_3071bc;
        case 0x3071c0u: goto label_3071c0;
        case 0x3071c4u: goto label_3071c4;
        case 0x3071c8u: goto label_3071c8;
        case 0x3071ccu: goto label_3071cc;
        case 0x3071d0u: goto label_3071d0;
        case 0x3071d4u: goto label_3071d4;
        case 0x3071d8u: goto label_3071d8;
        case 0x3071dcu: goto label_3071dc;
        case 0x3071e0u: goto label_3071e0;
        case 0x3071e4u: goto label_3071e4;
        case 0x3071e8u: goto label_3071e8;
        case 0x3071ecu: goto label_3071ec;
        case 0x3071f0u: goto label_3071f0;
        case 0x3071f4u: goto label_3071f4;
        case 0x3071f8u: goto label_3071f8;
        case 0x3071fcu: goto label_3071fc;
        case 0x307200u: goto label_307200;
        case 0x307204u: goto label_307204;
        case 0x307208u: goto label_307208;
        case 0x30720cu: goto label_30720c;
        case 0x307210u: goto label_307210;
        case 0x307214u: goto label_307214;
        case 0x307218u: goto label_307218;
        case 0x30721cu: goto label_30721c;
        case 0x307220u: goto label_307220;
        case 0x307224u: goto label_307224;
        case 0x307228u: goto label_307228;
        case 0x30722cu: goto label_30722c;
        case 0x307230u: goto label_307230;
        case 0x307234u: goto label_307234;
        case 0x307238u: goto label_307238;
        case 0x30723cu: goto label_30723c;
        case 0x307240u: goto label_307240;
        case 0x307244u: goto label_307244;
        case 0x307248u: goto label_307248;
        case 0x30724cu: goto label_30724c;
        case 0x307250u: goto label_307250;
        case 0x307254u: goto label_307254;
        case 0x307258u: goto label_307258;
        case 0x30725cu: goto label_30725c;
        case 0x307260u: goto label_307260;
        case 0x307264u: goto label_307264;
        case 0x307268u: goto label_307268;
        case 0x30726cu: goto label_30726c;
        case 0x307270u: goto label_307270;
        case 0x307274u: goto label_307274;
        case 0x307278u: goto label_307278;
        case 0x30727cu: goto label_30727c;
        case 0x307280u: goto label_307280;
        case 0x307284u: goto label_307284;
        case 0x307288u: goto label_307288;
        case 0x30728cu: goto label_30728c;
        case 0x307290u: goto label_307290;
        case 0x307294u: goto label_307294;
        case 0x307298u: goto label_307298;
        case 0x30729cu: goto label_30729c;
        case 0x3072a0u: goto label_3072a0;
        case 0x3072a4u: goto label_3072a4;
        case 0x3072a8u: goto label_3072a8;
        case 0x3072acu: goto label_3072ac;
        case 0x3072b0u: goto label_3072b0;
        case 0x3072b4u: goto label_3072b4;
        case 0x3072b8u: goto label_3072b8;
        case 0x3072bcu: goto label_3072bc;
        case 0x3072c0u: goto label_3072c0;
        case 0x3072c4u: goto label_3072c4;
        case 0x3072c8u: goto label_3072c8;
        case 0x3072ccu: goto label_3072cc;
        case 0x3072d0u: goto label_3072d0;
        case 0x3072d4u: goto label_3072d4;
        case 0x3072d8u: goto label_3072d8;
        case 0x3072dcu: goto label_3072dc;
        case 0x3072e0u: goto label_3072e0;
        case 0x3072e4u: goto label_3072e4;
        case 0x3072e8u: goto label_3072e8;
        case 0x3072ecu: goto label_3072ec;
        case 0x3072f0u: goto label_3072f0;
        case 0x3072f4u: goto label_3072f4;
        case 0x3072f8u: goto label_3072f8;
        case 0x3072fcu: goto label_3072fc;
        case 0x307300u: goto label_307300;
        case 0x307304u: goto label_307304;
        case 0x307308u: goto label_307308;
        case 0x30730cu: goto label_30730c;
        case 0x307310u: goto label_307310;
        case 0x307314u: goto label_307314;
        case 0x307318u: goto label_307318;
        case 0x30731cu: goto label_30731c;
        case 0x307320u: goto label_307320;
        case 0x307324u: goto label_307324;
        case 0x307328u: goto label_307328;
        case 0x30732cu: goto label_30732c;
        case 0x307330u: goto label_307330;
        case 0x307334u: goto label_307334;
        case 0x307338u: goto label_307338;
        case 0x30733cu: goto label_30733c;
        case 0x307340u: goto label_307340;
        case 0x307344u: goto label_307344;
        case 0x307348u: goto label_307348;
        case 0x30734cu: goto label_30734c;
        case 0x307350u: goto label_307350;
        case 0x307354u: goto label_307354;
        case 0x307358u: goto label_307358;
        case 0x30735cu: goto label_30735c;
        case 0x307360u: goto label_307360;
        case 0x307364u: goto label_307364;
        case 0x307368u: goto label_307368;
        case 0x30736cu: goto label_30736c;
        case 0x307370u: goto label_307370;
        case 0x307374u: goto label_307374;
        case 0x307378u: goto label_307378;
        case 0x30737cu: goto label_30737c;
        case 0x307380u: goto label_307380;
        case 0x307384u: goto label_307384;
        case 0x307388u: goto label_307388;
        case 0x30738cu: goto label_30738c;
        case 0x307390u: goto label_307390;
        case 0x307394u: goto label_307394;
        case 0x307398u: goto label_307398;
        case 0x30739cu: goto label_30739c;
        case 0x3073a0u: goto label_3073a0;
        case 0x3073a4u: goto label_3073a4;
        case 0x3073a8u: goto label_3073a8;
        case 0x3073acu: goto label_3073ac;
        case 0x3073b0u: goto label_3073b0;
        case 0x3073b4u: goto label_3073b4;
        case 0x3073b8u: goto label_3073b8;
        case 0x3073bcu: goto label_3073bc;
        case 0x3073c0u: goto label_3073c0;
        case 0x3073c4u: goto label_3073c4;
        case 0x3073c8u: goto label_3073c8;
        case 0x3073ccu: goto label_3073cc;
        case 0x3073d0u: goto label_3073d0;
        case 0x3073d4u: goto label_3073d4;
        case 0x3073d8u: goto label_3073d8;
        case 0x3073dcu: goto label_3073dc;
        case 0x3073e0u: goto label_3073e0;
        case 0x3073e4u: goto label_3073e4;
        case 0x3073e8u: goto label_3073e8;
        case 0x3073ecu: goto label_3073ec;
        case 0x3073f0u: goto label_3073f0;
        case 0x3073f4u: goto label_3073f4;
        case 0x3073f8u: goto label_3073f8;
        case 0x3073fcu: goto label_3073fc;
        case 0x307400u: goto label_307400;
        case 0x307404u: goto label_307404;
        case 0x307408u: goto label_307408;
        case 0x30740cu: goto label_30740c;
        case 0x307410u: goto label_307410;
        case 0x307414u: goto label_307414;
        case 0x307418u: goto label_307418;
        case 0x30741cu: goto label_30741c;
        case 0x307420u: goto label_307420;
        case 0x307424u: goto label_307424;
        case 0x307428u: goto label_307428;
        case 0x30742cu: goto label_30742c;
        case 0x307430u: goto label_307430;
        case 0x307434u: goto label_307434;
        case 0x307438u: goto label_307438;
        case 0x30743cu: goto label_30743c;
        case 0x307440u: goto label_307440;
        case 0x307444u: goto label_307444;
        case 0x307448u: goto label_307448;
        case 0x30744cu: goto label_30744c;
        case 0x307450u: goto label_307450;
        case 0x307454u: goto label_307454;
        case 0x307458u: goto label_307458;
        case 0x30745cu: goto label_30745c;
        case 0x307460u: goto label_307460;
        case 0x307464u: goto label_307464;
        case 0x307468u: goto label_307468;
        case 0x30746cu: goto label_30746c;
        case 0x307470u: goto label_307470;
        case 0x307474u: goto label_307474;
        case 0x307478u: goto label_307478;
        case 0x30747cu: goto label_30747c;
        case 0x307480u: goto label_307480;
        case 0x307484u: goto label_307484;
        case 0x307488u: goto label_307488;
        case 0x30748cu: goto label_30748c;
        case 0x307490u: goto label_307490;
        case 0x307494u: goto label_307494;
        case 0x307498u: goto label_307498;
        case 0x30749cu: goto label_30749c;
        case 0x3074a0u: goto label_3074a0;
        case 0x3074a4u: goto label_3074a4;
        case 0x3074a8u: goto label_3074a8;
        case 0x3074acu: goto label_3074ac;
        case 0x3074b0u: goto label_3074b0;
        case 0x3074b4u: goto label_3074b4;
        case 0x3074b8u: goto label_3074b8;
        case 0x3074bcu: goto label_3074bc;
        case 0x3074c0u: goto label_3074c0;
        case 0x3074c4u: goto label_3074c4;
        case 0x3074c8u: goto label_3074c8;
        case 0x3074ccu: goto label_3074cc;
        case 0x3074d0u: goto label_3074d0;
        case 0x3074d4u: goto label_3074d4;
        case 0x3074d8u: goto label_3074d8;
        case 0x3074dcu: goto label_3074dc;
        case 0x3074e0u: goto label_3074e0;
        case 0x3074e4u: goto label_3074e4;
        case 0x3074e8u: goto label_3074e8;
        case 0x3074ecu: goto label_3074ec;
        case 0x3074f0u: goto label_3074f0;
        case 0x3074f4u: goto label_3074f4;
        case 0x3074f8u: goto label_3074f8;
        case 0x3074fcu: goto label_3074fc;
        case 0x307500u: goto label_307500;
        case 0x307504u: goto label_307504;
        case 0x307508u: goto label_307508;
        case 0x30750cu: goto label_30750c;
        case 0x307510u: goto label_307510;
        case 0x307514u: goto label_307514;
        case 0x307518u: goto label_307518;
        case 0x30751cu: goto label_30751c;
        case 0x307520u: goto label_307520;
        case 0x307524u: goto label_307524;
        case 0x307528u: goto label_307528;
        case 0x30752cu: goto label_30752c;
        case 0x307530u: goto label_307530;
        case 0x307534u: goto label_307534;
        case 0x307538u: goto label_307538;
        case 0x30753cu: goto label_30753c;
        case 0x307540u: goto label_307540;
        case 0x307544u: goto label_307544;
        case 0x307548u: goto label_307548;
        case 0x30754cu: goto label_30754c;
        case 0x307550u: goto label_307550;
        case 0x307554u: goto label_307554;
        case 0x307558u: goto label_307558;
        case 0x30755cu: goto label_30755c;
        case 0x307560u: goto label_307560;
        case 0x307564u: goto label_307564;
        case 0x307568u: goto label_307568;
        case 0x30756cu: goto label_30756c;
        case 0x307570u: goto label_307570;
        case 0x307574u: goto label_307574;
        case 0x307578u: goto label_307578;
        case 0x30757cu: goto label_30757c;
        case 0x307580u: goto label_307580;
        case 0x307584u: goto label_307584;
        case 0x307588u: goto label_307588;
        case 0x30758cu: goto label_30758c;
        case 0x307590u: goto label_307590;
        case 0x307594u: goto label_307594;
        case 0x307598u: goto label_307598;
        case 0x30759cu: goto label_30759c;
        case 0x3075a0u: goto label_3075a0;
        case 0x3075a4u: goto label_3075a4;
        case 0x3075a8u: goto label_3075a8;
        case 0x3075acu: goto label_3075ac;
        case 0x3075b0u: goto label_3075b0;
        case 0x3075b4u: goto label_3075b4;
        case 0x3075b8u: goto label_3075b8;
        case 0x3075bcu: goto label_3075bc;
        case 0x3075c0u: goto label_3075c0;
        case 0x3075c4u: goto label_3075c4;
        case 0x3075c8u: goto label_3075c8;
        case 0x3075ccu: goto label_3075cc;
        case 0x3075d0u: goto label_3075d0;
        case 0x3075d4u: goto label_3075d4;
        case 0x3075d8u: goto label_3075d8;
        case 0x3075dcu: goto label_3075dc;
        case 0x3075e0u: goto label_3075e0;
        case 0x3075e4u: goto label_3075e4;
        case 0x3075e8u: goto label_3075e8;
        case 0x3075ecu: goto label_3075ec;
        case 0x3075f0u: goto label_3075f0;
        case 0x3075f4u: goto label_3075f4;
        case 0x3075f8u: goto label_3075f8;
        case 0x3075fcu: goto label_3075fc;
        case 0x307600u: goto label_307600;
        case 0x307604u: goto label_307604;
        case 0x307608u: goto label_307608;
        case 0x30760cu: goto label_30760c;
        case 0x307610u: goto label_307610;
        case 0x307614u: goto label_307614;
        case 0x307618u: goto label_307618;
        case 0x30761cu: goto label_30761c;
        case 0x307620u: goto label_307620;
        case 0x307624u: goto label_307624;
        case 0x307628u: goto label_307628;
        case 0x30762cu: goto label_30762c;
        case 0x307630u: goto label_307630;
        case 0x307634u: goto label_307634;
        case 0x307638u: goto label_307638;
        case 0x30763cu: goto label_30763c;
        case 0x307640u: goto label_307640;
        case 0x307644u: goto label_307644;
        case 0x307648u: goto label_307648;
        case 0x30764cu: goto label_30764c;
        case 0x307650u: goto label_307650;
        case 0x307654u: goto label_307654;
        case 0x307658u: goto label_307658;
        case 0x30765cu: goto label_30765c;
        case 0x307660u: goto label_307660;
        case 0x307664u: goto label_307664;
        case 0x307668u: goto label_307668;
        case 0x30766cu: goto label_30766c;
        case 0x307670u: goto label_307670;
        case 0x307674u: goto label_307674;
        case 0x307678u: goto label_307678;
        case 0x30767cu: goto label_30767c;
        case 0x307680u: goto label_307680;
        case 0x307684u: goto label_307684;
        case 0x307688u: goto label_307688;
        case 0x30768cu: goto label_30768c;
        case 0x307690u: goto label_307690;
        case 0x307694u: goto label_307694;
        case 0x307698u: goto label_307698;
        case 0x30769cu: goto label_30769c;
        case 0x3076a0u: goto label_3076a0;
        case 0x3076a4u: goto label_3076a4;
        case 0x3076a8u: goto label_3076a8;
        case 0x3076acu: goto label_3076ac;
        case 0x3076b0u: goto label_3076b0;
        case 0x3076b4u: goto label_3076b4;
        case 0x3076b8u: goto label_3076b8;
        case 0x3076bcu: goto label_3076bc;
        case 0x3076c0u: goto label_3076c0;
        case 0x3076c4u: goto label_3076c4;
        case 0x3076c8u: goto label_3076c8;
        case 0x3076ccu: goto label_3076cc;
        case 0x3076d0u: goto label_3076d0;
        case 0x3076d4u: goto label_3076d4;
        case 0x3076d8u: goto label_3076d8;
        case 0x3076dcu: goto label_3076dc;
        case 0x3076e0u: goto label_3076e0;
        case 0x3076e4u: goto label_3076e4;
        case 0x3076e8u: goto label_3076e8;
        case 0x3076ecu: goto label_3076ec;
        case 0x3076f0u: goto label_3076f0;
        case 0x3076f4u: goto label_3076f4;
        case 0x3076f8u: goto label_3076f8;
        case 0x3076fcu: goto label_3076fc;
        case 0x307700u: goto label_307700;
        case 0x307704u: goto label_307704;
        case 0x307708u: goto label_307708;
        case 0x30770cu: goto label_30770c;
        case 0x307710u: goto label_307710;
        case 0x307714u: goto label_307714;
        case 0x307718u: goto label_307718;
        case 0x30771cu: goto label_30771c;
        case 0x307720u: goto label_307720;
        case 0x307724u: goto label_307724;
        case 0x307728u: goto label_307728;
        case 0x30772cu: goto label_30772c;
        default: break;
    }

    ctx->pc = 0x3070e0u;

label_3070e0:
    // 0x3070e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3070e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3070e4:
    // 0x3070e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3070e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3070e8:
    // 0x3070e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3070e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3070ec:
    // 0x3070ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3070ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3070f0:
    // 0x3070f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3070f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3070f4:
    // 0x3070f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3070f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3070f8:
    // 0x3070f8: 0x26640440  addiu       $a0, $s3, 0x440
    ctx->pc = 0x3070f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
label_3070fc:
    // 0x3070fc: 0xc0754b4  jal         func_1D52D0
label_307100:
    if (ctx->pc == 0x307100u) {
        ctx->pc = 0x307100u;
            // 0x307100: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x307104u;
        goto label_307104;
    }
    ctx->pc = 0x3070FCu;
    SET_GPR_U32(ctx, 31, 0x307104u);
    ctx->pc = 0x307100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3070FCu;
            // 0x307100: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307104u; }
        if (ctx->pc != 0x307104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307104u; }
        if (ctx->pc != 0x307104u) { return; }
    }
    ctx->pc = 0x307104u;
label_307104:
    // 0x307104: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x307104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_307108:
    // 0x307108: 0x8e720550  lw          $s2, 0x550($s3)
    ctx->pc = 0x307108u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1360)));
label_30710c:
    // 0x30710c: 0x26700580  addiu       $s0, $s3, 0x580
    ctx->pc = 0x30710cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1408));
label_307110:
    // 0x307110: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x307110u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_307114:
    // 0x307114: 0xe6600de0  swc1        $f0, 0xDE0($s3)
    ctx->pc = 0x307114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3552), bits); }
label_307118:
    // 0x307118: 0xae600de8  sw          $zero, 0xDE8($s3)
    ctx->pc = 0x307118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3560), GPR_U32(ctx, 0));
label_30711c:
    // 0x30711c: 0xae600e1c  sw          $zero, 0xE1C($s3)
    ctx->pc = 0x30711cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3612), GPR_U32(ctx, 0));
label_307120:
    // 0x307120: 0x8e620e34  lw          $v0, 0xE34($s3)
    ctx->pc = 0x307120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_307124:
    // 0x307124: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_307128:
    if (ctx->pc == 0x307128u) {
        ctx->pc = 0x307128u;
            // 0x307128: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30712Cu;
        goto label_30712c;
    }
    ctx->pc = 0x307124u;
    {
        const bool branch_taken_0x307124 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x307128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307124u;
            // 0x307128: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307124) {
            ctx->pc = 0x30713Cu;
            goto label_30713c;
        }
    }
    ctx->pc = 0x30712Cu;
label_30712c:
    // 0x30712c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x30712cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_307130:
    // 0x307130: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_307134:
    if (ctx->pc == 0x307134u) {
        ctx->pc = 0x307138u;
        goto label_307138;
    }
    ctx->pc = 0x307130u;
    {
        const bool branch_taken_0x307130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x307130) {
            ctx->pc = 0x30713Cu;
            goto label_30713c;
        }
    }
    ctx->pc = 0x307138u;
label_307138:
    // 0x307138: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x307138u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30713c:
    // 0x30713c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_307140:
    if (ctx->pc == 0x307140u) {
        ctx->pc = 0x307144u;
        goto label_307144;
    }
    ctx->pc = 0x30713Cu;
    {
        const bool branch_taken_0x30713c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30713c) {
            ctx->pc = 0x307158u;
            goto label_307158;
        }
    }
    ctx->pc = 0x307144u;
label_307144:
    // 0x307144: 0xc075eb4  jal         func_1D7AD0
label_307148:
    if (ctx->pc == 0x307148u) {
        ctx->pc = 0x307148u;
            // 0x307148: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30714Cu;
        goto label_30714c;
    }
    ctx->pc = 0x307144u;
    SET_GPR_U32(ctx, 31, 0x30714Cu);
    ctx->pc = 0x307148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307144u;
            // 0x307148: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30714Cu; }
        if (ctx->pc != 0x30714Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30714Cu; }
        if (ctx->pc != 0x30714Cu) { return; }
    }
    ctx->pc = 0x30714Cu;
label_30714c:
    // 0x30714c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_307150:
    if (ctx->pc == 0x307150u) {
        ctx->pc = 0x307154u;
        goto label_307154;
    }
    ctx->pc = 0x30714Cu;
    {
        const bool branch_taken_0x30714c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30714c) {
            ctx->pc = 0x307158u;
            goto label_307158;
        }
    }
    ctx->pc = 0x307154u;
label_307154:
    // 0x307154: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x307154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307158:
    // 0x307158: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_30715c:
    if (ctx->pc == 0x30715Cu) {
        ctx->pc = 0x30715Cu;
            // 0x30715c: 0x9264005c  lbu         $a0, 0x5C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->pc = 0x307160u;
        goto label_307160;
    }
    ctx->pc = 0x307158u;
    {
        const bool branch_taken_0x307158 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x307158) {
            ctx->pc = 0x30715Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x307158u;
            // 0x30715c: 0x9264005c  lbu         $a0, 0x5C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x307174u;
            goto label_307174;
        }
    }
    ctx->pc = 0x307160u;
label_307160:
    // 0x307160: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x307160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_307164:
    // 0x307164: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x307164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_307168:
    // 0x307168: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_30716c:
    if (ctx->pc == 0x30716Cu) {
        ctx->pc = 0x30716Cu;
            // 0x30716c: 0xae000118  sw          $zero, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
        ctx->pc = 0x307170u;
        goto label_307170;
    }
    ctx->pc = 0x307168u;
    {
        const bool branch_taken_0x307168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x307168) {
            ctx->pc = 0x30716Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x307168u;
            // 0x30716c: 0xae000118  sw          $zero, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x307180u;
            goto label_307180;
        }
    }
    ctx->pc = 0x307170u;
label_307170:
    // 0x307170: 0x9264005c  lbu         $a0, 0x5C($s3)
    ctx->pc = 0x307170u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 92)));
label_307174:
    // 0x307174: 0xc072aaa  jal         func_1CAAA8
label_307178:
    if (ctx->pc == 0x307178u) {
        ctx->pc = 0x30717Cu;
        goto label_30717c;
    }
    ctx->pc = 0x307174u;
    SET_GPR_U32(ctx, 31, 0x30717Cu);
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30717Cu; }
        if (ctx->pc != 0x30717Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30717Cu; }
        if (ctx->pc != 0x30717Cu) { return; }
    }
    ctx->pc = 0x30717Cu;
label_30717c:
    // 0x30717c: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x30717cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
label_307180:
    // 0x307180: 0x3c023d3b  lui         $v0, 0x3D3B
    ctx->pc = 0x307180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15675 << 16));
label_307184:
    // 0x307184: 0x8e630db8  lw          $v1, 0xDB8($s3)
    ctx->pc = 0x307184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3512)));
label_307188:
    // 0x307188: 0x34422fec  ori         $v0, $v0, 0x2FEC
    ctx->pc = 0x307188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12268);
label_30718c:
    // 0x30718c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x30718cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_307190:
    // 0x307190: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x307190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_307194:
    // 0x307194: 0xae630db8  sw          $v1, 0xDB8($s3)
    ctx->pc = 0x307194u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3512), GPR_U32(ctx, 3));
label_307198:
    // 0x307198: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x307198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_30719c:
    // 0x30719c: 0x8e620e38  lw          $v0, 0xE38($s3)
    ctx->pc = 0x30719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
label_3071a0:
    // 0x3071a0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3071a4:
    if (ctx->pc == 0x3071A4u) {
        ctx->pc = 0x3071A4u;
            // 0x3071a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3071A8u;
        goto label_3071a8;
    }
    ctx->pc = 0x3071A0u;
    {
        const bool branch_taken_0x3071a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3071A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3071A0u;
            // 0x3071a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3071a0) {
            ctx->pc = 0x3071B8u;
            goto label_3071b8;
        }
    }
    ctx->pc = 0x3071A8u;
label_3071a8:
    // 0x3071a8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3071a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3071ac:
    // 0x3071ac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3071b0:
    if (ctx->pc == 0x3071B0u) {
        ctx->pc = 0x3071B4u;
        goto label_3071b4;
    }
    ctx->pc = 0x3071ACu;
    {
        const bool branch_taken_0x3071ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3071ac) {
            ctx->pc = 0x3071B8u;
            goto label_3071b8;
        }
    }
    ctx->pc = 0x3071B4u;
label_3071b4:
    // 0x3071b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3071b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3071b8:
    // 0x3071b8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3071bc:
    if (ctx->pc == 0x3071BCu) {
        ctx->pc = 0x3071C0u;
        goto label_3071c0;
    }
    ctx->pc = 0x3071B8u;
    {
        const bool branch_taken_0x3071b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3071b8) {
            ctx->pc = 0x3071D4u;
            goto label_3071d4;
        }
    }
    ctx->pc = 0x3071C0u;
label_3071c0:
    // 0x3071c0: 0xc075eb4  jal         func_1D7AD0
label_3071c4:
    if (ctx->pc == 0x3071C4u) {
        ctx->pc = 0x3071C4u;
            // 0x3071c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3071C8u;
        goto label_3071c8;
    }
    ctx->pc = 0x3071C0u;
    SET_GPR_U32(ctx, 31, 0x3071C8u);
    ctx->pc = 0x3071C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3071C0u;
            // 0x3071c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3071C8u; }
        if (ctx->pc != 0x3071C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3071C8u; }
        if (ctx->pc != 0x3071C8u) { return; }
    }
    ctx->pc = 0x3071C8u;
label_3071c8:
    // 0x3071c8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3071cc:
    if (ctx->pc == 0x3071CCu) {
        ctx->pc = 0x3071D0u;
        goto label_3071d0;
    }
    ctx->pc = 0x3071C8u;
    {
        const bool branch_taken_0x3071c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3071c8) {
            ctx->pc = 0x3071D4u;
            goto label_3071d4;
        }
    }
    ctx->pc = 0x3071D0u;
label_3071d0:
    // 0x3071d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3071d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3071d4:
    // 0x3071d4: 0x52200049  beql        $s1, $zero, . + 4 + (0x49 << 2)
label_3071d8:
    if (ctx->pc == 0x3071D8u) {
        ctx->pc = 0x3071D8u;
            // 0x3071d8: 0x8245010c  lb          $a1, 0x10C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
        ctx->pc = 0x3071DCu;
        goto label_3071dc;
    }
    ctx->pc = 0x3071D4u;
    {
        const bool branch_taken_0x3071d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3071d4) {
            ctx->pc = 0x3071D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3071D4u;
            // 0x3071d8: 0x8245010c  lb          $a1, 0x10C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3072FCu;
            goto label_3072fc;
        }
    }
    ctx->pc = 0x3071DCu;
label_3071dc:
    // 0x3071dc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3071dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3071e0:
    // 0x3071e0: 0x8e630d98  lw          $v1, 0xD98($s3)
    ctx->pc = 0x3071e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_3071e4:
    // 0x3071e4: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x3071e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3071e8:
    // 0x3071e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3071e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3071ec:
    // 0x3071ec: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3071ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3071f0:
    // 0x3071f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3071f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3071f4:
    // 0x3071f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3071f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3071f8:
    // 0x3071f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3071f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3071fc:
    // 0x3071fc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3071fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_307200:
    // 0x307200: 0x320f809  jalr        $t9
label_307204:
    if (ctx->pc == 0x307204u) {
        ctx->pc = 0x307208u;
        goto label_307208;
    }
    ctx->pc = 0x307200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x307208u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x307208u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x307208u; }
            if (ctx->pc != 0x307208u) { return; }
        }
        }
    }
    ctx->pc = 0x307208u;
label_307208:
    // 0x307208: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x307208u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_30720c:
    // 0x30720c: 0x8e630d98  lw          $v1, 0xD98($s3)
    ctx->pc = 0x30720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_307210:
    // 0x307210: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x307210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_307214:
    // 0x307214: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x307214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_307218:
    // 0x307218: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x307218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30721c:
    // 0x30721c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_307220:
    // 0x307220: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x307220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_307224:
    // 0x307224: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x307224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_307228:
    // 0x307228: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x307228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30722c:
    // 0x30722c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x30722cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_307230:
    // 0x307230: 0x320f809  jalr        $t9
label_307234:
    if (ctx->pc == 0x307234u) {
        ctx->pc = 0x307238u;
        goto label_307238;
    }
    ctx->pc = 0x307230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x307238u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x307238u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x307238u; }
            if (ctx->pc != 0x307238u) { return; }
        }
        }
    }
    ctx->pc = 0x307238u;
label_307238:
    // 0x307238: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_30723c:
    if (ctx->pc == 0x30723Cu) {
        ctx->pc = 0x30723Cu;
            // 0x30723c: 0x8c500018  lw          $s0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x307240u;
        goto label_307240;
    }
    ctx->pc = 0x307238u;
    {
        const bool branch_taken_0x307238 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30723Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307238u;
            // 0x30723c: 0x8c500018  lw          $s0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307238) {
            ctx->pc = 0x307298u;
            goto label_307298;
        }
    }
    ctx->pc = 0x307240u;
label_307240:
    // 0x307240: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x307240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_307244:
    // 0x307244: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x307244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_307248:
    // 0x307248: 0x320f809  jalr        $t9
label_30724c:
    if (ctx->pc == 0x30724Cu) {
        ctx->pc = 0x30724Cu;
            // 0x30724c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307250u;
        goto label_307250;
    }
    ctx->pc = 0x307248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x307250u);
        ctx->pc = 0x30724Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307248u;
            // 0x30724c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x307250u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x307250u; }
            if (ctx->pc != 0x307250u) { return; }
        }
        }
    }
    ctx->pc = 0x307250u;
label_307250:
    // 0x307250: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x307250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_307254:
    // 0x307254: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_307258:
    if (ctx->pc == 0x307258u) {
        ctx->pc = 0x30725Cu;
        goto label_30725c;
    }
    ctx->pc = 0x307254u;
    {
        const bool branch_taken_0x307254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x307254) {
            ctx->pc = 0x307298u;
            goto label_307298;
        }
    }
    ctx->pc = 0x30725Cu;
label_30725c:
    // 0x30725c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x30725cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_307260:
    // 0x307260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x307260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_307264:
    // 0x307264: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x307264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_307268:
    // 0x307268: 0x320f809  jalr        $t9
label_30726c:
    if (ctx->pc == 0x30726Cu) {
        ctx->pc = 0x30726Cu;
            // 0x30726c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x307270u;
        goto label_307270;
    }
    ctx->pc = 0x307268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x307270u);
        ctx->pc = 0x30726Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307268u;
            // 0x30726c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x307270u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x307270u; }
            if (ctx->pc != 0x307270u) { return; }
        }
        }
    }
    ctx->pc = 0x307270u;
label_307270:
    // 0x307270: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x307270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_307274:
    // 0x307274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x307274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_307278:
    // 0x307278: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x307278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_30727c:
    // 0x30727c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30727cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_307280:
    // 0x307280: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x307280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_307284:
    // 0x307284: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x307284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_307288:
    // 0x307288: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x307288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30728c:
    // 0x30728c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x30728cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_307290:
    // 0x307290: 0x320f809  jalr        $t9
label_307294:
    if (ctx->pc == 0x307294u) {
        ctx->pc = 0x307294u;
            // 0x307294: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x307298u;
        goto label_307298;
    }
    ctx->pc = 0x307290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x307298u);
        ctx->pc = 0x307294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307290u;
            // 0x307294: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x307298u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x307298u; }
            if (ctx->pc != 0x307298u) { return; }
        }
        }
    }
    ctx->pc = 0x307298u;
label_307298:
    // 0x307298: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_30729c:
    if (ctx->pc == 0x30729Cu) {
        ctx->pc = 0x3072A0u;
        goto label_3072a0;
    }
    ctx->pc = 0x307298u;
    {
        const bool branch_taken_0x307298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x307298) {
            ctx->pc = 0x3072F8u;
            goto label_3072f8;
        }
    }
    ctx->pc = 0x3072A0u;
label_3072a0:
    // 0x3072a0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3072a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3072a4:
    // 0x3072a4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3072a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3072a8:
    // 0x3072a8: 0x320f809  jalr        $t9
label_3072ac:
    if (ctx->pc == 0x3072ACu) {
        ctx->pc = 0x3072ACu;
            // 0x3072ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3072B0u;
        goto label_3072b0;
    }
    ctx->pc = 0x3072A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3072B0u);
        ctx->pc = 0x3072ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3072A8u;
            // 0x3072ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3072B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3072B0u; }
            if (ctx->pc != 0x3072B0u) { return; }
        }
        }
    }
    ctx->pc = 0x3072B0u;
label_3072b0:
    // 0x3072b0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3072b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3072b4:
    // 0x3072b4: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_3072b8:
    if (ctx->pc == 0x3072B8u) {
        ctx->pc = 0x3072BCu;
        goto label_3072bc;
    }
    ctx->pc = 0x3072B4u;
    {
        const bool branch_taken_0x3072b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3072b4) {
            ctx->pc = 0x3072F8u;
            goto label_3072f8;
        }
    }
    ctx->pc = 0x3072BCu;
label_3072bc:
    // 0x3072bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3072bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3072c0:
    // 0x3072c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3072c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3072c4:
    // 0x3072c4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3072c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3072c8:
    // 0x3072c8: 0x320f809  jalr        $t9
label_3072cc:
    if (ctx->pc == 0x3072CCu) {
        ctx->pc = 0x3072CCu;
            // 0x3072cc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3072D0u;
        goto label_3072d0;
    }
    ctx->pc = 0x3072C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3072D0u);
        ctx->pc = 0x3072CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3072C8u;
            // 0x3072cc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3072D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3072D0u; }
            if (ctx->pc != 0x3072D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3072D0u;
label_3072d0:
    // 0x3072d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3072d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3072d4:
    // 0x3072d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3072d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3072d8:
    // 0x3072d8: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x3072d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_3072dc:
    // 0x3072dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3072dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3072e0:
    // 0x3072e0: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x3072e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_3072e4:
    // 0x3072e4: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x3072e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_3072e8:
    // 0x3072e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3072e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3072ec:
    // 0x3072ec: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x3072ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_3072f0:
    // 0x3072f0: 0x320f809  jalr        $t9
label_3072f4:
    if (ctx->pc == 0x3072F4u) {
        ctx->pc = 0x3072F4u;
            // 0x3072f4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3072F8u;
        goto label_3072f8;
    }
    ctx->pc = 0x3072F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3072F8u);
        ctx->pc = 0x3072F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3072F0u;
            // 0x3072f4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3072F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3072F8u; }
            if (ctx->pc != 0x3072F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3072F8u;
label_3072f8:
    // 0x3072f8: 0x8245010c  lb          $a1, 0x10C($s2)
    ctx->pc = 0x3072f8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
label_3072fc:
    // 0x3072fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3072fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_307300:
    // 0x307300: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x307300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_307304:
    // 0x307304: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x307304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_307308:
    // 0x307308: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x307308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_30730c:
    // 0x30730c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30730cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_307310:
    // 0x307310: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x307310u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_307314:
    // 0x307314: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x307314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_307318:
    // 0x307318: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x307318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_30731c:
    // 0x30731c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30731cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_307320:
    // 0x307320: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x307320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_307324:
    // 0x307324: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x307324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_307328:
    // 0x307328: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x307328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_30732c:
    // 0x30732c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30732cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_307330:
    // 0x307330: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x307330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_307334:
    // 0x307334: 0x8245010d  lb          $a1, 0x10D($s2)
    ctx->pc = 0x307334u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_307338:
    // 0x307338: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x307338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_30733c:
    // 0x30733c: 0x320f809  jalr        $t9
label_307340:
    if (ctx->pc == 0x307340u) {
        ctx->pc = 0x307340u;
            // 0x307340: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x307344u;
        goto label_307344;
    }
    ctx->pc = 0x30733Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x307344u);
        ctx->pc = 0x307340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30733Cu;
            // 0x307340: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x307344u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x307344u; }
            if (ctx->pc != 0x307344u) { return; }
        }
        }
    }
    ctx->pc = 0x307344u;
label_307344:
    // 0x307344: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x307344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_307348:
    // 0x307348: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x307348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_30734c:
    // 0x30734c: 0x8245010d  lb          $a1, 0x10D($s2)
    ctx->pc = 0x30734cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_307350:
    // 0x307350: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x307350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_307354:
    // 0x307354: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x307354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_307358:
    // 0x307358: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x307358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30735c:
    // 0x30735c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x30735cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_307360:
    // 0x307360: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x307360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_307364:
    // 0x307364: 0x320f809  jalr        $t9
label_307368:
    if (ctx->pc == 0x307368u) {
        ctx->pc = 0x307368u;
            // 0x307368: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x30736Cu;
        goto label_30736c;
    }
    ctx->pc = 0x307364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30736Cu);
        ctx->pc = 0x307368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307364u;
            // 0x307368: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30736Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30736Cu; }
            if (ctx->pc != 0x30736Cu) { return; }
        }
        }
    }
    ctx->pc = 0x30736Cu;
label_30736c:
    // 0x30736c: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x30736cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_307370:
    // 0x307370: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x307370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_307374:
    // 0x307374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x307374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_307378:
    // 0x307378: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x307378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_30737c:
    // 0x30737c: 0x320f809  jalr        $t9
label_307380:
    if (ctx->pc == 0x307380u) {
        ctx->pc = 0x307380u;
            // 0x307380: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307384u;
        goto label_307384;
    }
    ctx->pc = 0x30737Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x307384u);
        ctx->pc = 0x307380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30737Cu;
            // 0x307380: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x307384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x307384u; }
            if (ctx->pc != 0x307384u) { return; }
        }
        }
    }
    ctx->pc = 0x307384u;
label_307384:
    // 0x307384: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x307384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_307388:
    // 0x307388: 0xc07649c  jal         func_1D9270
label_30738c:
    if (ctx->pc == 0x30738Cu) {
        ctx->pc = 0x30738Cu;
            // 0x30738c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x307390u;
        goto label_307390;
    }
    ctx->pc = 0x307388u;
    SET_GPR_U32(ctx, 31, 0x307390u);
    ctx->pc = 0x30738Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307388u;
            // 0x30738c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307390u; }
        if (ctx->pc != 0x307390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307390u; }
        if (ctx->pc != 0x307390u) { return; }
    }
    ctx->pc = 0x307390u;
label_307390:
    // 0x307390: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x307390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_307394:
    // 0x307394: 0xae630e30  sw          $v1, 0xE30($s3)
    ctx->pc = 0x307394u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3632), GPR_U32(ctx, 3));
label_307398:
    // 0x307398: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x307398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_30739c:
    // 0x30739c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30739cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3073a0:
    // 0x3073a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3073a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3073a4:
    // 0x3073a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3073a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3073a8:
    // 0x3073a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3073a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3073ac:
    // 0x3073ac: 0x3e00008  jr          $ra
label_3073b0:
    if (ctx->pc == 0x3073B0u) {
        ctx->pc = 0x3073B0u;
            // 0x3073b0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3073B4u;
        goto label_3073b4;
    }
    ctx->pc = 0x3073ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3073B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3073ACu;
            // 0x3073b0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3073B4u;
label_3073b4:
    // 0x3073b4: 0x0  nop
    ctx->pc = 0x3073b4u;
    // NOP
label_3073b8:
    // 0x3073b8: 0x0  nop
    ctx->pc = 0x3073b8u;
    // NOP
label_3073bc:
    // 0x3073bc: 0x0  nop
    ctx->pc = 0x3073bcu;
    // NOP
label_3073c0:
    // 0x3073c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3073c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3073c4:
    // 0x3073c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3073c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3073c8:
    // 0x3073c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3073c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3073cc:
    // 0x3073cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3073ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3073d0:
    // 0x3073d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3073d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3073d4:
    // 0x3073d4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3073d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3073d8:
    // 0x3073d8: 0xc4810e28  lwc1        $f1, 0xE28($a0)
    ctx->pc = 0x3073d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3073dc:
    // 0x3073dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3073dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3073e0:
    // 0x3073e0: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x3073e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3073e4:
    // 0x3073e4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3073e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3073e8:
    // 0x3073e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3073e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3073ec:
    // 0x3073ec: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_3073f0:
    if (ctx->pc == 0x3073F0u) {
        ctx->pc = 0x3073F0u;
            // 0x3073f0: 0xe4810e28  swc1        $f1, 0xE28($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3624), bits); }
        ctx->pc = 0x3073F4u;
        goto label_3073f4;
    }
    ctx->pc = 0x3073ECu;
    {
        const bool branch_taken_0x3073ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3073F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3073ECu;
            // 0x3073f0: 0xe4810e28  swc1        $f1, 0xE28($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3624), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3073ec) {
            ctx->pc = 0x307448u;
            goto label_307448;
        }
    }
    ctx->pc = 0x3073F4u;
label_3073f4:
    // 0x3073f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3073f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3073f8:
    // 0x3073f8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3073f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3073fc:
    // 0x3073fc: 0x320f809  jalr        $t9
label_307400:
    if (ctx->pc == 0x307400u) {
        ctx->pc = 0x307400u;
            // 0x307400: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x307404u;
        goto label_307404;
    }
    ctx->pc = 0x3073FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x307404u);
        ctx->pc = 0x307400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3073FCu;
            // 0x307400: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x307404u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x307404u; }
            if (ctx->pc != 0x307404u) { return; }
        }
        }
    }
    ctx->pc = 0x307404u;
label_307404:
    // 0x307404: 0xc0754b4  jal         func_1D52D0
label_307408:
    if (ctx->pc == 0x307408u) {
        ctx->pc = 0x307408u;
            // 0x307408: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x30740Cu;
        goto label_30740c;
    }
    ctx->pc = 0x307404u;
    SET_GPR_U32(ctx, 31, 0x30740Cu);
    ctx->pc = 0x307408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307404u;
            // 0x307408: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30740Cu; }
        if (ctx->pc != 0x30740Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30740Cu; }
        if (ctx->pc != 0x30740Cu) { return; }
    }
    ctx->pc = 0x30740Cu;
label_30740c:
    // 0x30740c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x30740cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_307410:
    // 0x307410: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x307410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_307414:
    // 0x307414: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_307418:
    if (ctx->pc == 0x307418u) {
        ctx->pc = 0x307418u;
            // 0x307418: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x30741Cu;
        goto label_30741c;
    }
    ctx->pc = 0x307414u;
    {
        const bool branch_taken_0x307414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x307414) {
            ctx->pc = 0x307418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x307414u;
            // 0x307418: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x307454u;
            goto label_307454;
        }
    }
    ctx->pc = 0x30741Cu;
label_30741c:
    // 0x30741c: 0xc040180  jal         func_100600
label_307420:
    if (ctx->pc == 0x307420u) {
        ctx->pc = 0x307420u;
            // 0x307420: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x307424u;
        goto label_307424;
    }
    ctx->pc = 0x30741Cu;
    SET_GPR_U32(ctx, 31, 0x307424u);
    ctx->pc = 0x307420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30741Cu;
            // 0x307420: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307424u; }
        if (ctx->pc != 0x307424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307424u; }
        if (ctx->pc != 0x307424u) { return; }
    }
    ctx->pc = 0x307424u;
label_307424:
    // 0x307424: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x307424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307428:
    // 0x307428: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_30742c:
    if (ctx->pc == 0x30742Cu) {
        ctx->pc = 0x307430u;
        goto label_307430;
    }
    ctx->pc = 0x307428u;
    {
        const bool branch_taken_0x307428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307428) {
            ctx->pc = 0x307450u;
            goto label_307450;
        }
    }
    ctx->pc = 0x307430u;
label_307430:
    // 0x307430: 0x8e050d98  lw          $a1, 0xD98($s0)
    ctx->pc = 0x307430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_307434:
    // 0x307434: 0xc60c0a80  lwc1        $f12, 0xA80($s0)
    ctx->pc = 0x307434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_307438:
    // 0x307438: 0xc11ebc4  jal         func_47AF10
label_30743c:
    if (ctx->pc == 0x30743Cu) {
        ctx->pc = 0x30743Cu;
            // 0x30743c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x307440u;
        goto label_307440;
    }
    ctx->pc = 0x307438u;
    SET_GPR_U32(ctx, 31, 0x307440u);
    ctx->pc = 0x30743Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307438u;
            // 0x30743c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47AF10u;
    if (runtime->hasFunction(0x47AF10u)) {
        auto targetFn = runtime->lookupFunction(0x47AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307440u; }
        if (ctx->pc != 0x307440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047AF10_0x47af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307440u; }
        if (ctx->pc != 0x307440u) { return; }
    }
    ctx->pc = 0x307440u;
label_307440:
    // 0x307440: 0x10000003  b           . + 4 + (0x3 << 2)
label_307444:
    if (ctx->pc == 0x307444u) {
        ctx->pc = 0x307448u;
        goto label_307448;
    }
    ctx->pc = 0x307440u;
    {
        const bool branch_taken_0x307440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307440) {
            ctx->pc = 0x307450u;
            goto label_307450;
        }
    }
    ctx->pc = 0x307448u;
label_307448:
    // 0x307448: 0xc0c06b4  jal         func_301AD0
label_30744c:
    if (ctx->pc == 0x30744Cu) {
        ctx->pc = 0x307450u;
        goto label_307450;
    }
    ctx->pc = 0x307448u;
    SET_GPR_U32(ctx, 31, 0x307450u);
    ctx->pc = 0x301AD0u;
    if (runtime->hasFunction(0x301AD0u)) {
        auto targetFn = runtime->lookupFunction(0x301AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307450u; }
        if (ctx->pc != 0x307450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301AD0_0x301ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307450u; }
        if (ctx->pc != 0x307450u) { return; }
    }
    ctx->pc = 0x307450u;
label_307450:
    // 0x307450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x307450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_307454:
    // 0x307454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x307454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_307458:
    // 0x307458: 0x3e00008  jr          $ra
label_30745c:
    if (ctx->pc == 0x30745Cu) {
        ctx->pc = 0x30745Cu;
            // 0x30745c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x307460u;
        goto label_307460;
    }
    ctx->pc = 0x307458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30745Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307458u;
            // 0x30745c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307460u;
label_307460:
    // 0x307460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x307460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_307464:
    // 0x307464: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x307464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_307468:
    // 0x307468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x307468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30746c:
    // 0x30746c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_307470:
    // 0x307470: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x307470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_307474:
    // 0x307474: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x307474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_307478:
    // 0x307478: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x307478u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_30747c:
    // 0x30747c: 0xc4810e28  lwc1        $f1, 0xE28($a0)
    ctx->pc = 0x30747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_307480:
    // 0x307480: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x307480u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_307484:
    // 0x307484: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_307488:
    if (ctx->pc == 0x307488u) {
        ctx->pc = 0x307488u;
            // 0x307488: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30748Cu;
        goto label_30748c;
    }
    ctx->pc = 0x307484u;
    {
        const bool branch_taken_0x307484 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x307488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307484u;
            // 0x307488: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307484) {
            ctx->pc = 0x307498u;
            goto label_307498;
        }
    }
    ctx->pc = 0x30748Cu;
label_30748c:
    // 0x30748c: 0xae400e0c  sw          $zero, 0xE0C($s2)
    ctx->pc = 0x30748cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3596), GPR_U32(ctx, 0));
label_307490:
    // 0x307490: 0x10000026  b           . + 4 + (0x26 << 2)
label_307494:
    if (ctx->pc == 0x307494u) {
        ctx->pc = 0x307494u;
            // 0x307494: 0xe6400a80  swc1        $f0, 0xA80($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2688), bits); }
        ctx->pc = 0x307498u;
        goto label_307498;
    }
    ctx->pc = 0x307490u;
    {
        const bool branch_taken_0x307490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307490u;
            // 0x307494: 0xe6400a80  swc1        $f0, 0xA80($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2688), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x307490) {
            ctx->pc = 0x30752Cu;
            goto label_30752c;
        }
    }
    ctx->pc = 0x307498u;
label_307498:
    // 0x307498: 0x8e420e0c  lw          $v0, 0xE0C($s2)
    ctx->pc = 0x307498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3596)));
label_30749c:
    // 0x30749c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x30749cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3074a0:
    // 0x3074a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3074a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3074a4:
    // 0x3074a4: 0xae420e0c  sw          $v0, 0xE0C($s2)
    ctx->pc = 0x3074a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3596), GPR_U32(ctx, 2));
label_3074a8:
    // 0x3074a8: 0x8e420e34  lw          $v0, 0xE34($s2)
    ctx->pc = 0x3074a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_3074ac:
    // 0x3074ac: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3074b0:
    if (ctx->pc == 0x3074B0u) {
        ctx->pc = 0x3074B0u;
            // 0x3074b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3074B4u;
        goto label_3074b4;
    }
    ctx->pc = 0x3074ACu;
    {
        const bool branch_taken_0x3074ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3074B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3074ACu;
            // 0x3074b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3074ac) {
            ctx->pc = 0x3074C4u;
            goto label_3074c4;
        }
    }
    ctx->pc = 0x3074B4u;
label_3074b4:
    // 0x3074b4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3074b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3074b8:
    // 0x3074b8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3074bc:
    if (ctx->pc == 0x3074BCu) {
        ctx->pc = 0x3074C0u;
        goto label_3074c0;
    }
    ctx->pc = 0x3074B8u;
    {
        const bool branch_taken_0x3074b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3074b8) {
            ctx->pc = 0x3074C4u;
            goto label_3074c4;
        }
    }
    ctx->pc = 0x3074C0u;
label_3074c0:
    // 0x3074c0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3074c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3074c4:
    // 0x3074c4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3074c8:
    if (ctx->pc == 0x3074C8u) {
        ctx->pc = 0x3074CCu;
        goto label_3074cc;
    }
    ctx->pc = 0x3074C4u;
    {
        const bool branch_taken_0x3074c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3074c4) {
            ctx->pc = 0x3074E0u;
            goto label_3074e0;
        }
    }
    ctx->pc = 0x3074CCu;
label_3074cc:
    // 0x3074cc: 0xc075eb4  jal         func_1D7AD0
label_3074d0:
    if (ctx->pc == 0x3074D0u) {
        ctx->pc = 0x3074D0u;
            // 0x3074d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3074D4u;
        goto label_3074d4;
    }
    ctx->pc = 0x3074CCu;
    SET_GPR_U32(ctx, 31, 0x3074D4u);
    ctx->pc = 0x3074D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3074CCu;
            // 0x3074d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3074D4u; }
        if (ctx->pc != 0x3074D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3074D4u; }
        if (ctx->pc != 0x3074D4u) { return; }
    }
    ctx->pc = 0x3074D4u;
label_3074d4:
    // 0x3074d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3074d8:
    if (ctx->pc == 0x3074D8u) {
        ctx->pc = 0x3074DCu;
        goto label_3074dc;
    }
    ctx->pc = 0x3074D4u;
    {
        const bool branch_taken_0x3074d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3074d4) {
            ctx->pc = 0x3074E0u;
            goto label_3074e0;
        }
    }
    ctx->pc = 0x3074DCu;
label_3074dc:
    // 0x3074dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3074dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3074e0:
    // 0x3074e0: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_3074e4:
    if (ctx->pc == 0x3074E4u) {
        ctx->pc = 0x3074E4u;
            // 0x3074e4: 0x8e430e0c  lw          $v1, 0xE0C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3596)));
        ctx->pc = 0x3074E8u;
        goto label_3074e8;
    }
    ctx->pc = 0x3074E0u;
    {
        const bool branch_taken_0x3074e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3074e0) {
            ctx->pc = 0x3074E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3074E0u;
            // 0x3074e4: 0x8e430e0c  lw          $v1, 0xE0C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3596)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3074FCu;
            goto label_3074fc;
        }
    }
    ctx->pc = 0x3074E8u;
label_3074e8:
    // 0x3074e8: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x3074e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_3074ec:
    // 0x3074ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3074ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3074f0:
    // 0x3074f0: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_3074f4:
    if (ctx->pc == 0x3074F4u) {
        ctx->pc = 0x3074F4u;
            // 0x3074f4: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x3074F8u;
        goto label_3074f8;
    }
    ctx->pc = 0x3074F0u;
    {
        const bool branch_taken_0x3074f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3074f0) {
            ctx->pc = 0x3074F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3074F0u;
            // 0x3074f4: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x307530u;
            goto label_307530;
        }
    }
    ctx->pc = 0x3074F8u;
label_3074f8:
    // 0x3074f8: 0x8e430e0c  lw          $v1, 0xE0C($s2)
    ctx->pc = 0x3074f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3596)));
label_3074fc:
    // 0x3074fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3074fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_307500:
    // 0x307500: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_307504:
    if (ctx->pc == 0x307504u) {
        ctx->pc = 0x307508u;
        goto label_307508;
    }
    ctx->pc = 0x307500u;
    {
        const bool branch_taken_0x307500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x307500) {
            ctx->pc = 0x30752Cu;
            goto label_30752c;
        }
    }
    ctx->pc = 0x307508u;
label_307508:
    // 0x307508: 0xc040180  jal         func_100600
label_30750c:
    if (ctx->pc == 0x30750Cu) {
        ctx->pc = 0x30750Cu;
            // 0x30750c: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x307510u;
        goto label_307510;
    }
    ctx->pc = 0x307508u;
    SET_GPR_U32(ctx, 31, 0x307510u);
    ctx->pc = 0x30750Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307508u;
            // 0x30750c: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307510u; }
        if (ctx->pc != 0x307510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307510u; }
        if (ctx->pc != 0x307510u) { return; }
    }
    ctx->pc = 0x307510u;
label_307510:
    // 0x307510: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_307514:
    if (ctx->pc == 0x307514u) {
        ctx->pc = 0x307518u;
        goto label_307518;
    }
    ctx->pc = 0x307510u;
    {
        const bool branch_taken_0x307510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307510) {
            ctx->pc = 0x30752Cu;
            goto label_30752c;
        }
    }
    ctx->pc = 0x307518u;
label_307518:
    // 0x307518: 0x8e450d98  lw          $a1, 0xD98($s2)
    ctx->pc = 0x307518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_30751c:
    // 0x30751c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30751cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307520:
    // 0x307520: 0x8e460e0c  lw          $a2, 0xE0C($s2)
    ctx->pc = 0x307520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3596)));
label_307524:
    // 0x307524: 0xc0f3e5c  jal         func_3CF970
label_307528:
    if (ctx->pc == 0x307528u) {
        ctx->pc = 0x307528u;
            // 0x307528: 0x26470e0c  addiu       $a3, $s2, 0xE0C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 3596));
        ctx->pc = 0x30752Cu;
        goto label_30752c;
    }
    ctx->pc = 0x307524u;
    SET_GPR_U32(ctx, 31, 0x30752Cu);
    ctx->pc = 0x307528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307524u;
            // 0x307528: 0x26470e0c  addiu       $a3, $s2, 0xE0C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 3596));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CF970u;
    if (runtime->hasFunction(0x3CF970u)) {
        auto targetFn = runtime->lookupFunction(0x3CF970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30752Cu; }
        if (ctx->pc != 0x30752Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CF970_0x3cf970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30752Cu; }
        if (ctx->pc != 0x30752Cu) { return; }
    }
    ctx->pc = 0x30752Cu;
label_30752c:
    // 0x30752c: 0x26440440  addiu       $a0, $s2, 0x440
    ctx->pc = 0x30752cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
label_307530:
    // 0x307530: 0xc0754b4  jal         func_1D52D0
label_307534:
    if (ctx->pc == 0x307534u) {
        ctx->pc = 0x307538u;
        goto label_307538;
    }
    ctx->pc = 0x307530u;
    SET_GPR_U32(ctx, 31, 0x307538u);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307538u; }
        if (ctx->pc != 0x307538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307538u; }
        if (ctx->pc != 0x307538u) { return; }
    }
    ctx->pc = 0x307538u;
label_307538:
    // 0x307538: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x307538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_30753c:
    // 0x30753c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x30753cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_307540:
    // 0x307540: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_307544:
    if (ctx->pc == 0x307544u) {
        ctx->pc = 0x307544u;
            // 0x307544: 0x3c024270  lui         $v0, 0x4270 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
        ctx->pc = 0x307548u;
        goto label_307548;
    }
    ctx->pc = 0x307540u;
    {
        const bool branch_taken_0x307540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307540) {
            ctx->pc = 0x307544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x307540u;
            // 0x307544: 0x3c024270  lui         $v0, 0x4270 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3075C8u;
            goto label_3075c8;
        }
    }
    ctx->pc = 0x307548u;
label_307548:
    // 0x307548: 0x8e420e0c  lw          $v0, 0xE0C($s2)
    ctx->pc = 0x307548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3596)));
label_30754c:
    // 0x30754c: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x30754cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_307550:
    // 0x307550: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_307554:
    if (ctx->pc == 0x307554u) {
        ctx->pc = 0x307554u;
            // 0x307554: 0x26440a50  addiu       $a0, $s2, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
        ctx->pc = 0x307558u;
        goto label_307558;
    }
    ctx->pc = 0x307550u;
    {
        const bool branch_taken_0x307550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x307554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307550u;
            // 0x307554: 0x26440a50  addiu       $a0, $s2, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307550) {
            ctx->pc = 0x307580u;
            goto label_307580;
        }
    }
    ctx->pc = 0x307558u;
label_307558:
    // 0x307558: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x307558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30755c:
    // 0x30755c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x30755cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_307560:
    // 0x307560: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x307560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_307564:
    // 0x307564: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x307564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_307568:
    // 0x307568: 0x24422c40  addiu       $v0, $v0, 0x2C40
    ctx->pc = 0x307568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11328));
label_30756c:
    // 0x30756c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30756cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_307570:
    // 0x307570: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x307570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_307574:
    // 0x307574: 0xc4a10c84  lwc1        $f1, 0xC84($a1)
    ctx->pc = 0x307574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_307578:
    // 0x307578: 0x10000007  b           . + 4 + (0x7 << 2)
label_30757c:
    if (ctx->pc == 0x30757Cu) {
        ctx->pc = 0x30757Cu;
            // 0x30757c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x307580u;
        goto label_307580;
    }
    ctx->pc = 0x307578u;
    {
        const bool branch_taken_0x307578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30757Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307578u;
            // 0x30757c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307578) {
            ctx->pc = 0x307598u;
            goto label_307598;
        }
    }
    ctx->pc = 0x307580u;
label_307580:
    // 0x307580: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x307580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_307584:
    // 0x307584: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x307584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_307588:
    // 0x307588: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x307588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_30758c:
    // 0x30758c: 0xc4402c54  lwc1        $f0, 0x2C54($v0)
    ctx->pc = 0x30758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_307590:
    // 0x307590: 0xc4610c84  lwc1        $f1, 0xC84($v1)
    ctx->pc = 0x307590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_307594:
    // 0x307594: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x307594u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_307598:
    // 0x307598: 0xc0eea40  jal         func_3BA900
label_30759c:
    if (ctx->pc == 0x30759Cu) {
        ctx->pc = 0x3075A0u;
        goto label_3075a0;
    }
    ctx->pc = 0x307598u;
    SET_GPR_U32(ctx, 31, 0x3075A0u);
    ctx->pc = 0x3BA900u;
    if (runtime->hasFunction(0x3BA900u)) {
        auto targetFn = runtime->lookupFunction(0x3BA900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3075A0u; }
        if (ctx->pc != 0x3075A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA900_0x3ba900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3075A0u; }
        if (ctx->pc != 0x3075A0u) { return; }
    }
    ctx->pc = 0x3075A0u;
label_3075a0:
    // 0x3075a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3075a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3075a4:
    // 0x3075a4: 0x26440a50  addiu       $a0, $s2, 0xA50
    ctx->pc = 0x3075a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
label_3075a8:
    // 0x3075a8: 0xc6400a7c  lwc1        $f0, 0xA7C($s2)
    ctx->pc = 0x3075a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3075ac:
    // 0x3075ac: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3075acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3075b0:
    // 0x3075b0: 0xc0eea24  jal         func_3BA890
label_3075b4:
    if (ctx->pc == 0x3075B4u) {
        ctx->pc = 0x3075B4u;
            // 0x3075b4: 0xe6400a7c  swc1        $f0, 0xA7C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2684), bits); }
        ctx->pc = 0x3075B8u;
        goto label_3075b8;
    }
    ctx->pc = 0x3075B0u;
    SET_GPR_U32(ctx, 31, 0x3075B8u);
    ctx->pc = 0x3075B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3075B0u;
            // 0x3075b4: 0xe6400a7c  swc1        $f0, 0xA7C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3075B8u; }
        if (ctx->pc != 0x3075B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3075B8u; }
        if (ctx->pc != 0x3075B8u) { return; }
    }
    ctx->pc = 0x3075B8u;
label_3075b8:
    // 0x3075b8: 0xc6400a80  lwc1        $f0, 0xA80($s2)
    ctx->pc = 0x3075b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3075bc:
    // 0x3075bc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3075bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3075c0:
    // 0x3075c0: 0xe6400a80  swc1        $f0, 0xA80($s2)
    ctx->pc = 0x3075c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2688), bits); }
label_3075c4:
    // 0x3075c4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3075c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_3075c8:
    // 0x3075c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3075c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3075cc:
    // 0x3075cc: 0xae420e28  sw          $v0, 0xE28($s2)
    ctx->pc = 0x3075ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3624), GPR_U32(ctx, 2));
label_3075d0:
    // 0x3075d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3075d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3075d4:
    // 0x3075d4: 0x8e440e0c  lw          $a0, 0xE0C($s2)
    ctx->pc = 0x3075d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3596)));
label_3075d8:
    // 0x3075d8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3075d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3075dc:
    // 0x3075dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3075dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3075e0:
    // 0x3075e0: 0x8e510550  lw          $s1, 0x550($s2)
    ctx->pc = 0x3075e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_3075e4:
    // 0x3075e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3075e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3075e8:
    // 0x3075e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3075e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3075ec:
    // 0x3075ec: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3075ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3075f0:
    // 0x3075f0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3075f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3075f4:
    // 0x3075f4: 0x2450002f  addiu       $s0, $v0, 0x2F
    ctx->pc = 0x3075f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 47));
label_3075f8:
    // 0x3075f8: 0x8222010c  lb          $v0, 0x10C($s1)
    ctx->pc = 0x3075f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_3075fc:
    // 0x3075fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3075fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_307600:
    // 0x307600: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x307600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_307604:
    // 0x307604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x307604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_307608:
    // 0x307608: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x307608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_30760c:
    // 0x30760c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x30760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_307610:
    // 0x307610: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x307610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_307614:
    // 0x307614: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x307614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_307618:
    // 0x307618: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x307618u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_30761c:
    // 0x30761c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x30761cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_307620:
    // 0x307620: 0x320f809  jalr        $t9
label_307624:
    if (ctx->pc == 0x307624u) {
        ctx->pc = 0x307624u;
            // 0x307624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307628u;
        goto label_307628;
    }
    ctx->pc = 0x307620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x307628u);
        ctx->pc = 0x307624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307620u;
            // 0x307624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x307628u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x307628u; }
            if (ctx->pc != 0x307628u) { return; }
        }
        }
    }
    ctx->pc = 0x307628u;
label_307628:
    // 0x307628: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x307628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_30762c:
    // 0x30762c: 0x10363c  dsll32      $a2, $s0, 24
    ctx->pc = 0x30762cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 24));
label_307630:
    // 0x307630: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x307630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_307634:
    // 0x307634: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x307634u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_307638:
    // 0x307638: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x307638u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_30763c:
    // 0x30763c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30763cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_307640:
    // 0x307640: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x307640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_307644:
    // 0x307644: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x307644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_307648:
    // 0x307648: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x307648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30764c:
    // 0x30764c: 0x320f809  jalr        $t9
label_307650:
    if (ctx->pc == 0x307650u) {
        ctx->pc = 0x307650u;
            // 0x307650: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x307654u;
        goto label_307654;
    }
    ctx->pc = 0x30764Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x307654u);
        ctx->pc = 0x307650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30764Cu;
            // 0x307650: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x307654u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x307654u; }
            if (ctx->pc != 0x307654u) { return; }
        }
        }
    }
    ctx->pc = 0x307654u;
label_307654:
    // 0x307654: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x307654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_307658:
    // 0x307658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x307658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30765c:
    // 0x30765c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x30765cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_307660:
    // 0x307660: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x307660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_307664:
    // 0x307664: 0x320f809  jalr        $t9
label_307668:
    if (ctx->pc == 0x307668u) {
        ctx->pc = 0x307668u;
            // 0x307668: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x30766Cu;
        goto label_30766c;
    }
    ctx->pc = 0x307664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30766Cu);
        ctx->pc = 0x307668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307664u;
            // 0x307668: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30766Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30766Cu; }
            if (ctx->pc != 0x30766Cu) { return; }
        }
        }
    }
    ctx->pc = 0x30766Cu;
label_30766c:
    // 0x30766c: 0xc0c0f84  jal         func_303E10
label_307670:
    if (ctx->pc == 0x307670u) {
        ctx->pc = 0x307670u;
            // 0x307670: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x307674u;
        goto label_307674;
    }
    ctx->pc = 0x30766Cu;
    SET_GPR_U32(ctx, 31, 0x307674u);
    ctx->pc = 0x307670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30766Cu;
            // 0x307670: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303E10u;
    if (runtime->hasFunction(0x303E10u)) {
        auto targetFn = runtime->lookupFunction(0x303E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307674u; }
        if (ctx->pc != 0x307674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303E10_0x303e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307674u; }
        if (ctx->pc != 0x307674u) { return; }
    }
    ctx->pc = 0x307674u;
label_307674:
    // 0x307674: 0xc0c06b4  jal         func_301AD0
label_307678:
    if (ctx->pc == 0x307678u) {
        ctx->pc = 0x307678u;
            // 0x307678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30767Cu;
        goto label_30767c;
    }
    ctx->pc = 0x307674u;
    SET_GPR_U32(ctx, 31, 0x30767Cu);
    ctx->pc = 0x307678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307674u;
            // 0x307678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301AD0u;
    if (runtime->hasFunction(0x301AD0u)) {
        auto targetFn = runtime->lookupFunction(0x301AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30767Cu; }
        if (ctx->pc != 0x30767Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301AD0_0x301ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30767Cu; }
        if (ctx->pc != 0x30767Cu) { return; }
    }
    ctx->pc = 0x30767Cu;
label_30767c:
    // 0x30767c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30767cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_307680:
    // 0x307680: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x307680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_307684:
    // 0x307684: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x307684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_307688:
    // 0x307688: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x307688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30768c:
    // 0x30768c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30768cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_307690:
    // 0x307690: 0x3e00008  jr          $ra
label_307694:
    if (ctx->pc == 0x307694u) {
        ctx->pc = 0x307694u;
            // 0x307694: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x307698u;
        goto label_307698;
    }
    ctx->pc = 0x307690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307690u;
            // 0x307694: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307698u;
label_307698:
    // 0x307698: 0x0  nop
    ctx->pc = 0x307698u;
    // NOP
label_30769c:
    // 0x30769c: 0x0  nop
    ctx->pc = 0x30769cu;
    // NOP
label_3076a0:
    // 0x3076a0: 0x806838e  j           func_1A0E38
label_3076a4:
    if (ctx->pc == 0x3076A4u) {
        ctx->pc = 0x3076A4u;
            // 0x3076a4: 0x8c8401a0  lw          $a0, 0x1A0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 416)));
        ctx->pc = 0x3076A8u;
        goto label_3076a8;
    }
    ctx->pc = 0x3076A0u;
    ctx->pc = 0x3076A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3076A0u;
            // 0x3076a4: 0x8c8401a0  lw          $a0, 0x1A0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E38u;
    {
        auto targetFn = runtime->lookupFunction(0x1A0E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3076A8u;
label_3076a8:
    // 0x3076a8: 0x0  nop
    ctx->pc = 0x3076a8u;
    // NOP
label_3076ac:
    // 0x3076ac: 0x0  nop
    ctx->pc = 0x3076acu;
    // NOP
label_3076b0:
    // 0x3076b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3076b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3076b4:
    // 0x3076b4: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
label_3076b8:
    if (ctx->pc == 0x3076B8u) {
        ctx->pc = 0x3076B8u;
            // 0x3076b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x3076BCu;
        goto label_3076bc;
    }
    ctx->pc = 0x3076B4u;
    {
        const bool branch_taken_0x3076b4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3076B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3076B4u;
            // 0x3076b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3076b4) {
            ctx->pc = 0x3076C4u;
            goto label_3076c4;
        }
    }
    ctx->pc = 0x3076BCu;
label_3076bc:
    // 0x3076bc: 0xc0735ae  jal         func_1CD6B8
label_3076c0:
    if (ctx->pc == 0x3076C0u) {
        ctx->pc = 0x3076C0u;
            // 0x3076c0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3076C4u;
        goto label_3076c4;
    }
    ctx->pc = 0x3076BCu;
    SET_GPR_U32(ctx, 31, 0x3076C4u);
    ctx->pc = 0x3076C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3076BCu;
            // 0x3076c0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD6B8u;
    if (runtime->hasFunction(0x1CD6B8u)) {
        auto targetFn = runtime->lookupFunction(0x1CD6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3076C4u; }
        if (ctx->pc != 0x3076C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD6B8_0x1cd6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3076C4u; }
        if (ctx->pc != 0x3076C4u) { return; }
    }
    ctx->pc = 0x3076C4u;
label_3076c4:
    // 0x3076c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3076c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3076c8:
    // 0x3076c8: 0x3e00008  jr          $ra
label_3076cc:
    if (ctx->pc == 0x3076CCu) {
        ctx->pc = 0x3076CCu;
            // 0x3076cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3076D0u;
        goto label_3076d0;
    }
    ctx->pc = 0x3076C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3076CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3076C8u;
            // 0x3076cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3076D0u;
label_3076d0:
    // 0x3076d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3076d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3076d4:
    // 0x3076d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3076d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3076d8:
    // 0x3076d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3076d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3076dc:
    // 0x3076dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3076dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3076e0:
    // 0x3076e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3076e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3076e4:
    // 0x3076e4: 0xc07341e  jal         func_1CD078
label_3076e8:
    if (ctx->pc == 0x3076E8u) {
        ctx->pc = 0x3076E8u;
            // 0x3076e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3076ECu;
        goto label_3076ec;
    }
    ctx->pc = 0x3076E4u;
    SET_GPR_U32(ctx, 31, 0x3076ECu);
    ctx->pc = 0x3076E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3076E4u;
            // 0x3076e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD078u;
    if (runtime->hasFunction(0x1CD078u)) {
        auto targetFn = runtime->lookupFunction(0x1CD078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3076ECu; }
        if (ctx->pc != 0x3076ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD078_0x1cd078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3076ECu; }
        if (ctx->pc != 0x3076ECu) { return; }
    }
    ctx->pc = 0x3076ECu;
label_3076ec:
    // 0x3076ec: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_3076f0:
    if (ctx->pc == 0x3076F0u) {
        ctx->pc = 0x3076F0u;
            // 0x3076f0: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x3076F4u;
        goto label_3076f4;
    }
    ctx->pc = 0x3076ECu;
    {
        const bool branch_taken_0x3076ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3076F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3076ECu;
            // 0x3076f0: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3076ec) {
            ctx->pc = 0x307710u;
            goto label_307710;
        }
    }
    ctx->pc = 0x3076F4u;
label_3076f4:
    // 0x3076f4: 0xc073528  jal         func_1CD4A0
label_3076f8:
    if (ctx->pc == 0x3076F8u) {
        ctx->pc = 0x3076F8u;
            // 0x3076f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3076FCu;
        goto label_3076fc;
    }
    ctx->pc = 0x3076F4u;
    SET_GPR_U32(ctx, 31, 0x3076FCu);
    ctx->pc = 0x3076F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3076F4u;
            // 0x3076f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD4A0u;
    if (runtime->hasFunction(0x1CD4A0u)) {
        auto targetFn = runtime->lookupFunction(0x1CD4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3076FCu; }
        if (ctx->pc != 0x3076FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD4A0_0x1cd4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3076FCu; }
        if (ctx->pc != 0x3076FCu) { return; }
    }
    ctx->pc = 0x3076FCu;
label_3076fc:
    // 0x3076fc: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x3076fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_307700:
    // 0x307700: 0xc0c1dcc  jal         func_307730
label_307704:
    if (ctx->pc == 0x307704u) {
        ctx->pc = 0x307704u;
            // 0x307704: 0x26050318  addiu       $a1, $s0, 0x318 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 792));
        ctx->pc = 0x307708u;
        goto label_307708;
    }
    ctx->pc = 0x307700u;
    SET_GPR_U32(ctx, 31, 0x307708u);
    ctx->pc = 0x307704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307700u;
            // 0x307704: 0x26050318  addiu       $a1, $s0, 0x318 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307730u;
    if (runtime->hasFunction(0x307730u)) {
        auto targetFn = runtime->lookupFunction(0x307730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307708u; }
        if (ctx->pc != 0x307708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00307730_0x307730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307708u; }
        if (ctx->pc != 0x307708u) { return; }
    }
    ctx->pc = 0x307708u;
label_307708:
    // 0x307708: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x307708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30770c:
    // 0x30770c: 0xae020318  sw          $v0, 0x318($s0)
    ctx->pc = 0x30770cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 2));
label_307710:
    // 0x307710: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x307710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_307714:
    // 0x307714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x307714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_307718:
    // 0x307718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x307718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30771c:
    // 0x30771c: 0x3e00008  jr          $ra
label_307720:
    if (ctx->pc == 0x307720u) {
        ctx->pc = 0x307720u;
            // 0x307720: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x307724u;
        goto label_307724;
    }
    ctx->pc = 0x30771Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30771Cu;
            // 0x307720: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307724u;
label_307724:
    // 0x307724: 0x0  nop
    ctx->pc = 0x307724u;
    // NOP
label_307728:
    // 0x307728: 0x0  nop
    ctx->pc = 0x307728u;
    // NOP
label_30772c:
    // 0x30772c: 0x0  nop
    ctx->pc = 0x30772cu;
    // NOP
}
