#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DE3D0
// Address: 0x1de3d0 - 0x1df020
void sub_001DE3D0_0x1de3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE3D0_0x1de3d0");
#endif

    switch (ctx->pc) {
        case 0x1de3d0u: goto label_1de3d0;
        case 0x1de3d4u: goto label_1de3d4;
        case 0x1de3d8u: goto label_1de3d8;
        case 0x1de3dcu: goto label_1de3dc;
        case 0x1de3e0u: goto label_1de3e0;
        case 0x1de3e4u: goto label_1de3e4;
        case 0x1de3e8u: goto label_1de3e8;
        case 0x1de3ecu: goto label_1de3ec;
        case 0x1de3f0u: goto label_1de3f0;
        case 0x1de3f4u: goto label_1de3f4;
        case 0x1de3f8u: goto label_1de3f8;
        case 0x1de3fcu: goto label_1de3fc;
        case 0x1de400u: goto label_1de400;
        case 0x1de404u: goto label_1de404;
        case 0x1de408u: goto label_1de408;
        case 0x1de40cu: goto label_1de40c;
        case 0x1de410u: goto label_1de410;
        case 0x1de414u: goto label_1de414;
        case 0x1de418u: goto label_1de418;
        case 0x1de41cu: goto label_1de41c;
        case 0x1de420u: goto label_1de420;
        case 0x1de424u: goto label_1de424;
        case 0x1de428u: goto label_1de428;
        case 0x1de42cu: goto label_1de42c;
        case 0x1de430u: goto label_1de430;
        case 0x1de434u: goto label_1de434;
        case 0x1de438u: goto label_1de438;
        case 0x1de43cu: goto label_1de43c;
        case 0x1de440u: goto label_1de440;
        case 0x1de444u: goto label_1de444;
        case 0x1de448u: goto label_1de448;
        case 0x1de44cu: goto label_1de44c;
        case 0x1de450u: goto label_1de450;
        case 0x1de454u: goto label_1de454;
        case 0x1de458u: goto label_1de458;
        case 0x1de45cu: goto label_1de45c;
        case 0x1de460u: goto label_1de460;
        case 0x1de464u: goto label_1de464;
        case 0x1de468u: goto label_1de468;
        case 0x1de46cu: goto label_1de46c;
        case 0x1de470u: goto label_1de470;
        case 0x1de474u: goto label_1de474;
        case 0x1de478u: goto label_1de478;
        case 0x1de47cu: goto label_1de47c;
        case 0x1de480u: goto label_1de480;
        case 0x1de484u: goto label_1de484;
        case 0x1de488u: goto label_1de488;
        case 0x1de48cu: goto label_1de48c;
        case 0x1de490u: goto label_1de490;
        case 0x1de494u: goto label_1de494;
        case 0x1de498u: goto label_1de498;
        case 0x1de49cu: goto label_1de49c;
        case 0x1de4a0u: goto label_1de4a0;
        case 0x1de4a4u: goto label_1de4a4;
        case 0x1de4a8u: goto label_1de4a8;
        case 0x1de4acu: goto label_1de4ac;
        case 0x1de4b0u: goto label_1de4b0;
        case 0x1de4b4u: goto label_1de4b4;
        case 0x1de4b8u: goto label_1de4b8;
        case 0x1de4bcu: goto label_1de4bc;
        case 0x1de4c0u: goto label_1de4c0;
        case 0x1de4c4u: goto label_1de4c4;
        case 0x1de4c8u: goto label_1de4c8;
        case 0x1de4ccu: goto label_1de4cc;
        case 0x1de4d0u: goto label_1de4d0;
        case 0x1de4d4u: goto label_1de4d4;
        case 0x1de4d8u: goto label_1de4d8;
        case 0x1de4dcu: goto label_1de4dc;
        case 0x1de4e0u: goto label_1de4e0;
        case 0x1de4e4u: goto label_1de4e4;
        case 0x1de4e8u: goto label_1de4e8;
        case 0x1de4ecu: goto label_1de4ec;
        case 0x1de4f0u: goto label_1de4f0;
        case 0x1de4f4u: goto label_1de4f4;
        case 0x1de4f8u: goto label_1de4f8;
        case 0x1de4fcu: goto label_1de4fc;
        case 0x1de500u: goto label_1de500;
        case 0x1de504u: goto label_1de504;
        case 0x1de508u: goto label_1de508;
        case 0x1de50cu: goto label_1de50c;
        case 0x1de510u: goto label_1de510;
        case 0x1de514u: goto label_1de514;
        case 0x1de518u: goto label_1de518;
        case 0x1de51cu: goto label_1de51c;
        case 0x1de520u: goto label_1de520;
        case 0x1de524u: goto label_1de524;
        case 0x1de528u: goto label_1de528;
        case 0x1de52cu: goto label_1de52c;
        case 0x1de530u: goto label_1de530;
        case 0x1de534u: goto label_1de534;
        case 0x1de538u: goto label_1de538;
        case 0x1de53cu: goto label_1de53c;
        case 0x1de540u: goto label_1de540;
        case 0x1de544u: goto label_1de544;
        case 0x1de548u: goto label_1de548;
        case 0x1de54cu: goto label_1de54c;
        case 0x1de550u: goto label_1de550;
        case 0x1de554u: goto label_1de554;
        case 0x1de558u: goto label_1de558;
        case 0x1de55cu: goto label_1de55c;
        case 0x1de560u: goto label_1de560;
        case 0x1de564u: goto label_1de564;
        case 0x1de568u: goto label_1de568;
        case 0x1de56cu: goto label_1de56c;
        case 0x1de570u: goto label_1de570;
        case 0x1de574u: goto label_1de574;
        case 0x1de578u: goto label_1de578;
        case 0x1de57cu: goto label_1de57c;
        case 0x1de580u: goto label_1de580;
        case 0x1de584u: goto label_1de584;
        case 0x1de588u: goto label_1de588;
        case 0x1de58cu: goto label_1de58c;
        case 0x1de590u: goto label_1de590;
        case 0x1de594u: goto label_1de594;
        case 0x1de598u: goto label_1de598;
        case 0x1de59cu: goto label_1de59c;
        case 0x1de5a0u: goto label_1de5a0;
        case 0x1de5a4u: goto label_1de5a4;
        case 0x1de5a8u: goto label_1de5a8;
        case 0x1de5acu: goto label_1de5ac;
        case 0x1de5b0u: goto label_1de5b0;
        case 0x1de5b4u: goto label_1de5b4;
        case 0x1de5b8u: goto label_1de5b8;
        case 0x1de5bcu: goto label_1de5bc;
        case 0x1de5c0u: goto label_1de5c0;
        case 0x1de5c4u: goto label_1de5c4;
        case 0x1de5c8u: goto label_1de5c8;
        case 0x1de5ccu: goto label_1de5cc;
        case 0x1de5d0u: goto label_1de5d0;
        case 0x1de5d4u: goto label_1de5d4;
        case 0x1de5d8u: goto label_1de5d8;
        case 0x1de5dcu: goto label_1de5dc;
        case 0x1de5e0u: goto label_1de5e0;
        case 0x1de5e4u: goto label_1de5e4;
        case 0x1de5e8u: goto label_1de5e8;
        case 0x1de5ecu: goto label_1de5ec;
        case 0x1de5f0u: goto label_1de5f0;
        case 0x1de5f4u: goto label_1de5f4;
        case 0x1de5f8u: goto label_1de5f8;
        case 0x1de5fcu: goto label_1de5fc;
        case 0x1de600u: goto label_1de600;
        case 0x1de604u: goto label_1de604;
        case 0x1de608u: goto label_1de608;
        case 0x1de60cu: goto label_1de60c;
        case 0x1de610u: goto label_1de610;
        case 0x1de614u: goto label_1de614;
        case 0x1de618u: goto label_1de618;
        case 0x1de61cu: goto label_1de61c;
        case 0x1de620u: goto label_1de620;
        case 0x1de624u: goto label_1de624;
        case 0x1de628u: goto label_1de628;
        case 0x1de62cu: goto label_1de62c;
        case 0x1de630u: goto label_1de630;
        case 0x1de634u: goto label_1de634;
        case 0x1de638u: goto label_1de638;
        case 0x1de63cu: goto label_1de63c;
        case 0x1de640u: goto label_1de640;
        case 0x1de644u: goto label_1de644;
        case 0x1de648u: goto label_1de648;
        case 0x1de64cu: goto label_1de64c;
        case 0x1de650u: goto label_1de650;
        case 0x1de654u: goto label_1de654;
        case 0x1de658u: goto label_1de658;
        case 0x1de65cu: goto label_1de65c;
        case 0x1de660u: goto label_1de660;
        case 0x1de664u: goto label_1de664;
        case 0x1de668u: goto label_1de668;
        case 0x1de66cu: goto label_1de66c;
        case 0x1de670u: goto label_1de670;
        case 0x1de674u: goto label_1de674;
        case 0x1de678u: goto label_1de678;
        case 0x1de67cu: goto label_1de67c;
        case 0x1de680u: goto label_1de680;
        case 0x1de684u: goto label_1de684;
        case 0x1de688u: goto label_1de688;
        case 0x1de68cu: goto label_1de68c;
        case 0x1de690u: goto label_1de690;
        case 0x1de694u: goto label_1de694;
        case 0x1de698u: goto label_1de698;
        case 0x1de69cu: goto label_1de69c;
        case 0x1de6a0u: goto label_1de6a0;
        case 0x1de6a4u: goto label_1de6a4;
        case 0x1de6a8u: goto label_1de6a8;
        case 0x1de6acu: goto label_1de6ac;
        case 0x1de6b0u: goto label_1de6b0;
        case 0x1de6b4u: goto label_1de6b4;
        case 0x1de6b8u: goto label_1de6b8;
        case 0x1de6bcu: goto label_1de6bc;
        case 0x1de6c0u: goto label_1de6c0;
        case 0x1de6c4u: goto label_1de6c4;
        case 0x1de6c8u: goto label_1de6c8;
        case 0x1de6ccu: goto label_1de6cc;
        case 0x1de6d0u: goto label_1de6d0;
        case 0x1de6d4u: goto label_1de6d4;
        case 0x1de6d8u: goto label_1de6d8;
        case 0x1de6dcu: goto label_1de6dc;
        case 0x1de6e0u: goto label_1de6e0;
        case 0x1de6e4u: goto label_1de6e4;
        case 0x1de6e8u: goto label_1de6e8;
        case 0x1de6ecu: goto label_1de6ec;
        case 0x1de6f0u: goto label_1de6f0;
        case 0x1de6f4u: goto label_1de6f4;
        case 0x1de6f8u: goto label_1de6f8;
        case 0x1de6fcu: goto label_1de6fc;
        case 0x1de700u: goto label_1de700;
        case 0x1de704u: goto label_1de704;
        case 0x1de708u: goto label_1de708;
        case 0x1de70cu: goto label_1de70c;
        case 0x1de710u: goto label_1de710;
        case 0x1de714u: goto label_1de714;
        case 0x1de718u: goto label_1de718;
        case 0x1de71cu: goto label_1de71c;
        case 0x1de720u: goto label_1de720;
        case 0x1de724u: goto label_1de724;
        case 0x1de728u: goto label_1de728;
        case 0x1de72cu: goto label_1de72c;
        case 0x1de730u: goto label_1de730;
        case 0x1de734u: goto label_1de734;
        case 0x1de738u: goto label_1de738;
        case 0x1de73cu: goto label_1de73c;
        case 0x1de740u: goto label_1de740;
        case 0x1de744u: goto label_1de744;
        case 0x1de748u: goto label_1de748;
        case 0x1de74cu: goto label_1de74c;
        case 0x1de750u: goto label_1de750;
        case 0x1de754u: goto label_1de754;
        case 0x1de758u: goto label_1de758;
        case 0x1de75cu: goto label_1de75c;
        case 0x1de760u: goto label_1de760;
        case 0x1de764u: goto label_1de764;
        case 0x1de768u: goto label_1de768;
        case 0x1de76cu: goto label_1de76c;
        case 0x1de770u: goto label_1de770;
        case 0x1de774u: goto label_1de774;
        case 0x1de778u: goto label_1de778;
        case 0x1de77cu: goto label_1de77c;
        case 0x1de780u: goto label_1de780;
        case 0x1de784u: goto label_1de784;
        case 0x1de788u: goto label_1de788;
        case 0x1de78cu: goto label_1de78c;
        case 0x1de790u: goto label_1de790;
        case 0x1de794u: goto label_1de794;
        case 0x1de798u: goto label_1de798;
        case 0x1de79cu: goto label_1de79c;
        case 0x1de7a0u: goto label_1de7a0;
        case 0x1de7a4u: goto label_1de7a4;
        case 0x1de7a8u: goto label_1de7a8;
        case 0x1de7acu: goto label_1de7ac;
        case 0x1de7b0u: goto label_1de7b0;
        case 0x1de7b4u: goto label_1de7b4;
        case 0x1de7b8u: goto label_1de7b8;
        case 0x1de7bcu: goto label_1de7bc;
        case 0x1de7c0u: goto label_1de7c0;
        case 0x1de7c4u: goto label_1de7c4;
        case 0x1de7c8u: goto label_1de7c8;
        case 0x1de7ccu: goto label_1de7cc;
        case 0x1de7d0u: goto label_1de7d0;
        case 0x1de7d4u: goto label_1de7d4;
        case 0x1de7d8u: goto label_1de7d8;
        case 0x1de7dcu: goto label_1de7dc;
        case 0x1de7e0u: goto label_1de7e0;
        case 0x1de7e4u: goto label_1de7e4;
        case 0x1de7e8u: goto label_1de7e8;
        case 0x1de7ecu: goto label_1de7ec;
        case 0x1de7f0u: goto label_1de7f0;
        case 0x1de7f4u: goto label_1de7f4;
        case 0x1de7f8u: goto label_1de7f8;
        case 0x1de7fcu: goto label_1de7fc;
        case 0x1de800u: goto label_1de800;
        case 0x1de804u: goto label_1de804;
        case 0x1de808u: goto label_1de808;
        case 0x1de80cu: goto label_1de80c;
        case 0x1de810u: goto label_1de810;
        case 0x1de814u: goto label_1de814;
        case 0x1de818u: goto label_1de818;
        case 0x1de81cu: goto label_1de81c;
        case 0x1de820u: goto label_1de820;
        case 0x1de824u: goto label_1de824;
        case 0x1de828u: goto label_1de828;
        case 0x1de82cu: goto label_1de82c;
        case 0x1de830u: goto label_1de830;
        case 0x1de834u: goto label_1de834;
        case 0x1de838u: goto label_1de838;
        case 0x1de83cu: goto label_1de83c;
        case 0x1de840u: goto label_1de840;
        case 0x1de844u: goto label_1de844;
        case 0x1de848u: goto label_1de848;
        case 0x1de84cu: goto label_1de84c;
        case 0x1de850u: goto label_1de850;
        case 0x1de854u: goto label_1de854;
        case 0x1de858u: goto label_1de858;
        case 0x1de85cu: goto label_1de85c;
        case 0x1de860u: goto label_1de860;
        case 0x1de864u: goto label_1de864;
        case 0x1de868u: goto label_1de868;
        case 0x1de86cu: goto label_1de86c;
        case 0x1de870u: goto label_1de870;
        case 0x1de874u: goto label_1de874;
        case 0x1de878u: goto label_1de878;
        case 0x1de87cu: goto label_1de87c;
        case 0x1de880u: goto label_1de880;
        case 0x1de884u: goto label_1de884;
        case 0x1de888u: goto label_1de888;
        case 0x1de88cu: goto label_1de88c;
        case 0x1de890u: goto label_1de890;
        case 0x1de894u: goto label_1de894;
        case 0x1de898u: goto label_1de898;
        case 0x1de89cu: goto label_1de89c;
        case 0x1de8a0u: goto label_1de8a0;
        case 0x1de8a4u: goto label_1de8a4;
        case 0x1de8a8u: goto label_1de8a8;
        case 0x1de8acu: goto label_1de8ac;
        case 0x1de8b0u: goto label_1de8b0;
        case 0x1de8b4u: goto label_1de8b4;
        case 0x1de8b8u: goto label_1de8b8;
        case 0x1de8bcu: goto label_1de8bc;
        case 0x1de8c0u: goto label_1de8c0;
        case 0x1de8c4u: goto label_1de8c4;
        case 0x1de8c8u: goto label_1de8c8;
        case 0x1de8ccu: goto label_1de8cc;
        case 0x1de8d0u: goto label_1de8d0;
        case 0x1de8d4u: goto label_1de8d4;
        case 0x1de8d8u: goto label_1de8d8;
        case 0x1de8dcu: goto label_1de8dc;
        case 0x1de8e0u: goto label_1de8e0;
        case 0x1de8e4u: goto label_1de8e4;
        case 0x1de8e8u: goto label_1de8e8;
        case 0x1de8ecu: goto label_1de8ec;
        case 0x1de8f0u: goto label_1de8f0;
        case 0x1de8f4u: goto label_1de8f4;
        case 0x1de8f8u: goto label_1de8f8;
        case 0x1de8fcu: goto label_1de8fc;
        case 0x1de900u: goto label_1de900;
        case 0x1de904u: goto label_1de904;
        case 0x1de908u: goto label_1de908;
        case 0x1de90cu: goto label_1de90c;
        case 0x1de910u: goto label_1de910;
        case 0x1de914u: goto label_1de914;
        case 0x1de918u: goto label_1de918;
        case 0x1de91cu: goto label_1de91c;
        case 0x1de920u: goto label_1de920;
        case 0x1de924u: goto label_1de924;
        case 0x1de928u: goto label_1de928;
        case 0x1de92cu: goto label_1de92c;
        case 0x1de930u: goto label_1de930;
        case 0x1de934u: goto label_1de934;
        case 0x1de938u: goto label_1de938;
        case 0x1de93cu: goto label_1de93c;
        case 0x1de940u: goto label_1de940;
        case 0x1de944u: goto label_1de944;
        case 0x1de948u: goto label_1de948;
        case 0x1de94cu: goto label_1de94c;
        case 0x1de950u: goto label_1de950;
        case 0x1de954u: goto label_1de954;
        case 0x1de958u: goto label_1de958;
        case 0x1de95cu: goto label_1de95c;
        case 0x1de960u: goto label_1de960;
        case 0x1de964u: goto label_1de964;
        case 0x1de968u: goto label_1de968;
        case 0x1de96cu: goto label_1de96c;
        case 0x1de970u: goto label_1de970;
        case 0x1de974u: goto label_1de974;
        case 0x1de978u: goto label_1de978;
        case 0x1de97cu: goto label_1de97c;
        case 0x1de980u: goto label_1de980;
        case 0x1de984u: goto label_1de984;
        case 0x1de988u: goto label_1de988;
        case 0x1de98cu: goto label_1de98c;
        case 0x1de990u: goto label_1de990;
        case 0x1de994u: goto label_1de994;
        case 0x1de998u: goto label_1de998;
        case 0x1de99cu: goto label_1de99c;
        case 0x1de9a0u: goto label_1de9a0;
        case 0x1de9a4u: goto label_1de9a4;
        case 0x1de9a8u: goto label_1de9a8;
        case 0x1de9acu: goto label_1de9ac;
        case 0x1de9b0u: goto label_1de9b0;
        case 0x1de9b4u: goto label_1de9b4;
        case 0x1de9b8u: goto label_1de9b8;
        case 0x1de9bcu: goto label_1de9bc;
        case 0x1de9c0u: goto label_1de9c0;
        case 0x1de9c4u: goto label_1de9c4;
        case 0x1de9c8u: goto label_1de9c8;
        case 0x1de9ccu: goto label_1de9cc;
        case 0x1de9d0u: goto label_1de9d0;
        case 0x1de9d4u: goto label_1de9d4;
        case 0x1de9d8u: goto label_1de9d8;
        case 0x1de9dcu: goto label_1de9dc;
        case 0x1de9e0u: goto label_1de9e0;
        case 0x1de9e4u: goto label_1de9e4;
        case 0x1de9e8u: goto label_1de9e8;
        case 0x1de9ecu: goto label_1de9ec;
        case 0x1de9f0u: goto label_1de9f0;
        case 0x1de9f4u: goto label_1de9f4;
        case 0x1de9f8u: goto label_1de9f8;
        case 0x1de9fcu: goto label_1de9fc;
        case 0x1dea00u: goto label_1dea00;
        case 0x1dea04u: goto label_1dea04;
        case 0x1dea08u: goto label_1dea08;
        case 0x1dea0cu: goto label_1dea0c;
        case 0x1dea10u: goto label_1dea10;
        case 0x1dea14u: goto label_1dea14;
        case 0x1dea18u: goto label_1dea18;
        case 0x1dea1cu: goto label_1dea1c;
        case 0x1dea20u: goto label_1dea20;
        case 0x1dea24u: goto label_1dea24;
        case 0x1dea28u: goto label_1dea28;
        case 0x1dea2cu: goto label_1dea2c;
        case 0x1dea30u: goto label_1dea30;
        case 0x1dea34u: goto label_1dea34;
        case 0x1dea38u: goto label_1dea38;
        case 0x1dea3cu: goto label_1dea3c;
        case 0x1dea40u: goto label_1dea40;
        case 0x1dea44u: goto label_1dea44;
        case 0x1dea48u: goto label_1dea48;
        case 0x1dea4cu: goto label_1dea4c;
        case 0x1dea50u: goto label_1dea50;
        case 0x1dea54u: goto label_1dea54;
        case 0x1dea58u: goto label_1dea58;
        case 0x1dea5cu: goto label_1dea5c;
        case 0x1dea60u: goto label_1dea60;
        case 0x1dea64u: goto label_1dea64;
        case 0x1dea68u: goto label_1dea68;
        case 0x1dea6cu: goto label_1dea6c;
        case 0x1dea70u: goto label_1dea70;
        case 0x1dea74u: goto label_1dea74;
        case 0x1dea78u: goto label_1dea78;
        case 0x1dea7cu: goto label_1dea7c;
        case 0x1dea80u: goto label_1dea80;
        case 0x1dea84u: goto label_1dea84;
        case 0x1dea88u: goto label_1dea88;
        case 0x1dea8cu: goto label_1dea8c;
        case 0x1dea90u: goto label_1dea90;
        case 0x1dea94u: goto label_1dea94;
        case 0x1dea98u: goto label_1dea98;
        case 0x1dea9cu: goto label_1dea9c;
        case 0x1deaa0u: goto label_1deaa0;
        case 0x1deaa4u: goto label_1deaa4;
        case 0x1deaa8u: goto label_1deaa8;
        case 0x1deaacu: goto label_1deaac;
        case 0x1deab0u: goto label_1deab0;
        case 0x1deab4u: goto label_1deab4;
        case 0x1deab8u: goto label_1deab8;
        case 0x1deabcu: goto label_1deabc;
        case 0x1deac0u: goto label_1deac0;
        case 0x1deac4u: goto label_1deac4;
        case 0x1deac8u: goto label_1deac8;
        case 0x1deaccu: goto label_1deacc;
        case 0x1dead0u: goto label_1dead0;
        case 0x1dead4u: goto label_1dead4;
        case 0x1dead8u: goto label_1dead8;
        case 0x1deadcu: goto label_1deadc;
        case 0x1deae0u: goto label_1deae0;
        case 0x1deae4u: goto label_1deae4;
        case 0x1deae8u: goto label_1deae8;
        case 0x1deaecu: goto label_1deaec;
        case 0x1deaf0u: goto label_1deaf0;
        case 0x1deaf4u: goto label_1deaf4;
        case 0x1deaf8u: goto label_1deaf8;
        case 0x1deafcu: goto label_1deafc;
        case 0x1deb00u: goto label_1deb00;
        case 0x1deb04u: goto label_1deb04;
        case 0x1deb08u: goto label_1deb08;
        case 0x1deb0cu: goto label_1deb0c;
        case 0x1deb10u: goto label_1deb10;
        case 0x1deb14u: goto label_1deb14;
        case 0x1deb18u: goto label_1deb18;
        case 0x1deb1cu: goto label_1deb1c;
        case 0x1deb20u: goto label_1deb20;
        case 0x1deb24u: goto label_1deb24;
        case 0x1deb28u: goto label_1deb28;
        case 0x1deb2cu: goto label_1deb2c;
        case 0x1deb30u: goto label_1deb30;
        case 0x1deb34u: goto label_1deb34;
        case 0x1deb38u: goto label_1deb38;
        case 0x1deb3cu: goto label_1deb3c;
        case 0x1deb40u: goto label_1deb40;
        case 0x1deb44u: goto label_1deb44;
        case 0x1deb48u: goto label_1deb48;
        case 0x1deb4cu: goto label_1deb4c;
        case 0x1deb50u: goto label_1deb50;
        case 0x1deb54u: goto label_1deb54;
        case 0x1deb58u: goto label_1deb58;
        case 0x1deb5cu: goto label_1deb5c;
        case 0x1deb60u: goto label_1deb60;
        case 0x1deb64u: goto label_1deb64;
        case 0x1deb68u: goto label_1deb68;
        case 0x1deb6cu: goto label_1deb6c;
        case 0x1deb70u: goto label_1deb70;
        case 0x1deb74u: goto label_1deb74;
        case 0x1deb78u: goto label_1deb78;
        case 0x1deb7cu: goto label_1deb7c;
        case 0x1deb80u: goto label_1deb80;
        case 0x1deb84u: goto label_1deb84;
        case 0x1deb88u: goto label_1deb88;
        case 0x1deb8cu: goto label_1deb8c;
        case 0x1deb90u: goto label_1deb90;
        case 0x1deb94u: goto label_1deb94;
        case 0x1deb98u: goto label_1deb98;
        case 0x1deb9cu: goto label_1deb9c;
        case 0x1deba0u: goto label_1deba0;
        case 0x1deba4u: goto label_1deba4;
        case 0x1deba8u: goto label_1deba8;
        case 0x1debacu: goto label_1debac;
        case 0x1debb0u: goto label_1debb0;
        case 0x1debb4u: goto label_1debb4;
        case 0x1debb8u: goto label_1debb8;
        case 0x1debbcu: goto label_1debbc;
        case 0x1debc0u: goto label_1debc0;
        case 0x1debc4u: goto label_1debc4;
        case 0x1debc8u: goto label_1debc8;
        case 0x1debccu: goto label_1debcc;
        case 0x1debd0u: goto label_1debd0;
        case 0x1debd4u: goto label_1debd4;
        case 0x1debd8u: goto label_1debd8;
        case 0x1debdcu: goto label_1debdc;
        case 0x1debe0u: goto label_1debe0;
        case 0x1debe4u: goto label_1debe4;
        case 0x1debe8u: goto label_1debe8;
        case 0x1debecu: goto label_1debec;
        case 0x1debf0u: goto label_1debf0;
        case 0x1debf4u: goto label_1debf4;
        case 0x1debf8u: goto label_1debf8;
        case 0x1debfcu: goto label_1debfc;
        case 0x1dec00u: goto label_1dec00;
        case 0x1dec04u: goto label_1dec04;
        case 0x1dec08u: goto label_1dec08;
        case 0x1dec0cu: goto label_1dec0c;
        case 0x1dec10u: goto label_1dec10;
        case 0x1dec14u: goto label_1dec14;
        case 0x1dec18u: goto label_1dec18;
        case 0x1dec1cu: goto label_1dec1c;
        case 0x1dec20u: goto label_1dec20;
        case 0x1dec24u: goto label_1dec24;
        case 0x1dec28u: goto label_1dec28;
        case 0x1dec2cu: goto label_1dec2c;
        case 0x1dec30u: goto label_1dec30;
        case 0x1dec34u: goto label_1dec34;
        case 0x1dec38u: goto label_1dec38;
        case 0x1dec3cu: goto label_1dec3c;
        case 0x1dec40u: goto label_1dec40;
        case 0x1dec44u: goto label_1dec44;
        case 0x1dec48u: goto label_1dec48;
        case 0x1dec4cu: goto label_1dec4c;
        case 0x1dec50u: goto label_1dec50;
        case 0x1dec54u: goto label_1dec54;
        case 0x1dec58u: goto label_1dec58;
        case 0x1dec5cu: goto label_1dec5c;
        case 0x1dec60u: goto label_1dec60;
        case 0x1dec64u: goto label_1dec64;
        case 0x1dec68u: goto label_1dec68;
        case 0x1dec6cu: goto label_1dec6c;
        case 0x1dec70u: goto label_1dec70;
        case 0x1dec74u: goto label_1dec74;
        case 0x1dec78u: goto label_1dec78;
        case 0x1dec7cu: goto label_1dec7c;
        case 0x1dec80u: goto label_1dec80;
        case 0x1dec84u: goto label_1dec84;
        case 0x1dec88u: goto label_1dec88;
        case 0x1dec8cu: goto label_1dec8c;
        case 0x1dec90u: goto label_1dec90;
        case 0x1dec94u: goto label_1dec94;
        case 0x1dec98u: goto label_1dec98;
        case 0x1dec9cu: goto label_1dec9c;
        case 0x1deca0u: goto label_1deca0;
        case 0x1deca4u: goto label_1deca4;
        case 0x1deca8u: goto label_1deca8;
        case 0x1decacu: goto label_1decac;
        case 0x1decb0u: goto label_1decb0;
        case 0x1decb4u: goto label_1decb4;
        case 0x1decb8u: goto label_1decb8;
        case 0x1decbcu: goto label_1decbc;
        case 0x1decc0u: goto label_1decc0;
        case 0x1decc4u: goto label_1decc4;
        case 0x1decc8u: goto label_1decc8;
        case 0x1decccu: goto label_1deccc;
        case 0x1decd0u: goto label_1decd0;
        case 0x1decd4u: goto label_1decd4;
        case 0x1decd8u: goto label_1decd8;
        case 0x1decdcu: goto label_1decdc;
        case 0x1dece0u: goto label_1dece0;
        case 0x1dece4u: goto label_1dece4;
        case 0x1dece8u: goto label_1dece8;
        case 0x1dececu: goto label_1decec;
        case 0x1decf0u: goto label_1decf0;
        case 0x1decf4u: goto label_1decf4;
        case 0x1decf8u: goto label_1decf8;
        case 0x1decfcu: goto label_1decfc;
        case 0x1ded00u: goto label_1ded00;
        case 0x1ded04u: goto label_1ded04;
        case 0x1ded08u: goto label_1ded08;
        case 0x1ded0cu: goto label_1ded0c;
        case 0x1ded10u: goto label_1ded10;
        case 0x1ded14u: goto label_1ded14;
        case 0x1ded18u: goto label_1ded18;
        case 0x1ded1cu: goto label_1ded1c;
        case 0x1ded20u: goto label_1ded20;
        case 0x1ded24u: goto label_1ded24;
        case 0x1ded28u: goto label_1ded28;
        case 0x1ded2cu: goto label_1ded2c;
        case 0x1ded30u: goto label_1ded30;
        case 0x1ded34u: goto label_1ded34;
        case 0x1ded38u: goto label_1ded38;
        case 0x1ded3cu: goto label_1ded3c;
        case 0x1ded40u: goto label_1ded40;
        case 0x1ded44u: goto label_1ded44;
        case 0x1ded48u: goto label_1ded48;
        case 0x1ded4cu: goto label_1ded4c;
        case 0x1ded50u: goto label_1ded50;
        case 0x1ded54u: goto label_1ded54;
        case 0x1ded58u: goto label_1ded58;
        case 0x1ded5cu: goto label_1ded5c;
        case 0x1ded60u: goto label_1ded60;
        case 0x1ded64u: goto label_1ded64;
        case 0x1ded68u: goto label_1ded68;
        case 0x1ded6cu: goto label_1ded6c;
        case 0x1ded70u: goto label_1ded70;
        case 0x1ded74u: goto label_1ded74;
        case 0x1ded78u: goto label_1ded78;
        case 0x1ded7cu: goto label_1ded7c;
        case 0x1ded80u: goto label_1ded80;
        case 0x1ded84u: goto label_1ded84;
        case 0x1ded88u: goto label_1ded88;
        case 0x1ded8cu: goto label_1ded8c;
        case 0x1ded90u: goto label_1ded90;
        case 0x1ded94u: goto label_1ded94;
        case 0x1ded98u: goto label_1ded98;
        case 0x1ded9cu: goto label_1ded9c;
        case 0x1deda0u: goto label_1deda0;
        case 0x1deda4u: goto label_1deda4;
        case 0x1deda8u: goto label_1deda8;
        case 0x1dedacu: goto label_1dedac;
        case 0x1dedb0u: goto label_1dedb0;
        case 0x1dedb4u: goto label_1dedb4;
        case 0x1dedb8u: goto label_1dedb8;
        case 0x1dedbcu: goto label_1dedbc;
        case 0x1dedc0u: goto label_1dedc0;
        case 0x1dedc4u: goto label_1dedc4;
        case 0x1dedc8u: goto label_1dedc8;
        case 0x1dedccu: goto label_1dedcc;
        case 0x1dedd0u: goto label_1dedd0;
        case 0x1dedd4u: goto label_1dedd4;
        case 0x1dedd8u: goto label_1dedd8;
        case 0x1deddcu: goto label_1deddc;
        case 0x1dede0u: goto label_1dede0;
        case 0x1dede4u: goto label_1dede4;
        case 0x1dede8u: goto label_1dede8;
        case 0x1dedecu: goto label_1dedec;
        case 0x1dedf0u: goto label_1dedf0;
        case 0x1dedf4u: goto label_1dedf4;
        case 0x1dedf8u: goto label_1dedf8;
        case 0x1dedfcu: goto label_1dedfc;
        case 0x1dee00u: goto label_1dee00;
        case 0x1dee04u: goto label_1dee04;
        case 0x1dee08u: goto label_1dee08;
        case 0x1dee0cu: goto label_1dee0c;
        case 0x1dee10u: goto label_1dee10;
        case 0x1dee14u: goto label_1dee14;
        case 0x1dee18u: goto label_1dee18;
        case 0x1dee1cu: goto label_1dee1c;
        case 0x1dee20u: goto label_1dee20;
        case 0x1dee24u: goto label_1dee24;
        case 0x1dee28u: goto label_1dee28;
        case 0x1dee2cu: goto label_1dee2c;
        case 0x1dee30u: goto label_1dee30;
        case 0x1dee34u: goto label_1dee34;
        case 0x1dee38u: goto label_1dee38;
        case 0x1dee3cu: goto label_1dee3c;
        case 0x1dee40u: goto label_1dee40;
        case 0x1dee44u: goto label_1dee44;
        case 0x1dee48u: goto label_1dee48;
        case 0x1dee4cu: goto label_1dee4c;
        case 0x1dee50u: goto label_1dee50;
        case 0x1dee54u: goto label_1dee54;
        case 0x1dee58u: goto label_1dee58;
        case 0x1dee5cu: goto label_1dee5c;
        case 0x1dee60u: goto label_1dee60;
        case 0x1dee64u: goto label_1dee64;
        case 0x1dee68u: goto label_1dee68;
        case 0x1dee6cu: goto label_1dee6c;
        case 0x1dee70u: goto label_1dee70;
        case 0x1dee74u: goto label_1dee74;
        case 0x1dee78u: goto label_1dee78;
        case 0x1dee7cu: goto label_1dee7c;
        case 0x1dee80u: goto label_1dee80;
        case 0x1dee84u: goto label_1dee84;
        case 0x1dee88u: goto label_1dee88;
        case 0x1dee8cu: goto label_1dee8c;
        case 0x1dee90u: goto label_1dee90;
        case 0x1dee94u: goto label_1dee94;
        case 0x1dee98u: goto label_1dee98;
        case 0x1dee9cu: goto label_1dee9c;
        case 0x1deea0u: goto label_1deea0;
        case 0x1deea4u: goto label_1deea4;
        case 0x1deea8u: goto label_1deea8;
        case 0x1deeacu: goto label_1deeac;
        case 0x1deeb0u: goto label_1deeb0;
        case 0x1deeb4u: goto label_1deeb4;
        case 0x1deeb8u: goto label_1deeb8;
        case 0x1deebcu: goto label_1deebc;
        case 0x1deec0u: goto label_1deec0;
        case 0x1deec4u: goto label_1deec4;
        case 0x1deec8u: goto label_1deec8;
        case 0x1deeccu: goto label_1deecc;
        case 0x1deed0u: goto label_1deed0;
        case 0x1deed4u: goto label_1deed4;
        case 0x1deed8u: goto label_1deed8;
        case 0x1deedcu: goto label_1deedc;
        case 0x1deee0u: goto label_1deee0;
        case 0x1deee4u: goto label_1deee4;
        case 0x1deee8u: goto label_1deee8;
        case 0x1deeecu: goto label_1deeec;
        case 0x1deef0u: goto label_1deef0;
        case 0x1deef4u: goto label_1deef4;
        case 0x1deef8u: goto label_1deef8;
        case 0x1deefcu: goto label_1deefc;
        case 0x1def00u: goto label_1def00;
        case 0x1def04u: goto label_1def04;
        case 0x1def08u: goto label_1def08;
        case 0x1def0cu: goto label_1def0c;
        case 0x1def10u: goto label_1def10;
        case 0x1def14u: goto label_1def14;
        case 0x1def18u: goto label_1def18;
        case 0x1def1cu: goto label_1def1c;
        case 0x1def20u: goto label_1def20;
        case 0x1def24u: goto label_1def24;
        case 0x1def28u: goto label_1def28;
        case 0x1def2cu: goto label_1def2c;
        case 0x1def30u: goto label_1def30;
        case 0x1def34u: goto label_1def34;
        case 0x1def38u: goto label_1def38;
        case 0x1def3cu: goto label_1def3c;
        case 0x1def40u: goto label_1def40;
        case 0x1def44u: goto label_1def44;
        case 0x1def48u: goto label_1def48;
        case 0x1def4cu: goto label_1def4c;
        case 0x1def50u: goto label_1def50;
        case 0x1def54u: goto label_1def54;
        case 0x1def58u: goto label_1def58;
        case 0x1def5cu: goto label_1def5c;
        case 0x1def60u: goto label_1def60;
        case 0x1def64u: goto label_1def64;
        case 0x1def68u: goto label_1def68;
        case 0x1def6cu: goto label_1def6c;
        case 0x1def70u: goto label_1def70;
        case 0x1def74u: goto label_1def74;
        case 0x1def78u: goto label_1def78;
        case 0x1def7cu: goto label_1def7c;
        case 0x1def80u: goto label_1def80;
        case 0x1def84u: goto label_1def84;
        case 0x1def88u: goto label_1def88;
        case 0x1def8cu: goto label_1def8c;
        case 0x1def90u: goto label_1def90;
        case 0x1def94u: goto label_1def94;
        case 0x1def98u: goto label_1def98;
        case 0x1def9cu: goto label_1def9c;
        case 0x1defa0u: goto label_1defa0;
        case 0x1defa4u: goto label_1defa4;
        case 0x1defa8u: goto label_1defa8;
        case 0x1defacu: goto label_1defac;
        case 0x1defb0u: goto label_1defb0;
        case 0x1defb4u: goto label_1defb4;
        case 0x1defb8u: goto label_1defb8;
        case 0x1defbcu: goto label_1defbc;
        case 0x1defc0u: goto label_1defc0;
        case 0x1defc4u: goto label_1defc4;
        case 0x1defc8u: goto label_1defc8;
        case 0x1defccu: goto label_1defcc;
        case 0x1defd0u: goto label_1defd0;
        case 0x1defd4u: goto label_1defd4;
        case 0x1defd8u: goto label_1defd8;
        case 0x1defdcu: goto label_1defdc;
        case 0x1defe0u: goto label_1defe0;
        case 0x1defe4u: goto label_1defe4;
        case 0x1defe8u: goto label_1defe8;
        case 0x1defecu: goto label_1defec;
        case 0x1deff0u: goto label_1deff0;
        case 0x1deff4u: goto label_1deff4;
        case 0x1deff8u: goto label_1deff8;
        case 0x1deffcu: goto label_1deffc;
        case 0x1df000u: goto label_1df000;
        case 0x1df004u: goto label_1df004;
        case 0x1df008u: goto label_1df008;
        case 0x1df00cu: goto label_1df00c;
        case 0x1df010u: goto label_1df010;
        case 0x1df014u: goto label_1df014;
        case 0x1df018u: goto label_1df018;
        case 0x1df01cu: goto label_1df01c;
        default: break;
    }

    ctx->pc = 0x1de3d0u;

