#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D7250
// Address: 0x1d7250 - 0x1d79e0
void sub_001D7250_0x1d7250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7250_0x1d7250");
#endif

    switch (ctx->pc) {
        case 0x1d7250u: goto label_1d7250;
        case 0x1d7254u: goto label_1d7254;
        case 0x1d7258u: goto label_1d7258;
        case 0x1d725cu: goto label_1d725c;
        case 0x1d7260u: goto label_1d7260;
        case 0x1d7264u: goto label_1d7264;
        case 0x1d7268u: goto label_1d7268;
        case 0x1d726cu: goto label_1d726c;
        case 0x1d7270u: goto label_1d7270;
        case 0x1d7274u: goto label_1d7274;
        case 0x1d7278u: goto label_1d7278;
        case 0x1d727cu: goto label_1d727c;
        case 0x1d7280u: goto label_1d7280;
        case 0x1d7284u: goto label_1d7284;
        case 0x1d7288u: goto label_1d7288;
        case 0x1d728cu: goto label_1d728c;
        case 0x1d7290u: goto label_1d7290;
        case 0x1d7294u: goto label_1d7294;
        case 0x1d7298u: goto label_1d7298;
        case 0x1d729cu: goto label_1d729c;
        case 0x1d72a0u: goto label_1d72a0;
        case 0x1d72a4u: goto label_1d72a4;
        case 0x1d72a8u: goto label_1d72a8;
        case 0x1d72acu: goto label_1d72ac;
        case 0x1d72b0u: goto label_1d72b0;
        case 0x1d72b4u: goto label_1d72b4;
        case 0x1d72b8u: goto label_1d72b8;
        case 0x1d72bcu: goto label_1d72bc;
        case 0x1d72c0u: goto label_1d72c0;
        case 0x1d72c4u: goto label_1d72c4;
        case 0x1d72c8u: goto label_1d72c8;
        case 0x1d72ccu: goto label_1d72cc;
        case 0x1d72d0u: goto label_1d72d0;
        case 0x1d72d4u: goto label_1d72d4;
        case 0x1d72d8u: goto label_1d72d8;
        case 0x1d72dcu: goto label_1d72dc;
        case 0x1d72e0u: goto label_1d72e0;
        case 0x1d72e4u: goto label_1d72e4;
        case 0x1d72e8u: goto label_1d72e8;
        case 0x1d72ecu: goto label_1d72ec;
        case 0x1d72f0u: goto label_1d72f0;
        case 0x1d72f4u: goto label_1d72f4;
        case 0x1d72f8u: goto label_1d72f8;
        case 0x1d72fcu: goto label_1d72fc;
        case 0x1d7300u: goto label_1d7300;
        case 0x1d7304u: goto label_1d7304;
        case 0x1d7308u: goto label_1d7308;
        case 0x1d730cu: goto label_1d730c;
        case 0x1d7310u: goto label_1d7310;
        case 0x1d7314u: goto label_1d7314;
        case 0x1d7318u: goto label_1d7318;
        case 0x1d731cu: goto label_1d731c;
        case 0x1d7320u: goto label_1d7320;
        case 0x1d7324u: goto label_1d7324;
        case 0x1d7328u: goto label_1d7328;
        case 0x1d732cu: goto label_1d732c;
        case 0x1d7330u: goto label_1d7330;
        case 0x1d7334u: goto label_1d7334;
        case 0x1d7338u: goto label_1d7338;
        case 0x1d733cu: goto label_1d733c;
        case 0x1d7340u: goto label_1d7340;
        case 0x1d7344u: goto label_1d7344;
        case 0x1d7348u: goto label_1d7348;
        case 0x1d734cu: goto label_1d734c;
        case 0x1d7350u: goto label_1d7350;
        case 0x1d7354u: goto label_1d7354;
        case 0x1d7358u: goto label_1d7358;
        case 0x1d735cu: goto label_1d735c;
        case 0x1d7360u: goto label_1d7360;
        case 0x1d7364u: goto label_1d7364;
        case 0x1d7368u: goto label_1d7368;
        case 0x1d736cu: goto label_1d736c;
        case 0x1d7370u: goto label_1d7370;
        case 0x1d7374u: goto label_1d7374;
        case 0x1d7378u: goto label_1d7378;
        case 0x1d737cu: goto label_1d737c;
        case 0x1d7380u: goto label_1d7380;
        case 0x1d7384u: goto label_1d7384;
        case 0x1d7388u: goto label_1d7388;
        case 0x1d738cu: goto label_1d738c;
        case 0x1d7390u: goto label_1d7390;
        case 0x1d7394u: goto label_1d7394;
        case 0x1d7398u: goto label_1d7398;
        case 0x1d739cu: goto label_1d739c;
        case 0x1d73a0u: goto label_1d73a0;
        case 0x1d73a4u: goto label_1d73a4;
        case 0x1d73a8u: goto label_1d73a8;
        case 0x1d73acu: goto label_1d73ac;
        case 0x1d73b0u: goto label_1d73b0;
        case 0x1d73b4u: goto label_1d73b4;
        case 0x1d73b8u: goto label_1d73b8;
        case 0x1d73bcu: goto label_1d73bc;
        case 0x1d73c0u: goto label_1d73c0;
        case 0x1d73c4u: goto label_1d73c4;
        case 0x1d73c8u: goto label_1d73c8;
        case 0x1d73ccu: goto label_1d73cc;
        case 0x1d73d0u: goto label_1d73d0;
        case 0x1d73d4u: goto label_1d73d4;
        case 0x1d73d8u: goto label_1d73d8;
        case 0x1d73dcu: goto label_1d73dc;
        case 0x1d73e0u: goto label_1d73e0;
        case 0x1d73e4u: goto label_1d73e4;
        case 0x1d73e8u: goto label_1d73e8;
        case 0x1d73ecu: goto label_1d73ec;
        case 0x1d73f0u: goto label_1d73f0;
        case 0x1d73f4u: goto label_1d73f4;
        case 0x1d73f8u: goto label_1d73f8;
        case 0x1d73fcu: goto label_1d73fc;
        case 0x1d7400u: goto label_1d7400;
        case 0x1d7404u: goto label_1d7404;
        case 0x1d7408u: goto label_1d7408;
        case 0x1d740cu: goto label_1d740c;
        case 0x1d7410u: goto label_1d7410;
        case 0x1d7414u: goto label_1d7414;
        case 0x1d7418u: goto label_1d7418;
        case 0x1d741cu: goto label_1d741c;
        case 0x1d7420u: goto label_1d7420;
        case 0x1d7424u: goto label_1d7424;
        case 0x1d7428u: goto label_1d7428;
        case 0x1d742cu: goto label_1d742c;
        case 0x1d7430u: goto label_1d7430;
        case 0x1d7434u: goto label_1d7434;
        case 0x1d7438u: goto label_1d7438;
        case 0x1d743cu: goto label_1d743c;
        case 0x1d7440u: goto label_1d7440;
        case 0x1d7444u: goto label_1d7444;
        case 0x1d7448u: goto label_1d7448;
        case 0x1d744cu: goto label_1d744c;
        case 0x1d7450u: goto label_1d7450;
        case 0x1d7454u: goto label_1d7454;
        case 0x1d7458u: goto label_1d7458;
        case 0x1d745cu: goto label_1d745c;
        case 0x1d7460u: goto label_1d7460;
        case 0x1d7464u: goto label_1d7464;
        case 0x1d7468u: goto label_1d7468;
        case 0x1d746cu: goto label_1d746c;
        case 0x1d7470u: goto label_1d7470;
        case 0x1d7474u: goto label_1d7474;
        case 0x1d7478u: goto label_1d7478;
        case 0x1d747cu: goto label_1d747c;
        case 0x1d7480u: goto label_1d7480;
        case 0x1d7484u: goto label_1d7484;
        case 0x1d7488u: goto label_1d7488;
        case 0x1d748cu: goto label_1d748c;
        case 0x1d7490u: goto label_1d7490;
        case 0x1d7494u: goto label_1d7494;
        case 0x1d7498u: goto label_1d7498;
        case 0x1d749cu: goto label_1d749c;
        case 0x1d74a0u: goto label_1d74a0;
        case 0x1d74a4u: goto label_1d74a4;
        case 0x1d74a8u: goto label_1d74a8;
        case 0x1d74acu: goto label_1d74ac;
        case 0x1d74b0u: goto label_1d74b0;
        case 0x1d74b4u: goto label_1d74b4;
        case 0x1d74b8u: goto label_1d74b8;
        case 0x1d74bcu: goto label_1d74bc;
        case 0x1d74c0u: goto label_1d74c0;
        case 0x1d74c4u: goto label_1d74c4;
        case 0x1d74c8u: goto label_1d74c8;
        case 0x1d74ccu: goto label_1d74cc;
        case 0x1d74d0u: goto label_1d74d0;
        case 0x1d74d4u: goto label_1d74d4;
        case 0x1d74d8u: goto label_1d74d8;
        case 0x1d74dcu: goto label_1d74dc;
        case 0x1d74e0u: goto label_1d74e0;
        case 0x1d74e4u: goto label_1d74e4;
        case 0x1d74e8u: goto label_1d74e8;
        case 0x1d74ecu: goto label_1d74ec;
        case 0x1d74f0u: goto label_1d74f0;
        case 0x1d74f4u: goto label_1d74f4;
        case 0x1d74f8u: goto label_1d74f8;
        case 0x1d74fcu: goto label_1d74fc;
        case 0x1d7500u: goto label_1d7500;
        case 0x1d7504u: goto label_1d7504;
        case 0x1d7508u: goto label_1d7508;
        case 0x1d750cu: goto label_1d750c;
        case 0x1d7510u: goto label_1d7510;
        case 0x1d7514u: goto label_1d7514;
        case 0x1d7518u: goto label_1d7518;
        case 0x1d751cu: goto label_1d751c;
        case 0x1d7520u: goto label_1d7520;
        case 0x1d7524u: goto label_1d7524;
        case 0x1d7528u: goto label_1d7528;
        case 0x1d752cu: goto label_1d752c;
        case 0x1d7530u: goto label_1d7530;
        case 0x1d7534u: goto label_1d7534;
        case 0x1d7538u: goto label_1d7538;
        case 0x1d753cu: goto label_1d753c;
        case 0x1d7540u: goto label_1d7540;
        case 0x1d7544u: goto label_1d7544;
        case 0x1d7548u: goto label_1d7548;
        case 0x1d754cu: goto label_1d754c;
        case 0x1d7550u: goto label_1d7550;
        case 0x1d7554u: goto label_1d7554;
        case 0x1d7558u: goto label_1d7558;
        case 0x1d755cu: goto label_1d755c;
        case 0x1d7560u: goto label_1d7560;
        case 0x1d7564u: goto label_1d7564;
        case 0x1d7568u: goto label_1d7568;
        case 0x1d756cu: goto label_1d756c;
        case 0x1d7570u: goto label_1d7570;
        case 0x1d7574u: goto label_1d7574;
        case 0x1d7578u: goto label_1d7578;
        case 0x1d757cu: goto label_1d757c;
        case 0x1d7580u: goto label_1d7580;
        case 0x1d7584u: goto label_1d7584;
        case 0x1d7588u: goto label_1d7588;
        case 0x1d758cu: goto label_1d758c;
        case 0x1d7590u: goto label_1d7590;
        case 0x1d7594u: goto label_1d7594;
        case 0x1d7598u: goto label_1d7598;
        case 0x1d759cu: goto label_1d759c;
        case 0x1d75a0u: goto label_1d75a0;
        case 0x1d75a4u: goto label_1d75a4;
        case 0x1d75a8u: goto label_1d75a8;
        case 0x1d75acu: goto label_1d75ac;
        case 0x1d75b0u: goto label_1d75b0;
        case 0x1d75b4u: goto label_1d75b4;
        case 0x1d75b8u: goto label_1d75b8;
        case 0x1d75bcu: goto label_1d75bc;
        case 0x1d75c0u: goto label_1d75c0;
        case 0x1d75c4u: goto label_1d75c4;
        case 0x1d75c8u: goto label_1d75c8;
        case 0x1d75ccu: goto label_1d75cc;
        case 0x1d75d0u: goto label_1d75d0;
        case 0x1d75d4u: goto label_1d75d4;
        case 0x1d75d8u: goto label_1d75d8;
        case 0x1d75dcu: goto label_1d75dc;
        case 0x1d75e0u: goto label_1d75e0;
        case 0x1d75e4u: goto label_1d75e4;
        case 0x1d75e8u: goto label_1d75e8;
        case 0x1d75ecu: goto label_1d75ec;
        case 0x1d75f0u: goto label_1d75f0;
        case 0x1d75f4u: goto label_1d75f4;
        case 0x1d75f8u: goto label_1d75f8;
        case 0x1d75fcu: goto label_1d75fc;
        case 0x1d7600u: goto label_1d7600;
        case 0x1d7604u: goto label_1d7604;
        case 0x1d7608u: goto label_1d7608;
        case 0x1d760cu: goto label_1d760c;
        case 0x1d7610u: goto label_1d7610;
        case 0x1d7614u: goto label_1d7614;
        case 0x1d7618u: goto label_1d7618;
        case 0x1d761cu: goto label_1d761c;
        case 0x1d7620u: goto label_1d7620;
        case 0x1d7624u: goto label_1d7624;
        case 0x1d7628u: goto label_1d7628;
        case 0x1d762cu: goto label_1d762c;
        case 0x1d7630u: goto label_1d7630;
        case 0x1d7634u: goto label_1d7634;
        case 0x1d7638u: goto label_1d7638;
        case 0x1d763cu: goto label_1d763c;
        case 0x1d7640u: goto label_1d7640;
        case 0x1d7644u: goto label_1d7644;
        case 0x1d7648u: goto label_1d7648;
        case 0x1d764cu: goto label_1d764c;
        case 0x1d7650u: goto label_1d7650;
        case 0x1d7654u: goto label_1d7654;
        case 0x1d7658u: goto label_1d7658;
        case 0x1d765cu: goto label_1d765c;
        case 0x1d7660u: goto label_1d7660;
        case 0x1d7664u: goto label_1d7664;
        case 0x1d7668u: goto label_1d7668;
        case 0x1d766cu: goto label_1d766c;
        case 0x1d7670u: goto label_1d7670;
        case 0x1d7674u: goto label_1d7674;
        case 0x1d7678u: goto label_1d7678;
        case 0x1d767cu: goto label_1d767c;
        case 0x1d7680u: goto label_1d7680;
        case 0x1d7684u: goto label_1d7684;
        case 0x1d7688u: goto label_1d7688;
        case 0x1d768cu: goto label_1d768c;
        case 0x1d7690u: goto label_1d7690;
        case 0x1d7694u: goto label_1d7694;
        case 0x1d7698u: goto label_1d7698;
        case 0x1d769cu: goto label_1d769c;
        case 0x1d76a0u: goto label_1d76a0;
        case 0x1d76a4u: goto label_1d76a4;
        case 0x1d76a8u: goto label_1d76a8;
        case 0x1d76acu: goto label_1d76ac;
        case 0x1d76b0u: goto label_1d76b0;
        case 0x1d76b4u: goto label_1d76b4;
        case 0x1d76b8u: goto label_1d76b8;
        case 0x1d76bcu: goto label_1d76bc;
        case 0x1d76c0u: goto label_1d76c0;
        case 0x1d76c4u: goto label_1d76c4;
        case 0x1d76c8u: goto label_1d76c8;
        case 0x1d76ccu: goto label_1d76cc;
        case 0x1d76d0u: goto label_1d76d0;
        case 0x1d76d4u: goto label_1d76d4;
        case 0x1d76d8u: goto label_1d76d8;
        case 0x1d76dcu: goto label_1d76dc;
        case 0x1d76e0u: goto label_1d76e0;
        case 0x1d76e4u: goto label_1d76e4;
        case 0x1d76e8u: goto label_1d76e8;
        case 0x1d76ecu: goto label_1d76ec;
        case 0x1d76f0u: goto label_1d76f0;
        case 0x1d76f4u: goto label_1d76f4;
        case 0x1d76f8u: goto label_1d76f8;
        case 0x1d76fcu: goto label_1d76fc;
        case 0x1d7700u: goto label_1d7700;
        case 0x1d7704u: goto label_1d7704;
        case 0x1d7708u: goto label_1d7708;
        case 0x1d770cu: goto label_1d770c;
        case 0x1d7710u: goto label_1d7710;
        case 0x1d7714u: goto label_1d7714;
        case 0x1d7718u: goto label_1d7718;
        case 0x1d771cu: goto label_1d771c;
        case 0x1d7720u: goto label_1d7720;
        case 0x1d7724u: goto label_1d7724;
        case 0x1d7728u: goto label_1d7728;
        case 0x1d772cu: goto label_1d772c;
        case 0x1d7730u: goto label_1d7730;
        case 0x1d7734u: goto label_1d7734;
        case 0x1d7738u: goto label_1d7738;
        case 0x1d773cu: goto label_1d773c;
        case 0x1d7740u: goto label_1d7740;
        case 0x1d7744u: goto label_1d7744;
        case 0x1d7748u: goto label_1d7748;
        case 0x1d774cu: goto label_1d774c;
        case 0x1d7750u: goto label_1d7750;
        case 0x1d7754u: goto label_1d7754;
        case 0x1d7758u: goto label_1d7758;
        case 0x1d775cu: goto label_1d775c;
        case 0x1d7760u: goto label_1d7760;
        case 0x1d7764u: goto label_1d7764;
        case 0x1d7768u: goto label_1d7768;
        case 0x1d776cu: goto label_1d776c;
        case 0x1d7770u: goto label_1d7770;
        case 0x1d7774u: goto label_1d7774;
        case 0x1d7778u: goto label_1d7778;
        case 0x1d777cu: goto label_1d777c;
        case 0x1d7780u: goto label_1d7780;
        case 0x1d7784u: goto label_1d7784;
        case 0x1d7788u: goto label_1d7788;
        case 0x1d778cu: goto label_1d778c;
        case 0x1d7790u: goto label_1d7790;
        case 0x1d7794u: goto label_1d7794;
        case 0x1d7798u: goto label_1d7798;
        case 0x1d779cu: goto label_1d779c;
        case 0x1d77a0u: goto label_1d77a0;
        case 0x1d77a4u: goto label_1d77a4;
        case 0x1d77a8u: goto label_1d77a8;
        case 0x1d77acu: goto label_1d77ac;
        case 0x1d77b0u: goto label_1d77b0;
        case 0x1d77b4u: goto label_1d77b4;
        case 0x1d77b8u: goto label_1d77b8;
        case 0x1d77bcu: goto label_1d77bc;
        case 0x1d77c0u: goto label_1d77c0;
        case 0x1d77c4u: goto label_1d77c4;
        case 0x1d77c8u: goto label_1d77c8;
        case 0x1d77ccu: goto label_1d77cc;
        case 0x1d77d0u: goto label_1d77d0;
        case 0x1d77d4u: goto label_1d77d4;
        case 0x1d77d8u: goto label_1d77d8;
        case 0x1d77dcu: goto label_1d77dc;
        case 0x1d77e0u: goto label_1d77e0;
        case 0x1d77e4u: goto label_1d77e4;
        case 0x1d77e8u: goto label_1d77e8;
        case 0x1d77ecu: goto label_1d77ec;
        case 0x1d77f0u: goto label_1d77f0;
        case 0x1d77f4u: goto label_1d77f4;
        case 0x1d77f8u: goto label_1d77f8;
        case 0x1d77fcu: goto label_1d77fc;
        case 0x1d7800u: goto label_1d7800;
        case 0x1d7804u: goto label_1d7804;
        case 0x1d7808u: goto label_1d7808;
        case 0x1d780cu: goto label_1d780c;
        case 0x1d7810u: goto label_1d7810;
        case 0x1d7814u: goto label_1d7814;
        case 0x1d7818u: goto label_1d7818;
        case 0x1d781cu: goto label_1d781c;
        case 0x1d7820u: goto label_1d7820;
        case 0x1d7824u: goto label_1d7824;
        case 0x1d7828u: goto label_1d7828;
        case 0x1d782cu: goto label_1d782c;
        case 0x1d7830u: goto label_1d7830;
        case 0x1d7834u: goto label_1d7834;
        case 0x1d7838u: goto label_1d7838;
        case 0x1d783cu: goto label_1d783c;
        case 0x1d7840u: goto label_1d7840;
        case 0x1d7844u: goto label_1d7844;
        case 0x1d7848u: goto label_1d7848;
        case 0x1d784cu: goto label_1d784c;
        case 0x1d7850u: goto label_1d7850;
        case 0x1d7854u: goto label_1d7854;
        case 0x1d7858u: goto label_1d7858;
        case 0x1d785cu: goto label_1d785c;
        case 0x1d7860u: goto label_1d7860;
        case 0x1d7864u: goto label_1d7864;
        case 0x1d7868u: goto label_1d7868;
        case 0x1d786cu: goto label_1d786c;
        case 0x1d7870u: goto label_1d7870;
        case 0x1d7874u: goto label_1d7874;
        case 0x1d7878u: goto label_1d7878;
        case 0x1d787cu: goto label_1d787c;
        case 0x1d7880u: goto label_1d7880;
        case 0x1d7884u: goto label_1d7884;
        case 0x1d7888u: goto label_1d7888;
        case 0x1d788cu: goto label_1d788c;
        case 0x1d7890u: goto label_1d7890;
        case 0x1d7894u: goto label_1d7894;
        case 0x1d7898u: goto label_1d7898;
        case 0x1d789cu: goto label_1d789c;
        case 0x1d78a0u: goto label_1d78a0;
        case 0x1d78a4u: goto label_1d78a4;
        case 0x1d78a8u: goto label_1d78a8;
        case 0x1d78acu: goto label_1d78ac;
        case 0x1d78b0u: goto label_1d78b0;
        case 0x1d78b4u: goto label_1d78b4;
        case 0x1d78b8u: goto label_1d78b8;
        case 0x1d78bcu: goto label_1d78bc;
        case 0x1d78c0u: goto label_1d78c0;
        case 0x1d78c4u: goto label_1d78c4;
        case 0x1d78c8u: goto label_1d78c8;
        case 0x1d78ccu: goto label_1d78cc;
        case 0x1d78d0u: goto label_1d78d0;
        case 0x1d78d4u: goto label_1d78d4;
        case 0x1d78d8u: goto label_1d78d8;
        case 0x1d78dcu: goto label_1d78dc;
        case 0x1d78e0u: goto label_1d78e0;
        case 0x1d78e4u: goto label_1d78e4;
        case 0x1d78e8u: goto label_1d78e8;
        case 0x1d78ecu: goto label_1d78ec;
        case 0x1d78f0u: goto label_1d78f0;
        case 0x1d78f4u: goto label_1d78f4;
        case 0x1d78f8u: goto label_1d78f8;
        case 0x1d78fcu: goto label_1d78fc;
        case 0x1d7900u: goto label_1d7900;
        case 0x1d7904u: goto label_1d7904;
        case 0x1d7908u: goto label_1d7908;
        case 0x1d790cu: goto label_1d790c;
        case 0x1d7910u: goto label_1d7910;
        case 0x1d7914u: goto label_1d7914;
        case 0x1d7918u: goto label_1d7918;
        case 0x1d791cu: goto label_1d791c;
        case 0x1d7920u: goto label_1d7920;
        case 0x1d7924u: goto label_1d7924;
        case 0x1d7928u: goto label_1d7928;
        case 0x1d792cu: goto label_1d792c;
        case 0x1d7930u: goto label_1d7930;
        case 0x1d7934u: goto label_1d7934;
        case 0x1d7938u: goto label_1d7938;
        case 0x1d793cu: goto label_1d793c;
        case 0x1d7940u: goto label_1d7940;
        case 0x1d7944u: goto label_1d7944;
        case 0x1d7948u: goto label_1d7948;
        case 0x1d794cu: goto label_1d794c;
        case 0x1d7950u: goto label_1d7950;
        case 0x1d7954u: goto label_1d7954;
        case 0x1d7958u: goto label_1d7958;
        case 0x1d795cu: goto label_1d795c;
        case 0x1d7960u: goto label_1d7960;
        case 0x1d7964u: goto label_1d7964;
        case 0x1d7968u: goto label_1d7968;
        case 0x1d796cu: goto label_1d796c;
        case 0x1d7970u: goto label_1d7970;
        case 0x1d7974u: goto label_1d7974;
        case 0x1d7978u: goto label_1d7978;
        case 0x1d797cu: goto label_1d797c;
        case 0x1d7980u: goto label_1d7980;
        case 0x1d7984u: goto label_1d7984;
        case 0x1d7988u: goto label_1d7988;
        case 0x1d798cu: goto label_1d798c;
        case 0x1d7990u: goto label_1d7990;
        case 0x1d7994u: goto label_1d7994;
        case 0x1d7998u: goto label_1d7998;
        case 0x1d799cu: goto label_1d799c;
        case 0x1d79a0u: goto label_1d79a0;
        case 0x1d79a4u: goto label_1d79a4;
        case 0x1d79a8u: goto label_1d79a8;
        case 0x1d79acu: goto label_1d79ac;
        case 0x1d79b0u: goto label_1d79b0;
        case 0x1d79b4u: goto label_1d79b4;
        case 0x1d79b8u: goto label_1d79b8;
        case 0x1d79bcu: goto label_1d79bc;
        case 0x1d79c0u: goto label_1d79c0;
        case 0x1d79c4u: goto label_1d79c4;
        case 0x1d79c8u: goto label_1d79c8;
        case 0x1d79ccu: goto label_1d79cc;
        case 0x1d79d0u: goto label_1d79d0;
        case 0x1d79d4u: goto label_1d79d4;
        case 0x1d79d8u: goto label_1d79d8;
        case 0x1d79dcu: goto label_1d79dc;
        default: break;
    }

    ctx->pc = 0x1d7250u;

