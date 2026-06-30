#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F72A0
// Address: 0x2f72a0 - 0x2f7920
void sub_002F72A0_0x2f72a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F72A0_0x2f72a0");
#endif

    switch (ctx->pc) {
        case 0x2f72a0u: goto label_2f72a0;
        case 0x2f72a4u: goto label_2f72a4;
        case 0x2f72a8u: goto label_2f72a8;
        case 0x2f72acu: goto label_2f72ac;
        case 0x2f72b0u: goto label_2f72b0;
        case 0x2f72b4u: goto label_2f72b4;
        case 0x2f72b8u: goto label_2f72b8;
        case 0x2f72bcu: goto label_2f72bc;
        case 0x2f72c0u: goto label_2f72c0;
        case 0x2f72c4u: goto label_2f72c4;
        case 0x2f72c8u: goto label_2f72c8;
        case 0x2f72ccu: goto label_2f72cc;
        case 0x2f72d0u: goto label_2f72d0;
        case 0x2f72d4u: goto label_2f72d4;
        case 0x2f72d8u: goto label_2f72d8;
        case 0x2f72dcu: goto label_2f72dc;
        case 0x2f72e0u: goto label_2f72e0;
        case 0x2f72e4u: goto label_2f72e4;
        case 0x2f72e8u: goto label_2f72e8;
        case 0x2f72ecu: goto label_2f72ec;
        case 0x2f72f0u: goto label_2f72f0;
        case 0x2f72f4u: goto label_2f72f4;
        case 0x2f72f8u: goto label_2f72f8;
        case 0x2f72fcu: goto label_2f72fc;
        case 0x2f7300u: goto label_2f7300;
        case 0x2f7304u: goto label_2f7304;
        case 0x2f7308u: goto label_2f7308;
        case 0x2f730cu: goto label_2f730c;
        case 0x2f7310u: goto label_2f7310;
        case 0x2f7314u: goto label_2f7314;
        case 0x2f7318u: goto label_2f7318;
        case 0x2f731cu: goto label_2f731c;
        case 0x2f7320u: goto label_2f7320;
        case 0x2f7324u: goto label_2f7324;
        case 0x2f7328u: goto label_2f7328;
        case 0x2f732cu: goto label_2f732c;
        case 0x2f7330u: goto label_2f7330;
        case 0x2f7334u: goto label_2f7334;
        case 0x2f7338u: goto label_2f7338;
        case 0x2f733cu: goto label_2f733c;
        case 0x2f7340u: goto label_2f7340;
        case 0x2f7344u: goto label_2f7344;
        case 0x2f7348u: goto label_2f7348;
        case 0x2f734cu: goto label_2f734c;
        case 0x2f7350u: goto label_2f7350;
        case 0x2f7354u: goto label_2f7354;
        case 0x2f7358u: goto label_2f7358;
        case 0x2f735cu: goto label_2f735c;
        case 0x2f7360u: goto label_2f7360;
        case 0x2f7364u: goto label_2f7364;
        case 0x2f7368u: goto label_2f7368;
        case 0x2f736cu: goto label_2f736c;
        case 0x2f7370u: goto label_2f7370;
        case 0x2f7374u: goto label_2f7374;
        case 0x2f7378u: goto label_2f7378;
        case 0x2f737cu: goto label_2f737c;
        case 0x2f7380u: goto label_2f7380;
        case 0x2f7384u: goto label_2f7384;
        case 0x2f7388u: goto label_2f7388;
        case 0x2f738cu: goto label_2f738c;
        case 0x2f7390u: goto label_2f7390;
        case 0x2f7394u: goto label_2f7394;
        case 0x2f7398u: goto label_2f7398;
        case 0x2f739cu: goto label_2f739c;
        case 0x2f73a0u: goto label_2f73a0;
        case 0x2f73a4u: goto label_2f73a4;
        case 0x2f73a8u: goto label_2f73a8;
        case 0x2f73acu: goto label_2f73ac;
        case 0x2f73b0u: goto label_2f73b0;
        case 0x2f73b4u: goto label_2f73b4;
        case 0x2f73b8u: goto label_2f73b8;
        case 0x2f73bcu: goto label_2f73bc;
        case 0x2f73c0u: goto label_2f73c0;
        case 0x2f73c4u: goto label_2f73c4;
        case 0x2f73c8u: goto label_2f73c8;
        case 0x2f73ccu: goto label_2f73cc;
        case 0x2f73d0u: goto label_2f73d0;
        case 0x2f73d4u: goto label_2f73d4;
        case 0x2f73d8u: goto label_2f73d8;
        case 0x2f73dcu: goto label_2f73dc;
        case 0x2f73e0u: goto label_2f73e0;
        case 0x2f73e4u: goto label_2f73e4;
        case 0x2f73e8u: goto label_2f73e8;
        case 0x2f73ecu: goto label_2f73ec;
        case 0x2f73f0u: goto label_2f73f0;
        case 0x2f73f4u: goto label_2f73f4;
        case 0x2f73f8u: goto label_2f73f8;
        case 0x2f73fcu: goto label_2f73fc;
        case 0x2f7400u: goto label_2f7400;
        case 0x2f7404u: goto label_2f7404;
        case 0x2f7408u: goto label_2f7408;
        case 0x2f740cu: goto label_2f740c;
        case 0x2f7410u: goto label_2f7410;
        case 0x2f7414u: goto label_2f7414;
        case 0x2f7418u: goto label_2f7418;
        case 0x2f741cu: goto label_2f741c;
        case 0x2f7420u: goto label_2f7420;
        case 0x2f7424u: goto label_2f7424;
        case 0x2f7428u: goto label_2f7428;
        case 0x2f742cu: goto label_2f742c;
        case 0x2f7430u: goto label_2f7430;
        case 0x2f7434u: goto label_2f7434;
        case 0x2f7438u: goto label_2f7438;
        case 0x2f743cu: goto label_2f743c;
        case 0x2f7440u: goto label_2f7440;
        case 0x2f7444u: goto label_2f7444;
        case 0x2f7448u: goto label_2f7448;
        case 0x2f744cu: goto label_2f744c;
        case 0x2f7450u: goto label_2f7450;
        case 0x2f7454u: goto label_2f7454;
        case 0x2f7458u: goto label_2f7458;
        case 0x2f745cu: goto label_2f745c;
        case 0x2f7460u: goto label_2f7460;
        case 0x2f7464u: goto label_2f7464;
        case 0x2f7468u: goto label_2f7468;
        case 0x2f746cu: goto label_2f746c;
        case 0x2f7470u: goto label_2f7470;
        case 0x2f7474u: goto label_2f7474;
        case 0x2f7478u: goto label_2f7478;
        case 0x2f747cu: goto label_2f747c;
        case 0x2f7480u: goto label_2f7480;
        case 0x2f7484u: goto label_2f7484;
        case 0x2f7488u: goto label_2f7488;
        case 0x2f748cu: goto label_2f748c;
        case 0x2f7490u: goto label_2f7490;
        case 0x2f7494u: goto label_2f7494;
        case 0x2f7498u: goto label_2f7498;
        case 0x2f749cu: goto label_2f749c;
        case 0x2f74a0u: goto label_2f74a0;
        case 0x2f74a4u: goto label_2f74a4;
        case 0x2f74a8u: goto label_2f74a8;
        case 0x2f74acu: goto label_2f74ac;
        case 0x2f74b0u: goto label_2f74b0;
        case 0x2f74b4u: goto label_2f74b4;
        case 0x2f74b8u: goto label_2f74b8;
        case 0x2f74bcu: goto label_2f74bc;
        case 0x2f74c0u: goto label_2f74c0;
        case 0x2f74c4u: goto label_2f74c4;
        case 0x2f74c8u: goto label_2f74c8;
        case 0x2f74ccu: goto label_2f74cc;
        case 0x2f74d0u: goto label_2f74d0;
        case 0x2f74d4u: goto label_2f74d4;
        case 0x2f74d8u: goto label_2f74d8;
        case 0x2f74dcu: goto label_2f74dc;
        case 0x2f74e0u: goto label_2f74e0;
        case 0x2f74e4u: goto label_2f74e4;
        case 0x2f74e8u: goto label_2f74e8;
        case 0x2f74ecu: goto label_2f74ec;
        case 0x2f74f0u: goto label_2f74f0;
        case 0x2f74f4u: goto label_2f74f4;
        case 0x2f74f8u: goto label_2f74f8;
        case 0x2f74fcu: goto label_2f74fc;
        case 0x2f7500u: goto label_2f7500;
        case 0x2f7504u: goto label_2f7504;
        case 0x2f7508u: goto label_2f7508;
        case 0x2f750cu: goto label_2f750c;
        case 0x2f7510u: goto label_2f7510;
        case 0x2f7514u: goto label_2f7514;
        case 0x2f7518u: goto label_2f7518;
        case 0x2f751cu: goto label_2f751c;
        case 0x2f7520u: goto label_2f7520;
        case 0x2f7524u: goto label_2f7524;
        case 0x2f7528u: goto label_2f7528;
        case 0x2f752cu: goto label_2f752c;
        case 0x2f7530u: goto label_2f7530;
        case 0x2f7534u: goto label_2f7534;
        case 0x2f7538u: goto label_2f7538;
        case 0x2f753cu: goto label_2f753c;
        case 0x2f7540u: goto label_2f7540;
        case 0x2f7544u: goto label_2f7544;
        case 0x2f7548u: goto label_2f7548;
        case 0x2f754cu: goto label_2f754c;
        case 0x2f7550u: goto label_2f7550;
        case 0x2f7554u: goto label_2f7554;
        case 0x2f7558u: goto label_2f7558;
        case 0x2f755cu: goto label_2f755c;
        case 0x2f7560u: goto label_2f7560;
        case 0x2f7564u: goto label_2f7564;
        case 0x2f7568u: goto label_2f7568;
        case 0x2f756cu: goto label_2f756c;
        case 0x2f7570u: goto label_2f7570;
        case 0x2f7574u: goto label_2f7574;
        case 0x2f7578u: goto label_2f7578;
        case 0x2f757cu: goto label_2f757c;
        case 0x2f7580u: goto label_2f7580;
        case 0x2f7584u: goto label_2f7584;
        case 0x2f7588u: goto label_2f7588;
        case 0x2f758cu: goto label_2f758c;
        case 0x2f7590u: goto label_2f7590;
        case 0x2f7594u: goto label_2f7594;
        case 0x2f7598u: goto label_2f7598;
        case 0x2f759cu: goto label_2f759c;
        case 0x2f75a0u: goto label_2f75a0;
        case 0x2f75a4u: goto label_2f75a4;
        case 0x2f75a8u: goto label_2f75a8;
        case 0x2f75acu: goto label_2f75ac;
        case 0x2f75b0u: goto label_2f75b0;
        case 0x2f75b4u: goto label_2f75b4;
        case 0x2f75b8u: goto label_2f75b8;
        case 0x2f75bcu: goto label_2f75bc;
        case 0x2f75c0u: goto label_2f75c0;
        case 0x2f75c4u: goto label_2f75c4;
        case 0x2f75c8u: goto label_2f75c8;
        case 0x2f75ccu: goto label_2f75cc;
        case 0x2f75d0u: goto label_2f75d0;
        case 0x2f75d4u: goto label_2f75d4;
        case 0x2f75d8u: goto label_2f75d8;
        case 0x2f75dcu: goto label_2f75dc;
        case 0x2f75e0u: goto label_2f75e0;
        case 0x2f75e4u: goto label_2f75e4;
        case 0x2f75e8u: goto label_2f75e8;
        case 0x2f75ecu: goto label_2f75ec;
        case 0x2f75f0u: goto label_2f75f0;
        case 0x2f75f4u: goto label_2f75f4;
        case 0x2f75f8u: goto label_2f75f8;
        case 0x2f75fcu: goto label_2f75fc;
        case 0x2f7600u: goto label_2f7600;
        case 0x2f7604u: goto label_2f7604;
        case 0x2f7608u: goto label_2f7608;
        case 0x2f760cu: goto label_2f760c;
        case 0x2f7610u: goto label_2f7610;
        case 0x2f7614u: goto label_2f7614;
        case 0x2f7618u: goto label_2f7618;
        case 0x2f761cu: goto label_2f761c;
        case 0x2f7620u: goto label_2f7620;
        case 0x2f7624u: goto label_2f7624;
        case 0x2f7628u: goto label_2f7628;
        case 0x2f762cu: goto label_2f762c;
        case 0x2f7630u: goto label_2f7630;
        case 0x2f7634u: goto label_2f7634;
        case 0x2f7638u: goto label_2f7638;
        case 0x2f763cu: goto label_2f763c;
        case 0x2f7640u: goto label_2f7640;
        case 0x2f7644u: goto label_2f7644;
        case 0x2f7648u: goto label_2f7648;
        case 0x2f764cu: goto label_2f764c;
        case 0x2f7650u: goto label_2f7650;
        case 0x2f7654u: goto label_2f7654;
        case 0x2f7658u: goto label_2f7658;
        case 0x2f765cu: goto label_2f765c;
        case 0x2f7660u: goto label_2f7660;
        case 0x2f7664u: goto label_2f7664;
        case 0x2f7668u: goto label_2f7668;
        case 0x2f766cu: goto label_2f766c;
        case 0x2f7670u: goto label_2f7670;
        case 0x2f7674u: goto label_2f7674;
        case 0x2f7678u: goto label_2f7678;
        case 0x2f767cu: goto label_2f767c;
        case 0x2f7680u: goto label_2f7680;
        case 0x2f7684u: goto label_2f7684;
        case 0x2f7688u: goto label_2f7688;
        case 0x2f768cu: goto label_2f768c;
        case 0x2f7690u: goto label_2f7690;
        case 0x2f7694u: goto label_2f7694;
        case 0x2f7698u: goto label_2f7698;
        case 0x2f769cu: goto label_2f769c;
        case 0x2f76a0u: goto label_2f76a0;
        case 0x2f76a4u: goto label_2f76a4;
        case 0x2f76a8u: goto label_2f76a8;
        case 0x2f76acu: goto label_2f76ac;
        case 0x2f76b0u: goto label_2f76b0;
        case 0x2f76b4u: goto label_2f76b4;
        case 0x2f76b8u: goto label_2f76b8;
        case 0x2f76bcu: goto label_2f76bc;
        case 0x2f76c0u: goto label_2f76c0;
        case 0x2f76c4u: goto label_2f76c4;
        case 0x2f76c8u: goto label_2f76c8;
        case 0x2f76ccu: goto label_2f76cc;
        case 0x2f76d0u: goto label_2f76d0;
        case 0x2f76d4u: goto label_2f76d4;
        case 0x2f76d8u: goto label_2f76d8;
        case 0x2f76dcu: goto label_2f76dc;
        case 0x2f76e0u: goto label_2f76e0;
        case 0x2f76e4u: goto label_2f76e4;
        case 0x2f76e8u: goto label_2f76e8;
        case 0x2f76ecu: goto label_2f76ec;
        case 0x2f76f0u: goto label_2f76f0;
        case 0x2f76f4u: goto label_2f76f4;
        case 0x2f76f8u: goto label_2f76f8;
        case 0x2f76fcu: goto label_2f76fc;
        case 0x2f7700u: goto label_2f7700;
        case 0x2f7704u: goto label_2f7704;
        case 0x2f7708u: goto label_2f7708;
        case 0x2f770cu: goto label_2f770c;
        case 0x2f7710u: goto label_2f7710;
        case 0x2f7714u: goto label_2f7714;
        case 0x2f7718u: goto label_2f7718;
        case 0x2f771cu: goto label_2f771c;
        case 0x2f7720u: goto label_2f7720;
        case 0x2f7724u: goto label_2f7724;
        case 0x2f7728u: goto label_2f7728;
        case 0x2f772cu: goto label_2f772c;
        case 0x2f7730u: goto label_2f7730;
        case 0x2f7734u: goto label_2f7734;
        case 0x2f7738u: goto label_2f7738;
        case 0x2f773cu: goto label_2f773c;
        case 0x2f7740u: goto label_2f7740;
        case 0x2f7744u: goto label_2f7744;
        case 0x2f7748u: goto label_2f7748;
        case 0x2f774cu: goto label_2f774c;
        case 0x2f7750u: goto label_2f7750;
        case 0x2f7754u: goto label_2f7754;
        case 0x2f7758u: goto label_2f7758;
        case 0x2f775cu: goto label_2f775c;
        case 0x2f7760u: goto label_2f7760;
        case 0x2f7764u: goto label_2f7764;
        case 0x2f7768u: goto label_2f7768;
        case 0x2f776cu: goto label_2f776c;
        case 0x2f7770u: goto label_2f7770;
        case 0x2f7774u: goto label_2f7774;
        case 0x2f7778u: goto label_2f7778;
        case 0x2f777cu: goto label_2f777c;
        case 0x2f7780u: goto label_2f7780;
        case 0x2f7784u: goto label_2f7784;
        case 0x2f7788u: goto label_2f7788;
        case 0x2f778cu: goto label_2f778c;
        case 0x2f7790u: goto label_2f7790;
        case 0x2f7794u: goto label_2f7794;
        case 0x2f7798u: goto label_2f7798;
        case 0x2f779cu: goto label_2f779c;
        case 0x2f77a0u: goto label_2f77a0;
        case 0x2f77a4u: goto label_2f77a4;
        case 0x2f77a8u: goto label_2f77a8;
        case 0x2f77acu: goto label_2f77ac;
        case 0x2f77b0u: goto label_2f77b0;
        case 0x2f77b4u: goto label_2f77b4;
        case 0x2f77b8u: goto label_2f77b8;
        case 0x2f77bcu: goto label_2f77bc;
        case 0x2f77c0u: goto label_2f77c0;
        case 0x2f77c4u: goto label_2f77c4;
        case 0x2f77c8u: goto label_2f77c8;
        case 0x2f77ccu: goto label_2f77cc;
        case 0x2f77d0u: goto label_2f77d0;
        case 0x2f77d4u: goto label_2f77d4;
        case 0x2f77d8u: goto label_2f77d8;
        case 0x2f77dcu: goto label_2f77dc;
        case 0x2f77e0u: goto label_2f77e0;
        case 0x2f77e4u: goto label_2f77e4;
        case 0x2f77e8u: goto label_2f77e8;
        case 0x2f77ecu: goto label_2f77ec;
        case 0x2f77f0u: goto label_2f77f0;
        case 0x2f77f4u: goto label_2f77f4;
        case 0x2f77f8u: goto label_2f77f8;
        case 0x2f77fcu: goto label_2f77fc;
        case 0x2f7800u: goto label_2f7800;
        case 0x2f7804u: goto label_2f7804;
        case 0x2f7808u: goto label_2f7808;
        case 0x2f780cu: goto label_2f780c;
        case 0x2f7810u: goto label_2f7810;
        case 0x2f7814u: goto label_2f7814;
        case 0x2f7818u: goto label_2f7818;
        case 0x2f781cu: goto label_2f781c;
        case 0x2f7820u: goto label_2f7820;
        case 0x2f7824u: goto label_2f7824;
        case 0x2f7828u: goto label_2f7828;
        case 0x2f782cu: goto label_2f782c;
        case 0x2f7830u: goto label_2f7830;
        case 0x2f7834u: goto label_2f7834;
        case 0x2f7838u: goto label_2f7838;
        case 0x2f783cu: goto label_2f783c;
        case 0x2f7840u: goto label_2f7840;
        case 0x2f7844u: goto label_2f7844;
        case 0x2f7848u: goto label_2f7848;
        case 0x2f784cu: goto label_2f784c;
        case 0x2f7850u: goto label_2f7850;
        case 0x2f7854u: goto label_2f7854;
        case 0x2f7858u: goto label_2f7858;
        case 0x2f785cu: goto label_2f785c;
        case 0x2f7860u: goto label_2f7860;
        case 0x2f7864u: goto label_2f7864;
        case 0x2f7868u: goto label_2f7868;
        case 0x2f786cu: goto label_2f786c;
        case 0x2f7870u: goto label_2f7870;
        case 0x2f7874u: goto label_2f7874;
        case 0x2f7878u: goto label_2f7878;
        case 0x2f787cu: goto label_2f787c;
        case 0x2f7880u: goto label_2f7880;
        case 0x2f7884u: goto label_2f7884;
        case 0x2f7888u: goto label_2f7888;
        case 0x2f788cu: goto label_2f788c;
        case 0x2f7890u: goto label_2f7890;
        case 0x2f7894u: goto label_2f7894;
        case 0x2f7898u: goto label_2f7898;
        case 0x2f789cu: goto label_2f789c;
        case 0x2f78a0u: goto label_2f78a0;
        case 0x2f78a4u: goto label_2f78a4;
        case 0x2f78a8u: goto label_2f78a8;
        case 0x2f78acu: goto label_2f78ac;
        case 0x2f78b0u: goto label_2f78b0;
        case 0x2f78b4u: goto label_2f78b4;
        case 0x2f78b8u: goto label_2f78b8;
        case 0x2f78bcu: goto label_2f78bc;
        case 0x2f78c0u: goto label_2f78c0;
        case 0x2f78c4u: goto label_2f78c4;
        case 0x2f78c8u: goto label_2f78c8;
        case 0x2f78ccu: goto label_2f78cc;
        case 0x2f78d0u: goto label_2f78d0;
        case 0x2f78d4u: goto label_2f78d4;
        case 0x2f78d8u: goto label_2f78d8;
        case 0x2f78dcu: goto label_2f78dc;
        case 0x2f78e0u: goto label_2f78e0;
        case 0x2f78e4u: goto label_2f78e4;
        case 0x2f78e8u: goto label_2f78e8;
        case 0x2f78ecu: goto label_2f78ec;
        case 0x2f78f0u: goto label_2f78f0;
        case 0x2f78f4u: goto label_2f78f4;
        case 0x2f78f8u: goto label_2f78f8;
        case 0x2f78fcu: goto label_2f78fc;
        case 0x2f7900u: goto label_2f7900;
        case 0x2f7904u: goto label_2f7904;
        case 0x2f7908u: goto label_2f7908;
        case 0x2f790cu: goto label_2f790c;
        case 0x2f7910u: goto label_2f7910;
        case 0x2f7914u: goto label_2f7914;
        case 0x2f7918u: goto label_2f7918;
        case 0x2f791cu: goto label_2f791c;
        default: break;
    }

    ctx->pc = 0x2f72a0u;

