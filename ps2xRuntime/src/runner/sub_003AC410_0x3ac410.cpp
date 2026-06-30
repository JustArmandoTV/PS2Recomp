#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AC410
// Address: 0x3ac410 - 0x3ad2d0
void sub_003AC410_0x3ac410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC410_0x3ac410");
#endif

    switch (ctx->pc) {
        case 0x3ac410u: goto label_3ac410;
        case 0x3ac414u: goto label_3ac414;
        case 0x3ac418u: goto label_3ac418;
        case 0x3ac41cu: goto label_3ac41c;
        case 0x3ac420u: goto label_3ac420;
        case 0x3ac424u: goto label_3ac424;
        case 0x3ac428u: goto label_3ac428;
        case 0x3ac42cu: goto label_3ac42c;
        case 0x3ac430u: goto label_3ac430;
        case 0x3ac434u: goto label_3ac434;
        case 0x3ac438u: goto label_3ac438;
        case 0x3ac43cu: goto label_3ac43c;
        case 0x3ac440u: goto label_3ac440;
        case 0x3ac444u: goto label_3ac444;
        case 0x3ac448u: goto label_3ac448;
        case 0x3ac44cu: goto label_3ac44c;
        case 0x3ac450u: goto label_3ac450;
        case 0x3ac454u: goto label_3ac454;
        case 0x3ac458u: goto label_3ac458;
        case 0x3ac45cu: goto label_3ac45c;
        case 0x3ac460u: goto label_3ac460;
        case 0x3ac464u: goto label_3ac464;
        case 0x3ac468u: goto label_3ac468;
        case 0x3ac46cu: goto label_3ac46c;
        case 0x3ac470u: goto label_3ac470;
        case 0x3ac474u: goto label_3ac474;
        case 0x3ac478u: goto label_3ac478;
        case 0x3ac47cu: goto label_3ac47c;
        case 0x3ac480u: goto label_3ac480;
        case 0x3ac484u: goto label_3ac484;
        case 0x3ac488u: goto label_3ac488;
        case 0x3ac48cu: goto label_3ac48c;
        case 0x3ac490u: goto label_3ac490;
        case 0x3ac494u: goto label_3ac494;
        case 0x3ac498u: goto label_3ac498;
        case 0x3ac49cu: goto label_3ac49c;
        case 0x3ac4a0u: goto label_3ac4a0;
        case 0x3ac4a4u: goto label_3ac4a4;
        case 0x3ac4a8u: goto label_3ac4a8;
        case 0x3ac4acu: goto label_3ac4ac;
        case 0x3ac4b0u: goto label_3ac4b0;
        case 0x3ac4b4u: goto label_3ac4b4;
        case 0x3ac4b8u: goto label_3ac4b8;
        case 0x3ac4bcu: goto label_3ac4bc;
        case 0x3ac4c0u: goto label_3ac4c0;
        case 0x3ac4c4u: goto label_3ac4c4;
        case 0x3ac4c8u: goto label_3ac4c8;
        case 0x3ac4ccu: goto label_3ac4cc;
        case 0x3ac4d0u: goto label_3ac4d0;
        case 0x3ac4d4u: goto label_3ac4d4;
        case 0x3ac4d8u: goto label_3ac4d8;
        case 0x3ac4dcu: goto label_3ac4dc;
        case 0x3ac4e0u: goto label_3ac4e0;
        case 0x3ac4e4u: goto label_3ac4e4;
        case 0x3ac4e8u: goto label_3ac4e8;
        case 0x3ac4ecu: goto label_3ac4ec;
        case 0x3ac4f0u: goto label_3ac4f0;
        case 0x3ac4f4u: goto label_3ac4f4;
        case 0x3ac4f8u: goto label_3ac4f8;
        case 0x3ac4fcu: goto label_3ac4fc;
        case 0x3ac500u: goto label_3ac500;
        case 0x3ac504u: goto label_3ac504;
        case 0x3ac508u: goto label_3ac508;
        case 0x3ac50cu: goto label_3ac50c;
        case 0x3ac510u: goto label_3ac510;
        case 0x3ac514u: goto label_3ac514;
        case 0x3ac518u: goto label_3ac518;
        case 0x3ac51cu: goto label_3ac51c;
        case 0x3ac520u: goto label_3ac520;
        case 0x3ac524u: goto label_3ac524;
        case 0x3ac528u: goto label_3ac528;
        case 0x3ac52cu: goto label_3ac52c;
        case 0x3ac530u: goto label_3ac530;
        case 0x3ac534u: goto label_3ac534;
        case 0x3ac538u: goto label_3ac538;
        case 0x3ac53cu: goto label_3ac53c;
        case 0x3ac540u: goto label_3ac540;
        case 0x3ac544u: goto label_3ac544;
        case 0x3ac548u: goto label_3ac548;
        case 0x3ac54cu: goto label_3ac54c;
        case 0x3ac550u: goto label_3ac550;
        case 0x3ac554u: goto label_3ac554;
        case 0x3ac558u: goto label_3ac558;
        case 0x3ac55cu: goto label_3ac55c;
        case 0x3ac560u: goto label_3ac560;
        case 0x3ac564u: goto label_3ac564;
        case 0x3ac568u: goto label_3ac568;
        case 0x3ac56cu: goto label_3ac56c;
        case 0x3ac570u: goto label_3ac570;
        case 0x3ac574u: goto label_3ac574;
        case 0x3ac578u: goto label_3ac578;
        case 0x3ac57cu: goto label_3ac57c;
        case 0x3ac580u: goto label_3ac580;
        case 0x3ac584u: goto label_3ac584;
        case 0x3ac588u: goto label_3ac588;
        case 0x3ac58cu: goto label_3ac58c;
        case 0x3ac590u: goto label_3ac590;
        case 0x3ac594u: goto label_3ac594;
        case 0x3ac598u: goto label_3ac598;
        case 0x3ac59cu: goto label_3ac59c;
        case 0x3ac5a0u: goto label_3ac5a0;
        case 0x3ac5a4u: goto label_3ac5a4;
        case 0x3ac5a8u: goto label_3ac5a8;
        case 0x3ac5acu: goto label_3ac5ac;
        case 0x3ac5b0u: goto label_3ac5b0;
        case 0x3ac5b4u: goto label_3ac5b4;
        case 0x3ac5b8u: goto label_3ac5b8;
        case 0x3ac5bcu: goto label_3ac5bc;
        case 0x3ac5c0u: goto label_3ac5c0;
        case 0x3ac5c4u: goto label_3ac5c4;
        case 0x3ac5c8u: goto label_3ac5c8;
        case 0x3ac5ccu: goto label_3ac5cc;
        case 0x3ac5d0u: goto label_3ac5d0;
        case 0x3ac5d4u: goto label_3ac5d4;
        case 0x3ac5d8u: goto label_3ac5d8;
        case 0x3ac5dcu: goto label_3ac5dc;
        case 0x3ac5e0u: goto label_3ac5e0;
        case 0x3ac5e4u: goto label_3ac5e4;
        case 0x3ac5e8u: goto label_3ac5e8;
        case 0x3ac5ecu: goto label_3ac5ec;
        case 0x3ac5f0u: goto label_3ac5f0;
        case 0x3ac5f4u: goto label_3ac5f4;
        case 0x3ac5f8u: goto label_3ac5f8;
        case 0x3ac5fcu: goto label_3ac5fc;
        case 0x3ac600u: goto label_3ac600;
        case 0x3ac604u: goto label_3ac604;
        case 0x3ac608u: goto label_3ac608;
        case 0x3ac60cu: goto label_3ac60c;
        case 0x3ac610u: goto label_3ac610;
        case 0x3ac614u: goto label_3ac614;
        case 0x3ac618u: goto label_3ac618;
        case 0x3ac61cu: goto label_3ac61c;
        case 0x3ac620u: goto label_3ac620;
        case 0x3ac624u: goto label_3ac624;
        case 0x3ac628u: goto label_3ac628;
        case 0x3ac62cu: goto label_3ac62c;
        case 0x3ac630u: goto label_3ac630;
        case 0x3ac634u: goto label_3ac634;
        case 0x3ac638u: goto label_3ac638;
        case 0x3ac63cu: goto label_3ac63c;
        case 0x3ac640u: goto label_3ac640;
        case 0x3ac644u: goto label_3ac644;
        case 0x3ac648u: goto label_3ac648;
        case 0x3ac64cu: goto label_3ac64c;
        case 0x3ac650u: goto label_3ac650;
        case 0x3ac654u: goto label_3ac654;
        case 0x3ac658u: goto label_3ac658;
        case 0x3ac65cu: goto label_3ac65c;
        case 0x3ac660u: goto label_3ac660;
        case 0x3ac664u: goto label_3ac664;
        case 0x3ac668u: goto label_3ac668;
        case 0x3ac66cu: goto label_3ac66c;
        case 0x3ac670u: goto label_3ac670;
        case 0x3ac674u: goto label_3ac674;
        case 0x3ac678u: goto label_3ac678;
        case 0x3ac67cu: goto label_3ac67c;
        case 0x3ac680u: goto label_3ac680;
        case 0x3ac684u: goto label_3ac684;
        case 0x3ac688u: goto label_3ac688;
        case 0x3ac68cu: goto label_3ac68c;
        case 0x3ac690u: goto label_3ac690;
        case 0x3ac694u: goto label_3ac694;
        case 0x3ac698u: goto label_3ac698;
        case 0x3ac69cu: goto label_3ac69c;
        case 0x3ac6a0u: goto label_3ac6a0;
        case 0x3ac6a4u: goto label_3ac6a4;
        case 0x3ac6a8u: goto label_3ac6a8;
        case 0x3ac6acu: goto label_3ac6ac;
        case 0x3ac6b0u: goto label_3ac6b0;
        case 0x3ac6b4u: goto label_3ac6b4;
        case 0x3ac6b8u: goto label_3ac6b8;
        case 0x3ac6bcu: goto label_3ac6bc;
        case 0x3ac6c0u: goto label_3ac6c0;
        case 0x3ac6c4u: goto label_3ac6c4;
        case 0x3ac6c8u: goto label_3ac6c8;
        case 0x3ac6ccu: goto label_3ac6cc;
        case 0x3ac6d0u: goto label_3ac6d0;
        case 0x3ac6d4u: goto label_3ac6d4;
        case 0x3ac6d8u: goto label_3ac6d8;
        case 0x3ac6dcu: goto label_3ac6dc;
        case 0x3ac6e0u: goto label_3ac6e0;
        case 0x3ac6e4u: goto label_3ac6e4;
        case 0x3ac6e8u: goto label_3ac6e8;
        case 0x3ac6ecu: goto label_3ac6ec;
        case 0x3ac6f0u: goto label_3ac6f0;
        case 0x3ac6f4u: goto label_3ac6f4;
        case 0x3ac6f8u: goto label_3ac6f8;
        case 0x3ac6fcu: goto label_3ac6fc;
        case 0x3ac700u: goto label_3ac700;
        case 0x3ac704u: goto label_3ac704;
        case 0x3ac708u: goto label_3ac708;
        case 0x3ac70cu: goto label_3ac70c;
        case 0x3ac710u: goto label_3ac710;
        case 0x3ac714u: goto label_3ac714;
        case 0x3ac718u: goto label_3ac718;
        case 0x3ac71cu: goto label_3ac71c;
        case 0x3ac720u: goto label_3ac720;
        case 0x3ac724u: goto label_3ac724;
        case 0x3ac728u: goto label_3ac728;
        case 0x3ac72cu: goto label_3ac72c;
        case 0x3ac730u: goto label_3ac730;
        case 0x3ac734u: goto label_3ac734;
        case 0x3ac738u: goto label_3ac738;
        case 0x3ac73cu: goto label_3ac73c;
        case 0x3ac740u: goto label_3ac740;
        case 0x3ac744u: goto label_3ac744;
        case 0x3ac748u: goto label_3ac748;
        case 0x3ac74cu: goto label_3ac74c;
        case 0x3ac750u: goto label_3ac750;
        case 0x3ac754u: goto label_3ac754;
        case 0x3ac758u: goto label_3ac758;
        case 0x3ac75cu: goto label_3ac75c;
        case 0x3ac760u: goto label_3ac760;
        case 0x3ac764u: goto label_3ac764;
        case 0x3ac768u: goto label_3ac768;
        case 0x3ac76cu: goto label_3ac76c;
        case 0x3ac770u: goto label_3ac770;
        case 0x3ac774u: goto label_3ac774;
        case 0x3ac778u: goto label_3ac778;
        case 0x3ac77cu: goto label_3ac77c;
        case 0x3ac780u: goto label_3ac780;
        case 0x3ac784u: goto label_3ac784;
        case 0x3ac788u: goto label_3ac788;
        case 0x3ac78cu: goto label_3ac78c;
        case 0x3ac790u: goto label_3ac790;
        case 0x3ac794u: goto label_3ac794;
        case 0x3ac798u: goto label_3ac798;
        case 0x3ac79cu: goto label_3ac79c;
        case 0x3ac7a0u: goto label_3ac7a0;
        case 0x3ac7a4u: goto label_3ac7a4;
        case 0x3ac7a8u: goto label_3ac7a8;
        case 0x3ac7acu: goto label_3ac7ac;
        case 0x3ac7b0u: goto label_3ac7b0;
        case 0x3ac7b4u: goto label_3ac7b4;
        case 0x3ac7b8u: goto label_3ac7b8;
        case 0x3ac7bcu: goto label_3ac7bc;
        case 0x3ac7c0u: goto label_3ac7c0;
        case 0x3ac7c4u: goto label_3ac7c4;
        case 0x3ac7c8u: goto label_3ac7c8;
        case 0x3ac7ccu: goto label_3ac7cc;
        case 0x3ac7d0u: goto label_3ac7d0;
        case 0x3ac7d4u: goto label_3ac7d4;
        case 0x3ac7d8u: goto label_3ac7d8;
        case 0x3ac7dcu: goto label_3ac7dc;
        case 0x3ac7e0u: goto label_3ac7e0;
        case 0x3ac7e4u: goto label_3ac7e4;
        case 0x3ac7e8u: goto label_3ac7e8;
        case 0x3ac7ecu: goto label_3ac7ec;
        case 0x3ac7f0u: goto label_3ac7f0;
        case 0x3ac7f4u: goto label_3ac7f4;
        case 0x3ac7f8u: goto label_3ac7f8;
        case 0x3ac7fcu: goto label_3ac7fc;
        case 0x3ac800u: goto label_3ac800;
        case 0x3ac804u: goto label_3ac804;
        case 0x3ac808u: goto label_3ac808;
        case 0x3ac80cu: goto label_3ac80c;
        case 0x3ac810u: goto label_3ac810;
        case 0x3ac814u: goto label_3ac814;
        case 0x3ac818u: goto label_3ac818;
        case 0x3ac81cu: goto label_3ac81c;
        case 0x3ac820u: goto label_3ac820;
        case 0x3ac824u: goto label_3ac824;
        case 0x3ac828u: goto label_3ac828;
        case 0x3ac82cu: goto label_3ac82c;
        case 0x3ac830u: goto label_3ac830;
        case 0x3ac834u: goto label_3ac834;
        case 0x3ac838u: goto label_3ac838;
        case 0x3ac83cu: goto label_3ac83c;
        case 0x3ac840u: goto label_3ac840;
        case 0x3ac844u: goto label_3ac844;
        case 0x3ac848u: goto label_3ac848;
        case 0x3ac84cu: goto label_3ac84c;
        case 0x3ac850u: goto label_3ac850;
        case 0x3ac854u: goto label_3ac854;
        case 0x3ac858u: goto label_3ac858;
        case 0x3ac85cu: goto label_3ac85c;
        case 0x3ac860u: goto label_3ac860;
        case 0x3ac864u: goto label_3ac864;
        case 0x3ac868u: goto label_3ac868;
        case 0x3ac86cu: goto label_3ac86c;
        case 0x3ac870u: goto label_3ac870;
        case 0x3ac874u: goto label_3ac874;
        case 0x3ac878u: goto label_3ac878;
        case 0x3ac87cu: goto label_3ac87c;
        case 0x3ac880u: goto label_3ac880;
        case 0x3ac884u: goto label_3ac884;
        case 0x3ac888u: goto label_3ac888;
        case 0x3ac88cu: goto label_3ac88c;
        case 0x3ac890u: goto label_3ac890;
        case 0x3ac894u: goto label_3ac894;
        case 0x3ac898u: goto label_3ac898;
        case 0x3ac89cu: goto label_3ac89c;
        case 0x3ac8a0u: goto label_3ac8a0;
        case 0x3ac8a4u: goto label_3ac8a4;
        case 0x3ac8a8u: goto label_3ac8a8;
        case 0x3ac8acu: goto label_3ac8ac;
        case 0x3ac8b0u: goto label_3ac8b0;
        case 0x3ac8b4u: goto label_3ac8b4;
        case 0x3ac8b8u: goto label_3ac8b8;
        case 0x3ac8bcu: goto label_3ac8bc;
        case 0x3ac8c0u: goto label_3ac8c0;
        case 0x3ac8c4u: goto label_3ac8c4;
        case 0x3ac8c8u: goto label_3ac8c8;
        case 0x3ac8ccu: goto label_3ac8cc;
        case 0x3ac8d0u: goto label_3ac8d0;
        case 0x3ac8d4u: goto label_3ac8d4;
        case 0x3ac8d8u: goto label_3ac8d8;
        case 0x3ac8dcu: goto label_3ac8dc;
        case 0x3ac8e0u: goto label_3ac8e0;
        case 0x3ac8e4u: goto label_3ac8e4;
        case 0x3ac8e8u: goto label_3ac8e8;
        case 0x3ac8ecu: goto label_3ac8ec;
        case 0x3ac8f0u: goto label_3ac8f0;
        case 0x3ac8f4u: goto label_3ac8f4;
        case 0x3ac8f8u: goto label_3ac8f8;
        case 0x3ac8fcu: goto label_3ac8fc;
        case 0x3ac900u: goto label_3ac900;
        case 0x3ac904u: goto label_3ac904;
        case 0x3ac908u: goto label_3ac908;
        case 0x3ac90cu: goto label_3ac90c;
        case 0x3ac910u: goto label_3ac910;
        case 0x3ac914u: goto label_3ac914;
        case 0x3ac918u: goto label_3ac918;
        case 0x3ac91cu: goto label_3ac91c;
        case 0x3ac920u: goto label_3ac920;
        case 0x3ac924u: goto label_3ac924;
        case 0x3ac928u: goto label_3ac928;
        case 0x3ac92cu: goto label_3ac92c;
        case 0x3ac930u: goto label_3ac930;
        case 0x3ac934u: goto label_3ac934;
        case 0x3ac938u: goto label_3ac938;
        case 0x3ac93cu: goto label_3ac93c;
        case 0x3ac940u: goto label_3ac940;
        case 0x3ac944u: goto label_3ac944;
        case 0x3ac948u: goto label_3ac948;
        case 0x3ac94cu: goto label_3ac94c;
        case 0x3ac950u: goto label_3ac950;
        case 0x3ac954u: goto label_3ac954;
        case 0x3ac958u: goto label_3ac958;
        case 0x3ac95cu: goto label_3ac95c;
        case 0x3ac960u: goto label_3ac960;
        case 0x3ac964u: goto label_3ac964;
        case 0x3ac968u: goto label_3ac968;
        case 0x3ac96cu: goto label_3ac96c;
        case 0x3ac970u: goto label_3ac970;
        case 0x3ac974u: goto label_3ac974;
        case 0x3ac978u: goto label_3ac978;
        case 0x3ac97cu: goto label_3ac97c;
        case 0x3ac980u: goto label_3ac980;
        case 0x3ac984u: goto label_3ac984;
        case 0x3ac988u: goto label_3ac988;
        case 0x3ac98cu: goto label_3ac98c;
        case 0x3ac990u: goto label_3ac990;
        case 0x3ac994u: goto label_3ac994;
        case 0x3ac998u: goto label_3ac998;
        case 0x3ac99cu: goto label_3ac99c;
        case 0x3ac9a0u: goto label_3ac9a0;
        case 0x3ac9a4u: goto label_3ac9a4;
        case 0x3ac9a8u: goto label_3ac9a8;
        case 0x3ac9acu: goto label_3ac9ac;
        case 0x3ac9b0u: goto label_3ac9b0;
        case 0x3ac9b4u: goto label_3ac9b4;
        case 0x3ac9b8u: goto label_3ac9b8;
        case 0x3ac9bcu: goto label_3ac9bc;
        case 0x3ac9c0u: goto label_3ac9c0;
        case 0x3ac9c4u: goto label_3ac9c4;
        case 0x3ac9c8u: goto label_3ac9c8;
        case 0x3ac9ccu: goto label_3ac9cc;
        case 0x3ac9d0u: goto label_3ac9d0;
        case 0x3ac9d4u: goto label_3ac9d4;
        case 0x3ac9d8u: goto label_3ac9d8;
        case 0x3ac9dcu: goto label_3ac9dc;
        case 0x3ac9e0u: goto label_3ac9e0;
        case 0x3ac9e4u: goto label_3ac9e4;
        case 0x3ac9e8u: goto label_3ac9e8;
        case 0x3ac9ecu: goto label_3ac9ec;
        case 0x3ac9f0u: goto label_3ac9f0;
        case 0x3ac9f4u: goto label_3ac9f4;
        case 0x3ac9f8u: goto label_3ac9f8;
        case 0x3ac9fcu: goto label_3ac9fc;
        case 0x3aca00u: goto label_3aca00;
        case 0x3aca04u: goto label_3aca04;
        case 0x3aca08u: goto label_3aca08;
        case 0x3aca0cu: goto label_3aca0c;
        case 0x3aca10u: goto label_3aca10;
        case 0x3aca14u: goto label_3aca14;
        case 0x3aca18u: goto label_3aca18;
        case 0x3aca1cu: goto label_3aca1c;
        case 0x3aca20u: goto label_3aca20;
        case 0x3aca24u: goto label_3aca24;
        case 0x3aca28u: goto label_3aca28;
        case 0x3aca2cu: goto label_3aca2c;
        case 0x3aca30u: goto label_3aca30;
        case 0x3aca34u: goto label_3aca34;
        case 0x3aca38u: goto label_3aca38;
        case 0x3aca3cu: goto label_3aca3c;
        case 0x3aca40u: goto label_3aca40;
        case 0x3aca44u: goto label_3aca44;
        case 0x3aca48u: goto label_3aca48;
        case 0x3aca4cu: goto label_3aca4c;
        case 0x3aca50u: goto label_3aca50;
        case 0x3aca54u: goto label_3aca54;
        case 0x3aca58u: goto label_3aca58;
        case 0x3aca5cu: goto label_3aca5c;
        case 0x3aca60u: goto label_3aca60;
        case 0x3aca64u: goto label_3aca64;
        case 0x3aca68u: goto label_3aca68;
        case 0x3aca6cu: goto label_3aca6c;
        case 0x3aca70u: goto label_3aca70;
        case 0x3aca74u: goto label_3aca74;
        case 0x3aca78u: goto label_3aca78;
        case 0x3aca7cu: goto label_3aca7c;
        case 0x3aca80u: goto label_3aca80;
        case 0x3aca84u: goto label_3aca84;
        case 0x3aca88u: goto label_3aca88;
        case 0x3aca8cu: goto label_3aca8c;
        case 0x3aca90u: goto label_3aca90;
        case 0x3aca94u: goto label_3aca94;
        case 0x3aca98u: goto label_3aca98;
        case 0x3aca9cu: goto label_3aca9c;
        case 0x3acaa0u: goto label_3acaa0;
        case 0x3acaa4u: goto label_3acaa4;
        case 0x3acaa8u: goto label_3acaa8;
        case 0x3acaacu: goto label_3acaac;
        case 0x3acab0u: goto label_3acab0;
        case 0x3acab4u: goto label_3acab4;
        case 0x3acab8u: goto label_3acab8;
        case 0x3acabcu: goto label_3acabc;
        case 0x3acac0u: goto label_3acac0;
        case 0x3acac4u: goto label_3acac4;
        case 0x3acac8u: goto label_3acac8;
        case 0x3acaccu: goto label_3acacc;
        case 0x3acad0u: goto label_3acad0;
        case 0x3acad4u: goto label_3acad4;
        case 0x3acad8u: goto label_3acad8;
        case 0x3acadcu: goto label_3acadc;
        case 0x3acae0u: goto label_3acae0;
        case 0x3acae4u: goto label_3acae4;
        case 0x3acae8u: goto label_3acae8;
        case 0x3acaecu: goto label_3acaec;
        case 0x3acaf0u: goto label_3acaf0;
        case 0x3acaf4u: goto label_3acaf4;
        case 0x3acaf8u: goto label_3acaf8;
        case 0x3acafcu: goto label_3acafc;
        case 0x3acb00u: goto label_3acb00;
        case 0x3acb04u: goto label_3acb04;
        case 0x3acb08u: goto label_3acb08;
        case 0x3acb0cu: goto label_3acb0c;
        case 0x3acb10u: goto label_3acb10;
        case 0x3acb14u: goto label_3acb14;
        case 0x3acb18u: goto label_3acb18;
        case 0x3acb1cu: goto label_3acb1c;
        case 0x3acb20u: goto label_3acb20;
        case 0x3acb24u: goto label_3acb24;
        case 0x3acb28u: goto label_3acb28;
        case 0x3acb2cu: goto label_3acb2c;
        case 0x3acb30u: goto label_3acb30;
        case 0x3acb34u: goto label_3acb34;
        case 0x3acb38u: goto label_3acb38;
        case 0x3acb3cu: goto label_3acb3c;
        case 0x3acb40u: goto label_3acb40;
        case 0x3acb44u: goto label_3acb44;
        case 0x3acb48u: goto label_3acb48;
        case 0x3acb4cu: goto label_3acb4c;
        case 0x3acb50u: goto label_3acb50;
        case 0x3acb54u: goto label_3acb54;
        case 0x3acb58u: goto label_3acb58;
        case 0x3acb5cu: goto label_3acb5c;
        case 0x3acb60u: goto label_3acb60;
        case 0x3acb64u: goto label_3acb64;
        case 0x3acb68u: goto label_3acb68;
        case 0x3acb6cu: goto label_3acb6c;
        case 0x3acb70u: goto label_3acb70;
        case 0x3acb74u: goto label_3acb74;
        case 0x3acb78u: goto label_3acb78;
        case 0x3acb7cu: goto label_3acb7c;
        case 0x3acb80u: goto label_3acb80;
        case 0x3acb84u: goto label_3acb84;
        case 0x3acb88u: goto label_3acb88;
        case 0x3acb8cu: goto label_3acb8c;
        case 0x3acb90u: goto label_3acb90;
        case 0x3acb94u: goto label_3acb94;
        case 0x3acb98u: goto label_3acb98;
        case 0x3acb9cu: goto label_3acb9c;
        case 0x3acba0u: goto label_3acba0;
        case 0x3acba4u: goto label_3acba4;
        case 0x3acba8u: goto label_3acba8;
        case 0x3acbacu: goto label_3acbac;
        case 0x3acbb0u: goto label_3acbb0;
        case 0x3acbb4u: goto label_3acbb4;
        case 0x3acbb8u: goto label_3acbb8;
        case 0x3acbbcu: goto label_3acbbc;
        case 0x3acbc0u: goto label_3acbc0;
        case 0x3acbc4u: goto label_3acbc4;
        case 0x3acbc8u: goto label_3acbc8;
        case 0x3acbccu: goto label_3acbcc;
        case 0x3acbd0u: goto label_3acbd0;
        case 0x3acbd4u: goto label_3acbd4;
        case 0x3acbd8u: goto label_3acbd8;
        case 0x3acbdcu: goto label_3acbdc;
        case 0x3acbe0u: goto label_3acbe0;
        case 0x3acbe4u: goto label_3acbe4;
        case 0x3acbe8u: goto label_3acbe8;
        case 0x3acbecu: goto label_3acbec;
        case 0x3acbf0u: goto label_3acbf0;
        case 0x3acbf4u: goto label_3acbf4;
        case 0x3acbf8u: goto label_3acbf8;
        case 0x3acbfcu: goto label_3acbfc;
        case 0x3acc00u: goto label_3acc00;
        case 0x3acc04u: goto label_3acc04;
        case 0x3acc08u: goto label_3acc08;
        case 0x3acc0cu: goto label_3acc0c;
        case 0x3acc10u: goto label_3acc10;
        case 0x3acc14u: goto label_3acc14;
        case 0x3acc18u: goto label_3acc18;
        case 0x3acc1cu: goto label_3acc1c;
        case 0x3acc20u: goto label_3acc20;
        case 0x3acc24u: goto label_3acc24;
        case 0x3acc28u: goto label_3acc28;
        case 0x3acc2cu: goto label_3acc2c;
        case 0x3acc30u: goto label_3acc30;
        case 0x3acc34u: goto label_3acc34;
        case 0x3acc38u: goto label_3acc38;
        case 0x3acc3cu: goto label_3acc3c;
        case 0x3acc40u: goto label_3acc40;
        case 0x3acc44u: goto label_3acc44;
        case 0x3acc48u: goto label_3acc48;
        case 0x3acc4cu: goto label_3acc4c;
        case 0x3acc50u: goto label_3acc50;
        case 0x3acc54u: goto label_3acc54;
        case 0x3acc58u: goto label_3acc58;
        case 0x3acc5cu: goto label_3acc5c;
        case 0x3acc60u: goto label_3acc60;
        case 0x3acc64u: goto label_3acc64;
        case 0x3acc68u: goto label_3acc68;
        case 0x3acc6cu: goto label_3acc6c;
        case 0x3acc70u: goto label_3acc70;
        case 0x3acc74u: goto label_3acc74;
        case 0x3acc78u: goto label_3acc78;
        case 0x3acc7cu: goto label_3acc7c;
        case 0x3acc80u: goto label_3acc80;
        case 0x3acc84u: goto label_3acc84;
        case 0x3acc88u: goto label_3acc88;
        case 0x3acc8cu: goto label_3acc8c;
        case 0x3acc90u: goto label_3acc90;
        case 0x3acc94u: goto label_3acc94;
        case 0x3acc98u: goto label_3acc98;
        case 0x3acc9cu: goto label_3acc9c;
        case 0x3acca0u: goto label_3acca0;
        case 0x3acca4u: goto label_3acca4;
        case 0x3acca8u: goto label_3acca8;
        case 0x3accacu: goto label_3accac;
        case 0x3accb0u: goto label_3accb0;
        case 0x3accb4u: goto label_3accb4;
        case 0x3accb8u: goto label_3accb8;
        case 0x3accbcu: goto label_3accbc;
        case 0x3accc0u: goto label_3accc0;
        case 0x3accc4u: goto label_3accc4;
        case 0x3accc8u: goto label_3accc8;
        case 0x3accccu: goto label_3acccc;
        case 0x3accd0u: goto label_3accd0;
        case 0x3accd4u: goto label_3accd4;
        case 0x3accd8u: goto label_3accd8;
        case 0x3accdcu: goto label_3accdc;
        case 0x3acce0u: goto label_3acce0;
        case 0x3acce4u: goto label_3acce4;
        case 0x3acce8u: goto label_3acce8;
        case 0x3accecu: goto label_3accec;
        case 0x3accf0u: goto label_3accf0;
        case 0x3accf4u: goto label_3accf4;
        case 0x3accf8u: goto label_3accf8;
        case 0x3accfcu: goto label_3accfc;
        case 0x3acd00u: goto label_3acd00;
        case 0x3acd04u: goto label_3acd04;
        case 0x3acd08u: goto label_3acd08;
        case 0x3acd0cu: goto label_3acd0c;
        case 0x3acd10u: goto label_3acd10;
        case 0x3acd14u: goto label_3acd14;
        case 0x3acd18u: goto label_3acd18;
        case 0x3acd1cu: goto label_3acd1c;
        case 0x3acd20u: goto label_3acd20;
        case 0x3acd24u: goto label_3acd24;
        case 0x3acd28u: goto label_3acd28;
        case 0x3acd2cu: goto label_3acd2c;
        case 0x3acd30u: goto label_3acd30;
        case 0x3acd34u: goto label_3acd34;
        case 0x3acd38u: goto label_3acd38;
        case 0x3acd3cu: goto label_3acd3c;
        case 0x3acd40u: goto label_3acd40;
        case 0x3acd44u: goto label_3acd44;
        case 0x3acd48u: goto label_3acd48;
        case 0x3acd4cu: goto label_3acd4c;
        case 0x3acd50u: goto label_3acd50;
        case 0x3acd54u: goto label_3acd54;
        case 0x3acd58u: goto label_3acd58;
        case 0x3acd5cu: goto label_3acd5c;
        case 0x3acd60u: goto label_3acd60;
        case 0x3acd64u: goto label_3acd64;
        case 0x3acd68u: goto label_3acd68;
        case 0x3acd6cu: goto label_3acd6c;
        case 0x3acd70u: goto label_3acd70;
        case 0x3acd74u: goto label_3acd74;
        case 0x3acd78u: goto label_3acd78;
        case 0x3acd7cu: goto label_3acd7c;
        case 0x3acd80u: goto label_3acd80;
        case 0x3acd84u: goto label_3acd84;
        case 0x3acd88u: goto label_3acd88;
        case 0x3acd8cu: goto label_3acd8c;
        case 0x3acd90u: goto label_3acd90;
        case 0x3acd94u: goto label_3acd94;
        case 0x3acd98u: goto label_3acd98;
        case 0x3acd9cu: goto label_3acd9c;
        case 0x3acda0u: goto label_3acda0;
        case 0x3acda4u: goto label_3acda4;
        case 0x3acda8u: goto label_3acda8;
        case 0x3acdacu: goto label_3acdac;
        case 0x3acdb0u: goto label_3acdb0;
        case 0x3acdb4u: goto label_3acdb4;
        case 0x3acdb8u: goto label_3acdb8;
        case 0x3acdbcu: goto label_3acdbc;
        case 0x3acdc0u: goto label_3acdc0;
        case 0x3acdc4u: goto label_3acdc4;
        case 0x3acdc8u: goto label_3acdc8;
        case 0x3acdccu: goto label_3acdcc;
        case 0x3acdd0u: goto label_3acdd0;
        case 0x3acdd4u: goto label_3acdd4;
        case 0x3acdd8u: goto label_3acdd8;
        case 0x3acddcu: goto label_3acddc;
        case 0x3acde0u: goto label_3acde0;
        case 0x3acde4u: goto label_3acde4;
        case 0x3acde8u: goto label_3acde8;
        case 0x3acdecu: goto label_3acdec;
        case 0x3acdf0u: goto label_3acdf0;
        case 0x3acdf4u: goto label_3acdf4;
        case 0x3acdf8u: goto label_3acdf8;
        case 0x3acdfcu: goto label_3acdfc;
        case 0x3ace00u: goto label_3ace00;
        case 0x3ace04u: goto label_3ace04;
        case 0x3ace08u: goto label_3ace08;
        case 0x3ace0cu: goto label_3ace0c;
        case 0x3ace10u: goto label_3ace10;
        case 0x3ace14u: goto label_3ace14;
        case 0x3ace18u: goto label_3ace18;
        case 0x3ace1cu: goto label_3ace1c;
        case 0x3ace20u: goto label_3ace20;
        case 0x3ace24u: goto label_3ace24;
        case 0x3ace28u: goto label_3ace28;
        case 0x3ace2cu: goto label_3ace2c;
        case 0x3ace30u: goto label_3ace30;
        case 0x3ace34u: goto label_3ace34;
        case 0x3ace38u: goto label_3ace38;
        case 0x3ace3cu: goto label_3ace3c;
        case 0x3ace40u: goto label_3ace40;
        case 0x3ace44u: goto label_3ace44;
        case 0x3ace48u: goto label_3ace48;
        case 0x3ace4cu: goto label_3ace4c;
        case 0x3ace50u: goto label_3ace50;
        case 0x3ace54u: goto label_3ace54;
        case 0x3ace58u: goto label_3ace58;
        case 0x3ace5cu: goto label_3ace5c;
        case 0x3ace60u: goto label_3ace60;
        case 0x3ace64u: goto label_3ace64;
        case 0x3ace68u: goto label_3ace68;
        case 0x3ace6cu: goto label_3ace6c;
        case 0x3ace70u: goto label_3ace70;
        case 0x3ace74u: goto label_3ace74;
        case 0x3ace78u: goto label_3ace78;
        case 0x3ace7cu: goto label_3ace7c;
        case 0x3ace80u: goto label_3ace80;
        case 0x3ace84u: goto label_3ace84;
        case 0x3ace88u: goto label_3ace88;
        case 0x3ace8cu: goto label_3ace8c;
        case 0x3ace90u: goto label_3ace90;
        case 0x3ace94u: goto label_3ace94;
        case 0x3ace98u: goto label_3ace98;
        case 0x3ace9cu: goto label_3ace9c;
        case 0x3acea0u: goto label_3acea0;
        case 0x3acea4u: goto label_3acea4;
        case 0x3acea8u: goto label_3acea8;
        case 0x3aceacu: goto label_3aceac;
        case 0x3aceb0u: goto label_3aceb0;
        case 0x3aceb4u: goto label_3aceb4;
        case 0x3aceb8u: goto label_3aceb8;
        case 0x3acebcu: goto label_3acebc;
        case 0x3acec0u: goto label_3acec0;
        case 0x3acec4u: goto label_3acec4;
        case 0x3acec8u: goto label_3acec8;
        case 0x3aceccu: goto label_3acecc;
        case 0x3aced0u: goto label_3aced0;
        case 0x3aced4u: goto label_3aced4;
        case 0x3aced8u: goto label_3aced8;
        case 0x3acedcu: goto label_3acedc;
        case 0x3acee0u: goto label_3acee0;
        case 0x3acee4u: goto label_3acee4;
        case 0x3acee8u: goto label_3acee8;
        case 0x3aceecu: goto label_3aceec;
        case 0x3acef0u: goto label_3acef0;
        case 0x3acef4u: goto label_3acef4;
        case 0x3acef8u: goto label_3acef8;
        case 0x3acefcu: goto label_3acefc;
        case 0x3acf00u: goto label_3acf00;
        case 0x3acf04u: goto label_3acf04;
        case 0x3acf08u: goto label_3acf08;
        case 0x3acf0cu: goto label_3acf0c;
        case 0x3acf10u: goto label_3acf10;
        case 0x3acf14u: goto label_3acf14;
        case 0x3acf18u: goto label_3acf18;
        case 0x3acf1cu: goto label_3acf1c;
        case 0x3acf20u: goto label_3acf20;
        case 0x3acf24u: goto label_3acf24;
        case 0x3acf28u: goto label_3acf28;
        case 0x3acf2cu: goto label_3acf2c;
        case 0x3acf30u: goto label_3acf30;
        case 0x3acf34u: goto label_3acf34;
        case 0x3acf38u: goto label_3acf38;
        case 0x3acf3cu: goto label_3acf3c;
        case 0x3acf40u: goto label_3acf40;
        case 0x3acf44u: goto label_3acf44;
        case 0x3acf48u: goto label_3acf48;
        case 0x3acf4cu: goto label_3acf4c;
        case 0x3acf50u: goto label_3acf50;
        case 0x3acf54u: goto label_3acf54;
        case 0x3acf58u: goto label_3acf58;
        case 0x3acf5cu: goto label_3acf5c;
        case 0x3acf60u: goto label_3acf60;
        case 0x3acf64u: goto label_3acf64;
        case 0x3acf68u: goto label_3acf68;
        case 0x3acf6cu: goto label_3acf6c;
        case 0x3acf70u: goto label_3acf70;
        case 0x3acf74u: goto label_3acf74;
        case 0x3acf78u: goto label_3acf78;
        case 0x3acf7cu: goto label_3acf7c;
        case 0x3acf80u: goto label_3acf80;
        case 0x3acf84u: goto label_3acf84;
        case 0x3acf88u: goto label_3acf88;
        case 0x3acf8cu: goto label_3acf8c;
        case 0x3acf90u: goto label_3acf90;
        case 0x3acf94u: goto label_3acf94;
        case 0x3acf98u: goto label_3acf98;
        case 0x3acf9cu: goto label_3acf9c;
        case 0x3acfa0u: goto label_3acfa0;
        case 0x3acfa4u: goto label_3acfa4;
        case 0x3acfa8u: goto label_3acfa8;
        case 0x3acfacu: goto label_3acfac;
        case 0x3acfb0u: goto label_3acfb0;
        case 0x3acfb4u: goto label_3acfb4;
        case 0x3acfb8u: goto label_3acfb8;
        case 0x3acfbcu: goto label_3acfbc;
        case 0x3acfc0u: goto label_3acfc0;
        case 0x3acfc4u: goto label_3acfc4;
        case 0x3acfc8u: goto label_3acfc8;
        case 0x3acfccu: goto label_3acfcc;
        case 0x3acfd0u: goto label_3acfd0;
        case 0x3acfd4u: goto label_3acfd4;
        case 0x3acfd8u: goto label_3acfd8;
        case 0x3acfdcu: goto label_3acfdc;
        case 0x3acfe0u: goto label_3acfe0;
        case 0x3acfe4u: goto label_3acfe4;
        case 0x3acfe8u: goto label_3acfe8;
        case 0x3acfecu: goto label_3acfec;
        case 0x3acff0u: goto label_3acff0;
        case 0x3acff4u: goto label_3acff4;
        case 0x3acff8u: goto label_3acff8;
        case 0x3acffcu: goto label_3acffc;
        case 0x3ad000u: goto label_3ad000;
        case 0x3ad004u: goto label_3ad004;
        case 0x3ad008u: goto label_3ad008;
        case 0x3ad00cu: goto label_3ad00c;
        case 0x3ad010u: goto label_3ad010;
        case 0x3ad014u: goto label_3ad014;
        case 0x3ad018u: goto label_3ad018;
        case 0x3ad01cu: goto label_3ad01c;
        case 0x3ad020u: goto label_3ad020;
        case 0x3ad024u: goto label_3ad024;
        case 0x3ad028u: goto label_3ad028;
        case 0x3ad02cu: goto label_3ad02c;
        case 0x3ad030u: goto label_3ad030;
        case 0x3ad034u: goto label_3ad034;
        case 0x3ad038u: goto label_3ad038;
        case 0x3ad03cu: goto label_3ad03c;
        case 0x3ad040u: goto label_3ad040;
        case 0x3ad044u: goto label_3ad044;
        case 0x3ad048u: goto label_3ad048;
        case 0x3ad04cu: goto label_3ad04c;
        case 0x3ad050u: goto label_3ad050;
        case 0x3ad054u: goto label_3ad054;
        case 0x3ad058u: goto label_3ad058;
        case 0x3ad05cu: goto label_3ad05c;
        case 0x3ad060u: goto label_3ad060;
        case 0x3ad064u: goto label_3ad064;
        case 0x3ad068u: goto label_3ad068;
        case 0x3ad06cu: goto label_3ad06c;
        case 0x3ad070u: goto label_3ad070;
        case 0x3ad074u: goto label_3ad074;
        case 0x3ad078u: goto label_3ad078;
        case 0x3ad07cu: goto label_3ad07c;
        case 0x3ad080u: goto label_3ad080;
        case 0x3ad084u: goto label_3ad084;
        case 0x3ad088u: goto label_3ad088;
        case 0x3ad08cu: goto label_3ad08c;
        case 0x3ad090u: goto label_3ad090;
        case 0x3ad094u: goto label_3ad094;
        case 0x3ad098u: goto label_3ad098;
        case 0x3ad09cu: goto label_3ad09c;
        case 0x3ad0a0u: goto label_3ad0a0;
        case 0x3ad0a4u: goto label_3ad0a4;
        case 0x3ad0a8u: goto label_3ad0a8;
        case 0x3ad0acu: goto label_3ad0ac;
        case 0x3ad0b0u: goto label_3ad0b0;
        case 0x3ad0b4u: goto label_3ad0b4;
        case 0x3ad0b8u: goto label_3ad0b8;
        case 0x3ad0bcu: goto label_3ad0bc;
        case 0x3ad0c0u: goto label_3ad0c0;
        case 0x3ad0c4u: goto label_3ad0c4;
        case 0x3ad0c8u: goto label_3ad0c8;
        case 0x3ad0ccu: goto label_3ad0cc;
        case 0x3ad0d0u: goto label_3ad0d0;
        case 0x3ad0d4u: goto label_3ad0d4;
        case 0x3ad0d8u: goto label_3ad0d8;
        case 0x3ad0dcu: goto label_3ad0dc;
        case 0x3ad0e0u: goto label_3ad0e0;
        case 0x3ad0e4u: goto label_3ad0e4;
        case 0x3ad0e8u: goto label_3ad0e8;
        case 0x3ad0ecu: goto label_3ad0ec;
        case 0x3ad0f0u: goto label_3ad0f0;
        case 0x3ad0f4u: goto label_3ad0f4;
        case 0x3ad0f8u: goto label_3ad0f8;
        case 0x3ad0fcu: goto label_3ad0fc;
        case 0x3ad100u: goto label_3ad100;
        case 0x3ad104u: goto label_3ad104;
        case 0x3ad108u: goto label_3ad108;
        case 0x3ad10cu: goto label_3ad10c;
        case 0x3ad110u: goto label_3ad110;
        case 0x3ad114u: goto label_3ad114;
        case 0x3ad118u: goto label_3ad118;
        case 0x3ad11cu: goto label_3ad11c;
        case 0x3ad120u: goto label_3ad120;
        case 0x3ad124u: goto label_3ad124;
        case 0x3ad128u: goto label_3ad128;
        case 0x3ad12cu: goto label_3ad12c;
        case 0x3ad130u: goto label_3ad130;
        case 0x3ad134u: goto label_3ad134;
        case 0x3ad138u: goto label_3ad138;
        case 0x3ad13cu: goto label_3ad13c;
        case 0x3ad140u: goto label_3ad140;
        case 0x3ad144u: goto label_3ad144;
        case 0x3ad148u: goto label_3ad148;
        case 0x3ad14cu: goto label_3ad14c;
        case 0x3ad150u: goto label_3ad150;
        case 0x3ad154u: goto label_3ad154;
        case 0x3ad158u: goto label_3ad158;
        case 0x3ad15cu: goto label_3ad15c;
        case 0x3ad160u: goto label_3ad160;
        case 0x3ad164u: goto label_3ad164;
        case 0x3ad168u: goto label_3ad168;
        case 0x3ad16cu: goto label_3ad16c;
        case 0x3ad170u: goto label_3ad170;
        case 0x3ad174u: goto label_3ad174;
        case 0x3ad178u: goto label_3ad178;
        case 0x3ad17cu: goto label_3ad17c;
        case 0x3ad180u: goto label_3ad180;
        case 0x3ad184u: goto label_3ad184;
        case 0x3ad188u: goto label_3ad188;
        case 0x3ad18cu: goto label_3ad18c;
        case 0x3ad190u: goto label_3ad190;
        case 0x3ad194u: goto label_3ad194;
        case 0x3ad198u: goto label_3ad198;
        case 0x3ad19cu: goto label_3ad19c;
        case 0x3ad1a0u: goto label_3ad1a0;
        case 0x3ad1a4u: goto label_3ad1a4;
        case 0x3ad1a8u: goto label_3ad1a8;
        case 0x3ad1acu: goto label_3ad1ac;
        case 0x3ad1b0u: goto label_3ad1b0;
        case 0x3ad1b4u: goto label_3ad1b4;
        case 0x3ad1b8u: goto label_3ad1b8;
        case 0x3ad1bcu: goto label_3ad1bc;
        case 0x3ad1c0u: goto label_3ad1c0;
        case 0x3ad1c4u: goto label_3ad1c4;
        case 0x3ad1c8u: goto label_3ad1c8;
        case 0x3ad1ccu: goto label_3ad1cc;
        case 0x3ad1d0u: goto label_3ad1d0;
        case 0x3ad1d4u: goto label_3ad1d4;
        case 0x3ad1d8u: goto label_3ad1d8;
        case 0x3ad1dcu: goto label_3ad1dc;
        case 0x3ad1e0u: goto label_3ad1e0;
        case 0x3ad1e4u: goto label_3ad1e4;
        case 0x3ad1e8u: goto label_3ad1e8;
        case 0x3ad1ecu: goto label_3ad1ec;
        case 0x3ad1f0u: goto label_3ad1f0;
        case 0x3ad1f4u: goto label_3ad1f4;
        case 0x3ad1f8u: goto label_3ad1f8;
        case 0x3ad1fcu: goto label_3ad1fc;
        case 0x3ad200u: goto label_3ad200;
        case 0x3ad204u: goto label_3ad204;
        case 0x3ad208u: goto label_3ad208;
        case 0x3ad20cu: goto label_3ad20c;
        case 0x3ad210u: goto label_3ad210;
        case 0x3ad214u: goto label_3ad214;
        case 0x3ad218u: goto label_3ad218;
        case 0x3ad21cu: goto label_3ad21c;
        case 0x3ad220u: goto label_3ad220;
        case 0x3ad224u: goto label_3ad224;
        case 0x3ad228u: goto label_3ad228;
        case 0x3ad22cu: goto label_3ad22c;
        case 0x3ad230u: goto label_3ad230;
        case 0x3ad234u: goto label_3ad234;
        case 0x3ad238u: goto label_3ad238;
        case 0x3ad23cu: goto label_3ad23c;
        case 0x3ad240u: goto label_3ad240;
        case 0x3ad244u: goto label_3ad244;
        case 0x3ad248u: goto label_3ad248;
        case 0x3ad24cu: goto label_3ad24c;
        case 0x3ad250u: goto label_3ad250;
        case 0x3ad254u: goto label_3ad254;
        case 0x3ad258u: goto label_3ad258;
        case 0x3ad25cu: goto label_3ad25c;
        case 0x3ad260u: goto label_3ad260;
        case 0x3ad264u: goto label_3ad264;
        case 0x3ad268u: goto label_3ad268;
        case 0x3ad26cu: goto label_3ad26c;
        case 0x3ad270u: goto label_3ad270;
        case 0x3ad274u: goto label_3ad274;
        case 0x3ad278u: goto label_3ad278;
        case 0x3ad27cu: goto label_3ad27c;
        case 0x3ad280u: goto label_3ad280;
        case 0x3ad284u: goto label_3ad284;
        case 0x3ad288u: goto label_3ad288;
        case 0x3ad28cu: goto label_3ad28c;
        case 0x3ad290u: goto label_3ad290;
        case 0x3ad294u: goto label_3ad294;
        case 0x3ad298u: goto label_3ad298;
        case 0x3ad29cu: goto label_3ad29c;
        case 0x3ad2a0u: goto label_3ad2a0;
        case 0x3ad2a4u: goto label_3ad2a4;
        case 0x3ad2a8u: goto label_3ad2a8;
        case 0x3ad2acu: goto label_3ad2ac;
        case 0x3ad2b0u: goto label_3ad2b0;
        case 0x3ad2b4u: goto label_3ad2b4;
        case 0x3ad2b8u: goto label_3ad2b8;
        case 0x3ad2bcu: goto label_3ad2bc;
        case 0x3ad2c0u: goto label_3ad2c0;
        case 0x3ad2c4u: goto label_3ad2c4;
        case 0x3ad2c8u: goto label_3ad2c8;
        case 0x3ad2ccu: goto label_3ad2cc;
        default: break;
    }

    ctx->pc = 0x3ac410u;

