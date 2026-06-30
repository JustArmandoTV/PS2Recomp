#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A73F0
// Address: 0x4a73f0 - 0x4a8100
void sub_004A73F0_0x4a73f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A73F0_0x4a73f0");
#endif

    switch (ctx->pc) {
        case 0x4a73f0u: goto label_4a73f0;
        case 0x4a73f4u: goto label_4a73f4;
        case 0x4a73f8u: goto label_4a73f8;
        case 0x4a73fcu: goto label_4a73fc;
        case 0x4a7400u: goto label_4a7400;
        case 0x4a7404u: goto label_4a7404;
        case 0x4a7408u: goto label_4a7408;
        case 0x4a740cu: goto label_4a740c;
        case 0x4a7410u: goto label_4a7410;
        case 0x4a7414u: goto label_4a7414;
        case 0x4a7418u: goto label_4a7418;
        case 0x4a741cu: goto label_4a741c;
        case 0x4a7420u: goto label_4a7420;
        case 0x4a7424u: goto label_4a7424;
        case 0x4a7428u: goto label_4a7428;
        case 0x4a742cu: goto label_4a742c;
        case 0x4a7430u: goto label_4a7430;
        case 0x4a7434u: goto label_4a7434;
        case 0x4a7438u: goto label_4a7438;
        case 0x4a743cu: goto label_4a743c;
        case 0x4a7440u: goto label_4a7440;
        case 0x4a7444u: goto label_4a7444;
        case 0x4a7448u: goto label_4a7448;
        case 0x4a744cu: goto label_4a744c;
        case 0x4a7450u: goto label_4a7450;
        case 0x4a7454u: goto label_4a7454;
        case 0x4a7458u: goto label_4a7458;
        case 0x4a745cu: goto label_4a745c;
        case 0x4a7460u: goto label_4a7460;
        case 0x4a7464u: goto label_4a7464;
        case 0x4a7468u: goto label_4a7468;
        case 0x4a746cu: goto label_4a746c;
        case 0x4a7470u: goto label_4a7470;
        case 0x4a7474u: goto label_4a7474;
        case 0x4a7478u: goto label_4a7478;
        case 0x4a747cu: goto label_4a747c;
        case 0x4a7480u: goto label_4a7480;
        case 0x4a7484u: goto label_4a7484;
        case 0x4a7488u: goto label_4a7488;
        case 0x4a748cu: goto label_4a748c;
        case 0x4a7490u: goto label_4a7490;
        case 0x4a7494u: goto label_4a7494;
        case 0x4a7498u: goto label_4a7498;
        case 0x4a749cu: goto label_4a749c;
        case 0x4a74a0u: goto label_4a74a0;
        case 0x4a74a4u: goto label_4a74a4;
        case 0x4a74a8u: goto label_4a74a8;
        case 0x4a74acu: goto label_4a74ac;
        case 0x4a74b0u: goto label_4a74b0;
        case 0x4a74b4u: goto label_4a74b4;
        case 0x4a74b8u: goto label_4a74b8;
        case 0x4a74bcu: goto label_4a74bc;
        case 0x4a74c0u: goto label_4a74c0;
        case 0x4a74c4u: goto label_4a74c4;
        case 0x4a74c8u: goto label_4a74c8;
        case 0x4a74ccu: goto label_4a74cc;
        case 0x4a74d0u: goto label_4a74d0;
        case 0x4a74d4u: goto label_4a74d4;
        case 0x4a74d8u: goto label_4a74d8;
        case 0x4a74dcu: goto label_4a74dc;
        case 0x4a74e0u: goto label_4a74e0;
        case 0x4a74e4u: goto label_4a74e4;
        case 0x4a74e8u: goto label_4a74e8;
        case 0x4a74ecu: goto label_4a74ec;
        case 0x4a74f0u: goto label_4a74f0;
        case 0x4a74f4u: goto label_4a74f4;
        case 0x4a74f8u: goto label_4a74f8;
        case 0x4a74fcu: goto label_4a74fc;
        case 0x4a7500u: goto label_4a7500;
        case 0x4a7504u: goto label_4a7504;
        case 0x4a7508u: goto label_4a7508;
        case 0x4a750cu: goto label_4a750c;
        case 0x4a7510u: goto label_4a7510;
        case 0x4a7514u: goto label_4a7514;
        case 0x4a7518u: goto label_4a7518;
        case 0x4a751cu: goto label_4a751c;
        case 0x4a7520u: goto label_4a7520;
        case 0x4a7524u: goto label_4a7524;
        case 0x4a7528u: goto label_4a7528;
        case 0x4a752cu: goto label_4a752c;
        case 0x4a7530u: goto label_4a7530;
        case 0x4a7534u: goto label_4a7534;
        case 0x4a7538u: goto label_4a7538;
        case 0x4a753cu: goto label_4a753c;
        case 0x4a7540u: goto label_4a7540;
        case 0x4a7544u: goto label_4a7544;
        case 0x4a7548u: goto label_4a7548;
        case 0x4a754cu: goto label_4a754c;
        case 0x4a7550u: goto label_4a7550;
        case 0x4a7554u: goto label_4a7554;
        case 0x4a7558u: goto label_4a7558;
        case 0x4a755cu: goto label_4a755c;
        case 0x4a7560u: goto label_4a7560;
        case 0x4a7564u: goto label_4a7564;
        case 0x4a7568u: goto label_4a7568;
        case 0x4a756cu: goto label_4a756c;
        case 0x4a7570u: goto label_4a7570;
        case 0x4a7574u: goto label_4a7574;
        case 0x4a7578u: goto label_4a7578;
        case 0x4a757cu: goto label_4a757c;
        case 0x4a7580u: goto label_4a7580;
        case 0x4a7584u: goto label_4a7584;
        case 0x4a7588u: goto label_4a7588;
        case 0x4a758cu: goto label_4a758c;
        case 0x4a7590u: goto label_4a7590;
        case 0x4a7594u: goto label_4a7594;
        case 0x4a7598u: goto label_4a7598;
        case 0x4a759cu: goto label_4a759c;
        case 0x4a75a0u: goto label_4a75a0;
        case 0x4a75a4u: goto label_4a75a4;
        case 0x4a75a8u: goto label_4a75a8;
        case 0x4a75acu: goto label_4a75ac;
        case 0x4a75b0u: goto label_4a75b0;
        case 0x4a75b4u: goto label_4a75b4;
        case 0x4a75b8u: goto label_4a75b8;
        case 0x4a75bcu: goto label_4a75bc;
        case 0x4a75c0u: goto label_4a75c0;
        case 0x4a75c4u: goto label_4a75c4;
        case 0x4a75c8u: goto label_4a75c8;
        case 0x4a75ccu: goto label_4a75cc;
        case 0x4a75d0u: goto label_4a75d0;
        case 0x4a75d4u: goto label_4a75d4;
        case 0x4a75d8u: goto label_4a75d8;
        case 0x4a75dcu: goto label_4a75dc;
        case 0x4a75e0u: goto label_4a75e0;
        case 0x4a75e4u: goto label_4a75e4;
        case 0x4a75e8u: goto label_4a75e8;
        case 0x4a75ecu: goto label_4a75ec;
        case 0x4a75f0u: goto label_4a75f0;
        case 0x4a75f4u: goto label_4a75f4;
        case 0x4a75f8u: goto label_4a75f8;
        case 0x4a75fcu: goto label_4a75fc;
        case 0x4a7600u: goto label_4a7600;
        case 0x4a7604u: goto label_4a7604;
        case 0x4a7608u: goto label_4a7608;
        case 0x4a760cu: goto label_4a760c;
        case 0x4a7610u: goto label_4a7610;
        case 0x4a7614u: goto label_4a7614;
        case 0x4a7618u: goto label_4a7618;
        case 0x4a761cu: goto label_4a761c;
        case 0x4a7620u: goto label_4a7620;
        case 0x4a7624u: goto label_4a7624;
        case 0x4a7628u: goto label_4a7628;
        case 0x4a762cu: goto label_4a762c;
        case 0x4a7630u: goto label_4a7630;
        case 0x4a7634u: goto label_4a7634;
        case 0x4a7638u: goto label_4a7638;
        case 0x4a763cu: goto label_4a763c;
        case 0x4a7640u: goto label_4a7640;
        case 0x4a7644u: goto label_4a7644;
        case 0x4a7648u: goto label_4a7648;
        case 0x4a764cu: goto label_4a764c;
        case 0x4a7650u: goto label_4a7650;
        case 0x4a7654u: goto label_4a7654;
        case 0x4a7658u: goto label_4a7658;
        case 0x4a765cu: goto label_4a765c;
        case 0x4a7660u: goto label_4a7660;
        case 0x4a7664u: goto label_4a7664;
        case 0x4a7668u: goto label_4a7668;
        case 0x4a766cu: goto label_4a766c;
        case 0x4a7670u: goto label_4a7670;
        case 0x4a7674u: goto label_4a7674;
        case 0x4a7678u: goto label_4a7678;
        case 0x4a767cu: goto label_4a767c;
        case 0x4a7680u: goto label_4a7680;
        case 0x4a7684u: goto label_4a7684;
        case 0x4a7688u: goto label_4a7688;
        case 0x4a768cu: goto label_4a768c;
        case 0x4a7690u: goto label_4a7690;
        case 0x4a7694u: goto label_4a7694;
        case 0x4a7698u: goto label_4a7698;
        case 0x4a769cu: goto label_4a769c;
        case 0x4a76a0u: goto label_4a76a0;
        case 0x4a76a4u: goto label_4a76a4;
        case 0x4a76a8u: goto label_4a76a8;
        case 0x4a76acu: goto label_4a76ac;
        case 0x4a76b0u: goto label_4a76b0;
        case 0x4a76b4u: goto label_4a76b4;
        case 0x4a76b8u: goto label_4a76b8;
        case 0x4a76bcu: goto label_4a76bc;
        case 0x4a76c0u: goto label_4a76c0;
        case 0x4a76c4u: goto label_4a76c4;
        case 0x4a76c8u: goto label_4a76c8;
        case 0x4a76ccu: goto label_4a76cc;
        case 0x4a76d0u: goto label_4a76d0;
        case 0x4a76d4u: goto label_4a76d4;
        case 0x4a76d8u: goto label_4a76d8;
        case 0x4a76dcu: goto label_4a76dc;
        case 0x4a76e0u: goto label_4a76e0;
        case 0x4a76e4u: goto label_4a76e4;
        case 0x4a76e8u: goto label_4a76e8;
        case 0x4a76ecu: goto label_4a76ec;
        case 0x4a76f0u: goto label_4a76f0;
        case 0x4a76f4u: goto label_4a76f4;
        case 0x4a76f8u: goto label_4a76f8;
        case 0x4a76fcu: goto label_4a76fc;
        case 0x4a7700u: goto label_4a7700;
        case 0x4a7704u: goto label_4a7704;
        case 0x4a7708u: goto label_4a7708;
        case 0x4a770cu: goto label_4a770c;
        case 0x4a7710u: goto label_4a7710;
        case 0x4a7714u: goto label_4a7714;
        case 0x4a7718u: goto label_4a7718;
        case 0x4a771cu: goto label_4a771c;
        case 0x4a7720u: goto label_4a7720;
        case 0x4a7724u: goto label_4a7724;
        case 0x4a7728u: goto label_4a7728;
        case 0x4a772cu: goto label_4a772c;
        case 0x4a7730u: goto label_4a7730;
        case 0x4a7734u: goto label_4a7734;
        case 0x4a7738u: goto label_4a7738;
        case 0x4a773cu: goto label_4a773c;
        case 0x4a7740u: goto label_4a7740;
        case 0x4a7744u: goto label_4a7744;
        case 0x4a7748u: goto label_4a7748;
        case 0x4a774cu: goto label_4a774c;
        case 0x4a7750u: goto label_4a7750;
        case 0x4a7754u: goto label_4a7754;
        case 0x4a7758u: goto label_4a7758;
        case 0x4a775cu: goto label_4a775c;
        case 0x4a7760u: goto label_4a7760;
        case 0x4a7764u: goto label_4a7764;
        case 0x4a7768u: goto label_4a7768;
        case 0x4a776cu: goto label_4a776c;
        case 0x4a7770u: goto label_4a7770;
        case 0x4a7774u: goto label_4a7774;
        case 0x4a7778u: goto label_4a7778;
        case 0x4a777cu: goto label_4a777c;
        case 0x4a7780u: goto label_4a7780;
        case 0x4a7784u: goto label_4a7784;
        case 0x4a7788u: goto label_4a7788;
        case 0x4a778cu: goto label_4a778c;
        case 0x4a7790u: goto label_4a7790;
        case 0x4a7794u: goto label_4a7794;
        case 0x4a7798u: goto label_4a7798;
        case 0x4a779cu: goto label_4a779c;
        case 0x4a77a0u: goto label_4a77a0;
        case 0x4a77a4u: goto label_4a77a4;
        case 0x4a77a8u: goto label_4a77a8;
        case 0x4a77acu: goto label_4a77ac;
        case 0x4a77b0u: goto label_4a77b0;
        case 0x4a77b4u: goto label_4a77b4;
        case 0x4a77b8u: goto label_4a77b8;
        case 0x4a77bcu: goto label_4a77bc;
        case 0x4a77c0u: goto label_4a77c0;
        case 0x4a77c4u: goto label_4a77c4;
        case 0x4a77c8u: goto label_4a77c8;
        case 0x4a77ccu: goto label_4a77cc;
        case 0x4a77d0u: goto label_4a77d0;
        case 0x4a77d4u: goto label_4a77d4;
        case 0x4a77d8u: goto label_4a77d8;
        case 0x4a77dcu: goto label_4a77dc;
        case 0x4a77e0u: goto label_4a77e0;
        case 0x4a77e4u: goto label_4a77e4;
        case 0x4a77e8u: goto label_4a77e8;
        case 0x4a77ecu: goto label_4a77ec;
        case 0x4a77f0u: goto label_4a77f0;
        case 0x4a77f4u: goto label_4a77f4;
        case 0x4a77f8u: goto label_4a77f8;
        case 0x4a77fcu: goto label_4a77fc;
        case 0x4a7800u: goto label_4a7800;
        case 0x4a7804u: goto label_4a7804;
        case 0x4a7808u: goto label_4a7808;
        case 0x4a780cu: goto label_4a780c;
        case 0x4a7810u: goto label_4a7810;
        case 0x4a7814u: goto label_4a7814;
        case 0x4a7818u: goto label_4a7818;
        case 0x4a781cu: goto label_4a781c;
        case 0x4a7820u: goto label_4a7820;
        case 0x4a7824u: goto label_4a7824;
        case 0x4a7828u: goto label_4a7828;
        case 0x4a782cu: goto label_4a782c;
        case 0x4a7830u: goto label_4a7830;
        case 0x4a7834u: goto label_4a7834;
        case 0x4a7838u: goto label_4a7838;
        case 0x4a783cu: goto label_4a783c;
        case 0x4a7840u: goto label_4a7840;
        case 0x4a7844u: goto label_4a7844;
        case 0x4a7848u: goto label_4a7848;
        case 0x4a784cu: goto label_4a784c;
        case 0x4a7850u: goto label_4a7850;
        case 0x4a7854u: goto label_4a7854;
        case 0x4a7858u: goto label_4a7858;
        case 0x4a785cu: goto label_4a785c;
        case 0x4a7860u: goto label_4a7860;
        case 0x4a7864u: goto label_4a7864;
        case 0x4a7868u: goto label_4a7868;
        case 0x4a786cu: goto label_4a786c;
        case 0x4a7870u: goto label_4a7870;
        case 0x4a7874u: goto label_4a7874;
        case 0x4a7878u: goto label_4a7878;
        case 0x4a787cu: goto label_4a787c;
        case 0x4a7880u: goto label_4a7880;
        case 0x4a7884u: goto label_4a7884;
        case 0x4a7888u: goto label_4a7888;
        case 0x4a788cu: goto label_4a788c;
        case 0x4a7890u: goto label_4a7890;
        case 0x4a7894u: goto label_4a7894;
        case 0x4a7898u: goto label_4a7898;
        case 0x4a789cu: goto label_4a789c;
        case 0x4a78a0u: goto label_4a78a0;
        case 0x4a78a4u: goto label_4a78a4;
        case 0x4a78a8u: goto label_4a78a8;
        case 0x4a78acu: goto label_4a78ac;
        case 0x4a78b0u: goto label_4a78b0;
        case 0x4a78b4u: goto label_4a78b4;
        case 0x4a78b8u: goto label_4a78b8;
        case 0x4a78bcu: goto label_4a78bc;
        case 0x4a78c0u: goto label_4a78c0;
        case 0x4a78c4u: goto label_4a78c4;
        case 0x4a78c8u: goto label_4a78c8;
        case 0x4a78ccu: goto label_4a78cc;
        case 0x4a78d0u: goto label_4a78d0;
        case 0x4a78d4u: goto label_4a78d4;
        case 0x4a78d8u: goto label_4a78d8;
        case 0x4a78dcu: goto label_4a78dc;
        case 0x4a78e0u: goto label_4a78e0;
        case 0x4a78e4u: goto label_4a78e4;
        case 0x4a78e8u: goto label_4a78e8;
        case 0x4a78ecu: goto label_4a78ec;
        case 0x4a78f0u: goto label_4a78f0;
        case 0x4a78f4u: goto label_4a78f4;
        case 0x4a78f8u: goto label_4a78f8;
        case 0x4a78fcu: goto label_4a78fc;
        case 0x4a7900u: goto label_4a7900;
        case 0x4a7904u: goto label_4a7904;
        case 0x4a7908u: goto label_4a7908;
        case 0x4a790cu: goto label_4a790c;
        case 0x4a7910u: goto label_4a7910;
        case 0x4a7914u: goto label_4a7914;
        case 0x4a7918u: goto label_4a7918;
        case 0x4a791cu: goto label_4a791c;
        case 0x4a7920u: goto label_4a7920;
        case 0x4a7924u: goto label_4a7924;
        case 0x4a7928u: goto label_4a7928;
        case 0x4a792cu: goto label_4a792c;
        case 0x4a7930u: goto label_4a7930;
        case 0x4a7934u: goto label_4a7934;
        case 0x4a7938u: goto label_4a7938;
        case 0x4a793cu: goto label_4a793c;
        case 0x4a7940u: goto label_4a7940;
        case 0x4a7944u: goto label_4a7944;
        case 0x4a7948u: goto label_4a7948;
        case 0x4a794cu: goto label_4a794c;
        case 0x4a7950u: goto label_4a7950;
        case 0x4a7954u: goto label_4a7954;
        case 0x4a7958u: goto label_4a7958;
        case 0x4a795cu: goto label_4a795c;
        case 0x4a7960u: goto label_4a7960;
        case 0x4a7964u: goto label_4a7964;
        case 0x4a7968u: goto label_4a7968;
        case 0x4a796cu: goto label_4a796c;
        case 0x4a7970u: goto label_4a7970;
        case 0x4a7974u: goto label_4a7974;
        case 0x4a7978u: goto label_4a7978;
        case 0x4a797cu: goto label_4a797c;
        case 0x4a7980u: goto label_4a7980;
        case 0x4a7984u: goto label_4a7984;
        case 0x4a7988u: goto label_4a7988;
        case 0x4a798cu: goto label_4a798c;
        case 0x4a7990u: goto label_4a7990;
        case 0x4a7994u: goto label_4a7994;
        case 0x4a7998u: goto label_4a7998;
        case 0x4a799cu: goto label_4a799c;
        case 0x4a79a0u: goto label_4a79a0;
        case 0x4a79a4u: goto label_4a79a4;
        case 0x4a79a8u: goto label_4a79a8;
        case 0x4a79acu: goto label_4a79ac;
        case 0x4a79b0u: goto label_4a79b0;
        case 0x4a79b4u: goto label_4a79b4;
        case 0x4a79b8u: goto label_4a79b8;
        case 0x4a79bcu: goto label_4a79bc;
        case 0x4a79c0u: goto label_4a79c0;
        case 0x4a79c4u: goto label_4a79c4;
        case 0x4a79c8u: goto label_4a79c8;
        case 0x4a79ccu: goto label_4a79cc;
        case 0x4a79d0u: goto label_4a79d0;
        case 0x4a79d4u: goto label_4a79d4;
        case 0x4a79d8u: goto label_4a79d8;
        case 0x4a79dcu: goto label_4a79dc;
        case 0x4a79e0u: goto label_4a79e0;
        case 0x4a79e4u: goto label_4a79e4;
        case 0x4a79e8u: goto label_4a79e8;
        case 0x4a79ecu: goto label_4a79ec;
        case 0x4a79f0u: goto label_4a79f0;
        case 0x4a79f4u: goto label_4a79f4;
        case 0x4a79f8u: goto label_4a79f8;
        case 0x4a79fcu: goto label_4a79fc;
        case 0x4a7a00u: goto label_4a7a00;
        case 0x4a7a04u: goto label_4a7a04;
        case 0x4a7a08u: goto label_4a7a08;
        case 0x4a7a0cu: goto label_4a7a0c;
        case 0x4a7a10u: goto label_4a7a10;
        case 0x4a7a14u: goto label_4a7a14;
        case 0x4a7a18u: goto label_4a7a18;
        case 0x4a7a1cu: goto label_4a7a1c;
        case 0x4a7a20u: goto label_4a7a20;
        case 0x4a7a24u: goto label_4a7a24;
        case 0x4a7a28u: goto label_4a7a28;
        case 0x4a7a2cu: goto label_4a7a2c;
        case 0x4a7a30u: goto label_4a7a30;
        case 0x4a7a34u: goto label_4a7a34;
        case 0x4a7a38u: goto label_4a7a38;
        case 0x4a7a3cu: goto label_4a7a3c;
        case 0x4a7a40u: goto label_4a7a40;
        case 0x4a7a44u: goto label_4a7a44;
        case 0x4a7a48u: goto label_4a7a48;
        case 0x4a7a4cu: goto label_4a7a4c;
        case 0x4a7a50u: goto label_4a7a50;
        case 0x4a7a54u: goto label_4a7a54;
        case 0x4a7a58u: goto label_4a7a58;
        case 0x4a7a5cu: goto label_4a7a5c;
        case 0x4a7a60u: goto label_4a7a60;
        case 0x4a7a64u: goto label_4a7a64;
        case 0x4a7a68u: goto label_4a7a68;
        case 0x4a7a6cu: goto label_4a7a6c;
        case 0x4a7a70u: goto label_4a7a70;
        case 0x4a7a74u: goto label_4a7a74;
        case 0x4a7a78u: goto label_4a7a78;
        case 0x4a7a7cu: goto label_4a7a7c;
        case 0x4a7a80u: goto label_4a7a80;
        case 0x4a7a84u: goto label_4a7a84;
        case 0x4a7a88u: goto label_4a7a88;
        case 0x4a7a8cu: goto label_4a7a8c;
        case 0x4a7a90u: goto label_4a7a90;
        case 0x4a7a94u: goto label_4a7a94;
        case 0x4a7a98u: goto label_4a7a98;
        case 0x4a7a9cu: goto label_4a7a9c;
        case 0x4a7aa0u: goto label_4a7aa0;
        case 0x4a7aa4u: goto label_4a7aa4;
        case 0x4a7aa8u: goto label_4a7aa8;
        case 0x4a7aacu: goto label_4a7aac;
        case 0x4a7ab0u: goto label_4a7ab0;
        case 0x4a7ab4u: goto label_4a7ab4;
        case 0x4a7ab8u: goto label_4a7ab8;
        case 0x4a7abcu: goto label_4a7abc;
        case 0x4a7ac0u: goto label_4a7ac0;
        case 0x4a7ac4u: goto label_4a7ac4;
        case 0x4a7ac8u: goto label_4a7ac8;
        case 0x4a7accu: goto label_4a7acc;
        case 0x4a7ad0u: goto label_4a7ad0;
        case 0x4a7ad4u: goto label_4a7ad4;
        case 0x4a7ad8u: goto label_4a7ad8;
        case 0x4a7adcu: goto label_4a7adc;
        case 0x4a7ae0u: goto label_4a7ae0;
        case 0x4a7ae4u: goto label_4a7ae4;
        case 0x4a7ae8u: goto label_4a7ae8;
        case 0x4a7aecu: goto label_4a7aec;
        case 0x4a7af0u: goto label_4a7af0;
        case 0x4a7af4u: goto label_4a7af4;
        case 0x4a7af8u: goto label_4a7af8;
        case 0x4a7afcu: goto label_4a7afc;
        case 0x4a7b00u: goto label_4a7b00;
        case 0x4a7b04u: goto label_4a7b04;
        case 0x4a7b08u: goto label_4a7b08;
        case 0x4a7b0cu: goto label_4a7b0c;
        case 0x4a7b10u: goto label_4a7b10;
        case 0x4a7b14u: goto label_4a7b14;
        case 0x4a7b18u: goto label_4a7b18;
        case 0x4a7b1cu: goto label_4a7b1c;
        case 0x4a7b20u: goto label_4a7b20;
        case 0x4a7b24u: goto label_4a7b24;
        case 0x4a7b28u: goto label_4a7b28;
        case 0x4a7b2cu: goto label_4a7b2c;
        case 0x4a7b30u: goto label_4a7b30;
        case 0x4a7b34u: goto label_4a7b34;
        case 0x4a7b38u: goto label_4a7b38;
        case 0x4a7b3cu: goto label_4a7b3c;
        case 0x4a7b40u: goto label_4a7b40;
        case 0x4a7b44u: goto label_4a7b44;
        case 0x4a7b48u: goto label_4a7b48;
        case 0x4a7b4cu: goto label_4a7b4c;
        case 0x4a7b50u: goto label_4a7b50;
        case 0x4a7b54u: goto label_4a7b54;
        case 0x4a7b58u: goto label_4a7b58;
        case 0x4a7b5cu: goto label_4a7b5c;
        case 0x4a7b60u: goto label_4a7b60;
        case 0x4a7b64u: goto label_4a7b64;
        case 0x4a7b68u: goto label_4a7b68;
        case 0x4a7b6cu: goto label_4a7b6c;
        case 0x4a7b70u: goto label_4a7b70;
        case 0x4a7b74u: goto label_4a7b74;
        case 0x4a7b78u: goto label_4a7b78;
        case 0x4a7b7cu: goto label_4a7b7c;
        case 0x4a7b80u: goto label_4a7b80;
        case 0x4a7b84u: goto label_4a7b84;
        case 0x4a7b88u: goto label_4a7b88;
        case 0x4a7b8cu: goto label_4a7b8c;
        case 0x4a7b90u: goto label_4a7b90;
        case 0x4a7b94u: goto label_4a7b94;
        case 0x4a7b98u: goto label_4a7b98;
        case 0x4a7b9cu: goto label_4a7b9c;
        case 0x4a7ba0u: goto label_4a7ba0;
        case 0x4a7ba4u: goto label_4a7ba4;
        case 0x4a7ba8u: goto label_4a7ba8;
        case 0x4a7bacu: goto label_4a7bac;
        case 0x4a7bb0u: goto label_4a7bb0;
        case 0x4a7bb4u: goto label_4a7bb4;
        case 0x4a7bb8u: goto label_4a7bb8;
        case 0x4a7bbcu: goto label_4a7bbc;
        case 0x4a7bc0u: goto label_4a7bc0;
        case 0x4a7bc4u: goto label_4a7bc4;
        case 0x4a7bc8u: goto label_4a7bc8;
        case 0x4a7bccu: goto label_4a7bcc;
        case 0x4a7bd0u: goto label_4a7bd0;
        case 0x4a7bd4u: goto label_4a7bd4;
        case 0x4a7bd8u: goto label_4a7bd8;
        case 0x4a7bdcu: goto label_4a7bdc;
        case 0x4a7be0u: goto label_4a7be0;
        case 0x4a7be4u: goto label_4a7be4;
        case 0x4a7be8u: goto label_4a7be8;
        case 0x4a7becu: goto label_4a7bec;
        case 0x4a7bf0u: goto label_4a7bf0;
        case 0x4a7bf4u: goto label_4a7bf4;
        case 0x4a7bf8u: goto label_4a7bf8;
        case 0x4a7bfcu: goto label_4a7bfc;
        case 0x4a7c00u: goto label_4a7c00;
        case 0x4a7c04u: goto label_4a7c04;
        case 0x4a7c08u: goto label_4a7c08;
        case 0x4a7c0cu: goto label_4a7c0c;
        case 0x4a7c10u: goto label_4a7c10;
        case 0x4a7c14u: goto label_4a7c14;
        case 0x4a7c18u: goto label_4a7c18;
        case 0x4a7c1cu: goto label_4a7c1c;
        case 0x4a7c20u: goto label_4a7c20;
        case 0x4a7c24u: goto label_4a7c24;
        case 0x4a7c28u: goto label_4a7c28;
        case 0x4a7c2cu: goto label_4a7c2c;
        case 0x4a7c30u: goto label_4a7c30;
        case 0x4a7c34u: goto label_4a7c34;
        case 0x4a7c38u: goto label_4a7c38;
        case 0x4a7c3cu: goto label_4a7c3c;
        case 0x4a7c40u: goto label_4a7c40;
        case 0x4a7c44u: goto label_4a7c44;
        case 0x4a7c48u: goto label_4a7c48;
        case 0x4a7c4cu: goto label_4a7c4c;
        case 0x4a7c50u: goto label_4a7c50;
        case 0x4a7c54u: goto label_4a7c54;
        case 0x4a7c58u: goto label_4a7c58;
        case 0x4a7c5cu: goto label_4a7c5c;
        case 0x4a7c60u: goto label_4a7c60;
        case 0x4a7c64u: goto label_4a7c64;
        case 0x4a7c68u: goto label_4a7c68;
        case 0x4a7c6cu: goto label_4a7c6c;
        case 0x4a7c70u: goto label_4a7c70;
        case 0x4a7c74u: goto label_4a7c74;
        case 0x4a7c78u: goto label_4a7c78;
        case 0x4a7c7cu: goto label_4a7c7c;
        case 0x4a7c80u: goto label_4a7c80;
        case 0x4a7c84u: goto label_4a7c84;
        case 0x4a7c88u: goto label_4a7c88;
        case 0x4a7c8cu: goto label_4a7c8c;
        case 0x4a7c90u: goto label_4a7c90;
        case 0x4a7c94u: goto label_4a7c94;
        case 0x4a7c98u: goto label_4a7c98;
        case 0x4a7c9cu: goto label_4a7c9c;
        case 0x4a7ca0u: goto label_4a7ca0;
        case 0x4a7ca4u: goto label_4a7ca4;
        case 0x4a7ca8u: goto label_4a7ca8;
        case 0x4a7cacu: goto label_4a7cac;
        case 0x4a7cb0u: goto label_4a7cb0;
        case 0x4a7cb4u: goto label_4a7cb4;
        case 0x4a7cb8u: goto label_4a7cb8;
        case 0x4a7cbcu: goto label_4a7cbc;
        case 0x4a7cc0u: goto label_4a7cc0;
        case 0x4a7cc4u: goto label_4a7cc4;
        case 0x4a7cc8u: goto label_4a7cc8;
        case 0x4a7cccu: goto label_4a7ccc;
        case 0x4a7cd0u: goto label_4a7cd0;
        case 0x4a7cd4u: goto label_4a7cd4;
        case 0x4a7cd8u: goto label_4a7cd8;
        case 0x4a7cdcu: goto label_4a7cdc;
        case 0x4a7ce0u: goto label_4a7ce0;
        case 0x4a7ce4u: goto label_4a7ce4;
        case 0x4a7ce8u: goto label_4a7ce8;
        case 0x4a7cecu: goto label_4a7cec;
        case 0x4a7cf0u: goto label_4a7cf0;
        case 0x4a7cf4u: goto label_4a7cf4;
        case 0x4a7cf8u: goto label_4a7cf8;
        case 0x4a7cfcu: goto label_4a7cfc;
        case 0x4a7d00u: goto label_4a7d00;
        case 0x4a7d04u: goto label_4a7d04;
        case 0x4a7d08u: goto label_4a7d08;
        case 0x4a7d0cu: goto label_4a7d0c;
        case 0x4a7d10u: goto label_4a7d10;
        case 0x4a7d14u: goto label_4a7d14;
        case 0x4a7d18u: goto label_4a7d18;
        case 0x4a7d1cu: goto label_4a7d1c;
        case 0x4a7d20u: goto label_4a7d20;
        case 0x4a7d24u: goto label_4a7d24;
        case 0x4a7d28u: goto label_4a7d28;
        case 0x4a7d2cu: goto label_4a7d2c;
        case 0x4a7d30u: goto label_4a7d30;
        case 0x4a7d34u: goto label_4a7d34;
        case 0x4a7d38u: goto label_4a7d38;
        case 0x4a7d3cu: goto label_4a7d3c;
        case 0x4a7d40u: goto label_4a7d40;
        case 0x4a7d44u: goto label_4a7d44;
        case 0x4a7d48u: goto label_4a7d48;
        case 0x4a7d4cu: goto label_4a7d4c;
        case 0x4a7d50u: goto label_4a7d50;
        case 0x4a7d54u: goto label_4a7d54;
        case 0x4a7d58u: goto label_4a7d58;
        case 0x4a7d5cu: goto label_4a7d5c;
        case 0x4a7d60u: goto label_4a7d60;
        case 0x4a7d64u: goto label_4a7d64;
        case 0x4a7d68u: goto label_4a7d68;
        case 0x4a7d6cu: goto label_4a7d6c;
        case 0x4a7d70u: goto label_4a7d70;
        case 0x4a7d74u: goto label_4a7d74;
        case 0x4a7d78u: goto label_4a7d78;
        case 0x4a7d7cu: goto label_4a7d7c;
        case 0x4a7d80u: goto label_4a7d80;
        case 0x4a7d84u: goto label_4a7d84;
        case 0x4a7d88u: goto label_4a7d88;
        case 0x4a7d8cu: goto label_4a7d8c;
        case 0x4a7d90u: goto label_4a7d90;
        case 0x4a7d94u: goto label_4a7d94;
        case 0x4a7d98u: goto label_4a7d98;
        case 0x4a7d9cu: goto label_4a7d9c;
        case 0x4a7da0u: goto label_4a7da0;
        case 0x4a7da4u: goto label_4a7da4;
        case 0x4a7da8u: goto label_4a7da8;
        case 0x4a7dacu: goto label_4a7dac;
        case 0x4a7db0u: goto label_4a7db0;
        case 0x4a7db4u: goto label_4a7db4;
        case 0x4a7db8u: goto label_4a7db8;
        case 0x4a7dbcu: goto label_4a7dbc;
        case 0x4a7dc0u: goto label_4a7dc0;
        case 0x4a7dc4u: goto label_4a7dc4;
        case 0x4a7dc8u: goto label_4a7dc8;
        case 0x4a7dccu: goto label_4a7dcc;
        case 0x4a7dd0u: goto label_4a7dd0;
        case 0x4a7dd4u: goto label_4a7dd4;
        case 0x4a7dd8u: goto label_4a7dd8;
        case 0x4a7ddcu: goto label_4a7ddc;
        case 0x4a7de0u: goto label_4a7de0;
        case 0x4a7de4u: goto label_4a7de4;
        case 0x4a7de8u: goto label_4a7de8;
        case 0x4a7decu: goto label_4a7dec;
        case 0x4a7df0u: goto label_4a7df0;
        case 0x4a7df4u: goto label_4a7df4;
        case 0x4a7df8u: goto label_4a7df8;
        case 0x4a7dfcu: goto label_4a7dfc;
        case 0x4a7e00u: goto label_4a7e00;
        case 0x4a7e04u: goto label_4a7e04;
        case 0x4a7e08u: goto label_4a7e08;
        case 0x4a7e0cu: goto label_4a7e0c;
        case 0x4a7e10u: goto label_4a7e10;
        case 0x4a7e14u: goto label_4a7e14;
        case 0x4a7e18u: goto label_4a7e18;
        case 0x4a7e1cu: goto label_4a7e1c;
        case 0x4a7e20u: goto label_4a7e20;
        case 0x4a7e24u: goto label_4a7e24;
        case 0x4a7e28u: goto label_4a7e28;
        case 0x4a7e2cu: goto label_4a7e2c;
        case 0x4a7e30u: goto label_4a7e30;
        case 0x4a7e34u: goto label_4a7e34;
        case 0x4a7e38u: goto label_4a7e38;
        case 0x4a7e3cu: goto label_4a7e3c;
        case 0x4a7e40u: goto label_4a7e40;
        case 0x4a7e44u: goto label_4a7e44;
        case 0x4a7e48u: goto label_4a7e48;
        case 0x4a7e4cu: goto label_4a7e4c;
        case 0x4a7e50u: goto label_4a7e50;
        case 0x4a7e54u: goto label_4a7e54;
        case 0x4a7e58u: goto label_4a7e58;
        case 0x4a7e5cu: goto label_4a7e5c;
        case 0x4a7e60u: goto label_4a7e60;
        case 0x4a7e64u: goto label_4a7e64;
        case 0x4a7e68u: goto label_4a7e68;
        case 0x4a7e6cu: goto label_4a7e6c;
        case 0x4a7e70u: goto label_4a7e70;
        case 0x4a7e74u: goto label_4a7e74;
        case 0x4a7e78u: goto label_4a7e78;
        case 0x4a7e7cu: goto label_4a7e7c;
        case 0x4a7e80u: goto label_4a7e80;
        case 0x4a7e84u: goto label_4a7e84;
        case 0x4a7e88u: goto label_4a7e88;
        case 0x4a7e8cu: goto label_4a7e8c;
        case 0x4a7e90u: goto label_4a7e90;
        case 0x4a7e94u: goto label_4a7e94;
        case 0x4a7e98u: goto label_4a7e98;
        case 0x4a7e9cu: goto label_4a7e9c;
        case 0x4a7ea0u: goto label_4a7ea0;
        case 0x4a7ea4u: goto label_4a7ea4;
        case 0x4a7ea8u: goto label_4a7ea8;
        case 0x4a7eacu: goto label_4a7eac;
        case 0x4a7eb0u: goto label_4a7eb0;
        case 0x4a7eb4u: goto label_4a7eb4;
        case 0x4a7eb8u: goto label_4a7eb8;
        case 0x4a7ebcu: goto label_4a7ebc;
        case 0x4a7ec0u: goto label_4a7ec0;
        case 0x4a7ec4u: goto label_4a7ec4;
        case 0x4a7ec8u: goto label_4a7ec8;
        case 0x4a7eccu: goto label_4a7ecc;
        case 0x4a7ed0u: goto label_4a7ed0;
        case 0x4a7ed4u: goto label_4a7ed4;
        case 0x4a7ed8u: goto label_4a7ed8;
        case 0x4a7edcu: goto label_4a7edc;
        case 0x4a7ee0u: goto label_4a7ee0;
        case 0x4a7ee4u: goto label_4a7ee4;
        case 0x4a7ee8u: goto label_4a7ee8;
        case 0x4a7eecu: goto label_4a7eec;
        case 0x4a7ef0u: goto label_4a7ef0;
        case 0x4a7ef4u: goto label_4a7ef4;
        case 0x4a7ef8u: goto label_4a7ef8;
        case 0x4a7efcu: goto label_4a7efc;
        case 0x4a7f00u: goto label_4a7f00;
        case 0x4a7f04u: goto label_4a7f04;
        case 0x4a7f08u: goto label_4a7f08;
        case 0x4a7f0cu: goto label_4a7f0c;
        case 0x4a7f10u: goto label_4a7f10;
        case 0x4a7f14u: goto label_4a7f14;
        case 0x4a7f18u: goto label_4a7f18;
        case 0x4a7f1cu: goto label_4a7f1c;
        case 0x4a7f20u: goto label_4a7f20;
        case 0x4a7f24u: goto label_4a7f24;
        case 0x4a7f28u: goto label_4a7f28;
        case 0x4a7f2cu: goto label_4a7f2c;
        case 0x4a7f30u: goto label_4a7f30;
        case 0x4a7f34u: goto label_4a7f34;
        case 0x4a7f38u: goto label_4a7f38;
        case 0x4a7f3cu: goto label_4a7f3c;
        case 0x4a7f40u: goto label_4a7f40;
        case 0x4a7f44u: goto label_4a7f44;
        case 0x4a7f48u: goto label_4a7f48;
        case 0x4a7f4cu: goto label_4a7f4c;
        case 0x4a7f50u: goto label_4a7f50;
        case 0x4a7f54u: goto label_4a7f54;
        case 0x4a7f58u: goto label_4a7f58;
        case 0x4a7f5cu: goto label_4a7f5c;
        case 0x4a7f60u: goto label_4a7f60;
        case 0x4a7f64u: goto label_4a7f64;
        case 0x4a7f68u: goto label_4a7f68;
        case 0x4a7f6cu: goto label_4a7f6c;
        case 0x4a7f70u: goto label_4a7f70;
        case 0x4a7f74u: goto label_4a7f74;
        case 0x4a7f78u: goto label_4a7f78;
        case 0x4a7f7cu: goto label_4a7f7c;
        case 0x4a7f80u: goto label_4a7f80;
        case 0x4a7f84u: goto label_4a7f84;
        case 0x4a7f88u: goto label_4a7f88;
        case 0x4a7f8cu: goto label_4a7f8c;
        case 0x4a7f90u: goto label_4a7f90;
        case 0x4a7f94u: goto label_4a7f94;
        case 0x4a7f98u: goto label_4a7f98;
        case 0x4a7f9cu: goto label_4a7f9c;
        case 0x4a7fa0u: goto label_4a7fa0;
        case 0x4a7fa4u: goto label_4a7fa4;
        case 0x4a7fa8u: goto label_4a7fa8;
        case 0x4a7facu: goto label_4a7fac;
        case 0x4a7fb0u: goto label_4a7fb0;
        case 0x4a7fb4u: goto label_4a7fb4;
        case 0x4a7fb8u: goto label_4a7fb8;
        case 0x4a7fbcu: goto label_4a7fbc;
        case 0x4a7fc0u: goto label_4a7fc0;
        case 0x4a7fc4u: goto label_4a7fc4;
        case 0x4a7fc8u: goto label_4a7fc8;
        case 0x4a7fccu: goto label_4a7fcc;
        case 0x4a7fd0u: goto label_4a7fd0;
        case 0x4a7fd4u: goto label_4a7fd4;
        case 0x4a7fd8u: goto label_4a7fd8;
        case 0x4a7fdcu: goto label_4a7fdc;
        case 0x4a7fe0u: goto label_4a7fe0;
        case 0x4a7fe4u: goto label_4a7fe4;
        case 0x4a7fe8u: goto label_4a7fe8;
        case 0x4a7fecu: goto label_4a7fec;
        case 0x4a7ff0u: goto label_4a7ff0;
        case 0x4a7ff4u: goto label_4a7ff4;
        case 0x4a7ff8u: goto label_4a7ff8;
        case 0x4a7ffcu: goto label_4a7ffc;
        case 0x4a8000u: goto label_4a8000;
        case 0x4a8004u: goto label_4a8004;
        case 0x4a8008u: goto label_4a8008;
        case 0x4a800cu: goto label_4a800c;
        case 0x4a8010u: goto label_4a8010;
        case 0x4a8014u: goto label_4a8014;
        case 0x4a8018u: goto label_4a8018;
        case 0x4a801cu: goto label_4a801c;
        case 0x4a8020u: goto label_4a8020;
        case 0x4a8024u: goto label_4a8024;
        case 0x4a8028u: goto label_4a8028;
        case 0x4a802cu: goto label_4a802c;
        case 0x4a8030u: goto label_4a8030;
        case 0x4a8034u: goto label_4a8034;
        case 0x4a8038u: goto label_4a8038;
        case 0x4a803cu: goto label_4a803c;
        case 0x4a8040u: goto label_4a8040;
        case 0x4a8044u: goto label_4a8044;
        case 0x4a8048u: goto label_4a8048;
        case 0x4a804cu: goto label_4a804c;
        case 0x4a8050u: goto label_4a8050;
        case 0x4a8054u: goto label_4a8054;
        case 0x4a8058u: goto label_4a8058;
        case 0x4a805cu: goto label_4a805c;
        case 0x4a8060u: goto label_4a8060;
        case 0x4a8064u: goto label_4a8064;
        case 0x4a8068u: goto label_4a8068;
        case 0x4a806cu: goto label_4a806c;
        case 0x4a8070u: goto label_4a8070;
        case 0x4a8074u: goto label_4a8074;
        case 0x4a8078u: goto label_4a8078;
        case 0x4a807cu: goto label_4a807c;
        case 0x4a8080u: goto label_4a8080;
        case 0x4a8084u: goto label_4a8084;
        case 0x4a8088u: goto label_4a8088;
        case 0x4a808cu: goto label_4a808c;
        case 0x4a8090u: goto label_4a8090;
        case 0x4a8094u: goto label_4a8094;
        case 0x4a8098u: goto label_4a8098;
        case 0x4a809cu: goto label_4a809c;
        case 0x4a80a0u: goto label_4a80a0;
        case 0x4a80a4u: goto label_4a80a4;
        case 0x4a80a8u: goto label_4a80a8;
        case 0x4a80acu: goto label_4a80ac;
        case 0x4a80b0u: goto label_4a80b0;
        case 0x4a80b4u: goto label_4a80b4;
        case 0x4a80b8u: goto label_4a80b8;
        case 0x4a80bcu: goto label_4a80bc;
        case 0x4a80c0u: goto label_4a80c0;
        case 0x4a80c4u: goto label_4a80c4;
        case 0x4a80c8u: goto label_4a80c8;
        case 0x4a80ccu: goto label_4a80cc;
        case 0x4a80d0u: goto label_4a80d0;
        case 0x4a80d4u: goto label_4a80d4;
        case 0x4a80d8u: goto label_4a80d8;
        case 0x4a80dcu: goto label_4a80dc;
        case 0x4a80e0u: goto label_4a80e0;
        case 0x4a80e4u: goto label_4a80e4;
        case 0x4a80e8u: goto label_4a80e8;
        case 0x4a80ecu: goto label_4a80ec;
        case 0x4a80f0u: goto label_4a80f0;
        case 0x4a80f4u: goto label_4a80f4;
        case 0x4a80f8u: goto label_4a80f8;
        case 0x4a80fcu: goto label_4a80fc;
        default: break;
    }

    ctx->pc = 0x4a73f0u;

