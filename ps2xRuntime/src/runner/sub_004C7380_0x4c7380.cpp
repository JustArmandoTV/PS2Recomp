#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C7380
// Address: 0x4c7380 - 0x4c7a30
void sub_004C7380_0x4c7380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C7380_0x4c7380");
#endif

    switch (ctx->pc) {
        case 0x4c7380u: goto label_4c7380;
        case 0x4c7384u: goto label_4c7384;
        case 0x4c7388u: goto label_4c7388;
        case 0x4c738cu: goto label_4c738c;
        case 0x4c7390u: goto label_4c7390;
        case 0x4c7394u: goto label_4c7394;
        case 0x4c7398u: goto label_4c7398;
        case 0x4c739cu: goto label_4c739c;
        case 0x4c73a0u: goto label_4c73a0;
        case 0x4c73a4u: goto label_4c73a4;
        case 0x4c73a8u: goto label_4c73a8;
        case 0x4c73acu: goto label_4c73ac;
        case 0x4c73b0u: goto label_4c73b0;
        case 0x4c73b4u: goto label_4c73b4;
        case 0x4c73b8u: goto label_4c73b8;
        case 0x4c73bcu: goto label_4c73bc;
        case 0x4c73c0u: goto label_4c73c0;
        case 0x4c73c4u: goto label_4c73c4;
        case 0x4c73c8u: goto label_4c73c8;
        case 0x4c73ccu: goto label_4c73cc;
        case 0x4c73d0u: goto label_4c73d0;
        case 0x4c73d4u: goto label_4c73d4;
        case 0x4c73d8u: goto label_4c73d8;
        case 0x4c73dcu: goto label_4c73dc;
        case 0x4c73e0u: goto label_4c73e0;
        case 0x4c73e4u: goto label_4c73e4;
        case 0x4c73e8u: goto label_4c73e8;
        case 0x4c73ecu: goto label_4c73ec;
        case 0x4c73f0u: goto label_4c73f0;
        case 0x4c73f4u: goto label_4c73f4;
        case 0x4c73f8u: goto label_4c73f8;
        case 0x4c73fcu: goto label_4c73fc;
        case 0x4c7400u: goto label_4c7400;
        case 0x4c7404u: goto label_4c7404;
        case 0x4c7408u: goto label_4c7408;
        case 0x4c740cu: goto label_4c740c;
        case 0x4c7410u: goto label_4c7410;
        case 0x4c7414u: goto label_4c7414;
        case 0x4c7418u: goto label_4c7418;
        case 0x4c741cu: goto label_4c741c;
        case 0x4c7420u: goto label_4c7420;
        case 0x4c7424u: goto label_4c7424;
        case 0x4c7428u: goto label_4c7428;
        case 0x4c742cu: goto label_4c742c;
        case 0x4c7430u: goto label_4c7430;
        case 0x4c7434u: goto label_4c7434;
        case 0x4c7438u: goto label_4c7438;
        case 0x4c743cu: goto label_4c743c;
        case 0x4c7440u: goto label_4c7440;
        case 0x4c7444u: goto label_4c7444;
        case 0x4c7448u: goto label_4c7448;
        case 0x4c744cu: goto label_4c744c;
        case 0x4c7450u: goto label_4c7450;
        case 0x4c7454u: goto label_4c7454;
        case 0x4c7458u: goto label_4c7458;
        case 0x4c745cu: goto label_4c745c;
        case 0x4c7460u: goto label_4c7460;
        case 0x4c7464u: goto label_4c7464;
        case 0x4c7468u: goto label_4c7468;
        case 0x4c746cu: goto label_4c746c;
        case 0x4c7470u: goto label_4c7470;
        case 0x4c7474u: goto label_4c7474;
        case 0x4c7478u: goto label_4c7478;
        case 0x4c747cu: goto label_4c747c;
        case 0x4c7480u: goto label_4c7480;
        case 0x4c7484u: goto label_4c7484;
        case 0x4c7488u: goto label_4c7488;
        case 0x4c748cu: goto label_4c748c;
        case 0x4c7490u: goto label_4c7490;
        case 0x4c7494u: goto label_4c7494;
        case 0x4c7498u: goto label_4c7498;
        case 0x4c749cu: goto label_4c749c;
        case 0x4c74a0u: goto label_4c74a0;
        case 0x4c74a4u: goto label_4c74a4;
        case 0x4c74a8u: goto label_4c74a8;
        case 0x4c74acu: goto label_4c74ac;
        case 0x4c74b0u: goto label_4c74b0;
        case 0x4c74b4u: goto label_4c74b4;
        case 0x4c74b8u: goto label_4c74b8;
        case 0x4c74bcu: goto label_4c74bc;
        case 0x4c74c0u: goto label_4c74c0;
        case 0x4c74c4u: goto label_4c74c4;
        case 0x4c74c8u: goto label_4c74c8;
        case 0x4c74ccu: goto label_4c74cc;
        case 0x4c74d0u: goto label_4c74d0;
        case 0x4c74d4u: goto label_4c74d4;
        case 0x4c74d8u: goto label_4c74d8;
        case 0x4c74dcu: goto label_4c74dc;
        case 0x4c74e0u: goto label_4c74e0;
        case 0x4c74e4u: goto label_4c74e4;
        case 0x4c74e8u: goto label_4c74e8;
        case 0x4c74ecu: goto label_4c74ec;
        case 0x4c74f0u: goto label_4c74f0;
        case 0x4c74f4u: goto label_4c74f4;
        case 0x4c74f8u: goto label_4c74f8;
        case 0x4c74fcu: goto label_4c74fc;
        case 0x4c7500u: goto label_4c7500;
        case 0x4c7504u: goto label_4c7504;
        case 0x4c7508u: goto label_4c7508;
        case 0x4c750cu: goto label_4c750c;
        case 0x4c7510u: goto label_4c7510;
        case 0x4c7514u: goto label_4c7514;
        case 0x4c7518u: goto label_4c7518;
        case 0x4c751cu: goto label_4c751c;
        case 0x4c7520u: goto label_4c7520;
        case 0x4c7524u: goto label_4c7524;
        case 0x4c7528u: goto label_4c7528;
        case 0x4c752cu: goto label_4c752c;
        case 0x4c7530u: goto label_4c7530;
        case 0x4c7534u: goto label_4c7534;
        case 0x4c7538u: goto label_4c7538;
        case 0x4c753cu: goto label_4c753c;
        case 0x4c7540u: goto label_4c7540;
        case 0x4c7544u: goto label_4c7544;
        case 0x4c7548u: goto label_4c7548;
        case 0x4c754cu: goto label_4c754c;
        case 0x4c7550u: goto label_4c7550;
        case 0x4c7554u: goto label_4c7554;
        case 0x4c7558u: goto label_4c7558;
        case 0x4c755cu: goto label_4c755c;
        case 0x4c7560u: goto label_4c7560;
        case 0x4c7564u: goto label_4c7564;
        case 0x4c7568u: goto label_4c7568;
        case 0x4c756cu: goto label_4c756c;
        case 0x4c7570u: goto label_4c7570;
        case 0x4c7574u: goto label_4c7574;
        case 0x4c7578u: goto label_4c7578;
        case 0x4c757cu: goto label_4c757c;
        case 0x4c7580u: goto label_4c7580;
        case 0x4c7584u: goto label_4c7584;
        case 0x4c7588u: goto label_4c7588;
        case 0x4c758cu: goto label_4c758c;
        case 0x4c7590u: goto label_4c7590;
        case 0x4c7594u: goto label_4c7594;
        case 0x4c7598u: goto label_4c7598;
        case 0x4c759cu: goto label_4c759c;
        case 0x4c75a0u: goto label_4c75a0;
        case 0x4c75a4u: goto label_4c75a4;
        case 0x4c75a8u: goto label_4c75a8;
        case 0x4c75acu: goto label_4c75ac;
        case 0x4c75b0u: goto label_4c75b0;
        case 0x4c75b4u: goto label_4c75b4;
        case 0x4c75b8u: goto label_4c75b8;
        case 0x4c75bcu: goto label_4c75bc;
        case 0x4c75c0u: goto label_4c75c0;
        case 0x4c75c4u: goto label_4c75c4;
        case 0x4c75c8u: goto label_4c75c8;
        case 0x4c75ccu: goto label_4c75cc;
        case 0x4c75d0u: goto label_4c75d0;
        case 0x4c75d4u: goto label_4c75d4;
        case 0x4c75d8u: goto label_4c75d8;
        case 0x4c75dcu: goto label_4c75dc;
        case 0x4c75e0u: goto label_4c75e0;
        case 0x4c75e4u: goto label_4c75e4;
        case 0x4c75e8u: goto label_4c75e8;
        case 0x4c75ecu: goto label_4c75ec;
        case 0x4c75f0u: goto label_4c75f0;
        case 0x4c75f4u: goto label_4c75f4;
        case 0x4c75f8u: goto label_4c75f8;
        case 0x4c75fcu: goto label_4c75fc;
        case 0x4c7600u: goto label_4c7600;
        case 0x4c7604u: goto label_4c7604;
        case 0x4c7608u: goto label_4c7608;
        case 0x4c760cu: goto label_4c760c;
        case 0x4c7610u: goto label_4c7610;
        case 0x4c7614u: goto label_4c7614;
        case 0x4c7618u: goto label_4c7618;
        case 0x4c761cu: goto label_4c761c;
        case 0x4c7620u: goto label_4c7620;
        case 0x4c7624u: goto label_4c7624;
        case 0x4c7628u: goto label_4c7628;
        case 0x4c762cu: goto label_4c762c;
        case 0x4c7630u: goto label_4c7630;
        case 0x4c7634u: goto label_4c7634;
        case 0x4c7638u: goto label_4c7638;
        case 0x4c763cu: goto label_4c763c;
        case 0x4c7640u: goto label_4c7640;
        case 0x4c7644u: goto label_4c7644;
        case 0x4c7648u: goto label_4c7648;
        case 0x4c764cu: goto label_4c764c;
        case 0x4c7650u: goto label_4c7650;
        case 0x4c7654u: goto label_4c7654;
        case 0x4c7658u: goto label_4c7658;
        case 0x4c765cu: goto label_4c765c;
        case 0x4c7660u: goto label_4c7660;
        case 0x4c7664u: goto label_4c7664;
        case 0x4c7668u: goto label_4c7668;
        case 0x4c766cu: goto label_4c766c;
        case 0x4c7670u: goto label_4c7670;
        case 0x4c7674u: goto label_4c7674;
        case 0x4c7678u: goto label_4c7678;
        case 0x4c767cu: goto label_4c767c;
        case 0x4c7680u: goto label_4c7680;
        case 0x4c7684u: goto label_4c7684;
        case 0x4c7688u: goto label_4c7688;
        case 0x4c768cu: goto label_4c768c;
        case 0x4c7690u: goto label_4c7690;
        case 0x4c7694u: goto label_4c7694;
        case 0x4c7698u: goto label_4c7698;
        case 0x4c769cu: goto label_4c769c;
        case 0x4c76a0u: goto label_4c76a0;
        case 0x4c76a4u: goto label_4c76a4;
        case 0x4c76a8u: goto label_4c76a8;
        case 0x4c76acu: goto label_4c76ac;
        case 0x4c76b0u: goto label_4c76b0;
        case 0x4c76b4u: goto label_4c76b4;
        case 0x4c76b8u: goto label_4c76b8;
        case 0x4c76bcu: goto label_4c76bc;
        case 0x4c76c0u: goto label_4c76c0;
        case 0x4c76c4u: goto label_4c76c4;
        case 0x4c76c8u: goto label_4c76c8;
        case 0x4c76ccu: goto label_4c76cc;
        case 0x4c76d0u: goto label_4c76d0;
        case 0x4c76d4u: goto label_4c76d4;
        case 0x4c76d8u: goto label_4c76d8;
        case 0x4c76dcu: goto label_4c76dc;
        case 0x4c76e0u: goto label_4c76e0;
        case 0x4c76e4u: goto label_4c76e4;
        case 0x4c76e8u: goto label_4c76e8;
        case 0x4c76ecu: goto label_4c76ec;
        case 0x4c76f0u: goto label_4c76f0;
        case 0x4c76f4u: goto label_4c76f4;
        case 0x4c76f8u: goto label_4c76f8;
        case 0x4c76fcu: goto label_4c76fc;
        case 0x4c7700u: goto label_4c7700;
        case 0x4c7704u: goto label_4c7704;
        case 0x4c7708u: goto label_4c7708;
        case 0x4c770cu: goto label_4c770c;
        case 0x4c7710u: goto label_4c7710;
        case 0x4c7714u: goto label_4c7714;
        case 0x4c7718u: goto label_4c7718;
        case 0x4c771cu: goto label_4c771c;
        case 0x4c7720u: goto label_4c7720;
        case 0x4c7724u: goto label_4c7724;
        case 0x4c7728u: goto label_4c7728;
        case 0x4c772cu: goto label_4c772c;
        case 0x4c7730u: goto label_4c7730;
        case 0x4c7734u: goto label_4c7734;
        case 0x4c7738u: goto label_4c7738;
        case 0x4c773cu: goto label_4c773c;
        case 0x4c7740u: goto label_4c7740;
        case 0x4c7744u: goto label_4c7744;
        case 0x4c7748u: goto label_4c7748;
        case 0x4c774cu: goto label_4c774c;
        case 0x4c7750u: goto label_4c7750;
        case 0x4c7754u: goto label_4c7754;
        case 0x4c7758u: goto label_4c7758;
        case 0x4c775cu: goto label_4c775c;
        case 0x4c7760u: goto label_4c7760;
        case 0x4c7764u: goto label_4c7764;
        case 0x4c7768u: goto label_4c7768;
        case 0x4c776cu: goto label_4c776c;
        case 0x4c7770u: goto label_4c7770;
        case 0x4c7774u: goto label_4c7774;
        case 0x4c7778u: goto label_4c7778;
        case 0x4c777cu: goto label_4c777c;
        case 0x4c7780u: goto label_4c7780;
        case 0x4c7784u: goto label_4c7784;
        case 0x4c7788u: goto label_4c7788;
        case 0x4c778cu: goto label_4c778c;
        case 0x4c7790u: goto label_4c7790;
        case 0x4c7794u: goto label_4c7794;
        case 0x4c7798u: goto label_4c7798;
        case 0x4c779cu: goto label_4c779c;
        case 0x4c77a0u: goto label_4c77a0;
        case 0x4c77a4u: goto label_4c77a4;
        case 0x4c77a8u: goto label_4c77a8;
        case 0x4c77acu: goto label_4c77ac;
        case 0x4c77b0u: goto label_4c77b0;
        case 0x4c77b4u: goto label_4c77b4;
        case 0x4c77b8u: goto label_4c77b8;
        case 0x4c77bcu: goto label_4c77bc;
        case 0x4c77c0u: goto label_4c77c0;
        case 0x4c77c4u: goto label_4c77c4;
        case 0x4c77c8u: goto label_4c77c8;
        case 0x4c77ccu: goto label_4c77cc;
        case 0x4c77d0u: goto label_4c77d0;
        case 0x4c77d4u: goto label_4c77d4;
        case 0x4c77d8u: goto label_4c77d8;
        case 0x4c77dcu: goto label_4c77dc;
        case 0x4c77e0u: goto label_4c77e0;
        case 0x4c77e4u: goto label_4c77e4;
        case 0x4c77e8u: goto label_4c77e8;
        case 0x4c77ecu: goto label_4c77ec;
        case 0x4c77f0u: goto label_4c77f0;
        case 0x4c77f4u: goto label_4c77f4;
        case 0x4c77f8u: goto label_4c77f8;
        case 0x4c77fcu: goto label_4c77fc;
        case 0x4c7800u: goto label_4c7800;
        case 0x4c7804u: goto label_4c7804;
        case 0x4c7808u: goto label_4c7808;
        case 0x4c780cu: goto label_4c780c;
        case 0x4c7810u: goto label_4c7810;
        case 0x4c7814u: goto label_4c7814;
        case 0x4c7818u: goto label_4c7818;
        case 0x4c781cu: goto label_4c781c;
        case 0x4c7820u: goto label_4c7820;
        case 0x4c7824u: goto label_4c7824;
        case 0x4c7828u: goto label_4c7828;
        case 0x4c782cu: goto label_4c782c;
        case 0x4c7830u: goto label_4c7830;
        case 0x4c7834u: goto label_4c7834;
        case 0x4c7838u: goto label_4c7838;
        case 0x4c783cu: goto label_4c783c;
        case 0x4c7840u: goto label_4c7840;
        case 0x4c7844u: goto label_4c7844;
        case 0x4c7848u: goto label_4c7848;
        case 0x4c784cu: goto label_4c784c;
        case 0x4c7850u: goto label_4c7850;
        case 0x4c7854u: goto label_4c7854;
        case 0x4c7858u: goto label_4c7858;
        case 0x4c785cu: goto label_4c785c;
        case 0x4c7860u: goto label_4c7860;
        case 0x4c7864u: goto label_4c7864;
        case 0x4c7868u: goto label_4c7868;
        case 0x4c786cu: goto label_4c786c;
        case 0x4c7870u: goto label_4c7870;
        case 0x4c7874u: goto label_4c7874;
        case 0x4c7878u: goto label_4c7878;
        case 0x4c787cu: goto label_4c787c;
        case 0x4c7880u: goto label_4c7880;
        case 0x4c7884u: goto label_4c7884;
        case 0x4c7888u: goto label_4c7888;
        case 0x4c788cu: goto label_4c788c;
        case 0x4c7890u: goto label_4c7890;
        case 0x4c7894u: goto label_4c7894;
        case 0x4c7898u: goto label_4c7898;
        case 0x4c789cu: goto label_4c789c;
        case 0x4c78a0u: goto label_4c78a0;
        case 0x4c78a4u: goto label_4c78a4;
        case 0x4c78a8u: goto label_4c78a8;
        case 0x4c78acu: goto label_4c78ac;
        case 0x4c78b0u: goto label_4c78b0;
        case 0x4c78b4u: goto label_4c78b4;
        case 0x4c78b8u: goto label_4c78b8;
        case 0x4c78bcu: goto label_4c78bc;
        case 0x4c78c0u: goto label_4c78c0;
        case 0x4c78c4u: goto label_4c78c4;
        case 0x4c78c8u: goto label_4c78c8;
        case 0x4c78ccu: goto label_4c78cc;
        case 0x4c78d0u: goto label_4c78d0;
        case 0x4c78d4u: goto label_4c78d4;
        case 0x4c78d8u: goto label_4c78d8;
        case 0x4c78dcu: goto label_4c78dc;
        case 0x4c78e0u: goto label_4c78e0;
        case 0x4c78e4u: goto label_4c78e4;
        case 0x4c78e8u: goto label_4c78e8;
        case 0x4c78ecu: goto label_4c78ec;
        case 0x4c78f0u: goto label_4c78f0;
        case 0x4c78f4u: goto label_4c78f4;
        case 0x4c78f8u: goto label_4c78f8;
        case 0x4c78fcu: goto label_4c78fc;
        case 0x4c7900u: goto label_4c7900;
        case 0x4c7904u: goto label_4c7904;
        case 0x4c7908u: goto label_4c7908;
        case 0x4c790cu: goto label_4c790c;
        case 0x4c7910u: goto label_4c7910;
        case 0x4c7914u: goto label_4c7914;
        case 0x4c7918u: goto label_4c7918;
        case 0x4c791cu: goto label_4c791c;
        case 0x4c7920u: goto label_4c7920;
        case 0x4c7924u: goto label_4c7924;
        case 0x4c7928u: goto label_4c7928;
        case 0x4c792cu: goto label_4c792c;
        case 0x4c7930u: goto label_4c7930;
        case 0x4c7934u: goto label_4c7934;
        case 0x4c7938u: goto label_4c7938;
        case 0x4c793cu: goto label_4c793c;
        case 0x4c7940u: goto label_4c7940;
        case 0x4c7944u: goto label_4c7944;
        case 0x4c7948u: goto label_4c7948;
        case 0x4c794cu: goto label_4c794c;
        case 0x4c7950u: goto label_4c7950;
        case 0x4c7954u: goto label_4c7954;
        case 0x4c7958u: goto label_4c7958;
        case 0x4c795cu: goto label_4c795c;
        case 0x4c7960u: goto label_4c7960;
        case 0x4c7964u: goto label_4c7964;
        case 0x4c7968u: goto label_4c7968;
        case 0x4c796cu: goto label_4c796c;
        case 0x4c7970u: goto label_4c7970;
        case 0x4c7974u: goto label_4c7974;
        case 0x4c7978u: goto label_4c7978;
        case 0x4c797cu: goto label_4c797c;
        case 0x4c7980u: goto label_4c7980;
        case 0x4c7984u: goto label_4c7984;
        case 0x4c7988u: goto label_4c7988;
        case 0x4c798cu: goto label_4c798c;
        case 0x4c7990u: goto label_4c7990;
        case 0x4c7994u: goto label_4c7994;
        case 0x4c7998u: goto label_4c7998;
        case 0x4c799cu: goto label_4c799c;
        case 0x4c79a0u: goto label_4c79a0;
        case 0x4c79a4u: goto label_4c79a4;
        case 0x4c79a8u: goto label_4c79a8;
        case 0x4c79acu: goto label_4c79ac;
        case 0x4c79b0u: goto label_4c79b0;
        case 0x4c79b4u: goto label_4c79b4;
        case 0x4c79b8u: goto label_4c79b8;
        case 0x4c79bcu: goto label_4c79bc;
        case 0x4c79c0u: goto label_4c79c0;
        case 0x4c79c4u: goto label_4c79c4;
        case 0x4c79c8u: goto label_4c79c8;
        case 0x4c79ccu: goto label_4c79cc;
        case 0x4c79d0u: goto label_4c79d0;
        case 0x4c79d4u: goto label_4c79d4;
        case 0x4c79d8u: goto label_4c79d8;
        case 0x4c79dcu: goto label_4c79dc;
        case 0x4c79e0u: goto label_4c79e0;
        case 0x4c79e4u: goto label_4c79e4;
        case 0x4c79e8u: goto label_4c79e8;
        case 0x4c79ecu: goto label_4c79ec;
        case 0x4c79f0u: goto label_4c79f0;
        case 0x4c79f4u: goto label_4c79f4;
        case 0x4c79f8u: goto label_4c79f8;
        case 0x4c79fcu: goto label_4c79fc;
        case 0x4c7a00u: goto label_4c7a00;
        case 0x4c7a04u: goto label_4c7a04;
        case 0x4c7a08u: goto label_4c7a08;
        case 0x4c7a0cu: goto label_4c7a0c;
        case 0x4c7a10u: goto label_4c7a10;
        case 0x4c7a14u: goto label_4c7a14;
        case 0x4c7a18u: goto label_4c7a18;
        case 0x4c7a1cu: goto label_4c7a1c;
        case 0x4c7a20u: goto label_4c7a20;
        case 0x4c7a24u: goto label_4c7a24;
        case 0x4c7a28u: goto label_4c7a28;
        case 0x4c7a2cu: goto label_4c7a2c;
        default: break;
    }

    ctx->pc = 0x4c7380u;

