#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E7480
// Address: 0x3e7480 - 0x3e8100
void sub_003E7480_0x3e7480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7480_0x3e7480");
#endif

    switch (ctx->pc) {
        case 0x3e7480u: goto label_3e7480;
        case 0x3e7484u: goto label_3e7484;
        case 0x3e7488u: goto label_3e7488;
        case 0x3e748cu: goto label_3e748c;
        case 0x3e7490u: goto label_3e7490;
        case 0x3e7494u: goto label_3e7494;
        case 0x3e7498u: goto label_3e7498;
        case 0x3e749cu: goto label_3e749c;
        case 0x3e74a0u: goto label_3e74a0;
        case 0x3e74a4u: goto label_3e74a4;
        case 0x3e74a8u: goto label_3e74a8;
        case 0x3e74acu: goto label_3e74ac;
        case 0x3e74b0u: goto label_3e74b0;
        case 0x3e74b4u: goto label_3e74b4;
        case 0x3e74b8u: goto label_3e74b8;
        case 0x3e74bcu: goto label_3e74bc;
        case 0x3e74c0u: goto label_3e74c0;
        case 0x3e74c4u: goto label_3e74c4;
        case 0x3e74c8u: goto label_3e74c8;
        case 0x3e74ccu: goto label_3e74cc;
        case 0x3e74d0u: goto label_3e74d0;
        case 0x3e74d4u: goto label_3e74d4;
        case 0x3e74d8u: goto label_3e74d8;
        case 0x3e74dcu: goto label_3e74dc;
        case 0x3e74e0u: goto label_3e74e0;
        case 0x3e74e4u: goto label_3e74e4;
        case 0x3e74e8u: goto label_3e74e8;
        case 0x3e74ecu: goto label_3e74ec;
        case 0x3e74f0u: goto label_3e74f0;
        case 0x3e74f4u: goto label_3e74f4;
        case 0x3e74f8u: goto label_3e74f8;
        case 0x3e74fcu: goto label_3e74fc;
        case 0x3e7500u: goto label_3e7500;
        case 0x3e7504u: goto label_3e7504;
        case 0x3e7508u: goto label_3e7508;
        case 0x3e750cu: goto label_3e750c;
        case 0x3e7510u: goto label_3e7510;
        case 0x3e7514u: goto label_3e7514;
        case 0x3e7518u: goto label_3e7518;
        case 0x3e751cu: goto label_3e751c;
        case 0x3e7520u: goto label_3e7520;
        case 0x3e7524u: goto label_3e7524;
        case 0x3e7528u: goto label_3e7528;
        case 0x3e752cu: goto label_3e752c;
        case 0x3e7530u: goto label_3e7530;
        case 0x3e7534u: goto label_3e7534;
        case 0x3e7538u: goto label_3e7538;
        case 0x3e753cu: goto label_3e753c;
        case 0x3e7540u: goto label_3e7540;
        case 0x3e7544u: goto label_3e7544;
        case 0x3e7548u: goto label_3e7548;
        case 0x3e754cu: goto label_3e754c;
        case 0x3e7550u: goto label_3e7550;
        case 0x3e7554u: goto label_3e7554;
        case 0x3e7558u: goto label_3e7558;
        case 0x3e755cu: goto label_3e755c;
        case 0x3e7560u: goto label_3e7560;
        case 0x3e7564u: goto label_3e7564;
        case 0x3e7568u: goto label_3e7568;
        case 0x3e756cu: goto label_3e756c;
        case 0x3e7570u: goto label_3e7570;
        case 0x3e7574u: goto label_3e7574;
        case 0x3e7578u: goto label_3e7578;
        case 0x3e757cu: goto label_3e757c;
        case 0x3e7580u: goto label_3e7580;
        case 0x3e7584u: goto label_3e7584;
        case 0x3e7588u: goto label_3e7588;
        case 0x3e758cu: goto label_3e758c;
        case 0x3e7590u: goto label_3e7590;
        case 0x3e7594u: goto label_3e7594;
        case 0x3e7598u: goto label_3e7598;
        case 0x3e759cu: goto label_3e759c;
        case 0x3e75a0u: goto label_3e75a0;
        case 0x3e75a4u: goto label_3e75a4;
        case 0x3e75a8u: goto label_3e75a8;
        case 0x3e75acu: goto label_3e75ac;
        case 0x3e75b0u: goto label_3e75b0;
        case 0x3e75b4u: goto label_3e75b4;
        case 0x3e75b8u: goto label_3e75b8;
        case 0x3e75bcu: goto label_3e75bc;
        case 0x3e75c0u: goto label_3e75c0;
        case 0x3e75c4u: goto label_3e75c4;
        case 0x3e75c8u: goto label_3e75c8;
        case 0x3e75ccu: goto label_3e75cc;
        case 0x3e75d0u: goto label_3e75d0;
        case 0x3e75d4u: goto label_3e75d4;
        case 0x3e75d8u: goto label_3e75d8;
        case 0x3e75dcu: goto label_3e75dc;
        case 0x3e75e0u: goto label_3e75e0;
        case 0x3e75e4u: goto label_3e75e4;
        case 0x3e75e8u: goto label_3e75e8;
        case 0x3e75ecu: goto label_3e75ec;
        case 0x3e75f0u: goto label_3e75f0;
        case 0x3e75f4u: goto label_3e75f4;
        case 0x3e75f8u: goto label_3e75f8;
        case 0x3e75fcu: goto label_3e75fc;
        case 0x3e7600u: goto label_3e7600;
        case 0x3e7604u: goto label_3e7604;
        case 0x3e7608u: goto label_3e7608;
        case 0x3e760cu: goto label_3e760c;
        case 0x3e7610u: goto label_3e7610;
        case 0x3e7614u: goto label_3e7614;
        case 0x3e7618u: goto label_3e7618;
        case 0x3e761cu: goto label_3e761c;
        case 0x3e7620u: goto label_3e7620;
        case 0x3e7624u: goto label_3e7624;
        case 0x3e7628u: goto label_3e7628;
        case 0x3e762cu: goto label_3e762c;
        case 0x3e7630u: goto label_3e7630;
        case 0x3e7634u: goto label_3e7634;
        case 0x3e7638u: goto label_3e7638;
        case 0x3e763cu: goto label_3e763c;
        case 0x3e7640u: goto label_3e7640;
        case 0x3e7644u: goto label_3e7644;
        case 0x3e7648u: goto label_3e7648;
        case 0x3e764cu: goto label_3e764c;
        case 0x3e7650u: goto label_3e7650;
        case 0x3e7654u: goto label_3e7654;
        case 0x3e7658u: goto label_3e7658;
        case 0x3e765cu: goto label_3e765c;
        case 0x3e7660u: goto label_3e7660;
        case 0x3e7664u: goto label_3e7664;
        case 0x3e7668u: goto label_3e7668;
        case 0x3e766cu: goto label_3e766c;
        case 0x3e7670u: goto label_3e7670;
        case 0x3e7674u: goto label_3e7674;
        case 0x3e7678u: goto label_3e7678;
        case 0x3e767cu: goto label_3e767c;
        case 0x3e7680u: goto label_3e7680;
        case 0x3e7684u: goto label_3e7684;
        case 0x3e7688u: goto label_3e7688;
        case 0x3e768cu: goto label_3e768c;
        case 0x3e7690u: goto label_3e7690;
        case 0x3e7694u: goto label_3e7694;
        case 0x3e7698u: goto label_3e7698;
        case 0x3e769cu: goto label_3e769c;
        case 0x3e76a0u: goto label_3e76a0;
        case 0x3e76a4u: goto label_3e76a4;
        case 0x3e76a8u: goto label_3e76a8;
        case 0x3e76acu: goto label_3e76ac;
        case 0x3e76b0u: goto label_3e76b0;
        case 0x3e76b4u: goto label_3e76b4;
        case 0x3e76b8u: goto label_3e76b8;
        case 0x3e76bcu: goto label_3e76bc;
        case 0x3e76c0u: goto label_3e76c0;
        case 0x3e76c4u: goto label_3e76c4;
        case 0x3e76c8u: goto label_3e76c8;
        case 0x3e76ccu: goto label_3e76cc;
        case 0x3e76d0u: goto label_3e76d0;
        case 0x3e76d4u: goto label_3e76d4;
        case 0x3e76d8u: goto label_3e76d8;
        case 0x3e76dcu: goto label_3e76dc;
        case 0x3e76e0u: goto label_3e76e0;
        case 0x3e76e4u: goto label_3e76e4;
        case 0x3e76e8u: goto label_3e76e8;
        case 0x3e76ecu: goto label_3e76ec;
        case 0x3e76f0u: goto label_3e76f0;
        case 0x3e76f4u: goto label_3e76f4;
        case 0x3e76f8u: goto label_3e76f8;
        case 0x3e76fcu: goto label_3e76fc;
        case 0x3e7700u: goto label_3e7700;
        case 0x3e7704u: goto label_3e7704;
        case 0x3e7708u: goto label_3e7708;
        case 0x3e770cu: goto label_3e770c;
        case 0x3e7710u: goto label_3e7710;
        case 0x3e7714u: goto label_3e7714;
        case 0x3e7718u: goto label_3e7718;
        case 0x3e771cu: goto label_3e771c;
        case 0x3e7720u: goto label_3e7720;
        case 0x3e7724u: goto label_3e7724;
        case 0x3e7728u: goto label_3e7728;
        case 0x3e772cu: goto label_3e772c;
        case 0x3e7730u: goto label_3e7730;
        case 0x3e7734u: goto label_3e7734;
        case 0x3e7738u: goto label_3e7738;
        case 0x3e773cu: goto label_3e773c;
        case 0x3e7740u: goto label_3e7740;
        case 0x3e7744u: goto label_3e7744;
        case 0x3e7748u: goto label_3e7748;
        case 0x3e774cu: goto label_3e774c;
        case 0x3e7750u: goto label_3e7750;
        case 0x3e7754u: goto label_3e7754;
        case 0x3e7758u: goto label_3e7758;
        case 0x3e775cu: goto label_3e775c;
        case 0x3e7760u: goto label_3e7760;
        case 0x3e7764u: goto label_3e7764;
        case 0x3e7768u: goto label_3e7768;
        case 0x3e776cu: goto label_3e776c;
        case 0x3e7770u: goto label_3e7770;
        case 0x3e7774u: goto label_3e7774;
        case 0x3e7778u: goto label_3e7778;
        case 0x3e777cu: goto label_3e777c;
        case 0x3e7780u: goto label_3e7780;
        case 0x3e7784u: goto label_3e7784;
        case 0x3e7788u: goto label_3e7788;
        case 0x3e778cu: goto label_3e778c;
        case 0x3e7790u: goto label_3e7790;
        case 0x3e7794u: goto label_3e7794;
        case 0x3e7798u: goto label_3e7798;
        case 0x3e779cu: goto label_3e779c;
        case 0x3e77a0u: goto label_3e77a0;
        case 0x3e77a4u: goto label_3e77a4;
        case 0x3e77a8u: goto label_3e77a8;
        case 0x3e77acu: goto label_3e77ac;
        case 0x3e77b0u: goto label_3e77b0;
        case 0x3e77b4u: goto label_3e77b4;
        case 0x3e77b8u: goto label_3e77b8;
        case 0x3e77bcu: goto label_3e77bc;
        case 0x3e77c0u: goto label_3e77c0;
        case 0x3e77c4u: goto label_3e77c4;
        case 0x3e77c8u: goto label_3e77c8;
        case 0x3e77ccu: goto label_3e77cc;
        case 0x3e77d0u: goto label_3e77d0;
        case 0x3e77d4u: goto label_3e77d4;
        case 0x3e77d8u: goto label_3e77d8;
        case 0x3e77dcu: goto label_3e77dc;
        case 0x3e77e0u: goto label_3e77e0;
        case 0x3e77e4u: goto label_3e77e4;
        case 0x3e77e8u: goto label_3e77e8;
        case 0x3e77ecu: goto label_3e77ec;
        case 0x3e77f0u: goto label_3e77f0;
        case 0x3e77f4u: goto label_3e77f4;
        case 0x3e77f8u: goto label_3e77f8;
        case 0x3e77fcu: goto label_3e77fc;
        case 0x3e7800u: goto label_3e7800;
        case 0x3e7804u: goto label_3e7804;
        case 0x3e7808u: goto label_3e7808;
        case 0x3e780cu: goto label_3e780c;
        case 0x3e7810u: goto label_3e7810;
        case 0x3e7814u: goto label_3e7814;
        case 0x3e7818u: goto label_3e7818;
        case 0x3e781cu: goto label_3e781c;
        case 0x3e7820u: goto label_3e7820;
        case 0x3e7824u: goto label_3e7824;
        case 0x3e7828u: goto label_3e7828;
        case 0x3e782cu: goto label_3e782c;
        case 0x3e7830u: goto label_3e7830;
        case 0x3e7834u: goto label_3e7834;
        case 0x3e7838u: goto label_3e7838;
        case 0x3e783cu: goto label_3e783c;
        case 0x3e7840u: goto label_3e7840;
        case 0x3e7844u: goto label_3e7844;
        case 0x3e7848u: goto label_3e7848;
        case 0x3e784cu: goto label_3e784c;
        case 0x3e7850u: goto label_3e7850;
        case 0x3e7854u: goto label_3e7854;
        case 0x3e7858u: goto label_3e7858;
        case 0x3e785cu: goto label_3e785c;
        case 0x3e7860u: goto label_3e7860;
        case 0x3e7864u: goto label_3e7864;
        case 0x3e7868u: goto label_3e7868;
        case 0x3e786cu: goto label_3e786c;
        case 0x3e7870u: goto label_3e7870;
        case 0x3e7874u: goto label_3e7874;
        case 0x3e7878u: goto label_3e7878;
        case 0x3e787cu: goto label_3e787c;
        case 0x3e7880u: goto label_3e7880;
        case 0x3e7884u: goto label_3e7884;
        case 0x3e7888u: goto label_3e7888;
        case 0x3e788cu: goto label_3e788c;
        case 0x3e7890u: goto label_3e7890;
        case 0x3e7894u: goto label_3e7894;
        case 0x3e7898u: goto label_3e7898;
        case 0x3e789cu: goto label_3e789c;
        case 0x3e78a0u: goto label_3e78a0;
        case 0x3e78a4u: goto label_3e78a4;
        case 0x3e78a8u: goto label_3e78a8;
        case 0x3e78acu: goto label_3e78ac;
        case 0x3e78b0u: goto label_3e78b0;
        case 0x3e78b4u: goto label_3e78b4;
        case 0x3e78b8u: goto label_3e78b8;
        case 0x3e78bcu: goto label_3e78bc;
        case 0x3e78c0u: goto label_3e78c0;
        case 0x3e78c4u: goto label_3e78c4;
        case 0x3e78c8u: goto label_3e78c8;
        case 0x3e78ccu: goto label_3e78cc;
        case 0x3e78d0u: goto label_3e78d0;
        case 0x3e78d4u: goto label_3e78d4;
        case 0x3e78d8u: goto label_3e78d8;
        case 0x3e78dcu: goto label_3e78dc;
        case 0x3e78e0u: goto label_3e78e0;
        case 0x3e78e4u: goto label_3e78e4;
        case 0x3e78e8u: goto label_3e78e8;
        case 0x3e78ecu: goto label_3e78ec;
        case 0x3e78f0u: goto label_3e78f0;
        case 0x3e78f4u: goto label_3e78f4;
        case 0x3e78f8u: goto label_3e78f8;
        case 0x3e78fcu: goto label_3e78fc;
        case 0x3e7900u: goto label_3e7900;
        case 0x3e7904u: goto label_3e7904;
        case 0x3e7908u: goto label_3e7908;
        case 0x3e790cu: goto label_3e790c;
        case 0x3e7910u: goto label_3e7910;
        case 0x3e7914u: goto label_3e7914;
        case 0x3e7918u: goto label_3e7918;
        case 0x3e791cu: goto label_3e791c;
        case 0x3e7920u: goto label_3e7920;
        case 0x3e7924u: goto label_3e7924;
        case 0x3e7928u: goto label_3e7928;
        case 0x3e792cu: goto label_3e792c;
        case 0x3e7930u: goto label_3e7930;
        case 0x3e7934u: goto label_3e7934;
        case 0x3e7938u: goto label_3e7938;
        case 0x3e793cu: goto label_3e793c;
        case 0x3e7940u: goto label_3e7940;
        case 0x3e7944u: goto label_3e7944;
        case 0x3e7948u: goto label_3e7948;
        case 0x3e794cu: goto label_3e794c;
        case 0x3e7950u: goto label_3e7950;
        case 0x3e7954u: goto label_3e7954;
        case 0x3e7958u: goto label_3e7958;
        case 0x3e795cu: goto label_3e795c;
        case 0x3e7960u: goto label_3e7960;
        case 0x3e7964u: goto label_3e7964;
        case 0x3e7968u: goto label_3e7968;
        case 0x3e796cu: goto label_3e796c;
        case 0x3e7970u: goto label_3e7970;
        case 0x3e7974u: goto label_3e7974;
        case 0x3e7978u: goto label_3e7978;
        case 0x3e797cu: goto label_3e797c;
        case 0x3e7980u: goto label_3e7980;
        case 0x3e7984u: goto label_3e7984;
        case 0x3e7988u: goto label_3e7988;
        case 0x3e798cu: goto label_3e798c;
        case 0x3e7990u: goto label_3e7990;
        case 0x3e7994u: goto label_3e7994;
        case 0x3e7998u: goto label_3e7998;
        case 0x3e799cu: goto label_3e799c;
        case 0x3e79a0u: goto label_3e79a0;
        case 0x3e79a4u: goto label_3e79a4;
        case 0x3e79a8u: goto label_3e79a8;
        case 0x3e79acu: goto label_3e79ac;
        case 0x3e79b0u: goto label_3e79b0;
        case 0x3e79b4u: goto label_3e79b4;
        case 0x3e79b8u: goto label_3e79b8;
        case 0x3e79bcu: goto label_3e79bc;
        case 0x3e79c0u: goto label_3e79c0;
        case 0x3e79c4u: goto label_3e79c4;
        case 0x3e79c8u: goto label_3e79c8;
        case 0x3e79ccu: goto label_3e79cc;
        case 0x3e79d0u: goto label_3e79d0;
        case 0x3e79d4u: goto label_3e79d4;
        case 0x3e79d8u: goto label_3e79d8;
        case 0x3e79dcu: goto label_3e79dc;
        case 0x3e79e0u: goto label_3e79e0;
        case 0x3e79e4u: goto label_3e79e4;
        case 0x3e79e8u: goto label_3e79e8;
        case 0x3e79ecu: goto label_3e79ec;
        case 0x3e79f0u: goto label_3e79f0;
        case 0x3e79f4u: goto label_3e79f4;
        case 0x3e79f8u: goto label_3e79f8;
        case 0x3e79fcu: goto label_3e79fc;
        case 0x3e7a00u: goto label_3e7a00;
        case 0x3e7a04u: goto label_3e7a04;
        case 0x3e7a08u: goto label_3e7a08;
        case 0x3e7a0cu: goto label_3e7a0c;
        case 0x3e7a10u: goto label_3e7a10;
        case 0x3e7a14u: goto label_3e7a14;
        case 0x3e7a18u: goto label_3e7a18;
        case 0x3e7a1cu: goto label_3e7a1c;
        case 0x3e7a20u: goto label_3e7a20;
        case 0x3e7a24u: goto label_3e7a24;
        case 0x3e7a28u: goto label_3e7a28;
        case 0x3e7a2cu: goto label_3e7a2c;
        case 0x3e7a30u: goto label_3e7a30;
        case 0x3e7a34u: goto label_3e7a34;
        case 0x3e7a38u: goto label_3e7a38;
        case 0x3e7a3cu: goto label_3e7a3c;
        case 0x3e7a40u: goto label_3e7a40;
        case 0x3e7a44u: goto label_3e7a44;
        case 0x3e7a48u: goto label_3e7a48;
        case 0x3e7a4cu: goto label_3e7a4c;
        case 0x3e7a50u: goto label_3e7a50;
        case 0x3e7a54u: goto label_3e7a54;
        case 0x3e7a58u: goto label_3e7a58;
        case 0x3e7a5cu: goto label_3e7a5c;
        case 0x3e7a60u: goto label_3e7a60;
        case 0x3e7a64u: goto label_3e7a64;
        case 0x3e7a68u: goto label_3e7a68;
        case 0x3e7a6cu: goto label_3e7a6c;
        case 0x3e7a70u: goto label_3e7a70;
        case 0x3e7a74u: goto label_3e7a74;
        case 0x3e7a78u: goto label_3e7a78;
        case 0x3e7a7cu: goto label_3e7a7c;
        case 0x3e7a80u: goto label_3e7a80;
        case 0x3e7a84u: goto label_3e7a84;
        case 0x3e7a88u: goto label_3e7a88;
        case 0x3e7a8cu: goto label_3e7a8c;
        case 0x3e7a90u: goto label_3e7a90;
        case 0x3e7a94u: goto label_3e7a94;
        case 0x3e7a98u: goto label_3e7a98;
        case 0x3e7a9cu: goto label_3e7a9c;
        case 0x3e7aa0u: goto label_3e7aa0;
        case 0x3e7aa4u: goto label_3e7aa4;
        case 0x3e7aa8u: goto label_3e7aa8;
        case 0x3e7aacu: goto label_3e7aac;
        case 0x3e7ab0u: goto label_3e7ab0;
        case 0x3e7ab4u: goto label_3e7ab4;
        case 0x3e7ab8u: goto label_3e7ab8;
        case 0x3e7abcu: goto label_3e7abc;
        case 0x3e7ac0u: goto label_3e7ac0;
        case 0x3e7ac4u: goto label_3e7ac4;
        case 0x3e7ac8u: goto label_3e7ac8;
        case 0x3e7accu: goto label_3e7acc;
        case 0x3e7ad0u: goto label_3e7ad0;
        case 0x3e7ad4u: goto label_3e7ad4;
        case 0x3e7ad8u: goto label_3e7ad8;
        case 0x3e7adcu: goto label_3e7adc;
        case 0x3e7ae0u: goto label_3e7ae0;
        case 0x3e7ae4u: goto label_3e7ae4;
        case 0x3e7ae8u: goto label_3e7ae8;
        case 0x3e7aecu: goto label_3e7aec;
        case 0x3e7af0u: goto label_3e7af0;
        case 0x3e7af4u: goto label_3e7af4;
        case 0x3e7af8u: goto label_3e7af8;
        case 0x3e7afcu: goto label_3e7afc;
        case 0x3e7b00u: goto label_3e7b00;
        case 0x3e7b04u: goto label_3e7b04;
        case 0x3e7b08u: goto label_3e7b08;
        case 0x3e7b0cu: goto label_3e7b0c;
        case 0x3e7b10u: goto label_3e7b10;
        case 0x3e7b14u: goto label_3e7b14;
        case 0x3e7b18u: goto label_3e7b18;
        case 0x3e7b1cu: goto label_3e7b1c;
        case 0x3e7b20u: goto label_3e7b20;
        case 0x3e7b24u: goto label_3e7b24;
        case 0x3e7b28u: goto label_3e7b28;
        case 0x3e7b2cu: goto label_3e7b2c;
        case 0x3e7b30u: goto label_3e7b30;
        case 0x3e7b34u: goto label_3e7b34;
        case 0x3e7b38u: goto label_3e7b38;
        case 0x3e7b3cu: goto label_3e7b3c;
        case 0x3e7b40u: goto label_3e7b40;
        case 0x3e7b44u: goto label_3e7b44;
        case 0x3e7b48u: goto label_3e7b48;
        case 0x3e7b4cu: goto label_3e7b4c;
        case 0x3e7b50u: goto label_3e7b50;
        case 0x3e7b54u: goto label_3e7b54;
        case 0x3e7b58u: goto label_3e7b58;
        case 0x3e7b5cu: goto label_3e7b5c;
        case 0x3e7b60u: goto label_3e7b60;
        case 0x3e7b64u: goto label_3e7b64;
        case 0x3e7b68u: goto label_3e7b68;
        case 0x3e7b6cu: goto label_3e7b6c;
        case 0x3e7b70u: goto label_3e7b70;
        case 0x3e7b74u: goto label_3e7b74;
        case 0x3e7b78u: goto label_3e7b78;
        case 0x3e7b7cu: goto label_3e7b7c;
        case 0x3e7b80u: goto label_3e7b80;
        case 0x3e7b84u: goto label_3e7b84;
        case 0x3e7b88u: goto label_3e7b88;
        case 0x3e7b8cu: goto label_3e7b8c;
        case 0x3e7b90u: goto label_3e7b90;
        case 0x3e7b94u: goto label_3e7b94;
        case 0x3e7b98u: goto label_3e7b98;
        case 0x3e7b9cu: goto label_3e7b9c;
        case 0x3e7ba0u: goto label_3e7ba0;
        case 0x3e7ba4u: goto label_3e7ba4;
        case 0x3e7ba8u: goto label_3e7ba8;
        case 0x3e7bacu: goto label_3e7bac;
        case 0x3e7bb0u: goto label_3e7bb0;
        case 0x3e7bb4u: goto label_3e7bb4;
        case 0x3e7bb8u: goto label_3e7bb8;
        case 0x3e7bbcu: goto label_3e7bbc;
        case 0x3e7bc0u: goto label_3e7bc0;
        case 0x3e7bc4u: goto label_3e7bc4;
        case 0x3e7bc8u: goto label_3e7bc8;
        case 0x3e7bccu: goto label_3e7bcc;
        case 0x3e7bd0u: goto label_3e7bd0;
        case 0x3e7bd4u: goto label_3e7bd4;
        case 0x3e7bd8u: goto label_3e7bd8;
        case 0x3e7bdcu: goto label_3e7bdc;
        case 0x3e7be0u: goto label_3e7be0;
        case 0x3e7be4u: goto label_3e7be4;
        case 0x3e7be8u: goto label_3e7be8;
        case 0x3e7becu: goto label_3e7bec;
        case 0x3e7bf0u: goto label_3e7bf0;
        case 0x3e7bf4u: goto label_3e7bf4;
        case 0x3e7bf8u: goto label_3e7bf8;
        case 0x3e7bfcu: goto label_3e7bfc;
        case 0x3e7c00u: goto label_3e7c00;
        case 0x3e7c04u: goto label_3e7c04;
        case 0x3e7c08u: goto label_3e7c08;
        case 0x3e7c0cu: goto label_3e7c0c;
        case 0x3e7c10u: goto label_3e7c10;
        case 0x3e7c14u: goto label_3e7c14;
        case 0x3e7c18u: goto label_3e7c18;
        case 0x3e7c1cu: goto label_3e7c1c;
        case 0x3e7c20u: goto label_3e7c20;
        case 0x3e7c24u: goto label_3e7c24;
        case 0x3e7c28u: goto label_3e7c28;
        case 0x3e7c2cu: goto label_3e7c2c;
        case 0x3e7c30u: goto label_3e7c30;
        case 0x3e7c34u: goto label_3e7c34;
        case 0x3e7c38u: goto label_3e7c38;
        case 0x3e7c3cu: goto label_3e7c3c;
        case 0x3e7c40u: goto label_3e7c40;
        case 0x3e7c44u: goto label_3e7c44;
        case 0x3e7c48u: goto label_3e7c48;
        case 0x3e7c4cu: goto label_3e7c4c;
        case 0x3e7c50u: goto label_3e7c50;
        case 0x3e7c54u: goto label_3e7c54;
        case 0x3e7c58u: goto label_3e7c58;
        case 0x3e7c5cu: goto label_3e7c5c;
        case 0x3e7c60u: goto label_3e7c60;
        case 0x3e7c64u: goto label_3e7c64;
        case 0x3e7c68u: goto label_3e7c68;
        case 0x3e7c6cu: goto label_3e7c6c;
        case 0x3e7c70u: goto label_3e7c70;
        case 0x3e7c74u: goto label_3e7c74;
        case 0x3e7c78u: goto label_3e7c78;
        case 0x3e7c7cu: goto label_3e7c7c;
        case 0x3e7c80u: goto label_3e7c80;
        case 0x3e7c84u: goto label_3e7c84;
        case 0x3e7c88u: goto label_3e7c88;
        case 0x3e7c8cu: goto label_3e7c8c;
        case 0x3e7c90u: goto label_3e7c90;
        case 0x3e7c94u: goto label_3e7c94;
        case 0x3e7c98u: goto label_3e7c98;
        case 0x3e7c9cu: goto label_3e7c9c;
        case 0x3e7ca0u: goto label_3e7ca0;
        case 0x3e7ca4u: goto label_3e7ca4;
        case 0x3e7ca8u: goto label_3e7ca8;
        case 0x3e7cacu: goto label_3e7cac;
        case 0x3e7cb0u: goto label_3e7cb0;
        case 0x3e7cb4u: goto label_3e7cb4;
        case 0x3e7cb8u: goto label_3e7cb8;
        case 0x3e7cbcu: goto label_3e7cbc;
        case 0x3e7cc0u: goto label_3e7cc0;
        case 0x3e7cc4u: goto label_3e7cc4;
        case 0x3e7cc8u: goto label_3e7cc8;
        case 0x3e7cccu: goto label_3e7ccc;
        case 0x3e7cd0u: goto label_3e7cd0;
        case 0x3e7cd4u: goto label_3e7cd4;
        case 0x3e7cd8u: goto label_3e7cd8;
        case 0x3e7cdcu: goto label_3e7cdc;
        case 0x3e7ce0u: goto label_3e7ce0;
        case 0x3e7ce4u: goto label_3e7ce4;
        case 0x3e7ce8u: goto label_3e7ce8;
        case 0x3e7cecu: goto label_3e7cec;
        case 0x3e7cf0u: goto label_3e7cf0;
        case 0x3e7cf4u: goto label_3e7cf4;
        case 0x3e7cf8u: goto label_3e7cf8;
        case 0x3e7cfcu: goto label_3e7cfc;
        case 0x3e7d00u: goto label_3e7d00;
        case 0x3e7d04u: goto label_3e7d04;
        case 0x3e7d08u: goto label_3e7d08;
        case 0x3e7d0cu: goto label_3e7d0c;
        case 0x3e7d10u: goto label_3e7d10;
        case 0x3e7d14u: goto label_3e7d14;
        case 0x3e7d18u: goto label_3e7d18;
        case 0x3e7d1cu: goto label_3e7d1c;
        case 0x3e7d20u: goto label_3e7d20;
        case 0x3e7d24u: goto label_3e7d24;
        case 0x3e7d28u: goto label_3e7d28;
        case 0x3e7d2cu: goto label_3e7d2c;
        case 0x3e7d30u: goto label_3e7d30;
        case 0x3e7d34u: goto label_3e7d34;
        case 0x3e7d38u: goto label_3e7d38;
        case 0x3e7d3cu: goto label_3e7d3c;
        case 0x3e7d40u: goto label_3e7d40;
        case 0x3e7d44u: goto label_3e7d44;
        case 0x3e7d48u: goto label_3e7d48;
        case 0x3e7d4cu: goto label_3e7d4c;
        case 0x3e7d50u: goto label_3e7d50;
        case 0x3e7d54u: goto label_3e7d54;
        case 0x3e7d58u: goto label_3e7d58;
        case 0x3e7d5cu: goto label_3e7d5c;
        case 0x3e7d60u: goto label_3e7d60;
        case 0x3e7d64u: goto label_3e7d64;
        case 0x3e7d68u: goto label_3e7d68;
        case 0x3e7d6cu: goto label_3e7d6c;
        case 0x3e7d70u: goto label_3e7d70;
        case 0x3e7d74u: goto label_3e7d74;
        case 0x3e7d78u: goto label_3e7d78;
        case 0x3e7d7cu: goto label_3e7d7c;
        case 0x3e7d80u: goto label_3e7d80;
        case 0x3e7d84u: goto label_3e7d84;
        case 0x3e7d88u: goto label_3e7d88;
        case 0x3e7d8cu: goto label_3e7d8c;
        case 0x3e7d90u: goto label_3e7d90;
        case 0x3e7d94u: goto label_3e7d94;
        case 0x3e7d98u: goto label_3e7d98;
        case 0x3e7d9cu: goto label_3e7d9c;
        case 0x3e7da0u: goto label_3e7da0;
        case 0x3e7da4u: goto label_3e7da4;
        case 0x3e7da8u: goto label_3e7da8;
        case 0x3e7dacu: goto label_3e7dac;
        case 0x3e7db0u: goto label_3e7db0;
        case 0x3e7db4u: goto label_3e7db4;
        case 0x3e7db8u: goto label_3e7db8;
        case 0x3e7dbcu: goto label_3e7dbc;
        case 0x3e7dc0u: goto label_3e7dc0;
        case 0x3e7dc4u: goto label_3e7dc4;
        case 0x3e7dc8u: goto label_3e7dc8;
        case 0x3e7dccu: goto label_3e7dcc;
        case 0x3e7dd0u: goto label_3e7dd0;
        case 0x3e7dd4u: goto label_3e7dd4;
        case 0x3e7dd8u: goto label_3e7dd8;
        case 0x3e7ddcu: goto label_3e7ddc;
        case 0x3e7de0u: goto label_3e7de0;
        case 0x3e7de4u: goto label_3e7de4;
        case 0x3e7de8u: goto label_3e7de8;
        case 0x3e7decu: goto label_3e7dec;
        case 0x3e7df0u: goto label_3e7df0;
        case 0x3e7df4u: goto label_3e7df4;
        case 0x3e7df8u: goto label_3e7df8;
        case 0x3e7dfcu: goto label_3e7dfc;
        case 0x3e7e00u: goto label_3e7e00;
        case 0x3e7e04u: goto label_3e7e04;
        case 0x3e7e08u: goto label_3e7e08;
        case 0x3e7e0cu: goto label_3e7e0c;
        case 0x3e7e10u: goto label_3e7e10;
        case 0x3e7e14u: goto label_3e7e14;
        case 0x3e7e18u: goto label_3e7e18;
        case 0x3e7e1cu: goto label_3e7e1c;
        case 0x3e7e20u: goto label_3e7e20;
        case 0x3e7e24u: goto label_3e7e24;
        case 0x3e7e28u: goto label_3e7e28;
        case 0x3e7e2cu: goto label_3e7e2c;
        case 0x3e7e30u: goto label_3e7e30;
        case 0x3e7e34u: goto label_3e7e34;
        case 0x3e7e38u: goto label_3e7e38;
        case 0x3e7e3cu: goto label_3e7e3c;
        case 0x3e7e40u: goto label_3e7e40;
        case 0x3e7e44u: goto label_3e7e44;
        case 0x3e7e48u: goto label_3e7e48;
        case 0x3e7e4cu: goto label_3e7e4c;
        case 0x3e7e50u: goto label_3e7e50;
        case 0x3e7e54u: goto label_3e7e54;
        case 0x3e7e58u: goto label_3e7e58;
        case 0x3e7e5cu: goto label_3e7e5c;
        case 0x3e7e60u: goto label_3e7e60;
        case 0x3e7e64u: goto label_3e7e64;
        case 0x3e7e68u: goto label_3e7e68;
        case 0x3e7e6cu: goto label_3e7e6c;
        case 0x3e7e70u: goto label_3e7e70;
        case 0x3e7e74u: goto label_3e7e74;
        case 0x3e7e78u: goto label_3e7e78;
        case 0x3e7e7cu: goto label_3e7e7c;
        case 0x3e7e80u: goto label_3e7e80;
        case 0x3e7e84u: goto label_3e7e84;
        case 0x3e7e88u: goto label_3e7e88;
        case 0x3e7e8cu: goto label_3e7e8c;
        case 0x3e7e90u: goto label_3e7e90;
        case 0x3e7e94u: goto label_3e7e94;
        case 0x3e7e98u: goto label_3e7e98;
        case 0x3e7e9cu: goto label_3e7e9c;
        case 0x3e7ea0u: goto label_3e7ea0;
        case 0x3e7ea4u: goto label_3e7ea4;
        case 0x3e7ea8u: goto label_3e7ea8;
        case 0x3e7eacu: goto label_3e7eac;
        case 0x3e7eb0u: goto label_3e7eb0;
        case 0x3e7eb4u: goto label_3e7eb4;
        case 0x3e7eb8u: goto label_3e7eb8;
        case 0x3e7ebcu: goto label_3e7ebc;
        case 0x3e7ec0u: goto label_3e7ec0;
        case 0x3e7ec4u: goto label_3e7ec4;
        case 0x3e7ec8u: goto label_3e7ec8;
        case 0x3e7eccu: goto label_3e7ecc;
        case 0x3e7ed0u: goto label_3e7ed0;
        case 0x3e7ed4u: goto label_3e7ed4;
        case 0x3e7ed8u: goto label_3e7ed8;
        case 0x3e7edcu: goto label_3e7edc;
        case 0x3e7ee0u: goto label_3e7ee0;
        case 0x3e7ee4u: goto label_3e7ee4;
        case 0x3e7ee8u: goto label_3e7ee8;
        case 0x3e7eecu: goto label_3e7eec;
        case 0x3e7ef0u: goto label_3e7ef0;
        case 0x3e7ef4u: goto label_3e7ef4;
        case 0x3e7ef8u: goto label_3e7ef8;
        case 0x3e7efcu: goto label_3e7efc;
        case 0x3e7f00u: goto label_3e7f00;
        case 0x3e7f04u: goto label_3e7f04;
        case 0x3e7f08u: goto label_3e7f08;
        case 0x3e7f0cu: goto label_3e7f0c;
        case 0x3e7f10u: goto label_3e7f10;
        case 0x3e7f14u: goto label_3e7f14;
        case 0x3e7f18u: goto label_3e7f18;
        case 0x3e7f1cu: goto label_3e7f1c;
        case 0x3e7f20u: goto label_3e7f20;
        case 0x3e7f24u: goto label_3e7f24;
        case 0x3e7f28u: goto label_3e7f28;
        case 0x3e7f2cu: goto label_3e7f2c;
        case 0x3e7f30u: goto label_3e7f30;
        case 0x3e7f34u: goto label_3e7f34;
        case 0x3e7f38u: goto label_3e7f38;
        case 0x3e7f3cu: goto label_3e7f3c;
        case 0x3e7f40u: goto label_3e7f40;
        case 0x3e7f44u: goto label_3e7f44;
        case 0x3e7f48u: goto label_3e7f48;
        case 0x3e7f4cu: goto label_3e7f4c;
        case 0x3e7f50u: goto label_3e7f50;
        case 0x3e7f54u: goto label_3e7f54;
        case 0x3e7f58u: goto label_3e7f58;
        case 0x3e7f5cu: goto label_3e7f5c;
        case 0x3e7f60u: goto label_3e7f60;
        case 0x3e7f64u: goto label_3e7f64;
        case 0x3e7f68u: goto label_3e7f68;
        case 0x3e7f6cu: goto label_3e7f6c;
        case 0x3e7f70u: goto label_3e7f70;
        case 0x3e7f74u: goto label_3e7f74;
        case 0x3e7f78u: goto label_3e7f78;
        case 0x3e7f7cu: goto label_3e7f7c;
        case 0x3e7f80u: goto label_3e7f80;
        case 0x3e7f84u: goto label_3e7f84;
        case 0x3e7f88u: goto label_3e7f88;
        case 0x3e7f8cu: goto label_3e7f8c;
        case 0x3e7f90u: goto label_3e7f90;
        case 0x3e7f94u: goto label_3e7f94;
        case 0x3e7f98u: goto label_3e7f98;
        case 0x3e7f9cu: goto label_3e7f9c;
        case 0x3e7fa0u: goto label_3e7fa0;
        case 0x3e7fa4u: goto label_3e7fa4;
        case 0x3e7fa8u: goto label_3e7fa8;
        case 0x3e7facu: goto label_3e7fac;
        case 0x3e7fb0u: goto label_3e7fb0;
        case 0x3e7fb4u: goto label_3e7fb4;
        case 0x3e7fb8u: goto label_3e7fb8;
        case 0x3e7fbcu: goto label_3e7fbc;
        case 0x3e7fc0u: goto label_3e7fc0;
        case 0x3e7fc4u: goto label_3e7fc4;
        case 0x3e7fc8u: goto label_3e7fc8;
        case 0x3e7fccu: goto label_3e7fcc;
        case 0x3e7fd0u: goto label_3e7fd0;
        case 0x3e7fd4u: goto label_3e7fd4;
        case 0x3e7fd8u: goto label_3e7fd8;
        case 0x3e7fdcu: goto label_3e7fdc;
        case 0x3e7fe0u: goto label_3e7fe0;
        case 0x3e7fe4u: goto label_3e7fe4;
        case 0x3e7fe8u: goto label_3e7fe8;
        case 0x3e7fecu: goto label_3e7fec;
        case 0x3e7ff0u: goto label_3e7ff0;
        case 0x3e7ff4u: goto label_3e7ff4;
        case 0x3e7ff8u: goto label_3e7ff8;
        case 0x3e7ffcu: goto label_3e7ffc;
        case 0x3e8000u: goto label_3e8000;
        case 0x3e8004u: goto label_3e8004;
        case 0x3e8008u: goto label_3e8008;
        case 0x3e800cu: goto label_3e800c;
        case 0x3e8010u: goto label_3e8010;
        case 0x3e8014u: goto label_3e8014;
        case 0x3e8018u: goto label_3e8018;
        case 0x3e801cu: goto label_3e801c;
        case 0x3e8020u: goto label_3e8020;
        case 0x3e8024u: goto label_3e8024;
        case 0x3e8028u: goto label_3e8028;
        case 0x3e802cu: goto label_3e802c;
        case 0x3e8030u: goto label_3e8030;
        case 0x3e8034u: goto label_3e8034;
        case 0x3e8038u: goto label_3e8038;
        case 0x3e803cu: goto label_3e803c;
        case 0x3e8040u: goto label_3e8040;
        case 0x3e8044u: goto label_3e8044;
        case 0x3e8048u: goto label_3e8048;
        case 0x3e804cu: goto label_3e804c;
        case 0x3e8050u: goto label_3e8050;
        case 0x3e8054u: goto label_3e8054;
        case 0x3e8058u: goto label_3e8058;
        case 0x3e805cu: goto label_3e805c;
        case 0x3e8060u: goto label_3e8060;
        case 0x3e8064u: goto label_3e8064;
        case 0x3e8068u: goto label_3e8068;
        case 0x3e806cu: goto label_3e806c;
        case 0x3e8070u: goto label_3e8070;
        case 0x3e8074u: goto label_3e8074;
        case 0x3e8078u: goto label_3e8078;
        case 0x3e807cu: goto label_3e807c;
        case 0x3e8080u: goto label_3e8080;
        case 0x3e8084u: goto label_3e8084;
        case 0x3e8088u: goto label_3e8088;
        case 0x3e808cu: goto label_3e808c;
        case 0x3e8090u: goto label_3e8090;
        case 0x3e8094u: goto label_3e8094;
        case 0x3e8098u: goto label_3e8098;
        case 0x3e809cu: goto label_3e809c;
        case 0x3e80a0u: goto label_3e80a0;
        case 0x3e80a4u: goto label_3e80a4;
        case 0x3e80a8u: goto label_3e80a8;
        case 0x3e80acu: goto label_3e80ac;
        case 0x3e80b0u: goto label_3e80b0;
        case 0x3e80b4u: goto label_3e80b4;
        case 0x3e80b8u: goto label_3e80b8;
        case 0x3e80bcu: goto label_3e80bc;
        case 0x3e80c0u: goto label_3e80c0;
        case 0x3e80c4u: goto label_3e80c4;
        case 0x3e80c8u: goto label_3e80c8;
        case 0x3e80ccu: goto label_3e80cc;
        case 0x3e80d0u: goto label_3e80d0;
        case 0x3e80d4u: goto label_3e80d4;
        case 0x3e80d8u: goto label_3e80d8;
        case 0x3e80dcu: goto label_3e80dc;
        case 0x3e80e0u: goto label_3e80e0;
        case 0x3e80e4u: goto label_3e80e4;
        case 0x3e80e8u: goto label_3e80e8;
        case 0x3e80ecu: goto label_3e80ec;
        case 0x3e80f0u: goto label_3e80f0;
        case 0x3e80f4u: goto label_3e80f4;
        case 0x3e80f8u: goto label_3e80f8;
        case 0x3e80fcu: goto label_3e80fc;
        default: break;
    }

    ctx->pc = 0x3e7480u;