label_4a73f0:
    // 0x4a73f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4a73f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4a73f4:
    // 0x4a73f4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x4a73f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_4a73f8:
    // 0x4a73f8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4a73f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4a73fc:
    // 0x4a73fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a73fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7400:
    // 0x4a7400: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x4a7400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_4a7404:
    // 0x4a7404: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a7404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a7408:
    // 0x4a7408: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x4a7408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_4a740c:
    // 0x4a740c: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x4a740cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_4a7410:
    // 0x4a7410: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4a7410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_4a7414:
    // 0x4a7414: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4a7414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_4a7418:
    // 0x4a7418: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x4a7418u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4a741c:
    // 0x4a741c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4a741cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4a7420:
    // 0x4a7420: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x4a7420u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4a7424:
    // 0x4a7424: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4a7424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4a7428:
    // 0x4a7428: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a7428u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a742c:
    // 0x4a742c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a742cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4a7430:
    // 0x4a7430: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a7430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a7434:
    // 0x4a7434: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x4a7434u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_4a7438:
    // 0x4a7438: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4a7438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a743c:
    // 0x4a743c: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x4a743cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_4a7440:
    // 0x4a7440: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4a7440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a7444:
    // 0x4a7444: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x4a7444u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4a7448:
    // 0x4a7448: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4a7448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4a744c:
    // 0x4a744c: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x4a744cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4a7450:
    // 0x4a7450: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x4a7450u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_4a7454:
    // 0x4a7454: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x4a7454u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_4a7458:
    // 0x4a7458: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x4a7458u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_4a745c:
    // 0x4a745c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x4a745cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_4a7460:
    // 0x4a7460: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4a7460u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4a7464:
    // 0x4a7464: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4a7464u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4a7468:
    // 0x4a7468: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4a7468u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4a746c:
    // 0x4a746c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a746cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4a7470:
    // 0x4a7470: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x4a7470u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_4a7474:
    // 0x4a7474: 0x8c5589e0  lw          $s5, -0x7620($v0)
    ctx->pc = 0x4a7474u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4a7478:
    // 0x4a7478: 0x46007ec6  mov.s       $f27, $f15
    ctx->pc = 0x4a7478u;
    ctx->f[27] = FPU_MOV_S(ctx->f[15]);
