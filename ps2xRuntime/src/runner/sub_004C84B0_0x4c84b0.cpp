#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C84B0
// Address: 0x4c84b0 - 0x4c92f0
void sub_004C84B0_0x4c84b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C84B0_0x4c84b0");
#endif

    switch (ctx->pc) {
        case 0x4c84b0u: goto label_4c84b0;
        case 0x4c84b4u: goto label_4c84b4;
        case 0x4c84b8u: goto label_4c84b8;
        case 0x4c84bcu: goto label_4c84bc;
        case 0x4c84c0u: goto label_4c84c0;
        case 0x4c84c4u: goto label_4c84c4;
        case 0x4c84c8u: goto label_4c84c8;
        case 0x4c84ccu: goto label_4c84cc;
        case 0x4c84d0u: goto label_4c84d0;
        case 0x4c84d4u: goto label_4c84d4;
        case 0x4c84d8u: goto label_4c84d8;
        case 0x4c84dcu: goto label_4c84dc;
        case 0x4c84e0u: goto label_4c84e0;
        case 0x4c84e4u: goto label_4c84e4;
        case 0x4c84e8u: goto label_4c84e8;
        case 0x4c84ecu: goto label_4c84ec;
        case 0x4c84f0u: goto label_4c84f0;
        case 0x4c84f4u: goto label_4c84f4;
        case 0x4c84f8u: goto label_4c84f8;
        case 0x4c84fcu: goto label_4c84fc;
        case 0x4c8500u: goto label_4c8500;
        case 0x4c8504u: goto label_4c8504;
        case 0x4c8508u: goto label_4c8508;
        case 0x4c850cu: goto label_4c850c;
        case 0x4c8510u: goto label_4c8510;
        case 0x4c8514u: goto label_4c8514;
        case 0x4c8518u: goto label_4c8518;
        case 0x4c851cu: goto label_4c851c;
        case 0x4c8520u: goto label_4c8520;
        case 0x4c8524u: goto label_4c8524;
        case 0x4c8528u: goto label_4c8528;
        case 0x4c852cu: goto label_4c852c;
        case 0x4c8530u: goto label_4c8530;
        case 0x4c8534u: goto label_4c8534;
        case 0x4c8538u: goto label_4c8538;
        case 0x4c853cu: goto label_4c853c;
        case 0x4c8540u: goto label_4c8540;
        case 0x4c8544u: goto label_4c8544;
        case 0x4c8548u: goto label_4c8548;
        case 0x4c854cu: goto label_4c854c;
        case 0x4c8550u: goto label_4c8550;
        case 0x4c8554u: goto label_4c8554;
        case 0x4c8558u: goto label_4c8558;
        case 0x4c855cu: goto label_4c855c;
        case 0x4c8560u: goto label_4c8560;
        case 0x4c8564u: goto label_4c8564;
        case 0x4c8568u: goto label_4c8568;
        case 0x4c856cu: goto label_4c856c;
        case 0x4c8570u: goto label_4c8570;
        case 0x4c8574u: goto label_4c8574;
        case 0x4c8578u: goto label_4c8578;
        case 0x4c857cu: goto label_4c857c;
        case 0x4c8580u: goto label_4c8580;
        case 0x4c8584u: goto label_4c8584;
        case 0x4c8588u: goto label_4c8588;
        case 0x4c858cu: goto label_4c858c;
        case 0x4c8590u: goto label_4c8590;
        case 0x4c8594u: goto label_4c8594;
        case 0x4c8598u: goto label_4c8598;
        case 0x4c859cu: goto label_4c859c;
        case 0x4c85a0u: goto label_4c85a0;
        case 0x4c85a4u: goto label_4c85a4;
        case 0x4c85a8u: goto label_4c85a8;
        case 0x4c85acu: goto label_4c85ac;
        case 0x4c85b0u: goto label_4c85b0;
        case 0x4c85b4u: goto label_4c85b4;
        case 0x4c85b8u: goto label_4c85b8;
        case 0x4c85bcu: goto label_4c85bc;
        case 0x4c85c0u: goto label_4c85c0;
        case 0x4c85c4u: goto label_4c85c4;
        case 0x4c85c8u: goto label_4c85c8;
        case 0x4c85ccu: goto label_4c85cc;
        case 0x4c85d0u: goto label_4c85d0;
        case 0x4c85d4u: goto label_4c85d4;
        case 0x4c85d8u: goto label_4c85d8;
        case 0x4c85dcu: goto label_4c85dc;
        case 0x4c85e0u: goto label_4c85e0;
        case 0x4c85e4u: goto label_4c85e4;
        case 0x4c85e8u: goto label_4c85e8;
        case 0x4c85ecu: goto label_4c85ec;
        case 0x4c85f0u: goto label_4c85f0;
        case 0x4c85f4u: goto label_4c85f4;
        case 0x4c85f8u: goto label_4c85f8;
        case 0x4c85fcu: goto label_4c85fc;
        case 0x4c8600u: goto label_4c8600;
        case 0x4c8604u: goto label_4c8604;
        case 0x4c8608u: goto label_4c8608;
        case 0x4c860cu: goto label_4c860c;
        case 0x4c8610u: goto label_4c8610;
        case 0x4c8614u: goto label_4c8614;
        case 0x4c8618u: goto label_4c8618;
        case 0x4c861cu: goto label_4c861c;
        case 0x4c8620u: goto label_4c8620;
        case 0x4c8624u: goto label_4c8624;
        case 0x4c8628u: goto label_4c8628;
        case 0x4c862cu: goto label_4c862c;
        case 0x4c8630u: goto label_4c8630;
        case 0x4c8634u: goto label_4c8634;
        case 0x4c8638u: goto label_4c8638;
        case 0x4c863cu: goto label_4c863c;
        case 0x4c8640u: goto label_4c8640;
        case 0x4c8644u: goto label_4c8644;
        case 0x4c8648u: goto label_4c8648;
        case 0x4c864cu: goto label_4c864c;
        case 0x4c8650u: goto label_4c8650;
        case 0x4c8654u: goto label_4c8654;
        case 0x4c8658u: goto label_4c8658;
        case 0x4c865cu: goto label_4c865c;
        case 0x4c8660u: goto label_4c8660;
        case 0x4c8664u: goto label_4c8664;
        case 0x4c8668u: goto label_4c8668;
        case 0x4c866cu: goto label_4c866c;
        case 0x4c8670u: goto label_4c8670;
        case 0x4c8674u: goto label_4c8674;
        case 0x4c8678u: goto label_4c8678;
        case 0x4c867cu: goto label_4c867c;
        case 0x4c8680u: goto label_4c8680;
        case 0x4c8684u: goto label_4c8684;
        case 0x4c8688u: goto label_4c8688;
        case 0x4c868cu: goto label_4c868c;
        case 0x4c8690u: goto label_4c8690;
        case 0x4c8694u: goto label_4c8694;
        case 0x4c8698u: goto label_4c8698;
        case 0x4c869cu: goto label_4c869c;
        case 0x4c86a0u: goto label_4c86a0;
        case 0x4c86a4u: goto label_4c86a4;
        case 0x4c86a8u: goto label_4c86a8;
        case 0x4c86acu: goto label_4c86ac;
        case 0x4c86b0u: goto label_4c86b0;
        case 0x4c86b4u: goto label_4c86b4;
        case 0x4c86b8u: goto label_4c86b8;
        case 0x4c86bcu: goto label_4c86bc;
        case 0x4c86c0u: goto label_4c86c0;
        case 0x4c86c4u: goto label_4c86c4;
        case 0x4c86c8u: goto label_4c86c8;
        case 0x4c86ccu: goto label_4c86cc;
        case 0x4c86d0u: goto label_4c86d0;
        case 0x4c86d4u: goto label_4c86d4;
        case 0x4c86d8u: goto label_4c86d8;
        case 0x4c86dcu: goto label_4c86dc;
        case 0x4c86e0u: goto label_4c86e0;
        case 0x4c86e4u: goto label_4c86e4;
        case 0x4c86e8u: goto label_4c86e8;
        case 0x4c86ecu: goto label_4c86ec;
        case 0x4c86f0u: goto label_4c86f0;
        case 0x4c86f4u: goto label_4c86f4;
        case 0x4c86f8u: goto label_4c86f8;
        case 0x4c86fcu: goto label_4c86fc;
        case 0x4c8700u: goto label_4c8700;
        case 0x4c8704u: goto label_4c8704;
        case 0x4c8708u: goto label_4c8708;
        case 0x4c870cu: goto label_4c870c;
        case 0x4c8710u: goto label_4c8710;
        case 0x4c8714u: goto label_4c8714;
        case 0x4c8718u: goto label_4c8718;
        case 0x4c871cu: goto label_4c871c;
        case 0x4c8720u: goto label_4c8720;
        case 0x4c8724u: goto label_4c8724;
        case 0x4c8728u: goto label_4c8728;
        case 0x4c872cu: goto label_4c872c;
        case 0x4c8730u: goto label_4c8730;
        case 0x4c8734u: goto label_4c8734;
        case 0x4c8738u: goto label_4c8738;
        case 0x4c873cu: goto label_4c873c;
        case 0x4c8740u: goto label_4c8740;
        case 0x4c8744u: goto label_4c8744;
        case 0x4c8748u: goto label_4c8748;
        case 0x4c874cu: goto label_4c874c;
        case 0x4c8750u: goto label_4c8750;
        case 0x4c8754u: goto label_4c8754;
        case 0x4c8758u: goto label_4c8758;
        case 0x4c875cu: goto label_4c875c;
        case 0x4c8760u: goto label_4c8760;
        case 0x4c8764u: goto label_4c8764;
        case 0x4c8768u: goto label_4c8768;
        case 0x4c876cu: goto label_4c876c;
        case 0x4c8770u: goto label_4c8770;
        case 0x4c8774u: goto label_4c8774;
        case 0x4c8778u: goto label_4c8778;
        case 0x4c877cu: goto label_4c877c;
        case 0x4c8780u: goto label_4c8780;
        case 0x4c8784u: goto label_4c8784;
        case 0x4c8788u: goto label_4c8788;
        case 0x4c878cu: goto label_4c878c;
        case 0x4c8790u: goto label_4c8790;
        case 0x4c8794u: goto label_4c8794;
        case 0x4c8798u: goto label_4c8798;
        case 0x4c879cu: goto label_4c879c;
        case 0x4c87a0u: goto label_4c87a0;
        case 0x4c87a4u: goto label_4c87a4;
        case 0x4c87a8u: goto label_4c87a8;
        case 0x4c87acu: goto label_4c87ac;
        case 0x4c87b0u: goto label_4c87b0;
        case 0x4c87b4u: goto label_4c87b4;
        case 0x4c87b8u: goto label_4c87b8;
        case 0x4c87bcu: goto label_4c87bc;
        case 0x4c87c0u: goto label_4c87c0;
        case 0x4c87c4u: goto label_4c87c4;
        case 0x4c87c8u: goto label_4c87c8;
        case 0x4c87ccu: goto label_4c87cc;
        case 0x4c87d0u: goto label_4c87d0;
        case 0x4c87d4u: goto label_4c87d4;
        case 0x4c87d8u: goto label_4c87d8;
        case 0x4c87dcu: goto label_4c87dc;
        case 0x4c87e0u: goto label_4c87e0;
        case 0x4c87e4u: goto label_4c87e4;
        case 0x4c87e8u: goto label_4c87e8;
        case 0x4c87ecu: goto label_4c87ec;
        case 0x4c87f0u: goto label_4c87f0;
        case 0x4c87f4u: goto label_4c87f4;
        case 0x4c87f8u: goto label_4c87f8;
        case 0x4c87fcu: goto label_4c87fc;
        case 0x4c8800u: goto label_4c8800;
        case 0x4c8804u: goto label_4c8804;
        case 0x4c8808u: goto label_4c8808;
        case 0x4c880cu: goto label_4c880c;
        case 0x4c8810u: goto label_4c8810;
        case 0x4c8814u: goto label_4c8814;
        case 0x4c8818u: goto label_4c8818;
        case 0x4c881cu: goto label_4c881c;
        case 0x4c8820u: goto label_4c8820;
        case 0x4c8824u: goto label_4c8824;
        case 0x4c8828u: goto label_4c8828;
        case 0x4c882cu: goto label_4c882c;
        case 0x4c8830u: goto label_4c8830;
        case 0x4c8834u: goto label_4c8834;
        case 0x4c8838u: goto label_4c8838;
        case 0x4c883cu: goto label_4c883c;
        case 0x4c8840u: goto label_4c8840;
        case 0x4c8844u: goto label_4c8844;
        case 0x4c8848u: goto label_4c8848;
        case 0x4c884cu: goto label_4c884c;
        case 0x4c8850u: goto label_4c8850;
        case 0x4c8854u: goto label_4c8854;
        case 0x4c8858u: goto label_4c8858;
        case 0x4c885cu: goto label_4c885c;
        case 0x4c8860u: goto label_4c8860;
        case 0x4c8864u: goto label_4c8864;
        case 0x4c8868u: goto label_4c8868;
        case 0x4c886cu: goto label_4c886c;
        case 0x4c8870u: goto label_4c8870;
        case 0x4c8874u: goto label_4c8874;
        case 0x4c8878u: goto label_4c8878;
        case 0x4c887cu: goto label_4c887c;
        case 0x4c8880u: goto label_4c8880;
        case 0x4c8884u: goto label_4c8884;
        case 0x4c8888u: goto label_4c8888;
        case 0x4c888cu: goto label_4c888c;
        case 0x4c8890u: goto label_4c8890;
        case 0x4c8894u: goto label_4c8894;
        case 0x4c8898u: goto label_4c8898;
        case 0x4c889cu: goto label_4c889c;
        case 0x4c88a0u: goto label_4c88a0;
        case 0x4c88a4u: goto label_4c88a4;
        case 0x4c88a8u: goto label_4c88a8;
        case 0x4c88acu: goto label_4c88ac;
        case 0x4c88b0u: goto label_4c88b0;
        case 0x4c88b4u: goto label_4c88b4;
        case 0x4c88b8u: goto label_4c88b8;
        case 0x4c88bcu: goto label_4c88bc;
        case 0x4c88c0u: goto label_4c88c0;
        case 0x4c88c4u: goto label_4c88c4;
        case 0x4c88c8u: goto label_4c88c8;
        case 0x4c88ccu: goto label_4c88cc;
        case 0x4c88d0u: goto label_4c88d0;
        case 0x4c88d4u: goto label_4c88d4;
        case 0x4c88d8u: goto label_4c88d8;
        case 0x4c88dcu: goto label_4c88dc;
        case 0x4c88e0u: goto label_4c88e0;
        case 0x4c88e4u: goto label_4c88e4;
        case 0x4c88e8u: goto label_4c88e8;
        case 0x4c88ecu: goto label_4c88ec;
        case 0x4c88f0u: goto label_4c88f0;
        case 0x4c88f4u: goto label_4c88f4;
        case 0x4c88f8u: goto label_4c88f8;
        case 0x4c88fcu: goto label_4c88fc;
        case 0x4c8900u: goto label_4c8900;
        case 0x4c8904u: goto label_4c8904;
        case 0x4c8908u: goto label_4c8908;
        case 0x4c890cu: goto label_4c890c;
        case 0x4c8910u: goto label_4c8910;
        case 0x4c8914u: goto label_4c8914;
        case 0x4c8918u: goto label_4c8918;
        case 0x4c891cu: goto label_4c891c;
        case 0x4c8920u: goto label_4c8920;
        case 0x4c8924u: goto label_4c8924;
        case 0x4c8928u: goto label_4c8928;
        case 0x4c892cu: goto label_4c892c;
        case 0x4c8930u: goto label_4c8930;
        case 0x4c8934u: goto label_4c8934;
        case 0x4c8938u: goto label_4c8938;
        case 0x4c893cu: goto label_4c893c;
        case 0x4c8940u: goto label_4c8940;
        case 0x4c8944u: goto label_4c8944;
        case 0x4c8948u: goto label_4c8948;
        case 0x4c894cu: goto label_4c894c;
        case 0x4c8950u: goto label_4c8950;
        case 0x4c8954u: goto label_4c8954;
        case 0x4c8958u: goto label_4c8958;
        case 0x4c895cu: goto label_4c895c;
        case 0x4c8960u: goto label_4c8960;
        case 0x4c8964u: goto label_4c8964;
        case 0x4c8968u: goto label_4c8968;
        case 0x4c896cu: goto label_4c896c;
        case 0x4c8970u: goto label_4c8970;
        case 0x4c8974u: goto label_4c8974;
        case 0x4c8978u: goto label_4c8978;
        case 0x4c897cu: goto label_4c897c;
        case 0x4c8980u: goto label_4c8980;
        case 0x4c8984u: goto label_4c8984;
        case 0x4c8988u: goto label_4c8988;
        case 0x4c898cu: goto label_4c898c;
        case 0x4c8990u: goto label_4c8990;
        case 0x4c8994u: goto label_4c8994;
        case 0x4c8998u: goto label_4c8998;
        case 0x4c899cu: goto label_4c899c;
        case 0x4c89a0u: goto label_4c89a0;
        case 0x4c89a4u: goto label_4c89a4;
        case 0x4c89a8u: goto label_4c89a8;
        case 0x4c89acu: goto label_4c89ac;
        case 0x4c89b0u: goto label_4c89b0;
        case 0x4c89b4u: goto label_4c89b4;
        case 0x4c89b8u: goto label_4c89b8;
        case 0x4c89bcu: goto label_4c89bc;
        case 0x4c89c0u: goto label_4c89c0;
        case 0x4c89c4u: goto label_4c89c4;
        case 0x4c89c8u: goto label_4c89c8;
        case 0x4c89ccu: goto label_4c89cc;
        case 0x4c89d0u: goto label_4c89d0;
        case 0x4c89d4u: goto label_4c89d4;
        case 0x4c89d8u: goto label_4c89d8;
        case 0x4c89dcu: goto label_4c89dc;
        case 0x4c89e0u: goto label_4c89e0;
        case 0x4c89e4u: goto label_4c89e4;
        case 0x4c89e8u: goto label_4c89e8;
        case 0x4c89ecu: goto label_4c89ec;
        case 0x4c89f0u: goto label_4c89f0;
        case 0x4c89f4u: goto label_4c89f4;
        case 0x4c89f8u: goto label_4c89f8;
        case 0x4c89fcu: goto label_4c89fc;
        case 0x4c8a00u: goto label_4c8a00;
        case 0x4c8a04u: goto label_4c8a04;
        case 0x4c8a08u: goto label_4c8a08;
        case 0x4c8a0cu: goto label_4c8a0c;
        case 0x4c8a10u: goto label_4c8a10;
        case 0x4c8a14u: goto label_4c8a14;
        case 0x4c8a18u: goto label_4c8a18;
        case 0x4c8a1cu: goto label_4c8a1c;
        case 0x4c8a20u: goto label_4c8a20;
        case 0x4c8a24u: goto label_4c8a24;
        case 0x4c8a28u: goto label_4c8a28;
        case 0x4c8a2cu: goto label_4c8a2c;
        case 0x4c8a30u: goto label_4c8a30;
        case 0x4c8a34u: goto label_4c8a34;
        case 0x4c8a38u: goto label_4c8a38;
        case 0x4c8a3cu: goto label_4c8a3c;
        case 0x4c8a40u: goto label_4c8a40;
        case 0x4c8a44u: goto label_4c8a44;
        case 0x4c8a48u: goto label_4c8a48;
        case 0x4c8a4cu: goto label_4c8a4c;
        case 0x4c8a50u: goto label_4c8a50;
        case 0x4c8a54u: goto label_4c8a54;
        case 0x4c8a58u: goto label_4c8a58;
        case 0x4c8a5cu: goto label_4c8a5c;
        case 0x4c8a60u: goto label_4c8a60;
        case 0x4c8a64u: goto label_4c8a64;
        case 0x4c8a68u: goto label_4c8a68;
        case 0x4c8a6cu: goto label_4c8a6c;
        case 0x4c8a70u: goto label_4c8a70;
        case 0x4c8a74u: goto label_4c8a74;
        case 0x4c8a78u: goto label_4c8a78;
        case 0x4c8a7cu: goto label_4c8a7c;
        case 0x4c8a80u: goto label_4c8a80;
        case 0x4c8a84u: goto label_4c8a84;
        case 0x4c8a88u: goto label_4c8a88;
        case 0x4c8a8cu: goto label_4c8a8c;
        case 0x4c8a90u: goto label_4c8a90;
        case 0x4c8a94u: goto label_4c8a94;
        case 0x4c8a98u: goto label_4c8a98;
        case 0x4c8a9cu: goto label_4c8a9c;
        case 0x4c8aa0u: goto label_4c8aa0;
        case 0x4c8aa4u: goto label_4c8aa4;
        case 0x4c8aa8u: goto label_4c8aa8;
        case 0x4c8aacu: goto label_4c8aac;
        case 0x4c8ab0u: goto label_4c8ab0;
        case 0x4c8ab4u: goto label_4c8ab4;
        case 0x4c8ab8u: goto label_4c8ab8;
        case 0x4c8abcu: goto label_4c8abc;
        case 0x4c8ac0u: goto label_4c8ac0;
        case 0x4c8ac4u: goto label_4c8ac4;
        case 0x4c8ac8u: goto label_4c8ac8;
        case 0x4c8accu: goto label_4c8acc;
        case 0x4c8ad0u: goto label_4c8ad0;
        case 0x4c8ad4u: goto label_4c8ad4;
        case 0x4c8ad8u: goto label_4c8ad8;
        case 0x4c8adcu: goto label_4c8adc;
        case 0x4c8ae0u: goto label_4c8ae0;
        case 0x4c8ae4u: goto label_4c8ae4;
        case 0x4c8ae8u: goto label_4c8ae8;
        case 0x4c8aecu: goto label_4c8aec;
        case 0x4c8af0u: goto label_4c8af0;
        case 0x4c8af4u: goto label_4c8af4;
        case 0x4c8af8u: goto label_4c8af8;
        case 0x4c8afcu: goto label_4c8afc;
        case 0x4c8b00u: goto label_4c8b00;
        case 0x4c8b04u: goto label_4c8b04;
        case 0x4c8b08u: goto label_4c8b08;
        case 0x4c8b0cu: goto label_4c8b0c;
        case 0x4c8b10u: goto label_4c8b10;
        case 0x4c8b14u: goto label_4c8b14;
        case 0x4c8b18u: goto label_4c8b18;
        case 0x4c8b1cu: goto label_4c8b1c;
        case 0x4c8b20u: goto label_4c8b20;
        case 0x4c8b24u: goto label_4c8b24;
        case 0x4c8b28u: goto label_4c8b28;
        case 0x4c8b2cu: goto label_4c8b2c;
        case 0x4c8b30u: goto label_4c8b30;
        case 0x4c8b34u: goto label_4c8b34;
        case 0x4c8b38u: goto label_4c8b38;
        case 0x4c8b3cu: goto label_4c8b3c;
        case 0x4c8b40u: goto label_4c8b40;
        case 0x4c8b44u: goto label_4c8b44;
        case 0x4c8b48u: goto label_4c8b48;
        case 0x4c8b4cu: goto label_4c8b4c;
        case 0x4c8b50u: goto label_4c8b50;
        case 0x4c8b54u: goto label_4c8b54;
        case 0x4c8b58u: goto label_4c8b58;
        case 0x4c8b5cu: goto label_4c8b5c;
        case 0x4c8b60u: goto label_4c8b60;
        case 0x4c8b64u: goto label_4c8b64;
        case 0x4c8b68u: goto label_4c8b68;
        case 0x4c8b6cu: goto label_4c8b6c;
        case 0x4c8b70u: goto label_4c8b70;
        case 0x4c8b74u: goto label_4c8b74;
        case 0x4c8b78u: goto label_4c8b78;
        case 0x4c8b7cu: goto label_4c8b7c;
        case 0x4c8b80u: goto label_4c8b80;
        case 0x4c8b84u: goto label_4c8b84;
        case 0x4c8b88u: goto label_4c8b88;
        case 0x4c8b8cu: goto label_4c8b8c;
        case 0x4c8b90u: goto label_4c8b90;
        case 0x4c8b94u: goto label_4c8b94;
        case 0x4c8b98u: goto label_4c8b98;
        case 0x4c8b9cu: goto label_4c8b9c;
        case 0x4c8ba0u: goto label_4c8ba0;
        case 0x4c8ba4u: goto label_4c8ba4;
        case 0x4c8ba8u: goto label_4c8ba8;
        case 0x4c8bacu: goto label_4c8bac;
        case 0x4c8bb0u: goto label_4c8bb0;
        case 0x4c8bb4u: goto label_4c8bb4;
        case 0x4c8bb8u: goto label_4c8bb8;
        case 0x4c8bbcu: goto label_4c8bbc;
        case 0x4c8bc0u: goto label_4c8bc0;
        case 0x4c8bc4u: goto label_4c8bc4;
        case 0x4c8bc8u: goto label_4c8bc8;
        case 0x4c8bccu: goto label_4c8bcc;
        case 0x4c8bd0u: goto label_4c8bd0;
        case 0x4c8bd4u: goto label_4c8bd4;
        case 0x4c8bd8u: goto label_4c8bd8;
        case 0x4c8bdcu: goto label_4c8bdc;
        case 0x4c8be0u: goto label_4c8be0;
        case 0x4c8be4u: goto label_4c8be4;
        case 0x4c8be8u: goto label_4c8be8;
        case 0x4c8becu: goto label_4c8bec;
        case 0x4c8bf0u: goto label_4c8bf0;
        case 0x4c8bf4u: goto label_4c8bf4;
        case 0x4c8bf8u: goto label_4c8bf8;
        case 0x4c8bfcu: goto label_4c8bfc;
        case 0x4c8c00u: goto label_4c8c00;
        case 0x4c8c04u: goto label_4c8c04;
        case 0x4c8c08u: goto label_4c8c08;
        case 0x4c8c0cu: goto label_4c8c0c;
        case 0x4c8c10u: goto label_4c8c10;
        case 0x4c8c14u: goto label_4c8c14;
        case 0x4c8c18u: goto label_4c8c18;
        case 0x4c8c1cu: goto label_4c8c1c;
        case 0x4c8c20u: goto label_4c8c20;
        case 0x4c8c24u: goto label_4c8c24;
        case 0x4c8c28u: goto label_4c8c28;
        case 0x4c8c2cu: goto label_4c8c2c;
        case 0x4c8c30u: goto label_4c8c30;
        case 0x4c8c34u: goto label_4c8c34;
        case 0x4c8c38u: goto label_4c8c38;
        case 0x4c8c3cu: goto label_4c8c3c;
        case 0x4c8c40u: goto label_4c8c40;
        case 0x4c8c44u: goto label_4c8c44;
        case 0x4c8c48u: goto label_4c8c48;
        case 0x4c8c4cu: goto label_4c8c4c;
        case 0x4c8c50u: goto label_4c8c50;
        case 0x4c8c54u: goto label_4c8c54;
        case 0x4c8c58u: goto label_4c8c58;
        case 0x4c8c5cu: goto label_4c8c5c;
        case 0x4c8c60u: goto label_4c8c60;
        case 0x4c8c64u: goto label_4c8c64;
        case 0x4c8c68u: goto label_4c8c68;
        case 0x4c8c6cu: goto label_4c8c6c;
        case 0x4c8c70u: goto label_4c8c70;
        case 0x4c8c74u: goto label_4c8c74;
        case 0x4c8c78u: goto label_4c8c78;
        case 0x4c8c7cu: goto label_4c8c7c;
        case 0x4c8c80u: goto label_4c8c80;
        case 0x4c8c84u: goto label_4c8c84;
        case 0x4c8c88u: goto label_4c8c88;
        case 0x4c8c8cu: goto label_4c8c8c;
        case 0x4c8c90u: goto label_4c8c90;
        case 0x4c8c94u: goto label_4c8c94;
        case 0x4c8c98u: goto label_4c8c98;
        case 0x4c8c9cu: goto label_4c8c9c;
        case 0x4c8ca0u: goto label_4c8ca0;
        case 0x4c8ca4u: goto label_4c8ca4;
        case 0x4c8ca8u: goto label_4c8ca8;
        case 0x4c8cacu: goto label_4c8cac;
        case 0x4c8cb0u: goto label_4c8cb0;
        case 0x4c8cb4u: goto label_4c8cb4;
        case 0x4c8cb8u: goto label_4c8cb8;
        case 0x4c8cbcu: goto label_4c8cbc;
        case 0x4c8cc0u: goto label_4c8cc0;
        case 0x4c8cc4u: goto label_4c8cc4;
        case 0x4c8cc8u: goto label_4c8cc8;
        case 0x4c8cccu: goto label_4c8ccc;
        case 0x4c8cd0u: goto label_4c8cd0;
        case 0x4c8cd4u: goto label_4c8cd4;
        case 0x4c8cd8u: goto label_4c8cd8;
        case 0x4c8cdcu: goto label_4c8cdc;
        case 0x4c8ce0u: goto label_4c8ce0;
        case 0x4c8ce4u: goto label_4c8ce4;
        case 0x4c8ce8u: goto label_4c8ce8;
        case 0x4c8cecu: goto label_4c8cec;
        case 0x4c8cf0u: goto label_4c8cf0;
        case 0x4c8cf4u: goto label_4c8cf4;
        case 0x4c8cf8u: goto label_4c8cf8;
        case 0x4c8cfcu: goto label_4c8cfc;
        case 0x4c8d00u: goto label_4c8d00;
        case 0x4c8d04u: goto label_4c8d04;
        case 0x4c8d08u: goto label_4c8d08;
        case 0x4c8d0cu: goto label_4c8d0c;
        case 0x4c8d10u: goto label_4c8d10;
        case 0x4c8d14u: goto label_4c8d14;
        case 0x4c8d18u: goto label_4c8d18;
        case 0x4c8d1cu: goto label_4c8d1c;
        case 0x4c8d20u: goto label_4c8d20;
        case 0x4c8d24u: goto label_4c8d24;
        case 0x4c8d28u: goto label_4c8d28;
        case 0x4c8d2cu: goto label_4c8d2c;
        case 0x4c8d30u: goto label_4c8d30;
        case 0x4c8d34u: goto label_4c8d34;
        case 0x4c8d38u: goto label_4c8d38;
        case 0x4c8d3cu: goto label_4c8d3c;
        case 0x4c8d40u: goto label_4c8d40;
        case 0x4c8d44u: goto label_4c8d44;
        case 0x4c8d48u: goto label_4c8d48;
        case 0x4c8d4cu: goto label_4c8d4c;
        case 0x4c8d50u: goto label_4c8d50;
        case 0x4c8d54u: goto label_4c8d54;
        case 0x4c8d58u: goto label_4c8d58;
        case 0x4c8d5cu: goto label_4c8d5c;
        case 0x4c8d60u: goto label_4c8d60;
        case 0x4c8d64u: goto label_4c8d64;
        case 0x4c8d68u: goto label_4c8d68;
        case 0x4c8d6cu: goto label_4c8d6c;
        case 0x4c8d70u: goto label_4c8d70;
        case 0x4c8d74u: goto label_4c8d74;
        case 0x4c8d78u: goto label_4c8d78;
        case 0x4c8d7cu: goto label_4c8d7c;
        case 0x4c8d80u: goto label_4c8d80;
        case 0x4c8d84u: goto label_4c8d84;
        case 0x4c8d88u: goto label_4c8d88;
        case 0x4c8d8cu: goto label_4c8d8c;
        case 0x4c8d90u: goto label_4c8d90;
        case 0x4c8d94u: goto label_4c8d94;
        case 0x4c8d98u: goto label_4c8d98;
        case 0x4c8d9cu: goto label_4c8d9c;
        case 0x4c8da0u: goto label_4c8da0;
        case 0x4c8da4u: goto label_4c8da4;
        case 0x4c8da8u: goto label_4c8da8;
        case 0x4c8dacu: goto label_4c8dac;
        case 0x4c8db0u: goto label_4c8db0;
        case 0x4c8db4u: goto label_4c8db4;
        case 0x4c8db8u: goto label_4c8db8;
        case 0x4c8dbcu: goto label_4c8dbc;
        case 0x4c8dc0u: goto label_4c8dc0;
        case 0x4c8dc4u: goto label_4c8dc4;
        case 0x4c8dc8u: goto label_4c8dc8;
        case 0x4c8dccu: goto label_4c8dcc;
        case 0x4c8dd0u: goto label_4c8dd0;
        case 0x4c8dd4u: goto label_4c8dd4;
        case 0x4c8dd8u: goto label_4c8dd8;
        case 0x4c8ddcu: goto label_4c8ddc;
        case 0x4c8de0u: goto label_4c8de0;
        case 0x4c8de4u: goto label_4c8de4;
        case 0x4c8de8u: goto label_4c8de8;
        case 0x4c8decu: goto label_4c8dec;
        case 0x4c8df0u: goto label_4c8df0;
        case 0x4c8df4u: goto label_4c8df4;
        case 0x4c8df8u: goto label_4c8df8;
        case 0x4c8dfcu: goto label_4c8dfc;
        case 0x4c8e00u: goto label_4c8e00;
        case 0x4c8e04u: goto label_4c8e04;
        case 0x4c8e08u: goto label_4c8e08;
        case 0x4c8e0cu: goto label_4c8e0c;
        case 0x4c8e10u: goto label_4c8e10;
        case 0x4c8e14u: goto label_4c8e14;
        case 0x4c8e18u: goto label_4c8e18;
        case 0x4c8e1cu: goto label_4c8e1c;
        case 0x4c8e20u: goto label_4c8e20;
        case 0x4c8e24u: goto label_4c8e24;
        case 0x4c8e28u: goto label_4c8e28;
        case 0x4c8e2cu: goto label_4c8e2c;
        case 0x4c8e30u: goto label_4c8e30;
        case 0x4c8e34u: goto label_4c8e34;
        case 0x4c8e38u: goto label_4c8e38;
        case 0x4c8e3cu: goto label_4c8e3c;
        case 0x4c8e40u: goto label_4c8e40;
        case 0x4c8e44u: goto label_4c8e44;
        case 0x4c8e48u: goto label_4c8e48;
        case 0x4c8e4cu: goto label_4c8e4c;
        case 0x4c8e50u: goto label_4c8e50;
        case 0x4c8e54u: goto label_4c8e54;
        case 0x4c8e58u: goto label_4c8e58;
        case 0x4c8e5cu: goto label_4c8e5c;
        case 0x4c8e60u: goto label_4c8e60;
        case 0x4c8e64u: goto label_4c8e64;
        case 0x4c8e68u: goto label_4c8e68;
        case 0x4c8e6cu: goto label_4c8e6c;
        case 0x4c8e70u: goto label_4c8e70;
        case 0x4c8e74u: goto label_4c8e74;
        case 0x4c8e78u: goto label_4c8e78;
        case 0x4c8e7cu: goto label_4c8e7c;
        case 0x4c8e80u: goto label_4c8e80;
        case 0x4c8e84u: goto label_4c8e84;
        case 0x4c8e88u: goto label_4c8e88;
        case 0x4c8e8cu: goto label_4c8e8c;
        case 0x4c8e90u: goto label_4c8e90;
        case 0x4c8e94u: goto label_4c8e94;
        case 0x4c8e98u: goto label_4c8e98;
        case 0x4c8e9cu: goto label_4c8e9c;
        case 0x4c8ea0u: goto label_4c8ea0;
        case 0x4c8ea4u: goto label_4c8ea4;
        case 0x4c8ea8u: goto label_4c8ea8;
        case 0x4c8eacu: goto label_4c8eac;
        case 0x4c8eb0u: goto label_4c8eb0;
        case 0x4c8eb4u: goto label_4c8eb4;
        case 0x4c8eb8u: goto label_4c8eb8;
        case 0x4c8ebcu: goto label_4c8ebc;
        case 0x4c8ec0u: goto label_4c8ec0;
        case 0x4c8ec4u: goto label_4c8ec4;
        case 0x4c8ec8u: goto label_4c8ec8;
        case 0x4c8eccu: goto label_4c8ecc;
        case 0x4c8ed0u: goto label_4c8ed0;
        case 0x4c8ed4u: goto label_4c8ed4;
        case 0x4c8ed8u: goto label_4c8ed8;
        case 0x4c8edcu: goto label_4c8edc;
        case 0x4c8ee0u: goto label_4c8ee0;
        case 0x4c8ee4u: goto label_4c8ee4;
        case 0x4c8ee8u: goto label_4c8ee8;
        case 0x4c8eecu: goto label_4c8eec;
        case 0x4c8ef0u: goto label_4c8ef0;
        case 0x4c8ef4u: goto label_4c8ef4;
        case 0x4c8ef8u: goto label_4c8ef8;
        case 0x4c8efcu: goto label_4c8efc;
        case 0x4c8f00u: goto label_4c8f00;
        case 0x4c8f04u: goto label_4c8f04;
        case 0x4c8f08u: goto label_4c8f08;
        case 0x4c8f0cu: goto label_4c8f0c;
        case 0x4c8f10u: goto label_4c8f10;
        case 0x4c8f14u: goto label_4c8f14;
        case 0x4c8f18u: goto label_4c8f18;
        case 0x4c8f1cu: goto label_4c8f1c;
        case 0x4c8f20u: goto label_4c8f20;
        case 0x4c8f24u: goto label_4c8f24;
        case 0x4c8f28u: goto label_4c8f28;
        case 0x4c8f2cu: goto label_4c8f2c;
        case 0x4c8f30u: goto label_4c8f30;
        case 0x4c8f34u: goto label_4c8f34;
        case 0x4c8f38u: goto label_4c8f38;
        case 0x4c8f3cu: goto label_4c8f3c;
        case 0x4c8f40u: goto label_4c8f40;
        case 0x4c8f44u: goto label_4c8f44;
        case 0x4c8f48u: goto label_4c8f48;
        case 0x4c8f4cu: goto label_4c8f4c;
        case 0x4c8f50u: goto label_4c8f50;
        case 0x4c8f54u: goto label_4c8f54;
        case 0x4c8f58u: goto label_4c8f58;
        case 0x4c8f5cu: goto label_4c8f5c;
        case 0x4c8f60u: goto label_4c8f60;
        case 0x4c8f64u: goto label_4c8f64;
        case 0x4c8f68u: goto label_4c8f68;
        case 0x4c8f6cu: goto label_4c8f6c;
        case 0x4c8f70u: goto label_4c8f70;
        case 0x4c8f74u: goto label_4c8f74;
        case 0x4c8f78u: goto label_4c8f78;
        case 0x4c8f7cu: goto label_4c8f7c;
        case 0x4c8f80u: goto label_4c8f80;
        case 0x4c8f84u: goto label_4c8f84;
        case 0x4c8f88u: goto label_4c8f88;
        case 0x4c8f8cu: goto label_4c8f8c;
        case 0x4c8f90u: goto label_4c8f90;
        case 0x4c8f94u: goto label_4c8f94;
        case 0x4c8f98u: goto label_4c8f98;
        case 0x4c8f9cu: goto label_4c8f9c;
        case 0x4c8fa0u: goto label_4c8fa0;
        case 0x4c8fa4u: goto label_4c8fa4;
        case 0x4c8fa8u: goto label_4c8fa8;
        case 0x4c8facu: goto label_4c8fac;
        case 0x4c8fb0u: goto label_4c8fb0;
        case 0x4c8fb4u: goto label_4c8fb4;
        case 0x4c8fb8u: goto label_4c8fb8;
        case 0x4c8fbcu: goto label_4c8fbc;
        case 0x4c8fc0u: goto label_4c8fc0;
        case 0x4c8fc4u: goto label_4c8fc4;
        case 0x4c8fc8u: goto label_4c8fc8;
        case 0x4c8fccu: goto label_4c8fcc;
        case 0x4c8fd0u: goto label_4c8fd0;
        case 0x4c8fd4u: goto label_4c8fd4;
        case 0x4c8fd8u: goto label_4c8fd8;
        case 0x4c8fdcu: goto label_4c8fdc;
        case 0x4c8fe0u: goto label_4c8fe0;
        case 0x4c8fe4u: goto label_4c8fe4;
        case 0x4c8fe8u: goto label_4c8fe8;
        case 0x4c8fecu: goto label_4c8fec;
        case 0x4c8ff0u: goto label_4c8ff0;
        case 0x4c8ff4u: goto label_4c8ff4;
        case 0x4c8ff8u: goto label_4c8ff8;
        case 0x4c8ffcu: goto label_4c8ffc;
        case 0x4c9000u: goto label_4c9000;
        case 0x4c9004u: goto label_4c9004;
        case 0x4c9008u: goto label_4c9008;
        case 0x4c900cu: goto label_4c900c;
        case 0x4c9010u: goto label_4c9010;
        case 0x4c9014u: goto label_4c9014;
        case 0x4c9018u: goto label_4c9018;
        case 0x4c901cu: goto label_4c901c;
        case 0x4c9020u: goto label_4c9020;
        case 0x4c9024u: goto label_4c9024;
        case 0x4c9028u: goto label_4c9028;
        case 0x4c902cu: goto label_4c902c;
        case 0x4c9030u: goto label_4c9030;
        case 0x4c9034u: goto label_4c9034;
        case 0x4c9038u: goto label_4c9038;
        case 0x4c903cu: goto label_4c903c;
        case 0x4c9040u: goto label_4c9040;
        case 0x4c9044u: goto label_4c9044;
        case 0x4c9048u: goto label_4c9048;
        case 0x4c904cu: goto label_4c904c;
        case 0x4c9050u: goto label_4c9050;
        case 0x4c9054u: goto label_4c9054;
        case 0x4c9058u: goto label_4c9058;
        case 0x4c905cu: goto label_4c905c;
        case 0x4c9060u: goto label_4c9060;
        case 0x4c9064u: goto label_4c9064;
        case 0x4c9068u: goto label_4c9068;
        case 0x4c906cu: goto label_4c906c;
        case 0x4c9070u: goto label_4c9070;
        case 0x4c9074u: goto label_4c9074;
        case 0x4c9078u: goto label_4c9078;
        case 0x4c907cu: goto label_4c907c;
        case 0x4c9080u: goto label_4c9080;
        case 0x4c9084u: goto label_4c9084;
        case 0x4c9088u: goto label_4c9088;
        case 0x4c908cu: goto label_4c908c;
        case 0x4c9090u: goto label_4c9090;
        case 0x4c9094u: goto label_4c9094;
        case 0x4c9098u: goto label_4c9098;
        case 0x4c909cu: goto label_4c909c;
        case 0x4c90a0u: goto label_4c90a0;
        case 0x4c90a4u: goto label_4c90a4;
        case 0x4c90a8u: goto label_4c90a8;
        case 0x4c90acu: goto label_4c90ac;
        case 0x4c90b0u: goto label_4c90b0;
        case 0x4c90b4u: goto label_4c90b4;
        case 0x4c90b8u: goto label_4c90b8;
        case 0x4c90bcu: goto label_4c90bc;
        case 0x4c90c0u: goto label_4c90c0;
        case 0x4c90c4u: goto label_4c90c4;
        case 0x4c90c8u: goto label_4c90c8;
        case 0x4c90ccu: goto label_4c90cc;
        case 0x4c90d0u: goto label_4c90d0;
        case 0x4c90d4u: goto label_4c90d4;
        case 0x4c90d8u: goto label_4c90d8;
        case 0x4c90dcu: goto label_4c90dc;
        case 0x4c90e0u: goto label_4c90e0;
        case 0x4c90e4u: goto label_4c90e4;
        case 0x4c90e8u: goto label_4c90e8;
        case 0x4c90ecu: goto label_4c90ec;
        case 0x4c90f0u: goto label_4c90f0;
        case 0x4c90f4u: goto label_4c90f4;
        case 0x4c90f8u: goto label_4c90f8;
        case 0x4c90fcu: goto label_4c90fc;
        case 0x4c9100u: goto label_4c9100;
        case 0x4c9104u: goto label_4c9104;
        case 0x4c9108u: goto label_4c9108;
        case 0x4c910cu: goto label_4c910c;
        case 0x4c9110u: goto label_4c9110;
        case 0x4c9114u: goto label_4c9114;
        case 0x4c9118u: goto label_4c9118;
        case 0x4c911cu: goto label_4c911c;
        case 0x4c9120u: goto label_4c9120;
        case 0x4c9124u: goto label_4c9124;
        case 0x4c9128u: goto label_4c9128;
        case 0x4c912cu: goto label_4c912c;
        case 0x4c9130u: goto label_4c9130;
        case 0x4c9134u: goto label_4c9134;
        case 0x4c9138u: goto label_4c9138;
        case 0x4c913cu: goto label_4c913c;
        case 0x4c9140u: goto label_4c9140;
        case 0x4c9144u: goto label_4c9144;
        case 0x4c9148u: goto label_4c9148;
        case 0x4c914cu: goto label_4c914c;
        case 0x4c9150u: goto label_4c9150;
        case 0x4c9154u: goto label_4c9154;
        case 0x4c9158u: goto label_4c9158;
        case 0x4c915cu: goto label_4c915c;
        case 0x4c9160u: goto label_4c9160;
        case 0x4c9164u: goto label_4c9164;
        case 0x4c9168u: goto label_4c9168;
        case 0x4c916cu: goto label_4c916c;
        case 0x4c9170u: goto label_4c9170;
        case 0x4c9174u: goto label_4c9174;
        case 0x4c9178u: goto label_4c9178;
        case 0x4c917cu: goto label_4c917c;
        case 0x4c9180u: goto label_4c9180;
        case 0x4c9184u: goto label_4c9184;
        case 0x4c9188u: goto label_4c9188;
        case 0x4c918cu: goto label_4c918c;
        case 0x4c9190u: goto label_4c9190;
        case 0x4c9194u: goto label_4c9194;
        case 0x4c9198u: goto label_4c9198;
        case 0x4c919cu: goto label_4c919c;
        case 0x4c91a0u: goto label_4c91a0;
        case 0x4c91a4u: goto label_4c91a4;
        case 0x4c91a8u: goto label_4c91a8;
        case 0x4c91acu: goto label_4c91ac;
        case 0x4c91b0u: goto label_4c91b0;
        case 0x4c91b4u: goto label_4c91b4;
        case 0x4c91b8u: goto label_4c91b8;
        case 0x4c91bcu: goto label_4c91bc;
        case 0x4c91c0u: goto label_4c91c0;
        case 0x4c91c4u: goto label_4c91c4;
        case 0x4c91c8u: goto label_4c91c8;
        case 0x4c91ccu: goto label_4c91cc;
        case 0x4c91d0u: goto label_4c91d0;
        case 0x4c91d4u: goto label_4c91d4;
        case 0x4c91d8u: goto label_4c91d8;
        case 0x4c91dcu: goto label_4c91dc;
        case 0x4c91e0u: goto label_4c91e0;
        case 0x4c91e4u: goto label_4c91e4;
        case 0x4c91e8u: goto label_4c91e8;
        case 0x4c91ecu: goto label_4c91ec;
        case 0x4c91f0u: goto label_4c91f0;
        case 0x4c91f4u: goto label_4c91f4;
        case 0x4c91f8u: goto label_4c91f8;
        case 0x4c91fcu: goto label_4c91fc;
        case 0x4c9200u: goto label_4c9200;
        case 0x4c9204u: goto label_4c9204;
        case 0x4c9208u: goto label_4c9208;
        case 0x4c920cu: goto label_4c920c;
        case 0x4c9210u: goto label_4c9210;
        case 0x4c9214u: goto label_4c9214;
        case 0x4c9218u: goto label_4c9218;
        case 0x4c921cu: goto label_4c921c;
        case 0x4c9220u: goto label_4c9220;
        case 0x4c9224u: goto label_4c9224;
        case 0x4c9228u: goto label_4c9228;
        case 0x4c922cu: goto label_4c922c;
        case 0x4c9230u: goto label_4c9230;
        case 0x4c9234u: goto label_4c9234;
        case 0x4c9238u: goto label_4c9238;
        case 0x4c923cu: goto label_4c923c;
        case 0x4c9240u: goto label_4c9240;
        case 0x4c9244u: goto label_4c9244;
        case 0x4c9248u: goto label_4c9248;
        case 0x4c924cu: goto label_4c924c;
        case 0x4c9250u: goto label_4c9250;
        case 0x4c9254u: goto label_4c9254;
        case 0x4c9258u: goto label_4c9258;
        case 0x4c925cu: goto label_4c925c;
        case 0x4c9260u: goto label_4c9260;
        case 0x4c9264u: goto label_4c9264;
        case 0x4c9268u: goto label_4c9268;
        case 0x4c926cu: goto label_4c926c;
        case 0x4c9270u: goto label_4c9270;
        case 0x4c9274u: goto label_4c9274;
        case 0x4c9278u: goto label_4c9278;
        case 0x4c927cu: goto label_4c927c;
        case 0x4c9280u: goto label_4c9280;
        case 0x4c9284u: goto label_4c9284;
        case 0x4c9288u: goto label_4c9288;
        case 0x4c928cu: goto label_4c928c;
        case 0x4c9290u: goto label_4c9290;
        case 0x4c9294u: goto label_4c9294;
        case 0x4c9298u: goto label_4c9298;
        case 0x4c929cu: goto label_4c929c;
        case 0x4c92a0u: goto label_4c92a0;
        case 0x4c92a4u: goto label_4c92a4;
        case 0x4c92a8u: goto label_4c92a8;
        case 0x4c92acu: goto label_4c92ac;
        case 0x4c92b0u: goto label_4c92b0;
        case 0x4c92b4u: goto label_4c92b4;
        case 0x4c92b8u: goto label_4c92b8;
        case 0x4c92bcu: goto label_4c92bc;
        case 0x4c92c0u: goto label_4c92c0;
        case 0x4c92c4u: goto label_4c92c4;
        case 0x4c92c8u: goto label_4c92c8;
        case 0x4c92ccu: goto label_4c92cc;
        case 0x4c92d0u: goto label_4c92d0;
        case 0x4c92d4u: goto label_4c92d4;
        case 0x4c92d8u: goto label_4c92d8;
        case 0x4c92dcu: goto label_4c92dc;
        case 0x4c92e0u: goto label_4c92e0;
        case 0x4c92e4u: goto label_4c92e4;
        case 0x4c92e8u: goto label_4c92e8;
        case 0x4c92ecu: goto label_4c92ec;
        default: break;
    }

    ctx->pc = 0x4c84b0u;

