#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B8380
// Address: 0x4b8380 - 0x4b8dc0
void sub_004B8380_0x4b8380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8380_0x4b8380");
#endif

    switch (ctx->pc) {
        case 0x4b8380u: goto label_4b8380;
        case 0x4b8384u: goto label_4b8384;
        case 0x4b8388u: goto label_4b8388;
        case 0x4b838cu: goto label_4b838c;
        case 0x4b8390u: goto label_4b8390;
        case 0x4b8394u: goto label_4b8394;
        case 0x4b8398u: goto label_4b8398;
        case 0x4b839cu: goto label_4b839c;
        case 0x4b83a0u: goto label_4b83a0;
        case 0x4b83a4u: goto label_4b83a4;
        case 0x4b83a8u: goto label_4b83a8;
        case 0x4b83acu: goto label_4b83ac;
        case 0x4b83b0u: goto label_4b83b0;
        case 0x4b83b4u: goto label_4b83b4;
        case 0x4b83b8u: goto label_4b83b8;
        case 0x4b83bcu: goto label_4b83bc;
        case 0x4b83c0u: goto label_4b83c0;
        case 0x4b83c4u: goto label_4b83c4;
        case 0x4b83c8u: goto label_4b83c8;
        case 0x4b83ccu: goto label_4b83cc;
        case 0x4b83d0u: goto label_4b83d0;
        case 0x4b83d4u: goto label_4b83d4;
        case 0x4b83d8u: goto label_4b83d8;
        case 0x4b83dcu: goto label_4b83dc;
        case 0x4b83e0u: goto label_4b83e0;
        case 0x4b83e4u: goto label_4b83e4;
        case 0x4b83e8u: goto label_4b83e8;
        case 0x4b83ecu: goto label_4b83ec;
        case 0x4b83f0u: goto label_4b83f0;
        case 0x4b83f4u: goto label_4b83f4;
        case 0x4b83f8u: goto label_4b83f8;
        case 0x4b83fcu: goto label_4b83fc;
        case 0x4b8400u: goto label_4b8400;
        case 0x4b8404u: goto label_4b8404;
        case 0x4b8408u: goto label_4b8408;
        case 0x4b840cu: goto label_4b840c;
        case 0x4b8410u: goto label_4b8410;
        case 0x4b8414u: goto label_4b8414;
        case 0x4b8418u: goto label_4b8418;
        case 0x4b841cu: goto label_4b841c;
        case 0x4b8420u: goto label_4b8420;
        case 0x4b8424u: goto label_4b8424;
        case 0x4b8428u: goto label_4b8428;
        case 0x4b842cu: goto label_4b842c;
        case 0x4b8430u: goto label_4b8430;
        case 0x4b8434u: goto label_4b8434;
        case 0x4b8438u: goto label_4b8438;
        case 0x4b843cu: goto label_4b843c;
        case 0x4b8440u: goto label_4b8440;
        case 0x4b8444u: goto label_4b8444;
        case 0x4b8448u: goto label_4b8448;
        case 0x4b844cu: goto label_4b844c;
        case 0x4b8450u: goto label_4b8450;
        case 0x4b8454u: goto label_4b8454;
        case 0x4b8458u: goto label_4b8458;
        case 0x4b845cu: goto label_4b845c;
        case 0x4b8460u: goto label_4b8460;
        case 0x4b8464u: goto label_4b8464;
        case 0x4b8468u: goto label_4b8468;
        case 0x4b846cu: goto label_4b846c;
        case 0x4b8470u: goto label_4b8470;
        case 0x4b8474u: goto label_4b8474;
        case 0x4b8478u: goto label_4b8478;
        case 0x4b847cu: goto label_4b847c;
        case 0x4b8480u: goto label_4b8480;
        case 0x4b8484u: goto label_4b8484;
        case 0x4b8488u: goto label_4b8488;
        case 0x4b848cu: goto label_4b848c;
        case 0x4b8490u: goto label_4b8490;
        case 0x4b8494u: goto label_4b8494;
        case 0x4b8498u: goto label_4b8498;
        case 0x4b849cu: goto label_4b849c;
        case 0x4b84a0u: goto label_4b84a0;
        case 0x4b84a4u: goto label_4b84a4;
        case 0x4b84a8u: goto label_4b84a8;
        case 0x4b84acu: goto label_4b84ac;
        case 0x4b84b0u: goto label_4b84b0;
        case 0x4b84b4u: goto label_4b84b4;
        case 0x4b84b8u: goto label_4b84b8;
        case 0x4b84bcu: goto label_4b84bc;
        case 0x4b84c0u: goto label_4b84c0;
        case 0x4b84c4u: goto label_4b84c4;
        case 0x4b84c8u: goto label_4b84c8;
        case 0x4b84ccu: goto label_4b84cc;
        case 0x4b84d0u: goto label_4b84d0;
        case 0x4b84d4u: goto label_4b84d4;
        case 0x4b84d8u: goto label_4b84d8;
        case 0x4b84dcu: goto label_4b84dc;
        case 0x4b84e0u: goto label_4b84e0;
        case 0x4b84e4u: goto label_4b84e4;
        case 0x4b84e8u: goto label_4b84e8;
        case 0x4b84ecu: goto label_4b84ec;
        case 0x4b84f0u: goto label_4b84f0;
        case 0x4b84f4u: goto label_4b84f4;
        case 0x4b84f8u: goto label_4b84f8;
        case 0x4b84fcu: goto label_4b84fc;
        case 0x4b8500u: goto label_4b8500;
        case 0x4b8504u: goto label_4b8504;
        case 0x4b8508u: goto label_4b8508;
        case 0x4b850cu: goto label_4b850c;
        case 0x4b8510u: goto label_4b8510;
        case 0x4b8514u: goto label_4b8514;
        case 0x4b8518u: goto label_4b8518;
        case 0x4b851cu: goto label_4b851c;
        case 0x4b8520u: goto label_4b8520;
        case 0x4b8524u: goto label_4b8524;
        case 0x4b8528u: goto label_4b8528;
        case 0x4b852cu: goto label_4b852c;
        case 0x4b8530u: goto label_4b8530;
        case 0x4b8534u: goto label_4b8534;
        case 0x4b8538u: goto label_4b8538;
        case 0x4b853cu: goto label_4b853c;
        case 0x4b8540u: goto label_4b8540;
        case 0x4b8544u: goto label_4b8544;
        case 0x4b8548u: goto label_4b8548;
        case 0x4b854cu: goto label_4b854c;
        case 0x4b8550u: goto label_4b8550;
        case 0x4b8554u: goto label_4b8554;
        case 0x4b8558u: goto label_4b8558;
        case 0x4b855cu: goto label_4b855c;
        case 0x4b8560u: goto label_4b8560;
        case 0x4b8564u: goto label_4b8564;
        case 0x4b8568u: goto label_4b8568;
        case 0x4b856cu: goto label_4b856c;
        case 0x4b8570u: goto label_4b8570;
        case 0x4b8574u: goto label_4b8574;
        case 0x4b8578u: goto label_4b8578;
        case 0x4b857cu: goto label_4b857c;
        case 0x4b8580u: goto label_4b8580;
        case 0x4b8584u: goto label_4b8584;
        case 0x4b8588u: goto label_4b8588;
        case 0x4b858cu: goto label_4b858c;
        case 0x4b8590u: goto label_4b8590;
        case 0x4b8594u: goto label_4b8594;
        case 0x4b8598u: goto label_4b8598;
        case 0x4b859cu: goto label_4b859c;
        case 0x4b85a0u: goto label_4b85a0;
        case 0x4b85a4u: goto label_4b85a4;
        case 0x4b85a8u: goto label_4b85a8;
        case 0x4b85acu: goto label_4b85ac;
        case 0x4b85b0u: goto label_4b85b0;
        case 0x4b85b4u: goto label_4b85b4;
        case 0x4b85b8u: goto label_4b85b8;
        case 0x4b85bcu: goto label_4b85bc;
        case 0x4b85c0u: goto label_4b85c0;
        case 0x4b85c4u: goto label_4b85c4;
        case 0x4b85c8u: goto label_4b85c8;
        case 0x4b85ccu: goto label_4b85cc;
        case 0x4b85d0u: goto label_4b85d0;
        case 0x4b85d4u: goto label_4b85d4;
        case 0x4b85d8u: goto label_4b85d8;
        case 0x4b85dcu: goto label_4b85dc;
        case 0x4b85e0u: goto label_4b85e0;
        case 0x4b85e4u: goto label_4b85e4;
        case 0x4b85e8u: goto label_4b85e8;
        case 0x4b85ecu: goto label_4b85ec;
        case 0x4b85f0u: goto label_4b85f0;
        case 0x4b85f4u: goto label_4b85f4;
        case 0x4b85f8u: goto label_4b85f8;
        case 0x4b85fcu: goto label_4b85fc;
        case 0x4b8600u: goto label_4b8600;
        case 0x4b8604u: goto label_4b8604;
        case 0x4b8608u: goto label_4b8608;
        case 0x4b860cu: goto label_4b860c;
        case 0x4b8610u: goto label_4b8610;
        case 0x4b8614u: goto label_4b8614;
        case 0x4b8618u: goto label_4b8618;
        case 0x4b861cu: goto label_4b861c;
        case 0x4b8620u: goto label_4b8620;
        case 0x4b8624u: goto label_4b8624;
        case 0x4b8628u: goto label_4b8628;
        case 0x4b862cu: goto label_4b862c;
        case 0x4b8630u: goto label_4b8630;
        case 0x4b8634u: goto label_4b8634;
        case 0x4b8638u: goto label_4b8638;
        case 0x4b863cu: goto label_4b863c;
        case 0x4b8640u: goto label_4b8640;
        case 0x4b8644u: goto label_4b8644;
        case 0x4b8648u: goto label_4b8648;
        case 0x4b864cu: goto label_4b864c;
        case 0x4b8650u: goto label_4b8650;
        case 0x4b8654u: goto label_4b8654;
        case 0x4b8658u: goto label_4b8658;
        case 0x4b865cu: goto label_4b865c;
        case 0x4b8660u: goto label_4b8660;
        case 0x4b8664u: goto label_4b8664;
        case 0x4b8668u: goto label_4b8668;
        case 0x4b866cu: goto label_4b866c;
        case 0x4b8670u: goto label_4b8670;
        case 0x4b8674u: goto label_4b8674;
        case 0x4b8678u: goto label_4b8678;
        case 0x4b867cu: goto label_4b867c;
        case 0x4b8680u: goto label_4b8680;
        case 0x4b8684u: goto label_4b8684;
        case 0x4b8688u: goto label_4b8688;
        case 0x4b868cu: goto label_4b868c;
        case 0x4b8690u: goto label_4b8690;
        case 0x4b8694u: goto label_4b8694;
        case 0x4b8698u: goto label_4b8698;
        case 0x4b869cu: goto label_4b869c;
        case 0x4b86a0u: goto label_4b86a0;
        case 0x4b86a4u: goto label_4b86a4;
        case 0x4b86a8u: goto label_4b86a8;
        case 0x4b86acu: goto label_4b86ac;
        case 0x4b86b0u: goto label_4b86b0;
        case 0x4b86b4u: goto label_4b86b4;
        case 0x4b86b8u: goto label_4b86b8;
        case 0x4b86bcu: goto label_4b86bc;
        case 0x4b86c0u: goto label_4b86c0;
        case 0x4b86c4u: goto label_4b86c4;
        case 0x4b86c8u: goto label_4b86c8;
        case 0x4b86ccu: goto label_4b86cc;
        case 0x4b86d0u: goto label_4b86d0;
        case 0x4b86d4u: goto label_4b86d4;
        case 0x4b86d8u: goto label_4b86d8;
        case 0x4b86dcu: goto label_4b86dc;
        case 0x4b86e0u: goto label_4b86e0;
        case 0x4b86e4u: goto label_4b86e4;
        case 0x4b86e8u: goto label_4b86e8;
        case 0x4b86ecu: goto label_4b86ec;
        case 0x4b86f0u: goto label_4b86f0;
        case 0x4b86f4u: goto label_4b86f4;
        case 0x4b86f8u: goto label_4b86f8;
        case 0x4b86fcu: goto label_4b86fc;
        case 0x4b8700u: goto label_4b8700;
        case 0x4b8704u: goto label_4b8704;
        case 0x4b8708u: goto label_4b8708;
        case 0x4b870cu: goto label_4b870c;
        case 0x4b8710u: goto label_4b8710;
        case 0x4b8714u: goto label_4b8714;
        case 0x4b8718u: goto label_4b8718;
        case 0x4b871cu: goto label_4b871c;
        case 0x4b8720u: goto label_4b8720;
        case 0x4b8724u: goto label_4b8724;
        case 0x4b8728u: goto label_4b8728;
        case 0x4b872cu: goto label_4b872c;
        case 0x4b8730u: goto label_4b8730;
        case 0x4b8734u: goto label_4b8734;
        case 0x4b8738u: goto label_4b8738;
        case 0x4b873cu: goto label_4b873c;
        case 0x4b8740u: goto label_4b8740;
        case 0x4b8744u: goto label_4b8744;
        case 0x4b8748u: goto label_4b8748;
        case 0x4b874cu: goto label_4b874c;
        case 0x4b8750u: goto label_4b8750;
        case 0x4b8754u: goto label_4b8754;
        case 0x4b8758u: goto label_4b8758;
        case 0x4b875cu: goto label_4b875c;
        case 0x4b8760u: goto label_4b8760;
        case 0x4b8764u: goto label_4b8764;
        case 0x4b8768u: goto label_4b8768;
        case 0x4b876cu: goto label_4b876c;
        case 0x4b8770u: goto label_4b8770;
        case 0x4b8774u: goto label_4b8774;
        case 0x4b8778u: goto label_4b8778;
        case 0x4b877cu: goto label_4b877c;
        case 0x4b8780u: goto label_4b8780;
        case 0x4b8784u: goto label_4b8784;
        case 0x4b8788u: goto label_4b8788;
        case 0x4b878cu: goto label_4b878c;
        case 0x4b8790u: goto label_4b8790;
        case 0x4b8794u: goto label_4b8794;
        case 0x4b8798u: goto label_4b8798;
        case 0x4b879cu: goto label_4b879c;
        case 0x4b87a0u: goto label_4b87a0;
        case 0x4b87a4u: goto label_4b87a4;
        case 0x4b87a8u: goto label_4b87a8;
        case 0x4b87acu: goto label_4b87ac;
        case 0x4b87b0u: goto label_4b87b0;
        case 0x4b87b4u: goto label_4b87b4;
        case 0x4b87b8u: goto label_4b87b8;
        case 0x4b87bcu: goto label_4b87bc;
        case 0x4b87c0u: goto label_4b87c0;
        case 0x4b87c4u: goto label_4b87c4;
        case 0x4b87c8u: goto label_4b87c8;
        case 0x4b87ccu: goto label_4b87cc;
        case 0x4b87d0u: goto label_4b87d0;
        case 0x4b87d4u: goto label_4b87d4;
        case 0x4b87d8u: goto label_4b87d8;
        case 0x4b87dcu: goto label_4b87dc;
        case 0x4b87e0u: goto label_4b87e0;
        case 0x4b87e4u: goto label_4b87e4;
        case 0x4b87e8u: goto label_4b87e8;
        case 0x4b87ecu: goto label_4b87ec;
        case 0x4b87f0u: goto label_4b87f0;
        case 0x4b87f4u: goto label_4b87f4;
        case 0x4b87f8u: goto label_4b87f8;
        case 0x4b87fcu: goto label_4b87fc;
        case 0x4b8800u: goto label_4b8800;
        case 0x4b8804u: goto label_4b8804;
        case 0x4b8808u: goto label_4b8808;
        case 0x4b880cu: goto label_4b880c;
        case 0x4b8810u: goto label_4b8810;
        case 0x4b8814u: goto label_4b8814;
        case 0x4b8818u: goto label_4b8818;
        case 0x4b881cu: goto label_4b881c;
        case 0x4b8820u: goto label_4b8820;
        case 0x4b8824u: goto label_4b8824;
        case 0x4b8828u: goto label_4b8828;
        case 0x4b882cu: goto label_4b882c;
        case 0x4b8830u: goto label_4b8830;
        case 0x4b8834u: goto label_4b8834;
        case 0x4b8838u: goto label_4b8838;
        case 0x4b883cu: goto label_4b883c;
        case 0x4b8840u: goto label_4b8840;
        case 0x4b8844u: goto label_4b8844;
        case 0x4b8848u: goto label_4b8848;
        case 0x4b884cu: goto label_4b884c;
        case 0x4b8850u: goto label_4b8850;
        case 0x4b8854u: goto label_4b8854;
        case 0x4b8858u: goto label_4b8858;
        case 0x4b885cu: goto label_4b885c;
        case 0x4b8860u: goto label_4b8860;
        case 0x4b8864u: goto label_4b8864;
        case 0x4b8868u: goto label_4b8868;
        case 0x4b886cu: goto label_4b886c;
        case 0x4b8870u: goto label_4b8870;
        case 0x4b8874u: goto label_4b8874;
        case 0x4b8878u: goto label_4b8878;
        case 0x4b887cu: goto label_4b887c;
        case 0x4b8880u: goto label_4b8880;
        case 0x4b8884u: goto label_4b8884;
        case 0x4b8888u: goto label_4b8888;
        case 0x4b888cu: goto label_4b888c;
        case 0x4b8890u: goto label_4b8890;
        case 0x4b8894u: goto label_4b8894;
        case 0x4b8898u: goto label_4b8898;
        case 0x4b889cu: goto label_4b889c;
        case 0x4b88a0u: goto label_4b88a0;
        case 0x4b88a4u: goto label_4b88a4;
        case 0x4b88a8u: goto label_4b88a8;
        case 0x4b88acu: goto label_4b88ac;
        case 0x4b88b0u: goto label_4b88b0;
        case 0x4b88b4u: goto label_4b88b4;
        case 0x4b88b8u: goto label_4b88b8;
        case 0x4b88bcu: goto label_4b88bc;
        case 0x4b88c0u: goto label_4b88c0;
        case 0x4b88c4u: goto label_4b88c4;
        case 0x4b88c8u: goto label_4b88c8;
        case 0x4b88ccu: goto label_4b88cc;
        case 0x4b88d0u: goto label_4b88d0;
        case 0x4b88d4u: goto label_4b88d4;
        case 0x4b88d8u: goto label_4b88d8;
        case 0x4b88dcu: goto label_4b88dc;
        case 0x4b88e0u: goto label_4b88e0;
        case 0x4b88e4u: goto label_4b88e4;
        case 0x4b88e8u: goto label_4b88e8;
        case 0x4b88ecu: goto label_4b88ec;
        case 0x4b88f0u: goto label_4b88f0;
        case 0x4b88f4u: goto label_4b88f4;
        case 0x4b88f8u: goto label_4b88f8;
        case 0x4b88fcu: goto label_4b88fc;
        case 0x4b8900u: goto label_4b8900;
        case 0x4b8904u: goto label_4b8904;
        case 0x4b8908u: goto label_4b8908;
        case 0x4b890cu: goto label_4b890c;
        case 0x4b8910u: goto label_4b8910;
        case 0x4b8914u: goto label_4b8914;
        case 0x4b8918u: goto label_4b8918;
        case 0x4b891cu: goto label_4b891c;
        case 0x4b8920u: goto label_4b8920;
        case 0x4b8924u: goto label_4b8924;
        case 0x4b8928u: goto label_4b8928;
        case 0x4b892cu: goto label_4b892c;
        case 0x4b8930u: goto label_4b8930;
        case 0x4b8934u: goto label_4b8934;
        case 0x4b8938u: goto label_4b8938;
        case 0x4b893cu: goto label_4b893c;
        case 0x4b8940u: goto label_4b8940;
        case 0x4b8944u: goto label_4b8944;
        case 0x4b8948u: goto label_4b8948;
        case 0x4b894cu: goto label_4b894c;
        case 0x4b8950u: goto label_4b8950;
        case 0x4b8954u: goto label_4b8954;
        case 0x4b8958u: goto label_4b8958;
        case 0x4b895cu: goto label_4b895c;
        case 0x4b8960u: goto label_4b8960;
        case 0x4b8964u: goto label_4b8964;
        case 0x4b8968u: goto label_4b8968;
        case 0x4b896cu: goto label_4b896c;
        case 0x4b8970u: goto label_4b8970;
        case 0x4b8974u: goto label_4b8974;
        case 0x4b8978u: goto label_4b8978;
        case 0x4b897cu: goto label_4b897c;
        case 0x4b8980u: goto label_4b8980;
        case 0x4b8984u: goto label_4b8984;
        case 0x4b8988u: goto label_4b8988;
        case 0x4b898cu: goto label_4b898c;
        case 0x4b8990u: goto label_4b8990;
        case 0x4b8994u: goto label_4b8994;
        case 0x4b8998u: goto label_4b8998;
        case 0x4b899cu: goto label_4b899c;
        case 0x4b89a0u: goto label_4b89a0;
        case 0x4b89a4u: goto label_4b89a4;
        case 0x4b89a8u: goto label_4b89a8;
        case 0x4b89acu: goto label_4b89ac;
        case 0x4b89b0u: goto label_4b89b0;
        case 0x4b89b4u: goto label_4b89b4;
        case 0x4b89b8u: goto label_4b89b8;
        case 0x4b89bcu: goto label_4b89bc;
        case 0x4b89c0u: goto label_4b89c0;
        case 0x4b89c4u: goto label_4b89c4;
        case 0x4b89c8u: goto label_4b89c8;
        case 0x4b89ccu: goto label_4b89cc;
        case 0x4b89d0u: goto label_4b89d0;
        case 0x4b89d4u: goto label_4b89d4;
        case 0x4b89d8u: goto label_4b89d8;
        case 0x4b89dcu: goto label_4b89dc;
        case 0x4b89e0u: goto label_4b89e0;
        case 0x4b89e4u: goto label_4b89e4;
        case 0x4b89e8u: goto label_4b89e8;
        case 0x4b89ecu: goto label_4b89ec;
        case 0x4b89f0u: goto label_4b89f0;
        case 0x4b89f4u: goto label_4b89f4;
        case 0x4b89f8u: goto label_4b89f8;
        case 0x4b89fcu: goto label_4b89fc;
        case 0x4b8a00u: goto label_4b8a00;
        case 0x4b8a04u: goto label_4b8a04;
        case 0x4b8a08u: goto label_4b8a08;
        case 0x4b8a0cu: goto label_4b8a0c;
        case 0x4b8a10u: goto label_4b8a10;
        case 0x4b8a14u: goto label_4b8a14;
        case 0x4b8a18u: goto label_4b8a18;
        case 0x4b8a1cu: goto label_4b8a1c;
        case 0x4b8a20u: goto label_4b8a20;
        case 0x4b8a24u: goto label_4b8a24;
        case 0x4b8a28u: goto label_4b8a28;
        case 0x4b8a2cu: goto label_4b8a2c;
        case 0x4b8a30u: goto label_4b8a30;
        case 0x4b8a34u: goto label_4b8a34;
        case 0x4b8a38u: goto label_4b8a38;
        case 0x4b8a3cu: goto label_4b8a3c;
        case 0x4b8a40u: goto label_4b8a40;
        case 0x4b8a44u: goto label_4b8a44;
        case 0x4b8a48u: goto label_4b8a48;
        case 0x4b8a4cu: goto label_4b8a4c;
        case 0x4b8a50u: goto label_4b8a50;
        case 0x4b8a54u: goto label_4b8a54;
        case 0x4b8a58u: goto label_4b8a58;
        case 0x4b8a5cu: goto label_4b8a5c;
        case 0x4b8a60u: goto label_4b8a60;
        case 0x4b8a64u: goto label_4b8a64;
        case 0x4b8a68u: goto label_4b8a68;
        case 0x4b8a6cu: goto label_4b8a6c;
        case 0x4b8a70u: goto label_4b8a70;
        case 0x4b8a74u: goto label_4b8a74;
        case 0x4b8a78u: goto label_4b8a78;
        case 0x4b8a7cu: goto label_4b8a7c;
        case 0x4b8a80u: goto label_4b8a80;
        case 0x4b8a84u: goto label_4b8a84;
        case 0x4b8a88u: goto label_4b8a88;
        case 0x4b8a8cu: goto label_4b8a8c;
        case 0x4b8a90u: goto label_4b8a90;
        case 0x4b8a94u: goto label_4b8a94;
        case 0x4b8a98u: goto label_4b8a98;
        case 0x4b8a9cu: goto label_4b8a9c;
        case 0x4b8aa0u: goto label_4b8aa0;
        case 0x4b8aa4u: goto label_4b8aa4;
        case 0x4b8aa8u: goto label_4b8aa8;
        case 0x4b8aacu: goto label_4b8aac;
        case 0x4b8ab0u: goto label_4b8ab0;
        case 0x4b8ab4u: goto label_4b8ab4;
        case 0x4b8ab8u: goto label_4b8ab8;
        case 0x4b8abcu: goto label_4b8abc;
        case 0x4b8ac0u: goto label_4b8ac0;
        case 0x4b8ac4u: goto label_4b8ac4;
        case 0x4b8ac8u: goto label_4b8ac8;
        case 0x4b8accu: goto label_4b8acc;
        case 0x4b8ad0u: goto label_4b8ad0;
        case 0x4b8ad4u: goto label_4b8ad4;
        case 0x4b8ad8u: goto label_4b8ad8;
        case 0x4b8adcu: goto label_4b8adc;
        case 0x4b8ae0u: goto label_4b8ae0;
        case 0x4b8ae4u: goto label_4b8ae4;
        case 0x4b8ae8u: goto label_4b8ae8;
        case 0x4b8aecu: goto label_4b8aec;
        case 0x4b8af0u: goto label_4b8af0;
        case 0x4b8af4u: goto label_4b8af4;
        case 0x4b8af8u: goto label_4b8af8;
        case 0x4b8afcu: goto label_4b8afc;
        case 0x4b8b00u: goto label_4b8b00;
        case 0x4b8b04u: goto label_4b8b04;
        case 0x4b8b08u: goto label_4b8b08;
        case 0x4b8b0cu: goto label_4b8b0c;
        case 0x4b8b10u: goto label_4b8b10;
        case 0x4b8b14u: goto label_4b8b14;
        case 0x4b8b18u: goto label_4b8b18;
        case 0x4b8b1cu: goto label_4b8b1c;
        case 0x4b8b20u: goto label_4b8b20;
        case 0x4b8b24u: goto label_4b8b24;
        case 0x4b8b28u: goto label_4b8b28;
        case 0x4b8b2cu: goto label_4b8b2c;
        case 0x4b8b30u: goto label_4b8b30;
        case 0x4b8b34u: goto label_4b8b34;
        case 0x4b8b38u: goto label_4b8b38;
        case 0x4b8b3cu: goto label_4b8b3c;
        case 0x4b8b40u: goto label_4b8b40;
        case 0x4b8b44u: goto label_4b8b44;
        case 0x4b8b48u: goto label_4b8b48;
        case 0x4b8b4cu: goto label_4b8b4c;
        case 0x4b8b50u: goto label_4b8b50;
        case 0x4b8b54u: goto label_4b8b54;
        case 0x4b8b58u: goto label_4b8b58;
        case 0x4b8b5cu: goto label_4b8b5c;
        case 0x4b8b60u: goto label_4b8b60;
        case 0x4b8b64u: goto label_4b8b64;
        case 0x4b8b68u: goto label_4b8b68;
        case 0x4b8b6cu: goto label_4b8b6c;
        case 0x4b8b70u: goto label_4b8b70;
        case 0x4b8b74u: goto label_4b8b74;
        case 0x4b8b78u: goto label_4b8b78;
        case 0x4b8b7cu: goto label_4b8b7c;
        case 0x4b8b80u: goto label_4b8b80;
        case 0x4b8b84u: goto label_4b8b84;
        case 0x4b8b88u: goto label_4b8b88;
        case 0x4b8b8cu: goto label_4b8b8c;
        case 0x4b8b90u: goto label_4b8b90;
        case 0x4b8b94u: goto label_4b8b94;
        case 0x4b8b98u: goto label_4b8b98;
        case 0x4b8b9cu: goto label_4b8b9c;
        case 0x4b8ba0u: goto label_4b8ba0;
        case 0x4b8ba4u: goto label_4b8ba4;
        case 0x4b8ba8u: goto label_4b8ba8;
        case 0x4b8bacu: goto label_4b8bac;
        case 0x4b8bb0u: goto label_4b8bb0;
        case 0x4b8bb4u: goto label_4b8bb4;
        case 0x4b8bb8u: goto label_4b8bb8;
        case 0x4b8bbcu: goto label_4b8bbc;
        case 0x4b8bc0u: goto label_4b8bc0;
        case 0x4b8bc4u: goto label_4b8bc4;
        case 0x4b8bc8u: goto label_4b8bc8;
        case 0x4b8bccu: goto label_4b8bcc;
        case 0x4b8bd0u: goto label_4b8bd0;
        case 0x4b8bd4u: goto label_4b8bd4;
        case 0x4b8bd8u: goto label_4b8bd8;
        case 0x4b8bdcu: goto label_4b8bdc;
        case 0x4b8be0u: goto label_4b8be0;
        case 0x4b8be4u: goto label_4b8be4;
        case 0x4b8be8u: goto label_4b8be8;
        case 0x4b8becu: goto label_4b8bec;
        case 0x4b8bf0u: goto label_4b8bf0;
        case 0x4b8bf4u: goto label_4b8bf4;
        case 0x4b8bf8u: goto label_4b8bf8;
        case 0x4b8bfcu: goto label_4b8bfc;
        case 0x4b8c00u: goto label_4b8c00;
        case 0x4b8c04u: goto label_4b8c04;
        case 0x4b8c08u: goto label_4b8c08;
        case 0x4b8c0cu: goto label_4b8c0c;
        case 0x4b8c10u: goto label_4b8c10;
        case 0x4b8c14u: goto label_4b8c14;
        case 0x4b8c18u: goto label_4b8c18;
        case 0x4b8c1cu: goto label_4b8c1c;
        case 0x4b8c20u: goto label_4b8c20;
        case 0x4b8c24u: goto label_4b8c24;
        case 0x4b8c28u: goto label_4b8c28;
        case 0x4b8c2cu: goto label_4b8c2c;
        case 0x4b8c30u: goto label_4b8c30;
        case 0x4b8c34u: goto label_4b8c34;
        case 0x4b8c38u: goto label_4b8c38;
        case 0x4b8c3cu: goto label_4b8c3c;
        case 0x4b8c40u: goto label_4b8c40;
        case 0x4b8c44u: goto label_4b8c44;
        case 0x4b8c48u: goto label_4b8c48;
        case 0x4b8c4cu: goto label_4b8c4c;
        case 0x4b8c50u: goto label_4b8c50;
        case 0x4b8c54u: goto label_4b8c54;
        case 0x4b8c58u: goto label_4b8c58;
        case 0x4b8c5cu: goto label_4b8c5c;
        case 0x4b8c60u: goto label_4b8c60;
        case 0x4b8c64u: goto label_4b8c64;
        case 0x4b8c68u: goto label_4b8c68;
        case 0x4b8c6cu: goto label_4b8c6c;
        case 0x4b8c70u: goto label_4b8c70;
        case 0x4b8c74u: goto label_4b8c74;
        case 0x4b8c78u: goto label_4b8c78;
        case 0x4b8c7cu: goto label_4b8c7c;
        case 0x4b8c80u: goto label_4b8c80;
        case 0x4b8c84u: goto label_4b8c84;
        case 0x4b8c88u: goto label_4b8c88;
        case 0x4b8c8cu: goto label_4b8c8c;
        case 0x4b8c90u: goto label_4b8c90;
        case 0x4b8c94u: goto label_4b8c94;
        case 0x4b8c98u: goto label_4b8c98;
        case 0x4b8c9cu: goto label_4b8c9c;
        case 0x4b8ca0u: goto label_4b8ca0;
        case 0x4b8ca4u: goto label_4b8ca4;
        case 0x4b8ca8u: goto label_4b8ca8;
        case 0x4b8cacu: goto label_4b8cac;
        case 0x4b8cb0u: goto label_4b8cb0;
        case 0x4b8cb4u: goto label_4b8cb4;
        case 0x4b8cb8u: goto label_4b8cb8;
        case 0x4b8cbcu: goto label_4b8cbc;
        case 0x4b8cc0u: goto label_4b8cc0;
        case 0x4b8cc4u: goto label_4b8cc4;
        case 0x4b8cc8u: goto label_4b8cc8;
        case 0x4b8cccu: goto label_4b8ccc;
        case 0x4b8cd0u: goto label_4b8cd0;
        case 0x4b8cd4u: goto label_4b8cd4;
        case 0x4b8cd8u: goto label_4b8cd8;
        case 0x4b8cdcu: goto label_4b8cdc;
        case 0x4b8ce0u: goto label_4b8ce0;
        case 0x4b8ce4u: goto label_4b8ce4;
        case 0x4b8ce8u: goto label_4b8ce8;
        case 0x4b8cecu: goto label_4b8cec;
        case 0x4b8cf0u: goto label_4b8cf0;
        case 0x4b8cf4u: goto label_4b8cf4;
        case 0x4b8cf8u: goto label_4b8cf8;
        case 0x4b8cfcu: goto label_4b8cfc;
        case 0x4b8d00u: goto label_4b8d00;
        case 0x4b8d04u: goto label_4b8d04;
        case 0x4b8d08u: goto label_4b8d08;
        case 0x4b8d0cu: goto label_4b8d0c;
        case 0x4b8d10u: goto label_4b8d10;
        case 0x4b8d14u: goto label_4b8d14;
        case 0x4b8d18u: goto label_4b8d18;
        case 0x4b8d1cu: goto label_4b8d1c;
        case 0x4b8d20u: goto label_4b8d20;
        case 0x4b8d24u: goto label_4b8d24;
        case 0x4b8d28u: goto label_4b8d28;
        case 0x4b8d2cu: goto label_4b8d2c;
        case 0x4b8d30u: goto label_4b8d30;
        case 0x4b8d34u: goto label_4b8d34;
        case 0x4b8d38u: goto label_4b8d38;
        case 0x4b8d3cu: goto label_4b8d3c;
        case 0x4b8d40u: goto label_4b8d40;
        case 0x4b8d44u: goto label_4b8d44;
        case 0x4b8d48u: goto label_4b8d48;
        case 0x4b8d4cu: goto label_4b8d4c;
        case 0x4b8d50u: goto label_4b8d50;
        case 0x4b8d54u: goto label_4b8d54;
        case 0x4b8d58u: goto label_4b8d58;
        case 0x4b8d5cu: goto label_4b8d5c;
        case 0x4b8d60u: goto label_4b8d60;
        case 0x4b8d64u: goto label_4b8d64;
        case 0x4b8d68u: goto label_4b8d68;
        case 0x4b8d6cu: goto label_4b8d6c;
        case 0x4b8d70u: goto label_4b8d70;
        case 0x4b8d74u: goto label_4b8d74;
        case 0x4b8d78u: goto label_4b8d78;
        case 0x4b8d7cu: goto label_4b8d7c;
        case 0x4b8d80u: goto label_4b8d80;
        case 0x4b8d84u: goto label_4b8d84;
        case 0x4b8d88u: goto label_4b8d88;
        case 0x4b8d8cu: goto label_4b8d8c;
        case 0x4b8d90u: goto label_4b8d90;
        case 0x4b8d94u: goto label_4b8d94;
        case 0x4b8d98u: goto label_4b8d98;
        case 0x4b8d9cu: goto label_4b8d9c;
        case 0x4b8da0u: goto label_4b8da0;
        case 0x4b8da4u: goto label_4b8da4;
        case 0x4b8da8u: goto label_4b8da8;
        case 0x4b8dacu: goto label_4b8dac;
        case 0x4b8db0u: goto label_4b8db0;
        case 0x4b8db4u: goto label_4b8db4;
        case 0x4b8db8u: goto label_4b8db8;
        case 0x4b8dbcu: goto label_4b8dbc;
        default: break;
    }

    ctx->pc = 0x4b8380u;