label_4a747c:
    // 0x4a747c: 0x46140642  mul.s       $f25, $f0, $f20
    ctx->pc = 0x4a747cu;
    ctx->f[25] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4a7480:
    // 0x4a7480: 0x461b0582  mul.s       $f22, $f0, $f27
    ctx->pc = 0x4a7480u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
label_4a7484:
    // 0x4a7484: 0x46196600  add.s       $f24, $f12, $f25
    ctx->pc = 0x4a7484u;
    ctx->f[24] = FPU_ADD_S(ctx->f[12], ctx->f[25]);
label_4a7488:
    // 0x4a7488: 0x46166d40  add.s       $f21, $f13, $f22
    ctx->pc = 0x4a7488u;
    ctx->f[21] = FPU_ADD_S(ctx->f[13], ctx->f[22]);
label_4a748c:
    // 0x4a748c: 0xc0506ac  jal         func_141AB0
label_4a7490:
    if (ctx->pc == 0x4A7490u) {
        ctx->pc = 0x4A7490u;
            // 0x4a7490: 0x46008686  mov.s       $f26, $f16 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[16]);
        ctx->pc = 0x4A7494u;
        goto label_4a7494;
    }
    ctx->pc = 0x4A748Cu;
    SET_GPR_U32(ctx, 31, 0x4A7494u);
    ctx->pc = 0x4A7490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A748Cu;
            // 0x4a7490: 0x46008686  mov.s       $f26, $f16 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7494u; }
        if (ctx->pc != 0x4A7494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7494u; }
        if (ctx->pc != 0x4A7494u) { return; }
    }
    ctx->pc = 0x4A7494u;
label_4a7494:
    // 0x4a7494: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4a7494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4a7498:
    // 0x4a7498: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a7498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a749c:
    // 0x4a749c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a749cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a74a0:
    // 0x4a74a0: 0x320f809  jalr        $t9
label_4a74a4:
    if (ctx->pc == 0x4A74A4u) {
        ctx->pc = 0x4A74A4u;
            // 0x4a74a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A74A8u;
        goto label_4a74a8;
    }
    ctx->pc = 0x4A74A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A74A8u);
        ctx->pc = 0x4A74A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A74A0u;
            // 0x4a74a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A74A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A74A8u; }
            if (ctx->pc != 0x4A74A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4A74A8u;
label_4a74a8:
    // 0x4a74a8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x4a74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_4a74ac:
    // 0x4a74ac: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
label_4a74b0:
    if (ctx->pc == 0x4A74B0u) {
        ctx->pc = 0x4A74B0u;
            // 0x4a74b0: 0x461ab7c2  mul.s       $f31, $f22, $f26 (Delay Slot)
        ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[26]);
        ctx->pc = 0x4A74B4u;
        goto label_4a74b4;
    }
    ctx->pc = 0x4A74ACu;
    {
        const bool branch_taken_0x4a74ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A74B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A74ACu;
            // 0x4a74b0: 0x461ab7c2  mul.s       $f31, $f22, $f26 (Delay Slot)
        ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[26]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a74ac) {
            ctx->pc = 0x4A7530u;
            goto label_4a7530;
        }
    }
    ctx->pc = 0x4A74B4u;
label_4a74b4:
    // 0x4a74b4: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x4a74b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a74b8:
    // 0x4a74b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4a74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4a74bc:
    // 0x4a74bc: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x4a74bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a74c0:
    // 0x4a74c0: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x4a74c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4a74c4:
    // 0x4a74c4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4a74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4a74c8:
    // 0x4a74c8: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x4a74c8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a74cc:
    // 0x4a74cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4a74ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4a74d0:
    // 0x4a74d0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x4a74d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4a74d4:
    // 0x4a74d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a74d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a74d8:
    // 0x4a74d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a74d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a74dc:
    // 0x4a74dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a74dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a74e0:
    // 0x4a74e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a74e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4a74e4:
    // 0x4a74e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a74e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a74e8:
    // 0x4a74e8: 0x4602a081  sub.s       $f2, $f20, $f2
    ctx->pc = 0x4a74e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_4a74ec:
    // 0x4a74ec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a74ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a74f0:
    // 0x4a74f0: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x4a74f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4a74f4:
    // 0x4a74f4: 0x4600d801  sub.s       $f0, $f27, $f0
    ctx->pc = 0x4a74f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[27], ctx->f[0]);
label_4a74f8:
    // 0x4a74f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4a74f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4a74fc:
    // 0x4a74fc: 0x4600d042  mul.s       $f1, $f26, $f0
    ctx->pc = 0x4a74fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
label_4a7500:
    // 0x4a7500: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a7500u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7504:
    // 0x4a7504: 0x0  nop
    ctx->pc = 0x4a7504u;
    // NOP
label_4a7508:
    // 0x4a7508: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a7508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a750c:
    // 0x4a750c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a750cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7510:
    // 0x4a7510: 0x0  nop
    ctx->pc = 0x4a7510u;
    // NOP
label_4a7514:
    // 0x4a7514: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a7514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a7518:
    // 0x4a7518: 0x4602c301  sub.s       $f12, $f24, $f2
    ctx->pc = 0x4a7518u;
    ctx->f[12] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
label_4a751c:
    // 0x4a751c: 0x4602c380  add.s       $f14, $f24, $f2
    ctx->pc = 0x4a751cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
label_4a7520:
    // 0x4a7520: 0x4601ab41  sub.s       $f13, $f21, $f1
    ctx->pc = 0x4a7520u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_4a7524:
    // 0x4a7524: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a7524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a7528:
    // 0x4a7528: 0xc0bc284  jal         func_2F0A10
label_4a752c:
    if (ctx->pc == 0x4A752Cu) {
        ctx->pc = 0x4A752Cu;
            // 0x4a752c: 0x4601abc0  add.s       $f15, $f21, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
        ctx->pc = 0x4A7530u;
        goto label_4a7530;
    }
    ctx->pc = 0x4A7528u;
    SET_GPR_U32(ctx, 31, 0x4A7530u);
    ctx->pc = 0x4A752Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7528u;
            // 0x4a752c: 0x4601abc0  add.s       $f15, $f21, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7530u; }
        if (ctx->pc != 0x4A7530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7530u; }
        if (ctx->pc != 0x4A7530u) { return; }
    }
    ctx->pc = 0x4A7530u;
label_4a7530:
    // 0x4a7530: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x4a7530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_4a7534:
    // 0x4a7534: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x4a7534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_4a7538:
    // 0x4a7538: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x4a7538u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4a753c:
    // 0x4a753c: 0x223a021  addu        $s4, $s1, $v1
    ctx->pc = 0x4a753cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_4a7540:
    // 0x4a7540: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4a7540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4a7544:
    // 0x4a7544: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x4a7544u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a7548:
    // 0x4a7548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a7548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a754c:
    // 0x4a754c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x4a754cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4a7550:
    // 0x4a7550: 0x46140040  add.s       $f1, $f0, $f20
    ctx->pc = 0x4a7550u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_4a7554:
    // 0x4a7554: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a7554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a7558:
    // 0x4a7558: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a7558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a755c:
    // 0x4a755c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a755cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a7560:
    // 0x4a7560: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a7560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a7564:
    // 0x4a7564: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a7564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7568:
    // 0x4a7568: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a7568u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a756c:
    // 0x4a756c: 0x0  nop
    ctx->pc = 0x4a756cu;
    // NOP
label_4a7570:
    // 0x4a7570: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a7570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a7574:
    // 0x4a7574: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a7574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7578:
    // 0x4a7578: 0x0  nop
    ctx->pc = 0x4a7578u;
    // NOP
label_4a757c:
    // 0x4a757c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a757cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a7580:
    // 0x4a7580: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x4a7580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a7584:
    // 0x4a7584: 0x461fad81  sub.s       $f22, $f21, $f31
    ctx->pc = 0x4a7584u;
    ctx->f[22] = FPU_SUB_S(ctx->f[21], ctx->f[31]);
label_4a7588:
    // 0x4a7588: 0x461a0702  mul.s       $f28, $f0, $f26
    ctx->pc = 0x4a7588u;
    ctx->f[28] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
label_4a758c:
    // 0x4a758c: 0xc69d0008  lwc1        $f29, 0x8($s4)
    ctx->pc = 0x4a758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_4a7590:
    // 0x4a7590: 0x4619c5c1  sub.s       $f23, $f24, $f25
    ctx->pc = 0x4a7590u;
    ctx->f[23] = FPU_SUB_S(ctx->f[24], ctx->f[25]);