label_2f72a0:
    // 0x2f72a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f72a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2f72a4:
    // 0x2f72a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f72a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2f72a8:
    // 0x2f72a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f72a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f72ac:
    // 0x2f72ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f72acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f72b0:
    // 0x2f72b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f72b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f72b4:
    // 0x2f72b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f72b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f72b8:
    // 0x2f72b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f72b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f72bc:
    // 0x2f72bc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2f72bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2f72c0:
    // 0x2f72c0: 0x8c910030  lw          $s1, 0x30($a0)
    ctx->pc = 0x2f72c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2f72c4:
    // 0x2f72c4: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_2f72c8:
    if (ctx->pc == 0x2F72C8u) {
        ctx->pc = 0x2F72C8u;
            // 0x2f72c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F72CCu;
        goto label_2f72cc;
    }
    ctx->pc = 0x2F72C4u;
    {
        const bool branch_taken_0x2f72c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F72C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F72C4u;
            // 0x2f72c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f72c4) {
            ctx->pc = 0x2F740Cu;
            goto label_2f740c;
        }
    }
    ctx->pc = 0x2F72CCu;
label_2f72cc:
    // 0x2f72cc: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x2f72ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_2f72d0:
    // 0x2f72d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f72d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f72d4:
    // 0x2f72d4: 0x50620031  beql        $v1, $v0, . + 4 + (0x31 << 2)
