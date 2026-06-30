#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A7360
// Address: 0x3a7360 - 0x3a7b70
void sub_003A7360_0x3a7360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7360_0x3a7360");
#endif

    switch (ctx->pc) {
        case 0x3a7360u: goto label_3a7360;
        case 0x3a7364u: goto label_3a7364;
        case 0x3a7368u: goto label_3a7368;
        case 0x3a736cu: goto label_3a736c;
        case 0x3a7370u: goto label_3a7370;
        case 0x3a7374u: goto label_3a7374;
        case 0x3a7378u: goto label_3a7378;
        case 0x3a737cu: goto label_3a737c;
        case 0x3a7380u: goto label_3a7380;
        case 0x3a7384u: goto label_3a7384;
        case 0x3a7388u: goto label_3a7388;
        case 0x3a738cu: goto label_3a738c;
        case 0x3a7390u: goto label_3a7390;
        case 0x3a7394u: goto label_3a7394;
        case 0x3a7398u: goto label_3a7398;
        case 0x3a739cu: goto label_3a739c;
        case 0x3a73a0u: goto label_3a73a0;
        case 0x3a73a4u: goto label_3a73a4;
        case 0x3a73a8u: goto label_3a73a8;
        case 0x3a73acu: goto label_3a73ac;
        case 0x3a73b0u: goto label_3a73b0;
        case 0x3a73b4u: goto label_3a73b4;
        case 0x3a73b8u: goto label_3a73b8;
        case 0x3a73bcu: goto label_3a73bc;
        case 0x3a73c0u: goto label_3a73c0;
        case 0x3a73c4u: goto label_3a73c4;
        case 0x3a73c8u: goto label_3a73c8;
        case 0x3a73ccu: goto label_3a73cc;
        case 0x3a73d0u: goto label_3a73d0;
        case 0x3a73d4u: goto label_3a73d4;
        case 0x3a73d8u: goto label_3a73d8;
        case 0x3a73dcu: goto label_3a73dc;
        case 0x3a73e0u: goto label_3a73e0;
        case 0x3a73e4u: goto label_3a73e4;
        case 0x3a73e8u: goto label_3a73e8;
        case 0x3a73ecu: goto label_3a73ec;
        case 0x3a73f0u: goto label_3a73f0;
        case 0x3a73f4u: goto label_3a73f4;
        case 0x3a73f8u: goto label_3a73f8;
        case 0x3a73fcu: goto label_3a73fc;
        case 0x3a7400u: goto label_3a7400;
        case 0x3a7404u: goto label_3a7404;
        case 0x3a7408u: goto label_3a7408;
        case 0x3a740cu: goto label_3a740c;
        case 0x3a7410u: goto label_3a7410;
        case 0x3a7414u: goto label_3a7414;
        case 0x3a7418u: goto label_3a7418;
        case 0x3a741cu: goto label_3a741c;
        case 0x3a7420u: goto label_3a7420;
        case 0x3a7424u: goto label_3a7424;
        case 0x3a7428u: goto label_3a7428;
        case 0x3a742cu: goto label_3a742c;
        case 0x3a7430u: goto label_3a7430;
        case 0x3a7434u: goto label_3a7434;
        case 0x3a7438u: goto label_3a7438;
        case 0x3a743cu: goto label_3a743c;
        case 0x3a7440u: goto label_3a7440;
        case 0x3a7444u: goto label_3a7444;
        case 0x3a7448u: goto label_3a7448;
        case 0x3a744cu: goto label_3a744c;
        case 0x3a7450u: goto label_3a7450;
        case 0x3a7454u: goto label_3a7454;
        case 0x3a7458u: goto label_3a7458;
        case 0x3a745cu: goto label_3a745c;
        case 0x3a7460u: goto label_3a7460;
        case 0x3a7464u: goto label_3a7464;
        case 0x3a7468u: goto label_3a7468;
        case 0x3a746cu: goto label_3a746c;
        case 0x3a7470u: goto label_3a7470;
        case 0x3a7474u: goto label_3a7474;
        case 0x3a7478u: goto label_3a7478;
        case 0x3a747cu: goto label_3a747c;
        case 0x3a7480u: goto label_3a7480;
        case 0x3a7484u: goto label_3a7484;
        case 0x3a7488u: goto label_3a7488;
        case 0x3a748cu: goto label_3a748c;
        case 0x3a7490u: goto label_3a7490;
        case 0x3a7494u: goto label_3a7494;
        case 0x3a7498u: goto label_3a7498;
        case 0x3a749cu: goto label_3a749c;
        case 0x3a74a0u: goto label_3a74a0;
        case 0x3a74a4u: goto label_3a74a4;
        case 0x3a74a8u: goto label_3a74a8;
        case 0x3a74acu: goto label_3a74ac;
        case 0x3a74b0u: goto label_3a74b0;
        case 0x3a74b4u: goto label_3a74b4;
        case 0x3a74b8u: goto label_3a74b8;
        case 0x3a74bcu: goto label_3a74bc;
        case 0x3a74c0u: goto label_3a74c0;
        case 0x3a74c4u: goto label_3a74c4;
        case 0x3a74c8u: goto label_3a74c8;
        case 0x3a74ccu: goto label_3a74cc;
        case 0x3a74d0u: goto label_3a74d0;
        case 0x3a74d4u: goto label_3a74d4;
        case 0x3a74d8u: goto label_3a74d8;
        case 0x3a74dcu: goto label_3a74dc;
        case 0x3a74e0u: goto label_3a74e0;
        case 0x3a74e4u: goto label_3a74e4;
        case 0x3a74e8u: goto label_3a74e8;
        case 0x3a74ecu: goto label_3a74ec;
        case 0x3a74f0u: goto label_3a74f0;
        case 0x3a74f4u: goto label_3a74f4;
        case 0x3a74f8u: goto label_3a74f8;
        case 0x3a74fcu: goto label_3a74fc;
        case 0x3a7500u: goto label_3a7500;
        case 0x3a7504u: goto label_3a7504;
        case 0x3a7508u: goto label_3a7508;
        case 0x3a750cu: goto label_3a750c;
        case 0x3a7510u: goto label_3a7510;
        case 0x3a7514u: goto label_3a7514;
        case 0x3a7518u: goto label_3a7518;
        case 0x3a751cu: goto label_3a751c;
        case 0x3a7520u: goto label_3a7520;
        case 0x3a7524u: goto label_3a7524;
        case 0x3a7528u: goto label_3a7528;
        case 0x3a752cu: goto label_3a752c;
        case 0x3a7530u: goto label_3a7530;
        case 0x3a7534u: goto label_3a7534;
        case 0x3a7538u: goto label_3a7538;
        case 0x3a753cu: goto label_3a753c;
        case 0x3a7540u: goto label_3a7540;
        case 0x3a7544u: goto label_3a7544;
        case 0x3a7548u: goto label_3a7548;
        case 0x3a754cu: goto label_3a754c;
        case 0x3a7550u: goto label_3a7550;
        case 0x3a7554u: goto label_3a7554;
        case 0x3a7558u: goto label_3a7558;
        case 0x3a755cu: goto label_3a755c;
        case 0x3a7560u: goto label_3a7560;
        case 0x3a7564u: goto label_3a7564;
        case 0x3a7568u: goto label_3a7568;
        case 0x3a756cu: goto label_3a756c;
        case 0x3a7570u: goto label_3a7570;
        case 0x3a7574u: goto label_3a7574;
        case 0x3a7578u: goto label_3a7578;
        case 0x3a757cu: goto label_3a757c;
        case 0x3a7580u: goto label_3a7580;
        case 0x3a7584u: goto label_3a7584;
        case 0x3a7588u: goto label_3a7588;
        case 0x3a758cu: goto label_3a758c;
        case 0x3a7590u: goto label_3a7590;
        case 0x3a7594u: goto label_3a7594;
        case 0x3a7598u: goto label_3a7598;
        case 0x3a759cu: goto label_3a759c;
        case 0x3a75a0u: goto label_3a75a0;
        case 0x3a75a4u: goto label_3a75a4;
        case 0x3a75a8u: goto label_3a75a8;
        case 0x3a75acu: goto label_3a75ac;
        case 0x3a75b0u: goto label_3a75b0;
        case 0x3a75b4u: goto label_3a75b4;
        case 0x3a75b8u: goto label_3a75b8;
        case 0x3a75bcu: goto label_3a75bc;
        case 0x3a75c0u: goto label_3a75c0;
        case 0x3a75c4u: goto label_3a75c4;
        case 0x3a75c8u: goto label_3a75c8;
        case 0x3a75ccu: goto label_3a75cc;
        case 0x3a75d0u: goto label_3a75d0;
        case 0x3a75d4u: goto label_3a75d4;
        case 0x3a75d8u: goto label_3a75d8;
        case 0x3a75dcu: goto label_3a75dc;
        case 0x3a75e0u: goto label_3a75e0;
        case 0x3a75e4u: goto label_3a75e4;
        case 0x3a75e8u: goto label_3a75e8;
        case 0x3a75ecu: goto label_3a75ec;
        case 0x3a75f0u: goto label_3a75f0;
        case 0x3a75f4u: goto label_3a75f4;
        case 0x3a75f8u: goto label_3a75f8;
        case 0x3a75fcu: goto label_3a75fc;
        case 0x3a7600u: goto label_3a7600;
        case 0x3a7604u: goto label_3a7604;
        case 0x3a7608u: goto label_3a7608;
        case 0x3a760cu: goto label_3a760c;
        case 0x3a7610u: goto label_3a7610;
        case 0x3a7614u: goto label_3a7614;
        case 0x3a7618u: goto label_3a7618;
        case 0x3a761cu: goto label_3a761c;
        case 0x3a7620u: goto label_3a7620;
        case 0x3a7624u: goto label_3a7624;
        case 0x3a7628u: goto label_3a7628;
        case 0x3a762cu: goto label_3a762c;
        case 0x3a7630u: goto label_3a7630;
        case 0x3a7634u: goto label_3a7634;
        case 0x3a7638u: goto label_3a7638;
        case 0x3a763cu: goto label_3a763c;
        case 0x3a7640u: goto label_3a7640;
        case 0x3a7644u: goto label_3a7644;
        case 0x3a7648u: goto label_3a7648;
        case 0x3a764cu: goto label_3a764c;
        case 0x3a7650u: goto label_3a7650;
        case 0x3a7654u: goto label_3a7654;
        case 0x3a7658u: goto label_3a7658;
        case 0x3a765cu: goto label_3a765c;
        case 0x3a7660u: goto label_3a7660;
        case 0x3a7664u: goto label_3a7664;
        case 0x3a7668u: goto label_3a7668;
        case 0x3a766cu: goto label_3a766c;
        case 0x3a7670u: goto label_3a7670;
        case 0x3a7674u: goto label_3a7674;
        case 0x3a7678u: goto label_3a7678;
        case 0x3a767cu: goto label_3a767c;
        case 0x3a7680u: goto label_3a7680;
        case 0x3a7684u: goto label_3a7684;
        case 0x3a7688u: goto label_3a7688;
        case 0x3a768cu: goto label_3a768c;
        case 0x3a7690u: goto label_3a7690;
        case 0x3a7694u: goto label_3a7694;
        case 0x3a7698u: goto label_3a7698;
        case 0x3a769cu: goto label_3a769c;
        case 0x3a76a0u: goto label_3a76a0;
        case 0x3a76a4u: goto label_3a76a4;
        case 0x3a76a8u: goto label_3a76a8;
        case 0x3a76acu: goto label_3a76ac;
        case 0x3a76b0u: goto label_3a76b0;
        case 0x3a76b4u: goto label_3a76b4;
        case 0x3a76b8u: goto label_3a76b8;
        case 0x3a76bcu: goto label_3a76bc;
        case 0x3a76c0u: goto label_3a76c0;
        case 0x3a76c4u: goto label_3a76c4;
        case 0x3a76c8u: goto label_3a76c8;
        case 0x3a76ccu: goto label_3a76cc;
        case 0x3a76d0u: goto label_3a76d0;
        case 0x3a76d4u: goto label_3a76d4;
        case 0x3a76d8u: goto label_3a76d8;
        case 0x3a76dcu: goto label_3a76dc;
        case 0x3a76e0u: goto label_3a76e0;
        case 0x3a76e4u: goto label_3a76e4;
        case 0x3a76e8u: goto label_3a76e8;
        case 0x3a76ecu: goto label_3a76ec;
        case 0x3a76f0u: goto label_3a76f0;
        case 0x3a76f4u: goto label_3a76f4;
        case 0x3a76f8u: goto label_3a76f8;
        case 0x3a76fcu: goto label_3a76fc;
        case 0x3a7700u: goto label_3a7700;
        case 0x3a7704u: goto label_3a7704;
        case 0x3a7708u: goto label_3a7708;
        case 0x3a770cu: goto label_3a770c;
        case 0x3a7710u: goto label_3a7710;
        case 0x3a7714u: goto label_3a7714;
        case 0x3a7718u: goto label_3a7718;
        case 0x3a771cu: goto label_3a771c;
        case 0x3a7720u: goto label_3a7720;
        case 0x3a7724u: goto label_3a7724;
        case 0x3a7728u: goto label_3a7728;
        case 0x3a772cu: goto label_3a772c;
        case 0x3a7730u: goto label_3a7730;
        case 0x3a7734u: goto label_3a7734;
        case 0x3a7738u: goto label_3a7738;
        case 0x3a773cu: goto label_3a773c;
        case 0x3a7740u: goto label_3a7740;
        case 0x3a7744u: goto label_3a7744;
        case 0x3a7748u: goto label_3a7748;
        case 0x3a774cu: goto label_3a774c;
        case 0x3a7750u: goto label_3a7750;
        case 0x3a7754u: goto label_3a7754;
        case 0x3a7758u: goto label_3a7758;
        case 0x3a775cu: goto label_3a775c;
        case 0x3a7760u: goto label_3a7760;
        case 0x3a7764u: goto label_3a7764;
        case 0x3a7768u: goto label_3a7768;
        case 0x3a776cu: goto label_3a776c;
        case 0x3a7770u: goto label_3a7770;
        case 0x3a7774u: goto label_3a7774;
        case 0x3a7778u: goto label_3a7778;
        case 0x3a777cu: goto label_3a777c;
        case 0x3a7780u: goto label_3a7780;
        case 0x3a7784u: goto label_3a7784;
        case 0x3a7788u: goto label_3a7788;
        case 0x3a778cu: goto label_3a778c;
        case 0x3a7790u: goto label_3a7790;
        case 0x3a7794u: goto label_3a7794;
        case 0x3a7798u: goto label_3a7798;
        case 0x3a779cu: goto label_3a779c;
        case 0x3a77a0u: goto label_3a77a0;
        case 0x3a77a4u: goto label_3a77a4;
        case 0x3a77a8u: goto label_3a77a8;
        case 0x3a77acu: goto label_3a77ac;
        case 0x3a77b0u: goto label_3a77b0;
        case 0x3a77b4u: goto label_3a77b4;
        case 0x3a77b8u: goto label_3a77b8;
        case 0x3a77bcu: goto label_3a77bc;
        case 0x3a77c0u: goto label_3a77c0;
        case 0x3a77c4u: goto label_3a77c4;
        case 0x3a77c8u: goto label_3a77c8;
        case 0x3a77ccu: goto label_3a77cc;
        case 0x3a77d0u: goto label_3a77d0;
        case 0x3a77d4u: goto label_3a77d4;
        case 0x3a77d8u: goto label_3a77d8;
        case 0x3a77dcu: goto label_3a77dc;
        case 0x3a77e0u: goto label_3a77e0;
        case 0x3a77e4u: goto label_3a77e4;
        case 0x3a77e8u: goto label_3a77e8;
        case 0x3a77ecu: goto label_3a77ec;
        case 0x3a77f0u: goto label_3a77f0;
        case 0x3a77f4u: goto label_3a77f4;
        case 0x3a77f8u: goto label_3a77f8;
        case 0x3a77fcu: goto label_3a77fc;
        case 0x3a7800u: goto label_3a7800;
        case 0x3a7804u: goto label_3a7804;
        case 0x3a7808u: goto label_3a7808;
        case 0x3a780cu: goto label_3a780c;
        case 0x3a7810u: goto label_3a7810;
        case 0x3a7814u: goto label_3a7814;
        case 0x3a7818u: goto label_3a7818;
        case 0x3a781cu: goto label_3a781c;
        case 0x3a7820u: goto label_3a7820;
        case 0x3a7824u: goto label_3a7824;
        case 0x3a7828u: goto label_3a7828;
        case 0x3a782cu: goto label_3a782c;
        case 0x3a7830u: goto label_3a7830;
        case 0x3a7834u: goto label_3a7834;
        case 0x3a7838u: goto label_3a7838;
        case 0x3a783cu: goto label_3a783c;
        case 0x3a7840u: goto label_3a7840;
        case 0x3a7844u: goto label_3a7844;
        case 0x3a7848u: goto label_3a7848;
        case 0x3a784cu: goto label_3a784c;
        case 0x3a7850u: goto label_3a7850;
        case 0x3a7854u: goto label_3a7854;
        case 0x3a7858u: goto label_3a7858;
        case 0x3a785cu: goto label_3a785c;
        case 0x3a7860u: goto label_3a7860;
        case 0x3a7864u: goto label_3a7864;
        case 0x3a7868u: goto label_3a7868;
        case 0x3a786cu: goto label_3a786c;
        case 0x3a7870u: goto label_3a7870;
        case 0x3a7874u: goto label_3a7874;
        case 0x3a7878u: goto label_3a7878;
        case 0x3a787cu: goto label_3a787c;
        case 0x3a7880u: goto label_3a7880;
        case 0x3a7884u: goto label_3a7884;
        case 0x3a7888u: goto label_3a7888;
        case 0x3a788cu: goto label_3a788c;
        case 0x3a7890u: goto label_3a7890;
        case 0x3a7894u: goto label_3a7894;
        case 0x3a7898u: goto label_3a7898;
        case 0x3a789cu: goto label_3a789c;
        case 0x3a78a0u: goto label_3a78a0;
        case 0x3a78a4u: goto label_3a78a4;
        case 0x3a78a8u: goto label_3a78a8;
        case 0x3a78acu: goto label_3a78ac;
        case 0x3a78b0u: goto label_3a78b0;
        case 0x3a78b4u: goto label_3a78b4;
        case 0x3a78b8u: goto label_3a78b8;
        case 0x3a78bcu: goto label_3a78bc;
        case 0x3a78c0u: goto label_3a78c0;
        case 0x3a78c4u: goto label_3a78c4;
        case 0x3a78c8u: goto label_3a78c8;
        case 0x3a78ccu: goto label_3a78cc;
        case 0x3a78d0u: goto label_3a78d0;
        case 0x3a78d4u: goto label_3a78d4;
        case 0x3a78d8u: goto label_3a78d8;
        case 0x3a78dcu: goto label_3a78dc;
        case 0x3a78e0u: goto label_3a78e0;
        case 0x3a78e4u: goto label_3a78e4;
        case 0x3a78e8u: goto label_3a78e8;
        case 0x3a78ecu: goto label_3a78ec;
        case 0x3a78f0u: goto label_3a78f0;
        case 0x3a78f4u: goto label_3a78f4;
        case 0x3a78f8u: goto label_3a78f8;
        case 0x3a78fcu: goto label_3a78fc;
        case 0x3a7900u: goto label_3a7900;
        case 0x3a7904u: goto label_3a7904;
        case 0x3a7908u: goto label_3a7908;
        case 0x3a790cu: goto label_3a790c;
        case 0x3a7910u: goto label_3a7910;
        case 0x3a7914u: goto label_3a7914;
        case 0x3a7918u: goto label_3a7918;
        case 0x3a791cu: goto label_3a791c;
        case 0x3a7920u: goto label_3a7920;
        case 0x3a7924u: goto label_3a7924;
        case 0x3a7928u: goto label_3a7928;
        case 0x3a792cu: goto label_3a792c;
        case 0x3a7930u: goto label_3a7930;
        case 0x3a7934u: goto label_3a7934;
        case 0x3a7938u: goto label_3a7938;
        case 0x3a793cu: goto label_3a793c;
        case 0x3a7940u: goto label_3a7940;
        case 0x3a7944u: goto label_3a7944;
        case 0x3a7948u: goto label_3a7948;
        case 0x3a794cu: goto label_3a794c;
        case 0x3a7950u: goto label_3a7950;
        case 0x3a7954u: goto label_3a7954;
        case 0x3a7958u: goto label_3a7958;
        case 0x3a795cu: goto label_3a795c;
        case 0x3a7960u: goto label_3a7960;
        case 0x3a7964u: goto label_3a7964;
        case 0x3a7968u: goto label_3a7968;
        case 0x3a796cu: goto label_3a796c;
        case 0x3a7970u: goto label_3a7970;
        case 0x3a7974u: goto label_3a7974;
        case 0x3a7978u: goto label_3a7978;
        case 0x3a797cu: goto label_3a797c;
        case 0x3a7980u: goto label_3a7980;
        case 0x3a7984u: goto label_3a7984;
        case 0x3a7988u: goto label_3a7988;
        case 0x3a798cu: goto label_3a798c;
        case 0x3a7990u: goto label_3a7990;
        case 0x3a7994u: goto label_3a7994;
        case 0x3a7998u: goto label_3a7998;
        case 0x3a799cu: goto label_3a799c;
        case 0x3a79a0u: goto label_3a79a0;
        case 0x3a79a4u: goto label_3a79a4;
        case 0x3a79a8u: goto label_3a79a8;
        case 0x3a79acu: goto label_3a79ac;
        case 0x3a79b0u: goto label_3a79b0;
        case 0x3a79b4u: goto label_3a79b4;
        case 0x3a79b8u: goto label_3a79b8;
        case 0x3a79bcu: goto label_3a79bc;
        case 0x3a79c0u: goto label_3a79c0;
        case 0x3a79c4u: goto label_3a79c4;
        case 0x3a79c8u: goto label_3a79c8;
        case 0x3a79ccu: goto label_3a79cc;
        case 0x3a79d0u: goto label_3a79d0;
        case 0x3a79d4u: goto label_3a79d4;
        case 0x3a79d8u: goto label_3a79d8;
        case 0x3a79dcu: goto label_3a79dc;
        case 0x3a79e0u: goto label_3a79e0;
        case 0x3a79e4u: goto label_3a79e4;
        case 0x3a79e8u: goto label_3a79e8;
        case 0x3a79ecu: goto label_3a79ec;
        case 0x3a79f0u: goto label_3a79f0;
        case 0x3a79f4u: goto label_3a79f4;
        case 0x3a79f8u: goto label_3a79f8;
        case 0x3a79fcu: goto label_3a79fc;
        case 0x3a7a00u: goto label_3a7a00;
        case 0x3a7a04u: goto label_3a7a04;
        case 0x3a7a08u: goto label_3a7a08;
        case 0x3a7a0cu: goto label_3a7a0c;
        case 0x3a7a10u: goto label_3a7a10;
        case 0x3a7a14u: goto label_3a7a14;
        case 0x3a7a18u: goto label_3a7a18;
        case 0x3a7a1cu: goto label_3a7a1c;
        case 0x3a7a20u: goto label_3a7a20;
        case 0x3a7a24u: goto label_3a7a24;
        case 0x3a7a28u: goto label_3a7a28;
        case 0x3a7a2cu: goto label_3a7a2c;
        case 0x3a7a30u: goto label_3a7a30;
        case 0x3a7a34u: goto label_3a7a34;
        case 0x3a7a38u: goto label_3a7a38;
        case 0x3a7a3cu: goto label_3a7a3c;
        case 0x3a7a40u: goto label_3a7a40;
        case 0x3a7a44u: goto label_3a7a44;
        case 0x3a7a48u: goto label_3a7a48;
        case 0x3a7a4cu: goto label_3a7a4c;
        case 0x3a7a50u: goto label_3a7a50;
        case 0x3a7a54u: goto label_3a7a54;
        case 0x3a7a58u: goto label_3a7a58;
        case 0x3a7a5cu: goto label_3a7a5c;
        case 0x3a7a60u: goto label_3a7a60;
        case 0x3a7a64u: goto label_3a7a64;
        case 0x3a7a68u: goto label_3a7a68;
        case 0x3a7a6cu: goto label_3a7a6c;
        case 0x3a7a70u: goto label_3a7a70;
        case 0x3a7a74u: goto label_3a7a74;
        case 0x3a7a78u: goto label_3a7a78;
        case 0x3a7a7cu: goto label_3a7a7c;
        case 0x3a7a80u: goto label_3a7a80;
        case 0x3a7a84u: goto label_3a7a84;
        case 0x3a7a88u: goto label_3a7a88;
        case 0x3a7a8cu: goto label_3a7a8c;
        case 0x3a7a90u: goto label_3a7a90;
        case 0x3a7a94u: goto label_3a7a94;
        case 0x3a7a98u: goto label_3a7a98;
        case 0x3a7a9cu: goto label_3a7a9c;
        case 0x3a7aa0u: goto label_3a7aa0;
        case 0x3a7aa4u: goto label_3a7aa4;
        case 0x3a7aa8u: goto label_3a7aa8;
        case 0x3a7aacu: goto label_3a7aac;
        case 0x3a7ab0u: goto label_3a7ab0;
        case 0x3a7ab4u: goto label_3a7ab4;
        case 0x3a7ab8u: goto label_3a7ab8;
        case 0x3a7abcu: goto label_3a7abc;
        case 0x3a7ac0u: goto label_3a7ac0;
        case 0x3a7ac4u: goto label_3a7ac4;
        case 0x3a7ac8u: goto label_3a7ac8;
        case 0x3a7accu: goto label_3a7acc;
        case 0x3a7ad0u: goto label_3a7ad0;
        case 0x3a7ad4u: goto label_3a7ad4;
        case 0x3a7ad8u: goto label_3a7ad8;
        case 0x3a7adcu: goto label_3a7adc;
        case 0x3a7ae0u: goto label_3a7ae0;
        case 0x3a7ae4u: goto label_3a7ae4;
        case 0x3a7ae8u: goto label_3a7ae8;
        case 0x3a7aecu: goto label_3a7aec;
        case 0x3a7af0u: goto label_3a7af0;
        case 0x3a7af4u: goto label_3a7af4;
        case 0x3a7af8u: goto label_3a7af8;
        case 0x3a7afcu: goto label_3a7afc;
        case 0x3a7b00u: goto label_3a7b00;
        case 0x3a7b04u: goto label_3a7b04;
        case 0x3a7b08u: goto label_3a7b08;
        case 0x3a7b0cu: goto label_3a7b0c;
        case 0x3a7b10u: goto label_3a7b10;
        case 0x3a7b14u: goto label_3a7b14;
        case 0x3a7b18u: goto label_3a7b18;
        case 0x3a7b1cu: goto label_3a7b1c;
        case 0x3a7b20u: goto label_3a7b20;
        case 0x3a7b24u: goto label_3a7b24;
        case 0x3a7b28u: goto label_3a7b28;
        case 0x3a7b2cu: goto label_3a7b2c;
        case 0x3a7b30u: goto label_3a7b30;
        case 0x3a7b34u: goto label_3a7b34;
        case 0x3a7b38u: goto label_3a7b38;
        case 0x3a7b3cu: goto label_3a7b3c;
        case 0x3a7b40u: goto label_3a7b40;
        case 0x3a7b44u: goto label_3a7b44;
        case 0x3a7b48u: goto label_3a7b48;
        case 0x3a7b4cu: goto label_3a7b4c;
        case 0x3a7b50u: goto label_3a7b50;
        case 0x3a7b54u: goto label_3a7b54;
        case 0x3a7b58u: goto label_3a7b58;
        case 0x3a7b5cu: goto label_3a7b5c;
        case 0x3a7b60u: goto label_3a7b60;
        case 0x3a7b64u: goto label_3a7b64;
        case 0x3a7b68u: goto label_3a7b68;
        case 0x3a7b6cu: goto label_3a7b6c;
        default: break;
    }

    ctx->pc = 0x3a7360u;

