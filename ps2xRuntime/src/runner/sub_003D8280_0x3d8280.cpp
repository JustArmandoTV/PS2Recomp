#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D8280
// Address: 0x3d8280 - 0x3d8d10
void sub_003D8280_0x3d8280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8280_0x3d8280");
#endif

    switch (ctx->pc) {
        case 0x3d8280u: goto label_3d8280;
        case 0x3d8284u: goto label_3d8284;
        case 0x3d8288u: goto label_3d8288;
        case 0x3d828cu: goto label_3d828c;
        case 0x3d8290u: goto label_3d8290;
        case 0x3d8294u: goto label_3d8294;
        case 0x3d8298u: goto label_3d8298;
        case 0x3d829cu: goto label_3d829c;
        case 0x3d82a0u: goto label_3d82a0;
        case 0x3d82a4u: goto label_3d82a4;
        case 0x3d82a8u: goto label_3d82a8;
        case 0x3d82acu: goto label_3d82ac;
        case 0x3d82b0u: goto label_3d82b0;
        case 0x3d82b4u: goto label_3d82b4;
        case 0x3d82b8u: goto label_3d82b8;
        case 0x3d82bcu: goto label_3d82bc;
        case 0x3d82c0u: goto label_3d82c0;
        case 0x3d82c4u: goto label_3d82c4;
        case 0x3d82c8u: goto label_3d82c8;
        case 0x3d82ccu: goto label_3d82cc;
        case 0x3d82d0u: goto label_3d82d0;
        case 0x3d82d4u: goto label_3d82d4;
        case 0x3d82d8u: goto label_3d82d8;
        case 0x3d82dcu: goto label_3d82dc;
        case 0x3d82e0u: goto label_3d82e0;
        case 0x3d82e4u: goto label_3d82e4;
        case 0x3d82e8u: goto label_3d82e8;
        case 0x3d82ecu: goto label_3d82ec;
        case 0x3d82f0u: goto label_3d82f0;
        case 0x3d82f4u: goto label_3d82f4;
        case 0x3d82f8u: goto label_3d82f8;
        case 0x3d82fcu: goto label_3d82fc;
        case 0x3d8300u: goto label_3d8300;
        case 0x3d8304u: goto label_3d8304;
        case 0x3d8308u: goto label_3d8308;
        case 0x3d830cu: goto label_3d830c;
        case 0x3d8310u: goto label_3d8310;
        case 0x3d8314u: goto label_3d8314;
        case 0x3d8318u: goto label_3d8318;
        case 0x3d831cu: goto label_3d831c;
        case 0x3d8320u: goto label_3d8320;
        case 0x3d8324u: goto label_3d8324;
        case 0x3d8328u: goto label_3d8328;
        case 0x3d832cu: goto label_3d832c;
        case 0x3d8330u: goto label_3d8330;
        case 0x3d8334u: goto label_3d8334;
        case 0x3d8338u: goto label_3d8338;
        case 0x3d833cu: goto label_3d833c;
        case 0x3d8340u: goto label_3d8340;
        case 0x3d8344u: goto label_3d8344;
        case 0x3d8348u: goto label_3d8348;
        case 0x3d834cu: goto label_3d834c;
        case 0x3d8350u: goto label_3d8350;
        case 0x3d8354u: goto label_3d8354;
        case 0x3d8358u: goto label_3d8358;
        case 0x3d835cu: goto label_3d835c;
        case 0x3d8360u: goto label_3d8360;
        case 0x3d8364u: goto label_3d8364;
        case 0x3d8368u: goto label_3d8368;
        case 0x3d836cu: goto label_3d836c;
        case 0x3d8370u: goto label_3d8370;
        case 0x3d8374u: goto label_3d8374;
        case 0x3d8378u: goto label_3d8378;
        case 0x3d837cu: goto label_3d837c;
        case 0x3d8380u: goto label_3d8380;
        case 0x3d8384u: goto label_3d8384;
        case 0x3d8388u: goto label_3d8388;
        case 0x3d838cu: goto label_3d838c;
        case 0x3d8390u: goto label_3d8390;
        case 0x3d8394u: goto label_3d8394;
        case 0x3d8398u: goto label_3d8398;
        case 0x3d839cu: goto label_3d839c;
        case 0x3d83a0u: goto label_3d83a0;
        case 0x3d83a4u: goto label_3d83a4;
        case 0x3d83a8u: goto label_3d83a8;
        case 0x3d83acu: goto label_3d83ac;
        case 0x3d83b0u: goto label_3d83b0;
        case 0x3d83b4u: goto label_3d83b4;
        case 0x3d83b8u: goto label_3d83b8;
        case 0x3d83bcu: goto label_3d83bc;
        case 0x3d83c0u: goto label_3d83c0;
        case 0x3d83c4u: goto label_3d83c4;
        case 0x3d83c8u: goto label_3d83c8;
        case 0x3d83ccu: goto label_3d83cc;
        case 0x3d83d0u: goto label_3d83d0;
        case 0x3d83d4u: goto label_3d83d4;
        case 0x3d83d8u: goto label_3d83d8;
        case 0x3d83dcu: goto label_3d83dc;
        case 0x3d83e0u: goto label_3d83e0;
        case 0x3d83e4u: goto label_3d83e4;
        case 0x3d83e8u: goto label_3d83e8;
        case 0x3d83ecu: goto label_3d83ec;
        case 0x3d83f0u: goto label_3d83f0;
        case 0x3d83f4u: goto label_3d83f4;
        case 0x3d83f8u: goto label_3d83f8;
        case 0x3d83fcu: goto label_3d83fc;
        case 0x3d8400u: goto label_3d8400;
        case 0x3d8404u: goto label_3d8404;
        case 0x3d8408u: goto label_3d8408;
        case 0x3d840cu: goto label_3d840c;
        case 0x3d8410u: goto label_3d8410;
        case 0x3d8414u: goto label_3d8414;
        case 0x3d8418u: goto label_3d8418;
        case 0x3d841cu: goto label_3d841c;
        case 0x3d8420u: goto label_3d8420;
        case 0x3d8424u: goto label_3d8424;
        case 0x3d8428u: goto label_3d8428;
        case 0x3d842cu: goto label_3d842c;
        case 0x3d8430u: goto label_3d8430;
        case 0x3d8434u: goto label_3d8434;
        case 0x3d8438u: goto label_3d8438;
        case 0x3d843cu: goto label_3d843c;
        case 0x3d8440u: goto label_3d8440;
        case 0x3d8444u: goto label_3d8444;
        case 0x3d8448u: goto label_3d8448;
        case 0x3d844cu: goto label_3d844c;
        case 0x3d8450u: goto label_3d8450;
        case 0x3d8454u: goto label_3d8454;
        case 0x3d8458u: goto label_3d8458;
        case 0x3d845cu: goto label_3d845c;
        case 0x3d8460u: goto label_3d8460;
        case 0x3d8464u: goto label_3d8464;
        case 0x3d8468u: goto label_3d8468;
        case 0x3d846cu: goto label_3d846c;
        case 0x3d8470u: goto label_3d8470;
        case 0x3d8474u: goto label_3d8474;
        case 0x3d8478u: goto label_3d8478;
        case 0x3d847cu: goto label_3d847c;
        case 0x3d8480u: goto label_3d8480;
        case 0x3d8484u: goto label_3d8484;
        case 0x3d8488u: goto label_3d8488;
        case 0x3d848cu: goto label_3d848c;
        case 0x3d8490u: goto label_3d8490;
        case 0x3d8494u: goto label_3d8494;
        case 0x3d8498u: goto label_3d8498;
        case 0x3d849cu: goto label_3d849c;
        case 0x3d84a0u: goto label_3d84a0;
        case 0x3d84a4u: goto label_3d84a4;
        case 0x3d84a8u: goto label_3d84a8;
        case 0x3d84acu: goto label_3d84ac;
        case 0x3d84b0u: goto label_3d84b0;
        case 0x3d84b4u: goto label_3d84b4;
        case 0x3d84b8u: goto label_3d84b8;
        case 0x3d84bcu: goto label_3d84bc;
        case 0x3d84c0u: goto label_3d84c0;
        case 0x3d84c4u: goto label_3d84c4;
        case 0x3d84c8u: goto label_3d84c8;
        case 0x3d84ccu: goto label_3d84cc;
        case 0x3d84d0u: goto label_3d84d0;
        case 0x3d84d4u: goto label_3d84d4;
        case 0x3d84d8u: goto label_3d84d8;
        case 0x3d84dcu: goto label_3d84dc;
        case 0x3d84e0u: goto label_3d84e0;
        case 0x3d84e4u: goto label_3d84e4;
        case 0x3d84e8u: goto label_3d84e8;
        case 0x3d84ecu: goto label_3d84ec;
        case 0x3d84f0u: goto label_3d84f0;
        case 0x3d84f4u: goto label_3d84f4;
        case 0x3d84f8u: goto label_3d84f8;
        case 0x3d84fcu: goto label_3d84fc;
        case 0x3d8500u: goto label_3d8500;
        case 0x3d8504u: goto label_3d8504;
        case 0x3d8508u: goto label_3d8508;
        case 0x3d850cu: goto label_3d850c;
        case 0x3d8510u: goto label_3d8510;
        case 0x3d8514u: goto label_3d8514;
        case 0x3d8518u: goto label_3d8518;
        case 0x3d851cu: goto label_3d851c;
        case 0x3d8520u: goto label_3d8520;
        case 0x3d8524u: goto label_3d8524;
        case 0x3d8528u: goto label_3d8528;
        case 0x3d852cu: goto label_3d852c;
        case 0x3d8530u: goto label_3d8530;
        case 0x3d8534u: goto label_3d8534;
        case 0x3d8538u: goto label_3d8538;
        case 0x3d853cu: goto label_3d853c;
        case 0x3d8540u: goto label_3d8540;
        case 0x3d8544u: goto label_3d8544;
        case 0x3d8548u: goto label_3d8548;
        case 0x3d854cu: goto label_3d854c;
        case 0x3d8550u: goto label_3d8550;
        case 0x3d8554u: goto label_3d8554;
        case 0x3d8558u: goto label_3d8558;
        case 0x3d855cu: goto label_3d855c;
        case 0x3d8560u: goto label_3d8560;
        case 0x3d8564u: goto label_3d8564;
        case 0x3d8568u: goto label_3d8568;
        case 0x3d856cu: goto label_3d856c;
        case 0x3d8570u: goto label_3d8570;
        case 0x3d8574u: goto label_3d8574;
        case 0x3d8578u: goto label_3d8578;
        case 0x3d857cu: goto label_3d857c;
        case 0x3d8580u: goto label_3d8580;
        case 0x3d8584u: goto label_3d8584;
        case 0x3d8588u: goto label_3d8588;
        case 0x3d858cu: goto label_3d858c;
        case 0x3d8590u: goto label_3d8590;
        case 0x3d8594u: goto label_3d8594;
        case 0x3d8598u: goto label_3d8598;
        case 0x3d859cu: goto label_3d859c;
        case 0x3d85a0u: goto label_3d85a0;
        case 0x3d85a4u: goto label_3d85a4;
        case 0x3d85a8u: goto label_3d85a8;
        case 0x3d85acu: goto label_3d85ac;
        case 0x3d85b0u: goto label_3d85b0;
        case 0x3d85b4u: goto label_3d85b4;
        case 0x3d85b8u: goto label_3d85b8;
        case 0x3d85bcu: goto label_3d85bc;
        case 0x3d85c0u: goto label_3d85c0;
        case 0x3d85c4u: goto label_3d85c4;
        case 0x3d85c8u: goto label_3d85c8;
        case 0x3d85ccu: goto label_3d85cc;
        case 0x3d85d0u: goto label_3d85d0;
        case 0x3d85d4u: goto label_3d85d4;
        case 0x3d85d8u: goto label_3d85d8;
        case 0x3d85dcu: goto label_3d85dc;
        case 0x3d85e0u: goto label_3d85e0;
        case 0x3d85e4u: goto label_3d85e4;
        case 0x3d85e8u: goto label_3d85e8;
        case 0x3d85ecu: goto label_3d85ec;
        case 0x3d85f0u: goto label_3d85f0;
        case 0x3d85f4u: goto label_3d85f4;
        case 0x3d85f8u: goto label_3d85f8;
        case 0x3d85fcu: goto label_3d85fc;
        case 0x3d8600u: goto label_3d8600;
        case 0x3d8604u: goto label_3d8604;
        case 0x3d8608u: goto label_3d8608;
        case 0x3d860cu: goto label_3d860c;
        case 0x3d8610u: goto label_3d8610;
        case 0x3d8614u: goto label_3d8614;
        case 0x3d8618u: goto label_3d8618;
        case 0x3d861cu: goto label_3d861c;
        case 0x3d8620u: goto label_3d8620;
        case 0x3d8624u: goto label_3d8624;
        case 0x3d8628u: goto label_3d8628;
        case 0x3d862cu: goto label_3d862c;
        case 0x3d8630u: goto label_3d8630;
        case 0x3d8634u: goto label_3d8634;
        case 0x3d8638u: goto label_3d8638;
        case 0x3d863cu: goto label_3d863c;
        case 0x3d8640u: goto label_3d8640;
        case 0x3d8644u: goto label_3d8644;
        case 0x3d8648u: goto label_3d8648;
        case 0x3d864cu: goto label_3d864c;
        case 0x3d8650u: goto label_3d8650;
        case 0x3d8654u: goto label_3d8654;
        case 0x3d8658u: goto label_3d8658;
        case 0x3d865cu: goto label_3d865c;
        case 0x3d8660u: goto label_3d8660;
        case 0x3d8664u: goto label_3d8664;
        case 0x3d8668u: goto label_3d8668;
        case 0x3d866cu: goto label_3d866c;
        case 0x3d8670u: goto label_3d8670;
        case 0x3d8674u: goto label_3d8674;
        case 0x3d8678u: goto label_3d8678;
        case 0x3d867cu: goto label_3d867c;
        case 0x3d8680u: goto label_3d8680;
        case 0x3d8684u: goto label_3d8684;
        case 0x3d8688u: goto label_3d8688;
        case 0x3d868cu: goto label_3d868c;
        case 0x3d8690u: goto label_3d8690;
        case 0x3d8694u: goto label_3d8694;
        case 0x3d8698u: goto label_3d8698;
        case 0x3d869cu: goto label_3d869c;
        case 0x3d86a0u: goto label_3d86a0;
        case 0x3d86a4u: goto label_3d86a4;
        case 0x3d86a8u: goto label_3d86a8;
        case 0x3d86acu: goto label_3d86ac;
        case 0x3d86b0u: goto label_3d86b0;
        case 0x3d86b4u: goto label_3d86b4;
        case 0x3d86b8u: goto label_3d86b8;
        case 0x3d86bcu: goto label_3d86bc;
        case 0x3d86c0u: goto label_3d86c0;
        case 0x3d86c4u: goto label_3d86c4;
        case 0x3d86c8u: goto label_3d86c8;
        case 0x3d86ccu: goto label_3d86cc;
        case 0x3d86d0u: goto label_3d86d0;
        case 0x3d86d4u: goto label_3d86d4;
        case 0x3d86d8u: goto label_3d86d8;
        case 0x3d86dcu: goto label_3d86dc;
        case 0x3d86e0u: goto label_3d86e0;
        case 0x3d86e4u: goto label_3d86e4;
        case 0x3d86e8u: goto label_3d86e8;
        case 0x3d86ecu: goto label_3d86ec;
        case 0x3d86f0u: goto label_3d86f0;
        case 0x3d86f4u: goto label_3d86f4;
        case 0x3d86f8u: goto label_3d86f8;
        case 0x3d86fcu: goto label_3d86fc;
        case 0x3d8700u: goto label_3d8700;
        case 0x3d8704u: goto label_3d8704;
        case 0x3d8708u: goto label_3d8708;
        case 0x3d870cu: goto label_3d870c;
        case 0x3d8710u: goto label_3d8710;
        case 0x3d8714u: goto label_3d8714;
        case 0x3d8718u: goto label_3d8718;
        case 0x3d871cu: goto label_3d871c;
        case 0x3d8720u: goto label_3d8720;
        case 0x3d8724u: goto label_3d8724;
        case 0x3d8728u: goto label_3d8728;
        case 0x3d872cu: goto label_3d872c;
        case 0x3d8730u: goto label_3d8730;
        case 0x3d8734u: goto label_3d8734;
        case 0x3d8738u: goto label_3d8738;
        case 0x3d873cu: goto label_3d873c;
        case 0x3d8740u: goto label_3d8740;
        case 0x3d8744u: goto label_3d8744;
        case 0x3d8748u: goto label_3d8748;
        case 0x3d874cu: goto label_3d874c;
        case 0x3d8750u: goto label_3d8750;
        case 0x3d8754u: goto label_3d8754;
        case 0x3d8758u: goto label_3d8758;
        case 0x3d875cu: goto label_3d875c;
        case 0x3d8760u: goto label_3d8760;
        case 0x3d8764u: goto label_3d8764;
        case 0x3d8768u: goto label_3d8768;
        case 0x3d876cu: goto label_3d876c;
        case 0x3d8770u: goto label_3d8770;
        case 0x3d8774u: goto label_3d8774;
        case 0x3d8778u: goto label_3d8778;
        case 0x3d877cu: goto label_3d877c;
        case 0x3d8780u: goto label_3d8780;
        case 0x3d8784u: goto label_3d8784;
        case 0x3d8788u: goto label_3d8788;
        case 0x3d878cu: goto label_3d878c;
        case 0x3d8790u: goto label_3d8790;
        case 0x3d8794u: goto label_3d8794;
        case 0x3d8798u: goto label_3d8798;
        case 0x3d879cu: goto label_3d879c;
        case 0x3d87a0u: goto label_3d87a0;
        case 0x3d87a4u: goto label_3d87a4;
        case 0x3d87a8u: goto label_3d87a8;
        case 0x3d87acu: goto label_3d87ac;
        case 0x3d87b0u: goto label_3d87b0;
        case 0x3d87b4u: goto label_3d87b4;
        case 0x3d87b8u: goto label_3d87b8;
        case 0x3d87bcu: goto label_3d87bc;
        case 0x3d87c0u: goto label_3d87c0;
        case 0x3d87c4u: goto label_3d87c4;
        case 0x3d87c8u: goto label_3d87c8;
        case 0x3d87ccu: goto label_3d87cc;
        case 0x3d87d0u: goto label_3d87d0;
        case 0x3d87d4u: goto label_3d87d4;
        case 0x3d87d8u: goto label_3d87d8;
        case 0x3d87dcu: goto label_3d87dc;
        case 0x3d87e0u: goto label_3d87e0;
        case 0x3d87e4u: goto label_3d87e4;
        case 0x3d87e8u: goto label_3d87e8;
        case 0x3d87ecu: goto label_3d87ec;
        case 0x3d87f0u: goto label_3d87f0;
        case 0x3d87f4u: goto label_3d87f4;
        case 0x3d87f8u: goto label_3d87f8;
        case 0x3d87fcu: goto label_3d87fc;
        case 0x3d8800u: goto label_3d8800;
        case 0x3d8804u: goto label_3d8804;
        case 0x3d8808u: goto label_3d8808;
        case 0x3d880cu: goto label_3d880c;
        case 0x3d8810u: goto label_3d8810;
        case 0x3d8814u: goto label_3d8814;
        case 0x3d8818u: goto label_3d8818;
        case 0x3d881cu: goto label_3d881c;
        case 0x3d8820u: goto label_3d8820;
        case 0x3d8824u: goto label_3d8824;
        case 0x3d8828u: goto label_3d8828;
        case 0x3d882cu: goto label_3d882c;
        case 0x3d8830u: goto label_3d8830;
        case 0x3d8834u: goto label_3d8834;
        case 0x3d8838u: goto label_3d8838;
        case 0x3d883cu: goto label_3d883c;
        case 0x3d8840u: goto label_3d8840;
        case 0x3d8844u: goto label_3d8844;
        case 0x3d8848u: goto label_3d8848;
        case 0x3d884cu: goto label_3d884c;
        case 0x3d8850u: goto label_3d8850;
        case 0x3d8854u: goto label_3d8854;
        case 0x3d8858u: goto label_3d8858;
        case 0x3d885cu: goto label_3d885c;
        case 0x3d8860u: goto label_3d8860;
        case 0x3d8864u: goto label_3d8864;
        case 0x3d8868u: goto label_3d8868;
        case 0x3d886cu: goto label_3d886c;
        case 0x3d8870u: goto label_3d8870;
        case 0x3d8874u: goto label_3d8874;
        case 0x3d8878u: goto label_3d8878;
        case 0x3d887cu: goto label_3d887c;
        case 0x3d8880u: goto label_3d8880;
        case 0x3d8884u: goto label_3d8884;
        case 0x3d8888u: goto label_3d8888;
        case 0x3d888cu: goto label_3d888c;
        case 0x3d8890u: goto label_3d8890;
        case 0x3d8894u: goto label_3d8894;
        case 0x3d8898u: goto label_3d8898;
        case 0x3d889cu: goto label_3d889c;
        case 0x3d88a0u: goto label_3d88a0;
        case 0x3d88a4u: goto label_3d88a4;
        case 0x3d88a8u: goto label_3d88a8;
        case 0x3d88acu: goto label_3d88ac;
        case 0x3d88b0u: goto label_3d88b0;
        case 0x3d88b4u: goto label_3d88b4;
        case 0x3d88b8u: goto label_3d88b8;
        case 0x3d88bcu: goto label_3d88bc;
        case 0x3d88c0u: goto label_3d88c0;
        case 0x3d88c4u: goto label_3d88c4;
        case 0x3d88c8u: goto label_3d88c8;
        case 0x3d88ccu: goto label_3d88cc;
        case 0x3d88d0u: goto label_3d88d0;
        case 0x3d88d4u: goto label_3d88d4;
        case 0x3d88d8u: goto label_3d88d8;
        case 0x3d88dcu: goto label_3d88dc;
        case 0x3d88e0u: goto label_3d88e0;
        case 0x3d88e4u: goto label_3d88e4;
        case 0x3d88e8u: goto label_3d88e8;
        case 0x3d88ecu: goto label_3d88ec;
        case 0x3d88f0u: goto label_3d88f0;
        case 0x3d88f4u: goto label_3d88f4;
        case 0x3d88f8u: goto label_3d88f8;
        case 0x3d88fcu: goto label_3d88fc;
        case 0x3d8900u: goto label_3d8900;
        case 0x3d8904u: goto label_3d8904;
        case 0x3d8908u: goto label_3d8908;
        case 0x3d890cu: goto label_3d890c;
        case 0x3d8910u: goto label_3d8910;
        case 0x3d8914u: goto label_3d8914;
        case 0x3d8918u: goto label_3d8918;
        case 0x3d891cu: goto label_3d891c;
        case 0x3d8920u: goto label_3d8920;
        case 0x3d8924u: goto label_3d8924;
        case 0x3d8928u: goto label_3d8928;
        case 0x3d892cu: goto label_3d892c;
        case 0x3d8930u: goto label_3d8930;
        case 0x3d8934u: goto label_3d8934;
        case 0x3d8938u: goto label_3d8938;
        case 0x3d893cu: goto label_3d893c;
        case 0x3d8940u: goto label_3d8940;
        case 0x3d8944u: goto label_3d8944;
        case 0x3d8948u: goto label_3d8948;
        case 0x3d894cu: goto label_3d894c;
        case 0x3d8950u: goto label_3d8950;
        case 0x3d8954u: goto label_3d8954;
        case 0x3d8958u: goto label_3d8958;
        case 0x3d895cu: goto label_3d895c;
        case 0x3d8960u: goto label_3d8960;
        case 0x3d8964u: goto label_3d8964;
        case 0x3d8968u: goto label_3d8968;
        case 0x3d896cu: goto label_3d896c;
        case 0x3d8970u: goto label_3d8970;
        case 0x3d8974u: goto label_3d8974;
        case 0x3d8978u: goto label_3d8978;
        case 0x3d897cu: goto label_3d897c;
        case 0x3d8980u: goto label_3d8980;
        case 0x3d8984u: goto label_3d8984;
        case 0x3d8988u: goto label_3d8988;
        case 0x3d898cu: goto label_3d898c;
        case 0x3d8990u: goto label_3d8990;
        case 0x3d8994u: goto label_3d8994;
        case 0x3d8998u: goto label_3d8998;
        case 0x3d899cu: goto label_3d899c;
        case 0x3d89a0u: goto label_3d89a0;
        case 0x3d89a4u: goto label_3d89a4;
        case 0x3d89a8u: goto label_3d89a8;
        case 0x3d89acu: goto label_3d89ac;
        case 0x3d89b0u: goto label_3d89b0;
        case 0x3d89b4u: goto label_3d89b4;
        case 0x3d89b8u: goto label_3d89b8;
        case 0x3d89bcu: goto label_3d89bc;
        case 0x3d89c0u: goto label_3d89c0;
        case 0x3d89c4u: goto label_3d89c4;
        case 0x3d89c8u: goto label_3d89c8;
        case 0x3d89ccu: goto label_3d89cc;
        case 0x3d89d0u: goto label_3d89d0;
        case 0x3d89d4u: goto label_3d89d4;
        case 0x3d89d8u: goto label_3d89d8;
        case 0x3d89dcu: goto label_3d89dc;
        case 0x3d89e0u: goto label_3d89e0;
        case 0x3d89e4u: goto label_3d89e4;
        case 0x3d89e8u: goto label_3d89e8;
        case 0x3d89ecu: goto label_3d89ec;
        case 0x3d89f0u: goto label_3d89f0;
        case 0x3d89f4u: goto label_3d89f4;
        case 0x3d89f8u: goto label_3d89f8;
        case 0x3d89fcu: goto label_3d89fc;
        case 0x3d8a00u: goto label_3d8a00;
        case 0x3d8a04u: goto label_3d8a04;
        case 0x3d8a08u: goto label_3d8a08;
        case 0x3d8a0cu: goto label_3d8a0c;
        case 0x3d8a10u: goto label_3d8a10;
        case 0x3d8a14u: goto label_3d8a14;
        case 0x3d8a18u: goto label_3d8a18;
        case 0x3d8a1cu: goto label_3d8a1c;
        case 0x3d8a20u: goto label_3d8a20;
        case 0x3d8a24u: goto label_3d8a24;
        case 0x3d8a28u: goto label_3d8a28;
        case 0x3d8a2cu: goto label_3d8a2c;
        case 0x3d8a30u: goto label_3d8a30;
        case 0x3d8a34u: goto label_3d8a34;
        case 0x3d8a38u: goto label_3d8a38;
        case 0x3d8a3cu: goto label_3d8a3c;
        case 0x3d8a40u: goto label_3d8a40;
        case 0x3d8a44u: goto label_3d8a44;
        case 0x3d8a48u: goto label_3d8a48;
        case 0x3d8a4cu: goto label_3d8a4c;
        case 0x3d8a50u: goto label_3d8a50;
        case 0x3d8a54u: goto label_3d8a54;
        case 0x3d8a58u: goto label_3d8a58;
        case 0x3d8a5cu: goto label_3d8a5c;
        case 0x3d8a60u: goto label_3d8a60;
        case 0x3d8a64u: goto label_3d8a64;
        case 0x3d8a68u: goto label_3d8a68;
        case 0x3d8a6cu: goto label_3d8a6c;
        case 0x3d8a70u: goto label_3d8a70;
        case 0x3d8a74u: goto label_3d8a74;
        case 0x3d8a78u: goto label_3d8a78;
        case 0x3d8a7cu: goto label_3d8a7c;
        case 0x3d8a80u: goto label_3d8a80;
        case 0x3d8a84u: goto label_3d8a84;
        case 0x3d8a88u: goto label_3d8a88;
        case 0x3d8a8cu: goto label_3d8a8c;
        case 0x3d8a90u: goto label_3d8a90;
        case 0x3d8a94u: goto label_3d8a94;
        case 0x3d8a98u: goto label_3d8a98;
        case 0x3d8a9cu: goto label_3d8a9c;
        case 0x3d8aa0u: goto label_3d8aa0;
        case 0x3d8aa4u: goto label_3d8aa4;
        case 0x3d8aa8u: goto label_3d8aa8;
        case 0x3d8aacu: goto label_3d8aac;
        case 0x3d8ab0u: goto label_3d8ab0;
        case 0x3d8ab4u: goto label_3d8ab4;
        case 0x3d8ab8u: goto label_3d8ab8;
        case 0x3d8abcu: goto label_3d8abc;
        case 0x3d8ac0u: goto label_3d8ac0;
        case 0x3d8ac4u: goto label_3d8ac4;
        case 0x3d8ac8u: goto label_3d8ac8;
        case 0x3d8accu: goto label_3d8acc;
        case 0x3d8ad0u: goto label_3d8ad0;
        case 0x3d8ad4u: goto label_3d8ad4;
        case 0x3d8ad8u: goto label_3d8ad8;
        case 0x3d8adcu: goto label_3d8adc;
        case 0x3d8ae0u: goto label_3d8ae0;
        case 0x3d8ae4u: goto label_3d8ae4;
        case 0x3d8ae8u: goto label_3d8ae8;
        case 0x3d8aecu: goto label_3d8aec;
        case 0x3d8af0u: goto label_3d8af0;
        case 0x3d8af4u: goto label_3d8af4;
        case 0x3d8af8u: goto label_3d8af8;
        case 0x3d8afcu: goto label_3d8afc;
        case 0x3d8b00u: goto label_3d8b00;
        case 0x3d8b04u: goto label_3d8b04;
        case 0x3d8b08u: goto label_3d8b08;
        case 0x3d8b0cu: goto label_3d8b0c;
        case 0x3d8b10u: goto label_3d8b10;
        case 0x3d8b14u: goto label_3d8b14;
        case 0x3d8b18u: goto label_3d8b18;
        case 0x3d8b1cu: goto label_3d8b1c;
        case 0x3d8b20u: goto label_3d8b20;
        case 0x3d8b24u: goto label_3d8b24;
        case 0x3d8b28u: goto label_3d8b28;
        case 0x3d8b2cu: goto label_3d8b2c;
        case 0x3d8b30u: goto label_3d8b30;
        case 0x3d8b34u: goto label_3d8b34;
        case 0x3d8b38u: goto label_3d8b38;
        case 0x3d8b3cu: goto label_3d8b3c;
        case 0x3d8b40u: goto label_3d8b40;
        case 0x3d8b44u: goto label_3d8b44;
        case 0x3d8b48u: goto label_3d8b48;
        case 0x3d8b4cu: goto label_3d8b4c;
        case 0x3d8b50u: goto label_3d8b50;
        case 0x3d8b54u: goto label_3d8b54;
        case 0x3d8b58u: goto label_3d8b58;
        case 0x3d8b5cu: goto label_3d8b5c;
        case 0x3d8b60u: goto label_3d8b60;
        case 0x3d8b64u: goto label_3d8b64;
        case 0x3d8b68u: goto label_3d8b68;
        case 0x3d8b6cu: goto label_3d8b6c;
        case 0x3d8b70u: goto label_3d8b70;
        case 0x3d8b74u: goto label_3d8b74;
        case 0x3d8b78u: goto label_3d8b78;
        case 0x3d8b7cu: goto label_3d8b7c;
        case 0x3d8b80u: goto label_3d8b80;
        case 0x3d8b84u: goto label_3d8b84;
        case 0x3d8b88u: goto label_3d8b88;
        case 0x3d8b8cu: goto label_3d8b8c;
        case 0x3d8b90u: goto label_3d8b90;
        case 0x3d8b94u: goto label_3d8b94;
        case 0x3d8b98u: goto label_3d8b98;
        case 0x3d8b9cu: goto label_3d8b9c;
        case 0x3d8ba0u: goto label_3d8ba0;
        case 0x3d8ba4u: goto label_3d8ba4;
        case 0x3d8ba8u: goto label_3d8ba8;
        case 0x3d8bacu: goto label_3d8bac;
        case 0x3d8bb0u: goto label_3d8bb0;
        case 0x3d8bb4u: goto label_3d8bb4;
        case 0x3d8bb8u: goto label_3d8bb8;
        case 0x3d8bbcu: goto label_3d8bbc;
        case 0x3d8bc0u: goto label_3d8bc0;
        case 0x3d8bc4u: goto label_3d8bc4;
        case 0x3d8bc8u: goto label_3d8bc8;
        case 0x3d8bccu: goto label_3d8bcc;
        case 0x3d8bd0u: goto label_3d8bd0;
        case 0x3d8bd4u: goto label_3d8bd4;
        case 0x3d8bd8u: goto label_3d8bd8;
        case 0x3d8bdcu: goto label_3d8bdc;
        case 0x3d8be0u: goto label_3d8be0;
        case 0x3d8be4u: goto label_3d8be4;
        case 0x3d8be8u: goto label_3d8be8;
        case 0x3d8becu: goto label_3d8bec;
        case 0x3d8bf0u: goto label_3d8bf0;
        case 0x3d8bf4u: goto label_3d8bf4;
        case 0x3d8bf8u: goto label_3d8bf8;
        case 0x3d8bfcu: goto label_3d8bfc;
        case 0x3d8c00u: goto label_3d8c00;
        case 0x3d8c04u: goto label_3d8c04;
        case 0x3d8c08u: goto label_3d8c08;
        case 0x3d8c0cu: goto label_3d8c0c;
        case 0x3d8c10u: goto label_3d8c10;
        case 0x3d8c14u: goto label_3d8c14;
        case 0x3d8c18u: goto label_3d8c18;
        case 0x3d8c1cu: goto label_3d8c1c;
        case 0x3d8c20u: goto label_3d8c20;
        case 0x3d8c24u: goto label_3d8c24;
        case 0x3d8c28u: goto label_3d8c28;
        case 0x3d8c2cu: goto label_3d8c2c;
        case 0x3d8c30u: goto label_3d8c30;
        case 0x3d8c34u: goto label_3d8c34;
        case 0x3d8c38u: goto label_3d8c38;
        case 0x3d8c3cu: goto label_3d8c3c;
        case 0x3d8c40u: goto label_3d8c40;
        case 0x3d8c44u: goto label_3d8c44;
        case 0x3d8c48u: goto label_3d8c48;
        case 0x3d8c4cu: goto label_3d8c4c;
        case 0x3d8c50u: goto label_3d8c50;
        case 0x3d8c54u: goto label_3d8c54;
        case 0x3d8c58u: goto label_3d8c58;
        case 0x3d8c5cu: goto label_3d8c5c;
        case 0x3d8c60u: goto label_3d8c60;
        case 0x3d8c64u: goto label_3d8c64;
        case 0x3d8c68u: goto label_3d8c68;
        case 0x3d8c6cu: goto label_3d8c6c;
        case 0x3d8c70u: goto label_3d8c70;
        case 0x3d8c74u: goto label_3d8c74;
        case 0x3d8c78u: goto label_3d8c78;
        case 0x3d8c7cu: goto label_3d8c7c;
        case 0x3d8c80u: goto label_3d8c80;
        case 0x3d8c84u: goto label_3d8c84;
        case 0x3d8c88u: goto label_3d8c88;
        case 0x3d8c8cu: goto label_3d8c8c;
        case 0x3d8c90u: goto label_3d8c90;
        case 0x3d8c94u: goto label_3d8c94;
        case 0x3d8c98u: goto label_3d8c98;
        case 0x3d8c9cu: goto label_3d8c9c;
        case 0x3d8ca0u: goto label_3d8ca0;
        case 0x3d8ca4u: goto label_3d8ca4;
        case 0x3d8ca8u: goto label_3d8ca8;
        case 0x3d8cacu: goto label_3d8cac;
        case 0x3d8cb0u: goto label_3d8cb0;
        case 0x3d8cb4u: goto label_3d8cb4;
        case 0x3d8cb8u: goto label_3d8cb8;
        case 0x3d8cbcu: goto label_3d8cbc;
        case 0x3d8cc0u: goto label_3d8cc0;
        case 0x3d8cc4u: goto label_3d8cc4;
        case 0x3d8cc8u: goto label_3d8cc8;
        case 0x3d8cccu: goto label_3d8ccc;
        case 0x3d8cd0u: goto label_3d8cd0;
        case 0x3d8cd4u: goto label_3d8cd4;
        case 0x3d8cd8u: goto label_3d8cd8;
        case 0x3d8cdcu: goto label_3d8cdc;
        case 0x3d8ce0u: goto label_3d8ce0;
        case 0x3d8ce4u: goto label_3d8ce4;
        case 0x3d8ce8u: goto label_3d8ce8;
        case 0x3d8cecu: goto label_3d8cec;
        case 0x3d8cf0u: goto label_3d8cf0;
        case 0x3d8cf4u: goto label_3d8cf4;
        case 0x3d8cf8u: goto label_3d8cf8;
        case 0x3d8cfcu: goto label_3d8cfc;
        case 0x3d8d00u: goto label_3d8d00;
        case 0x3d8d04u: goto label_3d8d04;
        case 0x3d8d08u: goto label_3d8d08;
        case 0x3d8d0cu: goto label_3d8d0c;
        default: break;
    }

    ctx->pc = 0x3d8280u;