label_3e7480:
    // 0x3e7480: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e7480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3e7484:
    // 0x3e7484: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3e7484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e7488:
    // 0x3e7488: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3e7488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3e748c:
    // 0x3e748c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e748cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e7490:
    // 0x3e7490: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e7490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e7494:
    // 0x3e7494: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e7494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e7498:
    // 0x3e7498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e7498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e749c:
    // 0x3e749c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e749cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e74a0:
    // 0x3e74a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e74a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e74a4:
    // 0x3e74a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3e74a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e74a8:
    // 0x3e74a8: 0xc10ca68  jal         func_4329A0
label_3e74ac:
    if (ctx->pc == 0x3E74ACu) {
        ctx->pc = 0x3E74ACu;
            // 0x3e74ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3E74B0u;
        goto label_3e74b0;
    }
    ctx->pc = 0x3E74A8u;
    SET_GPR_U32(ctx, 31, 0x3E74B0u);
    ctx->pc = 0x3E74ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E74A8u;
            // 0x3e74ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E74B0u; }
        if (ctx->pc != 0x3E74B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E74B0u; }
        if (ctx->pc != 0x3E74B0u) { return; }
    }
    ctx->pc = 0x3E74B0u;
label_3e74b0:
    // 0x3e74b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3e74b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3e74b4:
    // 0x3e74b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3e74b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3e74b8:
    // 0x3e74b8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3e74b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_3e74bc:
    // 0x3e74bc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3e74bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3e74c0:
    // 0x3e74c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3e74c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3e74c4:
    // 0x3e74c4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x3e74c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_3e74c8:
    // 0x3e74c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3e74c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3e74cc:
    // 0x3e74cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e74ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e74d0:
    // 0x3e74d0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3e74d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3e74d4:
    // 0x3e74d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e74d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e74d8:
    // 0x3e74d8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x3e74d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_3e74dc:
    // 0x3e74dc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3e74dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3e74e0:
    // 0x3e74e0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x3e74e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_3e74e4:
    // 0x3e74e4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x3e74e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_3e74e8:
    // 0x3e74e8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x3e74e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_3e74ec:
    // 0x3e74ec: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x3e74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_3e74f0:
    // 0x3e74f0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x3e74f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_3e74f4:
    // 0x3e74f4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3e74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3e74f8:
    // 0x3e74f8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x3e74f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3e74fc:
    // 0x3e74fc: 0xc0582cc  jal         func_160B30
