#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E71A0
// Address: 0x2e71a0 - 0x2e7f20
void sub_002E71A0_0x2e71a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E71A0_0x2e71a0");
#endif

    switch (ctx->pc) {
        case 0x2e71a0u: goto label_2e71a0;
        case 0x2e71a4u: goto label_2e71a4;
        case 0x2e71a8u: goto label_2e71a8;
        case 0x2e71acu: goto label_2e71ac;
        case 0x2e71b0u: goto label_2e71b0;
        case 0x2e71b4u: goto label_2e71b4;
        case 0x2e71b8u: goto label_2e71b8;
        case 0x2e71bcu: goto label_2e71bc;
        case 0x2e71c0u: goto label_2e71c0;
        case 0x2e71c4u: goto label_2e71c4;
        case 0x2e71c8u: goto label_2e71c8;
        case 0x2e71ccu: goto label_2e71cc;
        case 0x2e71d0u: goto label_2e71d0;
        case 0x2e71d4u: goto label_2e71d4;
        case 0x2e71d8u: goto label_2e71d8;
        case 0x2e71dcu: goto label_2e71dc;
        case 0x2e71e0u: goto label_2e71e0;
        case 0x2e71e4u: goto label_2e71e4;
        case 0x2e71e8u: goto label_2e71e8;
        case 0x2e71ecu: goto label_2e71ec;
        case 0x2e71f0u: goto label_2e71f0;
        case 0x2e71f4u: goto label_2e71f4;
        case 0x2e71f8u: goto label_2e71f8;
        case 0x2e71fcu: goto label_2e71fc;
        case 0x2e7200u: goto label_2e7200;
        case 0x2e7204u: goto label_2e7204;
        case 0x2e7208u: goto label_2e7208;
        case 0x2e720cu: goto label_2e720c;
        case 0x2e7210u: goto label_2e7210;
        case 0x2e7214u: goto label_2e7214;
        case 0x2e7218u: goto label_2e7218;
        case 0x2e721cu: goto label_2e721c;
        case 0x2e7220u: goto label_2e7220;
        case 0x2e7224u: goto label_2e7224;
        case 0x2e7228u: goto label_2e7228;
        case 0x2e722cu: goto label_2e722c;
        case 0x2e7230u: goto label_2e7230;
        case 0x2e7234u: goto label_2e7234;
        case 0x2e7238u: goto label_2e7238;
        case 0x2e723cu: goto label_2e723c;
        case 0x2e7240u: goto label_2e7240;
        case 0x2e7244u: goto label_2e7244;
        case 0x2e7248u: goto label_2e7248;
        case 0x2e724cu: goto label_2e724c;
        case 0x2e7250u: goto label_2e7250;
        case 0x2e7254u: goto label_2e7254;
        case 0x2e7258u: goto label_2e7258;
        case 0x2e725cu: goto label_2e725c;
        case 0x2e7260u: goto label_2e7260;
        case 0x2e7264u: goto label_2e7264;
        case 0x2e7268u: goto label_2e7268;
        case 0x2e726cu: goto label_2e726c;
        case 0x2e7270u: goto label_2e7270;
        case 0x2e7274u: goto label_2e7274;
        case 0x2e7278u: goto label_2e7278;
        case 0x2e727cu: goto label_2e727c;
        case 0x2e7280u: goto label_2e7280;
        case 0x2e7284u: goto label_2e7284;
        case 0x2e7288u: goto label_2e7288;
        case 0x2e728cu: goto label_2e728c;
        case 0x2e7290u: goto label_2e7290;
        case 0x2e7294u: goto label_2e7294;
        case 0x2e7298u: goto label_2e7298;
        case 0x2e729cu: goto label_2e729c;
        case 0x2e72a0u: goto label_2e72a0;
        case 0x2e72a4u: goto label_2e72a4;
        case 0x2e72a8u: goto label_2e72a8;
        case 0x2e72acu: goto label_2e72ac;
        case 0x2e72b0u: goto label_2e72b0;
        case 0x2e72b4u: goto label_2e72b4;
        case 0x2e72b8u: goto label_2e72b8;
        case 0x2e72bcu: goto label_2e72bc;
        case 0x2e72c0u: goto label_2e72c0;
        case 0x2e72c4u: goto label_2e72c4;
        case 0x2e72c8u: goto label_2e72c8;
        case 0x2e72ccu: goto label_2e72cc;
        case 0x2e72d0u: goto label_2e72d0;
        case 0x2e72d4u: goto label_2e72d4;
        case 0x2e72d8u: goto label_2e72d8;
        case 0x2e72dcu: goto label_2e72dc;
        case 0x2e72e0u: goto label_2e72e0;
        case 0x2e72e4u: goto label_2e72e4;
        case 0x2e72e8u: goto label_2e72e8;
        case 0x2e72ecu: goto label_2e72ec;
        case 0x2e72f0u: goto label_2e72f0;
        case 0x2e72f4u: goto label_2e72f4;
        case 0x2e72f8u: goto label_2e72f8;
        case 0x2e72fcu: goto label_2e72fc;
        case 0x2e7300u: goto label_2e7300;
        case 0x2e7304u: goto label_2e7304;
        case 0x2e7308u: goto label_2e7308;
        case 0x2e730cu: goto label_2e730c;
        case 0x2e7310u: goto label_2e7310;
        case 0x2e7314u: goto label_2e7314;
        case 0x2e7318u: goto label_2e7318;
        case 0x2e731cu: goto label_2e731c;
        case 0x2e7320u: goto label_2e7320;
        case 0x2e7324u: goto label_2e7324;
        case 0x2e7328u: goto label_2e7328;
        case 0x2e732cu: goto label_2e732c;
        case 0x2e7330u: goto label_2e7330;
        case 0x2e7334u: goto label_2e7334;
        case 0x2e7338u: goto label_2e7338;
        case 0x2e733cu: goto label_2e733c;
        case 0x2e7340u: goto label_2e7340;
        case 0x2e7344u: goto label_2e7344;
        case 0x2e7348u: goto label_2e7348;
        case 0x2e734cu: goto label_2e734c;
        case 0x2e7350u: goto label_2e7350;
        case 0x2e7354u: goto label_2e7354;
        case 0x2e7358u: goto label_2e7358;
        case 0x2e735cu: goto label_2e735c;
        case 0x2e7360u: goto label_2e7360;
        case 0x2e7364u: goto label_2e7364;
        case 0x2e7368u: goto label_2e7368;
        case 0x2e736cu: goto label_2e736c;
        case 0x2e7370u: goto label_2e7370;
        case 0x2e7374u: goto label_2e7374;
        case 0x2e7378u: goto label_2e7378;
        case 0x2e737cu: goto label_2e737c;
        case 0x2e7380u: goto label_2e7380;
        case 0x2e7384u: goto label_2e7384;
        case 0x2e7388u: goto label_2e7388;
        case 0x2e738cu: goto label_2e738c;
        case 0x2e7390u: goto label_2e7390;
        case 0x2e7394u: goto label_2e7394;
        case 0x2e7398u: goto label_2e7398;
        case 0x2e739cu: goto label_2e739c;
        case 0x2e73a0u: goto label_2e73a0;
        case 0x2e73a4u: goto label_2e73a4;
        case 0x2e73a8u: goto label_2e73a8;
        case 0x2e73acu: goto label_2e73ac;
        case 0x2e73b0u: goto label_2e73b0;
        case 0x2e73b4u: goto label_2e73b4;
        case 0x2e73b8u: goto label_2e73b8;
        case 0x2e73bcu: goto label_2e73bc;
        case 0x2e73c0u: goto label_2e73c0;
        case 0x2e73c4u: goto label_2e73c4;
        case 0x2e73c8u: goto label_2e73c8;
        case 0x2e73ccu: goto label_2e73cc;
        case 0x2e73d0u: goto label_2e73d0;
        case 0x2e73d4u: goto label_2e73d4;
        case 0x2e73d8u: goto label_2e73d8;
        case 0x2e73dcu: goto label_2e73dc;
        case 0x2e73e0u: goto label_2e73e0;
        case 0x2e73e4u: goto label_2e73e4;
        case 0x2e73e8u: goto label_2e73e8;
        case 0x2e73ecu: goto label_2e73ec;
        case 0x2e73f0u: goto label_2e73f0;
        case 0x2e73f4u: goto label_2e73f4;
        case 0x2e73f8u: goto label_2e73f8;
        case 0x2e73fcu: goto label_2e73fc;
        case 0x2e7400u: goto label_2e7400;
        case 0x2e7404u: goto label_2e7404;
        case 0x2e7408u: goto label_2e7408;
        case 0x2e740cu: goto label_2e740c;
        case 0x2e7410u: goto label_2e7410;
        case 0x2e7414u: goto label_2e7414;
        case 0x2e7418u: goto label_2e7418;
        case 0x2e741cu: goto label_2e741c;
        case 0x2e7420u: goto label_2e7420;
        case 0x2e7424u: goto label_2e7424;
        case 0x2e7428u: goto label_2e7428;
        case 0x2e742cu: goto label_2e742c;
        case 0x2e7430u: goto label_2e7430;
        case 0x2e7434u: goto label_2e7434;
        case 0x2e7438u: goto label_2e7438;
        case 0x2e743cu: goto label_2e743c;
        case 0x2e7440u: goto label_2e7440;
        case 0x2e7444u: goto label_2e7444;
        case 0x2e7448u: goto label_2e7448;
        case 0x2e744cu: goto label_2e744c;
        case 0x2e7450u: goto label_2e7450;
        case 0x2e7454u: goto label_2e7454;
        case 0x2e7458u: goto label_2e7458;
        case 0x2e745cu: goto label_2e745c;
        case 0x2e7460u: goto label_2e7460;
        case 0x2e7464u: goto label_2e7464;
        case 0x2e7468u: goto label_2e7468;
        case 0x2e746cu: goto label_2e746c;
        case 0x2e7470u: goto label_2e7470;
        case 0x2e7474u: goto label_2e7474;
        case 0x2e7478u: goto label_2e7478;
        case 0x2e747cu: goto label_2e747c;
        case 0x2e7480u: goto label_2e7480;
        case 0x2e7484u: goto label_2e7484;
        case 0x2e7488u: goto label_2e7488;
        case 0x2e748cu: goto label_2e748c;
        case 0x2e7490u: goto label_2e7490;
        case 0x2e7494u: goto label_2e7494;
        case 0x2e7498u: goto label_2e7498;
        case 0x2e749cu: goto label_2e749c;
        case 0x2e74a0u: goto label_2e74a0;
        case 0x2e74a4u: goto label_2e74a4;
        case 0x2e74a8u: goto label_2e74a8;
        case 0x2e74acu: goto label_2e74ac;
        case 0x2e74b0u: goto label_2e74b0;
        case 0x2e74b4u: goto label_2e74b4;
        case 0x2e74b8u: goto label_2e74b8;
        case 0x2e74bcu: goto label_2e74bc;
        case 0x2e74c0u: goto label_2e74c0;
        case 0x2e74c4u: goto label_2e74c4;
        case 0x2e74c8u: goto label_2e74c8;
        case 0x2e74ccu: goto label_2e74cc;
        case 0x2e74d0u: goto label_2e74d0;
        case 0x2e74d4u: goto label_2e74d4;
        case 0x2e74d8u: goto label_2e74d8;
        case 0x2e74dcu: goto label_2e74dc;
        case 0x2e74e0u: goto label_2e74e0;
        case 0x2e74e4u: goto label_2e74e4;
        case 0x2e74e8u: goto label_2e74e8;
        case 0x2e74ecu: goto label_2e74ec;
        case 0x2e74f0u: goto label_2e74f0;
        case 0x2e74f4u: goto label_2e74f4;
        case 0x2e74f8u: goto label_2e74f8;
        case 0x2e74fcu: goto label_2e74fc;
        case 0x2e7500u: goto label_2e7500;
        case 0x2e7504u: goto label_2e7504;
        case 0x2e7508u: goto label_2e7508;
        case 0x2e750cu: goto label_2e750c;
        case 0x2e7510u: goto label_2e7510;
        case 0x2e7514u: goto label_2e7514;
        case 0x2e7518u: goto label_2e7518;
        case 0x2e751cu: goto label_2e751c;
        case 0x2e7520u: goto label_2e7520;
        case 0x2e7524u: goto label_2e7524;
        case 0x2e7528u: goto label_2e7528;
        case 0x2e752cu: goto label_2e752c;
        case 0x2e7530u: goto label_2e7530;
        case 0x2e7534u: goto label_2e7534;
        case 0x2e7538u: goto label_2e7538;
        case 0x2e753cu: goto label_2e753c;
        case 0x2e7540u: goto label_2e7540;
        case 0x2e7544u: goto label_2e7544;
        case 0x2e7548u: goto label_2e7548;
        case 0x2e754cu: goto label_2e754c;
        case 0x2e7550u: goto label_2e7550;
        case 0x2e7554u: goto label_2e7554;
        case 0x2e7558u: goto label_2e7558;
        case 0x2e755cu: goto label_2e755c;
        case 0x2e7560u: goto label_2e7560;
        case 0x2e7564u: goto label_2e7564;
        case 0x2e7568u: goto label_2e7568;
        case 0x2e756cu: goto label_2e756c;
        case 0x2e7570u: goto label_2e7570;
        case 0x2e7574u: goto label_2e7574;
        case 0x2e7578u: goto label_2e7578;
        case 0x2e757cu: goto label_2e757c;
        case 0x2e7580u: goto label_2e7580;
        case 0x2e7584u: goto label_2e7584;
        case 0x2e7588u: goto label_2e7588;
        case 0x2e758cu: goto label_2e758c;
        case 0x2e7590u: goto label_2e7590;
        case 0x2e7594u: goto label_2e7594;
        case 0x2e7598u: goto label_2e7598;
        case 0x2e759cu: goto label_2e759c;
        case 0x2e75a0u: goto label_2e75a0;
        case 0x2e75a4u: goto label_2e75a4;
        case 0x2e75a8u: goto label_2e75a8;
        case 0x2e75acu: goto label_2e75ac;
        case 0x2e75b0u: goto label_2e75b0;
        case 0x2e75b4u: goto label_2e75b4;
        case 0x2e75b8u: goto label_2e75b8;
        case 0x2e75bcu: goto label_2e75bc;
        case 0x2e75c0u: goto label_2e75c0;
        case 0x2e75c4u: goto label_2e75c4;
        case 0x2e75c8u: goto label_2e75c8;
        case 0x2e75ccu: goto label_2e75cc;
        case 0x2e75d0u: goto label_2e75d0;
        case 0x2e75d4u: goto label_2e75d4;
        case 0x2e75d8u: goto label_2e75d8;
        case 0x2e75dcu: goto label_2e75dc;
        case 0x2e75e0u: goto label_2e75e0;
        case 0x2e75e4u: goto label_2e75e4;
        case 0x2e75e8u: goto label_2e75e8;
        case 0x2e75ecu: goto label_2e75ec;
        case 0x2e75f0u: goto label_2e75f0;
        case 0x2e75f4u: goto label_2e75f4;
        case 0x2e75f8u: goto label_2e75f8;
        case 0x2e75fcu: goto label_2e75fc;
        case 0x2e7600u: goto label_2e7600;
        case 0x2e7604u: goto label_2e7604;
        case 0x2e7608u: goto label_2e7608;
        case 0x2e760cu: goto label_2e760c;
        case 0x2e7610u: goto label_2e7610;
        case 0x2e7614u: goto label_2e7614;
        case 0x2e7618u: goto label_2e7618;
        case 0x2e761cu: goto label_2e761c;
        case 0x2e7620u: goto label_2e7620;
        case 0x2e7624u: goto label_2e7624;
        case 0x2e7628u: goto label_2e7628;
        case 0x2e762cu: goto label_2e762c;
        case 0x2e7630u: goto label_2e7630;
        case 0x2e7634u: goto label_2e7634;
        case 0x2e7638u: goto label_2e7638;
        case 0x2e763cu: goto label_2e763c;
        case 0x2e7640u: goto label_2e7640;
        case 0x2e7644u: goto label_2e7644;
        case 0x2e7648u: goto label_2e7648;
        case 0x2e764cu: goto label_2e764c;
        case 0x2e7650u: goto label_2e7650;
        case 0x2e7654u: goto label_2e7654;
        case 0x2e7658u: goto label_2e7658;
        case 0x2e765cu: goto label_2e765c;
        case 0x2e7660u: goto label_2e7660;
        case 0x2e7664u: goto label_2e7664;
        case 0x2e7668u: goto label_2e7668;
        case 0x2e766cu: goto label_2e766c;
        case 0x2e7670u: goto label_2e7670;
        case 0x2e7674u: goto label_2e7674;
        case 0x2e7678u: goto label_2e7678;
        case 0x2e767cu: goto label_2e767c;
        case 0x2e7680u: goto label_2e7680;
        case 0x2e7684u: goto label_2e7684;
        case 0x2e7688u: goto label_2e7688;
        case 0x2e768cu: goto label_2e768c;
        case 0x2e7690u: goto label_2e7690;
        case 0x2e7694u: goto label_2e7694;
        case 0x2e7698u: goto label_2e7698;
        case 0x2e769cu: goto label_2e769c;
        case 0x2e76a0u: goto label_2e76a0;
        case 0x2e76a4u: goto label_2e76a4;
        case 0x2e76a8u: goto label_2e76a8;
        case 0x2e76acu: goto label_2e76ac;
        case 0x2e76b0u: goto label_2e76b0;
        case 0x2e76b4u: goto label_2e76b4;
        case 0x2e76b8u: goto label_2e76b8;
        case 0x2e76bcu: goto label_2e76bc;
        case 0x2e76c0u: goto label_2e76c0;
        case 0x2e76c4u: goto label_2e76c4;
        case 0x2e76c8u: goto label_2e76c8;
        case 0x2e76ccu: goto label_2e76cc;
        case 0x2e76d0u: goto label_2e76d0;
        case 0x2e76d4u: goto label_2e76d4;
        case 0x2e76d8u: goto label_2e76d8;
        case 0x2e76dcu: goto label_2e76dc;
        case 0x2e76e0u: goto label_2e76e0;
        case 0x2e76e4u: goto label_2e76e4;
        case 0x2e76e8u: goto label_2e76e8;
        case 0x2e76ecu: goto label_2e76ec;
        case 0x2e76f0u: goto label_2e76f0;
        case 0x2e76f4u: goto label_2e76f4;
        case 0x2e76f8u: goto label_2e76f8;
        case 0x2e76fcu: goto label_2e76fc;
        case 0x2e7700u: goto label_2e7700;
        case 0x2e7704u: goto label_2e7704;
        case 0x2e7708u: goto label_2e7708;
        case 0x2e770cu: goto label_2e770c;
        case 0x2e7710u: goto label_2e7710;
        case 0x2e7714u: goto label_2e7714;
        case 0x2e7718u: goto label_2e7718;
        case 0x2e771cu: goto label_2e771c;
        case 0x2e7720u: goto label_2e7720;
        case 0x2e7724u: goto label_2e7724;
        case 0x2e7728u: goto label_2e7728;
        case 0x2e772cu: goto label_2e772c;
        case 0x2e7730u: goto label_2e7730;
        case 0x2e7734u: goto label_2e7734;
        case 0x2e7738u: goto label_2e7738;
        case 0x2e773cu: goto label_2e773c;
        case 0x2e7740u: goto label_2e7740;
        case 0x2e7744u: goto label_2e7744;
        case 0x2e7748u: goto label_2e7748;
        case 0x2e774cu: goto label_2e774c;
        case 0x2e7750u: goto label_2e7750;
        case 0x2e7754u: goto label_2e7754;
        case 0x2e7758u: goto label_2e7758;
        case 0x2e775cu: goto label_2e775c;
        case 0x2e7760u: goto label_2e7760;
        case 0x2e7764u: goto label_2e7764;
        case 0x2e7768u: goto label_2e7768;
        case 0x2e776cu: goto label_2e776c;
        case 0x2e7770u: goto label_2e7770;
        case 0x2e7774u: goto label_2e7774;
        case 0x2e7778u: goto label_2e7778;
        case 0x2e777cu: goto label_2e777c;
        case 0x2e7780u: goto label_2e7780;
        case 0x2e7784u: goto label_2e7784;
        case 0x2e7788u: goto label_2e7788;
        case 0x2e778cu: goto label_2e778c;
        case 0x2e7790u: goto label_2e7790;
        case 0x2e7794u: goto label_2e7794;
        case 0x2e7798u: goto label_2e7798;
        case 0x2e779cu: goto label_2e779c;
        case 0x2e77a0u: goto label_2e77a0;
        case 0x2e77a4u: goto label_2e77a4;
        case 0x2e77a8u: goto label_2e77a8;
        case 0x2e77acu: goto label_2e77ac;
        case 0x2e77b0u: goto label_2e77b0;
        case 0x2e77b4u: goto label_2e77b4;
        case 0x2e77b8u: goto label_2e77b8;
        case 0x2e77bcu: goto label_2e77bc;
        case 0x2e77c0u: goto label_2e77c0;
        case 0x2e77c4u: goto label_2e77c4;
        case 0x2e77c8u: goto label_2e77c8;
        case 0x2e77ccu: goto label_2e77cc;
        case 0x2e77d0u: goto label_2e77d0;
        case 0x2e77d4u: goto label_2e77d4;
        case 0x2e77d8u: goto label_2e77d8;
        case 0x2e77dcu: goto label_2e77dc;
        case 0x2e77e0u: goto label_2e77e0;
        case 0x2e77e4u: goto label_2e77e4;
        case 0x2e77e8u: goto label_2e77e8;
        case 0x2e77ecu: goto label_2e77ec;
        case 0x2e77f0u: goto label_2e77f0;
        case 0x2e77f4u: goto label_2e77f4;
        case 0x2e77f8u: goto label_2e77f8;
        case 0x2e77fcu: goto label_2e77fc;
        case 0x2e7800u: goto label_2e7800;
        case 0x2e7804u: goto label_2e7804;
        case 0x2e7808u: goto label_2e7808;
        case 0x2e780cu: goto label_2e780c;
        case 0x2e7810u: goto label_2e7810;
        case 0x2e7814u: goto label_2e7814;
        case 0x2e7818u: goto label_2e7818;
        case 0x2e781cu: goto label_2e781c;
        case 0x2e7820u: goto label_2e7820;
        case 0x2e7824u: goto label_2e7824;
        case 0x2e7828u: goto label_2e7828;
        case 0x2e782cu: goto label_2e782c;
        case 0x2e7830u: goto label_2e7830;
        case 0x2e7834u: goto label_2e7834;
        case 0x2e7838u: goto label_2e7838;
        case 0x2e783cu: goto label_2e783c;
        case 0x2e7840u: goto label_2e7840;
        case 0x2e7844u: goto label_2e7844;
        case 0x2e7848u: goto label_2e7848;
        case 0x2e784cu: goto label_2e784c;
        case 0x2e7850u: goto label_2e7850;
        case 0x2e7854u: goto label_2e7854;
        case 0x2e7858u: goto label_2e7858;
        case 0x2e785cu: goto label_2e785c;
        case 0x2e7860u: goto label_2e7860;
        case 0x2e7864u: goto label_2e7864;
        case 0x2e7868u: goto label_2e7868;
        case 0x2e786cu: goto label_2e786c;
        case 0x2e7870u: goto label_2e7870;
        case 0x2e7874u: goto label_2e7874;
        case 0x2e7878u: goto label_2e7878;
        case 0x2e787cu: goto label_2e787c;
        case 0x2e7880u: goto label_2e7880;
        case 0x2e7884u: goto label_2e7884;
        case 0x2e7888u: goto label_2e7888;
        case 0x2e788cu: goto label_2e788c;
        case 0x2e7890u: goto label_2e7890;
        case 0x2e7894u: goto label_2e7894;
        case 0x2e7898u: goto label_2e7898;
        case 0x2e789cu: goto label_2e789c;
        case 0x2e78a0u: goto label_2e78a0;
        case 0x2e78a4u: goto label_2e78a4;
        case 0x2e78a8u: goto label_2e78a8;
        case 0x2e78acu: goto label_2e78ac;
        case 0x2e78b0u: goto label_2e78b0;
        case 0x2e78b4u: goto label_2e78b4;
        case 0x2e78b8u: goto label_2e78b8;
        case 0x2e78bcu: goto label_2e78bc;
        case 0x2e78c0u: goto label_2e78c0;
        case 0x2e78c4u: goto label_2e78c4;
        case 0x2e78c8u: goto label_2e78c8;
        case 0x2e78ccu: goto label_2e78cc;
        case 0x2e78d0u: goto label_2e78d0;
        case 0x2e78d4u: goto label_2e78d4;
        case 0x2e78d8u: goto label_2e78d8;
        case 0x2e78dcu: goto label_2e78dc;
        case 0x2e78e0u: goto label_2e78e0;
        case 0x2e78e4u: goto label_2e78e4;
        case 0x2e78e8u: goto label_2e78e8;
        case 0x2e78ecu: goto label_2e78ec;
        case 0x2e78f0u: goto label_2e78f0;
        case 0x2e78f4u: goto label_2e78f4;
        case 0x2e78f8u: goto label_2e78f8;
        case 0x2e78fcu: goto label_2e78fc;
        case 0x2e7900u: goto label_2e7900;
        case 0x2e7904u: goto label_2e7904;
        case 0x2e7908u: goto label_2e7908;
        case 0x2e790cu: goto label_2e790c;
        case 0x2e7910u: goto label_2e7910;
        case 0x2e7914u: goto label_2e7914;
        case 0x2e7918u: goto label_2e7918;
        case 0x2e791cu: goto label_2e791c;
        case 0x2e7920u: goto label_2e7920;
        case 0x2e7924u: goto label_2e7924;
        case 0x2e7928u: goto label_2e7928;
        case 0x2e792cu: goto label_2e792c;
        case 0x2e7930u: goto label_2e7930;
        case 0x2e7934u: goto label_2e7934;
        case 0x2e7938u: goto label_2e7938;
        case 0x2e793cu: goto label_2e793c;
        case 0x2e7940u: goto label_2e7940;
        case 0x2e7944u: goto label_2e7944;
        case 0x2e7948u: goto label_2e7948;
        case 0x2e794cu: goto label_2e794c;
        case 0x2e7950u: goto label_2e7950;
        case 0x2e7954u: goto label_2e7954;
        case 0x2e7958u: goto label_2e7958;
        case 0x2e795cu: goto label_2e795c;
        case 0x2e7960u: goto label_2e7960;
        case 0x2e7964u: goto label_2e7964;
        case 0x2e7968u: goto label_2e7968;
        case 0x2e796cu: goto label_2e796c;
        case 0x2e7970u: goto label_2e7970;
        case 0x2e7974u: goto label_2e7974;
        case 0x2e7978u: goto label_2e7978;
        case 0x2e797cu: goto label_2e797c;
        case 0x2e7980u: goto label_2e7980;
        case 0x2e7984u: goto label_2e7984;
        case 0x2e7988u: goto label_2e7988;
        case 0x2e798cu: goto label_2e798c;
        case 0x2e7990u: goto label_2e7990;
        case 0x2e7994u: goto label_2e7994;
        case 0x2e7998u: goto label_2e7998;
        case 0x2e799cu: goto label_2e799c;
        case 0x2e79a0u: goto label_2e79a0;
        case 0x2e79a4u: goto label_2e79a4;
        case 0x2e79a8u: goto label_2e79a8;
        case 0x2e79acu: goto label_2e79ac;
        case 0x2e79b0u: goto label_2e79b0;
        case 0x2e79b4u: goto label_2e79b4;
        case 0x2e79b8u: goto label_2e79b8;
        case 0x2e79bcu: goto label_2e79bc;
        case 0x2e79c0u: goto label_2e79c0;
        case 0x2e79c4u: goto label_2e79c4;
        case 0x2e79c8u: goto label_2e79c8;
        case 0x2e79ccu: goto label_2e79cc;
        case 0x2e79d0u: goto label_2e79d0;
        case 0x2e79d4u: goto label_2e79d4;
        case 0x2e79d8u: goto label_2e79d8;
        case 0x2e79dcu: goto label_2e79dc;
        case 0x2e79e0u: goto label_2e79e0;
        case 0x2e79e4u: goto label_2e79e4;
        case 0x2e79e8u: goto label_2e79e8;
        case 0x2e79ecu: goto label_2e79ec;
        case 0x2e79f0u: goto label_2e79f0;
        case 0x2e79f4u: goto label_2e79f4;
        case 0x2e79f8u: goto label_2e79f8;
        case 0x2e79fcu: goto label_2e79fc;
        case 0x2e7a00u: goto label_2e7a00;
        case 0x2e7a04u: goto label_2e7a04;
        case 0x2e7a08u: goto label_2e7a08;
        case 0x2e7a0cu: goto label_2e7a0c;
        case 0x2e7a10u: goto label_2e7a10;
        case 0x2e7a14u: goto label_2e7a14;
        case 0x2e7a18u: goto label_2e7a18;
        case 0x2e7a1cu: goto label_2e7a1c;
        case 0x2e7a20u: goto label_2e7a20;
        case 0x2e7a24u: goto label_2e7a24;
        case 0x2e7a28u: goto label_2e7a28;
        case 0x2e7a2cu: goto label_2e7a2c;
        case 0x2e7a30u: goto label_2e7a30;
        case 0x2e7a34u: goto label_2e7a34;
        case 0x2e7a38u: goto label_2e7a38;
        case 0x2e7a3cu: goto label_2e7a3c;
        case 0x2e7a40u: goto label_2e7a40;
        case 0x2e7a44u: goto label_2e7a44;
        case 0x2e7a48u: goto label_2e7a48;
        case 0x2e7a4cu: goto label_2e7a4c;
        case 0x2e7a50u: goto label_2e7a50;
        case 0x2e7a54u: goto label_2e7a54;
        case 0x2e7a58u: goto label_2e7a58;
        case 0x2e7a5cu: goto label_2e7a5c;
        case 0x2e7a60u: goto label_2e7a60;
        case 0x2e7a64u: goto label_2e7a64;
        case 0x2e7a68u: goto label_2e7a68;
        case 0x2e7a6cu: goto label_2e7a6c;
        case 0x2e7a70u: goto label_2e7a70;
        case 0x2e7a74u: goto label_2e7a74;
        case 0x2e7a78u: goto label_2e7a78;
        case 0x2e7a7cu: goto label_2e7a7c;
        case 0x2e7a80u: goto label_2e7a80;
        case 0x2e7a84u: goto label_2e7a84;
        case 0x2e7a88u: goto label_2e7a88;
        case 0x2e7a8cu: goto label_2e7a8c;
        case 0x2e7a90u: goto label_2e7a90;
        case 0x2e7a94u: goto label_2e7a94;
        case 0x2e7a98u: goto label_2e7a98;
        case 0x2e7a9cu: goto label_2e7a9c;
        case 0x2e7aa0u: goto label_2e7aa0;
        case 0x2e7aa4u: goto label_2e7aa4;
        case 0x2e7aa8u: goto label_2e7aa8;
        case 0x2e7aacu: goto label_2e7aac;
        case 0x2e7ab0u: goto label_2e7ab0;
        case 0x2e7ab4u: goto label_2e7ab4;
        case 0x2e7ab8u: goto label_2e7ab8;
        case 0x2e7abcu: goto label_2e7abc;
        case 0x2e7ac0u: goto label_2e7ac0;
        case 0x2e7ac4u: goto label_2e7ac4;
        case 0x2e7ac8u: goto label_2e7ac8;
        case 0x2e7accu: goto label_2e7acc;
        case 0x2e7ad0u: goto label_2e7ad0;
        case 0x2e7ad4u: goto label_2e7ad4;
        case 0x2e7ad8u: goto label_2e7ad8;
        case 0x2e7adcu: goto label_2e7adc;
        case 0x2e7ae0u: goto label_2e7ae0;
        case 0x2e7ae4u: goto label_2e7ae4;
        case 0x2e7ae8u: goto label_2e7ae8;
        case 0x2e7aecu: goto label_2e7aec;
        case 0x2e7af0u: goto label_2e7af0;
        case 0x2e7af4u: goto label_2e7af4;
        case 0x2e7af8u: goto label_2e7af8;
        case 0x2e7afcu: goto label_2e7afc;
        case 0x2e7b00u: goto label_2e7b00;
        case 0x2e7b04u: goto label_2e7b04;
        case 0x2e7b08u: goto label_2e7b08;
        case 0x2e7b0cu: goto label_2e7b0c;
        case 0x2e7b10u: goto label_2e7b10;
        case 0x2e7b14u: goto label_2e7b14;
        case 0x2e7b18u: goto label_2e7b18;
        case 0x2e7b1cu: goto label_2e7b1c;
        case 0x2e7b20u: goto label_2e7b20;
        case 0x2e7b24u: goto label_2e7b24;
        case 0x2e7b28u: goto label_2e7b28;
        case 0x2e7b2cu: goto label_2e7b2c;
        case 0x2e7b30u: goto label_2e7b30;
        case 0x2e7b34u: goto label_2e7b34;
        case 0x2e7b38u: goto label_2e7b38;
        case 0x2e7b3cu: goto label_2e7b3c;
        case 0x2e7b40u: goto label_2e7b40;
        case 0x2e7b44u: goto label_2e7b44;
        case 0x2e7b48u: goto label_2e7b48;
        case 0x2e7b4cu: goto label_2e7b4c;
        case 0x2e7b50u: goto label_2e7b50;
        case 0x2e7b54u: goto label_2e7b54;
        case 0x2e7b58u: goto label_2e7b58;
        case 0x2e7b5cu: goto label_2e7b5c;
        case 0x2e7b60u: goto label_2e7b60;
        case 0x2e7b64u: goto label_2e7b64;
        case 0x2e7b68u: goto label_2e7b68;
        case 0x2e7b6cu: goto label_2e7b6c;
        case 0x2e7b70u: goto label_2e7b70;
        case 0x2e7b74u: goto label_2e7b74;
        case 0x2e7b78u: goto label_2e7b78;
        case 0x2e7b7cu: goto label_2e7b7c;
        case 0x2e7b80u: goto label_2e7b80;
        case 0x2e7b84u: goto label_2e7b84;
        case 0x2e7b88u: goto label_2e7b88;
        case 0x2e7b8cu: goto label_2e7b8c;
        case 0x2e7b90u: goto label_2e7b90;
        case 0x2e7b94u: goto label_2e7b94;
        case 0x2e7b98u: goto label_2e7b98;
        case 0x2e7b9cu: goto label_2e7b9c;
        case 0x2e7ba0u: goto label_2e7ba0;
        case 0x2e7ba4u: goto label_2e7ba4;
        case 0x2e7ba8u: goto label_2e7ba8;
        case 0x2e7bacu: goto label_2e7bac;
        case 0x2e7bb0u: goto label_2e7bb0;
        case 0x2e7bb4u: goto label_2e7bb4;
        case 0x2e7bb8u: goto label_2e7bb8;
        case 0x2e7bbcu: goto label_2e7bbc;
        case 0x2e7bc0u: goto label_2e7bc0;
        case 0x2e7bc4u: goto label_2e7bc4;
        case 0x2e7bc8u: goto label_2e7bc8;
        case 0x2e7bccu: goto label_2e7bcc;
        case 0x2e7bd0u: goto label_2e7bd0;
        case 0x2e7bd4u: goto label_2e7bd4;
        case 0x2e7bd8u: goto label_2e7bd8;
        case 0x2e7bdcu: goto label_2e7bdc;
        case 0x2e7be0u: goto label_2e7be0;
        case 0x2e7be4u: goto label_2e7be4;
        case 0x2e7be8u: goto label_2e7be8;
        case 0x2e7becu: goto label_2e7bec;
        case 0x2e7bf0u: goto label_2e7bf0;
        case 0x2e7bf4u: goto label_2e7bf4;
        case 0x2e7bf8u: goto label_2e7bf8;
        case 0x2e7bfcu: goto label_2e7bfc;
        case 0x2e7c00u: goto label_2e7c00;
        case 0x2e7c04u: goto label_2e7c04;
        case 0x2e7c08u: goto label_2e7c08;
        case 0x2e7c0cu: goto label_2e7c0c;
        case 0x2e7c10u: goto label_2e7c10;
        case 0x2e7c14u: goto label_2e7c14;
        case 0x2e7c18u: goto label_2e7c18;
        case 0x2e7c1cu: goto label_2e7c1c;
        case 0x2e7c20u: goto label_2e7c20;
        case 0x2e7c24u: goto label_2e7c24;
        case 0x2e7c28u: goto label_2e7c28;
        case 0x2e7c2cu: goto label_2e7c2c;
        case 0x2e7c30u: goto label_2e7c30;
        case 0x2e7c34u: goto label_2e7c34;
        case 0x2e7c38u: goto label_2e7c38;
        case 0x2e7c3cu: goto label_2e7c3c;
        case 0x2e7c40u: goto label_2e7c40;
        case 0x2e7c44u: goto label_2e7c44;
        case 0x2e7c48u: goto label_2e7c48;
        case 0x2e7c4cu: goto label_2e7c4c;
        case 0x2e7c50u: goto label_2e7c50;
        case 0x2e7c54u: goto label_2e7c54;
        case 0x2e7c58u: goto label_2e7c58;
        case 0x2e7c5cu: goto label_2e7c5c;
        case 0x2e7c60u: goto label_2e7c60;
        case 0x2e7c64u: goto label_2e7c64;
        case 0x2e7c68u: goto label_2e7c68;
        case 0x2e7c6cu: goto label_2e7c6c;
        case 0x2e7c70u: goto label_2e7c70;
        case 0x2e7c74u: goto label_2e7c74;
        case 0x2e7c78u: goto label_2e7c78;
        case 0x2e7c7cu: goto label_2e7c7c;
        case 0x2e7c80u: goto label_2e7c80;
        case 0x2e7c84u: goto label_2e7c84;
        case 0x2e7c88u: goto label_2e7c88;
        case 0x2e7c8cu: goto label_2e7c8c;
        case 0x2e7c90u: goto label_2e7c90;
        case 0x2e7c94u: goto label_2e7c94;
        case 0x2e7c98u: goto label_2e7c98;
        case 0x2e7c9cu: goto label_2e7c9c;
        case 0x2e7ca0u: goto label_2e7ca0;
        case 0x2e7ca4u: goto label_2e7ca4;
        case 0x2e7ca8u: goto label_2e7ca8;
        case 0x2e7cacu: goto label_2e7cac;
        case 0x2e7cb0u: goto label_2e7cb0;
        case 0x2e7cb4u: goto label_2e7cb4;
        case 0x2e7cb8u: goto label_2e7cb8;
        case 0x2e7cbcu: goto label_2e7cbc;
        case 0x2e7cc0u: goto label_2e7cc0;
        case 0x2e7cc4u: goto label_2e7cc4;
        case 0x2e7cc8u: goto label_2e7cc8;
        case 0x2e7cccu: goto label_2e7ccc;
        case 0x2e7cd0u: goto label_2e7cd0;
        case 0x2e7cd4u: goto label_2e7cd4;
        case 0x2e7cd8u: goto label_2e7cd8;
        case 0x2e7cdcu: goto label_2e7cdc;
        case 0x2e7ce0u: goto label_2e7ce0;
        case 0x2e7ce4u: goto label_2e7ce4;
        case 0x2e7ce8u: goto label_2e7ce8;
        case 0x2e7cecu: goto label_2e7cec;
        case 0x2e7cf0u: goto label_2e7cf0;
        case 0x2e7cf4u: goto label_2e7cf4;
        case 0x2e7cf8u: goto label_2e7cf8;
        case 0x2e7cfcu: goto label_2e7cfc;
        case 0x2e7d00u: goto label_2e7d00;
        case 0x2e7d04u: goto label_2e7d04;
        case 0x2e7d08u: goto label_2e7d08;
        case 0x2e7d0cu: goto label_2e7d0c;
        case 0x2e7d10u: goto label_2e7d10;
        case 0x2e7d14u: goto label_2e7d14;
        case 0x2e7d18u: goto label_2e7d18;
        case 0x2e7d1cu: goto label_2e7d1c;
        case 0x2e7d20u: goto label_2e7d20;
        case 0x2e7d24u: goto label_2e7d24;
        case 0x2e7d28u: goto label_2e7d28;
        case 0x2e7d2cu: goto label_2e7d2c;
        case 0x2e7d30u: goto label_2e7d30;
        case 0x2e7d34u: goto label_2e7d34;
        case 0x2e7d38u: goto label_2e7d38;
        case 0x2e7d3cu: goto label_2e7d3c;
        case 0x2e7d40u: goto label_2e7d40;
        case 0x2e7d44u: goto label_2e7d44;
        case 0x2e7d48u: goto label_2e7d48;
        case 0x2e7d4cu: goto label_2e7d4c;
        case 0x2e7d50u: goto label_2e7d50;
        case 0x2e7d54u: goto label_2e7d54;
        case 0x2e7d58u: goto label_2e7d58;
        case 0x2e7d5cu: goto label_2e7d5c;
        case 0x2e7d60u: goto label_2e7d60;
        case 0x2e7d64u: goto label_2e7d64;
        case 0x2e7d68u: goto label_2e7d68;
        case 0x2e7d6cu: goto label_2e7d6c;
        case 0x2e7d70u: goto label_2e7d70;
        case 0x2e7d74u: goto label_2e7d74;
        case 0x2e7d78u: goto label_2e7d78;
        case 0x2e7d7cu: goto label_2e7d7c;
        case 0x2e7d80u: goto label_2e7d80;
        case 0x2e7d84u: goto label_2e7d84;
        case 0x2e7d88u: goto label_2e7d88;
        case 0x2e7d8cu: goto label_2e7d8c;
        case 0x2e7d90u: goto label_2e7d90;
        case 0x2e7d94u: goto label_2e7d94;
        case 0x2e7d98u: goto label_2e7d98;
        case 0x2e7d9cu: goto label_2e7d9c;
        case 0x2e7da0u: goto label_2e7da0;
        case 0x2e7da4u: goto label_2e7da4;
        case 0x2e7da8u: goto label_2e7da8;
        case 0x2e7dacu: goto label_2e7dac;
        case 0x2e7db0u: goto label_2e7db0;
        case 0x2e7db4u: goto label_2e7db4;
        case 0x2e7db8u: goto label_2e7db8;
        case 0x2e7dbcu: goto label_2e7dbc;
        case 0x2e7dc0u: goto label_2e7dc0;
        case 0x2e7dc4u: goto label_2e7dc4;
        case 0x2e7dc8u: goto label_2e7dc8;
        case 0x2e7dccu: goto label_2e7dcc;
        case 0x2e7dd0u: goto label_2e7dd0;
        case 0x2e7dd4u: goto label_2e7dd4;
        case 0x2e7dd8u: goto label_2e7dd8;
        case 0x2e7ddcu: goto label_2e7ddc;
        case 0x2e7de0u: goto label_2e7de0;
        case 0x2e7de4u: goto label_2e7de4;
        case 0x2e7de8u: goto label_2e7de8;
        case 0x2e7decu: goto label_2e7dec;
        case 0x2e7df0u: goto label_2e7df0;
        case 0x2e7df4u: goto label_2e7df4;
        case 0x2e7df8u: goto label_2e7df8;
        case 0x2e7dfcu: goto label_2e7dfc;
        case 0x2e7e00u: goto label_2e7e00;
        case 0x2e7e04u: goto label_2e7e04;
        case 0x2e7e08u: goto label_2e7e08;
        case 0x2e7e0cu: goto label_2e7e0c;
        case 0x2e7e10u: goto label_2e7e10;
        case 0x2e7e14u: goto label_2e7e14;
        case 0x2e7e18u: goto label_2e7e18;
        case 0x2e7e1cu: goto label_2e7e1c;
        case 0x2e7e20u: goto label_2e7e20;
        case 0x2e7e24u: goto label_2e7e24;
        case 0x2e7e28u: goto label_2e7e28;
        case 0x2e7e2cu: goto label_2e7e2c;
        case 0x2e7e30u: goto label_2e7e30;
        case 0x2e7e34u: goto label_2e7e34;
        case 0x2e7e38u: goto label_2e7e38;
        case 0x2e7e3cu: goto label_2e7e3c;
        case 0x2e7e40u: goto label_2e7e40;
        case 0x2e7e44u: goto label_2e7e44;
        case 0x2e7e48u: goto label_2e7e48;
        case 0x2e7e4cu: goto label_2e7e4c;
        case 0x2e7e50u: goto label_2e7e50;
        case 0x2e7e54u: goto label_2e7e54;
        case 0x2e7e58u: goto label_2e7e58;
        case 0x2e7e5cu: goto label_2e7e5c;
        case 0x2e7e60u: goto label_2e7e60;
        case 0x2e7e64u: goto label_2e7e64;
        case 0x2e7e68u: goto label_2e7e68;
        case 0x2e7e6cu: goto label_2e7e6c;
        case 0x2e7e70u: goto label_2e7e70;
        case 0x2e7e74u: goto label_2e7e74;
        case 0x2e7e78u: goto label_2e7e78;
        case 0x2e7e7cu: goto label_2e7e7c;
        case 0x2e7e80u: goto label_2e7e80;
        case 0x2e7e84u: goto label_2e7e84;
        case 0x2e7e88u: goto label_2e7e88;
        case 0x2e7e8cu: goto label_2e7e8c;
        case 0x2e7e90u: goto label_2e7e90;
        case 0x2e7e94u: goto label_2e7e94;
        case 0x2e7e98u: goto label_2e7e98;
        case 0x2e7e9cu: goto label_2e7e9c;
        case 0x2e7ea0u: goto label_2e7ea0;
        case 0x2e7ea4u: goto label_2e7ea4;
        case 0x2e7ea8u: goto label_2e7ea8;
        case 0x2e7eacu: goto label_2e7eac;
        case 0x2e7eb0u: goto label_2e7eb0;
        case 0x2e7eb4u: goto label_2e7eb4;
        case 0x2e7eb8u: goto label_2e7eb8;
        case 0x2e7ebcu: goto label_2e7ebc;
        case 0x2e7ec0u: goto label_2e7ec0;
        case 0x2e7ec4u: goto label_2e7ec4;
        case 0x2e7ec8u: goto label_2e7ec8;
        case 0x2e7eccu: goto label_2e7ecc;
        case 0x2e7ed0u: goto label_2e7ed0;
        case 0x2e7ed4u: goto label_2e7ed4;
        case 0x2e7ed8u: goto label_2e7ed8;
        case 0x2e7edcu: goto label_2e7edc;
        case 0x2e7ee0u: goto label_2e7ee0;
        case 0x2e7ee4u: goto label_2e7ee4;
        case 0x2e7ee8u: goto label_2e7ee8;
        case 0x2e7eecu: goto label_2e7eec;
        case 0x2e7ef0u: goto label_2e7ef0;
        case 0x2e7ef4u: goto label_2e7ef4;
        case 0x2e7ef8u: goto label_2e7ef8;
        case 0x2e7efcu: goto label_2e7efc;
        case 0x2e7f00u: goto label_2e7f00;
        case 0x2e7f04u: goto label_2e7f04;
        case 0x2e7f08u: goto label_2e7f08;
        case 0x2e7f0cu: goto label_2e7f0c;
        case 0x2e7f10u: goto label_2e7f10;
        case 0x2e7f14u: goto label_2e7f14;
        case 0x2e7f18u: goto label_2e7f18;
        case 0x2e7f1cu: goto label_2e7f1c;
        default: break;
    }

    ctx->pc = 0x2e71a0u;