label_1d7250:
    // 0x1d7250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d7254:
    // 0x1d7254: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1d7254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d7258:
    // 0x1d7258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d725c:
    // 0x1d725c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d725cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7260:
    // 0x1d7260: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d7264:
    // 0x1d7264: 0xc10f6ec  jal         func_43DBB0
label_1d7268:
    if (ctx->pc == 0x1D7268u) {
        ctx->pc = 0x1D7268u;
            // 0x1d7268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D726Cu;
        goto label_1d726c;
    }
    ctx->pc = 0x1D7264u;
    SET_GPR_U32(ctx, 31, 0x1D726Cu);
    ctx->pc = 0x1D7268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7264u;
            // 0x1d7268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DBB0u;
    if (runtime->hasFunction(0x43DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x43DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D726Cu; }
        if (ctx->pc != 0x1D726Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043DBB0_0x43dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D726Cu; }
        if (ctx->pc != 0x1D726Cu) { return; }
    }
    ctx->pc = 0x1D726Cu;
label_1d726c:
    // 0x1d726c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d726cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1d7270:
    // 0x1d7270: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d7270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d7274:
    // 0x1d7274: 0x2463ce40  addiu       $v1, $v1, -0x31C0
    ctx->pc = 0x1d7274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954560));
label_1d7278:
    // 0x1d7278: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1d7278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_1d727c:
    // 0x1d727c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1d727cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_1d7280:
    // 0x1d7280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7284:
    // 0x1d7284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7288:
    // 0x1d7288: 0x3e00008  jr          $ra