label_3d8280:
    // 0x3d8280: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d8280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d8284:
    // 0x3d8284: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3d8284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d8288:
    // 0x3d8288: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d8288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3d828c:
    // 0x3d828c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d828cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d8290:
    // 0x3d8290: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d8290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d8294:
    // 0x3d8294: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d8294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d8298:
    // 0x3d8298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d8298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d829c:
    // 0x3d829c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d829cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d82a0:
    // 0x3d82a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d82a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d82a4:
    // 0x3d82a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3d82a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d82a8:
    // 0x3d82a8: 0xc10ca68  jal         func_4329A0
label_3d82ac:
    if (ctx->pc == 0x3D82ACu) {
        ctx->pc = 0x3D82ACu;
            // 0x3d82ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3D82B0u;
        goto label_3d82b0;
    }
    ctx->pc = 0x3D82A8u;
    SET_GPR_U32(ctx, 31, 0x3D82B0u);
    ctx->pc = 0x3D82ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D82A8u;
            // 0x3d82ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D82B0u; }
        if (ctx->pc != 0x3D82B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D82B0u; }
        if (ctx->pc != 0x3D82B0u) { return; }
    }
    ctx->pc = 0x3D82B0u;
label_3d82b0:
    // 0x3d82b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3d82b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3d82b4:
    // 0x3d82b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d82b8:
    // 0x3d82b8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3d82b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_3d82bc:
    // 0x3d82bc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3d82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3d82c0:
    // 0x3d82c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3d82c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3d82c4:
    // 0x3d82c4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x3d82c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_3d82c8:
    // 0x3d82c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3d82c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3d82cc:
    // 0x3d82cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d82ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d82d0:
    // 0x3d82d0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3d82d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3d82d4:
    // 0x3d82d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d82d8:
    // 0x3d82d8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x3d82d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_3d82dc:
    // 0x3d82dc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3d82dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d82e0:
    // 0x3d82e0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x3d82e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_3d82e4:
    // 0x3d82e4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x3d82e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_3d82e8:
    // 0x3d82e8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x3d82e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_3d82ec:
    // 0x3d82ec: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x3d82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_3d82f0:
    // 0x3d82f0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x3d82f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_3d82f4:
    // 0x3d82f4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3d82f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3d82f8:
    // 0x3d82f8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x3d82f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3d82fc:
    // 0x3d82fc: 0xc0582cc  jal         func_160B30