label_4c84b0:
    // 0x4c84b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c84b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4c84b4:
    // 0x4c84b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4c84b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c84b8:
    // 0x4c84b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4c84b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4c84bc:
    // 0x4c84bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c84bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c84c0:
    // 0x4c84c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c84c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c84c4:
    // 0x4c84c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4c84c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c84c8:
    // 0x4c84c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c84c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c84cc:
    // 0x4c84cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c84ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c84d0:
    // 0x4c84d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4c84d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c84d4:
    // 0x4c84d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4c84d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4c84d8:
    // 0x4c84d8: 0xc10ca68  jal         func_4329A0
label_4c84dc:
    if (ctx->pc == 0x4C84DCu) {
        ctx->pc = 0x4C84DCu;
            // 0x4c84dc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4C84E0u;
        goto label_4c84e0;
    }
    ctx->pc = 0x4C84D8u;
    SET_GPR_U32(ctx, 31, 0x4C84E0u);
    ctx->pc = 0x4C84DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C84D8u;
            // 0x4c84dc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C84E0u; }
        if (ctx->pc != 0x4C84E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C84E0u; }
        if (ctx->pc != 0x4C84E0u) { return; }
    }
    ctx->pc = 0x4C84E0u;
label_4c84e0:
    // 0x4c84e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c84e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4c84e4:
    // 0x4c84e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c84e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c84e8:
    // 0x4c84e8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4c84e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4c84ec:
    // 0x4c84ec: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4c84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4c84f0:
    // 0x4c84f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4c84f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4c84f4:
    // 0x4c84f4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4c84f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4c84f8:
    // 0x4c84f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4c84f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4c84fc:
    // 0x4c84fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4c84fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c8500:
    // 0x4c8500: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4c8500u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4c8504:
    // 0x4c8504: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c8504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4c8508:
    // 0x4c8508: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4c8508u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4c850c:
    // 0x4c850c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4c850cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4c8510:
    // 0x4c8510: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4c8510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4c8514:
    // 0x4c8514: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4c8514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4c8518:
    // 0x4c8518: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4c8518u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4c851c:
    // 0x4c851c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4c851cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4c8520:
    // 0x4c8520: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4c8520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4c8524:
    // 0x4c8524: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4c8524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4c8528:
    // 0x4c8528: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4c8528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4c852c:
    // 0x4c852c: 0xc0582cc  jal         func_160B30