label_1d728c:
    if (ctx->pc == 0x1D728Cu) {
        ctx->pc = 0x1D728Cu;
            // 0x1d728c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1D7290u;
        goto label_1d7290;
    }
    ctx->pc = 0x1D7288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D728Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7288u;
            // 0x1d728c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7290u;
label_1d7290:
    // 0x1d7290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d7294:
    // 0x1d7294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d7298:
    // 0x1d7298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d729c:
    // 0x1d729c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d729cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d72a0:
    // 0x1d72a0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_1d72a4:
    if (ctx->pc == 0x1D72A4u) {
        ctx->pc = 0x1D72A4u;
            // 0x1d72a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D72A8u;
        goto label_1d72a8;
    }
    ctx->pc = 0x1D72A0u;
    {
        const bool branch_taken_0x1d72a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d72a0) {
            ctx->pc = 0x1D72A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D72A0u;
            // 0x1d72a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D72E0u;
            goto label_1d72e0;
        }
    }
    ctx->pc = 0x1D72A8u;
label_1d72a8:
    // 0x1d72a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1d72ac:
    // 0x1d72ac: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x1d72acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_1d72b0:
    // 0x1d72b0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1d72b4:
    if (ctx->pc == 0x1D72B4u) {
        ctx->pc = 0x1D72B4u;
            // 0x1d72b4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x1D72B8u;
        goto label_1d72b8;
    }
    ctx->pc = 0x1D72B0u;
    {
        const bool branch_taken_0x1d72b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D72B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D72B0u;
            // 0x1d72b4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d72b0) {
            ctx->pc = 0x1D72C4u;
            goto label_1d72c4;
        }
    }
    ctx->pc = 0x1D72B8u;
label_1d72b8:
    // 0x1d72b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d72b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1d72bc:
    // 0x1d72bc: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x1d72bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_1d72c0:
    // 0x1d72c0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1d72c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_1d72c4:
    // 0x1d72c4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1d72c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1d72c8:
    // 0x1d72c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d72c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1d72cc:
    // 0x1d72cc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1d72d0:
    if (ctx->pc == 0x1D72D0u) {
        ctx->pc = 0x1D72D4u;
        goto label_1d72d4;
    }
    ctx->pc = 0x1D72CCu;
    {
        const bool branch_taken_0x1d72cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d72cc) {
            ctx->pc = 0x1D72DCu;
            goto label_1d72dc;
        }
    }
    ctx->pc = 0x1D72D4u;
label_1d72d4:
    // 0x1d72d4: 0xc0400a8  jal         func_1002A0
label_1d72d8:
    if (ctx->pc == 0x1D72D8u) {
        ctx->pc = 0x1D72D8u;
            // 0x1d72d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D72DCu;
        goto label_1d72dc;
    }
    ctx->pc = 0x1D72D4u;
    SET_GPR_U32(ctx, 31, 0x1D72DCu);
    ctx->pc = 0x1D72D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D72D4u;
            // 0x1d72d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D72DCu; }
        if (ctx->pc != 0x1D72DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D72DCu; }
        if (ctx->pc != 0x1D72DCu) { return; }
    }
    ctx->pc = 0x1D72DCu;
label_1d72dc:
    // 0x1d72dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d72dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d72e0:
    // 0x1d72e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d72e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d72e4:
    // 0x1d72e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d72e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d72e8:
    // 0x1d72e8: 0x3e00008  jr          $ra
label_1d72ec:
    if (ctx->pc == 0x1D72ECu) {
        ctx->pc = 0x1D72ECu;
            // 0x1d72ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1D72F0u;
        goto label_1d72f0;
    }
    ctx->pc = 0x1D72E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D72ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D72E8u;
            // 0x1d72ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D72F0u;
label_1d72f0:
    // 0x1d72f0: 0x8075740  j           func_1D5D00
label_1d72f4:
    if (ctx->pc == 0x1D72F4u) {
        ctx->pc = 0x1D72F8u;
        goto label_1d72f8;
    }
    ctx->pc = 0x1D72F0u;
    ctx->pc = 0x1D5D00u;
    if (runtime->hasFunction(0x1D5D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D5D00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001D5D00_0x1d5d00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1D72F8u;
label_1d72f8:
    // 0x1d72f8: 0x0  nop
    ctx->pc = 0x1d72f8u;
    // NOP
label_1d72fc:
    // 0x1d72fc: 0x0  nop
    ctx->pc = 0x1d72fcu;
    // NOP
label_1d7300:
    // 0x1d7300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d7304:
    // 0x1d7304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d7308:
    // 0x1d7308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d730c:
    // 0x1d730c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d730cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d7310:
    // 0x1d7310: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_1d7314:
    if (ctx->pc == 0x1D7314u) {
        ctx->pc = 0x1D7314u;
            // 0x1d7314: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D7318u;
        goto label_1d7318;
    }
    ctx->pc = 0x1D7310u;
    {
        const bool branch_taken_0x1d7310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7310) {
            ctx->pc = 0x1D7314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7310u;
            // 0x1d7314: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7360u;
            goto label_1d7360;
        }
    }
    ctx->pc = 0x1D7318u;
label_1d7318:
    // 0x1d7318: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d7318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1d731c:
    // 0x1d731c: 0x2442ce40  addiu       $v0, $v0, -0x31C0
    ctx->pc = 0x1d731cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954560));
label_1d7320:
    // 0x1d7320: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1d7324:
    if (ctx->pc == 0x1D7324u) {
        ctx->pc = 0x1D7324u;
            // 0x1d7324: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x1D7328u;
        goto label_1d7328;
    }
    ctx->pc = 0x1D7320u;
    {
        const bool branch_taken_0x1d7320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7320u;
            // 0x1d7324: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7320) {
            ctx->pc = 0x1D7344u;
            goto label_1d7344;
        }
    }
    ctx->pc = 0x1D7328u;
label_1d7328:
    // 0x1d7328: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d7328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1d732c:
    // 0x1d732c: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x1d732cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_1d7330:
    // 0x1d7330: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1d7334:
    if (ctx->pc == 0x1D7334u) {
        ctx->pc = 0x1D7334u;
            // 0x1d7334: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x1D7338u;
        goto label_1d7338;
    }
    ctx->pc = 0x1D7330u;
    {
        const bool branch_taken_0x1d7330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7330u;
            // 0x1d7334: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7330) {
            ctx->pc = 0x1D7344u;
            goto label_1d7344;
        }
    }
    ctx->pc = 0x1D7338u;
label_1d7338:
    // 0x1d7338: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d7338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1d733c:
    // 0x1d733c: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x1d733cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_1d7340:
    // 0x1d7340: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1d7340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_1d7344:
    // 0x1d7344: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1d7344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1d7348:
    // 0x1d7348: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d7348u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1d734c:
    // 0x1d734c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1d7350:
    if (ctx->pc == 0x1D7350u) {
        ctx->pc = 0x1D7354u;
        goto label_1d7354;
    }
    ctx->pc = 0x1D734Cu;
    {
        const bool branch_taken_0x1d734c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d734c) {
            ctx->pc = 0x1D735Cu;
            goto label_1d735c;
        }
    }
    ctx->pc = 0x1D7354u;
label_1d7354:
    // 0x1d7354: 0xc0400a8  jal         func_1002A0
label_1d7358:
    if (ctx->pc == 0x1D7358u) {
        ctx->pc = 0x1D7358u;
            // 0x1d7358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D735Cu;
        goto label_1d735c;
    }
    ctx->pc = 0x1D7354u;
    SET_GPR_U32(ctx, 31, 0x1D735Cu);
    ctx->pc = 0x1D7358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7354u;
            // 0x1d7358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D735Cu; }
        if (ctx->pc != 0x1D735Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D735Cu; }
        if (ctx->pc != 0x1D735Cu) { return; }
    }
    ctx->pc = 0x1D735Cu;
label_1d735c:
    // 0x1d735c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d735cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d7360:
    // 0x1d7360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7364:
    // 0x1d7364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7368:
    // 0x1d7368: 0x3e00008  jr          $ra
label_1d736c:
    if (ctx->pc == 0x1D736Cu) {
        ctx->pc = 0x1D736Cu;
            // 0x1d736c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1D7370u;
        goto label_1d7370;
    }
    ctx->pc = 0x1D7368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D736Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7368u;
            // 0x1d736c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7370u;