label_2f72d8:
    if (ctx->pc == 0x2F72D8u) {
        ctx->pc = 0x2F72D8u;
            // 0x2f72d8: 0x8e0400c8  lw          $a0, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x2F72DCu;
        goto label_2f72dc;
    }
    ctx->pc = 0x2F72D4u;
    {
        const bool branch_taken_0x2f72d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f72d4) {
            ctx->pc = 0x2F72D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F72D4u;
            // 0x2f72d8: 0x8e0400c8  lw          $a0, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F739Cu;
            goto label_2f739c;
        }
    }
    ctx->pc = 0x2F72DCu;
label_2f72dc:
    // 0x2f72dc: 0x8e0400c8  lw          $a0, 0xC8($s0)
    ctx->pc = 0x2f72dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_2f72e0:
    // 0x2f72e0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f72e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f72e4:
    // 0x2f72e4: 0x8c850e34  lw          $a1, 0xE34($a0)
    ctx->pc = 0x2f72e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_2f72e8:
    // 0x2f72e8: 0x50a20009  beql        $a1, $v0, . + 4 + (0x9 << 2)
label_2f72ec:
    if (ctx->pc == 0x2F72ECu) {
        ctx->pc = 0x2F72ECu;
            // 0x2f72ec: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2F72F0u;
        goto label_2f72f0;
    }
    ctx->pc = 0x2F72E8u;
    {
        const bool branch_taken_0x2f72e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f72e8) {
            ctx->pc = 0x2F72ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F72E8u;
            // 0x2f72ec: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7310u;
            goto label_2f7310;
        }
    }
    ctx->pc = 0x2F72F0u;
label_2f72f0:
    // 0x2f72f0: 0x8c830db0  lw          $v1, 0xDB0($a0)
    ctx->pc = 0x2f72f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3504)));
label_2f72f4:
    // 0x2f72f4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2f72f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2f72f8:
    // 0x2f72f8: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
label_2f72fc:
    if (ctx->pc == 0x2F72FCu) {
        ctx->pc = 0x2F72FCu;
            // 0x2f72fc: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x2F7300u;
        goto label_2f7300;
    }
    ctx->pc = 0x2F72F8u;
    {
        const bool branch_taken_0x2f72f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f72f8) {
            ctx->pc = 0x2F72FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F72F8u;
            // 0x2f72fc: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7348u;
            goto label_2f7348;
        }
    }
    ctx->pc = 0x2F7300u;
label_2f7300:
    // 0x2f7300: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2f7300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2f7304:
    // 0x2f7304: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_2f7308:
    if (ctx->pc == 0x2F7308u) {
        ctx->pc = 0x2F730Cu;
        goto label_2f730c;
    }
    ctx->pc = 0x2F7304u;
    {
        const bool branch_taken_0x2f7304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f7304) {
            ctx->pc = 0x2F7344u;
            goto label_2f7344;
        }
    }
    ctx->pc = 0x2F730Cu;
label_2f730c:
    // 0x2f730c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f730cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f7310:
    // 0x2f7310: 0x54a2003f  bnel        $a1, $v0, . + 4 + (0x3F << 2)
label_2f7314:
    if (ctx->pc == 0x2F7314u) {
        ctx->pc = 0x2F7314u;
            // 0x2f7314: 0x8e0300d0  lw          $v1, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->pc = 0x2F7318u;
        goto label_2f7318;
    }
    ctx->pc = 0x2F7310u;
    {
        const bool branch_taken_0x2f7310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f7310) {
            ctx->pc = 0x2F7314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7310u;
            // 0x2f7314: 0x8e0300d0  lw          $v1, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7410u;
            goto label_2f7410;
        }
    }
    ctx->pc = 0x2F7318u;
label_2f7318:
    // 0x2f7318: 0x8c830550  lw          $v1, 0x550($a0)
    ctx->pc = 0x2f7318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_2f731c:
    // 0x2f731c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2f731cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f7320:
    // 0x2f7320: 0x8063010f  lb          $v1, 0x10F($v1)
    ctx->pc = 0x2f7320u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 271)));
label_2f7324:
    // 0x2f7324: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2f7328:
    if (ctx->pc == 0x2F7328u) {
        ctx->pc = 0x2F732Cu;
        goto label_2f732c;
    }
    ctx->pc = 0x2F7324u;
    {
        const bool branch_taken_0x2f7324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f7324) {
            ctx->pc = 0x2F7344u;
            goto label_2f7344;
        }
    }
    ctx->pc = 0x2F732Cu;
label_2f732c:
    // 0x2f732c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2f732cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2f7330:
    // 0x2f7330: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f7334:
    if (ctx->pc == 0x2F7334u) {
        ctx->pc = 0x2F7338u;
        goto label_2f7338;
    }
    ctx->pc = 0x2F7330u;
    {
        const bool branch_taken_0x2f7330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f7330) {
            ctx->pc = 0x2F7344u;
            goto label_2f7344;
        }
    }
    ctx->pc = 0x2F7338u;
label_2f7338:
    // 0x2f7338: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2f7338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2f733c:
    // 0x2f733c: 0x14620033  bne         $v1, $v0, . + 4 + (0x33 << 2)
label_2f7340:
    if (ctx->pc == 0x2F7340u) {
        ctx->pc = 0x2F7344u;
        goto label_2f7344;
    }
    ctx->pc = 0x2F733Cu;
    {
        const bool branch_taken_0x2f733c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f733c) {
            ctx->pc = 0x2F740Cu;
            goto label_2f740c;
        }
    }
    ctx->pc = 0x2F7344u;
label_2f7344:
    // 0x2f7344: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2f7344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2f7348:
    // 0x2f7348: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f734c:
    if (ctx->pc == 0x2F734Cu) {
        ctx->pc = 0x2F7350u;
        goto label_2f7350;
    }
    ctx->pc = 0x2F7348u;
    {
        const bool branch_taken_0x2f7348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7348) {
            ctx->pc = 0x2F7378u;
            goto label_2f7378;
        }
    }
    ctx->pc = 0x2F7350u;
label_2f7350:
    // 0x2f7350: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2f7350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7354:
    // 0x2f7354: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x2f7354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2f7358:
    // 0x2f7358: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f735c:
    // 0x2f735c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f735cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f7360:
    // 0x2f7360: 0x320f809  jalr        $t9
label_2f7364:
    if (ctx->pc == 0x2F7364u) {
        ctx->pc = 0x2F7368u;
        goto label_2f7368;
    }
    ctx->pc = 0x2F7360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7368u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7368u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7368u; }
            if (ctx->pc != 0x2F7368u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7368u;
label_2f7368:
    // 0x2f7368: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2f7368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2f736c:
    // 0x2f736c: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x2f736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2f7370:
    // 0x2f7370: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_2f7374:
    if (ctx->pc == 0x2F7374u) {
        ctx->pc = 0x2F7374u;
            // 0x2f7374: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->pc = 0x2F7378u;
        goto label_2f7378;
    }
    ctx->pc = 0x2F7370u;
    {
        const bool branch_taken_0x2f7370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7370) {
            ctx->pc = 0x2F7374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7370u;
            // 0x2f7374: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7358;
        }
    }
    ctx->pc = 0x2F7378u;
label_2f7378:
    // 0x2f7378: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2f7378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2f737c:
    // 0x2f737c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f737cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7380:
    // 0x2f7380: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f7380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f7384:
    // 0x2f7384: 0x320f809  jalr        $t9
label_2f7388:
    if (ctx->pc == 0x2F7388u) {
        ctx->pc = 0x2F738Cu;
        goto label_2f738c;
    }
    ctx->pc = 0x2F7384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F738Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F738Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F738Cu; }
            if (ctx->pc != 0x2F738Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F738Cu;
label_2f738c:
    // 0x2f738c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f7390:
    // 0x2f7390: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x2f7390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
label_2f7394:
    // 0x2f7394: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2f7398:
    if (ctx->pc == 0x2F7398u) {
        ctx->pc = 0x2F7398u;
            // 0x2f7398: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x2F739Cu;
        goto label_2f739c;
    }
    ctx->pc = 0x2F7394u;
    {
        const bool branch_taken_0x2f7394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7394u;
            // 0x2f7398: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7394) {
            ctx->pc = 0x2F740Cu;
            goto label_2f740c;
        }
    }
    ctx->pc = 0x2F739Cu;
label_2f739c:
    // 0x2f739c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f73a0:
    // 0x2f73a0: 0x8c850e34  lw          $a1, 0xE34($a0)
    ctx->pc = 0x2f73a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_2f73a4:
    // 0x2f73a4: 0x50a20009  beql        $a1, $v0, . + 4 + (0x9 << 2)
label_2f73a8:
    if (ctx->pc == 0x2F73A8u) {
        ctx->pc = 0x2F73A8u;
            // 0x2f73a8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2F73ACu;
        goto label_2f73ac;
    }
    ctx->pc = 0x2F73A4u;
    {
        const bool branch_taken_0x2f73a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f73a4) {
            ctx->pc = 0x2F73A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F73A4u;
            // 0x2f73a8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F73CCu;
            goto label_2f73cc;
        }
    }
    ctx->pc = 0x2F73ACu;
label_2f73ac:
    // 0x2f73ac: 0x8c830db0  lw          $v1, 0xDB0($a0)
    ctx->pc = 0x2f73acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3504)));
label_2f73b0:
    // 0x2f73b0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2f73b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2f73b4:
    // 0x2f73b4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f73b8:
    if (ctx->pc == 0x2F73B8u) {
        ctx->pc = 0x2F73BCu;
        goto label_2f73bc;
    }
    ctx->pc = 0x2F73B4u;
    {
        const bool branch_taken_0x2f73b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f73b4) {
            ctx->pc = 0x2F73C8u;
            goto label_2f73c8;
        }
    }
    ctx->pc = 0x2F73BCu;