label_3a7360:
    // 0x3a7360: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x3a7360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_3a7364:
    // 0x3a7364: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3a7364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3a7368:
    // 0x3a7368: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3a7368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3a736c:
    // 0x3a736c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3a736cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3a7370:
    // 0x3a7370: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3a7370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3a7374:
    // 0x3a7374: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3a7374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3a7378:
    // 0x3a7378: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3a7378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3a737c:
    // 0x3a737c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3a7380:
    // 0x3a7380: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a7380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3a7384:
    // 0x3a7384: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a7384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3a7388:
    // 0x3a7388: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a7388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a738c:
    // 0x3a738c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3a738cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a7390:
    // 0x3a7390: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3a7390u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
label_3a7394:
    // 0x3a7394: 0x106001e6  beqz        $v1, . + 4 + (0x1E6 << 2)
label_3a7398:
    if (ctx->pc == 0x3A7398u) {
        ctx->pc = 0x3A7398u;
            // 0x3a7398: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A739Cu;
        goto label_3a739c;
    }
    ctx->pc = 0x3A7394u;
    {
        const bool branch_taken_0x3a7394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7394u;
            // 0x3a7398: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7394) {
            ctx->pc = 0x3A7B30u;
            goto label_3a7b30;
        }
    }
    ctx->pc = 0x3A739Cu;