label_1de3d0:
    // 0x1de3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1de3d4:
    // 0x1de3d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1de3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1de3d8:
    // 0x1de3d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1de3dc:
    // 0x1de3dc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x1de3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_1de3e0:
    // 0x1de3e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1de3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1de3e4:
    // 0x1de3e4: 0x2442cf10  addiu       $v0, $v0, -0x30F0
    ctx->pc = 0x1de3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954768));
label_1de3e8:
    // 0x1de3e8: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1de3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_1de3ec:
    // 0x1de3ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1de3f0:
    // 0x1de3f0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1de3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1de3f4:
    // 0x1de3f4: 0x24a5cfe0  addiu       $a1, $a1, -0x3020
    ctx->pc = 0x1de3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954976));
label_1de3f8:
    // 0x1de3f8: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x1de3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
label_1de3fc:
    // 0x1de3fc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1de3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1de400:
    // 0x1de400: 0xc04a508  jal         func_129420
label_1de404:
    if (ctx->pc == 0x1DE404u) {
        ctx->pc = 0x1DE404u;
            // 0x1de404: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x1DE408u;
        goto label_1de408;
    }
    ctx->pc = 0x1DE400u;
    SET_GPR_U32(ctx, 31, 0x1DE408u);
    ctx->pc = 0x1DE404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE400u;
            // 0x1de404: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE408u; }
        if (ctx->pc != 0x1DE408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE408u; }
        if (ctx->pc != 0x1DE408u) { return; }
    }
    ctx->pc = 0x1DE408u;
label_1de408:
    // 0x1de408: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x1de408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1de40c:
    // 0x1de40c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1de40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1de410:
    // 0x1de410: 0x320f809  jalr        $t9
label_1de414:
    if (ctx->pc == 0x1DE414u) {
        ctx->pc = 0x1DE414u;
            // 0x1de414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE418u;
        goto label_1de418;
    }
    ctx->pc = 0x1DE410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE418u);
        ctx->pc = 0x1DE414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE410u;
            // 0x1de414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DE418u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DE418u; }
            if (ctx->pc != 0x1DE418u) { return; }
        }
        }
    }
    ctx->pc = 0x1DE418u;
label_1de418:
    // 0x1de418: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1de418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de41c:
    // 0x1de41c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1de420:
    // 0x1de420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1de424:
    // 0x1de424: 0x3e00008  jr          $ra
label_1de428:
    if (ctx->pc == 0x1DE428u) {
        ctx->pc = 0x1DE428u;
            // 0x1de428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1DE42Cu;
        goto label_1de42c;
    }
    ctx->pc = 0x1DE424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE424u;
            // 0x1de428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DE42Cu;
label_1de42c:
    // 0x1de42c: 0x0  nop
    ctx->pc = 0x1de42cu;
    // NOP
label_1de430:
    // 0x1de430: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1de430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1de434:
    // 0x1de434: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1de434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1de438:
    // 0x1de438: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1de438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1de43c:
    // 0x1de43c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1de43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1de440:
    // 0x1de440: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1de440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1de444:
    // 0x1de444: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1de444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1de448:
    // 0x1de448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1de448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1de44c:
    // 0x1de44c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1de44cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1de450:
    // 0x1de450: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1de450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1de454:
    // 0x1de454: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1de454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1de458:
    // 0x1de458: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x1de458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_1de45c:
    // 0x1de45c: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x1de45cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1de460:
    // 0x1de460: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1de460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1de464:
    // 0x1de464: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1de464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1de468:
    // 0x1de468: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1de468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1de46c:
    // 0x1de46c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1de46cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1de470:
    // 0x1de470: 0xa08511aa  sb          $a1, 0x11AA($a0)
    ctx->pc = 0x1de470u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4522), (uint8_t)GPR_U32(ctx, 5));
label_1de474:
    // 0x1de474: 0xa08511ab  sb          $a1, 0x11AB($a0)
    ctx->pc = 0x1de474u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4523), (uint8_t)GPR_U32(ctx, 5));