label_3e7500:
    if (ctx->pc == 0x3E7500u) {
        ctx->pc = 0x3E7500u;
            // 0x3e7500: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x3E7504u;
        goto label_3e7504;
    }
    ctx->pc = 0x3E74FCu;
    SET_GPR_U32(ctx, 31, 0x3E7504u);
    ctx->pc = 0x3E7500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E74FCu;
            // 0x3e7500: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7504u; }
        if (ctx->pc != 0x3E7504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7504u; }
        if (ctx->pc != 0x3E7504u) { return; }
    }
    ctx->pc = 0x3E7504u;
label_3e7504:
    // 0x3e7504: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e7504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3e7508:
    // 0x3e7508: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x3e7508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_3e750c:
    // 0x3e750c: 0x24639d30  addiu       $v1, $v1, -0x62D0
    ctx->pc = 0x3e750cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942000));
label_3e7510:
    // 0x3e7510: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x3e7510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_3e7514:
    // 0x3e7514: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x3e7514u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_3e7518:
    // 0x3e7518: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e7518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e751c:
    // 0x3e751c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e751cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3e7520:
    // 0x3e7520: 0xac446f00  sw          $a0, 0x6F00($v0)
    ctx->pc = 0x3e7520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28416), GPR_U32(ctx, 4));
label_3e7524:
    // 0x3e7524: 0x24639d40  addiu       $v1, $v1, -0x62C0
    ctx->pc = 0x3e7524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942016));
label_3e7528:
    // 0x3e7528: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e7528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3e752c:
    // 0x3e752c: 0x24429d78  addiu       $v0, $v0, -0x6288
    ctx->pc = 0x3e752cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942072));
label_3e7530:
    // 0x3e7530: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3e7530u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3e7534:
    // 0x3e7534: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x3e7534u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_3e7538:
    // 0x3e7538: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x3e7538u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_3e753c:
    // 0x3e753c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x3e753cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_3e7540:
    // 0x3e7540: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x3e7540u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_3e7544:
    // 0x3e7544: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x3e7544u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_3e7548:
    // 0x3e7548: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x3e7548u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_3e754c:
    // 0x3e754c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x3e754cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_3e7550:
    // 0x3e7550: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x3e7550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_3e7554:
    // 0x3e7554: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x3e7554u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_3e7558:
    // 0x3e7558: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x3e7558u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_3e755c:
    // 0x3e755c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x3e755cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_3e7560:
    // 0x3e7560: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x3e7560u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_3e7564:
    // 0x3e7564: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x3e7564u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_3e7568:
    // 0x3e7568: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x3e7568u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
label_3e756c:
    // 0x3e756c: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x3e756cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
label_3e7570:
    // 0x3e7570: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x3e7570u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
label_3e7574:
    // 0x3e7574: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x3e7574u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
label_3e7578:
    // 0x3e7578: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x3e7578u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3e757c:
    // 0x3e757c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_3e7580:
    if (ctx->pc == 0x3E7580u) {
        ctx->pc = 0x3E7584u;
        goto label_3e7584;
    }
    ctx->pc = 0x3E757Cu;
    {
        const bool branch_taken_0x3e757c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e757c) {
            ctx->pc = 0x3E7610u;
            goto label_3e7610;
        }
    }
    ctx->pc = 0x3E7584u;
label_3e7584:
    // 0x3e7584: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3e7584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3e7588:
    // 0x3e7588: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3e7588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3e758c:
    // 0x3e758c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3e758cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3e7590:
    // 0x3e7590: 0xc040138  jal         func_1004E0
label_3e7594:
    if (ctx->pc == 0x3E7594u) {
        ctx->pc = 0x3E7594u;
            // 0x3e7594: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3E7598u;
        goto label_3e7598;
    }
    ctx->pc = 0x3E7590u;
    SET_GPR_U32(ctx, 31, 0x3E7598u);
    ctx->pc = 0x3E7594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7590u;
            // 0x3e7594: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7598u; }
        if (ctx->pc != 0x3E7598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7598u; }
        if (ctx->pc != 0x3E7598u) { return; }
    }
    ctx->pc = 0x3E7598u;
label_3e7598:
    // 0x3e7598: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3e7598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_3e759c:
    // 0x3e759c: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x3e759cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
label_3e75a0:
    // 0x3e75a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e75a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e75a4:
    // 0x3e75a4: 0x24a57630  addiu       $a1, $a1, 0x7630
    ctx->pc = 0x3e75a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30256));
label_3e75a8:
    // 0x3e75a8: 0x24c66ed0  addiu       $a2, $a2, 0x6ED0
    ctx->pc = 0x3e75a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28368));
label_3e75ac:
    // 0x3e75ac: 0x24070110  addiu       $a3, $zero, 0x110
    ctx->pc = 0x3e75acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_3e75b0:
    // 0x3e75b0: 0xc040840  jal         func_102100
label_3e75b4:
    if (ctx->pc == 0x3E75B4u) {
        ctx->pc = 0x3E75B4u;
            // 0x3e75b4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E75B8u;
        goto label_3e75b8;
    }
    ctx->pc = 0x3E75B0u;
    SET_GPR_U32(ctx, 31, 0x3E75B8u);
    ctx->pc = 0x3E75B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E75B0u;
            // 0x3e75b4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E75B8u; }
        if (ctx->pc != 0x3E75B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E75B8u; }
        if (ctx->pc != 0x3E75B8u) { return; }
    }
    ctx->pc = 0x3E75B8u;
label_3e75b8:
    // 0x3e75b8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x3e75b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_3e75bc:
    // 0x3e75bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e75bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e75c0:
    // 0x3e75c0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x3e75c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_3e75c4:
    // 0x3e75c4: 0xc0788fc  jal         func_1E23F0
label_3e75c8:
    if (ctx->pc == 0x3E75C8u) {
        ctx->pc = 0x3E75C8u;
            // 0x3e75c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E75CCu;
        goto label_3e75cc;
    }
    ctx->pc = 0x3E75C4u;
    SET_GPR_U32(ctx, 31, 0x3E75CCu);
    ctx->pc = 0x3E75C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E75C4u;
            // 0x3e75c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E75CCu; }
        if (ctx->pc != 0x3E75CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E75CCu; }
        if (ctx->pc != 0x3E75CCu) { return; }
    }
    ctx->pc = 0x3E75CCu;
label_3e75cc:
    // 0x3e75cc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3e75ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3e75d0:
    // 0x3e75d0: 0xc0788fc  jal         func_1E23F0
label_3e75d4:
    if (ctx->pc == 0x3E75D4u) {
        ctx->pc = 0x3E75D4u;
            // 0x3e75d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E75D8u;
        goto label_3e75d8;
    }
    ctx->pc = 0x3E75D0u;
    SET_GPR_U32(ctx, 31, 0x3E75D8u);
    ctx->pc = 0x3E75D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E75D0u;
            // 0x3e75d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E75D8u; }
        if (ctx->pc != 0x3E75D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E75D8u; }
        if (ctx->pc != 0x3E75D8u) { return; }
    }
    ctx->pc = 0x3E75D8u;
label_3e75d8:
    // 0x3e75d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e75d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e75dc:
    // 0x3e75dc: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x3e75dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_3e75e0:
    // 0x3e75e0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3e75e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3e75e4:
    // 0x3e75e4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x3e75e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_3e75e8:
    // 0x3e75e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e75e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e75ec:
    // 0x3e75ec: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x3e75ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_3e75f0:
    // 0x3e75f0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x3e75f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_3e75f4:
    // 0x3e75f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e75f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e75f8:
    // 0x3e75f8: 0xc0a997c  jal         func_2A65F0
label_3e75fc:
    if (ctx->pc == 0x3E75FCu) {
        ctx->pc = 0x3E75FCu;
            // 0x3e75fc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3E7600u;
        goto label_3e7600;
    }
    ctx->pc = 0x3E75F8u;
    SET_GPR_U32(ctx, 31, 0x3E7600u);
    ctx->pc = 0x3E75FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E75F8u;
            // 0x3e75fc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7600u; }
        if (ctx->pc != 0x3E7600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7600u; }
        if (ctx->pc != 0x3E7600u) { return; }
    }
    ctx->pc = 0x3E7600u;
label_3e7600:
    // 0x3e7600: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e7600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3e7604:
    // 0x3e7604: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3e7604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3e7608:
    // 0x3e7608: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3e760c:
    if (ctx->pc == 0x3E760Cu) {
        ctx->pc = 0x3E760Cu;
            // 0x3e760c: 0x26520110  addiu       $s2, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->pc = 0x3E7610u;
        goto label_3e7610;
    }
    ctx->pc = 0x3E7608u;
    {
        const bool branch_taken_0x3e7608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E760Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7608u;
            // 0x3e760c: 0x26520110  addiu       $s2, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7608) {
            ctx->pc = 0x3E75DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e75dc;
        }
    }
    ctx->pc = 0x3E7610u;