label_4c7380:
    // 0x4c7380: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4c7380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4c7384:
    // 0x4c7384: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4c7384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4c7388:
    // 0x4c7388: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4c7388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4c738c:
    // 0x4c738c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4c738cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4c7390:
    // 0x4c7390: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4c7390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4c7394:
    // 0x4c7394: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x4c7394u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4c7398:
    // 0x4c7398: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4c7398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4c739c:
    // 0x4c739c: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x4c739cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4c73a0:
    // 0x4c73a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c73a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c73a4:
    // 0x4c73a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4c73a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c73a8:
    // 0x4c73a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c73a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c73ac:
    // 0x4c73ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4c73acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c73b0:
    // 0x4c73b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c73b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c73b4:
    // 0x4c73b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4c73b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4c73b8:
    // 0x4c73b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c73b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c73bc:
    // 0x4c73bc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4c73bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4c73c0:
    // 0x4c73c0: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x4c73c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4c73c4:
    // 0x4c73c4: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x4c73c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_4c73c8:
    // 0x4c73c8: 0xc04f278  jal         func_13C9E0
label_4c73cc:
    if (ctx->pc == 0x4C73CCu) {
        ctx->pc = 0x4C73CCu;
            // 0x4c73cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C73D0u;
        goto label_4c73d0;
    }
    ctx->pc = 0x4C73C8u;
    SET_GPR_U32(ctx, 31, 0x4C73D0u);
    ctx->pc = 0x4C73CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C73C8u;
            // 0x4c73cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C73D0u; }
        if (ctx->pc != 0x4C73D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C73D0u; }
        if (ctx->pc != 0x4C73D0u) { return; }
    }
    ctx->pc = 0x4C73D0u;