label_3ac410:
    // 0x3ac410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ac410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ac414:
    // 0x3ac414: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3ac414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3ac418:
    // 0x3ac418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ac418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3ac41c:
    // 0x3ac41c: 0x246388f0  addiu       $v1, $v1, -0x7710
    ctx->pc = 0x3ac41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936816));
label_3ac420:
    // 0x3ac420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ac420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ac424:
    // 0x3ac424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ac424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ac428:
    // 0x3ac428: 0xac830128  sw          $v1, 0x128($a0)
    ctx->pc = 0x3ac428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 3));
label_3ac42c:
    // 0x3ac42c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ac42cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ac430:
    // 0x3ac430: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3ac430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_3ac434:
    // 0x3ac434: 0xc0eb00c  jal         func_3AC030
label_3ac438:
    if (ctx->pc == 0x3AC438u) {
        ctx->pc = 0x3AC438u;
            // 0x3ac438: 0xa0820004  sb          $v0, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3AC43Cu;
        goto label_3ac43c;
    }
    ctx->pc = 0x3AC434u;
    SET_GPR_U32(ctx, 31, 0x3AC43Cu);
    ctx->pc = 0x3AC438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC434u;
            // 0x3ac438: 0xa0820004  sb          $v0, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AC030u;
    if (runtime->hasFunction(0x3AC030u)) {
        auto targetFn = runtime->lookupFunction(0x3AC030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC43Cu; }
        if (ctx->pc != 0x3AC43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AC030_0x3ac030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC43Cu; }
        if (ctx->pc != 0x3AC43Cu) { return; }
    }
    ctx->pc = 0x3AC43Cu;