label_3e7610:
    // 0x3e7610: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3e7610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e7614:
    // 0x3e7614: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3e7614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3e7618:
    // 0x3e7618: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e7618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e761c:
    // 0x3e761c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e761cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e7620:
    // 0x3e7620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e7620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e7624:
    // 0x3e7624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e7624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e7628:
    // 0x3e7628: 0x3e00008  jr          $ra
label_3e762c:
    if (ctx->pc == 0x3E762Cu) {
        ctx->pc = 0x3E762Cu;
            // 0x3e762c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3E7630u;
        goto label_3e7630;
    }
    ctx->pc = 0x3E7628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E762Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7628u;
            // 0x3e762c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E7630u;
label_3e7630:
    // 0x3e7630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e7630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e7634:
    // 0x3e7634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e7634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3e7638:
    // 0x3e7638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e7638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e763c:
    // 0x3e763c: 0xc0b1370  jal         func_2C4DC0
label_3e7640:
    if (ctx->pc == 0x3E7640u) {
        ctx->pc = 0x3E7640u;
            // 0x3e7640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E7644u;
        goto label_3e7644;
    }
    ctx->pc = 0x3E763Cu;
    SET_GPR_U32(ctx, 31, 0x3E7644u);
    ctx->pc = 0x3E7640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E763Cu;
            // 0x3e7640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7644u; }
        if (ctx->pc != 0x3E7644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7644u; }
        if (ctx->pc != 0x3E7644u) { return; }
    }
    ctx->pc = 0x3E7644u;
label_3e7644:
    // 0x3e7644: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e7644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3e7648:
    // 0x3e7648: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e7648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3e764c:
    // 0x3e764c: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x3e764cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_3e7650:
    // 0x3e7650: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x3e7650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_3e7654:
    // 0x3e7654: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e7654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3e7658:
    // 0x3e7658: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x3e7658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_3e765c:
    // 0x3e765c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3e765cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3e7660:
    // 0x3e7660: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3e7660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_3e7664:
    // 0x3e7664: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x3e7664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_3e7668:
    // 0x3e7668: 0x24a59c80  addiu       $a1, $a1, -0x6380
    ctx->pc = 0x3e7668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941824));
label_3e766c:
    // 0x3e766c: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x3e766cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
label_3e7670:
    // 0x3e7670: 0x24849cc0  addiu       $a0, $a0, -0x6340
    ctx->pc = 0x3e7670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941888));
label_3e7674:
    // 0x3e7674: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x3e7674u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
label_3e7678:
    // 0x3e7678: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e7678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e767c:
    // 0x3e767c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x3e767cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_3e7680:
    // 0x3e7680: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3e7680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7684:
    // 0x3e7684: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x3e7684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_3e7688:
    // 0x3e7688: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x3e7688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_3e768c:
    // 0x3e768c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x3e768cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_3e7690:
    // 0x3e7690: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x3e7690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_3e7694:
    // 0x3e7694: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x3e7694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_3e7698:
    // 0x3e7698: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x3e7698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_3e769c:
    // 0x3e769c: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x3e769cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_3e76a0:
    // 0x3e76a0: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x3e76a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_3e76a4:
    // 0x3e76a4: 0xa20000fc  sb          $zero, 0xFC($s0)
    ctx->pc = 0x3e76a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 0));
label_3e76a8:
    // 0x3e76a8: 0xa20300fd  sb          $v1, 0xFD($s0)
    ctx->pc = 0x3e76a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 253), (uint8_t)GPR_U32(ctx, 3));
label_3e76ac:
    // 0x3e76ac: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x3e76acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_3e76b0:
    // 0x3e76b0: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x3e76b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
label_3e76b4:
    // 0x3e76b4: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x3e76b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
label_3e76b8:
    // 0x3e76b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e76b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e76bc:
    // 0x3e76bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e76bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e76c0:
    // 0x3e76c0: 0x3e00008  jr          $ra
label_3e76c4:
    if (ctx->pc == 0x3E76C4u) {
        ctx->pc = 0x3E76C4u;
            // 0x3e76c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3E76C8u;
        goto label_3e76c8;
    }
    ctx->pc = 0x3E76C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E76C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E76C0u;
            // 0x3e76c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E76C8u;
label_3e76c8:
    // 0x3e76c8: 0x0  nop
    ctx->pc = 0x3e76c8u;
    // NOP
label_3e76cc:
    // 0x3e76cc: 0x0  nop
    ctx->pc = 0x3e76ccu;
    // NOP
label_3e76d0:
    // 0x3e76d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e76d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e76d4:
    // 0x3e76d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e76d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3e76d8:
    // 0x3e76d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e76d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e76dc:
    // 0x3e76dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e76dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e76e0:
    // 0x3e76e0: 0x8c8400e0  lw          $a0, 0xE0($a0)
    ctx->pc = 0x3e76e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_3e76e4:
    // 0x3e76e4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3e76e8:
    if (ctx->pc == 0x3E76E8u) {
        ctx->pc = 0x3E76E8u;
            // 0x3e76e8: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->pc = 0x3E76ECu;
        goto label_3e76ec;
    }
    ctx->pc = 0x3E76E4u;
    {
        const bool branch_taken_0x3e76e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e76e4) {
            ctx->pc = 0x3E76E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E76E4u;
            // 0x3e76e8: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E76F8u;
            goto label_3e76f8;
        }
    }
    ctx->pc = 0x3E76ECu;
label_3e76ec:
    // 0x3e76ec: 0xc04008c  jal         func_100230
label_3e76f0:
    if (ctx->pc == 0x3E76F0u) {
        ctx->pc = 0x3E76F4u;
        goto label_3e76f4;
    }
    ctx->pc = 0x3E76ECu;
    SET_GPR_U32(ctx, 31, 0x3E76F4u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E76F4u; }
        if (ctx->pc != 0x3E76F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E76F4u; }
        if (ctx->pc != 0x3E76F4u) { return; }
    }
    ctx->pc = 0x3E76F4u;
label_3e76f4:
    // 0x3e76f4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x3e76f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_3e76f8:
    // 0x3e76f8: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x3e76f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3e76fc:
    // 0x3e76fc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3e7700:
    if (ctx->pc == 0x3E7700u) {
        ctx->pc = 0x3E7700u;
            // 0x3e7700: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x3E7704u;
        goto label_3e7704;
    }
    ctx->pc = 0x3E76FCu;
    {
        const bool branch_taken_0x3e76fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e76fc) {
            ctx->pc = 0x3E7700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E76FCu;
            // 0x3e7700: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7718u;
            goto label_3e7718;
        }
    }
    ctx->pc = 0x3E7704u;
label_3e7704:
    // 0x3e7704: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3e7704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3e7708:
    // 0x3e7708: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3e7708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3e770c:
    // 0x3e770c: 0x320f809  jalr        $t9
label_3e7710:
    if (ctx->pc == 0x3E7710u) {
        ctx->pc = 0x3E7710u;
            // 0x3e7710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E7714u;
        goto label_3e7714;
    }
    ctx->pc = 0x3E770Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E7714u);
        ctx->pc = 0x3E7710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E770Cu;
            // 0x3e7710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E7714u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E7714u; }
            if (ctx->pc != 0x3E7714u) { return; }
        }
        }
    }
    ctx->pc = 0x3E7714u;
label_3e7714:
    // 0x3e7714: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x3e7714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_3e7718:
    // 0x3e7718: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3e7718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3e771c:
    // 0x3e771c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3e7720:
    if (ctx->pc == 0x3E7720u) {
        ctx->pc = 0x3E7720u;
            // 0x3e7720: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3E7724u;
        goto label_3e7724;
    }
    ctx->pc = 0x3E771Cu;
    {
        const bool branch_taken_0x3e771c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e771c) {
            ctx->pc = 0x3E7720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E771Cu;
            // 0x3e7720: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7738u;
            goto label_3e7738;
        }
    }
    ctx->pc = 0x3E7724u;
label_3e7724:
    // 0x3e7724: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e7724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e7728:
    // 0x3e7728: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3e7728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3e772c:
    // 0x3e772c: 0x320f809  jalr        $t9
label_3e7730:
    if (ctx->pc == 0x3E7730u) {
        ctx->pc = 0x3E7730u;
            // 0x3e7730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E7734u;
        goto label_3e7734;
    }
    ctx->pc = 0x3E772Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E7734u);
        ctx->pc = 0x3E7730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E772Cu;
            // 0x3e7730: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E7734u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E7734u; }
            if (ctx->pc != 0x3E7734u) { return; }
        }
        }
    }
    ctx->pc = 0x3E7734u;
label_3e7734:
    // 0x3e7734: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3e7734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_3e7738:
    // 0x3e7738: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x3e7738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_3e773c:
    // 0x3e773c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3e7740:
    if (ctx->pc == 0x3E7740u) {
        ctx->pc = 0x3E7740u;
            // 0x3e7740: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x3E7744u;
        goto label_3e7744;
    }
    ctx->pc = 0x3E773Cu;
    {
        const bool branch_taken_0x3e773c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e773c) {
            ctx->pc = 0x3E7740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E773Cu;
            // 0x3e7740: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7758u;
            goto label_3e7758;
        }
    }
    ctx->pc = 0x3E7744u;
label_3e7744:
    // 0x3e7744: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e7744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e7748:
    // 0x3e7748: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3e7748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3e774c:
    // 0x3e774c: 0x320f809  jalr        $t9
label_3e7750:
    if (ctx->pc == 0x3E7750u) {
        ctx->pc = 0x3E7750u;
            // 0x3e7750: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E7754u;
        goto label_3e7754;
    }
    ctx->pc = 0x3E774Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E7754u);
        ctx->pc = 0x3E7750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E774Cu;
            // 0x3e7750: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E7754u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E7754u; }
            if (ctx->pc != 0x3E7754u) { return; }
        }
        }
    }
    ctx->pc = 0x3E7754u;
label_3e7754:
    // 0x3e7754: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x3e7754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_3e7758:
    // 0x3e7758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e7758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e775c:
    // 0x3e775c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e775cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e7760:
    // 0x3e7760: 0x3e00008  jr          $ra
label_3e7764:
    if (ctx->pc == 0x3E7764u) {
        ctx->pc = 0x3E7764u;
            // 0x3e7764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3E7768u;
        goto label_3e7768;
    }
    ctx->pc = 0x3E7760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7760u;
            // 0x3e7764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E7768u;
label_3e7768:
    // 0x3e7768: 0x0  nop
    ctx->pc = 0x3e7768u;
    // NOP
label_3e776c:
    // 0x3e776c: 0x0  nop
    ctx->pc = 0x3e776cu;
    // NOP
label_3e7770:
    // 0x3e7770: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x3e7770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_3e7774:
    // 0x3e7774: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e7774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3e7778:
    // 0x3e7778: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e7778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e777c:
    // 0x3e777c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e777cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e7780:
    // 0x3e7780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e7780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e7784:
    // 0x3e7784: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3e7784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3e7788:
    // 0x3e7788: 0xc0892d0  jal         func_224B40
label_3e778c:
    if (ctx->pc == 0x3E778Cu) {
        ctx->pc = 0x3E778Cu;
            // 0x3e778c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3E7790u;
        goto label_3e7790;
    }
    ctx->pc = 0x3E7788u;
    SET_GPR_U32(ctx, 31, 0x3E7790u);
    ctx->pc = 0x3E778Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7788u;
            // 0x3e778c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7790u; }
        if (ctx->pc != 0x3E7790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7790u; }
        if (ctx->pc != 0x3E7790u) { return; }
    }
    ctx->pc = 0x3E7790u;
label_3e7790:
    // 0x3e7790: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e7790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e7794:
    // 0x3e7794: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e7794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3e7798:
    // 0x3e7798: 0x8c426f00  lw          $v0, 0x6F00($v0)
    ctx->pc = 0x3e7798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28416)));
label_3e779c:
    // 0x3e779c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3e779cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3e77a0:
    // 0x3e77a0: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x3e77a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_3e77a4:
    // 0x3e77a4: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x3e77a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_3e77a8:
    // 0x3e77a8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3e77a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3e77ac:
    // 0x3e77ac: 0xc0b6e68  jal         func_2DB9A0
label_3e77b0:
    if (ctx->pc == 0x3E77B0u) {
        ctx->pc = 0x3E77B0u;
            // 0x3e77b0: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x3E77B4u;
        goto label_3e77b4;
    }
    ctx->pc = 0x3E77ACu;
    SET_GPR_U32(ctx, 31, 0x3E77B4u);
    ctx->pc = 0x3E77B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E77ACu;
            // 0x3e77b0: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E77B4u; }
        if (ctx->pc != 0x3E77B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E77B4u; }
        if (ctx->pc != 0x3E77B4u) { return; }
    }
    ctx->pc = 0x3E77B4u;
label_3e77b4:
    // 0x3e77b4: 0xc0b6dac  jal         func_2DB6B0
label_3e77b8:
    if (ctx->pc == 0x3E77B8u) {
        ctx->pc = 0x3E77B8u;
            // 0x3e77b8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3E77BCu;
        goto label_3e77bc;
    }
    ctx->pc = 0x3E77B4u;
    SET_GPR_U32(ctx, 31, 0x3E77BCu);
    ctx->pc = 0x3E77B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E77B4u;
            // 0x3e77b8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E77BCu; }
        if (ctx->pc != 0x3E77BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E77BCu; }
        if (ctx->pc != 0x3E77BCu) { return; }
    }
    ctx->pc = 0x3E77BCu;
label_3e77bc:
    // 0x3e77bc: 0xc0cac94  jal         func_32B250
label_3e77c0:
    if (ctx->pc == 0x3E77C0u) {
        ctx->pc = 0x3E77C0u;
            // 0x3e77c0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3E77C4u;
        goto label_3e77c4;
    }
    ctx->pc = 0x3E77BCu;
    SET_GPR_U32(ctx, 31, 0x3E77C4u);
    ctx->pc = 0x3E77C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E77BCu;
            // 0x3e77c0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E77C4u; }
        if (ctx->pc != 0x3E77C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E77C4u; }
        if (ctx->pc != 0x3E77C4u) { return; }
    }
    ctx->pc = 0x3E77C4u;
label_3e77c4:
    // 0x3e77c4: 0xc0cac84  jal         func_32B210
label_3e77c8:
    if (ctx->pc == 0x3E77C8u) {
        ctx->pc = 0x3E77C8u;
            // 0x3e77c8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3E77CCu;
        goto label_3e77cc;
    }
    ctx->pc = 0x3E77C4u;
    SET_GPR_U32(ctx, 31, 0x3E77CCu);
    ctx->pc = 0x3E77C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E77C4u;
            // 0x3e77c8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E77CCu; }
        if (ctx->pc != 0x3E77CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E77CCu; }
        if (ctx->pc != 0x3E77CCu) { return; }
    }
    ctx->pc = 0x3E77CCu;
label_3e77cc:
    // 0x3e77cc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3e77ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3e77d0:
    // 0x3e77d0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3e77d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3e77d4:
    // 0x3e77d4: 0xc44cc918  lwc1        $f12, -0x36E8($v0)
    ctx->pc = 0x3e77d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e77d8:
    // 0x3e77d8: 0xc0a5a68  jal         func_2969A0
label_3e77dc:
    if (ctx->pc == 0x3E77DCu) {
        ctx->pc = 0x3E77DCu;
            // 0x3e77dc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3E77E0u;
        goto label_3e77e0;
    }
    ctx->pc = 0x3E77D8u;
    SET_GPR_U32(ctx, 31, 0x3E77E0u);
    ctx->pc = 0x3E77DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E77D8u;
            // 0x3e77dc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E77E0u; }
        if (ctx->pc != 0x3E77E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E77E0u; }
        if (ctx->pc != 0x3E77E0u) { return; }
    }
    ctx->pc = 0x3E77E0u;
label_3e77e0:
    // 0x3e77e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e77e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e77e4:
    // 0x3e77e4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3e77e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e77e8:
    // 0x3e77e8: 0x8c446f00  lw          $a0, 0x6F00($v0)
    ctx->pc = 0x3e77e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28416)));
label_3e77ec:
    // 0x3e77ec: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x3e77ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e77f0:
    // 0x3e77f0: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x3e77f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e77f4:
    // 0x3e77f4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x3e77f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3e77f8:
    // 0x3e77f8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x3e77f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e77fc:
    // 0x3e77fc: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3e77fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_3e7800:
    // 0x3e7800: 0x8c890060  lw          $t1, 0x60($a0)
    ctx->pc = 0x3e7800u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_3e7804:
    // 0x3e7804: 0x3c023f05  lui         $v0, 0x3F05
    ctx->pc = 0x3e7804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16133 << 16));
label_3e7808:
    // 0x3e7808: 0x34471eb8  ori         $a3, $v0, 0x1EB8
    ctx->pc = 0x3e7808u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
label_3e780c:
    // 0x3e780c: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x3e780cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_3e7810:
    // 0x3e7810: 0xafa900c4  sw          $t1, 0xC4($sp)
    ctx->pc = 0x3e7810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 9));
label_3e7814:
    // 0x3e7814: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x3e7814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_3e7818:
    // 0x3e7818: 0xc6490018  lwc1        $f9, 0x18($s2)
    ctx->pc = 0x3e7818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3e781c:
    // 0x3e781c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e781cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e7820:
    // 0x3e7820: 0xc6480014  lwc1        $f8, 0x14($s2)
    ctx->pc = 0x3e7820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3e7824:
    // 0x3e7824: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3e7824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3e7828:
    // 0x3e7828: 0xc6470010  lwc1        $f7, 0x10($s2)
    ctx->pc = 0x3e7828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3e782c:
    // 0x3e782c: 0xc7a60090  lwc1        $f6, 0x90($sp)
    ctx->pc = 0x3e782cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3e7830:
    // 0x3e7830: 0xc7a50094  lwc1        $f5, 0x94($sp)
    ctx->pc = 0x3e7830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3e7834:
    // 0x3e7834: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x3e7834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_3e7838:
    // 0x3e7838: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x3e7838u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_3e783c:
    // 0x3e783c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x3e783cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e7840:
    // 0x3e7840: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x3e7840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_3e7844:
    // 0x3e7844: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x3e7844u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3e7848:
    // 0x3e7848: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x3e7848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_3e784c:
    // 0x3e784c: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x3e784cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_3e7850:
    // 0x3e7850: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3e7850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3e7854:
    // 0x3e7854: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x3e7854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_3e7858:
    // 0x3e7858: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x3e7858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e785c:
    // 0x3e785c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x3e785cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e7860:
    // 0x3e7860: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x3e7860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e7864:
    // 0x3e7864: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x3e7864u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_3e7868:
    // 0x3e7868: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x3e7868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3e786c:
    // 0x3e786c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x3e786cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3e7870:
    // 0x3e7870: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x3e7870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e7874:
    // 0x3e7874: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x3e7874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e7878:
    // 0x3e7878: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x3e7878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e787c:
    // 0x3e787c: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x3e787cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3e7880:
    // 0x3e7880: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x3e7880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_3e7884:
    // 0x3e7884: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x3e7884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_3e7888:
    // 0x3e7888: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x3e7888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3e788c:
    // 0x3e788c: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x3e788cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3e7890:
    // 0x3e7890: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x3e7890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e7894:
    // 0x3e7894: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x3e7894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e7898:
    // 0x3e7898: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x3e7898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e789c:
    // 0x3e789c: 0xe7a700d0  swc1        $f7, 0xD0($sp)
    ctx->pc = 0x3e789cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3e78a0:
    // 0x3e78a0: 0xe7a800d4  swc1        $f8, 0xD4($sp)
    ctx->pc = 0x3e78a0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_3e78a4:
    // 0x3e78a4: 0xe7a900d8  swc1        $f9, 0xD8($sp)
    ctx->pc = 0x3e78a4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3e78a8:
    // 0x3e78a8: 0xe7a60110  swc1        $f6, 0x110($sp)
    ctx->pc = 0x3e78a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_3e78ac:
    // 0x3e78ac: 0xe7a50114  swc1        $f5, 0x114($sp)
    ctx->pc = 0x3e78acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_3e78b0:
    // 0x3e78b0: 0xe7a40118  swc1        $f4, 0x118($sp)
    ctx->pc = 0x3e78b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_3e78b4:
    // 0x3e78b4: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x3e78b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_3e78b8:
    // 0x3e78b8: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x3e78b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_3e78bc:
    // 0x3e78bc: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x3e78bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3e78c0:
    // 0x3e78c0: 0xc0a7a88  jal         func_29EA20