label_4c73d0:
    // 0x4c73d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c73d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c73d4:
    // 0x4c73d4: 0xc04ce80  jal         func_133A00
label_4c73d8:
    if (ctx->pc == 0x4C73D8u) {
        ctx->pc = 0x4C73D8u;
            // 0x4c73d8: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x4C73DCu;
        goto label_4c73dc;
    }
    ctx->pc = 0x4C73D4u;
    SET_GPR_U32(ctx, 31, 0x4C73DCu);
    ctx->pc = 0x4C73D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C73D4u;
            // 0x4c73d8: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C73DCu; }
        if (ctx->pc != 0x4C73DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C73DCu; }
        if (ctx->pc != 0x4C73DCu) { return; }
    }
    ctx->pc = 0x4C73DCu;
label_4c73dc:
    // 0x4c73dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c73dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4c73e0:
    // 0x4c73e0: 0x9286004c  lbu         $a2, 0x4C($s4)
    ctx->pc = 0x4c73e0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
label_4c73e4:
    // 0x4c73e4: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4c73e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4c73e8:
    // 0x4c73e8: 0x8e770000  lw          $s7, 0x0($s3)
    ctx->pc = 0x4c73e8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4c73ec:
    // 0x4c73ec: 0xc07698c  jal         func_1DA630
label_4c73f0:
    if (ctx->pc == 0x4C73F0u) {
        ctx->pc = 0x4C73F0u;
            // 0x4c73f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C73F4u;
        goto label_4c73f4;
    }
    ctx->pc = 0x4C73ECu;
    SET_GPR_U32(ctx, 31, 0x4C73F4u);
    ctx->pc = 0x4C73F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C73ECu;
            // 0x4c73f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C73F4u; }
        if (ctx->pc != 0x4C73F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C73F4u; }
        if (ctx->pc != 0x4C73F4u) { return; }
    }
    ctx->pc = 0x4C73F4u;
label_4c73f4:
    // 0x4c73f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c73f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c73f8:
    // 0x4c73f8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4c73fc:
    if (ctx->pc == 0x4C73FCu) {
        ctx->pc = 0x4C7400u;
        goto label_4c7400;
    }
    ctx->pc = 0x4C73F8u;
    {
        const bool branch_taken_0x4c73f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4c73f8) {
            ctx->pc = 0x4C7408u;
            goto label_4c7408;
        }
    }
    ctx->pc = 0x4C7400u;
label_4c7400:
    // 0x4c7400: 0x10000033  b           . + 4 + (0x33 << 2)
label_4c7404:
    if (ctx->pc == 0x4C7404u) {
        ctx->pc = 0x4C7404u;
            // 0x4c7404: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4C7408u;
        goto label_4c7408;
    }
    ctx->pc = 0x4C7400u;
    {
        const bool branch_taken_0x4c7400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7400u;
            // 0x4c7404: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7400) {
            ctx->pc = 0x4C74D0u;
            goto label_4c74d0;
        }
    }
    ctx->pc = 0x4C7408u;
label_4c7408:
    // 0x4c7408: 0xc0576f4  jal         func_15DBD0
label_4c740c:
    if (ctx->pc == 0x4C740Cu) {
        ctx->pc = 0x4C7410u;
        goto label_4c7410;
    }
    ctx->pc = 0x4C7408u;
    SET_GPR_U32(ctx, 31, 0x4C7410u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7410u; }
        if (ctx->pc != 0x4C7410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7410u; }
        if (ctx->pc != 0x4C7410u) { return; }
    }
    ctx->pc = 0x4C7410u;
label_4c7410:
    // 0x4c7410: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4c7410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4c7414:
    // 0x4c7414: 0xc076984  jal         func_1DA610
label_4c7418:
    if (ctx->pc == 0x4C7418u) {
        ctx->pc = 0x4C7418u;
            // 0x4c7418: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C741Cu;
        goto label_4c741c;
    }
    ctx->pc = 0x4C7414u;
    SET_GPR_U32(ctx, 31, 0x4C741Cu);
    ctx->pc = 0x4C7418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7414u;
            // 0x4c7418: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C741Cu; }
        if (ctx->pc != 0x4C741Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C741Cu; }
        if (ctx->pc != 0x4C741Cu) { return; }
    }
    ctx->pc = 0x4C741Cu;
label_4c741c:
    // 0x4c741c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4c741cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c7420:
    // 0x4c7420: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4c7420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4c7424:
    // 0x4c7424: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4c7424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4c7428:
    // 0x4c7428: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c7428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c742c:
    // 0x4c742c: 0xc442c820  lwc1        $f2, -0x37E0($v0)
    ctx->pc = 0x4c742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c7430:
    // 0x4c7430: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4c7430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c7434:
    // 0x4c7434: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4c7434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4c7438:
    // 0x4c7438: 0xc441c828  lwc1        $f1, -0x37D8($v0)
    ctx->pc = 0x4c7438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c743c:
    // 0x4c743c: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x4c743cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4c7440:
    // 0x4c7440: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4c7440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4c7444:
    // 0x4c7444: 0xc440c82c  lwc1        $f0, -0x37D4($v0)
    ctx->pc = 0x4c7444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c7448:
    // 0x4c7448: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x4c7448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4c744c:
    // 0x4c744c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4c744cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4c7450:
    // 0x4c7450: 0x8c42c824  lw          $v0, -0x37DC($v0)
    ctx->pc = 0x4c7450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952996)));