label_3ac43c:
    // 0x3ac43c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ac43cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ac440:
    // 0x3ac440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ac440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac444:
    // 0x3ac444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ac444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ac448:
    // 0x3ac448: 0x3e00008  jr          $ra
label_3ac44c:
    if (ctx->pc == 0x3AC44Cu) {
        ctx->pc = 0x3AC44Cu;
            // 0x3ac44c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3AC450u;
        goto label_3ac450;
    }
    ctx->pc = 0x3AC448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC448u;
            // 0x3ac44c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AC450u;
label_3ac450:
    // 0x3ac450: 0x3e00008  jr          $ra
label_3ac454:
    if (ctx->pc == 0x3AC454u) {
        ctx->pc = 0x3AC458u;
        goto label_3ac458;
    }
    ctx->pc = 0x3AC450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AC458u;
label_3ac458:
    // 0x3ac458: 0x0  nop
    ctx->pc = 0x3ac458u;
    // NOP
label_3ac45c:
    // 0x3ac45c: 0x0  nop
    ctx->pc = 0x3ac45cu;
    // NOP
label_3ac460:
    // 0x3ac460: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3ac460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3ac464:
    // 0x3ac464: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3ac464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_3ac468:
    // 0x3ac468: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3ac468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3ac46c:
    // 0x3ac46c: 0x24639bc0  addiu       $v1, $v1, -0x6440
    ctx->pc = 0x3ac46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941632));
label_3ac470:
    // 0x3ac470: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3ac470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3ac474:
    // 0x3ac474: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3ac474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ac478:
    // 0x3ac478: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3ac478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3ac47c:
    // 0x3ac47c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3ac47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3ac480:
    // 0x3ac480: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3ac480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3ac484:
    // 0x3ac484: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ac484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3ac488:
    // 0x3ac488: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ac488u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ac48c:
    // 0x3ac48c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ac48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3ac490:
    // 0x3ac490: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ac490u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ac494:
    // 0x3ac494: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ac494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3ac498:
    // 0x3ac498: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3ac498u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ac49c:
    // 0x3ac49c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ac49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3ac4a0:
    // 0x3ac4a0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x3ac4a0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ac4a4:
    // 0x3ac4a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ac4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3ac4a8:
    // 0x3ac4a8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3ac4a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ac4ac:
    // 0x3ac4ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ac4acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3ac4b0:
    // 0x3ac4b0: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x3ac4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3ac4b4:
    // 0x3ac4b4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3ac4b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3ac4b8:
    // 0x3ac4b8: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x3ac4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ac4bc:
    // 0x3ac4bc: 0x90860080  lbu         $a2, 0x80($a0)
    ctx->pc = 0x3ac4bcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
label_3ac4c0:
    // 0x3ac4c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ac4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3ac4c4:
    // 0x3ac4c4: 0x8cf70e00  lw          $s7, 0xE00($a3)
    ctx->pc = 0x3ac4c4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3584)));
label_3ac4c8:
    // 0x3ac4c8: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x3ac4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_3ac4cc:
    // 0x3ac4cc: 0x883821  addu        $a3, $a0, $t0
    ctx->pc = 0x3ac4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_3ac4d0:
    // 0x3ac4d0: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x3ac4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3ac4d4:
    // 0x3ac4d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ac4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ac4d8:
    // 0x3ac4d8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x3ac4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_3ac4dc:
    // 0x3ac4dc: 0x883023  subu        $a2, $a0, $t0
    ctx->pc = 0x3ac4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_3ac4e0:
    // 0x3ac4e0: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x3ac4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ac4e4:
    // 0x3ac4e4: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x3ac4e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3ac4e8:
    // 0x3ac4e8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x3ac4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ac4ec:
    // 0x3ac4ec: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x3ac4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_3ac4f0:
    // 0x3ac4f0: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x3ac4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_3ac4f4:
    // 0x3ac4f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3ac4f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3ac4f8:
    // 0x3ac4f8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3ac4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3ac4fc:
    // 0x3ac4fc: 0x84512102  lh          $s1, 0x2102($v0)
    ctx->pc = 0x3ac4fcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_3ac500:
    // 0x3ac500: 0x24de0090  addiu       $fp, $a2, 0x90
    ctx->pc = 0x3ac500u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
label_3ac504:
    // 0x3ac504: 0x8cd600a0  lw          $s6, 0xA0($a2)
    ctx->pc = 0x3ac504u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
label_3ac508:
    // 0x3ac508: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3ac508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3ac50c:
    // 0x3ac50c: 0x84502100  lh          $s0, 0x2100($v0)
    ctx->pc = 0x3ac50cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_3ac510:
    // 0x3ac510: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x3ac510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3ac514:
    // 0x3ac514: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3ac514u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3ac518:
    // 0x3ac518: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x3ac518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_3ac51c:
    // 0x3ac51c: 0x4603231c  madd.s      $f12, $f4, $f3
    ctx->pc = 0x3ac51cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_3ac520:
    // 0x3ac520: 0xc4d400a4  lwc1        $f20, 0xA4($a2)
    ctx->pc = 0x3ac520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ac524:
    // 0x3ac524: 0x460c0818  adda.s      $f1, $f12
    ctx->pc = 0x3ac524u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
label_3ac528:
    // 0x3ac528: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_3ac52c:
    if (ctx->pc == 0x3AC52Cu) {
        ctx->pc = 0x3AC52Cu;
            // 0x3ac52c: 0x4603a39c  madd.s      $f14, $f20, $f3 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[3]));
        ctx->pc = 0x3AC530u;
        goto label_3ac530;
    }
    ctx->pc = 0x3AC528u;
    {
        const bool branch_taken_0x3ac528 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3AC52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC528u;
            // 0x3ac52c: 0x4603a39c  madd.s      $f14, $f20, $f3 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac528) {
            ctx->pc = 0x3AC53Cu;
            goto label_3ac53c;
        }
    }
    ctx->pc = 0x3AC530u;
label_3ac530:
    // 0x3ac530: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ac530u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ac534:
    // 0x3ac534: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ac538:
    if (ctx->pc == 0x3AC538u) {
        ctx->pc = 0x3AC538u;
            // 0x3ac538: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3AC53Cu;
        goto label_3ac53c;
    }
    ctx->pc = 0x3AC534u;
    {
        const bool branch_taken_0x3ac534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC534u;
            // 0x3ac538: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac534) {
            ctx->pc = 0x3AC558u;
            goto label_3ac558;
        }
    }
    ctx->pc = 0x3AC53Cu;
label_3ac53c:
    // 0x3ac53c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3ac53cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3ac540:
    // 0x3ac540: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3ac540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3ac544:
    // 0x3ac544: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ac544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ac548:
    // 0x3ac548: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ac548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ac54c:
    // 0x3ac54c: 0x0  nop
    ctx->pc = 0x3ac54cu;
    // NOP
label_3ac550:
    // 0x3ac550: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ac550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ac554:
    // 0x3ac554: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3ac554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3ac558:
    // 0x3ac558: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x3ac558u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_3ac55c:
    // 0x3ac55c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3ac55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3ac560:
    // 0x3ac560: 0x92a60082  lbu         $a2, 0x82($s5)
    ctx->pc = 0x3ac560u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 130)));
label_3ac564:
    // 0x3ac564: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ac564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3ac568:
    // 0x3ac568: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3ac568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3ac56c:
    // 0x3ac56c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ac56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ac570:
    // 0x3ac570: 0x90630116  lbu         $v1, 0x116($v1)
    ctx->pc = 0x3ac570u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
label_3ac574:
    // 0x3ac574: 0x24a59bc0  addiu       $a1, $a1, -0x6440
    ctx->pc = 0x3ac574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941632));
label_3ac578:
    // 0x3ac578: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3ac578u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ac57c:
    // 0x3ac57c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3ac57cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3ac580:
    // 0x3ac580: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ac580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3ac584:
    // 0x3ac584: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3ac584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3ac588:
    // 0x3ac588: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ac588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac58c:
    // 0x3ac58c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x3ac58cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ac590:
    // 0x3ac590: 0x0  nop
    ctx->pc = 0x3ac590u;
    // NOP
label_3ac594:
    // 0x3ac594: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ac594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3ac598:
    // 0x3ac598: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3ac598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3ac59c:
    // 0x3ac59c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x3ac59cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_3ac5a0:
    // 0x3ac5a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ac5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3ac5a4:
    // 0x3ac5a4: 0xc0bc284  jal         func_2F0A10
label_3ac5a8:
    if (ctx->pc == 0x3AC5A8u) {
        ctx->pc = 0x3AC5A8u;
            // 0x3ac5a8: 0x2423025  or          $a2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
        ctx->pc = 0x3AC5ACu;
        goto label_3ac5ac;
    }
    ctx->pc = 0x3AC5A4u;
    SET_GPR_U32(ctx, 31, 0x3AC5ACu);
    ctx->pc = 0x3AC5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC5A4u;
            // 0x3ac5a8: 0x2423025  or          $a2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC5ACu; }
        if (ctx->pc != 0x3AC5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC5ACu; }
        if (ctx->pc != 0x3AC5ACu) { return; }
    }
    ctx->pc = 0x3AC5ACu;
label_3ac5ac:
    // 0x3ac5ac: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3ac5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ac5b0:
    // 0x3ac5b0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3ac5b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ac5b4:
    // 0x3ac5b4: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x3ac5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3ac5b8:
    // 0x3ac5b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ac5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ac5bc:
    // 0x3ac5bc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3ac5bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ac5c0:
    // 0x3ac5c0: 0xc0ebe78  jal         func_3AF9E0
label_3ac5c4:
    if (ctx->pc == 0x3AC5C4u) {
        ctx->pc = 0x3AC5C4u;
            // 0x3ac5c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3AC5C8u;
        goto label_3ac5c8;
    }
    ctx->pc = 0x3AC5C0u;
    SET_GPR_U32(ctx, 31, 0x3AC5C8u);
    ctx->pc = 0x3AC5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC5C0u;
            // 0x3ac5c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9E0u;
    if (runtime->hasFunction(0x3AF9E0u)) {
        auto targetFn = runtime->lookupFunction(0x3AF9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC5C8u; }
        if (ctx->pc != 0x3AC5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AF9E0_0x3af9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC5C8u; }
        if (ctx->pc != 0x3AC5C8u) { return; }
    }
    ctx->pc = 0x3AC5C8u;
label_3ac5c8:
    // 0x3ac5c8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3ac5c8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ac5cc:
    // 0x3ac5cc: 0x8ea90004  lw          $t1, 0x4($s5)
    ctx->pc = 0x3ac5ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3ac5d0:
    // 0x3ac5d0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ac5d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3ac5d4:
    // 0x3ac5d4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3ac5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3ac5d8:
    // 0x3ac5d8: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x3ac5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
label_3ac5dc:
    // 0x3ac5dc: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x3ac5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_3ac5e0:
    // 0x3ac5e0: 0x25089bc0  addiu       $t0, $t0, -0x6440
    ctx->pc = 0x3ac5e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941632));
label_3ac5e4:
    // 0x3ac5e4: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3ac5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3ac5e8:
    // 0x3ac5e8: 0x90460116  lbu         $a2, 0x116($v0)
    ctx->pc = 0x3ac5e8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