label_3e78c4:
    if (ctx->pc == 0x3E78C4u) {
        ctx->pc = 0x3E78C4u;
            // 0x3e78c4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x3E78C8u;
        goto label_3e78c8;
    }
    ctx->pc = 0x3E78C0u;
    SET_GPR_U32(ctx, 31, 0x3E78C8u);
    ctx->pc = 0x3E78C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E78C0u;
            // 0x3e78c4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E78C8u; }
        if (ctx->pc != 0x3E78C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E78C8u; }
        if (ctx->pc != 0x3E78C8u) { return; }
    }
    ctx->pc = 0x3E78C8u;
label_3e78c8:
    // 0x3e78c8: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x3e78c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3e78cc:
    // 0x3e78cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e78ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e78d0:
    // 0x3e78d0: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_3e78d4:
    if (ctx->pc == 0x3E78D4u) {
        ctx->pc = 0x3E78D4u;
            // 0x3e78d4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3E78D8u;
        goto label_3e78d8;
    }
    ctx->pc = 0x3E78D0u;
    {
        const bool branch_taken_0x3e78d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E78D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E78D0u;
            // 0x3e78d4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e78d0) {
            ctx->pc = 0x3E7920u;
            goto label_3e7920;
        }
    }
    ctx->pc = 0x3E78D8u;
label_3e78d8:
    // 0x3e78d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e78d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e78dc:
    // 0x3e78dc: 0xc088ef4  jal         func_223BD0
label_3e78e0:
    if (ctx->pc == 0x3E78E0u) {
        ctx->pc = 0x3E78E0u;
            // 0x3e78e0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3E78E4u;
        goto label_3e78e4;
    }
    ctx->pc = 0x3E78DCu;
    SET_GPR_U32(ctx, 31, 0x3E78E4u);
    ctx->pc = 0x3E78E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E78DCu;
            // 0x3e78e0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E78E4u; }
        if (ctx->pc != 0x3E78E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E78E4u; }
        if (ctx->pc != 0x3E78E4u) { return; }
    }
    ctx->pc = 0x3E78E4u;
label_3e78e4:
    // 0x3e78e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3e78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3e78e8:
    // 0x3e78e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3e78e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3e78ec:
    // 0x3e78ec: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x3e78ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_3e78f0:
    // 0x3e78f0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x3e78f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_3e78f4:
    // 0x3e78f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3e78f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3e78f8:
    // 0x3e78f8: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x3e78f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_3e78fc:
    // 0x3e78fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e78fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e7900:
    // 0x3e7900: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3e7900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3e7904:
    // 0x3e7904: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x3e7904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_3e7908:
    // 0x3e7908: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x3e7908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_3e790c:
    // 0x3e790c: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x3e790cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_3e7910:
    // 0x3e7910: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3e7910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3e7914:
    // 0x3e7914: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x3e7914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3e7918:
    // 0x3e7918: 0xc088b38  jal         func_222CE0
label_3e791c:
    if (ctx->pc == 0x3E791Cu) {
        ctx->pc = 0x3E791Cu;
            // 0x3e791c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E7920u;
        goto label_3e7920;
    }
    ctx->pc = 0x3E7918u;
    SET_GPR_U32(ctx, 31, 0x3E7920u);
    ctx->pc = 0x3E791Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7918u;
            // 0x3e791c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7920u; }
        if (ctx->pc != 0x3E7920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7920u; }
        if (ctx->pc != 0x3E7920u) { return; }
    }
    ctx->pc = 0x3E7920u;
label_3e7920:
    // 0x3e7920: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3e7920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e7924:
    // 0x3e7924: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e7924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e7928:
    // 0x3e7928: 0xc08c164  jal         func_230590
label_3e792c:
    if (ctx->pc == 0x3E792Cu) {
        ctx->pc = 0x3E792Cu;
            // 0x3e792c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E7930u;
        goto label_3e7930;
    }
    ctx->pc = 0x3E7928u;
    SET_GPR_U32(ctx, 31, 0x3E7930u);
    ctx->pc = 0x3E792Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7928u;
            // 0x3e792c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7930u; }
        if (ctx->pc != 0x3E7930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7930u; }
        if (ctx->pc != 0x3E7930u) { return; }
    }
    ctx->pc = 0x3E7930u;
label_3e7930:
    // 0x3e7930: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3e7930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3e7934:
    // 0x3e7934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e7934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e7938:
    // 0x3e7938: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x3e7938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_3e793c:
    // 0x3e793c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3e793cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3e7940:
    // 0x3e7940: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x3e7940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_3e7944:
    // 0x3e7944: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e7944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e7948:
    // 0x3e7948: 0xc08914c  jal         func_224530
label_3e794c:
    if (ctx->pc == 0x3E794Cu) {
        ctx->pc = 0x3E794Cu;
            // 0x3e794c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E7950u;
        goto label_3e7950;
    }
    ctx->pc = 0x3E7948u;
    SET_GPR_U32(ctx, 31, 0x3E7950u);
    ctx->pc = 0x3E794Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7948u;
            // 0x3e794c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7950u; }
        if (ctx->pc != 0x3E7950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7950u; }
        if (ctx->pc != 0x3E7950u) { return; }
    }
    ctx->pc = 0x3E7950u;
label_3e7950:
    // 0x3e7950: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x3e7950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_3e7954:
    // 0x3e7954: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x3e7954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
label_3e7958:
    // 0x3e7958: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x3e7958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_3e795c:
    // 0x3e795c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3e795cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_3e7960:
    // 0x3e7960: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x3e7960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_3e7964:
    // 0x3e7964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e7964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e7968:
    // 0x3e7968: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x3e7968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_3e796c:
    // 0x3e796c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3e796cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3e7970:
    // 0x3e7970: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x3e7970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e7974:
    // 0x3e7974: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3e7974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3e7978:
    // 0x3e7978: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x3e7978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e797c:
    // 0x3e797c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3e797cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e7980:
    // 0x3e7980: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3e7980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3e7984:
    // 0x3e7984: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3e7984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3e7988:
    // 0x3e7988: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3e7988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3e798c:
    // 0x3e798c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3e798cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3e7990:
    // 0x3e7990: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x3e7990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3e7994:
    // 0x3e7994: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x3e7994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e7998:
    // 0x3e7998: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x3e7998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e799c:
    // 0x3e799c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x3e799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e79a0:
    // 0x3e79a0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3e79a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3e79a4:
    // 0x3e79a4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3e79a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3e79a8:
    // 0x3e79a8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3e79a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3e79ac:
    // 0x3e79ac: 0xc0892b0  jal         func_224AC0
label_3e79b0:
    if (ctx->pc == 0x3E79B0u) {
        ctx->pc = 0x3E79B0u;
            // 0x3e79b0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x3E79B4u;
        goto label_3e79b4;
    }
    ctx->pc = 0x3E79ACu;
    SET_GPR_U32(ctx, 31, 0x3E79B4u);
    ctx->pc = 0x3E79B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E79ACu;
            // 0x3e79b0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E79B4u; }
        if (ctx->pc != 0x3E79B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E79B4u; }
        if (ctx->pc != 0x3E79B4u) { return; }
    }
    ctx->pc = 0x3E79B4u;
label_3e79b4:
    // 0x3e79b4: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x3e79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_3e79b8:
    // 0x3e79b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e79b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e79bc:
    // 0x3e79bc: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3e79bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_3e79c0:
    // 0x3e79c0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3e79c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3e79c4:
    // 0x3e79c4: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x3e79c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_3e79c8:
    // 0x3e79c8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3e79c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3e79cc:
    // 0x3e79cc: 0xc0891d8  jal         func_224760
label_3e79d0:
    if (ctx->pc == 0x3E79D0u) {
        ctx->pc = 0x3E79D0u;
            // 0x3e79d0: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x3E79D4u;
        goto label_3e79d4;
    }
    ctx->pc = 0x3E79CCu;
    SET_GPR_U32(ctx, 31, 0x3E79D4u);
    ctx->pc = 0x3E79D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E79CCu;
            // 0x3e79d0: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E79D4u; }
        if (ctx->pc != 0x3E79D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E79D4u; }
        if (ctx->pc != 0x3E79D4u) { return; }
    }
    ctx->pc = 0x3E79D4u;
label_3e79d4:
    // 0x3e79d4: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x3e79d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_3e79d8:
    // 0x3e79d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e79dc:
    // 0x3e79dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3e79dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3e79e0:
    // 0x3e79e0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3e79e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3e79e4:
    // 0x3e79e4: 0xc0a7a88  jal         func_29EA20
label_3e79e8:
    if (ctx->pc == 0x3E79E8u) {
        ctx->pc = 0x3E79E8u;
            // 0x3e79e8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x3E79ECu;
        goto label_3e79ec;
    }
    ctx->pc = 0x3E79E4u;
    SET_GPR_U32(ctx, 31, 0x3E79ECu);
    ctx->pc = 0x3E79E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E79E4u;
            // 0x3e79e8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E79ECu; }
        if (ctx->pc != 0x3E79ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E79ECu; }
        if (ctx->pc != 0x3E79ECu) { return; }
    }
    ctx->pc = 0x3E79ECu;
label_3e79ec:
    // 0x3e79ec: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3e79ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3e79f0:
    // 0x3e79f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e79f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e79f4:
    // 0x3e79f4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_3e79f8:
    if (ctx->pc == 0x3E79F8u) {
        ctx->pc = 0x3E79F8u;
            // 0x3e79f8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3E79FCu;
        goto label_3e79fc;
    }
    ctx->pc = 0x3E79F4u;
    {
        const bool branch_taken_0x3e79f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E79F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E79F4u;
            // 0x3e79f8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e79f4) {
            ctx->pc = 0x3E7A18u;
            goto label_3e7a18;
        }
    }
    ctx->pc = 0x3E79FCu;
label_3e79fc:
    // 0x3e79fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e79fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7a00:
    // 0x3e7a00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e7a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e7a04:
    // 0x3e7a04: 0xc0869d0  jal         func_21A740
label_3e7a08:
    if (ctx->pc == 0x3E7A08u) {
        ctx->pc = 0x3E7A08u;
            // 0x3e7a08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E7A0Cu;
        goto label_3e7a0c;
    }
    ctx->pc = 0x3E7A04u;
    SET_GPR_U32(ctx, 31, 0x3E7A0Cu);
    ctx->pc = 0x3E7A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7A04u;
            // 0x3e7a08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7A0Cu; }
        if (ctx->pc != 0x3E7A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7A0Cu; }
        if (ctx->pc != 0x3E7A0Cu) { return; }
    }
    ctx->pc = 0x3E7A0Cu;
label_3e7a0c:
    // 0x3e7a0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3e7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3e7a10:
    // 0x3e7a10: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x3e7a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_3e7a14:
    // 0x3e7a14: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3e7a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3e7a18:
    // 0x3e7a18: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x3e7a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_3e7a1c:
    // 0x3e7a1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e7a20:
    // 0x3e7a20: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3e7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3e7a24:
    // 0x3e7a24: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3e7a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3e7a28:
    // 0x3e7a28: 0xc08c650  jal         func_231940
label_3e7a2c:
    if (ctx->pc == 0x3E7A2Cu) {
        ctx->pc = 0x3E7A2Cu;
            // 0x3e7a2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E7A30u;
        goto label_3e7a30;
    }
    ctx->pc = 0x3E7A28u;
    SET_GPR_U32(ctx, 31, 0x3E7A30u);
    ctx->pc = 0x3E7A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7A28u;
            // 0x3e7a2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7A30u; }
        if (ctx->pc != 0x3E7A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7A30u; }
        if (ctx->pc != 0x3E7A30u) { return; }
    }
    ctx->pc = 0x3E7A30u;
label_3e7a30:
    // 0x3e7a30: 0xc040180  jal         func_100600
label_3e7a34:
    if (ctx->pc == 0x3E7A34u) {
        ctx->pc = 0x3E7A34u;
            // 0x3e7a34: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x3E7A38u;
        goto label_3e7a38;
    }
    ctx->pc = 0x3E7A30u;
    SET_GPR_U32(ctx, 31, 0x3E7A38u);
    ctx->pc = 0x3E7A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7A30u;
            // 0x3e7a34: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7A38u; }
        if (ctx->pc != 0x3E7A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7A38u; }
        if (ctx->pc != 0x3E7A38u) { return; }
    }
    ctx->pc = 0x3E7A38u;
label_3e7a38:
    // 0x3e7a38: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_3e7a3c:
    if (ctx->pc == 0x3E7A3Cu) {
        ctx->pc = 0x3E7A3Cu;
            // 0x3e7a3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E7A40u;
        goto label_3e7a40;
    }
    ctx->pc = 0x3E7A38u;
    {
        const bool branch_taken_0x3e7a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7A38u;
            // 0x3e7a3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7a38) {
            ctx->pc = 0x3E7AA8u;
            goto label_3e7aa8;
        }
    }
    ctx->pc = 0x3E7A40u;
label_3e7a40:
    // 0x3e7a40: 0x8e470050  lw          $a3, 0x50($s2)
    ctx->pc = 0x3e7a40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_3e7a44:
    // 0x3e7a44: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3e7a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3e7a48:
    // 0x3e7a48: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x3e7a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_3e7a4c:
    // 0x3e7a4c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3e7a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3e7a50:
    // 0x3e7a50: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e7a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3e7a54:
    // 0x3e7a54: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x3e7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_3e7a58:
    // 0x3e7a58: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x3e7a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
label_3e7a5c:
    // 0x3e7a5c: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x3e7a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
label_3e7a60:
    // 0x3e7a60: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3e7a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_3e7a64:
    // 0x3e7a64: 0x24a5a110  addiu       $a1, $a1, -0x5EF0
    ctx->pc = 0x3e7a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942992));
label_3e7a68:
    // 0x3e7a68: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x3e7a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
label_3e7a6c:
    // 0x3e7a6c: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x3e7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_3e7a70:
    // 0x3e7a70: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x3e7a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_3e7a74:
    // 0x3e7a74: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x3e7a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_3e7a78:
    // 0x3e7a78: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3e7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_3e7a7c:
    // 0x3e7a7c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3e7a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_3e7a80:
    // 0x3e7a80: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3e7a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_3e7a84:
    // 0x3e7a84: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x3e7a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_3e7a88:
    // 0x3e7a88: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x3e7a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_3e7a8c:
    // 0x3e7a8c: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x3e7a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
label_3e7a90:
    // 0x3e7a90: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x3e7a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_3e7a94:
    // 0x3e7a94: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x3e7a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_3e7a98:
    // 0x3e7a98: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x3e7a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_3e7a9c:
    // 0x3e7a9c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x3e7a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_3e7aa0:
    // 0x3e7aa0: 0xc04c968  jal         func_1325A0
label_3e7aa4:
    if (ctx->pc == 0x3E7AA4u) {
        ctx->pc = 0x3E7AA4u;
            // 0x3e7aa4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3E7AA8u;
        goto label_3e7aa8;
    }
    ctx->pc = 0x3E7AA0u;
    SET_GPR_U32(ctx, 31, 0x3E7AA8u);
    ctx->pc = 0x3E7AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7AA0u;
            // 0x3e7aa4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7AA8u; }
        if (ctx->pc != 0x3E7AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7AA8u; }
        if (ctx->pc != 0x3E7AA8u) { return; }
    }
    ctx->pc = 0x3E7AA8u;
label_3e7aa8:
    // 0x3e7aa8: 0xae5000a0  sw          $s0, 0xA0($s2)
    ctx->pc = 0x3e7aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
label_3e7aac:
    // 0x3e7aac: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3e7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3e7ab0:
    // 0x3e7ab0: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x3e7ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3e7ab4:
    // 0x3e7ab4: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x3e7ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3e7ab8:
    // 0x3e7ab8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3e7ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e7abc:
    // 0x3e7abc: 0x3c064416  lui         $a2, 0x4416
    ctx->pc = 0x3e7abcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17430 << 16));
label_3e7ac0:
    // 0x3e7ac0: 0x3c054334  lui         $a1, 0x4334
    ctx->pc = 0x3e7ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17204 << 16));
label_3e7ac4:
    // 0x3e7ac4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3e7ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3e7ac8:
    // 0x3e7ac8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3e7ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3e7acc:
    // 0x3e7acc: 0x34890004  ori         $t1, $a0, 0x4
    ctx->pc = 0x3e7accu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_3e7ad0:
    // 0x3e7ad0: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x3e7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_3e7ad4:
    // 0x3e7ad4: 0xae4900b0  sw          $t1, 0xB0($s2)
    ctx->pc = 0x3e7ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 9));
label_3e7ad8:
    // 0x3e7ad8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e7ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3e7adc:
    // 0x3e7adc: 0x8e090060  lw          $t1, 0x60($s0)
    ctx->pc = 0x3e7adcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_3e7ae0:
    // 0x3e7ae0: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x3e7ae0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
label_3e7ae4:
    // 0x3e7ae4: 0xae080060  sw          $t0, 0x60($s0)
    ctx->pc = 0x3e7ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 8));