label_4c7454:
    // 0x4c7454: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x4c7454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_4c7458:
    // 0x4c7458: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x4c7458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_4c745c:
    // 0x4c745c: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x4c745cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c7460:
    // 0x4c7460: 0xc04cca0  jal         func_133280
label_4c7464:
    if (ctx->pc == 0x4C7464u) {
        ctx->pc = 0x4C7464u;
            // 0x4c7464: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x4C7468u;
        goto label_4c7468;
    }
    ctx->pc = 0x4C7460u;
    SET_GPR_U32(ctx, 31, 0x4C7468u);
    ctx->pc = 0x4C7464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7460u;
            // 0x4c7464: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7468u; }
        if (ctx->pc != 0x4C7468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7468u; }
        if (ctx->pc != 0x4C7468u) { return; }
    }
    ctx->pc = 0x4C7468u;
label_4c7468:
    // 0x4c7468: 0xc076980  jal         func_1DA600
label_4c746c:
    if (ctx->pc == 0x4C746Cu) {
        ctx->pc = 0x4C746Cu;
            // 0x4c746c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7470u;
        goto label_4c7470;
    }
    ctx->pc = 0x4C7468u;
    SET_GPR_U32(ctx, 31, 0x4C7470u);
    ctx->pc = 0x4C746Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7468u;
            // 0x4c746c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7470u; }
        if (ctx->pc != 0x4C7470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7470u; }
        if (ctx->pc != 0x4C7470u) { return; }
    }
    ctx->pc = 0x4C7470u;
label_4c7470:
    // 0x4c7470: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4c7470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4c7474:
    // 0x4c7474: 0xc04cc34  jal         func_1330D0
label_4c7478:
    if (ctx->pc == 0x4C7478u) {
        ctx->pc = 0x4C7478u;
            // 0x4c7478: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C747Cu;
        goto label_4c747c;
    }
    ctx->pc = 0x4C7474u;
    SET_GPR_U32(ctx, 31, 0x4C747Cu);
    ctx->pc = 0x4C7478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7474u;
            // 0x4c7478: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C747Cu; }
        if (ctx->pc != 0x4C747Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C747Cu; }
        if (ctx->pc != 0x4C747Cu) { return; }
    }
    ctx->pc = 0x4C747Cu;
label_4c747c:
    // 0x4c747c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4c747cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4c7480:
    // 0x4c7480: 0xc4617340  lwc1        $f1, 0x7340($v1)
    ctx->pc = 0x4c7480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 29504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c7484:
    // 0x4c7484: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4c7484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c7488:
    // 0x4c7488: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4c748c:
    if (ctx->pc == 0x4C748Cu) {
        ctx->pc = 0x4C748Cu;
            // 0x4c748c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7490u;
        goto label_4c7490;
    }
    ctx->pc = 0x4C7488u;
    {
        const bool branch_taken_0x4c7488 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c7488) {
            ctx->pc = 0x4C748Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7488u;
            // 0x4c748c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7498u;
            goto label_4c7498;
        }
    }
    ctx->pc = 0x4C7490u;
label_4c7490:
    // 0x4c7490: 0x1000000f  b           . + 4 + (0xF << 2)
label_4c7494:
    if (ctx->pc == 0x4C7494u) {
        ctx->pc = 0x4C7494u;
            // 0x4c7494: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4C7498u;
        goto label_4c7498;
    }
    ctx->pc = 0x4C7490u;
    {
        const bool branch_taken_0x4c7490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7490u;
            // 0x4c7494: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7490) {
            ctx->pc = 0x4C74D0u;
            goto label_4c74d0;
        }
    }
    ctx->pc = 0x4C7498u;
label_4c7498:
    // 0x4c7498: 0xc07697c  jal         func_1DA5F0
label_4c749c:
    if (ctx->pc == 0x4C749Cu) {
        ctx->pc = 0x4C74A0u;
        goto label_4c74a0;
    }
    ctx->pc = 0x4C7498u;
    SET_GPR_U32(ctx, 31, 0x4C74A0u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C74A0u; }
        if (ctx->pc != 0x4C74A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C74A0u; }
        if (ctx->pc != 0x4C74A0u) { return; }
    }
    ctx->pc = 0x4C74A0u;
label_4c74a0:
    // 0x4c74a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4c74a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c74a4:
    // 0x4c74a4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4c74a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4c74a8:
    // 0x4c74a8: 0xc04cd60  jal         func_133580
label_4c74ac:
    if (ctx->pc == 0x4C74ACu) {
        ctx->pc = 0x4C74ACu;
            // 0x4c74ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C74B0u;
        goto label_4c74b0;
    }
    ctx->pc = 0x4C74A8u;
    SET_GPR_U32(ctx, 31, 0x4C74B0u);
    ctx->pc = 0x4C74ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C74A8u;
            // 0x4c74ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C74B0u; }
        if (ctx->pc != 0x4C74B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C74B0u; }
        if (ctx->pc != 0x4C74B0u) { return; }
    }
    ctx->pc = 0x4C74B0u;
label_4c74b0:
    // 0x4c74b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4c74b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4c74b4:
    // 0x4c74b4: 0xc04c650  jal         func_131940
label_4c74b8:
    if (ctx->pc == 0x4C74B8u) {
        ctx->pc = 0x4C74B8u;
            // 0x4c74b8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C74BCu;
        goto label_4c74bc;
    }
    ctx->pc = 0x4C74B4u;
    SET_GPR_U32(ctx, 31, 0x4C74BCu);
    ctx->pc = 0x4C74B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C74B4u;
            // 0x4c74b8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C74BCu; }
        if (ctx->pc != 0x4C74BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C74BCu; }
        if (ctx->pc != 0x4C74BCu) { return; }
    }
    ctx->pc = 0x4C74BCu;
label_4c74bc:
    // 0x4c74bc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4c74bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4c74c0:
    // 0x4c74c0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4c74c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c74c4:
    // 0x4c74c4: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x4c74c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_4c74c8:
    // 0x4c74c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4c74c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c74cc:
    // 0x4c74cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4c74ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c74d0:
    // 0x4c74d0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4c74d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4c74d4:
    // 0x4c74d4: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
label_4c74d8:
    if (ctx->pc == 0x4C74D8u) {
        ctx->pc = 0x4C74D8u;
            // 0x4c74d8: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x4C74DCu;
        goto label_4c74dc;
    }
    ctx->pc = 0x4C74D4u;
    {
        const bool branch_taken_0x4c74d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C74D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C74D4u;
            // 0x4c74d8: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c74d4) {
            ctx->pc = 0x4C762Cu;
            goto label_4c762c;
        }
    }
    ctx->pc = 0x4C74DCu;
label_4c74dc:
    // 0x4c74dc: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4c74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4c74e0:
    // 0x4c74e0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4c74e4:
    if (ctx->pc == 0x4C74E4u) {
        ctx->pc = 0x4C74E8u;
        goto label_4c74e8;
    }
    ctx->pc = 0x4C74E0u;
    {
        const bool branch_taken_0x4c74e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c74e0) {
            ctx->pc = 0x4C754Cu;
            goto label_4c754c;
        }
    }
    ctx->pc = 0x4C74E8u;
label_4c74e8:
    // 0x4c74e8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4c74e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4c74ec:
    // 0x4c74ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c74ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c74f0:
    // 0x4c74f0: 0xc04cd60  jal         func_133580
label_4c74f4:
    if (ctx->pc == 0x4C74F4u) {
        ctx->pc = 0x4C74F4u;
            // 0x4c74f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C74F8u;
        goto label_4c74f8;
    }
    ctx->pc = 0x4C74F0u;
    SET_GPR_U32(ctx, 31, 0x4C74F8u);
    ctx->pc = 0x4C74F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C74F0u;
            // 0x4c74f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C74F8u; }
        if (ctx->pc != 0x4C74F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C74F8u; }
        if (ctx->pc != 0x4C74F8u) { return; }
    }
    ctx->pc = 0x4C74F8u;
label_4c74f8:
    // 0x4c74f8: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x4c74f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_4c74fc:
    // 0x4c74fc: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4c74fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4c7500:
    // 0x4c7500: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4c7500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c7504:
    // 0x4c7504: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c7504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c7508:
    // 0x4c7508: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c7508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c750c:
    // 0x4c750c: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4c750cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_4c7510:
    // 0x4c7510: 0xc04cfcc  jal         func_133F30
label_4c7514:
    if (ctx->pc == 0x4C7514u) {
        ctx->pc = 0x4C7514u;
            // 0x4c7514: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7518u;
        goto label_4c7518;
    }
    ctx->pc = 0x4C7510u;
    SET_GPR_U32(ctx, 31, 0x4C7518u);
    ctx->pc = 0x4C7514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7510u;
            // 0x4c7514: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7518u; }
        if (ctx->pc != 0x4C7518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7518u; }
        if (ctx->pc != 0x4C7518u) { return; }
    }
    ctx->pc = 0x4C7518u;
label_4c7518:
    // 0x4c7518: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x4c7518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_4c751c:
    // 0x4c751c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4c751cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4c7520:
    // 0x4c7520: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x4c7520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4c7524:
    // 0x4c7524: 0xc054bbc  jal         func_152EF0
label_4c7528:
    if (ctx->pc == 0x4C7528u) {
        ctx->pc = 0x4C7528u;
            // 0x4c7528: 0xc68c0054  lwc1        $f12, 0x54($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4C752Cu;
        goto label_4c752c;
    }
    ctx->pc = 0x4C7524u;
    SET_GPR_U32(ctx, 31, 0x4C752Cu);
    ctx->pc = 0x4C7528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7524u;
            // 0x4c7528: 0xc68c0054  lwc1        $f12, 0x54($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C752Cu; }
        if (ctx->pc != 0x4C752Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C752Cu; }
        if (ctx->pc != 0x4C752Cu) { return; }
    }
    ctx->pc = 0x4C752Cu;