label_2e71a0:
    // 0x2e71a0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2e71a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_2e71a4:
    // 0x2e71a4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2e71a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2e71a8:
    // 0x2e71a8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2e71a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_2e71ac:
    // 0x2e71ac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2e71acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2e71b0:
    // 0x2e71b0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e71b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2e71b4:
    // 0x2e71b4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e71b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2e71b8:
    // 0x2e71b8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2e71b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e71bc:
    // 0x2e71bc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e71bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2e71c0:
    // 0x2e71c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e71c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e71c4:
    // 0x2e71c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e71c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2e71c8:
    // 0x2e71c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e71c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2e71cc:
    // 0x2e71cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e71ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2e71d0:
    // 0x2e71d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e71d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2e71d4:
    // 0x2e71d4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2e71d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2e71d8:
    // 0x2e71d8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e71d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2e71dc:
    // 0x2e71dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e71dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2e71e0:
    // 0x2e71e0: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x2e71e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
label_2e71e4:
    // 0x2e71e4: 0x8c9400f0  lw          $s4, 0xF0($a0)
    ctx->pc = 0x2e71e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_2e71e8:
    // 0x2e71e8: 0x94660006  lhu         $a2, 0x6($v1)
    ctx->pc = 0x2e71e8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_2e71ec:
    // 0x2e71ec: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x2e71ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2e71f0:
    // 0x2e71f0: 0x8c840104  lw          $a0, 0x104($a0)
    ctx->pc = 0x2e71f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_2e71f4:
    // 0x2e71f4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2e71f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2e71f8:
    // 0x2e71f8: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2e71f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2e71fc:
    // 0x2e71fc: 0x30a30008  andi        $v1, $a1, 0x8
    ctx->pc = 0x2e71fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_2e7200:
    // 0x2e7200: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2e7200u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2e7204:
    // 0x2e7204: 0x3b82a  slt         $s7, $zero, $v1
    ctx->pc = 0x2e7204u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2e7208:
    // 0x2e7208: 0x2869821  addu        $s3, $s4, $a2
    ctx->pc = 0x2e7208u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_2e720c:
    // 0x2e720c: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x2e720cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_2e7210:
    // 0x2e7210: 0x3f02a  slt         $fp, $zero, $v1
    ctx->pc = 0x2e7210u;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2e7214:
    // 0x2e7214: 0x30a30040  andi        $v1, $a1, 0x40
    ctx->pc = 0x2e7214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