label_3d8300:
    if (ctx->pc == 0x3D8300u) {
        ctx->pc = 0x3D8300u;
            // 0x3d8300: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x3D8304u;
        goto label_3d8304;
    }
    ctx->pc = 0x3D82FCu;
    SET_GPR_U32(ctx, 31, 0x3D8304u);
    ctx->pc = 0x3D8300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D82FCu;
            // 0x3d8300: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8304u; }
        if (ctx->pc != 0x3D8304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8304u; }
        if (ctx->pc != 0x3D8304u) { return; }
    }
    ctx->pc = 0x3D8304u;
label_3d8304:
    // 0x3d8304: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d8304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d8308:
    // 0x3d8308: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x3d8308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_3d830c:
    // 0x3d830c: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x3d830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
label_3d8310:
    // 0x3d8310: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x3d8310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_3d8314:
    // 0x3d8314: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x3d8314u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_3d8318:
    // 0x3d8318: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d8318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d831c:
    // 0x3d831c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d831cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d8320:
    // 0x3d8320: 0xac446eb0  sw          $a0, 0x6EB0($v0)
    ctx->pc = 0x3d8320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28336), GPR_U32(ctx, 4));
label_3d8324:
    // 0x3d8324: 0x246396c0  addiu       $v1, $v1, -0x6940
    ctx->pc = 0x3d8324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940352));
label_3d8328:
    // 0x3d8328: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d8328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d832c:
    // 0x3d832c: 0x244296f8  addiu       $v0, $v0, -0x6908
    ctx->pc = 0x3d832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940408));
label_3d8330:
    // 0x3d8330: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3d8330u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3d8334:
    // 0x3d8334: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x3d8334u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_3d8338:
    // 0x3d8338: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x3d8338u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_3d833c:
    // 0x3d833c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x3d833cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_3d8340:
    // 0x3d8340: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x3d8340u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_3d8344:
    // 0x3d8344: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x3d8344u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_3d8348:
    // 0x3d8348: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x3d8348u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_3d834c:
    // 0x3d834c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x3d834cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_3d8350:
    // 0x3d8350: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x3d8350u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_3d8354:
    // 0x3d8354: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x3d8354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_3d8358:
    // 0x3d8358: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x3d8358u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_3d835c:
    // 0x3d835c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x3d835cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_3d8360:
    // 0x3d8360: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x3d8360u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3d8364:
    // 0x3d8364: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_3d8368:
    if (ctx->pc == 0x3D8368u) {
        ctx->pc = 0x3D836Cu;
        goto label_3d836c;
    }
    ctx->pc = 0x3D8364u;
    {
        const bool branch_taken_0x3d8364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8364) {
            ctx->pc = 0x3D83F8u;
            goto label_3d83f8;
        }
    }
    ctx->pc = 0x3D836Cu;
label_3d836c:
    // 0x3d836c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3d836cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3d8370:
    // 0x3d8370: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3d8370u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3d8374:
    // 0x3d8374: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3d8374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3d8378:
    // 0x3d8378: 0xc040138  jal         func_1004E0
label_3d837c:
    if (ctx->pc == 0x3D837Cu) {
        ctx->pc = 0x3D837Cu;
            // 0x3d837c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3D8380u;
        goto label_3d8380;
    }
    ctx->pc = 0x3D8378u;
    SET_GPR_U32(ctx, 31, 0x3D8380u);
    ctx->pc = 0x3D837Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8378u;
            // 0x3d837c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8380u; }
        if (ctx->pc != 0x3D8380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8380u; }
        if (ctx->pc != 0x3D8380u) { return; }
    }
    ctx->pc = 0x3D8380u;
label_3d8380:
    // 0x3d8380: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3d8380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_3d8384:
    // 0x3d8384: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3d8384u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
label_3d8388:
    // 0x3d8388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d8388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d838c:
    // 0x3d838c: 0x24a58420  addiu       $a1, $a1, -0x7BE0
    ctx->pc = 0x3d838cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935584));
label_3d8390:
    // 0x3d8390: 0x24c67ca0  addiu       $a2, $a2, 0x7CA0
    ctx->pc = 0x3d8390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31904));
label_3d8394:
    // 0x3d8394: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x3d8394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3d8398:
    // 0x3d8398: 0xc040840  jal         func_102100
label_3d839c:
    if (ctx->pc == 0x3D839Cu) {
        ctx->pc = 0x3D839Cu;
            // 0x3d839c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D83A0u;
        goto label_3d83a0;
    }
    ctx->pc = 0x3D8398u;
    SET_GPR_U32(ctx, 31, 0x3D83A0u);
    ctx->pc = 0x3D839Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8398u;
            // 0x3d839c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D83A0u; }
        if (ctx->pc != 0x3D83A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D83A0u; }
        if (ctx->pc != 0x3D83A0u) { return; }
    }
    ctx->pc = 0x3D83A0u;
label_3d83a0:
    // 0x3d83a0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x3d83a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_3d83a4:
    // 0x3d83a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d83a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d83a8:
    // 0x3d83a8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x3d83a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_3d83ac:
    // 0x3d83ac: 0xc0788fc  jal         func_1E23F0
label_3d83b0:
    if (ctx->pc == 0x3D83B0u) {
        ctx->pc = 0x3D83B0u;
            // 0x3d83b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D83B4u;
        goto label_3d83b4;
    }
    ctx->pc = 0x3D83ACu;
    SET_GPR_U32(ctx, 31, 0x3D83B4u);
    ctx->pc = 0x3D83B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D83ACu;
            // 0x3d83b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D83B4u; }
        if (ctx->pc != 0x3D83B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D83B4u; }
        if (ctx->pc != 0x3D83B4u) { return; }
    }
    ctx->pc = 0x3D83B4u;