label_3a739c:
    // 0x3a739c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a739cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3a73a0:
    // 0x3a73a0: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x3a73a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3a73a4:
    // 0x3a73a4: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x3a73a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_3a73a8:
    // 0x3a73a8: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x3a73a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_3a73ac:
    // 0x3a73ac: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x3a73acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_3a73b0:
    // 0x3a73b0: 0x2631a580  addiu       $s1, $s1, -0x5A80
    ctx->pc = 0x3a73b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944128));
label_3a73b4:
    // 0x3a73b4: 0x90be0116  lbu         $fp, 0x116($a1)
    ctx->pc = 0x3a73b4u;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 278)));
label_3a73b8:
    // 0x3a73b8: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x3a73b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_3a73bc:
    // 0x3a73bc: 0x90a300e4  lbu         $v1, 0xE4($a1)
    ctx->pc = 0x3a73bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 228)));
label_3a73c0:
    // 0x3a73c0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3a73c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3a73c4:
    // 0x3a73c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3a73c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3a73c8:
    // 0x3a73c8: 0x146001d9  bnez        $v1, . + 4 + (0x1D9 << 2)
label_3a73cc:
    if (ctx->pc == 0x3A73CCu) {
        ctx->pc = 0x3A73CCu;
            // 0x3a73cc: 0x26102104  addiu       $s0, $s0, 0x2104 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8452));
        ctx->pc = 0x3A73D0u;
        goto label_3a73d0;
    }
    ctx->pc = 0x3A73C8u;
    {
        const bool branch_taken_0x3a73c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A73CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A73C8u;
            // 0x3a73cc: 0x26102104  addiu       $s0, $s0, 0x2104 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a73c8) {
            ctx->pc = 0x3A7B30u;
            goto label_3a7b30;
        }
    }
    ctx->pc = 0x3A73D0u;
label_3a73d0:
    // 0x3a73d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a73d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a73d4:
    // 0x3a73d4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3a73d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3a73d8:
    // 0x3a73d8: 0x8c420960  lw          $v0, 0x960($v0)
    ctx->pc = 0x3a73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2400)));
label_3a73dc:
    // 0x3a73dc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3a73dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3a73e0:
    // 0x3a73e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3a73e4:
    if (ctx->pc == 0x3A73E4u) {
        ctx->pc = 0x3A73E8u;
        goto label_3a73e8;
    }
    ctx->pc = 0x3A73E0u;
    {
        const bool branch_taken_0x3a73e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a73e0) {
            ctx->pc = 0x3A7400u;
            goto label_3a7400;
        }
    }
    ctx->pc = 0x3A73E8u;
label_3a73e8:
    // 0x3a73e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a73e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a73ec:
    // 0x3a73ec: 0x86a50004  lh          $a1, 0x4($s5)
    ctx->pc = 0x3a73ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_3a73f0:
    // 0x3a73f0: 0x86a60006  lh          $a2, 0x6($s5)
    ctx->pc = 0x3a73f0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
label_3a73f4:
    // 0x3a73f4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3a73f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3a73f8:
    // 0x3a73f8: 0x320f809  jalr        $t9
label_3a73fc:
    if (ctx->pc == 0x3A73FCu) {
        ctx->pc = 0x3A73FCu;
            // 0x3a73fc: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A7400u;
        goto label_3a7400;
    }
    ctx->pc = 0x3A73F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A7400u);
        ctx->pc = 0x3A73FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A73F8u;
            // 0x3a73fc: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A7400u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A7400u; }
            if (ctx->pc != 0x3A7400u) { return; }
        }
        }
    }
    ctx->pc = 0x3A7400u;
label_3a7400:
    // 0x3a7400: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a7400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a7404:
    // 0x3a7404: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3a7404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3a7408:
    // 0x3a7408: 0x8c420960  lw          $v0, 0x960($v0)
    ctx->pc = 0x3a7408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2400)));
label_3a740c:
    // 0x3a740c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3a740cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_3a7410:
    // 0x3a7410: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3a7414:
    if (ctx->pc == 0x3A7414u) {
        ctx->pc = 0x3A7418u;
        goto label_3a7418;
    }
    ctx->pc = 0x3A7410u;
    {
        const bool branch_taken_0x3a7410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7410) {
            ctx->pc = 0x3A7434u;
            goto label_3a7434;
        }
    }
    ctx->pc = 0x3A7418u;
label_3a7418:
    // 0x3a7418: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3a7418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3a741c:
    // 0x3a741c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a741cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a7420:
    // 0x3a7420: 0x86a50004  lh          $a1, 0x4($s5)
    ctx->pc = 0x3a7420u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_3a7424:
    // 0x3a7424: 0x86a60006  lh          $a2, 0x6($s5)
    ctx->pc = 0x3a7424u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
label_3a7428:
    // 0x3a7428: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3a7428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3a742c:
    // 0x3a742c: 0x320f809  jalr        $t9
label_3a7430:
    if (ctx->pc == 0x3A7430u) {
        ctx->pc = 0x3A7430u;
            // 0x3a7430: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A7434u;
        goto label_3a7434;
    }
    ctx->pc = 0x3A742Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A7434u);
        ctx->pc = 0x3A7430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A742Cu;
            // 0x3a7430: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A7434u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A7434u; }
            if (ctx->pc != 0x3A7434u) { return; }
        }
        }
    }
    ctx->pc = 0x3A7434u;
label_3a7434:
    // 0x3a7434: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3a7434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3a7438:
    // 0x3a7438: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x3a7438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_3a743c:
    // 0x3a743c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x3a743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3a7440:
    // 0x3a7440: 0x26a50040  addiu       $a1, $s5, 0x40
    ctx->pc = 0x3a7440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_3a7444:
    // 0x3a7444: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3a7444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3a7448:
    // 0x3a7448: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3a7448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3a744c:
    // 0x3a744c: 0xc04cce8  jal         func_1333A0
label_3a7450:
    if (ctx->pc == 0x3A7450u) {
        ctx->pc = 0x3A7450u;
            // 0x3a7450: 0x245200d0  addiu       $s2, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->pc = 0x3A7454u;
        goto label_3a7454;
    }
    ctx->pc = 0x3A744Cu;
    SET_GPR_U32(ctx, 31, 0x3A7454u);
    ctx->pc = 0x3A7450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A744Cu;
            // 0x3a7450: 0x245200d0  addiu       $s2, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7454u; }
        if (ctx->pc != 0x3A7454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7454u; }
        if (ctx->pc != 0x3A7454u) { return; }
    }
    ctx->pc = 0x3A7454u;