label_4c752c:
    // 0x4c752c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x4c752cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_4c7530:
    // 0x4c7530: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4c7530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c7534:
    // 0x4c7534: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4c7534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c7538:
    // 0x4c7538: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4c7538u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4c753c:
    // 0x4c753c: 0xc054c2c  jal         func_1530B0
label_4c7540:
    if (ctx->pc == 0x4C7540u) {
        ctx->pc = 0x4C7540u;
            // 0x4c7540: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7544u;
        goto label_4c7544;
    }
    ctx->pc = 0x4C753Cu;
    SET_GPR_U32(ctx, 31, 0x4C7544u);
    ctx->pc = 0x4C7540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C753Cu;
            // 0x4c7540: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7544u; }
        if (ctx->pc != 0x4C7544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7544u; }
        if (ctx->pc != 0x4C7544u) { return; }
    }
    ctx->pc = 0x4C7544u;
label_4c7544:
    // 0x4c7544: 0x1000003a  b           . + 4 + (0x3A << 2)
label_4c7548:
    if (ctx->pc == 0x4C7548u) {
        ctx->pc = 0x4C7548u;
            // 0x4c7548: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x4C754Cu;
        goto label_4c754c;
    }
    ctx->pc = 0x4C7544u;
    {
        const bool branch_taken_0x4c7544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7544u;
            // 0x4c7548: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7544) {
            ctx->pc = 0x4C7630u;
            goto label_4c7630;
        }
    }
    ctx->pc = 0x4C754Cu;
label_4c754c:
    // 0x4c754c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c754cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c7550:
    // 0x4c7550: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4c7550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4c7554:
    // 0x4c7554: 0x8c48e3c0  lw          $t0, -0x1C40($v0)
    ctx->pc = 0x4c7554u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4c7558:
    // 0x4c7558: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4c7558u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4c755c:
    // 0x4c755c: 0x8c86e3d8  lw          $a2, -0x1C28($a0)
    ctx->pc = 0x4c755cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960088)));
label_4c7560:
    // 0x4c7560: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4c7560u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4c7564:
    // 0x4c7564: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4c7564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4c7568:
    // 0x4c7568: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4c7568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4c756c:
    // 0x4c756c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c756cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c7570:
    // 0x4c7570: 0x8c49e360  lw          $t1, -0x1CA0($v0)
    ctx->pc = 0x4c7570u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_4c7574:
    // 0x4c7574: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4c7574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4c7578:
    // 0x4c7578: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4c7578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4c757c:
    // 0x4c757c: 0x8c88e3b0  lw          $t0, -0x1C50($a0)
    ctx->pc = 0x4c757cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960048)));
label_4c7580:
    // 0x4c7580: 0x62180  sll         $a0, $a2, 6
    ctx->pc = 0x4c7580u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_4c7584:
    // 0x4c7584: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4c7584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_4c7588:
    // 0x4c7588: 0x1249021  addu        $s2, $t1, $a0
    ctx->pc = 0x4c7588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_4c758c:
    // 0x4c758c: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x4c758cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_4c7590:
    // 0x4c7590: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x4c7590u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_4c7594:
    // 0x4c7594: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4c7594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4c7598:
    // 0x4c7598: 0x8cede3d8  lw          $t5, -0x1C28($a3)
    ctx->pc = 0x4c7598u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_4c759c:
    // 0x4c759c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4c759cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4c75a0:
    // 0x4c75a0: 0x8c8be3b8  lw          $t3, -0x1C48($a0)
    ctx->pc = 0x4c75a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_4c75a4:
    // 0x4c75a4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4c75a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4c75a8:
    // 0x4c75a8: 0x8ccce378  lw          $t4, -0x1C88($a2)
    ctx->pc = 0x4c75a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294959992)));
label_4c75ac:
    // 0x4c75ac: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x4c75acu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
label_4c75b0:
    // 0x4c75b0: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4c75b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4c75b4:
    // 0x4c75b4: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x4c75b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_4c75b8:
    // 0x4c75b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c75b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c75bc:
    // 0x4c75bc: 0x18d8821  addu        $s1, $t4, $t5
    ctx->pc = 0x4c75bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_4c75c0:
    // 0x4c75c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4c75c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c75c4:
    // 0x4c75c4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x4c75c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_4c75c8:
    // 0x4c75c8: 0x8c6b0028  lw          $t3, 0x28($v1)
    ctx->pc = 0x4c75c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4c75cc:
    // 0x4c75cc: 0x8d02e3c0  lw          $v0, -0x1C40($t0)
    ctx->pc = 0x4c75ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960064)));
label_4c75d0:
    // 0x4c75d0: 0x8d43e3d8  lw          $v1, -0x1C28($t2)
    ctx->pc = 0x4c75d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4c75d4:
    // 0x4c75d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c75d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c75d8:
    // 0x4c75d8: 0xace2e3c0  sw          $v0, -0x1C40($a3)
    ctx->pc = 0x4c75d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960064), GPR_U32(ctx, 2));
label_4c75dc:
    // 0x4c75dc: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x4c75dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_4c75e0:
    // 0x4c75e0: 0xc04cd60  jal         func_133580
label_4c75e4:
    if (ctx->pc == 0x4C75E4u) {
        ctx->pc = 0x4C75E4u;
            // 0x4c75e4: 0xad23e3d8  sw          $v1, -0x1C28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294960088), GPR_U32(ctx, 3));
        ctx->pc = 0x4C75E8u;
        goto label_4c75e8;
    }
    ctx->pc = 0x4C75E0u;
    SET_GPR_U32(ctx, 31, 0x4C75E8u);
    ctx->pc = 0x4C75E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C75E0u;
            // 0x4c75e4: 0xad23e3d8  sw          $v1, -0x1C28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294960088), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C75E8u; }
        if (ctx->pc != 0x4C75E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C75E8u; }
        if (ctx->pc != 0x4C75E8u) { return; }
    }
    ctx->pc = 0x4C75E8u;
label_4c75e8:
    // 0x4c75e8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4c75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4c75ec:
    // 0x4c75ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c75ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c75f0:
    // 0x4c75f0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4c75f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4c75f4:
    // 0x4c75f4: 0xc04e4a4  jal         func_139290
label_4c75f8:
    if (ctx->pc == 0x4C75F8u) {
        ctx->pc = 0x4C75F8u;
            // 0x4c75f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C75FCu;
        goto label_4c75fc;
    }
    ctx->pc = 0x4C75F4u;
    SET_GPR_U32(ctx, 31, 0x4C75FCu);
    ctx->pc = 0x4C75F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C75F4u;
            // 0x4c75f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C75FCu; }
        if (ctx->pc != 0x4C75FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C75FCu; }
        if (ctx->pc != 0x4C75FCu) { return; }
    }
    ctx->pc = 0x4C75FCu;
label_4c75fc:
    // 0x4c75fc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4c75fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4c7600:
    // 0x4c7600: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4c7600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4c7604:
    // 0x4c7604: 0x320f809  jalr        $t9
label_4c7608:
    if (ctx->pc == 0x4C7608u) {
        ctx->pc = 0x4C7608u;
            // 0x4c7608: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C760Cu;
        goto label_4c760c;
    }
    ctx->pc = 0x4C7604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C760Cu);
        ctx->pc = 0x4C7608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7604u;
            // 0x4c7608: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C760Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C760Cu; }
            if (ctx->pc != 0x4C760Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C760Cu;
label_4c760c:
    // 0x4c760c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4c760cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4c7610:
    // 0x4c7610: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4c7610u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4c7614:
    // 0x4c7614: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c7614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c7618:
    // 0x4c7618: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c7618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c761c:
    // 0x4c761c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4c761cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c7620:
    // 0x4c7620: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x4c7620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_4c7624:
    // 0x4c7624: 0xc04cfcc  jal         func_133F30
label_4c7628:
    if (ctx->pc == 0x4C7628u) {
        ctx->pc = 0x4C7628u;
            // 0x4c7628: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C762Cu;
        goto label_4c762c;
    }
    ctx->pc = 0x4C7624u;
    SET_GPR_U32(ctx, 31, 0x4C762Cu);
    ctx->pc = 0x4C7628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7624u;
            // 0x4c7628: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C762Cu; }
        if (ctx->pc != 0x4C762Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C762Cu; }
        if (ctx->pc != 0x4C762Cu) { return; }
    }
    ctx->pc = 0x4C762Cu;
label_4c762c:
    // 0x4c762c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4c762cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4c7630:
    // 0x4c7630: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4c7630u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4c7634:
    // 0x4c7634: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4c7634u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4c7638:
    // 0x4c7638: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4c7638u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4c763c:
    // 0x4c763c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4c763cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c7640:
    // 0x4c7640: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c7640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c7644:
    // 0x4c7644: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c7644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c7648:
    // 0x4c7648: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c7648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c764c:
    // 0x4c764c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c764cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c7650:
    // 0x4c7650: 0x3e00008  jr          $ra
label_4c7654:
    if (ctx->pc == 0x4C7654u) {
        ctx->pc = 0x4C7654u;
            // 0x4c7654: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4C7658u;
        goto label_4c7658;
    }
    ctx->pc = 0x4C7650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C7654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7650u;
            // 0x4c7654: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C7658u;
label_4c7658:
    // 0x4c7658: 0x0  nop
    ctx->pc = 0x4c7658u;
    // NOP
label_4c765c:
    // 0x4c765c: 0x0  nop
    ctx->pc = 0x4c765cu;
    // NOP
label_4c7660:
    // 0x4c7660: 0x3e00008  jr          $ra