label_3ac5ec:
    // 0x3ac5ec: 0x26a70040  addiu       $a3, $s5, 0x40
    ctx->pc = 0x3ac5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_3ac5f0:
    // 0x3ac5f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ac5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ac5f4:
    // 0x3ac5f4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x3ac5f4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ac5f8:
    // 0x3ac5f8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ac5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3ac5fc:
    // 0x3ac5fc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ac5fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3ac600:
    // 0x3ac600: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3ac600u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3ac604:
    // 0x3ac604: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x3ac604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ac608:
    // 0x3ac608: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x3ac608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ac60c:
    // 0x3ac60c: 0xc5240008  lwc1        $f4, 0x8($t1)
    ctx->pc = 0x3ac60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3ac610:
    // 0x3ac610: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ac610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ac614:
    // 0x3ac614: 0x46000940  add.s       $f5, $f1, $f0
    ctx->pc = 0x3ac614u;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3ac618:
    // 0x3ac618: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x3ac618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ac61c:
    // 0x3ac61c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x3ac61cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ac620:
    // 0x3ac620: 0x0  nop
    ctx->pc = 0x3ac620u;
    // NOP
label_3ac624:
    // 0x3ac624: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3ac624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3ac628:
    // 0x3ac628: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ac628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ac62c:
    // 0x3ac62c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ac62cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ac630:
    // 0x3ac630: 0x0  nop
    ctx->pc = 0x3ac630u;
    // NOP
label_3ac634:
    // 0x3ac634: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3ac634u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ac638:
    // 0x3ac638: 0x4603201c  madd.s      $f0, $f4, $f3
    ctx->pc = 0x3ac638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_3ac63c:
    // 0x3ac63c: 0xe6a00070  swc1        $f0, 0x70($s5)
    ctx->pc = 0x3ac63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 112), bits); }
label_3ac640:
    // 0x3ac640: 0xe6a50074  swc1        $f5, 0x74($s5)
    ctx->pc = 0x3ac640u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 116), bits); }
label_3ac644:
    // 0x3ac644: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3ac644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3ac648:
    // 0x3ac648: 0xaea00078  sw          $zero, 0x78($s5)
    ctx->pc = 0x3ac648u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 0));
label_3ac64c:
    // 0x3ac64c: 0x92a20083  lbu         $v0, 0x83($s5)
    ctx->pc = 0x3ac64cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 131)));
label_3ac650:
    // 0x3ac650: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3ac650u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3ac654:
    // 0x3ac654: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ac654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3ac658:
    // 0x3ac658: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x3ac658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_3ac65c:
    // 0x3ac65c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3ac65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ac660:
    // 0x3ac660: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3ac660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ac664:
    // 0x3ac664: 0x46011382  mul.s       $f14, $f2, $f1
    ctx->pc = 0x3ac664u;
    ctx->f[14] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3ac668:
    // 0x3ac668: 0x460013c2  mul.s       $f15, $f2, $f0
    ctx->pc = 0x3ac668u;
    ctx->f[15] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3ac66c:
    // 0x3ac66c: 0x46007307  neg.s       $f12, $f14
    ctx->pc = 0x3ac66cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[14]);
label_3ac670:
    // 0x3ac670: 0xc0bc284  jal         func_2F0A10
label_3ac674:
    if (ctx->pc == 0x3AC674u) {
        ctx->pc = 0x3AC674u;
            // 0x3ac674: 0x46007b47  neg.s       $f13, $f15 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[15]);
        ctx->pc = 0x3AC678u;
        goto label_3ac678;
    }
    ctx->pc = 0x3AC670u;
    SET_GPR_U32(ctx, 31, 0x3AC678u);
    ctx->pc = 0x3AC674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC670u;
            // 0x3ac674: 0x46007b47  neg.s       $f13, $f15 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC678u; }
        if (ctx->pc != 0x3AC678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC678u; }
        if (ctx->pc != 0x3AC678u) { return; }
    }
    ctx->pc = 0x3AC678u;
label_3ac678:
    // 0x3ac678: 0xc6a0002c  lwc1        $f0, 0x2C($s5)
    ctx->pc = 0x3ac678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ac67c:
    // 0x3ac67c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3ac67cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ac680:
    // 0x3ac680: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_3ac684:
    if (ctx->pc == 0x3AC684u) {
        ctx->pc = 0x3AC684u;
            // 0x3ac684: 0x8e86000c  lw          $a2, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x3AC688u;
        goto label_3ac688;
    }
    ctx->pc = 0x3AC680u;
    {
        const bool branch_taken_0x3ac680 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ac680) {
            ctx->pc = 0x3AC684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC680u;
            // 0x3ac684: 0x8e86000c  lw          $a2, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AC6A8u;
            goto label_3ac6a8;
        }
    }
    ctx->pc = 0x3AC688u;
label_3ac688:
    // 0x3ac688: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3ac688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ac68c:
    // 0x3ac68c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x3ac68cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3ac690:
    // 0x3ac690: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x3ac690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3ac694:
    // 0x3ac694: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3ac694u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ac698:
    // 0x3ac698: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ac698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ac69c:
    // 0x3ac69c: 0xc0ebc60  jal         func_3AF180
label_3ac6a0:
    if (ctx->pc == 0x3AC6A0u) {
        ctx->pc = 0x3AC6A0u;
            // 0x3ac6a0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AC6A4u;
        goto label_3ac6a4;
    }
    ctx->pc = 0x3AC69Cu;
    SET_GPR_U32(ctx, 31, 0x3AC6A4u);
    ctx->pc = 0x3AC6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC69Cu;
            // 0x3ac6a0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AF180u;
    if (runtime->hasFunction(0x3AF180u)) {
        auto targetFn = runtime->lookupFunction(0x3AF180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC6A4u; }
        if (ctx->pc != 0x3AC6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AF180_0x3af180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC6A4u; }
        if (ctx->pc != 0x3AC6A4u) { return; }
    }
    ctx->pc = 0x3AC6A4u;
label_3ac6a4:
    // 0x3ac6a4: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x3ac6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ac6a8:
    // 0x3ac6a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ac6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ac6ac:
    // 0x3ac6ac: 0x8e870010  lw          $a3, 0x10($s4)
    ctx->pc = 0x3ac6acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3ac6b0:
    // 0x3ac6b0: 0x27c5001c  addiu       $a1, $fp, 0x1C
    ctx->pc = 0x3ac6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
label_3ac6b4:
    // 0x3ac6b4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3ac6b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ac6b8:
    // 0x3ac6b8: 0xc0ec0e4  jal         func_3B0390
label_3ac6bc:
    if (ctx->pc == 0x3AC6BCu) {
        ctx->pc = 0x3AC6BCu;
            // 0x3ac6bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3AC6C0u;
        goto label_3ac6c0;
    }
    ctx->pc = 0x3AC6B8u;
    SET_GPR_U32(ctx, 31, 0x3AC6C0u);
    ctx->pc = 0x3AC6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC6B8u;
            // 0x3ac6bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0390u;
    if (runtime->hasFunction(0x3B0390u)) {
        auto targetFn = runtime->lookupFunction(0x3B0390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC6C0u; }
        if (ctx->pc != 0x3AC6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0390_0x3b0390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC6C0u; }
        if (ctx->pc != 0x3AC6C0u) { return; }
    }
    ctx->pc = 0x3AC6C0u;
label_3ac6c0:
    // 0x3ac6c0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3ac6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3ac6c4:
    // 0x3ac6c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ac6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ac6c8:
    // 0x3ac6c8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3ac6c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ac6cc:
    // 0x3ac6cc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3ac6ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ac6d0:
    // 0x3ac6d0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3ac6d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ac6d4:
    // 0x3ac6d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3ac6d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ac6d8:
    // 0x3ac6d8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3ac6d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ac6dc:
    // 0x3ac6dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ac6dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ac6e0:
    // 0x3ac6e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ac6e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ac6e4:
    // 0x3ac6e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ac6e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ac6e8:
    // 0x3ac6e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ac6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac6ec:
    // 0x3ac6ec: 0x3e00008  jr          $ra
label_3ac6f0:
    if (ctx->pc == 0x3AC6F0u) {
        ctx->pc = 0x3AC6F0u;
            // 0x3ac6f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3AC6F4u;
        goto label_3ac6f4;
    }
    ctx->pc = 0x3AC6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC6ECu;
            // 0x3ac6f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AC6F4u;
label_3ac6f4:
    // 0x3ac6f4: 0x0  nop
    ctx->pc = 0x3ac6f4u;
    // NOP
label_3ac6f8:
    // 0x3ac6f8: 0x0  nop
    ctx->pc = 0x3ac6f8u;
    // NOP
label_3ac6fc:
    // 0x3ac6fc: 0x0  nop
    ctx->pc = 0x3ac6fcu;
    // NOP
label_3ac700:
    // 0x3ac700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3ac700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3ac704:
    // 0x3ac704: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ac704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3ac708:
    // 0x3ac708: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ac708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3ac70c:
    // 0x3ac70c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ac70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ac710:
    // 0x3ac710: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ac710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ac714:
    // 0x3ac714: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ac714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ac718:
    // 0x3ac718: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3ac718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ac71c:
    // 0x3ac71c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ac71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ac720:
    // 0x3ac720: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3ac720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ac724:
    // 0x3ac724: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x3ac724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ac728:
    // 0x3ac728: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3ac728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3ac72c:
    // 0x3ac72c: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x3ac72cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_3ac730:
    // 0x3ac730: 0x8c630d70  lw          $v1, 0xD70($v1)
    ctx->pc = 0x3ac730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3440)));
label_3ac734:
    // 0x3ac734: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3ac734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3ac738:
    // 0x3ac738: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3ac738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3ac73c:
    // 0x3ac73c: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x3ac73cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3ac740:
    // 0x3ac740: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3ac740u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3ac744:
    // 0x3ac744: 0x90630108  lbu         $v1, 0x108($v1)
    ctx->pc = 0x3ac744u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 264)));
label_3ac748:
    // 0x3ac748: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x3ac748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_3ac74c:
    // 0x3ac74c: 0x18600017  blez        $v1, . + 4 + (0x17 << 2)
label_3ac750:
    if (ctx->pc == 0x3AC750u) {
        ctx->pc = 0x3AC750u;
            // 0x3ac750: 0x24900090  addiu       $s0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->pc = 0x3AC754u;
        goto label_3ac754;
    }
    ctx->pc = 0x3AC74Cu;
    {
        const bool branch_taken_0x3ac74c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3AC750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC74Cu;
            // 0x3ac750: 0x24900090  addiu       $s0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac74c) {
            ctx->pc = 0x3AC7ACu;
            goto label_3ac7ac;
        }
    }
    ctx->pc = 0x3AC754u;
label_3ac754:
    // 0x3ac754: 0x92620372  lbu         $v0, 0x372($s3)
    ctx->pc = 0x3ac754u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 882)));
label_3ac758:
    // 0x3ac758: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3ac75c:
    if (ctx->pc == 0x3AC75Cu) {
        ctx->pc = 0x3AC75Cu;
            // 0x3ac75c: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x3AC760u;
        goto label_3ac760;
    }
    ctx->pc = 0x3AC758u;
    {
        const bool branch_taken_0x3ac758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac758) {
            ctx->pc = 0x3AC75Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC758u;
            // 0x3ac75c: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AC794u;
            goto label_3ac794;
        }
    }
    ctx->pc = 0x3AC760u;
label_3ac760:
    // 0x3ac760: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ac760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ac764:
    // 0x3ac764: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3ac764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3ac768:
    // 0x3ac768: 0xc0506ac  jal         func_141AB0
label_3ac76c:
    if (ctx->pc == 0x3AC76Cu) {
        ctx->pc = 0x3AC76Cu;
            // 0x3ac76c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3AC770u;
        goto label_3ac770;
    }
    ctx->pc = 0x3AC768u;
    SET_GPR_U32(ctx, 31, 0x3AC770u);
    ctx->pc = 0x3AC76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC768u;
            // 0x3ac76c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC770u; }
        if (ctx->pc != 0x3AC770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC770u; }
        if (ctx->pc != 0x3AC770u) { return; }
    }
    ctx->pc = 0x3AC770u;
label_3ac770:
    // 0x3ac770: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ac770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ac774:
    // 0x3ac774: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ac774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ac778:
    // 0x3ac778: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ac778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ac77c:
    // 0x3ac77c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3ac77cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3ac780:
    // 0x3ac780: 0x320f809  jalr        $t9
label_3ac784:
    if (ctx->pc == 0x3AC784u) {
        ctx->pc = 0x3AC784u;
            // 0x3ac784: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3AC788u;
        goto label_3ac788;
    }
    ctx->pc = 0x3AC780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AC788u);
        ctx->pc = 0x3AC784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC780u;
            // 0x3ac784: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AC788u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AC788u; }
            if (ctx->pc != 0x3AC788u) { return; }
        }
        }
    }
    ctx->pc = 0x3AC788u;
label_3ac788:
    // 0x3ac788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ac788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ac78c:
    // 0x3ac78c: 0xa2620372  sb          $v0, 0x372($s3)
    ctx->pc = 0x3ac78cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 882), (uint8_t)GPR_U32(ctx, 2));
label_3ac790:
    // 0x3ac790: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x3ac790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3ac794:
    // 0x3ac794: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ac794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ac798:
    // 0x3ac798: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x3ac798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3ac79c:
    // 0x3ac79c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3ac79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ac7a0:
    // 0x3ac7a0: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x3ac7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ac7a4:
    // 0x3ac7a4: 0xc0ebadc  jal         func_3AEB70
label_3ac7a8:
    if (ctx->pc == 0x3AC7A8u) {
        ctx->pc = 0x3AC7A8u;
            // 0x3ac7a8: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AC7ACu;
        goto label_3ac7ac;
    }
    ctx->pc = 0x3AC7A4u;
    SET_GPR_U32(ctx, 31, 0x3AC7ACu);
    ctx->pc = 0x3AC7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC7A4u;
            // 0x3ac7a8: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AEB70u;
    if (runtime->hasFunction(0x3AEB70u)) {
        auto targetFn = runtime->lookupFunction(0x3AEB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC7ACu; }
        if (ctx->pc != 0x3AC7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AEB70_0x3aeb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC7ACu; }
        if (ctx->pc != 0x3AC7ACu) { return; }
    }
    ctx->pc = 0x3AC7ACu;
label_3ac7ac:
    // 0x3ac7ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ac7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3ac7b0:
    // 0x3ac7b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ac7b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ac7b4:
    // 0x3ac7b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ac7b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ac7b8:
    // 0x3ac7b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ac7b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac7bc:
    // 0x3ac7bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ac7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ac7c0:
    // 0x3ac7c0: 0x3e00008  jr          $ra
label_3ac7c4:
    if (ctx->pc == 0x3AC7C4u) {
        ctx->pc = 0x3AC7C4u;
            // 0x3ac7c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3AC7C8u;
        goto label_3ac7c8;
    }
    ctx->pc = 0x3AC7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC7C0u;
            // 0x3ac7c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AC7C8u;
label_3ac7c8:
    // 0x3ac7c8: 0x0  nop
    ctx->pc = 0x3ac7c8u;
    // NOP
label_3ac7cc:
    // 0x3ac7cc: 0x0  nop
    ctx->pc = 0x3ac7ccu;
    // NOP
label_3ac7d0:
    // 0x3ac7d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ac7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ac7d4:
    // 0x3ac7d4: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3ac7d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ac7d8:
    // 0x3ac7d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ac7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ac7dc:
    // 0x3ac7dc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3ac7dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ac7e0:
    // 0x3ac7e0: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x3ac7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ac7e4:
    // 0x3ac7e4: 0x640a0001  daddiu      $t2, $zero, 0x1
    ctx->pc = 0x3ac7e4u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ac7e8:
    // 0x3ac7e8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3ac7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3ac7ec:
    // 0x3ac7ec: 0x83040  sll         $a2, $t0, 1
    ctx->pc = 0x3ac7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_3ac7f0:
    // 0x3ac7f0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3ac7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ac7f4:
    // 0x3ac7f4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x3ac7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_3ac7f8:
    // 0x3ac7f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3ac7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3ac7fc:
    // 0x3ac7fc: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x3ac7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_3ac800:
    // 0x3ac800: 0x906300e4  lbu         $v1, 0xE4($v1)
    ctx->pc = 0x3ac800u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3ac804:
    // 0x3ac804: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x3ac804u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_3ac808:
    // 0x3ac808: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3ac808u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3ac80c:
    // 0x3ac80c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3ac80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3ac810:
    // 0x3ac810: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3ac810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3ac814:
    // 0x3ac814: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_3ac818:
    if (ctx->pc == 0x3AC818u) {
        ctx->pc = 0x3AC818u;
            // 0x3ac818: 0x24a90090  addiu       $t1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->pc = 0x3AC81Cu;
        goto label_3ac81c;
    }
    ctx->pc = 0x3AC814u;
    {
        const bool branch_taken_0x3ac814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC814u;
            // 0x3ac818: 0x24a90090  addiu       $t1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac814) {
            ctx->pc = 0x3AC820u;
            goto label_3ac820;
        }
    }
    ctx->pc = 0x3AC81Cu;
label_3ac81c:
    // 0x3ac81c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ac81cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac820:
    // 0x3ac820: 0x51400006  beql        $t2, $zero, . + 4 + (0x6 << 2)
label_3ac824:
    if (ctx->pc == 0x3AC824u) {
        ctx->pc = 0x3AC824u;
            // 0x3ac824: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3AC828u;
        goto label_3ac828;
    }
    ctx->pc = 0x3AC820u;
    {
        const bool branch_taken_0x3ac820 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac820) {
            ctx->pc = 0x3AC824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC820u;
            // 0x3ac824: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AC83Cu;
            goto label_3ac83c;
        }
    }
    ctx->pc = 0x3AC828u;
label_3ac828:
    // 0x3ac828: 0x8d660010  lw          $a2, 0x10($t3)
    ctx->pc = 0x3ac828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
label_3ac82c:
    // 0x3ac82c: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x3ac82cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_3ac830:
    // 0x3ac830: 0xc0eb8a4  jal         func_3AE290
label_3ac834:
    if (ctx->pc == 0x3AC834u) {
        ctx->pc = 0x3AC834u;
            // 0x3ac834: 0x8d65000c  lw          $a1, 0xC($t3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
        ctx->pc = 0x3AC838u;
        goto label_3ac838;
    }
    ctx->pc = 0x3AC830u;
    SET_GPR_U32(ctx, 31, 0x3AC838u);
    ctx->pc = 0x3AC834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC830u;
            // 0x3ac834: 0x8d65000c  lw          $a1, 0xC($t3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AE290u;
    if (runtime->hasFunction(0x3AE290u)) {
        auto targetFn = runtime->lookupFunction(0x3AE290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC838u; }
        if (ctx->pc != 0x3AC838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AE290_0x3ae290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC838u; }
        if (ctx->pc != 0x3AC838u) { return; }
    }
    ctx->pc = 0x3AC838u;
label_3ac838:
    // 0x3ac838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ac838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ac83c:
    // 0x3ac83c: 0x3e00008  jr          $ra
label_3ac840:
    if (ctx->pc == 0x3AC840u) {
        ctx->pc = 0x3AC840u;
            // 0x3ac840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3AC844u;
        goto label_3ac844;
    }
    ctx->pc = 0x3AC83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC83Cu;
            // 0x3ac840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AC844u;
label_3ac844:
    // 0x3ac844: 0x0  nop
    ctx->pc = 0x3ac844u;
    // NOP
label_3ac848:
    // 0x3ac848: 0x0  nop
    ctx->pc = 0x3ac848u;
    // NOP
label_3ac84c:
    // 0x3ac84c: 0x0  nop
    ctx->pc = 0x3ac84cu;
    // NOP
label_3ac850:
    // 0x3ac850: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3ac850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3ac854:
    // 0x3ac854: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3ac854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3ac858:
    // 0x3ac858: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3ac858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3ac85c:
    // 0x3ac85c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3ac85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3ac860:
    // 0x3ac860: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ac860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3ac864:
    // 0x3ac864: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ac864u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ac868:
    // 0x3ac868: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ac868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3ac86c:
    // 0x3ac86c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ac86cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ac870:
    // 0x3ac870: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ac870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ac874:
    // 0x3ac874: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3ac874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ac878:
    // 0x3ac878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ac878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ac87c:
    // 0x3ac87c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ac87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ac880:
    // 0x3ac880: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3ac880u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ac884:
    // 0x3ac884: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3ac884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3ac888:
    // 0x3ac888: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x3ac888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ac88c:
    // 0x3ac88c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3ac88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3ac890:
    // 0x3ac890: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3ac890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3ac894:
    // 0x3ac894: 0x8c840d70  lw          $a0, 0xD70($a0)
    ctx->pc = 0x3ac894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_3ac898:
    // 0x3ac898: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x3ac898u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_3ac89c:
    // 0x3ac89c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3ac89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3ac8a0:
    // 0x3ac8a0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3ac8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3ac8a4:
    // 0x3ac8a4: 0x90960108  lbu         $s6, 0x108($a0)
    ctx->pc = 0x3ac8a4u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 264)));
label_3ac8a8:
    // 0x3ac8a8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3ac8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3ac8ac:
    // 0x3ac8ac: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3ac8acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3ac8b0:
    // 0x3ac8b0: 0x2a52021  addu        $a0, $s5, $a1
    ctx->pc = 0x3ac8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_3ac8b4:
    // 0x3ac8b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_3ac8b8:
    if (ctx->pc == 0x3AC8B8u) {
        ctx->pc = 0x3AC8B8u;
            // 0x3ac8b8: 0x24920090  addiu       $s2, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->pc = 0x3AC8BCu;
        goto label_3ac8bc;
    }
    ctx->pc = 0x3AC8B4u;
    {
        const bool branch_taken_0x3ac8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC8B4u;
            // 0x3ac8b8: 0x24920090  addiu       $s2, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac8b4) {
            ctx->pc = 0x3AC8D0u;
            goto label_3ac8d0;
        }
    }
    ctx->pc = 0x3AC8BCu;