label_3a7454:
    // 0x3a7454: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a7454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a7458:
    // 0x3a7458: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3a7458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3a745c:
    // 0x3a745c: 0xc04cd60  jal         func_133580
label_3a7460:
    if (ctx->pc == 0x3A7460u) {
        ctx->pc = 0x3A7460u;
            // 0x3a7460: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x3A7464u;
        goto label_3a7464;
    }
    ctx->pc = 0x3A745Cu;
    SET_GPR_U32(ctx, 31, 0x3A7464u);
    ctx->pc = 0x3A7460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A745Cu;
            // 0x3a7460: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7464u; }
        if (ctx->pc != 0x3A7464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7464u; }
        if (ctx->pc != 0x3A7464u) { return; }
    }
    ctx->pc = 0x3A7464u;
label_3a7464:
    // 0x3a7464: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a7464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a7468:
    // 0x3a7468: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3a7468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3a746c:
    // 0x3a746c: 0xc0506ac  jal         func_141AB0
label_3a7470:
    if (ctx->pc == 0x3A7470u) {
        ctx->pc = 0x3A7470u;
            // 0x3a7470: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A7474u;
        goto label_3a7474;
    }
    ctx->pc = 0x3A746Cu;
    SET_GPR_U32(ctx, 31, 0x3A7474u);
    ctx->pc = 0x3A7470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A746Cu;
            // 0x3a7470: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7474u; }
        if (ctx->pc != 0x3A7474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7474u; }
        if (ctx->pc != 0x3A7474u) { return; }
    }
    ctx->pc = 0x3A7474u;
label_3a7474:
    // 0x3a7474: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x3a7474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3a7478:
    // 0x3a7478: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a7478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a747c:
    // 0x3a747c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3a747cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a7480:
    // 0x3a7480: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a7480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a7484:
    // 0x3a7484: 0x320f809  jalr        $t9
label_3a7488:
    if (ctx->pc == 0x3A7488u) {
        ctx->pc = 0x3A7488u;
            // 0x3a7488: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A748Cu;
        goto label_3a748c;
    }
    ctx->pc = 0x3A7484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A748Cu);
        ctx->pc = 0x3A7488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7484u;
            // 0x3a7488: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A748Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A748Cu; }
            if (ctx->pc != 0x3A748Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A748Cu;
label_3a748c:
    // 0x3a748c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a748cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a7490:
    // 0x3a7490: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a7490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a7494:
    // 0x3a7494: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3a7494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3a7498:
    // 0x3a7498: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3a7498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3a749c:
    // 0x3a749c: 0x14430091  bne         $v0, $v1, . + 4 + (0x91 << 2)
label_3a74a0:
    if (ctx->pc == 0x3A74A0u) {
        ctx->pc = 0x3A74A4u;
        goto label_3a74a4;
    }
    ctx->pc = 0x3A749Cu;
    {
        const bool branch_taken_0x3a749c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a749c) {
            ctx->pc = 0x3A76E4u;
            goto label_3a76e4;
        }
    }
    ctx->pc = 0x3A74A4u;
label_3a74a4:
    // 0x3a74a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a74a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a74a8:
    // 0x3a74a8: 0x8c433e78  lw          $v1, 0x3E78($v0)
    ctx->pc = 0x3a74a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15992)));
label_3a74ac:
    // 0x3a74ac: 0x1060008d  beqz        $v1, . + 4 + (0x8D << 2)
label_3a74b0:
    if (ctx->pc == 0x3A74B0u) {
        ctx->pc = 0x3A74B4u;
        goto label_3a74b4;
    }
    ctx->pc = 0x3A74ACu;
    {
        const bool branch_taken_0x3a74ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a74ac) {
            ctx->pc = 0x3A76E4u;
            goto label_3a76e4;
        }
    }
    ctx->pc = 0x3A74B4u;
label_3a74b4:
    // 0x3a74b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3a74b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3a74b8:
    // 0x3a74b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3a74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a74bc:
    // 0x3a74bc: 0x9042fe01  lbu         $v0, -0x1FF($v0)
    ctx->pc = 0x3a74bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294966785)));
label_3a74c0:
    // 0x3a74c0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3a74c4:
    if (ctx->pc == 0x3A74C4u) {
        ctx->pc = 0x3A74C4u;
            // 0x3a74c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A74C8u;
        goto label_3a74c8;
    }
    ctx->pc = 0x3A74C0u;
    {
        const bool branch_taken_0x3a74c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a74c0) {
            ctx->pc = 0x3A74C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A74C0u;
            // 0x3a74c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A74D0u;
            goto label_3a74d0;
        }
    }
    ctx->pc = 0x3A74C8u;
label_3a74c8:
    // 0x3a74c8: 0x3401fda0  ori         $at, $zero, 0xFDA0
    ctx->pc = 0x3a74c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64928);
label_3a74cc:
    // 0x3a74cc: 0x619021  addu        $s2, $v1, $at
    ctx->pc = 0x3a74ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_3a74d0:
    // 0x3a74d0: 0x12400084  beqz        $s2, . + 4 + (0x84 << 2)
label_3a74d4:
    if (ctx->pc == 0x3A74D4u) {
        ctx->pc = 0x3A74D8u;
        goto label_3a74d8;
    }
    ctx->pc = 0x3A74D0u;
    {
        const bool branch_taken_0x3a74d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a74d0) {
            ctx->pc = 0x3A76E4u;
            goto label_3a76e4;
        }
    }
    ctx->pc = 0x3A74D8u;
label_3a74d8:
    // 0x3a74d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a74d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a74dc:
    // 0x3a74dc: 0x8c420d70  lw          $v0, 0xD70($v0)
    ctx->pc = 0x3a74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
label_3a74e0:
    // 0x3a74e0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3a74e4:
    if (ctx->pc == 0x3A74E4u) {
        ctx->pc = 0x3A74E4u;
            // 0x3a74e4: 0x8c420074  lw          $v0, 0x74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->pc = 0x3A74E8u;
        goto label_3a74e8;
    }
    ctx->pc = 0x3A74E0u;
    {
        const bool branch_taken_0x3a74e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a74e0) {
            ctx->pc = 0x3A74E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A74E0u;
            // 0x3a74e4: 0x8c420074  lw          $v0, 0x74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A74F0u;
            goto label_3a74f0;
        }
    }
    ctx->pc = 0x3A74E8u;
label_3a74e8:
    // 0x3a74e8: 0x10000044  b           . + 4 + (0x44 << 2)
label_3a74ec:
    if (ctx->pc == 0x3A74ECu) {
        ctx->pc = 0x3A74ECu;
            // 0x3a74ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A74F0u;
        goto label_3a74f0;
    }
    ctx->pc = 0x3A74E8u;
    {
        const bool branch_taken_0x3a74e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A74ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A74E8u;
            // 0x3a74ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a74e8) {
            ctx->pc = 0x3A75FCu;
            goto label_3a75fc;
        }
    }
    ctx->pc = 0x3A74F0u;
label_3a74f0:
    // 0x3a74f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a74f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a74f4:
    // 0x3a74f4: 0xc0fd8e8  jal         func_3F63A0
label_3a74f8:
    if (ctx->pc == 0x3A74F8u) {
        ctx->pc = 0x3A74F8u;
            // 0x3a74f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A74FCu;
        goto label_3a74fc;
    }
    ctx->pc = 0x3A74F4u;
    SET_GPR_U32(ctx, 31, 0x3A74FCu);
    ctx->pc = 0x3A74F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A74F4u;
            // 0x3a74f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F63A0u;
    if (runtime->hasFunction(0x3F63A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F63A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A74FCu; }
        if (ctx->pc != 0x3A74FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F63A0_0x3f63a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A74FCu; }
        if (ctx->pc != 0x3A74FCu) { return; }
    }
    ctx->pc = 0x3A74FCu;
label_3a74fc:
    // 0x3a74fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a74fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a7500:
    // 0x3a7500: 0x0  nop
    ctx->pc = 0x3a7500u;
    // NOP
label_3a7504:
    // 0x3a7504: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3a7504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a7508:
    // 0x3a7508: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3a750c:
    if (ctx->pc == 0x3A750Cu) {
        ctx->pc = 0x3A750Cu;
            // 0x3a750c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3A7510u;
        goto label_3a7510;
    }
    ctx->pc = 0x3A7508u;
    {
        const bool branch_taken_0x3a7508 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a7508) {
            ctx->pc = 0x3A750Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7508u;
            // 0x3a750c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A7518u;
            goto label_3a7518;
        }
    }
    ctx->pc = 0x3A7510u;
label_3a7510:
    // 0x3a7510: 0x1000003a  b           . + 4 + (0x3A << 2)
label_3a7514:
    if (ctx->pc == 0x3A7514u) {
        ctx->pc = 0x3A7514u;
            // 0x3a7514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A7518u;
        goto label_3a7518;
    }
    ctx->pc = 0x3A7510u;
    {
        const bool branch_taken_0x3a7510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7510u;
            // 0x3a7514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7510) {
            ctx->pc = 0x3A75FCu;
            goto label_3a75fc;
        }
    }
    ctx->pc = 0x3A7518u;
label_3a7518:
    // 0x3a7518: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x3a7518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_3a751c:
    // 0x3a751c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3a751cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3a7520:
    // 0x3a7520: 0x24c6f3a8  addiu       $a2, $a2, -0xC58
    ctx->pc = 0x3a7520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964136));
label_3a7524:
    // 0x3a7524: 0x24a5f3a0  addiu       $a1, $a1, -0xC60
    ctx->pc = 0x3a7524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964128));
label_3a7528:
    // 0x3a7528: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3a7528u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3a752c:
    // 0x3a752c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3a752cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a7530:
    // 0x3a7530: 0x24e4ffff  addiu       $a0, $a3, -0x1
    ctx->pc = 0x3a7530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3a7534:
    // 0x3a7534: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3a7534u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3a7538:
    // 0x3a7538: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3a7538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a753c:
    // 0x3a753c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3a753cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a7540:
    // 0x3a7540: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3a7544:
    if (ctx->pc == 0x3A7544u) {
        ctx->pc = 0x3A7544u;
            // 0x3a7544: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x3A7548u;
        goto label_3a7548;
    }
    ctx->pc = 0x3A7540u;
    {
        const bool branch_taken_0x3a7540 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A7544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7540u;
            // 0x3a7544: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7540) {
            ctx->pc = 0x3A754Cu;
            goto label_3a754c;
        }
    }
    ctx->pc = 0x3A7548u;
label_3a7548:
    // 0x3a7548: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a7548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a754c:
    // 0x3a754c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a754cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3a7550:
    // 0x3a7550: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_3a7554:
    if (ctx->pc == 0x3A7554u) {
        ctx->pc = 0x3A7554u;
            // 0x3a7554: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x3A7558u;
        goto label_3a7558;
    }
    ctx->pc = 0x3A7550u;
    {
        const bool branch_taken_0x3a7550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7550) {
            ctx->pc = 0x3A7554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7550u;
            // 0x3a7554: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A75ECu;
            goto label_3a75ec;
        }
    }
    ctx->pc = 0x3A7558u;
label_3a7558:
    // 0x3a7558: 0x84c50006  lh          $a1, 0x6($a2)
    ctx->pc = 0x3a7558u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3a755c:
    // 0x3a755c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3a755cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a7560:
    // 0x3a7560: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x3a7560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_3a7564:
    // 0x3a7564: 0x86a20004  lh          $v0, 0x4($s5)
    ctx->pc = 0x3a7564u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_3a7568:
    // 0x3a7568: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x3a7568u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3a756c:
    // 0x3a756c: 0x84860006  lh          $a2, 0x6($a0)
    ctx->pc = 0x3a756cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3a7570:
    // 0x3a7570: 0x84840004  lh          $a0, 0x4($a0)
    ctx->pc = 0x3a7570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_3a7574:
    // 0x3a7574: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3a7574u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3a7578:
    // 0x3a7578: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3a7578u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3a757c:
    // 0x3a757c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a757cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3a7580:
    // 0x3a7580: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a7580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3a7584:
    // 0x3a7584: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7588:
    // 0x3a7588: 0x0  nop
    ctx->pc = 0x3a7588u;
    // NOP