label_1d7370:
    // 0x1d7370: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1d7370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1d7374:
    // 0x1d7374: 0x3e00008  jr          $ra
label_1d7378:
    if (ctx->pc == 0x1D7378u) {
        ctx->pc = 0x1D7378u;
            // 0x1d7378: 0xc440c608  lwc1        $f0, -0x39F8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1D737Cu;
        goto label_1d737c;
    }
    ctx->pc = 0x1D7374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7374u;
            // 0x1d7378: 0xc440c608  lwc1        $f0, -0x39F8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D737Cu;
label_1d737c:
    // 0x1d737c: 0x0  nop
    ctx->pc = 0x1d737cu;
    // NOP
label_1d7380:
    // 0x1d7380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d7384:
    // 0x1d7384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d7384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d7388:
    // 0x1d7388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d738c:
    // 0x1d738c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d738cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d7390:
    // 0x1d7390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d7394:
    // 0x1d7394: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_1d7398:
    if (ctx->pc == 0x1D7398u) {
        ctx->pc = 0x1D7398u;
            // 0x1d7398: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D739Cu;
        goto label_1d739c;
    }
    ctx->pc = 0x1D7394u;
    {
        const bool branch_taken_0x1d7394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7394u;
            // 0x1d7398: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7394) {
            ctx->pc = 0x1D73D8u;
            goto label_1d73d8;
        }
    }
    ctx->pc = 0x1D739Cu;
label_1d739c:
    // 0x1d739c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d739cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1d73a0:
    // 0x1d73a0: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x1d73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_1d73a4:
    // 0x1d73a4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1d73a8:
    if (ctx->pc == 0x1D73A8u) {
        ctx->pc = 0x1D73A8u;
            // 0x1d73a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1D73ACu;
        goto label_1d73ac;
    }
    ctx->pc = 0x1D73A4u;
    {
        const bool branch_taken_0x1d73a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D73A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D73A4u;
            // 0x1d73a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73a4) {
            ctx->pc = 0x1D73C0u;
            goto label_1d73c0;
        }
    }
    ctx->pc = 0x1D73ACu;
label_1d73ac:
    // 0x1d73ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d73acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1d73b0:
    // 0x1d73b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d73b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d73b4:
    // 0x1d73b4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x1d73b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_1d73b8:
    // 0x1d73b8: 0xc057a68  jal         func_15E9A0
label_1d73bc:
    if (ctx->pc == 0x1D73BCu) {
        ctx->pc = 0x1D73BCu;
            // 0x1d73bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1D73C0u;
        goto label_1d73c0;
    }
    ctx->pc = 0x1D73B8u;
    SET_GPR_U32(ctx, 31, 0x1D73C0u);
    ctx->pc = 0x1D73BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D73B8u;
            // 0x1d73bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73C0u; }
        if (ctx->pc != 0x1D73C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73C0u; }
        if (ctx->pc != 0x1D73C0u) { return; }
    }
    ctx->pc = 0x1D73C0u;
label_1d73c0:
    // 0x1d73c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1d73c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1d73c4:
    // 0x1d73c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d73c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1d73c8:
    // 0x1d73c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_1d73cc:
    if (ctx->pc == 0x1D73CCu) {
        ctx->pc = 0x1D73CCu;
            // 0x1d73cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D73D0u;
        goto label_1d73d0;
    }
    ctx->pc = 0x1D73C8u;
    {
        const bool branch_taken_0x1d73c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d73c8) {
            ctx->pc = 0x1D73CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D73C8u;
            // 0x1d73cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D73DCu;
            goto label_1d73dc;
        }
    }
    ctx->pc = 0x1D73D0u;
label_1d73d0:
    // 0x1d73d0: 0xc0400a8  jal         func_1002A0
label_1d73d4:
    if (ctx->pc == 0x1D73D4u) {
        ctx->pc = 0x1D73D4u;
            // 0x1d73d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D73D8u;
        goto label_1d73d8;
    }
    ctx->pc = 0x1D73D0u;
    SET_GPR_U32(ctx, 31, 0x1D73D8u);
    ctx->pc = 0x1D73D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D73D0u;
            // 0x1d73d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73D8u; }
        if (ctx->pc != 0x1D73D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D73D8u; }
        if (ctx->pc != 0x1D73D8u) { return; }
    }
    ctx->pc = 0x1D73D8u;
label_1d73d8:
    // 0x1d73d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d73d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d73dc:
    // 0x1d73dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d73dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d73e0:
    // 0x1d73e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d73e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d73e4:
    // 0x1d73e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d73e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d73e8:
    // 0x1d73e8: 0x3e00008  jr          $ra
label_1d73ec:
    if (ctx->pc == 0x1D73ECu) {
        ctx->pc = 0x1D73ECu;
            // 0x1d73ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1D73F0u;
        goto label_1d73f0;
    }
    ctx->pc = 0x1D73E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D73ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D73E8u;
            // 0x1d73ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D73F0u;
label_1d73f0:
    // 0x1d73f0: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x1d73f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_1d73f4:
    // 0x1d73f4: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x1d73f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_1d73f8:
    // 0x1d73f8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1d73f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1d73fc:
    // 0x1d73fc: 0x3200008  jr          $t9
label_1d7400:
    if (ctx->pc == 0x1D7400u) {
        ctx->pc = 0x1D7404u;
        goto label_1d7404;
    }
    ctx->pc = 0x1D73FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7404u;
label_1d7404:
    // 0x1d7404: 0x0  nop
    ctx->pc = 0x1d7404u;
    // NOP
label_1d7408:
    // 0x1d7408: 0x0  nop
    ctx->pc = 0x1d7408u;
    // NOP
label_1d740c:
    // 0x1d740c: 0x0  nop
    ctx->pc = 0x1d740cu;
    // NOP
label_1d7410:
    // 0x1d7410: 0x3e00008  jr          $ra
label_1d7414:
    if (ctx->pc == 0x1D7414u) {
        ctx->pc = 0x1D7418u;
        goto label_1d7418;
    }
    ctx->pc = 0x1D7410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7418u;
label_1d7418:
    // 0x1d7418: 0x0  nop
    ctx->pc = 0x1d7418u;
    // NOP
label_1d741c:
    // 0x1d741c: 0x0  nop
    ctx->pc = 0x1d741cu;
    // NOP
label_1d7420:
    // 0x1d7420: 0x3e00008  jr          $ra
label_1d7424:
    if (ctx->pc == 0x1D7424u) {
        ctx->pc = 0x1D7428u;
        goto label_1d7428;
    }
    ctx->pc = 0x1D7420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7428u;
label_1d7428:
    // 0x1d7428: 0x0  nop
    ctx->pc = 0x1d7428u;
    // NOP
label_1d742c:
    // 0x1d742c: 0x0  nop
    ctx->pc = 0x1d742cu;
    // NOP
label_1d7430:
    // 0x1d7430: 0x3e00008  jr          $ra
label_1d7434:
    if (ctx->pc == 0x1D7434u) {
        ctx->pc = 0x1D7438u;
        goto label_1d7438;
    }
    ctx->pc = 0x1D7430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7438u;
label_1d7438:
    // 0x1d7438: 0x0  nop
    ctx->pc = 0x1d7438u;
    // NOP
label_1d743c:
    // 0x1d743c: 0x0  nop
    ctx->pc = 0x1d743cu;
    // NOP
label_1d7440:
    // 0x1d7440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d7444:
    // 0x1d7444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d7444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d7448:
    // 0x1d7448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d744c:
    // 0x1d744c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d744cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d7450:
    // 0x1d7450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d7454:
    // 0x1d7454: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_1d7458:
    if (ctx->pc == 0x1D7458u) {
        ctx->pc = 0x1D7458u;
            // 0x1d7458: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D745Cu;
        goto label_1d745c;
    }
    ctx->pc = 0x1D7454u;
    {
        const bool branch_taken_0x1d7454 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7454u;
            // 0x1d7458: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7454) {
            ctx->pc = 0x1D74B8u;
            goto label_1d74b8;
        }
    }
    ctx->pc = 0x1D745Cu;
label_1d745c:
    // 0x1d745c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d745cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1d7460:
    // 0x1d7460: 0x2442cee0  addiu       $v0, $v0, -0x3120
    ctx->pc = 0x1d7460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954720));
label_1d7464:
    // 0x1d7464: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1d7464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_1d7468:
    // 0x1d7468: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x1d7468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1d746c:
    // 0x1d746c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1d7470:
    if (ctx->pc == 0x1D7470u) {
        ctx->pc = 0x1D7474u;
        goto label_1d7474;
    }
    ctx->pc = 0x1D746Cu;
    {
        const bool branch_taken_0x1d746c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d746c) {
            ctx->pc = 0x1D748Cu;
            goto label_1d748c;
        }
    }
    ctx->pc = 0x1D7474u;
label_1d7474:
    // 0x1d7474: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1d7478:
    if (ctx->pc == 0x1D7478u) {
        ctx->pc = 0x1D747Cu;
        goto label_1d747c;
    }
    ctx->pc = 0x1D7474u;
    {
        const bool branch_taken_0x1d7474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7474) {
            ctx->pc = 0x1D748Cu;
            goto label_1d748c;
        }
    }
    ctx->pc = 0x1D747Cu;
label_1d747c:
    // 0x1d747c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x1d747cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1d7480:
    // 0x1d7480: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1d7480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1d7484:
    // 0x1d7484: 0x320f809  jalr        $t9
label_1d7488:
    if (ctx->pc == 0x1D7488u) {
        ctx->pc = 0x1D7488u;
            // 0x1d7488: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D748Cu;
        goto label_1d748c;
    }
    ctx->pc = 0x1D7484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D748Cu);
        ctx->pc = 0x1D7488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7484u;
            // 0x1d7488: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D748Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D748Cu; }
            if (ctx->pc != 0x1D748Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D748Cu;
label_1d748c:
    // 0x1d748c: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
label_1d7490:
    if (ctx->pc == 0x1D7490u) {
        ctx->pc = 0x1D7490u;
            // 0x1d7490: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x1D7494u;
        goto label_1d7494;
    }
    ctx->pc = 0x1D748Cu;
    {
        const bool branch_taken_0x1d748c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d748c) {
            ctx->pc = 0x1D7490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D748Cu;
            // 0x1d7490: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D74A4u;
            goto label_1d74a4;
        }
    }
    ctx->pc = 0x1D7494u;
label_1d7494:
    // 0x1d7494: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d7494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1d7498:
    // 0x1d7498: 0x2442cf10  addiu       $v0, $v0, -0x30F0
    ctx->pc = 0x1d7498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954768));
label_1d749c:
    // 0x1d749c: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1d749cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_1d74a0:
    // 0x1d74a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1d74a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1d74a4:
    // 0x1d74a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d74a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1d74a8:
    // 0x1d74a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_1d74ac:
    if (ctx->pc == 0x1D74ACu) {
        ctx->pc = 0x1D74ACu;
            // 0x1d74ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D74B0u;
        goto label_1d74b0;
    }
    ctx->pc = 0x1D74A8u;
    {
        const bool branch_taken_0x1d74a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d74a8) {
            ctx->pc = 0x1D74ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D74A8u;
            // 0x1d74ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D74BCu;
            goto label_1d74bc;
        }
    }
    ctx->pc = 0x1D74B0u;
label_1d74b0:
    // 0x1d74b0: 0xc0400a8  jal         func_1002A0
label_1d74b4:
    if (ctx->pc == 0x1D74B4u) {
        ctx->pc = 0x1D74B4u;
            // 0x1d74b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D74B8u;
        goto label_1d74b8;
    }
    ctx->pc = 0x1D74B0u;
    SET_GPR_U32(ctx, 31, 0x1D74B8u);
    ctx->pc = 0x1D74B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D74B0u;
            // 0x1d74b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D74B8u; }
        if (ctx->pc != 0x1D74B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D74B8u; }
        if (ctx->pc != 0x1D74B8u) { return; }
    }
    ctx->pc = 0x1D74B8u;