label_3d83b4:
    // 0x3d83b4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3d83b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3d83b8:
    // 0x3d83b8: 0xc0788fc  jal         func_1E23F0
label_3d83bc:
    if (ctx->pc == 0x3D83BCu) {
        ctx->pc = 0x3D83BCu;
            // 0x3d83bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D83C0u;
        goto label_3d83c0;
    }
    ctx->pc = 0x3D83B8u;
    SET_GPR_U32(ctx, 31, 0x3D83C0u);
    ctx->pc = 0x3D83BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D83B8u;
            // 0x3d83bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D83C0u; }
        if (ctx->pc != 0x3D83C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D83C0u; }
        if (ctx->pc != 0x3D83C0u) { return; }
    }
    ctx->pc = 0x3D83C0u;
label_3d83c0:
    // 0x3d83c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d83c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d83c4:
    // 0x3d83c4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x3d83c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_3d83c8:
    // 0x3d83c8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3d83c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3d83cc:
    // 0x3d83cc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x3d83ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_3d83d0:
    // 0x3d83d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d83d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d83d4:
    // 0x3d83d4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x3d83d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_3d83d8:
    // 0x3d83d8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x3d83d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_3d83dc:
    // 0x3d83dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d83dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d83e0:
    // 0x3d83e0: 0xc0a997c  jal         func_2A65F0
label_3d83e4:
    if (ctx->pc == 0x3D83E4u) {
        ctx->pc = 0x3D83E4u;
            // 0x3d83e4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3D83E8u;
        goto label_3d83e8;
    }
    ctx->pc = 0x3D83E0u;
    SET_GPR_U32(ctx, 31, 0x3D83E8u);
    ctx->pc = 0x3D83E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D83E0u;
            // 0x3d83e4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D83E8u; }
        if (ctx->pc != 0x3D83E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D83E8u; }
        if (ctx->pc != 0x3D83E8u) { return; }
    }
    ctx->pc = 0x3D83E8u;
label_3d83e8:
    // 0x3d83e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d83e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3d83ec:
    // 0x3d83ec: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3d83ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3d83f0:
    // 0x3d83f0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3d83f4:
    if (ctx->pc == 0x3D83F4u) {
        ctx->pc = 0x3D83F4u;
            // 0x3d83f4: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x3D83F8u;
        goto label_3d83f8;
    }
    ctx->pc = 0x3D83F0u;
    {
        const bool branch_taken_0x3d83f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D83F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D83F0u;
            // 0x3d83f4: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d83f0) {
            ctx->pc = 0x3D83C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d83c4;
        }
    }
    ctx->pc = 0x3D83F8u;
label_3d83f8:
    // 0x3d83f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3d83f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d83fc:
    // 0x3d83fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d83fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d8400:
    // 0x3d8400: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d8400u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d8404:
    // 0x3d8404: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d8404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8408:
    // 0x3d8408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d8408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d840c:
    // 0x3d840c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d840cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8410:
    // 0x3d8410: 0x3e00008  jr          $ra
label_3d8414:
    if (ctx->pc == 0x3D8414u) {
        ctx->pc = 0x3D8414u;
            // 0x3d8414: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3D8418u;
        goto label_3d8418;
    }
    ctx->pc = 0x3D8410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8410u;
            // 0x3d8414: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D8418u;
label_3d8418:
    // 0x3d8418: 0x0  nop
    ctx->pc = 0x3d8418u;
    // NOP
label_3d841c:
    // 0x3d841c: 0x0  nop
    ctx->pc = 0x3d841cu;
    // NOP
label_3d8420:
    // 0x3d8420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d8420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d8424:
    // 0x3d8424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d8424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d8428:
    // 0x3d8428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d8428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d842c:
    // 0x3d842c: 0xc0b1370  jal         func_2C4DC0
label_3d8430:
    if (ctx->pc == 0x3D8430u) {
        ctx->pc = 0x3D8430u;
            // 0x3d8430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8434u;
        goto label_3d8434;
    }
    ctx->pc = 0x3D842Cu;
    SET_GPR_U32(ctx, 31, 0x3D8434u);
    ctx->pc = 0x3D8430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D842Cu;
            // 0x3d8430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8434u; }
        if (ctx->pc != 0x3D8434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8434u; }
        if (ctx->pc != 0x3D8434u) { return; }
    }
    ctx->pc = 0x3D8434u;
label_3d8434:
    // 0x3d8434: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d8434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d8438:
    // 0x3d8438: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d8438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d843c:
    // 0x3d843c: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x3d843cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_3d8440:
    // 0x3d8440: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3d8440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_3d8444:
    // 0x3d8444: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d8444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3d8448:
    // 0x3d8448: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x3d8448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_3d844c:
    // 0x3d844c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3d844cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3d8450:
    // 0x3d8450: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d8450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d8454:
    // 0x3d8454: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x3d8454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_3d8458:
    // 0x3d8458: 0x24849600  addiu       $a0, $a0, -0x6A00
    ctx->pc = 0x3d8458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940160));
label_3d845c:
    // 0x3d845c: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x3d845cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
label_3d8460:
    // 0x3d8460: 0x24639640  addiu       $v1, $v1, -0x69C0
    ctx->pc = 0x3d8460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940224));
label_3d8464:
    // 0x3d8464: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x3d8464u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
label_3d8468:
    // 0x3d8468: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d8468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d846c:
    // 0x3d846c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3d846cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3d8470:
    // 0x3d8470: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3d8470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3d8474:
    // 0x3d8474: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x3d8474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_3d8478:
    // 0x3d8478: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x3d8478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_3d847c:
    // 0x3d847c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d847cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d8480:
    // 0x3d8480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d8480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8484:
    // 0x3d8484: 0x3e00008  jr          $ra
label_3d8488:
    if (ctx->pc == 0x3D8488u) {
        ctx->pc = 0x3D8488u;
            // 0x3d8488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D848Cu;
        goto label_3d848c;
    }
    ctx->pc = 0x3D8484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8484u;
            // 0x3d8488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D848Cu;
label_3d848c:
    // 0x3d848c: 0x0  nop
    ctx->pc = 0x3d848cu;
    // NOP
label_3d8490:
    // 0x3d8490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d8490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d8494:
    // 0x3d8494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d8494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d8498:
    // 0x3d8498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d8498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d849c:
    // 0x3d849c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d849cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d84a0:
    // 0x3d84a0: 0x8c8400e4  lw          $a0, 0xE4($a0)
    ctx->pc = 0x3d84a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_3d84a4:
    // 0x3d84a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3d84a8:
    if (ctx->pc == 0x3D84A8u) {
        ctx->pc = 0x3D84A8u;
            // 0x3d84a8: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x3D84ACu;
        goto label_3d84ac;
    }
    ctx->pc = 0x3D84A4u;
    {
        const bool branch_taken_0x3d84a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d84a4) {
            ctx->pc = 0x3D84A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D84A4u;
            // 0x3d84a8: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D84C0u;
            goto label_3d84c0;
        }
    }
    ctx->pc = 0x3D84ACu;
label_3d84ac:
    // 0x3d84ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d84acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d84b0:
    // 0x3d84b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d84b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d84b4:
    // 0x3d84b4: 0x320f809  jalr        $t9
label_3d84b8:
    if (ctx->pc == 0x3D84B8u) {
        ctx->pc = 0x3D84B8u;
            // 0x3d84b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D84BCu;
        goto label_3d84bc;
    }
    ctx->pc = 0x3D84B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D84BCu);
        ctx->pc = 0x3D84B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D84B4u;
            // 0x3d84b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D84BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D84BCu; }
            if (ctx->pc != 0x3D84BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3D84BCu;
label_3d84bc:
    // 0x3d84bc: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x3d84bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_3d84c0:
    // 0x3d84c0: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x3d84c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3d84c4:
    // 0x3d84c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3d84c8:
    if (ctx->pc == 0x3D84C8u) {
        ctx->pc = 0x3D84C8u;
            // 0x3d84c8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x3D84CCu;
        goto label_3d84cc;
    }
    ctx->pc = 0x3D84C4u;
    {
        const bool branch_taken_0x3d84c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d84c4) {
            ctx->pc = 0x3D84C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D84C4u;
            // 0x3d84c8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D84E0u;
            goto label_3d84e0;
        }
    }
    ctx->pc = 0x3D84CCu;
label_3d84cc:
    // 0x3d84cc: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3d84ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3d84d0:
    // 0x3d84d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d84d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d84d4:
    // 0x3d84d4: 0x320f809  jalr        $t9
label_3d84d8:
    if (ctx->pc == 0x3D84D8u) {
        ctx->pc = 0x3D84D8u;
            // 0x3d84d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D84DCu;
        goto label_3d84dc;
    }
    ctx->pc = 0x3D84D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D84DCu);
        ctx->pc = 0x3D84D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D84D4u;
            // 0x3d84d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D84DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D84DCu; }
            if (ctx->pc != 0x3D84DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3D84DCu;
label_3d84dc:
    // 0x3d84dc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x3d84dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_3d84e0:
    // 0x3d84e0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3d84e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3d84e4:
    // 0x3d84e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3d84e8:
    if (ctx->pc == 0x3D84E8u) {
        ctx->pc = 0x3D84E8u;
            // 0x3d84e8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3D84ECu;
        goto label_3d84ec;
    }
    ctx->pc = 0x3D84E4u;
    {
        const bool branch_taken_0x3d84e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d84e4) {
            ctx->pc = 0x3D84E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D84E4u;
            // 0x3d84e8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D8500u;
            goto label_3d8500;
        }
    }
    ctx->pc = 0x3D84ECu;
label_3d84ec:
    // 0x3d84ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d84ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d84f0:
    // 0x3d84f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d84f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d84f4:
    // 0x3d84f4: 0x320f809  jalr        $t9
label_3d84f8:
    if (ctx->pc == 0x3D84F8u) {
        ctx->pc = 0x3D84F8u;
            // 0x3d84f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D84FCu;
        goto label_3d84fc;
    }
    ctx->pc = 0x3D84F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D84FCu);
        ctx->pc = 0x3D84F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D84F4u;
            // 0x3d84f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D84FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D84FCu; }
            if (ctx->pc != 0x3D84FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3D84FCu;
label_3d84fc:
    // 0x3d84fc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3d84fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_3d8500:
    // 0x3d8500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d8500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d8504:
    // 0x3d8504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d8504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8508:
    // 0x3d8508: 0x3e00008  jr          $ra
label_3d850c:
    if (ctx->pc == 0x3D850Cu) {
        ctx->pc = 0x3D850Cu;
            // 0x3d850c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D8510u;
        goto label_3d8510;
    }
    ctx->pc = 0x3D8508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D850Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8508u;
            // 0x3d850c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D8510u;
label_3d8510:
    // 0x3d8510: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x3d8510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_3d8514:
    // 0x3d8514: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d8514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d8518:
    // 0x3d8518: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d8518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d851c:
    // 0x3d851c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d851cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d8520:
    // 0x3d8520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d8520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d8524:
    // 0x3d8524: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3d8524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3d8528:
    // 0x3d8528: 0xc0892d0  jal         func_224B40
label_3d852c:
    if (ctx->pc == 0x3D852Cu) {
        ctx->pc = 0x3D852Cu;
            // 0x3d852c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3D8530u;
        goto label_3d8530;
    }
    ctx->pc = 0x3D8528u;
    SET_GPR_U32(ctx, 31, 0x3D8530u);
    ctx->pc = 0x3D852Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8528u;
            // 0x3d852c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8530u; }
        if (ctx->pc != 0x3D8530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8530u; }
        if (ctx->pc != 0x3D8530u) { return; }
    }
    ctx->pc = 0x3D8530u;
label_3d8530:
    // 0x3d8530: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d8530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d8534:
    // 0x3d8534: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d8534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d8538:
    // 0x3d8538: 0x8c426eb0  lw          $v0, 0x6EB0($v0)
    ctx->pc = 0x3d8538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28336)));
label_3d853c:
    // 0x3d853c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3d853cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d8540:
    // 0x3d8540: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x3d8540u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_3d8544:
    // 0x3d8544: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x3d8544u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_3d8548:
    // 0x3d8548: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3d8548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_3d854c:
    // 0x3d854c: 0xc0b6e68  jal         func_2DB9A0
label_3d8550:
    if (ctx->pc == 0x3D8550u) {
        ctx->pc = 0x3D8550u;
            // 0x3d8550: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x3D8554u;
        goto label_3d8554;
    }
    ctx->pc = 0x3D854Cu;
    SET_GPR_U32(ctx, 31, 0x3D8554u);
    ctx->pc = 0x3D8550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D854Cu;
            // 0x3d8550: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8554u; }
        if (ctx->pc != 0x3D8554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8554u; }
        if (ctx->pc != 0x3D8554u) { return; }
    }
    ctx->pc = 0x3D8554u;
label_3d8554:
    // 0x3d8554: 0xc0b6dac  jal         func_2DB6B0
label_3d8558:
    if (ctx->pc == 0x3D8558u) {
        ctx->pc = 0x3D8558u;
            // 0x3d8558: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3D855Cu;
        goto label_3d855c;
    }
    ctx->pc = 0x3D8554u;
    SET_GPR_U32(ctx, 31, 0x3D855Cu);
    ctx->pc = 0x3D8558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8554u;
            // 0x3d8558: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D855Cu; }
        if (ctx->pc != 0x3D855Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D855Cu; }
        if (ctx->pc != 0x3D855Cu) { return; }
    }
    ctx->pc = 0x3D855Cu;
label_3d855c:
    // 0x3d855c: 0xc0cac94  jal         func_32B250
label_3d8560:
    if (ctx->pc == 0x3D8560u) {
        ctx->pc = 0x3D8560u;
            // 0x3d8560: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3D8564u;
        goto label_3d8564;
    }
    ctx->pc = 0x3D855Cu;
    SET_GPR_U32(ctx, 31, 0x3D8564u);
    ctx->pc = 0x3D8560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D855Cu;
            // 0x3d8560: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8564u; }
        if (ctx->pc != 0x3D8564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8564u; }
        if (ctx->pc != 0x3D8564u) { return; }
    }
    ctx->pc = 0x3D8564u;
label_3d8564:
    // 0x3d8564: 0xc0cac84  jal         func_32B210
label_3d8568:
    if (ctx->pc == 0x3D8568u) {
        ctx->pc = 0x3D8568u;
            // 0x3d8568: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3D856Cu;
        goto label_3d856c;
    }
    ctx->pc = 0x3D8564u;
    SET_GPR_U32(ctx, 31, 0x3D856Cu);
    ctx->pc = 0x3D8568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8564u;
            // 0x3d8568: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D856Cu; }
        if (ctx->pc != 0x3D856Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D856Cu; }
        if (ctx->pc != 0x3D856Cu) { return; }
    }
    ctx->pc = 0x3D856Cu;