label_2e7218:
    // 0x2e7218: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x2e7218u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2e721c:
    // 0x2e721c: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x2e721cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_2e7220:
    // 0x2e7220: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x2e7220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_2e7224:
    // 0x2e7224: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x2e7224u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2e7228:
    // 0x2e7228: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x2e7228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_2e722c:
    // 0x2e722c: 0x30a30800  andi        $v1, $a1, 0x800
    ctx->pc = 0x2e722cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
label_2e7230:
    // 0x2e7230: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x2e7230u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2e7234:
    // 0x2e7234: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x2e7234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_2e7238:
    // 0x2e7238: 0x30a31000  andi        $v1, $a1, 0x1000
    ctx->pc = 0x2e7238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
label_2e723c:
    // 0x2e723c: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x2e723cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2e7240:
    // 0x2e7240: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2e7244:
    if (ctx->pc == 0x2E7244u) {
        ctx->pc = 0x2E7244u;
            // 0x2e7244: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->pc = 0x2E7248u;
        goto label_2e7248;
    }
    ctx->pc = 0x2E7240u;
    {
        const bool branch_taken_0x2e7240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7240u;
            // 0x2e7244: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7240) {
            ctx->pc = 0x2E7250u;
            goto label_2e7250;
        }
    }
    ctx->pc = 0x2E7248u;
label_2e7248:
    // 0x2e7248: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x2e7248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_2e724c:
    // 0x2e724c: 0x3b02a  slt         $s6, $zero, $v1
    ctx->pc = 0x2e724cu;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2e7250:
    // 0x2e7250: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2e7250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2e7254:
    // 0x2e7254: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e7254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7258:
    // 0x2e7258: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x2e7258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_2e725c:
    // 0x2e725c: 0xc4740018  lwc1        $f20, 0x18($v1)
    ctx->pc = 0x2e725cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e7260:
    // 0x2e7260: 0x86830034  lh          $v1, 0x34($s4)
    ctx->pc = 0x2e7260u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 52)));
label_2e7264:
    // 0x2e7264: 0x186000e4  blez        $v1, . + 4 + (0xE4 << 2)
label_2e7268:
    if (ctx->pc == 0x2E7268u) {
        ctx->pc = 0x2E726Cu;
        goto label_2e726c;
    }
    ctx->pc = 0x2E7264u;
    {
        const bool branch_taken_0x2e7264 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2e7264) {
            ctx->pc = 0x2E75F8u;
            goto label_2e75f8;
        }
    }
    ctx->pc = 0x2E726Cu;
label_2e726c:
    // 0x2e726c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e726cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7270:
    // 0x2e7270: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2e7270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2e7274:
    // 0x2e7274: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2e7274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_2e7278:
    // 0x2e7278: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e7278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e727c:
    // 0x2e727c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2e727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7280:
    // 0x2e7280: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e7280u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2e7284:
    // 0x2e7284: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7284u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e7288:
    // 0x2e7288: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e7288u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2e728c:
    // 0x2e728c: 0x0  nop
    ctx->pc = 0x2e728cu;
    // NOP
label_2e7290:
    // 0x2e7290: 0xa6820034  sh          $v0, 0x34($s4)
    ctx->pc = 0x2e7290u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 52), (uint16_t)GPR_U32(ctx, 2));
label_2e7294:
    // 0x2e7294: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2e7294u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2e7298:
    // 0x2e7298: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_2e729c:
    if (ctx->pc == 0x2E729Cu) {
        ctx->pc = 0x2E72A0u;
        goto label_2e72a0;
    }
    ctx->pc = 0x2E7298u;
    {
        const bool branch_taken_0x2e7298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7298) {
            ctx->pc = 0x2E7370u;
            goto label_2e7370;
        }
    }
    ctx->pc = 0x2E72A0u;
label_2e72a0:
    // 0x2e72a0: 0x86820038  lh          $v0, 0x38($s4)
    ctx->pc = 0x2e72a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 56)));
label_2e72a4:
    // 0x2e72a4: 0x86830034  lh          $v1, 0x34($s4)
    ctx->pc = 0x2e72a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 52)));
label_2e72a8:
    // 0x2e72a8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e72a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2e72ac:
    // 0x2e72ac: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2e72acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2e72b0:
    // 0x2e72b0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_2e72b4:
    if (ctx->pc == 0x2E72B4u) {
        ctx->pc = 0x2E72B8u;
        goto label_2e72b8;
    }
    ctx->pc = 0x2E72B0u;
    {
        const bool branch_taken_0x2e72b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e72b0) {
            ctx->pc = 0x2E7318u;
            goto label_2e7318;
        }
    }
    ctx->pc = 0x2E72B8u;
label_2e72b8:
    // 0x2e72b8: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x2e72b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e72bc:
    // 0x2e72bc: 0xc6a100c0  lwc1        $f1, 0xC0($s5)
    ctx->pc = 0x2e72bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e72c0:
    // 0x2e72c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e72c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e72c4:
    // 0x2e72c4: 0x0  nop
    ctx->pc = 0x2e72c4u;
    // NOP
label_2e72c8:
    // 0x2e72c8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e72c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e72cc:
    // 0x2e72cc: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2e72ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e72d0:
    // 0x2e72d0: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x2e72d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_2e72d4:
    // 0x2e72d4: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x2e72d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e72d8:
    // 0x2e72d8: 0xc6a100c4  lwc1        $f1, 0xC4($s5)
    ctx->pc = 0x2e72d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e72dc:
    // 0x2e72dc: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e72dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e72e0:
    // 0x2e72e0: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2e72e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e72e4:
    // 0x2e72e4: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x2e72e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_2e72e8:
    // 0x2e72e8: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x2e72e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e72ec:
    // 0x2e72ec: 0xc6a100c8  lwc1        $f1, 0xC8($s5)
    ctx->pc = 0x2e72ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e72f0:
    // 0x2e72f0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e72f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e72f4:
    // 0x2e72f4: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2e72f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e72f8:
    // 0x2e72f8: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x2e72f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_2e72fc:
    // 0x2e72fc: 0xc680002c  lwc1        $f0, 0x2C($s4)
    ctx->pc = 0x2e72fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7300:
    // 0x2e7300: 0xc6a100cc  lwc1        $f1, 0xCC($s5)
    ctx->pc = 0x2e7300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7304:
    // 0x2e7304: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e7304u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e7308:
    // 0x2e7308: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2e7308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e730c:
    // 0x2e730c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2e7310:
    if (ctx->pc == 0x2E7310u) {
        ctx->pc = 0x2E7310u;
            // 0x2e7310: 0xe680002c  swc1        $f0, 0x2C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
        ctx->pc = 0x2E7314u;
        goto label_2e7314;
    }
    ctx->pc = 0x2E730Cu;
    {
        const bool branch_taken_0x2e730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E730Cu;
            // 0x2e7310: 0xe680002c  swc1        $f0, 0x2C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e730c) {
            ctx->pc = 0x2E73C8u;
            goto label_2e73c8;
        }
    }
    ctx->pc = 0x2E7314u;
label_2e7314:
    // 0x2e7314: 0x0  nop
    ctx->pc = 0x2e7314u;
    // NOP
label_2e7318:
    // 0x2e7318: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x2e7318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e731c:
    // 0x2e731c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e731cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e7320:
    // 0x2e7320: 0xc6a100c0  lwc1        $f1, 0xC0($s5)
    ctx->pc = 0x2e7320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7324:
    // 0x2e7324: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e7324u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e7328:
    // 0x2e7328: 0x4614081d  msub.s      $f0, $f1, $f20
    ctx->pc = 0x2e7328u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e732c:
    // 0x2e732c: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x2e732cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_2e7330:
    // 0x2e7330: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x2e7330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7334:
    // 0x2e7334: 0xc6a100c4  lwc1        $f1, 0xC4($s5)
    ctx->pc = 0x2e7334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7338:
    // 0x2e7338: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e7338u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e733c:
    // 0x2e733c: 0x4614081d  msub.s      $f0, $f1, $f20
    ctx->pc = 0x2e733cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e7340:
    // 0x2e7340: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x2e7340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_2e7344:
    // 0x2e7344: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x2e7344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7348:
    // 0x2e7348: 0xc6a100c8  lwc1        $f1, 0xC8($s5)
    ctx->pc = 0x2e7348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e734c:
    // 0x2e734c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e734cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e7350:
    // 0x2e7350: 0x4614081d  msub.s      $f0, $f1, $f20
    ctx->pc = 0x2e7350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e7354:
    // 0x2e7354: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x2e7354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_2e7358:
    // 0x2e7358: 0xc680002c  lwc1        $f0, 0x2C($s4)
    ctx->pc = 0x2e7358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e735c:
    // 0x2e735c: 0xc6a100cc  lwc1        $f1, 0xCC($s5)
    ctx->pc = 0x2e735cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7360:
    // 0x2e7360: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e7360u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e7364:
    // 0x2e7364: 0x4614081d  msub.s      $f0, $f1, $f20
    ctx->pc = 0x2e7364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e7368:
    // 0x2e7368: 0x10000017  b           . + 4 + (0x17 << 2)
label_2e736c:
    if (ctx->pc == 0x2E736Cu) {
        ctx->pc = 0x2E736Cu;
            // 0x2e736c: 0xe680002c  swc1        $f0, 0x2C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
        ctx->pc = 0x2E7370u;
        goto label_2e7370;
    }
    ctx->pc = 0x2E7368u;
    {
        const bool branch_taken_0x2e7368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E736Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7368u;
            // 0x2e736c: 0xe680002c  swc1        $f0, 0x2C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7368) {
            ctx->pc = 0x2E73C8u;
            goto label_2e73c8;
        }
    }
    ctx->pc = 0x2E7370u;
label_2e7370:
    // 0x2e7370: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x2e7370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7374:
    // 0x2e7374: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e7374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e7378:
    // 0x2e7378: 0xc6a100c0  lwc1        $f1, 0xC0($s5)
    ctx->pc = 0x2e7378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e737c:
    // 0x2e737c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e737cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e7380:
    // 0x2e7380: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2e7380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e7384:
    // 0x2e7384: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x2e7384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_2e7388:
    // 0x2e7388: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x2e7388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e738c:
    // 0x2e738c: 0xc6a100c4  lwc1        $f1, 0xC4($s5)
    ctx->pc = 0x2e738cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7390:
    // 0x2e7390: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e7390u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e7394:
    // 0x2e7394: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2e7394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e7398:
    // 0x2e7398: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x2e7398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_2e739c:
    // 0x2e739c: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x2e739cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e73a0:
    // 0x2e73a0: 0xc6a100c8  lwc1        $f1, 0xC8($s5)
    ctx->pc = 0x2e73a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e73a4:
    // 0x2e73a4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e73a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e73a8:
    // 0x2e73a8: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2e73a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e73ac:
    // 0x2e73ac: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x2e73acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_2e73b0:
    // 0x2e73b0: 0xc680002c  lwc1        $f0, 0x2C($s4)
    ctx->pc = 0x2e73b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e73b4:
    // 0x2e73b4: 0xc6a100cc  lwc1        $f1, 0xCC($s5)
    ctx->pc = 0x2e73b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e73b8:
    // 0x2e73b8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e73b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e73bc:
    // 0x2e73bc: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2e73bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e73c0:
    // 0x2e73c0: 0xe680002c  swc1        $f0, 0x2C($s4)
    ctx->pc = 0x2e73c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