label_2f73bc:
    // 0x2f73bc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2f73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2f73c0:
    // 0x2f73c0: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
label_2f73c4:
    if (ctx->pc == 0x2F73C4u) {
        ctx->pc = 0x2F73C4u;
            // 0x2f73c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F73C8u;
        goto label_2f73c8;
    }
    ctx->pc = 0x2F73C0u;
    {
        const bool branch_taken_0x2f73c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f73c0) {
            ctx->pc = 0x2F73C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F73C0u;
            // 0x2f73c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7404u;
            goto label_2f7404;
        }
    }
    ctx->pc = 0x2F73C8u;
label_2f73c8:
    // 0x2f73c8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f73c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f73cc:
    // 0x2f73cc: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
label_2f73d0:
    if (ctx->pc == 0x2F73D0u) {
        ctx->pc = 0x2F73D4u;
        goto label_2f73d4;
    }
    ctx->pc = 0x2F73CCu;
    {
        const bool branch_taken_0x2f73cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f73cc) {
            ctx->pc = 0x2F740Cu;
            goto label_2f740c;
        }
    }
    ctx->pc = 0x2F73D4u;
label_2f73d4:
    // 0x2f73d4: 0x8c830550  lw          $v1, 0x550($a0)
    ctx->pc = 0x2f73d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_2f73d8:
    // 0x2f73d8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2f73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f73dc:
    // 0x2f73dc: 0x8063010f  lb          $v1, 0x10F($v1)
    ctx->pc = 0x2f73dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 271)));
label_2f73e0:
    // 0x2f73e0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_2f73e4:
    if (ctx->pc == 0x2F73E4u) {
        ctx->pc = 0x2F73E8u;
        goto label_2f73e8;
    }
    ctx->pc = 0x2F73E0u;
    {
        const bool branch_taken_0x2f73e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f73e0) {
            ctx->pc = 0x2F740Cu;
            goto label_2f740c;
        }
    }
    ctx->pc = 0x2F73E8u;
label_2f73e8:
    // 0x2f73e8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2f73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2f73ec:
    // 0x2f73ec: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2f73f0:
    if (ctx->pc == 0x2F73F0u) {
        ctx->pc = 0x2F73F4u;
        goto label_2f73f4;
    }
    ctx->pc = 0x2F73ECu;
    {
        const bool branch_taken_0x2f73ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f73ec) {
            ctx->pc = 0x2F740Cu;
            goto label_2f740c;
        }
    }
    ctx->pc = 0x2F73F4u;
label_2f73f4:
    // 0x2f73f4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2f73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2f73f8:
    // 0x2f73f8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f73fc:
    if (ctx->pc == 0x2F73FCu) {
        ctx->pc = 0x2F7400u;
        goto label_2f7400;
    }
    ctx->pc = 0x2F73F8u;
    {
        const bool branch_taken_0x2f73f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f73f8) {
            ctx->pc = 0x2F740Cu;
            goto label_2f740c;
        }
    }
    ctx->pc = 0x2F7400u;
label_2f7400:
    // 0x2f7400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7404:
    // 0x2f7404: 0xc0bdf08  jal         func_2F7C20
label_2f7408:
    if (ctx->pc == 0x2F7408u) {
        ctx->pc = 0x2F740Cu;
        goto label_2f740c;
    }
    ctx->pc = 0x2F7404u;
    SET_GPR_U32(ctx, 31, 0x2F740Cu);
    ctx->pc = 0x2F7C20u;
    if (runtime->hasFunction(0x2F7C20u)) {
        auto targetFn = runtime->lookupFunction(0x2F7C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F740Cu; }
        if (ctx->pc != 0x2F740Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7C20_0x2f7c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F740Cu; }
        if (ctx->pc != 0x2F740Cu) { return; }
    }
    ctx->pc = 0x2F740Cu;
label_2f740c:
    // 0x2f740c: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x2f740cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_2f7410:
    // 0x2f7410: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f7410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f7414:
    // 0x2f7414: 0x1064004a  beq         $v1, $a0, . + 4 + (0x4A << 2)
label_2f7418:
    if (ctx->pc == 0x2F7418u) {
        ctx->pc = 0x2F7418u;
            // 0x2f7418: 0x8e1200c8  lw          $s2, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x2F741Cu;
        goto label_2f741c;
    }
    ctx->pc = 0x2F7414u;
    {
        const bool branch_taken_0x2f7414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F7418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7414u;
            // 0x2f7418: 0x8e1200c8  lw          $s2, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7414) {
            ctx->pc = 0x2F7540u;
            goto label_2f7540;
        }
    }
    ctx->pc = 0x2F741Cu;
label_2f741c:
    // 0x2f741c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f741cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7420:
    // 0x2f7420: 0x5062002e  beql        $v1, $v0, . + 4 + (0x2E << 2)
label_2f7424:
    if (ctx->pc == 0x2F7424u) {
        ctx->pc = 0x2F7424u;
            // 0x2f7424: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2F7428u;
        goto label_2f7428;
    }
    ctx->pc = 0x2F7420u;
    {
        const bool branch_taken_0x2f7420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f7420) {
            ctx->pc = 0x2F7424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7420u;
            // 0x2f7424: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F74DCu;
            goto label_2f74dc;
        }
    }
    ctx->pc = 0x2F7428u;
label_2f7428:
    // 0x2f7428: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_2f742c:
    if (ctx->pc == 0x2F742Cu) {
        ctx->pc = 0x2F742Cu;
            // 0x2f742c: 0x8e0300cc  lw          $v1, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->pc = 0x2F7430u;
        goto label_2f7430;
    }
    ctx->pc = 0x2F7428u;
    {
        const bool branch_taken_0x2f7428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7428) {
            ctx->pc = 0x2F742Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7428u;
            // 0x2f742c: 0x8e0300cc  lw          $v1, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7438u;
            goto label_2f7438;
        }
    }
    ctx->pc = 0x2F7430u;
label_2f7430:
    // 0x2f7430: 0x10000053  b           . + 4 + (0x53 << 2)
label_2f7434:
    if (ctx->pc == 0x2F7434u) {
        ctx->pc = 0x2F7434u;
            // 0x2f7434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7438u;
        goto label_2f7438;
    }
    ctx->pc = 0x2F7430u;
    {
        const bool branch_taken_0x2f7430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7430u;
            // 0x2f7434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7430) {
            ctx->pc = 0x2F7580u;
            goto label_2f7580;
        }
    }
    ctx->pc = 0x2F7438u;
label_2f7438:
    // 0x2f7438: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f7438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f743c:
    // 0x2f743c: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
label_2f7440:
    if (ctx->pc == 0x2F7440u) {
        ctx->pc = 0x2F7440u;
            // 0x2f7440: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->pc = 0x2F7444u;
        goto label_2f7444;
    }
    ctx->pc = 0x2F743Cu;
    {
        const bool branch_taken_0x2f743c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f743c) {
            ctx->pc = 0x2F7440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F743Cu;
            // 0x2f7440: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7494u;
            goto label_2f7494;
        }
    }
    ctx->pc = 0x2F7444u;
label_2f7444:
    // 0x2f7444: 0x50640003  beql        $v1, $a0, . + 4 + (0x3 << 2)
label_2f7448:
    if (ctx->pc == 0x2F7448u) {
        ctx->pc = 0x2F7448u;
            // 0x2f7448: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2F744Cu;
        goto label_2f744c;
    }
    ctx->pc = 0x2F7444u;
    {
        const bool branch_taken_0x2f7444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f7444) {
            ctx->pc = 0x2F7448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7444u;
            // 0x2f7448: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7454u;
            goto label_2f7454;
        }
    }
    ctx->pc = 0x2F744Cu;
label_2f744c:
    // 0x2f744c: 0x1000004b  b           . + 4 + (0x4B << 2)
label_2f7450:
    if (ctx->pc == 0x2F7450u) {
        ctx->pc = 0x2F7454u;
        goto label_2f7454;
    }
    ctx->pc = 0x2F744Cu;
    {
        const bool branch_taken_0x2f744c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f744c) {
            ctx->pc = 0x2F757Cu;
            goto label_2f757c;
        }
    }
    ctx->pc = 0x2F7454u;
label_2f7454:
    // 0x2f7454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f7454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f7458:
    // 0x2f7458: 0x8e060044  lw          $a2, 0x44($s0)
    ctx->pc = 0x2f7458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_2f745c:
    // 0x2f745c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x2f745cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_2f7460:
    // 0x2f7460: 0x320f809  jalr        $t9
label_2f7464:
    if (ctx->pc == 0x2F7464u) {
        ctx->pc = 0x2F7464u;
            // 0x2f7464: 0x26050034  addiu       $a1, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->pc = 0x2F7468u;
        goto label_2f7468;
    }
    ctx->pc = 0x2F7460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7468u);
        ctx->pc = 0x2F7464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7460u;
            // 0x2f7464: 0x26050034  addiu       $a1, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7468u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7468u; }
            if (ctx->pc != 0x2F7468u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7468u;
label_2f7468:
    // 0x2f7468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f746c:
    // 0x2f746c: 0x14430043  bne         $v0, $v1, . + 4 + (0x43 << 2)
label_2f7470:
    if (ctx->pc == 0x2F7470u) {
        ctx->pc = 0x2F7474u;
        goto label_2f7474;
    }
    ctx->pc = 0x2F746Cu;
    {
        const bool branch_taken_0x2f746c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f746c) {
            ctx->pc = 0x2F757Cu;
            goto label_2f757c;
        }
    }
    ctx->pc = 0x2F7474u;
label_2f7474:
    // 0x2f7474: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x2f7474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_2f7478:
    // 0x2f7478: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f747c:
    // 0x2f747c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f747cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f7480:
    // 0x2f7480: 0x320f809  jalr        $t9
label_2f7484:
    if (ctx->pc == 0x2F7484u) {
        ctx->pc = 0x2F7488u;
        goto label_2f7488;
    }
    ctx->pc = 0x2F7480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7488u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7488u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7488u; }
            if (ctx->pc != 0x2F7488u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7488u;
label_2f7488:
    // 0x2f7488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f7488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f748c:
    // 0x2f748c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2f7490:
    if (ctx->pc == 0x2F7490u) {
        ctx->pc = 0x2F7490u;
            // 0x2f7490: 0xae0200cc  sw          $v0, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
        ctx->pc = 0x2F7494u;
        goto label_2f7494;
    }
    ctx->pc = 0x2F748Cu;
    {
        const bool branch_taken_0x2f748c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F748Cu;
            // 0x2f7490: 0xae0200cc  sw          $v0, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f748c) {
            ctx->pc = 0x2F757Cu;
            goto label_2f757c;
        }
    }
    ctx->pc = 0x2F7494u;
label_2f7494:
    // 0x2f7494: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f7494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f7498:
    // 0x2f7498: 0x8e070048  lw          $a3, 0x48($s0)
    ctx->pc = 0x2f7498u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2f749c:
    // 0x2f749c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f749cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f74a0:
    // 0x2f74a0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x2f74a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_2f74a4:
    // 0x2f74a4: 0x320f809  jalr        $t9