label_1de478:
    // 0x1de478: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x1de478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_1de47c:
    // 0x1de47c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1de47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1de480:
    // 0x1de480: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1de480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1de484:
    // 0x1de484: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1de484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1de488:
    // 0x1de488: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1de488u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1de48c:
    // 0x1de48c: 0xe6000198  swc1        $f0, 0x198($s0)
    ctx->pc = 0x1de48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 408), bits); }
label_1de490:
    // 0x1de490: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1de490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1de494:
    // 0x1de494: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1de494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1de498:
    // 0x1de498: 0x320f809  jalr        $t9
label_1de49c:
    if (ctx->pc == 0x1DE49Cu) {
        ctx->pc = 0x1DE49Cu;
            // 0x1de49c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4A0u;
        goto label_1de4a0;
    }
    ctx->pc = 0x1DE498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE4A0u);
        ctx->pc = 0x1DE49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE498u;
            // 0x1de49c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DE4A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4A0u; }
            if (ctx->pc != 0x1DE4A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DE4A0u;
label_1de4a0:
    // 0x1de4a0: 0xc0a98f4  jal         func_2A63D0
label_1de4a4:
    if (ctx->pc == 0x1DE4A4u) {
        ctx->pc = 0x1DE4A4u;
            // 0x1de4a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4A8u;
        goto label_1de4a8;
    }
    ctx->pc = 0x1DE4A0u;
    SET_GPR_U32(ctx, 31, 0x1DE4A8u);
    ctx->pc = 0x1DE4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE4A0u;
            // 0x1de4a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A63D0u;
    if (runtime->hasFunction(0x2A63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2A63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4A8u; }
        if (ctx->pc != 0x1DE4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A63D0_0x2a63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4A8u; }
        if (ctx->pc != 0x1DE4A8u) { return; }
    }
    ctx->pc = 0x1DE4A8u;
label_1de4a8:
    // 0x1de4a8: 0xc0a98f4  jal         func_2A63D0
label_1de4ac:
    if (ctx->pc == 0x1DE4ACu) {
        ctx->pc = 0x1DE4ACu;
            // 0x1de4ac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4B0u;
        goto label_1de4b0;
    }
    ctx->pc = 0x1DE4A8u;
    SET_GPR_U32(ctx, 31, 0x1DE4B0u);
    ctx->pc = 0x1DE4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE4A8u;
            // 0x1de4ac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A63D0u;
    if (runtime->hasFunction(0x2A63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2A63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4B0u; }
        if (ctx->pc != 0x1DE4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A63D0_0x2a63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4B0u; }
        if (ctx->pc != 0x1DE4B0u) { return; }
    }
    ctx->pc = 0x1DE4B0u;
label_1de4b0:
    // 0x1de4b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1de4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1de4b4:
    // 0x1de4b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1de4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1de4b8:
    // 0x1de4b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1de4b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de4bc:
    // 0x1de4bc: 0xc0a92e0  jal         func_2A4B80
label_1de4c0:
    if (ctx->pc == 0x1DE4C0u) {
        ctx->pc = 0x1DE4C0u;
            // 0x1de4c0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1DE4C4u;
        goto label_1de4c4;
    }
    ctx->pc = 0x1DE4BCu;
    SET_GPR_U32(ctx, 31, 0x1DE4C4u);
    ctx->pc = 0x1DE4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE4BCu;
            // 0x1de4c0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B80u;
    if (runtime->hasFunction(0x2A4B80u)) {
        auto targetFn = runtime->lookupFunction(0x2A4B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4C4u; }
        if (ctx->pc != 0x1DE4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4B80_0x2a4b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4C4u; }
        if (ctx->pc != 0x1DE4C4u) { return; }
    }
    ctx->pc = 0x1DE4C4u;
label_1de4c4:
    // 0x1de4c4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1de4c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1de4c8:
    // 0x1de4c8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1de4c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1de4cc:
    // 0x1de4cc: 0x320f809  jalr        $t9
label_1de4d0:
    if (ctx->pc == 0x1DE4D0u) {
        ctx->pc = 0x1DE4D0u;
            // 0x1de4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4D4u;
        goto label_1de4d4;
    }
    ctx->pc = 0x1DE4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE4D4u);
        ctx->pc = 0x1DE4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE4CCu;
            // 0x1de4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DE4D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4D4u; }
            if (ctx->pc != 0x1DE4D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1DE4D4u;
label_1de4d4:
    // 0x1de4d4: 0xc0a98c0  jal         func_2A6300
label_1de4d8:
    if (ctx->pc == 0x1DE4D8u) {
        ctx->pc = 0x1DE4D8u;
            // 0x1de4d8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4DCu;
        goto label_1de4dc;
    }
    ctx->pc = 0x1DE4D4u;
    SET_GPR_U32(ctx, 31, 0x1DE4DCu);
    ctx->pc = 0x1DE4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE4D4u;
            // 0x1de4d8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6300u;
    if (runtime->hasFunction(0x2A6300u)) {
        auto targetFn = runtime->lookupFunction(0x2A6300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4DCu; }
        if (ctx->pc != 0x1DE4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A6300_0x2a6300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4DCu; }
        if (ctx->pc != 0x1DE4DCu) { return; }
    }
    ctx->pc = 0x1DE4DCu;
label_1de4dc:
    // 0x1de4dc: 0xc0a98c0  jal         func_2A6300
label_1de4e0:
    if (ctx->pc == 0x1DE4E0u) {
        ctx->pc = 0x1DE4E0u;
            // 0x1de4e0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4E4u;
        goto label_1de4e4;
    }
    ctx->pc = 0x1DE4DCu;
    SET_GPR_U32(ctx, 31, 0x1DE4E4u);
    ctx->pc = 0x1DE4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE4DCu;
            // 0x1de4e0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6300u;
    if (runtime->hasFunction(0x2A6300u)) {
        auto targetFn = runtime->lookupFunction(0x2A6300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4E4u; }
        if (ctx->pc != 0x1DE4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A6300_0x2a6300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4E4u; }
        if (ctx->pc != 0x1DE4E4u) { return; }
    }
    ctx->pc = 0x1DE4E4u;
label_1de4e4:
    // 0x1de4e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1de4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1de4e8:
    // 0x1de4e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1de4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1de4ec:
    // 0x1de4ec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1de4ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de4f0:
    // 0x1de4f0: 0xc0a92e0  jal         func_2A4B80
label_1de4f4:
    if (ctx->pc == 0x1DE4F4u) {
        ctx->pc = 0x1DE4F4u;
            // 0x1de4f4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x1DE4F8u;
        goto label_1de4f8;
    }
    ctx->pc = 0x1DE4F0u;
    SET_GPR_U32(ctx, 31, 0x1DE4F8u);
    ctx->pc = 0x1DE4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE4F0u;
            // 0x1de4f4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B80u;
    if (runtime->hasFunction(0x2A4B80u)) {
        auto targetFn = runtime->lookupFunction(0x2A4B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4F8u; }
        if (ctx->pc != 0x1DE4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4B80_0x2a4b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE4F8u; }
        if (ctx->pc != 0x1DE4F8u) { return; }
    }
    ctx->pc = 0x1DE4F8u;
label_1de4f8:
    // 0x1de4f8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1de4f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1de4fc:
    // 0x1de4fc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1de4fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1de500:
    // 0x1de500: 0x320f809  jalr        $t9
label_1de504:
    if (ctx->pc == 0x1DE504u) {
        ctx->pc = 0x1DE504u;
            // 0x1de504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE508u;
        goto label_1de508;
    }
    ctx->pc = 0x1DE500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE508u);
        ctx->pc = 0x1DE504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE500u;
            // 0x1de504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DE508u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DE508u; }
            if (ctx->pc != 0x1DE508u) { return; }
        }
        }
    }
    ctx->pc = 0x1DE508u;
label_1de508:
    // 0x1de508: 0xc0a988c  jal         func_2A6230
label_1de50c:
    if (ctx->pc == 0x1DE50Cu) {
        ctx->pc = 0x1DE50Cu;
            // 0x1de50c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE510u;
        goto label_1de510;
    }
    ctx->pc = 0x1DE508u;
    SET_GPR_U32(ctx, 31, 0x1DE510u);
    ctx->pc = 0x1DE50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE508u;
            // 0x1de50c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6230u;
    if (runtime->hasFunction(0x2A6230u)) {
        auto targetFn = runtime->lookupFunction(0x2A6230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE510u; }
        if (ctx->pc != 0x1DE510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A6230_0x2a6230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE510u; }
        if (ctx->pc != 0x1DE510u) { return; }
    }
    ctx->pc = 0x1DE510u;
label_1de510:
    // 0x1de510: 0xc0a988c  jal         func_2A6230
label_1de514:
    if (ctx->pc == 0x1DE514u) {
        ctx->pc = 0x1DE514u;
            // 0x1de514: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE518u;
        goto label_1de518;
    }
    ctx->pc = 0x1DE510u;
    SET_GPR_U32(ctx, 31, 0x1DE518u);
    ctx->pc = 0x1DE514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE510u;
            // 0x1de514: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6230u;
    if (runtime->hasFunction(0x2A6230u)) {
        auto targetFn = runtime->lookupFunction(0x2A6230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE518u; }
        if (ctx->pc != 0x1DE518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A6230_0x2a6230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE518u; }
        if (ctx->pc != 0x1DE518u) { return; }
    }
    ctx->pc = 0x1DE518u;
label_1de518:
    // 0x1de518: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1de518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1de51c:
    // 0x1de51c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1de51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1de520:
    // 0x1de520: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1de520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de524:
    // 0x1de524: 0xc0a92e0  jal         func_2A4B80
label_1de528:
    if (ctx->pc == 0x1DE528u) {
        ctx->pc = 0x1DE528u;
            // 0x1de528: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x1DE52Cu;
        goto label_1de52c;
    }
    ctx->pc = 0x1DE524u;
    SET_GPR_U32(ctx, 31, 0x1DE52Cu);
    ctx->pc = 0x1DE528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE524u;
            // 0x1de528: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B80u;
    if (runtime->hasFunction(0x2A4B80u)) {
        auto targetFn = runtime->lookupFunction(0x2A4B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE52Cu; }
        if (ctx->pc != 0x1DE52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4B80_0x2a4b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE52Cu; }
        if (ctx->pc != 0x1DE52Cu) { return; }
    }
    ctx->pc = 0x1DE52Cu;
label_1de52c:
    // 0x1de52c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1de52cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1de530:
    // 0x1de530: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1de530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1de534:
    // 0x1de534: 0x320f809  jalr        $t9
label_1de538:
    if (ctx->pc == 0x1DE538u) {
        ctx->pc = 0x1DE538u;
            // 0x1de538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE53Cu;
        goto label_1de53c;
    }
    ctx->pc = 0x1DE534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE53Cu);
        ctx->pc = 0x1DE538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE534u;
            // 0x1de538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DE53Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DE53Cu; }
            if (ctx->pc != 0x1DE53Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DE53Cu;
label_1de53c:
    // 0x1de53c: 0xc0a9858  jal         func_2A6160
label_1de540:
    if (ctx->pc == 0x1DE540u) {
        ctx->pc = 0x1DE540u;
            // 0x1de540: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE544u;
        goto label_1de544;
    }
    ctx->pc = 0x1DE53Cu;
    SET_GPR_U32(ctx, 31, 0x1DE544u);
    ctx->pc = 0x1DE540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE53Cu;
            // 0x1de540: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6160u;
    if (runtime->hasFunction(0x2A6160u)) {
        auto targetFn = runtime->lookupFunction(0x2A6160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE544u; }
        if (ctx->pc != 0x1DE544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A6160_0x2a6160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE544u; }
        if (ctx->pc != 0x1DE544u) { return; }
    }
    ctx->pc = 0x1DE544u;
label_1de544:
    // 0x1de544: 0xc0a9858  jal         func_2A6160
label_1de548:
    if (ctx->pc == 0x1DE548u) {
        ctx->pc = 0x1DE548u;
            // 0x1de548: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE54Cu;
        goto label_1de54c;
    }
    ctx->pc = 0x1DE544u;
    SET_GPR_U32(ctx, 31, 0x1DE54Cu);
    ctx->pc = 0x1DE548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE544u;
            // 0x1de548: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6160u;
    if (runtime->hasFunction(0x2A6160u)) {
        auto targetFn = runtime->lookupFunction(0x2A6160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE54Cu; }
        if (ctx->pc != 0x1DE54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A6160_0x2a6160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE54Cu; }
        if (ctx->pc != 0x1DE54Cu) { return; }
    }
    ctx->pc = 0x1DE54Cu;
label_1de54c:
    // 0x1de54c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1de54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1de550:
    // 0x1de550: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1de550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1de554:
    // 0x1de554: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1de554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de558:
    // 0x1de558: 0xc0a92e0  jal         func_2A4B80
label_1de55c:
    if (ctx->pc == 0x1DE55Cu) {
        ctx->pc = 0x1DE55Cu;
            // 0x1de55c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x1DE560u;
        goto label_1de560;
    }
    ctx->pc = 0x1DE558u;
    SET_GPR_U32(ctx, 31, 0x1DE560u);
    ctx->pc = 0x1DE55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE558u;
            // 0x1de55c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B80u;
    if (runtime->hasFunction(0x2A4B80u)) {
        auto targetFn = runtime->lookupFunction(0x2A4B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE560u; }
        if (ctx->pc != 0x1DE560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4B80_0x2a4b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE560u; }
        if (ctx->pc != 0x1DE560u) { return; }
    }
    ctx->pc = 0x1DE560u;
label_1de560:
    // 0x1de560: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1de560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1de564:
    // 0x1de564: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1de564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1de568:
    // 0x1de568: 0x320f809  jalr        $t9
label_1de56c:
    if (ctx->pc == 0x1DE56Cu) {
        ctx->pc = 0x1DE56Cu;
            // 0x1de56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE570u;
        goto label_1de570;
    }
    ctx->pc = 0x1DE568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE570u);
        ctx->pc = 0x1DE56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE568u;
            // 0x1de56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DE570u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DE570u; }
            if (ctx->pc != 0x1DE570u) { return; }
        }
        }
    }
    ctx->pc = 0x1DE570u;
label_1de570:
    // 0x1de570: 0xc0a97f4  jal         func_2A5FD0
label_1de574:
    if (ctx->pc == 0x1DE574u) {
        ctx->pc = 0x1DE574u;
            // 0x1de574: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE578u;
        goto label_1de578;
    }
    ctx->pc = 0x1DE570u;
    SET_GPR_U32(ctx, 31, 0x1DE578u);
    ctx->pc = 0x1DE574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE570u;
            // 0x1de574: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5FD0u;
    if (runtime->hasFunction(0x2A5FD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A5FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE578u; }
        if (ctx->pc != 0x1DE578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5FD0_0x2a5fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE578u; }
        if (ctx->pc != 0x1DE578u) { return; }
    }
    ctx->pc = 0x1DE578u;
label_1de578:
    // 0x1de578: 0xc0a97f4  jal         func_2A5FD0
label_1de57c:
    if (ctx->pc == 0x1DE57Cu) {
        ctx->pc = 0x1DE57Cu;
            // 0x1de57c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE580u;
        goto label_1de580;
    }
    ctx->pc = 0x1DE578u;
    SET_GPR_U32(ctx, 31, 0x1DE580u);
    ctx->pc = 0x1DE57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE578u;
            // 0x1de57c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5FD0u;
    if (runtime->hasFunction(0x2A5FD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A5FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE580u; }
        if (ctx->pc != 0x1DE580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5FD0_0x2a5fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE580u; }
        if (ctx->pc != 0x1DE580u) { return; }
    }
    ctx->pc = 0x1DE580u;
label_1de580:
    // 0x1de580: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1de580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1de584:
    // 0x1de584: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1de584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de588:
    // 0x1de588: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1de588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de58c:
    // 0x1de58c: 0xc0a92e0  jal         func_2A4B80
label_1de590:
    if (ctx->pc == 0x1DE590u) {
        ctx->pc = 0x1DE590u;
            // 0x1de590: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x1DE594u;
        goto label_1de594;
    }
    ctx->pc = 0x1DE58Cu;
    SET_GPR_U32(ctx, 31, 0x1DE594u);
    ctx->pc = 0x1DE590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE58Cu;
            // 0x1de590: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B80u;
    if (runtime->hasFunction(0x2A4B80u)) {
        auto targetFn = runtime->lookupFunction(0x2A4B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE594u; }
        if (ctx->pc != 0x1DE594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4B80_0x2a4b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE594u; }
        if (ctx->pc != 0x1DE594u) { return; }
    }
    ctx->pc = 0x1DE594u;
label_1de594:
    // 0x1de594: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1de594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1de598:
    // 0x1de598: 0x12220041  beq         $s1, $v0, . + 4 + (0x41 << 2)
label_1de59c:
    if (ctx->pc == 0x1DE59Cu) {
        ctx->pc = 0x1DE5A0u;
        goto label_1de5a0;
    }
    ctx->pc = 0x1DE598u;
    {
        const bool branch_taken_0x1de598 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1de598) {
            ctx->pc = 0x1DE6A0u;
            goto label_1de6a0;
        }
    }
    ctx->pc = 0x1DE5A0u;
label_1de5a0:
    // 0x1de5a0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1de5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1de5a4:
    // 0x1de5a4: 0x1222001f  beq         $s1, $v0, . + 4 + (0x1F << 2)
label_1de5a8:
    if (ctx->pc == 0x1DE5A8u) {
        ctx->pc = 0x1DE5ACu;
        goto label_1de5ac;
    }
    ctx->pc = 0x1DE5A4u;
    {
        const bool branch_taken_0x1de5a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1de5a4) {
            ctx->pc = 0x1DE624u;
            goto label_1de624;
        }
    }
    ctx->pc = 0x1DE5ACu;
label_1de5ac:
    // 0x1de5ac: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1de5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1de5b0:
    // 0x1de5b0: 0x1222001c  beq         $s1, $v0, . + 4 + (0x1C << 2)
label_1de5b4:
    if (ctx->pc == 0x1DE5B4u) {
        ctx->pc = 0x1DE5B8u;
        goto label_1de5b8;
    }
    ctx->pc = 0x1DE5B0u;
    {
        const bool branch_taken_0x1de5b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1de5b0) {
            ctx->pc = 0x1DE624u;
            goto label_1de624;
        }
    }
    ctx->pc = 0x1DE5B8u;
label_1de5b8:
    // 0x1de5b8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1de5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1de5bc:
    // 0x1de5bc: 0x52220003  beql        $s1, $v0, . + 4 + (0x3 << 2)
label_1de5c0:
    if (ctx->pc == 0x1DE5C0u) {
        ctx->pc = 0x1DE5C0u;
            // 0x1de5c0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x1DE5C4u;
        goto label_1de5c4;
    }
    ctx->pc = 0x1DE5BCu;
    {
        const bool branch_taken_0x1de5bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1de5bc) {
            ctx->pc = 0x1DE5C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE5BCu;
            // 0x1de5c0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE5CCu;
            goto label_1de5cc;
        }
    }
    ctx->pc = 0x1DE5C4u;
label_1de5c4:
    // 0x1de5c4: 0x10000052  b           . + 4 + (0x52 << 2)
label_1de5c8:
    if (ctx->pc == 0x1DE5C8u) {
        ctx->pc = 0x1DE5C8u;
            // 0x1de5c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5CCu;
        goto label_1de5cc;
    }
    ctx->pc = 0x1DE5C4u;
    {
        const bool branch_taken_0x1de5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE5C4u;
            // 0x1de5c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5c4) {
            ctx->pc = 0x1DE710u;
            goto label_1de710;
        }
    }
    ctx->pc = 0x1DE5CCu;
label_1de5cc:
    // 0x1de5cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de5d0:
    // 0x1de5d0: 0xc04a576  jal         func_1295D8
label_1de5d4:
    if (ctx->pc == 0x1DE5D4u) {
        ctx->pc = 0x1DE5D4u;
            // 0x1de5d4: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x1DE5D8u;
        goto label_1de5d8;
    }
    ctx->pc = 0x1DE5D0u;
    SET_GPR_U32(ctx, 31, 0x1DE5D8u);
    ctx->pc = 0x1DE5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE5D0u;
            // 0x1de5d4: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5D8u; }
        if (ctx->pc != 0x1DE5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5D8u; }
        if (ctx->pc != 0x1DE5D8u) { return; }
    }
    ctx->pc = 0x1DE5D8u;
label_1de5d8:
    // 0x1de5d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1de5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1de5dc:
    // 0x1de5dc: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x1de5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_1de5e0:
    // 0x1de5e0: 0x8c44e400  lw          $a0, -0x1C00($v0)
    ctx->pc = 0x1de5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_1de5e4:
    // 0x1de5e4: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1de5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_1de5e8:
    // 0x1de5e8: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x1de5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
label_1de5ec:
    // 0x1de5ec: 0x8e430d98  lw          $v1, 0xD98($s2)
    ctx->pc = 0x1de5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_1de5f0:
    // 0x1de5f0: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x1de5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_1de5f4:
    // 0x1de5f4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1de5f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1de5f8:
    // 0x1de5f8: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_1de5fc:
    if (ctx->pc == 0x1DE5FCu) {
        ctx->pc = 0x1DE5FCu;
            // 0x1de5fc: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x1DE600u;
        goto label_1de600;
    }
    ctx->pc = 0x1DE5F8u;
    {
        const bool branch_taken_0x1de5f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de5f8) {
            ctx->pc = 0x1DE5FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE5F8u;
            // 0x1de5fc: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE608u;
            goto label_1de608;
        }
    }
    ctx->pc = 0x1DE600u;
label_1de600:
    // 0x1de600: 0x10000004  b           . + 4 + (0x4 << 2)
label_1de604:
    if (ctx->pc == 0x1DE604u) {
        ctx->pc = 0x1DE604u;
            // 0x1de604: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE608u;
        goto label_1de608;
    }
    ctx->pc = 0x1DE600u;
    {
        const bool branch_taken_0x1de600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE600u;
            // 0x1de604: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de600) {
            ctx->pc = 0x1DE614u;
            goto label_1de614;
        }
    }
    ctx->pc = 0x1DE608u;
label_1de608:
    // 0x1de608: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1de608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1de60c:
    // 0x1de60c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1de610:
    // 0x1de610: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1de610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1de614:
    // 0x1de614: 0xc0b771c  jal         func_2DDC70