label_4c7664:
    if (ctx->pc == 0x4C7664u) {
        ctx->pc = 0x4C7664u;
            // 0x4c7664: 0x24025a46  addiu       $v0, $zero, 0x5A46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23110));
        ctx->pc = 0x4C7668u;
        goto label_4c7668;
    }
    ctx->pc = 0x4C7660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C7664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7660u;
            // 0x4c7664: 0x24025a46  addiu       $v0, $zero, 0x5A46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23110));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C7668u;
label_4c7668:
    // 0x4c7668: 0x0  nop
    ctx->pc = 0x4c7668u;
    // NOP
label_4c766c:
    // 0x4c766c: 0x0  nop
    ctx->pc = 0x4c766cu;
    // NOP
label_4c7670:
    // 0x4c7670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c7670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4c7674:
    // 0x4c7674: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4c7674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4c7678:
    // 0x4c7678: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4c7678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4c767c:
    // 0x4c767c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c7680:
    // 0x4c7680: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4c7680u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c7684:
    // 0x4c7684: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c7684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c7688:
    // 0x4c7688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c7688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c768c:
    // 0x4c768c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c7690:
    // 0x4c7690: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4c7690u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4c7694:
    // 0x4c7694: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4c7698:
    if (ctx->pc == 0x4C7698u) {
        ctx->pc = 0x4C7698u;
            // 0x4c7698: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C769Cu;
        goto label_4c769c;
    }
    ctx->pc = 0x4C7694u;
    {
        const bool branch_taken_0x4c7694 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7694u;
            // 0x4c7698: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7694) {
            ctx->pc = 0x4C76D8u;
            goto label_4c76d8;
        }
    }
    ctx->pc = 0x4C769Cu;
label_4c769c:
    // 0x4c769c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4c769cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c76a0:
    // 0x4c76a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4c76a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c76a4:
    // 0x4c76a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4c76a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c76a8:
    // 0x4c76a8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4c76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4c76ac:
    // 0x4c76ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4c76acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4c76b0:
    // 0x4c76b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4c76b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c76b4:
    // 0x4c76b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c76b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c76b8:
    // 0x4c76b8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4c76b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4c76bc:
    // 0x4c76bc: 0x320f809  jalr        $t9
label_4c76c0:
    if (ctx->pc == 0x4C76C0u) {
        ctx->pc = 0x4C76C4u;
        goto label_4c76c4;
    }
    ctx->pc = 0x4C76BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C76C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C76C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C76C4u; }
            if (ctx->pc != 0x4C76C4u) { return; }
        }
        }
    }
    ctx->pc = 0x4C76C4u;
label_4c76c4:
    // 0x4c76c4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4c76c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4c76c8:
    // 0x4c76c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4c76c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4c76cc:
    // 0x4c76cc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4c76ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4c76d0:
    // 0x4c76d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4c76d4:
    if (ctx->pc == 0x4C76D4u) {
        ctx->pc = 0x4C76D4u;
            // 0x4c76d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4C76D8u;
        goto label_4c76d8;
    }
    ctx->pc = 0x4C76D0u;
    {
        const bool branch_taken_0x4c76d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C76D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C76D0u;
            // 0x4c76d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c76d0) {
            ctx->pc = 0x4C76A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c76a8;
        }
    }
    ctx->pc = 0x4C76D8u;
label_4c76d8:
    // 0x4c76d8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4c76d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c76dc:
    // 0x4c76dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4c76dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4c76e0:
    // 0x4c76e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4c76e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c76e4:
    // 0x4c76e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c76e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c76e8:
    // 0x4c76e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c76e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c76ec:
    // 0x4c76ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c76ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c76f0:
    // 0x4c76f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c76f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c76f4:
    // 0x4c76f4: 0x3e00008  jr          $ra
label_4c76f8:
    if (ctx->pc == 0x4C76F8u) {
        ctx->pc = 0x4C76F8u;
            // 0x4c76f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4C76FCu;
        goto label_4c76fc;
    }
    ctx->pc = 0x4C76F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C76F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C76F4u;
            // 0x4c76f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C76FCu;
label_4c76fc:
    // 0x4c76fc: 0x0  nop
    ctx->pc = 0x4c76fcu;
    // NOP
label_4c7700:
    // 0x4c7700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c7700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c7704:
    // 0x4c7704: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c7704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c7708:
    // 0x4c7708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c7708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c770c:
    // 0x4c770c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4c770cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4c7710:
    // 0x4c7710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c7710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c7714:
    // 0x4c7714: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4c7714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4c7718:
    // 0x4c7718: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4c7718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c771c:
    // 0x4c771c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4c771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4c7720:
    // 0x4c7720: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c7720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c7724:
    // 0x4c7724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c7724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c7728:
    // 0x4c7728: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4c7728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4c772c:
    // 0x4c772c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4c772cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c7730:
    // 0x4c7730: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4c7730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4c7734:
    // 0x4c7734: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4c7734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4c7738:
    // 0x4c7738: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4c7738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4c773c:
    // 0x4c773c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4c773cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4c7740:
    // 0x4c7740: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4c7740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4c7744:
    // 0x4c7744: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4c7744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4c7748:
    // 0x4c7748: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4c7748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4c774c:
    // 0x4c774c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4c774cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4c7750:
    // 0x4c7750: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4c7750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4c7754:
    // 0x4c7754: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c7754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c7758:
    // 0x4c7758: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4c7758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c775c:
    // 0x4c775c: 0xc0a997c  jal         func_2A65F0
label_4c7760:
    if (ctx->pc == 0x4C7760u) {
        ctx->pc = 0x4C7760u;
            // 0x4c7760: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4C7764u;
        goto label_4c7764;
    }
    ctx->pc = 0x4C775Cu;
    SET_GPR_U32(ctx, 31, 0x4C7764u);
    ctx->pc = 0x4C7760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C775Cu;
            // 0x4c7760: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7764u; }
        if (ctx->pc != 0x4C7764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7764u; }
        if (ctx->pc != 0x4C7764u) { return; }
    }
    ctx->pc = 0x4C7764u;
label_4c7764:
    // 0x4c7764: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4c7764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4c7768:
    // 0x4c7768: 0xc0d879c  jal         func_361E70
label_4c776c:
    if (ctx->pc == 0x4C776Cu) {
        ctx->pc = 0x4C776Cu;
            // 0x4c776c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7770u;
        goto label_4c7770;
    }
    ctx->pc = 0x4C7768u;
    SET_GPR_U32(ctx, 31, 0x4C7770u);
    ctx->pc = 0x4C776Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7768u;
            // 0x4c776c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7770u; }
        if (ctx->pc != 0x4C7770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7770u; }
        if (ctx->pc != 0x4C7770u) { return; }
    }
    ctx->pc = 0x4C7770u;
label_4c7770:
    // 0x4c7770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c7770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c7774:
    // 0x4c7774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c7774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c7778:
    // 0x4c7778: 0x3e00008  jr          $ra
label_4c777c:
    if (ctx->pc == 0x4C777Cu) {
        ctx->pc = 0x4C777Cu;
            // 0x4c777c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C7780u;
        goto label_4c7780;
    }
    ctx->pc = 0x4C7778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C777Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7778u;
            // 0x4c777c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C7780u;
label_4c7780:
    // 0x4c7780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c7780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c7784:
    // 0x4c7784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c7784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c7788:
    // 0x4c7788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c7788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c778c:
    // 0x4c778c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4c778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4c7790:
    // 0x4c7790: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4c7794:
    if (ctx->pc == 0x4C7794u) {
        ctx->pc = 0x4C7794u;
            // 0x4c7794: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7798u;
        goto label_4c7798;
    }
    ctx->pc = 0x4C7790u;
    {
        const bool branch_taken_0x4c7790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7790u;
            // 0x4c7794: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7790) {
            ctx->pc = 0x4C78B0u;
            goto label_4c78b0;
        }
    }
    ctx->pc = 0x4C7798u;
label_4c7798:
    // 0x4c7798: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c7798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c779c:
    // 0x4c779c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4c779cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4c77a0:
    // 0x4c77a0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4c77a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4c77a4:
    // 0x4c77a4: 0xc075128  jal         func_1D44A0
label_4c77a8:
    if (ctx->pc == 0x4C77A8u) {
        ctx->pc = 0x4C77A8u;
            // 0x4c77a8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4C77ACu;
        goto label_4c77ac;
    }
    ctx->pc = 0x4C77A4u;
    SET_GPR_U32(ctx, 31, 0x4C77ACu);
    ctx->pc = 0x4C77A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C77A4u;
            // 0x4c77a8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C77ACu; }
        if (ctx->pc != 0x4C77ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C77ACu; }
        if (ctx->pc != 0x4C77ACu) { return; }
    }
    ctx->pc = 0x4C77ACu;
label_4c77ac:
    // 0x4c77ac: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4c77acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4c77b0:
    // 0x4c77b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c77b4:
    // 0x4c77b4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4c77b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4c77b8:
    // 0x4c77b8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4c77b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4c77bc:
    // 0x4c77bc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4c77bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c77c0:
    // 0x4c77c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4c77c4:
    if (ctx->pc == 0x4C77C4u) {
        ctx->pc = 0x4C77C4u;
            // 0x4c77c4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4C77C8u;
        goto label_4c77c8;
    }
    ctx->pc = 0x4C77C0u;
    {
        const bool branch_taken_0x4c77c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C77C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C77C0u;
            // 0x4c77c4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c77c0) {
            ctx->pc = 0x4C77D0u;
            goto label_4c77d0;
        }
    }
    ctx->pc = 0x4C77C8u;
label_4c77c8:
    // 0x4c77c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c77cc:
    // 0x4c77cc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4c77ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4c77d0:
    // 0x4c77d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c77d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c77d4:
    // 0x4c77d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c77d8:
    // 0x4c77d8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4c77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4c77dc:
    // 0x4c77dc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4c77dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4c77e0:
    // 0x4c77e0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4c77e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c77e4:
    // 0x4c77e4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4c77e8:
    if (ctx->pc == 0x4C77E8u) {
        ctx->pc = 0x4C77E8u;
            // 0x4c77e8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4C77ECu;
        goto label_4c77ec;
    }
    ctx->pc = 0x4C77E4u;
    {
        const bool branch_taken_0x4c77e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c77e4) {
            ctx->pc = 0x4C77E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C77E4u;
            // 0x4c77e8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C77F8u;
            goto label_4c77f8;
        }
    }
    ctx->pc = 0x4C77ECu;