label_4b8380:
    // 0x4b8380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b8380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4b8384:
    // 0x4b8384: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x4b8384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_4b8388:
    // 0x4b8388: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b8388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b838c:
    // 0x4b838c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4b838cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4b8390:
    // 0x4b8390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b8390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b8394:
    // 0x4b8394: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x4b8394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_4b8398:
    // 0x4b8398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b8398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b839c:
    // 0x4b839c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x4b839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_4b83a0:
    // 0x4b83a0: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x4b83a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b83a4:
    // 0x4b83a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b83a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b83a8:
    // 0x4b83a8: 0xe48000d8  swc1        $f0, 0xD8($a0)
    ctx->pc = 0x4b83a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
label_4b83ac:
    // 0x4b83ac: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x4b83acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b83b0:
    // 0x4b83b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b83b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b83b4:
    // 0x4b83b4: 0x0  nop
    ctx->pc = 0x4b83b4u;
    // NOP
label_4b83b8:
    // 0x4b83b8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4b83b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4b83bc:
    // 0x4b83bc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4b83bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_4b83c0:
    // 0x4b83c0: 0xe48000dc  swc1        $f0, 0xDC($a0)
    ctx->pc = 0x4b83c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
label_4b83c4:
    // 0x4b83c4: 0xa080017d  sb          $zero, 0x17D($a0)
    ctx->pc = 0x4b83c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 381), (uint8_t)GPR_U32(ctx, 0));