label_2f74a8:
    if (ctx->pc == 0x2F74A8u) {
        ctx->pc = 0x2F74A8u;
            // 0x2f74a8: 0x26060034  addiu       $a2, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->pc = 0x2F74ACu;
        goto label_2f74ac;
    }
    ctx->pc = 0x2F74A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F74ACu);
        ctx->pc = 0x2F74A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F74A4u;
            // 0x2f74a8: 0x26060034  addiu       $a2, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F74ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F74ACu; }
            if (ctx->pc != 0x2F74ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2F74ACu;
label_2f74ac:
    // 0x2f74ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f74acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f74b0:
    // 0x2f74b0: 0x14430032  bne         $v0, $v1, . + 4 + (0x32 << 2)
label_2f74b4:
    if (ctx->pc == 0x2F74B4u) {
        ctx->pc = 0x2F74B8u;
        goto label_2f74b8;
    }
    ctx->pc = 0x2F74B0u;
    {
        const bool branch_taken_0x2f74b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f74b0) {
            ctx->pc = 0x2F757Cu;
            goto label_2f757c;
        }
    }
    ctx->pc = 0x2F74B8u;
label_2f74b8:
    // 0x2f74b8: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x2f74b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_2f74bc:
    // 0x2f74bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f74bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f74c0:
    // 0x2f74c0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f74c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f74c4:
    // 0x2f74c4: 0x320f809  jalr        $t9
label_2f74c8:
    if (ctx->pc == 0x2F74C8u) {
        ctx->pc = 0x2F74CCu;
        goto label_2f74cc;
    }
    ctx->pc = 0x2F74C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F74CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F74CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F74CCu; }
            if (ctx->pc != 0x2F74CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2F74CCu;
label_2f74cc:
    // 0x2f74cc: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2f74ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_2f74d0:
    // 0x2f74d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f74d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f74d4:
    // 0x2f74d4: 0x10000029  b           . + 4 + (0x29 << 2)
label_2f74d8:
    if (ctx->pc == 0x2F74D8u) {
        ctx->pc = 0x2F74D8u;
            // 0x2f74d8: 0xae0200cc  sw          $v0, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
        ctx->pc = 0x2F74DCu;
        goto label_2f74dc;
    }
    ctx->pc = 0x2F74D4u;
    {
        const bool branch_taken_0x2f74d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F74D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F74D4u;
            // 0x2f74d8: 0xae0200cc  sw          $v0, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f74d4) {
            ctx->pc = 0x2F757Cu;
            goto label_2f757c;
        }
    }
    ctx->pc = 0x2F74DCu;
label_2f74dc:
    // 0x2f74dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f74dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f74e0:
    // 0x2f74e0: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2f74e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2f74e4:
    // 0x2f74e4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x2f74e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_2f74e8:
    // 0x2f74e8: 0x320f809  jalr        $t9
label_2f74ec:
    if (ctx->pc == 0x2F74ECu) {
        ctx->pc = 0x2F74ECu;
            // 0x2f74ec: 0x26050034  addiu       $a1, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->pc = 0x2F74F0u;
        goto label_2f74f0;
    }
    ctx->pc = 0x2F74E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F74F0u);
        ctx->pc = 0x2F74ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F74E8u;
            // 0x2f74ec: 0x26050034  addiu       $a1, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F74F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F74F0u; }
            if (ctx->pc != 0x2F74F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F74F0u;
label_2f74f0:
    // 0x2f74f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f74f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f74f4:
    // 0x2f74f4: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
label_2f74f8:
    if (ctx->pc == 0x2F74F8u) {
        ctx->pc = 0x2F74FCu;
        goto label_2f74fc;
    }
    ctx->pc = 0x2F74F4u;
    {
        const bool branch_taken_0x2f74f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f74f4) {
            ctx->pc = 0x2F757Cu;
            goto label_2f757c;
        }
    }
    ctx->pc = 0x2F74FCu;
label_2f74fc:
    // 0x2f74fc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2f74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2f7500:
    // 0x2f7500: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f7504:
    if (ctx->pc == 0x2F7504u) {
        ctx->pc = 0x2F7508u;
        goto label_2f7508;
    }
    ctx->pc = 0x2F7500u;
    {
        const bool branch_taken_0x2f7500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7500) {
            ctx->pc = 0x2F7530u;
            goto label_2f7530;
        }
    }
    ctx->pc = 0x2F7508u;
label_2f7508:
    // 0x2f7508: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2f7508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f750c:
    // 0x2f750c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x2f750cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2f7510:
    // 0x2f7510: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7514:
    // 0x2f7514: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f7514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f7518:
    // 0x2f7518: 0x320f809  jalr        $t9
label_2f751c:
    if (ctx->pc == 0x2F751Cu) {
        ctx->pc = 0x2F7520u;
        goto label_2f7520;
    }
    ctx->pc = 0x2F7518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7520u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7520u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7520u; }
            if (ctx->pc != 0x2F7520u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7520u;
label_2f7520:
    // 0x2f7520: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2f7520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2f7524:
    // 0x2f7524: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2f7524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2f7528:
    // 0x2f7528: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_2f752c:
    if (ctx->pc == 0x2F752Cu) {
        ctx->pc = 0x2F752Cu;
            // 0x2f752c: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x2F7530u;
        goto label_2f7530;
    }
    ctx->pc = 0x2F7528u;
    {
        const bool branch_taken_0x2f7528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7528) {
            ctx->pc = 0x2F752Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7528u;
            // 0x2f752c: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7510;
        }
    }
    ctx->pc = 0x2F7530u;
label_2f7530:
    // 0x2f7530: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2f7530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_2f7534:
    // 0x2f7534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f7534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7538:
    // 0x2f7538: 0x10000010  b           . + 4 + (0x10 << 2)
label_2f753c:
    if (ctx->pc == 0x2F753Cu) {
        ctx->pc = 0x2F753Cu;
            // 0x2f753c: 0xae0200cc  sw          $v0, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
        ctx->pc = 0x2F7540u;
        goto label_2f7540;
    }
    ctx->pc = 0x2F7538u;
    {
        const bool branch_taken_0x2f7538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F753Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7538u;
            // 0x2f753c: 0xae0200cc  sw          $v0, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7538) {
            ctx->pc = 0x2F757Cu;
            goto label_2f757c;
        }
    }
    ctx->pc = 0x2F7540u;
label_2f7540:
    // 0x2f7540: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2f7540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2f7544:
    // 0x2f7544: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7548:
    // 0x2f7548: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x2f7548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_2f754c:
    // 0x2f754c: 0x320f809  jalr        $t9
label_2f7550:
    if (ctx->pc == 0x2F7550u) {
        ctx->pc = 0x2F7550u;
            // 0x2f7550: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x2F7554u;
        goto label_2f7554;
    }
    ctx->pc = 0x2F754Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7554u);
        ctx->pc = 0x2F7550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F754Cu;
            // 0x2f7550: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7554u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7554u; }
            if (ctx->pc != 0x2F7554u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7554u;
label_2f7554:
    // 0x2f7554: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7558:
    // 0x2f7558: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_2f755c:
    if (ctx->pc == 0x2F755Cu) {
        ctx->pc = 0x2F7560u;
        goto label_2f7560;
    }
    ctx->pc = 0x2F7558u;
    {
        const bool branch_taken_0x2f7558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f7558) {
            ctx->pc = 0x2F757Cu;
            goto label_2f757c;
        }
    }
    ctx->pc = 0x2F7560u;
label_2f7560:
    // 0x2f7560: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2f7560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2f7564:
    // 0x2f7564: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7568:
    // 0x2f7568: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f7568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f756c:
    // 0x2f756c: 0x320f809  jalr        $t9
label_2f7570:
    if (ctx->pc == 0x2F7570u) {
        ctx->pc = 0x2F7574u;
        goto label_2f7574;
    }
    ctx->pc = 0x2F756Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7574u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7574u; }
            if (ctx->pc != 0x2F7574u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7574u;
label_2f7574:
    // 0x2f7574: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2f7574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_2f7578:
    // 0x2f7578: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x2f7578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
label_2f757c:
    // 0x2f757c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f757cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7580:
    // 0x2f7580: 0xc0bd9ac  jal         func_2F66B0
label_2f7584:
    if (ctx->pc == 0x2F7584u) {
        ctx->pc = 0x2F7588u;
        goto label_2f7588;
    }
    ctx->pc = 0x2F7580u;
    SET_GPR_U32(ctx, 31, 0x2F7588u);
    ctx->pc = 0x2F66B0u;
    if (runtime->hasFunction(0x2F66B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F66B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7588u; }
        if (ctx->pc != 0x2F7588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F66B0_0x2f66b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7588u; }
        if (ctx->pc != 0x2F7588u) { return; }
    }
    ctx->pc = 0x2F7588u;
label_2f7588:
    // 0x2f7588: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2f7588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2f758c:
    // 0x2f758c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f758cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f7590:
    // 0x2f7590: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x2f7590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_2f7594:
    // 0x2f7594: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2f7594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2f7598:
    // 0x2f7598: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x2f7598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_2f759c:
    // 0x2f759c: 0x90420780  lbu         $v0, 0x780($v0)
    ctx->pc = 0x2f759cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1920)));
label_2f75a0:
    // 0x2f75a0: 0x92430d98  lbu         $v1, 0xD98($s2)
    ctx->pc = 0x2f75a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3480)));
label_2f75a4:
    // 0x2f75a4: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x2f75a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_2f75a8:
    // 0x2f75a8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f75a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2f75ac:
    // 0x2f75ac: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2f75acu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2f75b0:
    // 0x2f75b0: 0x2010  mfhi        $a0
    ctx->pc = 0x2f75b0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2f75b4:
    // 0x2f75b4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f75b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2f75b8:
    // 0x2f75b8: 0x548300cb  bnel        $a0, $v1, . + 4 + (0xCB << 2)
label_2f75bc:
    if (ctx->pc == 0x2F75BCu) {
        ctx->pc = 0x2F75BCu;
            // 0x2f75bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F75C0u;
        goto label_2f75c0;
    }
    ctx->pc = 0x2F75B8u;
    {
        const bool branch_taken_0x2f75b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f75b8) {
            ctx->pc = 0x2F75BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F75B8u;
            // 0x2f75bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F78E8u;
            goto label_2f78e8;
        }
    }
    ctx->pc = 0x2F75C0u;
label_2f75c0:
    // 0x2f75c0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2f75c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2f75c4:
    // 0x2f75c4: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_2f75c8:
    if (ctx->pc == 0x2F75C8u) {
        ctx->pc = 0x2F75C8u;
            // 0x2f75c8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2F75CCu;
        goto label_2f75cc;
    }
    ctx->pc = 0x2F75C4u;
    {
        const bool branch_taken_0x2f75c4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2f75c4) {
            ctx->pc = 0x2F75C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F75C4u;
            // 0x2f75c8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F75D8u;
            goto label_2f75d8;
        }
    }
    ctx->pc = 0x2F75CCu;
label_2f75cc:
    // 0x2f75cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f75ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f75d0:
    // 0x2f75d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f75d4:
    if (ctx->pc == 0x2F75D4u) {
        ctx->pc = 0x2F75D4u;
            // 0x2f75d4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F75D8u;
        goto label_2f75d8;
    }
    ctx->pc = 0x2F75D0u;
    {
        const bool branch_taken_0x2f75d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F75D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F75D0u;
            // 0x2f75d4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75d0) {
            ctx->pc = 0x2F75F0u;
            goto label_2f75f0;
        }
    }
    ctx->pc = 0x2F75D8u;