label_4a7594:
    // 0x4a7594: 0x461de800  add.s       $f0, $f29, $f29
    ctx->pc = 0x4a7594u;
    ctx->f[0] = FPU_ADD_S(ctx->f[29], ctx->f[29]);
label_4a7598:
    // 0x4a7598: 0x4617ef80  add.s       $f30, $f29, $f23
    ctx->pc = 0x4a7598u;
    ctx->f[30] = FPU_ADD_S(ctx->f[29], ctx->f[23]);
label_4a759c:
    // 0x4a759c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4a759cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4a75a0:
    // 0x4a75a0: 0x4600f000  add.s       $f0, $f30, $f0
    ctx->pc = 0x4a75a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[30], ctx->f[0]);
label_4a75a4:
    // 0x4a75a4: 0x461cb500  add.s       $f20, $f22, $f28
    ctx->pc = 0x4a75a4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[22], ctx->f[28]);
label_4a75a8:
    // 0x4a75a8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a75a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a75ac:
    // 0x4a75ac: 0x4600f306  mov.s       $f12, $f30
    ctx->pc = 0x4a75acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[30]);
label_4a75b0:
    // 0x4a75b0: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x4a75b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_4a75b4:
    // 0x4a75b4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x4a75b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_4a75b8:
    // 0x4a75b8: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x4a75b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_4a75bc:
    // 0x4a75bc: 0xc0bc284  jal         func_2F0A10
label_4a75c0:
    if (ctx->pc == 0x4A75C0u) {
        ctx->pc = 0x4A75C0u;
            // 0x4a75c0: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4A75C4u;
        goto label_4a75c4;
    }
    ctx->pc = 0x4A75BCu;
    SET_GPR_U32(ctx, 31, 0x4A75C4u);
    ctx->pc = 0x4A75C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A75BCu;
            // 0x4a75c0: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A75C4u; }
        if (ctx->pc != 0x4A75C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A75C4u; }
        if (ctx->pc != 0x4A75C4u) { return; }
    }
    ctx->pc = 0x4A75C4u;
label_4a75c4:
    // 0x4a75c4: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x4a75c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a75c8:
    // 0x4a75c8: 0x461fad40  add.s       $f21, $f21, $f31
    ctx->pc = 0x4a75c8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[31]);
label_4a75cc:
    // 0x4a75cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a75ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a75d0:
    // 0x4a75d0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x4a75d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4a75d4:
    // 0x4a75d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a75d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a75d8:
    // 0x4a75d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a75d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a75dc:
    // 0x4a75dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a75dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a75e0:
    // 0x4a75e0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4a75e0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a75e4:
    // 0x4a75e4: 0x0  nop
    ctx->pc = 0x4a75e4u;
    // NOP
label_4a75e8:
    // 0x4a75e8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a75e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a75ec:
    // 0x4a75ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a75ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a75f0:
    // 0x4a75f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a75f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a75f4:
    // 0x4a75f4: 0x4600f306  mov.s       $f12, $f30
    ctx->pc = 0x4a75f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[30]);
label_4a75f8:
    // 0x4a75f8: 0x461caf81  sub.s       $f30, $f21, $f28
    ctx->pc = 0x4a75f8u;
    ctx->f[30] = FPU_SUB_S(ctx->f[21], ctx->f[28]);
label_4a75fc:
    // 0x4a75fc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a75fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a7600:
    // 0x4a7600: 0xc7ae00bc  lwc1        $f14, 0xBC($sp)
    ctx->pc = 0x4a7600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4a7604:
    // 0x4a7604: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a7604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a7608:
    // 0x4a7608: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x4a7608u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_4a760c:
    // 0x4a760c: 0xc0bc284  jal         func_2F0A10
label_4a7610:
    if (ctx->pc == 0x4A7610u) {
        ctx->pc = 0x4A7610u;
            // 0x4a7610: 0x4600f3c6  mov.s       $f15, $f30 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[30]);
        ctx->pc = 0x4A7614u;
        goto label_4a7614;
    }
    ctx->pc = 0x4A760Cu;
    SET_GPR_U32(ctx, 31, 0x4A7614u);
    ctx->pc = 0x4A7610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A760Cu;
            // 0x4a7610: 0x4600f3c6  mov.s       $f15, $f30 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7614u; }
        if (ctx->pc != 0x4A7614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7614u; }
        if (ctx->pc != 0x4A7614u) { return; }
    }
    ctx->pc = 0x4A7614u;
label_4a7614:
    // 0x4a7614: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4a7614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4a7618:
    // 0x4a7618: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x4a7618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_4a761c:
    // 0x4a761c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a761cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7620:
    // 0x4a7620: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x4a7620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_4a7624:
    // 0x4a7624: 0x461b0000  add.s       $f0, $f0, $f27
    ctx->pc = 0x4a7624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
label_4a7628:
    // 0x4a7628: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a7628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a762c:
    // 0x4a762c: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x4a762cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a7630:
    // 0x4a7630: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a7630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a7634:
    // 0x4a7634: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x4a7634u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4a7638:
    // 0x4a7638: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a7638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a763c:
    // 0x4a763c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a763cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a7640:
    // 0x4a7640: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a7640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7644:
    // 0x4a7644: 0x461a0042  mul.s       $f1, $f0, $f26
    ctx->pc = 0x4a7644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
label_4a7648:
    // 0x4a7648: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a7648u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a764c:
    // 0x4a764c: 0x0  nop
    ctx->pc = 0x4a764cu;
    // NOP
label_4a7650:
    // 0x4a7650: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a7650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a7654:
    // 0x4a7654: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a7654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7658:
    // 0x4a7658: 0x0  nop
    ctx->pc = 0x4a7658u;
    // NOP
label_4a765c:
    // 0x4a765c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a765cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a7660:
    // 0x4a7660: 0x461ce000  add.s       $f0, $f28, $f28
    ctx->pc = 0x4a7660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[28], ctx->f[28]);
label_4a7664:
    // 0x4a7664: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4a7664u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4a7668:
    // 0x4a7668: 0x4600a6c6  mov.s       $f27, $f20
    ctx->pc = 0x4a7668u;
    ctx->f[27] = FPU_MOV_S(ctx->f[20]);
label_4a766c:
    // 0x4a766c: 0x4600df00  add.s       $f28, $f27, $f0
    ctx->pc = 0x4a766cu;
    ctx->f[28] = FPU_ADD_S(ctx->f[27], ctx->f[0]);
label_4a7670:
    // 0x4a7670: 0x461dbe80  add.s       $f26, $f23, $f29
    ctx->pc = 0x4a7670u;
    ctx->f[26] = FPU_ADD_S(ctx->f[23], ctx->f[29]);
label_4a7674:
    // 0x4a7674: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4a7674u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_4a7678:
    // 0x4a7678: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a7678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a767c:
    // 0x4a767c: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x4a767cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_4a7680:
    // 0x4a7680: 0x4600e3c6  mov.s       $f15, $f28
    ctx->pc = 0x4a7680u;
    ctx->f[15] = FPU_MOV_S(ctx->f[28]);
label_4a7684:
    // 0x4a7684: 0xc0bc284  jal         func_2F0A10
label_4a7688:
    if (ctx->pc == 0x4A7688u) {
        ctx->pc = 0x4A7688u;
            // 0x4a7688: 0x4600d386  mov.s       $f14, $f26 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[26]);
        ctx->pc = 0x4A768Cu;
        goto label_4a768c;
    }
    ctx->pc = 0x4A7684u;
    SET_GPR_U32(ctx, 31, 0x4A768Cu);
    ctx->pc = 0x4A7688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7684u;
            // 0x4a7688: 0x4600d386  mov.s       $f14, $f26 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A768Cu; }
        if (ctx->pc != 0x4A768Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A768Cu; }
        if (ctx->pc != 0x4A768Cu) { return; }
    }
    ctx->pc = 0x4A768Cu;
label_4a768c:
    // 0x4a768c: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x4a768cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a7690:
    // 0x4a7690: 0x4619c640  add.s       $f25, $f24, $f25
    ctx->pc = 0x4a7690u;
    ctx->f[25] = FPU_ADD_S(ctx->f[24], ctx->f[25]);
label_4a7694:
    // 0x4a7694: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a7694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a7698:
    // 0x4a7698: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x4a7698u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4a769c:
    // 0x4a769c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a769cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a76a0:
    // 0x4a76a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a76a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a76a4:
    // 0x4a76a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a76a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a76a8:
    // 0x4a76a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a76a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a76ac:
    // 0x4a76ac: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a76acu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a76b0:
    // 0x4a76b0: 0x0  nop
    ctx->pc = 0x4a76b0u;
    // NOP
label_4a76b4:
    // 0x4a76b4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a76b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a76b8:
    // 0x4a76b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a76b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a76bc:
    // 0x4a76bc: 0x461dce01  sub.s       $f24, $f25, $f29
    ctx->pc = 0x4a76bcu;
    ctx->f[24] = FPU_SUB_S(ctx->f[25], ctx->f[29]);
label_4a76c0:
    // 0x4a76c0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a76c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a76c4:
    // 0x4a76c4: 0x4600db46  mov.s       $f13, $f27
    ctx->pc = 0x4a76c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[27]);
label_4a76c8:
    // 0x4a76c8: 0x4600e3c6  mov.s       $f15, $f28
    ctx->pc = 0x4a76c8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[28]);
label_4a76cc:
    // 0x4a76cc: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x4a76ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_4a76d0:
    // 0x4a76d0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a76d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a76d4:
    // 0x4a76d4: 0xc0bc284  jal         func_2F0A10
label_4a76d8:
    if (ctx->pc == 0x4A76D8u) {
        ctx->pc = 0x4A76D8u;
            // 0x4a76d8: 0x4600c386  mov.s       $f14, $f24 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x4A76DCu;
        goto label_4a76dc;
    }
    ctx->pc = 0x4A76D4u;
    SET_GPR_U32(ctx, 31, 0x4A76DCu);
    ctx->pc = 0x4A76D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A76D4u;
            // 0x4a76d8: 0x4600c386  mov.s       $f14, $f24 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A76DCu; }
        if (ctx->pc != 0x4A76DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A76DCu; }
        if (ctx->pc != 0x4A76DCu) { return; }
    }
    ctx->pc = 0x4A76DCu;
label_4a76dc:
    // 0x4a76dc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a76dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a76e0:
    // 0x4a76e0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a76e4:
    // 0x4a76e4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a76e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a76e8:
    // 0x4a76e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a76e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a76ec:
    // 0x4a76ec: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x4a76ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4a76f0:
    // 0x4a76f0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4a76f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_4a76f4:
    // 0x4a76f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a76f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a76f8:
    // 0x4a76f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a76f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a76fc:
    // 0x4a76fc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a76fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a7700:
    // 0x4a7700: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a7700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a7704:
    // 0x4a7704: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a7704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7708:
    // 0x4a7708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a7708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a770c:
    // 0x4a770c: 0x0  nop
    ctx->pc = 0x4a770cu;
    // NOP
label_4a7710:
    // 0x4a7710: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a7710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a7714:
    // 0x4a7714: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x4a7714u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_4a7718:
    // 0x4a7718: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x4a7718u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
label_4a771c:
    // 0x4a771c: 0xc0bc284  jal         func_2F0A10
label_4a7720:
    if (ctx->pc == 0x4A7720u) {
        ctx->pc = 0x4A7720u;
            // 0x4a7720: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4A7724u;
        goto label_4a7724;
    }
    ctx->pc = 0x4A771Cu;
    SET_GPR_U32(ctx, 31, 0x4A7724u);
    ctx->pc = 0x4A7720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A771Cu;
            // 0x4a7720: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7724u; }
        if (ctx->pc != 0x4A7724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7724u; }
        if (ctx->pc != 0x4A7724u) { return; }
    }
    ctx->pc = 0x4A7724u;
label_4a7724:
    // 0x4a7724: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a7724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a7728:
    // 0x4a7728: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a7728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a772c:
    // 0x4a772c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a772cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a7730:
    // 0x4a7730: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a7730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a7734:
    // 0x4a7734: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x4a7734u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4a7738:
    // 0x4a7738: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x4a7738u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_4a773c:
    // 0x4a773c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a773cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7740:
    // 0x4a7740: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a7740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a7744:
    // 0x4a7744: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a7744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a7748:
    // 0x4a7748: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a7748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a774c:
    // 0x4a774c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a774cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7750:
    // 0x4a7750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a7750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7754:
    // 0x4a7754: 0x0  nop
    ctx->pc = 0x4a7754u;
    // NOP
label_4a7758:
    // 0x4a7758: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a7758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a775c:
    // 0x4a775c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x4a775cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_4a7760:
    // 0x4a7760: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x4a7760u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_4a7764:
    // 0x4a7764: 0xc0bc284  jal         func_2F0A10
label_4a7768:
    if (ctx->pc == 0x4A7768u) {
        ctx->pc = 0x4A7768u;
            // 0x4a7768: 0x4600c386  mov.s       $f14, $f24 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x4A776Cu;
        goto label_4a776c;
    }
    ctx->pc = 0x4A7764u;
    SET_GPR_U32(ctx, 31, 0x4A776Cu);
    ctx->pc = 0x4A7768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7764u;
            // 0x4a7768: 0x4600c386  mov.s       $f14, $f24 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A776Cu; }
        if (ctx->pc != 0x4A776Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A776Cu; }
        if (ctx->pc != 0x4A776Cu) { return; }
    }
    ctx->pc = 0x4A776Cu;
label_4a776c:
    // 0x4a776c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a776cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a7770:
    // 0x4a7770: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a7770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a7774:
    // 0x4a7774: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a7774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a7778:
    // 0x4a7778: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a7778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a777c:
    // 0x4a777c: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x4a777cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4a7780:
    // 0x4a7780: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4a7780u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_4a7784:
    // 0x4a7784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a7784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7788:
    // 0x4a7788: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a7788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a778c:
    // 0x4a778c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a778cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a7790:
    // 0x4a7790: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a7790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a7794:
    // 0x4a7794: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a7794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7798:
    // 0x4a7798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a7798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a779c:
    // 0x4a779c: 0x0  nop
    ctx->pc = 0x4a779cu;
    // NOP
label_4a77a0:
    // 0x4a77a0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a77a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a77a4:
    // 0x4a77a4: 0x4600d386  mov.s       $f14, $f26
    ctx->pc = 0x4a77a4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[26]);
label_4a77a8:
    // 0x4a77a8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x4a77a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_4a77ac:
    // 0x4a77ac: 0xc0bc284  jal         func_2F0A10
label_4a77b0:
    if (ctx->pc == 0x4A77B0u) {
        ctx->pc = 0x4A77B0u;
            // 0x4a77b0: 0x4600f3c6  mov.s       $f15, $f30 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[30]);
        ctx->pc = 0x4A77B4u;
        goto label_4a77b4;
    }
    ctx->pc = 0x4A77ACu;
    SET_GPR_U32(ctx, 31, 0x4A77B4u);
    ctx->pc = 0x4A77B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A77ACu;
            // 0x4a77b0: 0x4600f3c6  mov.s       $f15, $f30 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A77B4u; }
        if (ctx->pc != 0x4A77B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A77B4u; }
        if (ctx->pc != 0x4A77B4u) { return; }
    }
    ctx->pc = 0x4A77B4u;
label_4a77b4:
    // 0x4a77b4: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x4a77b4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a77b8:
    // 0x4a77b8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a77b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a77bc:
    // 0x4a77bc: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x4a77bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4a77c0:
    // 0x4a77c0: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x4a77c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
label_4a77c4:
    // 0x4a77c4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x4a77c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_4a77c8:
    // 0x4a77c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a77c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a77cc:
    // 0x4a77cc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a77ccu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a77d0:
    // 0x4a77d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a77d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a77d4:
    // 0x4a77d4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a77d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a77d8:
    // 0x4a77d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a77d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a77dc:
    // 0x4a77dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a77dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a77e0:
    // 0x4a77e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a77e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a77e4:
    // 0x4a77e4: 0x0  nop
    ctx->pc = 0x4a77e4u;
    // NOP
label_4a77e8:
    // 0x4a77e8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a77e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a77ec:
    // 0x4a77ec: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x4a77ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
label_4a77f0:
    // 0x4a77f0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a77f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a77f4:
    // 0x4a77f4: 0xc0bc284  jal         func_2F0A10
label_4a77f8:
    if (ctx->pc == 0x4A77F8u) {
        ctx->pc = 0x4A77F8u;
            // 0x4a77f8: 0x4600f3c6  mov.s       $f15, $f30 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[30]);
        ctx->pc = 0x4A77FCu;
        goto label_4a77fc;
    }
    ctx->pc = 0x4A77F4u;
    SET_GPR_U32(ctx, 31, 0x4A77FCu);
    ctx->pc = 0x4A77F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A77F4u;
            // 0x4a77f8: 0x4600f3c6  mov.s       $f15, $f30 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[30]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A77FCu; }
        if (ctx->pc != 0x4A77FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A77FCu; }
        if (ctx->pc != 0x4A77FCu) { return; }
    }
    ctx->pc = 0x4A77FCu;
label_4a77fc:
    // 0x4a77fc: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4a77fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4a7800:
    // 0x4a7800: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a7800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a7804:
    // 0x4a7804: 0x320f809  jalr        $t9
label_4a7808:
    if (ctx->pc == 0x4A7808u) {
        ctx->pc = 0x4A7808u;
            // 0x4a7808: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A780Cu;
        goto label_4a780c;
    }
    ctx->pc = 0x4A7804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A780Cu);
        ctx->pc = 0x4A7808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7804u;
            // 0x4a7808: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A780Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A780Cu; }
            if (ctx->pc != 0x4A780Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A780Cu;
label_4a780c:
    // 0x4a780c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4a780cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4a7810:
    // 0x4a7810: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x4a7810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_4a7814:
    // 0x4a7814: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x4a7814u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4a7818:
    // 0x4a7818: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x4a7818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_4a781c:
    // 0x4a781c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x4a781cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a7820:
    // 0x4a7820: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x4a7820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_4a7824:
    // 0x4a7824: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4a7824u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a7828:
    // 0x4a7828: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x4a7828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_4a782c:
    // 0x4a782c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4a782cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a7830:
    // 0x4a7830: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x4a7830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_4a7834:
    // 0x4a7834: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4a7834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a7838:
    // 0x4a7838: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x4a7838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_4a783c:
    // 0x4a783c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4a783cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a7840:
    // 0x4a7840: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x4a7840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_4a7844:
    // 0x4a7844: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a7844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a7848:
    // 0x4a7848: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x4a7848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_4a784c:
    // 0x4a784c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4a784cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4a7850:
    // 0x4a7850: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4a7850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4a7854:
    // 0x4a7854: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4a7854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4a7858:
    // 0x4a7858: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a7858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a785c:
    // 0x4a785c: 0x3e00008  jr          $ra
label_4a7860:
    if (ctx->pc == 0x4A7860u) {
        ctx->pc = 0x4A7860u;
            // 0x4a7860: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4A7864u;
        goto label_4a7864;
    }
    ctx->pc = 0x4A785Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A7860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A785Cu;
            // 0x4a7860: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A7864u;
label_4a7864:
    // 0x4a7864: 0x0  nop
    ctx->pc = 0x4a7864u;
    // NOP
label_4a7868:
    // 0x4a7868: 0x0  nop
    ctx->pc = 0x4a7868u;
    // NOP
label_4a786c:
    // 0x4a786c: 0x0  nop
    ctx->pc = 0x4a786cu;
    // NOP
label_4a7870:
    // 0x4a7870: 0x8088010c  lb          $t0, 0x10C($a0)
    ctx->pc = 0x4a7870u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
label_4a7874:
    // 0x4a7874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a7874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a7878:
    // 0x4a7878: 0x684023  subu        $t0, $v1, $t0
    ctx->pc = 0x4a7878u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4a787c:
    // 0x4a787c: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x4a787cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_4a7880:
    // 0x4a7880: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4a7880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4a7884:
    // 0x4a7884: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4a7884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4a7888:
    // 0x4a7888: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x4a7888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4a788c:
    // 0x4a788c: 0x8d030080  lw          $v1, 0x80($t0)
    ctx->pc = 0x4a788cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
label_4a7890:
    // 0x4a7890: 0x2504007c  addiu       $a0, $t0, 0x7C
    ctx->pc = 0x4a7890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 124));