label_4b83c8:
    // 0x4b83c8: 0xac800160  sw          $zero, 0x160($a0)
    ctx->pc = 0x4b83c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 0));
label_4b83cc:
    // 0x4b83cc: 0xac800154  sw          $zero, 0x154($a0)
    ctx->pc = 0x4b83ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
label_4b83d0:
    // 0x4b83d0: 0xac80015c  sw          $zero, 0x15C($a0)
    ctx->pc = 0x4b83d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 0));
label_4b83d4:
    // 0x4b83d4: 0xac800158  sw          $zero, 0x158($a0)
    ctx->pc = 0x4b83d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
label_4b83d8:
    // 0x4b83d8: 0x8e050150  lw          $a1, 0x150($s0)
    ctx->pc = 0x4b83d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_4b83dc:
    // 0x4b83dc: 0xc04cc04  jal         func_133010
label_4b83e0:
    if (ctx->pc == 0x4B83E0u) {
        ctx->pc = 0x4B83E0u;
            // 0x4b83e0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4B83E4u;
        goto label_4b83e4;
    }
    ctx->pc = 0x4B83DCu;
    SET_GPR_U32(ctx, 31, 0x4B83E4u);
    ctx->pc = 0x4B83E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B83DCu;
            // 0x4b83e0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B83E4u; }
        if (ctx->pc != 0x4B83E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B83E4u; }
        if (ctx->pc != 0x4B83E4u) { return; }
    }
    ctx->pc = 0x4B83E4u;
label_4b83e4:
    // 0x4b83e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b83e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b83e8:
    // 0x4b83e8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x4b83e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4b83ec:
    // 0x4b83ec: 0xc12e050  jal         func_4B8140
label_4b83f0:
    if (ctx->pc == 0x4B83F0u) {
        ctx->pc = 0x4B83F0u;
            // 0x4b83f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B83F4u;
        goto label_4b83f4;
    }
    ctx->pc = 0x4B83ECu;
    SET_GPR_U32(ctx, 31, 0x4B83F4u);
    ctx->pc = 0x4B83F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B83ECu;
            // 0x4b83f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B8140u;
    if (runtime->hasFunction(0x4B8140u)) {
        auto targetFn = runtime->lookupFunction(0x4B8140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B83F4u; }
        if (ctx->pc != 0x4B83F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B8140_0x4b8140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B83F4u; }
        if (ctx->pc != 0x4B83F4u) { return; }
    }
    ctx->pc = 0x4B83F4u;
label_4b83f4:
    // 0x4b83f4: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x4b83f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_4b83f8:
    // 0x4b83f8: 0xc04c720  jal         func_131C80
label_4b83fc:
    if (ctx->pc == 0x4B83FCu) {
        ctx->pc = 0x4B83FCu;
            // 0x4b83fc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4B8400u;
        goto label_4b8400;
    }
    ctx->pc = 0x4B83F8u;
    SET_GPR_U32(ctx, 31, 0x4B8400u);
    ctx->pc = 0x4B83FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B83F8u;
            // 0x4b83fc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8400u; }
        if (ctx->pc != 0x4B8400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8400u; }
        if (ctx->pc != 0x4B8400u) { return; }
    }
    ctx->pc = 0x4B8400u;
label_4b8400:
    // 0x4b8400: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4b8400u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b8404:
    // 0x4b8404: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x4b8404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_4b8408:
    // 0x4b8408: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x4b8408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_4b840c:
    // 0x4b840c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b840cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b8410:
    // 0x4b8410: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b8410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b8414:
    // 0x4b8414: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b8414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b8418:
    // 0x4b8418: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x4b8418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_4b841c:
    // 0x4b841c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4b841cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4b8420:
    // 0x4b8420: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4b8420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4b8424:
    // 0x4b8424: 0xc08bff0  jal         func_22FFC0
label_4b8428:
    if (ctx->pc == 0x4B8428u) {
        ctx->pc = 0x4B8428u;
            // 0x4b8428: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B842Cu;
        goto label_4b842c;
    }
    ctx->pc = 0x4B8424u;
    SET_GPR_U32(ctx, 31, 0x4B842Cu);
    ctx->pc = 0x4B8428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8424u;
            // 0x4b8428: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B842Cu; }
        if (ctx->pc != 0x4B842Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B842Cu; }
        if (ctx->pc != 0x4B842Cu) { return; }
    }
    ctx->pc = 0x4B842Cu;
label_4b842c:
    // 0x4b842c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b842cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b8430:
    // 0x4b8430: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4b8430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4b8434:
    // 0x4b8434: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b8434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b8438:
    // 0x4b8438: 0xc08914c  jal         func_224530
label_4b843c:
    if (ctx->pc == 0x4B843Cu) {
        ctx->pc = 0x4B843Cu;
            // 0x4b843c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B8440u;
        goto label_4b8440;
    }
    ctx->pc = 0x4B8438u;
    SET_GPR_U32(ctx, 31, 0x4B8440u);
    ctx->pc = 0x4B843Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8438u;
            // 0x4b843c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8440u; }
        if (ctx->pc != 0x4B8440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8440u; }
        if (ctx->pc != 0x4B8440u) { return; }
    }
    ctx->pc = 0x4B8440u;
label_4b8440:
    // 0x4b8440: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x4b8440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b8444:
    // 0x4b8444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b8444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b8448:
    // 0x4b8448: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x4b8448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b844c:
    // 0x4b844c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4b844cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4b8450:
    // 0x4b8450: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x4b8450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b8454:
    // 0x4b8454: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x4b8454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4b8458:
    // 0x4b8458: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4b8458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4b845c:
    // 0x4b845c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4b845cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_4b8460:
    // 0x4b8460: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4b8460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4b8464:
    // 0x4b8464: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4b8464u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4b8468:
    // 0x4b8468: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x4b8468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4b846c:
    // 0x4b846c: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x4b846cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b8470:
    // 0x4b8470: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x4b8470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b8474:
    // 0x4b8474: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x4b8474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b8478:
    // 0x4b8478: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4b8478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4b847c:
    // 0x4b847c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4b847cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4b8480:
    // 0x4b8480: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x4b8480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4b8484:
    // 0x4b8484: 0xc0892b0  jal         func_224AC0
label_4b8488:
    if (ctx->pc == 0x4B8488u) {
        ctx->pc = 0x4B8488u;
            // 0x4b8488: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x4B848Cu;
        goto label_4b848c;
    }
    ctx->pc = 0x4B8484u;
    SET_GPR_U32(ctx, 31, 0x4B848Cu);
    ctx->pc = 0x4B8488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8484u;
            // 0x4b8488: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B848Cu; }
        if (ctx->pc != 0x4B848Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B848Cu; }
        if (ctx->pc != 0x4B848Cu) { return; }
    }
    ctx->pc = 0x4B848Cu;