label_3ac8bc:
    // 0x3ac8bc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3ac8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ac8c0:
    // 0x3ac8c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3ac8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3ac8c4:
    // 0x3ac8c4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_3ac8c8:
    if (ctx->pc == 0x3AC8C8u) {
        ctx->pc = 0x3AC8C8u;
            // 0x3ac8c8: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x3AC8CCu;
        goto label_3ac8cc;
    }
    ctx->pc = 0x3AC8C4u;
    {
        const bool branch_taken_0x3ac8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac8c4) {
            ctx->pc = 0x3AC8C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC8C4u;
            // 0x3ac8c8: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AC8D4u;
            goto label_3ac8d4;
        }
    }
    ctx->pc = 0x3AC8CCu;
label_3ac8cc:
    // 0x3ac8cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ac8ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac8d0:
    // 0x3ac8d0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x3ac8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3ac8d4:
    // 0x3ac8d4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3ac8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3ac8d8:
    // 0x3ac8d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ac8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ac8dc:
    // 0x3ac8dc: 0x906300e4  lbu         $v1, 0xE4($v1)
    ctx->pc = 0x3ac8dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3ac8e0:
    // 0x3ac8e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3ac8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3ac8e4:
    // 0x3ac8e4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_3ac8e8:
    if (ctx->pc == 0x3AC8E8u) {
        ctx->pc = 0x3AC8E8u;
            // 0x3ac8e8: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3AC8ECu;
        goto label_3ac8ec;
    }
    ctx->pc = 0x3AC8E4u;
    {
        const bool branch_taken_0x3ac8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC8E4u;
            // 0x3ac8e8: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac8e4) {
            ctx->pc = 0x3AC8F0u;
            goto label_3ac8f0;
        }
    }
    ctx->pc = 0x3AC8ECu;
label_3ac8ec:
    // 0x3ac8ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ac8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac8f0:
    // 0x3ac8f0: 0x92a30372  lbu         $v1, 0x372($s5)
    ctx->pc = 0x3ac8f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 882)));
label_3ac8f4:
    // 0x3ac8f4: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
label_3ac8f8:
    if (ctx->pc == 0x3AC8F8u) {
        ctx->pc = 0x3AC8F8u;
            // 0x3ac8f8: 0x32c300ff  andi        $v1, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3AC8FCu;
        goto label_3ac8fc;
    }
    ctx->pc = 0x3AC8F4u;
    {
        const bool branch_taken_0x3ac8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac8f4) {
            ctx->pc = 0x3AC8F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC8F4u;
            // 0x3ac8f8: 0x32c300ff  andi        $v1, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AC930u;
            goto label_3ac930;
        }
    }
    ctx->pc = 0x3AC8FCu;
label_3ac8fc:
    // 0x3ac8fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ac8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ac900:
    // 0x3ac900: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3ac900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3ac904:
    // 0x3ac904: 0xc0506ac  jal         func_141AB0
label_3ac908:
    if (ctx->pc == 0x3AC908u) {
        ctx->pc = 0x3AC908u;
            // 0x3ac908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AC90Cu;
        goto label_3ac90c;
    }
    ctx->pc = 0x3AC904u;
    SET_GPR_U32(ctx, 31, 0x3AC90Cu);
    ctx->pc = 0x3AC908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC904u;
            // 0x3ac908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC90Cu; }
        if (ctx->pc != 0x3AC90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC90Cu; }
        if (ctx->pc != 0x3AC90Cu) { return; }
    }
    ctx->pc = 0x3AC90Cu;
label_3ac90c:
    // 0x3ac90c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ac90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ac910:
    // 0x3ac910: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ac910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ac914:
    // 0x3ac914: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ac914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ac918:
    // 0x3ac918: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3ac918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3ac91c:
    // 0x3ac91c: 0x320f809  jalr        $t9
label_3ac920:
    if (ctx->pc == 0x3AC920u) {
        ctx->pc = 0x3AC920u;
            // 0x3ac920: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3AC924u;
        goto label_3ac924;
    }
    ctx->pc = 0x3AC91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AC924u);
        ctx->pc = 0x3AC920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC91Cu;
            // 0x3ac920: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AC924u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AC924u; }
            if (ctx->pc != 0x3AC924u) { return; }
        }
        }
    }
    ctx->pc = 0x3AC924u;
label_3ac924:
    // 0x3ac924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ac924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ac928:
    // 0x3ac928: 0xa2a30372  sb          $v1, 0x372($s5)
    ctx->pc = 0x3ac928u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 882), (uint8_t)GPR_U32(ctx, 3));
label_3ac92c:
    // 0x3ac92c: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x3ac92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_3ac930:
    // 0x3ac930: 0x5860000a  blezl       $v1, . + 4 + (0xA << 2)
label_3ac934:
    if (ctx->pc == 0x3AC934u) {
        ctx->pc = 0x3AC934u;
            // 0x3ac934: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3AC938u;
        goto label_3ac938;
    }
    ctx->pc = 0x3AC930u;
    {
        const bool branch_taken_0x3ac930 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3ac930) {
            ctx->pc = 0x3AC934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC930u;
            // 0x3ac934: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AC95Cu;
            goto label_3ac95c;
        }
    }
    ctx->pc = 0x3AC938u;
label_3ac938:
    // 0x3ac938: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3ac938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ac93c:
    // 0x3ac93c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ac93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ac940:
    // 0x3ac940: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x3ac940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3ac944:
    // 0x3ac944: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3ac944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ac948:
    // 0x3ac948: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x3ac948u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ac94c:
    // 0x3ac94c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3ac94cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ac950:
    // 0x3ac950: 0xc0eb9a0  jal         func_3AE680
label_3ac954:
    if (ctx->pc == 0x3AC954u) {
        ctx->pc = 0x3AC954u;
            // 0x3ac954: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AC958u;
        goto label_3ac958;
    }
    ctx->pc = 0x3AC950u;
    SET_GPR_U32(ctx, 31, 0x3AC958u);
    ctx->pc = 0x3AC954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC950u;
            // 0x3ac954: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AE680u;
    if (runtime->hasFunction(0x3AE680u)) {
        auto targetFn = runtime->lookupFunction(0x3AE680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC958u; }
        if (ctx->pc != 0x3AC958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AE680_0x3ae680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC958u; }
        if (ctx->pc != 0x3AC958u) { return; }
    }
    ctx->pc = 0x3AC958u;
label_3ac958:
    // 0x3ac958: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x3ac958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3ac95c:
    // 0x3ac95c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x3ac95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3ac960:
    // 0x3ac960: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ac960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3ac964:
    // 0x3ac964: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_3ac968:
    if (ctx->pc == 0x3AC968u) {
        ctx->pc = 0x3AC968u;
            // 0x3ac968: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x3AC96Cu;
        goto label_3ac96c;
    }
    ctx->pc = 0x3AC964u;
    {
        const bool branch_taken_0x3ac964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac964) {
            ctx->pc = 0x3AC968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC964u;
            // 0x3ac968: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AC978u;
            goto label_3ac978;
        }
    }
    ctx->pc = 0x3AC96Cu;
label_3ac96c:
    // 0x3ac96c: 0xc110754  jal         func_441D50
label_3ac970:
    if (ctx->pc == 0x3AC970u) {
        ctx->pc = 0x3AC970u;
            // 0x3ac970: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->pc = 0x3AC974u;
        goto label_3ac974;
    }
    ctx->pc = 0x3AC96Cu;
    SET_GPR_U32(ctx, 31, 0x3AC974u);
    ctx->pc = 0x3AC970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC96Cu;
            // 0x3ac970: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC974u; }
        if (ctx->pc != 0x3AC974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AC974u; }
        if (ctx->pc != 0x3AC974u) { return; }
    }
    ctx->pc = 0x3AC974u;
label_3ac974:
    // 0x3ac974: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3ac974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3ac978:
    // 0x3ac978: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3ac978u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ac97c:
    // 0x3ac97c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ac97cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ac980:
    // 0x3ac980: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ac980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ac984:
    // 0x3ac984: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ac984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ac988:
    // 0x3ac988: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ac988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ac98c:
    // 0x3ac98c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ac98cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac990:
    // 0x3ac990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ac990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ac994:
    // 0x3ac994: 0x3e00008  jr          $ra
label_3ac998:
    if (ctx->pc == 0x3AC998u) {
        ctx->pc = 0x3AC998u;
            // 0x3ac998: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3AC99Cu;
        goto label_3ac99c;
    }
    ctx->pc = 0x3AC994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AC994u;
            // 0x3ac998: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AC99Cu;
label_3ac99c:
    // 0x3ac99c: 0x0  nop
    ctx->pc = 0x3ac99cu;
    // NOP
label_3ac9a0:
    // 0x3ac9a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3ac9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3ac9a4:
    // 0x3ac9a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3ac9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3ac9a8:
    // 0x3ac9a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3ac9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3ac9ac:
    // 0x3ac9ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3ac9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3ac9b0:
    // 0x3ac9b0: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x3ac9b0u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ac9b4:
    // 0x3ac9b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ac9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3ac9b8:
    // 0x3ac9b8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ac9b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ac9bc:
    // 0x3ac9bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ac9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3ac9c0:
    // 0x3ac9c0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ac9c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ac9c4:
    // 0x3ac9c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ac9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ac9c8:
    // 0x3ac9c8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3ac9c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ac9cc:
    // 0x3ac9cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ac9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ac9d0:
    // 0x3ac9d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ac9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ac9d4:
    // 0x3ac9d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3ac9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3ac9d8:
    // 0x3ac9d8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3ac9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3ac9dc:
    // 0x3ac9dc: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x3ac9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ac9e0:
    // 0x3ac9e0: 0x8c630d70  lw          $v1, 0xD70($v1)
    ctx->pc = 0x3ac9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3440)));
label_3ac9e4:
    // 0x3ac9e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ac9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3ac9e8:
    // 0x3ac9e8: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x3ac9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_3ac9ec:
    // 0x3ac9ec: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3ac9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3ac9f0:
    // 0x3ac9f0: 0x90700108  lbu         $s0, 0x108($v1)
    ctx->pc = 0x3ac9f0u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 264)));
label_3ac9f4:
    // 0x3ac9f4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3ac9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3ac9f8:
    // 0x3ac9f8: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x3ac9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3ac9fc:
    // 0x3ac9fc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3ac9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3aca00:
    // 0x3aca00: 0x2a41821  addu        $v1, $s5, $a0
    ctx->pc = 0x3aca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_3aca04:
    // 0x3aca04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3aca08:
    if (ctx->pc == 0x3ACA08u) {
        ctx->pc = 0x3ACA08u;
            // 0x3aca08: 0x24720090  addiu       $s2, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->pc = 0x3ACA0Cu;
        goto label_3aca0c;
    }
    ctx->pc = 0x3ACA04u;
    {
        const bool branch_taken_0x3aca04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACA04u;
            // 0x3aca08: 0x24720090  addiu       $s2, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aca04) {
            ctx->pc = 0x3ACA20u;
            goto label_3aca20;
        }
    }
    ctx->pc = 0x3ACA0Cu;
label_3aca0c:
    // 0x3aca0c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3aca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3aca10:
    // 0x3aca10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3aca10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3aca14:
    // 0x3aca14: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3aca18:
    if (ctx->pc == 0x3ACA18u) {
        ctx->pc = 0x3ACA18u;
            // 0x3aca18: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x3ACA1Cu;
        goto label_3aca1c;
    }
    ctx->pc = 0x3ACA14u;
    {
        const bool branch_taken_0x3aca14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aca14) {
            ctx->pc = 0x3ACA18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACA14u;
            // 0x3aca18: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ACA24u;
            goto label_3aca24;
        }
    }
    ctx->pc = 0x3ACA1Cu;
label_3aca1c:
    // 0x3aca1c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3aca1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aca20:
    // 0x3aca20: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3aca20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3aca24:
    // 0x3aca24: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3aca24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3aca28:
    // 0x3aca28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3aca28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3aca2c:
    // 0x3aca2c: 0x904200e4  lbu         $v0, 0xE4($v0)
    ctx->pc = 0x3aca2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 228)));
label_3aca30:
    // 0x3aca30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3aca30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3aca34:
    // 0x3aca34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3aca38:
    if (ctx->pc == 0x3ACA38u) {
        ctx->pc = 0x3ACA38u;
            // 0x3aca38: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3ACA3Cu;
        goto label_3aca3c;
    }
    ctx->pc = 0x3ACA34u;
    {
        const bool branch_taken_0x3aca34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACA34u;
            // 0x3aca38: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aca34) {
            ctx->pc = 0x3ACA40u;
            goto label_3aca40;
        }
    }
    ctx->pc = 0x3ACA3Cu;
label_3aca3c:
    // 0x3aca3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3aca3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aca40:
    // 0x3aca40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3aca40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3aca44:
    // 0x3aca44: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3aca44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3aca48:
    // 0x3aca48: 0xc0506ac  jal         func_141AB0
label_3aca4c:
    if (ctx->pc == 0x3ACA4Cu) {
        ctx->pc = 0x3ACA4Cu;
            // 0x3aca4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ACA50u;
        goto label_3aca50;
    }
    ctx->pc = 0x3ACA48u;
    SET_GPR_U32(ctx, 31, 0x3ACA50u);
    ctx->pc = 0x3ACA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACA48u;
            // 0x3aca4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACA50u; }
        if (ctx->pc != 0x3ACA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACA50u; }
        if (ctx->pc != 0x3ACA50u) { return; }
    }
    ctx->pc = 0x3ACA50u;
label_3aca50:
    // 0x3aca50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3aca50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3aca54:
    // 0x3aca54: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3aca54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3aca58:
    // 0x3aca58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3aca58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3aca5c:
    // 0x3aca5c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3aca5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3aca60:
    // 0x3aca60: 0x320f809  jalr        $t9
label_3aca64:
    if (ctx->pc == 0x3ACA64u) {
        ctx->pc = 0x3ACA64u;
            // 0x3aca64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3ACA68u;
        goto label_3aca68;
    }
    ctx->pc = 0x3ACA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ACA68u);
        ctx->pc = 0x3ACA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACA60u;
            // 0x3aca64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ACA68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ACA68u; }
            if (ctx->pc != 0x3ACA68u) { return; }
        }
        }
    }
    ctx->pc = 0x3ACA68u;
label_3aca68:
    // 0x3aca68: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x3aca68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3aca6c:
    // 0x3aca6c: 0x5a00000a  blezl       $s0, . + 4 + (0xA << 2)
label_3aca70:
    if (ctx->pc == 0x3ACA70u) {
        ctx->pc = 0x3ACA70u;
            // 0x3aca70: 0x32c300ff  andi        $v1, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3ACA74u;
        goto label_3aca74;
    }
    ctx->pc = 0x3ACA6Cu;
    {
        const bool branch_taken_0x3aca6c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x3aca6c) {
            ctx->pc = 0x3ACA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACA6Cu;
            // 0x3aca70: 0x32c300ff  andi        $v1, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ACA98u;
            goto label_3aca98;
        }
    }
    ctx->pc = 0x3ACA74u;
label_3aca74:
    // 0x3aca74: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3aca74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3aca78:
    // 0x3aca78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3aca78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3aca7c:
    // 0x3aca7c: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x3aca7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3aca80:
    // 0x3aca80: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3aca80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3aca84:
    // 0x3aca84: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x3aca84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3aca88:
    // 0x3aca88: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3aca88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aca8c:
    // 0x3aca8c: 0xc0eb9a0  jal         func_3AE680
label_3aca90:
    if (ctx->pc == 0x3ACA90u) {
        ctx->pc = 0x3ACA90u;
            // 0x3aca90: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ACA94u;
        goto label_3aca94;
    }
    ctx->pc = 0x3ACA8Cu;
    SET_GPR_U32(ctx, 31, 0x3ACA94u);
    ctx->pc = 0x3ACA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACA8Cu;
            // 0x3aca90: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AE680u;
    if (runtime->hasFunction(0x3AE680u)) {
        auto targetFn = runtime->lookupFunction(0x3AE680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACA94u; }
        if (ctx->pc != 0x3ACA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AE680_0x3ae680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACA94u; }
        if (ctx->pc != 0x3ACA94u) { return; }
    }
    ctx->pc = 0x3ACA94u;
label_3aca94:
    // 0x3aca94: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x3aca94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_3aca98:
    // 0x3aca98: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3aca98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3aca9c:
    // 0x3aca9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3aca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3acaa0:
    // 0x3acaa0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3acaa4:
    if (ctx->pc == 0x3ACAA4u) {
        ctx->pc = 0x3ACAA8u;
        goto label_3acaa8;
    }
    ctx->pc = 0x3ACAA0u;
    {
        const bool branch_taken_0x3acaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3acaa0) {
            ctx->pc = 0x3ACAB0u;
            goto label_3acab0;
        }
    }
    ctx->pc = 0x3ACAA8u;
label_3acaa8:
    // 0x3acaa8: 0xc110754  jal         func_441D50
label_3acaac:
    if (ctx->pc == 0x3ACAACu) {
        ctx->pc = 0x3ACAACu;
            // 0x3acaac: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->pc = 0x3ACAB0u;
        goto label_3acab0;
    }
    ctx->pc = 0x3ACAA8u;
    SET_GPR_U32(ctx, 31, 0x3ACAB0u);
    ctx->pc = 0x3ACAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACAA8u;
            // 0x3acaac: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACAB0u; }
        if (ctx->pc != 0x3ACAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACAB0u; }
        if (ctx->pc != 0x3ACAB0u) { return; }
    }
    ctx->pc = 0x3ACAB0u;
label_3acab0:
    // 0x3acab0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3acab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3acab4:
    // 0x3acab4: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3acab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3acab8:
    // 0x3acab8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3acab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3acabc:
    // 0x3acabc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3acabcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3acac0:
    // 0x3acac0: 0x320f809  jalr        $t9
label_3acac4:
    if (ctx->pc == 0x3ACAC4u) {
        ctx->pc = 0x3ACAC8u;
        goto label_3acac8;
    }
    ctx->pc = 0x3ACAC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ACAC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ACAC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ACAC8u; }
            if (ctx->pc != 0x3ACAC8u) { return; }
        }
        }
    }
    ctx->pc = 0x3ACAC8u;
label_3acac8:
    // 0x3acac8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_3acacc:
    if (ctx->pc == 0x3ACACCu) {
        ctx->pc = 0x3ACAD0u;
        goto label_3acad0;
    }
    ctx->pc = 0x3ACAC8u;
    {
        const bool branch_taken_0x3acac8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3acac8) {
            ctx->pc = 0x3ACAECu;
            goto label_3acaec;
        }
    }
    ctx->pc = 0x3ACAD0u;
label_3acad0:
    // 0x3acad0: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3acad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3acad4:
    // 0x3acad4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3acad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3acad8:
    // 0x3acad8: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x3acad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3acadc:
    // 0x3acadc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3acadcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3acae0:
    // 0x3acae0: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x3acae0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3acae4:
    // 0x3acae4: 0xc0eb8a4  jal         func_3AE290
label_3acae8:
    if (ctx->pc == 0x3ACAE8u) {
        ctx->pc = 0x3ACAE8u;
            // 0x3acae8: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ACAECu;
        goto label_3acaec;
    }
    ctx->pc = 0x3ACAE4u;
    SET_GPR_U32(ctx, 31, 0x3ACAECu);
    ctx->pc = 0x3ACAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACAE4u;
            // 0x3acae8: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AE290u;
    if (runtime->hasFunction(0x3AE290u)) {
        auto targetFn = runtime->lookupFunction(0x3AE290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACAECu; }
        if (ctx->pc != 0x3ACAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AE290_0x3ae290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACAECu; }
        if (ctx->pc != 0x3ACAECu) { return; }
    }
    ctx->pc = 0x3ACAECu;
label_3acaec:
    // 0x3acaec: 0x5a00001d  blezl       $s0, . + 4 + (0x1D << 2)
label_3acaf0:
    if (ctx->pc == 0x3ACAF0u) {
        ctx->pc = 0x3ACAF0u;
            // 0x3acaf0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x3ACAF4u;
        goto label_3acaf4;
    }
    ctx->pc = 0x3ACAECu;
    {
        const bool branch_taken_0x3acaec = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x3acaec) {
            ctx->pc = 0x3ACAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACAECu;
            // 0x3acaf0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ACB64u;
            goto label_3acb64;
        }
    }
    ctx->pc = 0x3ACAF4u;
label_3acaf4:
    // 0x3acaf4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3acaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3acaf8:
    // 0x3acaf8: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3acaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3acafc:
    // 0x3acafc: 0xc0506ac  jal         func_141AB0
label_3acb00:
    if (ctx->pc == 0x3ACB00u) {
        ctx->pc = 0x3ACB00u;
            // 0x3acb00: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3ACB04u;
        goto label_3acb04;
    }
    ctx->pc = 0x3ACAFCu;
    SET_GPR_U32(ctx, 31, 0x3ACB04u);
    ctx->pc = 0x3ACB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACAFCu;
            // 0x3acb00: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACB04u; }
        if (ctx->pc != 0x3ACB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACB04u; }
        if (ctx->pc != 0x3ACB04u) { return; }
    }
    ctx->pc = 0x3ACB04u;
label_3acb04:
    // 0x3acb04: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3acb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3acb08:
    // 0x3acb08: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3acb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3acb0c:
    // 0x3acb0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3acb0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3acb10:
    // 0x3acb10: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3acb10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3acb14:
    // 0x3acb14: 0x320f809  jalr        $t9