label_4a7894:
    // 0x4a7894: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a7894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4a7898:
    // 0x4a7898: 0xad030080  sw          $v1, 0x80($t0)
    ctx->pc = 0x4a7898u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 3));
label_4a789c:
    // 0x4a789c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4a789cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4a78a0:
    // 0x4a78a0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4a78a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4a78a4:
    // 0x4a78a4: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x4a78a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
label_4a78a8:
    // 0x4a78a8: 0xe46c0008  swc1        $f12, 0x8($v1)
    ctx->pc = 0x4a78a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_4a78ac:
    // 0x4a78ac: 0xe46d000c  swc1        $f13, 0xC($v1)
    ctx->pc = 0x4a78acu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_4a78b0:
    // 0x4a78b0: 0xa0650015  sb          $a1, 0x15($v1)
    ctx->pc = 0x4a78b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 5));
label_4a78b4:
    // 0x4a78b4: 0x3e00008  jr          $ra
label_4a78b8:
    if (ctx->pc == 0x4A78B8u) {
        ctx->pc = 0x4A78B8u;
            // 0x4a78b8: 0xa0660014  sb          $a2, 0x14($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x4A78BCu;
        goto label_4a78bc;
    }
    ctx->pc = 0x4A78B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A78B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A78B4u;
            // 0x4a78b8: 0xa0660014  sb          $a2, 0x14($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A78BCu;
label_4a78bc:
    // 0x4a78bc: 0x0  nop
    ctx->pc = 0x4a78bcu;
    // NOP
label_4a78c0:
    // 0x4a78c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a78c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a78c4:
    // 0x4a78c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a78c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a78c8:
    // 0x4a78c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a78c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4a78cc:
    // 0x4a78cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a78ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a78d0:
    // 0x4a78d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a78d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a78d4:
    // 0x4a78d4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4a78d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a78d8:
    // 0x4a78d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a78d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a78dc:
    // 0x4a78dc: 0x5963c  dsll32      $s2, $a1, 24
    ctx->pc = 0x4a78dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 24));
label_4a78e0:
    // 0x4a78e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a78e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a78e4:
    // 0x4a78e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a78e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a78e8:
    // 0x4a78e8: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x4a78e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4a78ec:
    // 0x4a78ec: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x4a78ecu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
label_4a78f0:
    // 0x4a78f0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4a78f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a78f4:
    // 0x4a78f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a78f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a78f8:
    // 0x4a78f8: 0xc0cc4a0  jal         func_331280
label_4a78fc:
    if (ctx->pc == 0x4A78FCu) {
        ctx->pc = 0x4A78FCu;
            // 0x4a78fc: 0x2626005c  addiu       $a2, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->pc = 0x4A7900u;
        goto label_4a7900;
    }
    ctx->pc = 0x4A78F8u;
    SET_GPR_U32(ctx, 31, 0x4A7900u);
    ctx->pc = 0x4A78FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A78F8u;
            // 0x4a78fc: 0x2626005c  addiu       $a2, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x331280u;
    if (runtime->hasFunction(0x331280u)) {
        auto targetFn = runtime->lookupFunction(0x331280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7900u; }
        if (ctx->pc != 0x4A7900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00331280_0x331280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7900u; }
        if (ctx->pc != 0x4A7900u) { return; }
    }
    ctx->pc = 0x4A7900u;
label_4a7900:
    // 0x4a7900: 0x13363c  dsll32      $a2, $s3, 24
    ctx->pc = 0x4a7900u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 24));
label_4a7904:
    // 0x4a7904: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x4a7904u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_4a7908:
    // 0x4a7908: 0x58c00007  blezl       $a2, . + 4 + (0x7 << 2)
label_4a790c:
    if (ctx->pc == 0x4A790Cu) {
        ctx->pc = 0x4A790Cu;
            // 0x4a790c: 0x620c0  sll         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->pc = 0x4A7910u;
        goto label_4a7910;
    }
    ctx->pc = 0x4A7908u;
    {
        const bool branch_taken_0x4a7908 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x4a7908) {
            ctx->pc = 0x4A790Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7908u;
            // 0x4a790c: 0x620c0  sll         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A7928u;
            goto label_4a7928;
        }
    }
    ctx->pc = 0x4A7910u;
label_4a7910:
    // 0x4a7910: 0x28c10006  slti        $at, $a2, 0x6
    ctx->pc = 0x4a7910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
label_4a7914:
    // 0x4a7914: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4a7918:
    if (ctx->pc == 0x4A7918u) {
        ctx->pc = 0x4A791Cu;
        goto label_4a791c;
    }
    ctx->pc = 0x4A7914u;
    {
        const bool branch_taken_0x4a7914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7914) {
            ctx->pc = 0x4A7924u;
            goto label_4a7924;
        }
    }
    ctx->pc = 0x4A791Cu;
label_4a791c:
    // 0x4a791c: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x4a791cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_4a7920:
    // 0x4a7920: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x4a7920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_4a7924:
    // 0x4a7924: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x4a7924u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4a7928:
    // 0x4a7928: 0xae32011c  sw          $s2, 0x11C($s1)
    ctx->pc = 0x4a7928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 18));
label_4a792c:
    // 0x4a792c: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x4a792cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4a7930:
    // 0x4a7930: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a7930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4a7934:
    // 0x4a7934: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4a7934u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4a7938:
    // 0x4a7938: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4a7938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4a793c:
    // 0x4a793c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4a793cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4a7940:
    // 0x4a7940: 0x2463ef10  addiu       $v1, $v1, -0x10F0
    ctx->pc = 0x4a7940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962960));
label_4a7944:
    // 0x4a7944: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4a7944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4a7948:
    // 0x4a7948: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x4a7948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_4a794c:
    // 0x4a794c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4a794cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4a7950:
    // 0x4a7950: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4a7950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4a7954:
    // 0x4a7954: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a7954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a7958:
    // 0x4a7958: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4a7958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a795c:
    // 0x4a795c: 0x320f809  jalr        $t9
label_4a7960:
    if (ctx->pc == 0x4A7960u) {
        ctx->pc = 0x4A7960u;
            // 0x4a7960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A7964u;
        goto label_4a7964;
    }
    ctx->pc = 0x4A795Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A7964u);
        ctx->pc = 0x4A7960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A795Cu;
            // 0x4a7960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A7964u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A7964u; }
            if (ctx->pc != 0x4A7964u) { return; }
        }
        }
    }
    ctx->pc = 0x4A7964u;
label_4a7964:
    // 0x4a7964: 0xa230010d  sb          $s0, 0x10D($s1)
    ctx->pc = 0x4a7964u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 269), (uint8_t)GPR_U32(ctx, 16));
label_4a7968:
    // 0x4a7968: 0xa230010e  sb          $s0, 0x10E($s1)
    ctx->pc = 0x4a7968u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 270), (uint8_t)GPR_U32(ctx, 16));
label_4a796c:
    // 0x4a796c: 0xa2300112  sb          $s0, 0x112($s1)
    ctx->pc = 0x4a796cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 274), (uint8_t)GPR_U32(ctx, 16));
label_4a7970:
    // 0x4a7970: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a7970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4a7974:
    // 0x4a7974: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a7974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a7978:
    // 0x4a7978: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a7978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a797c:
    // 0x4a797c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a797cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a7980:
    // 0x4a7980: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a7980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a7984:
    // 0x4a7984: 0x3e00008  jr          $ra
label_4a7988:
    if (ctx->pc == 0x4A7988u) {
        ctx->pc = 0x4A7988u;
            // 0x4a7988: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A798Cu;
        goto label_4a798c;
    }
    ctx->pc = 0x4A7984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A7988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7984u;
            // 0x4a7988: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A798Cu;
label_4a798c:
    // 0x4a798c: 0x0  nop
    ctx->pc = 0x4a798cu;
    // NOP
label_4a7990:
    // 0x4a7990: 0x3e00008  jr          $ra
label_4a7994:
    if (ctx->pc == 0x4A7994u) {
        ctx->pc = 0x4A7994u;
            // 0x4a7994: 0xa0800115  sb          $zero, 0x115($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 277), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4A7998u;
        goto label_4a7998;
    }
    ctx->pc = 0x4A7990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A7994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7990u;
            // 0x4a7994: 0xa0800115  sb          $zero, 0x115($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 277), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A7998u;
label_4a7998:
    // 0x4a7998: 0x0  nop
    ctx->pc = 0x4a7998u;
    // NOP
label_4a799c:
    // 0x4a799c: 0x0  nop
    ctx->pc = 0x4a799cu;
    // NOP
label_4a79a0:
    // 0x4a79a0: 0x8088010c  lb          $t0, 0x10C($a0)
    ctx->pc = 0x4a79a0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
label_4a79a4:
    // 0x4a79a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a79a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a79a8:
    // 0x4a79a8: 0x684023  subu        $t0, $v1, $t0
    ctx->pc = 0x4a79a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4a79ac:
    // 0x4a79ac: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x4a79acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_4a79b0:
    // 0x4a79b0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4a79b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4a79b4:
    // 0x4a79b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4a79b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4a79b8:
    // 0x4a79b8: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x4a79b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4a79bc:
    // 0x4a79bc: 0x8d030080  lw          $v1, 0x80($t0)
    ctx->pc = 0x4a79bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
label_4a79c0:
    // 0x4a79c0: 0x2504007c  addiu       $a0, $t0, 0x7C
    ctx->pc = 0x4a79c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 124));
label_4a79c4:
    // 0x4a79c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a79c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4a79c8:
    // 0x4a79c8: 0xad030080  sw          $v1, 0x80($t0)
    ctx->pc = 0x4a79c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 3));
label_4a79cc:
    // 0x4a79cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4a79ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4a79d0:
    // 0x4a79d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4a79d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4a79d4:
    // 0x4a79d4: 0xa0650015  sb          $a1, 0x15($v1)
    ctx->pc = 0x4a79d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 5));
label_4a79d8:
    // 0x4a79d8: 0xa0660014  sb          $a2, 0x14($v1)
    ctx->pc = 0x4a79d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 6));
label_4a79dc:
    // 0x4a79dc: 0xe46c0008  swc1        $f12, 0x8($v1)
    ctx->pc = 0x4a79dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_4a79e0:
    // 0x4a79e0: 0xe46d000c  swc1        $f13, 0xC($v1)
    ctx->pc = 0x4a79e0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_4a79e4:
    // 0x4a79e4: 0x3e00008  jr          $ra
label_4a79e8:
    if (ctx->pc == 0x4A79E8u) {
        ctx->pc = 0x4A79E8u;
            // 0x4a79e8: 0xac670010  sw          $a3, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
        ctx->pc = 0x4A79ECu;
        goto label_4a79ec;
    }
    ctx->pc = 0x4A79E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A79E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A79E4u;
            // 0x4a79e8: 0xac670010  sw          $a3, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A79ECu;
label_4a79ec:
    // 0x4a79ec: 0x0  nop
    ctx->pc = 0x4a79ecu;
    // NOP
label_4a79f0:
    // 0x4a79f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a79f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a79f4:
    // 0x4a79f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a79f8:
    // 0x4a79f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4a79f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4a79fc:
    // 0x4a79fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a79fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a7a00:
    // 0x4a7a00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a7a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a7a04:
    // 0x4a7a04: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4a7a04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a7a08:
    // 0x4a7a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a7a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a7a0c:
    // 0x4a7a0c: 0x5963c  dsll32      $s2, $a1, 24
    ctx->pc = 0x4a7a0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 24));
label_4a7a10:
    // 0x4a7a10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a7a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a7a14:
    // 0x4a7a14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a7a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a7a18:
    // 0x4a7a18: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x4a7a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4a7a1c:
    // 0x4a7a1c: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x4a7a1cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
label_4a7a20:
    // 0x4a7a20: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4a7a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a7a24:
    // 0x4a7a24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a7a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a7a28:
    // 0x4a7a28: 0xc0cc4a0  jal         func_331280
label_4a7a2c:
    if (ctx->pc == 0x4A7A2Cu) {
        ctx->pc = 0x4A7A2Cu;
            // 0x4a7a2c: 0x2626005c  addiu       $a2, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->pc = 0x4A7A30u;
        goto label_4a7a30;
    }
    ctx->pc = 0x4A7A28u;
    SET_GPR_U32(ctx, 31, 0x4A7A30u);
    ctx->pc = 0x4A7A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7A28u;
            // 0x4a7a2c: 0x2626005c  addiu       $a2, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x331280u;
    if (runtime->hasFunction(0x331280u)) {
        auto targetFn = runtime->lookupFunction(0x331280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7A30u; }
        if (ctx->pc != 0x4A7A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00331280_0x331280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7A30u; }
        if (ctx->pc != 0x4A7A30u) { return; }
    }
    ctx->pc = 0x4A7A30u;
label_4a7a30:
    // 0x4a7a30: 0x13363c  dsll32      $a2, $s3, 24
    ctx->pc = 0x4a7a30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 24));
label_4a7a34:
    // 0x4a7a34: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x4a7a34u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_4a7a38:
    // 0x4a7a38: 0x58c00007  blezl       $a2, . + 4 + (0x7 << 2)
label_4a7a3c:
    if (ctx->pc == 0x4A7A3Cu) {
        ctx->pc = 0x4A7A3Cu;
            // 0x4a7a3c: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->pc = 0x4A7A40u;
        goto label_4a7a40;
    }
    ctx->pc = 0x4A7A38u;
    {
        const bool branch_taken_0x4a7a38 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x4a7a38) {
            ctx->pc = 0x4A7A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7A38u;
            // 0x4a7a3c: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A7A58u;
            goto label_4a7a58;
        }
    }
    ctx->pc = 0x4A7A40u;
label_4a7a40:
    // 0x4a7a40: 0x28c10006  slti        $at, $a2, 0x6
    ctx->pc = 0x4a7a40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
label_4a7a44:
    // 0x4a7a44: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4a7a48:
    if (ctx->pc == 0x4A7A48u) {
        ctx->pc = 0x4A7A4Cu;
        goto label_4a7a4c;
    }
    ctx->pc = 0x4A7A44u;
    {
        const bool branch_taken_0x4a7a44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7a44) {
            ctx->pc = 0x4A7A54u;
            goto label_4a7a54;
        }
    }
    ctx->pc = 0x4A7A4Cu;
label_4a7a4c:
    // 0x4a7a4c: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x4a7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_4a7a50:
    // 0x4a7a50: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x4a7a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_4a7a54:
    // 0x4a7a54: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x4a7a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4a7a58:
    // 0x4a7a58: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4a7a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4a7a5c:
    // 0x4a7a5c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x4a7a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4a7a60:
    // 0x4a7a60: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x4a7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_4a7a64:
    // 0x4a7a64: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x4a7a64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4a7a68:
    // 0x4a7a68: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a7a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4a7a6c:
    // 0x4a7a6c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4a7a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4a7a70:
    // 0x4a7a70: 0x2463ef10  addiu       $v1, $v1, -0x10F0
    ctx->pc = 0x4a7a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962960));
label_4a7a74:
    // 0x4a7a74: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4a7a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4a7a78:
    // 0x4a7a78: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4a7a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4a7a7c:
    // 0x4a7a7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4a7a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4a7a80:
    // 0x4a7a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a7a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a7a84:
    // 0x4a7a84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4a7a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a7a88:
    // 0x4a7a88: 0x320f809  jalr        $t9
label_4a7a8c:
    if (ctx->pc == 0x4A7A8Cu) {
        ctx->pc = 0x4A7A8Cu;
            // 0x4a7a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A7A90u;
        goto label_4a7a90;
    }
    ctx->pc = 0x4A7A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A7A90u);
        ctx->pc = 0x4A7A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7A88u;
            // 0x4a7a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A7A90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A7A90u; }
            if (ctx->pc != 0x4A7A90u) { return; }
        }
        }
    }
    ctx->pc = 0x4A7A90u;
label_4a7a90:
    // 0x4a7a90: 0xa230010d  sb          $s0, 0x10D($s1)
    ctx->pc = 0x4a7a90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 269), (uint8_t)GPR_U32(ctx, 16));
label_4a7a94:
    // 0x4a7a94: 0xa230010e  sb          $s0, 0x10E($s1)
    ctx->pc = 0x4a7a94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 270), (uint8_t)GPR_U32(ctx, 16));
label_4a7a98:
    // 0x4a7a98: 0xa2300112  sb          $s0, 0x112($s1)
    ctx->pc = 0x4a7a98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 274), (uint8_t)GPR_U32(ctx, 16));
label_4a7a9c:
    // 0x4a7a9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a7a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4a7aa0:
    // 0x4a7aa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a7aa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a7aa4:
    // 0x4a7aa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a7aa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a7aa8:
    // 0x4a7aa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a7aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a7aac:
    // 0x4a7aac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a7aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a7ab0:
    // 0x4a7ab0: 0x3e00008  jr          $ra
label_4a7ab4:
    if (ctx->pc == 0x4A7AB4u) {
        ctx->pc = 0x4A7AB4u;
            // 0x4a7ab4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4A7AB8u;
        goto label_4a7ab8;
    }
    ctx->pc = 0x4A7AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A7AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7AB0u;
            // 0x4a7ab4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A7AB8u;
label_4a7ab8:
    // 0x4a7ab8: 0x0  nop
    ctx->pc = 0x4a7ab8u;
    // NOP
label_4a7abc:
    // 0x4a7abc: 0x0  nop
    ctx->pc = 0x4a7abcu;
    // NOP