label_4c8530:
    if (ctx->pc == 0x4C8530u) {
        ctx->pc = 0x4C8530u;
            // 0x4c8530: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4C8534u;
        goto label_4c8534;
    }
    ctx->pc = 0x4C852Cu;
    SET_GPR_U32(ctx, 31, 0x4C8534u);
    ctx->pc = 0x4C8530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C852Cu;
            // 0x4c8530: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8534u; }
        if (ctx->pc != 0x4C8534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8534u; }
        if (ctx->pc != 0x4C8534u) { return; }
    }
    ctx->pc = 0x4C8534u;
label_4c8534:
    // 0x4c8534: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c8534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c8538:
    // 0x4c8538: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4c8538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4c853c:
    // 0x4c853c: 0x24631930  addiu       $v1, $v1, 0x1930
    ctx->pc = 0x4c853cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6448));
label_4c8540:
    // 0x4c8540: 0x2444ff90  addiu       $a0, $v0, -0x70
    ctx->pc = 0x4c8540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
label_4c8544:
    // 0x4c8544: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4c8544u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4c8548:
    // 0x4c8548: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c8548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4c854c:
    // 0x4c854c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c854cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c8550:
    // 0x4c8550: 0xac44aa08  sw          $a0, -0x55F8($v0)
    ctx->pc = 0x4c8550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945288), GPR_U32(ctx, 4));
label_4c8554:
    // 0x4c8554: 0x24631940  addiu       $v1, $v1, 0x1940
    ctx->pc = 0x4c8554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6464));
label_4c8558:
    // 0x4c8558: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c8558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c855c:
    // 0x4c855c: 0x24421978  addiu       $v0, $v0, 0x1978
    ctx->pc = 0x4c855cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6520));
label_4c8560:
    // 0x4c8560: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4c8560u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4c8564:
    // 0x4c8564: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4c8564u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4c8568:
    // 0x4c8568: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4c8568u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4c856c:
    // 0x4c856c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4c856cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4c8570:
    // 0x4c8570: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4c8570u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4c8574:
    // 0x4c8574: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4c8574u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4c8578:
    // 0x4c8578: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4c8578u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4c857c:
    // 0x4c857c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4c857cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4c8580:
    // 0x4c8580: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4c8580u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4c8584:
    // 0x4c8584: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4c8584u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4c8588:
    // 0x4c8588: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4c8588u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4c858c:
    // 0x4c858c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4c858cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4c8590:
    // 0x4c8590: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4c8590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4c8594:
    // 0x4c8594: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_4c8598:
    if (ctx->pc == 0x4C8598u) {
        ctx->pc = 0x4C859Cu;
        goto label_4c859c;
    }
    ctx->pc = 0x4C8594u;
    {
        const bool branch_taken_0x4c8594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c8594) {
            ctx->pc = 0x4C8628u;
            goto label_4c8628;
        }
    }
    ctx->pc = 0x4C859Cu;
label_4c859c:
    // 0x4c859c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x4c859cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_4c85a0:
    // 0x4c85a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4c85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4c85a4:
    // 0x4c85a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4c85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4c85a8:
    // 0x4c85a8: 0xc040138  jal         func_1004E0
label_4c85ac:
    if (ctx->pc == 0x4C85ACu) {
        ctx->pc = 0x4C85ACu;
            // 0x4c85ac: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4C85B0u;
        goto label_4c85b0;
    }
    ctx->pc = 0x4C85A8u;
    SET_GPR_U32(ctx, 31, 0x4C85B0u);
    ctx->pc = 0x4C85ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C85A8u;
            // 0x4c85ac: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C85B0u; }
        if (ctx->pc != 0x4C85B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C85B0u; }
        if (ctx->pc != 0x4C85B0u) { return; }
    }
    ctx->pc = 0x4C85B0u;
label_4c85b0:
    // 0x4c85b0: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4c85b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4c85b4:
    // 0x4c85b4: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x4c85b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
label_4c85b8:
    // 0x4c85b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c85b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c85bc:
    // 0x4c85bc: 0x24a58650  addiu       $a1, $a1, -0x79B0
    ctx->pc = 0x4c85bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936144));
label_4c85c0:
    // 0x4c85c0: 0x24c67b90  addiu       $a2, $a2, 0x7B90
    ctx->pc = 0x4c85c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31632));
label_4c85c4:
    // 0x4c85c4: 0x24070110  addiu       $a3, $zero, 0x110
    ctx->pc = 0x4c85c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_4c85c8:
    // 0x4c85c8: 0xc040840  jal         func_102100
label_4c85cc:
    if (ctx->pc == 0x4C85CCu) {
        ctx->pc = 0x4C85CCu;
            // 0x4c85cc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C85D0u;
        goto label_4c85d0;
    }
    ctx->pc = 0x4C85C8u;
    SET_GPR_U32(ctx, 31, 0x4C85D0u);
    ctx->pc = 0x4C85CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C85C8u;
            // 0x4c85cc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C85D0u; }
        if (ctx->pc != 0x4C85D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C85D0u; }
        if (ctx->pc != 0x4C85D0u) { return; }
    }
    ctx->pc = 0x4C85D0u;
label_4c85d0:
    // 0x4c85d0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4c85d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4c85d4:
    // 0x4c85d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4c85d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c85d8:
    // 0x4c85d8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4c85d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4c85dc:
    // 0x4c85dc: 0xc0788fc  jal         func_1E23F0
label_4c85e0:
    if (ctx->pc == 0x4C85E0u) {
        ctx->pc = 0x4C85E0u;
            // 0x4c85e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C85E4u;
        goto label_4c85e4;
    }
    ctx->pc = 0x4C85DCu;
    SET_GPR_U32(ctx, 31, 0x4C85E4u);
    ctx->pc = 0x4C85E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C85DCu;
            // 0x4c85e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C85E4u; }
        if (ctx->pc != 0x4C85E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C85E4u; }
        if (ctx->pc != 0x4C85E4u) { return; }
    }
    ctx->pc = 0x4C85E4u;
label_4c85e4:
    // 0x4c85e4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4c85e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4c85e8:
    // 0x4c85e8: 0xc0788fc  jal         func_1E23F0
label_4c85ec:
    if (ctx->pc == 0x4C85ECu) {
        ctx->pc = 0x4C85ECu;
            // 0x4c85ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C85F0u;
        goto label_4c85f0;
    }
    ctx->pc = 0x4C85E8u;
    SET_GPR_U32(ctx, 31, 0x4C85F0u);
    ctx->pc = 0x4C85ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C85E8u;
            // 0x4c85ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C85F0u; }
        if (ctx->pc != 0x4C85F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C85F0u; }
        if (ctx->pc != 0x4C85F0u) { return; }
    }
    ctx->pc = 0x4C85F0u;
label_4c85f0:
    // 0x4c85f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4c85f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c85f4:
    // 0x4c85f4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4c85f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4c85f8:
    // 0x4c85f8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4c85f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4c85fc:
    // 0x4c85fc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4c85fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4c8600:
    // 0x4c8600: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c8600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c8604:
    // 0x4c8604: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4c8604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4c8608:
    // 0x4c8608: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4c8608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4c860c:
    // 0x4c860c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c860cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c8610:
    // 0x4c8610: 0xc0a997c  jal         func_2A65F0
label_4c8614:
    if (ctx->pc == 0x4C8614u) {
        ctx->pc = 0x4C8614u;
            // 0x4c8614: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4C8618u;
        goto label_4c8618;
    }
    ctx->pc = 0x4C8610u;
    SET_GPR_U32(ctx, 31, 0x4C8618u);
    ctx->pc = 0x4C8614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8610u;
            // 0x4c8614: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8618u; }
        if (ctx->pc != 0x4C8618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8618u; }
        if (ctx->pc != 0x4C8618u) { return; }
    }
    ctx->pc = 0x4C8618u;
label_4c8618:
    // 0x4c8618: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4c8618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4c861c:
    // 0x4c861c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4c861cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4c8620:
    // 0x4c8620: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4c8624:
    if (ctx->pc == 0x4C8624u) {
        ctx->pc = 0x4C8624u;
            // 0x4c8624: 0x26520110  addiu       $s2, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->pc = 0x4C8628u;
        goto label_4c8628;
    }
    ctx->pc = 0x4C8620u;
    {
        const bool branch_taken_0x4c8620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C8624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8620u;
            // 0x4c8624: 0x26520110  addiu       $s2, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8620) {
            ctx->pc = 0x4C85F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c85f4;
        }
    }
    ctx->pc = 0x4C8628u;
label_4c8628:
    // 0x4c8628: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4c8628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c862c:
    // 0x4c862c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c862cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4c8630:
    // 0x4c8630: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c8630u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c8634:
    // 0x4c8634: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c8634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c8638:
    // 0x4c8638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c8638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c863c:
    // 0x4c863c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c863cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c8640:
    // 0x4c8640: 0x3e00008  jr          $ra
label_4c8644:
    if (ctx->pc == 0x4C8644u) {
        ctx->pc = 0x4C8644u;
            // 0x4c8644: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4C8648u;
        goto label_4c8648;
    }
    ctx->pc = 0x4C8640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C8644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8640u;
            // 0x4c8644: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C8648u;
label_4c8648:
    // 0x4c8648: 0x0  nop
    ctx->pc = 0x4c8648u;
    // NOP
label_4c864c:
    // 0x4c864c: 0x0  nop
    ctx->pc = 0x4c864cu;
    // NOP
label_4c8650:
    // 0x4c8650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c8650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c8654:
    // 0x4c8654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c8654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c8658:
    // 0x4c8658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c8658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c865c:
    // 0x4c865c: 0xc0aeebc  jal         func_2BBAF0
label_4c8660:
    if (ctx->pc == 0x4C8660u) {
        ctx->pc = 0x4C8660u;
            // 0x4c8660: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C8664u;
        goto label_4c8664;
    }
    ctx->pc = 0x4C865Cu;
    SET_GPR_U32(ctx, 31, 0x4C8664u);
    ctx->pc = 0x4C8660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C865Cu;
            // 0x4c8660: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8664u; }
        if (ctx->pc != 0x4C8664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8664u; }
        if (ctx->pc != 0x4C8664u) { return; }
    }
    ctx->pc = 0x4C8664u;
label_4c8664:
    // 0x4c8664: 0xc0aeeb4  jal         func_2BBAD0
label_4c8668:
    if (ctx->pc == 0x4C8668u) {
        ctx->pc = 0x4C8668u;
            // 0x4c8668: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x4C866Cu;
        goto label_4c866c;
    }
    ctx->pc = 0x4C8664u;
    SET_GPR_U32(ctx, 31, 0x4C866Cu);
    ctx->pc = 0x4C8668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8664u;
            // 0x4c8668: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C866Cu; }
        if (ctx->pc != 0x4C866Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C866Cu; }
        if (ctx->pc != 0x4C866Cu) { return; }
    }
    ctx->pc = 0x4C866Cu;
label_4c866c:
    // 0x4c866c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c866cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4c8670:
    // 0x4c8670: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c8670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c8674:
    // 0x4c8674: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4c8674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4c8678:
    // 0x4c8678: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4c8678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4c867c:
    // 0x4c867c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c867cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c8680:
    // 0x4c8680: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4c8680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4c8684:
    // 0x4c8684: 0xc0aeea4  jal         func_2BBA90
label_4c8688:
    if (ctx->pc == 0x4C8688u) {
        ctx->pc = 0x4C8688u;
            // 0x4c8688: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x4C868Cu;
        goto label_4c868c;
    }
    ctx->pc = 0x4C8684u;
    SET_GPR_U32(ctx, 31, 0x4C868Cu);
    ctx->pc = 0x4C8688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8684u;
            // 0x4c8688: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C868Cu; }
        if (ctx->pc != 0x4C868Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C868Cu; }
        if (ctx->pc != 0x4C868Cu) { return; }
    }
    ctx->pc = 0x4C868Cu;
label_4c868c:
    // 0x4c868c: 0xc0aee8c  jal         func_2BBA30
label_4c8690:
    if (ctx->pc == 0x4C8690u) {
        ctx->pc = 0x4C8690u;
            // 0x4c8690: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4C8694u;
        goto label_4c8694;
    }
    ctx->pc = 0x4C868Cu;
    SET_GPR_U32(ctx, 31, 0x4C8694u);
    ctx->pc = 0x4C8690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C868Cu;
            // 0x4c8690: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8694u; }
        if (ctx->pc != 0x4C8694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8694u; }
        if (ctx->pc != 0x4C8694u) { return; }
    }
    ctx->pc = 0x4C8694u;
label_4c8694:
    // 0x4c8694: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4c8694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4c8698:
    // 0x4c8698: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4c8698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_4c869c:
    // 0x4c869c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4c869cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_4c86a0:
    // 0x4c86a0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4c86a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_4c86a4:
    // 0x4c86a4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4c86a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_4c86a8:
    // 0x4c86a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c86a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c86ac:
    // 0x4c86ac: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4c86acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_4c86b0:
    // 0x4c86b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4c86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c86b4:
    // 0x4c86b4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x4c86b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_4c86b8:
    // 0x4c86b8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4c86b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_4c86bc:
    // 0x4c86bc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x4c86bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_4c86c0:
    // 0x4c86c0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x4c86c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_4c86c4:
    // 0x4c86c4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x4c86c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_4c86c8:
    // 0x4c86c8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4c86c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_4c86cc:
    // 0x4c86cc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4c86ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_4c86d0:
    // 0x4c86d0: 0xc0775b8  jal         func_1DD6E0
label_4c86d4:
    if (ctx->pc == 0x4C86D4u) {
        ctx->pc = 0x4C86D4u;
            // 0x4c86d4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4C86D8u;
        goto label_4c86d8;
    }
    ctx->pc = 0x4C86D0u;
    SET_GPR_U32(ctx, 31, 0x4C86D8u);
    ctx->pc = 0x4C86D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C86D0u;
            // 0x4c86d4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C86D8u; }
        if (ctx->pc != 0x4C86D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C86D8u; }
        if (ctx->pc != 0x4C86D8u) { return; }
    }
    ctx->pc = 0x4C86D8u;
label_4c86d8:
    // 0x4c86d8: 0xc077314  jal         func_1DCC50
label_4c86dc:
    if (ctx->pc == 0x4C86DCu) {
        ctx->pc = 0x4C86DCu;
            // 0x4c86dc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4C86E0u;
        goto label_4c86e0;
    }
    ctx->pc = 0x4C86D8u;
    SET_GPR_U32(ctx, 31, 0x4C86E0u);
    ctx->pc = 0x4C86DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C86D8u;
            // 0x4c86dc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C86E0u; }
        if (ctx->pc != 0x4C86E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C86E0u; }
        if (ctx->pc != 0x4C86E0u) { return; }
    }
    ctx->pc = 0x4C86E0u;