label_3acb18:
    if (ctx->pc == 0x3ACB18u) {
        ctx->pc = 0x3ACB18u;
            // 0x3acb18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3ACB1Cu;
        goto label_3acb1c;
    }
    ctx->pc = 0x3ACB14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ACB1Cu);
        ctx->pc = 0x3ACB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACB14u;
            // 0x3acb18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ACB1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ACB1Cu; }
            if (ctx->pc != 0x3ACB1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3ACB1Cu;
label_3acb1c:
    // 0x3acb1c: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3acb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3acb20:
    // 0x3acb20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3acb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3acb24:
    // 0x3acb24: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x3acb24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3acb28:
    // 0x3acb28: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3acb28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3acb2c:
    // 0x3acb2c: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x3acb2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3acb30:
    // 0x3acb30: 0xc0ebadc  jal         func_3AEB70
label_3acb34:
    if (ctx->pc == 0x3ACB34u) {
        ctx->pc = 0x3ACB34u;
            // 0x3acb34: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ACB38u;
        goto label_3acb38;
    }
    ctx->pc = 0x3ACB30u;
    SET_GPR_U32(ctx, 31, 0x3ACB38u);
    ctx->pc = 0x3ACB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACB30u;
            // 0x3acb34: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AEB70u;
    if (runtime->hasFunction(0x3AEB70u)) {
        auto targetFn = runtime->lookupFunction(0x3AEB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACB38u; }
        if (ctx->pc != 0x3ACB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AEB70_0x3aeb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACB38u; }
        if (ctx->pc != 0x3ACB38u) { return; }
    }
    ctx->pc = 0x3ACB38u;
label_3acb38:
    // 0x3acb38: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3acb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3acb3c:
    // 0x3acb3c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3acb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3acb40:
    // 0x3acb40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3acb40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3acb44:
    // 0x3acb44: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3acb44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3acb48:
    // 0x3acb48: 0x320f809  jalr        $t9
label_3acb4c:
    if (ctx->pc == 0x3ACB4Cu) {
        ctx->pc = 0x3ACB50u;
        goto label_3acb50;
    }
    ctx->pc = 0x3ACB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ACB50u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ACB50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ACB50u; }
            if (ctx->pc != 0x3ACB50u) { return; }
        }
        }
    }
    ctx->pc = 0x3ACB50u;
label_3acb50:
    // 0x3acb50: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3acb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3acb54:
    // 0x3acb54: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3acb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3acb58:
    // 0x3acb58: 0xc0506ac  jal         func_141AB0
label_3acb5c:
    if (ctx->pc == 0x3ACB5Cu) {
        ctx->pc = 0x3ACB5Cu;
            // 0x3acb5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ACB60u;
        goto label_3acb60;
    }
    ctx->pc = 0x3ACB58u;
    SET_GPR_U32(ctx, 31, 0x3ACB60u);
    ctx->pc = 0x3ACB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACB58u;
            // 0x3acb5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACB60u; }
        if (ctx->pc != 0x3ACB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACB60u; }
        if (ctx->pc != 0x3ACB60u) { return; }
    }
    ctx->pc = 0x3ACB60u;
label_3acb60:
    // 0x3acb60: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3acb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3acb64:
    // 0x3acb64: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3acb64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3acb68:
    // 0x3acb68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3acb68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3acb6c:
    // 0x3acb6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3acb6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3acb70:
    // 0x3acb70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3acb70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3acb74:
    // 0x3acb74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3acb74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3acb78:
    // 0x3acb78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3acb78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3acb7c:
    // 0x3acb7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3acb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3acb80:
    // 0x3acb80: 0x3e00008  jr          $ra
label_3acb84:
    if (ctx->pc == 0x3ACB84u) {
        ctx->pc = 0x3ACB84u;
            // 0x3acb84: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3ACB88u;
        goto label_3acb88;
    }
    ctx->pc = 0x3ACB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACB80u;
            // 0x3acb84: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ACB88u;
label_3acb88:
    // 0x3acb88: 0x0  nop
    ctx->pc = 0x3acb88u;
    // NOP
label_3acb8c:
    // 0x3acb8c: 0x0  nop
    ctx->pc = 0x3acb8cu;
    // NOP
label_3acb90:
    // 0x3acb90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3acb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3acb94:
    // 0x3acb94: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3acb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3acb98:
    // 0x3acb98: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3acb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3acb9c:
    // 0x3acb9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3acb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3acba0:
    // 0x3acba0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3acba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3acba4:
    // 0x3acba4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3acba4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3acba8:
    // 0x3acba8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3acba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3acbac:
    // 0x3acbac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3acbacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3acbb0:
    // 0x3acbb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3acbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3acbb4:
    // 0x3acbb4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3acbb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3acbb8:
    // 0x3acbb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3acbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3acbbc:
    // 0x3acbbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3acbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3acbc0:
    // 0x3acbc0: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x3acbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3acbc4:
    // 0x3acbc4: 0x8c63f530  lw          $v1, -0xAD0($v1)
    ctx->pc = 0x3acbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964528)));
label_3acbc8:
    // 0x3acbc8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3acbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3acbcc:
    // 0x3acbcc: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x3acbccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_3acbd0:
    // 0x3acbd0: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x3acbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_3acbd4:
    // 0x3acbd4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x3acbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_3acbd8:
    // 0x3acbd8: 0x8ca40da0  lw          $a0, 0xDA0($a1)
    ctx->pc = 0x3acbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3488)));
label_3acbdc:
    // 0x3acbdc: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x3acbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3acbe0:
    // 0x3acbe0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3acbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3acbe4:
    // 0x3acbe4: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x3acbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_3acbe8:
    // 0x3acbe8: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x3acbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_3acbec:
    // 0x3acbec: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
label_3acbf0:
    if (ctx->pc == 0x3ACBF0u) {
        ctx->pc = 0x3ACBF0u;
            // 0x3acbf0: 0x24920090  addiu       $s2, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->pc = 0x3ACBF4u;
        goto label_3acbf4;
    }
    ctx->pc = 0x3ACBECu;
    {
        const bool branch_taken_0x3acbec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACBECu;
            // 0x3acbf0: 0x24920090  addiu       $s2, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acbec) {
            ctx->pc = 0x3ACD10u;
            goto label_3acd10;
        }
    }
    ctx->pc = 0x3ACBF4u;
label_3acbf4:
    // 0x3acbf4: 0x8ca40d70  lw          $a0, 0xD70($a1)
    ctx->pc = 0x3acbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3440)));
label_3acbf8:
    // 0x3acbf8: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x3acbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_3acbfc:
    // 0x3acbfc: 0x90850108  lbu         $a1, 0x108($a0)
    ctx->pc = 0x3acbfcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 264)));
label_3acc00:
    // 0x3acc00: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3acc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3acc04:
    // 0x3acc04: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_3acc08:
    if (ctx->pc == 0x3ACC08u) {
        ctx->pc = 0x3ACC08u;
            // 0x3acc08: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3ACC0Cu;
        goto label_3acc0c;
    }
    ctx->pc = 0x3ACC04u;
    {
        const bool branch_taken_0x3acc04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACC04u;
            // 0x3acc08: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc04) {
            ctx->pc = 0x3ACC20u;
            goto label_3acc20;
        }
    }
    ctx->pc = 0x3ACC0Cu;
label_3acc0c:
    // 0x3acc0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3acc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3acc10:
    // 0x3acc10: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3acc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3acc14:
    // 0x3acc14: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_3acc18:
    if (ctx->pc == 0x3ACC18u) {
        ctx->pc = 0x3ACC18u;
            // 0x3acc18: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x3ACC1Cu;
        goto label_3acc1c;
    }
    ctx->pc = 0x3ACC14u;
    {
        const bool branch_taken_0x3acc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3acc14) {
            ctx->pc = 0x3ACC18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACC14u;
            // 0x3acc18: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ACC24u;
            goto label_3acc24;
        }
    }
    ctx->pc = 0x3ACC1Cu;
label_3acc1c:
    // 0x3acc1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3acc1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3acc20:
    // 0x3acc20: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x3acc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3acc24:
    // 0x3acc24: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3acc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3acc28:
    // 0x3acc28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3acc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3acc2c:
    // 0x3acc2c: 0x906300e4  lbu         $v1, 0xE4($v1)
    ctx->pc = 0x3acc2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3acc30:
    // 0x3acc30: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3acc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3acc34:
    // 0x3acc34: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_3acc38:
    if (ctx->pc == 0x3ACC38u) {
        ctx->pc = 0x3ACC38u;
            // 0x3acc38: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3ACC3Cu;
        goto label_3acc3c;
    }
    ctx->pc = 0x3ACC34u;
    {
        const bool branch_taken_0x3acc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACC34u;
            // 0x3acc38: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc34) {
            ctx->pc = 0x3ACC40u;
            goto label_3acc40;
        }
    }
    ctx->pc = 0x3ACC3Cu;
label_3acc3c:
    // 0x3acc3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3acc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3acc40:
    // 0x3acc40: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3acc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3acc44:
    // 0x3acc44: 0x58600033  blezl       $v1, . + 4 + (0x33 << 2)
label_3acc48:
    if (ctx->pc == 0x3ACC48u) {
        ctx->pc = 0x3ACC48u;
            // 0x3acc48: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x3ACC4Cu;
        goto label_3acc4c;
    }
    ctx->pc = 0x3ACC44u;
    {
        const bool branch_taken_0x3acc44 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3acc44) {
            ctx->pc = 0x3ACC48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACC44u;
            // 0x3acc48: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ACD14u;
            goto label_3acd14;
        }
    }
    ctx->pc = 0x3ACC4Cu;
label_3acc4c:
    // 0x3acc4c: 0x92a20371  lbu         $v0, 0x371($s5)
    ctx->pc = 0x3acc4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 881)));
label_3acc50:
    // 0x3acc50: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3acc54:
    if (ctx->pc == 0x3ACC54u) {
        ctx->pc = 0x3ACC58u;
        goto label_3acc58;
    }
    ctx->pc = 0x3ACC50u;
    {
        const bool branch_taken_0x3acc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3acc50) {
            ctx->pc = 0x3ACC80u;
            goto label_3acc80;
        }
    }
    ctx->pc = 0x3ACC58u;
label_3acc58:
    // 0x3acc58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3acc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3acc5c:
    // 0x3acc5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3acc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3acc60:
    // 0x3acc60: 0xc05068c  jal         func_141A30
label_3acc64:
    if (ctx->pc == 0x3ACC64u) {
        ctx->pc = 0x3ACC64u;
            // 0x3acc64: 0xa2a20371  sb          $v0, 0x371($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 881), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3ACC68u;
        goto label_3acc68;
    }
    ctx->pc = 0x3ACC60u;
    SET_GPR_U32(ctx, 31, 0x3ACC68u);
    ctx->pc = 0x3ACC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACC60u;
            // 0x3acc64: 0xa2a20371  sb          $v0, 0x371($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 881), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACC68u; }
        if (ctx->pc != 0x3ACC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACC68u; }
        if (ctx->pc != 0x3ACC68u) { return; }
    }
    ctx->pc = 0x3ACC68u;
label_3acc68:
    // 0x3acc68: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3acc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3acc6c:
    // 0x3acc6c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3acc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3acc70:
    // 0x3acc70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3acc70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3acc74:
    // 0x3acc74: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3acc74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3acc78:
    // 0x3acc78: 0x320f809  jalr        $t9
label_3acc7c:
    if (ctx->pc == 0x3ACC7Cu) {
        ctx->pc = 0x3ACC7Cu;
            // 0x3acc7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3ACC80u;
        goto label_3acc80;
    }
    ctx->pc = 0x3ACC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ACC80u);
        ctx->pc = 0x3ACC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACC78u;
            // 0x3acc7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ACC80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ACC80u; }
            if (ctx->pc != 0x3ACC80u) { return; }
        }
        }
    }
    ctx->pc = 0x3ACC80u;
label_3acc80:
    // 0x3acc80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3acc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3acc84:
    // 0x3acc84: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3acc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3acc88:
    // 0x3acc88: 0x8c420960  lw          $v0, 0x960($v0)
    ctx->pc = 0x3acc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2400)));
label_3acc8c:
    // 0x3acc8c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3acc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_3acc90:
    // 0x3acc90: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3acc94:
    if (ctx->pc == 0x3ACC94u) {
        ctx->pc = 0x3ACC94u;
            // 0x3acc94: 0x8e85000c  lw          $a1, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x3ACC98u;
        goto label_3acc98;
    }
    ctx->pc = 0x3ACC90u;
    {
        const bool branch_taken_0x3acc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3acc90) {
            ctx->pc = 0x3ACC94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACC90u;
            // 0x3acc94: 0x8e85000c  lw          $a1, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ACCB8u;
            goto label_3accb8;
        }
    }
    ctx->pc = 0x3ACC98u;
label_3acc98:
    // 0x3acc98: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3acc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3acc9c:
    // 0x3acc9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3acc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3acca0:
    // 0x3acca0: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x3acca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3acca4:
    // 0x3acca4: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x3acca4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3acca8:
    // 0x3acca8: 0x9249000c  lbu         $t1, 0xC($s2)
    ctx->pc = 0x3acca8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
label_3accac:
    // 0x3accac: 0xc0eb844  jal         func_3AE110
label_3accb0:
    if (ctx->pc == 0x3ACCB0u) {
        ctx->pc = 0x3ACCB0u;
            // 0x3accb0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ACCB4u;
        goto label_3accb4;
    }
    ctx->pc = 0x3ACCACu;
    SET_GPR_U32(ctx, 31, 0x3ACCB4u);
    ctx->pc = 0x3ACCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACCACu;
            // 0x3accb0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AE110u;
    if (runtime->hasFunction(0x3AE110u)) {
        auto targetFn = runtime->lookupFunction(0x3AE110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACCB4u; }
        if (ctx->pc != 0x3ACCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AE110_0x3ae110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACCB4u; }
        if (ctx->pc != 0x3ACCB4u) { return; }
    }
    ctx->pc = 0x3ACCB4u;
label_3accb4:
    // 0x3accb4: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3accb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3accb8:
    // 0x3accb8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3accb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3accbc:
    // 0x3accbc: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x3accbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3accc0:
    // 0x3accc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3accc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3accc4:
    // 0x3accc4: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x3accc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3accc8:
    // 0x3accc8: 0xc0eb6fc  jal         func_3ADBF0
label_3acccc:
    if (ctx->pc == 0x3ACCCCu) {
        ctx->pc = 0x3ACCCCu;
            // 0x3acccc: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ACCD0u;
        goto label_3accd0;
    }
    ctx->pc = 0x3ACCC8u;
    SET_GPR_U32(ctx, 31, 0x3ACCD0u);
    ctx->pc = 0x3ACCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACCC8u;
            // 0x3acccc: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3ADBF0u;
    if (runtime->hasFunction(0x3ADBF0u)) {
        auto targetFn = runtime->lookupFunction(0x3ADBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACCD0u; }
        if (ctx->pc != 0x3ACCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003ADBF0_0x3adbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACCD0u; }
        if (ctx->pc != 0x3ACCD0u) { return; }
    }
    ctx->pc = 0x3ACCD0u;
label_3accd0:
    // 0x3accd0: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x3accd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3accd4:
    // 0x3accd4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x3accd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3accd8:
    // 0x3accd8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3accd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3accdc:
    // 0x3accdc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3acce0:
    if (ctx->pc == 0x3ACCE0u) {
        ctx->pc = 0x3ACCE4u;
        goto label_3acce4;
    }
    ctx->pc = 0x3ACCDCu;
    {
        const bool branch_taken_0x3accdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3accdc) {
            ctx->pc = 0x3ACCECu;
            goto label_3accec;
        }
    }
    ctx->pc = 0x3ACCE4u;
label_3acce4:
    // 0x3acce4: 0xc110754  jal         func_441D50
label_3acce8:
    if (ctx->pc == 0x3ACCE8u) {
        ctx->pc = 0x3ACCE8u;
            // 0x3acce8: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->pc = 0x3ACCECu;
        goto label_3accec;
    }
    ctx->pc = 0x3ACCE4u;
    SET_GPR_U32(ctx, 31, 0x3ACCECu);
    ctx->pc = 0x3ACCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACCE4u;
            // 0x3acce8: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x441D50u;
    if (runtime->hasFunction(0x441D50u)) {
        auto targetFn = runtime->lookupFunction(0x441D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACCECu; }
        if (ctx->pc != 0x3ACCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00441D50_0x441d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACCECu; }
        if (ctx->pc != 0x3ACCECu) { return; }
    }
    ctx->pc = 0x3ACCECu;
label_3accec:
    // 0x3accec: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3accecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3accf0:
    // 0x3accf0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3accf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3accf4:
    // 0x3accf4: 0x8c630960  lw          $v1, 0x960($v1)
    ctx->pc = 0x3accf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2400)));
label_3accf8:
    // 0x3accf8: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x3accf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_3accfc:
    // 0x3accfc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3acd00:
    if (ctx->pc == 0x3ACD00u) {
        ctx->pc = 0x3ACD04u;
        goto label_3acd04;
    }
    ctx->pc = 0x3ACCFCu;
    {
        const bool branch_taken_0x3accfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3accfc) {
            ctx->pc = 0x3ACD10u;
            goto label_3acd10;
        }
    }
    ctx->pc = 0x3ACD04u;
label_3acd04:
    // 0x3acd04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3acd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3acd08:
    // 0x3acd08: 0xc0ebfac  jal         func_3AFEB0
label_3acd0c:
    if (ctx->pc == 0x3ACD0Cu) {
        ctx->pc = 0x3ACD0Cu;
            // 0x3acd0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ACD10u;
        goto label_3acd10;
    }
    ctx->pc = 0x3ACD08u;
    SET_GPR_U32(ctx, 31, 0x3ACD10u);
    ctx->pc = 0x3ACD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACD08u;
            // 0x3acd0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AFEB0u;
    if (runtime->hasFunction(0x3AFEB0u)) {
        auto targetFn = runtime->lookupFunction(0x3AFEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACD10u; }
        if (ctx->pc != 0x3ACD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AFEB0_0x3afeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACD10u; }
        if (ctx->pc != 0x3ACD10u) { return; }
    }
    ctx->pc = 0x3ACD10u;
label_3acd10:
    // 0x3acd10: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3acd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3acd14:
    // 0x3acd14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3acd14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3acd18:
    // 0x3acd18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3acd18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3acd1c:
    // 0x3acd1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3acd1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3acd20:
    // 0x3acd20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3acd20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3acd24:
    // 0x3acd24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3acd24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3acd28:
    // 0x3acd28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3acd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3acd2c:
    // 0x3acd2c: 0x3e00008  jr          $ra
label_3acd30:
    if (ctx->pc == 0x3ACD30u) {
        ctx->pc = 0x3ACD30u;
            // 0x3acd30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3ACD34u;
        goto label_3acd34;
    }
    ctx->pc = 0x3ACD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACD2Cu;
            // 0x3acd30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ACD34u;
label_3acd34:
    // 0x3acd34: 0x0  nop
    ctx->pc = 0x3acd34u;
    // NOP
label_3acd38:
    // 0x3acd38: 0x0  nop
    ctx->pc = 0x3acd38u;
    // NOP
label_3acd3c:
    // 0x3acd3c: 0x0  nop
    ctx->pc = 0x3acd3cu;
    // NOP
label_3acd40:
    // 0x3acd40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3acd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3acd44:
    // 0x3acd44: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3acd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3acd48:
    // 0x3acd48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3acd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3acd4c:
    // 0x3acd4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3acd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3acd50:
    // 0x3acd50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3acd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3acd54:
    // 0x3acd54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3acd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3acd58:
    // 0x3acd58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3acd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3acd5c:
    // 0x3acd5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3acd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3acd60:
    // 0x3acd60: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3acd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3acd64:
    // 0x3acd64: 0x8c630960  lw          $v1, 0x960($v1)
    ctx->pc = 0x3acd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2400)));
label_3acd68:
    // 0x3acd68: 0x30630c00  andi        $v1, $v1, 0xC00
    ctx->pc = 0x3acd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3072);
label_3acd6c:
    // 0x3acd6c: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_3acd70:
    if (ctx->pc == 0x3ACD70u) {
        ctx->pc = 0x3ACD70u;
            // 0x3acd70: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ACD74u;
        goto label_3acd74;
    }
    ctx->pc = 0x3ACD6Cu;
    {
        const bool branch_taken_0x3acd6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACD6Cu;
            // 0x3acd70: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acd6c) {
            ctx->pc = 0x3ACE5Cu;
            goto label_3ace5c;
        }
    }
    ctx->pc = 0x3ACD74u;
label_3acd74:
    // 0x3acd74: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x3acd74u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_3acd78:
    // 0x3acd78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3acd78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3acd7c:
    // 0x3acd7c: 0xa2800371  sb          $zero, 0x371($s4)
    ctx->pc = 0x3acd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 881), (uint8_t)GPR_U32(ctx, 0));
label_3acd80:
    // 0x3acd80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3acd80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3acd84:
    // 0x3acd84: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x3acd84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3acd88:
    // 0x3acd88: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x3acd88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_3acd8c:
    // 0x3acd8c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3acd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3acd90:
    // 0x3acd90: 0x908311a1  lbu         $v1, 0x11A1($a0)
    ctx->pc = 0x3acd90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4513)));