label_3a758c:
    // 0x3a758c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a758cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a7590:
    // 0x3a7590: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3a7590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3a7594:
    // 0x3a7594: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x3a7594u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
label_3a7598:
    // 0x3a7598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a7598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a759c:
    // 0x3a759c: 0x0  nop
    ctx->pc = 0x3a759cu;
    // NOP
label_3a75a0:
    // 0x3a75a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a75a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a75a4:
    // 0x3a75a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a75a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3a75a8:
    // 0x3a75a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a75a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a75ac:
    // 0x3a75ac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3a75acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a75b0:
    // 0x3a75b0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3a75b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a75b4:
    // 0x3a75b4: 0xa7a201cc  sh          $v0, 0x1CC($sp)
    ctx->pc = 0x3a75b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 460), (uint16_t)GPR_U32(ctx, 2));
label_3a75b8:
    // 0x3a75b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a75b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a75bc:
    // 0x3a75bc: 0x86a20006  lh          $v0, 0x6($s5)
    ctx->pc = 0x3a75bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
label_3a75c0:
    // 0x3a75c0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3a75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3a75c4:
    // 0x3a75c4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3a75c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3a75c8:
    // 0x3a75c8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3a75c8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_3a75cc:
    // 0x3a75cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3a75ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a75d0:
    // 0x3a75d0: 0x0  nop
    ctx->pc = 0x3a75d0u;
    // NOP
label_3a75d4:
    // 0x3a75d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a75d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3a75d8:
    // 0x3a75d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3a75d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3a75dc:
    // 0x3a75dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a75dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a75e0:
    // 0x3a75e0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3a75e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a75e4:
    // 0x3a75e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a75e8:
    if (ctx->pc == 0x3A75E8u) {
        ctx->pc = 0x3A75E8u;
            // 0x3a75e8: 0xa7a201ce  sh          $v0, 0x1CE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 462), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3A75ECu;
        goto label_3a75ec;
    }
    ctx->pc = 0x3A75E4u;
    {
        const bool branch_taken_0x3a75e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A75E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A75E4u;
            // 0x3a75e8: 0xa7a201ce  sh          $v0, 0x1CE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 462), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a75e4) {
            ctx->pc = 0x3A75F8u;
            goto label_3a75f8;
        }
    }
    ctx->pc = 0x3A75ECu;
label_3a75ec:
    // 0x3a75ec: 0x28e2000a  slti        $v0, $a3, 0xA
    ctx->pc = 0x3a75ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
label_3a75f0:
    // 0x3a75f0: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_3a75f4:
    if (ctx->pc == 0x3A75F4u) {
        ctx->pc = 0x3A75F4u;
            // 0x3a75f4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x3A75F8u;
        goto label_3a75f8;
    }
    ctx->pc = 0x3A75F0u;
    {
        const bool branch_taken_0x3a75f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A75F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A75F0u;
            // 0x3a75f4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a75f0) {
            ctx->pc = 0x3A752Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a752c;
        }
    }
    ctx->pc = 0x3A75F8u;
label_3a75f8:
    // 0x3a75f8: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3a75f8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3a75fc:
    // 0x3a75fc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3a7600:
    if (ctx->pc == 0x3A7600u) {
        ctx->pc = 0x3A7600u;
            // 0x3a7600: 0x92430060  lbu         $v1, 0x60($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->pc = 0x3A7604u;
        goto label_3a7604;
    }
    ctx->pc = 0x3A75FCu;
    {
        const bool branch_taken_0x3a75fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a75fc) {
            ctx->pc = 0x3A7600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A75FCu;
            // 0x3a7600: 0x92430060  lbu         $v1, 0x60($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A7628u;
            goto label_3a7628;
        }
    }
    ctx->pc = 0x3A7604u;
label_3a7604:
    // 0x3a7604: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3a7604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3a7608:
    // 0x3a7608: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a7608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a760c:
    // 0x3a760c: 0x27a501cc  addiu       $a1, $sp, 0x1CC
    ctx->pc = 0x3a760cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
label_3a7610:
    // 0x3a7610: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3a7610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a7614:
    // 0x3a7614: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x3a7614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3a7618:
    // 0x3a7618: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3a7618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3a761c:
    // 0x3a761c: 0x320f809  jalr        $t9
label_3a7620:
    if (ctx->pc == 0x3A7620u) {
        ctx->pc = 0x3A7620u;
            // 0x3a7620: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A7624u;
        goto label_3a7624;
    }
    ctx->pc = 0x3A761Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A7624u);
        ctx->pc = 0x3A7620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A761Cu;
            // 0x3a7620: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A7624u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A7624u; }
            if (ctx->pc != 0x3A7624u) { return; }
        }
        }
    }
    ctx->pc = 0x3A7624u;
label_3a7624:
    // 0x3a7624: 0x92430060  lbu         $v1, 0x60($s2)
    ctx->pc = 0x3a7624u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
label_3a7628:
    // 0x3a7628: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3a7628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3a762c:
    // 0x3a762c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_3a7630:
    if (ctx->pc == 0x3A7630u) {
        ctx->pc = 0x3A7630u;
            // 0x3a7630: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3A7634u;
        goto label_3a7634;
    }
    ctx->pc = 0x3A762Cu;
    {
        const bool branch_taken_0x3a762c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a762c) {
            ctx->pc = 0x3A7630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A762Cu;
            // 0x3a7630: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A763Cu;
            goto label_3a763c;
        }
    }
    ctx->pc = 0x3A7634u;
label_3a7634:
    // 0x3a7634: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3a7634u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a7638:
    // 0x3a7638: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3a7638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3a763c:
    // 0x3a763c: 0x86090000  lh          $t1, 0x0($s0)
    ctx->pc = 0x3a763cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3a7640:
    // 0x3a7640: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3a7640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3a7644:
    // 0x3a7644: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3a7644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3a7648:
    // 0x3a7648: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x3a7648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_3a764c:
    // 0x3a764c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3a764cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_3a7650:
    // 0x3a7650: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x3a7650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a7654:
    // 0x3a7654: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3a7654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3a7658:
    // 0x3a7658: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x3a7658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_3a765c:
    // 0x3a765c: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x3a765cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3a7660:
    // 0x3a7660: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3a7660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3a7664:
    // 0x3a7664: 0x87a301ce  lh          $v1, 0x1CE($sp)
    ctx->pc = 0x3a7664u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 462)));
label_3a7668:
    // 0x3a7668: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x3a7668u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3a766c:
    // 0x3a766c: 0x87a201cc  lh          $v0, 0x1CC($sp)
    ctx->pc = 0x3a766cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 460)));
label_3a7670:
    // 0x3a7670: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a7670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a7674:
    // 0x3a7674: 0x460220c2  mul.s       $f3, $f4, $f2
    ctx->pc = 0x3a7674u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3a7678:
    // 0x3a7678: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3a7678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a767c:
    // 0x3a767c: 0x0  nop
    ctx->pc = 0x3a767cu;
    // NOP
label_3a7680:
    // 0x3a7680: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3a7680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3a7684:
    // 0x3a7684: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x3a7684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_3a7688:
    // 0x3a7688: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x3a7688u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_3a768c:
    // 0x3a768c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a768cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3a7690:
    // 0x3a7690: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7694:
    // 0x3a7694: 0x0  nop
    ctx->pc = 0x3a7694u;
    // NOP
label_3a7698:
    // 0x3a7698: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3a7698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3a769c:
    // 0x3a769c: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3a769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3a76a0:
    // 0x3a76a0: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x3a76a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3a76a4:
    // 0x3a76a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a76a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a76a8:
    // 0x3a76a8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3a76a8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a76ac:
    // 0x3a76ac: 0x0  nop
    ctx->pc = 0x3a76acu;
    // NOP
label_3a76b0:
    // 0x3a76b0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a76b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3a76b4:
    // 0x3a76b4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a76b4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a76b8:
    // 0x3a76b8: 0x0  nop
    ctx->pc = 0x3a76b8u;
    // NOP
label_3a76bc:
    // 0x3a76bc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a76bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3a76c0:
    // 0x3a76c0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3a76c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a76c4:
    // 0x3a76c4: 0x46031301  sub.s       $f12, $f2, $f3
    ctx->pc = 0x3a76c4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_3a76c8:
    // 0x3a76c8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3a76c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_3a76cc:
    // 0x3a76cc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x3a76ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3a76d0:
    // 0x3a76d0: 0x46031380  add.s       $f14, $f2, $f3
    ctx->pc = 0x3a76d0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3a76d4:
    // 0x3a76d4: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x3a76d4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3a76d8:
    // 0x3a76d8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a76d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3a76dc:
    // 0x3a76dc: 0xc0bc284  jal         func_2F0A10
label_3a76e0:
    if (ctx->pc == 0x3A76E0u) {
        ctx->pc = 0x3A76E0u;
            // 0x3a76e0: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3A76E4u;
        goto label_3a76e4;
    }
    ctx->pc = 0x3A76DCu;
    SET_GPR_U32(ctx, 31, 0x3A76E4u);
    ctx->pc = 0x3A76E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A76DCu;
            // 0x3a76e0: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A76E4u; }
        if (ctx->pc != 0x3A76E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A76E4u; }
        if (ctx->pc != 0x3A76E4u) { return; }
    }
    ctx->pc = 0x3A76E4u;
label_3a76e4:
    // 0x3a76e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a76e8:
    // 0x3a76e8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3a76e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3a76ec:
    // 0x3a76ec: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x3a76ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3a76f0:
    // 0x3a76f0: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3a76f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3a76f4:
    // 0x3a76f4: 0x24840e80  addiu       $a0, $a0, 0xE80
    ctx->pc = 0x3a76f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3712));
label_3a76f8:
    // 0x3a76f8: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x3a76f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_3a76fc:
    // 0x3a76fc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3a76fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3a7700:
    // 0x3a7700: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a7700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3a7704:
    // 0x3a7704: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3a7704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3a7708:
    // 0x3a7708: 0x8ca2077c  lw          $v0, 0x77C($a1)
    ctx->pc = 0x3a7708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1916)));
label_3a770c:
    // 0x3a770c: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x3a770cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a7710:
    // 0x3a7710: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x3a7710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_3a7714:
    // 0x3a7714: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x3a7714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3a7718:
    // 0x3a7718: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3a7718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_3a771c:
    // 0x3a771c: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x3a771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_3a7720:
    // 0x3a7720: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3a7720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_3a7724:
    // 0x3a7724: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3a7724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3a7728:
    // 0x3a7728: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x3a7728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_3a772c:
    // 0x3a772c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x3a772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3a7730:
    // 0x3a7730: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x3a7730u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3a7734:
    // 0x3a7734: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a7734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a7738:
    // 0x3a7738: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3a7738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3a773c:
    // 0x3a773c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3a7740:
    // 0x3a7740: 0x90420758  lbu         $v0, 0x758($v0)
    ctx->pc = 0x3a7740u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1880)));
label_3a7744:
    // 0x3a7744: 0x3052001f  andi        $s2, $v0, 0x1F
    ctx->pc = 0x3a7744u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_3a7748:
    // 0x3a7748: 0x16430003  bne         $s2, $v1, . + 4 + (0x3 << 2)
label_3a774c:
    if (ctx->pc == 0x3A774Cu) {
        ctx->pc = 0x3A7750u;
        goto label_3a7750;
    }
    ctx->pc = 0x3A7748u;
    {
        const bool branch_taken_0x3a7748 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a7748) {
            ctx->pc = 0x3A7758u;
            goto label_3a7758;
        }
    }
    ctx->pc = 0x3A7750u;
label_3a7750:
    // 0x3a7750: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a7750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a7754:
    // 0x3a7754: 0x0  nop
    ctx->pc = 0x3a7754u;
    // NOP
label_3a7758:
    // 0x3a7758: 0x8e620d70  lw          $v0, 0xD70($s3)
    ctx->pc = 0x3a7758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3440)));