label_1d74b8:
    // 0x1d74b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d74b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d74bc:
    // 0x1d74bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d74bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d74c0:
    // 0x1d74c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d74c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d74c4:
    // 0x1d74c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d74c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d74c8:
    // 0x1d74c8: 0x3e00008  jr          $ra
label_1d74cc:
    if (ctx->pc == 0x1D74CCu) {
        ctx->pc = 0x1D74CCu;
            // 0x1d74cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1D74D0u;
        goto label_1d74d0;
    }
    ctx->pc = 0x1D74C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D74CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D74C8u;
            // 0x1d74cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D74D0u;
label_1d74d0:
    // 0x1d74d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d74d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d74d4:
    // 0x1d74d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d74d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d74d8:
    // 0x1d74d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d74d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d74dc:
    // 0x1d74dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d74dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d74e0:
    // 0x1d74e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d74e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d74e4:
    // 0x1d74e4: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_1d74e8:
    if (ctx->pc == 0x1D74E8u) {
        ctx->pc = 0x1D74E8u;
            // 0x1d74e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D74ECu;
        goto label_1d74ec;
    }
    ctx->pc = 0x1D74E4u;
    {
        const bool branch_taken_0x1d74e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D74E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D74E4u;
            // 0x1d74e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74e4) {
            ctx->pc = 0x1D756Cu;
            goto label_1d756c;
        }
    }
    ctx->pc = 0x1D74ECu;
label_1d74ec:
    // 0x1d74ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1d74f0:
    // 0x1d74f0: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x1d74f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1d74f4:
    // 0x1d74f4: 0x24635a90  addiu       $v1, $v1, 0x5A90
    ctx->pc = 0x1d74f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23184));
label_1d74f8:
    // 0x1d74f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1d74fc:
    if (ctx->pc == 0x1D74FCu) {
        ctx->pc = 0x1D74FCu;
            // 0x1d74fc: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x1D7500u;
        goto label_1d7500;
    }
    ctx->pc = 0x1D74F8u;
    {
        const bool branch_taken_0x1d74f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D74FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D74F8u;
            // 0x1d74fc: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74f8) {
            ctx->pc = 0x1D7524u;
            goto label_1d7524;
        }
    }
    ctx->pc = 0x1D7500u;
label_1d7500:
    // 0x1d7500: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1d7504:
    if (ctx->pc == 0x1D7504u) {
        ctx->pc = 0x1D7504u;
            // 0x1d7504: 0x26240034  addiu       $a0, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->pc = 0x1D7508u;
        goto label_1d7508;
    }
    ctx->pc = 0x1D7500u;
    {
        const bool branch_taken_0x1d7500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7500) {
            ctx->pc = 0x1D7504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7500u;
            // 0x1d7504: 0x26240034  addiu       $a0, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7528u;
            goto label_1d7528;
        }
    }
    ctx->pc = 0x1D7508u;
label_1d7508:
    // 0x1d7508: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d750c:
    if (ctx->pc == 0x1D750Cu) {
        ctx->pc = 0x1D7510u;
        goto label_1d7510;
    }
    ctx->pc = 0x1D7508u;
    {
        const bool branch_taken_0x1d7508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7508) {
            ctx->pc = 0x1D7524u;
            goto label_1d7524;
        }
    }
    ctx->pc = 0x1D7510u;
label_1d7510:
    // 0x1d7510: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x1d7510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1d7514:
    // 0x1d7514: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1d7518:
    if (ctx->pc == 0x1D7518u) {
        ctx->pc = 0x1D751Cu;
        goto label_1d751c;
    }
    ctx->pc = 0x1D7514u;
    {
        const bool branch_taken_0x1d7514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7514) {
            ctx->pc = 0x1D7524u;
            goto label_1d7524;
        }
    }
    ctx->pc = 0x1D751Cu;
label_1d751c:
    // 0x1d751c: 0xc0400a8  jal         func_1002A0
label_1d7520:
    if (ctx->pc == 0x1D7520u) {
        ctx->pc = 0x1D7524u;
        goto label_1d7524;
    }
    ctx->pc = 0x1D751Cu;
    SET_GPR_U32(ctx, 31, 0x1D7524u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7524u; }
        if (ctx->pc != 0x1D7524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7524u; }
        if (ctx->pc != 0x1D7524u) { return; }
    }
    ctx->pc = 0x1D7524u;
label_1d7524:
    // 0x1d7524: 0x26240034  addiu       $a0, $s1, 0x34
    ctx->pc = 0x1d7524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_1d7528:
    // 0x1d7528: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1d752c:
    if (ctx->pc == 0x1D752Cu) {
        ctx->pc = 0x1D7530u;
        goto label_1d7530;
    }
    ctx->pc = 0x1D7528u;
    {
        const bool branch_taken_0x1d7528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7528) {
            ctx->pc = 0x1D7540u;
            goto label_1d7540;
        }
    }
    ctx->pc = 0x1D7530u;
label_1d7530:
    // 0x1d7530: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1d7534:
    if (ctx->pc == 0x1D7534u) {
        ctx->pc = 0x1D7538u;
        goto label_1d7538;
    }
    ctx->pc = 0x1D7530u;
    {
        const bool branch_taken_0x1d7530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7530) {
            ctx->pc = 0x1D7540u;
            goto label_1d7540;
        }
    }
    ctx->pc = 0x1D7538u;
label_1d7538:
    // 0x1d7538: 0xc075e7c  jal         func_1D79F0
label_1d753c:
    if (ctx->pc == 0x1D753Cu) {
        ctx->pc = 0x1D753Cu;
            // 0x1d753c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D7540u;
        goto label_1d7540;
    }
    ctx->pc = 0x1D7538u;
    SET_GPR_U32(ctx, 31, 0x1D7540u);
    ctx->pc = 0x1D753Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7538u;
            // 0x1d753c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D79F0u;
    if (runtime->hasFunction(0x1D79F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D79F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7540u; }
        if (ctx->pc != 0x1D7540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D79F0_0x1d79f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7540u; }
        if (ctx->pc != 0x1D7540u) { return; }
    }
    ctx->pc = 0x1D7540u;
label_1d7540:
    // 0x1d7540: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
label_1d7544:
    if (ctx->pc == 0x1D7544u) {
        ctx->pc = 0x1D7544u;
            // 0x1d7544: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x1D7548u;
        goto label_1d7548;
    }
    ctx->pc = 0x1D7540u;
    {
        const bool branch_taken_0x1d7540 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7540) {
            ctx->pc = 0x1D7544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7540u;
            // 0x1d7544: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7558u;
            goto label_1d7558;
        }
    }
    ctx->pc = 0x1D7548u;
label_1d7548:
    // 0x1d7548: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d7548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1d754c:
    // 0x1d754c: 0x2442cf10  addiu       $v0, $v0, -0x30F0
    ctx->pc = 0x1d754cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954768));
label_1d7550:
    // 0x1d7550: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1d7550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_1d7554:
    // 0x1d7554: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1d7554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1d7558:
    // 0x1d7558: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d7558u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1d755c:
    // 0x1d755c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_1d7560:
    if (ctx->pc == 0x1D7560u) {
        ctx->pc = 0x1D7560u;
            // 0x1d7560: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D7564u;
        goto label_1d7564;
    }
    ctx->pc = 0x1D755Cu;
    {
        const bool branch_taken_0x1d755c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d755c) {
            ctx->pc = 0x1D7560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D755Cu;
            // 0x1d7560: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7570u;
            goto label_1d7570;
        }
    }
    ctx->pc = 0x1D7564u;
label_1d7564:
    // 0x1d7564: 0xc0400a8  jal         func_1002A0
label_1d7568:
    if (ctx->pc == 0x1D7568u) {
        ctx->pc = 0x1D7568u;
            // 0x1d7568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D756Cu;
        goto label_1d756c;
    }
    ctx->pc = 0x1D7564u;
    SET_GPR_U32(ctx, 31, 0x1D756Cu);
    ctx->pc = 0x1D7568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7564u;
            // 0x1d7568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D756Cu; }
        if (ctx->pc != 0x1D756Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D756Cu; }
        if (ctx->pc != 0x1D756Cu) { return; }
    }
    ctx->pc = 0x1D756Cu;
label_1d756c:
    // 0x1d756c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d756cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d7570:
    // 0x1d7570: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d7570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7574:
    // 0x1d7574: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7578:
    // 0x1d7578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d757c:
    // 0x1d757c: 0x3e00008  jr          $ra
label_1d7580:
    if (ctx->pc == 0x1D7580u) {
        ctx->pc = 0x1D7580u;
            // 0x1d7580: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1D7584u;
        goto label_1d7584;
    }
    ctx->pc = 0x1D757Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D757Cu;
            // 0x1d7580: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7584u;
label_1d7584:
    // 0x1d7584: 0x0  nop
    ctx->pc = 0x1d7584u;
    // NOP
label_1d7588:
    // 0x1d7588: 0x0  nop
    ctx->pc = 0x1d7588u;
    // NOP
label_1d758c:
    // 0x1d758c: 0x0  nop
    ctx->pc = 0x1d758cu;
    // NOP
label_1d7590:
    // 0x1d7590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d7594:
    // 0x1d7594: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d7594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d7598:
    // 0x1d7598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d759c:
    // 0x1d759c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d759cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d75a0:
    // 0x1d75a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d75a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d75a4:
    // 0x1d75a4: 0xc075e78  jal         func_1D79E0
label_1d75a8:
    if (ctx->pc == 0x1D75A8u) {
        ctx->pc = 0x1D75A8u;
            // 0x1d75a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D75ACu;
        goto label_1d75ac;
    }
    ctx->pc = 0x1D75A4u;
    SET_GPR_U32(ctx, 31, 0x1D75ACu);
    ctx->pc = 0x1D75A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D75A4u;
            // 0x1d75a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D79E0u;
    if (runtime->hasFunction(0x1D79E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D79E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75ACu; }
        if (ctx->pc != 0x1D75ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D79E0_0x1d79e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75ACu; }
        if (ctx->pc != 0x1D75ACu) { return; }
    }
    ctx->pc = 0x1D75ACu;
label_1d75ac:
    // 0x1d75ac: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x1d75acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1d75b0:
    // 0x1d75b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d75b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d75b4:
    // 0x1d75b4: 0xc073e9c  jal         func_1CFA70
label_1d75b8:
    if (ctx->pc == 0x1D75B8u) {
        ctx->pc = 0x1D75B8u;
            // 0x1d75b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D75BCu;
        goto label_1d75bc;
    }
    ctx->pc = 0x1D75B4u;
    SET_GPR_U32(ctx, 31, 0x1D75BCu);
    ctx->pc = 0x1D75B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D75B4u;
            // 0x1d75b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA70u;
    if (runtime->hasFunction(0x1CFA70u)) {
        auto targetFn = runtime->lookupFunction(0x1CFA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75BCu; }
        if (ctx->pc != 0x1D75BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFA70_0x1cfa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D75BCu; }
        if (ctx->pc != 0x1D75BCu) { return; }
    }
    ctx->pc = 0x1D75BCu;
label_1d75bc:
    // 0x1d75bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d75bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d75c0:
    // 0x1d75c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d75c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d75c4:
    // 0x1d75c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d75c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d75c8:
    // 0x1d75c8: 0x3e00008  jr          $ra
label_1d75cc:
    if (ctx->pc == 0x1D75CCu) {
        ctx->pc = 0x1D75CCu;
            // 0x1d75cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1D75D0u;
        goto label_1d75d0;
    }
    ctx->pc = 0x1D75C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D75CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D75C8u;
            // 0x1d75cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D75D0u;
label_1d75d0:
    // 0x1d75d0: 0x8073234  j           func_1CC8D0
label_1d75d4:
    if (ctx->pc == 0x1D75D4u) {
        ctx->pc = 0x1D75D4u;
            // 0x1d75d4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D75D8u;
        goto label_1d75d8;
    }
    ctx->pc = 0x1D75D0u;
    ctx->pc = 0x1D75D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D75D0u;
            // 0x1d75d4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1D75D8u;