label_3e7ae8:
    // 0x3e7ae8: 0xae47008c  sw          $a3, 0x8C($s2)
    ctx->pc = 0x3e7ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 7));
label_3e7aec:
    // 0x3e7aec: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x3e7aecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
label_3e7af0:
    // 0x3e7af0: 0xae460078  sw          $a2, 0x78($s2)
    ctx->pc = 0x3e7af0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 6));
label_3e7af4:
    // 0x3e7af4: 0xae450080  sw          $a1, 0x80($s2)
    ctx->pc = 0x3e7af4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 5));
label_3e7af8:
    // 0x3e7af8: 0xa2430068  sb          $v1, 0x68($s2)
    ctx->pc = 0x3e7af8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 3));
label_3e7afc:
    // 0x3e7afc: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x3e7afcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_3e7b00:
    // 0x3e7b00: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x3e7b00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_3e7b04:
    // 0x3e7b04: 0xa247006b  sb          $a3, 0x6B($s2)
    ctx->pc = 0x3e7b04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 7));
label_3e7b08:
    // 0x3e7b08: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x3e7b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3e7b0c:
    // 0x3e7b0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e7b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3e7b10:
    // 0x3e7b10: 0xc040180  jal         func_100600
label_3e7b14:
    if (ctx->pc == 0x3E7B14u) {
        ctx->pc = 0x3E7B14u;
            // 0x3e7b14: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x3E7B18u;
        goto label_3e7b18;
    }
    ctx->pc = 0x3E7B10u;
    SET_GPR_U32(ctx, 31, 0x3E7B18u);
    ctx->pc = 0x3E7B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7B10u;
            // 0x3e7b14: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7B18u; }
        if (ctx->pc != 0x3E7B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7B18u; }
        if (ctx->pc != 0x3E7B18u) { return; }
    }
    ctx->pc = 0x3E7B18u;
label_3e7b18:
    // 0x3e7b18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e7b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7b1c:
    // 0x3e7b1c: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_3e7b20:
    if (ctx->pc == 0x3E7B20u) {
        ctx->pc = 0x3E7B20u;
            // 0x3e7b20: 0x3c024774  lui         $v0, 0x4774 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
        ctx->pc = 0x3E7B24u;
        goto label_3e7b24;
    }
    ctx->pc = 0x3E7B1Cu;
    {
        const bool branch_taken_0x3e7b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7b1c) {
            ctx->pc = 0x3E7B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7B1Cu;
            // 0x3e7b20: 0x3c024774  lui         $v0, 0x4774 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7B5Cu;
            goto label_3e7b5c;
        }
    }
    ctx->pc = 0x3E7B24u;
label_3e7b24:
    // 0x3e7b24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3e7b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3e7b28:
    // 0x3e7b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e7b2c:
    // 0x3e7b2c: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x3e7b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_3e7b30:
    // 0x3e7b30: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3e7b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3e7b34:
    // 0x3e7b34: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e7b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3e7b38:
    // 0x3e7b38: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3e7b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3e7b3c:
    // 0x3e7b3c: 0xc040138  jal         func_1004E0
label_3e7b40:
    if (ctx->pc == 0x3E7B40u) {
        ctx->pc = 0x3E7B40u;
            // 0x3e7b40: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3E7B44u;
        goto label_3e7b44;
    }
    ctx->pc = 0x3E7B3Cu;
    SET_GPR_U32(ctx, 31, 0x3E7B44u);
    ctx->pc = 0x3E7B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7B3Cu;
            // 0x3e7b40: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7B44u; }
        if (ctx->pc != 0x3E7B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7B44u; }
        if (ctx->pc != 0x3E7B44u) { return; }
    }
    ctx->pc = 0x3E7B44u;
label_3e7b44:
    // 0x3e7b44: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3e7b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3e7b48:
    // 0x3e7b48: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x3e7b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3e7b4c:
    // 0x3e7b4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e7b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e7b50:
    // 0x3e7b50: 0xc04a576  jal         func_1295D8
label_3e7b54:
    if (ctx->pc == 0x3E7B54u) {
        ctx->pc = 0x3E7B54u;
            // 0x3e7b54: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3E7B58u;
        goto label_3e7b58;
    }
    ctx->pc = 0x3E7B50u;
    SET_GPR_U32(ctx, 31, 0x3E7B58u);
    ctx->pc = 0x3E7B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7B50u;
            // 0x3e7b54: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7B58u; }
        if (ctx->pc != 0x3E7B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7B58u; }
        if (ctx->pc != 0x3E7B58u) { return; }
    }
    ctx->pc = 0x3E7B58u;
label_3e7b58:
    // 0x3e7b58: 0x3c024774  lui         $v0, 0x4774
    ctx->pc = 0x3e7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
label_3e7b5c:
    // 0x3e7b5c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3e7b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3e7b60:
    // 0x3e7b60: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x3e7b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_3e7b64:
    // 0x3e7b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7b68:
    // 0x3e7b68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e7b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e7b6c:
    // 0x3e7b6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e7b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e7b70:
    // 0x3e7b70: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3e7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_3e7b74:
    // 0x3e7b74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e7b74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e7b78:
    // 0x3e7b78: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3e7b78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e7b7c:
    // 0x3e7b7c: 0x34460dae  ori         $a2, $v0, 0xDAE
    ctx->pc = 0x3e7b7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3502);
label_3e7b80:
    // 0x3e7b80: 0xc122cd8  jal         func_48B360
label_3e7b84:
    if (ctx->pc == 0x3E7B84u) {
        ctx->pc = 0x3E7B84u;
            // 0x3e7b84: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->pc = 0x3E7B88u;
        goto label_3e7b88;
    }
    ctx->pc = 0x3E7B80u;
    SET_GPR_U32(ctx, 31, 0x3E7B88u);
    ctx->pc = 0x3E7B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7B80u;
            // 0x3e7b84: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7B88u; }
        if (ctx->pc != 0x3E7B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7B88u; }
        if (ctx->pc != 0x3E7B88u) { return; }
    }
    ctx->pc = 0x3E7B88u;
label_3e7b88:
    // 0x3e7b88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e7b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3e7b8c:
    // 0x3e7b8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e7b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e7b90:
    // 0x3e7b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e7b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e7b94:
    // 0x3e7b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e7b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e7b98:
    // 0x3e7b98: 0x3e00008  jr          $ra
label_3e7b9c:
    if (ctx->pc == 0x3E7B9Cu) {
        ctx->pc = 0x3E7B9Cu;
            // 0x3e7b9c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x3E7BA0u;
        goto label_3e7ba0;
    }
    ctx->pc = 0x3E7B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7B98u;
            // 0x3e7b9c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E7BA0u;
label_3e7ba0:
    // 0x3e7ba0: 0x3e00008  jr          $ra
label_3e7ba4:
    if (ctx->pc == 0x3E7BA4u) {
        ctx->pc = 0x3E7BA8u;
        goto label_3e7ba8;
    }
    ctx->pc = 0x3E7BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E7BA8u;
label_3e7ba8:
    // 0x3e7ba8: 0x0  nop
    ctx->pc = 0x3e7ba8u;
    // NOP
label_3e7bac:
    // 0x3e7bac: 0x0  nop
    ctx->pc = 0x3e7bacu;
    // NOP
label_3e7bb0:
    // 0x3e7bb0: 0x3e00008  jr          $ra
label_3e7bb4:
    if (ctx->pc == 0x3E7BB4u) {
        ctx->pc = 0x3E7BB8u;
        goto label_3e7bb8;
    }
    ctx->pc = 0x3E7BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E7BB8u;
label_3e7bb8:
    // 0x3e7bb8: 0x0  nop
    ctx->pc = 0x3e7bb8u;
    // NOP
label_3e7bbc:
    // 0x3e7bbc: 0x0  nop
    ctx->pc = 0x3e7bbcu;
    // NOP
label_3e7bc0:
    // 0x3e7bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e7bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e7bc4:
    // 0x3e7bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e7bc8:
    // 0x3e7bc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e7bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3e7bcc:
    // 0x3e7bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e7bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e7bd0:
    // 0x3e7bd0: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x3e7bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_3e7bd4:
    // 0x3e7bd4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_3e7bd8:
    if (ctx->pc == 0x3E7BD8u) {
        ctx->pc = 0x3E7BD8u;
            // 0x3e7bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E7BDCu;
        goto label_3e7bdc;
    }
    ctx->pc = 0x3E7BD4u;
    {
        const bool branch_taken_0x3e7bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E7BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7BD4u;
            // 0x3e7bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7bd4) {
            ctx->pc = 0x3E7C00u;
            goto label_3e7c00;
        }
    }
    ctx->pc = 0x3E7BDCu;
label_3e7bdc:
    // 0x3e7bdc: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3e7bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3e7be0:
    // 0x3e7be0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e7be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e7be4:
    // 0x3e7be4: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x3e7be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e7be8:
    // 0x3e7be8: 0xc0e32a4  jal         func_38CA90
label_3e7bec:
    if (ctx->pc == 0x3E7BECu) {
        ctx->pc = 0x3E7BECu;
            // 0x3e7bec: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->pc = 0x3E7BF0u;
        goto label_3e7bf0;
    }
    ctx->pc = 0x3E7BE8u;
    SET_GPR_U32(ctx, 31, 0x3E7BF0u);
    ctx->pc = 0x3E7BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7BE8u;
            // 0x3e7bec: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7BF0u; }
        if (ctx->pc != 0x3E7BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7BF0u; }
        if (ctx->pc != 0x3E7BF0u) { return; }
    }
    ctx->pc = 0x3E7BF0u;
label_3e7bf0:
    // 0x3e7bf0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e7bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e7bf4:
    // 0x3e7bf4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e7bf8:
    // 0x3e7bf8: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x3e7bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_3e7bfc:
    // 0x3e7bfc: 0xa202004c  sb          $v0, 0x4C($s0)
    ctx->pc = 0x3e7bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 2));
label_3e7c00:
    // 0x3e7c00: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x3e7c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_3e7c04:
    // 0x3e7c04: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x3e7c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3e7c08:
    // 0x3e7c08: 0xc122d2c  jal         func_48B4B0
label_3e7c0c:
    if (ctx->pc == 0x3E7C0Cu) {
        ctx->pc = 0x3E7C0Cu;
            // 0x3e7c0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E7C10u;
        goto label_3e7c10;
    }
    ctx->pc = 0x3E7C08u;
    SET_GPR_U32(ctx, 31, 0x3E7C10u);
    ctx->pc = 0x3E7C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7C08u;
            // 0x3e7c0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7C10u; }
        if (ctx->pc != 0x3E7C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7C10u; }
        if (ctx->pc != 0x3E7C10u) { return; }
    }
    ctx->pc = 0x3E7C10u;
label_3e7c10:
    // 0x3e7c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e7c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e7c14:
    // 0x3e7c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e7c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e7c18:
    // 0x3e7c18: 0x3e00008  jr          $ra
label_3e7c1c:
    if (ctx->pc == 0x3E7C1Cu) {
        ctx->pc = 0x3E7C1Cu;
            // 0x3e7c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3E7C20u;
        goto label_3e7c20;
    }
    ctx->pc = 0x3E7C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7C18u;
            // 0x3e7c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E7C20u;
label_3e7c20:
    // 0x3e7c20: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3e7c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3e7c24:
    // 0x3e7c24: 0x80ba938  j           func_2EA4E0
label_3e7c28:
    if (ctx->pc == 0x3E7C28u) {
        ctx->pc = 0x3E7C28u;
            // 0x3e7c28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E7C2Cu;
        goto label_3e7c2c;
    }
    ctx->pc = 0x3E7C24u;
    ctx->pc = 0x3E7C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7C24u;
            // 0x3e7c28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3E7C2Cu;
label_3e7c2c:
    // 0x3e7c2c: 0x0  nop
    ctx->pc = 0x3e7c2cu;
    // NOP
label_3e7c30:
    // 0x3e7c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e7c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3e7c34:
    // 0x3e7c34: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x3e7c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
label_3e7c38:
    // 0x3e7c38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e7c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e7c3c:
    // 0x3e7c3c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e7c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e7c40:
    // 0x3e7c40: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3e7c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3e7c44:
    // 0x3e7c44: 0xc48100f8  lwc1        $f1, 0xF8($a0)
    ctx->pc = 0x3e7c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e7c48:
    // 0x3e7c48: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3e7c48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e7c4c:
    // 0x3e7c4c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3e7c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e7c50:
    // 0x3e7c50: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3e7c50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3e7c54:
    // 0x3e7c54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e7c54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e7c58:
    // 0x3e7c58: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_3e7c5c:
    if (ctx->pc == 0x3E7C5Cu) {
        ctx->pc = 0x3E7C5Cu;
            // 0x3e7c5c: 0xe48100f8  swc1        $f1, 0xF8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
        ctx->pc = 0x3E7C60u;
        goto label_3e7c60;
    }
    ctx->pc = 0x3E7C58u;
    {
        const bool branch_taken_0x3e7c58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E7C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7C58u;
            // 0x3e7c5c: 0xe48100f8  swc1        $f1, 0xF8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7c58) {
            ctx->pc = 0x3E7C88u;
            goto label_3e7c88;
        }
    }
    ctx->pc = 0x3E7C60u;
label_3e7c60:
    // 0x3e7c60: 0xac8000f8  sw          $zero, 0xF8($a0)
    ctx->pc = 0x3e7c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
label_3e7c64:
    // 0x3e7c64: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x3e7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_3e7c68:
    // 0x3e7c68: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3e7c68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e7c6c:
    // 0x3e7c6c: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3e7c70:
    if (ctx->pc == 0x3E7C70u) {
        ctx->pc = 0x3E7C70u;
            // 0x3e7c70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3E7C74u;
        goto label_3e7c74;
    }
    ctx->pc = 0x3E7C6Cu;
    {
        const bool branch_taken_0x3e7c6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7c6c) {
            ctx->pc = 0x3E7C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7C6Cu;
            // 0x3e7c70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7C8Cu;
            goto label_3e7c8c;
        }
    }
    ctx->pc = 0x3E7C74u;
label_3e7c74:
    // 0x3e7c74: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x3e7c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3e7c78:
    // 0x3e7c78: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x3e7c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_3e7c7c:
    // 0x3e7c7c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e7c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e7c80:
    // 0x3e7c80: 0xc0bb2e8  jal         func_2ECBA0
label_3e7c84:
    if (ctx->pc == 0x3E7C84u) {
        ctx->pc = 0x3E7C84u;
            // 0x3e7c84: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3E7C88u;
        goto label_3e7c88;
    }
    ctx->pc = 0x3E7C80u;
    SET_GPR_U32(ctx, 31, 0x3E7C88u);
    ctx->pc = 0x3E7C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7C80u;
            // 0x3e7c84: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7C88u; }
        if (ctx->pc != 0x3E7C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7C88u; }
        if (ctx->pc != 0x3E7C88u) { return; }
    }
    ctx->pc = 0x3E7C88u;
label_3e7c88:
    // 0x3e7c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e7c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e7c8c:
    // 0x3e7c8c: 0x3e00008  jr          $ra
label_3e7c90:
    if (ctx->pc == 0x3E7C90u) {
        ctx->pc = 0x3E7C90u;
            // 0x3e7c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3E7C94u;
        goto label_3e7c94;
    }
    ctx->pc = 0x3E7C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7C8Cu;
            // 0x3e7c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E7C94u;
label_3e7c94:
    // 0x3e7c94: 0x0  nop
    ctx->pc = 0x3e7c94u;
    // NOP
label_3e7c98:
    // 0x3e7c98: 0x0  nop
    ctx->pc = 0x3e7c98u;
    // NOP
label_3e7c9c:
    // 0x3e7c9c: 0x0  nop
    ctx->pc = 0x3e7c9cu;
    // NOP
label_3e7ca0:
    // 0x3e7ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e7ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3e7ca4:
    // 0x3e7ca4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3e7ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3e7ca8:
    // 0x3e7ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e7ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e7cac:
    // 0x3e7cac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e7cacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e7cb0:
    // 0x3e7cb0: 0xc48100ec  lwc1        $f1, 0xEC($a0)
    ctx->pc = 0x3e7cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e7cb4:
    // 0x3e7cb4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e7cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e7cb8:
    // 0x3e7cb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3e7cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3e7cbc:
    // 0x3e7cbc: 0xe48000ec  swc1        $f0, 0xEC($a0)
    ctx->pc = 0x3e7cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
label_3e7cc0:
    // 0x3e7cc0: 0x8c636f00  lw          $v1, 0x6F00($v1)
    ctx->pc = 0x3e7cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28416)));
label_3e7cc4:
    // 0x3e7cc4: 0xc48000ec  lwc1        $f0, 0xEC($a0)
    ctx->pc = 0x3e7cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e7cc8:
    // 0x3e7cc8: 0x8c630098  lw          $v1, 0x98($v1)
    ctx->pc = 0x3e7cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_3e7ccc:
    // 0x3e7ccc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3e7cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e7cd0:
    // 0x3e7cd0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e7cd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e7cd4:
    // 0x3e7cd4: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_3e7cd8:
    if (ctx->pc == 0x3E7CD8u) {
        ctx->pc = 0x3E7CD8u;
            // 0x3e7cd8: 0xc48200f4  lwc1        $f2, 0xF4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3E7CDCu;
        goto label_3e7cdc;
    }
    ctx->pc = 0x3E7CD4u;
    {
        const bool branch_taken_0x3e7cd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e7cd4) {
            ctx->pc = 0x3E7CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7CD4u;
            // 0x3e7cd8: 0xc48200f4  lwc1        $f2, 0xF4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7CE4u;
            goto label_3e7ce4;
        }
    }
    ctx->pc = 0x3E7CDCu;
label_3e7cdc:
    // 0x3e7cdc: 0xac8000ec  sw          $zero, 0xEC($a0)
    ctx->pc = 0x3e7cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
label_3e7ce0:
    // 0x3e7ce0: 0xc48200f4  lwc1        $f2, 0xF4($a0)
    ctx->pc = 0x3e7ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e7ce4:
    // 0x3e7ce4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3e7ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3e7ce8:
    // 0x3e7ce8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e7ce8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e7cec:
    // 0x3e7cec: 0x0  nop
    ctx->pc = 0x3e7cecu;
    // NOP
label_3e7cf0:
    // 0x3e7cf0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3e7cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e7cf4:
    // 0x3e7cf4: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_3e7cf8:
    if (ctx->pc == 0x3E7CF8u) {
        ctx->pc = 0x3E7CF8u;
            // 0x3e7cf8: 0x8c8500a0  lw          $a1, 0xA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
        ctx->pc = 0x3E7CFCu;
        goto label_3e7cfc;
    }
    ctx->pc = 0x3E7CF4u;
    {
        const bool branch_taken_0x3e7cf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e7cf4) {
            ctx->pc = 0x3E7CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7CF4u;
            // 0x3e7cf8: 0x8c8500a0  lw          $a1, 0xA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7D30u;
            goto label_3e7d30;
        }
    }
    ctx->pc = 0x3E7CFCu;