label_1de618:
    if (ctx->pc == 0x1DE618u) {
        ctx->pc = 0x1DE618u;
            // 0x1de618: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x1DE61Cu;
        goto label_1de61c;
    }
    ctx->pc = 0x1DE614u;
    SET_GPR_U32(ctx, 31, 0x1DE61Cu);
    ctx->pc = 0x1DE618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE614u;
            // 0x1de618: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC70u;
    if (runtime->hasFunction(0x2DDC70u)) {
        auto targetFn = runtime->lookupFunction(0x2DDC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE61Cu; }
        if (ctx->pc != 0x1DE61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DDC70_0x2ddc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE61Cu; }
        if (ctx->pc != 0x1DE61Cu) { return; }
    }
    ctx->pc = 0x1DE61Cu;
label_1de61c:
    // 0x1de61c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1de620:
    if (ctx->pc == 0x1DE620u) {
        ctx->pc = 0x1DE624u;
        goto label_1de624;
    }
    ctx->pc = 0x1DE61Cu;
    {
        const bool branch_taken_0x1de61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de61c) {
            ctx->pc = 0x1DE70Cu;
            goto label_1de70c;
        }
    }
    ctx->pc = 0x1DE624u;
label_1de624:
    // 0x1de624: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1de624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1de628:
    // 0x1de628: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x1de628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_1de62c:
    // 0x1de62c: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x1de62cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_1de630:
    // 0x1de630: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1de630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1de634:
    // 0x1de634: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_1de638:
    if (ctx->pc == 0x1DE638u) {
        ctx->pc = 0x1DE63Cu;
        goto label_1de63c;
    }
    ctx->pc = 0x1DE634u;
    {
        const bool branch_taken_0x1de634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de634) {
            ctx->pc = 0x1DE70Cu;
            goto label_1de70c;
        }
    }
    ctx->pc = 0x1DE63Cu;
label_1de63c:
    // 0x1de63c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1de63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1de640:
    // 0x1de640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de644:
    // 0x1de644: 0xc04a576  jal         func_1295D8
label_1de648:
    if (ctx->pc == 0x1DE648u) {
        ctx->pc = 0x1DE648u;
            // 0x1de648: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x1DE64Cu;
        goto label_1de64c;
    }
    ctx->pc = 0x1DE644u;
    SET_GPR_U32(ctx, 31, 0x1DE64Cu);
    ctx->pc = 0x1DE648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE644u;
            // 0x1de648: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE64Cu; }
        if (ctx->pc != 0x1DE64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE64Cu; }
        if (ctx->pc != 0x1DE64Cu) { return; }
    }
    ctx->pc = 0x1DE64Cu;
label_1de64c:
    // 0x1de64c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1de64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1de650:
    // 0x1de650: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1de650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1de654:
    // 0x1de654: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1de654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1de658:
    // 0x1de658: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x1de658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
label_1de65c:
    // 0x1de65c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1de65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1de660:
    // 0x1de660: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1de660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1de664:
    // 0x1de664: 0x8e430d98  lw          $v1, 0xD98($s2)
    ctx->pc = 0x1de664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_1de668:
    // 0x1de668: 0x8c44e400  lw          $a0, -0x1C00($v0)
    ctx->pc = 0x1de668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_1de66c:
    // 0x1de66c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x1de66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_1de670:
    // 0x1de670: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1de670u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1de674:
    // 0x1de674: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_1de678:
    if (ctx->pc == 0x1DE678u) {
        ctx->pc = 0x1DE678u;
            // 0x1de678: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x1DE67Cu;
        goto label_1de67c;
    }
    ctx->pc = 0x1DE674u;
    {
        const bool branch_taken_0x1de674 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de674) {
            ctx->pc = 0x1DE678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE674u;
            // 0x1de678: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE684u;
            goto label_1de684;
        }
    }
    ctx->pc = 0x1DE67Cu;
label_1de67c:
    // 0x1de67c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1de680:
    if (ctx->pc == 0x1DE680u) {
        ctx->pc = 0x1DE680u;
            // 0x1de680: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE684u;
        goto label_1de684;
    }
    ctx->pc = 0x1DE67Cu;
    {
        const bool branch_taken_0x1de67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE67Cu;
            // 0x1de680: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de67c) {
            ctx->pc = 0x1DE690u;
            goto label_1de690;
        }
    }
    ctx->pc = 0x1DE684u;
label_1de684:
    // 0x1de684: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1de684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1de688:
    // 0x1de688: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1de68c:
    // 0x1de68c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1de68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1de690:
    // 0x1de690: 0xc0b771c  jal         func_2DDC70
label_1de694:
    if (ctx->pc == 0x1DE694u) {
        ctx->pc = 0x1DE694u;
            // 0x1de694: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1DE698u;
        goto label_1de698;
    }
    ctx->pc = 0x1DE690u;
    SET_GPR_U32(ctx, 31, 0x1DE698u);
    ctx->pc = 0x1DE694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE690u;
            // 0x1de694: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC70u;
    if (runtime->hasFunction(0x2DDC70u)) {
        auto targetFn = runtime->lookupFunction(0x2DDC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE698u; }
        if (ctx->pc != 0x1DE698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DDC70_0x2ddc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE698u; }
        if (ctx->pc != 0x1DE698u) { return; }
    }
    ctx->pc = 0x1DE698u;
label_1de698:
    // 0x1de698: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1de69c:
    if (ctx->pc == 0x1DE69Cu) {
        ctx->pc = 0x1DE6A0u;
        goto label_1de6a0;
    }
    ctx->pc = 0x1DE698u;
    {
        const bool branch_taken_0x1de698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de698) {
            ctx->pc = 0x1DE70Cu;
            goto label_1de70c;
        }
    }
    ctx->pc = 0x1DE6A0u;
label_1de6a0:
    // 0x1de6a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1de6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1de6a4:
    // 0x1de6a4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x1de6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_1de6a8:
    // 0x1de6a8: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x1de6a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_1de6ac:
    // 0x1de6ac: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1de6acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1de6b0:
    // 0x1de6b0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1de6b4:
    if (ctx->pc == 0x1DE6B4u) {
        ctx->pc = 0x1DE6B8u;
        goto label_1de6b8;
    }
    ctx->pc = 0x1DE6B0u;
    {
        const bool branch_taken_0x1de6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de6b0) {
            ctx->pc = 0x1DE70Cu;
            goto label_1de70c;
        }
    }
    ctx->pc = 0x1DE6B8u;
label_1de6b8:
    // 0x1de6b8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1de6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1de6bc:
    // 0x1de6bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de6c0:
    // 0x1de6c0: 0xc04a576  jal         func_1295D8
label_1de6c4:
    if (ctx->pc == 0x1DE6C4u) {
        ctx->pc = 0x1DE6C4u;
            // 0x1de6c4: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x1DE6C8u;
        goto label_1de6c8;
    }
    ctx->pc = 0x1DE6C0u;
    SET_GPR_U32(ctx, 31, 0x1DE6C8u);
    ctx->pc = 0x1DE6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE6C0u;
            // 0x1de6c4: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE6C8u; }
        if (ctx->pc != 0x1DE6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE6C8u; }
        if (ctx->pc != 0x1DE6C8u) { return; }
    }
    ctx->pc = 0x1DE6C8u;
label_1de6c8:
    // 0x1de6c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1de6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1de6cc:
    // 0x1de6cc: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1de6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_1de6d0:
    // 0x1de6d0: 0x8c44e400  lw          $a0, -0x1C00($v0)
    ctx->pc = 0x1de6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_1de6d4:
    // 0x1de6d4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1de6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_1de6d8:
    // 0x1de6d8: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x1de6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
label_1de6dc:
    // 0x1de6dc: 0x8e430d98  lw          $v1, 0xD98($s2)
    ctx->pc = 0x1de6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_1de6e0:
    // 0x1de6e0: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x1de6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_1de6e4:
    // 0x1de6e4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1de6e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1de6e8:
    // 0x1de6e8: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_1de6ec:
    if (ctx->pc == 0x1DE6ECu) {
        ctx->pc = 0x1DE6ECu;
            // 0x1de6ec: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x1DE6F0u;
        goto label_1de6f0;
    }
    ctx->pc = 0x1DE6E8u;
    {
        const bool branch_taken_0x1de6e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de6e8) {
            ctx->pc = 0x1DE6ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE6E8u;
            // 0x1de6ec: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE6F8u;
            goto label_1de6f8;
        }
    }
    ctx->pc = 0x1DE6F0u;
label_1de6f0:
    // 0x1de6f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1de6f4:
    if (ctx->pc == 0x1DE6F4u) {
        ctx->pc = 0x1DE6F4u;
            // 0x1de6f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6F8u;
        goto label_1de6f8;
    }
    ctx->pc = 0x1DE6F0u;
    {
        const bool branch_taken_0x1de6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE6F0u;
            // 0x1de6f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6f0) {
            ctx->pc = 0x1DE704u;
            goto label_1de704;
        }
    }
    ctx->pc = 0x1DE6F8u;
label_1de6f8:
    // 0x1de6f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1de6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1de6fc:
    // 0x1de6fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1de700:
    // 0x1de700: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1de700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1de704:
    // 0x1de704: 0xc0b771c  jal         func_2DDC70
label_1de708:
    if (ctx->pc == 0x1DE708u) {
        ctx->pc = 0x1DE708u;
            // 0x1de708: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1DE70Cu;
        goto label_1de70c;
    }
    ctx->pc = 0x1DE704u;
    SET_GPR_U32(ctx, 31, 0x1DE70Cu);
    ctx->pc = 0x1DE708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE704u;
            // 0x1de708: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC70u;
    if (runtime->hasFunction(0x2DDC70u)) {
        auto targetFn = runtime->lookupFunction(0x2DDC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE70Cu; }
        if (ctx->pc != 0x1DE70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DDC70_0x2ddc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE70Cu; }
        if (ctx->pc != 0x1DE70Cu) { return; }
    }
    ctx->pc = 0x1DE70Cu;
label_1de70c:
    // 0x1de70c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1de70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1de710:
    // 0x1de710: 0xc07649c  jal         func_1D9270
label_1de714:
    if (ctx->pc == 0x1DE714u) {
        ctx->pc = 0x1DE714u;
            // 0x1de714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE718u;
        goto label_1de718;
    }
    ctx->pc = 0x1DE710u;
    SET_GPR_U32(ctx, 31, 0x1DE718u);
    ctx->pc = 0x1DE714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE710u;
            // 0x1de714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE718u; }
        if (ctx->pc != 0x1DE718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE718u; }
        if (ctx->pc != 0x1DE718u) { return; }
    }
    ctx->pc = 0x1DE718u;
label_1de718:
    // 0x1de718: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1de718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1de71c:
    // 0x1de71c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1de71cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1de720:
    // 0x1de720: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1de720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1de724:
    // 0x1de724: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1de724u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1de728:
    // 0x1de728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1de72c:
    // 0x1de72c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de72cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1de730:
    // 0x1de730: 0x3e00008  jr          $ra
label_1de734:
    if (ctx->pc == 0x1DE734u) {
        ctx->pc = 0x1DE734u;
            // 0x1de734: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x1DE738u;
        goto label_1de738;
    }
    ctx->pc = 0x1DE730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE730u;
            // 0x1de734: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DE738u;
label_1de738:
    // 0x1de738: 0x0  nop
    ctx->pc = 0x1de738u;
    // NOP
label_1de73c:
    // 0x1de73c: 0x0  nop
    ctx->pc = 0x1de73cu;
    // NOP
label_1de740:
    // 0x1de740: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1de740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1de744:
    // 0x1de744: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1de744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1de748:
    // 0x1de748: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1de748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1de74c:
    // 0x1de74c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1de74cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1de750:
    // 0x1de750: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1de750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1de754:
    // 0x1de754: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1de754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1de758:
    // 0x1de758: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1de758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1de75c:
    // 0x1de75c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1de75cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1de760:
    // 0x1de760: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1de760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1de764:
    // 0x1de764: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1de764u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1de768:
    // 0x1de768: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1de768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1de76c:
    // 0x1de76c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1de76cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1de770:
    // 0x1de770: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1de770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1de774:
    // 0x1de774: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1de774u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1de778:
    // 0x1de778: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1de778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1de77c:
    // 0x1de77c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1de77cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1de780:
    // 0x1de780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1de780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1de784:
    // 0x1de784: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1de784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1de788:
    // 0x1de788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1de788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1de78c:
    // 0x1de78c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1de78cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1de790:
    // 0x1de790: 0x8c550ea4  lw          $s5, 0xEA4($v0)
    ctx->pc = 0x1de790u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_1de794:
    // 0x1de794: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1de794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1de798:
    // 0x1de798: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1de798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1de79c:
    // 0x1de79c: 0xc04cbd8  jal         func_132F60
label_1de7a0:
    if (ctx->pc == 0x1DE7A0u) {
        ctx->pc = 0x1DE7A0u;
            // 0x1de7a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1DE7A4u;
        goto label_1de7a4;
    }
    ctx->pc = 0x1DE79Cu;
    SET_GPR_U32(ctx, 31, 0x1DE7A4u);
    ctx->pc = 0x1DE7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE79Cu;
            // 0x1de7a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE7A4u; }
        if (ctx->pc != 0x1DE7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE7A4u; }
        if (ctx->pc != 0x1DE7A4u) { return; }
    }
    ctx->pc = 0x1DE7A4u;
label_1de7a4:
    // 0x1de7a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1de7a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1de7a8:
    // 0x1de7a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1de7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1de7ac:
    // 0x1de7ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1de7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1de7b0:
    // 0x1de7b0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1de7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1de7b4:
    // 0x1de7b4: 0xc04cbd8  jal         func_132F60
label_1de7b8:
    if (ctx->pc == 0x1DE7B8u) {
        ctx->pc = 0x1DE7B8u;
            // 0x1de7b8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1DE7BCu;
        goto label_1de7bc;
    }
    ctx->pc = 0x1DE7B4u;
    SET_GPR_U32(ctx, 31, 0x1DE7BCu);
    ctx->pc = 0x1DE7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE7B4u;
            // 0x1de7b8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE7BCu; }
        if (ctx->pc != 0x1DE7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE7BCu; }
        if (ctx->pc != 0x1DE7BCu) { return; }
    }
    ctx->pc = 0x1DE7BCu;
label_1de7bc:
    // 0x1de7bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1de7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1de7c0:
    // 0x1de7c0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1de7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1de7c4:
    // 0x1de7c4: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1de7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1de7c8:
    // 0x1de7c8: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1de7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_1de7cc:
    // 0x1de7cc: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_1de7d0:
    if (ctx->pc == 0x1DE7D0u) {
        ctx->pc = 0x1DE7D0u;
            // 0x1de7d0: 0x240402e0  addiu       $a0, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->pc = 0x1DE7D4u;
        goto label_1de7d4;
    }
    ctx->pc = 0x1DE7CCu;
    {
        const bool branch_taken_0x1de7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1de7cc) {
            ctx->pc = 0x1DE7D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE7CCu;
            // 0x1de7d0: 0x240402e0  addiu       $a0, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE7E4u;
            goto label_1de7e4;
        }
    }
    ctx->pc = 0x1DE7D4u;
label_1de7d4:
    // 0x1de7d4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1de7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_1de7d8:
    // 0x1de7d8: 0xc4408830  lwc1        $f0, -0x77D0($v0)
    ctx->pc = 0x1de7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294936624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1de7dc:
    // 0x1de7dc: 0xe6801194  swc1        $f0, 0x1194($s4)
    ctx->pc = 0x1de7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4500), bits); }
label_1de7e0:
    // 0x1de7e0: 0x240402e0  addiu       $a0, $zero, 0x2E0
    ctx->pc = 0x1de7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
label_1de7e4:
    // 0x1de7e4: 0xc040180  jal         func_100600
label_1de7e8:
    if (ctx->pc == 0x1DE7E8u) {
        ctx->pc = 0x1DE7E8u;
            // 0x1de7e8: 0xae930d98  sw          $s3, 0xD98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3480), GPR_U32(ctx, 19));
        ctx->pc = 0x1DE7ECu;
        goto label_1de7ec;
    }
    ctx->pc = 0x1DE7E4u;
    SET_GPR_U32(ctx, 31, 0x1DE7ECu);
    ctx->pc = 0x1DE7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE7E4u;
            // 0x1de7e8: 0xae930d98  sw          $s3, 0xD98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3480), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE7ECu; }
        if (ctx->pc != 0x1DE7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE7ECu; }
        if (ctx->pc != 0x1DE7ECu) { return; }
    }
    ctx->pc = 0x1DE7ECu;
label_1de7ec:
    // 0x1de7ec: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1de7f0:
    if (ctx->pc == 0x1DE7F0u) {
        ctx->pc = 0x1DE7F0u;
            // 0x1de7f0: 0xae820d74  sw          $v0, 0xD74($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3444), GPR_U32(ctx, 2));
        ctx->pc = 0x1DE7F4u;
        goto label_1de7f4;
    }
    ctx->pc = 0x1DE7ECu;
    {
        const bool branch_taken_0x1de7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de7ec) {
            ctx->pc = 0x1DE7F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE7ECu;
            // 0x1de7f0: 0xae820d74  sw          $v0, 0xD74($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE814u;
            goto label_1de814;
        }
    }
    ctx->pc = 0x1DE7F4u;
label_1de7f4:
    // 0x1de7f4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1de7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1de7f8:
    // 0x1de7f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de7fc:
    // 0x1de7fc: 0xc461c958  lwc1        $f1, -0x36A8($v1)
    ctx->pc = 0x1de7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1de800:
    // 0x1de800: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1de800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1de804:
    // 0x1de804: 0xc6801194  lwc1        $f0, 0x1194($s4)
    ctx->pc = 0x1de804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1de808:
    // 0x1de808: 0xc0b6f68  jal         func_2DBDA0
label_1de80c:
    if (ctx->pc == 0x1DE80Cu) {
        ctx->pc = 0x1DE80Cu;
            // 0x1de80c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1DE810u;
        goto label_1de810;
    }
    ctx->pc = 0x1DE808u;
    SET_GPR_U32(ctx, 31, 0x1DE810u);
    ctx->pc = 0x1DE80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE808u;
            // 0x1de80c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBDA0u;
    if (runtime->hasFunction(0x2DBDA0u)) {
        auto targetFn = runtime->lookupFunction(0x2DBDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE810u; }
        if (ctx->pc != 0x1DE810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBDA0_0x2dbda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE810u; }
        if (ctx->pc != 0x1DE810u) { return; }
    }
    ctx->pc = 0x1DE810u;
label_1de810:
    // 0x1de810: 0xae820d74  sw          $v0, 0xD74($s4)
    ctx->pc = 0x1de810u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3444), GPR_U32(ctx, 2));
label_1de814:
    // 0x1de814: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x1de814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1de818:
    // 0x1de818: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1de818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1de81c:
    // 0x1de81c: 0x320f809  jalr        $t9
label_1de820:
    if (ctx->pc == 0x1DE820u) {
        ctx->pc = 0x1DE820u;
            // 0x1de820: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE824u;
        goto label_1de824;
    }
    ctx->pc = 0x1DE81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE824u);
        ctx->pc = 0x1DE820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE81Cu;
            // 0x1de820: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DE824u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DE824u; }
            if (ctx->pc != 0x1DE824u) { return; }
        }
        }
    }
    ctx->pc = 0x1DE824u;
label_1de824:
    // 0x1de824: 0xae820d78  sw          $v0, 0xD78($s4)
    ctx->pc = 0x1de824u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3448), GPR_U32(ctx, 2));
label_1de828:
    // 0x1de828: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x1de828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_1de82c:
    // 0x1de82c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1de82cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1de830:
    // 0x1de830: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1de830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1de834:
    // 0x1de834: 0x320f809  jalr        $t9
label_1de838:
    if (ctx->pc == 0x1DE838u) {
        ctx->pc = 0x1DE838u;
            // 0x1de838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE83Cu;
        goto label_1de83c;
    }
    ctx->pc = 0x1DE834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE83Cu);
        ctx->pc = 0x1DE838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE834u;
            // 0x1de838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DE83Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DE83Cu; }
            if (ctx->pc != 0x1DE83Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DE83Cu;
label_1de83c:
    // 0x1de83c: 0xae920e34  sw          $s2, 0xE34($s4)
    ctx->pc = 0x1de83cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3636), GPR_U32(ctx, 18));
label_1de840:
    // 0x1de840: 0xae920e38  sw          $s2, 0xE38($s4)
    ctx->pc = 0x1de840u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3640), GPR_U32(ctx, 18));
label_1de844:
    // 0x1de844: 0x8e850e34  lw          $a1, 0xE34($s4)
    ctx->pc = 0x1de844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_1de848:
    // 0x1de848: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x1de848u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1de84c:
    // 0x1de84c: 0x10200122  beqz        $at, . + 4 + (0x122 << 2)
label_1de850:
    if (ctx->pc == 0x1DE850u) {
        ctx->pc = 0x1DE854u;
        goto label_1de854;
    }
    ctx->pc = 0x1DE84Cu;
    {
        const bool branch_taken_0x1de84c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de84c) {
            ctx->pc = 0x1DECD8u;
            goto label_1decd8;
        }
    }
    ctx->pc = 0x1DE854u;
label_1de854:
    // 0x1de854: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1de854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1de858:
    // 0x1de858: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1de858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1de85c:
    // 0x1de85c: 0x2463c810  addiu       $v1, $v1, -0x37F0
    ctx->pc = 0x1de85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952976));
label_1de860:
    // 0x1de860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1de864:
    // 0x1de864: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1de864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1de868:
    // 0x1de868: 0x400008  jr          $v0
label_1de86c:
    if (ctx->pc == 0x1DE86Cu) {
        ctx->pc = 0x1DE870u;
        goto label_1de870;
    }
    ctx->pc = 0x1DE868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE870u: goto label_1de870;
            case 0x1DEBBCu: goto label_1debbc;
            case 0x1DECD8u: goto label_1decd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DE870u;
label_1de870:
    // 0x1de870: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x1de870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1de874:
    // 0x1de874: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1de874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1de878:
    // 0x1de878: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x1de878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_1de87c:
    // 0x1de87c: 0x320f809  jalr        $t9