label_4b848c:
    // 0x4b848c: 0xa6000178  sh          $zero, 0x178($s0)
    ctx->pc = 0x4b848cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 376), (uint16_t)GPR_U32(ctx, 0));
label_4b8490:
    // 0x4b8490: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4b8490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4b8494:
    // 0x4b8494: 0xa200017a  sb          $zero, 0x17A($s0)
    ctx->pc = 0x4b8494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 378), (uint8_t)GPR_U32(ctx, 0));
label_4b8498:
    // 0x4b8498: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b8498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b849c:
    // 0x4b849c: 0xa200017b  sb          $zero, 0x17B($s0)
    ctx->pc = 0x4b849cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 379), (uint8_t)GPR_U32(ctx, 0));
label_4b84a0:
    // 0x4b84a0: 0x8c63a9a8  lw          $v1, -0x5658($v1)
    ctx->pc = 0x4b84a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945192)));
label_4b84a4:
    // 0x4b84a4: 0x8c630098  lw          $v1, 0x98($v1)
    ctx->pc = 0x4b84a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_4b84a8:
    // 0x4b84a8: 0xae030110  sw          $v1, 0x110($s0)
    ctx->pc = 0x4b84a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
label_4b84ac:
    // 0x4b84ac: 0xae0400d0  sw          $a0, 0xD0($s0)
    ctx->pc = 0x4b84acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 4));
label_4b84b0:
    // 0x4b84b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b84b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b84b4:
    // 0x4b84b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b84b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b84b8:
    // 0x4b84b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b84b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b84bc:
    // 0x4b84bc: 0x3e00008  jr          $ra
label_4b84c0:
    if (ctx->pc == 0x4B84C0u) {
        ctx->pc = 0x4B84C0u;
            // 0x4b84c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4B84C4u;
        goto label_4b84c4;
    }
    ctx->pc = 0x4B84BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B84C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B84BCu;
            // 0x4b84c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B84C4u;
label_4b84c4:
    // 0x4b84c4: 0x0  nop
    ctx->pc = 0x4b84c4u;
    // NOP
label_4b84c8:
    // 0x4b84c8: 0x0  nop
    ctx->pc = 0x4b84c8u;
    // NOP
label_4b84cc:
    // 0x4b84cc: 0x0  nop
    ctx->pc = 0x4b84ccu;
    // NOP
label_4b84d0:
    // 0x4b84d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b84d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b84d4:
    // 0x4b84d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b84d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b84d8:
    // 0x4b84d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b84d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b84dc:
    // 0x4b84dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b84dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b84e0:
    // 0x4b84e0: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x4b84e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_4b84e4:
    // 0x4b84e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4b84e8:
    if (ctx->pc == 0x4B84E8u) {
        ctx->pc = 0x4B84E8u;
            // 0x4b84e8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4B84ECu;
        goto label_4b84ec;
    }
    ctx->pc = 0x4B84E4u;
    {
        const bool branch_taken_0x4b84e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b84e4) {
            ctx->pc = 0x4B84E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B84E4u;
            // 0x4b84e8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B8500u;
            goto label_4b8500;
        }
    }
    ctx->pc = 0x4B84ECu;
label_4b84ec:
    // 0x4b84ec: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4b84ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4b84f0:
    // 0x4b84f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4b84f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4b84f4:
    // 0x4b84f4: 0x320f809  jalr        $t9
label_4b84f8:
    if (ctx->pc == 0x4B84F8u) {
        ctx->pc = 0x4B84F8u;
            // 0x4b84f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B84FCu;
        goto label_4b84fc;
    }
    ctx->pc = 0x4B84F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B84FCu);
        ctx->pc = 0x4B84F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B84F4u;
            // 0x4b84f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B84FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B84FCu; }
            if (ctx->pc != 0x4B84FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4B84FCu;
label_4b84fc:
    // 0x4b84fc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4b84fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_4b8500:
    // 0x4b8500: 0x8e040168  lw          $a0, 0x168($s0)
    ctx->pc = 0x4b8500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_4b8504:
    // 0x4b8504: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4b8508:
    if (ctx->pc == 0x4B8508u) {
        ctx->pc = 0x4B8508u;
            // 0x4b8508: 0xae000168  sw          $zero, 0x168($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
        ctx->pc = 0x4B850Cu;
        goto label_4b850c;
    }
    ctx->pc = 0x4B8504u;
    {
        const bool branch_taken_0x4b8504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8504) {
            ctx->pc = 0x4B8508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8504u;
            // 0x4b8508: 0xae000168  sw          $zero, 0x168($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B8520u;
            goto label_4b8520;
        }
    }
    ctx->pc = 0x4B850Cu;
label_4b850c:
    // 0x4b850c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b850cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b8510:
    // 0x4b8510: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4b8510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4b8514:
    // 0x4b8514: 0x320f809  jalr        $t9
label_4b8518:
    if (ctx->pc == 0x4B8518u) {
        ctx->pc = 0x4B8518u;
            // 0x4b8518: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B851Cu;
        goto label_4b851c;
    }
    ctx->pc = 0x4B8514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B851Cu);
        ctx->pc = 0x4B8518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8514u;
            // 0x4b8518: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B851Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B851Cu; }
            if (ctx->pc != 0x4B851Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B851Cu;
label_4b851c:
    // 0x4b851c: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x4b851cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
label_4b8520:
    // 0x4b8520: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4b8520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b8524:
    // 0x4b8524: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4b8528:
    if (ctx->pc == 0x4B8528u) {
        ctx->pc = 0x4B8528u;
            // 0x4b8528: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4B852Cu;
        goto label_4b852c;
    }
    ctx->pc = 0x4B8524u;
    {
        const bool branch_taken_0x4b8524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8524) {
            ctx->pc = 0x4B8528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8524u;
            // 0x4b8528: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B8540u;
            goto label_4b8540;
        }
    }
    ctx->pc = 0x4B852Cu;
label_4b852c:
    // 0x4b852c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b852cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b8530:
    // 0x4b8530: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4b8530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4b8534:
    // 0x4b8534: 0x320f809  jalr        $t9
label_4b8538:
    if (ctx->pc == 0x4B8538u) {
        ctx->pc = 0x4B8538u;
            // 0x4b8538: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B853Cu;
        goto label_4b853c;
    }
    ctx->pc = 0x4B8534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B853Cu);
        ctx->pc = 0x4B8538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8534u;
            // 0x4b8538: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B853Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B853Cu; }
            if (ctx->pc != 0x4B853Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B853Cu;
label_4b853c:
    // 0x4b853c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4b853cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4b8540:
    // 0x4b8540: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b8540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b8544:
    // 0x4b8544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b8544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b8548:
    // 0x4b8548: 0x3e00008  jr          $ra
label_4b854c:
    if (ctx->pc == 0x4B854Cu) {
        ctx->pc = 0x4B854Cu;
            // 0x4b854c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4B8550u;
        goto label_4b8550;
    }
    ctx->pc = 0x4B8548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B854Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8548u;
            // 0x4b854c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B8550u;
label_4b8550:
    // 0x4b8550: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4b8550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4b8554:
    // 0x4b8554: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b8554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4b8558:
    // 0x4b8558: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b8558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b855c:
    // 0x4b855c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b855cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b8560:
    // 0x4b8560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b8560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b8564:
    // 0x4b8564: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b8564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b8568:
    // 0x4b8568: 0xc0892d0  jal         func_224B40
label_4b856c:
    if (ctx->pc == 0x4B856Cu) {
        ctx->pc = 0x4B856Cu;
            // 0x4b856c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4B8570u;
        goto label_4b8570;
    }
    ctx->pc = 0x4B8568u;
    SET_GPR_U32(ctx, 31, 0x4B8570u);
    ctx->pc = 0x4B856Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8568u;
            // 0x4b856c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8570u; }
        if (ctx->pc != 0x4B8570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8570u; }
        if (ctx->pc != 0x4B8570u) { return; }
    }
    ctx->pc = 0x4B8570u;
label_4b8570:
    // 0x4b8570: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4b8570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4b8574:
    // 0x4b8574: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4b8574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4b8578:
    // 0x4b8578: 0x8c42a9a8  lw          $v0, -0x5658($v0)
    ctx->pc = 0x4b8578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945192)));
label_4b857c:
    // 0x4b857c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x4b857cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4b8580:
    // 0x4b8580: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4b8580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4b8584:
    // 0x4b8584: 0xc0b6e68  jal         func_2DB9A0
label_4b8588:
    if (ctx->pc == 0x4B8588u) {
        ctx->pc = 0x4B8588u;
            // 0x4b8588: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x4B858Cu;
        goto label_4b858c;
    }
    ctx->pc = 0x4B8584u;
    SET_GPR_U32(ctx, 31, 0x4B858Cu);
    ctx->pc = 0x4B8588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8584u;
            // 0x4b8588: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B858Cu; }
        if (ctx->pc != 0x4B858Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B858Cu; }
        if (ctx->pc != 0x4B858Cu) { return; }
    }
    ctx->pc = 0x4B858Cu;
label_4b858c:
    // 0x4b858c: 0xc0b6dac  jal         func_2DB6B0
label_4b8590:
    if (ctx->pc == 0x4B8590u) {
        ctx->pc = 0x4B8590u;
            // 0x4b8590: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4B8594u;
        goto label_4b8594;
    }
    ctx->pc = 0x4B858Cu;
    SET_GPR_U32(ctx, 31, 0x4B8594u);
    ctx->pc = 0x4B8590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B858Cu;
            // 0x4b8590: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8594u; }
        if (ctx->pc != 0x4B8594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8594u; }
        if (ctx->pc != 0x4B8594u) { return; }
    }
    ctx->pc = 0x4B8594u;
label_4b8594:
    // 0x4b8594: 0xc0cac94  jal         func_32B250
label_4b8598:
    if (ctx->pc == 0x4B8598u) {
        ctx->pc = 0x4B8598u;
            // 0x4b8598: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4B859Cu;
        goto label_4b859c;
    }
    ctx->pc = 0x4B8594u;
    SET_GPR_U32(ctx, 31, 0x4B859Cu);
    ctx->pc = 0x4B8598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8594u;
            // 0x4b8598: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B859Cu; }
        if (ctx->pc != 0x4B859Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B859Cu; }
        if (ctx->pc != 0x4B859Cu) { return; }
    }
    ctx->pc = 0x4B859Cu;
label_4b859c:
    // 0x4b859c: 0xc0cac84  jal         func_32B210
label_4b85a0:
    if (ctx->pc == 0x4B85A0u) {
        ctx->pc = 0x4B85A0u;
            // 0x4b85a0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4B85A4u;
        goto label_4b85a4;
    }
    ctx->pc = 0x4B859Cu;
    SET_GPR_U32(ctx, 31, 0x4B85A4u);
    ctx->pc = 0x4B85A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B859Cu;
            // 0x4b85a0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B85A4u; }
        if (ctx->pc != 0x4B85A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B85A4u; }
        if (ctx->pc != 0x4B85A4u) { return; }
    }
    ctx->pc = 0x4B85A4u;
label_4b85a4:
    // 0x4b85a4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4b85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4b85a8:
    // 0x4b85a8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4b85a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4b85ac:
    // 0x4b85ac: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x4b85acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4b85b0:
    // 0x4b85b0: 0xc0a5a68  jal         func_2969A0
label_4b85b4:
    if (ctx->pc == 0x4B85B4u) {
        ctx->pc = 0x4B85B4u;
            // 0x4b85b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4B85B8u;
        goto label_4b85b8;
    }
    ctx->pc = 0x4B85B0u;
    SET_GPR_U32(ctx, 31, 0x4B85B8u);
    ctx->pc = 0x4B85B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B85B0u;
            // 0x4b85b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B85B8u; }
        if (ctx->pc != 0x4B85B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B85B8u; }
        if (ctx->pc != 0x4B85B8u) { return; }
    }
    ctx->pc = 0x4B85B8u;
label_4b85b8:
    // 0x4b85b8: 0xafb000c4  sw          $s0, 0xC4($sp)
    ctx->pc = 0x4b85b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 16));
label_4b85bc:
    // 0x4b85bc: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x4b85bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b85c0:
    // 0x4b85c0: 0xc6250018  lwc1        $f5, 0x18($s1)
    ctx->pc = 0x4b85c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4b85c4:
    // 0x4b85c4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x4b85c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_4b85c8:
    // 0x4b85c8: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x4b85c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4b85cc:
    // 0x4b85cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b85ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b85d0:
    // 0x4b85d0: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x4b85d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4b85d4:
    // 0x4b85d4: 0x3c0843fa  lui         $t0, 0x43FA
    ctx->pc = 0x4b85d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17402 << 16));
label_4b85d8:
    // 0x4b85d8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x4b85d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b85dc:
    // 0x4b85dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4b85dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b85e0:
    // 0x4b85e0: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x4b85e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b85e4:
    // 0x4b85e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b85e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b85e8:
    // 0x4b85e8: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x4b85e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_4b85ec:
    // 0x4b85ec: 0xafa4016c  sw          $a0, 0x16C($sp)
    ctx->pc = 0x4b85ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 4));
label_4b85f0:
    // 0x4b85f0: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x4b85f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_4b85f4:
    // 0x4b85f4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4b85f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4b85f8:
    // 0x4b85f8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x4b85f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b85fc:
    // 0x4b85fc: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4b85fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4b8600:
    // 0x4b8600: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x4b8600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b8604:
    // 0x4b8604: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4b8604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4b8608:
    // 0x4b8608: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x4b8608u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4b860c:
    // 0x4b860c: 0xafa80168  sw          $t0, 0x168($sp)
    ctx->pc = 0x4b860cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 8));
label_4b8610:
    // 0x4b8610: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x4b8610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4b8614:
    // 0x4b8614: 0xa3a70170  sb          $a3, 0x170($sp)
    ctx->pc = 0x4b8614u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 7));
label_4b8618:
    // 0x4b8618: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x4b8618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_4b861c:
    // 0x4b861c: 0xa3a30172  sb          $v1, 0x172($sp)
    ctx->pc = 0x4b861cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 3));