label_4a7ac0:
    // 0x4a7ac0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4a7ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4a7ac4:
    // 0x4a7ac4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a7ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4a7ac8:
    // 0x4a7ac8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4a7ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4a7acc:
    // 0x4a7acc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4a7accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4a7ad0:
    // 0x4a7ad0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4a7ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4a7ad4:
    // 0x4a7ad4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a7ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4a7ad8:
    // 0x4a7ad8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a7ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a7adc:
    // 0x4a7adc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a7adcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a7ae0:
    // 0x4a7ae0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a7ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a7ae4:
    // 0x4a7ae4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a7ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a7ae8:
    // 0x4a7ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a7ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a7aec:
    // 0x4a7aec: 0x8c700e80  lw          $s0, 0xE80($v1)
    ctx->pc = 0x4a7aecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4a7af0:
    // 0x4a7af0: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4a7af0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4a7af4:
    // 0x4a7af4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4a7af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a7af8:
    // 0x4a7af8: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_4a7afc:
    if (ctx->pc == 0x4A7AFCu) {
        ctx->pc = 0x4A7B00u;
        goto label_4a7b00;
    }
    ctx->pc = 0x4A7AF8u;
    {
        const bool branch_taken_0x4a7af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a7af8) {
            ctx->pc = 0x4A7B60u;
            goto label_4a7b60;
        }
    }
    ctx->pc = 0x4A7B00u;
label_4a7b00:
    // 0x4a7b00: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4a7b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a7b04:
    // 0x4a7b04: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_4a7b08:
    if (ctx->pc == 0x4A7B08u) {
        ctx->pc = 0x4A7B08u;
            // 0x4a7b08: 0x82830088  lb          $v1, 0x88($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 136)));
        ctx->pc = 0x4A7B0Cu;
        goto label_4a7b0c;
    }
    ctx->pc = 0x4A7B04u;
    {
        const bool branch_taken_0x4a7b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a7b04) {
            ctx->pc = 0x4A7B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7B04u;
            // 0x4a7b08: 0x82830088  lb          $v1, 0x88($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A7B14u;
            goto label_4a7b14;
        }
    }
    ctx->pc = 0x4A7B0Cu;
label_4a7b0c:
    // 0x4a7b0c: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_4a7b10:
    if (ctx->pc == 0x4A7B10u) {
        ctx->pc = 0x4A7B10u;
            // 0x4a7b10: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x4A7B14u;
        goto label_4a7b14;
    }
    ctx->pc = 0x4A7B0Cu;
    {
        const bool branch_taken_0x4a7b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7B0Cu;
            // 0x4a7b10: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7b0c) {
            ctx->pc = 0x4A7ED4u;
            goto label_4a7ed4;
        }
    }
    ctx->pc = 0x4A7B14u;
label_4a7b14:
    // 0x4a7b14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a7b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4a7b18:
    // 0x4a7b18: 0xa2830088  sb          $v1, 0x88($s4)
    ctx->pc = 0x4a7b18u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 136), (uint8_t)GPR_U32(ctx, 3));
label_4a7b1c:
    // 0x4a7b1c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x4a7b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_4a7b20:
    // 0x4a7b20: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4a7b20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_4a7b24:
    // 0x4a7b24: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x4a7b24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_4a7b28:
    // 0x4a7b28: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_4a7b2c:
    if (ctx->pc == 0x4A7B2Cu) {
        ctx->pc = 0x4A7B30u;
        goto label_4a7b30;
    }
    ctx->pc = 0x4A7B28u;
    {
        const bool branch_taken_0x4a7b28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7b28) {
            ctx->pc = 0x4A7B38u;
            goto label_4a7b38;
        }
    }
    ctx->pc = 0x4A7B30u;
label_4a7b30:
    // 0x4a7b30: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4a7b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4a7b34:
    // 0x4a7b34: 0xa2830088  sb          $v1, 0x88($s4)
    ctx->pc = 0x4a7b34u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 136), (uint8_t)GPR_U32(ctx, 3));
label_4a7b38:
    // 0x4a7b38: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4a7b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4a7b3c:
    // 0x4a7b3c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4a7b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4a7b40:
    // 0x4a7b40: 0x9063007d  lbu         $v1, 0x7D($v1)
    ctx->pc = 0x4a7b40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 125)));
label_4a7b44:
    // 0x4a7b44: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4a7b48:
    if (ctx->pc == 0x4A7B48u) {
        ctx->pc = 0x4A7B4Cu;
        goto label_4a7b4c;
    }
    ctx->pc = 0x4A7B44u;
    {
        const bool branch_taken_0x4a7b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7b44) {
            ctx->pc = 0x4A7B60u;
            goto label_4a7b60;
        }
    }
    ctx->pc = 0x4A7B4Cu;
label_4a7b4c:
    // 0x4a7b4c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4a7b4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4a7b50:
    // 0x4a7b50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4a7b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a7b54:
    // 0x4a7b54: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4a7b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4a7b58:
    // 0x4a7b58: 0x320f809  jalr        $t9
label_4a7b5c:
    if (ctx->pc == 0x4A7B5Cu) {
        ctx->pc = 0x4A7B5Cu;
            // 0x4a7b5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4A7B60u;
        goto label_4a7b60;
    }
    ctx->pc = 0x4A7B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A7B60u);
        ctx->pc = 0x4A7B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7B58u;
            // 0x4a7b5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A7B60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A7B60u; }
            if (ctx->pc != 0x4A7B60u) { return; }
        }
        }
    }
    ctx->pc = 0x4A7B60u;
label_4a7b60:
    // 0x4a7b60: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4a7b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4a7b64:
    // 0x4a7b64: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4a7b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4a7b68:
    // 0x4a7b68: 0x9063007d  lbu         $v1, 0x7D($v1)
    ctx->pc = 0x4a7b68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 125)));
label_4a7b6c:
    // 0x4a7b6c: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
label_4a7b70:
    if (ctx->pc == 0x4A7B70u) {
        ctx->pc = 0x4A7B70u;
            // 0x4a7b70: 0x92030010  lbu         $v1, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x4A7B74u;
        goto label_4a7b74;
    }
    ctx->pc = 0x4A7B6Cu;
    {
        const bool branch_taken_0x4a7b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7b6c) {
            ctx->pc = 0x4A7B70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7B6Cu;
            // 0x4a7b70: 0x92030010  lbu         $v1, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A7B9Cu;
            goto label_4a7b9c;
        }
    }
    ctx->pc = 0x4A7B74u;
label_4a7b74:
    // 0x4a7b74: 0x92840010  lbu         $a0, 0x10($s4)
    ctx->pc = 0x4a7b74u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
label_4a7b78:
    // 0x4a7b78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4a7b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a7b7c:
    // 0x4a7b7c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_4a7b80:
    if (ctx->pc == 0x4A7B80u) {
        ctx->pc = 0x4A7B84u;
        goto label_4a7b84;
    }
    ctx->pc = 0x4A7B7Cu;
    {
        const bool branch_taken_0x4a7b7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a7b7c) {
            ctx->pc = 0x4A7B98u;
            goto label_4a7b98;
        }
    }
    ctx->pc = 0x4A7B84u;
label_4a7b84:
    // 0x4a7b84: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4a7b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4a7b88:
    // 0x4a7b88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4a7b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a7b8c:
    // 0x4a7b8c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4a7b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4a7b90:
    // 0x4a7b90: 0x320f809  jalr        $t9
label_4a7b94:
    if (ctx->pc == 0x4A7B94u) {
        ctx->pc = 0x4A7B94u;
            // 0x4a7b94: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4A7B98u;
        goto label_4a7b98;
    }
    ctx->pc = 0x4A7B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A7B98u);
        ctx->pc = 0x4A7B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7B90u;
            // 0x4a7b94: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A7B98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A7B98u; }
            if (ctx->pc != 0x4A7B98u) { return; }
        }
        }
    }
    ctx->pc = 0x4A7B98u;
label_4a7b98:
    // 0x4a7b98: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x4a7b98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_4a7b9c:
    // 0x4a7b9c: 0x2c610014  sltiu       $at, $v1, 0x14
    ctx->pc = 0x4a7b9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_4a7ba0:
    // 0x4a7ba0: 0x102000cb  beqz        $at, . + 4 + (0xCB << 2)
label_4a7ba4:
    if (ctx->pc == 0x4A7BA4u) {
        ctx->pc = 0x4A7BA8u;
        goto label_4a7ba8;
    }
    ctx->pc = 0x4A7BA0u;
    {
        const bool branch_taken_0x4a7ba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7ba0) {
            ctx->pc = 0x4A7ED0u;
            goto label_4a7ed0;
        }
    }
    ctx->pc = 0x4A7BA8u;
label_4a7ba8:
    // 0x4a7ba8: 0x82830088  lb          $v1, 0x88($s4)
    ctx->pc = 0x4a7ba8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 136)));
label_4a7bac:
    // 0x4a7bac: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x4a7bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_4a7bb0:
    // 0x4a7bb0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4a7bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a7bb4:
    // 0x4a7bb4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_4a7bb8:
    if (ctx->pc == 0x4A7BB8u) {
        ctx->pc = 0x4A7BB8u;
            // 0x4a7bb8: 0x220c3  sra         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
        ctx->pc = 0x4A7BBCu;
        goto label_4a7bbc;
    }
    ctx->pc = 0x4A7BB4u;
    {
        const bool branch_taken_0x4a7bb4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A7BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7BB4u;
            // 0x4a7bb8: 0x220c3  sra         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7bb4) {
            ctx->pc = 0x4A7BC4u;
            goto label_4a7bc4;
        }
    }
    ctx->pc = 0x4A7BBCu;
label_4a7bbc:
    // 0x4a7bbc: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x4a7bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_4a7bc0:
    // 0x4a7bc0: 0x220c3  sra         $a0, $v0, 3
    ctx->pc = 0x4a7bc0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
label_4a7bc4:
    // 0x4a7bc4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x4a7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4a7bc8:
    // 0x4a7bc8: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x4a7bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_4a7bcc:
    // 0x4a7bcc: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x4a7bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4a7bd0:
    // 0x4a7bd0: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x4a7bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_4a7bd4:
    // 0x4a7bd4: 0xa2840089  sb          $a0, 0x89($s4)
    ctx->pc = 0x4a7bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 137), (uint8_t)GPR_U32(ctx, 4));
label_4a7bd8:
    // 0x4a7bd8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4a7bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4a7bdc:
    // 0x4a7bdc: 0x84563fa2  lh          $s6, 0x3FA2($v0)
    ctx->pc = 0x4a7bdcu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16290)));
label_4a7be0:
    // 0x4a7be0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4a7be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4a7be4:
    // 0x4a7be4: 0x84723fa0  lh          $s2, 0x3FA0($v1)
    ctx->pc = 0x4a7be4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16288)));
label_4a7be8:
    // 0x4a7be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a7be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7bec:
    // 0x4a7bec: 0x92950089  lbu         $s5, 0x89($s4)
    ctx->pc = 0x4a7becu;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 137)));
label_4a7bf0:
    // 0x4a7bf0: 0x2631a580  addiu       $s1, $s1, -0x5A80
    ctx->pc = 0x4a7bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944128));
label_4a7bf4:
    // 0x4a7bf4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a7bf8:
    // 0x4a7bf8: 0x8c5389e0  lw          $s3, -0x7620($v0)
    ctx->pc = 0x4a7bf8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4a7bfc:
    // 0x4a7bfc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a7bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a7c00:
    // 0x4a7c00: 0x8c447c30  lw          $a0, 0x7C30($v0)
    ctx->pc = 0x4a7c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31792)));
label_4a7c04:
    // 0x4a7c04: 0xc0506ac  jal         func_141AB0
label_4a7c08:
    if (ctx->pc == 0x4A7C08u) {
        ctx->pc = 0x4A7C08u;
            // 0x4a7c08: 0x26102104  addiu       $s0, $s0, 0x2104 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8452));
        ctx->pc = 0x4A7C0Cu;
        goto label_4a7c0c;
    }
    ctx->pc = 0x4A7C04u;
    SET_GPR_U32(ctx, 31, 0x4A7C0Cu);
    ctx->pc = 0x4A7C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7C04u;
            // 0x4a7c08: 0x26102104  addiu       $s0, $s0, 0x2104 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8452));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7C0Cu; }
        if (ctx->pc != 0x4A7C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7C0Cu; }
        if (ctx->pc != 0x4A7C0Cu) { return; }
    }
    ctx->pc = 0x4A7C0Cu;
label_4a7c0c:
    // 0x4a7c0c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4a7c0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a7c10:
    // 0x4a7c10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a7c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a7c14:
    // 0x4a7c14: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a7c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a7c18:
    // 0x4a7c18: 0x320f809  jalr        $t9
label_4a7c1c:
    if (ctx->pc == 0x4A7C1Cu) {
        ctx->pc = 0x4A7C1Cu;
            // 0x4a7c1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A7C20u;
        goto label_4a7c20;
    }
    ctx->pc = 0x4A7C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A7C20u);
        ctx->pc = 0x4A7C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7C18u;
            // 0x4a7c1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A7C20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A7C20u; }
            if (ctx->pc != 0x4A7C20u) { return; }
        }
        }
    }
    ctx->pc = 0x4A7C20u;
label_4a7c20:
    // 0x4a7c20: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x4a7c20u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7c24:
    // 0x4a7c24: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4a7c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4a7c28:
    // 0x4a7c28: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a7c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a7c2c:
    // 0x4a7c2c: 0x868a005c  lh          $t2, 0x5C($s4)
    ctx->pc = 0x4a7c2cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 92)));
label_4a7c30:
    // 0x4a7c30: 0x8e840068  lw          $a0, 0x68($s4)
    ctx->pc = 0x4a7c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
label_4a7c34:
    // 0x4a7c34: 0x32b500ff  andi        $s5, $s5, 0xFF
    ctx->pc = 0x4a7c34u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_4a7c38:
    // 0x4a7c38: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4a7c3c:
    // 0x4a7c3c: 0x8689005e  lh          $t1, 0x5E($s4)
    ctx->pc = 0x4a7c3cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 94)));
label_4a7c40:
    // 0x4a7c40: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x4a7c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_4a7c44:
    // 0x4a7c44: 0x2a23025  or          $a2, $s5, $v0
    ctx->pc = 0x4a7c44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
label_4a7c48:
    // 0x4a7c48: 0x1444021  addu        $t0, $t2, $a0
    ctx->pc = 0x4a7c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_4a7c4c:
    // 0x4a7c4c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a7c50:
    // 0x4a7c50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a7c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a7c54:
    // 0x4a7c54: 0x24a5aeb0  addiu       $a1, $a1, -0x5150
    ctx->pc = 0x4a7c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946480));
label_4a7c58:
    // 0x4a7c58: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x4a7c58u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7c5c:
    // 0x4a7c5c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x4a7c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_4a7c60:
    // 0x4a7c60: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4a7c60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4a7c64:
    // 0x4a7c64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a7c64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7c68:
    // 0x4a7c68: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4a7c68u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7c6c:
    // 0x4a7c6c: 0x0  nop
    ctx->pc = 0x4a7c6cu;
    // NOP
label_4a7c70:
    // 0x4a7c70: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x4a7c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_4a7c74:
    // 0x4a7c74: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a7c74u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7c78:
    // 0x4a7c78: 0x0  nop
    ctx->pc = 0x4a7c78u;
    // NOP
label_4a7c7c:
    // 0x4a7c7c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x4a7c7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_4a7c80:
    // 0x4a7c80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a7c80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7c84:
    // 0x4a7c84: 0x0  nop
    ctx->pc = 0x4a7c84u;
    // NOP
label_4a7c88:
    // 0x4a7c88: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4a7c88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4a7c8c:
    // 0x4a7c8c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4a7c8cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7c90:
    // 0x4a7c90: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a7c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a7c94:
    // 0x4a7c94: 0xc0bc284  jal         func_2F0A10
label_4a7c98:
    if (ctx->pc == 0x4A7C98u) {
        ctx->pc = 0x4A7C98u;
            // 0x4a7c98: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4A7C9Cu;
        goto label_4a7c9c;
    }
    ctx->pc = 0x4A7C94u;
    SET_GPR_U32(ctx, 31, 0x4A7C9Cu);
    ctx->pc = 0x4A7C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7C94u;
            // 0x4a7c98: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7C9Cu; }
        if (ctx->pc != 0x4A7C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7C9Cu; }
        if (ctx->pc != 0x4A7C9Cu) { return; }
    }
    ctx->pc = 0x4A7C9Cu;
label_4a7c9c:
    // 0x4a7c9c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4a7c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a7ca0:
    // 0x4a7ca0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a7ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a7ca4:
    // 0x4a7ca4: 0x320f809  jalr        $t9
label_4a7ca8:
    if (ctx->pc == 0x4A7CA8u) {
        ctx->pc = 0x4A7CA8u;
            // 0x4a7ca8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A7CACu;
        goto label_4a7cac;
    }
    ctx->pc = 0x4A7CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A7CACu);
        ctx->pc = 0x4A7CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7CA4u;
            // 0x4a7ca8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A7CACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A7CACu; }
            if (ctx->pc != 0x4A7CACu) { return; }
        }
        }
    }
    ctx->pc = 0x4A7CACu;
label_4a7cac:
    // 0x4a7cac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a7cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a7cb0:
    // 0x4a7cb0: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4a7cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4a7cb4:
    // 0x4a7cb4: 0xc0506ac  jal         func_141AB0
label_4a7cb8:
    if (ctx->pc == 0x4A7CB8u) {
        ctx->pc = 0x4A7CB8u;
            // 0x4a7cb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A7CBCu;
        goto label_4a7cbc;
    }
    ctx->pc = 0x4A7CB4u;
    SET_GPR_U32(ctx, 31, 0x4A7CBCu);
    ctx->pc = 0x4A7CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7CB4u;
            // 0x4a7cb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7CBCu; }
        if (ctx->pc != 0x4A7CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7CBCu; }
        if (ctx->pc != 0x4A7CBCu) { return; }
    }
    ctx->pc = 0x4A7CBCu;
label_4a7cbc:
    // 0x4a7cbc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4a7cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a7cc0:
    // 0x4a7cc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a7cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a7cc4:
    // 0x4a7cc4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a7cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a7cc8:
    // 0x4a7cc8: 0x320f809  jalr        $t9
label_4a7ccc:
    if (ctx->pc == 0x4A7CCCu) {
        ctx->pc = 0x4A7CCCu;
            // 0x4a7ccc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A7CD0u;
        goto label_4a7cd0;
    }
    ctx->pc = 0x4A7CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A7CD0u);
        ctx->pc = 0x4A7CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7CC8u;
            // 0x4a7ccc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A7CD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A7CD0u; }
            if (ctx->pc != 0x4A7CD0u) { return; }
        }
        }
    }
    ctx->pc = 0x4A7CD0u;
label_4a7cd0:
    // 0x4a7cd0: 0x8283008a  lb          $v1, 0x8A($s4)
    ctx->pc = 0x4a7cd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 138)));
label_4a7cd4:
    // 0x4a7cd4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x4a7cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4a7cd8:
    // 0x4a7cd8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_4a7cdc:
    if (ctx->pc == 0x4A7CDCu) {
        ctx->pc = 0x4A7CDCu;
            // 0x4a7cdc: 0x31e3c  dsll32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
        ctx->pc = 0x4A7CE0u;
        goto label_4a7ce0;
    }
    ctx->pc = 0x4A7CD8u;
    {
        const bool branch_taken_0x4a7cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a7cd8) {
            ctx->pc = 0x4A7CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7CD8u;
            // 0x4a7cdc: 0x31e3c  dsll32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A7CE8u;
            goto label_4a7ce8;
        }
    }
    ctx->pc = 0x4A7CE0u;