label_1de880:
    if (ctx->pc == 0x1DE880u) {
        ctx->pc = 0x1DE880u;
            // 0x1de880: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE884u;
        goto label_1de884;
    }
    ctx->pc = 0x1DE87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE884u);
        ctx->pc = 0x1DE880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE87Cu;
            // 0x1de880: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DE884u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DE884u; }
            if (ctx->pc != 0x1DE884u) { return; }
        }
        }
    }
    ctx->pc = 0x1DE884u;
label_1de884:
    // 0x1de884: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x1de884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1de888:
    // 0x1de888: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1de888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1de88c:
    // 0x1de88c: 0x8e860e34  lw          $a2, 0xE34($s4)
    ctx->pc = 0x1de88cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_1de890:
    // 0x1de890: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1de890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1de894:
    // 0x1de894: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1de894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1de898:
    // 0x1de898: 0x320f809  jalr        $t9
label_1de89c:
    if (ctx->pc == 0x1DE89Cu) {
        ctx->pc = 0x1DE89Cu;
            // 0x1de89c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE8A0u;
        goto label_1de8a0;
    }
    ctx->pc = 0x1DE898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE8A0u);
        ctx->pc = 0x1DE89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE898u;
            // 0x1de89c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DE8A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DE8A0u; }
            if (ctx->pc != 0x1DE8A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DE8A0u;
label_1de8a0:
    // 0x1de8a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1de8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1de8a4:
    // 0x1de8a4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1de8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1de8a8:
    // 0x1de8a8: 0x8c5289e8  lw          $s2, -0x7618($v0)
    ctx->pc = 0x1de8a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_1de8ac:
    // 0x1de8ac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1de8acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de8b0:
    // 0x1de8b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1de8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1de8b4:
    // 0x1de8b4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x1de8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1de8b8:
    // 0x1de8b8: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x1de8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_1de8bc:
    // 0x1de8bc: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
label_1de8c0:
    if (ctx->pc == 0x1DE8C0u) {
        ctx->pc = 0x1DE8C0u;
            // 0x1de8c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE8C4u;
        goto label_1de8c4;
    }
    ctx->pc = 0x1DE8BCu;
    {
        const bool branch_taken_0x1de8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DE8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE8BCu;
            // 0x1de8c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de8bc) {
            ctx->pc = 0x1DE8F4u;
            goto label_1de8f4;
        }
    }
    ctx->pc = 0x1DE8C4u;
label_1de8c4:
    // 0x1de8c4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1de8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1de8c8:
    // 0x1de8c8: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_1de8cc:
    if (ctx->pc == 0x1DE8CCu) {
        ctx->pc = 0x1DE8CCu;
            // 0x1de8cc: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->pc = 0x1DE8D0u;
        goto label_1de8d0;
    }
    ctx->pc = 0x1DE8C8u;
    {
        const bool branch_taken_0x1de8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de8c8) {
            ctx->pc = 0x1DE8CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE8C8u;
            // 0x1de8cc: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE8ECu;
            goto label_1de8ec;
        }
    }
    ctx->pc = 0x1DE8D0u;
label_1de8d0:
    // 0x1de8d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1de8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1de8d4:
    // 0x1de8d4: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_1de8d8:
    if (ctx->pc == 0x1DE8D8u) {
        ctx->pc = 0x1DE8D8u;
            // 0x1de8d8: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1DE8DCu;
        goto label_1de8dc;
    }
    ctx->pc = 0x1DE8D4u;
    {
        const bool branch_taken_0x1de8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de8d4) {
            ctx->pc = 0x1DE8D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE8D4u;
            // 0x1de8d8: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE8E4u;
            goto label_1de8e4;
        }
    }
    ctx->pc = 0x1DE8DCu;
label_1de8dc:
    // 0x1de8dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1de8e0:
    if (ctx->pc == 0x1DE8E0u) {
        ctx->pc = 0x1DE8E0u;
            // 0x1de8e0: 0x3c030009  lui         $v1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
        ctx->pc = 0x1DE8E4u;
        goto label_1de8e4;
    }
    ctx->pc = 0x1DE8DCu;
    {
        const bool branch_taken_0x1de8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE8DCu;
            // 0x1de8e0: 0x3c030009  lui         $v1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de8dc) {
            ctx->pc = 0x1DE8FCu;
            goto label_1de8fc;
        }
    }
    ctx->pc = 0x1DE8E4u;
label_1de8e4:
    // 0x1de8e4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1de8e8:
    if (ctx->pc == 0x1DE8E8u) {
        ctx->pc = 0x1DE8E8u;
            // 0x1de8e8: 0x34650da9  ori         $a1, $v1, 0xDA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3497);
        ctx->pc = 0x1DE8ECu;
        goto label_1de8ec;
    }
    ctx->pc = 0x1DE8E4u;
    {
        const bool branch_taken_0x1de8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE8E4u;
            // 0x1de8e8: 0x34650da9  ori         $a1, $v1, 0xDA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3497);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de8e4) {
            ctx->pc = 0x1DE900u;
            goto label_1de900;
        }
    }
    ctx->pc = 0x1DE8ECu;
label_1de8ec:
    // 0x1de8ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1de8f0:
    if (ctx->pc == 0x1DE8F0u) {
        ctx->pc = 0x1DE8F0u;
            // 0x1de8f0: 0x34650fa9  ori         $a1, $v1, 0xFA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4009);
        ctx->pc = 0x1DE8F4u;
        goto label_1de8f4;
    }
    ctx->pc = 0x1DE8ECu;
    {
        const bool branch_taken_0x1de8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE8ECu;
            // 0x1de8f0: 0x34650fa9  ori         $a1, $v1, 0xFA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4009);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de8ec) {
            ctx->pc = 0x1DE900u;
            goto label_1de900;
        }
    }
    ctx->pc = 0x1DE8F4u;
label_1de8f4:
    // 0x1de8f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1de8f8:
    if (ctx->pc == 0x1DE8F8u) {
        ctx->pc = 0x1DE8F8u;
            // 0x1de8f8: 0x240517a9  addiu       $a1, $zero, 0x17A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6057));
        ctx->pc = 0x1DE8FCu;
        goto label_1de8fc;
    }
    ctx->pc = 0x1DE8F4u;
    {
        const bool branch_taken_0x1de8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE8F4u;
            // 0x1de8f8: 0x240517a9  addiu       $a1, $zero, 0x17A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6057));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de8f4) {
            ctx->pc = 0x1DE900u;
            goto label_1de900;
        }
    }
    ctx->pc = 0x1DE8FCu;
label_1de8fc:
    // 0x1de8fc: 0x346501a9  ori         $a1, $v1, 0x1A9
    ctx->pc = 0x1de8fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
label_1de900:
    // 0x1de900: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1de900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1de904:
    // 0x1de904: 0x50430037  beql        $v0, $v1, . + 4 + (0x37 << 2)
label_1de908:
    if (ctx->pc == 0x1DE908u) {
        ctx->pc = 0x1DE908u;
            // 0x1de908: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->pc = 0x1DE90Cu;
        goto label_1de90c;
    }
    ctx->pc = 0x1DE904u;
    {
        const bool branch_taken_0x1de904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de904) {
            ctx->pc = 0x1DE908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE904u;
            // 0x1de908: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE9E4u;
            goto label_1de9e4;
        }
    }
    ctx->pc = 0x1DE90Cu;
label_1de90c:
    // 0x1de90c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1de90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1de910:
    // 0x1de910: 0x50430032  beql        $v0, $v1, . + 4 + (0x32 << 2)
label_1de914:
    if (ctx->pc == 0x1DE914u) {
        ctx->pc = 0x1DE914u;
            // 0x1de914: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1DE918u;
        goto label_1de918;
    }
    ctx->pc = 0x1DE910u;
    {
        const bool branch_taken_0x1de910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de910) {
            ctx->pc = 0x1DE914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE910u;
            // 0x1de914: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE9DCu;
            goto label_1de9dc;
        }
    }
    ctx->pc = 0x1DE918u;
label_1de918:
    // 0x1de918: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1de918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1de91c:
    // 0x1de91c: 0x5043002d  beql        $v0, $v1, . + 4 + (0x2D << 2)
label_1de920:
    if (ctx->pc == 0x1DE920u) {
        ctx->pc = 0x1DE920u;
            // 0x1de920: 0x3c03000b  lui         $v1, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)11 << 16));
        ctx->pc = 0x1DE924u;
        goto label_1de924;
    }
    ctx->pc = 0x1DE91Cu;
    {
        const bool branch_taken_0x1de91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de91c) {
            ctx->pc = 0x1DE920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE91Cu;
            // 0x1de920: 0x3c03000b  lui         $v1, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)11 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE9D4u;
            goto label_1de9d4;
        }
    }
    ctx->pc = 0x1DE924u;
label_1de924:
    // 0x1de924: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1de924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1de928:
    // 0x1de928: 0x50430028  beql        $v0, $v1, . + 4 + (0x28 << 2)
label_1de92c:
    if (ctx->pc == 0x1DE92Cu) {
        ctx->pc = 0x1DE92Cu;
            // 0x1de92c: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x1DE930u;
        goto label_1de930;
    }
    ctx->pc = 0x1DE928u;
    {
        const bool branch_taken_0x1de928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de928) {
            ctx->pc = 0x1DE92Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE928u;
            // 0x1de92c: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE9CCu;
            goto label_1de9cc;
        }
    }
    ctx->pc = 0x1DE930u;
label_1de930:
    // 0x1de930: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1de930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1de934:
    // 0x1de934: 0x50430023  beql        $v0, $v1, . + 4 + (0x23 << 2)
label_1de938:
    if (ctx->pc == 0x1DE938u) {
        ctx->pc = 0x1DE938u;
            // 0x1de938: 0x3c030005  lui         $v1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
        ctx->pc = 0x1DE93Cu;
        goto label_1de93c;
    }
    ctx->pc = 0x1DE934u;
    {
        const bool branch_taken_0x1de934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de934) {
            ctx->pc = 0x1DE938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE934u;
            // 0x1de938: 0x3c030005  lui         $v1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE9C4u;
            goto label_1de9c4;
        }
    }
    ctx->pc = 0x1DE93Cu;
label_1de93c:
    // 0x1de93c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1de93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1de940:
    // 0x1de940: 0x5043001e  beql        $v0, $v1, . + 4 + (0x1E << 2)
label_1de944:
    if (ctx->pc == 0x1DE944u) {
        ctx->pc = 0x1DE944u;
            // 0x1de944: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->pc = 0x1DE948u;
        goto label_1de948;
    }
    ctx->pc = 0x1DE940u;
    {
        const bool branch_taken_0x1de940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de940) {
            ctx->pc = 0x1DE944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE940u;
            // 0x1de944: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE9BCu;
            goto label_1de9bc;
        }
    }
    ctx->pc = 0x1DE948u;
label_1de948:
    // 0x1de948: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1de948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1de94c:
    // 0x1de94c: 0x50430019  beql        $v0, $v1, . + 4 + (0x19 << 2)
label_1de950:
    if (ctx->pc == 0x1DE950u) {
        ctx->pc = 0x1DE950u;
            // 0x1de950: 0x3c03000a  lui         $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
        ctx->pc = 0x1DE954u;
        goto label_1de954;
    }
    ctx->pc = 0x1DE94Cu;
    {
        const bool branch_taken_0x1de94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de94c) {
            ctx->pc = 0x1DE950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE94Cu;
            // 0x1de950: 0x3c03000a  lui         $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE9B4u;
            goto label_1de9b4;
        }
    }
    ctx->pc = 0x1DE954u;
label_1de954:
    // 0x1de954: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1de954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1de958:
    // 0x1de958: 0x50430014  beql        $v0, $v1, . + 4 + (0x14 << 2)
label_1de95c:
    if (ctx->pc == 0x1DE95Cu) {
        ctx->pc = 0x1DE95Cu;
            // 0x1de95c: 0x3c03000a  lui         $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
        ctx->pc = 0x1DE960u;
        goto label_1de960;
    }
    ctx->pc = 0x1DE958u;
    {
        const bool branch_taken_0x1de958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de958) {
            ctx->pc = 0x1DE95Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE958u;
            // 0x1de95c: 0x3c03000a  lui         $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE9ACu;
            goto label_1de9ac;
        }
    }
    ctx->pc = 0x1DE960u;
label_1de960:
    // 0x1de960: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1de960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1de964:
    // 0x1de964: 0x5043000f  beql        $v0, $v1, . + 4 + (0xF << 2)
label_1de968:
    if (ctx->pc == 0x1DE968u) {
        ctx->pc = 0x1DE968u;
            // 0x1de968: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1DE96Cu;
        goto label_1de96c;
    }
    ctx->pc = 0x1DE964u;
    {
        const bool branch_taken_0x1de964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de964) {
            ctx->pc = 0x1DE968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE964u;
            // 0x1de968: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE9A4u;
            goto label_1de9a4;
        }
    }
    ctx->pc = 0x1DE96Cu;
label_1de96c:
    // 0x1de96c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1de96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1de970:
    // 0x1de970: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_1de974:
    if (ctx->pc == 0x1DE974u) {
        ctx->pc = 0x1DE974u;
            // 0x1de974: 0x3c04000a  lui         $a0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10 << 16));
        ctx->pc = 0x1DE978u;
        goto label_1de978;
    }
    ctx->pc = 0x1DE970u;
    {
        const bool branch_taken_0x1de970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de970) {
            ctx->pc = 0x1DE974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE970u;
            // 0x1de974: 0x3c04000a  lui         $a0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE994u;
            goto label_1de994;
        }
    }
    ctx->pc = 0x1DE978u;
label_1de978:
    // 0x1de978: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1de978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de97c:
    // 0x1de97c: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_1de980:
    if (ctx->pc == 0x1DE980u) {
        ctx->pc = 0x1DE980u;
            // 0x1de980: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->pc = 0x1DE984u;
        goto label_1de984;
    }
    ctx->pc = 0x1DE97Cu;
    {
        const bool branch_taken_0x1de97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de97c) {
            ctx->pc = 0x1DE980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE97Cu;
            // 0x1de980: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE98Cu;
            goto label_1de98c;
        }
    }
    ctx->pc = 0x1DE984u;
label_1de984:
    // 0x1de984: 0x10000019  b           . + 4 + (0x19 << 2)
label_1de988:
    if (ctx->pc == 0x1DE988u) {
        ctx->pc = 0x1DE988u;
            // 0x1de988: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->pc = 0x1DE98Cu;
        goto label_1de98c;
    }
    ctx->pc = 0x1DE984u;
    {
        const bool branch_taken_0x1de984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE984u;
            // 0x1de988: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de984) {
            ctx->pc = 0x1DE9ECu;
            goto label_1de9ec;
        }
    }
    ctx->pc = 0x1DE98Cu;
label_1de98c:
    // 0x1de98c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1de990:
    if (ctx->pc == 0x1DE990u) {
        ctx->pc = 0x1DE990u;
            // 0x1de990: 0x34750aa9  ori         $s5, $v1, 0xAA9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2729);
        ctx->pc = 0x1DE994u;
        goto label_1de994;
    }
    ctx->pc = 0x1DE98Cu;
    {
        const bool branch_taken_0x1de98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE98Cu;
            // 0x1de990: 0x34750aa9  ori         $s5, $v1, 0xAA9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2729);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de98c) {
            ctx->pc = 0x1DE9F0u;
            goto label_1de9f0;
        }
    }
    ctx->pc = 0x1DE994u;
label_1de994:
    // 0x1de994: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x1de994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
label_1de998:
    // 0x1de998: 0x34950ba9  ori         $s5, $a0, 0xBA9
    ctx->pc = 0x1de998u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2985);
label_1de99c:
    // 0x1de99c: 0x10000014  b           . + 4 + (0x14 << 2)
label_1de9a0:
    if (ctx->pc == 0x1DE9A0u) {
        ctx->pc = 0x1DE9A0u;
            // 0x1de9a0: 0x34760ba9  ori         $s6, $v1, 0xBA9 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2985);
        ctx->pc = 0x1DE9A4u;
        goto label_1de9a4;
    }
    ctx->pc = 0x1DE99Cu;
    {
        const bool branch_taken_0x1de99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE99Cu;
            // 0x1de9a0: 0x34760ba9  ori         $s6, $v1, 0xBA9 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2985);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de99c) {
            ctx->pc = 0x1DE9F0u;
            goto label_1de9f0;
        }
    }
    ctx->pc = 0x1DE9A4u;
label_1de9a4:
    // 0x1de9a4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1de9a8:
    if (ctx->pc == 0x1DE9A8u) {
        ctx->pc = 0x1DE9A8u;
            // 0x1de9a8: 0x34750ca9  ori         $s5, $v1, 0xCA9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3241);
        ctx->pc = 0x1DE9ACu;
        goto label_1de9ac;
    }
    ctx->pc = 0x1DE9A4u;
    {
        const bool branch_taken_0x1de9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9A4u;
            // 0x1de9a8: 0x34750ca9  ori         $s5, $v1, 0xCA9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3241);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9a4) {
            ctx->pc = 0x1DE9F0u;
            goto label_1de9f0;
        }
    }
    ctx->pc = 0x1DE9ACu;
label_1de9ac:
    // 0x1de9ac: 0x10000010  b           . + 4 + (0x10 << 2)
label_1de9b0:
    if (ctx->pc == 0x1DE9B0u) {
        ctx->pc = 0x1DE9B0u;
            // 0x1de9b0: 0x34750da9  ori         $s5, $v1, 0xDA9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3497);
        ctx->pc = 0x1DE9B4u;
        goto label_1de9b4;
    }
    ctx->pc = 0x1DE9ACu;
    {
        const bool branch_taken_0x1de9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9ACu;
            // 0x1de9b0: 0x34750da9  ori         $s5, $v1, 0xDA9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3497);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9ac) {
            ctx->pc = 0x1DE9F0u;
            goto label_1de9f0;
        }
    }
    ctx->pc = 0x1DE9B4u;
label_1de9b4:
    // 0x1de9b4: 0x1000000e  b           . + 4 + (0xE << 2)
label_1de9b8:
    if (ctx->pc == 0x1DE9B8u) {
        ctx->pc = 0x1DE9B8u;
            // 0x1de9b8: 0x34750ea9  ori         $s5, $v1, 0xEA9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3753);
        ctx->pc = 0x1DE9BCu;
        goto label_1de9bc;
    }
    ctx->pc = 0x1DE9B4u;
    {
        const bool branch_taken_0x1de9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9B4u;
            // 0x1de9b8: 0x34750ea9  ori         $s5, $v1, 0xEA9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3753);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9b4) {
            ctx->pc = 0x1DE9F0u;
            goto label_1de9f0;
        }
    }
    ctx->pc = 0x1DE9BCu;
label_1de9bc:
    // 0x1de9bc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1de9c0:
    if (ctx->pc == 0x1DE9C0u) {
        ctx->pc = 0x1DE9C0u;
            // 0x1de9c0: 0x34750fa9  ori         $s5, $v1, 0xFA9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4009);
        ctx->pc = 0x1DE9C4u;
        goto label_1de9c4;
    }
    ctx->pc = 0x1DE9BCu;
    {
        const bool branch_taken_0x1de9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9BCu;
            // 0x1de9c0: 0x34750fa9  ori         $s5, $v1, 0xFA9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4009);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9bc) {
            ctx->pc = 0x1DE9F0u;
            goto label_1de9f0;
        }
    }
    ctx->pc = 0x1DE9C4u;
label_1de9c4:
    // 0x1de9c4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1de9c8:
    if (ctx->pc == 0x1DE9C8u) {
        ctx->pc = 0x1DE9C8u;
            // 0x1de9c8: 0x347512a9  ori         $s5, $v1, 0x12A9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4777);
        ctx->pc = 0x1DE9CCu;
        goto label_1de9cc;
    }
    ctx->pc = 0x1DE9C4u;
    {
        const bool branch_taken_0x1de9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9C4u;
            // 0x1de9c8: 0x347512a9  ori         $s5, $v1, 0x12A9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4777);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9c4) {
            ctx->pc = 0x1DE9F0u;
            goto label_1de9f0;
        }
    }
    ctx->pc = 0x1DE9CCu;
label_1de9cc:
    // 0x1de9cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1de9d0:
    if (ctx->pc == 0x1DE9D0u) {
        ctx->pc = 0x1DE9D0u;
            // 0x1de9d0: 0x347513a9  ori         $s5, $v1, 0x13A9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5033);
        ctx->pc = 0x1DE9D4u;
        goto label_1de9d4;
    }
    ctx->pc = 0x1DE9CCu;
    {
        const bool branch_taken_0x1de9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9CCu;
            // 0x1de9d0: 0x347513a9  ori         $s5, $v1, 0x13A9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5033);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9cc) {
            ctx->pc = 0x1DE9F0u;
            goto label_1de9f0;
        }
    }
    ctx->pc = 0x1DE9D4u;
label_1de9d4:
    // 0x1de9d4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1de9d8:
    if (ctx->pc == 0x1DE9D8u) {
        ctx->pc = 0x1DE9D8u;
            // 0x1de9d8: 0x347515a9  ori         $s5, $v1, 0x15A9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5545);
        ctx->pc = 0x1DE9DCu;
        goto label_1de9dc;
    }
    ctx->pc = 0x1DE9D4u;
    {
        const bool branch_taken_0x1de9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9D4u;
            // 0x1de9d8: 0x347515a9  ori         $s5, $v1, 0x15A9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5545);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9d4) {
            ctx->pc = 0x1DE9F0u;
            goto label_1de9f0;
        }
    }
    ctx->pc = 0x1DE9DCu;
label_1de9dc:
    // 0x1de9dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1de9e0:
    if (ctx->pc == 0x1DE9E0u) {
        ctx->pc = 0x1DE9E0u;
            // 0x1de9e0: 0x347517a9  ori         $s5, $v1, 0x17A9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6057);
        ctx->pc = 0x1DE9E4u;
        goto label_1de9e4;
    }
    ctx->pc = 0x1DE9DCu;
    {
        const bool branch_taken_0x1de9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9DCu;
            // 0x1de9e0: 0x347517a9  ori         $s5, $v1, 0x17A9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6057);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9dc) {
            ctx->pc = 0x1DE9F0u;
            goto label_1de9f0;
        }
    }
    ctx->pc = 0x1DE9E4u;