label_2e73c4:
    // 0x2e73c4: 0x0  nop
    ctx->pc = 0x2e73c4u;
    // NOP
label_2e73c8:
    // 0x2e73c8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e73c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2e73cc:
    // 0x2e73cc: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x2e73ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e73d0:
    // 0x2e73d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e73d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e73d4:
    // 0x2e73d4: 0x0  nop
    ctx->pc = 0x2e73d4u;
    // NOP
label_2e73d8:
    // 0x2e73d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e73d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e73dc:
    // 0x2e73dc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_2e73e0:
    if (ctx->pc == 0x2E73E0u) {
        ctx->pc = 0x2E73E0u;
            // 0x2e73e0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2E73E4u;
        goto label_2e73e4;
    }
    ctx->pc = 0x2E73DCu;
    {
        const bool branch_taken_0x2e73dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e73dc) {
            ctx->pc = 0x2E73E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E73DCu;
            // 0x2e73e0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E73F4u;
            goto label_2e73f4;
        }
    }
    ctx->pc = 0x2E73E4u;
label_2e73e4:
    // 0x2e73e4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e73e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e73e8:
    // 0x2e73e8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e73e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e73ec:
    // 0x2e73ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_2e73f0:
    if (ctx->pc == 0x2E73F0u) {
        ctx->pc = 0x2E73F0u;
            // 0x2e73f0: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2E73F4u;
        goto label_2e73f4;
    }
    ctx->pc = 0x2E73ECu;
    {
        const bool branch_taken_0x2e73ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E73F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E73ECu;
            // 0x2e73f0: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e73ec) {
            ctx->pc = 0x2E740Cu;
            goto label_2e740c;
        }
    }
    ctx->pc = 0x2E73F4u;
label_2e73f4:
    // 0x2e73f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2e73f8:
    // 0x2e73f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e73f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e73fc:
    // 0x2e73fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e73fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e7400:
    // 0x2e7400: 0x0  nop
    ctx->pc = 0x2e7400u;
    // NOP
label_2e7404:
    // 0x2e7404: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e7404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e7408:
    // 0x2e7408: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e7408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e740c:
    // 0x2e740c: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x2e740cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7410:
    // 0x2e7410: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e7410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2e7414:
    // 0x2e7414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7418:
    // 0x2e7418: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e7418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e741c:
    // 0x2e741c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e741cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e7420:
    // 0x2e7420: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2e7424:
    if (ctx->pc == 0x2E7424u) {
        ctx->pc = 0x2E7424u;
            // 0x2e7424: 0x32600  sll         $a0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->pc = 0x2E7428u;
        goto label_2e7428;
    }
    ctx->pc = 0x2E7420u;
    {
        const bool branch_taken_0x2e7420 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E7424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7420u;
            // 0x2e7424: 0x32600  sll         $a0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7420) {
            ctx->pc = 0x2E7438u;
            goto label_2e7438;
        }
    }
    ctx->pc = 0x2E7428u;
label_2e7428:
    // 0x2e7428: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7428u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e742c:
    // 0x2e742c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e742cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e7430:
    // 0x2e7430: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e7434:
    if (ctx->pc == 0x2E7434u) {
        ctx->pc = 0x2E7434u;
            // 0x2e7434: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2E7438u;
        goto label_2e7438;
    }
    ctx->pc = 0x2E7430u;
    {
        const bool branch_taken_0x2e7430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7430u;
            // 0x2e7434: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7430) {
            ctx->pc = 0x2E7454u;
            goto label_2e7454;
        }
    }
    ctx->pc = 0x2E7438u;
label_2e7438:
    // 0x2e7438: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e7438u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e743c:
    // 0x2e743c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e743cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2e7440:
    // 0x2e7440: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7440u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e7444:
    // 0x2e7444: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e7444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e7448:
    // 0x2e7448: 0x0  nop
    ctx->pc = 0x2e7448u;
    // NOP
label_2e744c:
    // 0x2e744c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e744cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e7450:
    // 0x2e7450: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e7450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e7454:
    // 0x2e7454: 0xc6810028  lwc1        $f1, 0x28($s4)
    ctx->pc = 0x2e7454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7458:
    // 0x2e7458: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e7458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2e745c:
    // 0x2e745c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e745cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7460:
    // 0x2e7460: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e7460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e7464:
    // 0x2e7464: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e7464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2e7468:
    // 0x2e7468: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e7468u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e746c:
    // 0x2e746c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2e7470:
    if (ctx->pc == 0x2E7470u) {
        ctx->pc = 0x2E7470u;
            // 0x2e7470: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->pc = 0x2E7474u;
        goto label_2e7474;
    }
    ctx->pc = 0x2E746Cu;
    {
        const bool branch_taken_0x2e746c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E7470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E746Cu;
            // 0x2e7470: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e746c) {
            ctx->pc = 0x2E7484u;
            goto label_2e7484;
        }
    }
    ctx->pc = 0x2E7474u;
label_2e7474:
    // 0x2e7474: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7474u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e7478:
    // 0x2e7478: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e7478u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e747c:
    // 0x2e747c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e7480:
    if (ctx->pc == 0x2E7480u) {
        ctx->pc = 0x2E7480u;
            // 0x2e7480: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2E7484u;
        goto label_2e7484;
    }
    ctx->pc = 0x2E747Cu;
    {
        const bool branch_taken_0x2e747c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E747Cu;
            // 0x2e7480: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e747c) {
            ctx->pc = 0x2E74A0u;
            goto label_2e74a0;
        }
    }
    ctx->pc = 0x2E7484u;
label_2e7484:
    // 0x2e7484: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e7484u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e7488:
    // 0x2e7488: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e7488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2e748c:
    // 0x2e748c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e748cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e7490:
    // 0x2e7490: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e7490u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e7494:
    // 0x2e7494: 0x0  nop
    ctx->pc = 0x2e7494u;
    // NOP
label_2e7498:
    // 0x2e7498: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e7498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e749c:
    // 0x2e749c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e749cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e74a0:
    // 0x2e74a0: 0xc681002c  lwc1        $f1, 0x2C($s4)
    ctx->pc = 0x2e74a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e74a4:
    // 0x2e74a4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e74a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2e74a8:
    // 0x2e74a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e74a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e74ac:
    // 0x2e74ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e74acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e74b0:
    // 0x2e74b0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2e74b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2e74b4:
    // 0x2e74b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e74b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e74b8:
    // 0x2e74b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2e74bc:
    if (ctx->pc == 0x2E74BCu) {
        ctx->pc = 0x2E74BCu;
            // 0x2e74bc: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->pc = 0x2E74C0u;
        goto label_2e74c0;
    }
    ctx->pc = 0x2E74B8u;
    {
        const bool branch_taken_0x2e74b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E74BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E74B8u;
            // 0x2e74bc: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e74b8) {
            ctx->pc = 0x2E74D0u;
            goto label_2e74d0;
        }
    }
    ctx->pc = 0x2E74C0u;
label_2e74c0:
    // 0x2e74c0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e74c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e74c4:
    // 0x2e74c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e74c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e74c8:
    // 0x2e74c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e74cc:
    if (ctx->pc == 0x2E74CCu) {
        ctx->pc = 0x2E74CCu;
            // 0x2e74cc: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2E74D0u;
        goto label_2e74d0;
    }
    ctx->pc = 0x2E74C8u;
    {
        const bool branch_taken_0x2e74c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E74CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E74C8u;
            // 0x2e74cc: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e74c8) {
            ctx->pc = 0x2E74ECu;
            goto label_2e74ec;
        }
    }
    ctx->pc = 0x2E74D0u;
label_2e74d0:
    // 0x2e74d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e74d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e74d4:
    // 0x2e74d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e74d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2e74d8:
    // 0x2e74d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e74d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e74dc:
    // 0x2e74dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e74dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e74e0:
    // 0x2e74e0: 0x0  nop
    ctx->pc = 0x2e74e0u;
    // NOP
label_2e74e4:
    // 0x2e74e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e74e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e74e8:
    // 0x2e74e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e74e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e74ec:
    // 0x2e74ec: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2e74ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e74f0:
    // 0x2e74f0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e74f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2e74f4:
    // 0x2e74f4: 0x12e00020  beqz        $s7, . + 4 + (0x20 << 2)
label_2e74f8:
    if (ctx->pc == 0x2E74F8u) {
        ctx->pc = 0x2E74F8u;
            // 0x2e74f8: 0xae820030  sw          $v0, 0x30($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x2E74FCu;
        goto label_2e74fc;
    }
    ctx->pc = 0x2E74F4u;
    {
        const bool branch_taken_0x2e74f4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E74F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E74F4u;
            // 0x2e74f8: 0xae820030  sw          $v0, 0x30($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e74f4) {
            ctx->pc = 0x2E7578u;
            goto label_2e7578;
        }
    }
    ctx->pc = 0x2E74FCu;
label_2e74fc:
    // 0x2e74fc: 0xc6800048  lwc1        $f0, 0x48($s4)
    ctx->pc = 0x2e74fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7500:
    // 0x2e7500: 0xc6810054  lwc1        $f1, 0x54($s4)
    ctx->pc = 0x2e7500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7504:
    // 0x2e7504: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e7504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e7508:
    // 0x2e7508: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e7508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e750c:
    // 0x2e750c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e750cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2e7510:
    // 0x2e7510: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e7510u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e7514:
    // 0x2e7514: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2e7514u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e7518:
    // 0x2e7518: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7518u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e751c:
    // 0x2e751c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e751cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2e7520:
    // 0x2e7520: 0x0  nop
    ctx->pc = 0x2e7520u;
    // NOP
label_2e7524:
    // 0x2e7524: 0xae820048  sw          $v0, 0x48($s4)
    ctx->pc = 0x2e7524u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 2));
label_2e7528:
    // 0x2e7528: 0xc680004c  lwc1        $f0, 0x4C($s4)
    ctx->pc = 0x2e7528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e752c:
    // 0x2e752c: 0xc6810058  lwc1        $f1, 0x58($s4)
    ctx->pc = 0x2e752cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7530:
    // 0x2e7530: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e7530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e7534:
    // 0x2e7534: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e7534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2e7538:
    // 0x2e7538: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e7538u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e753c:
    // 0x2e753c: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2e753cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e7540:
    // 0x2e7540: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7540u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e7544:
    // 0x2e7544: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e7544u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2e7548:
    // 0x2e7548: 0x0  nop
    ctx->pc = 0x2e7548u;
    // NOP
label_2e754c:
    // 0x2e754c: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x2e754cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_2e7550:
    // 0x2e7550: 0xc6800050  lwc1        $f0, 0x50($s4)
    ctx->pc = 0x2e7550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7554:
    // 0x2e7554: 0xc681005c  lwc1        $f1, 0x5C($s4)
    ctx->pc = 0x2e7554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7558:
    // 0x2e7558: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e7558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e755c:
    // 0x2e755c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e755cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2e7560:
    // 0x2e7560: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e7560u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e7564:
    // 0x2e7564: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2e7564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e7568:
    // 0x2e7568: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7568u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e756c:
    // 0x2e756c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e756cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2e7570:
    // 0x2e7570: 0x0  nop
    ctx->pc = 0x2e7570u;
    // NOP
label_2e7574:
    // 0x2e7574: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x2e7574u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_2e7578:
    // 0x2e7578: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2e7578u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2e757c:
    // 0x2e757c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2e7580:
    if (ctx->pc == 0x2E7580u) {
        ctx->pc = 0x2E7584u;
        goto label_2e7584;
    }
    ctx->pc = 0x2E757Cu;
    {
        const bool branch_taken_0x2e757c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e757c) {
            ctx->pc = 0x2E75C8u;
            goto label_2e75c8;
        }
    }
    ctx->pc = 0x2E7584u;
label_2e7584:
    // 0x2e7584: 0xc680003c  lwc1        $f0, 0x3C($s4)
    ctx->pc = 0x2e7584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7588:
    // 0x2e7588: 0xc6a100e0  lwc1        $f1, 0xE0($s5)
    ctx->pc = 0x2e7588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e758c:
    // 0x2e758c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e758cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e7590:
    // 0x2e7590: 0x0  nop
    ctx->pc = 0x2e7590u;
    // NOP
label_2e7594:
    // 0x2e7594: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e7594u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e7598:
    // 0x2e7598: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2e7598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e759c:
    // 0x2e759c: 0xe680003c  swc1        $f0, 0x3C($s4)
    ctx->pc = 0x2e759cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_2e75a0:
    // 0x2e75a0: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x2e75a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e75a4:
    // 0x2e75a4: 0xc6a100e4  lwc1        $f1, 0xE4($s5)
    ctx->pc = 0x2e75a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e75a8:
    // 0x2e75a8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e75a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e75ac:
    // 0x2e75ac: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2e75acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e75b0:
    // 0x2e75b0: 0xe6800040  swc1        $f0, 0x40($s4)
    ctx->pc = 0x2e75b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 64), bits); }
label_2e75b4:
    // 0x2e75b4: 0xc6800044  lwc1        $f0, 0x44($s4)
    ctx->pc = 0x2e75b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e75b8:
    // 0x2e75b8: 0xc6a100e8  lwc1        $f1, 0xE8($s5)
    ctx->pc = 0x2e75b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e75bc:
    // 0x2e75bc: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x2e75bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e75c0:
    // 0x2e75c0: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x2e75c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_2e75c4:
    // 0x2e75c4: 0xe6800044  swc1        $f0, 0x44($s4)
    ctx->pc = 0x2e75c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 68), bits); }
label_2e75c8:
    // 0x2e75c8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2e75c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e75cc:
    // 0x2e75cc: 0x8ea80104  lw          $t0, 0x104($s5)
    ctx->pc = 0x2e75ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
label_2e75d0:
    // 0x2e75d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e75d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e75d4:
    // 0x2e75d4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2e75d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2e75d8:
    // 0x2e75d8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e75d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e75dc:
    // 0x2e75dc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2e75dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2e75e0:
    // 0x2e75e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e75e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e75e4:
    // 0x2e75e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e75e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2e75e8:
    // 0x2e75e8: 0x320f809  jalr        $t9
label_2e75ec:
    if (ctx->pc == 0x2E75ECu) {
        ctx->pc = 0x2E75ECu;
            // 0x2e75ec: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E75F0u;
        goto label_2e75f0;
    }
    ctx->pc = 0x2E75E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E75F0u);
        ctx->pc = 0x2E75ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E75E8u;
            // 0x2e75ec: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E75F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E75F0u; }
            if (ctx->pc != 0x2E75F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2E75F0u;
label_2e75f0:
    // 0x2e75f0: 0x10000235  b           . + 4 + (0x235 << 2)
label_2e75f4:
    if (ctx->pc == 0x2E75F4u) {
        ctx->pc = 0x2E75F8u;
        goto label_2e75f8;
    }
    ctx->pc = 0x2E75F0u;
    {
        const bool branch_taken_0x2e75f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e75f0) {
            ctx->pc = 0x2E7EC8u;
            goto label_2e7ec8;
        }
    }
    ctx->pc = 0x2E75F8u;
label_2e75f8:
    // 0x2e75f8: 0x86830036  lh          $v1, 0x36($s4)
    ctx->pc = 0x2e75f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 54)));
label_2e75fc:
    // 0x2e75fc: 0x4600232  bltz        $v1, . + 4 + (0x232 << 2)
label_2e7600:
    if (ctx->pc == 0x2E7600u) {
        ctx->pc = 0x2E7604u;
        goto label_2e7604;
    }
    ctx->pc = 0x2E75FCu;
    {
        const bool branch_taken_0x2e75fc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2e75fc) {
            ctx->pc = 0x2E7EC8u;
            goto label_2e7ec8;
        }
    }
    ctx->pc = 0x2E7604u;
label_2e7604:
    // 0x2e7604: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x2e7604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2e7608:
    // 0x2e7608: 0xa6840036  sh          $a0, 0x36($s4)
    ctx->pc = 0x2e7608u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 54), (uint16_t)GPR_U32(ctx, 4));
label_2e760c:
    // 0x2e760c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e760cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e7610:
    // 0x2e7610: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2e7610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2e7614:
    // 0x2e7614: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2e7614u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2e7618:
    // 0x2e7618: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_2e761c:
    if (ctx->pc == 0x2E761Cu) {
        ctx->pc = 0x2E7620u;
        goto label_2e7620;
    }
    ctx->pc = 0x2E7618u;
    {
        const bool branch_taken_0x2e7618 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e7618) {
            ctx->pc = 0x2E7630u;
            goto label_2e7630;
        }
    }
    ctx->pc = 0x2E7620u;
label_2e7620:
    // 0x2e7620: 0x96a300ec  lhu         $v1, 0xEC($s5)
    ctx->pc = 0x2e7620u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 236)));
label_2e7624:
    // 0x2e7624: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e7624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e7628:
    // 0x2e7628: 0x10000227  b           . + 4 + (0x227 << 2)
label_2e762c:
    if (ctx->pc == 0x2E762Cu) {
        ctx->pc = 0x2E762Cu;
            // 0x2e762c: 0xa6a300ec  sh          $v1, 0xEC($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 236), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2E7630u;
        goto label_2e7630;
    }
    ctx->pc = 0x2E7628u;
    {
        const bool branch_taken_0x2e7628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E762Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7628u;
            // 0x2e762c: 0xa6a300ec  sh          $v1, 0xEC($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 236), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7628) {
            ctx->pc = 0x2E7EC8u;
            goto label_2e7ec8;
        }
    }
    ctx->pc = 0x2E7630u;
label_2e7630:
    // 0x2e7630: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e7630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7634:
    // 0x2e7634: 0x90500014  lbu         $s0, 0x14($v0)
    ctx->pc = 0x2e7634u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_2e7638:
    // 0x2e7638: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x2e7638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_2e763c:
    // 0x2e763c: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
label_2e7640:
    if (ctx->pc == 0x2E7640u) {
        ctx->pc = 0x2E7644u;
        goto label_2e7644;
    }
    ctx->pc = 0x2E763Cu;
    {
        const bool branch_taken_0x2e763c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e763c) {
            ctx->pc = 0x2E7680u;
            goto label_2e7680;
        }
    }
    ctx->pc = 0x2E7644u;
label_2e7644:
    // 0x2e7644: 0xc04ab66  jal         func_12AD98
label_2e7648:
    if (ctx->pc == 0x2E7648u) {
        ctx->pc = 0x2E764Cu;
        goto label_2e764c;
    }
    ctx->pc = 0x2E7644u;
    SET_GPR_U32(ctx, 31, 0x2E764Cu);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E764Cu; }
        if (ctx->pc != 0x2E764Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E764Cu; }
        if (ctx->pc != 0x2E764Cu) { return; }
    }
    ctx->pc = 0x2E764Cu;
label_2e764c:
    // 0x2e764c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e764cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2e7650:
    // 0x2e7650: 0xc04ab66  jal         func_12AD98
label_2e7654:
    if (ctx->pc == 0x2E7654u) {
        ctx->pc = 0x2E7654u;
            // 0x2e7654: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2E7658u;
        goto label_2e7658;
    }
    ctx->pc = 0x2E7650u;
    SET_GPR_U32(ctx, 31, 0x2E7658u);
    ctx->pc = 0x2E7654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7650u;
            // 0x2e7654: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7658u; }
        if (ctx->pc != 0x2E7658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7658u; }
        if (ctx->pc != 0x2E7658u) { return; }
    }
    ctx->pc = 0x2E7658u;