label_3e7cfc:
    // 0x3e7cfc: 0x3c033c08  lui         $v1, 0x3C08
    ctx->pc = 0x3e7cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15368 << 16));
label_3e7d00:
    // 0x3e7d00: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3e7d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_3e7d04:
    // 0x3e7d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e7d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e7d08:
    // 0x3e7d08: 0x0  nop
    ctx->pc = 0x3e7d08u;
    // NOP
label_3e7d0c:
    // 0x3e7d0c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3e7d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3e7d10:
    // 0x3e7d10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e7d10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e7d14:
    // 0x3e7d14: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3e7d18:
    if (ctx->pc == 0x3E7D18u) {
        ctx->pc = 0x3E7D18u;
            // 0x3e7d18: 0xe48000f4  swc1        $f0, 0xF4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
        ctx->pc = 0x3E7D1Cu;
        goto label_3e7d1c;
    }
    ctx->pc = 0x3E7D14u;
    {
        const bool branch_taken_0x3e7d14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E7D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7D14u;
            // 0x3e7d18: 0xe48000f4  swc1        $f0, 0xF4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d14) {
            ctx->pc = 0x3E7D20u;
            goto label_3e7d20;
        }
    }
    ctx->pc = 0x3E7D1Cu;
label_3e7d1c:
    // 0x3e7d1c: 0xe48100f4  swc1        $f1, 0xF4($a0)
    ctx->pc = 0x3e7d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
label_3e7d20:
    // 0x3e7d20: 0xc48000f4  lwc1        $f0, 0xF4($a0)
    ctx->pc = 0x3e7d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e7d24:
    // 0x3e7d24: 0xe4800100  swc1        $f0, 0x100($a0)
    ctx->pc = 0x3e7d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
label_3e7d28:
    // 0x3e7d28: 0x10000037  b           . + 4 + (0x37 << 2)
label_3e7d2c:
    if (ctx->pc == 0x3E7D2Cu) {
        ctx->pc = 0x3E7D2Cu;
            // 0x3e7d2c: 0xe4800104  swc1        $f0, 0x104($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 260), bits); }
        ctx->pc = 0x3E7D30u;
        goto label_3e7d30;
    }
    ctx->pc = 0x3E7D28u;
    {
        const bool branch_taken_0x3e7d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7D28u;
            // 0x3e7d2c: 0xe4800104  swc1        $f0, 0x104($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d28) {
            ctx->pc = 0x3E7E08u;
            goto label_3e7e08;
        }
    }
    ctx->pc = 0x3E7D30u;
label_3e7d30:
    // 0x3e7d30: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3e7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e7d34:
    // 0x3e7d34: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x3e7d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_3e7d38:
    // 0x3e7d38: 0x14a30033  bne         $a1, $v1, . + 4 + (0x33 << 2)
label_3e7d3c:
    if (ctx->pc == 0x3E7D3Cu) {
        ctx->pc = 0x3E7D40u;
        goto label_3e7d40;
    }
    ctx->pc = 0x3E7D38u;
    {
        const bool branch_taken_0x3e7d38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e7d38) {
            ctx->pc = 0x3E7E08u;
            goto label_3e7e08;
        }
    }
    ctx->pc = 0x3E7D40u;
label_3e7d40:
    // 0x3e7d40: 0xc4820104  lwc1        $f2, 0x104($a0)
    ctx->pc = 0x3e7d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e7d44:
    // 0x3e7d44: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3e7d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3e7d48:
    // 0x3e7d48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e7d48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e7d4c:
    // 0x3e7d4c: 0x0  nop
    ctx->pc = 0x3e7d4cu;
    // NOP
label_3e7d50:
    // 0x3e7d50: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x3e7d50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e7d54:
    // 0x3e7d54: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
label_3e7d58:
    if (ctx->pc == 0x3E7D58u) {
        ctx->pc = 0x3E7D58u;
            // 0x3e7d58: 0x3c033fcc  lui         $v1, 0x3FCC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16332 << 16));
        ctx->pc = 0x3E7D5Cu;
        goto label_3e7d5c;
    }
    ctx->pc = 0x3E7D54u;
    {
        const bool branch_taken_0x3e7d54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e7d54) {
            ctx->pc = 0x3E7D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7D54u;
            // 0x3e7d58: 0x3c033fcc  lui         $v1, 0x3FCC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16332 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7D84u;
            goto label_3e7d84;
        }
    }
    ctx->pc = 0x3E7D5Cu;
label_3e7d5c:
    // 0x3e7d5c: 0x3c033c08  lui         $v1, 0x3C08
    ctx->pc = 0x3e7d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15368 << 16));
label_3e7d60:
    // 0x3e7d60: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3e7d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_3e7d64:
    // 0x3e7d64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e7d64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e7d68:
    // 0x3e7d68: 0x0  nop
    ctx->pc = 0x3e7d68u;
    // NOP
label_3e7d6c:
    // 0x3e7d6c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3e7d6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3e7d70:
    // 0x3e7d70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3e7d70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e7d74:
    // 0x3e7d74: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3e7d78:
    if (ctx->pc == 0x3E7D78u) {
        ctx->pc = 0x3E7D78u;
            // 0x3e7d78: 0xe4800104  swc1        $f0, 0x104($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 260), bits); }
        ctx->pc = 0x3E7D7Cu;
        goto label_3e7d7c;
    }
    ctx->pc = 0x3E7D74u;
    {
        const bool branch_taken_0x3e7d74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E7D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7D74u;
            // 0x3e7d78: 0xe4800104  swc1        $f0, 0x104($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7d74) {
            ctx->pc = 0x3E7D80u;
            goto label_3e7d80;
        }
    }
    ctx->pc = 0x3E7D7Cu;
label_3e7d7c:
    // 0x3e7d7c: 0xe4810104  swc1        $f1, 0x104($a0)
    ctx->pc = 0x3e7d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 260), bits); }
label_3e7d80:
    // 0x3e7d80: 0x3c033fcc  lui         $v1, 0x3FCC
    ctx->pc = 0x3e7d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16332 << 16));
label_3e7d84:
    // 0x3e7d84: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3e7d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_3e7d88:
    // 0x3e7d88: 0xc4820100  lwc1        $f2, 0x100($a0)
    ctx->pc = 0x3e7d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e7d8c:
    // 0x3e7d8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e7d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e7d90:
    // 0x3e7d90: 0x0  nop
    ctx->pc = 0x3e7d90u;
    // NOP
label_3e7d94:
    // 0x3e7d94: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3e7d94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e7d98:
    // 0x3e7d98: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_3e7d9c:
    if (ctx->pc == 0x3E7D9Cu) {
        ctx->pc = 0x3E7D9Cu;
            // 0x3e7d9c: 0x3c033fc9  lui         $v1, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
        ctx->pc = 0x3E7DA0u;
        goto label_3e7da0;
    }
    ctx->pc = 0x3E7D98u;
    {
        const bool branch_taken_0x3e7d98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e7d98) {
            ctx->pc = 0x3E7D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7D98u;
            // 0x3e7d9c: 0x3c033fc9  lui         $v1, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7DC8u;
            goto label_3e7dc8;
        }
    }
    ctx->pc = 0x3E7DA0u;
label_3e7da0:
    // 0x3e7da0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x3e7da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_3e7da4:
    // 0x3e7da4: 0x3463d70b  ori         $v1, $v1, 0xD70B
    ctx->pc = 0x3e7da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55051);
label_3e7da8:
    // 0x3e7da8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e7da8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e7dac:
    // 0x3e7dac: 0x0  nop
    ctx->pc = 0x3e7dacu;
    // NOP
label_3e7db0:
    // 0x3e7db0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3e7db0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3e7db4:
    // 0x3e7db4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e7db4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e7db8:
    // 0x3e7db8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3e7dbc:
    if (ctx->pc == 0x3E7DBCu) {
        ctx->pc = 0x3E7DBCu;
            // 0x3e7dbc: 0xe4800100  swc1        $f0, 0x100($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
        ctx->pc = 0x3E7DC0u;
        goto label_3e7dc0;
    }
    ctx->pc = 0x3E7DB8u;
    {
        const bool branch_taken_0x3e7db8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E7DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7DB8u;
            // 0x3e7dbc: 0xe4800100  swc1        $f0, 0x100($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7db8) {
            ctx->pc = 0x3E7DC4u;
            goto label_3e7dc4;
        }
    }
    ctx->pc = 0x3E7DC0u;
label_3e7dc0:
    // 0x3e7dc0: 0xe4810100  swc1        $f1, 0x100($a0)
    ctx->pc = 0x3e7dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
label_3e7dc4:
    // 0x3e7dc4: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x3e7dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_3e7dc8:
    // 0x3e7dc8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3e7dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_3e7dcc:
    // 0x3e7dcc: 0xc4820108  lwc1        $f2, 0x108($a0)
    ctx->pc = 0x3e7dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e7dd0:
    // 0x3e7dd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e7dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e7dd4:
    // 0x3e7dd4: 0x0  nop
    ctx->pc = 0x3e7dd4u;
    // NOP
label_3e7dd8:
    // 0x3e7dd8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3e7dd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e7ddc:
    // 0x3e7ddc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_3e7de0:
    if (ctx->pc == 0x3E7DE0u) {
        ctx->pc = 0x3E7DE4u;
        goto label_3e7de4;
    }
    ctx->pc = 0x3E7DDCu;
    {
        const bool branch_taken_0x3e7ddc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e7ddc) {
            ctx->pc = 0x3E7E08u;
            goto label_3e7e08;
        }
    }
    ctx->pc = 0x3E7DE4u;
label_3e7de4:
    // 0x3e7de4: 0x3c033cd6  lui         $v1, 0x3CD6
    ctx->pc = 0x3e7de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15574 << 16));
label_3e7de8:
    // 0x3e7de8: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x3e7de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
label_3e7dec:
    // 0x3e7dec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e7decu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e7df0:
    // 0x3e7df0: 0x0  nop
    ctx->pc = 0x3e7df0u;
    // NOP
label_3e7df4:
    // 0x3e7df4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3e7df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3e7df8:
    // 0x3e7df8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e7df8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e7dfc:
    // 0x3e7dfc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3e7e00:
    if (ctx->pc == 0x3E7E00u) {
        ctx->pc = 0x3E7E00u;
            // 0x3e7e00: 0xe4800108  swc1        $f0, 0x108($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
        ctx->pc = 0x3E7E04u;
        goto label_3e7e04;
    }
    ctx->pc = 0x3E7DFCu;
    {
        const bool branch_taken_0x3e7dfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E7E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7DFCu;
            // 0x3e7e00: 0xe4800108  swc1        $f0, 0x108($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7dfc) {
            ctx->pc = 0x3E7E08u;
            goto label_3e7e08;
        }
    }
    ctx->pc = 0x3E7E04u;
label_3e7e04:
    // 0x3e7e04: 0xe4810108  swc1        $f1, 0x108($a0)
    ctx->pc = 0x3e7e04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
label_3e7e08:
    // 0x3e7e08: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e7e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e7e0c:
    // 0x3e7e0c: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x3e7e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
label_3e7e10:
    // 0x3e7e10: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3e7e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3e7e14:
    // 0x3e7e14: 0xc48100f8  lwc1        $f1, 0xF8($a0)
    ctx->pc = 0x3e7e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e7e18:
    // 0x3e7e18: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3e7e18u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e7e1c:
    // 0x3e7e1c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3e7e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e7e20:
    // 0x3e7e20: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3e7e20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3e7e24:
    // 0x3e7e24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e7e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e7e28:
    // 0x3e7e28: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_3e7e2c:
    if (ctx->pc == 0x3E7E2Cu) {
        ctx->pc = 0x3E7E2Cu;
            // 0x3e7e2c: 0xe48100f8  swc1        $f1, 0xF8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
        ctx->pc = 0x3E7E30u;
        goto label_3e7e30;
    }
    ctx->pc = 0x3E7E28u;
    {
        const bool branch_taken_0x3e7e28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E7E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7E28u;
            // 0x3e7e2c: 0xe48100f8  swc1        $f1, 0xF8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7e28) {
            ctx->pc = 0x3E7E58u;
            goto label_3e7e58;
        }
    }
    ctx->pc = 0x3E7E30u;
label_3e7e30:
    // 0x3e7e30: 0xac8000f8  sw          $zero, 0xF8($a0)
    ctx->pc = 0x3e7e30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
label_3e7e34:
    // 0x3e7e34: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x3e7e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_3e7e38:
    // 0x3e7e38: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3e7e38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e7e3c:
    // 0x3e7e3c: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3e7e40:
    if (ctx->pc == 0x3E7E40u) {
        ctx->pc = 0x3E7E40u;
            // 0x3e7e40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3E7E44u;
        goto label_3e7e44;
    }
    ctx->pc = 0x3E7E3Cu;
    {
        const bool branch_taken_0x3e7e3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7e3c) {
            ctx->pc = 0x3E7E40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7E3Cu;
            // 0x3e7e40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7E5Cu;
            goto label_3e7e5c;
        }
    }
    ctx->pc = 0x3E7E44u;
label_3e7e44:
    // 0x3e7e44: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x3e7e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3e7e48:
    // 0x3e7e48: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x3e7e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_3e7e4c:
    // 0x3e7e4c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e7e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e7e50:
    // 0x3e7e50: 0xc0bb2e8  jal         func_2ECBA0
label_3e7e54:
    if (ctx->pc == 0x3E7E54u) {
        ctx->pc = 0x3E7E54u;
            // 0x3e7e54: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3E7E58u;
        goto label_3e7e58;
    }
    ctx->pc = 0x3E7E50u;
    SET_GPR_U32(ctx, 31, 0x3E7E58u);
    ctx->pc = 0x3E7E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7E50u;
            // 0x3e7e54: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7E58u; }
        if (ctx->pc != 0x3E7E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7E58u; }
        if (ctx->pc != 0x3E7E58u) { return; }
    }
    ctx->pc = 0x3E7E58u;
label_3e7e58:
    // 0x3e7e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e7e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e7e5c:
    // 0x3e7e5c: 0x3e00008  jr          $ra
label_3e7e60:
    if (ctx->pc == 0x3E7E60u) {
        ctx->pc = 0x3E7E60u;
            // 0x3e7e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3E7E64u;
        goto label_3e7e64;
    }
    ctx->pc = 0x3E7E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7E5Cu;
            // 0x3e7e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E7E64u;
label_3e7e64:
    // 0x3e7e64: 0x0  nop
    ctx->pc = 0x3e7e64u;
    // NOP
label_3e7e68:
    // 0x3e7e68: 0x0  nop
    ctx->pc = 0x3e7e68u;
    // NOP
label_3e7e6c:
    // 0x3e7e6c: 0x0  nop
    ctx->pc = 0x3e7e6cu;
    // NOP
label_3e7e70:
    // 0x3e7e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e7e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e7e74:
    // 0x3e7e74: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3e7e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e7e78:
    // 0x3e7e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e7e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3e7e7c:
    // 0x3e7e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e7e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e7e80:
    // 0x3e7e80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e7e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e7e84:
    // 0x3e7e84: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x3e7e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_3e7e88:
    // 0x3e7e88: 0x10870028  beq         $a0, $a3, . + 4 + (0x28 << 2)
label_3e7e8c:
    if (ctx->pc == 0x3E7E8Cu) {
        ctx->pc = 0x3E7E90u;
        goto label_3e7e90;
    }
    ctx->pc = 0x3E7E88u;
    {
        const bool branch_taken_0x3e7e88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x3e7e88) {
            ctx->pc = 0x3E7F2Cu;
            goto label_3e7f2c;
        }
    }
    ctx->pc = 0x3E7E90u;
label_3e7e90:
    // 0x3e7e90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e7e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e7e94:
    // 0x3e7e94: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_3e7e98:
    if (ctx->pc == 0x3E7E98u) {
        ctx->pc = 0x3E7E98u;
            // 0x3e7e98: 0xc60200f4  lwc1        $f2, 0xF4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3E7E9Cu;
        goto label_3e7e9c;
    }
    ctx->pc = 0x3E7E94u;
    {
        const bool branch_taken_0x3e7e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e7e94) {
            ctx->pc = 0x3E7E98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7E94u;
            // 0x3e7e98: 0xc60200f4  lwc1        $f2, 0xF4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7EB4u;
            goto label_3e7eb4;
        }
    }
    ctx->pc = 0x3E7E9Cu;
label_3e7e9c:
    // 0x3e7e9c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_3e7ea0:
    if (ctx->pc == 0x3E7EA0u) {
        ctx->pc = 0x3E7EA0u;
            // 0x3e7ea0: 0xa20300fc  sb          $v1, 0xFC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3E7EA4u;
        goto label_3e7ea4;
    }
    ctx->pc = 0x3E7E9Cu;
    {
        const bool branch_taken_0x3e7e9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7e9c) {
            ctx->pc = 0x3E7EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7E9Cu;
            // 0x3e7ea0: 0xa20300fc  sb          $v1, 0xFC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7EACu;
            goto label_3e7eac;
        }
    }
    ctx->pc = 0x3E7EA4u;
label_3e7ea4:
    // 0x3e7ea4: 0x10000035  b           . + 4 + (0x35 << 2)
label_3e7ea8:
    if (ctx->pc == 0x3E7EA8u) {
        ctx->pc = 0x3E7EA8u;
            // 0x3e7ea8: 0xc60100ec  lwc1        $f1, 0xEC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3E7EACu;
        goto label_3e7eac;
    }
    ctx->pc = 0x3E7EA4u;
    {
        const bool branch_taken_0x3e7ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7EA4u;
            // 0x3e7ea8: 0xc60100ec  lwc1        $f1, 0xEC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7ea4) {
            ctx->pc = 0x3E7F7Cu;
            goto label_3e7f7c;
        }
    }
    ctx->pc = 0x3E7EACu;
label_3e7eac:
    // 0x3e7eac: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x3e7eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_3e7eb0:
    // 0x3e7eb0: 0xc60200f4  lwc1        $f2, 0xF4($s0)
    ctx->pc = 0x3e7eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e7eb4:
    // 0x3e7eb4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3e7eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3e7eb8:
    // 0x3e7eb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e7eb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e7ebc:
    // 0x3e7ebc: 0x0  nop
    ctx->pc = 0x3e7ebcu;
    // NOP