label_3d856c:
    // 0x3d856c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3d856cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3d8570:
    // 0x3d8570: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3d8570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3d8574:
    // 0x3d8574: 0xc44cc930  lwc1        $f12, -0x36D0($v0)
    ctx->pc = 0x3d8574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d8578:
    // 0x3d8578: 0xc0a5a68  jal         func_2969A0
label_3d857c:
    if (ctx->pc == 0x3D857Cu) {
        ctx->pc = 0x3D857Cu;
            // 0x3d857c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3D8580u;
        goto label_3d8580;
    }
    ctx->pc = 0x3D8578u;
    SET_GPR_U32(ctx, 31, 0x3D8580u);
    ctx->pc = 0x3D857Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8578u;
            // 0x3d857c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8580u; }
        if (ctx->pc != 0x3D8580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8580u; }
        if (ctx->pc != 0x3D8580u) { return; }
    }
    ctx->pc = 0x3D8580u;
label_3d8580:
    // 0x3d8580: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d8580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d8584:
    // 0x3d8584: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3d8584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d8588:
    // 0x3d8588: 0x8c446eb0  lw          $a0, 0x6EB0($v0)
    ctx->pc = 0x3d8588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28336)));
label_3d858c:
    // 0x3d858c: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x3d858cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d8590:
    // 0x3d8590: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x3d8590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d8594:
    // 0x3d8594: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x3d8594u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
label_3d8598:
    // 0x3d8598: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x3d8598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d859c:
    // 0x3d859c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x3d859cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3d85a0:
    // 0x3d85a0: 0x8c890060  lw          $t1, 0x60($a0)
    ctx->pc = 0x3d85a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_3d85a4:
    // 0x3d85a4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x3d85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_3d85a8:
    // 0x3d85a8: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x3d85a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_3d85ac:
    // 0x3d85ac: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3d85acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_3d85b0:
    // 0x3d85b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d85b4:
    // 0x3d85b4: 0xafa900c4  sw          $t1, 0xC4($sp)
    ctx->pc = 0x3d85b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 9));
label_3d85b8:
    // 0x3d85b8: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x3d85b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3d85bc:
    // 0x3d85bc: 0xc64a0018  lwc1        $f10, 0x18($s2)
    ctx->pc = 0x3d85bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3d85c0:
    // 0x3d85c0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3d85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3d85c4:
    // 0x3d85c4: 0xc6490014  lwc1        $f9, 0x14($s2)
    ctx->pc = 0x3d85c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3d85c8:
    // 0x3d85c8: 0xc6480010  lwc1        $f8, 0x10($s2)
    ctx->pc = 0x3d85c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3d85cc:
    // 0x3d85cc: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x3d85ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3d85d0:
    // 0x3d85d0: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x3d85d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3d85d4:
    // 0x3d85d4: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x3d85d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_3d85d8:
    // 0x3d85d8: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x3d85d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_3d85dc:
    // 0x3d85dc: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x3d85dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_3d85e0:
    // 0x3d85e0: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x3d85e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_3d85e4:
    // 0x3d85e4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x3d85e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_3d85e8:
    // 0x3d85e8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x3d85e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_3d85ec:
    // 0x3d85ec: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x3d85ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d85f0:
    // 0x3d85f0: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3d85f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3d85f4:
    // 0x3d85f4: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x3d85f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d85f8:
    // 0x3d85f8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x3d85f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d85fc:
    // 0x3d85fc: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x3d85fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3d8600:
    // 0x3d8600: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x3d8600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_3d8604:
    // 0x3d8604: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x3d8604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3d8608:
    // 0x3d8608: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x3d8608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d860c:
    // 0x3d860c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x3d860cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d8610:
    // 0x3d8610: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x3d8610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d8614:
    // 0x3d8614: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x3d8614u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_3d8618:
    // 0x3d8618: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x3d8618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3d861c:
    // 0x3d861c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x3d861cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_3d8620:
    // 0x3d8620: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x3d8620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3d8624:
    // 0x3d8624: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x3d8624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d8628:
    // 0x3d8628: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x3d8628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d862c:
    // 0x3d862c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x3d862cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d8630:
    // 0x3d8630: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x3d8630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d8634:
    // 0x3d8634: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x3d8634u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3d8638:
    // 0x3d8638: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x3d8638u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_3d863c:
    // 0x3d863c: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x3d863cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3d8640:
    // 0x3d8640: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x3d8640u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_3d8644:
    // 0x3d8644: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x3d8644u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_3d8648:
    // 0x3d8648: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x3d8648u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_3d864c:
    // 0x3d864c: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x3d864cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_3d8650:
    // 0x3d8650: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x3d8650u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3d8654:
    // 0x3d8654: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x3d8654u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3d8658:
    // 0x3d8658: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x3d8658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_3d865c:
    // 0x3d865c: 0xc0a7a88  jal         func_29EA20
label_3d8660:
    if (ctx->pc == 0x3D8660u) {
        ctx->pc = 0x3D8660u;
            // 0x3d8660: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x3D8664u;
        goto label_3d8664;
    }
    ctx->pc = 0x3D865Cu;
    SET_GPR_U32(ctx, 31, 0x3D8664u);
    ctx->pc = 0x3D8660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D865Cu;
            // 0x3d8660: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8664u; }
        if (ctx->pc != 0x3D8664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8664u; }
        if (ctx->pc != 0x3D8664u) { return; }
    }
    ctx->pc = 0x3D8664u;
label_3d8664:
    // 0x3d8664: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x3d8664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3d8668:
    // 0x3d8668: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d8668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d866c:
    // 0x3d866c: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_3d8670:
    if (ctx->pc == 0x3D8670u) {
        ctx->pc = 0x3D8670u;
            // 0x3d8670: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3D8674u;
        goto label_3d8674;
    }
    ctx->pc = 0x3D866Cu;
    {
        const bool branch_taken_0x3d866c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D866Cu;
            // 0x3d8670: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d866c) {
            ctx->pc = 0x3D86BCu;
            goto label_3d86bc;
        }
    }
    ctx->pc = 0x3D8674u;
label_3d8674:
    // 0x3d8674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d8674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8678:
    // 0x3d8678: 0xc088ef4  jal         func_223BD0
label_3d867c:
    if (ctx->pc == 0x3D867Cu) {
        ctx->pc = 0x3D867Cu;
            // 0x3d867c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3D8680u;
        goto label_3d8680;
    }
    ctx->pc = 0x3D8678u;
    SET_GPR_U32(ctx, 31, 0x3D8680u);
    ctx->pc = 0x3D867Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8678u;
            // 0x3d867c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8680u; }
        if (ctx->pc != 0x3D8680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8680u; }
        if (ctx->pc != 0x3D8680u) { return; }
    }
    ctx->pc = 0x3D8680u;
label_3d8680:
    // 0x3d8680: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d8680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d8684:
    // 0x3d8684: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3d8684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3d8688:
    // 0x3d8688: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x3d8688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_3d868c:
    // 0x3d868c: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x3d868cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_3d8690:
    // 0x3d8690: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3d8690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3d8694:
    // 0x3d8694: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x3d8694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_3d8698:
    // 0x3d8698: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d8698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d869c:
    // 0x3d869c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d869cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3d86a0:
    // 0x3d86a0: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x3d86a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_3d86a4:
    // 0x3d86a4: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x3d86a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_3d86a8:
    // 0x3d86a8: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x3d86a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_3d86ac:
    // 0x3d86ac: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d86acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d86b0:
    // 0x3d86b0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x3d86b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3d86b4:
    // 0x3d86b4: 0xc088b38  jal         func_222CE0
label_3d86b8:
    if (ctx->pc == 0x3D86B8u) {
        ctx->pc = 0x3D86B8u;
            // 0x3d86b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D86BCu;
        goto label_3d86bc;
    }
    ctx->pc = 0x3D86B4u;
    SET_GPR_U32(ctx, 31, 0x3D86BCu);
    ctx->pc = 0x3D86B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D86B4u;
            // 0x3d86b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D86BCu; }
        if (ctx->pc != 0x3D86BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D86BCu; }
        if (ctx->pc != 0x3D86BCu) { return; }
    }
    ctx->pc = 0x3D86BCu;
label_3d86bc:
    // 0x3d86bc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3d86bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d86c0:
    // 0x3d86c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d86c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d86c4:
    // 0x3d86c4: 0xc08c164  jal         func_230590
label_3d86c8:
    if (ctx->pc == 0x3D86C8u) {
        ctx->pc = 0x3D86C8u;
            // 0x3d86c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D86CCu;
        goto label_3d86cc;
    }
    ctx->pc = 0x3D86C4u;
    SET_GPR_U32(ctx, 31, 0x3D86CCu);
    ctx->pc = 0x3D86C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D86C4u;
            // 0x3d86c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D86CCu; }
        if (ctx->pc != 0x3D86CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D86CCu; }
        if (ctx->pc != 0x3D86CCu) { return; }
    }
    ctx->pc = 0x3D86CCu;
label_3d86cc:
    // 0x3d86cc: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3d86ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3d86d0:
    // 0x3d86d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d86d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d86d4:
    // 0x3d86d4: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x3d86d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_3d86d8:
    // 0x3d86d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3d86d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3d86dc:
    // 0x3d86dc: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x3d86dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_3d86e0:
    // 0x3d86e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d86e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d86e4:
    // 0x3d86e4: 0xc08914c  jal         func_224530
label_3d86e8:
    if (ctx->pc == 0x3D86E8u) {
        ctx->pc = 0x3D86E8u;
            // 0x3d86e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D86ECu;
        goto label_3d86ec;
    }
    ctx->pc = 0x3D86E4u;
    SET_GPR_U32(ctx, 31, 0x3D86ECu);
    ctx->pc = 0x3D86E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D86E4u;
            // 0x3d86e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D86ECu; }
        if (ctx->pc != 0x3D86ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D86ECu; }
        if (ctx->pc != 0x3D86ECu) { return; }
    }
    ctx->pc = 0x3D86ECu;
label_3d86ec:
    // 0x3d86ec: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x3d86ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_3d86f0:
    // 0x3d86f0: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x3d86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_3d86f4:
    // 0x3d86f4: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x3d86f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_3d86f8:
    // 0x3d86f8: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x3d86f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_3d86fc:
    // 0x3d86fc: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x3d86fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_3d8700:
    // 0x3d8700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d8700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8704:
    // 0x3d8704: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x3d8704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_3d8708:
    // 0x3d8708: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3d8708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d870c:
    // 0x3d870c: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x3d870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d8710:
    // 0x3d8710: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3d8710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d8714:
    // 0x3d8714: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x3d8714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d8718:
    // 0x3d8718: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3d8718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d871c:
    // 0x3d871c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3d871cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3d8720:
    // 0x3d8720: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3d8720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3d8724:
    // 0x3d8724: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3d8724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3d8728:
    // 0x3d8728: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3d8728u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3d872c:
    // 0x3d872c: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x3d872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d8730:
    // 0x3d8730: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x3d8730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d8734:
    // 0x3d8734: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x3d8734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d8738:
    // 0x3d8738: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x3d8738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d873c:
    // 0x3d873c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3d873cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3d8740:
    // 0x3d8740: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3d8740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3d8744:
    // 0x3d8744: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3d8744u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3d8748:
    // 0x3d8748: 0xc0892b0  jal         func_224AC0
label_3d874c:
    if (ctx->pc == 0x3D874Cu) {
        ctx->pc = 0x3D874Cu;
            // 0x3d874c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x3D8750u;
        goto label_3d8750;
    }
    ctx->pc = 0x3D8748u;
    SET_GPR_U32(ctx, 31, 0x3D8750u);
    ctx->pc = 0x3D874Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8748u;
            // 0x3d874c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8750u; }
        if (ctx->pc != 0x3D8750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8750u; }
        if (ctx->pc != 0x3D8750u) { return; }
    }
    ctx->pc = 0x3D8750u;
label_3d8750:
    // 0x3d8750: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x3d8750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_3d8754:
    // 0x3d8754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d8754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8758:
    // 0x3d8758: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3d8758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_3d875c:
    // 0x3d875c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3d875cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3d8760:
    // 0x3d8760: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x3d8760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_3d8764:
    // 0x3d8764: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3d8764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3d8768:
    // 0x3d8768: 0xc0891d8  jal         func_224760
label_3d876c:
    if (ctx->pc == 0x3D876Cu) {
        ctx->pc = 0x3D876Cu;
            // 0x3d876c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x3D8770u;
        goto label_3d8770;
    }
    ctx->pc = 0x3D8768u;
    SET_GPR_U32(ctx, 31, 0x3D8770u);
    ctx->pc = 0x3D876Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8768u;
            // 0x3d876c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8770u; }
        if (ctx->pc != 0x3D8770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8770u; }
        if (ctx->pc != 0x3D8770u) { return; }
    }
    ctx->pc = 0x3D8770u;
label_3d8770:
    // 0x3d8770: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x3d8770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_3d8774:
    // 0x3d8774: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d8774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d8778:
    // 0x3d8778: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3d8778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3d877c:
    // 0x3d877c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3d877cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3d8780:
    // 0x3d8780: 0xc0a7a88  jal         func_29EA20
label_3d8784:
    if (ctx->pc == 0x3D8784u) {
        ctx->pc = 0x3D8784u;
            // 0x3d8784: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x3D8788u;
        goto label_3d8788;
    }
    ctx->pc = 0x3D8780u;
    SET_GPR_U32(ctx, 31, 0x3D8788u);
    ctx->pc = 0x3D8784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8780u;
            // 0x3d8784: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8788u; }
        if (ctx->pc != 0x3D8788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8788u; }
        if (ctx->pc != 0x3D8788u) { return; }
    }
    ctx->pc = 0x3D8788u;
label_3d8788:
    // 0x3d8788: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3d8788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3d878c:
    // 0x3d878c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d878cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d8790:
    // 0x3d8790: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_3d8794:
    if (ctx->pc == 0x3D8794u) {
        ctx->pc = 0x3D8794u;
            // 0x3d8794: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3D8798u;
        goto label_3d8798;
    }
    ctx->pc = 0x3D8790u;
    {
        const bool branch_taken_0x3d8790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8790u;
            // 0x3d8794: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8790) {
            ctx->pc = 0x3D87B4u;
            goto label_3d87b4;
        }
    }
    ctx->pc = 0x3D8798u;
label_3d8798:
    // 0x3d8798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d879c:
    // 0x3d879c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d879cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d87a0:
    // 0x3d87a0: 0xc0869d0  jal         func_21A740
label_3d87a4:
    if (ctx->pc == 0x3D87A4u) {
        ctx->pc = 0x3D87A4u;
            // 0x3d87a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D87A8u;
        goto label_3d87a8;
    }
    ctx->pc = 0x3D87A0u;
    SET_GPR_U32(ctx, 31, 0x3D87A8u);
    ctx->pc = 0x3D87A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D87A0u;
            // 0x3d87a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D87A8u; }
        if (ctx->pc != 0x3D87A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D87A8u; }
        if (ctx->pc != 0x3D87A8u) { return; }
    }
    ctx->pc = 0x3D87A8u;