label_2f75d8:
    // 0x2f75d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2f75d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2f75dc:
    // 0x2f75dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2f75dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2f75e0:
    // 0x2f75e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f75e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f75e4:
    // 0x2f75e4: 0x0  nop
    ctx->pc = 0x2f75e4u;
    // NOP
label_2f75e8:
    // 0x2f75e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f75e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2f75ec:
    // 0x2f75ec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2f75ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2f75f0:
    // 0x2f75f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f75f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f75f4:
    // 0x2f75f4: 0x0  nop
    ctx->pc = 0x2f75f4u;
    // NOP
label_2f75f8:
    // 0x2f75f8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2f75f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f75fc:
    // 0x2f75fc: 0x450000b9  bc1f        . + 4 + (0xB9 << 2)
label_2f7600:
    if (ctx->pc == 0x2F7600u) {
        ctx->pc = 0x2F7604u;
        goto label_2f7604;
    }
    ctx->pc = 0x2F75FCu;
    {
        const bool branch_taken_0x2f75fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f75fc) {
            ctx->pc = 0x2F78E4u;
            goto label_2f78e4;
        }
    }
    ctx->pc = 0x2F7604u;
label_2f7604:
    // 0x2f7604: 0xc6430de4  lwc1        $f3, 0xDE4($s2)
    ctx->pc = 0x2f7604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f7608:
    // 0x2f7608: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f7608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2f760c:
    // 0x2f760c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f760cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7610:
    // 0x2f7610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7614:
    // 0x2f7614: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2f7614u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7618:
    // 0x2f7618: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2f761c:
    if (ctx->pc == 0x2F761Cu) {
        ctx->pc = 0x2F761Cu;
            // 0x2f761c: 0x46001881  sub.s       $f2, $f3, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->pc = 0x2F7620u;
        goto label_2f7620;
    }
    ctx->pc = 0x2F7618u;
    {
        const bool branch_taken_0x2f7618 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F761Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7618u;
            // 0x2f761c: 0x46001881  sub.s       $f2, $f3, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7618) {
            ctx->pc = 0x2F7624u;
            goto label_2f7624;
        }
    }
    ctx->pc = 0x2F7620u;
label_2f7620:
    // 0x2f7620: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f7620u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7624:
    // 0x2f7624: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_2f7628:
    if (ctx->pc == 0x2F7628u) {
        ctx->pc = 0x2F7628u;
            // 0x2f7628: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x2F762Cu;
        goto label_2f762c;
    }
    ctx->pc = 0x2F7624u;
    {
        const bool branch_taken_0x2f7624 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2f7624) {
            ctx->pc = 0x2F7628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7624u;
            // 0x2f7628: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7638u;
            goto label_2f7638;
        }
    }
    ctx->pc = 0x2F762Cu;
label_2f762c:
    // 0x2f762c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f762cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7630:
    // 0x2f7630: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f7634:
    if (ctx->pc == 0x2F7634u) {
        ctx->pc = 0x2F7634u;
            // 0x2f7634: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F7638u;
        goto label_2f7638;
    }
    ctx->pc = 0x2F7630u;
    {
        const bool branch_taken_0x2f7630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7630u;
            // 0x2f7634: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7630) {
            ctx->pc = 0x2F7650u;
            goto label_2f7650;
        }
    }
    ctx->pc = 0x2F7638u;
label_2f7638:
    // 0x2f7638: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2f7638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2f763c:
    // 0x2f763c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2f763cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2f7640:
    // 0x2f7640: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f7640u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7644:
    // 0x2f7644: 0x0  nop
    ctx->pc = 0x2f7644u;
    // NOP
label_2f7648:
    // 0x2f7648: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f7648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2f764c:
    // 0x2f764c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2f764cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2f7650:
    // 0x2f7650: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f7650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7654:
    // 0x2f7654: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2f7654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_2f7658:
    // 0x2f7658: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x2f7658u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2f765c:
    // 0x2f765c: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x2f765cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2f7660:
    // 0x2f7660: 0x460110dd  msub.s      $f3, $f2, $f1
    ctx->pc = 0x2f7660u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_2f7664:
    // 0x2f7664: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2f7664u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f7668:
    // 0x2f7668: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_2f766c:
    if (ctx->pc == 0x2F766Cu) {
        ctx->pc = 0x2F766Cu;
            // 0x2f766c: 0x3c0442fe  lui         $a0, 0x42FE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17150 << 16));
        ctx->pc = 0x2F7670u;
        goto label_2f7670;
    }
    ctx->pc = 0x2F7668u;
    {
        const bool branch_taken_0x2f7668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7668) {
            ctx->pc = 0x2F766Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7668u;
            // 0x2f766c: 0x3c0442fe  lui         $a0, 0x42FE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17150 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7680u;
            goto label_2f7680;
        }
    }
    ctx->pc = 0x2F7670u;
label_2f7670:
    // 0x2f7670: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x2f7670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_2f7674:
    // 0x2f7674: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2f7674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_2f7678:
    // 0x2f7678: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f7678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f767c:
    // 0x2f767c: 0x3c0442fe  lui         $a0, 0x42FE
    ctx->pc = 0x2f767cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17150 << 16));
label_2f7680:
    // 0x2f7680: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2f7680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2f7684:
    // 0x2f7684: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f7684u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7688:
    // 0x2f7688: 0x0  nop
    ctx->pc = 0x2f7688u;
    // NOP
label_2f768c:
    // 0x2f768c: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x2f768cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2f7690:
    // 0x2f7690: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f7690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7694:
    // 0x2f7694: 0x0  nop
    ctx->pc = 0x2f7694u;
    // NOP
label_2f7698:
    // 0x2f7698: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f7698u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f769c:
    // 0x2f769c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_2f76a0:
    if (ctx->pc == 0x2F76A0u) {
        ctx->pc = 0x2F76A0u;
            // 0x2f76a0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2F76A4u;
        goto label_2f76a4;
    }
    ctx->pc = 0x2F769Cu;
    {
        const bool branch_taken_0x2f769c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f769c) {
            ctx->pc = 0x2F76A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F769Cu;
            // 0x2f76a0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F76B4u;
            goto label_2f76b4;
        }
    }
    ctx->pc = 0x2F76A4u;
label_2f76a4:
    // 0x2f76a4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f76a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f76a8:
    // 0x2f76a8: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x2f76a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_2f76ac:
    // 0x2f76ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f76b0:
    if (ctx->pc == 0x2F76B0u) {
        ctx->pc = 0x2F76B0u;
            // 0x2f76b0: 0x2e610080  sltiu       $at, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
        ctx->pc = 0x2F76B4u;
        goto label_2f76b4;
    }
    ctx->pc = 0x2F76ACu;
    {
        const bool branch_taken_0x2f76ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F76B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F76ACu;
            // 0x2f76b0: 0x2e610080  sltiu       $at, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f76ac) {
            ctx->pc = 0x2F76CCu;
            goto label_2f76cc;
        }
    }
    ctx->pc = 0x2F76B4u;
label_2f76b4:
    // 0x2f76b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2f76b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2f76b8:
    // 0x2f76b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f76b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f76bc:
    // 0x2f76bc: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x2f76bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_2f76c0:
    // 0x2f76c0: 0x0  nop
    ctx->pc = 0x2f76c0u;
    // NOP
label_2f76c4:
    // 0x2f76c4: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x2f76c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_2f76c8:
    // 0x2f76c8: 0x2e610080  sltiu       $at, $s3, 0x80
    ctx->pc = 0x2f76c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_2f76cc:
    // 0x2f76cc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2f76d0:
    if (ctx->pc == 0x2F76D0u) {
        ctx->pc = 0x2F76D0u;
            // 0x2f76d0: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F76D4u;
        goto label_2f76d4;
    }
    ctx->pc = 0x2F76CCu;
    {
        const bool branch_taken_0x2f76cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F76D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F76CCu;
            // 0x2f76d0: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f76cc) {
            ctx->pc = 0x2F76D8u;
            goto label_2f76d8;
        }
    }
    ctx->pc = 0x2F76D4u;
label_2f76d4:
    // 0x2f76d4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f76d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f76d8:
    // 0x2f76d8: 0x6820004  bltzl       $s4, . + 4 + (0x4 << 2)
label_2f76dc:
    if (ctx->pc == 0x2F76DCu) {
        ctx->pc = 0x2F76DCu;
            // 0x2f76dc: 0x142042  srl         $a0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x2F76E0u;
        goto label_2f76e0;
    }
    ctx->pc = 0x2F76D8u;
    {
        const bool branch_taken_0x2f76d8 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x2f76d8) {
            ctx->pc = 0x2F76DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F76D8u;
            // 0x2f76dc: 0x142042  srl         $a0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F76ECu;
            goto label_2f76ec;
        }
    }
    ctx->pc = 0x2F76E0u;
label_2f76e0:
    // 0x2f76e0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x2f76e0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f76e4:
    // 0x2f76e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f76e8:
    if (ctx->pc == 0x2F76E8u) {
        ctx->pc = 0x2F76E8u;
            // 0x2f76e8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F76ECu;
        goto label_2f76ec;
    }
    ctx->pc = 0x2F76E4u;
    {
        const bool branch_taken_0x2f76e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F76E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F76E4u;
            // 0x2f76e8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f76e4) {
            ctx->pc = 0x2F7704u;
            goto label_2f7704;
        }
    }
    ctx->pc = 0x2F76ECu;
label_2f76ec:
    // 0x2f76ec: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x2f76ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_2f76f0:
    // 0x2f76f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2f76f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2f76f4:
    // 0x2f76f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f76f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f76f8:
    // 0x2f76f8: 0x0  nop
    ctx->pc = 0x2f76f8u;
    // NOP
label_2f76fc:
    // 0x2f76fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f76fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2f7700:
    // 0x2f7700: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f7700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f7704:
    // 0x2f7704: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x2f7704u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2f7708:
    // 0x2f7708: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2f7708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2f770c:
    // 0x2f770c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f770cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7710:
    // 0x2f7710: 0x0  nop
    ctx->pc = 0x2f7710u;
    // NOP
label_2f7714:
    // 0x2f7714: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f7714u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7718:
    // 0x2f7718: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_2f771c:
    if (ctx->pc == 0x2F771Cu) {
        ctx->pc = 0x2F771Cu;
            // 0x2f771c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2F7720u;
        goto label_2f7720;
    }
    ctx->pc = 0x2F7718u;
    {
        const bool branch_taken_0x2f7718 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7718) {
            ctx->pc = 0x2F771Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7718u;
            // 0x2f771c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7730u;
            goto label_2f7730;
        }
    }
    ctx->pc = 0x2F7720u;
label_2f7720:
    // 0x2f7720: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f7720u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f7724:
    // 0x2f7724: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x2f7724u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_2f7728:
    // 0x2f7728: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f772c:
    if (ctx->pc == 0x2F772Cu) {
        ctx->pc = 0x2F772Cu;
            // 0x2f772c: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x2F7730u;
        goto label_2f7730;
    }
    ctx->pc = 0x2F7728u;
    {
        const bool branch_taken_0x2f7728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F772Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7728u;
            // 0x2f772c: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7728) {
            ctx->pc = 0x2F7748u;
            goto label_2f7748;
        }
    }
    ctx->pc = 0x2F7730u;