label_4c77ec:
    // 0x4c77ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c77ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c77f0:
    // 0x4c77f0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4c77f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4c77f4:
    // 0x4c77f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c77f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c77f8:
    // 0x4c77f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c77f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c77fc:
    // 0x4c77fc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4c77fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4c7800:
    // 0x4c7800: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4c7800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4c7804:
    // 0x4c7804: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4c7804u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c7808:
    // 0x4c7808: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4c780c:
    if (ctx->pc == 0x4C780Cu) {
        ctx->pc = 0x4C780Cu;
            // 0x4c780c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4C7810u;
        goto label_4c7810;
    }
    ctx->pc = 0x4C7808u;
    {
        const bool branch_taken_0x4c7808 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7808) {
            ctx->pc = 0x4C780Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7808u;
            // 0x4c780c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C781Cu;
            goto label_4c781c;
        }
    }
    ctx->pc = 0x4C7810u;
label_4c7810:
    // 0x4c7810: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c7810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c7814:
    // 0x4c7814: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4c7814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4c7818:
    // 0x4c7818: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4c7818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c781c:
    // 0x4c781c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4c781cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4c7820:
    // 0x4c7820: 0x320f809  jalr        $t9
label_4c7824:
    if (ctx->pc == 0x4C7824u) {
        ctx->pc = 0x4C7824u;
            // 0x4c7824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7828u;
        goto label_4c7828;
    }
    ctx->pc = 0x4C7820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C7828u);
        ctx->pc = 0x4C7824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7820u;
            // 0x4c7824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C7828u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C7828u; }
            if (ctx->pc != 0x4C7828u) { return; }
        }
        }
    }
    ctx->pc = 0x4C7828u;
label_4c7828:
    // 0x4c7828: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4c7828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4c782c:
    // 0x4c782c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c782cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c7830:
    // 0x4c7830: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4c7830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4c7834:
    // 0x4c7834: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4c7834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4c7838:
    // 0x4c7838: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4c7838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4c783c:
    // 0x4c783c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4c783cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c7840:
    // 0x4c7840: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4c7844:
    if (ctx->pc == 0x4C7844u) {
        ctx->pc = 0x4C7844u;
            // 0x4c7844: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4C7848u;
        goto label_4c7848;
    }
    ctx->pc = 0x4C7840u;
    {
        const bool branch_taken_0x4c7840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7840) {
            ctx->pc = 0x4C7844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7840u;
            // 0x4c7844: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7854u;
            goto label_4c7854;
        }
    }
    ctx->pc = 0x4C7848u;
label_4c7848:
    // 0x4c7848: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c7848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c784c:
    // 0x4c784c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4c784cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4c7850:
    // 0x4c7850: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4c7850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4c7854:
    // 0x4c7854: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c7854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c7858:
    // 0x4c7858: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4c7858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4c785c:
    // 0x4c785c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4c785cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4c7860:
    // 0x4c7860: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4c7860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4c7864:
    // 0x4c7864: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4c7864u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c7868:
    // 0x4c7868: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4c786c:
    if (ctx->pc == 0x4C786Cu) {
        ctx->pc = 0x4C7870u;
        goto label_4c7870;
    }
    ctx->pc = 0x4C7868u;
    {
        const bool branch_taken_0x4c7868 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7868) {
            ctx->pc = 0x4C7878u;
            goto label_4c7878;
        }
    }
    ctx->pc = 0x4C7870u;
label_4c7870:
    // 0x4c7870: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c7870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c7874:
    // 0x4c7874: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4c7874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4c7878:
    // 0x4c7878: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c7878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c787c:
    // 0x4c787c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4c787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4c7880:
    // 0x4c7880: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4c7880u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c7884:
    // 0x4c7884: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4c7888:
    if (ctx->pc == 0x4C7888u) {
        ctx->pc = 0x4C788Cu;
        goto label_4c788c;
    }
    ctx->pc = 0x4C7884u;
    {
        const bool branch_taken_0x4c7884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7884) {
            ctx->pc = 0x4C7894u;
            goto label_4c7894;
        }
    }
    ctx->pc = 0x4C788Cu;
label_4c788c:
    // 0x4c788c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c788cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c7890:
    // 0x4c7890: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4c7890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4c7894:
    // 0x4c7894: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c7894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c7898:
    // 0x4c7898: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4c7898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4c789c:
    // 0x4c789c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4c789cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c78a0:
    // 0x4c78a0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4c78a4:
    if (ctx->pc == 0x4C78A4u) {
        ctx->pc = 0x4C78A4u;
            // 0x4c78a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4C78A8u;
        goto label_4c78a8;
    }
    ctx->pc = 0x4C78A0u;
    {
        const bool branch_taken_0x4c78a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c78a0) {
            ctx->pc = 0x4C78A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C78A0u;
            // 0x4c78a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C78B4u;
            goto label_4c78b4;
        }
    }
    ctx->pc = 0x4C78A8u;
label_4c78a8:
    // 0x4c78a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c78a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c78ac:
    // 0x4c78ac: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4c78acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4c78b0:
    // 0x4c78b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c78b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c78b4:
    // 0x4c78b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c78b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c78b8:
    // 0x4c78b8: 0x3e00008  jr          $ra
label_4c78bc:
    if (ctx->pc == 0x4C78BCu) {
        ctx->pc = 0x4C78BCu;
            // 0x4c78bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4C78C0u;
        goto label_4c78c0;
    }
    ctx->pc = 0x4C78B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C78BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C78B8u;
            // 0x4c78bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C78C0u;
label_4c78c0:
    // 0x4c78c0: 0x8131bd8  j           func_4C6F60
label_4c78c4:
    if (ctx->pc == 0x4C78C4u) {
        ctx->pc = 0x4C78C4u;
            // 0x4c78c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4C78C8u;
        goto label_4c78c8;
    }
    ctx->pc = 0x4C78C0u;
    ctx->pc = 0x4C78C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C78C0u;
            // 0x4c78c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C6F60u;
    {
        auto targetFn = runtime->lookupFunction(0x4C6F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C78C8u;
label_4c78c8:
    // 0x4c78c8: 0x0  nop
    ctx->pc = 0x4c78c8u;
    // NOP
label_4c78cc:
    // 0x4c78cc: 0x0  nop
    ctx->pc = 0x4c78ccu;
    // NOP
label_4c78d0:
    // 0x4c78d0: 0x8131a88  j           func_4C6A20
label_4c78d4:
    if (ctx->pc == 0x4C78D4u) {
        ctx->pc = 0x4C78D4u;
            // 0x4c78d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4C78D8u;
        goto label_4c78d8;
    }
    ctx->pc = 0x4C78D0u;
    ctx->pc = 0x4C78D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C78D0u;
            // 0x4c78d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C6A20u;
    if (runtime->hasFunction(0x4C6A20u)) {
        auto targetFn = runtime->lookupFunction(0x4C6A20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004C6A20_0x4c6a20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4C78D8u;
label_4c78d8:
    // 0x4c78d8: 0x0  nop
    ctx->pc = 0x4c78d8u;
    // NOP
label_4c78dc:
    // 0x4c78dc: 0x0  nop
    ctx->pc = 0x4c78dcu;
    // NOP
label_4c78e0:
    // 0x4c78e0: 0x8131a64  j           func_4C6990
label_4c78e4:
    if (ctx->pc == 0x4C78E4u) {
        ctx->pc = 0x4C78E4u;
            // 0x4c78e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4C78E8u;
        goto label_4c78e8;
    }
    ctx->pc = 0x4C78E0u;
    ctx->pc = 0x4C78E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C78E0u;
            // 0x4c78e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C6990u;
    {
        auto targetFn = runtime->lookupFunction(0x4C6990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C78E8u;
label_4c78e8:
    // 0x4c78e8: 0x0  nop
    ctx->pc = 0x4c78e8u;
    // NOP
label_4c78ec:
    // 0x4c78ec: 0x0  nop
    ctx->pc = 0x4c78ecu;
    // NOP
label_4c78f0:
    // 0x4c78f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c78f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4c78f4:
    // 0x4c78f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4c78f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4c78f8:
    // 0x4c78f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c78f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c78fc:
    // 0x4c78fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c78fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c7900:
    // 0x4c7900: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4c7900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c7904:
    // 0x4c7904: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c7904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c7908:
    // 0x4c7908: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4c7908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c790c:
    // 0x4c790c: 0x1260003f  beqz        $s3, . + 4 + (0x3F << 2)
label_4c7910:
    if (ctx->pc == 0x4C7910u) {
        ctx->pc = 0x4C7910u;
            // 0x4c7910: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4C7914u;
        goto label_4c7914;
    }
    ctx->pc = 0x4C790Cu;
    {
        const bool branch_taken_0x4c790c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C7910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C790Cu;
            // 0x4c7910: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c790c) {
            ctx->pc = 0x4C7A0Cu;
            goto label_4c7a0c;
        }
    }
    ctx->pc = 0x4C7914u;
label_4c7914:
    // 0x4c7914: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c7914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c7918:
    // 0x4c7918: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c7918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c791c:
    // 0x4c791c: 0x24421830  addiu       $v0, $v0, 0x1830
    ctx->pc = 0x4c791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6192));
label_4c7920:
    // 0x4c7920: 0x24631838  addiu       $v1, $v1, 0x1838
    ctx->pc = 0x4c7920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6200));
label_4c7924:
    // 0x4c7924: 0xae62009c  sw          $v0, 0x9C($s3)
    ctx->pc = 0x4c7924u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 2));
label_4c7928:
    // 0x4c7928: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x4c7928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_4c792c:
    // 0x4c792c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c792cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c7930:
    // 0x4c7930: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x4c7930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_4c7934:
    // 0x4c7934: 0x24421870  addiu       $v0, $v0, 0x1870
    ctx->pc = 0x4c7934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6256));