label_3acd94:
    // 0x3acd94: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_3acd98:
    if (ctx->pc == 0x3ACD98u) {
        ctx->pc = 0x3ACD98u;
            // 0x3acd98: 0x26460090  addiu       $a2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->pc = 0x3ACD9Cu;
        goto label_3acd9c;
    }
    ctx->pc = 0x3ACD94u;
    {
        const bool branch_taken_0x3acd94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACD94u;
            // 0x3acd98: 0x26460090  addiu       $a2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acd94) {
            ctx->pc = 0x3ACE10u;
            goto label_3ace10;
        }
    }
    ctx->pc = 0x3ACD9Cu;
label_3acd9c:
    // 0x3acd9c: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x3acd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_3acda0:
    // 0x3acda0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3acda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3acda4:
    // 0x3acda4: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_3acda8:
    if (ctx->pc == 0x3ACDA8u) {
        ctx->pc = 0x3ACDACu;
        goto label_3acdac;
    }
    ctx->pc = 0x3ACDA4u;
    {
        const bool branch_taken_0x3acda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3acda4) {
            ctx->pc = 0x3ACE10u;
            goto label_3ace10;
        }
    }
    ctx->pc = 0x3ACDACu;
label_3acdac:
    // 0x3acdac: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3acdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3acdb0:
    // 0x3acdb0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3acdb4:
    if (ctx->pc == 0x3ACDB4u) {
        ctx->pc = 0x3ACDB4u;
            // 0x3acdb4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3ACDB8u;
        goto label_3acdb8;
    }
    ctx->pc = 0x3ACDB0u;
    {
        const bool branch_taken_0x3acdb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACDB0u;
            // 0x3acdb4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acdb0) {
            ctx->pc = 0x3ACDD4u;
            goto label_3acdd4;
        }
    }
    ctx->pc = 0x3ACDB8u;
label_3acdb8:
    // 0x3acdb8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3acdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_3acdbc:
    // 0x3acdbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3acdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3acdc0:
    // 0x3acdc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3acdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3acdc4:
    // 0x3acdc4: 0x0  nop
    ctx->pc = 0x3acdc4u;
    // NOP
label_3acdc8:
    // 0x3acdc8: 0x0  nop
    ctx->pc = 0x3acdc8u;
    // NOP
label_3acdcc:
    // 0x3acdcc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3acdd0:
    if (ctx->pc == 0x3ACDD0u) {
        ctx->pc = 0x3ACDD4u;
        goto label_3acdd4;
    }
    ctx->pc = 0x3ACDCCu;
    {
        const bool branch_taken_0x3acdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3acdcc) {
            ctx->pc = 0x3ACDB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3acdb8;
        }
    }
    ctx->pc = 0x3ACDD4u;
label_3acdd4:
    // 0x3acdd4: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x3acdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_3acdd8:
    // 0x3acdd8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3acdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3acddc:
    // 0x3acddc: 0xafb30064  sw          $s3, 0x64($sp)
    ctx->pc = 0x3acddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 19));
label_3acde0:
    // 0x3acde0: 0xafb30068  sw          $s3, 0x68($sp)
    ctx->pc = 0x3acde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
label_3acde4:
    // 0x3acde4: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x3acde4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_3acde8:
    // 0x3acde8: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x3acde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_3acdec:
    // 0x3acdec: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x3acdecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3acdf0:
    // 0x3acdf0: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x3acdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_3acdf4:
    // 0x3acdf4: 0x8e990374  lw          $t9, 0x374($s4)
    ctx->pc = 0x3acdf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 884)));
label_3acdf8:
    // 0x3acdf8: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3acdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3acdfc:
    // 0x3acdfc: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x3acdfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ace00:
    // 0x3ace00: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ace00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ace04:
    // 0x3ace04: 0x320f809  jalr        $t9
label_3ace08:
    if (ctx->pc == 0x3ACE08u) {
        ctx->pc = 0x3ACE08u;
            // 0x3ace08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ACE0Cu;
        goto label_3ace0c;
    }
    ctx->pc = 0x3ACE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ACE0Cu);
        ctx->pc = 0x3ACE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACE04u;
            // 0x3ace08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ACE0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ACE0Cu; }
            if (ctx->pc != 0x3ACE0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3ACE0Cu;
label_3ace0c:
    // 0x3ace0c: 0x0  nop
    ctx->pc = 0x3ace0cu;
    // NOP
label_3ace10:
    // 0x3ace10: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3ace10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ace14:
    // 0x3ace14: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ace14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3ace18:
    // 0x3ace18: 0x265200b8  addiu       $s2, $s2, 0xB8
    ctx->pc = 0x3ace18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
label_3ace1c:
    // 0x3ace1c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3ace1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3ace20:
    // 0x3ace20: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x3ace20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_3ace24:
    // 0x3ace24: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x3ace24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3ace28:
    // 0x3ace28: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
label_3ace2c:
    if (ctx->pc == 0x3ACE2Cu) {
        ctx->pc = 0x3ACE2Cu;
            // 0x3ace2c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x3ACE30u;
        goto label_3ace30;
    }
    ctx->pc = 0x3ACE28u;
    {
        const bool branch_taken_0x3ace28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACE28u;
            // 0x3ace2c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ace28) {
            ctx->pc = 0x3ACD8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3acd8c;
        }
    }
    ctx->pc = 0x3ACE30u;
label_3ace30:
    // 0x3ace30: 0x92830371  lbu         $v1, 0x371($s4)
    ctx->pc = 0x3ace30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 881)));
label_3ace34:
    // 0x3ace34: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_3ace38:
    if (ctx->pc == 0x3ACE38u) {
        ctx->pc = 0x3ACE38u;
            // 0x3ace38: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3ACE3Cu;
        goto label_3ace3c;
    }
    ctx->pc = 0x3ACE34u;
    {
        const bool branch_taken_0x3ace34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ace34) {
            ctx->pc = 0x3ACE38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACE34u;
            // 0x3ace38: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ACE60u;
            goto label_3ace60;
        }
    }
    ctx->pc = 0x3ACE3Cu;
label_3ace3c:
    // 0x3ace3c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ace3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ace40:
    // 0x3ace40: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ace40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ace44:
    // 0x3ace44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ace44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ace48:
    // 0x3ace48: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ace48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ace4c:
    // 0x3ace4c: 0x320f809  jalr        $t9
label_3ace50:
    if (ctx->pc == 0x3ACE50u) {
        ctx->pc = 0x3ACE54u;
        goto label_3ace54;
    }
    ctx->pc = 0x3ACE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ACE54u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ACE54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ACE54u; }
            if (ctx->pc != 0x3ACE54u) { return; }
        }
        }
    }
    ctx->pc = 0x3ACE54u;
label_3ace54:
    // 0x3ace54: 0xc05068c  jal         func_141A30
label_3ace58:
    if (ctx->pc == 0x3ACE58u) {
        ctx->pc = 0x3ACE58u;
            // 0x3ace58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3ACE5Cu;
        goto label_3ace5c;
    }
    ctx->pc = 0x3ACE54u;
    SET_GPR_U32(ctx, 31, 0x3ACE5Cu);
    ctx->pc = 0x3ACE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACE54u;
            // 0x3ace58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACE5Cu; }
        if (ctx->pc != 0x3ACE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACE5Cu; }
        if (ctx->pc != 0x3ACE5Cu) { return; }
    }
    ctx->pc = 0x3ACE5Cu;
label_3ace5c:
    // 0x3ace5c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3ace5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3ace60:
    // 0x3ace60: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ace60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ace64:
    // 0x3ace64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ace64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ace68:
    // 0x3ace68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ace68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ace6c:
    // 0x3ace6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ace6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ace70:
    // 0x3ace70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ace70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ace74:
    // 0x3ace74: 0x3e00008  jr          $ra
label_3ace78:
    if (ctx->pc == 0x3ACE78u) {
        ctx->pc = 0x3ACE78u;
            // 0x3ace78: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3ACE7Cu;
        goto label_3ace7c;
    }
    ctx->pc = 0x3ACE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACE74u;
            // 0x3ace78: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ACE7Cu;
label_3ace7c:
    // 0x3ace7c: 0x0  nop
    ctx->pc = 0x3ace7cu;
    // NOP
label_3ace80:
    // 0x3ace80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3ace80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3ace84:
    // 0x3ace84: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ace84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ace88:
    // 0x3ace88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3ace88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3ace8c:
    // 0x3ace8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ace8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3ace90:
    // 0x3ace90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ace90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3ace94:
    // 0x3ace94: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3ace94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ace98:
    // 0x3ace98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ace98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ace9c:
    // 0x3ace9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ace9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3acea0:
    // 0x3acea0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3acea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3acea4:
    // 0x3acea4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3acea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3acea8:
    // 0x3acea8: 0x8c630960  lw          $v1, 0x960($v1)
    ctx->pc = 0x3acea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2400)));
label_3aceac:
    // 0x3aceac: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3aceacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3aceb0:
    // 0x3aceb0: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_3aceb4:
    if (ctx->pc == 0x3ACEB4u) {
        ctx->pc = 0x3ACEB4u;
            // 0x3aceb4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ACEB8u;
        goto label_3aceb8;
    }
    ctx->pc = 0x3ACEB0u;
    {
        const bool branch_taken_0x3aceb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACEB0u;
            // 0x3aceb4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aceb0) {
            ctx->pc = 0x3ACFA8u;
            goto label_3acfa8;
        }
    }
    ctx->pc = 0x3ACEB8u;
label_3aceb8:
    // 0x3aceb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3aceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3acebc:
    // 0x3acebc: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3acebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3acec0:
    // 0x3acec0: 0xc0506ac  jal         func_141AB0
label_3acec4:
    if (ctx->pc == 0x3ACEC4u) {
        ctx->pc = 0x3ACEC4u;
            // 0x3acec4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ACEC8u;
        goto label_3acec8;
    }
    ctx->pc = 0x3ACEC0u;
    SET_GPR_U32(ctx, 31, 0x3ACEC8u);
    ctx->pc = 0x3ACEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACEC0u;
            // 0x3acec4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACEC8u; }
        if (ctx->pc != 0x3ACEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ACEC8u; }
        if (ctx->pc != 0x3ACEC8u) { return; }
    }
    ctx->pc = 0x3ACEC8u;
label_3acec8:
    // 0x3acec8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3acec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3acecc:
    // 0x3acecc: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3aceccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3aced0:
    // 0x3aced0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3aced0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3aced4:
    // 0x3aced4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3aced4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3aced8:
    // 0x3aced8: 0x320f809  jalr        $t9
label_3acedc:
    if (ctx->pc == 0x3ACEDCu) {
        ctx->pc = 0x3ACEDCu;
            // 0x3acedc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3ACEE0u;
        goto label_3acee0;
    }
    ctx->pc = 0x3ACED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ACEE0u);
        ctx->pc = 0x3ACEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACED8u;
            // 0x3acedc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ACEE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ACEE0u; }
            if (ctx->pc != 0x3ACEE0u) { return; }
        }
        }
    }
    ctx->pc = 0x3ACEE0u;
label_3acee0:
    // 0x3acee0: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x3acee0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_3acee4:
    // 0x3acee4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3acee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3acee8:
    // 0x3acee8: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3acee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3aceec:
    // 0x3aceec: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x3aceecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_3acef0:
    // 0x3acef0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3acef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3acef4:
    // 0x3acef4: 0x908211a1  lbu         $v0, 0x11A1($a0)
    ctx->pc = 0x3acef4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4513)));
label_3acef8:
    // 0x3acef8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3acefc:
    if (ctx->pc == 0x3ACEFCu) {
        ctx->pc = 0x3ACEFCu;
            // 0x3acefc: 0x26260090  addiu       $a2, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->pc = 0x3ACF00u;
        goto label_3acf00;
    }
    ctx->pc = 0x3ACEF8u;
    {
        const bool branch_taken_0x3acef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACEF8u;
            // 0x3acefc: 0x26260090  addiu       $a2, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acef8) {
            ctx->pc = 0x3ACF70u;
            goto label_3acf70;
        }
    }
    ctx->pc = 0x3ACF00u;
label_3acf00:
    // 0x3acf00: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x3acf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_3acf04:
    // 0x3acf04: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3acf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3acf08:
    // 0x3acf08: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_3acf0c:
    if (ctx->pc == 0x3ACF0Cu) {
        ctx->pc = 0x3ACF10u;
        goto label_3acf10;
    }
    ctx->pc = 0x3ACF08u;
    {
        const bool branch_taken_0x3acf08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3acf08) {
            ctx->pc = 0x3ACF70u;
            goto label_3acf70;
        }
    }
    ctx->pc = 0x3ACF10u;
label_3acf10:
    // 0x3acf10: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3acf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3acf14:
    // 0x3acf14: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3acf18:
    if (ctx->pc == 0x3ACF18u) {
        ctx->pc = 0x3ACF18u;
            // 0x3acf18: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3ACF1Cu;
        goto label_3acf1c;
    }
    ctx->pc = 0x3ACF14u;
    {
        const bool branch_taken_0x3acf14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACF14u;
            // 0x3acf18: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acf14) {
            ctx->pc = 0x3ACF38u;
            goto label_3acf38;
        }
    }
    ctx->pc = 0x3ACF1Cu;
label_3acf1c:
    // 0x3acf1c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3acf1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_3acf20:
    // 0x3acf20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3acf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3acf24:
    // 0x3acf24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3acf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3acf28:
    // 0x3acf28: 0x0  nop
    ctx->pc = 0x3acf28u;
    // NOP
label_3acf2c:
    // 0x3acf2c: 0x0  nop
    ctx->pc = 0x3acf2cu;
    // NOP
label_3acf30:
    // 0x3acf30: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3acf34:
    if (ctx->pc == 0x3ACF34u) {
        ctx->pc = 0x3ACF38u;
        goto label_3acf38;
    }
    ctx->pc = 0x3ACF30u;
    {
        const bool branch_taken_0x3acf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3acf30) {
            ctx->pc = 0x3ACF1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3acf1c;
        }
    }
    ctx->pc = 0x3ACF38u;
label_3acf38:
    // 0x3acf38: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x3acf38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_3acf3c:
    // 0x3acf3c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3acf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3acf40:
    // 0x3acf40: 0xafb20064  sw          $s2, 0x64($sp)
    ctx->pc = 0x3acf40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 18));
label_3acf44:
    // 0x3acf44: 0xafb20068  sw          $s2, 0x68($sp)
    ctx->pc = 0x3acf44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 18));
label_3acf48:
    // 0x3acf48: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x3acf48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_3acf4c:
    // 0x3acf4c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x3acf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_3acf50:
    // 0x3acf50: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x3acf50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3acf54:
    // 0x3acf54: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x3acf54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_3acf58:
    // 0x3acf58: 0x8e990374  lw          $t9, 0x374($s4)
    ctx->pc = 0x3acf58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 884)));
label_3acf5c:
    // 0x3acf5c: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3acf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3acf60:
    // 0x3acf60: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x3acf60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3acf64:
    // 0x3acf64: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x3acf64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_3acf68:
    // 0x3acf68: 0x320f809  jalr        $t9
label_3acf6c:
    if (ctx->pc == 0x3ACF6Cu) {
        ctx->pc = 0x3ACF6Cu;
            // 0x3acf6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ACF70u;
        goto label_3acf70;
    }
    ctx->pc = 0x3ACF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ACF70u);
        ctx->pc = 0x3ACF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACF68u;
            // 0x3acf6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ACF70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ACF70u; }
            if (ctx->pc != 0x3ACF70u) { return; }
        }
        }
    }
    ctx->pc = 0x3ACF70u;
label_3acf70:
    // 0x3acf70: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3acf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3acf74:
    // 0x3acf74: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3acf74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3acf78:
    // 0x3acf78: 0x263100b8  addiu       $s1, $s1, 0xB8
    ctx->pc = 0x3acf78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
label_3acf7c:
    // 0x3acf7c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3acf7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3acf80:
    // 0x3acf80: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x3acf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_3acf84:
    // 0x3acf84: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3acf84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3acf88:
    // 0x3acf88: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_3acf8c:
    if (ctx->pc == 0x3ACF8Cu) {
        ctx->pc = 0x3ACF8Cu;
            // 0x3acf8c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3ACF90u;
        goto label_3acf90;
    }
    ctx->pc = 0x3ACF88u;
    {
        const bool branch_taken_0x3acf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACF88u;
            // 0x3acf8c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acf88) {
            ctx->pc = 0x3ACEF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3acef0;
        }
    }
    ctx->pc = 0x3ACF90u;
label_3acf90:
    // 0x3acf90: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3acf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3acf94:
    // 0x3acf94: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3acf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3acf98:
    // 0x3acf98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3acf98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3acf9c:
    // 0x3acf9c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3acf9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3acfa0:
    // 0x3acfa0: 0x320f809  jalr        $t9
label_3acfa4:
    if (ctx->pc == 0x3ACFA4u) {
        ctx->pc = 0x3ACFA8u;
        goto label_3acfa8;
    }
    ctx->pc = 0x3ACFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ACFA8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ACFA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ACFA8u; }
            if (ctx->pc != 0x3ACFA8u) { return; }
        }
        }
    }
    ctx->pc = 0x3ACFA8u;
label_3acfa8:
    // 0x3acfa8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3acfa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3acfac:
    // 0x3acfac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3acfacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3acfb0:
    // 0x3acfb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3acfb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3acfb4:
    // 0x3acfb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3acfb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3acfb8:
    // 0x3acfb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3acfb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3acfbc:
    // 0x3acfbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3acfbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3acfc0:
    // 0x3acfc0: 0x3e00008  jr          $ra
label_3acfc4:
    if (ctx->pc == 0x3ACFC4u) {
        ctx->pc = 0x3ACFC4u;
            // 0x3acfc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3ACFC8u;
        goto label_3acfc8;
    }
    ctx->pc = 0x3ACFC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ACFC0u;
            // 0x3acfc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ACFC8u;
label_3acfc8:
    // 0x3acfc8: 0x0  nop
    ctx->pc = 0x3acfc8u;
    // NOP
label_3acfcc:
    // 0x3acfcc: 0x0  nop
    ctx->pc = 0x3acfccu;
    // NOP
label_3acfd0:
    // 0x3acfd0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3acfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3acfd4:
    // 0x3acfd4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3acfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3acfd8:
    // 0x3acfd8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3acfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3acfdc:
    // 0x3acfdc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3acfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3acfe0:
    // 0x3acfe0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3acfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3acfe4:
    // 0x3acfe4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3acfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3acfe8:
    // 0x3acfe8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3acfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3acfec:
    // 0x3acfec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3acfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3acff0:
    // 0x3acff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3acff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3acff4:
    // 0x3acff4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3acff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3acff8:
    // 0x3acff8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3acff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3acffc:
    // 0x3acffc: 0x8c630960  lw          $v1, 0x960($v1)
    ctx->pc = 0x3acffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2400)));
label_3ad000:
    // 0x3ad000: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3ad000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3ad004:
    // 0x3ad004: 0x106000a7  beqz        $v1, . + 4 + (0xA7 << 2)
label_3ad008:
    if (ctx->pc == 0x3AD008u) {
        ctx->pc = 0x3AD008u;
            // 0x3ad008: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AD00Cu;
        goto label_3ad00c;
    }
    ctx->pc = 0x3AD004u;
    {
        const bool branch_taken_0x3ad004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD004u;
            // 0x3ad008: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad004) {
            ctx->pc = 0x3AD2A4u;
            goto label_3ad2a4;
        }
    }
    ctx->pc = 0x3AD00Cu;
label_3ad00c:
    // 0x3ad00c: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x3ad00cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
label_3ad010:
    // 0x3ad010: 0xa2200372  sb          $zero, 0x372($s1)
    ctx->pc = 0x3ad010u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 882), (uint8_t)GPR_U32(ctx, 0));
label_3ad014:
    // 0x3ad014: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3ad014u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad018:
    // 0x3ad018: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x3ad018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ad01c:
    // 0x3ad01c: 0x26730e80  addiu       $s3, $s3, 0xE80
    ctx->pc = 0x3ad01cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3712));
label_3ad020:
    // 0x3ad020: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3ad020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad024:
    // 0x3ad024: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3ad024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3ad028:
    // 0x3ad028: 0x908211a1  lbu         $v0, 0x11A1($a0)
    ctx->pc = 0x3ad028u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4513)));
label_3ad02c:
    // 0x3ad02c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3ad030:
    if (ctx->pc == 0x3AD030u) {
        ctx->pc = 0x3AD030u;
            // 0x3ad030: 0x26860090  addiu       $a2, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->pc = 0x3AD034u;
        goto label_3ad034;
    }
    ctx->pc = 0x3AD02Cu;
    {
        const bool branch_taken_0x3ad02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD02Cu;
            // 0x3ad030: 0x26860090  addiu       $a2, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad02c) {
            ctx->pc = 0x3AD0A8u;
            goto label_3ad0a8;
        }
    }
    ctx->pc = 0x3AD034u;
label_3ad034:
    // 0x3ad034: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x3ad034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_3ad038:
    // 0x3ad038: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3ad038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3ad03c:
    // 0x3ad03c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_3ad040:
    if (ctx->pc == 0x3AD040u) {
        ctx->pc = 0x3AD044u;
        goto label_3ad044;
    }
    ctx->pc = 0x3AD03Cu;
    {
        const bool branch_taken_0x3ad03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad03c) {
            ctx->pc = 0x3AD0A8u;
            goto label_3ad0a8;
        }
    }
    ctx->pc = 0x3AD044u;