label_1d75d8:
    // 0x1d75d8: 0x0  nop
    ctx->pc = 0x1d75d8u;
    // NOP
label_1d75dc:
    // 0x1d75dc: 0x0  nop
    ctx->pc = 0x1d75dcu;
    // NOP
label_1d75e0:
    // 0x1d75e0: 0x3e00008  jr          $ra
label_1d75e4:
    if (ctx->pc == 0x1D75E4u) {
        ctx->pc = 0x1D75E8u;
        goto label_1d75e8;
    }
    ctx->pc = 0x1D75E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D75E8u;
label_1d75e8:
    // 0x1d75e8: 0x0  nop
    ctx->pc = 0x1d75e8u;
    // NOP
label_1d75ec:
    // 0x1d75ec: 0x0  nop
    ctx->pc = 0x1d75ecu;
    // NOP
label_1d75f0:
    // 0x1d75f0: 0x3e00008  jr          $ra
label_1d75f4:
    if (ctx->pc == 0x1D75F4u) {
        ctx->pc = 0x1D75F8u;
        goto label_1d75f8;
    }
    ctx->pc = 0x1D75F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D75F8u;
label_1d75f8:
    // 0x1d75f8: 0x0  nop
    ctx->pc = 0x1d75f8u;
    // NOP
label_1d75fc:
    // 0x1d75fc: 0x0  nop
    ctx->pc = 0x1d75fcu;
    // NOP
label_1d7600:
    // 0x1d7600: 0x3e00008  jr          $ra
label_1d7604:
    if (ctx->pc == 0x1D7604u) {
        ctx->pc = 0x1D7608u;
        goto label_1d7608;
    }
    ctx->pc = 0x1D7600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7608u;
label_1d7608:
    // 0x1d7608: 0x0  nop
    ctx->pc = 0x1d7608u;
    // NOP
label_1d760c:
    // 0x1d760c: 0x0  nop
    ctx->pc = 0x1d760cu;
    // NOP
label_1d7610:
    // 0x1d7610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d7614:
    // 0x1d7614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7618:
    // 0x1d7618: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d761c:
    // 0x1d761c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1d761cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d7620:
    // 0x1d7620: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d7624:
    // 0x1d7624: 0xc04a576  jal         func_1295D8
label_1d7628:
    if (ctx->pc == 0x1D7628u) {
        ctx->pc = 0x1D7628u;
            // 0x1d7628: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D762Cu;
        goto label_1d762c;
    }
    ctx->pc = 0x1D7624u;
    SET_GPR_U32(ctx, 31, 0x1D762Cu);
    ctx->pc = 0x1D7628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7624u;
            // 0x1d7628: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D762Cu; }
        if (ctx->pc != 0x1D762Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D762Cu; }
        if (ctx->pc != 0x1D762Cu) { return; }
    }
    ctx->pc = 0x1D762Cu;
label_1d762c:
    // 0x1d762c: 0xa2000015  sb          $zero, 0x15($s0)
    ctx->pc = 0x1d762cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
label_1d7630:
    // 0x1d7630: 0x1e3c  dsll32      $v1, $zero, 24
    ctx->pc = 0x1d7630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (32 + 24));
label_1d7634:
    // 0x1d7634: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1d7634u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1d7638:
    // 0x1d7638: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x1d7638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
label_1d763c:
    // 0x1d763c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1d763cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1d7640:
    // 0x1d7640: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d7640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1d7644:
    // 0x1d7644: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1d7644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1d7648:
    // 0x1d7648: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x1d7648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1d764c:
    // 0x1d764c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1d7650:
    if (ctx->pc == 0x1D7650u) {
        ctx->pc = 0x1D7650u;
            // 0x1d7650: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1D7654u;
        goto label_1d7654;
    }
    ctx->pc = 0x1D764Cu;
    {
        const bool branch_taken_0x1d764c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d764c) {
            ctx->pc = 0x1D7650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D764Cu;
            // 0x1d7650: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7668u;
            goto label_1d7668;
        }
    }
    ctx->pc = 0x1D7654u;
label_1d7654:
    // 0x1d7654: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x1d7654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1d7658:
    // 0x1d7658: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1d7658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1d765c:
    // 0x1d765c: 0x320f809  jalr        $t9
label_1d7660:
    if (ctx->pc == 0x1D7660u) {
        ctx->pc = 0x1D7664u;
        goto label_1d7664;
    }
    ctx->pc = 0x1D765Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D7664u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D7664u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D7664u; }
            if (ctx->pc != 0x1D7664u) { return; }
        }
        }
    }
    ctx->pc = 0x1D7664u;
label_1d7664:
    // 0x1d7664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7668:
    // 0x1d7668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d766c:
    // 0x1d766c: 0x3e00008  jr          $ra
label_1d7670:
    if (ctx->pc == 0x1D7670u) {
        ctx->pc = 0x1D7670u;
            // 0x1d7670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1D7674u;
        goto label_1d7674;
    }
    ctx->pc = 0x1D766Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D766Cu;
            // 0x1d7670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7674u;
label_1d7674:
    // 0x1d7674: 0x0  nop
    ctx->pc = 0x1d7674u;
    // NOP
label_1d7678:
    // 0x1d7678: 0x0  nop
    ctx->pc = 0x1d7678u;
    // NOP
label_1d767c:
    // 0x1d767c: 0x0  nop
    ctx->pc = 0x1d767cu;
    // NOP
label_1d7680:
    // 0x1d7680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d7684:
    // 0x1d7684: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x1d7684u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_1d7688:
    // 0x1d7688: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d7688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d768c:
    // 0x1d768c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d768cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d7690:
    // 0x1d7690: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d7694:
    // 0x1d7694: 0x25299764  addiu       $t1, $t1, -0x689C
    ctx->pc = 0x1d7694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294940516));
label_1d7698:
    // 0x1d7698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d769c:
    // 0x1d769c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1d769cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_1d76a0:
    // 0x1d76a0: 0x8c870034  lw          $a3, 0x34($a0)
    ctx->pc = 0x1d76a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1d76a4:
    // 0x1d76a4: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x1d76a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
label_1d76a8:
    // 0x1d76a8: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1d76a8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d76ac:
    // 0x1d76ac: 0x3c080002  lui         $t0, 0x2
    ctx->pc = 0x1d76acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
label_1d76b0:
    // 0x1d76b0: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1d76b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1d76b4:
    // 0x1d76b4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1d76b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1d76b8:
    // 0x1d76b8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1d76b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1d76bc:
    // 0x1d76bc: 0x24849760  addiu       $a0, $a0, -0x68A0
    ctx->pc = 0x1d76bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940512));
label_1d76c0:
    // 0x1d76c0: 0x66900  sll         $t5, $a2, 4
    ctx->pc = 0x1d76c0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1d76c4:
    // 0x1d76c4: 0x34670010  ori         $a3, $v1, 0x10
    ctx->pc = 0x1d76c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_1d76c8:
    // 0x1d76c8: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x1d76c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
label_1d76cc:
    // 0x1d76cc: 0x8d1821  addu        $v1, $a0, $t5
    ctx->pc = 0x1d76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_1d76d0:
    // 0x1d76d0: 0x8d2c0000  lw          $t4, 0x0($t1)
    ctx->pc = 0x1d76d0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1d76d4:
    // 0x1d76d4: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x1d76d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
label_1d76d8:
    // 0x1d76d8: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x1d76d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d76dc:
    // 0x1d76dc: 0x34d80020  ori         $t8, $a2, 0x20
    ctx->pc = 0x1d76dcu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
label_1d76e0:
    // 0x1d76e0: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1d76e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_1d76e4:
    // 0x1d76e4: 0x1904824  and         $t1, $t4, $s0
    ctx->pc = 0x1d76e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 16));
label_1d76e8:
    // 0x1d76e8: 0x318b0002  andi        $t3, $t4, 0x2
    ctx->pc = 0x1d76e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)2);
label_1d76ec:
    // 0x1d76ec: 0x1508024  and         $s0, $t2, $s0
    ctx->pc = 0x1d76ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 10) & GPR_U64(ctx, 16));
label_1d76f0:
    // 0x1d76f0: 0xb582b  sltu        $t3, $zero, $t3
    ctx->pc = 0x1d76f0u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_1d76f4:
    // 0x1d76f4: 0x147c824  and         $t9, $t2, $a3
    ctx->pc = 0x1d76f4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
label_1d76f8:
    // 0x1d76f8: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x1d76f8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1d76fc:
    // 0x1d76fc: 0x103980  sll         $a3, $s0, 6
    ctx->pc = 0x1d76fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_1d7700:
    // 0x1d7700: 0xb8b40  sll         $s1, $t3, 13
    ctx->pc = 0x1d7700u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 11), 13));
label_1d7704:
    // 0x1d7704: 0x31500002  andi        $s0, $t2, 0x2
    ctx->pc = 0x1d7704u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)2);
label_1d7708:
    // 0x1d7708: 0x1d18825  or          $s1, $t6, $s1
    ctx->pc = 0x1d7708u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) | GPR_U64(ctx, 17));
label_1d770c:
    // 0x1d770c: 0x10702b  sltu        $t6, $zero, $s0
    ctx->pc = 0x1d770cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1d7710:
    // 0x1d7710: 0x9482b  sltu        $t1, $zero, $t1
    ctx->pc = 0x1d7710u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1d7714:
    // 0x1d7714: 0xe8300  sll         $s0, $t6, 12
    ctx->pc = 0x1d7714u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 14), 12));
label_1d7718:
    // 0x1d7718: 0x19c82b  sltu        $t9, $zero, $t9
    ctx->pc = 0x1d7718u;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
label_1d771c:
    // 0x1d771c: 0x2308825  or          $s1, $s1, $s0
    ctx->pc = 0x1d771cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
label_1d7720:
    // 0x1d7720: 0x158c024  and         $t8, $t2, $t8
    ctx->pc = 0x1d7720u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 10) & GPR_U64(ctx, 24));
label_1d7724:
    // 0x1d7724: 0xb85c0  sll         $s0, $t3, 23
    ctx->pc = 0x1d7724u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 11), 23));
label_1d7728:
    // 0x1d7728: 0x18c02b  sltu        $t8, $zero, $t8
    ctx->pc = 0x1d7728u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
label_1d772c:
    // 0x1d772c: 0x2308025  or          $s0, $s1, $s0
    ctx->pc = 0x1d772cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
label_1d7730:
    // 0x1d7730: 0xb5e00  sll         $t3, $t3, 24
    ctx->pc = 0x1d7730u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
label_1d7734:
    // 0x1d7734: 0x20b8025  or          $s0, $s0, $t3
    ctx->pc = 0x1d7734u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 11));
label_1d7738:
    // 0x1d7738: 0x94bc0  sll         $t1, $t1, 15
    ctx->pc = 0x1d7738u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 15));
label_1d773c:
    // 0x1d773c: 0x314b0001  andi        $t3, $t2, 0x1
    ctx->pc = 0x1d773cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
label_1d7740:
    // 0x1d7740: 0x2098025  or          $s0, $s0, $t1
    ctx->pc = 0x1d7740u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 9));
label_1d7744:
    // 0x1d7744: 0xb482b  sltu        $t1, $zero, $t3
    ctx->pc = 0x1d7744u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_1d7748:
    // 0x1d7748: 0x348f0040  ori         $t7, $a0, 0x40
    ctx->pc = 0x1d7748u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
label_1d774c:
    // 0x1d774c: 0x95a80  sll         $t3, $t1, 10
    ctx->pc = 0x1d774cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 10));
label_1d7750:
    // 0x1d7750: 0x14f7824  and         $t7, $t2, $t7
    ctx->pc = 0x1d7750u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) & GPR_U64(ctx, 15));
label_1d7754:
    // 0x1d7754: 0xe7140  sll         $t6, $t6, 5
    ctx->pc = 0x1d7754u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 5));
label_1d7758:
    // 0x1d7758: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x1d7758u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1d775c:
    // 0x1d775c: 0x12e4825  or          $t1, $t1, $t6
    ctx->pc = 0x1d775cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 14));