label_4b8620:
    // 0x4b8620: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x4b8620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b8624:
    // 0x4b8624: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x4b8624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_4b8628:
    // 0x4b8628: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x4b8628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b862c:
    // 0x4b862c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x4b862cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_4b8630:
    // 0x4b8630: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x4b8630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b8634:
    // 0x4b8634: 0xe7a2011c  swc1        $f2, 0x11C($sp)
    ctx->pc = 0x4b8634u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_4b8638:
    // 0x4b8638: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x4b8638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_4b863c:
    // 0x4b863c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x4b863cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_4b8640:
    // 0x4b8640: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x4b8640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b8644:
    // 0x4b8644: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x4b8644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b8648:
    // 0x4b8648: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x4b8648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b864c:
    // 0x4b864c: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x4b864cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_4b8650:
    // 0x4b8650: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x4b8650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_4b8654:
    // 0x4b8654: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x4b8654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_4b8658:
    // 0x4b8658: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x4b8658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b865c:
    // 0x4b865c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x4b865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b8660:
    // 0x4b8660: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x4b8660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b8664:
    // 0x4b8664: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x4b8664u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_4b8668:
    // 0x4b8668: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x4b8668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_4b866c:
    // 0x4b866c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x4b866cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4b8670:
    // 0x4b8670: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x4b8670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b8674:
    // 0x4b8674: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x4b8674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b8678:
    // 0x4b8678: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x4b8678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b867c:
    // 0x4b867c: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x4b867cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4b8680:
    // 0x4b8680: 0xe7a400d4  swc1        $f4, 0xD4($sp)
    ctx->pc = 0x4b8680u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4b8684:
    // 0x4b8684: 0xe7a500d8  swc1        $f5, 0xD8($sp)
    ctx->pc = 0x4b8684u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4b8688:
    // 0x4b8688: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x4b8688u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_4b868c:
    // 0x4b868c: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x4b868cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4b8690:
    // 0x4b8690: 0xc0a7a88  jal         func_29EA20
label_4b8694:
    if (ctx->pc == 0x4B8694u) {
        ctx->pc = 0x4B8694u;
            // 0x4b8694: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x4B8698u;
        goto label_4b8698;
    }
    ctx->pc = 0x4B8690u;
    SET_GPR_U32(ctx, 31, 0x4B8698u);
    ctx->pc = 0x4B8694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8690u;
            // 0x4b8694: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8698u; }
        if (ctx->pc != 0x4B8698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8698u; }
        if (ctx->pc != 0x4B8698u) { return; }
    }
    ctx->pc = 0x4B8698u;
label_4b8698:
    // 0x4b8698: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4b8698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4b869c:
    // 0x4b869c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b869cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b86a0:
    // 0x4b86a0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_4b86a4:
    if (ctx->pc == 0x4B86A4u) {
        ctx->pc = 0x4B86A4u;
            // 0x4b86a4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4B86A8u;
        goto label_4b86a8;
    }
    ctx->pc = 0x4B86A0u;
    {
        const bool branch_taken_0x4b86a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B86A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B86A0u;
            // 0x4b86a4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b86a0) {
            ctx->pc = 0x4B86F0u;
            goto label_4b86f0;
        }
    }
    ctx->pc = 0x4B86A8u;
label_4b86a8:
    // 0x4b86a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b86a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b86ac:
    // 0x4b86ac: 0xc088ef4  jal         func_223BD0
label_4b86b0:
    if (ctx->pc == 0x4B86B0u) {
        ctx->pc = 0x4B86B0u;
            // 0x4b86b0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4B86B4u;
        goto label_4b86b4;
    }
    ctx->pc = 0x4B86ACu;
    SET_GPR_U32(ctx, 31, 0x4B86B4u);
    ctx->pc = 0x4B86B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B86ACu;
            // 0x4b86b0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B86B4u; }
        if (ctx->pc != 0x4B86B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B86B4u; }
        if (ctx->pc != 0x4B86B4u) { return; }
    }
    ctx->pc = 0x4B86B4u;
label_4b86b4:
    // 0x4b86b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b86b8:
    // 0x4b86b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b86b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4b86bc:
    // 0x4b86bc: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4b86bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4b86c0:
    // 0x4b86c0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4b86c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4b86c4:
    // 0x4b86c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b86c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4b86c8:
    // 0x4b86c8: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x4b86c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_4b86cc:
    // 0x4b86cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b86ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b86d0:
    // 0x4b86d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b86d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b86d4:
    // 0x4b86d4: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x4b86d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_4b86d8:
    // 0x4b86d8: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x4b86d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_4b86dc:
    // 0x4b86dc: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x4b86dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_4b86e0:
    // 0x4b86e0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4b86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4b86e4:
    // 0x4b86e4: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4b86e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4b86e8:
    // 0x4b86e8: 0xc088b38  jal         func_222CE0
label_4b86ec:
    if (ctx->pc == 0x4B86ECu) {
        ctx->pc = 0x4B86ECu;
            // 0x4b86ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B86F0u;
        goto label_4b86f0;
    }
    ctx->pc = 0x4B86E8u;
    SET_GPR_U32(ctx, 31, 0x4B86F0u);
    ctx->pc = 0x4B86ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B86E8u;
            // 0x4b86ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B86F0u; }
        if (ctx->pc != 0x4B86F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B86F0u; }
        if (ctx->pc != 0x4B86F0u) { return; }
    }
    ctx->pc = 0x4B86F0u;
label_4b86f0:
    // 0x4b86f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b86f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b86f4:
    // 0x4b86f4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4b86f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4b86f8:
    // 0x4b86f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b86f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b86fc:
    // 0x4b86fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b86fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b8700:
    // 0x4b8700: 0xc08914c  jal         func_224530
label_4b8704:
    if (ctx->pc == 0x4B8704u) {
        ctx->pc = 0x4B8704u;
            // 0x4b8704: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x4B8708u;
        goto label_4b8708;
    }
    ctx->pc = 0x4B8700u;
    SET_GPR_U32(ctx, 31, 0x4B8708u);
    ctx->pc = 0x4B8704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8700u;
            // 0x4b8704: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8708u; }
        if (ctx->pc != 0x4B8708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8708u; }
        if (ctx->pc != 0x4B8708u) { return; }
    }
    ctx->pc = 0x4B8708u;
label_4b8708:
    // 0x4b8708: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x4b8708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b870c:
    // 0x4b870c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b870cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b8710:
    // 0x4b8710: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4b8710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b8714:
    // 0x4b8714: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4b8714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4b8718:
    // 0x4b8718: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4b8718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b871c:
    // 0x4b871c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4b871cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4b8720:
    // 0x4b8720: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4b8720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4b8724:
    // 0x4b8724: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4b8724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4b8728:
    // 0x4b8728: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4b8728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4b872c:
    // 0x4b872c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4b872cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4b8730:
    // 0x4b8730: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x4b8730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4b8734:
    // 0x4b8734: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x4b8734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b8738:
    // 0x4b8738: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x4b8738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b873c:
    // 0x4b873c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4b873cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b8740:
    // 0x4b8740: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4b8740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4b8744:
    // 0x4b8744: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4b8744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4b8748:
    // 0x4b8748: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4b8748u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4b874c:
    // 0x4b874c: 0xc0892b0  jal         func_224AC0
label_4b8750:
    if (ctx->pc == 0x4B8750u) {
        ctx->pc = 0x4B8750u;
            // 0x4b8750: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4B8754u;
        goto label_4b8754;
    }
    ctx->pc = 0x4B874Cu;
    SET_GPR_U32(ctx, 31, 0x4B8754u);
    ctx->pc = 0x4B8750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B874Cu;
            // 0x4b8750: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8754u; }
        if (ctx->pc != 0x4B8754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8754u; }
        if (ctx->pc != 0x4B8754u) { return; }
    }
    ctx->pc = 0x4B8754u;
label_4b8754:
    // 0x4b8754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b8754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b8758:
    // 0x4b8758: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4b8758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4b875c:
    // 0x4b875c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4b875cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4b8760:
    // 0x4b8760: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x4b8760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_4b8764:
    // 0x4b8764: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x4b8764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_4b8768:
    // 0x4b8768: 0xc0891d8  jal         func_224760
label_4b876c:
    if (ctx->pc == 0x4B876Cu) {
        ctx->pc = 0x4B876Cu;
            // 0x4b876c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4B8770u;
        goto label_4b8770;
    }
    ctx->pc = 0x4B8768u;
    SET_GPR_U32(ctx, 31, 0x4B8770u);
    ctx->pc = 0x4B876Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8768u;
            // 0x4b876c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8770u; }
        if (ctx->pc != 0x4B8770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8770u; }
        if (ctx->pc != 0x4B8770u) { return; }
    }
    ctx->pc = 0x4B8770u;
label_4b8770:
    // 0x4b8770: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b8770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b8774:
    // 0x4b8774: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b8774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b8778:
    // 0x4b8778: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4b8778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4b877c:
    // 0x4b877c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4b877cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4b8780:
    // 0x4b8780: 0xc08c164  jal         func_230590
label_4b8784:
    if (ctx->pc == 0x4B8784u) {
        ctx->pc = 0x4B8784u;
            // 0x4b8784: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B8788u;
        goto label_4b8788;
    }
    ctx->pc = 0x4B8780u;
    SET_GPR_U32(ctx, 31, 0x4B8788u);
    ctx->pc = 0x4B8784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8780u;
            // 0x4b8784: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8788u; }
        if (ctx->pc != 0x4B8788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8788u; }
        if (ctx->pc != 0x4B8788u) { return; }
    }
    ctx->pc = 0x4B8788u;
label_4b8788:
    // 0x4b8788: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x4b8788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_4b878c:
    // 0x4b878c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b878cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b8790:
    // 0x4b8790: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4b8790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4b8794:
    // 0x4b8794: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4b8794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4b8798:
    // 0x4b8798: 0xc0a7a88  jal         func_29EA20
label_4b879c:
    if (ctx->pc == 0x4B879Cu) {
        ctx->pc = 0x4B879Cu;
            // 0x4b879c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4B87A0u;
        goto label_4b87a0;
    }
    ctx->pc = 0x4B8798u;
    SET_GPR_U32(ctx, 31, 0x4B87A0u);
    ctx->pc = 0x4B879Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8798u;
            // 0x4b879c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B87A0u; }
        if (ctx->pc != 0x4B87A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B87A0u; }
        if (ctx->pc != 0x4B87A0u) { return; }
    }
    ctx->pc = 0x4B87A0u;
label_4b87a0:
    // 0x4b87a0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4b87a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4b87a4:
    // 0x4b87a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4b87a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b87a8:
    // 0x4b87a8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_4b87ac:
    if (ctx->pc == 0x4B87ACu) {
        ctx->pc = 0x4B87ACu;
            // 0x4b87ac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4B87B0u;
        goto label_4b87b0;
    }
    ctx->pc = 0x4B87A8u;
    {
        const bool branch_taken_0x4b87a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B87ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B87A8u;
            // 0x4b87ac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b87a8) {
            ctx->pc = 0x4B87CCu;
            goto label_4b87cc;
        }
    }
    ctx->pc = 0x4B87B0u;
label_4b87b0:
    // 0x4b87b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b87b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b87b4:
    // 0x4b87b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b87b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b87b8:
    // 0x4b87b8: 0xc0869d0  jal         func_21A740
label_4b87bc:
    if (ctx->pc == 0x4B87BCu) {
        ctx->pc = 0x4B87BCu;
            // 0x4b87bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B87C0u;
        goto label_4b87c0;
    }
    ctx->pc = 0x4B87B8u;
    SET_GPR_U32(ctx, 31, 0x4B87C0u);
    ctx->pc = 0x4B87BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B87B8u;
            // 0x4b87bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B87C0u; }
        if (ctx->pc != 0x4B87C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B87C0u; }
        if (ctx->pc != 0x4B87C0u) { return; }
    }
    ctx->pc = 0x4B87C0u;
label_4b87c0:
    // 0x4b87c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b87c4:
    // 0x4b87c4: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4b87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4b87c8:
    // 0x4b87c8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4b87c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4b87cc:
    // 0x4b87cc: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x4b87ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_4b87d0:
    // 0x4b87d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b87d4:
    // 0x4b87d4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4b87d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4b87d8:
    // 0x4b87d8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4b87d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4b87dc:
    // 0x4b87dc: 0xc08c650  jal         func_231940
label_4b87e0:
    if (ctx->pc == 0x4B87E0u) {
        ctx->pc = 0x4B87E0u;
            // 0x4b87e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B87E4u;
        goto label_4b87e4;
    }
    ctx->pc = 0x4B87DCu;
    SET_GPR_U32(ctx, 31, 0x4B87E4u);
    ctx->pc = 0x4B87E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B87DCu;
            // 0x4b87e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B87E4u; }
        if (ctx->pc != 0x4B87E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B87E4u; }
        if (ctx->pc != 0x4B87E4u) { return; }
    }
    ctx->pc = 0x4B87E4u;
label_4b87e4:
    // 0x4b87e4: 0xc040180  jal         func_100600
label_4b87e8:
    if (ctx->pc == 0x4B87E8u) {
        ctx->pc = 0x4B87E8u;
            // 0x4b87e8: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x4B87ECu;
        goto label_4b87ec;
    }
    ctx->pc = 0x4B87E4u;
    SET_GPR_U32(ctx, 31, 0x4B87ECu);
    ctx->pc = 0x4B87E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B87E4u;
            // 0x4b87e8: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B87ECu; }
        if (ctx->pc != 0x4B87ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B87ECu; }
        if (ctx->pc != 0x4B87ECu) { return; }
    }
    ctx->pc = 0x4B87ECu;
label_4b87ec:
    // 0x4b87ec: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_4b87f0:
    if (ctx->pc == 0x4B87F0u) {
        ctx->pc = 0x4B87F0u;
            // 0x4b87f0: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x4B87F4u;
        goto label_4b87f4;
    }
    ctx->pc = 0x4B87ECu;
    {
        const bool branch_taken_0x4b87ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b87ec) {
            ctx->pc = 0x4B87F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B87ECu;
            // 0x4b87f0: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B883Cu;
            goto label_4b883c;
        }
    }
    ctx->pc = 0x4B87F4u;
label_4b87f4:
    // 0x4b87f4: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x4b87f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4b87f8:
    // 0x4b87f8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x4b87f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_4b87fc:
    // 0x4b87fc: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x4b87fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_4b8800:
    // 0x4b8800: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4b8800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4b8804:
    // 0x4b8804: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x4b8804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_4b8808:
    // 0x4b8808: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x4b8808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_4b880c:
    // 0x4b880c: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x4b880cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_4b8810:
    // 0x4b8810: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x4b8810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_4b8814:
    // 0x4b8814: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x4b8814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_4b8818:
    // 0x4b8818: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x4b8818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_4b881c:
    // 0x4b881c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x4b881cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_4b8820:
    // 0x4b8820: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x4b8820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_4b8824:
    // 0x4b8824: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x4b8824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_4b8828:
    // 0x4b8828: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x4b8828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_4b882c:
    // 0x4b882c: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x4b882cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_4b8830:
    // 0x4b8830: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x4b8830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_4b8834:
    // 0x4b8834: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x4b8834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_4b8838:
    // 0x4b8838: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x4b8838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_4b883c:
    // 0x4b883c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4b883cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4b8840:
    // 0x4b8840: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x4b8840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_4b8844:
    // 0x4b8844: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x4b8844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_4b8848:
    // 0x4b8848: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4b8848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b884c:
    // 0x4b884c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4b884cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4b8850:
    // 0x4b8850: 0xc040180  jal         func_100600