label_3ad044:
    // 0x3ad044: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x3ad044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3ad048:
    // 0x3ad048: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3ad04c:
    if (ctx->pc == 0x3AD04Cu) {
        ctx->pc = 0x3AD04Cu;
            // 0x3ad04c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3AD050u;
        goto label_3ad050;
    }
    ctx->pc = 0x3AD048u;
    {
        const bool branch_taken_0x3ad048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD048u;
            // 0x3ad04c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad048) {
            ctx->pc = 0x3AD06Cu;
            goto label_3ad06c;
        }
    }
    ctx->pc = 0x3AD050u;
label_3ad050:
    // 0x3ad050: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3ad050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_3ad054:
    // 0x3ad054: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ad054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ad058:
    // 0x3ad058: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ad058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ad05c:
    // 0x3ad05c: 0x0  nop
    ctx->pc = 0x3ad05cu;
    // NOP
label_3ad060:
    // 0x3ad060: 0x0  nop
    ctx->pc = 0x3ad060u;
    // NOP
label_3ad064:
    // 0x3ad064: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3ad068:
    if (ctx->pc == 0x3AD068u) {
        ctx->pc = 0x3AD06Cu;
        goto label_3ad06c;
    }
    ctx->pc = 0x3AD064u;
    {
        const bool branch_taken_0x3ad064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad064) {
            ctx->pc = 0x3AD050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ad050;
        }
    }
    ctx->pc = 0x3AD06Cu;
label_3ad06c:
    // 0x3ad06c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x3ad06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_3ad070:
    // 0x3ad070: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3ad070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3ad074:
    // 0x3ad074: 0xafb500b4  sw          $s5, 0xB4($sp)
    ctx->pc = 0x3ad074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 21));
label_3ad078:
    // 0x3ad078: 0xafb500b8  sw          $s5, 0xB8($sp)
    ctx->pc = 0x3ad078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 21));
label_3ad07c:
    // 0x3ad07c: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x3ad07cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_3ad080:
    // 0x3ad080: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x3ad080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_3ad084:
    // 0x3ad084: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x3ad084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3ad088:
    // 0x3ad088: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3ad088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3ad08c:
    // 0x3ad08c: 0x8e390374  lw          $t9, 0x374($s1)
    ctx->pc = 0x3ad08cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
label_3ad090:
    // 0x3ad090: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3ad090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3ad094:
    // 0x3ad094: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x3ad094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ad098:
    // 0x3ad098: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3ad098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3ad09c:
    // 0x3ad09c: 0x320f809  jalr        $t9
label_3ad0a0:
    if (ctx->pc == 0x3AD0A0u) {
        ctx->pc = 0x3AD0A0u;
            // 0x3ad0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AD0A4u;
        goto label_3ad0a4;
    }
    ctx->pc = 0x3AD09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AD0A4u);
        ctx->pc = 0x3AD0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD09Cu;
            // 0x3ad0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AD0A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AD0A4u; }
            if (ctx->pc != 0x3AD0A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3AD0A4u;
label_3ad0a4:
    // 0x3ad0a4: 0x0  nop
    ctx->pc = 0x3ad0a4u;
    // NOP
label_3ad0a8:
    // 0x3ad0a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ad0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ad0ac:
    // 0x3ad0ac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3ad0acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3ad0b0:
    // 0x3ad0b0: 0x269400b8  addiu       $s4, $s4, 0xB8
    ctx->pc = 0x3ad0b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 184));
label_3ad0b4:
    // 0x3ad0b4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3ad0b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3ad0b8:
    // 0x3ad0b8: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x3ad0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_3ad0bc:
    // 0x3ad0bc: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x3ad0bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ad0c0:
    // 0x3ad0c0: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_3ad0c4:
    if (ctx->pc == 0x3AD0C4u) {
        ctx->pc = 0x3AD0C4u;
            // 0x3ad0c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3AD0C8u;
        goto label_3ad0c8;
    }
    ctx->pc = 0x3AD0C0u;
    {
        const bool branch_taken_0x3ad0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD0C0u;
            // 0x3ad0c4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad0c0) {
            ctx->pc = 0x3AD024u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ad024;
        }
    }
    ctx->pc = 0x3AD0C8u;
label_3ad0c8:
    // 0x3ad0c8: 0x92220372  lbu         $v0, 0x372($s1)
    ctx->pc = 0x3ad0c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 882)));
label_3ad0cc:
    // 0x3ad0cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3ad0d0:
    if (ctx->pc == 0x3AD0D0u) {
        ctx->pc = 0x3AD0D4u;
        goto label_3ad0d4;
    }
    ctx->pc = 0x3AD0CCu;
    {
        const bool branch_taken_0x3ad0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad0cc) {
            ctx->pc = 0x3AD0F4u;
            goto label_3ad0f4;
        }
    }
    ctx->pc = 0x3AD0D4u;
label_3ad0d4:
    // 0x3ad0d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ad0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ad0d8:
    // 0x3ad0d8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ad0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ad0dc:
    // 0x3ad0dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ad0dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ad0e0:
    // 0x3ad0e0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ad0e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ad0e4:
    // 0x3ad0e4: 0x320f809  jalr        $t9
label_3ad0e8:
    if (ctx->pc == 0x3AD0E8u) {
        ctx->pc = 0x3AD0ECu;
        goto label_3ad0ec;
    }
    ctx->pc = 0x3AD0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AD0ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AD0ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AD0ECu; }
            if (ctx->pc != 0x3AD0ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3AD0ECu;
label_3ad0ec:
    // 0x3ad0ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ad0f0:
    if (ctx->pc == 0x3AD0F0u) {
        ctx->pc = 0x3AD0F0u;
            // 0x3ad0f0: 0xa2200372  sb          $zero, 0x372($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 882), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3AD0F4u;
        goto label_3ad0f4;
    }
    ctx->pc = 0x3AD0ECu;
    {
        const bool branch_taken_0x3ad0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD0ECu;
            // 0x3ad0f0: 0xa2200372  sb          $zero, 0x372($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 882), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad0ec) {
            ctx->pc = 0x3AD104u;
            goto label_3ad104;
        }
    }
    ctx->pc = 0x3AD0F4u;
label_3ad0f4:
    // 0x3ad0f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ad0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ad0f8:
    // 0x3ad0f8: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3ad0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3ad0fc:
    // 0x3ad0fc: 0xc0506ac  jal         func_141AB0
label_3ad100:
    if (ctx->pc == 0x3AD100u) {
        ctx->pc = 0x3AD100u;
            // 0x3ad100: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AD104u;
        goto label_3ad104;
    }
    ctx->pc = 0x3AD0FCu;
    SET_GPR_U32(ctx, 31, 0x3AD104u);
    ctx->pc = 0x3AD100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD0FCu;
            // 0x3ad100: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD104u; }
        if (ctx->pc != 0x3AD104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD104u; }
        if (ctx->pc != 0x3AD104u) { return; }
    }
    ctx->pc = 0x3AD104u;
label_3ad104:
    // 0x3ad104: 0x3c1400af  lui         $s4, 0xAF
    ctx->pc = 0x3ad104u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)175 << 16));
label_3ad108:
    // 0x3ad108: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ad108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad10c:
    // 0x3ad10c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x3ad10cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ad110:
    // 0x3ad110: 0x26940e80  addiu       $s4, $s4, 0xE80
    ctx->pc = 0x3ad110u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3712));
label_3ad114:
    // 0x3ad114: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3ad114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ad118:
    // 0x3ad118: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x3ad118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3ad11c:
    // 0x3ad11c: 0x908211a1  lbu         $v0, 0x11A1($a0)
    ctx->pc = 0x3ad11cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4513)));
label_3ad120:
    // 0x3ad120: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3ad124:
    if (ctx->pc == 0x3AD124u) {
        ctx->pc = 0x3AD124u;
            // 0x3ad124: 0x26a60090  addiu       $a2, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->pc = 0x3AD128u;
        goto label_3ad128;
    }
    ctx->pc = 0x3AD120u;
    {
        const bool branch_taken_0x3ad120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD120u;
            // 0x3ad124: 0x26a60090  addiu       $a2, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad120) {
            ctx->pc = 0x3AD198u;
            goto label_3ad198;
        }
    }
    ctx->pc = 0x3AD128u;
label_3ad128:
    // 0x3ad128: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x3ad128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_3ad12c:
    // 0x3ad12c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3ad12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3ad130:
    // 0x3ad130: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_3ad134:
    if (ctx->pc == 0x3AD134u) {
        ctx->pc = 0x3AD138u;
        goto label_3ad138;
    }
    ctx->pc = 0x3AD130u;
    {
        const bool branch_taken_0x3ad130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad130) {
            ctx->pc = 0x3AD198u;
            goto label_3ad198;
        }
    }
    ctx->pc = 0x3AD138u;
label_3ad138:
    // 0x3ad138: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x3ad138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3ad13c:
    // 0x3ad13c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3ad140:
    if (ctx->pc == 0x3AD140u) {
        ctx->pc = 0x3AD140u;
            // 0x3ad140: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3AD144u;
        goto label_3ad144;
    }
    ctx->pc = 0x3AD13Cu;
    {
        const bool branch_taken_0x3ad13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD13Cu;
            // 0x3ad140: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad13c) {
            ctx->pc = 0x3AD160u;
            goto label_3ad160;
        }
    }
    ctx->pc = 0x3AD144u;
label_3ad144:
    // 0x3ad144: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3ad144u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_3ad148:
    // 0x3ad148: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ad148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ad14c:
    // 0x3ad14c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ad14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ad150:
    // 0x3ad150: 0x0  nop
    ctx->pc = 0x3ad150u;
    // NOP
label_3ad154:
    // 0x3ad154: 0x0  nop
    ctx->pc = 0x3ad154u;
    // NOP
label_3ad158:
    // 0x3ad158: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3ad15c:
    if (ctx->pc == 0x3AD15Cu) {
        ctx->pc = 0x3AD160u;
        goto label_3ad160;
    }
    ctx->pc = 0x3AD158u;
    {
        const bool branch_taken_0x3ad158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad158) {
            ctx->pc = 0x3AD144u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ad144;
        }
    }
    ctx->pc = 0x3AD160u;
label_3ad160:
    // 0x3ad160: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x3ad160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_3ad164:
    // 0x3ad164: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3ad164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3ad168:
    // 0x3ad168: 0xafb20094  sw          $s2, 0x94($sp)
    ctx->pc = 0x3ad168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 18));
label_3ad16c:
    // 0x3ad16c: 0xafb20098  sw          $s2, 0x98($sp)
    ctx->pc = 0x3ad16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 18));
label_3ad170:
    // 0x3ad170: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x3ad170u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_3ad174:
    // 0x3ad174: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x3ad174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_3ad178:
    // 0x3ad178: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x3ad178u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3ad17c:
    // 0x3ad17c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x3ad17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_3ad180:
    // 0x3ad180: 0x8e390374  lw          $t9, 0x374($s1)
    ctx->pc = 0x3ad180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
label_3ad184:
    // 0x3ad184: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3ad184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3ad188:
    // 0x3ad188: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x3ad188u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ad18c:
    // 0x3ad18c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3ad18cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3ad190:
    // 0x3ad190: 0x320f809  jalr        $t9
label_3ad194:
    if (ctx->pc == 0x3AD194u) {
        ctx->pc = 0x3AD194u;
            // 0x3ad194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AD198u;
        goto label_3ad198;
    }
    ctx->pc = 0x3AD190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AD198u);
        ctx->pc = 0x3AD194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD190u;
            // 0x3ad194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AD198u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AD198u; }
            if (ctx->pc != 0x3AD198u) { return; }
        }
        }
    }
    ctx->pc = 0x3AD198u;
label_3ad198:
    // 0x3ad198: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ad198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ad19c:
    // 0x3ad19c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ad19cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3ad1a0:
    // 0x3ad1a0: 0x26b500b8  addiu       $s5, $s5, 0xB8
    ctx->pc = 0x3ad1a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 184));
label_3ad1a4:
    // 0x3ad1a4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x3ad1a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_3ad1a8:
    // 0x3ad1a8: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x3ad1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_3ad1ac:
    // 0x3ad1ac: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3ad1acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ad1b0:
    // 0x3ad1b0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_3ad1b4:
    if (ctx->pc == 0x3AD1B4u) {
        ctx->pc = 0x3AD1B4u;
            // 0x3ad1b4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3AD1B8u;
        goto label_3ad1b8;
    }
    ctx->pc = 0x3AD1B0u;
    {
        const bool branch_taken_0x3ad1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD1B0u;
            // 0x3ad1b4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad1b0) {
            ctx->pc = 0x3AD118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ad118;
        }
    }
    ctx->pc = 0x3AD1B8u;
label_3ad1b8:
    // 0x3ad1b8: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x3ad1b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
label_3ad1bc:
    // 0x3ad1bc: 0xa2200372  sb          $zero, 0x372($s1)
    ctx->pc = 0x3ad1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 882), (uint8_t)GPR_U32(ctx, 0));
label_3ad1c0:
    // 0x3ad1c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ad1c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad1c4:
    // 0x3ad1c4: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x3ad1c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ad1c8:
    // 0x3ad1c8: 0x26730e80  addiu       $s3, $s3, 0xE80
    ctx->pc = 0x3ad1c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3712));
label_3ad1cc:
    // 0x3ad1cc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3ad1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3ad1d0:
    // 0x3ad1d0: 0x908211a1  lbu         $v0, 0x11A1($a0)
    ctx->pc = 0x3ad1d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4513)));
label_3ad1d4:
    // 0x3ad1d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3ad1d8:
    if (ctx->pc == 0x3AD1D8u) {
        ctx->pc = 0x3AD1D8u;
            // 0x3ad1d8: 0x26860090  addiu       $a2, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->pc = 0x3AD1DCu;
        goto label_3ad1dc;
    }
    ctx->pc = 0x3AD1D4u;
    {
        const bool branch_taken_0x3ad1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD1D4u;
            // 0x3ad1d8: 0x26860090  addiu       $a2, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad1d4) {
            ctx->pc = 0x3AD250u;
            goto label_3ad250;
        }
    }
    ctx->pc = 0x3AD1DCu;
label_3ad1dc:
    // 0x3ad1dc: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x3ad1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_3ad1e0:
    // 0x3ad1e0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3ad1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3ad1e4:
    // 0x3ad1e4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_3ad1e8:
    if (ctx->pc == 0x3AD1E8u) {
        ctx->pc = 0x3AD1ECu;
        goto label_3ad1ec;
    }
    ctx->pc = 0x3AD1E4u;
    {
        const bool branch_taken_0x3ad1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad1e4) {
            ctx->pc = 0x3AD250u;
            goto label_3ad250;
        }
    }
    ctx->pc = 0x3AD1ECu;
label_3ad1ec:
    // 0x3ad1ec: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x3ad1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3ad1f0:
    // 0x3ad1f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3ad1f4:
    if (ctx->pc == 0x3AD1F4u) {
        ctx->pc = 0x3AD1F4u;
            // 0x3ad1f4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3AD1F8u;
        goto label_3ad1f8;
    }
    ctx->pc = 0x3AD1F0u;
    {
        const bool branch_taken_0x3ad1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD1F0u;
            // 0x3ad1f4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad1f0) {
            ctx->pc = 0x3AD214u;
            goto label_3ad214;
        }
    }
    ctx->pc = 0x3AD1F8u;
label_3ad1f8:
    // 0x3ad1f8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3ad1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_3ad1fc:
    // 0x3ad1fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ad1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ad200:
    // 0x3ad200: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ad200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ad204:
    // 0x3ad204: 0x0  nop
    ctx->pc = 0x3ad204u;
    // NOP
label_3ad208:
    // 0x3ad208: 0x0  nop
    ctx->pc = 0x3ad208u;
    // NOP
label_3ad20c:
    // 0x3ad20c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3ad210:
    if (ctx->pc == 0x3AD210u) {
        ctx->pc = 0x3AD214u;
        goto label_3ad214;
    }
    ctx->pc = 0x3AD20Cu;
    {
        const bool branch_taken_0x3ad20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad20c) {
            ctx->pc = 0x3AD1F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ad1f8;
        }
    }
    ctx->pc = 0x3AD214u;
label_3ad214:
    // 0x3ad214: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x3ad214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_3ad218:
    // 0x3ad218: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3ad218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3ad21c:
    // 0x3ad21c: 0xafb20074  sw          $s2, 0x74($sp)
    ctx->pc = 0x3ad21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 18));
label_3ad220:
    // 0x3ad220: 0xafb20078  sw          $s2, 0x78($sp)
    ctx->pc = 0x3ad220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 18));
label_3ad224:
    // 0x3ad224: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x3ad224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_3ad228:
    // 0x3ad228: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x3ad228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_3ad22c:
    // 0x3ad22c: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x3ad22cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3ad230:
    // 0x3ad230: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x3ad230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_3ad234:
    // 0x3ad234: 0x8e390374  lw          $t9, 0x374($s1)
    ctx->pc = 0x3ad234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
label_3ad238:
    // 0x3ad238: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3ad238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3ad23c:
    // 0x3ad23c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x3ad23cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ad240:
    // 0x3ad240: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3ad240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3ad244:
    // 0x3ad244: 0x320f809  jalr        $t9
label_3ad248:
    if (ctx->pc == 0x3AD248u) {
        ctx->pc = 0x3AD248u;
            // 0x3ad248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AD24Cu;
        goto label_3ad24c;
    }
    ctx->pc = 0x3AD244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AD24Cu);
        ctx->pc = 0x3AD248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD244u;
            // 0x3ad248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AD24Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AD24Cu; }
            if (ctx->pc != 0x3AD24Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3AD24Cu;
label_3ad24c:
    // 0x3ad24c: 0x0  nop
    ctx->pc = 0x3ad24cu;
    // NOP
label_3ad250:
    // 0x3ad250: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ad250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ad254:
    // 0x3ad254: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ad254u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3ad258:
    // 0x3ad258: 0x269400b8  addiu       $s4, $s4, 0xB8
    ctx->pc = 0x3ad258u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 184));
label_3ad25c:
    // 0x3ad25c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3ad25cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3ad260:
    // 0x3ad260: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x3ad260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_3ad264:
    // 0x3ad264: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3ad264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ad268:
    // 0x3ad268: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_3ad26c:
    if (ctx->pc == 0x3AD26Cu) {
        ctx->pc = 0x3AD26Cu;
            // 0x3ad26c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x3AD270u;
        goto label_3ad270;
    }
    ctx->pc = 0x3AD268u;
    {
        const bool branch_taken_0x3ad268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD268u;
            // 0x3ad26c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad268) {
            ctx->pc = 0x3AD1CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ad1cc;
        }
    }
    ctx->pc = 0x3AD270u;
label_3ad270:
    // 0x3ad270: 0x92220372  lbu         $v0, 0x372($s1)
    ctx->pc = 0x3ad270u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 882)));
label_3ad274:
    // 0x3ad274: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3ad278:
    if (ctx->pc == 0x3AD278u) {
        ctx->pc = 0x3AD27Cu;
        goto label_3ad27c;
    }
    ctx->pc = 0x3AD274u;
    {
        const bool branch_taken_0x3ad274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad274) {
            ctx->pc = 0x3AD294u;
            goto label_3ad294;
        }
    }
    ctx->pc = 0x3AD27Cu;
label_3ad27c:
    // 0x3ad27c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ad27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ad280:
    // 0x3ad280: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ad280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ad284:
    // 0x3ad284: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ad284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ad288:
    // 0x3ad288: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ad288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ad28c:
    // 0x3ad28c: 0x320f809  jalr        $t9
label_3ad290:
    if (ctx->pc == 0x3AD290u) {
        ctx->pc = 0x3AD294u;
        goto label_3ad294;
    }
    ctx->pc = 0x3AD28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AD294u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AD294u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AD294u; }
            if (ctx->pc != 0x3AD294u) { return; }
        }
        }
    }
    ctx->pc = 0x3AD294u;
label_3ad294:
    // 0x3ad294: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ad294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ad298:
    // 0x3ad298: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3ad298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3ad29c:
    // 0x3ad29c: 0xc0506ac  jal         func_141AB0
label_3ad2a0:
    if (ctx->pc == 0x3AD2A0u) {
        ctx->pc = 0x3AD2A0u;
            // 0x3ad2a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AD2A4u;
        goto label_3ad2a4;
    }
    ctx->pc = 0x3AD29Cu;
    SET_GPR_U32(ctx, 31, 0x3AD2A4u);
    ctx->pc = 0x3AD2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD29Cu;
            // 0x3ad2a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD2A4u; }
        if (ctx->pc != 0x3AD2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD2A4u; }
        if (ctx->pc != 0x3AD2A4u) { return; }
    }
    ctx->pc = 0x3AD2A4u;
label_3ad2a4:
    // 0x3ad2a4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3ad2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3ad2a8:
    // 0x3ad2a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ad2a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ad2ac:
    // 0x3ad2ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ad2acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ad2b0:
    // 0x3ad2b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ad2b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ad2b4:
    // 0x3ad2b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ad2b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ad2b8:
    // 0x3ad2b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ad2b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ad2bc:
    // 0x3ad2bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ad2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad2c0:
    // 0x3ad2c0: 0x3e00008  jr          $ra
label_3ad2c4:
    if (ctx->pc == 0x3AD2C4u) {
        ctx->pc = 0x3AD2C4u;
            // 0x3ad2c4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3AD2C8u;
        goto label_3ad2c8;
    }
    ctx->pc = 0x3AD2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD2C0u;
            // 0x3ad2c4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AD2C8u;
label_3ad2c8:
    // 0x3ad2c8: 0x0  nop
    ctx->pc = 0x3ad2c8u;
    // NOP
label_3ad2cc:
    // 0x3ad2cc: 0x0  nop
    ctx->pc = 0x3ad2ccu;
    // NOP
}