label_1de9e4:
    // 0x1de9e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1de9e8:
    if (ctx->pc == 0x1DE9E8u) {
        ctx->pc = 0x1DE9E8u;
            // 0x1de9e8: 0x347519a9  ori         $s5, $v1, 0x19A9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6569);
        ctx->pc = 0x1DE9ECu;
        goto label_1de9ec;
    }
    ctx->pc = 0x1DE9E4u;
    {
        const bool branch_taken_0x1de9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9E4u;
            // 0x1de9e8: 0x347519a9  ori         $s5, $v1, 0x19A9 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6569);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9e4) {
            ctx->pc = 0x1DE9F0u;
            goto label_1de9f0;
        }
    }
    ctx->pc = 0x1DE9ECu;
label_1de9ec:
    // 0x1de9ec: 0x34750aa9  ori         $s5, $v1, 0xAA9
    ctx->pc = 0x1de9ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2729);
label_1de9f0:
    // 0x1de9f0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1de9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1de9f4:
    // 0x1de9f4: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_1de9f8:
    if (ctx->pc == 0x1DE9F8u) {
        ctx->pc = 0x1DE9F8u;
            // 0x1de9f8: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->pc = 0x1DE9FCu;
        goto label_1de9fc;
    }
    ctx->pc = 0x1DE9F4u;
    {
        const bool branch_taken_0x1de9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de9f4) {
            ctx->pc = 0x1DE9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9F4u;
            // 0x1de9f8: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DEA18u;
            goto label_1dea18;
        }
    }
    ctx->pc = 0x1DE9FCu;
label_1de9fc:
    // 0x1de9fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1de9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dea00:
    // 0x1dea00: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_1dea04:
    if (ctx->pc == 0x1DEA04u) {
        ctx->pc = 0x1DEA04u;
            // 0x1dea04: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1DEA08u;
        goto label_1dea08;
    }
    ctx->pc = 0x1DEA00u;
    {
        const bool branch_taken_0x1dea00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dea00) {
            ctx->pc = 0x1DEA04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA00u;
            // 0x1dea04: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DEA10u;
            goto label_1dea10;
        }
    }
    ctx->pc = 0x1DEA08u;
label_1dea08:
    // 0x1dea08: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dea0c:
    if (ctx->pc == 0x1DEA0Cu) {
        ctx->pc = 0x1DEA0Cu;
            // 0x1dea0c: 0x8e590004  lw          $t9, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x1DEA10u;
        goto label_1dea10;
    }
    ctx->pc = 0x1DEA08u;
    {
        const bool branch_taken_0x1dea08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA08u;
            // 0x1dea0c: 0x8e590004  lw          $t9, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea08) {
            ctx->pc = 0x1DEA20u;
            goto label_1dea20;
        }
    }
    ctx->pc = 0x1DEA10u;
label_1dea10:
    // 0x1dea10: 0x10000002  b           . + 4 + (0x2 << 2)
label_1dea14:
    if (ctx->pc == 0x1DEA14u) {
        ctx->pc = 0x1DEA14u;
            // 0x1dea14: 0x34530da9  ori         $s3, $v0, 0xDA9 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3497);
        ctx->pc = 0x1DEA18u;
        goto label_1dea18;
    }
    ctx->pc = 0x1DEA10u;
    {
        const bool branch_taken_0x1dea10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA10u;
            // 0x1dea14: 0x34530da9  ori         $s3, $v0, 0xDA9 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3497);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea10) {
            ctx->pc = 0x1DEA1Cu;
            goto label_1dea1c;
        }
    }
    ctx->pc = 0x1DEA18u;
label_1dea18:
    // 0x1dea18: 0x345315a9  ori         $s3, $v0, 0x15A9
    ctx->pc = 0x1dea18u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5545);
label_1dea1c:
    // 0x1dea1c: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x1dea1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1dea20:
    // 0x1dea20: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1dea20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1dea24:
    // 0x1dea24: 0x320f809  jalr        $t9
label_1dea28:
    if (ctx->pc == 0x1DEA28u) {
        ctx->pc = 0x1DEA28u;
            // 0x1dea28: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1DEA2Cu;
        goto label_1dea2c;
    }
    ctx->pc = 0x1DEA24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEA2Cu);
        ctx->pc = 0x1DEA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA24u;
            // 0x1dea28: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEA2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA2Cu; }
            if (ctx->pc != 0x1DEA2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DEA2Cu;
label_1dea2c:
    // 0x1dea2c: 0xae820058  sw          $v0, 0x58($s4)
    ctx->pc = 0x1dea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
label_1dea30:
    // 0x1dea30: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1dea30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1dea34:
    // 0x1dea34: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x1dea34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1dea38:
    // 0x1dea38: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x1dea38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_1dea3c:
    // 0x1dea3c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1dea3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1dea40:
    // 0x1dea40: 0x320f809  jalr        $t9
label_1dea44:
    if (ctx->pc == 0x1DEA44u) {
        ctx->pc = 0x1DEA44u;
            // 0x1dea44: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x1DEA48u;
        goto label_1dea48;
    }
    ctx->pc = 0x1DEA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEA48u);
        ctx->pc = 0x1DEA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA40u;
            // 0x1dea44: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEA48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA48u; }
            if (ctx->pc != 0x1DEA48u) { return; }
        }
        }
    }
    ctx->pc = 0x1DEA48u;
label_1dea48:
    // 0x1dea48: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x1dea48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
label_1dea4c:
    // 0x1dea4c: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1dea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1dea50:
    // 0x1dea50: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x1dea50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1dea54:
    // 0x1dea54: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1dea54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1dea58:
    // 0x1dea58: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1dea58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1dea5c:
    // 0x1dea5c: 0x320f809  jalr        $t9
label_1dea60:
    if (ctx->pc == 0x1DEA60u) {
        ctx->pc = 0x1DEA60u;
            // 0x1dea60: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x1DEA64u;
        goto label_1dea64;
    }
    ctx->pc = 0x1DEA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEA64u);
        ctx->pc = 0x1DEA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA5Cu;
            // 0x1dea60: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEA64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA64u; }
            if (ctx->pc != 0x1DEA64u) { return; }
        }
        }
    }
    ctx->pc = 0x1DEA64u;
label_1dea64:
    // 0x1dea64: 0xae820060  sw          $v0, 0x60($s4)
    ctx->pc = 0x1dea64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 2));
label_1dea68:
    // 0x1dea68: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1dea68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1dea6c:
    // 0x1dea6c: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x1dea6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1dea70:
    // 0x1dea70: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1dea70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_1dea74:
    // 0x1dea74: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1dea74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1dea78:
    // 0x1dea78: 0x320f809  jalr        $t9
label_1dea7c:
    if (ctx->pc == 0x1DEA7Cu) {
        ctx->pc = 0x1DEA7Cu;
            // 0x1dea7c: 0x344500a9  ori         $a1, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x1DEA80u;
        goto label_1dea80;
    }
    ctx->pc = 0x1DEA78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEA80u);
        ctx->pc = 0x1DEA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA78u;
            // 0x1dea7c: 0x344500a9  ori         $a1, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEA80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA80u; }
            if (ctx->pc != 0x1DEA80u) { return; }
        }
        }
    }
    ctx->pc = 0x1DEA80u;
label_1dea80:
    // 0x1dea80: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x1dea80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_1dea84:
    // 0x1dea84: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1dea84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1dea88:
    // 0x1dea88: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x1dea88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1dea8c:
    // 0x1dea8c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1dea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1dea90:
    // 0x1dea90: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1dea90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1dea94:
    // 0x1dea94: 0x320f809  jalr        $t9
label_1dea98:
    if (ctx->pc == 0x1DEA98u) {
        ctx->pc = 0x1DEA98u;
            // 0x1dea98: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x1DEA9Cu;
        goto label_1dea9c;
    }
    ctx->pc = 0x1DEA94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEA9Cu);
        ctx->pc = 0x1DEA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA94u;
            // 0x1dea98: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEA9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA9Cu; }
            if (ctx->pc != 0x1DEA9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DEA9Cu;
label_1dea9c:
    // 0x1dea9c: 0xae82006c  sw          $v0, 0x6C($s4)
    ctx->pc = 0x1dea9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 2));
label_1deaa0:
    // 0x1deaa0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1deaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1deaa4:
    // 0x1deaa4: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x1deaa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1deaa8:
    // 0x1deaa8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1deaa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1deaac:
    // 0x1deaac: 0x320f809  jalr        $t9
label_1deab0:
    if (ctx->pc == 0x1DEAB0u) {
        ctx->pc = 0x1DEAB0u;
            // 0x1deab0: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1DEAB4u;
        goto label_1deab4;
    }
    ctx->pc = 0x1DEAACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEAB4u);
        ctx->pc = 0x1DEAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAACu;
            // 0x1deab0: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEAB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAB4u; }
            if (ctx->pc != 0x1DEAB4u) { return; }
        }
        }
    }
    ctx->pc = 0x1DEAB4u;
label_1deab4:
    // 0x1deab4: 0xae820070  sw          $v0, 0x70($s4)
    ctx->pc = 0x1deab4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 2));
label_1deab8:
    // 0x1deab8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1deab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1deabc:
    // 0x1deabc: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x1deabcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1deac0:
    // 0x1deac0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1deac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1deac4:
    // 0x1deac4: 0x320f809  jalr        $t9
label_1deac8:
    if (ctx->pc == 0x1DEAC8u) {
        ctx->pc = 0x1DEAC8u;
            // 0x1deac8: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1DEACCu;
        goto label_1deacc;
    }
    ctx->pc = 0x1DEAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEACCu);
        ctx->pc = 0x1DEAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAC4u;
            // 0x1deac8: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEACCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEACCu; }
            if (ctx->pc != 0x1DEACCu) { return; }
        }
        }
    }
    ctx->pc = 0x1DEACCu;
label_1deacc:
    // 0x1deacc: 0xae820074  sw          $v0, 0x74($s4)
    ctx->pc = 0x1deaccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 2));
label_1dead0:
    // 0x1dead0: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1dead0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1dead4:
    // 0x1dead4: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x1dead4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1dead8:
    // 0x1dead8: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x1dead8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
label_1deadc:
    // 0x1deadc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1deadcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1deae0:
    // 0x1deae0: 0x320f809  jalr        $t9
label_1deae4:
    if (ctx->pc == 0x1DEAE4u) {
        ctx->pc = 0x1DEAE4u;
            // 0x1deae4: 0x34450ba9  ori         $a1, $v0, 0xBA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2985);
        ctx->pc = 0x1DEAE8u;
        goto label_1deae8;
    }
    ctx->pc = 0x1DEAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEAE8u);
        ctx->pc = 0x1DEAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAE0u;
            // 0x1deae4: 0x34450ba9  ori         $a1, $v0, 0xBA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2985);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEAE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAE8u; }
            if (ctx->pc != 0x1DEAE8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DEAE8u;
label_1deae8:
    // 0x1deae8: 0xae820078  sw          $v0, 0x78($s4)
    ctx->pc = 0x1deae8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 2));
label_1deaec:
    // 0x1deaec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1deaecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1deaf0:
    // 0x1deaf0: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x1deaf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1deaf4:
    // 0x1deaf4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1deaf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1deaf8:
    // 0x1deaf8: 0x320f809  jalr        $t9
label_1deafc:
    if (ctx->pc == 0x1DEAFCu) {
        ctx->pc = 0x1DEAFCu;
            // 0x1deafc: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1DEB00u;
        goto label_1deb00;
    }
    ctx->pc = 0x1DEAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEB00u);
        ctx->pc = 0x1DEAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAF8u;
            // 0x1deafc: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEB00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB00u; }
            if (ctx->pc != 0x1DEB00u) { return; }
        }
        }
    }
    ctx->pc = 0x1DEB00u;
label_1deb00:
    // 0x1deb00: 0xae82007c  sw          $v0, 0x7C($s4)
    ctx->pc = 0x1deb00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 2));
label_1deb04:
    // 0x1deb04: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1deb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1deb08:
    // 0x1deb08: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x1deb08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1deb0c:
    // 0x1deb0c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1deb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1deb10:
    // 0x1deb10: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1deb10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1deb14:
    // 0x1deb14: 0x320f809  jalr        $t9
label_1deb18:
    if (ctx->pc == 0x1DEB18u) {
        ctx->pc = 0x1DEB18u;
            // 0x1deb18: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x1DEB1Cu;
        goto label_1deb1c;
    }
    ctx->pc = 0x1DEB14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEB1Cu);
        ctx->pc = 0x1DEB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB14u;
            // 0x1deb18: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEB1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB1Cu; }
            if (ctx->pc != 0x1DEB1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DEB1Cu;
label_1deb1c:
    // 0x1deb1c: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x1deb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
label_1deb20:
    // 0x1deb20: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1deb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1deb24:
    // 0x1deb24: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x1deb24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1deb28:
    // 0x1deb28: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1deb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1deb2c:
    // 0x1deb2c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1deb2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1deb30:
    // 0x1deb30: 0x320f809  jalr        $t9
label_1deb34:
    if (ctx->pc == 0x1DEB34u) {
        ctx->pc = 0x1DEB34u;
            // 0x1deb34: 0x344514a9  ori         $a1, $v0, 0x14A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5289);
        ctx->pc = 0x1DEB38u;
        goto label_1deb38;
    }
    ctx->pc = 0x1DEB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEB38u);
        ctx->pc = 0x1DEB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB30u;
            // 0x1deb34: 0x344514a9  ori         $a1, $v0, 0x14A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5289);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEB38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB38u; }
            if (ctx->pc != 0x1DEB38u) { return; }
        }
        }
    }
    ctx->pc = 0x1DEB38u;
label_1deb38:
    // 0x1deb38: 0xae820084  sw          $v0, 0x84($s4)
    ctx->pc = 0x1deb38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
label_1deb3c:
    // 0x1deb3c: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1deb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1deb40:
    // 0x1deb40: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x1deb40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1deb44:
    // 0x1deb44: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1deb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1deb48:
    // 0x1deb48: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1deb48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1deb4c:
    // 0x1deb4c: 0x320f809  jalr        $t9
label_1deb50:
    if (ctx->pc == 0x1DEB50u) {
        ctx->pc = 0x1DEB50u;
            // 0x1deb50: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x1DEB54u;
        goto label_1deb54;
    }
    ctx->pc = 0x1DEB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEB54u);
        ctx->pc = 0x1DEB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB4Cu;
            // 0x1deb50: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEB54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB54u; }
            if (ctx->pc != 0x1DEB54u) { return; }
        }
        }
    }
    ctx->pc = 0x1DEB54u;
label_1deb54:
    // 0x1deb54: 0xae820088  sw          $v0, 0x88($s4)
    ctx->pc = 0x1deb54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
label_1deb58:
    // 0x1deb58: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1deb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1deb5c:
    // 0x1deb5c: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x1deb5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1deb60:
    // 0x1deb60: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x1deb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
label_1deb64:
    // 0x1deb64: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1deb64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1deb68:
    // 0x1deb68: 0x320f809  jalr        $t9
label_1deb6c:
    if (ctx->pc == 0x1DEB6Cu) {
        ctx->pc = 0x1DEB6Cu;
            // 0x1deb6c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x1DEB70u;
        goto label_1deb70;
    }
    ctx->pc = 0x1DEB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEB70u);
        ctx->pc = 0x1DEB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB68u;
            // 0x1deb6c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEB70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB70u; }
            if (ctx->pc != 0x1DEB70u) { return; }
        }
        }
    }
    ctx->pc = 0x1DEB70u;
label_1deb70:
    // 0x1deb70: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x1deb70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
label_1deb74:
    // 0x1deb74: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1deb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1deb78:
    // 0x1deb78: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x1deb78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1deb7c:
    // 0x1deb7c: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x1deb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_1deb80:
    // 0x1deb80: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1deb80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1deb84:
    // 0x1deb84: 0x320f809  jalr        $t9
label_1deb88:
    if (ctx->pc == 0x1DEB88u) {
        ctx->pc = 0x1DEB88u;
            // 0x1deb88: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x1DEB8Cu;
        goto label_1deb8c;
    }
    ctx->pc = 0x1DEB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEB8Cu);
        ctx->pc = 0x1DEB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB84u;
            // 0x1deb88: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEB8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB8Cu; }
            if (ctx->pc != 0x1DEB8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DEB8Cu;
label_1deb8c:
    // 0x1deb8c: 0xae820090  sw          $v0, 0x90($s4)
    ctx->pc = 0x1deb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
label_1deb90:
    // 0x1deb90: 0xc040180  jal         func_100600
label_1deb94:
    if (ctx->pc == 0x1DEB94u) {
        ctx->pc = 0x1DEB94u;
            // 0x1deb94: 0x24041920  addiu       $a0, $zero, 0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6432));
        ctx->pc = 0x1DEB98u;
        goto label_1deb98;
    }
    ctx->pc = 0x1DEB90u;
    SET_GPR_U32(ctx, 31, 0x1DEB98u);
    ctx->pc = 0x1DEB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB90u;
            // 0x1deb94: 0x24041920  addiu       $a0, $zero, 0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB98u; }
        if (ctx->pc != 0x1DEB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB98u; }
        if (ctx->pc != 0x1DEB98u) { return; }
    }
    ctx->pc = 0x1DEB98u;
label_1deb98:
    // 0x1deb98: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
label_1deb9c:
    if (ctx->pc == 0x1DEB9Cu) {
        ctx->pc = 0x1DEB9Cu;
            // 0x1deb9c: 0xae82114c  sw          $v0, 0x114C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4428), GPR_U32(ctx, 2));
        ctx->pc = 0x1DEBA0u;
        goto label_1deba0;
    }
    ctx->pc = 0x1DEB98u;
    {
        const bool branch_taken_0x1deb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1deb98) {
            ctx->pc = 0x1DEB9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB98u;
            // 0x1deb9c: 0xae82114c  sw          $v0, 0x114C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DECD8u;
            goto label_1decd8;
        }
    }
    ctx->pc = 0x1DEBA0u;
label_1deba0:
    // 0x1deba0: 0x8e850e34  lw          $a1, 0xE34($s4)
    ctx->pc = 0x1deba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_1deba4:
    // 0x1deba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1deba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1deba8:
    // 0x1deba8: 0xc0f5780  jal         func_3D5E00
label_1debac:
    if (ctx->pc == 0x1DEBACu) {
        ctx->pc = 0x1DEBACu;
            // 0x1debac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEBB0u;
        goto label_1debb0;
    }
    ctx->pc = 0x1DEBA8u;
    SET_GPR_U32(ctx, 31, 0x1DEBB0u);
    ctx->pc = 0x1DEBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBA8u;
            // 0x1debac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D5E00u;
    if (runtime->hasFunction(0x3D5E00u)) {
        auto targetFn = runtime->lookupFunction(0x3D5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBB0u; }
        if (ctx->pc != 0x1DEBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D5E00_0x3d5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBB0u; }
        if (ctx->pc != 0x1DEBB0u) { return; }
    }
    ctx->pc = 0x1DEBB0u;
label_1debb0:
    // 0x1debb0: 0xae82114c  sw          $v0, 0x114C($s4)
    ctx->pc = 0x1debb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4428), GPR_U32(ctx, 2));
label_1debb4:
    // 0x1debb4: 0x10000048  b           . + 4 + (0x48 << 2)
label_1debb8:
    if (ctx->pc == 0x1DEBB8u) {
        ctx->pc = 0x1DEBBCu;
        goto label_1debbc;
    }
    ctx->pc = 0x1DEBB4u;
    {
        const bool branch_taken_0x1debb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1debb4) {
            ctx->pc = 0x1DECD8u;
            goto label_1decd8;
        }
    }
    ctx->pc = 0x1DEBBCu;
label_1debbc:
    // 0x1debbc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1debbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1debc0:
    // 0x1debc0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1debc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1debc4:
    // 0x1debc4: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1debc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1debc8:
    // 0x1debc8: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x1debc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_1debcc:
    // 0x1debcc: 0x50830015  beql        $a0, $v1, . + 4 + (0x15 << 2)
label_1debd0:
    if (ctx->pc == 0x1DEBD0u) {
        ctx->pc = 0x1DEBD0u;
            // 0x1debd0: 0x240401b0  addiu       $a0, $zero, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
        ctx->pc = 0x1DEBD4u;
        goto label_1debd4;
    }
    ctx->pc = 0x1DEBCCu;
    {
        const bool branch_taken_0x1debcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1debcc) {
            ctx->pc = 0x1DEBD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBCCu;
            // 0x1debd0: 0x240401b0  addiu       $a0, $zero, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DEC24u;
            goto label_1dec24;
        }
    }
    ctx->pc = 0x1DEBD4u;
label_1debd4:
    // 0x1debd4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1debd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1debd8:
    // 0x1debd8: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
label_1debdc:
    if (ctx->pc == 0x1DEBDCu) {
        ctx->pc = 0x1DEBDCu;
            // 0x1debdc: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->pc = 0x1DEBE0u;
        goto label_1debe0;
    }
    ctx->pc = 0x1DEBD8u;
    {
        const bool branch_taken_0x1debd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1debd8) {
            ctx->pc = 0x1DEBDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBD8u;
            // 0x1debdc: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DEBE8u;
            goto label_1debe8;
        }
    }
    ctx->pc = 0x1DEBE0u;
label_1debe0:
    // 0x1debe0: 0x10000021  b           . + 4 + (0x21 << 2)
label_1debe4:
    if (ctx->pc == 0x1DEBE4u) {
        ctx->pc = 0x1DEBE4u;
            // 0x1debe4: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->pc = 0x1DEBE8u;
        goto label_1debe8;
    }
    ctx->pc = 0x1DEBE0u;
    {
        const bool branch_taken_0x1debe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBE0u;
            // 0x1debe4: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1debe0) {
            ctx->pc = 0x1DEC68u;
            goto label_1dec68;
        }
    }
    ctx->pc = 0x1DEBE8u;
label_1debe8:
    // 0x1debe8: 0xc040180  jal         func_100600
label_1debec:
    if (ctx->pc == 0x1DEBECu) {
        ctx->pc = 0x1DEBF0u;
        goto label_1debf0;
    }
    ctx->pc = 0x1DEBE8u;
    SET_GPR_U32(ctx, 31, 0x1DEBF0u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBF0u; }
        if (ctx->pc != 0x1DEBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBF0u; }
        if (ctx->pc != 0x1DEBF0u) { return; }
    }
    ctx->pc = 0x1DEBF0u;