label_4b8854:
    if (ctx->pc == 0x4B8854u) {
        ctx->pc = 0x4B8854u;
            // 0x4b8854: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x4B8858u;
        goto label_4b8858;
    }
    ctx->pc = 0x4B8850u;
    SET_GPR_U32(ctx, 31, 0x4B8858u);
    ctx->pc = 0x4B8854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8850u;
            // 0x4b8854: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8858u; }
        if (ctx->pc != 0x4B8858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8858u; }
        if (ctx->pc != 0x4B8858u) { return; }
    }
    ctx->pc = 0x4B8858u;
label_4b8858:
    // 0x4b8858: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b8858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b885c:
    // 0x4b885c: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4b8860:
    if (ctx->pc == 0x4B8860u) {
        ctx->pc = 0x4B8860u;
            // 0x4b8860: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x4B8864u;
        goto label_4b8864;
    }
    ctx->pc = 0x4B885Cu;
    {
        const bool branch_taken_0x4b885c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b885c) {
            ctx->pc = 0x4B8860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B885Cu;
            // 0x4b8860: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B889Cu;
            goto label_4b889c;
        }
    }
    ctx->pc = 0x4B8864u;
label_4b8864:
    // 0x4b8864: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b8864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4b8868:
    // 0x4b8868: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4b8868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b886c:
    // 0x4b886c: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4b886cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4b8870:
    // 0x4b8870: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x4b8870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_4b8874:
    // 0x4b8874: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b8874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b8878:
    // 0x4b8878: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4b8878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4b887c:
    // 0x4b887c: 0xc040138  jal         func_1004E0
label_4b8880:
    if (ctx->pc == 0x4B8880u) {
        ctx->pc = 0x4B8880u;
            // 0x4b8880: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4B8884u;
        goto label_4b8884;
    }
    ctx->pc = 0x4B887Cu;
    SET_GPR_U32(ctx, 31, 0x4B8884u);
    ctx->pc = 0x4B8880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B887Cu;
            // 0x4b8880: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8884u; }
        if (ctx->pc != 0x4B8884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8884u; }
        if (ctx->pc != 0x4B8884u) { return; }
    }
    ctx->pc = 0x4B8884u;
label_4b8884:
    // 0x4b8884: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4b8884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4b8888:
    // 0x4b8888: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4b8888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4b888c:
    // 0x4b888c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b888cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b8890:
    // 0x4b8890: 0xc04a576  jal         func_1295D8
label_4b8894:
    if (ctx->pc == 0x4B8894u) {
        ctx->pc = 0x4B8894u;
            // 0x4b8894: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4B8898u;
        goto label_4b8898;
    }
    ctx->pc = 0x4B8890u;
    SET_GPR_U32(ctx, 31, 0x4B8898u);
    ctx->pc = 0x4B8894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8890u;
            // 0x4b8894: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8898u; }
        if (ctx->pc != 0x4B8898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8898u; }
        if (ctx->pc != 0x4B8898u) { return; }
    }
    ctx->pc = 0x4B8898u;
label_4b8898:
    // 0x4b8898: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4b8898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4b889c:
    // 0x4b889c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b88a0:
    // 0x4b88a0: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x4b88a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4b88a4:
    // 0x4b88a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b88a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b88a8:
    // 0x4b88a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4b88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4b88ac:
    // 0x4b88ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4b88acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b88b0:
    // 0x4b88b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4b88b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4b88b4:
    // 0x4b88b4: 0xae300168  sw          $s0, 0x168($s1)
    ctx->pc = 0x4b88b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 16));
label_4b88b8:
    // 0x4b88b8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4b88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4b88bc:
    // 0x4b88bc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4b88bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b88c0:
    // 0x4b88c0: 0xc122cd8  jal         func_48B360
label_4b88c4:
    if (ctx->pc == 0x4B88C4u) {
        ctx->pc = 0x4B88C4u;
            // 0x4b88c4: 0x344619ae  ori         $a2, $v0, 0x19AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6574);
        ctx->pc = 0x4B88C8u;
        goto label_4b88c8;
    }
    ctx->pc = 0x4B88C0u;
    SET_GPR_U32(ctx, 31, 0x4B88C8u);
    ctx->pc = 0x4B88C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B88C0u;
            // 0x4b88c4: 0x344619ae  ori         $a2, $v0, 0x19AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6574);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B88C8u; }
        if (ctx->pc != 0x4B88C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B88C8u; }
        if (ctx->pc != 0x4B88C8u) { return; }
    }
    ctx->pc = 0x4B88C8u;
label_4b88c8:
    // 0x4b88c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4b88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4b88cc:
    // 0x4b88cc: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x4b88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_4b88d0:
    // 0x4b88d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4b88d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4b88d4:
    // 0x4b88d4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x4b88d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_4b88d8:
    // 0x4b88d8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4b88d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4b88dc:
    // 0x4b88dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b88dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b88e0:
    // 0x4b88e0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4b88e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b88e4:
    // 0x4b88e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b88e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b88e8:
    // 0x4b88e8: 0x344619ae  ori         $a2, $v0, 0x19AE
    ctx->pc = 0x4b88e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6574);
label_4b88ec:
    // 0x4b88ec: 0xc122cd8  jal         func_48B360
label_4b88f0:
    if (ctx->pc == 0x4B88F0u) {
        ctx->pc = 0x4B88F0u;
            // 0x4b88f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B88F4u;
        goto label_4b88f4;
    }
    ctx->pc = 0x4B88ECu;
    SET_GPR_U32(ctx, 31, 0x4B88F4u);
    ctx->pc = 0x4B88F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B88ECu;
            // 0x4b88f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B88F4u; }
        if (ctx->pc != 0x4B88F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B88F4u; }
        if (ctx->pc != 0x4B88F4u) { return; }
    }
    ctx->pc = 0x4B88F4u;
label_4b88f4:
    // 0x4b88f4: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x4b88f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_4b88f8:
    // 0x4b88f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b88f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b88fc:
    // 0x4b88fc: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x4b88fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_4b8900:
    // 0x4b8900: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4b8900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b8904:
    // 0x4b8904: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4b8904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4b8908:
    // 0x4b8908: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b8908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b890c:
    // 0x4b890c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4b890cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4b8910:
    // 0x4b8910: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4b8910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4b8914:
    // 0x4b8914: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4b8914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b8918:
    // 0x4b8918: 0xc122cd8  jal         func_48B360
label_4b891c:
    if (ctx->pc == 0x4B891Cu) {
        ctx->pc = 0x4B891Cu;
            // 0x4b891c: 0x344619ae  ori         $a2, $v0, 0x19AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6574);
        ctx->pc = 0x4B8920u;
        goto label_4b8920;
    }
    ctx->pc = 0x4B8918u;
    SET_GPR_U32(ctx, 31, 0x4B8920u);
    ctx->pc = 0x4B891Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8918u;
            // 0x4b891c: 0x344619ae  ori         $a2, $v0, 0x19AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6574);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8920u; }
        if (ctx->pc != 0x4B8920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8920u; }
        if (ctx->pc != 0x4B8920u) { return; }
    }
    ctx->pc = 0x4B8920u;
label_4b8920:
    // 0x4b8920: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b8920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4b8924:
    // 0x4b8924: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b8924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b8928:
    // 0x4b8928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b8928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b892c:
    // 0x4b892c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b892cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b8930:
    // 0x4b8930: 0x3e00008  jr          $ra
label_4b8934:
    if (ctx->pc == 0x4B8934u) {
        ctx->pc = 0x4B8934u;
            // 0x4b8934: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4B8938u;
        goto label_4b8938;
    }
    ctx->pc = 0x4B8930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8930u;
            // 0x4b8934: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B8938u;
label_4b8938:
    // 0x4b8938: 0x0  nop
    ctx->pc = 0x4b8938u;
    // NOP
label_4b893c:
    // 0x4b893c: 0x0  nop
    ctx->pc = 0x4b893cu;
    // NOP
label_4b8940:
    // 0x4b8940: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x4b8940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b8944:
    // 0x4b8944: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4b8944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4b8948:
    // 0x4b8948: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b8948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b894c:
    // 0x4b894c: 0x0  nop
    ctx->pc = 0x4b894cu;
    // NOP
label_4b8950:
    // 0x4b8950: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4b8950u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b8954:
    // 0x4b8954: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4b8958:
    if (ctx->pc == 0x4B8958u) {
        ctx->pc = 0x4B8958u;
            // 0x4b8958: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4B895Cu;
        goto label_4b895c;
    }
    ctx->pc = 0x4B8954u;
    {
        const bool branch_taken_0x4b8954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b8954) {
            ctx->pc = 0x4B8958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8954u;
            // 0x4b8958: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B896Cu;
            goto label_4b896c;
        }
    }
    ctx->pc = 0x4B895Cu;
label_4b895c:
    // 0x4b895c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b895cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4b8960:
    // 0x4b8960: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4b8960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4b8964:
    // 0x4b8964: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b8968:
    if (ctx->pc == 0x4B8968u) {
        ctx->pc = 0x4B8968u;
            // 0x4b8968: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4B896Cu;
        goto label_4b896c;
    }
    ctx->pc = 0x4B8964u;
    {
        const bool branch_taken_0x4b8964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8964u;
            // 0x4b8968: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8964) {
            ctx->pc = 0x4B8984u;
            goto label_4b8984;
        }
    }
    ctx->pc = 0x4B896Cu;
label_4b896c:
    // 0x4b896c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x4b896cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_4b8970:
    // 0x4b8970: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b8970u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4b8974:
    // 0x4b8974: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4b8974u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4b8978:
    // 0x4b8978: 0x0  nop
    ctx->pc = 0x4b8978u;
    // NOP
label_4b897c:
    // 0x4b897c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4b897cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_4b8980:
    // 0x4b8980: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4b8980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4b8984:
    // 0x4b8984: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x4b8984u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4b8988:
    // 0x4b8988: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x4b8988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_4b898c:
    // 0x4b898c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4b898cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4b8990:
    // 0x4b8990: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x4b8990u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_4b8994:
    // 0x4b8994: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4b8994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4b8998:
    // 0x4b8998: 0x24a56490  addiu       $a1, $a1, 0x6490
    ctx->pc = 0x4b8998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25744));
label_4b899c:
    // 0x4b899c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4b899cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4b89a0:
    // 0x4b89a0: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x4b89a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
label_4b89a4:
    // 0x4b89a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4b89a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4b89a8:
    // 0x4b89a8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4b89a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4b89ac:
    // 0x4b89ac: 0x80680000  lb          $t0, 0x0($v1)
    ctx->pc = 0x4b89acu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4b89b0:
    // 0x4b89b0: 0x24c66480  addiu       $a2, $a2, 0x6480
    ctx->pc = 0x4b89b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25728));
label_4b89b4:
    // 0x4b89b4: 0x24e7c690  addiu       $a3, $a3, -0x3970
    ctx->pc = 0x4b89b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952592));
label_4b89b8:
    // 0x4b89b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b89b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b89bc:
    // 0x4b89bc: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x4b89bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_4b89c0:
    // 0x4b89c0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4b89c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4b89c4:
    // 0x4b89c4: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x4b89c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4b89c8:
    // 0x4b89c8: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x4b89c8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4b89cc:
    // 0x4b89cc: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x4b89ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4b89d0:
    // 0x4b89d0: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x4b89d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4b89d4:
    // 0x4b89d4: 0xac870150  sw          $a3, 0x150($a0)
    ctx->pc = 0x4b89d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 7));
label_4b89d8:
    // 0x4b89d8: 0xa086017c  sb          $a2, 0x17C($a0)
    ctx->pc = 0x4b89d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 380), (uint8_t)GPR_U32(ctx, 6));
label_4b89dc:
    // 0x4b89dc: 0xa0800064  sb          $zero, 0x64($a0)
    ctx->pc = 0x4b89dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 0));
label_4b89e0:
    // 0x4b89e0: 0xa0850065  sb          $a1, 0x65($a0)
    ctx->pc = 0x4b89e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 5));
label_4b89e4:
    // 0x4b89e4: 0xa0800068  sb          $zero, 0x68($a0)
    ctx->pc = 0x4b89e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 104), (uint8_t)GPR_U32(ctx, 0));
label_4b89e8:
    // 0x4b89e8: 0x3e00008  jr          $ra
label_4b89ec:
    if (ctx->pc == 0x4B89ECu) {
        ctx->pc = 0x4B89ECu;
            // 0x4b89ec: 0xa0830069  sb          $v1, 0x69($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 105), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4B89F0u;
        goto label_4b89f0;
    }
    ctx->pc = 0x4B89E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B89ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B89E8u;
            // 0x4b89ec: 0xa0830069  sb          $v1, 0x69($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 105), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B89F0u;
label_4b89f0:
    // 0x4b89f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b89f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b89f4:
    // 0x4b89f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b89f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b89f8:
    // 0x4b89f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b89f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b89fc:
    // 0x4b89fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b89fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b8a00:
    // 0x4b8a00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b8a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b8a04:
    // 0x4b8a04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b8a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b8a08:
    // 0x4b8a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b8a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b8a0c:
    // 0x4b8a0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b8a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b8a10:
    // 0x4b8a10: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x4b8a10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4b8a14:
    // 0x4b8a14: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x4b8a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_4b8a18:
    // 0x4b8a18: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4b8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4b8a1c:
    // 0x4b8a1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4b8a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4b8a20:
    // 0x4b8a20: 0xc08bff0  jal         func_22FFC0
label_4b8a24:
    if (ctx->pc == 0x4B8A24u) {
        ctx->pc = 0x4B8A24u;
            // 0x4b8a24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B8A28u;
        goto label_4b8a28;
    }
    ctx->pc = 0x4B8A20u;
    SET_GPR_U32(ctx, 31, 0x4B8A28u);
    ctx->pc = 0x4B8A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8A20u;
            // 0x4b8a24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8A28u; }
        if (ctx->pc != 0x4B8A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8A28u; }
        if (ctx->pc != 0x4B8A28u) { return; }
    }
    ctx->pc = 0x4B8A28u;
label_4b8a28:
    // 0x4b8a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b8a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b8a2c:
    // 0x4b8a2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4b8a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4b8a30:
    // 0x4b8a30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b8a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b8a34:
    // 0x4b8a34: 0xc08914c  jal         func_224530
label_4b8a38:
    if (ctx->pc == 0x4B8A38u) {
        ctx->pc = 0x4B8A38u;
            // 0x4b8a38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B8A3Cu;
        goto label_4b8a3c;
    }
    ctx->pc = 0x4B8A34u;
    SET_GPR_U32(ctx, 31, 0x4B8A3Cu);
    ctx->pc = 0x4B8A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8A34u;
            // 0x4b8a38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8A3Cu; }
        if (ctx->pc != 0x4B8A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8A3Cu; }
        if (ctx->pc != 0x4B8A3Cu) { return; }
    }
    ctx->pc = 0x4B8A3Cu;