label_3a775c:
    // 0x3a775c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x3a775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_3a7760:
    // 0x3a7760: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3a7760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3a7764:
    // 0x3a7764: 0x144000de  bnez        $v0, . + 4 + (0xDE << 2)
label_3a7768:
    if (ctx->pc == 0x3A7768u) {
        ctx->pc = 0x3A7768u;
            // 0x3a7768: 0x33d600ff  andi        $s6, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3A776Cu;
        goto label_3a776c;
    }
    ctx->pc = 0x3A7764u;
    {
        const bool branch_taken_0x3a7764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7764u;
            // 0x3a7768: 0x33d600ff  andi        $s6, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7764) {
            ctx->pc = 0x3A7AE0u;
            goto label_3a7ae0;
        }
    }
    ctx->pc = 0x3A776Cu;
label_3a776c:
    // 0x3a776c: 0x926211a1  lbu         $v0, 0x11A1($s3)
    ctx->pc = 0x3a776cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4513)));
label_3a7770:
    // 0x3a7770: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
label_3a7774:
    if (ctx->pc == 0x3A7774u) {
        ctx->pc = 0x3A7778u;
        goto label_3a7778;
    }
    ctx->pc = 0x3A7770u;
    {
        const bool branch_taken_0x3a7770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7770) {
            ctx->pc = 0x3A7AE0u;
            goto label_3a7ae0;
        }
    }
    ctx->pc = 0x3A7778u;
label_3a7778:
    // 0x3a7778: 0xc0e9eec  jal         func_3A7BB0
label_3a777c:
    if (ctx->pc == 0x3A777Cu) {
        ctx->pc = 0x3A7780u;
        goto label_3a7780;
    }
    ctx->pc = 0x3A7778u;
    SET_GPR_U32(ctx, 31, 0x3A7780u);
    ctx->pc = 0x3A7BB0u;
    if (runtime->hasFunction(0x3A7BB0u)) {
        auto targetFn = runtime->lookupFunction(0x3A7BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7780u; }
        if (ctx->pc != 0x3A7780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A7BB0_0x3a7bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7780u; }
        if (ctx->pc != 0x3A7780u) { return; }
    }
    ctx->pc = 0x3A7780u;
label_3a7780:
    // 0x3a7780: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3a7780u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a7784:
    // 0x3a7784: 0x16e00004  bnez        $s7, . + 4 + (0x4 << 2)
label_3a7788:
    if (ctx->pc == 0x3A7788u) {
        ctx->pc = 0x3A778Cu;
        goto label_3a778c;
    }
    ctx->pc = 0x3A7784u;
    {
        const bool branch_taken_0x3a7784 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7784) {
            ctx->pc = 0x3A7798u;
            goto label_3a7798;
        }
    }
    ctx->pc = 0x3A778Cu;
label_3a778c:
    // 0x3a778c: 0x10000052  b           . + 4 + (0x52 << 2)
label_3a7790:
    if (ctx->pc == 0x3A7790u) {
        ctx->pc = 0x3A7790u;
            // 0x3a7790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A7794u;
        goto label_3a7794;
    }
    ctx->pc = 0x3A778Cu;
    {
        const bool branch_taken_0x3a778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A778Cu;
            // 0x3a7790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a778c) {
            ctx->pc = 0x3A78D8u;
            goto label_3a78d8;
        }
    }
    ctx->pc = 0x3A7794u;
label_3a7794:
    // 0x3a7794: 0x0  nop
    ctx->pc = 0x3a7794u;
    // NOP
label_3a7798:
    // 0x3a7798: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3a7798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3a779c:
    // 0x3a779c: 0xc0e9ee4  jal         func_3A7B90
label_3a77a0:
    if (ctx->pc == 0x3A77A0u) {
        ctx->pc = 0x3A77A0u;
            // 0x3a77a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A77A4u;
        goto label_3a77a4;
    }
    ctx->pc = 0x3A779Cu;
    SET_GPR_U32(ctx, 31, 0x3A77A4u);
    ctx->pc = 0x3A77A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A779Cu;
            // 0x3a77a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A7B90u;
    if (runtime->hasFunction(0x3A7B90u)) {
        auto targetFn = runtime->lookupFunction(0x3A7B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A77A4u; }
        if (ctx->pc != 0x3A77A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A7B90_0x3a7b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A77A4u; }
        if (ctx->pc != 0x3A77A4u) { return; }
    }
    ctx->pc = 0x3A77A4u;
label_3a77a4:
    // 0x3a77a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a77a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a77a8:
    // 0x3a77a8: 0xc0e9edc  jal         func_3A7B70
label_3a77ac:
    if (ctx->pc == 0x3A77ACu) {
        ctx->pc = 0x3A77ACu;
            // 0x3a77ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A77B0u;
        goto label_3a77b0;
    }
    ctx->pc = 0x3A77A8u;
    SET_GPR_U32(ctx, 31, 0x3A77B0u);
    ctx->pc = 0x3A77ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A77A8u;
            // 0x3a77ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A7B70u;
    if (runtime->hasFunction(0x3A7B70u)) {
        auto targetFn = runtime->lookupFunction(0x3A7B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A77B0u; }
        if (ctx->pc != 0x3A77B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A7B70_0x3a7b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A77B0u; }
        if (ctx->pc != 0x3A77B0u) { return; }
    }
    ctx->pc = 0x3A77B0u;
label_3a77b0:
    // 0x3a77b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3a77b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3a77b4:
    // 0x3a77b4: 0xc0e9ee4  jal         func_3A7B90
label_3a77b8:
    if (ctx->pc == 0x3A77B8u) {
        ctx->pc = 0x3A77B8u;
            // 0x3a77b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A77BCu;
        goto label_3a77bc;
    }
    ctx->pc = 0x3A77B4u;
    SET_GPR_U32(ctx, 31, 0x3A77BCu);
    ctx->pc = 0x3A77B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A77B4u;
            // 0x3a77b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A7B90u;
    if (runtime->hasFunction(0x3A7B90u)) {
        auto targetFn = runtime->lookupFunction(0x3A7B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A77BCu; }
        if (ctx->pc != 0x3A77BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A7B90_0x3a7b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A77BCu; }
        if (ctx->pc != 0x3A77BCu) { return; }
    }
    ctx->pc = 0x3A77BCu;
label_3a77bc:
    // 0x3a77bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a77bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a77c0:
    // 0x3a77c0: 0xc0fd8b8  jal         func_3F62E0
label_3a77c4:
    if (ctx->pc == 0x3A77C4u) {
        ctx->pc = 0x3A77C4u;
            // 0x3a77c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A77C8u;
        goto label_3a77c8;
    }
    ctx->pc = 0x3A77C0u;
    SET_GPR_U32(ctx, 31, 0x3A77C8u);
    ctx->pc = 0x3A77C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A77C0u;
            // 0x3a77c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F62E0u;
    if (runtime->hasFunction(0x3F62E0u)) {
        auto targetFn = runtime->lookupFunction(0x3F62E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A77C8u; }
        if (ctx->pc != 0x3A77C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F62E0_0x3f62e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A77C8u; }
        if (ctx->pc != 0x3A77C8u) { return; }
    }
    ctx->pc = 0x3A77C8u;
label_3a77c8:
    // 0x3a77c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a77c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a77cc:
    // 0x3a77cc: 0x0  nop
    ctx->pc = 0x3a77ccu;
    // NOP
label_3a77d0:
    // 0x3a77d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3a77d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a77d4:
    // 0x3a77d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_3a77d8:
    if (ctx->pc == 0x3A77D8u) {
        ctx->pc = 0x3A77DCu;
        goto label_3a77dc;
    }
    ctx->pc = 0x3A77D4u;
    {
        const bool branch_taken_0x3a77d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a77d4) {
            ctx->pc = 0x3A77E8u;
            goto label_3a77e8;
        }
    }
    ctx->pc = 0x3A77DCu;
label_3a77dc:
    // 0x3a77dc: 0x1000003e  b           . + 4 + (0x3E << 2)
label_3a77e0:
    if (ctx->pc == 0x3A77E0u) {
        ctx->pc = 0x3A77E0u;
            // 0x3a77e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A77E4u;
        goto label_3a77e4;
    }
    ctx->pc = 0x3A77DCu;
    {
        const bool branch_taken_0x3a77dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A77E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A77DCu;
            // 0x3a77e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a77dc) {
            ctx->pc = 0x3A78D8u;
            goto label_3a78d8;
        }
    }
    ctx->pc = 0x3A77E4u;
label_3a77e4:
    // 0x3a77e4: 0x0  nop
    ctx->pc = 0x3a77e4u;
    // NOP
label_3a77e8:
    // 0x3a77e8: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x3a77e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_3a77ec:
    // 0x3a77ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a77ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a77f0:
    // 0x3a77f0: 0x24c6f3a8  addiu       $a2, $a2, -0xC58
    ctx->pc = 0x3a77f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964136));
label_3a77f4:
    // 0x3a77f4: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3a77f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3a77f8:
    // 0x3a77f8: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3a77f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3a77fc:
    // 0x3a77fc: 0x24a5f3a0  addiu       $a1, $a1, -0xC60
    ctx->pc = 0x3a77fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964128));
label_3a7800:
    // 0x3a7800: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x3a7800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3a7804:
    // 0x3a7804: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3a7804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a7808:
    // 0x3a7808: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x3a7808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3a780c:
    // 0x3a780c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3a780cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a7810:
    // 0x3a7810: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3a7810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3a7814:
    // 0x3a7814: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3a7818:
    if (ctx->pc == 0x3A7818u) {
        ctx->pc = 0x3A7818u;
            // 0x3a7818: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x3A781Cu;
        goto label_3a781c;
    }
    ctx->pc = 0x3A7814u;
    {
        const bool branch_taken_0x3a7814 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A7818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7814u;
            // 0x3a7818: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7814) {
            ctx->pc = 0x3A7820u;
            goto label_3a7820;
        }
    }
    ctx->pc = 0x3A781Cu;
label_3a781c:
    // 0x3a781c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a781cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a7820:
    // 0x3a7820: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a7820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3a7824:
    // 0x3a7824: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_3a7828:
    if (ctx->pc == 0x3A7828u) {
        ctx->pc = 0x3A782Cu;
        goto label_3a782c;
    }
    ctx->pc = 0x3A7824u;
    {
        const bool branch_taken_0x3a7824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7824) {
            ctx->pc = 0x3A78C0u;
            goto label_3a78c0;
        }
    }
    ctx->pc = 0x3A782Cu;
label_3a782c:
    // 0x3a782c: 0x84c50006  lh          $a1, 0x6($a2)
    ctx->pc = 0x3a782cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3a7830:
    // 0x3a7830: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3a7830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a7834:
    // 0x3a7834: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x3a7834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_3a7838:
    // 0x3a7838: 0x86a20004  lh          $v0, 0x4($s5)
    ctx->pc = 0x3a7838u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_3a783c:
    // 0x3a783c: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x3a783cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3a7840:
    // 0x3a7840: 0x84860006  lh          $a2, 0x6($a0)
    ctx->pc = 0x3a7840u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3a7844:
    // 0x3a7844: 0x84840004  lh          $a0, 0x4($a0)
    ctx->pc = 0x3a7844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_3a7848:
    // 0x3a7848: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3a7848u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3a784c:
    // 0x3a784c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3a784cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3a7850:
    // 0x3a7850: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a7850u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3a7854:
    // 0x3a7854: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a7854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3a7858:
    // 0x3a7858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a785c:
    // 0x3a785c: 0x0  nop
    ctx->pc = 0x3a785cu;
    // NOP
label_3a7860:
    // 0x3a7860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a7860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a7864:
    // 0x3a7864: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3a7864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3a7868:
    // 0x3a7868: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x3a7868u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
label_3a786c:
    // 0x3a786c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a786cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7870:
    // 0x3a7870: 0x0  nop
    ctx->pc = 0x3a7870u;
    // NOP