label_4c7938:
    // 0x4c7938: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_4c793c:
    if (ctx->pc == 0x4C793Cu) {
        ctx->pc = 0x4C793Cu;
            // 0x4c793c: 0xae620070  sw          $v0, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x4C7940u;
        goto label_4c7940;
    }
    ctx->pc = 0x4C7938u;
    {
        const bool branch_taken_0x4c7938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C793Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7938u;
            // 0x4c793c: 0xae620070  sw          $v0, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7938) {
            ctx->pc = 0x4C7960u;
            goto label_4c7960;
        }
    }
    ctx->pc = 0x4C7940u;
label_4c7940:
    // 0x4c7940: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c7940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c7944:
    // 0x4c7944: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c7944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c7948:
    // 0x4c7948: 0x24631990  addiu       $v1, $v1, 0x1990
    ctx->pc = 0x4c7948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6544));
label_4c794c:
    // 0x4c794c: 0x244219c8  addiu       $v0, $v0, 0x19C8
    ctx->pc = 0x4c794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6600));
label_4c7950:
    // 0x4c7950: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x4c7950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_4c7954:
    // 0x4c7954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c7954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c7958:
    // 0x4c7958: 0xc131e8c  jal         func_4C7A30
label_4c795c:
    if (ctx->pc == 0x4C795Cu) {
        ctx->pc = 0x4C795Cu;
            // 0x4c795c: 0xae620070  sw          $v0, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x4C7960u;
        goto label_4c7960;
    }
    ctx->pc = 0x4C7958u;
    SET_GPR_U32(ctx, 31, 0x4C7960u);
    ctx->pc = 0x4C795Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7958u;
            // 0x4c795c: 0xae620070  sw          $v0, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C7A30u;
    if (runtime->hasFunction(0x4C7A30u)) {
        auto targetFn = runtime->lookupFunction(0x4C7A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7960u; }
        if (ctx->pc != 0x4C7960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C7A30_0x4c7a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7960u; }
        if (ctx->pc != 0x4C7960u) { return; }
    }
    ctx->pc = 0x4C7960u;
label_4c7960:
    // 0x4c7960: 0x52600025  beql        $s3, $zero, . + 4 + (0x25 << 2)
label_4c7964:
    if (ctx->pc == 0x4C7964u) {
        ctx->pc = 0x4C7964u;
            // 0x4c7964: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->pc = 0x4C7968u;
        goto label_4c7968;
    }
    ctx->pc = 0x4C7960u;
    {
        const bool branch_taken_0x4c7960 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7960) {
            ctx->pc = 0x4C7964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7960u;
            // 0x4c7964: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C79F8u;
            goto label_4c79f8;
        }
    }
    ctx->pc = 0x4C7968u;
label_4c7968:
    // 0x4c7968: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4c7968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4c796c:
    // 0x4c796c: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x4c796cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4c7970:
    // 0x4c7970: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4c7970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4c7974:
    // 0x4c7974: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x4c7974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4c7978:
    // 0x4c7978: 0x2301026  xor         $v0, $s1, $s0
    ctx->pc = 0x4c7978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
label_4c797c:
    // 0x4c797c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4c797cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4c7980:
    // 0x4c7980: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4c7980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4c7984:
    // 0x4c7984: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_4c7988:
    if (ctx->pc == 0x4C7988u) {
        ctx->pc = 0x4C798Cu;
        goto label_4c798c;
    }
    ctx->pc = 0x4C7984u;
    {
        const bool branch_taken_0x4c7984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7984) {
            ctx->pc = 0x4C79D8u;
            goto label_4c79d8;
        }
    }
    ctx->pc = 0x4C798Cu;
label_4c798c:
    // 0x4c798c: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x4c798cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_4c7990:
    // 0x4c7990: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4c7990u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4c7994:
    // 0x4c7994: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4c7994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4c7998:
    // 0x4c7998: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4c799c:
    if (ctx->pc == 0x4C799Cu) {
        ctx->pc = 0x4C79A0u;
        goto label_4c79a0;
    }
    ctx->pc = 0x4C7998u;
    {
        const bool branch_taken_0x4c7998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7998) {
            ctx->pc = 0x4C79B0u;
            goto label_4c79b0;
        }
    }
    ctx->pc = 0x4C79A0u;
label_4c79a0:
    // 0x4c79a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c79a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c79a4:
    // 0x4c79a4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c79a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c79a8:
    // 0x4c79a8: 0x320f809  jalr        $t9
label_4c79ac:
    if (ctx->pc == 0x4C79ACu) {
        ctx->pc = 0x4C79ACu;
            // 0x4c79ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C79B0u;
        goto label_4c79b0;
    }
    ctx->pc = 0x4C79A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C79B0u);
        ctx->pc = 0x4C79ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C79A8u;
            // 0x4c79ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C79B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C79B0u; }
            if (ctx->pc != 0x4C79B0u) { return; }
        }
        }
    }
    ctx->pc = 0x4C79B0u;
label_4c79b0:
    // 0x4c79b0: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x4c79b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_4c79b4:
    // 0x4c79b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4c79b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4c79b8:
    // 0x4c79b8: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x4c79b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4c79bc:
    // 0x4c79bc: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x4c79bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_4c79c0:
    // 0x4c79c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4c79c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4c79c4:
    // 0x4c79c4: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x4c79c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
label_4c79c8:
    // 0x4c79c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4c79c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4c79cc:
    // 0x4c79cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4c79ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4c79d0:
    // 0x4c79d0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_4c79d4:
    if (ctx->pc == 0x4C79D4u) {
        ctx->pc = 0x4C79D4u;
            // 0x4c79d4: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->pc = 0x4C79D8u;
        goto label_4c79d8;
    }
    ctx->pc = 0x4C79D0u;
    {
        const bool branch_taken_0x4c79d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c79d0) {
            ctx->pc = 0x4C79D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C79D0u;
            // 0x4c79d4: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c7990;
        }
    }
    ctx->pc = 0x4C79D8u;
label_4c79d8:
    // 0x4c79d8: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_4c79dc:
    if (ctx->pc == 0x4C79DCu) {
        ctx->pc = 0x4C79E0u;
        goto label_4c79e0;
    }
    ctx->pc = 0x4C79D8u;
    {
        const bool branch_taken_0x4c79d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c79d8) {
            ctx->pc = 0x4C79F4u;
            goto label_4c79f4;
        }
    }
    ctx->pc = 0x4C79E0u;
label_4c79e0:
    // 0x4c79e0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_4c79e4:
    if (ctx->pc == 0x4C79E4u) {
        ctx->pc = 0x4C79E8u;
        goto label_4c79e8;
    }
    ctx->pc = 0x4C79E0u;
    {
        const bool branch_taken_0x4c79e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c79e0) {
            ctx->pc = 0x4C79F4u;
            goto label_4c79f4;
        }
    }
    ctx->pc = 0x4C79E8u;
label_4c79e8:
    // 0x4c79e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c79e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c79ec:
    // 0x4c79ec: 0xc0b4b74  jal         func_2D2DD0
label_4c79f0:
    if (ctx->pc == 0x4C79F0u) {
        ctx->pc = 0x4C79F0u;
            // 0x4c79f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C79F4u;
        goto label_4c79f4;
    }
    ctx->pc = 0x4C79ECu;
    SET_GPR_U32(ctx, 31, 0x4C79F4u);
    ctx->pc = 0x4C79F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C79ECu;
            // 0x4c79f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2DD0u;
    if (runtime->hasFunction(0x2D2DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2D2DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C79F4u; }
        if (ctx->pc != 0x4C79F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2DD0_0x2d2dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C79F4u; }
        if (ctx->pc != 0x4C79F4u) { return; }
    }
    ctx->pc = 0x4C79F4u;
label_4c79f4:
    // 0x4c79f4: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x4c79f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_4c79f8:
    // 0x4c79f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c79f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4c79fc:
    // 0x4c79fc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4c7a00:
    if (ctx->pc == 0x4C7A00u) {
        ctx->pc = 0x4C7A00u;
            // 0x4c7a00: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7A04u;
        goto label_4c7a04;
    }
    ctx->pc = 0x4C79FCu;
    {
        const bool branch_taken_0x4c79fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c79fc) {
            ctx->pc = 0x4C7A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C79FCu;
            // 0x4c7a00: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7A10u;
            goto label_4c7a10;
        }
    }
    ctx->pc = 0x4C7A04u;
label_4c7a04:
    // 0x4c7a04: 0xc0400a8  jal         func_1002A0
label_4c7a08:
    if (ctx->pc == 0x4C7A08u) {
        ctx->pc = 0x4C7A08u;
            // 0x4c7a08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C7A0Cu;
        goto label_4c7a0c;
    }
    ctx->pc = 0x4C7A04u;
    SET_GPR_U32(ctx, 31, 0x4C7A0Cu);
    ctx->pc = 0x4C7A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7A04u;
            // 0x4c7a08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7A0Cu; }
        if (ctx->pc != 0x4C7A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7A0Cu; }
        if (ctx->pc != 0x4C7A0Cu) { return; }
    }
    ctx->pc = 0x4C7A0Cu;
label_4c7a0c:
    // 0x4c7a0c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4c7a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c7a10:
    // 0x4c7a10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c7a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4c7a14:
    // 0x4c7a14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c7a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c7a18:
    // 0x4c7a18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c7a18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c7a1c:
    // 0x4c7a1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c7a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c7a20:
    // 0x4c7a20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c7a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c7a24:
    // 0x4c7a24: 0x3e00008  jr          $ra
label_4c7a28:
    if (ctx->pc == 0x4C7A28u) {
        ctx->pc = 0x4C7A28u;
            // 0x4c7a28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4C7A2Cu;
        goto label_4c7a2c;
    }
    ctx->pc = 0x4C7A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C7A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7A24u;
            // 0x4c7a28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C7A2Cu;
label_4c7a2c:
    // 0x4c7a2c: 0x0  nop
    ctx->pc = 0x4c7a2cu;
    // NOP
}