label_4c86e0:
    // 0x4c86e0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4c86e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4c86e4:
    // 0x4c86e4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4c86e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_4c86e8:
    // 0x4c86e8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4c86e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_4c86ec:
    // 0x4c86ec: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x4c86ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_4c86f0:
    // 0x4c86f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4c86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c86f4:
    // 0x4c86f4: 0x24841890  addiu       $a0, $a0, 0x1890
    ctx->pc = 0x4c86f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6288));
label_4c86f8:
    // 0x4c86f8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x4c86f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4c86fc:
    // 0x4c86fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c86fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c8700:
    // 0x4c8700: 0x246318d0  addiu       $v1, $v1, 0x18D0
    ctx->pc = 0x4c8700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6352));
label_4c8704:
    // 0x4c8704: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x4c8704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4c8708:
    // 0x4c8708: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c8708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c870c:
    // 0x4c870c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x4c870cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_4c8710:
    // 0x4c8710: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4c8710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4c8714:
    // 0x4c8714: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4c8714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4c8718:
    // 0x4c8718: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4c8718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_4c871c:
    // 0x4c871c: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x4c871cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_4c8720:
    // 0x4c8720: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c8720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c8724:
    // 0x4c8724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c8724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c8728:
    // 0x4c8728: 0x3e00008  jr          $ra
label_4c872c:
    if (ctx->pc == 0x4C872Cu) {
        ctx->pc = 0x4C872Cu;
            // 0x4c872c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4C8730u;
        goto label_4c8730;
    }
    ctx->pc = 0x4C8728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C872Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8728u;
            // 0x4c872c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C8730u;
label_4c8730:
    // 0x4c8730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4c8730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4c8734:
    // 0x4c8734: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c8734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4c8738:
    // 0x4c8738: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4c8738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4c873c:
    // 0x4c873c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x4c873cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4c8740:
    // 0x4c8740: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4c8740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4c8744:
    // 0x4c8744: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4c8744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4c8748:
    // 0x4c8748: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4c8748u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4c874c:
    // 0x4c874c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4c874cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4c8750:
    // 0x4c8750: 0x8c51aa08  lw          $s1, -0x55F8($v0)
    ctx->pc = 0x4c8750u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945288)));
label_4c8754:
    // 0x4c8754: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x4c8754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c8758:
    // 0x4c8758: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_4c875c:
    if (ctx->pc == 0x4C875Cu) {
        ctx->pc = 0x4C875Cu;
            // 0x4c875c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x4C8760u;
        goto label_4c8760;
    }
    ctx->pc = 0x4C8758u;
    {
        const bool branch_taken_0x4c8758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C875Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8758u;
            // 0x4c875c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8758) {
            ctx->pc = 0x4C877Cu;
            goto label_4c877c;
        }
    }
    ctx->pc = 0x4C8760u;
label_4c8760:
    // 0x4c8760: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x4c8760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_4c8764:
    // 0x4c8764: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4c8764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4c8768:
    // 0x4c8768: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4c8768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4c876c:
    // 0x4c876c: 0x0  nop
    ctx->pc = 0x4c876cu;
    // NOP
label_4c8770:
    // 0x4c8770: 0x0  nop
    ctx->pc = 0x4c8770u;
    // NOP
label_4c8774:
    // 0x4c8774: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4c8778:
    if (ctx->pc == 0x4C8778u) {
        ctx->pc = 0x4C877Cu;
        goto label_4c877c;
    }
    ctx->pc = 0x4C8774u;
    {
        const bool branch_taken_0x4c8774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c8774) {
            ctx->pc = 0x4C8760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c8760;
        }
    }
    ctx->pc = 0x4C877Cu;
label_4c877c:
    // 0x4c877c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x4c877cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_4c8780:
    // 0x4c8780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c8780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c8784:
    // 0x4c8784: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x4c8784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_4c8788:
    // 0x4c8788: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4c8788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4c878c:
    // 0x4c878c: 0xc0d46b8  jal         func_351AE0
label_4c8790:
    if (ctx->pc == 0x4C8790u) {
        ctx->pc = 0x4C8790u;
            // 0x4c8790: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->pc = 0x4C8794u;
        goto label_4c8794;
    }
    ctx->pc = 0x4C878Cu;
    SET_GPR_U32(ctx, 31, 0x4C8794u);
    ctx->pc = 0x4C8790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C878Cu;
            // 0x4c8790: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AE0u;
    if (runtime->hasFunction(0x351AE0u)) {
        auto targetFn = runtime->lookupFunction(0x351AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8794u; }
        if (ctx->pc != 0x4C8794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AE0_0x351ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8794u; }
        if (ctx->pc != 0x4C8794u) { return; }
    }
    ctx->pc = 0x4C8794u;
label_4c8794:
    // 0x4c8794: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
label_4c8798:
    if (ctx->pc == 0x4C8798u) {
        ctx->pc = 0x4C8798u;
            // 0x4c8798: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x4C879Cu;
        goto label_4c879c;
    }
    ctx->pc = 0x4C8794u;
    {
        const bool branch_taken_0x4c8794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c8794) {
            ctx->pc = 0x4C8798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8794u;
            // 0x4c8798: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C88D0u;
            goto label_4c88d0;
        }
    }
    ctx->pc = 0x4C879Cu;
label_4c879c:
    // 0x4c879c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4c879cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4c87a0:
    // 0x4c87a0: 0xc0d46b0  jal         func_351AC0
label_4c87a4:
    if (ctx->pc == 0x4C87A4u) {
        ctx->pc = 0x4C87A4u;
            // 0x4c87a4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4C87A8u;
        goto label_4c87a8;
    }
    ctx->pc = 0x4C87A0u;
    SET_GPR_U32(ctx, 31, 0x4C87A8u);
    ctx->pc = 0x4C87A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C87A0u;
            // 0x4c87a4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AC0u;
    if (runtime->hasFunction(0x351AC0u)) {
        auto targetFn = runtime->lookupFunction(0x351AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C87A8u; }
        if (ctx->pc != 0x4C87A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AC0_0x351ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C87A8u; }
        if (ctx->pc != 0x4C87A8u) { return; }
    }
    ctx->pc = 0x4C87A8u;
label_4c87a8:
    // 0x4c87a8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x4c87a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c87ac:
    // 0x4c87ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4c87acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4c87b0:
    // 0x4c87b0: 0x0  nop
    ctx->pc = 0x4c87b0u;
    // NOP
label_4c87b4:
    // 0x4c87b4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4c87b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c87b8:
    // 0x4c87b8: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
label_4c87bc:
    if (ctx->pc == 0x4C87BCu) {
        ctx->pc = 0x4C87BCu;
            // 0x4c87bc: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4C87C0u;
        goto label_4c87c0;
    }
    ctx->pc = 0x4C87B8u;
    {
        const bool branch_taken_0x4c87b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c87b8) {
            ctx->pc = 0x4C87BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C87B8u;
            // 0x4c87bc: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C8830u;
            goto label_4c8830;
        }
    }
    ctx->pc = 0x4C87C0u;
label_4c87c0:
    // 0x4c87c0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x4c87c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c87c4:
    // 0x4c87c4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4c87c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c87c8:
    // 0x4c87c8: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_4c87cc:
    if (ctx->pc == 0x4C87CCu) {
        ctx->pc = 0x4C87CCu;
            // 0x4c87cc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x4C87D0u;
        goto label_4c87d0;
    }
    ctx->pc = 0x4C87C8u;
    {
        const bool branch_taken_0x4c87c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c87c8) {
            ctx->pc = 0x4C87CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C87C8u;
            // 0x4c87cc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C87E4u;
            goto label_4c87e4;
        }
    }
    ctx->pc = 0x4C87D0u;
label_4c87d0:
    // 0x4c87d0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x4c87d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c87d4:
    // 0x4c87d4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4c87d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c87d8:
    // 0x4c87d8: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_4c87dc:
    if (ctx->pc == 0x4C87DCu) {
        ctx->pc = 0x4C87E0u;
        goto label_4c87e0;
    }
    ctx->pc = 0x4C87D8u;
    {
        const bool branch_taken_0x4c87d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c87d8) {
            ctx->pc = 0x4C882Cu;
            goto label_4c882c;
        }
    }
    ctx->pc = 0x4C87E0u;
label_4c87e0:
    // 0x4c87e0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x4c87e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4c87e4:
    // 0x4c87e4: 0xc0d46a0  jal         func_351A80
label_4c87e8:
    if (ctx->pc == 0x4C87E8u) {
        ctx->pc = 0x4C87ECu;
        goto label_4c87ec;
    }
    ctx->pc = 0x4C87E4u;
    SET_GPR_U32(ctx, 31, 0x4C87ECu);
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C87ECu; }
        if (ctx->pc != 0x4C87ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C87ECu; }
        if (ctx->pc != 0x4C87ECu) { return; }
    }
    ctx->pc = 0x4C87ECu;
label_4c87ec:
    // 0x4c87ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4c87ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c87f0:
    // 0x4c87f0: 0x52000033  beql        $s0, $zero, . + 4 + (0x33 << 2)
label_4c87f4:
    if (ctx->pc == 0x4C87F4u) {
        ctx->pc = 0x4C87F4u;
            // 0x4c87f4: 0xafb0005c  sw          $s0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 16));
        ctx->pc = 0x4C87F8u;
        goto label_4c87f8;
    }
    ctx->pc = 0x4C87F0u;
    {
        const bool branch_taken_0x4c87f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c87f0) {
            ctx->pc = 0x4C87F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C87F0u;
            // 0x4c87f4: 0xafb0005c  sw          $s0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C88C0u;
            goto label_4c88c0;
        }
    }
    ctx->pc = 0x4C87F8u;
label_4c87f8:
    // 0x4c87f8: 0xc049514  jal         func_125450
label_4c87fc:
    if (ctx->pc == 0x4C87FCu) {
        ctx->pc = 0x4C87FCu;
            // 0x4c87fc: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x4C8800u;
        goto label_4c8800;
    }
    ctx->pc = 0x4C87F8u;
    SET_GPR_U32(ctx, 31, 0x4C8800u);
    ctx->pc = 0x4C87FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C87F8u;
            // 0x4c87fc: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8800u; }
        if (ctx->pc != 0x4C8800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8800u; }
        if (ctx->pc != 0x4C8800u) { return; }
    }
    ctx->pc = 0x4C8800u;
label_4c8800:
    // 0x4c8800: 0xc0474b6  jal         func_11D2D8
label_4c8804:
    if (ctx->pc == 0x4C8804u) {
        ctx->pc = 0x4C8804u;
            // 0x4c8804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C8808u;
        goto label_4c8808;
    }
    ctx->pc = 0x4C8800u;
    SET_GPR_U32(ctx, 31, 0x4C8808u);
    ctx->pc = 0x4C8804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8800u;
            // 0x4c8804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8808u; }
        if (ctx->pc != 0x4C8808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8808u; }
        if (ctx->pc != 0x4C8808u) { return; }
    }
    ctx->pc = 0x4C8808u;
label_4c8808:
    // 0x4c8808: 0xc0497dc  jal         func_125F70
label_4c880c:
    if (ctx->pc == 0x4C880Cu) {
        ctx->pc = 0x4C880Cu;
            // 0x4c880c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C8810u;
        goto label_4c8810;
    }
    ctx->pc = 0x4C8808u;
    SET_GPR_U32(ctx, 31, 0x4C8810u);
    ctx->pc = 0x4C880Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8808u;
            // 0x4c880c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8810u; }
        if (ctx->pc != 0x4C8810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8810u; }
        if (ctx->pc != 0x4C8810u) { return; }
    }
    ctx->pc = 0x4C8810u;
label_4c8810:
    // 0x4c8810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c8810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c8814:
    // 0x4c8814: 0xc0827ac  jal         func_209EB0
label_4c8818:
    if (ctx->pc == 0x4C8818u) {
        ctx->pc = 0x4C8818u;
            // 0x4c8818: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4C881Cu;
        goto label_4c881c;
    }
    ctx->pc = 0x4C8814u;
    SET_GPR_U32(ctx, 31, 0x4C881Cu);
    ctx->pc = 0x4C8818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8814u;
            // 0x4c8818: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C881Cu; }
        if (ctx->pc != 0x4C881Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C881Cu; }
        if (ctx->pc != 0x4C881Cu) { return; }
    }
    ctx->pc = 0x4C881Cu;
label_4c881c:
    // 0x4c881c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4c881cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c8820:
    // 0x4c8820: 0xafb0005c  sw          $s0, 0x5C($sp)
    ctx->pc = 0x4c8820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 16));
label_4c8824:
    // 0x4c8824: 0x10000026  b           . + 4 + (0x26 << 2)
label_4c8828:
    if (ctx->pc == 0x4C8828u) {
        ctx->pc = 0x4C882Cu;
        goto label_4c882c;
    }
    ctx->pc = 0x4C8824u;
    {
        const bool branch_taken_0x4c8824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c8824) {
            ctx->pc = 0x4C88C0u;
            goto label_4c88c0;
        }
    }
    ctx->pc = 0x4C882Cu;
label_4c882c:
    // 0x4c882c: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x4c882cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c8830:
    // 0x4c8830: 0xc049514  jal         func_125450
label_4c8834:
    if (ctx->pc == 0x4C8834u) {
        ctx->pc = 0x4C8838u;
        goto label_4c8838;
    }
    ctx->pc = 0x4C8830u;
    SET_GPR_U32(ctx, 31, 0x4C8838u);
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8838u; }
        if (ctx->pc != 0x4C8838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8838u; }
        if (ctx->pc != 0x4C8838u) { return; }
    }
    ctx->pc = 0x4C8838u;
label_4c8838:
    // 0x4c8838: 0xc0474b6  jal         func_11D2D8
label_4c883c:
    if (ctx->pc == 0x4C883Cu) {
        ctx->pc = 0x4C883Cu;
            // 0x4c883c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C8840u;
        goto label_4c8840;
    }
    ctx->pc = 0x4C8838u;
    SET_GPR_U32(ctx, 31, 0x4C8840u);
    ctx->pc = 0x4C883Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8838u;
            // 0x4c883c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8840u; }
        if (ctx->pc != 0x4C8840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8840u; }
        if (ctx->pc != 0x4C8840u) { return; }
    }
    ctx->pc = 0x4C8840u;
label_4c8840:
    // 0x4c8840: 0xc0497dc  jal         func_125F70
label_4c8844:
    if (ctx->pc == 0x4C8844u) {
        ctx->pc = 0x4C8844u;
            // 0x4c8844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C8848u;
        goto label_4c8848;
    }
    ctx->pc = 0x4C8840u;
    SET_GPR_U32(ctx, 31, 0x4C8848u);
    ctx->pc = 0x4C8844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8840u;
            // 0x4c8844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8848u; }
        if (ctx->pc != 0x4C8848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8848u; }
        if (ctx->pc != 0x4C8848u) { return; }
    }
    ctx->pc = 0x4C8848u;
label_4c8848:
    // 0x4c8848: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x4c8848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c884c:
    // 0x4c884c: 0xc049514  jal         func_125450
label_4c8850:
    if (ctx->pc == 0x4C8850u) {
        ctx->pc = 0x4C8850u;
            // 0x4c8850: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4C8854u;
        goto label_4c8854;
    }
    ctx->pc = 0x4C884Cu;
    SET_GPR_U32(ctx, 31, 0x4C8854u);
    ctx->pc = 0x4C8850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C884Cu;
            // 0x4c8850: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8854u; }
        if (ctx->pc != 0x4C8854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8854u; }
        if (ctx->pc != 0x4C8854u) { return; }
    }
    ctx->pc = 0x4C8854u;
label_4c8854:
    // 0x4c8854: 0xc0474b6  jal         func_11D2D8
label_4c8858:
    if (ctx->pc == 0x4C8858u) {
        ctx->pc = 0x4C8858u;
            // 0x4c8858: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C885Cu;
        goto label_4c885c;
    }
    ctx->pc = 0x4C8854u;
    SET_GPR_U32(ctx, 31, 0x4C885Cu);
    ctx->pc = 0x4C8858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8854u;
            // 0x4c8858: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C885Cu; }
        if (ctx->pc != 0x4C885Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C885Cu; }
        if (ctx->pc != 0x4C885Cu) { return; }
    }
    ctx->pc = 0x4C885Cu;
label_4c885c:
    // 0x4c885c: 0xc0497dc  jal         func_125F70
label_4c8860:
    if (ctx->pc == 0x4C8860u) {
        ctx->pc = 0x4C8860u;
            // 0x4c8860: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C8864u;
        goto label_4c8864;
    }
    ctx->pc = 0x4C885Cu;
    SET_GPR_U32(ctx, 31, 0x4C8864u);
    ctx->pc = 0x4C8860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C885Cu;
            // 0x4c8860: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8864u; }
        if (ctx->pc != 0x4C8864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8864u; }
        if (ctx->pc != 0x4C8864u) { return; }
    }
    ctx->pc = 0x4C8864u;
label_4c8864:
    // 0x4c8864: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x4c8864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c8868:
    // 0x4c8868: 0xc049514  jal         func_125450
label_4c886c:
    if (ctx->pc == 0x4C886Cu) {
        ctx->pc = 0x4C886Cu;
            // 0x4c886c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4C8870u;
        goto label_4c8870;
    }
    ctx->pc = 0x4C8868u;
    SET_GPR_U32(ctx, 31, 0x4C8870u);
    ctx->pc = 0x4C886Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8868u;
            // 0x4c886c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8870u; }
        if (ctx->pc != 0x4C8870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8870u; }
        if (ctx->pc != 0x4C8870u) { return; }
    }
    ctx->pc = 0x4C8870u;
label_4c8870:
    // 0x4c8870: 0xc0474b6  jal         func_11D2D8
label_4c8874:
    if (ctx->pc == 0x4C8874u) {
        ctx->pc = 0x4C8874u;
            // 0x4c8874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C8878u;
        goto label_4c8878;
    }
    ctx->pc = 0x4C8870u;
    SET_GPR_U32(ctx, 31, 0x4C8878u);
    ctx->pc = 0x4C8874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8870u;
            // 0x4c8874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8878u; }
        if (ctx->pc != 0x4C8878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8878u; }
        if (ctx->pc != 0x4C8878u) { return; }
    }
    ctx->pc = 0x4C8878u;
label_4c8878:
    // 0x4c8878: 0xc0497dc  jal         func_125F70
label_4c887c:
    if (ctx->pc == 0x4C887Cu) {
        ctx->pc = 0x4C887Cu;
            // 0x4c887c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C8880u;
        goto label_4c8880;
    }
    ctx->pc = 0x4C8878u;
    SET_GPR_U32(ctx, 31, 0x4C8880u);
    ctx->pc = 0x4C887Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8878u;
            // 0x4c887c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8880u; }
        if (ctx->pc != 0x4C8880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8880u; }
        if (ctx->pc != 0x4C8880u) { return; }
    }
    ctx->pc = 0x4C8880u;
label_4c8880:
    // 0x4c8880: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4c8880u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4c8884:
    // 0x4c8884: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4c8884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4c8888:
    // 0x4c8888: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x4c8888u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_4c888c:
    // 0x4c888c: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x4c888cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4c8890:
    // 0x4c8890: 0xc0b6df0  jal         func_2DB7C0
label_4c8894:
    if (ctx->pc == 0x4C8894u) {
        ctx->pc = 0x4C8894u;
            // 0x4c8894: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4C8898u;
        goto label_4c8898;
    }
    ctx->pc = 0x4C8890u;
    SET_GPR_U32(ctx, 31, 0x4C8898u);
    ctx->pc = 0x4C8894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8890u;
            // 0x4c8894: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8898u; }
        if (ctx->pc != 0x4C8898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8898u; }
        if (ctx->pc != 0x4C8898u) { return; }
    }
    ctx->pc = 0x4C8898u;
label_4c8898:
    // 0x4c8898: 0xc0d46a0  jal         func_351A80
label_4c889c:
    if (ctx->pc == 0x4C889Cu) {
        ctx->pc = 0x4C889Cu;
            // 0x4c889c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x4C88A0u;
        goto label_4c88a0;
    }
    ctx->pc = 0x4C8898u;
    SET_GPR_U32(ctx, 31, 0x4C88A0u);
    ctx->pc = 0x4C889Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8898u;
            // 0x4c889c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C88A0u; }
        if (ctx->pc != 0x4C88A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C88A0u; }
        if (ctx->pc != 0x4C88A0u) { return; }
    }
    ctx->pc = 0x4C88A0u;
label_4c88a0:
    // 0x4c88a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4c88a4:
    if (ctx->pc == 0x4C88A4u) {
        ctx->pc = 0x4C88A4u;
            // 0x4c88a4: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x4C88A8u;
        goto label_4c88a8;
    }
    ctx->pc = 0x4C88A0u;
    {
        const bool branch_taken_0x4c88a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c88a0) {
            ctx->pc = 0x4C88A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C88A0u;
            // 0x4c88a4: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C88C0u;
            goto label_4c88c0;
        }
    }
    ctx->pc = 0x4C88A8u;
label_4c88a8:
    // 0x4c88a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c88a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c88ac:
    // 0x4c88ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4c88acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4c88b0:
    // 0x4c88b0: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4c88b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c88b4:
    // 0x4c88b4: 0xc0804bc  jal         func_2012F0
label_4c88b8:
    if (ctx->pc == 0x4C88B8u) {
        ctx->pc = 0x4C88B8u;
            // 0x4c88b8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4C88BCu;
        goto label_4c88bc;
    }
    ctx->pc = 0x4C88B4u;
    SET_GPR_U32(ctx, 31, 0x4C88BCu);
    ctx->pc = 0x4C88B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C88B4u;
            // 0x4c88b8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C88BCu; }
        if (ctx->pc != 0x4C88BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C88BCu; }
        if (ctx->pc != 0x4C88BCu) { return; }
    }
    ctx->pc = 0x4C88BCu;
label_4c88bc:
    // 0x4c88bc: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x4c88bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_4c88c0:
    // 0x4c88c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c88c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c88c4:
    // 0x4c88c4: 0xc0d4698  jal         func_351A60