label_2f7730:
    // 0x2f7730: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2f7730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2f7734:
    // 0x2f7734: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f7734u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f7738:
    // 0x2f7738: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x2f7738u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_2f773c:
    // 0x2f773c: 0x0  nop
    ctx->pc = 0x2f773cu;
    // NOP
label_2f7740:
    // 0x2f7740: 0x283a025  or          $s4, $s4, $v1
    ctx->pc = 0x2f7740u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
label_2f7744:
    // 0x2f7744: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f7744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2f7748:
    // 0x2f7748: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2f7748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2f774c:
    // 0x2f774c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f774cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f7750:
    // 0x2f7750: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2f7754:
    if (ctx->pc == 0x2F7754u) {
        ctx->pc = 0x2F7754u;
            // 0x2f7754: 0x2e610080  sltiu       $at, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
        ctx->pc = 0x2F7758u;
        goto label_2f7758;
    }
    ctx->pc = 0x2F7750u;
    {
        const bool branch_taken_0x2f7750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7750) {
            ctx->pc = 0x2F7754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7750u;
            // 0x2f7754: 0x2e610080  sltiu       $at, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7768u;
            goto label_2f7768;
        }
    }
    ctx->pc = 0x2F7758u;
label_2f7758:
    // 0x2f7758: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2f7758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_2f775c:
    // 0x2f775c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f775cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_2f7760:
    // 0x2f7760: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f7760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f7764:
    // 0x2f7764: 0x2e610080  sltiu       $at, $s3, 0x80
    ctx->pc = 0x2f7764u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_2f7768:
    // 0x2f7768: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2f776c:
    if (ctx->pc == 0x2F776Cu) {
        ctx->pc = 0x2F7770u;
        goto label_2f7770;
    }
    ctx->pc = 0x2F7768u;
    {
        const bool branch_taken_0x2f7768 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7768) {
            ctx->pc = 0x2F7774u;
            goto label_2f7774;
        }
    }
    ctx->pc = 0x2F7770u;
label_2f7770:
    // 0x2f7770: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f7770u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7774:
    // 0x2f7774: 0x6620004  bltzl       $s3, . + 4 + (0x4 << 2)
label_2f7778:
    if (ctx->pc == 0x2F7778u) {
        ctx->pc = 0x2F7778u;
            // 0x2f7778: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2F777Cu;
        goto label_2f777c;
    }
    ctx->pc = 0x2F7774u;
    {
        const bool branch_taken_0x2f7774 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x2f7774) {
            ctx->pc = 0x2F7778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7774u;
            // 0x2f7778: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7788u;
            goto label_2f7788;
        }
    }
    ctx->pc = 0x2F777Cu;
label_2f777c:
    // 0x2f777c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2f777cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7780:
    // 0x2f7780: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f7784:
    if (ctx->pc == 0x2F7784u) {
        ctx->pc = 0x2F7784u;
            // 0x2f7784: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2F7788u;
        goto label_2f7788;
    }
    ctx->pc = 0x2F7780u;
    {
        const bool branch_taken_0x2f7780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7780u;
            // 0x2f7784: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7780) {
            ctx->pc = 0x2F77A0u;
            goto label_2f77a0;
        }
    }
    ctx->pc = 0x2F7788u;
label_2f7788:
    // 0x2f7788: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2f7788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_2f778c:
    // 0x2f778c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f778cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2f7790:
    // 0x2f7790: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f7790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7794:
    // 0x2f7794: 0x0  nop
    ctx->pc = 0x2f7794u;
    // NOP
label_2f7798:
    // 0x2f7798: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f7798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2f779c:
    // 0x2f779c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f779cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f77a0:
    // 0x2f77a0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2f77a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f77a4:
    // 0x2f77a4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2f77a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2f77a8:
    // 0x2f77a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f77a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f77ac:
    // 0x2f77ac: 0x0  nop
    ctx->pc = 0x2f77acu;
    // NOP
label_2f77b0:
    // 0x2f77b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f77b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f77b4:
    // 0x2f77b4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_2f77b8:
    if (ctx->pc == 0x2F77B8u) {
        ctx->pc = 0x2F77B8u;
            // 0x2f77b8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2F77BCu;
        goto label_2f77bc;
    }
    ctx->pc = 0x2F77B4u;
    {
        const bool branch_taken_0x2f77b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f77b4) {
            ctx->pc = 0x2F77B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F77B4u;
            // 0x2f77b8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F77CCu;
            goto label_2f77cc;
        }
    }
    ctx->pc = 0x2F77BCu;
label_2f77bc:
    // 0x2f77bc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f77bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f77c0:
    // 0x2f77c0: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x2f77c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_2f77c4:
    // 0x2f77c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f77c8:
    if (ctx->pc == 0x2F77C8u) {
        ctx->pc = 0x2F77C8u;
            // 0x2f77c8: 0x8e420e34  lw          $v0, 0xE34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
        ctx->pc = 0x2F77CCu;
        goto label_2f77cc;
    }
    ctx->pc = 0x2F77C4u;
    {
        const bool branch_taken_0x2f77c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F77C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F77C4u;
            // 0x2f77c8: 0x8e420e34  lw          $v0, 0xE34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77c4) {
            ctx->pc = 0x2F77E4u;
            goto label_2f77e4;
        }
    }
    ctx->pc = 0x2F77CCu;
label_2f77cc:
    // 0x2f77cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2f77ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2f77d0:
    // 0x2f77d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f77d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2f77d4:
    // 0x2f77d4: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x2f77d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_2f77d8:
    // 0x2f77d8: 0x0  nop
    ctx->pc = 0x2f77d8u;
    // NOP
label_2f77dc:
    // 0x2f77dc: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x2f77dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_2f77e0:
    // 0x2f77e0: 0x8e420e34  lw          $v0, 0xE34($s2)
    ctx->pc = 0x2f77e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_2f77e4:
    // 0x2f77e4: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x2f77e4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2f77e8:
    // 0x2f77e8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_2f77ec:
    if (ctx->pc == 0x2F77ECu) {
        ctx->pc = 0x2F77ECu;
            // 0x2f77ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F77F0u;
        goto label_2f77f0;
    }
    ctx->pc = 0x2F77E8u;
    {
        const bool branch_taken_0x2f77e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F77ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F77E8u;
            // 0x2f77ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77e8) {
            ctx->pc = 0x2F7800u;
            goto label_2f7800;
        }
    }
    ctx->pc = 0x2F77F0u;
label_2f77f0:
    // 0x2f77f0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2f77f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2f77f4:
    // 0x2f77f4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2f77f8:
    if (ctx->pc == 0x2F77F8u) {
        ctx->pc = 0x2F77FCu;
        goto label_2f77fc;
    }
    ctx->pc = 0x2F77F4u;
    {
        const bool branch_taken_0x2f77f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f77f4) {
            ctx->pc = 0x2F7800u;
            goto label_2f7800;
        }
    }
    ctx->pc = 0x2F77FCu;
label_2f77fc:
    // 0x2f77fc: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2f77fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f7800:
    // 0x2f7800: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2f7804:
    if (ctx->pc == 0x2F7804u) {
        ctx->pc = 0x2F7808u;
        goto label_2f7808;
    }
    ctx->pc = 0x2F7800u;
    {
        const bool branch_taken_0x2f7800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7800) {
            ctx->pc = 0x2F781Cu;
            goto label_2f781c;
        }
    }
    ctx->pc = 0x2F7808u;
label_2f7808:
    // 0x2f7808: 0xc075eb4  jal         func_1D7AD0
label_2f780c:
    if (ctx->pc == 0x2F780Cu) {
        ctx->pc = 0x2F780Cu;
            // 0x2f780c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7810u;
        goto label_2f7810;
    }
    ctx->pc = 0x2F7808u;
    SET_GPR_U32(ctx, 31, 0x2F7810u);
    ctx->pc = 0x2F780Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7808u;
            // 0x2f780c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7810u; }
        if (ctx->pc != 0x2F7810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7810u; }
        if (ctx->pc != 0x2F7810u) { return; }
    }
    ctx->pc = 0x2F7810u;
label_2f7810:
    // 0x2f7810: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2f7814:
    if (ctx->pc == 0x2F7814u) {
        ctx->pc = 0x2F7818u;
        goto label_2f7818;
    }
    ctx->pc = 0x2F7810u;
    {
        const bool branch_taken_0x2f7810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7810) {
            ctx->pc = 0x2F781Cu;
            goto label_2f781c;
        }
    }
    ctx->pc = 0x2F7818u;
label_2f7818:
    // 0x2f7818: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f7818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f781c:
    // 0x2f781c: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_2f7820:
    if (ctx->pc == 0x2F7820u) {
        ctx->pc = 0x2F7820u;
            // 0x2f7820: 0x8e0200cc  lw          $v0, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->pc = 0x2F7824u;
        goto label_2f7824;
    }
    ctx->pc = 0x2F781Cu;
    {
        const bool branch_taken_0x2f781c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f781c) {
            ctx->pc = 0x2F7820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F781Cu;
            // 0x2f7820: 0x8e0200cc  lw          $v0, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7838u;
            goto label_2f7838;
        }
    }
    ctx->pc = 0x2F7824u;
label_2f7824:
    // 0x2f7824: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x2f7824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_2f7828:
    // 0x2f7828: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f7828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f782c:
    // 0x2f782c: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
label_2f7830:
    if (ctx->pc == 0x2F7830u) {
        ctx->pc = 0x2F7830u;
            // 0x2f7830: 0x820400d9  lb          $a0, 0xD9($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 217)));
        ctx->pc = 0x2F7834u;
        goto label_2f7834;
    }
    ctx->pc = 0x2F782Cu;
    {
        const bool branch_taken_0x2f782c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f782c) {
            ctx->pc = 0x2F7830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F782Cu;
            // 0x2f7830: 0x820400d9  lb          $a0, 0xD9($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 217)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7890u;
            goto label_2f7890;
        }
    }
    ctx->pc = 0x2F7834u;
label_2f7834:
    // 0x2f7834: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x2f7834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_2f7838:
    // 0x2f7838: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2f783c:
    if (ctx->pc == 0x2F783Cu) {
        ctx->pc = 0x2F783Cu;
            // 0x2f783c: 0x8e420a74  lw          $v0, 0xA74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2676)));
        ctx->pc = 0x2F7840u;
        goto label_2f7840;
    }
    ctx->pc = 0x2F7838u;
    {
        const bool branch_taken_0x2f7838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7838) {
            ctx->pc = 0x2F783Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7838u;
            // 0x2f783c: 0x8e420a74  lw          $v0, 0xA74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2676)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7854u;
            goto label_2f7854;
        }
    }
    ctx->pc = 0x2F7840u;
label_2f7840:
    // 0x2f7840: 0x8e430db0  lw          $v1, 0xDB0($s2)
    ctx->pc = 0x2f7840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_2f7844:
    // 0x2f7844: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2f7844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2f7848:
    // 0x2f7848: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_2f784c:
    if (ctx->pc == 0x2F784Cu) {
        ctx->pc = 0x2F7850u;
        goto label_2f7850;
    }
    ctx->pc = 0x2F7848u;
    {
        const bool branch_taken_0x2f7848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f7848) {
            ctx->pc = 0x2F788Cu;
            goto label_2f788c;
        }
    }
    ctx->pc = 0x2F7850u;