label_3a7874:
    // 0x3a7874: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a7874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a7878:
    // 0x3a7878: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a7878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3a787c:
    // 0x3a787c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a787cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a7880:
    // 0x3a7880: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3a7880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a7884:
    // 0x3a7884: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3a7884u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7888:
    // 0x3a7888: 0xa7a201cc  sh          $v0, 0x1CC($sp)
    ctx->pc = 0x3a7888u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 460), (uint16_t)GPR_U32(ctx, 2));
label_3a788c:
    // 0x3a788c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a788cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a7890:
    // 0x3a7890: 0x86a20006  lh          $v0, 0x6($s5)
    ctx->pc = 0x3a7890u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
label_3a7894:
    // 0x3a7894: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3a7894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3a7898:
    // 0x3a7898: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3a7898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3a789c:
    // 0x3a789c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3a789cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_3a78a0:
    // 0x3a78a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3a78a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a78a4:
    // 0x3a78a4: 0x0  nop
    ctx->pc = 0x3a78a4u;
    // NOP
label_3a78a8:
    // 0x3a78a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a78a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3a78ac:
    // 0x3a78ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3a78acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3a78b0:
    // 0x3a78b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a78b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a78b4:
    // 0x3a78b4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3a78b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a78b8:
    // 0x3a78b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a78bc:
    if (ctx->pc == 0x3A78BCu) {
        ctx->pc = 0x3A78BCu;
            // 0x3a78bc: 0xa7a201ce  sh          $v0, 0x1CE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 462), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3A78C0u;
        goto label_3a78c0;
    }
    ctx->pc = 0x3A78B8u;
    {
        const bool branch_taken_0x3a78b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A78BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A78B8u;
            // 0x3a78bc: 0xa7a201ce  sh          $v0, 0x1CE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 462), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a78b8) {
            ctx->pc = 0x3A78D0u;
            goto label_3a78d0;
        }
    }
    ctx->pc = 0x3A78C0u;
label_3a78c0:
    // 0x3a78c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3a78c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3a78c4:
    // 0x3a78c4: 0x28e2000a  slti        $v0, $a3, 0xA
    ctx->pc = 0x3a78c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
label_3a78c8:
    // 0x3a78c8: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_3a78cc:
    if (ctx->pc == 0x3A78CCu) {
        ctx->pc = 0x3A78CCu;
            // 0x3a78cc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x3A78D0u;
        goto label_3a78d0;
    }
    ctx->pc = 0x3A78C8u;
    {
        const bool branch_taken_0x3a78c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A78CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A78C8u;
            // 0x3a78cc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a78c8) {
            ctx->pc = 0x3A7800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a7800;
        }
    }
    ctx->pc = 0x3A78D0u;
label_3a78d0:
    // 0x3a78d0: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3a78d0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3a78d4:
    // 0x3a78d4: 0x0  nop
    ctx->pc = 0x3a78d4u;
    // NOP
label_3a78d8:
    // 0x3a78d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3a78dc:
    if (ctx->pc == 0x3A78DCu) {
        ctx->pc = 0x3A78E0u;
        goto label_3a78e0;
    }
    ctx->pc = 0x3A78D8u;
    {
        const bool branch_taken_0x3a78d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a78d8) {
            ctx->pc = 0x3A7900u;
            goto label_3a7900;
        }
    }
    ctx->pc = 0x3A78E0u;
label_3a78e0:
    // 0x3a78e0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3a78e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3a78e4:
    // 0x3a78e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a78e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a78e8:
    // 0x3a78e8: 0x27a501cc  addiu       $a1, $sp, 0x1CC
    ctx->pc = 0x3a78e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
label_3a78ec:
    // 0x3a78ec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3a78ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a78f0:
    // 0x3a78f0: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x3a78f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3a78f4:
    // 0x3a78f4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3a78f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3a78f8:
    // 0x3a78f8: 0x320f809  jalr        $t9
label_3a78fc:
    if (ctx->pc == 0x3A78FCu) {
        ctx->pc = 0x3A78FCu;
            // 0x3a78fc: 0x266802c0  addiu       $t0, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->pc = 0x3A7900u;
        goto label_3a7900;
    }
    ctx->pc = 0x3A78F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A7900u);
        ctx->pc = 0x3A78FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A78F8u;
            // 0x3a78fc: 0x266802c0  addiu       $t0, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A7900u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A7900u; }
            if (ctx->pc != 0x3A7900u) { return; }
        }
        }
    }
    ctx->pc = 0x3A7900u;
label_3a7900:
    // 0x3a7900: 0x8e620d74  lw          $v0, 0xD74($s3)
    ctx->pc = 0x3a7900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
label_3a7904:
    // 0x3a7904: 0x904202c4  lbu         $v0, 0x2C4($v0)
    ctx->pc = 0x3a7904u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 708)));
label_3a7908:
    // 0x3a7908: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_3a790c:
    if (ctx->pc == 0x3A790Cu) {
        ctx->pc = 0x3A7910u;
        goto label_3a7910;
    }
    ctx->pc = 0x3A7908u;
    {
        const bool branch_taken_0x3a7908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7908) {
            ctx->pc = 0x3A79A0u;
            goto label_3a79a0;
        }
    }
    ctx->pc = 0x3A7910u;
label_3a7910:
    // 0x3a7910: 0xc6220138  lwc1        $f2, 0x138($s1)
    ctx->pc = 0x3a7910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a7914:
    // 0x3a7914: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a7914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3a7918:
    // 0x3a7918: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3a7918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3a791c:
    // 0x3a791c: 0x87a301ce  lh          $v1, 0x1CE($sp)
    ctx->pc = 0x3a791cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 462)));
label_3a7920:
    // 0x3a7920: 0x87a201cc  lh          $v0, 0x1CC($sp)
    ctx->pc = 0x3a7920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 460)));
label_3a7924:
    // 0x3a7924: 0xc6a50014  lwc1        $f5, 0x14($s5)
    ctx->pc = 0x3a7924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a7928:
    // 0x3a7928: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3a7928u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3a792c:
    // 0x3a792c: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3a792cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3a7930:
    // 0x3a7930: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x3a7930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3a7934:
    // 0x3a7934: 0x26250130  addiu       $a1, $s1, 0x130
    ctx->pc = 0x3a7934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
label_3a7938:
    // 0x3a7938: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a7938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a793c:
    // 0x3a793c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a793cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a7940:
    // 0x3a7940: 0x460510c2  mul.s       $f3, $f2, $f5
    ctx->pc = 0x3a7940u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_3a7944:
    // 0x3a7944: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3a7944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a7948:
    // 0x3a7948: 0x0  nop
    ctx->pc = 0x3a7948u;
    // NOP
label_3a794c:
    // 0x3a794c: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3a794cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3a7950:
    // 0x3a7950: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a7950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3a7954:
    // 0x3a7954: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7958:
    // 0x3a7958: 0x0  nop
    ctx->pc = 0x3a7958u;
    // NOP
label_3a795c:
    // 0x3a795c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3a795cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3a7960:
    // 0x3a7960: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3a7960u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3a7964:
    // 0x3a7964: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a7964u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7968:
    // 0x3a7968: 0x0  nop
    ctx->pc = 0x3a7968u;
    // NOP
label_3a796c:
    // 0x3a796c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a796cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3a7970:
    // 0x3a7970: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7974:
    // 0x3a7974: 0x0  nop
    ctx->pc = 0x3a7974u;
    // NOP
label_3a7978:
    // 0x3a7978: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a7978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3a797c:
    // 0x3a797c: 0xc620013c  lwc1        $f0, 0x13C($s1)
    ctx->pc = 0x3a797cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a7980:
    // 0x3a7980: 0x46031301  sub.s       $f12, $f2, $f3
    ctx->pc = 0x3a7980u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_3a7984:
    // 0x3a7984: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x3a7984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3a7988:
    // 0x3a7988: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x3a7988u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_3a798c:
    // 0x3a798c: 0x46031380  add.s       $f14, $f2, $f3
    ctx->pc = 0x3a798cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3a7990:
    // 0x3a7990: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x3a7990u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3a7994:
    // 0x3a7994: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a7994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3a7998:
    // 0x3a7998: 0xc0bc284  jal         func_2F0A10
label_3a799c:
    if (ctx->pc == 0x3A799Cu) {
        ctx->pc = 0x3A799Cu;
            // 0x3a799c: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3A79A0u;
        goto label_3a79a0;
    }
    ctx->pc = 0x3A7998u;
    SET_GPR_U32(ctx, 31, 0x3A79A0u);
    ctx->pc = 0x3A799Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7998u;
            // 0x3a799c: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A79A0u; }
        if (ctx->pc != 0x3A79A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A79A0u; }
        if (ctx->pc != 0x3A79A0u) { return; }
    }
    ctx->pc = 0x3A79A0u;
label_3a79a0:
    // 0x3a79a0: 0x8e620e38  lw          $v0, 0xE38($s3)
    ctx->pc = 0x3a79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
label_3a79a4:
    // 0x3a79a4: 0x64170001  daddiu      $s7, $zero, 0x1
    ctx->pc = 0x3a79a4u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3a79a8:
    // 0x3a79a8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3a79ac:
    if (ctx->pc == 0x3A79ACu) {
        ctx->pc = 0x3A79ACu;
            // 0x3a79ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A79B0u;
        goto label_3a79b0;
    }
    ctx->pc = 0x3A79A8u;
    {
        const bool branch_taken_0x3a79a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3A79ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A79A8u;
            // 0x3a79ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a79a8) {
            ctx->pc = 0x3A79C0u;
            goto label_3a79c0;
        }
    }
    ctx->pc = 0x3A79B0u;
label_3a79b0:
    // 0x3a79b0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3a79b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3a79b4:
    // 0x3a79b4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3a79b8:
    if (ctx->pc == 0x3A79B8u) {
        ctx->pc = 0x3A79BCu;
        goto label_3a79bc;
    }
    ctx->pc = 0x3A79B4u;
    {
        const bool branch_taken_0x3a79b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a79b4) {
            ctx->pc = 0x3A79C0u;
            goto label_3a79c0;
        }
    }
    ctx->pc = 0x3A79BCu;
label_3a79bc:
    // 0x3a79bc: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x3a79bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3a79c0:
    // 0x3a79c0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3a79c4:
    if (ctx->pc == 0x3A79C4u) {
        ctx->pc = 0x3A79C8u;
        goto label_3a79c8;
    }
    ctx->pc = 0x3A79C0u;
    {
        const bool branch_taken_0x3a79c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a79c0) {
            ctx->pc = 0x3A79E0u;
            goto label_3a79e0;
        }
    }
    ctx->pc = 0x3A79C8u;
label_3a79c8:
    // 0x3a79c8: 0xc075eb4  jal         func_1D7AD0
label_3a79cc:
    if (ctx->pc == 0x3A79CCu) {
        ctx->pc = 0x3A79CCu;
            // 0x3a79cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A79D0u;
        goto label_3a79d0;
    }
    ctx->pc = 0x3A79C8u;
    SET_GPR_U32(ctx, 31, 0x3A79D0u);
    ctx->pc = 0x3A79CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A79C8u;
            // 0x3a79cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A79D0u; }
        if (ctx->pc != 0x3A79D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A79D0u; }
        if (ctx->pc != 0x3A79D0u) { return; }
    }
    ctx->pc = 0x3A79D0u;
label_3a79d0:
    // 0x3a79d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3a79d4:
    if (ctx->pc == 0x3A79D4u) {
        ctx->pc = 0x3A79D8u;
        goto label_3a79d8;
    }
    ctx->pc = 0x3A79D0u;
    {
        const bool branch_taken_0x3a79d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a79d0) {
            ctx->pc = 0x3A79E0u;
            goto label_3a79e0;
        }
    }
    ctx->pc = 0x3A79D8u;
label_3a79d8:
    // 0x3a79d8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3a79d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a79dc:
    // 0x3a79dc: 0x0  nop
    ctx->pc = 0x3a79dcu;
    // NOP
label_3a79e0:
    // 0x3a79e0: 0x12e0000f  beqz        $s7, . + 4 + (0xF << 2)