label_4c88c8:
    if (ctx->pc == 0x4C88C8u) {
        ctx->pc = 0x4C88C8u;
            // 0x4c88c8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4C88CCu;
        goto label_4c88cc;
    }
    ctx->pc = 0x4C88C4u;
    SET_GPR_U32(ctx, 31, 0x4C88CCu);
    ctx->pc = 0x4C88C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C88C4u;
            // 0x4c88c8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A60u;
    if (runtime->hasFunction(0x351A60u)) {
        auto targetFn = runtime->lookupFunction(0x351A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C88CCu; }
        if (ctx->pc != 0x4C88CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A60_0x351a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C88CCu; }
        if (ctx->pc != 0x4C88CCu) { return; }
    }
    ctx->pc = 0x4C88CCu;
label_4c88cc:
    // 0x4c88cc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x4c88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_4c88d0:
    // 0x4c88d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c88d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4c88d4:
    // 0x4c88d4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4c88d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4c88d8:
    // 0x4c88d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4c88d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c88dc:
    // 0x4c88dc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4c88dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4c88e0:
    // 0x4c88e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4c88e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c88e4:
    // 0x4c88e4: 0x3e00008  jr          $ra
label_4c88e8:
    if (ctx->pc == 0x4C88E8u) {
        ctx->pc = 0x4C88E8u;
            // 0x4c88e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4C88ECu;
        goto label_4c88ec;
    }
    ctx->pc = 0x4C88E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C88E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C88E4u;
            // 0x4c88e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C88ECu;
label_4c88ec:
    // 0x4c88ec: 0x0  nop
    ctx->pc = 0x4c88ecu;
    // NOP
label_4c88f0:
    // 0x4c88f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c88f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c88f4:
    // 0x4c88f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c88f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c88f8:
    // 0x4c88f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c88f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c88fc:
    // 0x4c88fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c88fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c8900:
    // 0x4c8900: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x4c8900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_4c8904:
    // 0x4c8904: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c8908:
    if (ctx->pc == 0x4C8908u) {
        ctx->pc = 0x4C8908u;
            // 0x4c8908: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x4C890Cu;
        goto label_4c890c;
    }
    ctx->pc = 0x4C8904u;
    {
        const bool branch_taken_0x4c8904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c8904) {
            ctx->pc = 0x4C8908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8904u;
            // 0x4c8908: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C8920u;
            goto label_4c8920;
        }
    }
    ctx->pc = 0x4C890Cu;
label_4c890c:
    // 0x4c890c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c890cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c8910:
    // 0x4c8910: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c8910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c8914:
    // 0x4c8914: 0x320f809  jalr        $t9
label_4c8918:
    if (ctx->pc == 0x4C8918u) {
        ctx->pc = 0x4C8918u;
            // 0x4c8918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C891Cu;
        goto label_4c891c;
    }
    ctx->pc = 0x4C8914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C891Cu);
        ctx->pc = 0x4C8918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8914u;
            // 0x4c8918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C891Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C891Cu; }
            if (ctx->pc != 0x4C891Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C891Cu;
label_4c891c:
    // 0x4c891c: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x4c891cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_4c8920:
    // 0x4c8920: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4c8920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4c8924:
    // 0x4c8924: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c8928:
    if (ctx->pc == 0x4C8928u) {
        ctx->pc = 0x4C8928u;
            // 0x4c8928: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4C892Cu;
        goto label_4c892c;
    }
    ctx->pc = 0x4C8924u;
    {
        const bool branch_taken_0x4c8924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c8924) {
            ctx->pc = 0x4C8928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8924u;
            // 0x4c8928: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C8940u;
            goto label_4c8940;
        }
    }
    ctx->pc = 0x4C892Cu;
label_4c892c:
    // 0x4c892c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4c892cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4c8930:
    // 0x4c8930: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c8930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c8934:
    // 0x4c8934: 0x320f809  jalr        $t9
label_4c8938:
    if (ctx->pc == 0x4C8938u) {
        ctx->pc = 0x4C8938u;
            // 0x4c8938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C893Cu;
        goto label_4c893c;
    }
    ctx->pc = 0x4C8934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C893Cu);
        ctx->pc = 0x4C8938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8934u;
            // 0x4c8938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C893Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C893Cu; }
            if (ctx->pc != 0x4C893Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C893Cu;
label_4c893c:
    // 0x4c893c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4c893cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_4c8940:
    // 0x4c8940: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4c8940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4c8944:
    // 0x4c8944: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c8948:
    if (ctx->pc == 0x4C8948u) {
        ctx->pc = 0x4C8948u;
            // 0x4c8948: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4C894Cu;
        goto label_4c894c;
    }
    ctx->pc = 0x4C8944u;
    {
        const bool branch_taken_0x4c8944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c8944) {
            ctx->pc = 0x4C8948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8944u;
            // 0x4c8948: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C8960u;
            goto label_4c8960;
        }
    }
    ctx->pc = 0x4C894Cu;
label_4c894c:
    // 0x4c894c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c894cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c8950:
    // 0x4c8950: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c8950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c8954:
    // 0x4c8954: 0x320f809  jalr        $t9
label_4c8958:
    if (ctx->pc == 0x4C8958u) {
        ctx->pc = 0x4C8958u;
            // 0x4c8958: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C895Cu;
        goto label_4c895c;
    }
    ctx->pc = 0x4C8954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C895Cu);
        ctx->pc = 0x4C8958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8954u;
            // 0x4c8958: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C895Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C895Cu; }
            if (ctx->pc != 0x4C895Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C895Cu;
label_4c895c:
    // 0x4c895c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4c895cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4c8960:
    // 0x4c8960: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c8960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c8964:
    // 0x4c8964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c8964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c8968:
    // 0x4c8968: 0x3e00008  jr          $ra
label_4c896c:
    if (ctx->pc == 0x4C896Cu) {
        ctx->pc = 0x4C896Cu;
            // 0x4c896c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4C8970u;
        goto label_4c8970;
    }
    ctx->pc = 0x4C8968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C896Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8968u;
            // 0x4c896c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C8970u;
label_4c8970:
    // 0x4c8970: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4c8970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4c8974:
    // 0x4c8974: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4c8974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4c8978:
    // 0x4c8978: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c8978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c897c:
    // 0x4c897c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4c897cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c8980:
    // 0x4c8980: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c8980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c8984:
    // 0x4c8984: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4c8984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4c8988:
    // 0x4c8988: 0xc0892d0  jal         func_224B40
label_4c898c:
    if (ctx->pc == 0x4C898Cu) {
        ctx->pc = 0x4C898Cu;
            // 0x4c898c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4C8990u;
        goto label_4c8990;
    }
    ctx->pc = 0x4C8988u;
    SET_GPR_U32(ctx, 31, 0x4C8990u);
    ctx->pc = 0x4C898Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8988u;
            // 0x4c898c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8990u; }
        if (ctx->pc != 0x4C8990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8990u; }
        if (ctx->pc != 0x4C8990u) { return; }
    }
    ctx->pc = 0x4C8990u;
label_4c8990:
    // 0x4c8990: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4c8990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4c8994:
    // 0x4c8994: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c8994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c8998:
    // 0x4c8998: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x4c8998u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4c899c:
    // 0x4c899c: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x4c899cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_4c89a0:
    // 0x4c89a0: 0x320f809  jalr        $t9
label_4c89a4:
    if (ctx->pc == 0x4C89A4u) {
        ctx->pc = 0x4C89A4u;
            // 0x4c89a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C89A8u;
        goto label_4c89a8;
    }
    ctx->pc = 0x4C89A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C89A8u);
        ctx->pc = 0x4C89A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C89A0u;
            // 0x4c89a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C89A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C89A8u; }
            if (ctx->pc != 0x4C89A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4C89A8u;
label_4c89a8:
    // 0x4c89a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4c89a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c89ac:
    // 0x4c89ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4c89acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4c89b0:
    // 0x4c89b0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4c89b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4c89b4:
    // 0x4c89b4: 0xc0b6e68  jal         func_2DB9A0
label_4c89b8:
    if (ctx->pc == 0x4C89B8u) {
        ctx->pc = 0x4C89B8u;
            // 0x4c89b8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x4C89BCu;
        goto label_4c89bc;
    }
    ctx->pc = 0x4C89B4u;
    SET_GPR_U32(ctx, 31, 0x4C89BCu);
    ctx->pc = 0x4C89B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C89B4u;
            // 0x4c89b8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C89BCu; }
        if (ctx->pc != 0x4C89BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C89BCu; }
        if (ctx->pc != 0x4C89BCu) { return; }
    }
    ctx->pc = 0x4C89BCu;
label_4c89bc:
    // 0x4c89bc: 0xc0b6dac  jal         func_2DB6B0
label_4c89c0:
    if (ctx->pc == 0x4C89C0u) {
        ctx->pc = 0x4C89C0u;
            // 0x4c89c0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C89C4u;
        goto label_4c89c4;
    }
    ctx->pc = 0x4C89BCu;
    SET_GPR_U32(ctx, 31, 0x4C89C4u);
    ctx->pc = 0x4C89C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C89BCu;
            // 0x4c89c0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C89C4u; }
        if (ctx->pc != 0x4C89C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C89C4u; }
        if (ctx->pc != 0x4C89C4u) { return; }
    }
    ctx->pc = 0x4C89C4u;
label_4c89c4:
    // 0x4c89c4: 0xc0cac94  jal         func_32B250
label_4c89c8:
    if (ctx->pc == 0x4C89C8u) {
        ctx->pc = 0x4C89C8u;
            // 0x4c89c8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4C89CCu;
        goto label_4c89cc;
    }
    ctx->pc = 0x4C89C4u;
    SET_GPR_U32(ctx, 31, 0x4C89CCu);
    ctx->pc = 0x4C89C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C89C4u;
            // 0x4c89c8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C89CCu; }
        if (ctx->pc != 0x4C89CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C89CCu; }
        if (ctx->pc != 0x4C89CCu) { return; }
    }
    ctx->pc = 0x4C89CCu;
label_4c89cc:
    // 0x4c89cc: 0xc0cac84  jal         func_32B210
label_4c89d0:
    if (ctx->pc == 0x4C89D0u) {
        ctx->pc = 0x4C89D0u;
            // 0x4c89d0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C89D4u;
        goto label_4c89d4;
    }
    ctx->pc = 0x4C89CCu;
    SET_GPR_U32(ctx, 31, 0x4C89D4u);
    ctx->pc = 0x4C89D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C89CCu;
            // 0x4c89d0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C89D4u; }
        if (ctx->pc != 0x4C89D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C89D4u; }
        if (ctx->pc != 0x4C89D4u) { return; }
    }
    ctx->pc = 0x4C89D4u;
label_4c89d4:
    // 0x4c89d4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4c89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4c89d8:
    // 0x4c89d8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x4c89d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4c89dc:
    // 0x4c89dc: 0xc44cc930  lwc1        $f12, -0x36D0($v0)
    ctx->pc = 0x4c89dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c89e0:
    // 0x4c89e0: 0xc0a5a68  jal         func_2969A0
label_4c89e4:
    if (ctx->pc == 0x4C89E4u) {
        ctx->pc = 0x4C89E4u;
            // 0x4c89e4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4C89E8u;
        goto label_4c89e8;
    }
    ctx->pc = 0x4C89E0u;
    SET_GPR_U32(ctx, 31, 0x4C89E8u);
    ctx->pc = 0x4C89E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C89E0u;
            // 0x4c89e4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C89E8u; }
        if (ctx->pc != 0x4C89E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C89E8u; }
        if (ctx->pc != 0x4C89E8u) { return; }
    }
    ctx->pc = 0x4C89E8u;
label_4c89e8:
    // 0x4c89e8: 0xafb100c4  sw          $s1, 0xC4($sp)
    ctx->pc = 0x4c89e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 17));
label_4c89ec:
    // 0x4c89ec: 0x3c023f05  lui         $v0, 0x3F05
    ctx->pc = 0x4c89ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16133 << 16));
label_4c89f0:
    // 0x4c89f0: 0xc6460018  lwc1        $f6, 0x18($s2)
    ctx->pc = 0x4c89f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4c89f4:
    // 0x4c89f4: 0x34471eb8  ori         $a3, $v0, 0x1EB8
    ctx->pc = 0x4c89f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
label_4c89f8:
    // 0x4c89f8: 0xc6450014  lwc1        $f5, 0x14($s2)
    ctx->pc = 0x4c89f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4c89fc:
    // 0x4c89fc: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4c89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4c8a00:
    // 0x4c8a00: 0xc6440010  lwc1        $f4, 0x10($s2)
    ctx->pc = 0x4c8a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4c8a04:
    // 0x4c8a04: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x4c8a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_4c8a08:
    // 0x4c8a08: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x4c8a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c8a0c:
    // 0x4c8a0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c8a10:
    // 0x4c8a10: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x4c8a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c8a14:
    // 0x4c8a14: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4c8a14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c8a18:
    // 0x4c8a18: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x4c8a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c8a1c:
    // 0x4c8a1c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4c8a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4c8a20:
    // 0x4c8a20: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x4c8a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_4c8a24:
    // 0x4c8a24: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4c8a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4c8a28:
    // 0x4c8a28: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x4c8a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c8a2c:
    // 0x4c8a2c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4c8a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4c8a30:
    // 0x4c8a30: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x4c8a30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_4c8a34:
    // 0x4c8a34: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x4c8a34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_4c8a38:
    // 0x4c8a38: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x4c8a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_4c8a3c:
    // 0x4c8a3c: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x4c8a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_4c8a40:
    // 0x4c8a40: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x4c8a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_4c8a44:
    // 0x4c8a44: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x4c8a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_4c8a48:
    // 0x4c8a48: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x4c8a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c8a4c:
    // 0x4c8a4c: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x4c8a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_4c8a50:
    // 0x4c8a50: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x4c8a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c8a54:
    // 0x4c8a54: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x4c8a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c8a58:
    // 0x4c8a58: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x4c8a58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4c8a5c:
    // 0x4c8a5c: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x4c8a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_4c8a60:
    // 0x4c8a60: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x4c8a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_4c8a64:
    // 0x4c8a64: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x4c8a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c8a68:
    // 0x4c8a68: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x4c8a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c8a6c:
    // 0x4c8a6c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x4c8a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c8a70:
    // 0x4c8a70: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x4c8a70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_4c8a74:
    // 0x4c8a74: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x4c8a74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_4c8a78:
    // 0x4c8a78: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x4c8a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_4c8a7c:
    // 0x4c8a7c: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x4c8a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c8a80:
    // 0x4c8a80: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x4c8a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c8a84:
    // 0x4c8a84: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x4c8a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c8a88:
    // 0x4c8a88: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x4c8a88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_4c8a8c:
    // 0x4c8a8c: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x4c8a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_4c8a90:
    // 0x4c8a90: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x4c8a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4c8a94:
    // 0x4c8a94: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x4c8a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c8a98:
    // 0x4c8a98: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x4c8a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c8a9c:
    // 0x4c8a9c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x4c8a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c8aa0:
    // 0x4c8aa0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x4c8aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c8aa4:
    // 0x4c8aa4: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x4c8aa4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4c8aa8:
    // 0x4c8aa8: 0xe7a500d4  swc1        $f5, 0xD4($sp)
    ctx->pc = 0x4c8aa8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4c8aac:
    // 0x4c8aac: 0xe7a600d8  swc1        $f6, 0xD8($sp)
    ctx->pc = 0x4c8aacu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4c8ab0:
    // 0x4c8ab0: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x4c8ab0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4c8ab4:
    // 0x4c8ab4: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x4c8ab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_4c8ab8:
    // 0x4c8ab8: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x4c8ab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4c8abc:
    // 0x4c8abc: 0xc0a7a88  jal         func_29EA20
label_4c8ac0:
    if (ctx->pc == 0x4C8AC0u) {
        ctx->pc = 0x4C8AC0u;
            // 0x4c8ac0: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x4C8AC4u;
        goto label_4c8ac4;
    }
    ctx->pc = 0x4C8ABCu;
    SET_GPR_U32(ctx, 31, 0x4C8AC4u);
    ctx->pc = 0x4C8AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8ABCu;
            // 0x4c8ac0: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8AC4u; }
        if (ctx->pc != 0x4C8AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8AC4u; }
        if (ctx->pc != 0x4C8AC4u) { return; }
    }
    ctx->pc = 0x4C8AC4u;
label_4c8ac4:
    // 0x4c8ac4: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4c8ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4c8ac8:
    // 0x4c8ac8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4c8ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c8acc:
    // 0x4c8acc: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_4c8ad0:
    if (ctx->pc == 0x4C8AD0u) {
        ctx->pc = 0x4C8AD0u;
            // 0x4c8ad0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4C8AD4u;
        goto label_4c8ad4;
    }
    ctx->pc = 0x4C8ACCu;
    {
        const bool branch_taken_0x4c8acc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8ACCu;
            // 0x4c8ad0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8acc) {
            ctx->pc = 0x4C8B1Cu;
            goto label_4c8b1c;
        }
    }
    ctx->pc = 0x4C8AD4u;
label_4c8ad4:
    // 0x4c8ad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c8ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c8ad8:
    // 0x4c8ad8: 0xc088ef4  jal         func_223BD0
label_4c8adc:
    if (ctx->pc == 0x4C8ADCu) {
        ctx->pc = 0x4C8ADCu;
            // 0x4c8adc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4C8AE0u;
        goto label_4c8ae0;
    }
    ctx->pc = 0x4C8AD8u;
    SET_GPR_U32(ctx, 31, 0x4C8AE0u);
    ctx->pc = 0x4C8ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8AD8u;
            // 0x4c8adc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8AE0u; }
        if (ctx->pc != 0x4C8AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8AE0u; }
        if (ctx->pc != 0x4C8AE0u) { return; }
    }
    ctx->pc = 0x4C8AE0u;
label_4c8ae0:
    // 0x4c8ae0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c8ae4:
    // 0x4c8ae4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c8ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4c8ae8:
    // 0x4c8ae8: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4c8ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4c8aec:
    // 0x4c8aec: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4c8aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4c8af0:
    // 0x4c8af0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4c8af4:
    // 0x4c8af4: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x4c8af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_4c8af8:
    // 0x4c8af8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c8af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c8afc:
    // 0x4c8afc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c8afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4c8b00:
    // 0x4c8b00: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x4c8b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_4c8b04:
    // 0x4c8b04: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x4c8b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_4c8b08:
    // 0x4c8b08: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x4c8b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_4c8b0c:
    // 0x4c8b0c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4c8b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4c8b10:
    // 0x4c8b10: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4c8b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4c8b14:
    // 0x4c8b14: 0xc088b38  jal         func_222CE0
label_4c8b18:
    if (ctx->pc == 0x4C8B18u) {
        ctx->pc = 0x4C8B18u;
            // 0x4c8b18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C8B1Cu;
        goto label_4c8b1c;
    }
    ctx->pc = 0x4C8B14u;
    SET_GPR_U32(ctx, 31, 0x4C8B1Cu);
    ctx->pc = 0x4C8B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8B14u;
            // 0x4c8b18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8B1Cu; }
        if (ctx->pc != 0x4C8B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8B1Cu; }
        if (ctx->pc != 0x4C8B1Cu) { return; }
    }
    ctx->pc = 0x4C8B1Cu;
label_4c8b1c:
    // 0x4c8b1c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4c8b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4c8b20:
    // 0x4c8b20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c8b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c8b24:
    // 0x4c8b24: 0xc08c164  jal         func_230590
label_4c8b28:
    if (ctx->pc == 0x4C8B28u) {
        ctx->pc = 0x4C8B28u;
            // 0x4c8b28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C8B2Cu;
        goto label_4c8b2c;
    }
    ctx->pc = 0x4C8B24u;
    SET_GPR_U32(ctx, 31, 0x4C8B2Cu);
    ctx->pc = 0x4C8B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8B24u;
            // 0x4c8b28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8B2Cu; }
        if (ctx->pc != 0x4C8B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8B2Cu; }
        if (ctx->pc != 0x4C8B2Cu) { return; }
    }
    ctx->pc = 0x4C8B2Cu;
label_4c8b2c:
    // 0x4c8b2c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4c8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4c8b30:
    // 0x4c8b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c8b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c8b34:
    // 0x4c8b34: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x4c8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_4c8b38:
    // 0x4c8b38: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4c8b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4c8b3c:
    // 0x4c8b3c: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x4c8b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_4c8b40:
    // 0x4c8b40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c8b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c8b44:
    // 0x4c8b44: 0xc08914c  jal         func_224530
label_4c8b48:
    if (ctx->pc == 0x4C8B48u) {
        ctx->pc = 0x4C8B48u;
            // 0x4c8b48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C8B4Cu;
        goto label_4c8b4c;
    }
    ctx->pc = 0x4C8B44u;
    SET_GPR_U32(ctx, 31, 0x4C8B4Cu);
    ctx->pc = 0x4C8B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8B44u;
            // 0x4c8b48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8B4Cu; }
        if (ctx->pc != 0x4C8B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8B4Cu; }
        if (ctx->pc != 0x4C8B4Cu) { return; }
    }
    ctx->pc = 0x4C8B4Cu;
label_4c8b4c:
    // 0x4c8b4c: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x4c8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_4c8b50:
    // 0x4c8b50: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x4c8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_4c8b54:
    // 0x4c8b54: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x4c8b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_4c8b58:
    // 0x4c8b58: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x4c8b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_4c8b5c:
    // 0x4c8b5c: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x4c8b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_4c8b60:
    // 0x4c8b60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c8b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c8b64:
    // 0x4c8b64: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x4c8b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_4c8b68:
    // 0x4c8b68: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4c8b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4c8b6c:
    // 0x4c8b6c: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x4c8b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c8b70:
    // 0x4c8b70: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4c8b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4c8b74:
    // 0x4c8b74: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x4c8b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c8b78:
    // 0x4c8b78: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x4c8b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c8b7c:
    // 0x4c8b7c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4c8b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4c8b80:
    // 0x4c8b80: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4c8b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4c8b84:
    // 0x4c8b84: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4c8b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4c8b88:
    // 0x4c8b88: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4c8b88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4c8b8c:
    // 0x4c8b8c: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x4c8b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c8b90:
    // 0x4c8b90: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x4c8b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c8b94:
    // 0x4c8b94: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x4c8b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c8b98:
    // 0x4c8b98: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x4c8b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c8b9c:
    // 0x4c8b9c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4c8b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4c8ba0:
    // 0x4c8ba0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4c8ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4c8ba4:
    // 0x4c8ba4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4c8ba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4c8ba8:
    // 0x4c8ba8: 0xc0892b0  jal         func_224AC0