label_2f7850:
    // 0x2f7850: 0x8e420a74  lw          $v0, 0xA74($s2)
    ctx->pc = 0x2f7850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2676)));
label_2f7854:
    // 0x2f7854: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2f7858:
    if (ctx->pc == 0x2F7858u) {
        ctx->pc = 0x2F785Cu;
        goto label_2f785c;
    }
    ctx->pc = 0x2F7854u;
    {
        const bool branch_taken_0x2f7854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7854) {
            ctx->pc = 0x2F788Cu;
            goto label_2f788c;
        }
    }
    ctx->pc = 0x2F785Cu;
label_2f785c:
    // 0x2f785c: 0x821200d9  lb          $s2, 0xD9($s0)
    ctx->pc = 0x2f785cu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 217)));
label_2f7860:
    // 0x2f7860: 0x3c11a600  lui         $s1, 0xA600
    ctx->pc = 0x2f7860u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42496 << 16));
label_2f7864:
    // 0x2f7864: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f7864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f7868:
    // 0x2f7868: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f7868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f786c:
    // 0x2f786c: 0xc07293e  jal         func_1CA4F8
label_2f7870:
    if (ctx->pc == 0x2F7870u) {
        ctx->pc = 0x2F7870u;
            // 0x2f7870: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7874u;
        goto label_2f7874;
    }
    ctx->pc = 0x2F786Cu;
    SET_GPR_U32(ctx, 31, 0x2F7874u);
    ctx->pc = 0x2F7870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F786Cu;
            // 0x2f7870: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (runtime->hasFunction(0x1CA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7874u; }
        if (ctx->pc != 0x2F7874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA4F8_0x1ca4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7874u; }
        if (ctx->pc != 0x2F7874u) { return; }
    }
    ctx->pc = 0x2F7874u;
label_2f7874:
    // 0x2f7874: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f7878:
    // 0x2f7878: 0x3c05a510  lui         $a1, 0xA510
    ctx->pc = 0x2f7878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42256 << 16));
label_2f787c:
    // 0x2f787c: 0xc07293e  jal         func_1CA4F8
label_2f7880:
    if (ctx->pc == 0x2F7880u) {
        ctx->pc = 0x2F7880u;
            // 0x2f7880: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7884u;
        goto label_2f7884;
    }
    ctx->pc = 0x2F787Cu;
    SET_GPR_U32(ctx, 31, 0x2F7884u);
    ctx->pc = 0x2F7880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F787Cu;
            // 0x2f7880: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (runtime->hasFunction(0x1CA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7884u; }
        if (ctx->pc != 0x2F7884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA4F8_0x1ca4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7884u; }
        if (ctx->pc != 0x2F7884u) { return; }
    }
    ctx->pc = 0x2F7884u;
label_2f7884:
    // 0x2f7884: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f7888:
    if (ctx->pc == 0x2F7888u) {
        ctx->pc = 0x2F7888u;
            // 0x2f7888: 0x920200db  lbu         $v0, 0xDB($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
        ctx->pc = 0x2F788Cu;
        goto label_2f788c;
    }
    ctx->pc = 0x2F7884u;
    {
        const bool branch_taken_0x2f7884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7884u;
            // 0x2f7888: 0x920200db  lbu         $v0, 0xDB($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7884) {
            ctx->pc = 0x2F78A4u;
            goto label_2f78a4;
        }
    }
    ctx->pc = 0x2F788Cu;
label_2f788c:
    // 0x2f788c: 0x820400d9  lb          $a0, 0xD9($s0)
    ctx->pc = 0x2f788cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 217)));
label_2f7890:
    // 0x2f7890: 0x3c11a600  lui         $s1, 0xA600
    ctx->pc = 0x2f7890u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42496 << 16));
label_2f7894:
    // 0x2f7894: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f7894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f7898:
    // 0x2f7898: 0xc07293e  jal         func_1CA4F8
label_2f789c:
    if (ctx->pc == 0x2F789Cu) {
        ctx->pc = 0x2F789Cu;
            // 0x2f789c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F78A0u;
        goto label_2f78a0;
    }
    ctx->pc = 0x2F7898u;
    SET_GPR_U32(ctx, 31, 0x2F78A0u);
    ctx->pc = 0x2F789Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7898u;
            // 0x2f789c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (runtime->hasFunction(0x1CA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78A0u; }
        if (ctx->pc != 0x2F78A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA4F8_0x1ca4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78A0u; }
        if (ctx->pc != 0x2F78A0u) { return; }
    }
    ctx->pc = 0x2F78A0u;
label_2f78a0:
    // 0x2f78a0: 0x920200db  lbu         $v0, 0xDB($s0)
    ctx->pc = 0x2f78a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
label_2f78a4:
    // 0x2f78a4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_2f78a8:
    if (ctx->pc == 0x2F78A8u) {
        ctx->pc = 0x2F78A8u;
            // 0x2f78a8: 0x820400da  lb          $a0, 0xDA($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 218)));
        ctx->pc = 0x2F78ACu;
        goto label_2f78ac;
    }
    ctx->pc = 0x2F78A4u;
    {
        const bool branch_taken_0x2f78a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f78a4) {
            ctx->pc = 0x2F78A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F78A4u;
            // 0x2f78a8: 0x820400da  lb          $a0, 0xDA($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 218)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F78D8u;
            goto label_2f78d8;
        }
    }
    ctx->pc = 0x2F78ACu;
label_2f78ac:
    // 0x2f78ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f78acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f78b0:
    // 0x2f78b0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f78b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f78b4:
    // 0x2f78b4: 0x821100da  lb          $s1, 0xDA($s0)
    ctx->pc = 0x2f78b4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 218)));
label_2f78b8:
    // 0x2f78b8: 0xc07293e  jal         func_1CA4F8
label_2f78bc:
    if (ctx->pc == 0x2F78BCu) {
        ctx->pc = 0x2F78BCu;
            // 0x2f78bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F78C0u;
        goto label_2f78c0;
    }
    ctx->pc = 0x2F78B8u;
    SET_GPR_U32(ctx, 31, 0x2F78C0u);
    ctx->pc = 0x2F78BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F78B8u;
            // 0x2f78bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (runtime->hasFunction(0x1CA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78C0u; }
        if (ctx->pc != 0x2F78C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA4F8_0x1ca4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78C0u; }
        if (ctx->pc != 0x2F78C0u) { return; }
    }
    ctx->pc = 0x2F78C0u;
label_2f78c0:
    // 0x2f78c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f78c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f78c4:
    // 0x2f78c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f78c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f78c8:
    // 0x2f78c8: 0xc07293e  jal         func_1CA4F8
label_2f78cc:
    if (ctx->pc == 0x2F78CCu) {
        ctx->pc = 0x2F78CCu;
            // 0x2f78cc: 0x3c05a510  lui         $a1, 0xA510 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42256 << 16));
        ctx->pc = 0x2F78D0u;
        goto label_2f78d0;
    }
    ctx->pc = 0x2F78C8u;
    SET_GPR_U32(ctx, 31, 0x2F78D0u);
    ctx->pc = 0x2F78CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F78C8u;
            // 0x2f78cc: 0x3c05a510  lui         $a1, 0xA510 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42256 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (runtime->hasFunction(0x1CA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78D0u; }
        if (ctx->pc != 0x2F78D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA4F8_0x1ca4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78D0u; }
        if (ctx->pc != 0x2F78D0u) { return; }
    }
    ctx->pc = 0x2F78D0u;
label_2f78d0:
    // 0x2f78d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2f78d4:
    if (ctx->pc == 0x2F78D4u) {
        ctx->pc = 0x2F78D8u;
        goto label_2f78d8;
    }
    ctx->pc = 0x2F78D0u;
    {
        const bool branch_taken_0x2f78d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f78d0) {
            ctx->pc = 0x2F78E4u;
            goto label_2f78e4;
        }
    }
    ctx->pc = 0x2F78D8u;
label_2f78d8:
    // 0x2f78d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f78d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f78dc:
    // 0x2f78dc: 0xc07293e  jal         func_1CA4F8
label_2f78e0:
    if (ctx->pc == 0x2F78E0u) {
        ctx->pc = 0x2F78E0u;
            // 0x2f78e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F78E4u;
        goto label_2f78e4;
    }
    ctx->pc = 0x2F78DCu;
    SET_GPR_U32(ctx, 31, 0x2F78E4u);
    ctx->pc = 0x2F78E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F78DCu;
            // 0x2f78e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (runtime->hasFunction(0x1CA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78E4u; }
        if (ctx->pc != 0x2F78E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA4F8_0x1ca4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78E4u; }
        if (ctx->pc != 0x2F78E4u) { return; }
    }
    ctx->pc = 0x2F78E4u;
label_2f78e4:
    // 0x2f78e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f78e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f78e8:
    // 0x2f78e8: 0xc0bdeb0  jal         func_2F7AC0
label_2f78ec:
    if (ctx->pc == 0x2F78ECu) {
        ctx->pc = 0x2F78F0u;
        goto label_2f78f0;
    }
    ctx->pc = 0x2F78E8u;
    SET_GPR_U32(ctx, 31, 0x2F78F0u);
    ctx->pc = 0x2F7AC0u;
    if (runtime->hasFunction(0x2F7AC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F7AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78F0u; }
        if (ctx->pc != 0x2F78F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7AC0_0x2f7ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78F0u; }
        if (ctx->pc != 0x2F78F0u) { return; }
    }
    ctx->pc = 0x2F78F0u;
label_2f78f0:
    // 0x2f78f0: 0xc0bde48  jal         func_2F7920
label_2f78f4:
    if (ctx->pc == 0x2F78F4u) {
        ctx->pc = 0x2F78F4u;
            // 0x2f78f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F78F8u;
        goto label_2f78f8;
    }
    ctx->pc = 0x2F78F0u;
    SET_GPR_U32(ctx, 31, 0x2F78F8u);
    ctx->pc = 0x2F78F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F78F0u;
            // 0x2f78f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7920u;
    if (runtime->hasFunction(0x2F7920u)) {
        auto targetFn = runtime->lookupFunction(0x2F7920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78F8u; }
        if (ctx->pc != 0x2F78F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7920_0x2f7920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F78F8u; }
        if (ctx->pc != 0x2F78F8u) { return; }
    }
    ctx->pc = 0x2F78F8u;
label_2f78f8:
    // 0x2f78f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f78f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f78fc:
    // 0x2f78fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f78fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f7900:
    // 0x2f7900: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f7900u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f7904:
    // 0x2f7904: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f7904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f7908:
    // 0x2f7908: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f7908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f790c:
    // 0x2f790c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f790cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f7910:
    // 0x2f7910: 0x3e00008  jr          $ra
label_2f7914:
    if (ctx->pc == 0x2F7914u) {
        ctx->pc = 0x2F7914u;
            // 0x2f7914: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2F7918u;
        goto label_2f7918;
    }
    ctx->pc = 0x2F7910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7910u;
            // 0x2f7914: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7918u;
label_2f7918:
    // 0x2f7918: 0x0  nop
    ctx->pc = 0x2f7918u;
    // NOP
label_2f791c:
    // 0x2f791c: 0x0  nop
    ctx->pc = 0x2f791cu;
    // NOP
}