label_3a79e4:
    if (ctx->pc == 0x3A79E4u) {
        ctx->pc = 0x3A79E8u;
        goto label_3a79e8;
    }
    ctx->pc = 0x3A79E0u;
    {
        const bool branch_taken_0x3a79e0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a79e0) {
            ctx->pc = 0x3A7A20u;
            goto label_3a7a20;
        }
    }
    ctx->pc = 0x3A79E8u;
label_3a79e8:
    // 0x3a79e8: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x3a79e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_3a79ec:
    // 0x3a79ec: 0x92a3000d  lbu         $v1, 0xD($s5)
    ctx->pc = 0x3a79ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 13)));
label_3a79f0:
    // 0x3a79f0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3a79f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3a79f4:
    // 0x3a79f4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3a79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3a79f8:
    // 0x3a79f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3a79f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a79fc:
    // 0x3a79fc: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x3a79fcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3a7a00:
    // 0x3a7a00: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3a7a00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a7a04:
    // 0x3a7a04: 0x56082a  slt         $at, $v0, $s6
    ctx->pc = 0x3a7a04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3a7a08:
    // 0x3a7a08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3a7a0c:
    if (ctx->pc == 0x3A7A0Cu) {
        ctx->pc = 0x3A7A0Cu;
            // 0x3a7a0c: 0x2249021  addu        $s2, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->pc = 0x3A7A10u;
        goto label_3a7a10;
    }
    ctx->pc = 0x3A7A08u;
    {
        const bool branch_taken_0x3a7a08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7A08u;
            // 0x3a7a0c: 0x2249021  addu        $s2, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a08) {
            ctx->pc = 0x3A7A18u;
            goto label_3a7a18;
        }
    }
    ctx->pc = 0x3A7A10u;
label_3a7a10:
    // 0x3a7a10: 0x33d600ff  andi        $s6, $fp, 0xFF
    ctx->pc = 0x3a7a10u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_3a7a14:
    // 0x3a7a14: 0x0  nop
    ctx->pc = 0x3a7a14u;
    // NOP
label_3a7a18:
    // 0x3a7a18: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a7a1c:
    if (ctx->pc == 0x3A7A1Cu) {
        ctx->pc = 0x3A7A1Cu;
            // 0x3a7a1c: 0xc6b40018  lwc1        $f20, 0x18($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x3A7A20u;
        goto label_3a7a20;
    }
    ctx->pc = 0x3A7A18u;
    {
        const bool branch_taken_0x3a7a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7A18u;
            // 0x3a7a1c: 0xc6b40018  lwc1        $f20, 0x18($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a18) {
            ctx->pc = 0x3A7A38u;
            goto label_3a7a38;
        }
    }
    ctx->pc = 0x3A7A20u;
label_3a7a20:
    // 0x3a7a20: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x3a7a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_3a7a24:
    // 0x3a7a24: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3a7a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3a7a28:
    // 0x3a7a28: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3a7a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_3a7a2c:
    // 0x3a7a2c: 0x2239021  addu        $s2, $s1, $v1
    ctx->pc = 0x3a7a2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_3a7a30:
    // 0x3a7a30: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3a7a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3a7a34:
    // 0x3a7a34: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3a7a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3a7a38:
    // 0x3a7a38: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3a7a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3a7a3c:
    // 0x3a7a3c: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x3a7a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3a7a40:
    // 0x3a7a40: 0xc04f2d4  jal         func_13CB50
label_3a7a44:
    if (ctx->pc == 0x3A7A44u) {
        ctx->pc = 0x3A7A44u;
            // 0x3a7a44: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3A7A48u;
        goto label_3a7a48;
    }
    ctx->pc = 0x3A7A40u;
    SET_GPR_U32(ctx, 31, 0x3A7A48u);
    ctx->pc = 0x3A7A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7A40u;
            // 0x3a7a44: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CB50u;
    if (runtime->hasFunction(0x13CB50u)) {
        auto targetFn = runtime->lookupFunction(0x13CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7A48u; }
        if (ctx->pc != 0x3A7A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CB50_0x13cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7A48u; }
        if (ctx->pc != 0x3A7A48u) { return; }
    }
    ctx->pc = 0x3A7A48u;
label_3a7a48:
    // 0x3a7a48: 0x87a401cc  lh          $a0, 0x1CC($sp)
    ctx->pc = 0x3a7a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 460)));
label_3a7a4c:
    // 0x3a7a4c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3a7a50:
    // 0x3a7a50: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a7a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3a7a54:
    // 0x3a7a54: 0x87aa01ce  lh          $t2, 0x1CE($sp)
    ctx->pc = 0x3a7a54u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 462)));
label_3a7a58:
    // 0x3a7a58: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x3a7a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a7a5c:
    // 0x3a7a5c: 0x86090000  lh          $t1, 0x0($s0)
    ctx->pc = 0x3a7a5cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3a7a60:
    // 0x3a7a60: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3a7a60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a7a64:
    // 0x3a7a64: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x3a7a64u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3a7a68:
    // 0x3a7a68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a7a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3a7a6c:
    // 0x3a7a6c: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x3a7a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_3a7a70:
    // 0x3a7a70: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3a7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3a7a74:
    // 0x3a7a74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a7a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a7a78:
    // 0x3a7a78: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3a7a78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3a7a7c:
    // 0x3a7a7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a7a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a7a80:
    // 0x3a7a80: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a7a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3a7a84:
    // 0x3a7a84: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x3a7a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3a7a88:
    // 0x3a7a88: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x3a7a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
label_3a7a8c:
    // 0x3a7a8c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3a7a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3a7a90:
    // 0x3a7a90: 0x46140382  mul.s       $f14, $f0, $f20
    ctx->pc = 0x3a7a90u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3a7a94:
    // 0x3a7a94: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x3a7a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3a7a98:
    // 0x3a7a98: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x3a7a98u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a7a9c:
    // 0x3a7a9c: 0x0  nop
    ctx->pc = 0x3a7a9cu;
    // NOP
label_3a7aa0:
    // 0x3a7aa0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3a7aa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3a7aa4:
    // 0x3a7aa4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3a7aa4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7aa8:
    // 0x3a7aa8: 0x0  nop
    ctx->pc = 0x3a7aa8u;
    // NOP
label_3a7aac:
    // 0x3a7aac: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x3a7aacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_3a7ab0:
    // 0x3a7ab0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a7ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3a7ab4:
    // 0x3a7ab4: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x3a7ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a7ab8:
    // 0x3a7ab8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a7ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3a7abc:
    // 0x3a7abc: 0x46007307  neg.s       $f12, $f14
    ctx->pc = 0x3a7abcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[14]);
label_3a7ac0:
    // 0x3a7ac0: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x3a7ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3a7ac4:
    // 0x3a7ac4: 0x461403c2  mul.s       $f15, $f0, $f20
    ctx->pc = 0x3a7ac4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3a7ac8:
    // 0x3a7ac8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a7ac8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7acc:
    // 0x3a7acc: 0x0  nop
    ctx->pc = 0x3a7accu;
    // NOP
label_3a7ad0:
    // 0x3a7ad0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a7ad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3a7ad4:
    // 0x3a7ad4: 0xc0bc284  jal         func_2F0A10
label_3a7ad8:
    if (ctx->pc == 0x3A7AD8u) {
        ctx->pc = 0x3A7AD8u;
            // 0x3a7ad8: 0x46007b47  neg.s       $f13, $f15 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[15]);
        ctx->pc = 0x3A7ADCu;
        goto label_3a7adc;
    }
    ctx->pc = 0x3A7AD4u;
    SET_GPR_U32(ctx, 31, 0x3A7ADCu);
    ctx->pc = 0x3A7AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7AD4u;
            // 0x3a7ad8: 0x46007b47  neg.s       $f13, $f15 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7ADCu; }
        if (ctx->pc != 0x3A7ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7ADCu; }
        if (ctx->pc != 0x3A7ADCu) { return; }
    }
    ctx->pc = 0x3A7ADCu;
label_3a7adc:
    // 0x3a7adc: 0x0  nop
    ctx->pc = 0x3a7adcu;
    // NOP
label_3a7ae0:
    // 0x3a7ae0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3a7ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3a7ae4:
    // 0x3a7ae4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3a7ae4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3a7ae8:
    // 0x3a7ae8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x3a7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_3a7aec:
    // 0x3a7aec: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3a7aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_3a7af0:
    // 0x3a7af0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3a7af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3a7af4:
    // 0x3a7af4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x3a7af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_3a7af8:
    // 0x3a7af8: 0x681ff0a  bgez        $s4, . + 4 + (-0xF6 << 2)
label_3a7afc:
    if (ctx->pc == 0x3A7AFCu) {
        ctx->pc = 0x3A7AFCu;
            // 0x3a7afc: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x3A7B00u;
        goto label_3a7b00;
    }
    ctx->pc = 0x3A7AF8u;
    {
        const bool branch_taken_0x3a7af8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x3A7AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7AF8u;
            // 0x3a7afc: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7af8) {
            ctx->pc = 0x3A7724u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a7724;
        }
    }
    ctx->pc = 0x3A7B00u;
label_3a7b00:
    // 0x3a7b00: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x3a7b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3a7b04:
    // 0x3a7b04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a7b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a7b08:
    // 0x3a7b08: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3a7b08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a7b0c:
    // 0x3a7b0c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a7b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a7b10:
    // 0x3a7b10: 0x320f809  jalr        $t9
label_3a7b14:
    if (ctx->pc == 0x3A7B14u) {
        ctx->pc = 0x3A7B18u;
        goto label_3a7b18;
    }
    ctx->pc = 0x3A7B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A7B18u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A7B18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A7B18u; }
            if (ctx->pc != 0x3A7B18u) { return; }
        }
        }
    }
    ctx->pc = 0x3A7B18u;
label_3a7b18:
    // 0x3a7b18: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3a7b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3a7b1c:
    // 0x3a7b1c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3a7b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3a7b20:
    // 0x3a7b20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a7b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a7b24:
    // 0x3a7b24: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a7b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a7b28:
    // 0x3a7b28: 0x320f809  jalr        $t9
label_3a7b2c:
    if (ctx->pc == 0x3A7B2Cu) {
        ctx->pc = 0x3A7B2Cu;
            // 0x3a7b2c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x3A7B30u;
        goto label_3a7b30;
    }
    ctx->pc = 0x3A7B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A7B30u);
        ctx->pc = 0x3A7B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7B28u;
            // 0x3a7b2c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A7B30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A7B30u; }
            if (ctx->pc != 0x3A7B30u) { return; }
        }
        }
    }
    ctx->pc = 0x3A7B30u;
label_3a7b30:
    // 0x3a7b30: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3a7b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3a7b34:
    // 0x3a7b34: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3a7b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a7b38:
    // 0x3a7b38: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3a7b38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a7b3c:
    // 0x3a7b3c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3a7b3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a7b40:
    // 0x3a7b40: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3a7b40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a7b44:
    // 0x3a7b44: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3a7b44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a7b48:
    // 0x3a7b48: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3a7b48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a7b4c:
    // 0x3a7b4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a7b4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a7b50:
    // 0x3a7b50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a7b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a7b54:
    // 0x3a7b54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a7b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a7b58:
    // 0x3a7b58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a7b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a7b5c:
    // 0x3a7b5c: 0x3e00008  jr          $ra
label_3a7b60:
    if (ctx->pc == 0x3A7B60u) {
        ctx->pc = 0x3A7B60u;
            // 0x3a7b60: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x3A7B64u;
        goto label_3a7b64;
    }
    ctx->pc = 0x3A7B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7B5Cu;
            // 0x3a7b60: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A7B64u;
label_3a7b64:
    // 0x3a7b64: 0x0  nop
    ctx->pc = 0x3a7b64u;
    // NOP
label_3a7b68:
    // 0x3a7b68: 0x0  nop
    ctx->pc = 0x3a7b68u;
    // NOP
label_3a7b6c:
    // 0x3a7b6c: 0x0  nop
    ctx->pc = 0x3a7b6cu;
    // NOP
}