label_2e7658:
    // 0x2e7658: 0x512025  or          $a0, $v0, $s1
    ctx->pc = 0x2e7658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_2e765c:
    // 0x2e765c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2e765cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_2e7660:
    // 0x2e7660: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2e7660u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2e7664:
    // 0x2e7664: 0x1810  mfhi        $v1
    ctx->pc = 0x2e7664u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2e7668:
    // 0x2e7668: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2e766c:
    if (ctx->pc == 0x2E766Cu) {
        ctx->pc = 0x2E7670u;
        goto label_2e7670;
    }
    ctx->pc = 0x2E7668u;
    {
        const bool branch_taken_0x2e7668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7668) {
            ctx->pc = 0x2E7680u;
            goto label_2e7680;
        }
    }
    ctx->pc = 0x2E7670u;
label_2e7670:
    // 0x2e7670: 0x86830036  lh          $v1, 0x36($s4)
    ctx->pc = 0x2e7670u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 54)));
label_2e7674:
    // 0x2e7674: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e7674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e7678:
    // 0x2e7678: 0x10000213  b           . + 4 + (0x213 << 2)
label_2e767c:
    if (ctx->pc == 0x2E767Cu) {
        ctx->pc = 0x2E767Cu;
            // 0x2e767c: 0xa6830036  sh          $v1, 0x36($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 54), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2E7680u;
        goto label_2e7680;
    }
    ctx->pc = 0x2E7678u;
    {
        const bool branch_taken_0x2e7678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E767Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7678u;
            // 0x2e767c: 0xa6830036  sh          $v1, 0x36($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 54), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7678) {
            ctx->pc = 0x2E7EC8u;
            goto label_2e7ec8;
        }
    }
    ctx->pc = 0x2E7680u;
label_2e7680:
    // 0x2e7680: 0xc0b9ffc  jal         func_2E7FF0
label_2e7684:
    if (ctx->pc == 0x2E7684u) {
        ctx->pc = 0x2E7688u;
        goto label_2e7688;
    }
    ctx->pc = 0x2E7680u;
    SET_GPR_U32(ctx, 31, 0x2E7688u);
    ctx->pc = 0x2E7FF0u;
    if (runtime->hasFunction(0x2E7FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2E7FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7688u; }
        if (ctx->pc != 0x2E7688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7FF0_0x2e7ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7688u; }
        if (ctx->pc != 0x2E7688u) { return; }
    }
    ctx->pc = 0x2E7688u;
label_2e7688:
    // 0x2e7688: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e7688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e768c:
    // 0x2e768c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e768cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e7690:
    // 0x2e7690: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e7690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7694:
    // 0x2e7694: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2e7694u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7698:
    // 0x2e7698: 0xc0b96f0  jal         func_2E5BC0
label_2e769c:
    if (ctx->pc == 0x2E769Cu) {
        ctx->pc = 0x2E769Cu;
            // 0x2e769c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->pc = 0x2E76A0u;
        goto label_2e76a0;
    }
    ctx->pc = 0x2E7698u;
    SET_GPR_U32(ctx, 31, 0x2E76A0u);
    ctx->pc = 0x2E769Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7698u;
            // 0x2e769c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5BC0u;
    if (runtime->hasFunction(0x2E5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E76A0u; }
        if (ctx->pc != 0x2E76A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5BC0_0x2e5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E76A0u; }
        if (ctx->pc != 0x2E76A0u) { return; }
    }
    ctx->pc = 0x2E76A0u;
label_2e76a0:
    // 0x2e76a0: 0x8ea30120  lw          $v1, 0x120($s5)
    ctx->pc = 0x2e76a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 288)));
label_2e76a4:
    // 0x2e76a4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e76a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e76a8:
    // 0x2e76a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e76ac:
    // 0x2e76ac: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2e76b0:
    if (ctx->pc == 0x2E76B0u) {
        ctx->pc = 0x2E76B4u;
        goto label_2e76b4;
    }
    ctx->pc = 0x2E76ACu;
    {
        const bool branch_taken_0x2e76ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e76ac) {
            ctx->pc = 0x2E76C8u;
            goto label_2e76c8;
        }
    }
    ctx->pc = 0x2E76B4u;
label_2e76b4:
    // 0x2e76b4: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e76b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e76b8:
    // 0x2e76b8: 0x84420030  lh          $v0, 0x30($v0)
    ctx->pc = 0x2e76b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2e76bc:
    // 0x2e76bc: 0x1000000c  b           . + 4 + (0xC << 2)
label_2e76c0:
    if (ctx->pc == 0x2E76C0u) {
        ctx->pc = 0x2E76C0u;
            // 0x2e76c0: 0xa6820034  sh          $v0, 0x34($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 52), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2E76C4u;
        goto label_2e76c4;
    }
    ctx->pc = 0x2E76BCu;
    {
        const bool branch_taken_0x2e76bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E76C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E76BCu;
            // 0x2e76c0: 0xa6820034  sh          $v0, 0x34($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 52), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e76bc) {
            ctx->pc = 0x2E76F0u;
            goto label_2e76f0;
        }
    }
    ctx->pc = 0x2E76C4u;
label_2e76c4:
    // 0x2e76c4: 0x0  nop
    ctx->pc = 0x2e76c4u;
    // NOP
label_2e76c8:
    // 0x2e76c8: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e76c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e76cc:
    // 0x2e76cc: 0x84420030  lh          $v0, 0x30($v0)
    ctx->pc = 0x2e76ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2e76d0:
    // 0x2e76d0: 0xa6820034  sh          $v0, 0x34($s4)
    ctx->pc = 0x2e76d0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 52), (uint16_t)GPR_U32(ctx, 2));
label_2e76d4:
    // 0x2e76d4: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e76d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e76d8:
    // 0x2e76d8: 0x8ea30120  lw          $v1, 0x120($s5)
    ctx->pc = 0x2e76d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 288)));
label_2e76dc:
    // 0x2e76dc: 0x84420030  lh          $v0, 0x30($v0)
    ctx->pc = 0x2e76dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2e76e0:
    // 0x2e76e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e76e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2e76e4:
    // 0x2e76e4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2e76e8:
    if (ctx->pc == 0x2E76E8u) {
        ctx->pc = 0x2E76ECu;
        goto label_2e76ec;
    }
    ctx->pc = 0x2E76E4u;
    {
        const bool branch_taken_0x2e76e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e76e4) {
            ctx->pc = 0x2E76F0u;
            goto label_2e76f0;
        }
    }
    ctx->pc = 0x2E76ECu;
label_2e76ec:
    // 0x2e76ec: 0xa6830034  sh          $v1, 0x34($s4)
    ctx->pc = 0x2e76ecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 52), (uint16_t)GPR_U32(ctx, 3));
label_2e76f0:
    // 0x2e76f0: 0x86820034  lh          $v0, 0x34($s4)
    ctx->pc = 0x2e76f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 52)));
label_2e76f4:
    // 0x2e76f4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2e76f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_2e76f8:
    // 0x2e76f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e76f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e76fc:
    // 0x2e76fc: 0x24a51e40  addiu       $a1, $a1, 0x1E40
    ctx->pc = 0x2e76fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7744));
label_2e7700:
    // 0x2e7700: 0xc04cc04  jal         func_133010
label_2e7704:
    if (ctx->pc == 0x2E7704u) {
        ctx->pc = 0x2E7704u;
            // 0x2e7704: 0xa6820038  sh          $v0, 0x38($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 56), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2E7708u;
        goto label_2e7708;
    }
    ctx->pc = 0x2E7700u;
    SET_GPR_U32(ctx, 31, 0x2E7708u);
    ctx->pc = 0x2E7704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7700u;
            // 0x2e7704: 0xa6820038  sh          $v0, 0x38($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 56), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7708u; }
        if (ctx->pc != 0x2E7708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7708u; }
        if (ctx->pc != 0x2E7708u) { return; }
    }
    ctx->pc = 0x2E7708u;
label_2e7708:
    // 0x2e7708: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e7708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2e770c:
    // 0x2e770c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e770cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2e7710:
    // 0x2e7710: 0xc460e580  lwc1        $f0, -0x1A80($v1)
    ctx->pc = 0x2e7710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294960512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7714:
    // 0x2e7714: 0xc442e584  lwc1        $f2, -0x1A7C($v0)
    ctx->pc = 0x2e7714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e7718:
    // 0x2e7718: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e7718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2e771c:
    // 0x2e771c: 0xc461e588  lwc1        $f1, -0x1A78($v1)
    ctx->pc = 0x2e771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294960520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7720:
    // 0x2e7720: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e7720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2e7724:
    // 0x2e7724: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2e7724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2e7728:
    // 0x2e7728: 0xc440e58c  lwc1        $f0, -0x1A74($v0)
    ctx->pc = 0x2e7728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e772c:
    // 0x2e772c: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x2e772cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_2e7730:
    // 0x2e7730: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x2e7730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2e7734:
    // 0x2e7734: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2e7734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_2e7738:
    // 0x2e7738: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e7738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e773c:
    // 0x2e773c: 0xc44c001c  lwc1        $f12, 0x1C($v0)
    ctx->pc = 0x2e773cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e7740:
    // 0x2e7740: 0xc0b9fd4  jal         func_2E7F50
label_2e7744:
    if (ctx->pc == 0x2E7744u) {
        ctx->pc = 0x2E7744u;
            // 0x2e7744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E7748u;
        goto label_2e7748;
    }
    ctx->pc = 0x2E7740u;
    SET_GPR_U32(ctx, 31, 0x2E7748u);
    ctx->pc = 0x2E7744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7740u;
            // 0x2e7744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F50u;
    if (runtime->hasFunction(0x2E7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2E7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7748u; }
        if (ctx->pc != 0x2E7748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7F50_0x2e7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7748u; }
        if (ctx->pc != 0x2E7748u) { return; }
    }
    ctx->pc = 0x2E7748u;
label_2e7748:
    // 0x2e7748: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e7748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e774c:
    // 0x2e774c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2e774cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2e7750:
    // 0x2e7750: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x2e7750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e7754:
    // 0x2e7754: 0xc0b9fd4  jal         func_2E7F50
label_2e7758:
    if (ctx->pc == 0x2E7758u) {
        ctx->pc = 0x2E7758u;
            // 0x2e7758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E775Cu;
        goto label_2e775c;
    }
    ctx->pc = 0x2E7754u;
    SET_GPR_U32(ctx, 31, 0x2E775Cu);
    ctx->pc = 0x2E7758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7754u;
            // 0x2e7758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F50u;
    if (runtime->hasFunction(0x2E7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2E7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E775Cu; }
        if (ctx->pc != 0x2E775Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7F50_0x2e7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E775Cu; }
        if (ctx->pc != 0x2E775Cu) { return; }
    }
    ctx->pc = 0x2E775Cu;
label_2e775c:
    // 0x2e775c: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7760:
    // 0x2e7760: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2e7760u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2e7764:
    // 0x2e7764: 0xc44c0024  lwc1        $f12, 0x24($v0)
    ctx->pc = 0x2e7764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e7768:
    // 0x2e7768: 0xc0b9fd4  jal         func_2E7F50
label_2e776c:
    if (ctx->pc == 0x2E776Cu) {
        ctx->pc = 0x2E776Cu;
            // 0x2e776c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E7770u;
        goto label_2e7770;
    }
    ctx->pc = 0x2E7768u;
    SET_GPR_U32(ctx, 31, 0x2E7770u);
    ctx->pc = 0x2E776Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7768u;
            // 0x2e776c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F50u;
    if (runtime->hasFunction(0x2E7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2E7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7770u; }
        if (ctx->pc != 0x2E7770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7F50_0x2e7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7770u; }
        if (ctx->pc != 0x2E7770u) { return; }
    }
    ctx->pc = 0x2E7770u;
label_2e7770:
    // 0x2e7770: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2e7770u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2e7774:
    // 0x2e7774: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2e7774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2e7778:
    // 0x2e7778: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2e7778u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2e777c:
    // 0x2e777c: 0xc04cbd8  jal         func_132F60
label_2e7780:
    if (ctx->pc == 0x2E7780u) {
        ctx->pc = 0x2E7780u;
            // 0x2e7780: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2E7784u;
        goto label_2e7784;
    }
    ctx->pc = 0x2E777Cu;
    SET_GPR_U32(ctx, 31, 0x2E7784u);
    ctx->pc = 0x2E7780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E777Cu;
            // 0x2e7780: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7784u; }
        if (ctx->pc != 0x2E7784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7784u; }
        if (ctx->pc != 0x2E7784u) { return; }
    }
    ctx->pc = 0x2E7784u;
label_2e7784:
    // 0x2e7784: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e7784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7788:
    // 0x2e7788: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x2e7788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_2e778c:
    // 0x2e778c: 0x8ea60108  lw          $a2, 0x108($s5)
    ctx->pc = 0x2e778cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 264)));
label_2e7790:
    // 0x2e7790: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x2e7790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e7794:
    // 0x2e7794: 0xc04cc7c  jal         func_1331F0
label_2e7798:
    if (ctx->pc == 0x2E7798u) {
        ctx->pc = 0x2E7798u;
            // 0x2e7798: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x2E779Cu;
        goto label_2e779c;
    }
    ctx->pc = 0x2E7794u;
    SET_GPR_U32(ctx, 31, 0x2E779Cu);
    ctx->pc = 0x2E7798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7794u;
            // 0x2e7798: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E779Cu; }
        if (ctx->pc != 0x2E779Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E779Cu; }
        if (ctx->pc != 0x2E779Cu) { return; }
    }
    ctx->pc = 0x2E779Cu;
label_2e779c:
    // 0x2e779c: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e77a0:
    // 0x2e77a0: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2e77a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2e77a4:
    // 0x2e77a4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_2e77a8:
    if (ctx->pc == 0x2E77A8u) {
        ctx->pc = 0x2E77ACu;
        goto label_2e77ac;
    }
    ctx->pc = 0x2E77A4u;
    {
        const bool branch_taken_0x2e77a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e77a4) {
            ctx->pc = 0x2E77F0u;
            goto label_2e77f0;
        }
    }
    ctx->pc = 0x2E77ACu;
label_2e77ac:
    // 0x2e77ac: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x2e77acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
label_2e77b0:
    // 0x2e77b0: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x2e77b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
label_2e77b4:
    // 0x2e77b4: 0xc6a000d0  lwc1        $f0, 0xD0($s5)
    ctx->pc = 0x2e77b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e77b8:
    // 0x2e77b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e77b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e77bc:
    // 0x2e77bc: 0x0  nop
    ctx->pc = 0x2e77bcu;
    // NOP
label_2e77c0:
    // 0x2e77c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e77c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e77c4:
    // 0x2e77c4: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x2e77c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_2e77c8:
    // 0x2e77c8: 0xc6a000d4  lwc1        $f0, 0xD4($s5)
    ctx->pc = 0x2e77c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e77cc:
    // 0x2e77cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e77ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e77d0:
    // 0x2e77d0: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x2e77d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_2e77d4:
    // 0x2e77d4: 0xc6a000d8  lwc1        $f0, 0xD8($s5)
    ctx->pc = 0x2e77d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e77d8:
    // 0x2e77d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e77d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e77dc:
    // 0x2e77dc: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x2e77dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_2e77e0:
    // 0x2e77e0: 0xc6a000dc  lwc1        $f0, 0xDC($s5)
    ctx->pc = 0x2e77e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e77e4:
    // 0x2e77e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e77e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e77e8:
    // 0x2e77e8: 0x10000051  b           . + 4 + (0x51 << 2)
label_2e77ec:
    if (ctx->pc == 0x2E77ECu) {
        ctx->pc = 0x2E77ECu;
            // 0x2e77ec: 0xe680002c  swc1        $f0, 0x2C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
        ctx->pc = 0x2E77F0u;
        goto label_2e77f0;
    }
    ctx->pc = 0x2E77E8u;
    {
        const bool branch_taken_0x2e77e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E77ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E77E8u;
            // 0x2e77ec: 0xe680002c  swc1        $f0, 0x2C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e77e8) {
            ctx->pc = 0x2E7930u;
            goto label_2e7930;
        }
    }
    ctx->pc = 0x2E77F0u;
label_2e77f0:
    // 0x2e77f0: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x2e77f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_2e77f4:
    // 0x2e77f4: 0xc0b9fc8  jal         func_2E7F20
label_2e77f8:
    if (ctx->pc == 0x2E77F8u) {
        ctx->pc = 0x2E77F8u;
            // 0x2e77f8: 0x26a500d0  addiu       $a1, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->pc = 0x2E77FCu;
        goto label_2e77fc;
    }
    ctx->pc = 0x2E77F4u;
    SET_GPR_U32(ctx, 31, 0x2E77FCu);
    ctx->pc = 0x2E77F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E77F4u;
            // 0x2e77f8: 0x26a500d0  addiu       $a1, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F20u;
    if (runtime->hasFunction(0x2E7F20u)) {
        auto targetFn = runtime->lookupFunction(0x2E7F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E77FCu; }
        if (ctx->pc != 0x2E77FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7F20_0x2e7f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E77FCu; }
        if (ctx->pc != 0x2E77FCu) { return; }
    }
    ctx->pc = 0x2E77FCu;
label_2e77fc:
    // 0x2e77fc: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x2e77fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7800:
    // 0x2e7800: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e7800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2e7804:
    // 0x2e7804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7808:
    // 0x2e7808: 0x0  nop
    ctx->pc = 0x2e7808u;
    // NOP
label_2e780c:
    // 0x2e780c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e780cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e7810:
    // 0x2e7810: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_2e7814:
    if (ctx->pc == 0x2E7814u) {
        ctx->pc = 0x2E7814u;
            // 0x2e7814: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2E7818u;
        goto label_2e7818;
    }
    ctx->pc = 0x2E7810u;
    {
        const bool branch_taken_0x2e7810 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e7810) {
            ctx->pc = 0x2E7814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7810u;
            // 0x2e7814: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E7828u;
            goto label_2e7828;
        }
    }
    ctx->pc = 0x2E7818u;
label_2e7818:
    // 0x2e7818: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7818u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e781c:
    // 0x2e781c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e781cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e7820:
    // 0x2e7820: 0x10000007  b           . + 4 + (0x7 << 2)
label_2e7824:
    if (ctx->pc == 0x2E7824u) {
        ctx->pc = 0x2E7824u;
            // 0x2e7824: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2E7828u;
        goto label_2e7828;
    }
    ctx->pc = 0x2E7820u;
    {
        const bool branch_taken_0x2e7820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7820u;
            // 0x2e7824: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7820) {
            ctx->pc = 0x2E7840u;
            goto label_2e7840;
        }
    }
    ctx->pc = 0x2E7828u;
label_2e7828:
    // 0x2e7828: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e7828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2e782c:
    // 0x2e782c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e782cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e7830:
    // 0x2e7830: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e7830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e7834:
    // 0x2e7834: 0x0  nop
    ctx->pc = 0x2e7834u;
    // NOP
label_2e7838:
    // 0x2e7838: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e7838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e783c:
    // 0x2e783c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e783cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e7840:
    // 0x2e7840: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x2e7840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7844:
    // 0x2e7844: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e7844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2e7848:
    // 0x2e7848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e784c:
    // 0x2e784c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e784cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e7850:
    // 0x2e7850: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e7850u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e7854:
    // 0x2e7854: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2e7858:
    if (ctx->pc == 0x2E7858u) {
        ctx->pc = 0x2E7858u;
            // 0x2e7858: 0x32600  sll         $a0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->pc = 0x2E785Cu;
        goto label_2e785c;
    }
    ctx->pc = 0x2E7854u;
    {
        const bool branch_taken_0x2e7854 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E7858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7854u;
            // 0x2e7858: 0x32600  sll         $a0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7854) {
            ctx->pc = 0x2E786Cu;
            goto label_2e786c;
        }
    }
    ctx->pc = 0x2E785Cu;
label_2e785c:
    // 0x2e785c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e785cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e7860:
    // 0x2e7860: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e7860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e7864:
    // 0x2e7864: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e7868:
    if (ctx->pc == 0x2E7868u) {
        ctx->pc = 0x2E7868u;
            // 0x2e7868: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2E786Cu;
        goto label_2e786c;
    }
    ctx->pc = 0x2E7864u;
    {
        const bool branch_taken_0x2e7864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7864u;
            // 0x2e7868: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7864) {
            ctx->pc = 0x2E7888u;
            goto label_2e7888;
        }
    }
    ctx->pc = 0x2E786Cu;