label_3d87a8:
    // 0x3d87a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d87ac:
    // 0x3d87ac: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x3d87acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_3d87b0:
    // 0x3d87b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d87b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3d87b4:
    // 0x3d87b4: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x3d87b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_3d87b8:
    // 0x3d87b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d87b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d87bc:
    // 0x3d87bc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d87c0:
    // 0x3d87c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d87c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d87c4:
    // 0x3d87c4: 0xc08c650  jal         func_231940
label_3d87c8:
    if (ctx->pc == 0x3D87C8u) {
        ctx->pc = 0x3D87C8u;
            // 0x3d87c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D87CCu;
        goto label_3d87cc;
    }
    ctx->pc = 0x3D87C4u;
    SET_GPR_U32(ctx, 31, 0x3D87CCu);
    ctx->pc = 0x3D87C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D87C4u;
            // 0x3d87c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D87CCu; }
        if (ctx->pc != 0x3D87CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D87CCu; }
        if (ctx->pc != 0x3D87CCu) { return; }
    }
    ctx->pc = 0x3D87CCu;
label_3d87cc:
    // 0x3d87cc: 0xc040180  jal         func_100600
label_3d87d0:
    if (ctx->pc == 0x3D87D0u) {
        ctx->pc = 0x3D87D0u;
            // 0x3d87d0: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x3D87D4u;
        goto label_3d87d4;
    }
    ctx->pc = 0x3D87CCu;
    SET_GPR_U32(ctx, 31, 0x3D87D4u);
    ctx->pc = 0x3D87D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D87CCu;
            // 0x3d87d0: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D87D4u; }
        if (ctx->pc != 0x3D87D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D87D4u; }
        if (ctx->pc != 0x3D87D4u) { return; }
    }
    ctx->pc = 0x3D87D4u;
label_3d87d4:
    // 0x3d87d4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_3d87d8:
    if (ctx->pc == 0x3D87D8u) {
        ctx->pc = 0x3D87D8u;
            // 0x3d87d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D87DCu;
        goto label_3d87dc;
    }
    ctx->pc = 0x3D87D4u;
    {
        const bool branch_taken_0x3d87d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D87D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D87D4u;
            // 0x3d87d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d87d4) {
            ctx->pc = 0x3D8844u;
            goto label_3d8844;
        }
    }
    ctx->pc = 0x3D87DCu;
label_3d87dc:
    // 0x3d87dc: 0x8e470050  lw          $a3, 0x50($s2)
    ctx->pc = 0x3d87dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_3d87e0:
    // 0x3d87e0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3d87e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3d87e4:
    // 0x3d87e4: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x3d87e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_3d87e8:
    // 0x3d87e8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3d87e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3d87ec:
    // 0x3d87ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d87ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d87f0:
    // 0x3d87f0: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x3d87f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_3d87f4:
    // 0x3d87f4: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x3d87f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
label_3d87f8:
    // 0x3d87f8: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x3d87f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
label_3d87fc:
    // 0x3d87fc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3d87fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_3d8800:
    // 0x3d8800: 0x24a59aa0  addiu       $a1, $a1, -0x6560
    ctx->pc = 0x3d8800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941344));
label_3d8804:
    // 0x3d8804: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x3d8804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
label_3d8808:
    // 0x3d8808: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x3d8808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_3d880c:
    // 0x3d880c: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x3d880cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_3d8810:
    // 0x3d8810: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x3d8810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_3d8814:
    // 0x3d8814: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3d8814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_3d8818:
    // 0x3d8818: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3d8818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_3d881c:
    // 0x3d881c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3d881cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_3d8820:
    // 0x3d8820: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x3d8820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_3d8824:
    // 0x3d8824: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x3d8824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_3d8828:
    // 0x3d8828: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x3d8828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
label_3d882c:
    // 0x3d882c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x3d882cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_3d8830:
    // 0x3d8830: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x3d8830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_3d8834:
    // 0x3d8834: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x3d8834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_3d8838:
    // 0x3d8838: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x3d8838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_3d883c:
    // 0x3d883c: 0xc04c968  jal         func_1325A0
label_3d8840:
    if (ctx->pc == 0x3D8840u) {
        ctx->pc = 0x3D8840u;
            // 0x3d8840: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3D8844u;
        goto label_3d8844;
    }
    ctx->pc = 0x3D883Cu;
    SET_GPR_U32(ctx, 31, 0x3D8844u);
    ctx->pc = 0x3D8840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D883Cu;
            // 0x3d8840: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8844u; }
        if (ctx->pc != 0x3D8844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8844u; }
        if (ctx->pc != 0x3D8844u) { return; }
    }
    ctx->pc = 0x3D8844u;
label_3d8844:
    // 0x3d8844: 0xae5000a0  sw          $s0, 0xA0($s2)
    ctx->pc = 0x3d8844u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
label_3d8848:
    // 0x3d8848: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3d8848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3d884c:
    // 0x3d884c: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x3d884cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3d8850:
    // 0x3d8850: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3d8850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d8854:
    // 0x3d8854: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3d8854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d8858:
    // 0x3d8858: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3d8858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d885c:
    // 0x3d885c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3d885cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3d8860:
    // 0x3d8860: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x3d8860u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
label_3d8864:
    // 0x3d8864: 0xa2480064  sb          $t0, 0x64($s2)
    ctx->pc = 0x3d8864u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 8));
label_3d8868:
    // 0x3d8868: 0xa2480065  sb          $t0, 0x65($s2)
    ctx->pc = 0x3d8868u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 8));
label_3d886c:
    // 0x3d886c: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x3d886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d8870:
    // 0x3d8870: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3d8870u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d8874:
    // 0x3d8874: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
label_3d8878:
    if (ctx->pc == 0x3D8878u) {
        ctx->pc = 0x3D8878u;
            // 0x3d8878: 0x8e070060  lw          $a3, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x3D887Cu;
        goto label_3d887c;
    }
    ctx->pc = 0x3D8874u;
    {
        const bool branch_taken_0x3d8874 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d8874) {
            ctx->pc = 0x3D8878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8874u;
            // 0x3d8878: 0x8e070060  lw          $a3, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D88C4u;
            goto label_3d88c4;
        }
    }
    ctx->pc = 0x3D887Cu;
label_3d887c:
    // 0x3d887c: 0x8e070060  lw          $a3, 0x60($s0)
    ctx->pc = 0x3d887cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_3d8880:
    // 0x3d8880: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x3d8880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3d8884:
    // 0x3d8884: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3d8884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d8888:
    // 0x3d8888: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x3d8888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_3d888c:
    // 0x3d888c: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3d888cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
label_3d8890:
    // 0x3d8890: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3d8890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_3d8894:
    // 0x3d8894: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x3d8894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_3d8898:
    // 0x3d8898: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x3d8898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
label_3d889c:
    // 0x3d889c: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x3d889cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_3d88a0:
    // 0x3d88a0: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x3d88a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
label_3d88a4:
    // 0x3d88a4: 0xae440070  sw          $a0, 0x70($s2)
    ctx->pc = 0x3d88a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 4));
label_3d88a8:
    // 0x3d88a8: 0xae430078  sw          $v1, 0x78($s2)
    ctx->pc = 0x3d88a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 3));
label_3d88ac:
    // 0x3d88ac: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x3d88acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
label_3d88b0:
    // 0x3d88b0: 0xa2400068  sb          $zero, 0x68($s2)
    ctx->pc = 0x3d88b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 0));
label_3d88b4:
    // 0x3d88b4: 0xa2480069  sb          $t0, 0x69($s2)
    ctx->pc = 0x3d88b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 8));
label_3d88b8:
    // 0x3d88b8: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x3d88b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_3d88bc:
    // 0x3d88bc: 0x10000011  b           . + 4 + (0x11 << 2)
label_3d88c0:
    if (ctx->pc == 0x3D88C0u) {
        ctx->pc = 0x3D88C0u;
            // 0x3d88c0: 0xa248006b  sb          $t0, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 8));
        ctx->pc = 0x3D88C4u;
        goto label_3d88c4;
    }
    ctx->pc = 0x3D88BCu;
    {
        const bool branch_taken_0x3d88bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D88C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D88BCu;
            // 0x3d88c0: 0xa248006b  sb          $t0, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d88bc) {
            ctx->pc = 0x3D8904u;
            goto label_3d8904;
        }
    }
    ctx->pc = 0x3D88C4u;
label_3d88c4:
    // 0x3d88c4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3d88c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3d88c8:
    // 0x3d88c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3d88c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d88cc:
    // 0x3d88cc: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x3d88ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
label_3d88d0:
    // 0x3d88d0: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x3d88d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_3d88d4:
    // 0x3d88d4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x3d88d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_3d88d8:
    // 0x3d88d8: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x3d88d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_3d88dc:
    // 0x3d88dc: 0xae070060  sw          $a3, 0x60($s0)
    ctx->pc = 0x3d88dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
label_3d88e0:
    // 0x3d88e0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3d88e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3d88e4:
    // 0x3d88e4: 0xae46008c  sw          $a2, 0x8C($s2)
    ctx->pc = 0x3d88e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 6));
label_3d88e8:
    // 0x3d88e8: 0xae450070  sw          $a1, 0x70($s2)
    ctx->pc = 0x3d88e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 5));
label_3d88ec:
    // 0x3d88ec: 0xae440078  sw          $a0, 0x78($s2)
    ctx->pc = 0x3d88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 4));
label_3d88f0:
    // 0x3d88f0: 0xae430080  sw          $v1, 0x80($s2)
    ctx->pc = 0x3d88f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
label_3d88f4:
    // 0x3d88f4: 0xa2420068  sb          $v0, 0x68($s2)
    ctx->pc = 0x3d88f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
label_3d88f8:
    // 0x3d88f8: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x3d88f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_3d88fc:
    // 0x3d88fc: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x3d88fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_3d8900:
    // 0x3d8900: 0xa248006b  sb          $t0, 0x6B($s2)
    ctx->pc = 0x3d8900u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 8));
label_3d8904:
    // 0x3d8904: 0xc040180  jal         func_100600
label_3d8908:
    if (ctx->pc == 0x3D8908u) {
        ctx->pc = 0x3D8908u;
            // 0x3d8908: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x3D890Cu;
        goto label_3d890c;
    }
    ctx->pc = 0x3D8904u;
    SET_GPR_U32(ctx, 31, 0x3D890Cu);
    ctx->pc = 0x3D8908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8904u;
            // 0x3d8908: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D890Cu; }
        if (ctx->pc != 0x3D890Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D890Cu; }
        if (ctx->pc != 0x3D890Cu) { return; }
    }
    ctx->pc = 0x3D890Cu;
label_3d890c:
    // 0x3d890c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d890cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d8910:
    // 0x3d8910: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_3d8914:
    if (ctx->pc == 0x3D8914u) {
        ctx->pc = 0x3D8914u;
            // 0x3d8914: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x3D8918u;
        goto label_3d8918;
    }
    ctx->pc = 0x3D8910u;
    {
        const bool branch_taken_0x3d8910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8910) {
            ctx->pc = 0x3D8914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8910u;
            // 0x3d8914: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D8950u;
            goto label_3d8950;
        }
    }
    ctx->pc = 0x3D8918u;
label_3d8918:
    // 0x3d8918: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3d8918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3d891c:
    // 0x3d891c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d8920:
    // 0x3d8920: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x3d8920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_3d8924:
    // 0x3d8924: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3d8924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3d8928:
    // 0x3d8928: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d8928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3d892c:
    // 0x3d892c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3d892cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3d8930:
    // 0x3d8930: 0xc040138  jal         func_1004E0
label_3d8934:
    if (ctx->pc == 0x3D8934u) {
        ctx->pc = 0x3D8934u;
            // 0x3d8934: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3D8938u;
        goto label_3d8938;
    }
    ctx->pc = 0x3D8930u;
    SET_GPR_U32(ctx, 31, 0x3D8938u);
    ctx->pc = 0x3D8934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8930u;
            // 0x3d8934: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8938u; }
        if (ctx->pc != 0x3D8938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8938u; }
        if (ctx->pc != 0x3D8938u) { return; }
    }
    ctx->pc = 0x3D8938u;
label_3d8938:
    // 0x3d8938: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3d8938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3d893c:
    // 0x3d893c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x3d893cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3d8940:
    // 0x3d8940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d8940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d8944:
    // 0x3d8944: 0xc04a576  jal         func_1295D8
label_3d8948:
    if (ctx->pc == 0x3D8948u) {
        ctx->pc = 0x3D8948u;
            // 0x3d8948: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3D894Cu;
        goto label_3d894c;
    }
    ctx->pc = 0x3D8944u;
    SET_GPR_U32(ctx, 31, 0x3D894Cu);
    ctx->pc = 0x3D8948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8944u;
            // 0x3d8948: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D894Cu; }
        if (ctx->pc != 0x3D894Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D894Cu; }
        if (ctx->pc != 0x3D894Cu) { return; }
    }
    ctx->pc = 0x3D894Cu;
label_3d894c:
    // 0x3d894c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x3d894cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_3d8950:
    // 0x3d8950: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3d8950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3d8954:
    // 0x3d8954: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3d8954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_3d8958:
    // 0x3d8958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d895c:
    // 0x3d895c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d895cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d8960:
    // 0x3d8960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d8960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d8964:
    // 0x3d8964: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x3d8964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_3d8968:
    // 0x3d8968: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d8968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d896c:
    // 0x3d896c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3d896cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d8970:
    // 0x3d8970: 0x34460cae  ori         $a2, $v0, 0xCAE
    ctx->pc = 0x3d8970u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3246);
label_3d8974:
    // 0x3d8974: 0xc122cd8  jal         func_48B360
label_3d8978:
    if (ctx->pc == 0x3D8978u) {
        ctx->pc = 0x3D8978u;
            // 0x3d8978: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->pc = 0x3D897Cu;
        goto label_3d897c;
    }
    ctx->pc = 0x3D8974u;
    SET_GPR_U32(ctx, 31, 0x3D897Cu);
    ctx->pc = 0x3D8978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8974u;
            // 0x3d8978: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D897Cu; }
        if (ctx->pc != 0x3D897Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D897Cu; }
        if (ctx->pc != 0x3D897Cu) { return; }
    }
    ctx->pc = 0x3D897Cu;
label_3d897c:
    // 0x3d897c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x3d897cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_3d8980:
    // 0x3d8980: 0x8e4400e4  lw          $a0, 0xE4($s2)
    ctx->pc = 0x3d8980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_3d8984:
    // 0x3d8984: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x3d8984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_3d8988:
    // 0x3d8988: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d8988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d898c:
    // 0x3d898c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d898cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3d8990:
    // 0x3d8990: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d8990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d8994:
    // 0x3d8994: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3d8994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d8998:
    // 0x3d8998: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x3d8998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_3d899c:
    // 0x3d899c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3d899cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d89a0:
    // 0x3d89a0: 0xc122cd8  jal         func_48B360