label_4c8bac:
    if (ctx->pc == 0x4C8BACu) {
        ctx->pc = 0x4C8BACu;
            // 0x4c8bac: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4C8BB0u;
        goto label_4c8bb0;
    }
    ctx->pc = 0x4C8BA8u;
    SET_GPR_U32(ctx, 31, 0x4C8BB0u);
    ctx->pc = 0x4C8BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8BA8u;
            // 0x4c8bac: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8BB0u; }
        if (ctx->pc != 0x4C8BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8BB0u; }
        if (ctx->pc != 0x4C8BB0u) { return; }
    }
    ctx->pc = 0x4C8BB0u;
label_4c8bb0:
    // 0x4c8bb0: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x4c8bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_4c8bb4:
    // 0x4c8bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c8bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c8bb8:
    // 0x4c8bb8: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x4c8bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_4c8bbc:
    // 0x4c8bbc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4c8bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4c8bc0:
    // 0x4c8bc0: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x4c8bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_4c8bc4:
    // 0x4c8bc4: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4c8bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4c8bc8:
    // 0x4c8bc8: 0xc0891d8  jal         func_224760
label_4c8bcc:
    if (ctx->pc == 0x4C8BCCu) {
        ctx->pc = 0x4C8BCCu;
            // 0x4c8bcc: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4C8BD0u;
        goto label_4c8bd0;
    }
    ctx->pc = 0x4C8BC8u;
    SET_GPR_U32(ctx, 31, 0x4C8BD0u);
    ctx->pc = 0x4C8BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8BC8u;
            // 0x4c8bcc: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8BD0u; }
        if (ctx->pc != 0x4C8BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8BD0u; }
        if (ctx->pc != 0x4C8BD0u) { return; }
    }
    ctx->pc = 0x4C8BD0u;
label_4c8bd0:
    // 0x4c8bd0: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x4c8bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_4c8bd4:
    // 0x4c8bd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c8bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c8bd8:
    // 0x4c8bd8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4c8bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4c8bdc:
    // 0x4c8bdc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4c8bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4c8be0:
    // 0x4c8be0: 0xc0a7a88  jal         func_29EA20
label_4c8be4:
    if (ctx->pc == 0x4C8BE4u) {
        ctx->pc = 0x4C8BE4u;
            // 0x4c8be4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4C8BE8u;
        goto label_4c8be8;
    }
    ctx->pc = 0x4C8BE0u;
    SET_GPR_U32(ctx, 31, 0x4C8BE8u);
    ctx->pc = 0x4C8BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8BE0u;
            // 0x4c8be4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8BE8u; }
        if (ctx->pc != 0x4C8BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8BE8u; }
        if (ctx->pc != 0x4C8BE8u) { return; }
    }
    ctx->pc = 0x4C8BE8u;
label_4c8be8:
    // 0x4c8be8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4c8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4c8bec:
    // 0x4c8bec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4c8becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c8bf0:
    // 0x4c8bf0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_4c8bf4:
    if (ctx->pc == 0x4C8BF4u) {
        ctx->pc = 0x4C8BF4u;
            // 0x4c8bf4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4C8BF8u;
        goto label_4c8bf8;
    }
    ctx->pc = 0x4C8BF0u;
    {
        const bool branch_taken_0x4c8bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8BF0u;
            // 0x4c8bf4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8bf0) {
            ctx->pc = 0x4C8C14u;
            goto label_4c8c14;
        }
    }
    ctx->pc = 0x4C8BF8u;
label_4c8bf8:
    // 0x4c8bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c8bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c8bfc:
    // 0x4c8bfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c8bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c8c00:
    // 0x4c8c00: 0xc0869d0  jal         func_21A740
label_4c8c04:
    if (ctx->pc == 0x4C8C04u) {
        ctx->pc = 0x4C8C04u;
            // 0x4c8c04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C8C08u;
        goto label_4c8c08;
    }
    ctx->pc = 0x4C8C00u;
    SET_GPR_U32(ctx, 31, 0x4C8C08u);
    ctx->pc = 0x4C8C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8C00u;
            // 0x4c8c04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8C08u; }
        if (ctx->pc != 0x4C8C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8C08u; }
        if (ctx->pc != 0x4C8C08u) { return; }
    }
    ctx->pc = 0x4C8C08u;
label_4c8c08:
    // 0x4c8c08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c8c0c:
    // 0x4c8c0c: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4c8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4c8c10:
    // 0x4c8c10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c8c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4c8c14:
    // 0x4c8c14: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x4c8c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_4c8c18:
    // 0x4c8c18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c8c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c8c1c:
    // 0x4c8c1c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4c8c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4c8c20:
    // 0x4c8c20: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4c8c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4c8c24:
    // 0x4c8c24: 0xc08c650  jal         func_231940
label_4c8c28:
    if (ctx->pc == 0x4C8C28u) {
        ctx->pc = 0x4C8C28u;
            // 0x4c8c28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C8C2Cu;
        goto label_4c8c2c;
    }
    ctx->pc = 0x4C8C24u;
    SET_GPR_U32(ctx, 31, 0x4C8C2Cu);
    ctx->pc = 0x4C8C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8C24u;
            // 0x4c8c28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8C2Cu; }
        if (ctx->pc != 0x4C8C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8C2Cu; }
        if (ctx->pc != 0x4C8C2Cu) { return; }
    }
    ctx->pc = 0x4C8C2Cu;
label_4c8c2c:
    // 0x4c8c2c: 0xc040180  jal         func_100600
label_4c8c30:
    if (ctx->pc == 0x4C8C30u) {
        ctx->pc = 0x4C8C30u;
            // 0x4c8c30: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x4C8C34u;
        goto label_4c8c34;
    }
    ctx->pc = 0x4C8C2Cu;
    SET_GPR_U32(ctx, 31, 0x4C8C34u);
    ctx->pc = 0x4C8C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8C2Cu;
            // 0x4c8c30: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8C34u; }
        if (ctx->pc != 0x4C8C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8C34u; }
        if (ctx->pc != 0x4C8C34u) { return; }
    }
    ctx->pc = 0x4C8C34u;
label_4c8c34:
    // 0x4c8c34: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_4c8c38:
    if (ctx->pc == 0x4C8C38u) {
        ctx->pc = 0x4C8C38u;
            // 0x4c8c38: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x4C8C3Cu;
        goto label_4c8c3c;
    }
    ctx->pc = 0x4C8C34u;
    {
        const bool branch_taken_0x4c8c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c8c34) {
            ctx->pc = 0x4C8C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8C34u;
            // 0x4c8c38: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C8C84u;
            goto label_4c8c84;
        }
    }
    ctx->pc = 0x4C8C3Cu;
label_4c8c3c:
    // 0x4c8c3c: 0x8e460050  lw          $a2, 0x50($s2)
    ctx->pc = 0x4c8c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_4c8c40:
    // 0x4c8c40: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x4c8c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_4c8c44:
    // 0x4c8c44: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x4c8c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_4c8c48:
    // 0x4c8c48: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4c8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4c8c4c:
    // 0x4c8c4c: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x4c8c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_4c8c50:
    // 0x4c8c50: 0x24637440  addiu       $v1, $v1, 0x7440
    ctx->pc = 0x4c8c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29760));
label_4c8c54:
    // 0x4c8c54: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x4c8c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_4c8c58:
    // 0x4c8c58: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x4c8c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_4c8c5c:
    // 0x4c8c5c: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x4c8c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_4c8c60:
    // 0x4c8c60: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x4c8c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_4c8c64:
    // 0x4c8c64: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x4c8c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_4c8c68:
    // 0x4c8c68: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x4c8c68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_4c8c6c:
    // 0x4c8c6c: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x4c8c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_4c8c70:
    // 0x4c8c70: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x4c8c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_4c8c74:
    // 0x4c8c74: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x4c8c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_4c8c78:
    // 0x4c8c78: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x4c8c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_4c8c7c:
    // 0x4c8c7c: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x4c8c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_4c8c80:
    // 0x4c8c80: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x4c8c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
label_4c8c84:
    // 0x4c8c84: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4c8c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4c8c88:
    // 0x4c8c88: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x4c8c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_4c8c8c:
    // 0x4c8c8c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x4c8c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_4c8c90:
    // 0x4c8c90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c8c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c8c94:
    // 0x4c8c94: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4c8c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4c8c98:
    // 0x4c8c98: 0xc040180  jal         func_100600
label_4c8c9c:
    if (ctx->pc == 0x4C8C9Cu) {
        ctx->pc = 0x4C8C9Cu;
            // 0x4c8c9c: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x4C8CA0u;
        goto label_4c8ca0;
    }
    ctx->pc = 0x4C8C98u;
    SET_GPR_U32(ctx, 31, 0x4C8CA0u);
    ctx->pc = 0x4C8C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8C98u;
            // 0x4c8c9c: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8CA0u; }
        if (ctx->pc != 0x4C8CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8CA0u; }
        if (ctx->pc != 0x4C8CA0u) { return; }
    }
    ctx->pc = 0x4C8CA0u;
label_4c8ca0:
    // 0x4c8ca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4c8ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c8ca4:
    // 0x4c8ca4: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_4c8ca8:
    if (ctx->pc == 0x4C8CA8u) {
        ctx->pc = 0x4C8CA8u;
            // 0x4c8ca8: 0x3c0247af  lui         $v0, 0x47AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18351 << 16));
        ctx->pc = 0x4C8CACu;
        goto label_4c8cac;
    }
    ctx->pc = 0x4C8CA4u;
    {
        const bool branch_taken_0x4c8ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c8ca4) {
            ctx->pc = 0x4C8CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8CA4u;
            // 0x4c8ca8: 0x3c0247af  lui         $v0, 0x47AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18351 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C8CE4u;
            goto label_4c8ce4;
        }
    }
    ctx->pc = 0x4C8CACu;
label_4c8cac:
    // 0x4c8cac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c8cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4c8cb0:
    // 0x4c8cb0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4c8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c8cb4:
    // 0x4c8cb4: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4c8cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4c8cb8:
    // 0x4c8cb8: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x4c8cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_4c8cbc:
    // 0x4c8cbc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c8cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c8cc0:
    // 0x4c8cc0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4c8cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4c8cc4:
    // 0x4c8cc4: 0xc040138  jal         func_1004E0
label_4c8cc8:
    if (ctx->pc == 0x4C8CC8u) {
        ctx->pc = 0x4C8CC8u;
            // 0x4c8cc8: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4C8CCCu;
        goto label_4c8ccc;
    }
    ctx->pc = 0x4C8CC4u;
    SET_GPR_U32(ctx, 31, 0x4C8CCCu);
    ctx->pc = 0x4C8CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8CC4u;
            // 0x4c8cc8: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8CCCu; }
        if (ctx->pc != 0x4C8CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8CCCu; }
        if (ctx->pc != 0x4C8CCCu) { return; }
    }
    ctx->pc = 0x4C8CCCu;
label_4c8ccc:
    // 0x4c8ccc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4c8cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4c8cd0:
    // 0x4c8cd0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4c8cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4c8cd4:
    // 0x4c8cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c8cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c8cd8:
    // 0x4c8cd8: 0xc04a576  jal         func_1295D8
label_4c8cdc:
    if (ctx->pc == 0x4C8CDCu) {
        ctx->pc = 0x4C8CDCu;
            // 0x4c8cdc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4C8CE0u;
        goto label_4c8ce0;
    }
    ctx->pc = 0x4C8CD8u;
    SET_GPR_U32(ctx, 31, 0x4C8CE0u);
    ctx->pc = 0x4C8CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8CD8u;
            // 0x4c8cdc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8CE0u; }
        if (ctx->pc != 0x4C8CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8CE0u; }
        if (ctx->pc != 0x4C8CE0u) { return; }
    }
    ctx->pc = 0x4C8CE0u;
label_4c8ce0:
    // 0x4c8ce0: 0x3c0247af  lui         $v0, 0x47AF
    ctx->pc = 0x4c8ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18351 << 16));
label_4c8ce4:
    // 0x4c8ce4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4c8ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4c8ce8:
    // 0x4c8ce8: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x4c8ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_4c8cec:
    // 0x4c8cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c8cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c8cf0:
    // 0x4c8cf0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4c8cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c8cf4:
    // 0x4c8cf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c8cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c8cf8:
    // 0x4c8cf8: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x4c8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_4c8cfc:
    // 0x4c8cfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c8cfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c8d00:
    // 0x4c8d00: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4c8d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4c8d04:
    // 0x4c8d04: 0x344617ae  ori         $a2, $v0, 0x17AE
    ctx->pc = 0x4c8d04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6062);
label_4c8d08:
    // 0x4c8d08: 0xc122cd8  jal         func_48B360
label_4c8d0c:
    if (ctx->pc == 0x4C8D0Cu) {
        ctx->pc = 0x4C8D0Cu;
            // 0x4c8d0c: 0xae5000dc  sw          $s0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 16));
        ctx->pc = 0x4C8D10u;
        goto label_4c8d10;
    }
    ctx->pc = 0x4C8D08u;
    SET_GPR_U32(ctx, 31, 0x4C8D10u);
    ctx->pc = 0x4C8D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8D08u;
            // 0x4c8d0c: 0xae5000dc  sw          $s0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8D10u; }
        if (ctx->pc != 0x4C8D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8D10u; }
        if (ctx->pc != 0x4C8D10u) { return; }
    }
    ctx->pc = 0x4C8D10u;
label_4c8d10:
    // 0x4c8d10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4c8d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4c8d14:
    // 0x4c8d14: 0x3c03471c  lui         $v1, 0x471C
    ctx->pc = 0x4c8d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18204 << 16));
label_4c8d18:
    // 0x4c8d18: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4c8d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4c8d1c:
    // 0x4c8d1c: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x4c8d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_4c8d20:
    // 0x4c8d20: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x4c8d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_4c8d24:
    // 0x4c8d24: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4c8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4c8d28:
    // 0x4c8d28: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4c8d28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c8d2c:
    // 0x4c8d2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4c8d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c8d30:
    // 0x4c8d30: 0x344617ae  ori         $a2, $v0, 0x17AE
    ctx->pc = 0x4c8d30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6062);
label_4c8d34:
    // 0x4c8d34: 0xc122cd8  jal         func_48B360
label_4c8d38:
    if (ctx->pc == 0x4C8D38u) {
        ctx->pc = 0x4C8D38u;
            // 0x4c8d38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C8D3Cu;
        goto label_4c8d3c;
    }
    ctx->pc = 0x4C8D34u;
    SET_GPR_U32(ctx, 31, 0x4C8D3Cu);
    ctx->pc = 0x4C8D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8D34u;
            // 0x4c8d38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8D3Cu; }
        if (ctx->pc != 0x4C8D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8D3Cu; }
        if (ctx->pc != 0x4C8D3Cu) { return; }
    }
    ctx->pc = 0x4C8D3Cu;
label_4c8d3c:
    // 0x4c8d3c: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x4c8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_4c8d40:
    // 0x4c8d40: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x4c8d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_4c8d44:
    // 0x4c8d44: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x4c8d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_4c8d48:
    // 0x4c8d48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4c8d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c8d4c:
    // 0x4c8d4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4c8d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4c8d50:
    // 0x4c8d50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4c8d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c8d54:
    // 0x4c8d54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4c8d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4c8d58:
    // 0x4c8d58: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x4c8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_4c8d5c:
    // 0x4c8d5c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4c8d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c8d60:
    // 0x4c8d60: 0xc122cd8  jal         func_48B360
label_4c8d64:
    if (ctx->pc == 0x4C8D64u) {
        ctx->pc = 0x4C8D64u;
            // 0x4c8d64: 0x344617ae  ori         $a2, $v0, 0x17AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6062);
        ctx->pc = 0x4C8D68u;
        goto label_4c8d68;
    }
    ctx->pc = 0x4C8D60u;
    SET_GPR_U32(ctx, 31, 0x4C8D68u);
    ctx->pc = 0x4C8D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8D60u;
            // 0x4c8d64: 0x344617ae  ori         $a2, $v0, 0x17AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6062);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8D68u; }
        if (ctx->pc != 0x4C8D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8D68u; }
        if (ctx->pc != 0x4C8D68u) { return; }
    }
    ctx->pc = 0x4C8D68u;
label_4c8d68:
    // 0x4c8d68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c8d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4c8d6c:
    // 0x4c8d6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c8d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c8d70:
    // 0x4c8d70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c8d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c8d74:
    // 0x4c8d74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c8d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c8d78:
    // 0x4c8d78: 0x3e00008  jr          $ra
label_4c8d7c:
    if (ctx->pc == 0x4C8D7Cu) {
        ctx->pc = 0x4C8D7Cu;
            // 0x4c8d7c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4C8D80u;
        goto label_4c8d80;
    }
    ctx->pc = 0x4C8D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C8D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8D78u;
            // 0x4c8d7c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C8D80u;
label_4c8d80:
    // 0x4c8d80: 0x8c86003c  lw          $a2, 0x3C($a0)
    ctx->pc = 0x4c8d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_4c8d84:
    // 0x4c8d84: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x4c8d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
label_4c8d88:
    // 0x4c8d88: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x4c8d88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4c8d8c:
    // 0x4c8d8c: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x4c8d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
label_4c8d90:
    // 0x4c8d90: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x4c8d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_4c8d94:
    // 0x4c8d94: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4c8d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_4c8d98:
    // 0x4c8d98: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x4c8d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c8d9c:
    // 0x4c8d9c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x4c8d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c8da0:
    // 0x4c8da0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c8da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c8da4:
    // 0x4c8da4: 0x24a55f60  addiu       $a1, $a1, 0x5F60
    ctx->pc = 0x4c8da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24416));
label_4c8da8:
    // 0x4c8da8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4c8da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4c8dac:
    // 0x4c8dac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4c8dacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4c8db0:
    // 0x4c8db0: 0x3c0642b4  lui         $a2, 0x42B4
    ctx->pc = 0x4c8db0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17076 << 16));
label_4c8db4:
    // 0x4c8db4: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x4c8db4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_4c8db8:
    // 0x4c8db8: 0x0  nop
    ctx->pc = 0x4c8db8u;
    // NOP
label_4c8dbc:
    // 0x4c8dbc: 0xac880100  sw          $t0, 0x100($a0)
    ctx->pc = 0x4c8dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 8));
label_4c8dc0:
    // 0x4c8dc0: 0x8c88003c  lw          $t0, 0x3C($a0)
    ctx->pc = 0x4c8dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_4c8dc4:
    // 0x4c8dc4: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x4c8dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c8dc8:
    // 0x4c8dc8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4c8dc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4c8dcc:
    // 0x4c8dcc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4c8dccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_4c8dd0:
    // 0x4c8dd0: 0xe48000f0  swc1        $f0, 0xF0($a0)
    ctx->pc = 0x4c8dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
label_4c8dd4:
    // 0x4c8dd4: 0xa08700cc  sb          $a3, 0xCC($a0)
    ctx->pc = 0x4c8dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 7));
label_4c8dd8:
    // 0x4c8dd8: 0xac8600c4  sw          $a2, 0xC4($a0)
    ctx->pc = 0x4c8dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 6));
label_4c8ddc:
    // 0x4c8ddc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4c8ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4c8de0:
    // 0x4c8de0: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x4c8de0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_4c8de4:
    // 0x4c8de4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4c8de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4c8de8:
    // 0x4c8de8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x4c8de8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4c8dec:
    // 0x4c8dec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4c8decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4c8df0:
    // 0x4c8df0: 0x3e00008  jr          $ra
label_4c8df4:
    if (ctx->pc == 0x4C8DF4u) {
        ctx->pc = 0x4C8DF4u;
            // 0x4c8df4: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->pc = 0x4C8DF8u;
        goto label_4c8df8;
    }
    ctx->pc = 0x4C8DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C8DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8DF0u;
            // 0x4c8df4: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C8DF8u;
label_4c8df8:
    // 0x4c8df8: 0x0  nop
    ctx->pc = 0x4c8df8u;
    // NOP
label_4c8dfc:
    // 0x4c8dfc: 0x0  nop
    ctx->pc = 0x4c8dfcu;
    // NOP
label_4c8e00:
    // 0x4c8e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c8e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c8e04:
    // 0x4c8e04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c8e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c8e08:
    // 0x4c8e08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c8e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c8e0c:
    // 0x4c8e0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c8e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c8e10:
    // 0x4c8e10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c8e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c8e14:
    // 0x4c8e14: 0xc0baaa0  jal         func_2EAA80
label_4c8e18:
    if (ctx->pc == 0x4C8E18u) {
        ctx->pc = 0x4C8E18u;
            // 0x4c8e18: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4C8E1Cu;
        goto label_4c8e1c;
    }
    ctx->pc = 0x4C8E14u;
    SET_GPR_U32(ctx, 31, 0x4C8E1Cu);
    ctx->pc = 0x4C8E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8E14u;
            // 0x4c8e18: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8E1Cu; }
        if (ctx->pc != 0x4C8E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8E1Cu; }
        if (ctx->pc != 0x4C8E1Cu) { return; }
    }
    ctx->pc = 0x4C8E1Cu;
label_4c8e1c:
    // 0x4c8e1c: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x4c8e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_4c8e20:
    // 0x4c8e20: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x4c8e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4c8e24:
    // 0x4c8e24: 0xc122d2c  jal         func_48B4B0
label_4c8e28:
    if (ctx->pc == 0x4C8E28u) {
        ctx->pc = 0x4C8E28u;
            // 0x4c8e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C8E2Cu;
        goto label_4c8e2c;
    }
    ctx->pc = 0x4C8E24u;
    SET_GPR_U32(ctx, 31, 0x4C8E2Cu);
    ctx->pc = 0x4C8E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8E24u;
            // 0x4c8e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8E2Cu; }
        if (ctx->pc != 0x4C8E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8E2Cu; }
        if (ctx->pc != 0x4C8E2Cu) { return; }
    }
    ctx->pc = 0x4C8E2Cu;
label_4c8e2c:
    // 0x4c8e2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c8e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c8e30:
    // 0x4c8e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c8e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c8e34:
    // 0x4c8e34: 0x3e00008  jr          $ra
label_4c8e38:
    if (ctx->pc == 0x4C8E38u) {
        ctx->pc = 0x4C8E38u;
            // 0x4c8e38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4C8E3Cu;
        goto label_4c8e3c;
    }
    ctx->pc = 0x4C8E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C8E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8E34u;
            // 0x4c8e38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C8E3Cu;
label_4c8e3c:
    // 0x4c8e3c: 0x0  nop
    ctx->pc = 0x4c8e3cu;
    // NOP