label_2e786c:
    // 0x2e786c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e786cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e7870:
    // 0x2e7870: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e7870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2e7874:
    // 0x2e7874: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7874u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e7878:
    // 0x2e7878: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e7878u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e787c:
    // 0x2e787c: 0x0  nop
    ctx->pc = 0x2e787cu;
    // NOP
label_2e7880:
    // 0x2e7880: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e7880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e7884:
    // 0x2e7884: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e7884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e7888:
    // 0x2e7888: 0xc6810028  lwc1        $f1, 0x28($s4)
    ctx->pc = 0x2e7888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e788c:
    // 0x2e788c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e788cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2e7890:
    // 0x2e7890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7894:
    // 0x2e7894: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e7894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e7898:
    // 0x2e7898: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e7898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2e789c:
    // 0x2e789c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e789cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e78a0:
    // 0x2e78a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2e78a4:
    if (ctx->pc == 0x2E78A4u) {
        ctx->pc = 0x2E78A4u;
            // 0x2e78a4: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->pc = 0x2E78A8u;
        goto label_2e78a8;
    }
    ctx->pc = 0x2E78A0u;
    {
        const bool branch_taken_0x2e78a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E78A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E78A0u;
            // 0x2e78a4: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e78a0) {
            ctx->pc = 0x2E78B8u;
            goto label_2e78b8;
        }
    }
    ctx->pc = 0x2E78A8u;
label_2e78a8:
    // 0x2e78a8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e78a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e78ac:
    // 0x2e78ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e78acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e78b0:
    // 0x2e78b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e78b4:
    if (ctx->pc == 0x2E78B4u) {
        ctx->pc = 0x2E78B4u;
            // 0x2e78b4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2E78B8u;
        goto label_2e78b8;
    }
    ctx->pc = 0x2E78B0u;
    {
        const bool branch_taken_0x2e78b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E78B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E78B0u;
            // 0x2e78b4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e78b0) {
            ctx->pc = 0x2E78D4u;
            goto label_2e78d4;
        }
    }
    ctx->pc = 0x2E78B8u;
label_2e78b8:
    // 0x2e78b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e78b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e78bc:
    // 0x2e78bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2e78c0:
    // 0x2e78c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e78c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e78c4:
    // 0x2e78c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e78c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e78c8:
    // 0x2e78c8: 0x0  nop
    ctx->pc = 0x2e78c8u;
    // NOP
label_2e78cc:
    // 0x2e78cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e78ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e78d0:
    // 0x2e78d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e78d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e78d4:
    // 0x2e78d4: 0xc681002c  lwc1        $f1, 0x2C($s4)
    ctx->pc = 0x2e78d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e78d8:
    // 0x2e78d8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e78d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2e78dc:
    // 0x2e78dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e78dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e78e0:
    // 0x2e78e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e78e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e78e4:
    // 0x2e78e4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2e78e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2e78e8:
    // 0x2e78e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e78e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e78ec:
    // 0x2e78ec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2e78f0:
    if (ctx->pc == 0x2E78F0u) {
        ctx->pc = 0x2E78F0u;
            // 0x2e78f0: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->pc = 0x2E78F4u;
        goto label_2e78f4;
    }
    ctx->pc = 0x2E78ECu;
    {
        const bool branch_taken_0x2e78ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E78F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E78ECu;
            // 0x2e78f0: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e78ec) {
            ctx->pc = 0x2E7904u;
            goto label_2e7904;
        }
    }
    ctx->pc = 0x2E78F4u;
label_2e78f4:
    // 0x2e78f4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e78f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e78f8:
    // 0x2e78f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e78f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e78fc:
    // 0x2e78fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e7900:
    if (ctx->pc == 0x2E7900u) {
        ctx->pc = 0x2E7900u;
            // 0x2e7900: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2E7904u;
        goto label_2e7904;
    }
    ctx->pc = 0x2E78FCu;
    {
        const bool branch_taken_0x2e78fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E78FCu;
            // 0x2e7900: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e78fc) {
            ctx->pc = 0x2E7920u;
            goto label_2e7920;
        }
    }
    ctx->pc = 0x2E7904u;
label_2e7904:
    // 0x2e7904: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e7904u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e7908:
    // 0x2e7908: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e7908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2e790c:
    // 0x2e790c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e790cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e7910:
    // 0x2e7910: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e7910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e7914:
    // 0x2e7914: 0x0  nop
    ctx->pc = 0x2e7914u;
    // NOP
label_2e7918:
    // 0x2e7918: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e7918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e791c:
    // 0x2e791c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e791cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e7920:
    // 0x2e7920: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2e7920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e7924:
    // 0x2e7924: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e7924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2e7928:
    // 0x2e7928: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x2e7928u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
label_2e792c:
    // 0x2e792c: 0x0  nop
    ctx->pc = 0x2e792cu;
    // NOP
label_2e7930:
    // 0x2e7930: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2e7930u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2e7934:
    // 0x2e7934: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2e7938:
    if (ctx->pc == 0x2E7938u) {
        ctx->pc = 0x2E793Cu;
        goto label_2e793c;
    }
    ctx->pc = 0x2E7934u;
    {
        const bool branch_taken_0x2e7934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7934) {
            ctx->pc = 0x2E79A0u;
            goto label_2e79a0;
        }
    }
    ctx->pc = 0x2E793Cu;
label_2e793c:
    // 0x2e793c: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e793cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7940:
    // 0x2e7940: 0xc44c0054  lwc1        $f12, 0x54($v0)
    ctx->pc = 0x2e7940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e7944:
    // 0x2e7944: 0xc0b9fd4  jal         func_2E7F50
label_2e7948:
    if (ctx->pc == 0x2E7948u) {
        ctx->pc = 0x2E7948u;
            // 0x2e7948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E794Cu;
        goto label_2e794c;
    }
    ctx->pc = 0x2E7944u;
    SET_GPR_U32(ctx, 31, 0x2E794Cu);
    ctx->pc = 0x2E7948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7944u;
            // 0x2e7948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F50u;
    if (runtime->hasFunction(0x2E7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2E7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E794Cu; }
        if (ctx->pc != 0x2E794Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7F50_0x2e7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E794Cu; }
        if (ctx->pc != 0x2E794Cu) { return; }
    }
    ctx->pc = 0x2E794Cu;
label_2e794c:
    // 0x2e794c: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e794cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7950:
    // 0x2e7950: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2e7950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7954:
    // 0x2e7954: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e7958:
    // 0x2e7958: 0xe680003c  swc1        $f0, 0x3C($s4)
    ctx->pc = 0x2e7958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_2e795c:
    // 0x2e795c: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e795cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7960:
    // 0x2e7960: 0xc44c0058  lwc1        $f12, 0x58($v0)
    ctx->pc = 0x2e7960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e7964:
    // 0x2e7964: 0xc0b9fd4  jal         func_2E7F50
label_2e7968:
    if (ctx->pc == 0x2E7968u) {
        ctx->pc = 0x2E7968u;
            // 0x2e7968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E796Cu;
        goto label_2e796c;
    }
    ctx->pc = 0x2E7964u;
    SET_GPR_U32(ctx, 31, 0x2E796Cu);
    ctx->pc = 0x2E7968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7964u;
            // 0x2e7968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F50u;
    if (runtime->hasFunction(0x2E7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2E7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E796Cu; }
        if (ctx->pc != 0x2E796Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7F50_0x2e7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E796Cu; }
        if (ctx->pc != 0x2E796Cu) { return; }
    }
    ctx->pc = 0x2E796Cu;
label_2e796c:
    // 0x2e796c: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7970:
    // 0x2e7970: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2e7970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7974:
    // 0x2e7974: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e7978:
    // 0x2e7978: 0xe6800040  swc1        $f0, 0x40($s4)
    ctx->pc = 0x2e7978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 64), bits); }
label_2e797c:
    // 0x2e797c: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7980:
    // 0x2e7980: 0xc44c005c  lwc1        $f12, 0x5C($v0)
    ctx->pc = 0x2e7980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e7984:
    // 0x2e7984: 0xc0b9fd4  jal         func_2E7F50
label_2e7988:
    if (ctx->pc == 0x2E7988u) {
        ctx->pc = 0x2E7988u;
            // 0x2e7988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E798Cu;
        goto label_2e798c;
    }
    ctx->pc = 0x2E7984u;
    SET_GPR_U32(ctx, 31, 0x2E798Cu);
    ctx->pc = 0x2E7988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7984u;
            // 0x2e7988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F50u;
    if (runtime->hasFunction(0x2E7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2E7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E798Cu; }
        if (ctx->pc != 0x2E798Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7F50_0x2e7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E798Cu; }
        if (ctx->pc != 0x2E798Cu) { return; }
    }
    ctx->pc = 0x2E798Cu;
label_2e798c:
    // 0x2e798c: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7990:
    // 0x2e7990: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2e7990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7994:
    // 0x2e7994: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e7994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e7998:
    // 0x2e7998: 0x10000011  b           . + 4 + (0x11 << 2)
label_2e799c:
    if (ctx->pc == 0x2E799Cu) {
        ctx->pc = 0x2E799Cu;
            // 0x2e799c: 0xe6800044  swc1        $f0, 0x44($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 68), bits); }
        ctx->pc = 0x2E79A0u;
        goto label_2e79a0;
    }
    ctx->pc = 0x2E7998u;
    {
        const bool branch_taken_0x2e7998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E799Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7998u;
            // 0x2e799c: 0xe6800044  swc1        $f0, 0x44($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7998) {
            ctx->pc = 0x2E79E0u;
            goto label_2e79e0;
        }
    }
    ctx->pc = 0x2E79A0u;
label_2e79a0:
    // 0x2e79a0: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e79a4:
    // 0x2e79a4: 0xc44c0054  lwc1        $f12, 0x54($v0)
    ctx->pc = 0x2e79a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e79a8:
    // 0x2e79a8: 0xc0b9fd4  jal         func_2E7F50
label_2e79ac:
    if (ctx->pc == 0x2E79ACu) {
        ctx->pc = 0x2E79ACu;
            // 0x2e79ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E79B0u;
        goto label_2e79b0;
    }
    ctx->pc = 0x2E79A8u;
    SET_GPR_U32(ctx, 31, 0x2E79B0u);
    ctx->pc = 0x2E79ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E79A8u;
            // 0x2e79ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F50u;
    if (runtime->hasFunction(0x2E7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2E7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E79B0u; }
        if (ctx->pc != 0x2E79B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7F50_0x2e7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E79B0u; }
        if (ctx->pc != 0x2E79B0u) { return; }
    }
    ctx->pc = 0x2E79B0u;
label_2e79b0:
    // 0x2e79b0: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e79b4:
    // 0x2e79b4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2e79b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e79b8:
    // 0x2e79b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2e79b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e79bc:
    // 0x2e79bc: 0xe681003c  swc1        $f1, 0x3C($s4)
    ctx->pc = 0x2e79bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_2e79c0:
    // 0x2e79c0: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e79c4:
    // 0x2e79c4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2e79c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e79c8:
    // 0x2e79c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2e79c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e79cc:
    // 0x2e79cc: 0xe6810040  swc1        $f1, 0x40($s4)
    ctx->pc = 0x2e79ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 64), bits); }
label_2e79d0:
    // 0x2e79d0: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e79d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e79d4:
    // 0x2e79d4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2e79d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e79d8:
    // 0x2e79d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e79d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e79dc:
    // 0x2e79dc: 0xe6800044  swc1        $f0, 0x44($s4)
    ctx->pc = 0x2e79dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 68), bits); }
label_2e79e0:
    // 0x2e79e0: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
label_2e79e4:
    if (ctx->pc == 0x2E79E4u) {
        ctx->pc = 0x2E79E8u;
        goto label_2e79e8;
    }
    ctx->pc = 0x2E79E0u;
    {
        const bool branch_taken_0x2e79e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e79e0) {
            ctx->pc = 0x2E7A90u;
            goto label_2e7a90;
        }
    }
    ctx->pc = 0x2E79E8u;
label_2e79e8:
    // 0x2e79e8: 0x8ea300f4  lw          $v1, 0xF4($s5)
    ctx->pc = 0x2e79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e79ec:
    // 0x2e79ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e79ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e79f0:
    // 0x2e79f0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2e79f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2e79f4:
    // 0x2e79f4: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_2e79f8:
    if (ctx->pc == 0x2E79F8u) {
        ctx->pc = 0x2E79FCu;
        goto label_2e79fc;
    }
    ctx->pc = 0x2E79F4u;
    {
        const bool branch_taken_0x2e79f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e79f4) {
            ctx->pc = 0x2E7A60u;
            goto label_2e7a60;
        }
    }
    ctx->pc = 0x2E79FCu;
label_2e79fc:
    // 0x2e79fc: 0x3c0246ff  lui         $v0, 0x46FF
    ctx->pc = 0x2e79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18175 << 16));
label_2e7a00:
    // 0x2e7a00: 0x3442fe00  ori         $v0, $v0, 0xFE00
    ctx->pc = 0x2e7a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65024);
label_2e7a04:
    // 0x2e7a04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e7a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e7a08:
    // 0x2e7a08: 0xc0b9fd4  jal         func_2E7F50
label_2e7a0c:
    if (ctx->pc == 0x2E7A0Cu) {
        ctx->pc = 0x2E7A0Cu;
            // 0x2e7a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A10u;
        goto label_2e7a10;
    }
    ctx->pc = 0x2E7A08u;
    SET_GPR_U32(ctx, 31, 0x2E7A10u);
    ctx->pc = 0x2E7A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7A08u;
            // 0x2e7a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F50u;
    if (runtime->hasFunction(0x2E7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2E7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A10u; }
        if (ctx->pc != 0x2E7A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7F50_0x2e7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A10u; }
        if (ctx->pc != 0x2E7A10u) { return; }
    }
    ctx->pc = 0x2E7A10u;
label_2e7a10:
    // 0x2e7a10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7a10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e7a14:
    // 0x2e7a14: 0x3c0246ff  lui         $v0, 0x46FF
    ctx->pc = 0x2e7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18175 << 16));
label_2e7a18:
    // 0x2e7a18: 0x3442fe00  ori         $v0, $v0, 0xFE00
    ctx->pc = 0x2e7a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65024);
label_2e7a1c:
    // 0x2e7a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7a20:
    // 0x2e7a20: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e7a20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e7a24:
    // 0x2e7a24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e7a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e7a28:
    // 0x2e7a28: 0xc0b9fd4  jal         func_2E7F50
label_2e7a2c:
    if (ctx->pc == 0x2E7A2Cu) {
        ctx->pc = 0x2E7A2Cu;
            // 0x2e7a2c: 0xae830048  sw          $v1, 0x48($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 3));
        ctx->pc = 0x2E7A30u;
        goto label_2e7a30;
    }
    ctx->pc = 0x2E7A28u;
    SET_GPR_U32(ctx, 31, 0x2E7A30u);
    ctx->pc = 0x2E7A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7A28u;
            // 0x2e7a2c: 0xae830048  sw          $v1, 0x48($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F50u;
    if (runtime->hasFunction(0x2E7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2E7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A30u; }
        if (ctx->pc != 0x2E7A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7F50_0x2e7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A30u; }
        if (ctx->pc != 0x2E7A30u) { return; }
    }
    ctx->pc = 0x2E7A30u;
label_2e7a30:
    // 0x2e7a30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7a30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e7a34:
    // 0x2e7a34: 0x3c0246ff  lui         $v0, 0x46FF
    ctx->pc = 0x2e7a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18175 << 16));
label_2e7a38:
    // 0x2e7a38: 0x3442fe00  ori         $v0, $v0, 0xFE00
    ctx->pc = 0x2e7a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65024);
label_2e7a3c:
    // 0x2e7a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7a40:
    // 0x2e7a40: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e7a40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e7a44:
    // 0x2e7a44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e7a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e7a48:
    // 0x2e7a48: 0xc0b9fd4  jal         func_2E7F50
label_2e7a4c:
    if (ctx->pc == 0x2E7A4Cu) {
        ctx->pc = 0x2E7A4Cu;
            // 0x2e7a4c: 0xae83004c  sw          $v1, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
        ctx->pc = 0x2E7A50u;
        goto label_2e7a50;
    }
    ctx->pc = 0x2E7A48u;
    SET_GPR_U32(ctx, 31, 0x2E7A50u);
    ctx->pc = 0x2E7A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7A48u;
            // 0x2e7a4c: 0xae83004c  sw          $v1, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F50u;
    if (runtime->hasFunction(0x2E7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2E7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A50u; }
        if (ctx->pc != 0x2E7A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7F50_0x2e7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A50u; }
        if (ctx->pc != 0x2E7A50u) { return; }
    }
    ctx->pc = 0x2E7A50u;
label_2e7a50:
    // 0x2e7a50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7a50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e7a54:
    // 0x2e7a54: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e7a54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2e7a58:
    // 0x2e7a58: 0x1000000d  b           . + 4 + (0xD << 2)
label_2e7a5c:
    if (ctx->pc == 0x2E7A5Cu) {
        ctx->pc = 0x2E7A5Cu;
            // 0x2e7a5c: 0xae820050  sw          $v0, 0x50($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x2E7A60u;
        goto label_2e7a60;
    }
    ctx->pc = 0x2E7A58u;
    {
        const bool branch_taken_0x2e7a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7A58u;
            // 0x2e7a5c: 0xae820050  sw          $v0, 0x50($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a58) {
            ctx->pc = 0x2E7A90u;
            goto label_2e7a90;
        }
    }
    ctx->pc = 0x2E7A60u;
label_2e7a60:
    // 0x2e7a60: 0x3c0246ff  lui         $v0, 0x46FF
    ctx->pc = 0x2e7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18175 << 16));
label_2e7a64:
    // 0x2e7a64: 0x3442fe00  ori         $v0, $v0, 0xFE00
    ctx->pc = 0x2e7a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65024);
label_2e7a68:
    // 0x2e7a68: 0xae800048  sw          $zero, 0x48($s4)
    ctx->pc = 0x2e7a68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 0));
label_2e7a6c:
    // 0x2e7a6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7a70:
    // 0x2e7a70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e7a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e7a74:
    // 0x2e7a74: 0xc0b9fd4  jal         func_2E7F50
label_2e7a78:
    if (ctx->pc == 0x2E7A78u) {
        ctx->pc = 0x2E7A78u;
            // 0x2e7a78: 0xae80004c  sw          $zero, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x2E7A7Cu;
        goto label_2e7a7c;
    }
    ctx->pc = 0x2E7A74u;
    SET_GPR_U32(ctx, 31, 0x2E7A7Cu);
    ctx->pc = 0x2E7A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7A74u;
            // 0x2e7a78: 0xae80004c  sw          $zero, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F50u;
    if (runtime->hasFunction(0x2E7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2E7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A7Cu; }
        if (ctx->pc != 0x2E7A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7F50_0x2e7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A7Cu; }
        if (ctx->pc != 0x2E7A7Cu) { return; }
    }
    ctx->pc = 0x2E7A7Cu;
label_2e7a7c:
    // 0x2e7a7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7a7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e7a80:
    // 0x2e7a80: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e7a80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2e7a84:
    // 0x2e7a84: 0x0  nop
    ctx->pc = 0x2e7a84u;
    // NOP
label_2e7a88:
    // 0x2e7a88: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x2e7a88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_2e7a8c:
    // 0x2e7a8c: 0x0  nop
    ctx->pc = 0x2e7a8cu;
    // NOP
label_2e7a90:
    // 0x2e7a90: 0x12e0002b  beqz        $s7, . + 4 + (0x2B << 2)
label_2e7a94:
    if (ctx->pc == 0x2E7A94u) {
        ctx->pc = 0x2E7A98u;
        goto label_2e7a98;
    }
    ctx->pc = 0x2E7A90u;
    {
        const bool branch_taken_0x2e7a90 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a90) {
            ctx->pc = 0x2E7B40u;
            goto label_2e7b40;
        }
    }
    ctx->pc = 0x2E7A98u;
label_2e7a98:
    // 0x2e7a98: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_2e7a9c:
    if (ctx->pc == 0x2E7A9Cu) {
        ctx->pc = 0x2E7AA0u;
        goto label_2e7aa0;
    }
    ctx->pc = 0x2E7A98u;
    {
        const bool branch_taken_0x2e7a98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a98) {
            ctx->pc = 0x2E7AB0u;
            goto label_2e7ab0;
        }
    }
    ctx->pc = 0x2E7AA0u;