label_3e7ec0:
    // 0x3e7ec0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3e7ec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e7ec4:
    // 0x3e7ec4: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_3e7ec8:
    if (ctx->pc == 0x3E7EC8u) {
        ctx->pc = 0x3E7EC8u;
            // 0x3e7ec8: 0xc60100f4  lwc1        $f1, 0xF4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3E7ECCu;
        goto label_3e7ecc;
    }
    ctx->pc = 0x3E7EC4u;
    {
        const bool branch_taken_0x3e7ec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e7ec4) {
            ctx->pc = 0x3E7EC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7EC4u;
            // 0x3e7ec8: 0xc60100f4  lwc1        $f1, 0xF4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7F00u;
            goto label_3e7f00;
        }
    }
    ctx->pc = 0x3E7ECCu;
label_3e7ecc:
    // 0x3e7ecc: 0x3c033c08  lui         $v1, 0x3C08
    ctx->pc = 0x3e7eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15368 << 16));
label_3e7ed0:
    // 0x3e7ed0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3e7ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_3e7ed4:
    // 0x3e7ed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e7ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e7ed8:
    // 0x3e7ed8: 0x0  nop
    ctx->pc = 0x3e7ed8u;
    // NOP
label_3e7edc:
    // 0x3e7edc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3e7edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3e7ee0:
    // 0x3e7ee0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e7ee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e7ee4:
    // 0x3e7ee4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3e7ee8:
    if (ctx->pc == 0x3E7EE8u) {
        ctx->pc = 0x3E7EE8u;
            // 0x3e7ee8: 0xe60000f4  swc1        $f0, 0xF4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
        ctx->pc = 0x3E7EECu;
        goto label_3e7eec;
    }
    ctx->pc = 0x3E7EE4u;
    {
        const bool branch_taken_0x3e7ee4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E7EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7EE4u;
            // 0x3e7ee8: 0xe60000f4  swc1        $f0, 0xF4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7ee4) {
            ctx->pc = 0x3E7EF0u;
            goto label_3e7ef0;
        }
    }
    ctx->pc = 0x3E7EECu;
label_3e7eec:
    // 0x3e7eec: 0xe60100f4  swc1        $f1, 0xF4($s0)
    ctx->pc = 0x3e7eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_3e7ef0:
    // 0x3e7ef0: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x3e7ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e7ef4:
    // 0x3e7ef4: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x3e7ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_3e7ef8:
    // 0x3e7ef8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3e7ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_3e7efc:
    // 0x3e7efc: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x3e7efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e7f00:
    // 0x3e7f00: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3e7f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3e7f04:
    // 0x3e7f04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e7f04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e7f08:
    // 0x3e7f08: 0x0  nop
    ctx->pc = 0x3e7f08u;
    // NOP
label_3e7f0c:
    // 0x3e7f0c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3e7f0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e7f10:
    // 0x3e7f10: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_3e7f14:
    if (ctx->pc == 0x3E7F14u) {
        ctx->pc = 0x3E7F18u;
        goto label_3e7f18;
    }
    ctx->pc = 0x3E7F10u;
    {
        const bool branch_taken_0x3e7f10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e7f10) {
            ctx->pc = 0x3E7F78u;
            goto label_3e7f78;
        }
    }
    ctx->pc = 0x3E7F18u;
label_3e7f18:
    // 0x3e7f18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e7f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e7f1c:
    // 0x3e7f1c: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x3e7f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_3e7f20:
    // 0x3e7f20: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x3e7f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_3e7f24:
    // 0x3e7f24: 0x10000014  b           . + 4 + (0x14 << 2)
label_3e7f28:
    if (ctx->pc == 0x3E7F28u) {
        ctx->pc = 0x3E7F28u;
            // 0x3e7f28: 0xa20000fc  sb          $zero, 0xFC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3E7F2Cu;
        goto label_3e7f2c;
    }
    ctx->pc = 0x3E7F24u;
    {
        const bool branch_taken_0x3e7f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7F24u;
            // 0x3e7f28: 0xa20000fc  sb          $zero, 0xFC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7f24) {
            ctx->pc = 0x3E7F78u;
            goto label_3e7f78;
        }
    }
    ctx->pc = 0x3E7F2Cu;
label_3e7f2c:
    // 0x3e7f2c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e7f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e7f30:
    // 0x3e7f30: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x3e7f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
label_3e7f34:
    // 0x3e7f34: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3e7f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3e7f38:
    // 0x3e7f38: 0xc60100f8  lwc1        $f1, 0xF8($s0)
    ctx->pc = 0x3e7f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e7f3c:
    // 0x3e7f3c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e7f3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e7f40:
    // 0x3e7f40: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3e7f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e7f44:
    // 0x3e7f44: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3e7f44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3e7f48:
    // 0x3e7f48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e7f48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e7f4c:
    // 0x3e7f4c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_3e7f50:
    if (ctx->pc == 0x3E7F50u) {
        ctx->pc = 0x3E7F50u;
            // 0x3e7f50: 0xe60100f8  swc1        $f1, 0xF8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
        ctx->pc = 0x3E7F54u;
        goto label_3e7f54;
    }
    ctx->pc = 0x3E7F4Cu;
    {
        const bool branch_taken_0x3e7f4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E7F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7F4Cu;
            // 0x3e7f50: 0xe60100f8  swc1        $f1, 0xF8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7f4c) {
            ctx->pc = 0x3E7F78u;
            goto label_3e7f78;
        }
    }
    ctx->pc = 0x3E7F54u;
label_3e7f54:
    // 0x3e7f54: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x3e7f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_3e7f58:
    // 0x3e7f58: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x3e7f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_3e7f5c:
    // 0x3e7f5c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3e7f5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e7f60:
    // 0x3e7f60: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_3e7f64:
    if (ctx->pc == 0x3E7F64u) {
        ctx->pc = 0x3E7F68u;
        goto label_3e7f68;
    }
    ctx->pc = 0x3E7F60u;
    {
        const bool branch_taken_0x3e7f60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7f60) {
            ctx->pc = 0x3E7F78u;
            goto label_3e7f78;
        }
    }
    ctx->pc = 0x3E7F68u;
label_3e7f68:
    // 0x3e7f68: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e7f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e7f6c:
    // 0x3e7f6c: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x3e7f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_3e7f70:
    // 0x3e7f70: 0xc0bb2e8  jal         func_2ECBA0
label_3e7f74:
    if (ctx->pc == 0x3E7F74u) {
        ctx->pc = 0x3E7F74u;
            // 0x3e7f74: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3E7F78u;
        goto label_3e7f78;
    }
    ctx->pc = 0x3E7F70u;
    SET_GPR_U32(ctx, 31, 0x3E7F78u);
    ctx->pc = 0x3E7F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7F70u;
            // 0x3e7f74: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7F78u; }
        if (ctx->pc != 0x3E7F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7F78u; }
        if (ctx->pc != 0x3E7F78u) { return; }
    }
    ctx->pc = 0x3E7F78u;
label_3e7f78:
    // 0x3e7f78: 0xc60100ec  lwc1        $f1, 0xEC($s0)
    ctx->pc = 0x3e7f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e7f7c:
    // 0x3e7f7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3e7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3e7f80:
    // 0x3e7f80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e7f80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e7f84:
    // 0x3e7f84: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e7f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e7f88:
    // 0x3e7f88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3e7f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3e7f8c:
    // 0x3e7f8c: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x3e7f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
label_3e7f90:
    // 0x3e7f90: 0x8c636f00  lw          $v1, 0x6F00($v1)
    ctx->pc = 0x3e7f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28416)));
label_3e7f94:
    // 0x3e7f94: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x3e7f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e7f98:
    // 0x3e7f98: 0x8c630098  lw          $v1, 0x98($v1)
    ctx->pc = 0x3e7f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_3e7f9c:
    // 0x3e7f9c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3e7f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e7fa0:
    // 0x3e7fa0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e7fa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e7fa4:
    // 0x3e7fa4: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_3e7fa8:
    if (ctx->pc == 0x3E7FA8u) {
        ctx->pc = 0x3E7FA8u;
            // 0x3e7fa8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3E7FACu;
        goto label_3e7fac;
    }
    ctx->pc = 0x3E7FA4u;
    {
        const bool branch_taken_0x3e7fa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e7fa4) {
            ctx->pc = 0x3E7FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7FA4u;
            // 0x3e7fa8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7FB4u;
            goto label_3e7fb4;
        }
    }
    ctx->pc = 0x3E7FACu;
label_3e7fac:
    // 0x3e7fac: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x3e7facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_3e7fb0:
    // 0x3e7fb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e7fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e7fb4:
    // 0x3e7fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e7fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e7fb8:
    // 0x3e7fb8: 0x3e00008  jr          $ra
label_3e7fbc:
    if (ctx->pc == 0x3E7FBCu) {
        ctx->pc = 0x3E7FBCu;
            // 0x3e7fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3E7FC0u;
        goto label_3e7fc0;
    }
    ctx->pc = 0x3E7FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7FB8u;
            // 0x3e7fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E7FC0u;
label_3e7fc0:
    // 0x3e7fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e7fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3e7fc4:
    // 0x3e7fc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e7fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3e7fc8:
    // 0x3e7fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e7fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e7fcc:
    // 0x3e7fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e7fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e7fd0:
    // 0x3e7fd0: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x3e7fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3e7fd4:
    // 0x3e7fd4: 0xc0e393c  jal         func_38E4F0
label_3e7fd8:
    if (ctx->pc == 0x3E7FD8u) {
        ctx->pc = 0x3E7FD8u;
            // 0x3e7fd8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E7FDCu;
        goto label_3e7fdc;
    }
    ctx->pc = 0x3E7FD4u;
    SET_GPR_U32(ctx, 31, 0x3E7FDCu);
    ctx->pc = 0x3E7FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7FD4u;
            // 0x3e7fd8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7FDCu; }
        if (ctx->pc != 0x3E7FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7FDCu; }
        if (ctx->pc != 0x3E7FDCu) { return; }
    }
    ctx->pc = 0x3E7FDCu;
label_3e7fdc:
    // 0x3e7fdc: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x3e7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_3e7fe0:
    // 0x3e7fe0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3e7fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3e7fe4:
    // 0x3e7fe4: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x3e7fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_3e7fe8:
    // 0x3e7fe8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3e7fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3e7fec:
    // 0x3e7fec: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3e7fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3e7ff0:
    // 0x3e7ff0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e7ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e7ff4:
    // 0x3e7ff4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3e7ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3e7ff8:
    // 0x3e7ff8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e7ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7ffc:
    // 0x3e7ffc: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x3e7ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_3e8000:
    // 0x3e8000: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e8000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e8004:
    // 0x3e8004: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3e8004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3e8008:
    // 0x3e8008: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3e8008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3e800c:
    // 0x3e800c: 0xc08bff0  jal         func_22FFC0
label_3e8010:
    if (ctx->pc == 0x3E8010u) {
        ctx->pc = 0x3E8010u;
            // 0x3e8010: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8014u;
        goto label_3e8014;
    }
    ctx->pc = 0x3E800Cu;
    SET_GPR_U32(ctx, 31, 0x3E8014u);
    ctx->pc = 0x3E8010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E800Cu;
            // 0x3e8010: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8014u; }
        if (ctx->pc != 0x3E8014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8014u; }
        if (ctx->pc != 0x3E8014u) { return; }
    }
    ctx->pc = 0x3E8014u;
label_3e8014:
    // 0x3e8014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8018:
    // 0x3e8018: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3e8018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3e801c:
    // 0x3e801c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e801cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8020:
    // 0x3e8020: 0xc08914c  jal         func_224530
label_3e8024:
    if (ctx->pc == 0x3E8024u) {
        ctx->pc = 0x3E8024u;
            // 0x3e8024: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8028u;
        goto label_3e8028;
    }
    ctx->pc = 0x3E8020u;
    SET_GPR_U32(ctx, 31, 0x3E8028u);
    ctx->pc = 0x3E8024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8020u;
            // 0x3e8024: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8028u; }
        if (ctx->pc != 0x3E8028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8028u; }
        if (ctx->pc != 0x3E8028u) { return; }
    }
    ctx->pc = 0x3E8028u;
label_3e8028:
    // 0x3e8028: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3e8028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e802c:
    // 0x3e802c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e802cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8030:
    // 0x3e8030: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3e8030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e8034:
    // 0x3e8034: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3e8034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3e8038:
    // 0x3e8038: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3e8038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e803c:
    // 0x3e803c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3e803cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3e8040:
    // 0x3e8040: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3e8040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3e8044:
    // 0x3e8044: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3e8044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_3e8048:
    // 0x3e8048: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3e8048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3e804c:
    // 0x3e804c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3e804cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3e8050:
    // 0x3e8050: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x3e8050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3e8054:
    // 0x3e8054: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x3e8054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e8058:
    // 0x3e8058: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3e8058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e805c:
    // 0x3e805c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3e805cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e8060:
    // 0x3e8060: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3e8060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3e8064:
    // 0x3e8064: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3e8064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3e8068:
    // 0x3e8068: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x3e8068u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3e806c:
    // 0x3e806c: 0xc0892b0  jal         func_224AC0
label_3e8070:
    if (ctx->pc == 0x3E8070u) {
        ctx->pc = 0x3E8070u;
            // 0x3e8070: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x3E8074u;
        goto label_3e8074;
    }
    ctx->pc = 0x3E806Cu;
    SET_GPR_U32(ctx, 31, 0x3E8074u);
    ctx->pc = 0x3E8070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E806Cu;
            // 0x3e8070: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8074u; }
        if (ctx->pc != 0x3E8074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8074u; }
        if (ctx->pc != 0x3E8074u) { return; }
    }
    ctx->pc = 0x3E8074u;
label_3e8074:
    // 0x3e8074: 0xc088b74  jal         func_222DD0
label_3e8078:
    if (ctx->pc == 0x3E8078u) {
        ctx->pc = 0x3E8078u;
            // 0x3e8078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E807Cu;
        goto label_3e807c;
    }
    ctx->pc = 0x3E8074u;
    SET_GPR_U32(ctx, 31, 0x3E807Cu);
    ctx->pc = 0x3E8078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8074u;
            // 0x3e8078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E807Cu; }
        if (ctx->pc != 0x3E807Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E807Cu; }
        if (ctx->pc != 0x3E807Cu) { return; }
    }
    ctx->pc = 0x3E807Cu;
label_3e807c:
    // 0x3e807c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3e807cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3e8080:
    // 0x3e8080: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3e8080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3e8084:
    // 0x3e8084: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3e8084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3e8088:
    // 0x3e8088: 0x320f809  jalr        $t9
label_3e808c:
    if (ctx->pc == 0x3E808Cu) {
        ctx->pc = 0x3E808Cu;
            // 0x3e808c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3E8090u;
        goto label_3e8090;
    }
    ctx->pc = 0x3E8088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E8090u);
        ctx->pc = 0x3E808Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8088u;
            // 0x3e808c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E8090u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E8090u; }
            if (ctx->pc != 0x3E8090u) { return; }
        }
        }
    }
    ctx->pc = 0x3E8090u;
label_3e8090:
    // 0x3e8090: 0xc088b74  jal         func_222DD0
label_3e8094:
    if (ctx->pc == 0x3E8094u) {
        ctx->pc = 0x3E8094u;
            // 0x3e8094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8098u;
        goto label_3e8098;
    }
    ctx->pc = 0x3E8090u;
    SET_GPR_U32(ctx, 31, 0x3E8098u);
    ctx->pc = 0x3E8094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8090u;
            // 0x3e8094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8098u; }
        if (ctx->pc != 0x3E8098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8098u; }
        if (ctx->pc != 0x3E8098u) { return; }
    }
    ctx->pc = 0x3E8098u;
label_3e8098:
    // 0x3e8098: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3e8098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3e809c:
    // 0x3e809c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3e809cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3e80a0:
    // 0x3e80a0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x3e80a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_3e80a4:
    // 0x3e80a4: 0x320f809  jalr        $t9
label_3e80a8:
    if (ctx->pc == 0x3E80A8u) {
        ctx->pc = 0x3E80A8u;
            // 0x3e80a8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3E80ACu;
        goto label_3e80ac;
    }
    ctx->pc = 0x3E80A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E80ACu);
        ctx->pc = 0x3E80A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E80A4u;
            // 0x3e80a8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E80ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E80ACu; }
            if (ctx->pc != 0x3E80ACu) { return; }
        }
        }
    }
    ctx->pc = 0x3E80ACu;
label_3e80ac:
    // 0x3e80ac: 0x3c0443d1  lui         $a0, 0x43D1
    ctx->pc = 0x3e80acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17361 << 16));
label_3e80b0:
    // 0x3e80b0: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x3e80b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
label_3e80b4:
    // 0x3e80b4: 0x34857084  ori         $a1, $a0, 0x7084
    ctx->pc = 0x3e80b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28804);
label_3e80b8:
    // 0x3e80b8: 0x34640a92  ori         $a0, $v1, 0xA92
    ctx->pc = 0x3e80b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_3e80bc:
    // 0x3e80bc: 0xae050154  sw          $a1, 0x154($s0)
    ctx->pc = 0x3e80bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 5));
label_3e80c0:
    // 0x3e80c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e80c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e80c4:
    // 0x3e80c4: 0xae040158  sw          $a0, 0x158($s0)
    ctx->pc = 0x3e80c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 4));
label_3e80c8:
    // 0x3e80c8: 0xae2300e8  sw          $v1, 0xE8($s1)
    ctx->pc = 0x3e80c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 3));
label_3e80cc:
    // 0x3e80cc: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x3e80ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
label_3e80d0:
    // 0x3e80d0: 0xae2000ec  sw          $zero, 0xEC($s1)
    ctx->pc = 0x3e80d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 0));
label_3e80d4:
    // 0x3e80d4: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x3e80d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_3e80d8:
    // 0x3e80d8: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x3e80d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
label_3e80dc:
    // 0x3e80dc: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x3e80dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
label_3e80e0:
    // 0x3e80e0: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x3e80e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
label_3e80e4:
    // 0x3e80e4: 0xa22300fc  sb          $v1, 0xFC($s1)
    ctx->pc = 0x3e80e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 252), (uint8_t)GPR_U32(ctx, 3));
label_3e80e8:
    // 0x3e80e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e80e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e80ec:
    // 0x3e80ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e80ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e80f0:
    // 0x3e80f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e80f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e80f4:
    // 0x3e80f4: 0x3e00008  jr          $ra
label_3e80f8:
    if (ctx->pc == 0x3E80F8u) {
        ctx->pc = 0x3E80F8u;
            // 0x3e80f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3E80FCu;
        goto label_3e80fc;
    }
    ctx->pc = 0x3E80F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E80F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E80F4u;
            // 0x3e80f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E80FCu;
label_3e80fc:
    // 0x3e80fc: 0x0  nop
    ctx->pc = 0x3e80fcu;
    // NOP
}