label_4a7ce0:
    // 0x4a7ce0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a7ce0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7ce4:
    // 0x4a7ce4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x4a7ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_4a7ce8:
    // 0x4a7ce8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4a7ce8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_4a7cec:
    // 0x4a7cec: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x4a7cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4a7cf0:
    // 0x4a7cf0: 0x4600036  bltz        $v1, . + 4 + (0x36 << 2)
label_4a7cf4:
    if (ctx->pc == 0x4A7CF4u) {
        ctx->pc = 0x4A7CF4u;
            // 0x4a7cf4: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x4A7CF8u;
        goto label_4a7cf8;
    }
    ctx->pc = 0x4A7CF0u;
    {
        const bool branch_taken_0x4a7cf0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4A7CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7CF0u;
            // 0x4a7cf4: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7cf0) {
            ctx->pc = 0x4A7DCCu;
            goto label_4a7dcc;
        }
    }
    ctx->pc = 0x4A7CF8u;
label_4a7cf8:
    // 0x4a7cf8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x4a7cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_4a7cfc:
    // 0x4a7cfc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4a7cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_4a7d00:
    // 0x4a7d00: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x4a7d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
label_4a7d04:
    // 0x4a7d04: 0x928c008c  lbu         $t4, 0x8C($s4)
    ctx->pc = 0x4a7d04u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
label_4a7d08:
    // 0x4a7d08: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x4a7d08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4a7d0c:
    // 0x4a7d0c: 0x155fc2  srl         $t3, $s5, 31
    ctx->pc = 0x4a7d0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
label_4a7d10:
    // 0x4a7d10: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4a7d10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4a7d14:
    // 0x4a7d14: 0x868a0060  lh          $t2, 0x60($s4)
    ctx->pc = 0x4a7d14u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 96)));
label_4a7d18:
    // 0x4a7d18: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4a7d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a7d1c:
    // 0x4a7d1c: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4a7d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4a7d20:
    // 0x4a7d20: 0xc6830084  lwc1        $f3, 0x84($s4)
    ctx->pc = 0x4a7d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4a7d24:
    // 0x4a7d24: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x4a7d24u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4a7d28:
    // 0x4a7d28: 0x86890062  lh          $t1, 0x62($s4)
    ctx->pc = 0x4a7d28u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 98)));
label_4a7d2c:
    // 0x4a7d2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a7d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a7d30:
    // 0x4a7d30: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a7d30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a7d34:
    // 0x4a7d34: 0x3010  mfhi        $a2
    ctx->pc = 0x4a7d34u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_4a7d38:
    // 0x4a7d38: 0xd53021  addu        $a2, $a2, $s5
    ctx->pc = 0x4a7d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_4a7d3c:
    // 0x4a7d3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a7d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7d40:
    // 0x4a7d40: 0x631c3  sra         $a2, $a2, 7
    ctx->pc = 0x4a7d40u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 7));
label_4a7d44:
    // 0x4a7d44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a7d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7d48:
    // 0x4a7d48: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x4a7d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_4a7d4c:
    // 0x4a7d4c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a7d4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a7d50:
    // 0x4a7d50: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a7d54:
    // 0x4a7d54: 0x1863018  mult        $a2, $t4, $a2
    ctx->pc = 0x4a7d54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_4a7d58:
    // 0x4a7d58: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x4a7d58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_4a7d5c:
    // 0x4a7d5c: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x4a7d5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4a7d60:
    // 0x4a7d60: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x4a7d60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_4a7d64:
    // 0x4a7d64: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4a7d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_4a7d68:
    // 0x4a7d68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a7d68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a7d6c:
    // 0x4a7d6c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4a7d6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4a7d70:
    // 0x4a7d70: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x4a7d70u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7d74:
    // 0x4a7d74: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x4a7d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_4a7d78:
    // 0x4a7d78: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4a7d78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4a7d7c:
    // 0x4a7d7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a7d7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7d80:
    // 0x4a7d80: 0x0  nop
    ctx->pc = 0x4a7d80u;
    // NOP
label_4a7d84:
    // 0x4a7d84: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x4a7d84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_4a7d88:
    // 0x4a7d88: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a7d88u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7d8c:
    // 0x4a7d8c: 0x0  nop
    ctx->pc = 0x4a7d8cu;
    // NOP
label_4a7d90:
    // 0x4a7d90: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a7d90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a7d94:
    // 0x4a7d94: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4a7d94u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7d98:
    // 0x4a7d98: 0x0  nop
    ctx->pc = 0x4a7d98u;
    // NOP
label_4a7d9c:
    // 0x4a7d9c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x4a7d9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_4a7da0:
    // 0x4a7da0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x4a7da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a7da4:
    // 0x4a7da4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a7da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a7da8:
    // 0x4a7da8: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x4a7da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4a7dac:
    // 0x4a7dac: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4a7dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_4a7db0:
    // 0x4a7db0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a7db0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a7db4:
    // 0x4a7db4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4a7db4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_4a7db8:
    // 0x4a7db8: 0x0  nop
    ctx->pc = 0x4a7db8u;
    // NOP
label_4a7dbc:
    // 0x4a7dbc: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x4a7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_4a7dc0:
    // 0x4a7dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a7dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7dc4:
    // 0x4a7dc4: 0xc0bc284  jal         func_2F0A10
label_4a7dc8:
    if (ctx->pc == 0x4A7DC8u) {
        ctx->pc = 0x4A7DC8u;
            // 0x4a7dc8: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4A7DCCu;
        goto label_4a7dcc;
    }
    ctx->pc = 0x4A7DC4u;
    SET_GPR_U32(ctx, 31, 0x4A7DCCu);
    ctx->pc = 0x4A7DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7DC4u;
            // 0x4a7dc8: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7DCCu; }
        if (ctx->pc != 0x4A7DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7DCCu; }
        if (ctx->pc != 0x4A7DCCu) { return; }
    }
    ctx->pc = 0x4A7DCCu;
label_4a7dcc:
    // 0x4a7dcc: 0x9282008e  lbu         $v0, 0x8E($s4)
    ctx->pc = 0x4a7dccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 142)));
label_4a7dd0:
    // 0x4a7dd0: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
label_4a7dd4:
    if (ctx->pc == 0x4A7DD4u) {
        ctx->pc = 0x4A7DD4u;
            // 0x4a7dd4: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4A7DD8u;
        goto label_4a7dd8;
    }
    ctx->pc = 0x4A7DD0u;
    {
        const bool branch_taken_0x4a7dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7dd0) {
            ctx->pc = 0x4A7DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7DD0u;
            // 0x4a7dd4: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A7EC4u;
            goto label_4a7ec4;
        }
    }
    ctx->pc = 0x4A7DD8u;
label_4a7dd8:
    // 0x4a7dd8: 0x8282008b  lb          $v0, 0x8B($s4)
    ctx->pc = 0x4a7dd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 139)));
label_4a7ddc:
    // 0x4a7ddc: 0x4400038  bltz        $v0, . + 4 + (0x38 << 2)
label_4a7de0:
    if (ctx->pc == 0x4A7DE0u) {
        ctx->pc = 0x4A7DE4u;
        goto label_4a7de4;
    }
    ctx->pc = 0x4A7DDCu;
    {
        const bool branch_taken_0x4a7ddc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4a7ddc) {
            ctx->pc = 0x4A7EC0u;
            goto label_4a7ec0;
        }
    }
    ctx->pc = 0x4A7DE4u;
label_4a7de4:
    // 0x4a7de4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4a7de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4a7de8:
    // 0x4a7de8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4a7de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_4a7dec:
    // 0x4a7dec: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x4a7decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4a7df0:
    // 0x4a7df0: 0x928c008d  lbu         $t4, 0x8D($s4)
    ctx->pc = 0x4a7df0u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 141)));
label_4a7df4:
    // 0x4a7df4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x4a7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_4a7df8:
    // 0x4a7df8: 0x155fc2  srl         $t3, $s5, 31
    ctx->pc = 0x4a7df8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
label_4a7dfc:
    // 0x4a7dfc: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x4a7dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
label_4a7e00:
    // 0x4a7e00: 0x868a0064  lh          $t2, 0x64($s4)
    ctx->pc = 0x4a7e00u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 100)));
label_4a7e04:
    // 0x4a7e04: 0x550018  mult        $zero, $v0, $s5
    ctx->pc = 0x4a7e04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4a7e08:
    // 0x4a7e08: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x4a7e08u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4a7e0c:
    // 0x4a7e0c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4a7e0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4a7e10:
    // 0x4a7e10: 0x86890066  lh          $t1, 0x66($s4)
    ctx->pc = 0x4a7e10u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 102)));
label_4a7e14:
    // 0x4a7e14: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4a7e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a7e18:
    // 0x4a7e18: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4a7e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4a7e1c:
    // 0x4a7e1c: 0xc6830084  lwc1        $f3, 0x84($s4)
    ctx->pc = 0x4a7e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4a7e20:
    // 0x4a7e20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a7e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a7e24:
    // 0x4a7e24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a7e24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7e28:
    // 0x4a7e28: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a7e28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a7e2c:
    // 0x4a7e2c: 0x3010  mfhi        $a2
    ctx->pc = 0x4a7e2cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_4a7e30:
    // 0x4a7e30: 0xd53021  addu        $a2, $a2, $s5
    ctx->pc = 0x4a7e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_4a7e34:
    // 0x4a7e34: 0x631c3  sra         $a2, $a2, 7
    ctx->pc = 0x4a7e34u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 7));
label_4a7e38:
    // 0x4a7e38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a7e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7e3c:
    // 0x4a7e3c: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x4a7e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_4a7e40:
    // 0x4a7e40: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a7e40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a7e44:
    // 0x4a7e44: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a7e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a7e48:
    // 0x4a7e48: 0x1863018  mult        $a2, $t4, $a2
    ctx->pc = 0x4a7e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_4a7e4c:
    // 0x4a7e4c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x4a7e4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_4a7e50:
    // 0x4a7e50: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x4a7e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4a7e54:
    // 0x4a7e54: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x4a7e54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_4a7e58:
    // 0x4a7e58: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4a7e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_4a7e5c:
    // 0x4a7e5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a7e5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a7e60:
    // 0x4a7e60: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4a7e60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4a7e64:
    // 0x4a7e64: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x4a7e64u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7e68:
    // 0x4a7e68: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x4a7e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_4a7e6c:
    // 0x4a7e6c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4a7e6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4a7e70:
    // 0x4a7e70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a7e70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7e74:
    // 0x4a7e74: 0x0  nop
    ctx->pc = 0x4a7e74u;
    // NOP
label_4a7e78:
    // 0x4a7e78: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x4a7e78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_4a7e7c:
    // 0x4a7e7c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a7e7cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7e80:
    // 0x4a7e80: 0x0  nop
    ctx->pc = 0x4a7e80u;
    // NOP
label_4a7e84:
    // 0x4a7e84: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a7e84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a7e88:
    // 0x4a7e88: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4a7e88u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7e8c:
    // 0x4a7e8c: 0x0  nop
    ctx->pc = 0x4a7e8cu;
    // NOP
label_4a7e90:
    // 0x4a7e90: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x4a7e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_4a7e94:
    // 0x4a7e94: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x4a7e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a7e98:
    // 0x4a7e98: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a7e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a7e9c:
    // 0x4a7e9c: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x4a7e9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4a7ea0:
    // 0x4a7ea0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4a7ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_4a7ea4:
    // 0x4a7ea4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a7ea4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a7ea8:
    // 0x4a7ea8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4a7ea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_4a7eac:
    // 0x4a7eac: 0x0  nop
    ctx->pc = 0x4a7eacu;
    // NOP
label_4a7eb0:
    // 0x4a7eb0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x4a7eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_4a7eb4:
    // 0x4a7eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a7eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7eb8:
    // 0x4a7eb8: 0xc0bc284  jal         func_2F0A10
label_4a7ebc:
    if (ctx->pc == 0x4A7EBCu) {
        ctx->pc = 0x4A7EBCu;
            // 0x4a7ebc: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4A7EC0u;
        goto label_4a7ec0;
    }
    ctx->pc = 0x4A7EB8u;
    SET_GPR_U32(ctx, 31, 0x4A7EC0u);
    ctx->pc = 0x4A7EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7EB8u;
            // 0x4a7ebc: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7EC0u; }
        if (ctx->pc != 0x4A7EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7EC0u; }
        if (ctx->pc != 0x4A7EC0u) { return; }
    }
    ctx->pc = 0x4A7EC0u;
label_4a7ec0:
    // 0x4a7ec0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4a7ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a7ec4:
    // 0x4a7ec4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a7ec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a7ec8:
    // 0x4a7ec8: 0x320f809  jalr        $t9
label_4a7ecc:
    if (ctx->pc == 0x4A7ECCu) {
        ctx->pc = 0x4A7ECCu;
            // 0x4a7ecc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A7ED0u;
        goto label_4a7ed0;
    }
    ctx->pc = 0x4A7EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A7ED0u);
        ctx->pc = 0x4A7ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7EC8u;
            // 0x4a7ecc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A7ED0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A7ED0u; }
            if (ctx->pc != 0x4A7ED0u) { return; }
        }
        }
    }
    ctx->pc = 0x4A7ED0u;
label_4a7ed0:
    // 0x4a7ed0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4a7ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4a7ed4:
    // 0x4a7ed4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4a7ed4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a7ed8:
    // 0x4a7ed8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4a7ed8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a7edc:
    // 0x4a7edc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a7edcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a7ee0:
    // 0x4a7ee0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a7ee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a7ee4:
    // 0x4a7ee4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a7ee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a7ee8:
    // 0x4a7ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a7ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a7eec:
    // 0x4a7eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a7eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a7ef0:
    // 0x4a7ef0: 0x3e00008  jr          $ra
label_4a7ef4:
    if (ctx->pc == 0x4A7EF4u) {
        ctx->pc = 0x4A7EF4u;
            // 0x4a7ef4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4A7EF8u;
        goto label_4a7ef8;
    }
    ctx->pc = 0x4A7EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A7EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7EF0u;
            // 0x4a7ef4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A7EF8u;
label_4a7ef8:
    // 0x4a7ef8: 0x0  nop
    ctx->pc = 0x4a7ef8u;
    // NOP
label_4a7efc:
    // 0x4a7efc: 0x0  nop
    ctx->pc = 0x4a7efcu;
    // NOP
label_4a7f00:
    // 0x4a7f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a7f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a7f04:
    // 0x4a7f04: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a7f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4a7f08:
    // 0x4a7f08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a7f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4a7f0c:
    // 0x4a7f0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a7f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a7f10:
    // 0x4a7f10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a7f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a7f14:
    // 0x4a7f14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a7f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a7f18:
    // 0x4a7f18: 0x90880010  lbu         $t0, 0x10($a0)
    ctx->pc = 0x4a7f18u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4a7f1c:
    // 0x4a7f1c: 0x8c700e80  lw          $s0, 0xE80($v1)
    ctx->pc = 0x4a7f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4a7f20:
    // 0x4a7f20: 0x1107006d  beq         $t0, $a3, . + 4 + (0x6D << 2)
label_4a7f24:
    if (ctx->pc == 0x4A7F24u) {
        ctx->pc = 0x4A7F24u;
            // 0x4a7f24: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A7F28u;
        goto label_4a7f28;
    }
    ctx->pc = 0x4A7F20u;
    {
        const bool branch_taken_0x4a7f20 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x4A7F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7F20u;
            // 0x4a7f24: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7f20) {
            ctx->pc = 0x4A80D8u;
            goto label_4a80d8;
        }
    }
    ctx->pc = 0x4A7F28u;
label_4a7f28:
    // 0x4a7f28: 0x51000066  beql        $t0, $zero, . + 4 + (0x66 << 2)
label_4a7f2c:
    if (ctx->pc == 0x4A7F2Cu) {
        ctx->pc = 0x4A7F2Cu;
            // 0x4a7f2c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4A7F30u;
        goto label_4a7f30;
    }
    ctx->pc = 0x4A7F28u;
    {
        const bool branch_taken_0x4a7f28 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7f28) {
            ctx->pc = 0x4A7F2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7F28u;
            // 0x4a7f2c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A80C4u;
            goto label_4a80c4;
        }
    }
    ctx->pc = 0x4A7F30u;
label_4a7f30:
    // 0x4a7f30: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4a7f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a7f34:
    // 0x4a7f34: 0x5106004b  beql        $t0, $a2, . + 4 + (0x4B << 2)
label_4a7f38:
    if (ctx->pc == 0x4A7F38u) {
        ctx->pc = 0x4A7F38u;
            // 0x4a7f38: 0x82230088  lb          $v1, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4A7F3Cu;
        goto label_4a7f3c;
    }
    ctx->pc = 0x4A7F34u;
    {
        const bool branch_taken_0x4a7f34 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x4a7f34) {
            ctx->pc = 0x4A7F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7F34u;
            // 0x4a7f38: 0x82230088  lb          $v1, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8064u;
            goto label_4a8064;
        }
    }
    ctx->pc = 0x4A7F3Cu;
label_4a7f3c:
    // 0x4a7f3c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4a7f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a7f40:
    // 0x4a7f40: 0x5105000b  beql        $t0, $a1, . + 4 + (0xB << 2)
label_4a7f44:
    if (ctx->pc == 0x4A7F44u) {
        ctx->pc = 0x4A7F44u;
            // 0x4a7f44: 0x92030010  lbu         $v1, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x4A7F48u;
        goto label_4a7f48;
    }
    ctx->pc = 0x4A7F40u;
    {
        const bool branch_taken_0x4a7f40 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x4a7f40) {
            ctx->pc = 0x4A7F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7F40u;
            // 0x4a7f44: 0x92030010  lbu         $v1, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A7F70u;
            goto label_4a7f70;
        }
    }
    ctx->pc = 0x4A7F48u;
label_4a7f48:
    // 0x4a7f48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a7f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a7f4c:
    // 0x4a7f4c: 0x51030003  beql        $t0, $v1, . + 4 + (0x3 << 2)
label_4a7f50:
    if (ctx->pc == 0x4A7F50u) {
        ctx->pc = 0x4A7F50u;
            // 0x4a7f50: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4A7F54u;
        goto label_4a7f54;
    }
    ctx->pc = 0x4A7F4Cu;
    {
        const bool branch_taken_0x4a7f4c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a7f4c) {
            ctx->pc = 0x4A7F50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7F4Cu;
            // 0x4a7f50: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A7F5Cu;
            goto label_4a7f5c;
        }
    }
    ctx->pc = 0x4A7F54u;
label_4a7f54:
    // 0x4a7f54: 0x10000066  b           . + 4 + (0x66 << 2)
label_4a7f58:
    if (ctx->pc == 0x4A7F58u) {
        ctx->pc = 0x4A7F58u;
            // 0x4a7f58: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4A7F5Cu;
        goto label_4a7f5c;
    }
    ctx->pc = 0x4A7F54u;
    {
        const bool branch_taken_0x4a7f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7F54u;
            // 0x4a7f58: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7f54) {
            ctx->pc = 0x4A80F0u;
            goto label_4a80f0;
        }
    }
    ctx->pc = 0x4A7F5Cu;