label_2e7aa0:
    // 0x2e7aa0: 0xae800048  sw          $zero, 0x48($s4)
    ctx->pc = 0x2e7aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 0));
label_2e7aa4:
    // 0x2e7aa4: 0xae80004c  sw          $zero, 0x4C($s4)
    ctx->pc = 0x2e7aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
label_2e7aa8:
    // 0x2e7aa8: 0xae800050  sw          $zero, 0x50($s4)
    ctx->pc = 0x2e7aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 0));
label_2e7aac:
    // 0x2e7aac: 0x0  nop
    ctx->pc = 0x2e7aacu;
    // NOP
label_2e7ab0:
    // 0x2e7ab0: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7ab4:
    // 0x2e7ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7ab8:
    // 0x2e7ab8: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x2e7ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7abc:
    // 0x2e7abc: 0xc0b9fd4  jal         func_2E7F50
label_2e7ac0:
    if (ctx->pc == 0x2E7AC0u) {
        ctx->pc = 0x2E7AC0u;
            // 0x2e7ac0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2E7AC4u;
        goto label_2e7ac4;
    }
    ctx->pc = 0x2E7ABCu;
    SET_GPR_U32(ctx, 31, 0x2E7AC4u);
    ctx->pc = 0x2E7AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7ABCu;
            // 0x2e7ac0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F50u;
    if (runtime->hasFunction(0x2E7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2E7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7AC4u; }
        if (ctx->pc != 0x2E7AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7F50_0x2e7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7AC4u; }
        if (ctx->pc != 0x2E7AC4u) { return; }
    }
    ctx->pc = 0x2E7AC4u;
label_2e7ac4:
    // 0x2e7ac4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7ac4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e7ac8:
    // 0x2e7ac8: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e7ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7acc:
    // 0x2e7acc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7ad0:
    // 0x2e7ad0: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x2e7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_2e7ad4:
    // 0x2e7ad4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e7ad4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e7ad8:
    // 0x2e7ad8: 0x0  nop
    ctx->pc = 0x2e7ad8u;
    // NOP
label_2e7adc:
    // 0x2e7adc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e7ae0:
    // 0x2e7ae0: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x2e7ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_2e7ae4:
    // 0x2e7ae4: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e7ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7ae8:
    // 0x2e7ae8: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x2e7ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7aec:
    // 0x2e7aec: 0xc0b9fd4  jal         func_2E7F50
label_2e7af0:
    if (ctx->pc == 0x2E7AF0u) {
        ctx->pc = 0x2E7AF0u;
            // 0x2e7af0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2E7AF4u;
        goto label_2e7af4;
    }
    ctx->pc = 0x2E7AECu;
    SET_GPR_U32(ctx, 31, 0x2E7AF4u);
    ctx->pc = 0x2E7AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7AECu;
            // 0x2e7af0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F50u;
    if (runtime->hasFunction(0x2E7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2E7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7AF4u; }
        if (ctx->pc != 0x2E7AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7F50_0x2e7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7AF4u; }
        if (ctx->pc != 0x2E7AF4u) { return; }
    }
    ctx->pc = 0x2E7AF4u;
label_2e7af4:
    // 0x2e7af4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7af4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e7af8:
    // 0x2e7af8: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e7af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7afc:
    // 0x2e7afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7b00:
    // 0x2e7b00: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x2e7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_2e7b04:
    // 0x2e7b04: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e7b04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e7b08:
    // 0x2e7b08: 0x0  nop
    ctx->pc = 0x2e7b08u;
    // NOP
label_2e7b0c:
    // 0x2e7b0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e7b10:
    // 0x2e7b10: 0xae820058  sw          $v0, 0x58($s4)
    ctx->pc = 0x2e7b10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
label_2e7b14:
    // 0x2e7b14: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e7b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7b18:
    // 0x2e7b18: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x2e7b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7b1c:
    // 0x2e7b1c: 0xc0b9fd4  jal         func_2E7F50
label_2e7b20:
    if (ctx->pc == 0x2E7B20u) {
        ctx->pc = 0x2E7B20u;
            // 0x2e7b20: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2E7B24u;
        goto label_2e7b24;
    }
    ctx->pc = 0x2E7B1Cu;
    SET_GPR_U32(ctx, 31, 0x2E7B24u);
    ctx->pc = 0x2E7B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7B1Cu;
            // 0x2e7b20: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F50u;
    if (runtime->hasFunction(0x2E7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2E7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7B24u; }
        if (ctx->pc != 0x2E7B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7F50_0x2e7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7B24u; }
        if (ctx->pc != 0x2E7B24u) { return; }
    }
    ctx->pc = 0x2E7B24u;
label_2e7b24:
    // 0x2e7b24: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7b24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e7b28:
    // 0x2e7b28: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7b2c:
    // 0x2e7b2c: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x2e7b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_2e7b30:
    // 0x2e7b30: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e7b30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e7b34:
    // 0x2e7b34: 0x0  nop
    ctx->pc = 0x2e7b34u;
    // NOP
label_2e7b38:
    // 0x2e7b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e7b3c:
    // 0x2e7b3c: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x2e7b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
label_2e7b40:
    // 0x2e7b40: 0xc04ab66  jal         func_12AD98
label_2e7b44:
    if (ctx->pc == 0x2E7B44u) {
        ctx->pc = 0x2E7B48u;
        goto label_2e7b48;
    }
    ctx->pc = 0x2E7B40u;
    SET_GPR_U32(ctx, 31, 0x2E7B48u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7B48u; }
        if (ctx->pc != 0x2E7B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7B48u; }
        if (ctx->pc != 0x2E7B48u) { return; }
    }
    ctx->pc = 0x2E7B48u;
label_2e7b48:
    // 0x2e7b48: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e7b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2e7b4c:
    // 0x2e7b4c: 0xc04ab66  jal         func_12AD98
label_2e7b50:
    if (ctx->pc == 0x2E7B50u) {
        ctx->pc = 0x2E7B50u;
            // 0x2e7b50: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2E7B54u;
        goto label_2e7b54;
    }
    ctx->pc = 0x2E7B4Cu;
    SET_GPR_U32(ctx, 31, 0x2E7B54u);
    ctx->pc = 0x2E7B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7B4Cu;
            // 0x2e7b50: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7B54u; }
        if (ctx->pc != 0x2E7B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7B54u; }
        if (ctx->pc != 0x2E7B54u) { return; }
    }
    ctx->pc = 0x2E7B54u;
label_2e7b54:
    // 0x2e7b54: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x2e7b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2e7b58:
    // 0x2e7b58: 0x504825  or          $t1, $v0, $s0
    ctx->pc = 0x2e7b58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_2e7b5c:
    // 0x2e7b5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e7b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e7b60:
    // 0x2e7b60: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2e7b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2e7b64:
    // 0x2e7b64: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e7b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e7b68:
    // 0x2e7b68: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2e7b68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2e7b6c:
    // 0x2e7b6c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2e7b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2e7b70:
    // 0x2e7b70: 0x320f809  jalr        $t9
label_2e7b74:
    if (ctx->pc == 0x2E7B74u) {
        ctx->pc = 0x2E7B74u;
            // 0x2e7b74: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B78u;
        goto label_2e7b78;
    }
    ctx->pc = 0x2E7B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E7B78u);
        ctx->pc = 0x2E7B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7B70u;
            // 0x2e7b74: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E7B78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E7B78u; }
            if (ctx->pc != 0x2E7B78u) { return; }
        }
        }
    }
    ctx->pc = 0x2E7B78u;
label_2e7b78:
    // 0x2e7b78: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e7b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_2e7b7c:
    // 0x2e7b7c: 0xc04cc04  jal         func_133010
label_2e7b80:
    if (ctx->pc == 0x2E7B80u) {
        ctx->pc = 0x2E7B80u;
            // 0x2e7b80: 0x26a50060  addiu       $a1, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->pc = 0x2E7B84u;
        goto label_2e7b84;
    }
    ctx->pc = 0x2E7B7Cu;
    SET_GPR_U32(ctx, 31, 0x2E7B84u);
    ctx->pc = 0x2E7B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7B7Cu;
            // 0x2e7b80: 0x26a50060  addiu       $a1, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7B84u; }
        if (ctx->pc != 0x2E7B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7B84u; }
        if (ctx->pc != 0x2E7B84u) { return; }
    }
    ctx->pc = 0x2E7B84u;
label_2e7b84:
    // 0x2e7b84: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e7b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_2e7b88:
    // 0x2e7b88: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e7b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e7b8c:
    // 0x2e7b8c: 0xc04cbe0  jal         func_132F80
label_2e7b90:
    if (ctx->pc == 0x2E7B90u) {
        ctx->pc = 0x2E7B90u;
            // 0x2e7b90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B94u;
        goto label_2e7b94;
    }
    ctx->pc = 0x2E7B8Cu;
    SET_GPR_U32(ctx, 31, 0x2E7B94u);
    ctx->pc = 0x2E7B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7B8Cu;
            // 0x2e7b90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7B94u; }
        if (ctx->pc != 0x2E7B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7B94u; }
        if (ctx->pc != 0x2E7B94u) { return; }
    }
    ctx->pc = 0x2E7B94u;
label_2e7b94:
    // 0x2e7b94: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2e7b94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2e7b98:
    // 0x2e7b98: 0x1040fe8b  beqz        $v0, . + 4 + (-0x175 << 2)
label_2e7b9c:
    if (ctx->pc == 0x2E7B9Cu) {
        ctx->pc = 0x2E7BA0u;
        goto label_2e7ba0;
    }
    ctx->pc = 0x2E7B98u;
    {
        const bool branch_taken_0x2e7b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7b98) {
            ctx->pc = 0x2E75C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e75c8;
        }
    }
    ctx->pc = 0x2E7BA0u;
label_2e7ba0:
    // 0x2e7ba0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e7ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2e7ba4:
    // 0x2e7ba4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e7ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2e7ba8:
    // 0x2e7ba8: 0xc460e590  lwc1        $f0, -0x1A70($v1)
    ctx->pc = 0x2e7ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294960528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7bac:
    // 0x2e7bac: 0xc442e594  lwc1        $f2, -0x1A6C($v0)
    ctx->pc = 0x2e7bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e7bb0:
    // 0x2e7bb0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e7bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2e7bb4:
    // 0x2e7bb4: 0xc461e598  lwc1        $f1, -0x1A68($v1)
    ctx->pc = 0x2e7bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294960536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e7bb8:
    // 0x2e7bb8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e7bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2e7bbc:
    // 0x2e7bbc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2e7bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2e7bc0:
    // 0x2e7bc0: 0xc440e59c  lwc1        $f0, -0x1A64($v0)
    ctx->pc = 0x2e7bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7bc4:
    // 0x2e7bc4: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x2e7bc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_2e7bc8:
    // 0x2e7bc8: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x2e7bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_2e7bcc:
    // 0x2e7bcc: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x2e7bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_2e7bd0:
    // 0x2e7bd0: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x2e7bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7bd4:
    // 0x2e7bd4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2e7bd4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7bd8:
    // 0x2e7bd8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2e7bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2e7bdc:
    // 0x2e7bdc: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_2e7be0:
    if (ctx->pc == 0x2E7BE0u) {
        ctx->pc = 0x2E7BE4u;
        goto label_2e7be4;
    }
    ctx->pc = 0x2E7BDCu;
    {
        const bool branch_taken_0x2e7bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7bdc) {
            ctx->pc = 0x2E7D00u;
            goto label_2e7d00;
        }
    }
    ctx->pc = 0x2E7BE4u;
label_2e7be4:
    // 0x2e7be4: 0x8ea20114  lw          $v0, 0x114($s5)
    ctx->pc = 0x2e7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
label_2e7be8:
    // 0x2e7be8: 0xc04ab66  jal         func_12AD98
label_2e7bec:
    if (ctx->pc == 0x2E7BECu) {
        ctx->pc = 0x2E7BECu;
            // 0x2e7bec: 0xc4560000  lwc1        $f22, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->pc = 0x2E7BF0u;
        goto label_2e7bf0;
    }
    ctx->pc = 0x2E7BE8u;
    SET_GPR_U32(ctx, 31, 0x2E7BF0u);
    ctx->pc = 0x2E7BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7BE8u;
            // 0x2e7bec: 0xc4560000  lwc1        $f22, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7BF0u; }
        if (ctx->pc != 0x2E7BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7BF0u; }
        if (ctx->pc != 0x2E7BF0u) { return; }
    }
    ctx->pc = 0x2E7BF0u;
label_2e7bf0:
    // 0x2e7bf0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e7bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2e7bf4:
    // 0x2e7bf4: 0xc04ab66  jal         func_12AD98
label_2e7bf8:
    if (ctx->pc == 0x2E7BF8u) {
        ctx->pc = 0x2E7BF8u;
            // 0x2e7bf8: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2E7BFCu;
        goto label_2e7bfc;
    }
    ctx->pc = 0x2E7BF4u;
    SET_GPR_U32(ctx, 31, 0x2E7BFCu);
    ctx->pc = 0x2E7BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7BF4u;
            // 0x2e7bf8: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7BFCu; }
        if (ctx->pc != 0x2E7BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7BFCu; }
        if (ctx->pc != 0x2E7BFCu) { return; }
    }
    ctx->pc = 0x2E7BFCu;
label_2e7bfc:
    // 0x2e7bfc: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x2e7bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_2e7c00:
    // 0x2e7c00: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x2e7c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_2e7c04:
    // 0x2e7c04: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2e7c04u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_2e7c08:
    // 0x2e7c08: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x2e7c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_2e7c0c:
    // 0x2e7c0c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x2e7c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_2e7c10:
    // 0x2e7c10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7c14:
    // 0x2e7c14: 0x1010  mfhi        $v0
    ctx->pc = 0x2e7c14u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2e7c18:
    // 0x2e7c18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e7c1c:
    // 0x2e7c1c: 0x0  nop
    ctx->pc = 0x2e7c1cu;
    // NOP
label_2e7c20:
    // 0x2e7c20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e7c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2e7c24:
    // 0x2e7c24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e7c24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e7c28:
    // 0x2e7c28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7c28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e7c2c:
    // 0x2e7c2c: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x2e7c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_2e7c30:
    // 0x2e7c30: 0xc04ce84  jal         func_133A10
label_2e7c34:
    if (ctx->pc == 0x2E7C34u) {
        ctx->pc = 0x2E7C34u;
            // 0x2e7c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C38u;
        goto label_2e7c38;
    }
    ctx->pc = 0x2E7C30u;
    SET_GPR_U32(ctx, 31, 0x2E7C38u);
    ctx->pc = 0x2E7C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7C30u;
            // 0x2e7c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7C38u; }
        if (ctx->pc != 0x2E7C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7C38u; }
        if (ctx->pc != 0x2E7C38u) { return; }
    }
    ctx->pc = 0x2E7C38u;
label_2e7c38:
    // 0x2e7c38: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x2e7c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e7c3c:
    // 0x2e7c3c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e7c3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e7c40:
    // 0x2e7c40: 0x0  nop
    ctx->pc = 0x2e7c40u;
    // NOP
label_2e7c44:
    // 0x2e7c44: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x2e7c44u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2e7c48:
    // 0x2e7c48: 0x4600b01c  madd.s      $f0, $f22, $f0
    ctx->pc = 0x2e7c48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[0]));
label_2e7c4c:
    // 0x2e7c4c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2e7c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2e7c50:
    // 0x2e7c50: 0x8ea20114  lw          $v0, 0x114($s5)
    ctx->pc = 0x2e7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
label_2e7c54:
    // 0x2e7c54: 0xc04ab66  jal         func_12AD98
label_2e7c58:
    if (ctx->pc == 0x2E7C58u) {
        ctx->pc = 0x2E7C58u;
            // 0x2e7c58: 0xc4550004  lwc1        $f21, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->pc = 0x2E7C5Cu;
        goto label_2e7c5c;
    }
    ctx->pc = 0x2E7C54u;
    SET_GPR_U32(ctx, 31, 0x2E7C5Cu);
    ctx->pc = 0x2E7C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7C54u;
            // 0x2e7c58: 0xc4550004  lwc1        $f21, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7C5Cu; }
        if (ctx->pc != 0x2E7C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7C5Cu; }
        if (ctx->pc != 0x2E7C5Cu) { return; }
    }
    ctx->pc = 0x2E7C5Cu;
label_2e7c5c:
    // 0x2e7c5c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e7c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2e7c60:
    // 0x2e7c60: 0xc04ab66  jal         func_12AD98
label_2e7c64:
    if (ctx->pc == 0x2E7C64u) {
        ctx->pc = 0x2E7C64u;
            // 0x2e7c64: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2E7C68u;
        goto label_2e7c68;
    }
    ctx->pc = 0x2E7C60u;
    SET_GPR_U32(ctx, 31, 0x2E7C68u);
    ctx->pc = 0x2E7C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7C60u;
            // 0x2e7c64: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7C68u; }
        if (ctx->pc != 0x2E7C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7C68u; }
        if (ctx->pc != 0x2E7C68u) { return; }
    }
    ctx->pc = 0x2E7C68u;
label_2e7c68:
    // 0x2e7c68: 0x512025  or          $a0, $v0, $s1
    ctx->pc = 0x2e7c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_2e7c6c:
    // 0x2e7c6c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2e7c70:
    // 0x2e7c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7c74:
    // 0x2e7c74: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x2e7c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_2e7c78:
    // 0x2e7c78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e7c7c:
    // 0x2e7c7c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_2e7c80:
    if (ctx->pc == 0x2E7C80u) {
        ctx->pc = 0x2E7C80u;
            // 0x2e7c80: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x2E7C84u;
        goto label_2e7c84;
    }
    ctx->pc = 0x2E7C7Cu;
    {
        const bool branch_taken_0x2e7c7c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E7C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7C7Cu;
            // 0x2e7c80: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c7c) {
            ctx->pc = 0x2E7C90u;
            goto label_2e7c90;
        }
    }
    ctx->pc = 0x2E7C84u;
label_2e7c84:
    // 0x2e7c84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e7c84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7c88:
    // 0x2e7c88: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e7c8c:
    if (ctx->pc == 0x2E7C8Cu) {
        ctx->pc = 0x2E7C8Cu;
            // 0x2e7c8c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2E7C90u;
        goto label_2e7c90;
    }
    ctx->pc = 0x2E7C88u;
    {
        const bool branch_taken_0x2e7c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7C88u;
            // 0x2e7c8c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7c88) {
            ctx->pc = 0x2E7CACu;
            goto label_2e7cac;
        }
    }
    ctx->pc = 0x2E7C90u;
label_2e7c90:
    // 0x2e7c90: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2e7c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2e7c94:
    // 0x2e7c94: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e7c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2e7c98:
    // 0x2e7c98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e7c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e7c9c:
    // 0x2e7c9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e7c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7ca0:
    // 0x2e7ca0: 0x0  nop
    ctx->pc = 0x2e7ca0u;
    // NOP
label_2e7ca4:
    // 0x2e7ca4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e7ca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e7ca8:
    // 0x2e7ca8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e7ca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e7cac:
    // 0x2e7cac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e7cacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e7cb0:
    // 0x2e7cb0: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x2e7cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_2e7cb4:
    // 0x2e7cb4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x2e7cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_2e7cb8:
    // 0x2e7cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7cbc:
    // 0x2e7cbc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2e7cbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2e7cc0:
    // 0x2e7cc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e7cc4:
    // 0x2e7cc4: 0x0  nop
    ctx->pc = 0x2e7cc4u;
    // NOP
label_2e7cc8:
    // 0x2e7cc8: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x2e7cc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_2e7ccc:
    // 0x2e7ccc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2e7cccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2e7cd0:
    // 0x2e7cd0: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x2e7cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7cd4:
    // 0x2e7cd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e7cd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e7cd8:
    // 0x2e7cd8: 0xc04ceac  jal         func_133AB0