label_4c8e40:
    // 0x4c8e40: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4c8e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4c8e44:
    // 0x4c8e44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4c8e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c8e48:
    // 0x4c8e48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4c8e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4c8e4c:
    // 0x4c8e4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4c8e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4c8e50:
    // 0x4c8e50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4c8e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4c8e54:
    // 0x4c8e54: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4c8e54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4c8e58:
    // 0x4c8e58: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x4c8e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_4c8e5c:
    // 0x4c8e5c: 0x10650039  beq         $v1, $a1, . + 4 + (0x39 << 2)
label_4c8e60:
    if (ctx->pc == 0x4C8E60u) {
        ctx->pc = 0x4C8E60u;
            // 0x4c8e60: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C8E64u;
        goto label_4c8e64;
    }
    ctx->pc = 0x4C8E5Cu;
    {
        const bool branch_taken_0x4c8e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4C8E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8E5Cu;
            // 0x4c8e60: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8e5c) {
            ctx->pc = 0x4C8F44u;
            goto label_4c8f44;
        }
    }
    ctx->pc = 0x4C8E64u;
label_4c8e64:
    // 0x4c8e64: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_4c8e68:
    if (ctx->pc == 0x4C8E68u) {
        ctx->pc = 0x4C8E68u;
            // 0x4c8e68: 0xae2500d0  sw          $a1, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 5));
        ctx->pc = 0x4C8E6Cu;
        goto label_4c8e6c;
    }
    ctx->pc = 0x4C8E64u;
    {
        const bool branch_taken_0x4c8e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c8e64) {
            ctx->pc = 0x4C8E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8E64u;
            // 0x4c8e68: 0xae2500d0  sw          $a1, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C8E74u;
            goto label_4c8e74;
        }
    }
    ctx->pc = 0x4C8E6Cu;
label_4c8e6c:
    // 0x4c8e6c: 0x10000052  b           . + 4 + (0x52 << 2)
label_4c8e70:
    if (ctx->pc == 0x4C8E70u) {
        ctx->pc = 0x4C8E70u;
            // 0x4c8e70: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4C8E74u;
        goto label_4c8e74;
    }
    ctx->pc = 0x4C8E6Cu;
    {
        const bool branch_taken_0x4c8e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8E6Cu;
            // 0x4c8e70: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8e6c) {
            ctx->pc = 0x4C8FB8u;
            goto label_4c8fb8;
        }
    }
    ctx->pc = 0x4C8E74u;
label_4c8e74:
    // 0x4c8e74: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c8e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4c8e78:
    // 0x4c8e78: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x4c8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_4c8e7c:
    // 0x4c8e7c: 0x24427370  addiu       $v0, $v0, 0x7370
    ctx->pc = 0x4c8e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29552));
label_4c8e80:
    // 0x4c8e80: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x4c8e80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4c8e84:
    // 0x4c8e84: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4c8e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4c8e88:
    // 0x4c8e88: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x4c8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_4c8e8c:
    // 0x4c8e8c: 0xc04cc04  jal         func_133010
label_4c8e90:
    if (ctx->pc == 0x4C8E90u) {
        ctx->pc = 0x4C8E90u;
            // 0x4c8e90: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4C8E94u;
        goto label_4c8e94;
    }
    ctx->pc = 0x4C8E8Cu;
    SET_GPR_U32(ctx, 31, 0x4C8E94u);
    ctx->pc = 0x4C8E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8E8Cu;
            // 0x4c8e90: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8E94u; }
        if (ctx->pc != 0x4C8E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8E94u; }
        if (ctx->pc != 0x4C8E94u) { return; }
    }
    ctx->pc = 0x4C8E94u;
label_4c8e94:
    // 0x4c8e94: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x4c8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_4c8e98:
    // 0x4c8e98: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c8e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4c8e9c:
    // 0x4c8e9c: 0x24427370  addiu       $v0, $v0, 0x7370
    ctx->pc = 0x4c8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29552));
label_4c8ea0:
    // 0x4c8ea0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4c8ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4c8ea4:
    // 0x4c8ea4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x4c8ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_4c8ea8:
    // 0x4c8ea8: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x4c8ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c8eac:
    // 0x4c8eac: 0xc04cc90  jal         func_133240
label_4c8eb0:
    if (ctx->pc == 0x4C8EB0u) {
        ctx->pc = 0x4C8EB0u;
            // 0x4c8eb0: 0x24c50010  addiu       $a1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->pc = 0x4C8EB4u;
        goto label_4c8eb4;
    }
    ctx->pc = 0x4C8EACu;
    SET_GPR_U32(ctx, 31, 0x4C8EB4u);
    ctx->pc = 0x4C8EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8EACu;
            // 0x4c8eb0: 0x24c50010  addiu       $a1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8EB4u; }
        if (ctx->pc != 0x4C8EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8EB4u; }
        if (ctx->pc != 0x4C8EB4u) { return; }
    }
    ctx->pc = 0x4C8EB4u;
label_4c8eb4:
    // 0x4c8eb4: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x4c8eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_4c8eb8:
    // 0x4c8eb8: 0xc04cc44  jal         func_133110
label_4c8ebc:
    if (ctx->pc == 0x4C8EBCu) {
        ctx->pc = 0x4C8EBCu;
            // 0x4c8ebc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C8EC0u;
        goto label_4c8ec0;
    }
    ctx->pc = 0x4C8EB8u;
    SET_GPR_U32(ctx, 31, 0x4C8EC0u);
    ctx->pc = 0x4C8EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8EB8u;
            // 0x4c8ebc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8EC0u; }
        if (ctx->pc != 0x4C8EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8EC0u; }
        if (ctx->pc != 0x4C8EC0u) { return; }
    }
    ctx->pc = 0x4C8EC0u;
label_4c8ec0:
    // 0x4c8ec0: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x4c8ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c8ec4:
    // 0x4c8ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c8ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c8ec8:
    // 0x4c8ec8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x4c8ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c8ecc:
    // 0x4c8ecc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4c8eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4c8ed0:
    // 0x4c8ed0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x4c8ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c8ed4:
    // 0x4c8ed4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4c8ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_4c8ed8:
    // 0x4c8ed8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x4c8ed8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4c8edc:
    // 0x4c8edc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4c8edcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4c8ee0:
    // 0x4c8ee0: 0xc089290  jal         func_224A40
label_4c8ee4:
    if (ctx->pc == 0x4C8EE4u) {
        ctx->pc = 0x4C8EE4u;
            // 0x4c8ee4: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->pc = 0x4C8EE8u;
        goto label_4c8ee8;
    }
    ctx->pc = 0x4C8EE0u;
    SET_GPR_U32(ctx, 31, 0x4C8EE8u);
    ctx->pc = 0x4C8EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8EE0u;
            // 0x4c8ee4: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8EE8u; }
        if (ctx->pc != 0x4C8EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8EE8u; }
        if (ctx->pc != 0x4C8EE8u) { return; }
    }
    ctx->pc = 0x4C8EE8u;
label_4c8ee8:
    // 0x4c8ee8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x4c8ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4c8eec:
    // 0x4c8eec: 0xc04cc04  jal         func_133010
label_4c8ef0:
    if (ctx->pc == 0x4C8EF0u) {
        ctx->pc = 0x4C8EF0u;
            // 0x4c8ef0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4C8EF4u;
        goto label_4c8ef4;
    }
    ctx->pc = 0x4C8EECu;
    SET_GPR_U32(ctx, 31, 0x4C8EF4u);
    ctx->pc = 0x4C8EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8EECu;
            // 0x4c8ef0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8EF4u; }
        if (ctx->pc != 0x4C8EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8EF4u; }
        if (ctx->pc != 0x4C8EF4u) { return; }
    }
    ctx->pc = 0x4C8EF4u;
label_4c8ef4:
    // 0x4c8ef4: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x4c8ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
label_4c8ef8:
    // 0x4c8ef8: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x4c8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_4c8efc:
    // 0x4c8efc: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x4c8efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c8f00:
    // 0x4c8f00: 0xe62000f4  swc1        $f0, 0xF4($s1)
    ctx->pc = 0x4c8f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
label_4c8f04:
    // 0x4c8f04: 0xc63400f0  lwc1        $f20, 0xF0($s1)
    ctx->pc = 0x4c8f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4c8f08:
    // 0x4c8f08: 0xc04cc14  jal         func_133050
label_4c8f0c:
    if (ctx->pc == 0x4C8F0Cu) {
        ctx->pc = 0x4C8F0Cu;
            // 0x4c8f0c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C8F10u;
        goto label_4c8f10;
    }
    ctx->pc = 0x4C8F08u;
    SET_GPR_U32(ctx, 31, 0x4C8F10u);
    ctx->pc = 0x4C8F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8F08u;
            // 0x4c8f0c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8F10u; }
        if (ctx->pc != 0x4C8F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8F10u; }
        if (ctx->pc != 0x4C8F10u) { return; }
    }
    ctx->pc = 0x4C8F10u;
label_4c8f10:
    // 0x4c8f10: 0x0  nop
    ctx->pc = 0x4c8f10u;
    // NOP
label_4c8f14:
    // 0x4c8f14: 0x0  nop
    ctx->pc = 0x4c8f14u;
    // NOP
label_4c8f18:
    // 0x4c8f18: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x4c8f18u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
label_4c8f1c:
    // 0x4c8f1c: 0xe62000f8  swc1        $f0, 0xF8($s1)
    ctx->pc = 0x4c8f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 248), bits); }
label_4c8f20:
    // 0x4c8f20: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x4c8f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_4c8f24:
    // 0x4c8f24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c8f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c8f28:
    // 0x4c8f28: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x4c8f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c8f2c:
    // 0x4c8f2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4c8f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c8f30:
    // 0x4c8f30: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_4c8f34:
    if (ctx->pc == 0x4C8F34u) {
        ctx->pc = 0x4C8F34u;
            // 0x4c8f34: 0xe62100fc  swc1        $f1, 0xFC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
        ctx->pc = 0x4C8F38u;
        goto label_4c8f38;
    }
    ctx->pc = 0x4C8F30u;
    {
        const bool branch_taken_0x4c8f30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C8F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8F30u;
            // 0x4c8f34: 0xe62100fc  swc1        $f1, 0xFC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8f30) {
            ctx->pc = 0x4C8FB4u;
            goto label_4c8fb4;
        }
    }
    ctx->pc = 0x4C8F38u;
label_4c8f38:
    // 0x4c8f38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c8f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c8f3c:
    // 0x4c8f3c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_4c8f40:
    if (ctx->pc == 0x4C8F40u) {
        ctx->pc = 0x4C8F40u;
            // 0x4c8f40: 0xae2300d4  sw          $v1, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
        ctx->pc = 0x4C8F44u;
        goto label_4c8f44;
    }
    ctx->pc = 0x4C8F3Cu;
    {
        const bool branch_taken_0x4c8f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8F3Cu;
            // 0x4c8f40: 0xae2300d4  sw          $v1, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8f3c) {
            ctx->pc = 0x4C8FB4u;
            goto label_4c8fb4;
        }
    }
    ctx->pc = 0x4C8F44u;
label_4c8f44:
    // 0x4c8f44: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x4c8f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_4c8f48:
    // 0x4c8f48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c8f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c8f4c:
    // 0x4c8f4c: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_4c8f50:
    if (ctx->pc == 0x4C8F50u) {
        ctx->pc = 0x4C8F54u;
        goto label_4c8f54;
    }
    ctx->pc = 0x4C8F4Cu;
    {
        const bool branch_taken_0x4c8f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c8f4c) {
            ctx->pc = 0x4C8FB4u;
            goto label_4c8fb4;
        }
    }
    ctx->pc = 0x4C8F54u;
label_4c8f54:
    // 0x4c8f54: 0x50850005  beql        $a0, $a1, . + 4 + (0x5 << 2)
label_4c8f58:
    if (ctx->pc == 0x4C8F58u) {
        ctx->pc = 0x4C8F58u;
            // 0x4c8f58: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x4C8F5Cu;
        goto label_4c8f5c;
    }
    ctx->pc = 0x4C8F54u;
    {
        const bool branch_taken_0x4c8f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x4c8f54) {
            ctx->pc = 0x4C8F58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8F54u;
            // 0x4c8f58: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C8F6Cu;
            goto label_4c8f6c;
        }
    }
    ctx->pc = 0x4C8F5Cu;
label_4c8f5c:
    // 0x4c8f5c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_4c8f60:
    if (ctx->pc == 0x4C8F60u) {
        ctx->pc = 0x4C8F64u;
        goto label_4c8f64;
    }
    ctx->pc = 0x4C8F5Cu;
    {
        const bool branch_taken_0x4c8f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c8f5c) {
            ctx->pc = 0x4C8FB4u;
            goto label_4c8fb4;
        }
    }
    ctx->pc = 0x4C8F64u;
label_4c8f64:
    // 0x4c8f64: 0x10000013  b           . + 4 + (0x13 << 2)
label_4c8f68:
    if (ctx->pc == 0x4C8F68u) {
        ctx->pc = 0x4C8F6Cu;
        goto label_4c8f6c;
    }
    ctx->pc = 0x4C8F64u;
    {
        const bool branch_taken_0x4c8f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c8f64) {
            ctx->pc = 0x4C8FB4u;
            goto label_4c8fb4;
        }
    }
    ctx->pc = 0x4C8F6Cu;
label_4c8f6c:
    // 0x4c8f6c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4c8f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4c8f70:
    // 0x4c8f70: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4c8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4c8f74:
    // 0x4c8f74: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4c8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4c8f78:
    // 0x4c8f78: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x4c8f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c8f7c:
    // 0x4c8f7c: 0xc089688  jal         func_225A20
label_4c8f80:
    if (ctx->pc == 0x4C8F80u) {
        ctx->pc = 0x4C8F80u;
            // 0x4c8f80: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x4C8F84u;
        goto label_4c8f84;
    }
    ctx->pc = 0x4C8F7Cu;
    SET_GPR_U32(ctx, 31, 0x4C8F84u);
    ctx->pc = 0x4C8F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8F7Cu;
            // 0x4c8f80: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8F84u; }
        if (ctx->pc != 0x4C8F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8F84u; }
        if (ctx->pc != 0x4C8F84u) { return; }
    }
    ctx->pc = 0x4C8F84u;
label_4c8f84:
    // 0x4c8f84: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x4c8f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c8f88:
    // 0x4c8f88: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x4c8f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4c8f8c:
    // 0x4c8f8c: 0xc7ae0088  lwc1        $f14, 0x88($sp)
    ctx->pc = 0x4c8f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4c8f90:
    // 0x4c8f90: 0xc04cbd8  jal         func_132F60
label_4c8f94:
    if (ctx->pc == 0x4C8F94u) {
        ctx->pc = 0x4C8F94u;
            // 0x4c8f94: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4C8F98u;
        goto label_4c8f98;
    }
    ctx->pc = 0x4C8F90u;
    SET_GPR_U32(ctx, 31, 0x4C8F98u);
    ctx->pc = 0x4C8F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8F90u;
            // 0x4c8f94: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8F98u; }
        if (ctx->pc != 0x4C8F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8F98u; }
        if (ctx->pc != 0x4C8F98u) { return; }
    }
    ctx->pc = 0x4C8F98u;
label_4c8f98:
    // 0x4c8f98: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x4c8f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_4c8f9c:
    // 0x4c8f9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4c8f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c8fa0:
    // 0x4c8fa0: 0xc122ce4  jal         func_48B390
label_4c8fa4:
    if (ctx->pc == 0x4C8FA4u) {
        ctx->pc = 0x4C8FA4u;
            // 0x4c8fa4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4C8FA8u;
        goto label_4c8fa8;
    }
    ctx->pc = 0x4C8FA0u;
    SET_GPR_U32(ctx, 31, 0x4C8FA8u);
    ctx->pc = 0x4C8FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8FA0u;
            // 0x4c8fa4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B390u;
    if (runtime->hasFunction(0x48B390u)) {
        auto targetFn = runtime->lookupFunction(0x48B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8FA8u; }
        if (ctx->pc != 0x4C8FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B390_0x48b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8FA8u; }
        if (ctx->pc != 0x4C8FA8u) { return; }
    }
    ctx->pc = 0x4C8FA8u;
label_4c8fa8:
    // 0x4c8fa8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x4c8fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4c8fac:
    // 0x4c8fac: 0xc04cc04  jal         func_133010
label_4c8fb0:
    if (ctx->pc == 0x4C8FB0u) {
        ctx->pc = 0x4C8FB0u;
            // 0x4c8fb0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4C8FB4u;
        goto label_4c8fb4;
    }
    ctx->pc = 0x4C8FACu;
    SET_GPR_U32(ctx, 31, 0x4C8FB4u);
    ctx->pc = 0x4C8FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8FACu;
            // 0x4c8fb0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8FB4u; }
        if (ctx->pc != 0x4C8FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8FB4u; }
        if (ctx->pc != 0x4C8FB4u) { return; }
    }
    ctx->pc = 0x4C8FB4u;
label_4c8fb4:
    // 0x4c8fb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c8fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4c8fb8:
    // 0x4c8fb8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4c8fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4c8fbc:
    // 0x4c8fbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4c8fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c8fc0:
    // 0x4c8fc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4c8fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c8fc4:
    // 0x4c8fc4: 0x3e00008  jr          $ra
label_4c8fc8:
    if (ctx->pc == 0x4C8FC8u) {
        ctx->pc = 0x4C8FC8u;
            // 0x4c8fc8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4C8FCCu;
        goto label_4c8fcc;
    }
    ctx->pc = 0x4C8FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C8FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8FC4u;
            // 0x4c8fc8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C8FCCu;
label_4c8fcc:
    // 0x4c8fcc: 0x0  nop
    ctx->pc = 0x4c8fccu;
    // NOP
label_4c8fd0:
    // 0x4c8fd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4c8fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4c8fd4:
    // 0x4c8fd4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4c8fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4c8fd8:
    // 0x4c8fd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4c8fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4c8fdc:
    // 0x4c8fdc: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x4c8fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_4c8fe0:
    // 0x4c8fe0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4c8fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4c8fe4:
    // 0x4c8fe4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c8fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c8fe8:
    // 0x4c8fe8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4c8fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4c8fec:
    // 0x4c8fec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4c8fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c8ff0:
    // 0x4c8ff0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4c8ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4c8ff4:
    // 0x4c8ff4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c8ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c8ff8:
    // 0x4c8ff8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4c8ff8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4c8ffc:
    // 0x4c8ffc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c8ffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c9000:
    // 0x4c9000: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x4c9000u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4c9004:
    // 0x4c9004: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x4c9004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_4c9008:
    // 0x4c9008: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4c9008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4c900c:
    // 0x4c900c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4c900cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4c9010:
    // 0x4c9010: 0xc08bff0  jal         func_22FFC0
label_4c9014:
    if (ctx->pc == 0x4C9014u) {
        ctx->pc = 0x4C9014u;
            // 0x4c9014: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9018u;
        goto label_4c9018;
    }
    ctx->pc = 0x4C9010u;
    SET_GPR_U32(ctx, 31, 0x4C9018u);
    ctx->pc = 0x4C9014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9010u;
            // 0x4c9014: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9018u; }
        if (ctx->pc != 0x4C9018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9018u; }
        if (ctx->pc != 0x4C9018u) { return; }
    }
    ctx->pc = 0x4C9018u;
label_4c9018:
    // 0x4c9018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c9018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c901c:
    // 0x4c901c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4c901cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4c9020:
    // 0x4c9020: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c9020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c9024:
    // 0x4c9024: 0xc08914c  jal         func_224530
label_4c9028:
    if (ctx->pc == 0x4C9028u) {
        ctx->pc = 0x4C9028u;
            // 0x4c9028: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C902Cu;
        goto label_4c902c;
    }
    ctx->pc = 0x4C9024u;
    SET_GPR_U32(ctx, 31, 0x4C902Cu);
    ctx->pc = 0x4C9028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9024u;
            // 0x4c9028: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C902Cu; }
        if (ctx->pc != 0x4C902Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C902Cu; }
        if (ctx->pc != 0x4C902Cu) { return; }
    }
    ctx->pc = 0x4C902Cu;
label_4c902c:
    // 0x4c902c: 0xc0e393c  jal         func_38E4F0
label_4c9030:
    if (ctx->pc == 0x4C9030u) {
        ctx->pc = 0x4C9030u;
            // 0x4c9030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9034u;
        goto label_4c9034;
    }
    ctx->pc = 0x4C902Cu;
    SET_GPR_U32(ctx, 31, 0x4C9034u);
    ctx->pc = 0x4C9030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C902Cu;
            // 0x4c9030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9034u; }
        if (ctx->pc != 0x4C9034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9034u; }
        if (ctx->pc != 0x4C9034u) { return; }
    }
    ctx->pc = 0x4C9034u;
label_4c9034:
    // 0x4c9034: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x4c9034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_4c9038:
    // 0x4c9038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c9038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c903c:
    // 0x4c903c: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x4c903cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_4c9040:
    // 0x4c9040: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4c9040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4c9044:
    // 0x4c9044: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x4c9044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_4c9048:
    // 0x4c9048: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x4c9048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_4c904c:
    // 0x4c904c: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x4c904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c9050:
    // 0x4c9050: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x4c9050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c9054:
    // 0x4c9054: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x4c9054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c9058:
    // 0x4c9058: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4c9058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c905c:
    // 0x4c905c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x4c905cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_4c9060:
    // 0x4c9060: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x4c9060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_4c9064:
    // 0x4c9064: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x4c9064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_4c9068:
    // 0x4c9068: 0xc0892a0  jal         func_224A80
label_4c906c:
    if (ctx->pc == 0x4C906Cu) {
        ctx->pc = 0x4C906Cu;
            // 0x4c906c: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x4C9070u;
        goto label_4c9070;
    }
    ctx->pc = 0x4C9068u;
    SET_GPR_U32(ctx, 31, 0x4C9070u);
    ctx->pc = 0x4C906Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9068u;
            // 0x4c906c: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9070u; }
        if (ctx->pc != 0x4C9070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A80_0x224a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9070u; }
        if (ctx->pc != 0x4C9070u) { return; }
    }
    ctx->pc = 0x4C9070u;
label_4c9070:
    // 0x4c9070: 0xc088b74  jal         func_222DD0
label_4c9074:
    if (ctx->pc == 0x4C9074u) {
        ctx->pc = 0x4C9074u;
            // 0x4c9074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9078u;
        goto label_4c9078;
    }
    ctx->pc = 0x4C9070u;
    SET_GPR_U32(ctx, 31, 0x4C9078u);
    ctx->pc = 0x4C9074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9070u;
            // 0x4c9074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9078u; }
        if (ctx->pc != 0x4C9078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9078u; }
        if (ctx->pc != 0x4C9078u) { return; }
    }
    ctx->pc = 0x4C9078u;