label_1debf0:
    // 0x1debf0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1debf4:
    if (ctx->pc == 0x1DEBF4u) {
        ctx->pc = 0x1DEBF4u;
            // 0x1debf4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEBF8u;
        goto label_1debf8;
    }
    ctx->pc = 0x1DEBF0u;
    {
        const bool branch_taken_0x1debf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBF0u;
            // 0x1debf4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1debf0) {
            ctx->pc = 0x1DEC1Cu;
            goto label_1dec1c;
        }
    }
    ctx->pc = 0x1DEBF8u;
label_1debf8:
    // 0x1debf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1debf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1debfc:
    // 0x1debfc: 0xc0777dc  jal         func_1DDF70
label_1dec00:
    if (ctx->pc == 0x1DEC00u) {
        ctx->pc = 0x1DEC00u;
            // 0x1dec00: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC04u;
        goto label_1dec04;
    }
    ctx->pc = 0x1DEBFCu;
    SET_GPR_U32(ctx, 31, 0x1DEC04u);
    ctx->pc = 0x1DEC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBFCu;
            // 0x1dec00: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDF70u;
    if (runtime->hasFunction(0x1DDF70u)) {
        auto targetFn = runtime->lookupFunction(0x1DDF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC04u; }
        if (ctx->pc != 0x1DEC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DDF70_0x1ddf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC04u; }
        if (ctx->pc != 0x1DEC04u) { return; }
    }
    ctx->pc = 0x1DEC04u;
label_1dec04:
    // 0x1dec04: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1dec04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_1dec08:
    // 0x1dec08: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1dec08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1dec0c:
    // 0x1dec0c: 0x2463dd80  addiu       $v1, $v1, -0x2280
    ctx->pc = 0x1dec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958464));
label_1dec10:
    // 0x1dec10: 0x2442dda8  addiu       $v0, $v0, -0x2258
    ctx->pc = 0x1dec10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958504));
label_1dec14:
    // 0x1dec14: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x1dec14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
label_1dec18:
    // 0x1dec18: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x1dec18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_1dec1c:
    // 0x1dec1c: 0x10000020  b           . + 4 + (0x20 << 2)
label_1dec20:
    if (ctx->pc == 0x1DEC20u) {
        ctx->pc = 0x1DEC20u;
            // 0x1dec20: 0xae920d60  sw          $s2, 0xD60($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3424), GPR_U32(ctx, 18));
        ctx->pc = 0x1DEC24u;
        goto label_1dec24;
    }
    ctx->pc = 0x1DEC1Cu;
    {
        const bool branch_taken_0x1dec1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC1Cu;
            // 0x1dec20: 0xae920d60  sw          $s2, 0xD60($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3424), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec1c) {
            ctx->pc = 0x1DECA0u;
            goto label_1deca0;
        }
    }
    ctx->pc = 0x1DEC24u;
label_1dec24:
    // 0x1dec24: 0xc040180  jal         func_100600
label_1dec28:
    if (ctx->pc == 0x1DEC28u) {
        ctx->pc = 0x1DEC2Cu;
        goto label_1dec2c;
    }
    ctx->pc = 0x1DEC24u;
    SET_GPR_U32(ctx, 31, 0x1DEC2Cu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC2Cu; }
        if (ctx->pc != 0x1DEC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC2Cu; }
        if (ctx->pc != 0x1DEC2Cu) { return; }
    }
    ctx->pc = 0x1DEC2Cu;
label_1dec2c:
    // 0x1dec2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1dec30:
    if (ctx->pc == 0x1DEC30u) {
        ctx->pc = 0x1DEC30u;
            // 0x1dec30: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC34u;
        goto label_1dec34;
    }
    ctx->pc = 0x1DEC2Cu;
    {
        const bool branch_taken_0x1dec2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC2Cu;
            // 0x1dec30: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec2c) {
            ctx->pc = 0x1DEC60u;
            goto label_1dec60;
        }
    }
    ctx->pc = 0x1DEC34u;
label_1dec34:
    // 0x1dec34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dec34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dec38:
    // 0x1dec38: 0xc0777dc  jal         func_1DDF70
label_1dec3c:
    if (ctx->pc == 0x1DEC3Cu) {
        ctx->pc = 0x1DEC3Cu;
            // 0x1dec3c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC40u;
        goto label_1dec40;
    }
    ctx->pc = 0x1DEC38u;
    SET_GPR_U32(ctx, 31, 0x1DEC40u);
    ctx->pc = 0x1DEC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC38u;
            // 0x1dec3c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDF70u;
    if (runtime->hasFunction(0x1DDF70u)) {
        auto targetFn = runtime->lookupFunction(0x1DDF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC40u; }
        if (ctx->pc != 0x1DEC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DDF70_0x1ddf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC40u; }
        if (ctx->pc != 0x1DEC40u) { return; }
    }
    ctx->pc = 0x1DEC40u;
label_1dec40:
    // 0x1dec40: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1dec40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_1dec44:
    // 0x1dec44: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1dec44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1dec48:
    // 0x1dec48: 0x24637df0  addiu       $v1, $v1, 0x7DF0
    ctx->pc = 0x1dec48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32240));
label_1dec4c:
    // 0x1dec4c: 0x24427e18  addiu       $v0, $v0, 0x7E18
    ctx->pc = 0x1dec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32280));
label_1dec50:
    // 0x1dec50: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x1dec50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
label_1dec54:
    // 0x1dec54: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x1dec54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_1dec58:
    // 0x1dec58: 0xae4001a0  sw          $zero, 0x1A0($s2)
    ctx->pc = 0x1dec58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 0));
label_1dec5c:
    // 0x1dec5c: 0xae4001a4  sw          $zero, 0x1A4($s2)
    ctx->pc = 0x1dec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 420), GPR_U32(ctx, 0));
label_1dec60:
    // 0x1dec60: 0x1000000f  b           . + 4 + (0xF << 2)
label_1dec64:
    if (ctx->pc == 0x1DEC64u) {
        ctx->pc = 0x1DEC64u;
            // 0x1dec64: 0xae920d60  sw          $s2, 0xD60($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3424), GPR_U32(ctx, 18));
        ctx->pc = 0x1DEC68u;
        goto label_1dec68;
    }
    ctx->pc = 0x1DEC60u;
    {
        const bool branch_taken_0x1dec60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC60u;
            // 0x1dec64: 0xae920d60  sw          $s2, 0xD60($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3424), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec60) {
            ctx->pc = 0x1DECA0u;
            goto label_1deca0;
        }
    }
    ctx->pc = 0x1DEC68u;
label_1dec68:
    // 0x1dec68: 0xc040180  jal         func_100600
label_1dec6c:
    if (ctx->pc == 0x1DEC6Cu) {
        ctx->pc = 0x1DEC70u;
        goto label_1dec70;
    }
    ctx->pc = 0x1DEC68u;
    SET_GPR_U32(ctx, 31, 0x1DEC70u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC70u; }
        if (ctx->pc != 0x1DEC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC70u; }
        if (ctx->pc != 0x1DEC70u) { return; }
    }
    ctx->pc = 0x1DEC70u;
label_1dec70:
    // 0x1dec70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1dec74:
    if (ctx->pc == 0x1DEC74u) {
        ctx->pc = 0x1DEC74u;
            // 0x1dec74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC78u;
        goto label_1dec78;
    }
    ctx->pc = 0x1DEC70u;
    {
        const bool branch_taken_0x1dec70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC70u;
            // 0x1dec74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec70) {
            ctx->pc = 0x1DEC9Cu;
            goto label_1dec9c;
        }
    }
    ctx->pc = 0x1DEC78u;
label_1dec78:
    // 0x1dec78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dec78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dec7c:
    // 0x1dec7c: 0xc0777dc  jal         func_1DDF70
label_1dec80:
    if (ctx->pc == 0x1DEC80u) {
        ctx->pc = 0x1DEC80u;
            // 0x1dec80: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC84u;
        goto label_1dec84;
    }
    ctx->pc = 0x1DEC7Cu;
    SET_GPR_U32(ctx, 31, 0x1DEC84u);
    ctx->pc = 0x1DEC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC7Cu;
            // 0x1dec80: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDF70u;
    if (runtime->hasFunction(0x1DDF70u)) {
        auto targetFn = runtime->lookupFunction(0x1DDF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC84u; }
        if (ctx->pc != 0x1DEC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DDF70_0x1ddf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC84u; }
        if (ctx->pc != 0x1DEC84u) { return; }
    }
    ctx->pc = 0x1DEC84u;
label_1dec84:
    // 0x1dec84: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1dec84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1dec88:
    // 0x1dec88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1dec88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1dec8c:
    // 0x1dec8c: 0x2463d100  addiu       $v1, $v1, -0x2F00
    ctx->pc = 0x1dec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955264));
label_1dec90:
    // 0x1dec90: 0x2442d128  addiu       $v0, $v0, -0x2ED8
    ctx->pc = 0x1dec90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955304));
label_1dec94:
    // 0x1dec94: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x1dec94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
label_1dec98:
    // 0x1dec98: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x1dec98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_1dec9c:
    // 0x1dec9c: 0xae920d60  sw          $s2, 0xD60($s4)
    ctx->pc = 0x1dec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3424), GPR_U32(ctx, 18));
label_1deca0:
    // 0x1deca0: 0x8e920d74  lw          $s2, 0xD74($s4)
    ctx->pc = 0x1deca0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3444)));
label_1deca4:
    // 0x1deca4: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x1deca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_1deca8:
    // 0x1deca8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1deca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1decac:
    // 0x1decac: 0x8e4302c8  lw          $v1, 0x2C8($s2)
    ctx->pc = 0x1decacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
label_1decb0:
    // 0x1decb0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1decb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1decb4:
    // 0x1decb4: 0xc0a545c  jal         func_295170
label_1decb8:
    if (ctx->pc == 0x1DECB8u) {
        ctx->pc = 0x1DECB8u;
            // 0x1decb8: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x1DECBCu;
        goto label_1decbc;
    }
    ctx->pc = 0x1DECB4u;
    SET_GPR_U32(ctx, 31, 0x1DECBCu);
    ctx->pc = 0x1DECB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DECB4u;
            // 0x1decb8: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECBCu; }
        if (ctx->pc != 0x1DECBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECBCu; }
        if (ctx->pc != 0x1DECBCu) { return; }
    }
    ctx->pc = 0x1DECBCu;
label_1decbc:
    // 0x1decbc: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x1decbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
label_1decc0:
    // 0x1decc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1decc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1decc4:
    // 0x1decc4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1decc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1decc8:
    // 0x1decc8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x1decc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_1deccc:
    // 0x1deccc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1decccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1decd0:
    // 0x1decd0: 0xc08bf20  jal         func_22FC80
label_1decd4:
    if (ctx->pc == 0x1DECD4u) {
        ctx->pc = 0x1DECD4u;
            // 0x1decd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DECD8u;
        goto label_1decd8;
    }
    ctx->pc = 0x1DECD0u;
    SET_GPR_U32(ctx, 31, 0x1DECD8u);
    ctx->pc = 0x1DECD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DECD0u;
            // 0x1decd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECD8u; }
        if (ctx->pc != 0x1DECD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECD8u; }
        if (ctx->pc != 0x1DECD8u) { return; }
    }
    ctx->pc = 0x1DECD8u;
label_1decd8:
    // 0x1decd8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1decd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1decdc:
    // 0x1decdc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1decdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1dece0:
    // 0x1dece0: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x1dece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_1dece4:
    // 0x1dece4: 0x346501a9  ori         $a1, $v1, 0x1A9
    ctx->pc = 0x1dece4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
label_1dece8:
    // 0x1dece8: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x1dece8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1decec:
    // 0x1decec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1dececu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1decf0:
    // 0x1decf0: 0x320f809  jalr        $t9
label_1decf4:
    if (ctx->pc == 0x1DECF4u) {
        ctx->pc = 0x1DECF4u;
            // 0x1decf4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DECF8u;
        goto label_1decf8;
    }
    ctx->pc = 0x1DECF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DECF8u);
        ctx->pc = 0x1DECF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DECF0u;
            // 0x1decf4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DECF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DECF8u; }
            if (ctx->pc != 0x1DECF8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DECF8u;
label_1decf8:
    // 0x1decf8: 0xae820094  sw          $v0, 0x94($s4)
    ctx->pc = 0x1decf8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 2));
label_1decfc:
    // 0x1decfc: 0xc078cdc  jal         func_1E3370
label_1ded00:
    if (ctx->pc == 0x1DED00u) {
        ctx->pc = 0x1DED00u;
            // 0x1ded00: 0x3204ffff  andi        $a0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x1DED04u;
        goto label_1ded04;
    }
    ctx->pc = 0x1DECFCu;
    SET_GPR_U32(ctx, 31, 0x1DED04u);
    ctx->pc = 0x1DED00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DECFCu;
            // 0x1ded00: 0x3204ffff  andi        $a0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3370u;
    if (runtime->hasFunction(0x1E3370u)) {
        auto targetFn = runtime->lookupFunction(0x1E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED04u; }
        if (ctx->pc != 0x1DED04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3370_0x1e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED04u; }
        if (ctx->pc != 0x1DED04u) { return; }
    }
    ctx->pc = 0x1DED04u;
label_1ded04:
    // 0x1ded04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ded04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ded08:
    // 0x1ded08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ded08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ded0c:
    // 0x1ded0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ded0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ded10:
    // 0x1ded10: 0xc077614  jal         func_1DD850
label_1ded14:
    if (ctx->pc == 0x1DED14u) {
        ctx->pc = 0x1DED14u;
            // 0x1ded14: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DED18u;
        goto label_1ded18;
    }
    ctx->pc = 0x1DED10u;
    SET_GPR_U32(ctx, 31, 0x1DED18u);
    ctx->pc = 0x1DED14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED10u;
            // 0x1ded14: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD850u;
    if (runtime->hasFunction(0x1DD850u)) {
        auto targetFn = runtime->lookupFunction(0x1DD850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED18u; }
        if (ctx->pc != 0x1DED18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD850_0x1dd850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED18u; }
        if (ctx->pc != 0x1DED18u) { return; }
    }
    ctx->pc = 0x1DED18u;
label_1ded18:
    // 0x1ded18: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ded18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ded1c:
    // 0x1ded1c: 0x5222000f  beql        $s1, $v0, . + 4 + (0xF << 2)
label_1ded20:
    if (ctx->pc == 0x1DED20u) {
        ctx->pc = 0x1DED20u;
            // 0x1ded20: 0x8e840d74  lw          $a0, 0xD74($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3444)));
        ctx->pc = 0x1DED24u;
        goto label_1ded24;
    }
    ctx->pc = 0x1DED1Cu;
    {
        const bool branch_taken_0x1ded1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ded1c) {
            ctx->pc = 0x1DED20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED1Cu;
            // 0x1ded20: 0x8e840d74  lw          $a0, 0xD74($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DED5Cu;
            goto label_1ded5c;
        }
    }
    ctx->pc = 0x1DED24u;
label_1ded24:
    // 0x1ded24: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ded24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ded28:
    // 0x1ded28: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
label_1ded2c:
    if (ctx->pc == 0x1DED2Cu) {
        ctx->pc = 0x1DED30u;
        goto label_1ded30;
    }
    ctx->pc = 0x1DED28u;
    {
        const bool branch_taken_0x1ded28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ded28) {
            ctx->pc = 0x1DED58u;
            goto label_1ded58;
        }
    }
    ctx->pc = 0x1DED30u;
label_1ded30:
    // 0x1ded30: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1ded30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1ded34:
    // 0x1ded34: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_1ded38:
    if (ctx->pc == 0x1DED38u) {
        ctx->pc = 0x1DED3Cu;
        goto label_1ded3c;
    }
    ctx->pc = 0x1DED34u;
    {
        const bool branch_taken_0x1ded34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ded34) {
            ctx->pc = 0x1DED58u;
            goto label_1ded58;
        }
    }
    ctx->pc = 0x1DED3Cu;
label_1ded3c:
    // 0x1ded3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ded3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ded40:
    // 0x1ded40: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
label_1ded44:
    if (ctx->pc == 0x1DED44u) {
        ctx->pc = 0x1DED48u;
        goto label_1ded48;
    }
    ctx->pc = 0x1DED40u;
    {
        const bool branch_taken_0x1ded40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ded40) {
            ctx->pc = 0x1DED58u;
            goto label_1ded58;
        }
    }
    ctx->pc = 0x1DED48u;
label_1ded48:
    // 0x1ded48: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_1ded4c:
    if (ctx->pc == 0x1DED4Cu) {
        ctx->pc = 0x1DED50u;
        goto label_1ded50;
    }
    ctx->pc = 0x1DED48u;
    {
        const bool branch_taken_0x1ded48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ded48) {
            ctx->pc = 0x1DED58u;
            goto label_1ded58;
        }
    }
    ctx->pc = 0x1DED50u;
label_1ded50:
    // 0x1ded50: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ded54:
    if (ctx->pc == 0x1DED54u) {
        ctx->pc = 0x1DED54u;
            // 0x1ded54: 0x8e840d74  lw          $a0, 0xD74($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3444)));
        ctx->pc = 0x1DED58u;
        goto label_1ded58;
    }
    ctx->pc = 0x1DED50u;
    {
        const bool branch_taken_0x1ded50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED50u;
            // 0x1ded54: 0x8e840d74  lw          $a0, 0xD74($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded50) {
            ctx->pc = 0x1DED74u;
            goto label_1ded74;
        }
    }
    ctx->pc = 0x1DED58u;
label_1ded58:
    // 0x1ded58: 0x8e840d74  lw          $a0, 0xD74($s4)
    ctx->pc = 0x1ded58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3444)));
label_1ded5c:
    // 0x1ded5c: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1ded5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_1ded60:
    // 0x1ded60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ded60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ded64:
    // 0x1ded64: 0xc0b715c  jal         func_2DC570
label_1ded68:
    if (ctx->pc == 0x1DED68u) {
        ctx->pc = 0x1DED6Cu;
        goto label_1ded6c;
    }
    ctx->pc = 0x1DED64u;
    SET_GPR_U32(ctx, 31, 0x1DED6Cu);
    ctx->pc = 0x2DC570u;
    if (runtime->hasFunction(0x2DC570u)) {
        auto targetFn = runtime->lookupFunction(0x2DC570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED6Cu; }
        if (ctx->pc != 0x1DED6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC570_0x2dc570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED6Cu; }
        if (ctx->pc != 0x1DED6Cu) { return; }
    }
    ctx->pc = 0x1DED6Cu;
label_1ded6c:
    // 0x1ded6c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ded70:
    if (ctx->pc == 0x1DED70u) {
        ctx->pc = 0x1DED70u;
            // 0x1ded70: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x1DED74u;
        goto label_1ded74;
    }
    ctx->pc = 0x1DED6Cu;
    {
        const bool branch_taken_0x1ded6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED6Cu;
            // 0x1ded70: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded6c) {
            ctx->pc = 0x1DED88u;
            goto label_1ded88;
        }
    }
    ctx->pc = 0x1DED74u;
label_1ded74:
    // 0x1ded74: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ded74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1ded78:
    // 0x1ded78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ded78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ded7c:
    // 0x1ded7c: 0xc0b715c  jal         func_2DC570
label_1ded80:
    if (ctx->pc == 0x1DED80u) {
        ctx->pc = 0x1DED84u;
        goto label_1ded84;
    }
    ctx->pc = 0x1DED7Cu;
    SET_GPR_U32(ctx, 31, 0x1DED84u);
    ctx->pc = 0x2DC570u;
    if (runtime->hasFunction(0x2DC570u)) {
        auto targetFn = runtime->lookupFunction(0x2DC570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED84u; }
        if (ctx->pc != 0x1DED84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC570_0x2dc570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED84u; }
        if (ctx->pc != 0x1DED84u) { return; }
    }
    ctx->pc = 0x1DED84u;
label_1ded84:
    // 0x1ded84: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x1ded84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1ded88:
    // 0x1ded88: 0xc040180  jal         func_100600
label_1ded8c:
    if (ctx->pc == 0x1DED8Cu) {
        ctx->pc = 0x1DED90u;
        goto label_1ded90;
    }
    ctx->pc = 0x1DED88u;
    SET_GPR_U32(ctx, 31, 0x1DED90u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED90u; }
        if (ctx->pc != 0x1DED90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED90u; }
        if (ctx->pc != 0x1DED90u) { return; }
    }
    ctx->pc = 0x1DED90u;
label_1ded90:
    // 0x1ded90: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1ded94:
    if (ctx->pc == 0x1DED94u) {
        ctx->pc = 0x1DED94u;
            // 0x1ded94: 0xae820d70  sw          $v0, 0xD70($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3440), GPR_U32(ctx, 2));
        ctx->pc = 0x1DED98u;
        goto label_1ded98;
    }
    ctx->pc = 0x1DED90u;
    {
        const bool branch_taken_0x1ded90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ded90) {
            ctx->pc = 0x1DED94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED90u;
            // 0x1ded94: 0xae820d70  sw          $v0, 0xD70($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DEDB0u;
            goto label_1dedb0;
        }
    }
    ctx->pc = 0x1DED98u;
label_1ded98:
    // 0x1ded98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ded98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ded9c:
    // 0x1ded9c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1ded9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1deda0:
    // 0x1deda0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1deda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1deda4:
    // 0x1deda4: 0xc0bf29c  jal         func_2FCA70
label_1deda8:
    if (ctx->pc == 0x1DEDA8u) {
        ctx->pc = 0x1DEDA8u;
            // 0x1deda8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEDACu;
        goto label_1dedac;
    }
    ctx->pc = 0x1DEDA4u;
    SET_GPR_U32(ctx, 31, 0x1DEDACu);
    ctx->pc = 0x1DEDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEDA4u;
            // 0x1deda8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCA70u;
    if (runtime->hasFunction(0x2FCA70u)) {
        auto targetFn = runtime->lookupFunction(0x2FCA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEDACu; }
        if (ctx->pc != 0x1DEDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FCA70_0x2fca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEDACu; }
        if (ctx->pc != 0x1DEDACu) { return; }
    }
    ctx->pc = 0x1DEDACu;
label_1dedac:
    // 0x1dedac: 0xae820d70  sw          $v0, 0xD70($s4)
    ctx->pc = 0x1dedacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3440), GPR_U32(ctx, 2));