label_1d7760:
    // 0x1d7760: 0x20b8025  or          $s0, $s0, $t3
    ctx->pc = 0x1d7760u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 11));
label_1d7764:
    // 0x1d7764: 0xe94825  or          $t1, $a3, $t1
    ctx->pc = 0x1d7764u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
label_1d7768:
    // 0x1d7768: 0x19c880  sll         $t9, $t9, 2
    ctx->pc = 0x1d7768u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
label_1d776c:
    // 0x1d776c: 0x31870300  andi        $a3, $t4, 0x300
    ctx->pc = 0x1d776cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)768);
label_1d7770:
    // 0x1d7770: 0x18c0c0  sll         $t8, $t8, 3
    ctx->pc = 0x1d7770u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
label_1d7774:
    // 0x1d7774: 0x7582b  sltu        $t3, $zero, $a3
    ctx->pc = 0x1d7774u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1d7778:
    // 0x1d7778: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1d7778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_1d777c:
    // 0x1d777c: 0x1883824  and         $a3, $t4, $t0
    ctx->pc = 0x1d777cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 12) & GPR_U64(ctx, 8));
label_1d7780:
    // 0x1d7780: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x1d7780u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
label_1d7784:
    // 0x1d7784: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x1d7784u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1d7788:
    // 0x1d7788: 0x20b7025  or          $t6, $s0, $t3
    ctx->pc = 0x1d7788u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) | GPR_U64(ctx, 11));
label_1d778c:
    // 0x1d778c: 0x75c80  sll         $t3, $a3, 18
    ctx->pc = 0x1d778cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 18));
label_1d7790:
    // 0x1d7790: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x1d7790u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
label_1d7794:
    // 0x1d7794: 0x1483824  and         $a3, $t2, $t0
    ctx->pc = 0x1d7794u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
label_1d7798:
    // 0x1d7798: 0x31480300  andi        $t0, $t2, 0x300
    ctx->pc = 0x1d7798u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)768);
label_1d779c:
    // 0x1d779c: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x1d779cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1d77a0:
    // 0x1d77a0: 0x8402b  sltu        $t0, $zero, $t0
    ctx->pc = 0x1d77a0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1d77a4:
    // 0x1d77a4: 0x86440  sll         $t4, $t0, 17
    ctx->pc = 0x1d77a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 8), 17));
label_1d77a8:
    // 0x1d77a8: 0x744c0  sll         $t0, $a3, 19
    ctx->pc = 0x1d77a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 19));
label_1d77ac:
    // 0x1d77ac: 0x1cc6025  or          $t4, $t6, $t4
    ctx->pc = 0x1d77acu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
label_1d77b0:
    // 0x1d77b0: 0x739c0  sll         $a3, $a3, 7
    ctx->pc = 0x1d77b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
label_1d77b4:
    // 0x1d77b4: 0x18b5825  or          $t3, $t4, $t3
    ctx->pc = 0x1d77b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
label_1d77b8:
    // 0x1d77b8: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x1d77b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
label_1d77bc:
    // 0x1d77bc: 0x1685825  or          $t3, $t3, $t0
    ctx->pc = 0x1d77bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 8));
label_1d77c0:
    // 0x1d77c0: 0x3273825  or          $a3, $t9, $a3
    ctx->pc = 0x1d77c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) | GPR_U64(ctx, 7));
label_1d77c4:
    // 0x1d77c4: 0x3074025  or          $t0, $t8, $a3
    ctx->pc = 0x1d77c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 24) | GPR_U64(ctx, 7));
label_1d77c8:
    // 0x1d77c8: 0x34670080  ori         $a3, $v1, 0x80
    ctx->pc = 0x1d77c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_1d77cc:
    // 0x1d77cc: 0x1e84825  or          $t1, $t7, $t0
    ctx->pc = 0x1d77ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) | GPR_U64(ctx, 8));
label_1d77d0:
    // 0x1d77d0: 0x1473824  and         $a3, $t2, $a3
    ctx->pc = 0x1d77d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
label_1d77d4:
    // 0x1d77d4: 0x7402b  sltu        $t0, $zero, $a3
    ctx->pc = 0x1d77d4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1d77d8:
    // 0x1d77d8: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x1d77d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_1d77dc:
    // 0x1d77dc: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1d77dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1d77e0:
    // 0x1d77e0: 0x24e79781  addiu       $a3, $a3, -0x687F
    ctx->pc = 0x1d77e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940545));
label_1d77e4:
    // 0x1d77e4: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1d77e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1d77e8:
    // 0x1d77e8: 0xed3821  addu        $a3, $a3, $t5
    ctx->pc = 0x1d77e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
label_1d77ec:
    // 0x1d77ec: 0x1687025  or          $t6, $t3, $t0
    ctx->pc = 0x1d77ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) | GPR_U64(ctx, 8));
label_1d77f0:
    // 0x1d77f0: 0x80ea0000  lb          $t2, 0x0($a3)
    ctx->pc = 0x1d77f0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1d77f4:
    // 0x1d77f4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x1d77f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_1d77f8:
    // 0x1d77f8: 0x24e79780  addiu       $a3, $a3, -0x6880
    ctx->pc = 0x1d77f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940544));
label_1d77fc:
    // 0x1d77fc: 0xed3821  addu        $a3, $a3, $t5
    ctx->pc = 0x1d77fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
label_1d7800:
    // 0x1d7800: 0x80e90000  lb          $t1, 0x0($a3)
    ctx->pc = 0x1d7800u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1d7804:
    // 0x1d7804: 0x1294018  mult        $t0, $t1, $t1
    ctx->pc = 0x1d7804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1d7808:
    // 0x1d7808: 0x714a3818  mult1       $a3, $t2, $t2
    ctx->pc = 0x1d7808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_1d780c:
    // 0x1d780c: 0xe8082a  slt         $at, $a3, $t0
    ctx->pc = 0x1d780cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1d7810:
    // 0x1d7810: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1d7814:
    if (ctx->pc == 0x1D7814u) {
        ctx->pc = 0x1D7818u;
        goto label_1d7818;
    }
    ctx->pc = 0x1D7810u;
    {
        const bool branch_taken_0x1d7810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7810) {
            ctx->pc = 0x1D7828u;
            goto label_1d7828;
        }
    }
    ctx->pc = 0x1D7818u;
label_1d7818:
    // 0x1d7818: 0x523000b  bgezl       $t1, . + 4 + (0xB << 2)
label_1d781c:
    if (ctx->pc == 0x1D781Cu) {
        ctx->pc = 0x1D781Cu;
            // 0x1d781c: 0x1c47025  or          $t6, $t6, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
        ctx->pc = 0x1D7820u;
        goto label_1d7820;
    }
    ctx->pc = 0x1D7818u;
    {
        const bool branch_taken_0x1d7818 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x1d7818) {
            ctx->pc = 0x1D781Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7818u;
            // 0x1d781c: 0x1c47025  or          $t6, $t6, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7848u;
            goto label_1d7848;
        }
    }
    ctx->pc = 0x1D7820u;
label_1d7820:
    // 0x1d7820: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d7824:
    if (ctx->pc == 0x1D7824u) {
        ctx->pc = 0x1D7824u;
            // 0x1d7824: 0x1c67025  or          $t6, $t6, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 6));
        ctx->pc = 0x1D7828u;
        goto label_1d7828;
    }
    ctx->pc = 0x1D7820u;
    {
        const bool branch_taken_0x1d7820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7820u;
            // 0x1d7824: 0x1c67025  or          $t6, $t6, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7820) {
            ctx->pc = 0x1D7848u;
            goto label_1d7848;
        }
    }
    ctx->pc = 0x1D7828u;
label_1d7828:
    // 0x1d7828: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
label_1d782c:
    if (ctx->pc == 0x1D782Cu) {
        ctx->pc = 0x1D7830u;
        goto label_1d7830;
    }
    ctx->pc = 0x1D7828u;
    {
        const bool branch_taken_0x1d7828 = (GPR_S32(ctx, 10) >= 0);
        if (branch_taken_0x1d7828) {
            ctx->pc = 0x1D7838u;
            goto label_1d7838;
        }
    }
    ctx->pc = 0x1D7830u;
label_1d7830:
    // 0x1d7830: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d7834:
    if (ctx->pc == 0x1D7834u) {
        ctx->pc = 0x1D7834u;
            // 0x1d7834: 0x1c37025  or          $t6, $t6, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 3));
        ctx->pc = 0x1D7838u;
        goto label_1d7838;
    }
    ctx->pc = 0x1D7830u;
    {
        const bool branch_taken_0x1d7830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7830u;
            // 0x1d7834: 0x1c37025  or          $t6, $t6, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7830) {
            ctx->pc = 0x1D7848u;
            goto label_1d7848;
        }
    }
    ctx->pc = 0x1D7838u;
label_1d7838:
    // 0x1d7838: 0x59400004  blezl       $t2, . + 4 + (0x4 << 2)
label_1d783c:
    if (ctx->pc == 0x1D783Cu) {
        ctx->pc = 0x1D783Cu;
            // 0x1d783c: 0xacae0000  sw          $t6, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
        ctx->pc = 0x1D7840u;
        goto label_1d7840;
    }
    ctx->pc = 0x1D7838u;
    {
        const bool branch_taken_0x1d7838 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x1d7838) {
            ctx->pc = 0x1D783Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7838u;
            // 0x1d783c: 0xacae0000  sw          $t6, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D784Cu;
            goto label_1d784c;
        }
    }
    ctx->pc = 0x1D7840u;
label_1d7840:
    // 0x1d7840: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d7840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1d7844:
    // 0x1d7844: 0x1c37025  or          $t6, $t6, $v1
    ctx->pc = 0x1d7844u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 3));
label_1d7848:
    // 0x1d7848: 0xacae0000  sw          $t6, 0x0($a1)
    ctx->pc = 0x1d7848u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
label_1d784c:
    // 0x1d784c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1d784cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1d7850:
    // 0x1d7850: 0x8ca70034  lw          $a3, 0x34($a1)
    ctx->pc = 0x1d7850u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1d7854:
    // 0x1d7854: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d7854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1d7858:
    // 0x1d7858: 0x24849780  addiu       $a0, $a0, -0x6880
    ctx->pc = 0x1d7858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940544));
label_1d785c:
    // 0x1d785c: 0x24639781  addiu       $v1, $v1, -0x687F
    ctx->pc = 0x1d785cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940545));
label_1d7860:
    // 0x1d7860: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d7860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d7864:
    // 0x1d7864: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1d7864u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1d7868:
    // 0x1d7868: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1d7868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1d786c:
    // 0x1d786c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1d786cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1d7870:
    // 0x1d7870: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1d7870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1d7874:
    // 0x1d7874: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x1d7874u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1d7878:
    // 0x1d7878: 0xa0a40004  sb          $a0, 0x4($a1)
    ctx->pc = 0x1d7878u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 4));
label_1d787c:
    // 0x1d787c: 0x8ca60034  lw          $a2, 0x34($a1)
    ctx->pc = 0x1d787cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1d7880:
    // 0x1d7880: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x1d7880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d7884:
    // 0x1d7884: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1d7884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1d7888:
    // 0x1d7888: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d7888u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d788c:
    // 0x1d788c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d788cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d7890:
    // 0x1d7890: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1d7890u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1d7894:
    // 0x1d7894: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x1d7894u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
label_1d7898:
    // 0x1d7898: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x1d7898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d789c:
    // 0x1d789c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1d789cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d78a0:
    // 0x1d78a0: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
label_1d78a4:
    if (ctx->pc == 0x1D78A4u) {
        ctx->pc = 0x1D78A4u;
            // 0x1d78a4: 0x8ca40038  lw          $a0, 0x38($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
        ctx->pc = 0x1D78A8u;
        goto label_1d78a8;
    }
    ctx->pc = 0x1D78A0u;
    {
        const bool branch_taken_0x1d78a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d78a0) {
            ctx->pc = 0x1D78A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D78A0u;
            // 0x1d78a4: 0x8ca40038  lw          $a0, 0x38($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7910u;
            goto label_1d7910;
        }
    }
    ctx->pc = 0x1D78A8u;