label_4a7f5c:
    // 0x4a7f5c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4a7f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4a7f60:
    // 0x4a7f60: 0x320f809  jalr        $t9
label_4a7f64:
    if (ctx->pc == 0x4A7F64u) {
        ctx->pc = 0x4A7F68u;
        goto label_4a7f68;
    }
    ctx->pc = 0x4A7F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A7F68u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A7F68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A7F68u; }
            if (ctx->pc != 0x4A7F68u) { return; }
        }
        }
    }
    ctx->pc = 0x4A7F68u;
label_4a7f68:
    // 0x4a7f68: 0x10000060  b           . + 4 + (0x60 << 2)
label_4a7f6c:
    if (ctx->pc == 0x4A7F6Cu) {
        ctx->pc = 0x4A7F70u;
        goto label_4a7f70;
    }
    ctx->pc = 0x4A7F68u;
    {
        const bool branch_taken_0x4a7f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7f68) {
            ctx->pc = 0x4A80ECu;
            goto label_4a80ec;
        }
    }
    ctx->pc = 0x4A7F70u;
label_4a7f70:
    // 0x4a7f70: 0x2c630012  sltiu       $v1, $v1, 0x12
    ctx->pc = 0x4a7f70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_4a7f74:
    // 0x4a7f74: 0x1460005d  bnez        $v1, . + 4 + (0x5D << 2)
label_4a7f78:
    if (ctx->pc == 0x4A7F78u) {
        ctx->pc = 0x4A7F7Cu;
        goto label_4a7f7c;
    }
    ctx->pc = 0x4A7F74u;
    {
        const bool branch_taken_0x4a7f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7f74) {
            ctx->pc = 0x4A80ECu;
            goto label_4a80ec;
        }
    }
    ctx->pc = 0x4A7F7Cu;
label_4a7f7c:
    // 0x4a7f7c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a7f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a7f80:
    // 0x4a7f80: 0x8c420eac  lw          $v0, 0xEAC($v0)
    ctx->pc = 0x4a7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_4a7f84:
    // 0x4a7f84: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x4a7f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_4a7f88:
    // 0x4a7f88: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x4a7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_4a7f8c:
    // 0x4a7f8c: 0x5066000f  beql        $v1, $a2, . + 4 + (0xF << 2)
label_4a7f90:
    if (ctx->pc == 0x4A7F90u) {
        ctx->pc = 0x4A7F90u;
            // 0x4a7f90: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x4A7F94u;
        goto label_4a7f94;
    }
    ctx->pc = 0x4A7F8Cu;
    {
        const bool branch_taken_0x4a7f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x4a7f8c) {
            ctx->pc = 0x4A7F90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7F8Cu;
            // 0x4a7f90: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A7FCCu;
            goto label_4a7fcc;
        }
    }
    ctx->pc = 0x4A7F94u;
label_4a7f94:
    // 0x4a7f94: 0x1065000c  beq         $v1, $a1, . + 4 + (0xC << 2)
label_4a7f98:
    if (ctx->pc == 0x4A7F98u) {
        ctx->pc = 0x4A7F9Cu;
        goto label_4a7f9c;
    }
    ctx->pc = 0x4A7F94u;
    {
        const bool branch_taken_0x4a7f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x4a7f94) {
            ctx->pc = 0x4A7FC8u;
            goto label_4a7fc8;
        }
    }
    ctx->pc = 0x4A7F9Cu;
label_4a7f9c:
    // 0x4a7f9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a7f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a7fa0:
    // 0x4a7fa0: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_4a7fa4:
    if (ctx->pc == 0x4A7FA4u) {
        ctx->pc = 0x4A7FA4u;
            // 0x4a7fa4: 0x3c023f40  lui         $v0, 0x3F40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
        ctx->pc = 0x4A7FA8u;
        goto label_4a7fa8;
    }
    ctx->pc = 0x4A7FA0u;
    {
        const bool branch_taken_0x4a7fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a7fa0) {
            ctx->pc = 0x4A7FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7FA0u;
            // 0x4a7fa4: 0x3c023f40  lui         $v0, 0x3F40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A7FC0u;
            goto label_4a7fc0;
        }
    }
    ctx->pc = 0x4A7FA8u;
label_4a7fa8:
    // 0x4a7fa8: 0x50670003  beql        $v1, $a3, . + 4 + (0x3 << 2)
label_4a7fac:
    if (ctx->pc == 0x4A7FACu) {
        ctx->pc = 0x4A7FACu;
            // 0x4a7fac: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x4A7FB0u;
        goto label_4a7fb0;
    }
    ctx->pc = 0x4A7FA8u;
    {
        const bool branch_taken_0x4a7fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x4a7fa8) {
            ctx->pc = 0x4A7FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7FA8u;
            // 0x4a7fac: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A7FB8u;
            goto label_4a7fb8;
        }
    }
    ctx->pc = 0x4A7FB0u;
label_4a7fb0:
    // 0x4a7fb0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4a7fb4:
    if (ctx->pc == 0x4A7FB4u) {
        ctx->pc = 0x4A7FB8u;
        goto label_4a7fb8;
    }
    ctx->pc = 0x4A7FB0u;
    {
        const bool branch_taken_0x4a7fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7fb0) {
            ctx->pc = 0x4A7FD0u;
            goto label_4a7fd0;
        }
    }
    ctx->pc = 0x4A7FB8u;
label_4a7fb8:
    // 0x4a7fb8: 0x10000005  b           . + 4 + (0x5 << 2)
label_4a7fbc:
    if (ctx->pc == 0x4A7FBCu) {
        ctx->pc = 0x4A7FBCu;
            // 0x4a7fbc: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x4A7FC0u;
        goto label_4a7fc0;
    }
    ctx->pc = 0x4A7FB8u;
    {
        const bool branch_taken_0x4a7fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7FB8u;
            // 0x4a7fbc: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7fb8) {
            ctx->pc = 0x4A7FD0u;
            goto label_4a7fd0;
        }
    }
    ctx->pc = 0x4A7FC0u;
label_4a7fc0:
    // 0x4a7fc0: 0x10000003  b           . + 4 + (0x3 << 2)
label_4a7fc4:
    if (ctx->pc == 0x4A7FC4u) {
        ctx->pc = 0x4A7FC4u;
            // 0x4a7fc4: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x4A7FC8u;
        goto label_4a7fc8;
    }
    ctx->pc = 0x4A7FC0u;
    {
        const bool branch_taken_0x4a7fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7FC0u;
            // 0x4a7fc4: 0xae220084  sw          $v0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7fc0) {
            ctx->pc = 0x4A7FD0u;
            goto label_4a7fd0;
        }
    }
    ctx->pc = 0x4A7FC8u;
label_4a7fc8:
    // 0x4a7fc8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4a7fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4a7fcc:
    // 0x4a7fcc: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x4a7fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_4a7fd0:
    // 0x4a7fd0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4a7fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4a7fd4:
    // 0x4a7fd4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4a7fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4a7fd8:
    // 0x4a7fd8: 0xc462aeb8  lwc1        $f2, -0x5148($v1)
    ctx->pc = 0x4a7fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294946488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a7fdc:
    // 0x4a7fdc: 0xc6200084  lwc1        $f0, 0x84($s1)
    ctx->pc = 0x4a7fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a7fe0:
    // 0x4a7fe0: 0xc441aebc  lwc1        $f1, -0x5144($v0)
    ctx->pc = 0x4a7fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a7fe4:
    // 0x4a7fe4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4a7fe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4a7fe8:
    // 0x4a7fe8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a7fe8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a7fec:
    // 0x4a7fec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4a7fecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_4a7ff0:
    // 0x4a7ff0: 0x0  nop
    ctx->pc = 0x4a7ff0u;
    // NOP
label_4a7ff4:
    // 0x4a7ff4: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x4a7ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_4a7ff8:
    // 0x4a7ff8: 0xc6200084  lwc1        $f0, 0x84($s1)
    ctx->pc = 0x4a7ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a7ffc:
    // 0x4a7ffc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4a7ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4a8000:
    // 0x4a8000: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a8000u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a8004:
    // 0x4a8004: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4a8004u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_4a8008:
    // 0x4a8008: 0x0  nop
    ctx->pc = 0x4a8008u;
    // NOP
label_4a800c:
    // 0x4a800c: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x4a800cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_4a8010:
    // 0x4a8010: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x4a8010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4a8014:
    // 0x4a8014: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_4a8018:
    if (ctx->pc == 0x4A8018u) {
        ctx->pc = 0x4A8018u;
            // 0x4a8018: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->pc = 0x4A801Cu;
        goto label_4a801c;
    }
    ctx->pc = 0x4A8014u;
    {
        const bool branch_taken_0x4a8014 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4A8018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8014u;
            // 0x4a8018: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8014) {
            ctx->pc = 0x4A8024u;
            goto label_4a8024;
        }
    }
    ctx->pc = 0x4A801Cu;
label_4a801c:
    // 0x4a801c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x4a801cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4a8020:
    // 0x4a8020: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4a8020u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_4a8024:
    // 0x4a8024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a8024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a8028:
    // 0x4a8028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a8028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a802c:
    // 0x4a802c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a802cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4a8030:
    // 0x4a8030: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4a8030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4a8034:
    // 0x4a8034: 0xc441a2a8  lwc1        $f1, -0x5D58($v0)
    ctx->pc = 0x4a8034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a8038:
    // 0x4a8038: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4a8038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4a803c:
    // 0x4a803c: 0xe621007c  swc1        $f1, 0x7C($s1)
    ctx->pc = 0x4a803cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
label_4a8040:
    // 0x4a8040: 0xc12a040  jal         func_4A8100
label_4a8044:
    if (ctx->pc == 0x4A8044u) {
        ctx->pc = 0x4A8044u;
            // 0x4a8044: 0xe6200080  swc1        $f0, 0x80($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
        ctx->pc = 0x4A8048u;
        goto label_4a8048;
    }
    ctx->pc = 0x4A8040u;
    SET_GPR_U32(ctx, 31, 0x4A8048u);
    ctx->pc = 0x4A8044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8040u;
            // 0x4a8044: 0xe6200080  swc1        $f0, 0x80($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A8100u;
    if (runtime->hasFunction(0x4A8100u)) {
        auto targetFn = runtime->lookupFunction(0x4A8100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8048u; }
        if (ctx->pc != 0x4A8048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A8100_0x4a8100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8048u; }
        if (ctx->pc != 0x4A8048u) { return; }
    }
    ctx->pc = 0x4A8048u;
label_4a8048:
    // 0x4a8048: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4a8048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a804c:
    // 0x4a804c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a804cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a8050:
    // 0x4a8050: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4a8050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4a8054:
    // 0x4a8054: 0x320f809  jalr        $t9
label_4a8058:
    if (ctx->pc == 0x4A8058u) {
        ctx->pc = 0x4A8058u;
            // 0x4a8058: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4A805Cu;
        goto label_4a805c;
    }
    ctx->pc = 0x4A8054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A805Cu);
        ctx->pc = 0x4A8058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8054u;
            // 0x4a8058: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A805Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A805Cu; }
            if (ctx->pc != 0x4A805Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A805Cu;
label_4a805c:
    // 0x4a805c: 0x10000023  b           . + 4 + (0x23 << 2)
label_4a8060:
    if (ctx->pc == 0x4A8060u) {
        ctx->pc = 0x4A8064u;
        goto label_4a8064;
    }
    ctx->pc = 0x4A805Cu;
    {
        const bool branch_taken_0x4a805c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a805c) {
            ctx->pc = 0x4A80ECu;
            goto label_4a80ec;
        }
    }
    ctx->pc = 0x4A8064u;
label_4a8064:
    // 0x4a8064: 0x58600004  blezl       $v1, . + 4 + (0x4 << 2)
label_4a8068:
    if (ctx->pc == 0x4A8068u) {
        ctx->pc = 0x4A8068u;
            // 0x4a8068: 0x9223008e  lbu         $v1, 0x8E($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 142)));
        ctx->pc = 0x4A806Cu;
        goto label_4a806c;
    }
    ctx->pc = 0x4A8064u;
    {
        const bool branch_taken_0x4a8064 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4a8064) {
            ctx->pc = 0x4A8068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8064u;
            // 0x4a8068: 0x9223008e  lbu         $v1, 0x8E($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 142)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A8078u;
            goto label_4a8078;
        }
    }
    ctx->pc = 0x4A806Cu;
label_4a806c:
    // 0x4a806c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a806cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4a8070:
    // 0x4a8070: 0xa2230088  sb          $v1, 0x88($s1)
    ctx->pc = 0x4a8070u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 3));
label_4a8074:
    // 0x4a8074: 0x9223008e  lbu         $v1, 0x8E($s1)
    ctx->pc = 0x4a8074u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 142)));
label_4a8078:
    // 0x4a8078: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4a807c:
    if (ctx->pc == 0x4A807Cu) {
        ctx->pc = 0x4A807Cu;
            // 0x4a807c: 0x92030010  lbu         $v1, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x4A8080u;
        goto label_4a8080;
    }
    ctx->pc = 0x4A8078u;
    {
        const bool branch_taken_0x4a8078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8078) {
            ctx->pc = 0x4A807Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8078u;
            // 0x4a807c: 0x92030010  lbu         $v1, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A808Cu;
            goto label_4a808c;
        }
    }
    ctx->pc = 0x4A8080u;
label_4a8080:
    // 0x4a8080: 0xc12a040  jal         func_4A8100
label_4a8084:
    if (ctx->pc == 0x4A8084u) {
        ctx->pc = 0x4A8084u;
            // 0x4a8084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A8088u;
        goto label_4a8088;
    }
    ctx->pc = 0x4A8080u;
    SET_GPR_U32(ctx, 31, 0x4A8088u);
    ctx->pc = 0x4A8084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8080u;
            // 0x4a8084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A8100u;
    if (runtime->hasFunction(0x4A8100u)) {
        auto targetFn = runtime->lookupFunction(0x4A8100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8088u; }
        if (ctx->pc != 0x4A8088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A8100_0x4a8100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8088u; }
        if (ctx->pc != 0x4A8088u) { return; }
    }
    ctx->pc = 0x4A8088u;
label_4a8088:
    // 0x4a8088: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x4a8088u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_4a808c:
    // 0x4a808c: 0x2c610011  sltiu       $at, $v1, 0x11
    ctx->pc = 0x4a808cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4a8090:
    // 0x4a8090: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_4a8094:
    if (ctx->pc == 0x4A8094u) {
        ctx->pc = 0x4A8098u;
        goto label_4a8098;
    }
    ctx->pc = 0x4A8090u;
    {
        const bool branch_taken_0x4a8090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8090) {
            ctx->pc = 0x4A80ECu;
            goto label_4a80ec;
        }
    }
    ctx->pc = 0x4A8098u;
label_4a8098:
    // 0x4a8098: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4a8098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a809c:
    // 0x4a809c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4a809cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4a80a0:
    // 0x4a80a0: 0x320f809  jalr        $t9
label_4a80a4:
    if (ctx->pc == 0x4A80A4u) {
        ctx->pc = 0x4A80A4u;
            // 0x4a80a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A80A8u;
        goto label_4a80a8;
    }
    ctx->pc = 0x4A80A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A80A8u);
        ctx->pc = 0x4A80A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A80A0u;
            // 0x4a80a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A80A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A80A8u; }
            if (ctx->pc != 0x4A80A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4A80A8u;
label_4a80a8:
    // 0x4a80a8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4a80a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a80ac:
    // 0x4a80ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a80acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a80b0:
    // 0x4a80b0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4a80b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4a80b4:
    // 0x4a80b4: 0x320f809  jalr        $t9
label_4a80b8:
    if (ctx->pc == 0x4A80B8u) {
        ctx->pc = 0x4A80B8u;
            // 0x4a80b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4A80BCu;
        goto label_4a80bc;
    }
    ctx->pc = 0x4A80B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A80BCu);
        ctx->pc = 0x4A80B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A80B4u;
            // 0x4a80b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A80BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A80BCu; }
            if (ctx->pc != 0x4A80BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4A80BCu;
label_4a80bc:
    // 0x4a80bc: 0x1000000b  b           . + 4 + (0xB << 2)
label_4a80c0:
    if (ctx->pc == 0x4A80C0u) {
        ctx->pc = 0x4A80C4u;
        goto label_4a80c4;
    }
    ctx->pc = 0x4A80BCu;
    {
        const bool branch_taken_0x4a80bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a80bc) {
            ctx->pc = 0x4A80ECu;
            goto label_4a80ec;
        }
    }
    ctx->pc = 0x4A80C4u;
label_4a80c4:
    // 0x4a80c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4a80c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4a80c8:
    // 0x4a80c8: 0x320f809  jalr        $t9
label_4a80cc:
    if (ctx->pc == 0x4A80CCu) {
        ctx->pc = 0x4A80D0u;
        goto label_4a80d0;
    }
    ctx->pc = 0x4A80C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A80D0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A80D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A80D0u; }
            if (ctx->pc != 0x4A80D0u) { return; }
        }
        }
    }
    ctx->pc = 0x4A80D0u;
label_4a80d0:
    // 0x4a80d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_4a80d4:
    if (ctx->pc == 0x4A80D4u) {
        ctx->pc = 0x4A80D8u;
        goto label_4a80d8;
    }
    ctx->pc = 0x4A80D0u;
    {
        const bool branch_taken_0x4a80d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a80d0) {
            ctx->pc = 0x4A80ECu;
            goto label_4a80ec;
        }
    }
    ctx->pc = 0x4A80D8u;
label_4a80d8:
    // 0x4a80d8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4a80d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4a80dc:
    // 0x4a80dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a80dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a80e0:
    // 0x4a80e0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4a80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4a80e4:
    // 0x4a80e4: 0xc057b7c  jal         func_15EDF0
label_4a80e8:
    if (ctx->pc == 0x4A80E8u) {
        ctx->pc = 0x4A80E8u;
            // 0x4a80e8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A80ECu;
        goto label_4a80ec;
    }
    ctx->pc = 0x4A80E4u;
    SET_GPR_U32(ctx, 31, 0x4A80ECu);
    ctx->pc = 0x4A80E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A80E4u;
            // 0x4a80e8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A80ECu; }
        if (ctx->pc != 0x4A80ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A80ECu; }
        if (ctx->pc != 0x4A80ECu) { return; }
    }
    ctx->pc = 0x4A80ECu;
label_4a80ec:
    // 0x4a80ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a80ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a80f0:
    // 0x4a80f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a80f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a80f4:
    // 0x4a80f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a80f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a80f8:
    // 0x4a80f8: 0x3e00008  jr          $ra
label_4a80fc:
    if (ctx->pc == 0x4A80FCu) {
        ctx->pc = 0x4A80FCu;
            // 0x4a80fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4A8100u;
        goto label_fallthrough_0x4a80f8;
    }
    ctx->pc = 0x4A80F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A80FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A80F8u;
            // 0x4a80fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4a80f8:
    ctx->pc = 0x4A8100u;
}