label_1dedb0:
    // 0x1dedb0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1dedb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dedb4:
    // 0x1dedb4: 0x8e850d6c  lw          $a1, 0xD6C($s4)
    ctx->pc = 0x1dedb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3436)));
label_1dedb8:
    // 0x1dedb8: 0xc0753f0  jal         func_1D4FC0
label_1dedbc:
    if (ctx->pc == 0x1DEDBCu) {
        ctx->pc = 0x1DEDBCu;
            // 0x1dedbc: 0x26840440  addiu       $a0, $s4, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1088));
        ctx->pc = 0x1DEDC0u;
        goto label_1dedc0;
    }
    ctx->pc = 0x1DEDB8u;
    SET_GPR_U32(ctx, 31, 0x1DEDC0u);
    ctx->pc = 0x1DEDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEDB8u;
            // 0x1dedbc: 0x26840440  addiu       $a0, $s4, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4FC0u;
    if (runtime->hasFunction(0x1D4FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEDC0u; }
        if (ctx->pc != 0x1DEDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4FC0_0x1d4fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEDC0u; }
        if (ctx->pc != 0x1DEDC0u) { return; }
    }
    ctx->pc = 0x1DEDC0u;
label_1dedc0:
    // 0x1dedc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dedc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dedc4:
    // 0x1dedc4: 0xc077c08  jal         func_1DF020
label_1dedc8:
    if (ctx->pc == 0x1DEDC8u) {
        ctx->pc = 0x1DEDC8u;
            // 0x1dedc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEDCCu;
        goto label_1dedcc;
    }
    ctx->pc = 0x1DEDC4u;
    SET_GPR_U32(ctx, 31, 0x1DEDCCu);
    ctx->pc = 0x1DEDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEDC4u;
            // 0x1dedc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF020u;
    if (runtime->hasFunction(0x1DF020u)) {
        auto targetFn = runtime->lookupFunction(0x1DF020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEDCCu; }
        if (ctx->pc != 0x1DEDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DF020_0x1df020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEDCCu; }
        if (ctx->pc != 0x1DEDCCu) { return; }
    }
    ctx->pc = 0x1DEDCCu;
label_1dedcc:
    // 0x1dedcc: 0x8e840550  lw          $a0, 0x550($s4)
    ctx->pc = 0x1dedccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
label_1dedd0:
    // 0x1dedd0: 0x112e3c  dsll32      $a1, $s1, 24
    ctx->pc = 0x1dedd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 24));
label_1dedd4:
    // 0x1dedd4: 0x12363c  dsll32      $a2, $s2, 24
    ctx->pc = 0x1dedd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 24));
label_1dedd8:
    // 0x1dedd8: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1dedd8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_1deddc:
    // 0x1deddc: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1deddcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_1dede0:
    // 0x1dede0: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x1dede0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1dede4:
    // 0x1dede4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1dede4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1dede8:
    // 0x1dede8: 0x320f809  jalr        $t9
label_1dedec:
    if (ctx->pc == 0x1DEDECu) {
        ctx->pc = 0x1DEDECu;
            // 0x1dedec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEDF0u;
        goto label_1dedf0;
    }
    ctx->pc = 0x1DEDE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEDF0u);
        ctx->pc = 0x1DEDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEDE8u;
            // 0x1dedec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEDF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEDF0u; }
            if (ctx->pc != 0x1DEDF0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DEDF0u;
label_1dedf0:
    // 0x1dedf0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x1dedf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1dedf4:
    // 0x1dedf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dedf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dedf8:
    // 0x1dedf8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x1dedf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_1dedfc:
    // 0x1dedfc: 0x320f809  jalr        $t9
label_1dee00:
    if (ctx->pc == 0x1DEE00u) {
        ctx->pc = 0x1DEE00u;
            // 0x1dee00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1DEE04u;
        goto label_1dee04;
    }
    ctx->pc = 0x1DEDFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DEE04u);
        ctx->pc = 0x1DEE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEDFCu;
            // 0x1dee00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DEE04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE04u; }
            if (ctx->pc != 0x1DEE04u) { return; }
        }
        }
    }
    ctx->pc = 0x1DEE04u;
label_1dee04:
    // 0x1dee04: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1dee04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1dee08:
    // 0x1dee08: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1dee08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1dee0c:
    // 0x1dee0c: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x1dee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_1dee10:
    // 0x1dee10: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1dee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1dee14:
    // 0x1dee14: 0x8084007a  lb          $a0, 0x7A($a0)
    ctx->pc = 0x1dee14u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 122)));
label_1dee18:
    // 0x1dee18: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1dee18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1dee1c:
    // 0x1dee1c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1dee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_1dee20:
    // 0x1dee20: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1dee24:
    if (ctx->pc == 0x1DEE24u) {
        ctx->pc = 0x1DEE24u;
            // 0x1dee24: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->pc = 0x1DEE28u;
        goto label_1dee28;
    }
    ctx->pc = 0x1DEE20u;
    {
        const bool branch_taken_0x1dee20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DEE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE20u;
            // 0x1dee24: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee20) {
            ctx->pc = 0x1DEE44u;
            goto label_1dee44;
        }
    }
    ctx->pc = 0x1DEE28u;
label_1dee28:
    // 0x1dee28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dee28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dee2c:
    // 0x1dee2c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dee30:
    // 0x1dee30: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x1dee30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1dee34:
    // 0x1dee34: 0x8c420780  lw          $v0, 0x780($v0)
    ctx->pc = 0x1dee34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
label_1dee38:
    // 0x1dee38: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
label_1dee3c:
    if (ctx->pc == 0x1DEE3Cu) {
        ctx->pc = 0x1DEE3Cu;
            // 0x1dee3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE40u;
        goto label_1dee40;
    }
    ctx->pc = 0x1DEE38u;
    {
        const bool branch_taken_0x1dee38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dee38) {
            ctx->pc = 0x1DEE3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE38u;
            // 0x1dee3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DEE44u;
            goto label_1dee44;
        }
    }
    ctx->pc = 0x1DEE40u;
label_1dee40:
    // 0x1dee40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1dee40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dee44:
    // 0x1dee44: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1dee44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1dee48:
    // 0x1dee48: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1dee48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1dee4c:
    // 0x1dee4c: 0x2442c780  addiu       $v0, $v0, -0x3880
    ctx->pc = 0x1dee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952832));
label_1dee50:
    // 0x1dee50: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1dee50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1dee54:
    // 0x1dee54: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1dee54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1dee58:
    // 0x1dee58: 0x2442c790  addiu       $v0, $v0, -0x3870
    ctx->pc = 0x1dee58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952848));
label_1dee5c:
    // 0x1dee5c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1dee5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1dee60:
    // 0x1dee60: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1dee60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dee64:
    // 0x1dee64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dee64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dee68:
    // 0x1dee68: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1dee68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dee6c:
    // 0x1dee6c: 0xe6811170  swc1        $f1, 0x1170($s4)
    ctx->pc = 0x1dee6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4464), bits); }
label_1dee70:
    // 0x1dee70: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1dee70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1dee74:
    // 0x1dee74: 0xe6801174  swc1        $f0, 0x1174($s4)
    ctx->pc = 0x1dee74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4468), bits); }
label_1dee78:
    // 0x1dee78: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x1dee78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1dee7c:
    // 0x1dee7c: 0x8c820968  lw          $v0, 0x968($a0)
    ctx->pc = 0x1dee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_1dee80:
    // 0x1dee80: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_1dee84:
    if (ctx->pc == 0x1DEE84u) {
        ctx->pc = 0x1DEE84u;
            // 0x1dee84: 0x8e830e34  lw          $v1, 0xE34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
        ctx->pc = 0x1DEE88u;
        goto label_1dee88;
    }
    ctx->pc = 0x1DEE80u;
    {
        const bool branch_taken_0x1dee80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dee80) {
            ctx->pc = 0x1DEE84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE80u;
            // 0x1dee84: 0x8e830e34  lw          $v1, 0xE34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DEEACu;
            goto label_1deeac;
        }
    }
    ctx->pc = 0x1DEE88u;
label_1dee88:
    // 0x1dee88: 0x8c830788  lw          $v1, 0x788($a0)
    ctx->pc = 0x1dee88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1928)));
label_1dee8c:
    // 0x1dee8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dee90:
    // 0x1dee90: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1dee94:
    if (ctx->pc == 0x1DEE94u) {
        ctx->pc = 0x1DEE98u;
        goto label_1dee98;
    }
    ctx->pc = 0x1DEE90u;
    {
        const bool branch_taken_0x1dee90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dee90) {
            ctx->pc = 0x1DEEA8u;
            goto label_1deea8;
        }
    }
    ctx->pc = 0x1DEE98u;
label_1dee98:
    // 0x1dee98: 0x3c034444  lui         $v1, 0x4444
    ctx->pc = 0x1dee98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17476 << 16));
label_1dee9c:
    // 0x1dee9c: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x1dee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
label_1deea0:
    // 0x1deea0: 0xae831170  sw          $v1, 0x1170($s4)
    ctx->pc = 0x1deea0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4464), GPR_U32(ctx, 3));
label_1deea4:
    // 0x1deea4: 0xae821174  sw          $v0, 0x1174($s4)
    ctx->pc = 0x1deea4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4468), GPR_U32(ctx, 2));
label_1deea8:
    // 0x1deea8: 0x8e830e34  lw          $v1, 0xE34($s4)
    ctx->pc = 0x1deea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_1deeac:
    // 0x1deeac: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1deeacu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1deeb0:
    // 0x1deeb0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_1deeb4:
    if (ctx->pc == 0x1DEEB4u) {
        ctx->pc = 0x1DEEB4u;
            // 0x1deeb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEEB8u;
        goto label_1deeb8;
    }
    ctx->pc = 0x1DEEB0u;
    {
        const bool branch_taken_0x1deeb0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1DEEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEEB0u;
            // 0x1deeb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deeb0) {
            ctx->pc = 0x1DEEC8u;
            goto label_1deec8;
        }
    }
    ctx->pc = 0x1DEEB8u;
label_1deeb8:
    // 0x1deeb8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x1deeb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_1deebc:
    // 0x1deebc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1deec0:
    if (ctx->pc == 0x1DEEC0u) {
        ctx->pc = 0x1DEEC4u;
        goto label_1deec4;
    }
    ctx->pc = 0x1DEEBCu;
    {
        const bool branch_taken_0x1deebc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1deebc) {
            ctx->pc = 0x1DEEC8u;
            goto label_1deec8;
        }
    }
    ctx->pc = 0x1DEEC4u;
label_1deec4:
    // 0x1deec4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1deec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1deec8:
    // 0x1deec8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1deecc:
    if (ctx->pc == 0x1DEECCu) {
        ctx->pc = 0x1DEED0u;
        goto label_1deed0;
    }
    ctx->pc = 0x1DEEC8u;
    {
        const bool branch_taken_0x1deec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deec8) {
            ctx->pc = 0x1DEF08u;
            goto label_1def08;
        }
    }
    ctx->pc = 0x1DEED0u;
label_1deed0:
    // 0x1deed0: 0x828211aa  lb          $v0, 0x11AA($s4)
    ctx->pc = 0x1deed0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4522)));
label_1deed4:
    // 0x1deed4: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1deed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1deed8:
    // 0x1deed8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1deed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1deedc:
    // 0x1deedc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1deee0:
    if (ctx->pc == 0x1DEEE0u) {
        ctx->pc = 0x1DEEE4u;
        goto label_1deee4;
    }
    ctx->pc = 0x1DEEDCu;
    {
        const bool branch_taken_0x1deedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1deedc) {
            ctx->pc = 0x1DEEFCu;
            goto label_1deefc;
        }
    }
    ctx->pc = 0x1DEEE4u;
label_1deee4:
    // 0x1deee4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1deee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1deee8:
    // 0x1deee8: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1deee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1deeec:
    // 0x1deeec: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x1deeecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
label_1deef0:
    // 0x1deef0: 0x401027  not         $v0, $v0
    ctx->pc = 0x1deef0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_1deef4:
    // 0x1deef4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1deef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1deef8:
    // 0x1deef8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1deef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1deefc:
    // 0x1deefc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1def00:
    if (ctx->pc == 0x1DEF00u) {
        ctx->pc = 0x1DEF04u;
        goto label_1def04;
    }
    ctx->pc = 0x1DEEFCu;
    {
        const bool branch_taken_0x1deefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deefc) {
            ctx->pc = 0x1DEF08u;
            goto label_1def08;
        }
    }
    ctx->pc = 0x1DEF04u;
label_1def04:
    // 0x1def04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1def04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1def08:
    // 0x1def08: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
label_1def0c:
    if (ctx->pc == 0x1DEF0Cu) {
        ctx->pc = 0x1DEF0Cu;
            // 0x1def0c: 0x8e820d6c  lw          $v0, 0xD6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3436)));
        ctx->pc = 0x1DEF10u;
        goto label_1def10;
    }
    ctx->pc = 0x1DEF08u;
    {
        const bool branch_taken_0x1def08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1def08) {
            ctx->pc = 0x1DEF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF08u;
            // 0x1def0c: 0x8e820d6c  lw          $v0, 0xD6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DEF20u;
            goto label_1def20;
        }
    }
    ctx->pc = 0x1DEF10u;
label_1def10:
    // 0x1def10: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1def10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1def14:
    // 0x1def14: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_1def18:
    if (ctx->pc == 0x1DEF18u) {
        ctx->pc = 0x1DEF1Cu;
        goto label_1def1c;
    }
    ctx->pc = 0x1DEF14u;
    {
        const bool branch_taken_0x1def14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1def14) {
            ctx->pc = 0x1DEF68u;
            goto label_1def68;
        }
    }
    ctx->pc = 0x1DEF1Cu;
label_1def1c:
    // 0x1def1c: 0x8e820d6c  lw          $v0, 0xD6C($s4)
    ctx->pc = 0x1def1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3436)));
label_1def20:
    // 0x1def20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1def20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1def24:
    // 0x1def24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1def24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1def28:
    // 0x1def28: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1def28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1def2c:
    // 0x1def2c: 0xae861198  sw          $a2, 0x1198($s4)
    ctx->pc = 0x1def2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4504), GPR_U32(ctx, 6));
label_1def30:
    // 0x1def30: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1def30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1def34:
    // 0x1def34: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x1def34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1def38:
    // 0x1def38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1def38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1def3c:
    // 0x1def3c: 0x8d050038  lw          $a1, 0x38($t0)
    ctx->pc = 0x1def3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
label_1def40:
    // 0x1def40: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1def40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1def44:
    // 0x1def44: 0x8c64e3a8  lw          $a0, -0x1C58($v1)
    ctx->pc = 0x1def44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960040)));
label_1def48:
    // 0x1def48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1def48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1def4c:
    // 0x1def4c: 0xac44e3a8  sw          $a0, -0x1C58($v0)
    ctx->pc = 0x1def4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960040), GPR_U32(ctx, 4));
label_1def50:
    // 0x1def50: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1def50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1def54:
    // 0x1def54: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1def54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1def58:
    // 0x1def58: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x1def58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1def5c:
    // 0x1def5c: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_1def60:
    if (ctx->pc == 0x1DEF60u) {
        ctx->pc = 0x1DEF60u;
            // 0x1def60: 0x25080050  addiu       $t0, $t0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
        ctx->pc = 0x1DEF64u;
        goto label_1def64;
    }
    ctx->pc = 0x1DEF5Cu;
    {
        const bool branch_taken_0x1def5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF5Cu;
            // 0x1def60: 0x25080050  addiu       $t0, $t0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def5c) {
            ctx->pc = 0x1DEF3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1def3c;
        }
    }
    ctx->pc = 0x1DEF64u;
label_1def64:
    // 0x1def64: 0x0  nop
    ctx->pc = 0x1def64u;
    // NOP
label_1def68:
    // 0x1def68: 0x268411f4  addiu       $a0, $s4, 0x11F4
    ctx->pc = 0x1def68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4596));
label_1def6c:
    // 0x1def6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1def6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1def70:
    // 0x1def70: 0xc04a576  jal         func_1295D8
label_1def74:
    if (ctx->pc == 0x1DEF74u) {
        ctx->pc = 0x1DEF74u;
            // 0x1def74: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1DEF78u;
        goto label_1def78;
    }
    ctx->pc = 0x1DEF70u;
    SET_GPR_U32(ctx, 31, 0x1DEF78u);
    ctx->pc = 0x1DEF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF70u;
            // 0x1def74: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF78u; }
        if (ctx->pc != 0x1DEF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF78u; }
        if (ctx->pc != 0x1DEF78u) { return; }
    }
    ctx->pc = 0x1DEF78u;
label_1def78:
    // 0x1def78: 0x26841208  addiu       $a0, $s4, 0x1208
    ctx->pc = 0x1def78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4616));
label_1def7c:
    // 0x1def7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1def7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1def80:
    // 0x1def80: 0xc04a576  jal         func_1295D8
label_1def84:
    if (ctx->pc == 0x1DEF84u) {
        ctx->pc = 0x1DEF84u;
            // 0x1def84: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1DEF88u;
        goto label_1def88;
    }
    ctx->pc = 0x1DEF80u;
    SET_GPR_U32(ctx, 31, 0x1DEF88u);
    ctx->pc = 0x1DEF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF80u;
            // 0x1def84: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF88u; }
        if (ctx->pc != 0x1DEF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF88u; }
        if (ctx->pc != 0x1DEF88u) { return; }
    }
    ctx->pc = 0x1DEF88u;
label_1def88:
    // 0x1def88: 0xae80121c  sw          $zero, 0x121C($s4)
    ctx->pc = 0x1def88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4636), GPR_U32(ctx, 0));
label_1def8c:
    // 0x1def8c: 0xae801228  sw          $zero, 0x1228($s4)
    ctx->pc = 0x1def8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4648), GPR_U32(ctx, 0));
label_1def90:
    // 0x1def90: 0xa28011ac  sb          $zero, 0x11AC($s4)
    ctx->pc = 0x1def90u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4524), (uint8_t)GPR_U32(ctx, 0));
label_1def94:
    // 0x1def94: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1def94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1def98:
    // 0x1def98: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1def98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1def9c:
    // 0x1def9c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1def9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1defa0:
    // 0x1defa0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1defa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1defa4:
    // 0x1defa4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1defa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1defa8:
    // 0x1defa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1defa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1defac:
    // 0x1defac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1defacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1defb0:
    // 0x1defb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1defb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1defb4:
    // 0x1defb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1defb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1defb8:
    // 0x1defb8: 0x3e00008  jr          $ra
label_1defbc:
    if (ctx->pc == 0x1DEFBCu) {
        ctx->pc = 0x1DEFBCu;
            // 0x1defbc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1DEFC0u;
        goto label_1defc0;
    }
    ctx->pc = 0x1DEFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEFB8u;
            // 0x1defbc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DEFC0u;
label_1defc0:
    // 0x1defc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1defc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1defc4:
    // 0x1defc4: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1defc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1defc8:
    // 0x1defc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1defc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1defcc:
    // 0x1defcc: 0xc040180  jal         func_100600
label_1defd0:
    if (ctx->pc == 0x1DEFD0u) {
        ctx->pc = 0x1DEFD0u;
            // 0x1defd0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1DEFD4u;
        goto label_1defd4;
    }
    ctx->pc = 0x1DEFCCu;
    SET_GPR_U32(ctx, 31, 0x1DEFD4u);
    ctx->pc = 0x1DEFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEFCCu;
            // 0x1defd0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEFD4u; }
        if (ctx->pc != 0x1DEFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEFD4u; }
        if (ctx->pc != 0x1DEFD4u) { return; }
    }
    ctx->pc = 0x1DEFD4u;
label_1defd4:
    // 0x1defd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1defd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1defd8:
    // 0x1defd8: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_1defdc:
    if (ctx->pc == 0x1DEFDCu) {
        ctx->pc = 0x1DEFDCu;
            // 0x1defdc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEFE0u;
        goto label_1defe0;
    }
    ctx->pc = 0x1DEFD8u;
    {
        const bool branch_taken_0x1defd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1defd8) {
            ctx->pc = 0x1DEFDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEFD8u;
            // 0x1defdc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF004u;
            goto label_1df004;
        }
    }
    ctx->pc = 0x1DEFE0u;
label_1defe0:
    // 0x1defe0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1defe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1defe4:
    // 0x1defe4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1defe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1defe8:
    // 0x1defe8: 0x24424690  addiu       $v0, $v0, 0x4690
    ctx->pc = 0x1defe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18064));
label_1defec:
    // 0x1defec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1defecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1deff0:
    // 0x1deff0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1deff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1deff4:
    // 0x1deff4: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1deff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_1deff8:
    // 0x1deff8: 0xc0ca818  jal         func_32A060
label_1deffc:
    if (ctx->pc == 0x1DEFFCu) {
        ctx->pc = 0x1DEFFCu;
            // 0x1deffc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x1DF000u;
        goto label_1df000;
    }
    ctx->pc = 0x1DEFF8u;
    SET_GPR_U32(ctx, 31, 0x1DF000u);
    ctx->pc = 0x1DEFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEFF8u;
            // 0x1deffc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32A060u;
    if (runtime->hasFunction(0x32A060u)) {
        auto targetFn = runtime->lookupFunction(0x32A060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF000u; }
        if (ctx->pc != 0x1DF000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032A060_0x32a060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF000u; }
        if (ctx->pc != 0x1DF000u) { return; }
    }
    ctx->pc = 0x1DF000u;
label_1df000:
    // 0x1df000: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1df000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df004:
    // 0x1df004: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1df004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1df008:
    // 0x1df008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1df00c:
    // 0x1df00c: 0x3e00008  jr          $ra
label_1df010:
    if (ctx->pc == 0x1DF010u) {
        ctx->pc = 0x1DF010u;
            // 0x1df010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1DF014u;
        goto label_1df014;
    }
    ctx->pc = 0x1DF00Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF00Cu;
            // 0x1df010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DF014u;
label_1df014:
    // 0x1df014: 0x0  nop
    ctx->pc = 0x1df014u;
    // NOP
label_1df018:
    // 0x1df018: 0x0  nop
    ctx->pc = 0x1df018u;
    // NOP
label_1df01c:
    // 0x1df01c: 0x0  nop
    ctx->pc = 0x1df01cu;
    // NOP
}