label_4b8a3c:
    // 0x4b8a3c: 0xc0e393c  jal         func_38E4F0
label_4b8a40:
    if (ctx->pc == 0x4B8A40u) {
        ctx->pc = 0x4B8A40u;
            // 0x4b8a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B8A44u;
        goto label_4b8a44;
    }
    ctx->pc = 0x4B8A3Cu;
    SET_GPR_U32(ctx, 31, 0x4B8A44u);
    ctx->pc = 0x4B8A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8A3Cu;
            // 0x4b8a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8A44u; }
        if (ctx->pc != 0x4B8A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8A44u; }
        if (ctx->pc != 0x4B8A44u) { return; }
    }
    ctx->pc = 0x4B8A44u;
label_4b8a44:
    // 0x4b8a44: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x4b8a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
label_4b8a48:
    // 0x4b8a48: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x4b8a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_4b8a4c:
    // 0x4b8a4c: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x4b8a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_4b8a50:
    // 0x4b8a50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4b8a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b8a54:
    // 0x4b8a54: 0xae030154  sw          $v1, 0x154($s0)
    ctx->pc = 0x4b8a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 3));
label_4b8a58:
    // 0x4b8a58: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x4b8a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
label_4b8a5c:
    // 0x4b8a5c: 0xc122c94  jal         func_48B250
label_4b8a60:
    if (ctx->pc == 0x4B8A60u) {
        ctx->pc = 0x4B8A60u;
            // 0x4b8a60: 0x8e240168  lw          $a0, 0x168($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
        ctx->pc = 0x4B8A64u;
        goto label_4b8a64;
    }
    ctx->pc = 0x4B8A5Cu;
    SET_GPR_U32(ctx, 31, 0x4B8A64u);
    ctx->pc = 0x4B8A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8A5Cu;
            // 0x4b8a60: 0x8e240168  lw          $a0, 0x168($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8A64u; }
        if (ctx->pc != 0x4B8A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8A64u; }
        if (ctx->pc != 0x4B8A64u) { return; }
    }
    ctx->pc = 0x4B8A64u;
label_4b8a64:
    // 0x4b8a64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b8a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b8a68:
    // 0x4b8a68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b8a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b8a6c:
    // 0x4b8a6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b8a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b8a70:
    // 0x4b8a70: 0x3e00008  jr          $ra
label_4b8a74:
    if (ctx->pc == 0x4B8A74u) {
        ctx->pc = 0x4B8A74u;
            // 0x4b8a74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B8A78u;
        goto label_4b8a78;
    }
    ctx->pc = 0x4B8A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8A70u;
            // 0x4b8a74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B8A78u;
label_4b8a78:
    // 0x4b8a78: 0x0  nop
    ctx->pc = 0x4b8a78u;
    // NOP
label_4b8a7c:
    // 0x4b8a7c: 0x0  nop
    ctx->pc = 0x4b8a7cu;
    // NOP
label_4b8a80:
    // 0x4b8a80: 0x3e00008  jr          $ra
label_4b8a84:
    if (ctx->pc == 0x4B8A84u) {
        ctx->pc = 0x4B8A84u;
            // 0x4b8a84: 0x24026590  addiu       $v0, $zero, 0x6590 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26000));
        ctx->pc = 0x4B8A88u;
        goto label_4b8a88;
    }
    ctx->pc = 0x4B8A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8A80u;
            // 0x4b8a84: 0x24026590  addiu       $v0, $zero, 0x6590 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B8A88u;
label_4b8a88:
    // 0x4b8a88: 0x0  nop
    ctx->pc = 0x4b8a88u;
    // NOP
label_4b8a8c:
    // 0x4b8a8c: 0x0  nop
    ctx->pc = 0x4b8a8cu;
    // NOP
label_4b8a90:
    // 0x4b8a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b8a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b8a94:
    // 0x4b8a94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b8a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b8a98:
    // 0x4b8a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b8a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b8a9c:
    // 0x4b8a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b8a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b8aa0:
    // 0x4b8aa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b8aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b8aa4:
    // 0x4b8aa4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4b8aa8:
    if (ctx->pc == 0x4B8AA8u) {
        ctx->pc = 0x4B8AA8u;
            // 0x4b8aa8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B8AACu;
        goto label_4b8aac;
    }
    ctx->pc = 0x4B8AA4u;
    {
        const bool branch_taken_0x4b8aa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8AA4u;
            // 0x4b8aa8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8aa4) {
            ctx->pc = 0x4B8B00u;
            goto label_4b8b00;
        }
    }
    ctx->pc = 0x4B8AACu;
label_4b8aac:
    // 0x4b8aac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b8aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b8ab0:
    // 0x4b8ab0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b8ab4:
    // 0x4b8ab4: 0x24630bd0  addiu       $v1, $v1, 0xBD0
    ctx->pc = 0x4b8ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3024));
label_4b8ab8:
    // 0x4b8ab8: 0x24420c08  addiu       $v0, $v0, 0xC08
    ctx->pc = 0x4b8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3080));
label_4b8abc:
    // 0x4b8abc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b8abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b8ac0:
    // 0x4b8ac0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4b8ac4:
    if (ctx->pc == 0x4B8AC4u) {
        ctx->pc = 0x4B8AC4u;
            // 0x4b8ac4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4B8AC8u;
        goto label_4b8ac8;
    }
    ctx->pc = 0x4B8AC0u;
    {
        const bool branch_taken_0x4b8ac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8AC0u;
            // 0x4b8ac4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8ac0) {
            ctx->pc = 0x4B8AE8u;
            goto label_4b8ae8;
        }
    }
    ctx->pc = 0x4B8AC8u;
label_4b8ac8:
    // 0x4b8ac8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b8ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b8acc:
    // 0x4b8acc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b8accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b8ad0:
    // 0x4b8ad0: 0x24630c20  addiu       $v1, $v1, 0xC20
    ctx->pc = 0x4b8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3104));
label_4b8ad4:
    // 0x4b8ad4: 0x24420c58  addiu       $v0, $v0, 0xC58
    ctx->pc = 0x4b8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3160));
label_4b8ad8:
    // 0x4b8ad8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b8ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b8adc:
    // 0x4b8adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b8adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b8ae0:
    // 0x4b8ae0: 0xc12d94c  jal         func_4B6530
label_4b8ae4:
    if (ctx->pc == 0x4B8AE4u) {
        ctx->pc = 0x4B8AE4u;
            // 0x4b8ae4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4B8AE8u;
        goto label_4b8ae8;
    }
    ctx->pc = 0x4B8AE0u;
    SET_GPR_U32(ctx, 31, 0x4B8AE8u);
    ctx->pc = 0x4B8AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8AE0u;
            // 0x4b8ae4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B6530u;
    if (runtime->hasFunction(0x4B6530u)) {
        auto targetFn = runtime->lookupFunction(0x4B6530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8AE8u; }
        if (ctx->pc != 0x4B8AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B6530_0x4b6530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8AE8u; }
        if (ctx->pc != 0x4B8AE8u) { return; }
    }
    ctx->pc = 0x4B8AE8u;
label_4b8ae8:
    // 0x4b8ae8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4b8ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4b8aec:
    // 0x4b8aec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b8aecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b8af0:
    // 0x4b8af0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b8af4:
    if (ctx->pc == 0x4B8AF4u) {
        ctx->pc = 0x4B8AF4u;
            // 0x4b8af4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B8AF8u;
        goto label_4b8af8;
    }
    ctx->pc = 0x4B8AF0u;
    {
        const bool branch_taken_0x4b8af0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b8af0) {
            ctx->pc = 0x4B8AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8AF0u;
            // 0x4b8af4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B8B04u;
            goto label_4b8b04;
        }
    }
    ctx->pc = 0x4B8AF8u;
label_4b8af8:
    // 0x4b8af8: 0xc0400a8  jal         func_1002A0
label_4b8afc:
    if (ctx->pc == 0x4B8AFCu) {
        ctx->pc = 0x4B8AFCu;
            // 0x4b8afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B8B00u;
        goto label_4b8b00;
    }
    ctx->pc = 0x4B8AF8u;
    SET_GPR_U32(ctx, 31, 0x4B8B00u);
    ctx->pc = 0x4B8AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8AF8u;
            // 0x4b8afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8B00u; }
        if (ctx->pc != 0x4B8B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8B00u; }
        if (ctx->pc != 0x4B8B00u) { return; }
    }
    ctx->pc = 0x4B8B00u;
label_4b8b00:
    // 0x4b8b00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b8b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b8b04:
    // 0x4b8b04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b8b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b8b08:
    // 0x4b8b08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b8b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b8b0c:
    // 0x4b8b0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b8b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b8b10:
    // 0x4b8b10: 0x3e00008  jr          $ra
label_4b8b14:
    if (ctx->pc == 0x4B8B14u) {
        ctx->pc = 0x4B8B14u;
            // 0x4b8b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B8B18u;
        goto label_4b8b18;
    }
    ctx->pc = 0x4B8B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8B10u;
            // 0x4b8b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B8B18u;
label_4b8b18:
    // 0x4b8b18: 0x0  nop
    ctx->pc = 0x4b8b18u;
    // NOP
label_4b8b1c:
    // 0x4b8b1c: 0x0  nop
    ctx->pc = 0x4b8b1cu;
    // NOP
label_4b8b20:
    // 0x4b8b20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b8b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4b8b24:
    // 0x4b8b24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4b8b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4b8b28:
    // 0x4b8b28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b8b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4b8b2c:
    // 0x4b8b2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b8b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b8b30:
    // 0x4b8b30: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4b8b30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b8b34:
    // 0x4b8b34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b8b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b8b38:
    // 0x4b8b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b8b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b8b3c:
    // 0x4b8b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b8b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b8b40:
    // 0x4b8b40: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4b8b40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4b8b44:
    // 0x4b8b44: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4b8b48:
    if (ctx->pc == 0x4B8B48u) {
        ctx->pc = 0x4B8B48u;
            // 0x4b8b48: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B8B4Cu;
        goto label_4b8b4c;
    }
    ctx->pc = 0x4B8B44u;
    {
        const bool branch_taken_0x4b8b44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8B44u;
            // 0x4b8b48: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8b44) {
            ctx->pc = 0x4B8B88u;
            goto label_4b8b88;
        }
    }
    ctx->pc = 0x4B8B4Cu;
label_4b8b4c:
    // 0x4b8b4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b8b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b8b50:
    // 0x4b8b50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b8b50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b8b54:
    // 0x4b8b54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b8b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b8b58:
    // 0x4b8b58: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4b8b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4b8b5c:
    // 0x4b8b5c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4b8b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4b8b60:
    // 0x4b8b60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4b8b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b8b64:
    // 0x4b8b64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b8b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b8b68:
    // 0x4b8b68: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4b8b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4b8b6c:
    // 0x4b8b6c: 0x320f809  jalr        $t9
label_4b8b70:
    if (ctx->pc == 0x4B8B70u) {
        ctx->pc = 0x4B8B74u;
        goto label_4b8b74;
    }
    ctx->pc = 0x4B8B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B8B74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B8B74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B8B74u; }
            if (ctx->pc != 0x4B8B74u) { return; }
        }
        }
    }
    ctx->pc = 0x4B8B74u;
label_4b8b74:
    // 0x4b8b74: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4b8b74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4b8b78:
    // 0x4b8b78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4b8b78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4b8b7c:
    // 0x4b8b7c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4b8b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4b8b80:
    // 0x4b8b80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4b8b84:
    if (ctx->pc == 0x4B8B84u) {
        ctx->pc = 0x4B8B84u;
            // 0x4b8b84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4B8B88u;
        goto label_4b8b88;
    }
    ctx->pc = 0x4B8B80u;
    {
        const bool branch_taken_0x4b8b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8B80u;
            // 0x4b8b84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8b80) {
            ctx->pc = 0x4B8B58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b8b58;
        }
    }
    ctx->pc = 0x4B8B88u;
label_4b8b88:
    // 0x4b8b88: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4b8b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b8b8c:
    // 0x4b8b8c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4b8b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4b8b90:
    // 0x4b8b90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b8b90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b8b94:
    // 0x4b8b94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b8b94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b8b98:
    // 0x4b8b98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b8b98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b8b9c:
    // 0x4b8b9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b8b9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b8ba0:
    // 0x4b8ba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b8ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b8ba4:
    // 0x4b8ba4: 0x3e00008  jr          $ra
label_4b8ba8:
    if (ctx->pc == 0x4B8BA8u) {
        ctx->pc = 0x4B8BA8u;
            // 0x4b8ba8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4B8BACu;
        goto label_4b8bac;
    }
    ctx->pc = 0x4B8BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8BA4u;
            // 0x4b8ba8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B8BACu;
label_4b8bac:
    // 0x4b8bac: 0x0  nop
    ctx->pc = 0x4b8bacu;
    // NOP
label_4b8bb0:
    // 0x4b8bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b8bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b8bb4:
    // 0x4b8bb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b8bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b8bb8:
    // 0x4b8bb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b8bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b8bbc:
    // 0x4b8bbc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4b8bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4b8bc0:
    // 0x4b8bc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b8bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b8bc4:
    // 0x4b8bc4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4b8bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4b8bc8:
    // 0x4b8bc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b8bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b8bcc:
    // 0x4b8bcc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4b8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4b8bd0:
    // 0x4b8bd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b8bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b8bd4:
    // 0x4b8bd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b8bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b8bd8:
    // 0x4b8bd8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4b8bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4b8bdc:
    // 0x4b8bdc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4b8bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b8be0:
    // 0x4b8be0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4b8be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4b8be4:
    // 0x4b8be4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4b8be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4b8be8:
    // 0x4b8be8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4b8be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4b8bec:
    // 0x4b8bec: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4b8becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4b8bf0:
    // 0x4b8bf0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4b8bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4b8bf4:
    // 0x4b8bf4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b8bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4b8bf8:
    // 0x4b8bf8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4b8bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4b8bfc:
    // 0x4b8bfc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4b8bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4b8c00:
    // 0x4b8c00: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4b8c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4b8c04:
    // 0x4b8c04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b8c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b8c08:
    // 0x4b8c08: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4b8c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b8c0c:
    // 0x4b8c0c: 0xc0a997c  jal         func_2A65F0
label_4b8c10:
    if (ctx->pc == 0x4B8C10u) {
        ctx->pc = 0x4B8C10u;
            // 0x4b8c10: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4B8C14u;
        goto label_4b8c14;
    }
    ctx->pc = 0x4B8C0Cu;
    SET_GPR_U32(ctx, 31, 0x4B8C14u);
    ctx->pc = 0x4B8C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8C0Cu;
            // 0x4b8c10: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8C14u; }
        if (ctx->pc != 0x4B8C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8C14u; }
        if (ctx->pc != 0x4B8C14u) { return; }
    }
    ctx->pc = 0x4B8C14u;