label_2e7cdc:
    if (ctx->pc == 0x2E7CDCu) {
        ctx->pc = 0x2E7CDCu;
            // 0x2e7cdc: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->pc = 0x2E7CE0u;
        goto label_2e7ce0;
    }
    ctx->pc = 0x2E7CD8u;
    SET_GPR_U32(ctx, 31, 0x2E7CE0u);
    ctx->pc = 0x2E7CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7CD8u;
            // 0x2e7cdc: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AB0u;
    if (runtime->hasFunction(0x133AB0u)) {
        auto targetFn = runtime->lookupFunction(0x133AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7CE0u; }
        if (ctx->pc != 0x2E7CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AB0_0x133ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7CE0u; }
        if (ctx->pc != 0x2E7CE0u) { return; }
    }
    ctx->pc = 0x2E7CE0u;
label_2e7ce0:
    // 0x2e7ce0: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x2e7ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e7ce4:
    // 0x2e7ce4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e7ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e7ce8:
    // 0x2e7ce8: 0x0  nop
    ctx->pc = 0x2e7ce8u;
    // NOP
label_2e7cec:
    // 0x2e7cec: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x2e7cecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2e7cf0:
    // 0x2e7cf0: 0x4600b01c  madd.s      $f0, $f22, $f0
    ctx->pc = 0x2e7cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[0]));
label_2e7cf4:
    // 0x2e7cf4: 0x10000068  b           . + 4 + (0x68 << 2)
label_2e7cf8:
    if (ctx->pc == 0x2E7CF8u) {
        ctx->pc = 0x2E7CF8u;
            // 0x2e7cf8: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->pc = 0x2E7CFCu;
        goto label_2e7cfc;
    }
    ctx->pc = 0x2E7CF4u;
    {
        const bool branch_taken_0x2e7cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7CF4u;
            // 0x2e7cf8: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7cf4) {
            ctx->pc = 0x2E7E98u;
            goto label_2e7e98;
        }
    }
    ctx->pc = 0x2E7CFCu;
label_2e7cfc:
    // 0x2e7cfc: 0x0  nop
    ctx->pc = 0x2e7cfcu;
    // NOP
label_2e7d00:
    // 0x2e7d00: 0x8ea20114  lw          $v0, 0x114($s5)
    ctx->pc = 0x2e7d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
label_2e7d04:
    // 0x2e7d04: 0xc04ab66  jal         func_12AD98
label_2e7d08:
    if (ctx->pc == 0x2E7D08u) {
        ctx->pc = 0x2E7D08u;
            // 0x2e7d08: 0xc4550000  lwc1        $f21, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->pc = 0x2E7D0Cu;
        goto label_2e7d0c;
    }
    ctx->pc = 0x2E7D04u;
    SET_GPR_U32(ctx, 31, 0x2E7D0Cu);
    ctx->pc = 0x2E7D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D04u;
            // 0x2e7d08: 0xc4550000  lwc1        $f21, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D0Cu; }
        if (ctx->pc != 0x2E7D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D0Cu; }
        if (ctx->pc != 0x2E7D0Cu) { return; }
    }
    ctx->pc = 0x2E7D0Cu;
label_2e7d0c:
    // 0x2e7d0c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e7d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2e7d10:
    // 0x2e7d10: 0xc04ab66  jal         func_12AD98
label_2e7d14:
    if (ctx->pc == 0x2E7D14u) {
        ctx->pc = 0x2E7D14u;
            // 0x2e7d14: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2E7D18u;
        goto label_2e7d18;
    }
    ctx->pc = 0x2E7D10u;
    SET_GPR_U32(ctx, 31, 0x2E7D18u);
    ctx->pc = 0x2E7D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D10u;
            // 0x2e7d14: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D18u; }
        if (ctx->pc != 0x2E7D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D18u; }
        if (ctx->pc != 0x2E7D18u) { return; }
    }
    ctx->pc = 0x2E7D18u;
label_2e7d18:
    // 0x2e7d18: 0x502025  or          $a0, $v0, $s0
    ctx->pc = 0x2e7d18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_2e7d1c:
    // 0x2e7d1c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e7d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2e7d20:
    // 0x2e7d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7d24:
    // 0x2e7d24: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x2e7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_2e7d28:
    // 0x2e7d28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e7d2c:
    // 0x2e7d2c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_2e7d30:
    if (ctx->pc == 0x2E7D30u) {
        ctx->pc = 0x2E7D30u;
            // 0x2e7d30: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x2E7D34u;
        goto label_2e7d34;
    }
    ctx->pc = 0x2E7D2Cu;
    {
        const bool branch_taken_0x2e7d2c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E7D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D2Cu;
            // 0x2e7d30: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d2c) {
            ctx->pc = 0x2E7D40u;
            goto label_2e7d40;
        }
    }
    ctx->pc = 0x2E7D34u;
label_2e7d34:
    // 0x2e7d34: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e7d34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7d38:
    // 0x2e7d38: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e7d3c:
    if (ctx->pc == 0x2E7D3Cu) {
        ctx->pc = 0x2E7D3Cu;
            // 0x2e7d3c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2E7D40u;
        goto label_2e7d40;
    }
    ctx->pc = 0x2E7D38u;
    {
        const bool branch_taken_0x2e7d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D38u;
            // 0x2e7d3c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7d38) {
            ctx->pc = 0x2E7D5Cu;
            goto label_2e7d5c;
        }
    }
    ctx->pc = 0x2E7D40u;
label_2e7d40:
    // 0x2e7d40: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2e7d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2e7d44:
    // 0x2e7d44: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e7d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2e7d48:
    // 0x2e7d48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e7d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e7d4c:
    // 0x2e7d4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e7d4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7d50:
    // 0x2e7d50: 0x0  nop
    ctx->pc = 0x2e7d50u;
    // NOP
label_2e7d54:
    // 0x2e7d54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e7d54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e7d58:
    // 0x2e7d58: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e7d58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e7d5c:
    // 0x2e7d5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e7d5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e7d60:
    // 0x2e7d60: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x2e7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_2e7d64:
    // 0x2e7d64: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x2e7d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_2e7d68:
    // 0x2e7d68: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2e7d68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2e7d6c:
    // 0x2e7d6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e7d70:
    // 0x2e7d70: 0x0  nop
    ctx->pc = 0x2e7d70u;
    // NOP
label_2e7d74:
    // 0x2e7d74: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x2e7d74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_2e7d78:
    // 0x2e7d78: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2e7d78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2e7d7c:
    // 0x2e7d7c: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x2e7d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7d80:
    // 0x2e7d80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e7d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e7d84:
    // 0x2e7d84: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2e7d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2e7d88:
    // 0x2e7d88: 0x8ea20114  lw          $v0, 0x114($s5)
    ctx->pc = 0x2e7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
label_2e7d8c:
    // 0x2e7d8c: 0xc04ab66  jal         func_12AD98
label_2e7d90:
    if (ctx->pc == 0x2E7D90u) {
        ctx->pc = 0x2E7D90u;
            // 0x2e7d90: 0xc4550004  lwc1        $f21, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->pc = 0x2E7D94u;
        goto label_2e7d94;
    }
    ctx->pc = 0x2E7D8Cu;
    SET_GPR_U32(ctx, 31, 0x2E7D94u);
    ctx->pc = 0x2E7D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D8Cu;
            // 0x2e7d90: 0xc4550004  lwc1        $f21, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D94u; }
        if (ctx->pc != 0x2E7D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7D94u; }
        if (ctx->pc != 0x2E7D94u) { return; }
    }
    ctx->pc = 0x2E7D94u;
label_2e7d94:
    // 0x2e7d94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e7d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2e7d98:
    // 0x2e7d98: 0xc04ab66  jal         func_12AD98
label_2e7d9c:
    if (ctx->pc == 0x2E7D9Cu) {
        ctx->pc = 0x2E7D9Cu;
            // 0x2e7d9c: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2E7DA0u;
        goto label_2e7da0;
    }
    ctx->pc = 0x2E7D98u;
    SET_GPR_U32(ctx, 31, 0x2E7DA0u);
    ctx->pc = 0x2E7D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7D98u;
            // 0x2e7d9c: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7DA0u; }
        if (ctx->pc != 0x2E7DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7DA0u; }
        if (ctx->pc != 0x2E7DA0u) { return; }
    }
    ctx->pc = 0x2E7DA0u;
label_2e7da0:
    // 0x2e7da0: 0x502025  or          $a0, $v0, $s0
    ctx->pc = 0x2e7da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_2e7da4:
    // 0x2e7da4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2e7da8:
    // 0x2e7da8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7dac:
    // 0x2e7dac: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x2e7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_2e7db0:
    // 0x2e7db0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e7db4:
    // 0x2e7db4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_2e7db8:
    if (ctx->pc == 0x2E7DB8u) {
        ctx->pc = 0x2E7DB8u;
            // 0x2e7db8: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x2E7DBCu;
        goto label_2e7dbc;
    }
    ctx->pc = 0x2E7DB4u;
    {
        const bool branch_taken_0x2e7db4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E7DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7DB4u;
            // 0x2e7db8: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7db4) {
            ctx->pc = 0x2E7DC8u;
            goto label_2e7dc8;
        }
    }
    ctx->pc = 0x2E7DBCu;
label_2e7dbc:
    // 0x2e7dbc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e7dbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7dc0:
    // 0x2e7dc0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e7dc4:
    if (ctx->pc == 0x2E7DC4u) {
        ctx->pc = 0x2E7DC4u;
            // 0x2e7dc4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2E7DC8u;
        goto label_2e7dc8;
    }
    ctx->pc = 0x2E7DC0u;
    {
        const bool branch_taken_0x2e7dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7DC0u;
            // 0x2e7dc4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7dc0) {
            ctx->pc = 0x2E7DE4u;
            goto label_2e7de4;
        }
    }
    ctx->pc = 0x2E7DC8u;
label_2e7dc8:
    // 0x2e7dc8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2e7dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2e7dcc:
    // 0x2e7dcc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e7dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2e7dd0:
    // 0x2e7dd0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e7dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e7dd4:
    // 0x2e7dd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e7dd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7dd8:
    // 0x2e7dd8: 0x0  nop
    ctx->pc = 0x2e7dd8u;
    // NOP
label_2e7ddc:
    // 0x2e7ddc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e7ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e7de0:
    // 0x2e7de0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e7de0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e7de4:
    // 0x2e7de4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e7de4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e7de8:
    // 0x2e7de8: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x2e7de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_2e7dec:
    // 0x2e7dec: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x2e7decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_2e7df0:
    // 0x2e7df0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2e7df0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2e7df4:
    // 0x2e7df4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e7df8:
    // 0x2e7df8: 0x0  nop
    ctx->pc = 0x2e7df8u;
    // NOP
label_2e7dfc:
    // 0x2e7dfc: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x2e7dfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_2e7e00:
    // 0x2e7e00: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2e7e00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2e7e04:
    // 0x2e7e04: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x2e7e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7e08:
    // 0x2e7e08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e7e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e7e0c:
    // 0x2e7e0c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2e7e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_2e7e10:
    // 0x2e7e10: 0x8ea20114  lw          $v0, 0x114($s5)
    ctx->pc = 0x2e7e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
label_2e7e14:
    // 0x2e7e14: 0xc04ab66  jal         func_12AD98
label_2e7e18:
    if (ctx->pc == 0x2E7E18u) {
        ctx->pc = 0x2E7E18u;
            // 0x2e7e18: 0xc4550008  lwc1        $f21, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->pc = 0x2E7E1Cu;
        goto label_2e7e1c;
    }
    ctx->pc = 0x2E7E14u;
    SET_GPR_U32(ctx, 31, 0x2E7E1Cu);
    ctx->pc = 0x2E7E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7E14u;
            // 0x2e7e18: 0xc4550008  lwc1        $f21, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7E1Cu; }
        if (ctx->pc != 0x2E7E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7E1Cu; }
        if (ctx->pc != 0x2E7E1Cu) { return; }
    }
    ctx->pc = 0x2E7E1Cu;
label_2e7e1c:
    // 0x2e7e1c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e7e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2e7e20:
    // 0x2e7e20: 0xc04ab66  jal         func_12AD98
label_2e7e24:
    if (ctx->pc == 0x2E7E24u) {
        ctx->pc = 0x2E7E24u;
            // 0x2e7e24: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2E7E28u;
        goto label_2e7e28;
    }
    ctx->pc = 0x2E7E20u;
    SET_GPR_U32(ctx, 31, 0x2E7E28u);
    ctx->pc = 0x2E7E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7E20u;
            // 0x2e7e24: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7E28u; }
        if (ctx->pc != 0x2E7E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7E28u; }
        if (ctx->pc != 0x2E7E28u) { return; }
    }
    ctx->pc = 0x2E7E28u;
label_2e7e28:
    // 0x2e7e28: 0x502025  or          $a0, $v0, $s0
    ctx->pc = 0x2e7e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_2e7e2c:
    // 0x2e7e2c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e7e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2e7e30:
    // 0x2e7e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7e34:
    // 0x2e7e34: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x2e7e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_2e7e38:
    // 0x2e7e38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e7e3c:
    // 0x2e7e3c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_2e7e40:
    if (ctx->pc == 0x2E7E40u) {
        ctx->pc = 0x2E7E40u;
            // 0x2e7e40: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x2E7E44u;
        goto label_2e7e44;
    }
    ctx->pc = 0x2E7E3Cu;
    {
        const bool branch_taken_0x2e7e3c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E7E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7E3Cu;
            // 0x2e7e40: 0x46150082  mul.s       $f2, $f0, $f21 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e3c) {
            ctx->pc = 0x2E7E50u;
            goto label_2e7e50;
        }
    }
    ctx->pc = 0x2E7E44u;
label_2e7e44:
    // 0x2e7e44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e7e44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7e48:
    // 0x2e7e48: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e7e4c:
    if (ctx->pc == 0x2E7E4Cu) {
        ctx->pc = 0x2E7E4Cu;
            // 0x2e7e4c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2E7E50u;
        goto label_2e7e50;
    }
    ctx->pc = 0x2E7E48u;
    {
        const bool branch_taken_0x2e7e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7E48u;
            // 0x2e7e4c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e48) {
            ctx->pc = 0x2E7E6Cu;
            goto label_2e7e6c;
        }
    }
    ctx->pc = 0x2E7E50u;
label_2e7e50:
    // 0x2e7e50: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2e7e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2e7e54:
    // 0x2e7e54: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e7e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2e7e58:
    // 0x2e7e58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e7e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e7e5c:
    // 0x2e7e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e7e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e7e60:
    // 0x2e7e60: 0x0  nop
    ctx->pc = 0x2e7e60u;
    // NOP
label_2e7e64:
    // 0x2e7e64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e7e64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e7e68:
    // 0x2e7e68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e7e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e7e6c:
    // 0x2e7e6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e7e6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e7e70:
    // 0x2e7e70: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x2e7e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_2e7e74:
    // 0x2e7e74: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x2e7e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_2e7e78:
    // 0x2e7e78: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2e7e78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2e7e7c:
    // 0x2e7e7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e7e80:
    // 0x2e7e80: 0x0  nop
    ctx->pc = 0x2e7e80u;
    // NOP
label_2e7e84:
    // 0x2e7e84: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x2e7e84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_2e7e88:
    // 0x2e7e88: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2e7e88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2e7e8c:
    // 0x2e7e8c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x2e7e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e7e90:
    // 0x2e7e90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e7e90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e7e94:
    // 0x2e7e94: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2e7e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_2e7e98:
    // 0x2e7e98: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_2e7e9c:
    if (ctx->pc == 0x2E7E9Cu) {
        ctx->pc = 0x2E7EA0u;
        goto label_2e7ea0;
    }
    ctx->pc = 0x2E7E98u;
    {
        const bool branch_taken_0x2e7e98 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7e98) {
            ctx->pc = 0x2E7EB0u;
            goto label_2e7eb0;
        }
    }
    ctx->pc = 0x2E7EA0u;
label_2e7ea0:
    // 0x2e7ea0: 0x8ea50104  lw          $a1, 0x104($s5)
    ctx->pc = 0x2e7ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
label_2e7ea4:
    // 0x2e7ea4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2e7ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2e7ea8:
    // 0x2e7ea8: 0xc04cca0  jal         func_133280
label_2e7eac:
    if (ctx->pc == 0x2E7EACu) {
        ctx->pc = 0x2E7EACu;
            // 0x2e7eac: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EB0u;
        goto label_2e7eb0;
    }
    ctx->pc = 0x2E7EA8u;
    SET_GPR_U32(ctx, 31, 0x2E7EB0u);
    ctx->pc = 0x2E7EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7EA8u;
            // 0x2e7eac: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7EB0u; }
        if (ctx->pc != 0x2E7EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7EB0u; }
        if (ctx->pc != 0x2E7EB0u) { return; }
    }
    ctx->pc = 0x2E7EB0u;
label_2e7eb0:
    // 0x2e7eb0: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e7eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_2e7eb4:
    // 0x2e7eb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e7eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e7eb8:
    // 0x2e7eb8: 0xc04cbe0  jal         func_132F80
label_2e7ebc:
    if (ctx->pc == 0x2E7EBCu) {
        ctx->pc = 0x2E7EBCu;
            // 0x2e7ebc: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x2E7EC0u;
        goto label_2e7ec0;
    }
    ctx->pc = 0x2E7EB8u;
    SET_GPR_U32(ctx, 31, 0x2E7EC0u);
    ctx->pc = 0x2E7EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7EB8u;
            // 0x2e7ebc: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7EC0u; }
        if (ctx->pc != 0x2E7EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7EC0u; }
        if (ctx->pc != 0x2E7EC0u) { return; }
    }
    ctx->pc = 0x2E7EC0u;
label_2e7ec0:
    // 0x2e7ec0: 0x1000fdc1  b           . + 4 + (-0x23F << 2)
label_2e7ec4:
    if (ctx->pc == 0x2E7EC4u) {
        ctx->pc = 0x2E7EC8u;
        goto label_2e7ec8;
    }
    ctx->pc = 0x2E7EC0u;
    {
        const bool branch_taken_0x2e7ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7ec0) {
            ctx->pc = 0x2E75C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e75c8;
        }
    }
    ctx->pc = 0x2E7EC8u;
label_2e7ec8:
    // 0x2e7ec8: 0x8ea300f4  lw          $v1, 0xF4($s5)
    ctx->pc = 0x2e7ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_2e7ecc:
    // 0x2e7ecc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e7eccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2e7ed0:
    // 0x2e7ed0: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x2e7ed0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_2e7ed4:
    // 0x2e7ed4: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2e7ed4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_2e7ed8:
    // 0x2e7ed8: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x2e7ed8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2e7edc:
    // 0x2e7edc: 0x1460fce0  bnez        $v1, . + 4 + (-0x320 << 2)
label_2e7ee0:
    if (ctx->pc == 0x2E7EE0u) {
        ctx->pc = 0x2E7EE0u;
            // 0x2e7ee0: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x2E7EE4u;
        goto label_2e7ee4;
    }
    ctx->pc = 0x2E7EDCu;
    {
        const bool branch_taken_0x2e7edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7EDCu;
            // 0x2e7ee0: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7edc) {
            ctx->pc = 0x2E7260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e7260;
        }
    }
    ctx->pc = 0x2E7EE4u;
label_2e7ee4:
    // 0x2e7ee4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2e7ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2e7ee8:
    // 0x2e7ee8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2e7ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2e7eec:
    // 0x2e7eec: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2e7eecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2e7ef0:
    // 0x2e7ef0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e7ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2e7ef4:
    // 0x2e7ef4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e7ef4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e7ef8:
    // 0x2e7ef8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e7ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e7efc:
    // 0x2e7efc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e7efcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e7f00:
    // 0x2e7f00: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e7f00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e7f04:
    // 0x2e7f04: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e7f04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e7f08:
    // 0x2e7f08: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e7f08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e7f0c:
    // 0x2e7f0c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e7f0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e7f10:
    // 0x2e7f10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e7f10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e7f14:
    // 0x2e7f14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e7f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e7f18:
    // 0x2e7f18: 0x3e00008  jr          $ra
label_2e7f1c:
    if (ctx->pc == 0x2E7F1Cu) {
        ctx->pc = 0x2E7F1Cu;
            // 0x2e7f1c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x2E7F20u;
        goto label_fallthrough_0x2e7f18;
    }
    ctx->pc = 0x2E7F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7F18u;
            // 0x2e7f1c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e7f18:
    ctx->pc = 0x2E7F20u;
}