label_1d78a8:
    // 0x1d78a8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1d78a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1d78ac:
    // 0x1d78ac: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x1d78acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_1d78b0:
    // 0x1d78b0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1d78b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d78b4:
    // 0x1d78b4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1d78b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1d78b8:
    // 0x1d78b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d78b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d78bc:
    // 0x1d78bc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1d78c0:
    if (ctx->pc == 0x1D78C0u) {
        ctx->pc = 0x1D78C0u;
            // 0x1d78c0: 0xe4a00010  swc1        $f0, 0x10($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->pc = 0x1D78C4u;
        goto label_1d78c4;
    }
    ctx->pc = 0x1D78BCu;
    {
        const bool branch_taken_0x1d78bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D78C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D78BCu;
            // 0x1d78c0: 0xe4a00010  swc1        $f0, 0x10($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78bc) {
            ctx->pc = 0x1D78CCu;
            goto label_1d78cc;
        }
    }
    ctx->pc = 0x1D78C4u;
label_1d78c4:
    // 0x1d78c4: 0x10000011  b           . + 4 + (0x11 << 2)
label_1d78c8:
    if (ctx->pc == 0x1D78C8u) {
        ctx->pc = 0x1D78C8u;
            // 0x1d78c8: 0xe4a10010  swc1        $f1, 0x10($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->pc = 0x1D78CCu;
        goto label_1d78cc;
    }
    ctx->pc = 0x1D78C4u;
    {
        const bool branch_taken_0x1d78c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D78C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D78C4u;
            // 0x1d78c8: 0xe4a10010  swc1        $f1, 0x10($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78c4) {
            ctx->pc = 0x1D790Cu;
            goto label_1d790c;
        }
    }
    ctx->pc = 0x1D78CCu;
label_1d78cc:
    // 0x1d78cc: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1d78ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1d78d0:
    // 0x1d78d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d78d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d78d4:
    // 0x1d78d4: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
label_1d78d8:
    if (ctx->pc == 0x1D78D8u) {
        ctx->pc = 0x1D78D8u;
            // 0x1d78d8: 0xa0a00005  sb          $zero, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1D78DCu;
        goto label_1d78dc;
    }
    ctx->pc = 0x1D78D4u;
    {
        const bool branch_taken_0x1d78d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d78d4) {
            ctx->pc = 0x1D78D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D78D4u;
            // 0x1d78d8: 0xa0a00005  sb          $zero, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D78F8u;
            goto label_1d78f8;
        }
    }
    ctx->pc = 0x1D78DCu;
label_1d78dc:
    // 0x1d78dc: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_1d78e0:
    if (ctx->pc == 0x1D78E0u) {
        ctx->pc = 0x1D78E0u;
            // 0x1d78e0: 0xa0a00005  sb          $zero, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1D78E4u;
        goto label_1d78e4;
    }
    ctx->pc = 0x1D78DCu;
    {
        const bool branch_taken_0x1d78dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d78dc) {
            ctx->pc = 0x1D78E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D78DCu;
            // 0x1d78e0: 0xa0a00005  sb          $zero, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D78ECu;
            goto label_1d78ec;
        }
    }
    ctx->pc = 0x1D78E4u;
label_1d78e4:
    // 0x1d78e4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d78e8:
    if (ctx->pc == 0x1D78E8u) {
        ctx->pc = 0x1D78ECu;
        goto label_1d78ec;
    }
    ctx->pc = 0x1D78E4u;
    {
        const bool branch_taken_0x1d78e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d78e4) {
            ctx->pc = 0x1D790Cu;
            goto label_1d790c;
        }
    }
    ctx->pc = 0x1D78ECu;
label_1d78ec:
    // 0x1d78ec: 0xa0a00004  sb          $zero, 0x4($a1)
    ctx->pc = 0x1d78ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 0));
label_1d78f0:
    // 0x1d78f0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d78f4:
    if (ctx->pc == 0x1D78F4u) {
        ctx->pc = 0x1D78F4u;
            // 0x1d78f4: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1D78F8u;
        goto label_1d78f8;
    }
    ctx->pc = 0x1D78F0u;
    {
        const bool branch_taken_0x1d78f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D78F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D78F0u;
            // 0x1d78f4: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78f0) {
            ctx->pc = 0x1D790Cu;
            goto label_1d790c;
        }
    }
    ctx->pc = 0x1D78F8u;
label_1d78f8:
    // 0x1d78f8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1d78f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_1d78fc:
    // 0x1d78fc: 0xa0a00004  sb          $zero, 0x4($a1)
    ctx->pc = 0x1d78fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 0));
label_1d7900:
    // 0x1d7900: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d7900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d7904:
    // 0x1d7904: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d7904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1d7908:
    // 0x1d7908: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d7908u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1d790c:
    // 0x1d790c: 0x8ca40038  lw          $a0, 0x38($a1)
    ctx->pc = 0x1d790cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_1d7910:
    // 0x1d7910: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1d7914:
    if (ctx->pc == 0x1D7914u) {
        ctx->pc = 0x1D7914u;
            // 0x1d7914: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1D7918u;
        goto label_1d7918;
    }
    ctx->pc = 0x1D7910u;
    {
        const bool branch_taken_0x1d7910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7910) {
            ctx->pc = 0x1D7914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7910u;
            // 0x1d7914: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7924u;
            goto label_1d7924;
        }
    }
    ctx->pc = 0x1D7918u;
label_1d7918:
    // 0x1d7918: 0xc0d3618  jal         func_34D860
label_1d791c:
    if (ctx->pc == 0x1D791Cu) {
        ctx->pc = 0x1D7920u;
        goto label_1d7920;
    }
    ctx->pc = 0x1D7918u;
    SET_GPR_U32(ctx, 31, 0x1D7920u);
    ctx->pc = 0x34D860u;
    if (runtime->hasFunction(0x34D860u)) {
        auto targetFn = runtime->lookupFunction(0x34D860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7920u; }
        if (ctx->pc != 0x1D7920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034D860_0x34d860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7920u; }
        if (ctx->pc != 0x1D7920u) { return; }
    }
    ctx->pc = 0x1D7920u;
label_1d7920:
    // 0x1d7920: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d7920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7924:
    // 0x1d7924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7928:
    // 0x1d7928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d792c:
    // 0x1d792c: 0x3e00008  jr          $ra
label_1d7930:
    if (ctx->pc == 0x1D7930u) {
        ctx->pc = 0x1D7930u;
            // 0x1d7930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1D7934u;
        goto label_1d7934;
    }
    ctx->pc = 0x1D792Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D792Cu;
            // 0x1d7930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7934u;
label_1d7934:
    // 0x1d7934: 0x0  nop
    ctx->pc = 0x1d7934u;
    // NOP
label_1d7938:
    // 0x1d7938: 0x0  nop
    ctx->pc = 0x1d7938u;
    // NOP
label_1d793c:
    // 0x1d793c: 0x0  nop
    ctx->pc = 0x1d793cu;
    // NOP
label_1d7940:
    // 0x1d7940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d7944:
    // 0x1d7944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d7948:
    // 0x1d7948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d794c:
    // 0x1d794c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d794cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d7950:
    // 0x1d7950: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_1d7954:
    if (ctx->pc == 0x1D7954u) {
        ctx->pc = 0x1D7954u;
            // 0x1d7954: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D7958u;
        goto label_1d7958;
    }
    ctx->pc = 0x1D7950u;
    {
        const bool branch_taken_0x1d7950 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7950) {
            ctx->pc = 0x1D7954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7950u;
            // 0x1d7954: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D797Cu;
            goto label_1d797c;
        }
    }
    ctx->pc = 0x1D7958u;
label_1d7958:
    // 0x1d7958: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1d7958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1d795c:
    // 0x1d795c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d795cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1d7960:
    // 0x1d7960: 0x2463cf10  addiu       $v1, $v1, -0x30F0
    ctx->pc = 0x1d7960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954768));
label_1d7964:
    // 0x1d7964: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d7964u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1d7968:
    // 0x1d7968: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1d796c:
    if (ctx->pc == 0x1D796Cu) {
        ctx->pc = 0x1D796Cu;
            // 0x1d796c: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x1D7970u;
        goto label_1d7970;
    }
    ctx->pc = 0x1D7968u;
    {
        const bool branch_taken_0x1d7968 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D796Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7968u;
            // 0x1d796c: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7968) {
            ctx->pc = 0x1D7978u;
            goto label_1d7978;
        }
    }
    ctx->pc = 0x1D7970u;
label_1d7970:
    // 0x1d7970: 0xc0400a8  jal         func_1002A0
label_1d7974:
    if (ctx->pc == 0x1D7974u) {
        ctx->pc = 0x1D7978u;
        goto label_1d7978;
    }
    ctx->pc = 0x1D7970u;
    SET_GPR_U32(ctx, 31, 0x1D7978u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7978u; }
        if (ctx->pc != 0x1D7978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7978u; }
        if (ctx->pc != 0x1D7978u) { return; }
    }
    ctx->pc = 0x1D7978u;
label_1d7978:
    // 0x1d7978: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d7978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d797c:
    // 0x1d797c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d797cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7980:
    // 0x1d7980: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7984:
    // 0x1d7984: 0x3e00008  jr          $ra
label_1d7988:
    if (ctx->pc == 0x1D7988u) {
        ctx->pc = 0x1D7988u;
            // 0x1d7988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1D798Cu;
        goto label_1d798c;
    }
    ctx->pc = 0x1D7984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7984u;
            // 0x1d7988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D798Cu;
label_1d798c:
    // 0x1d798c: 0x0  nop
    ctx->pc = 0x1d798cu;
    // NOP
label_1d7990:
    // 0x1d7990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d7994:
    // 0x1d7994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7998:
    // 0x1d7998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d799c:
    // 0x1d799c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1d799cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d79a0:
    // 0x1d79a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d79a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d79a4:
    // 0x1d79a4: 0xc04a576  jal         func_1295D8
label_1d79a8:
    if (ctx->pc == 0x1D79A8u) {
        ctx->pc = 0x1D79A8u;
            // 0x1d79a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D79ACu;
        goto label_1d79ac;
    }
    ctx->pc = 0x1D79A4u;
    SET_GPR_U32(ctx, 31, 0x1D79ACu);
    ctx->pc = 0x1D79A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D79A4u;
            // 0x1d79a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D79ACu; }
        if (ctx->pc != 0x1D79ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D79ACu; }
        if (ctx->pc != 0x1D79ACu) { return; }
    }
    ctx->pc = 0x1D79ACu;
label_1d79ac:
    // 0x1d79ac: 0xa2000015  sb          $zero, 0x15($s0)
    ctx->pc = 0x1d79acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
label_1d79b0:
    // 0x1d79b0: 0x1e3c  dsll32      $v1, $zero, 24
    ctx->pc = 0x1d79b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (32 + 24));
label_1d79b4:
    // 0x1d79b4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1d79b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1d79b8:
    // 0x1d79b8: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x1d79b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
label_1d79bc:
    // 0x1d79bc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1d79bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1d79c0:
    // 0x1d79c0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d79c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1d79c4:
    // 0x1d79c4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1d79c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1d79c8:
    // 0x1d79c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d79c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d79cc:
    // 0x1d79cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d79ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d79d0:
    // 0x1d79d0: 0x3e00008  jr          $ra
label_1d79d4:
    if (ctx->pc == 0x1D79D4u) {
        ctx->pc = 0x1D79D4u;
            // 0x1d79d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1D79D8u;
        goto label_1d79d8;
    }
    ctx->pc = 0x1D79D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D79D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D79D0u;
            // 0x1d79d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D79D8u;
label_1d79d8:
    // 0x1d79d8: 0x0  nop
    ctx->pc = 0x1d79d8u;
    // NOP
label_1d79dc:
    // 0x1d79dc: 0x0  nop
    ctx->pc = 0x1d79dcu;
    // NOP
}