label_4b8c14:
    // 0x4b8c14: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4b8c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4b8c18:
    // 0x4b8c18: 0xc0d879c  jal         func_361E70
label_4b8c1c:
    if (ctx->pc == 0x4B8C1Cu) {
        ctx->pc = 0x4B8C1Cu;
            // 0x4b8c1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B8C20u;
        goto label_4b8c20;
    }
    ctx->pc = 0x4B8C18u;
    SET_GPR_U32(ctx, 31, 0x4B8C20u);
    ctx->pc = 0x4B8C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8C18u;
            // 0x4b8c1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8C20u; }
        if (ctx->pc != 0x4B8C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8C20u; }
        if (ctx->pc != 0x4B8C20u) { return; }
    }
    ctx->pc = 0x4B8C20u;
label_4b8c20:
    // 0x4b8c20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b8c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b8c24:
    // 0x4b8c24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b8c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b8c28:
    // 0x4b8c28: 0x3e00008  jr          $ra
label_4b8c2c:
    if (ctx->pc == 0x4B8C2Cu) {
        ctx->pc = 0x4B8C2Cu;
            // 0x4b8c2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B8C30u;
        goto label_4b8c30;
    }
    ctx->pc = 0x4B8C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8C28u;
            // 0x4b8c2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B8C30u;
label_4b8c30:
    // 0x4b8c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b8c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b8c34:
    // 0x4b8c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b8c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b8c38:
    // 0x4b8c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b8c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b8c3c:
    // 0x4b8c3c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4b8c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4b8c40:
    // 0x4b8c40: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4b8c44:
    if (ctx->pc == 0x4B8C44u) {
        ctx->pc = 0x4B8C44u;
            // 0x4b8c44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B8C48u;
        goto label_4b8c48;
    }
    ctx->pc = 0x4B8C40u;
    {
        const bool branch_taken_0x4b8c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8C40u;
            // 0x4b8c44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8c40) {
            ctx->pc = 0x4B8D60u;
            goto label_4b8d60;
        }
    }
    ctx->pc = 0x4B8C48u;
label_4b8c48:
    // 0x4b8c48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4b8c4c:
    // 0x4b8c4c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4b8c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4b8c50:
    // 0x4b8c50: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4b8c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4b8c54:
    // 0x4b8c54: 0xc075128  jal         func_1D44A0
label_4b8c58:
    if (ctx->pc == 0x4B8C58u) {
        ctx->pc = 0x4B8C58u;
            // 0x4b8c58: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4B8C5Cu;
        goto label_4b8c5c;
    }
    ctx->pc = 0x4B8C54u;
    SET_GPR_U32(ctx, 31, 0x4B8C5Cu);
    ctx->pc = 0x4B8C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8C54u;
            // 0x4b8c58: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8C5Cu; }
        if (ctx->pc != 0x4B8C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8C5Cu; }
        if (ctx->pc != 0x4B8C5Cu) { return; }
    }
    ctx->pc = 0x4B8C5Cu;
label_4b8c5c:
    // 0x4b8c5c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4b8c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4b8c60:
    // 0x4b8c60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b8c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b8c64:
    // 0x4b8c64: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4b8c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4b8c68:
    // 0x4b8c68: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4b8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4b8c6c:
    // 0x4b8c6c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4b8c6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4b8c70:
    // 0x4b8c70: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4b8c74:
    if (ctx->pc == 0x4B8C74u) {
        ctx->pc = 0x4B8C74u;
            // 0x4b8c74: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4B8C78u;
        goto label_4b8c78;
    }
    ctx->pc = 0x4B8C70u;
    {
        const bool branch_taken_0x4b8c70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8C70u;
            // 0x4b8c74: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8c70) {
            ctx->pc = 0x4B8C80u;
            goto label_4b8c80;
        }
    }
    ctx->pc = 0x4B8C78u;
label_4b8c78:
    // 0x4b8c78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b8c7c:
    // 0x4b8c7c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4b8c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4b8c80:
    // 0x4b8c80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b8c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b8c84:
    // 0x4b8c84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b8c88:
    // 0x4b8c88: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4b8c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4b8c8c:
    // 0x4b8c8c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4b8c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4b8c90:
    // 0x4b8c90: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4b8c90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4b8c94:
    // 0x4b8c94: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4b8c98:
    if (ctx->pc == 0x4B8C98u) {
        ctx->pc = 0x4B8C98u;
            // 0x4b8c98: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4B8C9Cu;
        goto label_4b8c9c;
    }
    ctx->pc = 0x4B8C94u;
    {
        const bool branch_taken_0x4b8c94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8c94) {
            ctx->pc = 0x4B8C98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8C94u;
            // 0x4b8c98: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B8CA8u;
            goto label_4b8ca8;
        }
    }
    ctx->pc = 0x4B8C9Cu;
label_4b8c9c:
    // 0x4b8c9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b8ca0:
    // 0x4b8ca0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4b8ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4b8ca4:
    // 0x4b8ca4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b8ca8:
    // 0x4b8ca8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b8cac:
    // 0x4b8cac: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4b8cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4b8cb0:
    // 0x4b8cb0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4b8cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4b8cb4:
    // 0x4b8cb4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4b8cb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4b8cb8:
    // 0x4b8cb8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4b8cbc:
    if (ctx->pc == 0x4B8CBCu) {
        ctx->pc = 0x4B8CBCu;
            // 0x4b8cbc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4B8CC0u;
        goto label_4b8cc0;
    }
    ctx->pc = 0x4B8CB8u;
    {
        const bool branch_taken_0x4b8cb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8cb8) {
            ctx->pc = 0x4B8CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8CB8u;
            // 0x4b8cbc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B8CCCu;
            goto label_4b8ccc;
        }
    }
    ctx->pc = 0x4B8CC0u;
label_4b8cc0:
    // 0x4b8cc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b8cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b8cc4:
    // 0x4b8cc4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4b8cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4b8cc8:
    // 0x4b8cc8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4b8cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b8ccc:
    // 0x4b8ccc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4b8cccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4b8cd0:
    // 0x4b8cd0: 0x320f809  jalr        $t9
label_4b8cd4:
    if (ctx->pc == 0x4B8CD4u) {
        ctx->pc = 0x4B8CD4u;
            // 0x4b8cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B8CD8u;
        goto label_4b8cd8;
    }
    ctx->pc = 0x4B8CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B8CD8u);
        ctx->pc = 0x4B8CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8CD0u;
            // 0x4b8cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B8CD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B8CD8u; }
            if (ctx->pc != 0x4B8CD8u) { return; }
        }
        }
    }
    ctx->pc = 0x4B8CD8u;
label_4b8cd8:
    // 0x4b8cd8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4b8cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4b8cdc:
    // 0x4b8cdc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b8cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b8ce0:
    // 0x4b8ce0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4b8ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4b8ce4:
    // 0x4b8ce4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4b8ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4b8ce8:
    // 0x4b8ce8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4b8ce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4b8cec:
    // 0x4b8cec: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4b8cecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4b8cf0:
    // 0x4b8cf0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4b8cf4:
    if (ctx->pc == 0x4B8CF4u) {
        ctx->pc = 0x4B8CF4u;
            // 0x4b8cf4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4B8CF8u;
        goto label_4b8cf8;
    }
    ctx->pc = 0x4B8CF0u;
    {
        const bool branch_taken_0x4b8cf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8cf0) {
            ctx->pc = 0x4B8CF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8CF0u;
            // 0x4b8cf4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B8D04u;
            goto label_4b8d04;
        }
    }
    ctx->pc = 0x4B8CF8u;
label_4b8cf8:
    // 0x4b8cf8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b8cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b8cfc:
    // 0x4b8cfc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4b8cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4b8d00:
    // 0x4b8d00: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4b8d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4b8d04:
    // 0x4b8d04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b8d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b8d08:
    // 0x4b8d08: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4b8d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4b8d0c:
    // 0x4b8d0c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4b8d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4b8d10:
    // 0x4b8d10: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4b8d10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4b8d14:
    // 0x4b8d14: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4b8d14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4b8d18:
    // 0x4b8d18: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4b8d1c:
    if (ctx->pc == 0x4B8D1Cu) {
        ctx->pc = 0x4B8D20u;
        goto label_4b8d20;
    }
    ctx->pc = 0x4B8D18u;
    {
        const bool branch_taken_0x4b8d18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8d18) {
            ctx->pc = 0x4B8D28u;
            goto label_4b8d28;
        }
    }
    ctx->pc = 0x4B8D20u;
label_4b8d20:
    // 0x4b8d20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b8d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b8d24:
    // 0x4b8d24: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4b8d24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4b8d28:
    // 0x4b8d28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b8d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b8d2c:
    // 0x4b8d2c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4b8d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4b8d30:
    // 0x4b8d30: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4b8d30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b8d34:
    // 0x4b8d34: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4b8d38:
    if (ctx->pc == 0x4B8D38u) {
        ctx->pc = 0x4B8D3Cu;
        goto label_4b8d3c;
    }
    ctx->pc = 0x4B8D34u;
    {
        const bool branch_taken_0x4b8d34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8d34) {
            ctx->pc = 0x4B8D44u;
            goto label_4b8d44;
        }
    }
    ctx->pc = 0x4B8D3Cu;
label_4b8d3c:
    // 0x4b8d3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b8d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b8d40:
    // 0x4b8d40: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4b8d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4b8d44:
    // 0x4b8d44: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b8d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b8d48:
    // 0x4b8d48: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4b8d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4b8d4c:
    // 0x4b8d4c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4b8d4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b8d50:
    // 0x4b8d50: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4b8d54:
    if (ctx->pc == 0x4B8D54u) {
        ctx->pc = 0x4B8D54u;
            // 0x4b8d54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4B8D58u;
        goto label_4b8d58;
    }
    ctx->pc = 0x4B8D50u;
    {
        const bool branch_taken_0x4b8d50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8d50) {
            ctx->pc = 0x4B8D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8D50u;
            // 0x4b8d54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B8D64u;
            goto label_4b8d64;
        }
    }
    ctx->pc = 0x4B8D58u;
label_4b8d58:
    // 0x4b8d58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b8d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b8d5c:
    // 0x4b8d5c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4b8d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4b8d60:
    // 0x4b8d60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b8d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b8d64:
    // 0x4b8d64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b8d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b8d68:
    // 0x4b8d68: 0x3e00008  jr          $ra
label_4b8d6c:
    if (ctx->pc == 0x4B8D6Cu) {
        ctx->pc = 0x4B8D6Cu;
            // 0x4b8d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4B8D70u;
        goto label_4b8d70;
    }
    ctx->pc = 0x4B8D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8D68u;
            // 0x4b8d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B8D70u;
label_4b8d70:
    // 0x4b8d70: 0x812d8a4  j           func_4B6290
label_4b8d74:
    if (ctx->pc == 0x4B8D74u) {
        ctx->pc = 0x4B8D74u;
            // 0x4b8d74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4B8D78u;
        goto label_4b8d78;
    }
    ctx->pc = 0x4B8D70u;
    ctx->pc = 0x4B8D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8D70u;
            // 0x4b8d74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B6290u;
    {
        auto targetFn = runtime->lookupFunction(0x4B6290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4B8D78u;
label_4b8d78:
    // 0x4b8d78: 0x0  nop
    ctx->pc = 0x4b8d78u;
    // NOP
label_4b8d7c:
    // 0x4b8d7c: 0x0  nop
    ctx->pc = 0x4b8d7cu;
    // NOP
label_4b8d80:
    // 0x4b8d80: 0x812e2a4  j           func_4B8A90
label_4b8d84:
    if (ctx->pc == 0x4B8D84u) {
        ctx->pc = 0x4B8D84u;
            // 0x4b8d84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4B8D88u;
        goto label_4b8d88;
    }
    ctx->pc = 0x4B8D80u;
    ctx->pc = 0x4B8D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8D80u;
            // 0x4b8d84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A90u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_4b8a90;
    ctx->pc = 0x4B8D88u;
label_4b8d88:
    // 0x4b8d88: 0x0  nop
    ctx->pc = 0x4b8d88u;
    // NOP
label_4b8d8c:
    // 0x4b8d8c: 0x0  nop
    ctx->pc = 0x4b8d8cu;
    // NOP
label_4b8d90:
    // 0x4b8d90: 0x812d94c  j           func_4B6530
label_4b8d94:
    if (ctx->pc == 0x4B8D94u) {
        ctx->pc = 0x4B8D94u;
            // 0x4b8d94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4B8D98u;
        goto label_4b8d98;
    }
    ctx->pc = 0x4B8D90u;
    ctx->pc = 0x4B8D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8D90u;
            // 0x4b8d94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B6530u;
    if (runtime->hasFunction(0x4B6530u)) {
        auto targetFn = runtime->lookupFunction(0x4B6530u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004B6530_0x4b6530(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4B8D98u;
label_4b8d98:
    // 0x4b8d98: 0x0  nop
    ctx->pc = 0x4b8d98u;
    // NOP
label_4b8d9c:
    // 0x4b8d9c: 0x0  nop
    ctx->pc = 0x4b8d9cu;
    // NOP
label_4b8da0:
    // 0x4b8da0: 0x812d90c  j           func_4B6430
label_4b8da4:
    if (ctx->pc == 0x4B8DA4u) {
        ctx->pc = 0x4B8DA4u;
            // 0x4b8da4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4B8DA8u;
        goto label_4b8da8;
    }
    ctx->pc = 0x4B8DA0u;
    ctx->pc = 0x4B8DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8DA0u;
            // 0x4b8da4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B6430u;
    {
        auto targetFn = runtime->lookupFunction(0x4B6430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4B8DA8u;
label_4b8da8:
    // 0x4b8da8: 0x0  nop
    ctx->pc = 0x4b8da8u;
    // NOP
label_4b8dac:
    // 0x4b8dac: 0x0  nop
    ctx->pc = 0x4b8dacu;
    // NOP
label_4b8db0:
    // 0x4b8db0: 0x812d6e4  j           func_4B5B90
label_4b8db4:
    if (ctx->pc == 0x4B8DB4u) {
        ctx->pc = 0x4B8DB4u;
            // 0x4b8db4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4B8DB8u;
        goto label_4b8db8;
    }
    ctx->pc = 0x4B8DB0u;
    ctx->pc = 0x4B8DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8DB0u;
            // 0x4b8db4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B5B90u;
    {
        auto targetFn = runtime->lookupFunction(0x4B5B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4B8DB8u;
label_4b8db8:
    // 0x4b8db8: 0x0  nop
    ctx->pc = 0x4b8db8u;
    // NOP
label_4b8dbc:
    // 0x4b8dbc: 0x0  nop
    ctx->pc = 0x4b8dbcu;
    // NOP
}