label_3d89a4:
    if (ctx->pc == 0x3D89A4u) {
        ctx->pc = 0x3D89A4u;
            // 0x3d89a4: 0x34460cae  ori         $a2, $v0, 0xCAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3246);
        ctx->pc = 0x3D89A8u;
        goto label_3d89a8;
    }
    ctx->pc = 0x3D89A0u;
    SET_GPR_U32(ctx, 31, 0x3D89A8u);
    ctx->pc = 0x3D89A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D89A0u;
            // 0x3d89a4: 0x34460cae  ori         $a2, $v0, 0xCAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3246);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D89A8u; }
        if (ctx->pc != 0x3D89A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D89A8u; }
        if (ctx->pc != 0x3D89A8u) { return; }
    }
    ctx->pc = 0x3D89A8u;
label_3d89a8:
    // 0x3d89a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d89a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d89ac:
    // 0x3d89ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d89acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d89b0:
    // 0x3d89b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d89b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d89b4:
    // 0x3d89b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d89b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d89b8:
    // 0x3d89b8: 0x3e00008  jr          $ra
label_3d89bc:
    if (ctx->pc == 0x3D89BCu) {
        ctx->pc = 0x3D89BCu;
            // 0x3d89bc: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x3D89C0u;
        goto label_3d89c0;
    }
    ctx->pc = 0x3D89B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D89BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D89B8u;
            // 0x3d89bc: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D89C0u;
label_3d89c0:
    // 0x3d89c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d89c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d89c4:
    // 0x3d89c4: 0xa08300cc  sb          $v1, 0xCC($a0)
    ctx->pc = 0x3d89c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 3));
label_3d89c8:
    // 0x3d89c8: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x3d89c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
label_3d89cc:
    // 0x3d89cc: 0xac8300c4  sw          $v1, 0xC4($a0)
    ctx->pc = 0x3d89ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
label_3d89d0:
    // 0x3d89d0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3d89d4:
    // 0x3d89d4: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x3d89d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3d89d8:
    // 0x3d89d8: 0x80a5007a  lb          $a1, 0x7A($a1)
    ctx->pc = 0x3d89d8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 122)));
label_3d89dc:
    // 0x3d89dc: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3d89dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_3d89e0:
    // 0x3d89e0: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x3d89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_3d89e4:
    // 0x3d89e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d89e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3d89e8:
    // 0x3d89e8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3d89e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3d89ec:
    // 0x3d89ec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3d89ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3d89f0:
    // 0x3d89f0: 0x3e00008  jr          $ra
label_3d89f4:
    if (ctx->pc == 0x3D89F4u) {
        ctx->pc = 0x3D89F4u;
            // 0x3d89f4: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->pc = 0x3D89F8u;
        goto label_3d89f8;
    }
    ctx->pc = 0x3D89F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D89F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D89F0u;
            // 0x3d89f4: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D89F8u;
label_3d89f8:
    // 0x3d89f8: 0x0  nop
    ctx->pc = 0x3d89f8u;
    // NOP
label_3d89fc:
    // 0x3d89fc: 0x0  nop
    ctx->pc = 0x3d89fcu;
    // NOP
label_3d8a00:
    // 0x3d8a00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d8a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d8a04:
    // 0x3d8a04: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3d8a04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3d8a08:
    // 0x3d8a08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d8a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d8a0c:
    // 0x3d8a0c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3d8a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d8a10:
    // 0x3d8a10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d8a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3d8a14:
    // 0x3d8a14: 0x24c69b18  addiu       $a2, $a2, -0x64E8
    ctx->pc = 0x3d8a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941464));
label_3d8a18:
    // 0x3d8a18: 0xc4a202c0  lwc1        $f2, 0x2C0($a1)
    ctx->pc = 0x3d8a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d8a1c:
    // 0x3d8a1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d8a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d8a20:
    // 0x3d8a20: 0xc4a102c4  lwc1        $f1, 0x2C4($a1)
    ctx->pc = 0x3d8a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d8a24:
    // 0x3d8a24: 0xc4a002c8  lwc1        $f0, 0x2C8($a1)
    ctx->pc = 0x3d8a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d8a28:
    // 0x3d8a28: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x3d8a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3d8a2c:
    // 0x3d8a2c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3d8a2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3d8a30:
    // 0x3d8a30: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3d8a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3d8a34:
    // 0x3d8a34: 0xc4a20300  lwc1        $f2, 0x300($a1)
    ctx->pc = 0x3d8a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d8a38:
    // 0x3d8a38: 0xc4a10304  lwc1        $f1, 0x304($a1)
    ctx->pc = 0x3d8a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d8a3c:
    // 0x3d8a3c: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x3d8a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d8a40:
    // 0x3d8a40: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x3d8a40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3d8a44:
    // 0x3d8a44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d8a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d8a48:
    // 0x3d8a48: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3d8a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3d8a4c:
    // 0x3d8a4c: 0xc04cafc  jal         func_132BF0
label_3d8a50:
    if (ctx->pc == 0x3D8A50u) {
        ctx->pc = 0x3D8A50u;
            // 0x3d8a50: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x3D8A54u;
        goto label_3d8a54;
    }
    ctx->pc = 0x3D8A4Cu;
    SET_GPR_U32(ctx, 31, 0x3D8A54u);
    ctx->pc = 0x3D8A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8A4Cu;
            // 0x3d8a50: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8A54u; }
        if (ctx->pc != 0x3D8A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8A54u; }
        if (ctx->pc != 0x3D8A54u) { return; }
    }
    ctx->pc = 0x3D8A54u;
label_3d8a54:
    // 0x3d8a54: 0xc040180  jal         func_100600
label_3d8a58:
    if (ctx->pc == 0x3D8A58u) {
        ctx->pc = 0x3D8A58u;
            // 0x3d8a58: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x3D8A5Cu;
        goto label_3d8a5c;
    }
    ctx->pc = 0x3D8A54u;
    SET_GPR_U32(ctx, 31, 0x3D8A5Cu);
    ctx->pc = 0x3D8A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8A54u;
            // 0x3d8a58: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8A5Cu; }
        if (ctx->pc != 0x3D8A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8A5Cu; }
        if (ctx->pc != 0x3D8A5Cu) { return; }
    }
    ctx->pc = 0x3D8A5Cu;
label_3d8a5c:
    // 0x3d8a5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d8a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d8a60:
    // 0x3d8a60: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
label_3d8a64:
    if (ctx->pc == 0x3D8A64u) {
        ctx->pc = 0x3D8A64u;
            // 0x3d8a64: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3D8A68u;
        goto label_3d8a68;
    }
    ctx->pc = 0x3D8A60u;
    {
        const bool branch_taken_0x3d8a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8a60) {
            ctx->pc = 0x3D8A64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8A60u;
            // 0x3d8a64: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D8B0Cu;
            goto label_3d8b0c;
        }
    }
    ctx->pc = 0x3D8A68u;
label_3d8a68:
    // 0x3d8a68: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d8a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3d8a6c:
    // 0x3d8a6c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3d8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3d8a70:
    // 0x3d8a70: 0xc4419b58  lwc1        $f1, -0x64A8($v0)
    ctx->pc = 0x3d8a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d8a74:
    // 0x3d8a74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d8a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d8a78:
    // 0x3d8a78: 0x0  nop
    ctx->pc = 0x3d8a78u;
    // NOP
label_3d8a7c:
    // 0x3d8a7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d8a7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d8a80:
    // 0x3d8a80: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3d8a84:
    if (ctx->pc == 0x3D8A84u) {
        ctx->pc = 0x3D8A84u;
            // 0x3d8a84: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3D8A88u;
        goto label_3d8a88;
    }
    ctx->pc = 0x3D8A80u;
    {
        const bool branch_taken_0x3d8a80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d8a80) {
            ctx->pc = 0x3D8A84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8A80u;
            // 0x3d8a84: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D8A98u;
            goto label_3d8a98;
        }
    }
    ctx->pc = 0x3D8A88u;
label_3d8a88:
    // 0x3d8a88: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d8a88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d8a8c:
    // 0x3d8a8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3d8a8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3d8a90:
    // 0x3d8a90: 0x10000006  b           . + 4 + (0x6 << 2)
label_3d8a94:
    if (ctx->pc == 0x3D8A94u) {
        ctx->pc = 0x3D8A98u;
        goto label_3d8a98;
    }
    ctx->pc = 0x3D8A90u;
    {
        const bool branch_taken_0x3d8a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8a90) {
            ctx->pc = 0x3D8AACu;
            goto label_3d8aac;
        }
    }
    ctx->pc = 0x3D8A98u;
label_3d8a98:
    // 0x3d8a98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3d8a9c:
    // 0x3d8a9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d8a9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d8aa0:
    // 0x3d8aa0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3d8aa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3d8aa4:
    // 0x3d8aa4: 0x0  nop
    ctx->pc = 0x3d8aa4u;
    // NOP
label_3d8aa8:
    // 0x3d8aa8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d8aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3d8aac:
    // 0x3d8aac: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d8aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3d8ab0:
    // 0x3d8ab0: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x3d8ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
label_3d8ab4:
    // 0x3d8ab4: 0x24429b28  addiu       $v0, $v0, -0x64D8
    ctx->pc = 0x3d8ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941480));
label_3d8ab8:
    // 0x3d8ab8: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x3d8ab8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
label_3d8abc:
    // 0x3d8abc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3d8abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_3d8ac0:
    // 0x3d8ac0: 0x26070890  addiu       $a3, $s0, 0x890
    ctx->pc = 0x3d8ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_3d8ac4:
    // 0x3d8ac4: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x3d8ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_3d8ac8:
    // 0x3d8ac8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x3d8ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_3d8acc:
    // 0x3d8acc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d8accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d8ad0:
    // 0x3d8ad0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3d8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3d8ad4:
    // 0x3d8ad4: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x3d8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_3d8ad8:
    // 0x3d8ad8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d8ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d8adc:
    // 0x3d8adc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3d8adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d8ae0:
    // 0x3d8ae0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3d8ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_3d8ae4:
    // 0x3d8ae4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x3d8ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3d8ae8:
    // 0x3d8ae8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3d8ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d8aec:
    // 0x3d8aec: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x3d8aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_3d8af0:
    // 0x3d8af0: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x3d8af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d8af4:
    // 0x3d8af4: 0x25299b38  addiu       $t1, $t1, -0x64C8
    ctx->pc = 0x3d8af4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941496));
label_3d8af8:
    // 0x3d8af8: 0x254a9b48  addiu       $t2, $t2, -0x64B8
    ctx->pc = 0x3d8af8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941512));
label_3d8afc:
    // 0x3d8afc: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x3d8afcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d8b00:
    // 0x3d8b00: 0xc0db488  jal         func_36D220
label_3d8b04:
    if (ctx->pc == 0x3D8B04u) {
        ctx->pc = 0x3D8B04u;
            // 0x3d8b04: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x3D8B08u;
        goto label_3d8b08;
    }
    ctx->pc = 0x3D8B00u;
    SET_GPR_U32(ctx, 31, 0x3D8B08u);
    ctx->pc = 0x3D8B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8B00u;
            // 0x3d8b04: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8B08u; }
        if (ctx->pc != 0x3D8B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8B08u; }
        if (ctx->pc != 0x3D8B08u) { return; }
    }
    ctx->pc = 0x3D8B08u;
label_3d8b08:
    // 0x3d8b08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d8b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8b0c:
    // 0x3d8b0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d8b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d8b10:
    // 0x3d8b10: 0x3e00008  jr          $ra
label_3d8b14:
    if (ctx->pc == 0x3D8B14u) {
        ctx->pc = 0x3D8B14u;
            // 0x3d8b14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D8B18u;
        goto label_3d8b18;
    }
    ctx->pc = 0x3D8B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8B10u;
            // 0x3d8b14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D8B18u;
label_3d8b18:
    // 0x3d8b18: 0x0  nop
    ctx->pc = 0x3d8b18u;
    // NOP
label_3d8b1c:
    // 0x3d8b1c: 0x0  nop
    ctx->pc = 0x3d8b1cu;
    // NOP
label_3d8b20:
    // 0x3d8b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d8b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d8b24:
    // 0x3d8b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d8b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d8b28:
    // 0x3d8b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d8b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d8b2c:
    // 0x3d8b2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d8b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d8b30:
    // 0x3d8b30: 0xc04ab66  jal         func_12AD98
label_3d8b34:
    if (ctx->pc == 0x3D8B34u) {
        ctx->pc = 0x3D8B34u;
            // 0x3d8b34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3D8B38u;
        goto label_3d8b38;
    }
    ctx->pc = 0x3D8B30u;
    SET_GPR_U32(ctx, 31, 0x3D8B38u);
    ctx->pc = 0x3D8B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8B30u;
            // 0x3d8b34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8B38u; }
        if (ctx->pc != 0x3D8B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8B38u; }
        if (ctx->pc != 0x3D8B38u) { return; }
    }
    ctx->pc = 0x3D8B38u;
label_3d8b38:
    // 0x3d8b38: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d8b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3d8b3c:
    // 0x3d8b3c: 0xc04ab66  jal         func_12AD98
label_3d8b40:
    if (ctx->pc == 0x3D8B40u) {
        ctx->pc = 0x3D8B40u;
            // 0x3d8b40: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x3D8B44u;
        goto label_3d8b44;
    }
    ctx->pc = 0x3D8B3Cu;
    SET_GPR_U32(ctx, 31, 0x3D8B44u);
    ctx->pc = 0x3D8B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8B3Cu;
            // 0x3d8b40: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8B44u; }
        if (ctx->pc != 0x3D8B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8B44u; }
        if (ctx->pc != 0x3D8B44u) { return; }
    }
    ctx->pc = 0x3D8B44u;
label_3d8b44:
    // 0x3d8b44: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x3d8b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_3d8b48:
    // 0x3d8b48: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3d8b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_3d8b4c:
    // 0x3d8b4c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_3d8b50:
    if (ctx->pc == 0x3D8B50u) {
        ctx->pc = 0x3D8B50u;
            // 0x3d8b50: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3D8B54u;
        goto label_3d8b54;
    }
    ctx->pc = 0x3D8B4Cu;
    {
        const bool branch_taken_0x3d8b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8b4c) {
            ctx->pc = 0x3D8B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8B4Cu;
            // 0x3d8b50: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D8B68u;
            goto label_3d8b68;
        }
    }
    ctx->pc = 0x3D8B54u;
label_3d8b54:
    // 0x3d8b54: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x3d8b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_3d8b58:
    // 0x3d8b58: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x3d8b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3d8b5c:
    // 0x3d8b5c: 0xc122d2c  jal         func_48B4B0
label_3d8b60:
    if (ctx->pc == 0x3D8B60u) {
        ctx->pc = 0x3D8B60u;
            // 0x3d8b60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D8B64u;
        goto label_3d8b64;
    }
    ctx->pc = 0x3D8B5Cu;
    SET_GPR_U32(ctx, 31, 0x3D8B64u);
    ctx->pc = 0x3D8B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8B5Cu;
            // 0x3d8b60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8B64u; }
        if (ctx->pc != 0x3D8B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8B64u; }
        if (ctx->pc != 0x3D8B64u) { return; }
    }
    ctx->pc = 0x3D8B64u;
label_3d8b64:
    // 0x3d8b64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d8b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8b68:
    // 0x3d8b68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d8b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d8b6c:
    // 0x3d8b6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d8b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8b70:
    // 0x3d8b70: 0x3e00008  jr          $ra