label_4c9078:
    // 0x4c9078: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4c9078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4c907c:
    // 0x4c907c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4c907cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4c9080:
    // 0x4c9080: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4c9080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4c9084:
    // 0x4c9084: 0x320f809  jalr        $t9
label_4c9088:
    if (ctx->pc == 0x4C9088u) {
        ctx->pc = 0x4C9088u;
            // 0x4c9088: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4C908Cu;
        goto label_4c908c;
    }
    ctx->pc = 0x4C9084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C908Cu);
        ctx->pc = 0x4C9088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9084u;
            // 0x4c9088: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C908Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C908Cu; }
            if (ctx->pc != 0x4C908Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C908Cu;
label_4c908c:
    // 0x4c908c: 0xc088b74  jal         func_222DD0
label_4c9090:
    if (ctx->pc == 0x4C9090u) {
        ctx->pc = 0x4C9090u;
            // 0x4c9090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9094u;
        goto label_4c9094;
    }
    ctx->pc = 0x4C908Cu;
    SET_GPR_U32(ctx, 31, 0x4C9094u);
    ctx->pc = 0x4C9090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C908Cu;
            // 0x4c9090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9094u; }
        if (ctx->pc != 0x4C9094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9094u; }
        if (ctx->pc != 0x4C9094u) { return; }
    }
    ctx->pc = 0x4C9094u;
label_4c9094:
    // 0x4c9094: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4c9094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4c9098:
    // 0x4c9098: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4c9098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4c909c:
    // 0x4c909c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4c909cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4c90a0:
    // 0x4c90a0: 0x320f809  jalr        $t9
label_4c90a4:
    if (ctx->pc == 0x4C90A4u) {
        ctx->pc = 0x4C90A4u;
            // 0x4c90a4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4C90A8u;
        goto label_4c90a8;
    }
    ctx->pc = 0x4C90A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C90A8u);
        ctx->pc = 0x4C90A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C90A0u;
            // 0x4c90a4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C90A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C90A8u; }
            if (ctx->pc != 0x4C90A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4C90A8u;
label_4c90a8:
    // 0x4c90a8: 0x3c0443d1  lui         $a0, 0x43D1
    ctx->pc = 0x4c90a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17361 << 16));
label_4c90ac:
    // 0x4c90ac: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x4c90acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
label_4c90b0:
    // 0x4c90b0: 0x34847084  ori         $a0, $a0, 0x7084
    ctx->pc = 0x4c90b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28804);
label_4c90b4:
    // 0x4c90b4: 0x3463b8c2  ori         $v1, $v1, 0xB8C2
    ctx->pc = 0x4c90b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
label_4c90b8:
    // 0x4c90b8: 0xae040154  sw          $a0, 0x154($s0)
    ctx->pc = 0x4c90b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 4));
label_4c90bc:
    // 0x4c90bc: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x4c90bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_4c90c0:
    // 0x4c90c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4c90c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c90c4:
    // 0x4c90c4: 0xa2200104  sb          $zero, 0x104($s1)
    ctx->pc = 0x4c90c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 260), (uint8_t)GPR_U32(ctx, 0));
label_4c90c8:
    // 0x4c90c8: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x4c90c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_4c90cc:
    // 0x4c90cc: 0xc02826  xor         $a1, $a2, $zero
    ctx->pc = 0x4c90ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 0));
label_4c90d0:
    // 0x4c90d0: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x4c90d0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4c90d4:
    // 0x4c90d4: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x4c90d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4c90d8:
    // 0x4c90d8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4c90d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4c90dc:
    // 0x4c90dc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4c90dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4c90e0:
    // 0x4c90e0: 0xa223004c  sb          $v1, 0x4C($s1)
    ctx->pc = 0x4c90e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 3));
label_4c90e4:
    // 0x4c90e4: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x4c90e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_4c90e8:
    // 0x4c90e8: 0x5464007b  bnel        $v1, $a0, . + 4 + (0x7B << 2)
label_4c90ec:
    if (ctx->pc == 0x4C90ECu) {
        ctx->pc = 0x4C90ECu;
            // 0x4c90ec: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x4C90F0u;
        goto label_4c90f0;
    }
    ctx->pc = 0x4C90E8u;
    {
        const bool branch_taken_0x4c90e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4c90e8) {
            ctx->pc = 0x4C90ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C90E8u;
            // 0x4c90ec: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C92D8u;
            goto label_4c92d8;
        }
    }
    ctx->pc = 0x4C90F0u;
label_4c90f0:
    // 0x4c90f0: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x4c90f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_4c90f4:
    // 0x4c90f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4c90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c90f8:
    // 0x4c90f8: 0x50620063  beql        $v1, $v0, . + 4 + (0x63 << 2)
label_4c90fc:
    if (ctx->pc == 0x4C90FCu) {
        ctx->pc = 0x4C90FCu;
            // 0x4c90fc: 0x8e230100  lw          $v1, 0x100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
        ctx->pc = 0x4C9100u;
        goto label_4c9100;
    }
    ctx->pc = 0x4C90F8u;
    {
        const bool branch_taken_0x4c90f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c90f8) {
            ctx->pc = 0x4C90FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C90F8u;
            // 0x4c90fc: 0x8e230100  lw          $v1, 0x100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C9288u;
            goto label_4c9288;
        }
    }
    ctx->pc = 0x4C9100u;
label_4c9100:
    // 0x4c9100: 0x50640012  beql        $v1, $a0, . + 4 + (0x12 << 2)
label_4c9104:
    if (ctx->pc == 0x4C9104u) {
        ctx->pc = 0x4C9104u;
            // 0x4c9104: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->pc = 0x4C9108u;
        goto label_4c9108;
    }
    ctx->pc = 0x4C9100u;
    {
        const bool branch_taken_0x4c9100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4c9100) {
            ctx->pc = 0x4C9104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9100u;
            // 0x4c9104: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C914Cu;
            goto label_4c914c;
        }
    }
    ctx->pc = 0x4C9108u;
label_4c9108:
    // 0x4c9108: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_4c910c:
    if (ctx->pc == 0x4C910Cu) {
        ctx->pc = 0x4C910Cu;
            // 0x4c910c: 0x8e2200d8  lw          $v0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->pc = 0x4C9110u;
        goto label_4c9110;
    }
    ctx->pc = 0x4C9108u;
    {
        const bool branch_taken_0x4c9108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9108) {
            ctx->pc = 0x4C910Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9108u;
            // 0x4c910c: 0x8e2200d8  lw          $v0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C9118u;
            goto label_4c9118;
        }
    }
    ctx->pc = 0x4C9110u;
label_4c9110:
    // 0x4c9110: 0x10000064  b           . + 4 + (0x64 << 2)
label_4c9114:
    if (ctx->pc == 0x4C9114u) {
        ctx->pc = 0x4C9114u;
            // 0x4c9114: 0xc7a20090  lwc1        $f2, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x4C9118u;
        goto label_4c9118;
    }
    ctx->pc = 0x4C9110u;
    {
        const bool branch_taken_0x4c9110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9110u;
            // 0x4c9114: 0xc7a20090  lwc1        $f2, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9110) {
            ctx->pc = 0x4C92A4u;
            goto label_4c92a4;
        }
    }
    ctx->pc = 0x4C9118u;
label_4c9118:
    // 0x4c9118: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4c9118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4c911c:
    // 0x4c911c: 0x8e250100  lw          $a1, 0x100($s1)
    ctx->pc = 0x4c911cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_4c9120:
    // 0x4c9120: 0x24637370  addiu       $v1, $v1, 0x7370
    ctx->pc = 0x4c9120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29552));
label_4c9124:
    // 0x4c9124: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4c9124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4c9128:
    // 0x4c9128: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4c9128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4c912c:
    // 0x4c912c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x4c912cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_4c9130:
    // 0x4c9130: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4c9130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4c9134:
    // 0x4c9134: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4c9134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4c9138:
    // 0x4c9138: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4c9138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4c913c:
    // 0x4c913c: 0xc04cc04  jal         func_133010
label_4c9140:
    if (ctx->pc == 0x4C9140u) {
        ctx->pc = 0x4C9140u;
            // 0x4c9140: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4C9144u;
        goto label_4c9144;
    }
    ctx->pc = 0x4C913Cu;
    SET_GPR_U32(ctx, 31, 0x4C9144u);
    ctx->pc = 0x4C9140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C913Cu;
            // 0x4c9140: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9144u; }
        if (ctx->pc != 0x4C9144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9144u; }
        if (ctx->pc != 0x4C9144u) { return; }
    }
    ctx->pc = 0x4C9144u;
label_4c9144:
    // 0x4c9144: 0x10000056  b           . + 4 + (0x56 << 2)
label_4c9148:
    if (ctx->pc == 0x4C9148u) {
        ctx->pc = 0x4C914Cu;
        goto label_4c914c;
    }
    ctx->pc = 0x4C9144u;
    {
        const bool branch_taken_0x4c9144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9144) {
            ctx->pc = 0x4C92A0u;
            goto label_4c92a0;
        }
    }
    ctx->pc = 0x4C914Cu;
label_4c914c:
    // 0x4c914c: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x4c914cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_4c9150:
    // 0x4c9150: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4c9150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4c9154:
    // 0x4c9154: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4c9158:
    if (ctx->pc == 0x4C9158u) {
        ctx->pc = 0x4C9158u;
            // 0x4c9158: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4C915Cu;
        goto label_4c915c;
    }
    ctx->pc = 0x4C9154u;
    {
        const bool branch_taken_0x4c9154 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4c9154) {
            ctx->pc = 0x4C9158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9154u;
            // 0x4c9158: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C9168u;
            goto label_4c9168;
        }
    }
    ctx->pc = 0x4C915Cu;
label_4c915c:
    // 0x4c915c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4c915cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c9160:
    // 0x4c9160: 0x10000007  b           . + 4 + (0x7 << 2)
label_4c9164:
    if (ctx->pc == 0x4C9164u) {
        ctx->pc = 0x4C9164u;
            // 0x4c9164: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4C9168u;
        goto label_4c9168;
    }
    ctx->pc = 0x4C9160u;
    {
        const bool branch_taken_0x4c9160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9160u;
            // 0x4c9164: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9160) {
            ctx->pc = 0x4C9180u;
            goto label_4c9180;
        }
    }
    ctx->pc = 0x4C9168u;
label_4c9168:
    // 0x4c9168: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4c9168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4c916c:
    // 0x4c916c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c916cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4c9170:
    // 0x4c9170: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c9170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c9174:
    // 0x4c9174: 0x0  nop
    ctx->pc = 0x4c9174u;
    // NOP
label_4c9178:
    // 0x4c9178: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4c9178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4c917c:
    // 0x4c917c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x4c917cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_4c9180:
    // 0x4c9180: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4c9180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_4c9184:
    // 0x4c9184: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x4c9184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_4c9188:
    // 0x4c9188: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4c9188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4c918c:
    // 0x4c918c: 0x8e250100  lw          $a1, 0x100($s1)
    ctx->pc = 0x4c918cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_4c9190:
    // 0x4c9190: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4c9190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4c9194:
    // 0x4c9194: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4c9194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4c9198:
    // 0x4c9198: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4c9198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4c919c:
    // 0x4c919c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4c919cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4c91a0:
    // 0x4c91a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c91a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c91a4:
    // 0x4c91a4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4c91a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4c91a8:
    // 0x4c91a8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4c91a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4c91ac:
    // 0x4c91ac: 0x24637370  addiu       $v1, $v1, 0x7370
    ctx->pc = 0x4c91acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29552));
label_4c91b0:
    // 0x4c91b0: 0xc62000f0  lwc1        $f0, 0xF0($s1)
    ctx->pc = 0x4c91b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c91b4:
    // 0x4c91b4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x4c91b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_4c91b8:
    // 0x4c91b8: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x4c91b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4c91bc:
    // 0x4c91bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4c91bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4c91c0:
    // 0x4c91c0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4c91c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4c91c4:
    // 0x4c91c4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4c91c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c91c8:
    // 0x4c91c8: 0xc04cc04  jal         func_133010
label_4c91cc:
    if (ctx->pc == 0x4C91CCu) {
        ctx->pc = 0x4C91CCu;
            // 0x4c91cc: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4C91D0u;
        goto label_4c91d0;
    }
    ctx->pc = 0x4C91C8u;
    SET_GPR_U32(ctx, 31, 0x4C91D0u);
    ctx->pc = 0x4C91CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C91C8u;
            // 0x4c91cc: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C91D0u; }
        if (ctx->pc != 0x4C91D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C91D0u; }
        if (ctx->pc != 0x4C91D0u) { return; }
    }
    ctx->pc = 0x4C91D0u;
label_4c91d0:
    // 0x4c91d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4c91d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4c91d4:
    // 0x4c91d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4c91d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4c91d8:
    // 0x4c91d8: 0xc04cc70  jal         func_1331C0
label_4c91dc:
    if (ctx->pc == 0x4C91DCu) {
        ctx->pc = 0x4C91DCu;
            // 0x4c91dc: 0x262500e0  addiu       $a1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x4C91E0u;
        goto label_4c91e0;
    }
    ctx->pc = 0x4C91D8u;
    SET_GPR_U32(ctx, 31, 0x4C91E0u);
    ctx->pc = 0x4C91DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C91D8u;
            // 0x4c91dc: 0x262500e0  addiu       $a1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C91E0u; }
        if (ctx->pc != 0x4C91E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C91E0u; }
        if (ctx->pc != 0x4C91E0u) { return; }
    }
    ctx->pc = 0x4C91E0u;
label_4c91e0:
    // 0x4c91e0: 0xc62100f8  lwc1        $f1, 0xF8($s1)
    ctx->pc = 0x4c91e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c91e4:
    // 0x4c91e4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4c91e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4c91e8:
    // 0x4c91e8: 0xc62000fc  lwc1        $f0, 0xFC($s1)
    ctx->pc = 0x4c91e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c91ec:
    // 0x4c91ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4c91ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c91f0:
    // 0x4c91f0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x4c91f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4c91f4:
    // 0x4c91f4: 0xc04cc7c  jal         func_1331F0
label_4c91f8:
    if (ctx->pc == 0x4C91F8u) {
        ctx->pc = 0x4C91F8u;
            // 0x4c91f8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4C91FCu;
        goto label_4c91fc;
    }
    ctx->pc = 0x4C91F4u;
    SET_GPR_U32(ctx, 31, 0x4C91FCu);
    ctx->pc = 0x4C91F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C91F4u;
            // 0x4c91f8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C91FCu; }
        if (ctx->pc != 0x4C91FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C91FCu; }
        if (ctx->pc != 0x4C91FCu) { return; }
    }
    ctx->pc = 0x4C91FCu;
label_4c91fc:
    // 0x4c91fc: 0xc7a60080  lwc1        $f6, 0x80($sp)
    ctx->pc = 0x4c91fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4c9200:
    // 0x4c9200: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4c9200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4c9204:
    // 0x4c9204: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x4c9204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4c9208:
    // 0x4c9208: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4c9208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4c920c:
    // 0x4c920c: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x4c920cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4c9210:
    // 0x4c9210: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x4c9210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_4c9214:
    // 0x4c9214: 0xe7a60070  swc1        $f6, 0x70($sp)
    ctx->pc = 0x4c9214u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_4c9218:
    // 0x4c9218: 0xe7a50074  swc1        $f5, 0x74($sp)
    ctx->pc = 0x4c9218u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_4c921c:
    // 0x4c921c: 0xe7a40078  swc1        $f4, 0x78($sp)
    ctx->pc = 0x4c921cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_4c9220:
    // 0x4c9220: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x4c9220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c9224:
    // 0x4c9224: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x4c9224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c9228:
    // 0x4c9228: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4c9228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4c922c:
    // 0x4c922c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x4c922cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4c9230:
    // 0x4c9230: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x4c9230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_4c9234:
    // 0x4c9234: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x4c9234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_4c9238:
    // 0x4c9238: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x4c9238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_4c923c:
    // 0x4c923c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x4c923cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_4c9240:
    // 0x4c9240: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x4c9240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4c9244:
    // 0x4c9244: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x4c9244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4c9248:
    // 0x4c9248: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x4c9248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_4c924c:
    // 0x4c924c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x4c924cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_4c9250:
    // 0x4c9250: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x4c9250u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4c9254:
    // 0x4c9254: 0xc088b74  jal         func_222DD0
label_4c9258:
    if (ctx->pc == 0x4C9258u) {
        ctx->pc = 0x4C9258u;
            // 0x4c9258: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C925Cu;
        goto label_4c925c;
    }
    ctx->pc = 0x4C9254u;
    SET_GPR_U32(ctx, 31, 0x4C925Cu);
    ctx->pc = 0x4C9258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9254u;
            // 0x4c9258: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C925Cu; }
        if (ctx->pc != 0x4C925Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C925Cu; }
        if (ctx->pc != 0x4C925Cu) { return; }
    }
    ctx->pc = 0x4C925Cu;
label_4c925c:
    // 0x4c925c: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x4c925cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_4c9260:
    // 0x4c9260: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x4c9260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_4c9264:
    // 0x4c9264: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4c9264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4c9268:
    // 0x4c9268: 0x320f809  jalr        $t9
label_4c926c:
    if (ctx->pc == 0x4C926Cu) {
        ctx->pc = 0x4C926Cu;
            // 0x4c926c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4C9270u;
        goto label_4c9270;
    }
    ctx->pc = 0x4C9268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C9270u);
        ctx->pc = 0x4C926Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9268u;
            // 0x4c926c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C9270u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C9270u; }
            if (ctx->pc != 0x4C9270u) { return; }
        }
        }
    }
    ctx->pc = 0x4C9270u;
label_4c9270:
    // 0x4c9270: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x4c9270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_4c9274:
    // 0x4c9274: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4c9274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c9278:
    // 0x4c9278: 0xc122d2c  jal         func_48B4B0
label_4c927c:
    if (ctx->pc == 0x4C927Cu) {
        ctx->pc = 0x4C927Cu;
            // 0x4c927c: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x4C9280u;
        goto label_4c9280;
    }
    ctx->pc = 0x4C9278u;
    SET_GPR_U32(ctx, 31, 0x4C9280u);
    ctx->pc = 0x4C927Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9278u;
            // 0x4c927c: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9280u; }
        if (ctx->pc != 0x4C9280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9280u; }
        if (ctx->pc != 0x4C9280u) { return; }
    }
    ctx->pc = 0x4C9280u;
label_4c9280:
    // 0x4c9280: 0x10000007  b           . + 4 + (0x7 << 2)
label_4c9284:
    if (ctx->pc == 0x4C9284u) {
        ctx->pc = 0x4C9288u;
        goto label_4c9288;
    }
    ctx->pc = 0x4C9280u;
    {
        const bool branch_taken_0x4c9280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9280) {
            ctx->pc = 0x4C92A0u;
            goto label_4c92a0;
        }
    }
    ctx->pc = 0x4C9288u;
label_4c9288:
    // 0x4c9288: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c9288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4c928c:
    // 0x4c928c: 0x24427370  addiu       $v0, $v0, 0x7370
    ctx->pc = 0x4c928cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29552));
label_4c9290:
    // 0x4c9290: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4c9290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4c9294:
    // 0x4c9294: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x4c9294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_4c9298:
    // 0x4c9298: 0xc04cc04  jal         func_133010
label_4c929c:
    if (ctx->pc == 0x4C929Cu) {
        ctx->pc = 0x4C929Cu;
            // 0x4c929c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4C92A0u;
        goto label_4c92a0;
    }
    ctx->pc = 0x4C9298u;
    SET_GPR_U32(ctx, 31, 0x4C92A0u);
    ctx->pc = 0x4C929Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9298u;
            // 0x4c929c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C92A0u; }
        if (ctx->pc != 0x4C92A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C92A0u; }
        if (ctx->pc != 0x4C92A0u) { return; }
    }
    ctx->pc = 0x4C92A0u;
label_4c92a0:
    // 0x4c92a0: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x4c92a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c92a4:
    // 0x4c92a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c92a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c92a8:
    // 0x4c92a8: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x4c92a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c92ac:
    // 0x4c92ac: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4c92acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4c92b0:
    // 0x4c92b0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x4c92b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c92b4:
    // 0x4c92b4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4c92b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4c92b8:
    // 0x4c92b8: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x4c92b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4c92bc:
    // 0x4c92bc: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4c92bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4c92c0:
    // 0x4c92c0: 0xc089290  jal         func_224A40
label_4c92c4:
    if (ctx->pc == 0x4C92C4u) {
        ctx->pc = 0x4C92C4u;
            // 0x4c92c4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->pc = 0x4C92C8u;
        goto label_4c92c8;
    }
    ctx->pc = 0x4C92C0u;
    SET_GPR_U32(ctx, 31, 0x4C92C8u);
    ctx->pc = 0x4C92C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C92C0u;
            // 0x4c92c4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C92C8u; }
        if (ctx->pc != 0x4C92C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C92C8u; }
        if (ctx->pc != 0x4C92C8u) { return; }
    }
    ctx->pc = 0x4C92C8u;
label_4c92c8:
    // 0x4c92c8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x4c92c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4c92cc:
    // 0x4c92cc: 0xc04cc04  jal         func_133010
label_4c92d0:
    if (ctx->pc == 0x4C92D0u) {
        ctx->pc = 0x4C92D0u;
            // 0x4c92d0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C92D4u;
        goto label_4c92d4;
    }
    ctx->pc = 0x4C92CCu;
    SET_GPR_U32(ctx, 31, 0x4C92D4u);
    ctx->pc = 0x4C92D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C92CCu;
            // 0x4c92d0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C92D4u; }
        if (ctx->pc != 0x4C92D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C92D4u; }
        if (ctx->pc != 0x4C92D4u) { return; }
    }
    ctx->pc = 0x4C92D4u;
label_4c92d4:
    // 0x4c92d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c92d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4c92d8:
    // 0x4c92d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4c92d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4c92dc:
    // 0x4c92dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4c92dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c92e0:
    // 0x4c92e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4c92e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c92e4:
    // 0x4c92e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4c92e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c92e8:
    // 0x4c92e8: 0x3e00008  jr          $ra
label_4c92ec:
    if (ctx->pc == 0x4C92ECu) {
        ctx->pc = 0x4C92ECu;
            // 0x4c92ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4C92F0u;
        goto label_fallthrough_0x4c92e8;
    }
    ctx->pc = 0x4C92E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C92ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C92E8u;
            // 0x4c92ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4c92e8:
    ctx->pc = 0x4C92F0u;
}