label_3d8b74:
    if (ctx->pc == 0x3D8B74u) {
        ctx->pc = 0x3D8B74u;
            // 0x3d8b74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D8B78u;
        goto label_3d8b78;
    }
    ctx->pc = 0x3D8B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8B70u;
            // 0x3d8b74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D8B78u;
label_3d8b78:
    // 0x3d8b78: 0x0  nop
    ctx->pc = 0x3d8b78u;
    // NOP
label_3d8b7c:
    // 0x3d8b7c: 0x0  nop
    ctx->pc = 0x3d8b7cu;
    // NOP
label_3d8b80:
    // 0x3d8b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d8b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d8b84:
    // 0x3d8b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d8b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d8b88:
    // 0x3d8b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d8b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d8b8c:
    // 0x3d8b8c: 0x9082004d  lbu         $v0, 0x4D($a0)
    ctx->pc = 0x3d8b8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_3d8b90:
    // 0x3d8b90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3d8b94:
    if (ctx->pc == 0x3D8B94u) {
        ctx->pc = 0x3D8B94u;
            // 0x3d8b94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8B98u;
        goto label_3d8b98;
    }
    ctx->pc = 0x3D8B90u;
    {
        const bool branch_taken_0x3d8b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8B90u;
            // 0x3d8b94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8b90) {
            ctx->pc = 0x3D8BA4u;
            goto label_3d8ba4;
        }
    }
    ctx->pc = 0x3D8B98u;
label_3d8b98:
    // 0x3d8b98: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3d8b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3d8b9c:
    // 0x3d8b9c: 0xc0ba938  jal         func_2EA4E0
label_3d8ba0:
    if (ctx->pc == 0x3D8BA0u) {
        ctx->pc = 0x3D8BA0u;
            // 0x3d8ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8BA4u;
        goto label_3d8ba4;
    }
    ctx->pc = 0x3D8B9Cu;
    SET_GPR_U32(ctx, 31, 0x3D8BA4u);
    ctx->pc = 0x3D8BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8B9Cu;
            // 0x3d8ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8BA4u; }
        if (ctx->pc != 0x3D8BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8BA4u; }
        if (ctx->pc != 0x3D8BA4u) { return; }
    }
    ctx->pc = 0x3D8BA4u;
label_3d8ba4:
    // 0x3d8ba4: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x3d8ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_3d8ba8:
    // 0x3d8ba8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x3d8ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3d8bac:
    // 0x3d8bac: 0xc122d2c  jal         func_48B4B0
label_3d8bb0:
    if (ctx->pc == 0x3D8BB0u) {
        ctx->pc = 0x3D8BB0u;
            // 0x3d8bb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8BB4u;
        goto label_3d8bb4;
    }
    ctx->pc = 0x3D8BACu;
    SET_GPR_U32(ctx, 31, 0x3D8BB4u);
    ctx->pc = 0x3D8BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8BACu;
            // 0x3d8bb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8BB4u; }
        if (ctx->pc != 0x3D8BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8BB4u; }
        if (ctx->pc != 0x3D8BB4u) { return; }
    }
    ctx->pc = 0x3D8BB4u;
label_3d8bb4:
    // 0x3d8bb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d8bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d8bb8:
    // 0x3d8bb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d8bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8bbc:
    // 0x3d8bbc: 0x3e00008  jr          $ra
label_3d8bc0:
    if (ctx->pc == 0x3D8BC0u) {
        ctx->pc = 0x3D8BC0u;
            // 0x3d8bc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D8BC4u;
        goto label_3d8bc4;
    }
    ctx->pc = 0x3D8BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8BBCu;
            // 0x3d8bc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D8BC4u;
label_3d8bc4:
    // 0x3d8bc4: 0x0  nop
    ctx->pc = 0x3d8bc4u;
    // NOP
label_3d8bc8:
    // 0x3d8bc8: 0x0  nop
    ctx->pc = 0x3d8bc8u;
    // NOP
label_3d8bcc:
    // 0x3d8bcc: 0x0  nop
    ctx->pc = 0x3d8bccu;
    // NOP
label_3d8bd0:
    // 0x3d8bd0: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x3d8bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_3d8bd4:
    // 0x3d8bd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d8bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d8bd8:
    // 0x3d8bd8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3d8bdc:
    if (ctx->pc == 0x3D8BDCu) {
        ctx->pc = 0x3D8BE0u;
        goto label_3d8be0;
    }
    ctx->pc = 0x3D8BD8u;
    {
        const bool branch_taken_0x3d8bd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d8bd8) {
            ctx->pc = 0x3D8BE8u;
            goto label_3d8be8;
        }
    }
    ctx->pc = 0x3D8BE0u;
label_3d8be0:
    // 0x3d8be0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_3d8be4:
    if (ctx->pc == 0x3D8BE4u) {
        ctx->pc = 0x3D8BE4u;
            // 0x3d8be4: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x3D8BE8u;
        goto label_3d8be8;
    }
    ctx->pc = 0x3D8BE0u;
    {
        const bool branch_taken_0x3d8be0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8be0) {
            ctx->pc = 0x3D8BE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8BE0u;
            // 0x3d8be4: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D8BE8u;
            goto label_3d8be8;
        }
    }
    ctx->pc = 0x3D8BE8u;
label_3d8be8:
    // 0x3d8be8: 0x3e00008  jr          $ra
label_3d8bec:
    if (ctx->pc == 0x3D8BECu) {
        ctx->pc = 0x3D8BF0u;
        goto label_3d8bf0;
    }
    ctx->pc = 0x3D8BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D8BF0u;
label_3d8bf0:
    // 0x3d8bf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d8bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d8bf4:
    // 0x3d8bf4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x3d8bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_3d8bf8:
    // 0x3d8bf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d8bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d8bfc:
    // 0x3d8bfc: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x3d8bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_3d8c00:
    // 0x3d8c00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d8c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d8c04:
    // 0x3d8c04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d8c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d8c08:
    // 0x3d8c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d8c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d8c0c:
    // 0x3d8c0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d8c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d8c10:
    // 0x3d8c10: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x3d8c10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3d8c14:
    // 0x3d8c14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d8c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d8c18:
    // 0x3d8c18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d8c18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d8c1c:
    // 0x3d8c1c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3d8c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3d8c20:
    // 0x3d8c20: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3d8c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3d8c24:
    // 0x3d8c24: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3d8c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3d8c28:
    // 0x3d8c28: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3d8c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3d8c2c:
    // 0x3d8c2c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x3d8c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_3d8c30:
    // 0x3d8c30: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d8c34:
    // 0x3d8c34: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d8c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d8c38:
    // 0x3d8c38: 0xc08bff0  jal         func_22FFC0
label_3d8c3c:
    if (ctx->pc == 0x3D8C3Cu) {
        ctx->pc = 0x3D8C3Cu;
            // 0x3d8c3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C40u;
        goto label_3d8c40;
    }
    ctx->pc = 0x3D8C38u;
    SET_GPR_U32(ctx, 31, 0x3D8C40u);
    ctx->pc = 0x3D8C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8C38u;
            // 0x3d8c3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8C40u; }
        if (ctx->pc != 0x3D8C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8C40u; }
        if (ctx->pc != 0x3D8C40u) { return; }
    }
    ctx->pc = 0x3D8C40u;
label_3d8c40:
    // 0x3d8c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d8c44:
    // 0x3d8c44: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3d8c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3d8c48:
    // 0x3d8c48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d8c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d8c4c:
    // 0x3d8c4c: 0xc08914c  jal         func_224530
label_3d8c50:
    if (ctx->pc == 0x3D8C50u) {
        ctx->pc = 0x3D8C50u;
            // 0x3d8c50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C54u;
        goto label_3d8c54;
    }
    ctx->pc = 0x3D8C4Cu;
    SET_GPR_U32(ctx, 31, 0x3D8C54u);
    ctx->pc = 0x3D8C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8C4Cu;
            // 0x3d8c50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8C54u; }
        if (ctx->pc != 0x3D8C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8C54u; }
        if (ctx->pc != 0x3D8C54u) { return; }
    }
    ctx->pc = 0x3D8C54u;
label_3d8c54:
    // 0x3d8c54: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3d8c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d8c58:
    // 0x3d8c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d8c5c:
    // 0x3d8c5c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3d8c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d8c60:
    // 0x3d8c60: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3d8c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3d8c64:
    // 0x3d8c64: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3d8c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d8c68:
    // 0x3d8c68: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3d8c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d8c6c:
    // 0x3d8c6c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3d8c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3d8c70:
    // 0x3d8c70: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3d8c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_3d8c74:
    // 0x3d8c74: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3d8c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3d8c78:
    // 0x3d8c78: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3d8c78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3d8c7c:
    // 0x3d8c7c: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x3d8c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d8c80:
    // 0x3d8c80: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x3d8c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d8c84:
    // 0x3d8c84: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3d8c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d8c88:
    // 0x3d8c88: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3d8c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d8c8c:
    // 0x3d8c8c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3d8c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3d8c90:
    // 0x3d8c90: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3d8c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3d8c94:
    // 0x3d8c94: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x3d8c94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3d8c98:
    // 0x3d8c98: 0xc0892b0  jal         func_224AC0
label_3d8c9c:
    if (ctx->pc == 0x3D8C9Cu) {
        ctx->pc = 0x3D8C9Cu;
            // 0x3d8c9c: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x3D8CA0u;
        goto label_3d8ca0;
    }
    ctx->pc = 0x3D8C98u;
    SET_GPR_U32(ctx, 31, 0x3D8CA0u);
    ctx->pc = 0x3D8C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8C98u;
            // 0x3d8c9c: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8CA0u; }
        if (ctx->pc != 0x3D8CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8CA0u; }
        if (ctx->pc != 0x3D8CA0u) { return; }
    }
    ctx->pc = 0x3D8CA0u;
label_3d8ca0:
    // 0x3d8ca0: 0xc088b74  jal         func_222DD0
label_3d8ca4:
    if (ctx->pc == 0x3D8CA4u) {
        ctx->pc = 0x3D8CA4u;
            // 0x3d8ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8CA8u;
        goto label_3d8ca8;
    }
    ctx->pc = 0x3D8CA0u;
    SET_GPR_U32(ctx, 31, 0x3D8CA8u);
    ctx->pc = 0x3D8CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8CA0u;
            // 0x3d8ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8CA8u; }
        if (ctx->pc != 0x3D8CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8CA8u; }
        if (ctx->pc != 0x3D8CA8u) { return; }
    }
    ctx->pc = 0x3D8CA8u;
label_3d8ca8:
    // 0x3d8ca8: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3d8ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3d8cac:
    // 0x3d8cac: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3d8cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3d8cb0:
    // 0x3d8cb0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3d8cb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3d8cb4:
    // 0x3d8cb4: 0x320f809  jalr        $t9
label_3d8cb8:
    if (ctx->pc == 0x3D8CB8u) {
        ctx->pc = 0x3D8CB8u;
            // 0x3d8cb8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D8CBCu;
        goto label_3d8cbc;
    }
    ctx->pc = 0x3D8CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D8CBCu);
        ctx->pc = 0x3D8CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8CB4u;
            // 0x3d8cb8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D8CBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D8CBCu; }
            if (ctx->pc != 0x3D8CBCu) { return; }
        }
        }
    }
    ctx->pc = 0x3D8CBCu;
label_3d8cbc:
    // 0x3d8cbc: 0xc088b74  jal         func_222DD0
label_3d8cc0:
    if (ctx->pc == 0x3D8CC0u) {
        ctx->pc = 0x3D8CC0u;
            // 0x3d8cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8CC4u;
        goto label_3d8cc4;
    }
    ctx->pc = 0x3D8CBCu;
    SET_GPR_U32(ctx, 31, 0x3D8CC4u);
    ctx->pc = 0x3D8CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8CBCu;
            // 0x3d8cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8CC4u; }
        if (ctx->pc != 0x3D8CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8CC4u; }
        if (ctx->pc != 0x3D8CC4u) { return; }
    }
    ctx->pc = 0x3D8CC4u;
label_3d8cc4:
    // 0x3d8cc4: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3d8cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3d8cc8:
    // 0x3d8cc8: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3d8cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3d8ccc:
    // 0x3d8ccc: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x3d8cccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_3d8cd0:
    // 0x3d8cd0: 0x320f809  jalr        $t9
label_3d8cd4:
    if (ctx->pc == 0x3D8CD4u) {
        ctx->pc = 0x3D8CD4u;
            // 0x3d8cd4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3D8CD8u;
        goto label_3d8cd8;
    }
    ctx->pc = 0x3D8CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D8CD8u);
        ctx->pc = 0x3D8CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8CD0u;
            // 0x3d8cd4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D8CD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D8CD8u; }
            if (ctx->pc != 0x3D8CD8u) { return; }
        }
        }
    }
    ctx->pc = 0x3D8CD8u;
label_3d8cd8:
    // 0x3d8cd8: 0xc0e393c  jal         func_38E4F0
label_3d8cdc:
    if (ctx->pc == 0x3D8CDCu) {
        ctx->pc = 0x3D8CDCu;
            // 0x3d8cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D8CE0u;
        goto label_3d8ce0;
    }
    ctx->pc = 0x3D8CD8u;
    SET_GPR_U32(ctx, 31, 0x3D8CE0u);
    ctx->pc = 0x3D8CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8CD8u;
            // 0x3d8cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8CE0u; }
        if (ctx->pc != 0x3D8CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D8CE0u; }
        if (ctx->pc != 0x3D8CE0u) { return; }
    }
    ctx->pc = 0x3D8CE0u;
label_3d8ce0:
    // 0x3d8ce0: 0x3c0443d1  lui         $a0, 0x43D1
    ctx->pc = 0x3d8ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17361 << 16));
label_3d8ce4:
    // 0x3d8ce4: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x3d8ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
label_3d8ce8:
    // 0x3d8ce8: 0x34847084  ori         $a0, $a0, 0x7084
    ctx->pc = 0x3d8ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28804);
label_3d8cec:
    // 0x3d8cec: 0x3463b8c2  ori         $v1, $v1, 0xB8C2
    ctx->pc = 0x3d8cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
label_3d8cf0:
    // 0x3d8cf0: 0xae040154  sw          $a0, 0x154($s0)
    ctx->pc = 0x3d8cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 4));
label_3d8cf4:
    // 0x3d8cf4: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x3d8cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_3d8cf8:
    // 0x3d8cf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d8cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8cfc:
    // 0x3d8cfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d8cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d8d00:
    // 0x3d8d00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d8d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8d04:
    // 0x3d8d04: 0x3e00008  jr          $ra
label_3d8d08:
    if (ctx->pc == 0x3D8D08u) {
        ctx->pc = 0x3D8D08u;
            // 0x3d8d08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3D8D0Cu;
        goto label_3d8d0c;
    }
    ctx->pc = 0x3D8D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D8D04u;
            // 0x3d8d08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D8D0Cu;
label_3d8d0c:
    // 0x3d8d0c: 0x0  nop
    ctx->pc = 0x3d8d0cu;
    // NOP
}
