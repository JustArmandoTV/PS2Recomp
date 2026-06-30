#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DD4A0
// Address: 0x3dd4a0 - 0x3dedc0
void sub_003DD4A0_0x3dd4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD4A0_0x3dd4a0");
#endif

    switch (ctx->pc) {
        case 0x3dd4a0u: goto label_3dd4a0;
        case 0x3dd4a4u: goto label_3dd4a4;
        case 0x3dd4a8u: goto label_3dd4a8;
        case 0x3dd4acu: goto label_3dd4ac;
        case 0x3dd4b0u: goto label_3dd4b0;
        case 0x3dd4b4u: goto label_3dd4b4;
        case 0x3dd4b8u: goto label_3dd4b8;
        case 0x3dd4bcu: goto label_3dd4bc;
        case 0x3dd4c0u: goto label_3dd4c0;
        case 0x3dd4c4u: goto label_3dd4c4;
        case 0x3dd4c8u: goto label_3dd4c8;
        case 0x3dd4ccu: goto label_3dd4cc;
        case 0x3dd4d0u: goto label_3dd4d0;
        case 0x3dd4d4u: goto label_3dd4d4;
        case 0x3dd4d8u: goto label_3dd4d8;
        case 0x3dd4dcu: goto label_3dd4dc;
        case 0x3dd4e0u: goto label_3dd4e0;
        case 0x3dd4e4u: goto label_3dd4e4;
        case 0x3dd4e8u: goto label_3dd4e8;
        case 0x3dd4ecu: goto label_3dd4ec;
        case 0x3dd4f0u: goto label_3dd4f0;
        case 0x3dd4f4u: goto label_3dd4f4;
        case 0x3dd4f8u: goto label_3dd4f8;
        case 0x3dd4fcu: goto label_3dd4fc;
        case 0x3dd500u: goto label_3dd500;
        case 0x3dd504u: goto label_3dd504;
        case 0x3dd508u: goto label_3dd508;
        case 0x3dd50cu: goto label_3dd50c;
        case 0x3dd510u: goto label_3dd510;
        case 0x3dd514u: goto label_3dd514;
        case 0x3dd518u: goto label_3dd518;
        case 0x3dd51cu: goto label_3dd51c;
        case 0x3dd520u: goto label_3dd520;
        case 0x3dd524u: goto label_3dd524;
        case 0x3dd528u: goto label_3dd528;
        case 0x3dd52cu: goto label_3dd52c;
        case 0x3dd530u: goto label_3dd530;
        case 0x3dd534u: goto label_3dd534;
        case 0x3dd538u: goto label_3dd538;
        case 0x3dd53cu: goto label_3dd53c;
        case 0x3dd540u: goto label_3dd540;
        case 0x3dd544u: goto label_3dd544;
        case 0x3dd548u: goto label_3dd548;
        case 0x3dd54cu: goto label_3dd54c;
        case 0x3dd550u: goto label_3dd550;
        case 0x3dd554u: goto label_3dd554;
        case 0x3dd558u: goto label_3dd558;
        case 0x3dd55cu: goto label_3dd55c;
        case 0x3dd560u: goto label_3dd560;
        case 0x3dd564u: goto label_3dd564;
        case 0x3dd568u: goto label_3dd568;
        case 0x3dd56cu: goto label_3dd56c;
        case 0x3dd570u: goto label_3dd570;
        case 0x3dd574u: goto label_3dd574;
        case 0x3dd578u: goto label_3dd578;
        case 0x3dd57cu: goto label_3dd57c;
        case 0x3dd580u: goto label_3dd580;
        case 0x3dd584u: goto label_3dd584;
        case 0x3dd588u: goto label_3dd588;
        case 0x3dd58cu: goto label_3dd58c;
        case 0x3dd590u: goto label_3dd590;
        case 0x3dd594u: goto label_3dd594;
        case 0x3dd598u: goto label_3dd598;
        case 0x3dd59cu: goto label_3dd59c;
        case 0x3dd5a0u: goto label_3dd5a0;
        case 0x3dd5a4u: goto label_3dd5a4;
        case 0x3dd5a8u: goto label_3dd5a8;
        case 0x3dd5acu: goto label_3dd5ac;
        case 0x3dd5b0u: goto label_3dd5b0;
        case 0x3dd5b4u: goto label_3dd5b4;
        case 0x3dd5b8u: goto label_3dd5b8;
        case 0x3dd5bcu: goto label_3dd5bc;
        case 0x3dd5c0u: goto label_3dd5c0;
        case 0x3dd5c4u: goto label_3dd5c4;
        case 0x3dd5c8u: goto label_3dd5c8;
        case 0x3dd5ccu: goto label_3dd5cc;
        case 0x3dd5d0u: goto label_3dd5d0;
        case 0x3dd5d4u: goto label_3dd5d4;
        case 0x3dd5d8u: goto label_3dd5d8;
        case 0x3dd5dcu: goto label_3dd5dc;
        case 0x3dd5e0u: goto label_3dd5e0;
        case 0x3dd5e4u: goto label_3dd5e4;
        case 0x3dd5e8u: goto label_3dd5e8;
        case 0x3dd5ecu: goto label_3dd5ec;
        case 0x3dd5f0u: goto label_3dd5f0;
        case 0x3dd5f4u: goto label_3dd5f4;
        case 0x3dd5f8u: goto label_3dd5f8;
        case 0x3dd5fcu: goto label_3dd5fc;
        case 0x3dd600u: goto label_3dd600;
        case 0x3dd604u: goto label_3dd604;
        case 0x3dd608u: goto label_3dd608;
        case 0x3dd60cu: goto label_3dd60c;
        case 0x3dd610u: goto label_3dd610;
        case 0x3dd614u: goto label_3dd614;
        case 0x3dd618u: goto label_3dd618;
        case 0x3dd61cu: goto label_3dd61c;
        case 0x3dd620u: goto label_3dd620;
        case 0x3dd624u: goto label_3dd624;
        case 0x3dd628u: goto label_3dd628;
        case 0x3dd62cu: goto label_3dd62c;
        case 0x3dd630u: goto label_3dd630;
        case 0x3dd634u: goto label_3dd634;
        case 0x3dd638u: goto label_3dd638;
        case 0x3dd63cu: goto label_3dd63c;
        case 0x3dd640u: goto label_3dd640;
        case 0x3dd644u: goto label_3dd644;
        case 0x3dd648u: goto label_3dd648;
        case 0x3dd64cu: goto label_3dd64c;
        case 0x3dd650u: goto label_3dd650;
        case 0x3dd654u: goto label_3dd654;
        case 0x3dd658u: goto label_3dd658;
        case 0x3dd65cu: goto label_3dd65c;
        case 0x3dd660u: goto label_3dd660;
        case 0x3dd664u: goto label_3dd664;
        case 0x3dd668u: goto label_3dd668;
        case 0x3dd66cu: goto label_3dd66c;
        case 0x3dd670u: goto label_3dd670;
        case 0x3dd674u: goto label_3dd674;
        case 0x3dd678u: goto label_3dd678;
        case 0x3dd67cu: goto label_3dd67c;
        case 0x3dd680u: goto label_3dd680;
        case 0x3dd684u: goto label_3dd684;
        case 0x3dd688u: goto label_3dd688;
        case 0x3dd68cu: goto label_3dd68c;
        case 0x3dd690u: goto label_3dd690;
        case 0x3dd694u: goto label_3dd694;
        case 0x3dd698u: goto label_3dd698;
        case 0x3dd69cu: goto label_3dd69c;
        case 0x3dd6a0u: goto label_3dd6a0;
        case 0x3dd6a4u: goto label_3dd6a4;
        case 0x3dd6a8u: goto label_3dd6a8;
        case 0x3dd6acu: goto label_3dd6ac;
        case 0x3dd6b0u: goto label_3dd6b0;
        case 0x3dd6b4u: goto label_3dd6b4;
        case 0x3dd6b8u: goto label_3dd6b8;
        case 0x3dd6bcu: goto label_3dd6bc;
        case 0x3dd6c0u: goto label_3dd6c0;
        case 0x3dd6c4u: goto label_3dd6c4;
        case 0x3dd6c8u: goto label_3dd6c8;
        case 0x3dd6ccu: goto label_3dd6cc;
        case 0x3dd6d0u: goto label_3dd6d0;
        case 0x3dd6d4u: goto label_3dd6d4;
        case 0x3dd6d8u: goto label_3dd6d8;
        case 0x3dd6dcu: goto label_3dd6dc;
        case 0x3dd6e0u: goto label_3dd6e0;
        case 0x3dd6e4u: goto label_3dd6e4;
        case 0x3dd6e8u: goto label_3dd6e8;
        case 0x3dd6ecu: goto label_3dd6ec;
        case 0x3dd6f0u: goto label_3dd6f0;
        case 0x3dd6f4u: goto label_3dd6f4;
        case 0x3dd6f8u: goto label_3dd6f8;
        case 0x3dd6fcu: goto label_3dd6fc;
        case 0x3dd700u: goto label_3dd700;
        case 0x3dd704u: goto label_3dd704;
        case 0x3dd708u: goto label_3dd708;
        case 0x3dd70cu: goto label_3dd70c;
        case 0x3dd710u: goto label_3dd710;
        case 0x3dd714u: goto label_3dd714;
        case 0x3dd718u: goto label_3dd718;
        case 0x3dd71cu: goto label_3dd71c;
        case 0x3dd720u: goto label_3dd720;
        case 0x3dd724u: goto label_3dd724;
        case 0x3dd728u: goto label_3dd728;
        case 0x3dd72cu: goto label_3dd72c;
        case 0x3dd730u: goto label_3dd730;
        case 0x3dd734u: goto label_3dd734;
        case 0x3dd738u: goto label_3dd738;
        case 0x3dd73cu: goto label_3dd73c;
        case 0x3dd740u: goto label_3dd740;
        case 0x3dd744u: goto label_3dd744;
        case 0x3dd748u: goto label_3dd748;
        case 0x3dd74cu: goto label_3dd74c;
        case 0x3dd750u: goto label_3dd750;
        case 0x3dd754u: goto label_3dd754;
        case 0x3dd758u: goto label_3dd758;
        case 0x3dd75cu: goto label_3dd75c;
        case 0x3dd760u: goto label_3dd760;
        case 0x3dd764u: goto label_3dd764;
        case 0x3dd768u: goto label_3dd768;
        case 0x3dd76cu: goto label_3dd76c;
        case 0x3dd770u: goto label_3dd770;
        case 0x3dd774u: goto label_3dd774;
        case 0x3dd778u: goto label_3dd778;
        case 0x3dd77cu: goto label_3dd77c;
        case 0x3dd780u: goto label_3dd780;
        case 0x3dd784u: goto label_3dd784;
        case 0x3dd788u: goto label_3dd788;
        case 0x3dd78cu: goto label_3dd78c;
        case 0x3dd790u: goto label_3dd790;
        case 0x3dd794u: goto label_3dd794;
        case 0x3dd798u: goto label_3dd798;
        case 0x3dd79cu: goto label_3dd79c;
        case 0x3dd7a0u: goto label_3dd7a0;
        case 0x3dd7a4u: goto label_3dd7a4;
        case 0x3dd7a8u: goto label_3dd7a8;
        case 0x3dd7acu: goto label_3dd7ac;
        case 0x3dd7b0u: goto label_3dd7b0;
        case 0x3dd7b4u: goto label_3dd7b4;
        case 0x3dd7b8u: goto label_3dd7b8;
        case 0x3dd7bcu: goto label_3dd7bc;
        case 0x3dd7c0u: goto label_3dd7c0;
        case 0x3dd7c4u: goto label_3dd7c4;
        case 0x3dd7c8u: goto label_3dd7c8;
        case 0x3dd7ccu: goto label_3dd7cc;
        case 0x3dd7d0u: goto label_3dd7d0;
        case 0x3dd7d4u: goto label_3dd7d4;
        case 0x3dd7d8u: goto label_3dd7d8;
        case 0x3dd7dcu: goto label_3dd7dc;
        case 0x3dd7e0u: goto label_3dd7e0;
        case 0x3dd7e4u: goto label_3dd7e4;
        case 0x3dd7e8u: goto label_3dd7e8;
        case 0x3dd7ecu: goto label_3dd7ec;
        case 0x3dd7f0u: goto label_3dd7f0;
        case 0x3dd7f4u: goto label_3dd7f4;
        case 0x3dd7f8u: goto label_3dd7f8;
        case 0x3dd7fcu: goto label_3dd7fc;
        case 0x3dd800u: goto label_3dd800;
        case 0x3dd804u: goto label_3dd804;
        case 0x3dd808u: goto label_3dd808;
        case 0x3dd80cu: goto label_3dd80c;
        case 0x3dd810u: goto label_3dd810;
        case 0x3dd814u: goto label_3dd814;
        case 0x3dd818u: goto label_3dd818;
        case 0x3dd81cu: goto label_3dd81c;
        case 0x3dd820u: goto label_3dd820;
        case 0x3dd824u: goto label_3dd824;
        case 0x3dd828u: goto label_3dd828;
        case 0x3dd82cu: goto label_3dd82c;
        case 0x3dd830u: goto label_3dd830;
        case 0x3dd834u: goto label_3dd834;
        case 0x3dd838u: goto label_3dd838;
        case 0x3dd83cu: goto label_3dd83c;
        case 0x3dd840u: goto label_3dd840;
        case 0x3dd844u: goto label_3dd844;
        case 0x3dd848u: goto label_3dd848;
        case 0x3dd84cu: goto label_3dd84c;
        case 0x3dd850u: goto label_3dd850;
        case 0x3dd854u: goto label_3dd854;
        case 0x3dd858u: goto label_3dd858;
        case 0x3dd85cu: goto label_3dd85c;
        case 0x3dd860u: goto label_3dd860;
        case 0x3dd864u: goto label_3dd864;
        case 0x3dd868u: goto label_3dd868;
        case 0x3dd86cu: goto label_3dd86c;
        case 0x3dd870u: goto label_3dd870;
        case 0x3dd874u: goto label_3dd874;
        case 0x3dd878u: goto label_3dd878;
        case 0x3dd87cu: goto label_3dd87c;
        case 0x3dd880u: goto label_3dd880;
        case 0x3dd884u: goto label_3dd884;
        case 0x3dd888u: goto label_3dd888;
        case 0x3dd88cu: goto label_3dd88c;
        case 0x3dd890u: goto label_3dd890;
        case 0x3dd894u: goto label_3dd894;
        case 0x3dd898u: goto label_3dd898;
        case 0x3dd89cu: goto label_3dd89c;
        case 0x3dd8a0u: goto label_3dd8a0;
        case 0x3dd8a4u: goto label_3dd8a4;
        case 0x3dd8a8u: goto label_3dd8a8;
        case 0x3dd8acu: goto label_3dd8ac;
        case 0x3dd8b0u: goto label_3dd8b0;
        case 0x3dd8b4u: goto label_3dd8b4;
        case 0x3dd8b8u: goto label_3dd8b8;
        case 0x3dd8bcu: goto label_3dd8bc;
        case 0x3dd8c0u: goto label_3dd8c0;
        case 0x3dd8c4u: goto label_3dd8c4;
        case 0x3dd8c8u: goto label_3dd8c8;
        case 0x3dd8ccu: goto label_3dd8cc;
        case 0x3dd8d0u: goto label_3dd8d0;
        case 0x3dd8d4u: goto label_3dd8d4;
        case 0x3dd8d8u: goto label_3dd8d8;
        case 0x3dd8dcu: goto label_3dd8dc;
        case 0x3dd8e0u: goto label_3dd8e0;
        case 0x3dd8e4u: goto label_3dd8e4;
        case 0x3dd8e8u: goto label_3dd8e8;
        case 0x3dd8ecu: goto label_3dd8ec;
        case 0x3dd8f0u: goto label_3dd8f0;
        case 0x3dd8f4u: goto label_3dd8f4;
        case 0x3dd8f8u: goto label_3dd8f8;
        case 0x3dd8fcu: goto label_3dd8fc;
        case 0x3dd900u: goto label_3dd900;
        case 0x3dd904u: goto label_3dd904;
        case 0x3dd908u: goto label_3dd908;
        case 0x3dd90cu: goto label_3dd90c;
        case 0x3dd910u: goto label_3dd910;
        case 0x3dd914u: goto label_3dd914;
        case 0x3dd918u: goto label_3dd918;
        case 0x3dd91cu: goto label_3dd91c;
        case 0x3dd920u: goto label_3dd920;
        case 0x3dd924u: goto label_3dd924;
        case 0x3dd928u: goto label_3dd928;
        case 0x3dd92cu: goto label_3dd92c;
        case 0x3dd930u: goto label_3dd930;
        case 0x3dd934u: goto label_3dd934;
        case 0x3dd938u: goto label_3dd938;
        case 0x3dd93cu: goto label_3dd93c;
        case 0x3dd940u: goto label_3dd940;
        case 0x3dd944u: goto label_3dd944;
        case 0x3dd948u: goto label_3dd948;
        case 0x3dd94cu: goto label_3dd94c;
        case 0x3dd950u: goto label_3dd950;
        case 0x3dd954u: goto label_3dd954;
        case 0x3dd958u: goto label_3dd958;
        case 0x3dd95cu: goto label_3dd95c;
        case 0x3dd960u: goto label_3dd960;
        case 0x3dd964u: goto label_3dd964;
        case 0x3dd968u: goto label_3dd968;
        case 0x3dd96cu: goto label_3dd96c;
        case 0x3dd970u: goto label_3dd970;
        case 0x3dd974u: goto label_3dd974;
        case 0x3dd978u: goto label_3dd978;
        case 0x3dd97cu: goto label_3dd97c;
        case 0x3dd980u: goto label_3dd980;
        case 0x3dd984u: goto label_3dd984;
        case 0x3dd988u: goto label_3dd988;
        case 0x3dd98cu: goto label_3dd98c;
        case 0x3dd990u: goto label_3dd990;
        case 0x3dd994u: goto label_3dd994;
        case 0x3dd998u: goto label_3dd998;
        case 0x3dd99cu: goto label_3dd99c;
        case 0x3dd9a0u: goto label_3dd9a0;
        case 0x3dd9a4u: goto label_3dd9a4;
        case 0x3dd9a8u: goto label_3dd9a8;
        case 0x3dd9acu: goto label_3dd9ac;
        case 0x3dd9b0u: goto label_3dd9b0;
        case 0x3dd9b4u: goto label_3dd9b4;
        case 0x3dd9b8u: goto label_3dd9b8;
        case 0x3dd9bcu: goto label_3dd9bc;
        case 0x3dd9c0u: goto label_3dd9c0;
        case 0x3dd9c4u: goto label_3dd9c4;
        case 0x3dd9c8u: goto label_3dd9c8;
        case 0x3dd9ccu: goto label_3dd9cc;
        case 0x3dd9d0u: goto label_3dd9d0;
        case 0x3dd9d4u: goto label_3dd9d4;
        case 0x3dd9d8u: goto label_3dd9d8;
        case 0x3dd9dcu: goto label_3dd9dc;
        case 0x3dd9e0u: goto label_3dd9e0;
        case 0x3dd9e4u: goto label_3dd9e4;
        case 0x3dd9e8u: goto label_3dd9e8;
        case 0x3dd9ecu: goto label_3dd9ec;
        case 0x3dd9f0u: goto label_3dd9f0;
        case 0x3dd9f4u: goto label_3dd9f4;
        case 0x3dd9f8u: goto label_3dd9f8;
        case 0x3dd9fcu: goto label_3dd9fc;
        case 0x3dda00u: goto label_3dda00;
        case 0x3dda04u: goto label_3dda04;
        case 0x3dda08u: goto label_3dda08;
        case 0x3dda0cu: goto label_3dda0c;
        case 0x3dda10u: goto label_3dda10;
        case 0x3dda14u: goto label_3dda14;
        case 0x3dda18u: goto label_3dda18;
        case 0x3dda1cu: goto label_3dda1c;
        case 0x3dda20u: goto label_3dda20;
        case 0x3dda24u: goto label_3dda24;
        case 0x3dda28u: goto label_3dda28;
        case 0x3dda2cu: goto label_3dda2c;
        case 0x3dda30u: goto label_3dda30;
        case 0x3dda34u: goto label_3dda34;
        case 0x3dda38u: goto label_3dda38;
        case 0x3dda3cu: goto label_3dda3c;
        case 0x3dda40u: goto label_3dda40;
        case 0x3dda44u: goto label_3dda44;
        case 0x3dda48u: goto label_3dda48;
        case 0x3dda4cu: goto label_3dda4c;
        case 0x3dda50u: goto label_3dda50;
        case 0x3dda54u: goto label_3dda54;
        case 0x3dda58u: goto label_3dda58;
        case 0x3dda5cu: goto label_3dda5c;
        case 0x3dda60u: goto label_3dda60;
        case 0x3dda64u: goto label_3dda64;
        case 0x3dda68u: goto label_3dda68;
        case 0x3dda6cu: goto label_3dda6c;
        case 0x3dda70u: goto label_3dda70;
        case 0x3dda74u: goto label_3dda74;
        case 0x3dda78u: goto label_3dda78;
        case 0x3dda7cu: goto label_3dda7c;
        case 0x3dda80u: goto label_3dda80;
        case 0x3dda84u: goto label_3dda84;
        case 0x3dda88u: goto label_3dda88;
        case 0x3dda8cu: goto label_3dda8c;
        case 0x3dda90u: goto label_3dda90;
        case 0x3dda94u: goto label_3dda94;
        case 0x3dda98u: goto label_3dda98;
        case 0x3dda9cu: goto label_3dda9c;
        case 0x3ddaa0u: goto label_3ddaa0;
        case 0x3ddaa4u: goto label_3ddaa4;
        case 0x3ddaa8u: goto label_3ddaa8;
        case 0x3ddaacu: goto label_3ddaac;
        case 0x3ddab0u: goto label_3ddab0;
        case 0x3ddab4u: goto label_3ddab4;
        case 0x3ddab8u: goto label_3ddab8;
        case 0x3ddabcu: goto label_3ddabc;
        case 0x3ddac0u: goto label_3ddac0;
        case 0x3ddac4u: goto label_3ddac4;
        case 0x3ddac8u: goto label_3ddac8;
        case 0x3ddaccu: goto label_3ddacc;
        case 0x3ddad0u: goto label_3ddad0;
        case 0x3ddad4u: goto label_3ddad4;
        case 0x3ddad8u: goto label_3ddad8;
        case 0x3ddadcu: goto label_3ddadc;
        case 0x3ddae0u: goto label_3ddae0;
        case 0x3ddae4u: goto label_3ddae4;
        case 0x3ddae8u: goto label_3ddae8;
        case 0x3ddaecu: goto label_3ddaec;
        case 0x3ddaf0u: goto label_3ddaf0;
        case 0x3ddaf4u: goto label_3ddaf4;
        case 0x3ddaf8u: goto label_3ddaf8;
        case 0x3ddafcu: goto label_3ddafc;
        case 0x3ddb00u: goto label_3ddb00;
        case 0x3ddb04u: goto label_3ddb04;
        case 0x3ddb08u: goto label_3ddb08;
        case 0x3ddb0cu: goto label_3ddb0c;
        case 0x3ddb10u: goto label_3ddb10;
        case 0x3ddb14u: goto label_3ddb14;
        case 0x3ddb18u: goto label_3ddb18;
        case 0x3ddb1cu: goto label_3ddb1c;
        case 0x3ddb20u: goto label_3ddb20;
        case 0x3ddb24u: goto label_3ddb24;
        case 0x3ddb28u: goto label_3ddb28;
        case 0x3ddb2cu: goto label_3ddb2c;
        case 0x3ddb30u: goto label_3ddb30;
        case 0x3ddb34u: goto label_3ddb34;
        case 0x3ddb38u: goto label_3ddb38;
        case 0x3ddb3cu: goto label_3ddb3c;
        case 0x3ddb40u: goto label_3ddb40;
        case 0x3ddb44u: goto label_3ddb44;
        case 0x3ddb48u: goto label_3ddb48;
        case 0x3ddb4cu: goto label_3ddb4c;
        case 0x3ddb50u: goto label_3ddb50;
        case 0x3ddb54u: goto label_3ddb54;
        case 0x3ddb58u: goto label_3ddb58;
        case 0x3ddb5cu: goto label_3ddb5c;
        case 0x3ddb60u: goto label_3ddb60;
        case 0x3ddb64u: goto label_3ddb64;
        case 0x3ddb68u: goto label_3ddb68;
        case 0x3ddb6cu: goto label_3ddb6c;
        case 0x3ddb70u: goto label_3ddb70;
        case 0x3ddb74u: goto label_3ddb74;
        case 0x3ddb78u: goto label_3ddb78;
        case 0x3ddb7cu: goto label_3ddb7c;
        case 0x3ddb80u: goto label_3ddb80;
        case 0x3ddb84u: goto label_3ddb84;
        case 0x3ddb88u: goto label_3ddb88;
        case 0x3ddb8cu: goto label_3ddb8c;
        case 0x3ddb90u: goto label_3ddb90;
        case 0x3ddb94u: goto label_3ddb94;
        case 0x3ddb98u: goto label_3ddb98;
        case 0x3ddb9cu: goto label_3ddb9c;
        case 0x3ddba0u: goto label_3ddba0;
        case 0x3ddba4u: goto label_3ddba4;
        case 0x3ddba8u: goto label_3ddba8;
        case 0x3ddbacu: goto label_3ddbac;
        case 0x3ddbb0u: goto label_3ddbb0;
        case 0x3ddbb4u: goto label_3ddbb4;
        case 0x3ddbb8u: goto label_3ddbb8;
        case 0x3ddbbcu: goto label_3ddbbc;
        case 0x3ddbc0u: goto label_3ddbc0;
        case 0x3ddbc4u: goto label_3ddbc4;
        case 0x3ddbc8u: goto label_3ddbc8;
        case 0x3ddbccu: goto label_3ddbcc;
        case 0x3ddbd0u: goto label_3ddbd0;
        case 0x3ddbd4u: goto label_3ddbd4;
        case 0x3ddbd8u: goto label_3ddbd8;
        case 0x3ddbdcu: goto label_3ddbdc;
        case 0x3ddbe0u: goto label_3ddbe0;
        case 0x3ddbe4u: goto label_3ddbe4;
        case 0x3ddbe8u: goto label_3ddbe8;
        case 0x3ddbecu: goto label_3ddbec;
        case 0x3ddbf0u: goto label_3ddbf0;
        case 0x3ddbf4u: goto label_3ddbf4;
        case 0x3ddbf8u: goto label_3ddbf8;
        case 0x3ddbfcu: goto label_3ddbfc;
        case 0x3ddc00u: goto label_3ddc00;
        case 0x3ddc04u: goto label_3ddc04;
        case 0x3ddc08u: goto label_3ddc08;
        case 0x3ddc0cu: goto label_3ddc0c;
        case 0x3ddc10u: goto label_3ddc10;
        case 0x3ddc14u: goto label_3ddc14;
        case 0x3ddc18u: goto label_3ddc18;
        case 0x3ddc1cu: goto label_3ddc1c;
        case 0x3ddc20u: goto label_3ddc20;
        case 0x3ddc24u: goto label_3ddc24;
        case 0x3ddc28u: goto label_3ddc28;
        case 0x3ddc2cu: goto label_3ddc2c;
        case 0x3ddc30u: goto label_3ddc30;
        case 0x3ddc34u: goto label_3ddc34;
        case 0x3ddc38u: goto label_3ddc38;
        case 0x3ddc3cu: goto label_3ddc3c;
        case 0x3ddc40u: goto label_3ddc40;
        case 0x3ddc44u: goto label_3ddc44;
        case 0x3ddc48u: goto label_3ddc48;
        case 0x3ddc4cu: goto label_3ddc4c;
        case 0x3ddc50u: goto label_3ddc50;
        case 0x3ddc54u: goto label_3ddc54;
        case 0x3ddc58u: goto label_3ddc58;
        case 0x3ddc5cu: goto label_3ddc5c;
        case 0x3ddc60u: goto label_3ddc60;
        case 0x3ddc64u: goto label_3ddc64;
        case 0x3ddc68u: goto label_3ddc68;
        case 0x3ddc6cu: goto label_3ddc6c;
        case 0x3ddc70u: goto label_3ddc70;
        case 0x3ddc74u: goto label_3ddc74;
        case 0x3ddc78u: goto label_3ddc78;
        case 0x3ddc7cu: goto label_3ddc7c;
        case 0x3ddc80u: goto label_3ddc80;
        case 0x3ddc84u: goto label_3ddc84;
        case 0x3ddc88u: goto label_3ddc88;
        case 0x3ddc8cu: goto label_3ddc8c;
        case 0x3ddc90u: goto label_3ddc90;
        case 0x3ddc94u: goto label_3ddc94;
        case 0x3ddc98u: goto label_3ddc98;
        case 0x3ddc9cu: goto label_3ddc9c;
        case 0x3ddca0u: goto label_3ddca0;
        case 0x3ddca4u: goto label_3ddca4;
        case 0x3ddca8u: goto label_3ddca8;
        case 0x3ddcacu: goto label_3ddcac;
        case 0x3ddcb0u: goto label_3ddcb0;
        case 0x3ddcb4u: goto label_3ddcb4;
        case 0x3ddcb8u: goto label_3ddcb8;
        case 0x3ddcbcu: goto label_3ddcbc;
        case 0x3ddcc0u: goto label_3ddcc0;
        case 0x3ddcc4u: goto label_3ddcc4;
        case 0x3ddcc8u: goto label_3ddcc8;
        case 0x3ddcccu: goto label_3ddccc;
        case 0x3ddcd0u: goto label_3ddcd0;
        case 0x3ddcd4u: goto label_3ddcd4;
        case 0x3ddcd8u: goto label_3ddcd8;
        case 0x3ddcdcu: goto label_3ddcdc;
        case 0x3ddce0u: goto label_3ddce0;
        case 0x3ddce4u: goto label_3ddce4;
        case 0x3ddce8u: goto label_3ddce8;
        case 0x3ddcecu: goto label_3ddcec;
        case 0x3ddcf0u: goto label_3ddcf0;
        case 0x3ddcf4u: goto label_3ddcf4;
        case 0x3ddcf8u: goto label_3ddcf8;
        case 0x3ddcfcu: goto label_3ddcfc;
        case 0x3ddd00u: goto label_3ddd00;
        case 0x3ddd04u: goto label_3ddd04;
        case 0x3ddd08u: goto label_3ddd08;
        case 0x3ddd0cu: goto label_3ddd0c;
        case 0x3ddd10u: goto label_3ddd10;
        case 0x3ddd14u: goto label_3ddd14;
        case 0x3ddd18u: goto label_3ddd18;
        case 0x3ddd1cu: goto label_3ddd1c;
        case 0x3ddd20u: goto label_3ddd20;
        case 0x3ddd24u: goto label_3ddd24;
        case 0x3ddd28u: goto label_3ddd28;
        case 0x3ddd2cu: goto label_3ddd2c;
        case 0x3ddd30u: goto label_3ddd30;
        case 0x3ddd34u: goto label_3ddd34;
        case 0x3ddd38u: goto label_3ddd38;
        case 0x3ddd3cu: goto label_3ddd3c;
        case 0x3ddd40u: goto label_3ddd40;
        case 0x3ddd44u: goto label_3ddd44;
        case 0x3ddd48u: goto label_3ddd48;
        case 0x3ddd4cu: goto label_3ddd4c;
        case 0x3ddd50u: goto label_3ddd50;
        case 0x3ddd54u: goto label_3ddd54;
        case 0x3ddd58u: goto label_3ddd58;
        case 0x3ddd5cu: goto label_3ddd5c;
        case 0x3ddd60u: goto label_3ddd60;
        case 0x3ddd64u: goto label_3ddd64;
        case 0x3ddd68u: goto label_3ddd68;
        case 0x3ddd6cu: goto label_3ddd6c;
        case 0x3ddd70u: goto label_3ddd70;
        case 0x3ddd74u: goto label_3ddd74;
        case 0x3ddd78u: goto label_3ddd78;
        case 0x3ddd7cu: goto label_3ddd7c;
        case 0x3ddd80u: goto label_3ddd80;
        case 0x3ddd84u: goto label_3ddd84;
        case 0x3ddd88u: goto label_3ddd88;
        case 0x3ddd8cu: goto label_3ddd8c;
        case 0x3ddd90u: goto label_3ddd90;
        case 0x3ddd94u: goto label_3ddd94;
        case 0x3ddd98u: goto label_3ddd98;
        case 0x3ddd9cu: goto label_3ddd9c;
        case 0x3ddda0u: goto label_3ddda0;
        case 0x3ddda4u: goto label_3ddda4;
        case 0x3ddda8u: goto label_3ddda8;
        case 0x3dddacu: goto label_3dddac;
        case 0x3dddb0u: goto label_3dddb0;
        case 0x3dddb4u: goto label_3dddb4;
        case 0x3dddb8u: goto label_3dddb8;
        case 0x3dddbcu: goto label_3dddbc;
        case 0x3dddc0u: goto label_3dddc0;
        case 0x3dddc4u: goto label_3dddc4;
        case 0x3dddc8u: goto label_3dddc8;
        case 0x3dddccu: goto label_3dddcc;
        case 0x3dddd0u: goto label_3dddd0;
        case 0x3dddd4u: goto label_3dddd4;
        case 0x3dddd8u: goto label_3dddd8;
        case 0x3ddddcu: goto label_3ddddc;
        case 0x3ddde0u: goto label_3ddde0;
        case 0x3ddde4u: goto label_3ddde4;
        case 0x3ddde8u: goto label_3ddde8;
        case 0x3dddecu: goto label_3dddec;
        case 0x3dddf0u: goto label_3dddf0;
        case 0x3dddf4u: goto label_3dddf4;
        case 0x3dddf8u: goto label_3dddf8;
        case 0x3dddfcu: goto label_3dddfc;
        case 0x3dde00u: goto label_3dde00;
        case 0x3dde04u: goto label_3dde04;
        case 0x3dde08u: goto label_3dde08;
        case 0x3dde0cu: goto label_3dde0c;
        case 0x3dde10u: goto label_3dde10;
        case 0x3dde14u: goto label_3dde14;
        case 0x3dde18u: goto label_3dde18;
        case 0x3dde1cu: goto label_3dde1c;
        case 0x3dde20u: goto label_3dde20;
        case 0x3dde24u: goto label_3dde24;
        case 0x3dde28u: goto label_3dde28;
        case 0x3dde2cu: goto label_3dde2c;
        case 0x3dde30u: goto label_3dde30;
        case 0x3dde34u: goto label_3dde34;
        case 0x3dde38u: goto label_3dde38;
        case 0x3dde3cu: goto label_3dde3c;
        case 0x3dde40u: goto label_3dde40;
        case 0x3dde44u: goto label_3dde44;
        case 0x3dde48u: goto label_3dde48;
        case 0x3dde4cu: goto label_3dde4c;
        case 0x3dde50u: goto label_3dde50;
        case 0x3dde54u: goto label_3dde54;
        case 0x3dde58u: goto label_3dde58;
        case 0x3dde5cu: goto label_3dde5c;
        case 0x3dde60u: goto label_3dde60;
        case 0x3dde64u: goto label_3dde64;
        case 0x3dde68u: goto label_3dde68;
        case 0x3dde6cu: goto label_3dde6c;
        case 0x3dde70u: goto label_3dde70;
        case 0x3dde74u: goto label_3dde74;
        case 0x3dde78u: goto label_3dde78;
        case 0x3dde7cu: goto label_3dde7c;
        case 0x3dde80u: goto label_3dde80;
        case 0x3dde84u: goto label_3dde84;
        case 0x3dde88u: goto label_3dde88;
        case 0x3dde8cu: goto label_3dde8c;
        case 0x3dde90u: goto label_3dde90;
        case 0x3dde94u: goto label_3dde94;
        case 0x3dde98u: goto label_3dde98;
        case 0x3dde9cu: goto label_3dde9c;
        case 0x3ddea0u: goto label_3ddea0;
        case 0x3ddea4u: goto label_3ddea4;
        case 0x3ddea8u: goto label_3ddea8;
        case 0x3ddeacu: goto label_3ddeac;
        case 0x3ddeb0u: goto label_3ddeb0;
        case 0x3ddeb4u: goto label_3ddeb4;
        case 0x3ddeb8u: goto label_3ddeb8;
        case 0x3ddebcu: goto label_3ddebc;
        case 0x3ddec0u: goto label_3ddec0;
        case 0x3ddec4u: goto label_3ddec4;
        case 0x3ddec8u: goto label_3ddec8;
        case 0x3ddeccu: goto label_3ddecc;
        case 0x3dded0u: goto label_3dded0;
        case 0x3dded4u: goto label_3dded4;
        case 0x3dded8u: goto label_3dded8;
        case 0x3ddedcu: goto label_3ddedc;
        case 0x3ddee0u: goto label_3ddee0;
        case 0x3ddee4u: goto label_3ddee4;
        case 0x3ddee8u: goto label_3ddee8;
        case 0x3ddeecu: goto label_3ddeec;
        case 0x3ddef0u: goto label_3ddef0;
        case 0x3ddef4u: goto label_3ddef4;
        case 0x3ddef8u: goto label_3ddef8;
        case 0x3ddefcu: goto label_3ddefc;
        case 0x3ddf00u: goto label_3ddf00;
        case 0x3ddf04u: goto label_3ddf04;
        case 0x3ddf08u: goto label_3ddf08;
        case 0x3ddf0cu: goto label_3ddf0c;
        case 0x3ddf10u: goto label_3ddf10;
        case 0x3ddf14u: goto label_3ddf14;
        case 0x3ddf18u: goto label_3ddf18;
        case 0x3ddf1cu: goto label_3ddf1c;
        case 0x3ddf20u: goto label_3ddf20;
        case 0x3ddf24u: goto label_3ddf24;
        case 0x3ddf28u: goto label_3ddf28;
        case 0x3ddf2cu: goto label_3ddf2c;
        case 0x3ddf30u: goto label_3ddf30;
        case 0x3ddf34u: goto label_3ddf34;
        case 0x3ddf38u: goto label_3ddf38;
        case 0x3ddf3cu: goto label_3ddf3c;
        case 0x3ddf40u: goto label_3ddf40;
        case 0x3ddf44u: goto label_3ddf44;
        case 0x3ddf48u: goto label_3ddf48;
        case 0x3ddf4cu: goto label_3ddf4c;
        case 0x3ddf50u: goto label_3ddf50;
        case 0x3ddf54u: goto label_3ddf54;
        case 0x3ddf58u: goto label_3ddf58;
        case 0x3ddf5cu: goto label_3ddf5c;
        case 0x3ddf60u: goto label_3ddf60;
        case 0x3ddf64u: goto label_3ddf64;
        case 0x3ddf68u: goto label_3ddf68;
        case 0x3ddf6cu: goto label_3ddf6c;
        case 0x3ddf70u: goto label_3ddf70;
        case 0x3ddf74u: goto label_3ddf74;
        case 0x3ddf78u: goto label_3ddf78;
        case 0x3ddf7cu: goto label_3ddf7c;
        case 0x3ddf80u: goto label_3ddf80;
        case 0x3ddf84u: goto label_3ddf84;
        case 0x3ddf88u: goto label_3ddf88;
        case 0x3ddf8cu: goto label_3ddf8c;
        case 0x3ddf90u: goto label_3ddf90;
        case 0x3ddf94u: goto label_3ddf94;
        case 0x3ddf98u: goto label_3ddf98;
        case 0x3ddf9cu: goto label_3ddf9c;
        case 0x3ddfa0u: goto label_3ddfa0;
        case 0x3ddfa4u: goto label_3ddfa4;
        case 0x3ddfa8u: goto label_3ddfa8;
        case 0x3ddfacu: goto label_3ddfac;
        case 0x3ddfb0u: goto label_3ddfb0;
        case 0x3ddfb4u: goto label_3ddfb4;
        case 0x3ddfb8u: goto label_3ddfb8;
        case 0x3ddfbcu: goto label_3ddfbc;
        case 0x3ddfc0u: goto label_3ddfc0;
        case 0x3ddfc4u: goto label_3ddfc4;
        case 0x3ddfc8u: goto label_3ddfc8;
        case 0x3ddfccu: goto label_3ddfcc;
        case 0x3ddfd0u: goto label_3ddfd0;
        case 0x3ddfd4u: goto label_3ddfd4;
        case 0x3ddfd8u: goto label_3ddfd8;
        case 0x3ddfdcu: goto label_3ddfdc;
        case 0x3ddfe0u: goto label_3ddfe0;
        case 0x3ddfe4u: goto label_3ddfe4;
        case 0x3ddfe8u: goto label_3ddfe8;
        case 0x3ddfecu: goto label_3ddfec;
        case 0x3ddff0u: goto label_3ddff0;
        case 0x3ddff4u: goto label_3ddff4;
        case 0x3ddff8u: goto label_3ddff8;
        case 0x3ddffcu: goto label_3ddffc;
        case 0x3de000u: goto label_3de000;
        case 0x3de004u: goto label_3de004;
        case 0x3de008u: goto label_3de008;
        case 0x3de00cu: goto label_3de00c;
        case 0x3de010u: goto label_3de010;
        case 0x3de014u: goto label_3de014;
        case 0x3de018u: goto label_3de018;
        case 0x3de01cu: goto label_3de01c;
        case 0x3de020u: goto label_3de020;
        case 0x3de024u: goto label_3de024;
        case 0x3de028u: goto label_3de028;
        case 0x3de02cu: goto label_3de02c;
        case 0x3de030u: goto label_3de030;
        case 0x3de034u: goto label_3de034;
        case 0x3de038u: goto label_3de038;
        case 0x3de03cu: goto label_3de03c;
        case 0x3de040u: goto label_3de040;
        case 0x3de044u: goto label_3de044;
        case 0x3de048u: goto label_3de048;
        case 0x3de04cu: goto label_3de04c;
        case 0x3de050u: goto label_3de050;
        case 0x3de054u: goto label_3de054;
        case 0x3de058u: goto label_3de058;
        case 0x3de05cu: goto label_3de05c;
        case 0x3de060u: goto label_3de060;
        case 0x3de064u: goto label_3de064;
        case 0x3de068u: goto label_3de068;
        case 0x3de06cu: goto label_3de06c;
        case 0x3de070u: goto label_3de070;
        case 0x3de074u: goto label_3de074;
        case 0x3de078u: goto label_3de078;
        case 0x3de07cu: goto label_3de07c;
        case 0x3de080u: goto label_3de080;
        case 0x3de084u: goto label_3de084;
        case 0x3de088u: goto label_3de088;
        case 0x3de08cu: goto label_3de08c;
        case 0x3de090u: goto label_3de090;
        case 0x3de094u: goto label_3de094;
        case 0x3de098u: goto label_3de098;
        case 0x3de09cu: goto label_3de09c;
        case 0x3de0a0u: goto label_3de0a0;
        case 0x3de0a4u: goto label_3de0a4;
        case 0x3de0a8u: goto label_3de0a8;
        case 0x3de0acu: goto label_3de0ac;
        case 0x3de0b0u: goto label_3de0b0;
        case 0x3de0b4u: goto label_3de0b4;
        case 0x3de0b8u: goto label_3de0b8;
        case 0x3de0bcu: goto label_3de0bc;
        case 0x3de0c0u: goto label_3de0c0;
        case 0x3de0c4u: goto label_3de0c4;
        case 0x3de0c8u: goto label_3de0c8;
        case 0x3de0ccu: goto label_3de0cc;
        case 0x3de0d0u: goto label_3de0d0;
        case 0x3de0d4u: goto label_3de0d4;
        case 0x3de0d8u: goto label_3de0d8;
        case 0x3de0dcu: goto label_3de0dc;
        case 0x3de0e0u: goto label_3de0e0;
        case 0x3de0e4u: goto label_3de0e4;
        case 0x3de0e8u: goto label_3de0e8;
        case 0x3de0ecu: goto label_3de0ec;
        case 0x3de0f0u: goto label_3de0f0;
        case 0x3de0f4u: goto label_3de0f4;
        case 0x3de0f8u: goto label_3de0f8;
        case 0x3de0fcu: goto label_3de0fc;
        case 0x3de100u: goto label_3de100;
        case 0x3de104u: goto label_3de104;
        case 0x3de108u: goto label_3de108;
        case 0x3de10cu: goto label_3de10c;
        case 0x3de110u: goto label_3de110;
        case 0x3de114u: goto label_3de114;
        case 0x3de118u: goto label_3de118;
        case 0x3de11cu: goto label_3de11c;
        case 0x3de120u: goto label_3de120;
        case 0x3de124u: goto label_3de124;
        case 0x3de128u: goto label_3de128;
        case 0x3de12cu: goto label_3de12c;
        case 0x3de130u: goto label_3de130;
        case 0x3de134u: goto label_3de134;
        case 0x3de138u: goto label_3de138;
        case 0x3de13cu: goto label_3de13c;
        case 0x3de140u: goto label_3de140;
        case 0x3de144u: goto label_3de144;
        case 0x3de148u: goto label_3de148;
        case 0x3de14cu: goto label_3de14c;
        case 0x3de150u: goto label_3de150;
        case 0x3de154u: goto label_3de154;
        case 0x3de158u: goto label_3de158;
        case 0x3de15cu: goto label_3de15c;
        case 0x3de160u: goto label_3de160;
        case 0x3de164u: goto label_3de164;
        case 0x3de168u: goto label_3de168;
        case 0x3de16cu: goto label_3de16c;
        case 0x3de170u: goto label_3de170;
        case 0x3de174u: goto label_3de174;
        case 0x3de178u: goto label_3de178;
        case 0x3de17cu: goto label_3de17c;
        case 0x3de180u: goto label_3de180;
        case 0x3de184u: goto label_3de184;
        case 0x3de188u: goto label_3de188;
        case 0x3de18cu: goto label_3de18c;
        case 0x3de190u: goto label_3de190;
        case 0x3de194u: goto label_3de194;
        case 0x3de198u: goto label_3de198;
        case 0x3de19cu: goto label_3de19c;
        case 0x3de1a0u: goto label_3de1a0;
        case 0x3de1a4u: goto label_3de1a4;
        case 0x3de1a8u: goto label_3de1a8;
        case 0x3de1acu: goto label_3de1ac;
        case 0x3de1b0u: goto label_3de1b0;
        case 0x3de1b4u: goto label_3de1b4;
        case 0x3de1b8u: goto label_3de1b8;
        case 0x3de1bcu: goto label_3de1bc;
        case 0x3de1c0u: goto label_3de1c0;
        case 0x3de1c4u: goto label_3de1c4;
        case 0x3de1c8u: goto label_3de1c8;
        case 0x3de1ccu: goto label_3de1cc;
        case 0x3de1d0u: goto label_3de1d0;
        case 0x3de1d4u: goto label_3de1d4;
        case 0x3de1d8u: goto label_3de1d8;
        case 0x3de1dcu: goto label_3de1dc;
        case 0x3de1e0u: goto label_3de1e0;
        case 0x3de1e4u: goto label_3de1e4;
        case 0x3de1e8u: goto label_3de1e8;
        case 0x3de1ecu: goto label_3de1ec;
        case 0x3de1f0u: goto label_3de1f0;
        case 0x3de1f4u: goto label_3de1f4;
        case 0x3de1f8u: goto label_3de1f8;
        case 0x3de1fcu: goto label_3de1fc;
        case 0x3de200u: goto label_3de200;
        case 0x3de204u: goto label_3de204;
        case 0x3de208u: goto label_3de208;
        case 0x3de20cu: goto label_3de20c;
        case 0x3de210u: goto label_3de210;
        case 0x3de214u: goto label_3de214;
        case 0x3de218u: goto label_3de218;
        case 0x3de21cu: goto label_3de21c;
        case 0x3de220u: goto label_3de220;
        case 0x3de224u: goto label_3de224;
        case 0x3de228u: goto label_3de228;
        case 0x3de22cu: goto label_3de22c;
        case 0x3de230u: goto label_3de230;
        case 0x3de234u: goto label_3de234;
        case 0x3de238u: goto label_3de238;
        case 0x3de23cu: goto label_3de23c;
        case 0x3de240u: goto label_3de240;
        case 0x3de244u: goto label_3de244;
        case 0x3de248u: goto label_3de248;
        case 0x3de24cu: goto label_3de24c;
        case 0x3de250u: goto label_3de250;
        case 0x3de254u: goto label_3de254;
        case 0x3de258u: goto label_3de258;
        case 0x3de25cu: goto label_3de25c;
        case 0x3de260u: goto label_3de260;
        case 0x3de264u: goto label_3de264;
        case 0x3de268u: goto label_3de268;
        case 0x3de26cu: goto label_3de26c;
        case 0x3de270u: goto label_3de270;
        case 0x3de274u: goto label_3de274;
        case 0x3de278u: goto label_3de278;
        case 0x3de27cu: goto label_3de27c;
        case 0x3de280u: goto label_3de280;
        case 0x3de284u: goto label_3de284;
        case 0x3de288u: goto label_3de288;
        case 0x3de28cu: goto label_3de28c;
        case 0x3de290u: goto label_3de290;
        case 0x3de294u: goto label_3de294;
        case 0x3de298u: goto label_3de298;
        case 0x3de29cu: goto label_3de29c;
        case 0x3de2a0u: goto label_3de2a0;
        case 0x3de2a4u: goto label_3de2a4;
        case 0x3de2a8u: goto label_3de2a8;
        case 0x3de2acu: goto label_3de2ac;
        case 0x3de2b0u: goto label_3de2b0;
        case 0x3de2b4u: goto label_3de2b4;
        case 0x3de2b8u: goto label_3de2b8;
        case 0x3de2bcu: goto label_3de2bc;
        case 0x3de2c0u: goto label_3de2c0;
        case 0x3de2c4u: goto label_3de2c4;
        case 0x3de2c8u: goto label_3de2c8;
        case 0x3de2ccu: goto label_3de2cc;
        case 0x3de2d0u: goto label_3de2d0;
        case 0x3de2d4u: goto label_3de2d4;
        case 0x3de2d8u: goto label_3de2d8;
        case 0x3de2dcu: goto label_3de2dc;
        case 0x3de2e0u: goto label_3de2e0;
        case 0x3de2e4u: goto label_3de2e4;
        case 0x3de2e8u: goto label_3de2e8;
        case 0x3de2ecu: goto label_3de2ec;
        case 0x3de2f0u: goto label_3de2f0;
        case 0x3de2f4u: goto label_3de2f4;
        case 0x3de2f8u: goto label_3de2f8;
        case 0x3de2fcu: goto label_3de2fc;
        case 0x3de300u: goto label_3de300;
        case 0x3de304u: goto label_3de304;
        case 0x3de308u: goto label_3de308;
        case 0x3de30cu: goto label_3de30c;
        case 0x3de310u: goto label_3de310;
        case 0x3de314u: goto label_3de314;
        case 0x3de318u: goto label_3de318;
        case 0x3de31cu: goto label_3de31c;
        case 0x3de320u: goto label_3de320;
        case 0x3de324u: goto label_3de324;
        case 0x3de328u: goto label_3de328;
        case 0x3de32cu: goto label_3de32c;
        case 0x3de330u: goto label_3de330;
        case 0x3de334u: goto label_3de334;
        case 0x3de338u: goto label_3de338;
        case 0x3de33cu: goto label_3de33c;
        case 0x3de340u: goto label_3de340;
        case 0x3de344u: goto label_3de344;
        case 0x3de348u: goto label_3de348;
        case 0x3de34cu: goto label_3de34c;
        case 0x3de350u: goto label_3de350;
        case 0x3de354u: goto label_3de354;
        case 0x3de358u: goto label_3de358;
        case 0x3de35cu: goto label_3de35c;
        case 0x3de360u: goto label_3de360;
        case 0x3de364u: goto label_3de364;
        case 0x3de368u: goto label_3de368;
        case 0x3de36cu: goto label_3de36c;
        case 0x3de370u: goto label_3de370;
        case 0x3de374u: goto label_3de374;
        case 0x3de378u: goto label_3de378;
        case 0x3de37cu: goto label_3de37c;
        case 0x3de380u: goto label_3de380;
        case 0x3de384u: goto label_3de384;
        case 0x3de388u: goto label_3de388;
        case 0x3de38cu: goto label_3de38c;
        case 0x3de390u: goto label_3de390;
        case 0x3de394u: goto label_3de394;
        case 0x3de398u: goto label_3de398;
        case 0x3de39cu: goto label_3de39c;
        case 0x3de3a0u: goto label_3de3a0;
        case 0x3de3a4u: goto label_3de3a4;
        case 0x3de3a8u: goto label_3de3a8;
        case 0x3de3acu: goto label_3de3ac;
        case 0x3de3b0u: goto label_3de3b0;
        case 0x3de3b4u: goto label_3de3b4;
        case 0x3de3b8u: goto label_3de3b8;
        case 0x3de3bcu: goto label_3de3bc;
        case 0x3de3c0u: goto label_3de3c0;
        case 0x3de3c4u: goto label_3de3c4;
        case 0x3de3c8u: goto label_3de3c8;
        case 0x3de3ccu: goto label_3de3cc;
        case 0x3de3d0u: goto label_3de3d0;
        case 0x3de3d4u: goto label_3de3d4;
        case 0x3de3d8u: goto label_3de3d8;
        case 0x3de3dcu: goto label_3de3dc;
        case 0x3de3e0u: goto label_3de3e0;
        case 0x3de3e4u: goto label_3de3e4;
        case 0x3de3e8u: goto label_3de3e8;
        case 0x3de3ecu: goto label_3de3ec;
        case 0x3de3f0u: goto label_3de3f0;
        case 0x3de3f4u: goto label_3de3f4;
        case 0x3de3f8u: goto label_3de3f8;
        case 0x3de3fcu: goto label_3de3fc;
        case 0x3de400u: goto label_3de400;
        case 0x3de404u: goto label_3de404;
        case 0x3de408u: goto label_3de408;
        case 0x3de40cu: goto label_3de40c;
        case 0x3de410u: goto label_3de410;
        case 0x3de414u: goto label_3de414;
        case 0x3de418u: goto label_3de418;
        case 0x3de41cu: goto label_3de41c;
        case 0x3de420u: goto label_3de420;
        case 0x3de424u: goto label_3de424;
        case 0x3de428u: goto label_3de428;
        case 0x3de42cu: goto label_3de42c;
        case 0x3de430u: goto label_3de430;
        case 0x3de434u: goto label_3de434;
        case 0x3de438u: goto label_3de438;
        case 0x3de43cu: goto label_3de43c;
        case 0x3de440u: goto label_3de440;
        case 0x3de444u: goto label_3de444;
        case 0x3de448u: goto label_3de448;
        case 0x3de44cu: goto label_3de44c;
        case 0x3de450u: goto label_3de450;
        case 0x3de454u: goto label_3de454;
        case 0x3de458u: goto label_3de458;
        case 0x3de45cu: goto label_3de45c;
        case 0x3de460u: goto label_3de460;
        case 0x3de464u: goto label_3de464;
        case 0x3de468u: goto label_3de468;
        case 0x3de46cu: goto label_3de46c;
        case 0x3de470u: goto label_3de470;
        case 0x3de474u: goto label_3de474;
        case 0x3de478u: goto label_3de478;
        case 0x3de47cu: goto label_3de47c;
        case 0x3de480u: goto label_3de480;
        case 0x3de484u: goto label_3de484;
        case 0x3de488u: goto label_3de488;
        case 0x3de48cu: goto label_3de48c;
        case 0x3de490u: goto label_3de490;
        case 0x3de494u: goto label_3de494;
        case 0x3de498u: goto label_3de498;
        case 0x3de49cu: goto label_3de49c;
        case 0x3de4a0u: goto label_3de4a0;
        case 0x3de4a4u: goto label_3de4a4;
        case 0x3de4a8u: goto label_3de4a8;
        case 0x3de4acu: goto label_3de4ac;
        case 0x3de4b0u: goto label_3de4b0;
        case 0x3de4b4u: goto label_3de4b4;
        case 0x3de4b8u: goto label_3de4b8;
        case 0x3de4bcu: goto label_3de4bc;
        case 0x3de4c0u: goto label_3de4c0;
        case 0x3de4c4u: goto label_3de4c4;
        case 0x3de4c8u: goto label_3de4c8;
        case 0x3de4ccu: goto label_3de4cc;
        case 0x3de4d0u: goto label_3de4d0;
        case 0x3de4d4u: goto label_3de4d4;
        case 0x3de4d8u: goto label_3de4d8;
        case 0x3de4dcu: goto label_3de4dc;
        case 0x3de4e0u: goto label_3de4e0;
        case 0x3de4e4u: goto label_3de4e4;
        case 0x3de4e8u: goto label_3de4e8;
        case 0x3de4ecu: goto label_3de4ec;
        case 0x3de4f0u: goto label_3de4f0;
        case 0x3de4f4u: goto label_3de4f4;
        case 0x3de4f8u: goto label_3de4f8;
        case 0x3de4fcu: goto label_3de4fc;
        case 0x3de500u: goto label_3de500;
        case 0x3de504u: goto label_3de504;
        case 0x3de508u: goto label_3de508;
        case 0x3de50cu: goto label_3de50c;
        case 0x3de510u: goto label_3de510;
        case 0x3de514u: goto label_3de514;
        case 0x3de518u: goto label_3de518;
        case 0x3de51cu: goto label_3de51c;
        case 0x3de520u: goto label_3de520;
        case 0x3de524u: goto label_3de524;
        case 0x3de528u: goto label_3de528;
        case 0x3de52cu: goto label_3de52c;
        case 0x3de530u: goto label_3de530;
        case 0x3de534u: goto label_3de534;
        case 0x3de538u: goto label_3de538;
        case 0x3de53cu: goto label_3de53c;
        case 0x3de540u: goto label_3de540;
        case 0x3de544u: goto label_3de544;
        case 0x3de548u: goto label_3de548;
        case 0x3de54cu: goto label_3de54c;
        case 0x3de550u: goto label_3de550;
        case 0x3de554u: goto label_3de554;
        case 0x3de558u: goto label_3de558;
        case 0x3de55cu: goto label_3de55c;
        case 0x3de560u: goto label_3de560;
        case 0x3de564u: goto label_3de564;
        case 0x3de568u: goto label_3de568;
        case 0x3de56cu: goto label_3de56c;
        case 0x3de570u: goto label_3de570;
        case 0x3de574u: goto label_3de574;
        case 0x3de578u: goto label_3de578;
        case 0x3de57cu: goto label_3de57c;
        case 0x3de580u: goto label_3de580;
        case 0x3de584u: goto label_3de584;
        case 0x3de588u: goto label_3de588;
        case 0x3de58cu: goto label_3de58c;
        case 0x3de590u: goto label_3de590;
        case 0x3de594u: goto label_3de594;
        case 0x3de598u: goto label_3de598;
        case 0x3de59cu: goto label_3de59c;
        case 0x3de5a0u: goto label_3de5a0;
        case 0x3de5a4u: goto label_3de5a4;
        case 0x3de5a8u: goto label_3de5a8;
        case 0x3de5acu: goto label_3de5ac;
        case 0x3de5b0u: goto label_3de5b0;
        case 0x3de5b4u: goto label_3de5b4;
        case 0x3de5b8u: goto label_3de5b8;
        case 0x3de5bcu: goto label_3de5bc;
        case 0x3de5c0u: goto label_3de5c0;
        case 0x3de5c4u: goto label_3de5c4;
        case 0x3de5c8u: goto label_3de5c8;
        case 0x3de5ccu: goto label_3de5cc;
        case 0x3de5d0u: goto label_3de5d0;
        case 0x3de5d4u: goto label_3de5d4;
        case 0x3de5d8u: goto label_3de5d8;
        case 0x3de5dcu: goto label_3de5dc;
        case 0x3de5e0u: goto label_3de5e0;
        case 0x3de5e4u: goto label_3de5e4;
        case 0x3de5e8u: goto label_3de5e8;
        case 0x3de5ecu: goto label_3de5ec;
        case 0x3de5f0u: goto label_3de5f0;
        case 0x3de5f4u: goto label_3de5f4;
        case 0x3de5f8u: goto label_3de5f8;
        case 0x3de5fcu: goto label_3de5fc;
        case 0x3de600u: goto label_3de600;
        case 0x3de604u: goto label_3de604;
        case 0x3de608u: goto label_3de608;
        case 0x3de60cu: goto label_3de60c;
        case 0x3de610u: goto label_3de610;
        case 0x3de614u: goto label_3de614;
        case 0x3de618u: goto label_3de618;
        case 0x3de61cu: goto label_3de61c;
        case 0x3de620u: goto label_3de620;
        case 0x3de624u: goto label_3de624;
        case 0x3de628u: goto label_3de628;
        case 0x3de62cu: goto label_3de62c;
        case 0x3de630u: goto label_3de630;
        case 0x3de634u: goto label_3de634;
        case 0x3de638u: goto label_3de638;
        case 0x3de63cu: goto label_3de63c;
        case 0x3de640u: goto label_3de640;
        case 0x3de644u: goto label_3de644;
        case 0x3de648u: goto label_3de648;
        case 0x3de64cu: goto label_3de64c;
        case 0x3de650u: goto label_3de650;
        case 0x3de654u: goto label_3de654;
        case 0x3de658u: goto label_3de658;
        case 0x3de65cu: goto label_3de65c;
        case 0x3de660u: goto label_3de660;
        case 0x3de664u: goto label_3de664;
        case 0x3de668u: goto label_3de668;
        case 0x3de66cu: goto label_3de66c;
        case 0x3de670u: goto label_3de670;
        case 0x3de674u: goto label_3de674;
        case 0x3de678u: goto label_3de678;
        case 0x3de67cu: goto label_3de67c;
        case 0x3de680u: goto label_3de680;
        case 0x3de684u: goto label_3de684;
        case 0x3de688u: goto label_3de688;
        case 0x3de68cu: goto label_3de68c;
        case 0x3de690u: goto label_3de690;
        case 0x3de694u: goto label_3de694;
        case 0x3de698u: goto label_3de698;
        case 0x3de69cu: goto label_3de69c;
        case 0x3de6a0u: goto label_3de6a0;
        case 0x3de6a4u: goto label_3de6a4;
        case 0x3de6a8u: goto label_3de6a8;
        case 0x3de6acu: goto label_3de6ac;
        case 0x3de6b0u: goto label_3de6b0;
        case 0x3de6b4u: goto label_3de6b4;
        case 0x3de6b8u: goto label_3de6b8;
        case 0x3de6bcu: goto label_3de6bc;
        case 0x3de6c0u: goto label_3de6c0;
        case 0x3de6c4u: goto label_3de6c4;
        case 0x3de6c8u: goto label_3de6c8;
        case 0x3de6ccu: goto label_3de6cc;
        case 0x3de6d0u: goto label_3de6d0;
        case 0x3de6d4u: goto label_3de6d4;
        case 0x3de6d8u: goto label_3de6d8;
        case 0x3de6dcu: goto label_3de6dc;
        case 0x3de6e0u: goto label_3de6e0;
        case 0x3de6e4u: goto label_3de6e4;
        case 0x3de6e8u: goto label_3de6e8;
        case 0x3de6ecu: goto label_3de6ec;
        case 0x3de6f0u: goto label_3de6f0;
        case 0x3de6f4u: goto label_3de6f4;
        case 0x3de6f8u: goto label_3de6f8;
        case 0x3de6fcu: goto label_3de6fc;
        case 0x3de700u: goto label_3de700;
        case 0x3de704u: goto label_3de704;
        case 0x3de708u: goto label_3de708;
        case 0x3de70cu: goto label_3de70c;
        case 0x3de710u: goto label_3de710;
        case 0x3de714u: goto label_3de714;
        case 0x3de718u: goto label_3de718;
        case 0x3de71cu: goto label_3de71c;
        case 0x3de720u: goto label_3de720;
        case 0x3de724u: goto label_3de724;
        case 0x3de728u: goto label_3de728;
        case 0x3de72cu: goto label_3de72c;
        case 0x3de730u: goto label_3de730;
        case 0x3de734u: goto label_3de734;
        case 0x3de738u: goto label_3de738;
        case 0x3de73cu: goto label_3de73c;
        case 0x3de740u: goto label_3de740;
        case 0x3de744u: goto label_3de744;
        case 0x3de748u: goto label_3de748;
        case 0x3de74cu: goto label_3de74c;
        case 0x3de750u: goto label_3de750;
        case 0x3de754u: goto label_3de754;
        case 0x3de758u: goto label_3de758;
        case 0x3de75cu: goto label_3de75c;
        case 0x3de760u: goto label_3de760;
        case 0x3de764u: goto label_3de764;
        case 0x3de768u: goto label_3de768;
        case 0x3de76cu: goto label_3de76c;
        case 0x3de770u: goto label_3de770;
        case 0x3de774u: goto label_3de774;
        case 0x3de778u: goto label_3de778;
        case 0x3de77cu: goto label_3de77c;
        case 0x3de780u: goto label_3de780;
        case 0x3de784u: goto label_3de784;
        case 0x3de788u: goto label_3de788;
        case 0x3de78cu: goto label_3de78c;
        case 0x3de790u: goto label_3de790;
        case 0x3de794u: goto label_3de794;
        case 0x3de798u: goto label_3de798;
        case 0x3de79cu: goto label_3de79c;
        case 0x3de7a0u: goto label_3de7a0;
        case 0x3de7a4u: goto label_3de7a4;
        case 0x3de7a8u: goto label_3de7a8;
        case 0x3de7acu: goto label_3de7ac;
        case 0x3de7b0u: goto label_3de7b0;
        case 0x3de7b4u: goto label_3de7b4;
        case 0x3de7b8u: goto label_3de7b8;
        case 0x3de7bcu: goto label_3de7bc;
        case 0x3de7c0u: goto label_3de7c0;
        case 0x3de7c4u: goto label_3de7c4;
        case 0x3de7c8u: goto label_3de7c8;
        case 0x3de7ccu: goto label_3de7cc;
        case 0x3de7d0u: goto label_3de7d0;
        case 0x3de7d4u: goto label_3de7d4;
        case 0x3de7d8u: goto label_3de7d8;
        case 0x3de7dcu: goto label_3de7dc;
        case 0x3de7e0u: goto label_3de7e0;
        case 0x3de7e4u: goto label_3de7e4;
        case 0x3de7e8u: goto label_3de7e8;
        case 0x3de7ecu: goto label_3de7ec;
        case 0x3de7f0u: goto label_3de7f0;
        case 0x3de7f4u: goto label_3de7f4;
        case 0x3de7f8u: goto label_3de7f8;
        case 0x3de7fcu: goto label_3de7fc;
        case 0x3de800u: goto label_3de800;
        case 0x3de804u: goto label_3de804;
        case 0x3de808u: goto label_3de808;
        case 0x3de80cu: goto label_3de80c;
        case 0x3de810u: goto label_3de810;
        case 0x3de814u: goto label_3de814;
        case 0x3de818u: goto label_3de818;
        case 0x3de81cu: goto label_3de81c;
        case 0x3de820u: goto label_3de820;
        case 0x3de824u: goto label_3de824;
        case 0x3de828u: goto label_3de828;
        case 0x3de82cu: goto label_3de82c;
        case 0x3de830u: goto label_3de830;
        case 0x3de834u: goto label_3de834;
        case 0x3de838u: goto label_3de838;
        case 0x3de83cu: goto label_3de83c;
        case 0x3de840u: goto label_3de840;
        case 0x3de844u: goto label_3de844;
        case 0x3de848u: goto label_3de848;
        case 0x3de84cu: goto label_3de84c;
        case 0x3de850u: goto label_3de850;
        case 0x3de854u: goto label_3de854;
        case 0x3de858u: goto label_3de858;
        case 0x3de85cu: goto label_3de85c;
        case 0x3de860u: goto label_3de860;
        case 0x3de864u: goto label_3de864;
        case 0x3de868u: goto label_3de868;
        case 0x3de86cu: goto label_3de86c;
        case 0x3de870u: goto label_3de870;
        case 0x3de874u: goto label_3de874;
        case 0x3de878u: goto label_3de878;
        case 0x3de87cu: goto label_3de87c;
        case 0x3de880u: goto label_3de880;
        case 0x3de884u: goto label_3de884;
        case 0x3de888u: goto label_3de888;
        case 0x3de88cu: goto label_3de88c;
        case 0x3de890u: goto label_3de890;
        case 0x3de894u: goto label_3de894;
        case 0x3de898u: goto label_3de898;
        case 0x3de89cu: goto label_3de89c;
        case 0x3de8a0u: goto label_3de8a0;
        case 0x3de8a4u: goto label_3de8a4;
        case 0x3de8a8u: goto label_3de8a8;
        case 0x3de8acu: goto label_3de8ac;
        case 0x3de8b0u: goto label_3de8b0;
        case 0x3de8b4u: goto label_3de8b4;
        case 0x3de8b8u: goto label_3de8b8;
        case 0x3de8bcu: goto label_3de8bc;
        case 0x3de8c0u: goto label_3de8c0;
        case 0x3de8c4u: goto label_3de8c4;
        case 0x3de8c8u: goto label_3de8c8;
        case 0x3de8ccu: goto label_3de8cc;
        case 0x3de8d0u: goto label_3de8d0;
        case 0x3de8d4u: goto label_3de8d4;
        case 0x3de8d8u: goto label_3de8d8;
        case 0x3de8dcu: goto label_3de8dc;
        case 0x3de8e0u: goto label_3de8e0;
        case 0x3de8e4u: goto label_3de8e4;
        case 0x3de8e8u: goto label_3de8e8;
        case 0x3de8ecu: goto label_3de8ec;
        case 0x3de8f0u: goto label_3de8f0;
        case 0x3de8f4u: goto label_3de8f4;
        case 0x3de8f8u: goto label_3de8f8;
        case 0x3de8fcu: goto label_3de8fc;
        case 0x3de900u: goto label_3de900;
        case 0x3de904u: goto label_3de904;
        case 0x3de908u: goto label_3de908;
        case 0x3de90cu: goto label_3de90c;
        case 0x3de910u: goto label_3de910;
        case 0x3de914u: goto label_3de914;
        case 0x3de918u: goto label_3de918;
        case 0x3de91cu: goto label_3de91c;
        case 0x3de920u: goto label_3de920;
        case 0x3de924u: goto label_3de924;
        case 0x3de928u: goto label_3de928;
        case 0x3de92cu: goto label_3de92c;
        case 0x3de930u: goto label_3de930;
        case 0x3de934u: goto label_3de934;
        case 0x3de938u: goto label_3de938;
        case 0x3de93cu: goto label_3de93c;
        case 0x3de940u: goto label_3de940;
        case 0x3de944u: goto label_3de944;
        case 0x3de948u: goto label_3de948;
        case 0x3de94cu: goto label_3de94c;
        case 0x3de950u: goto label_3de950;
        case 0x3de954u: goto label_3de954;
        case 0x3de958u: goto label_3de958;
        case 0x3de95cu: goto label_3de95c;
        case 0x3de960u: goto label_3de960;
        case 0x3de964u: goto label_3de964;
        case 0x3de968u: goto label_3de968;
        case 0x3de96cu: goto label_3de96c;
        case 0x3de970u: goto label_3de970;
        case 0x3de974u: goto label_3de974;
        case 0x3de978u: goto label_3de978;
        case 0x3de97cu: goto label_3de97c;
        case 0x3de980u: goto label_3de980;
        case 0x3de984u: goto label_3de984;
        case 0x3de988u: goto label_3de988;
        case 0x3de98cu: goto label_3de98c;
        case 0x3de990u: goto label_3de990;
        case 0x3de994u: goto label_3de994;
        case 0x3de998u: goto label_3de998;
        case 0x3de99cu: goto label_3de99c;
        case 0x3de9a0u: goto label_3de9a0;
        case 0x3de9a4u: goto label_3de9a4;
        case 0x3de9a8u: goto label_3de9a8;
        case 0x3de9acu: goto label_3de9ac;
        case 0x3de9b0u: goto label_3de9b0;
        case 0x3de9b4u: goto label_3de9b4;
        case 0x3de9b8u: goto label_3de9b8;
        case 0x3de9bcu: goto label_3de9bc;
        case 0x3de9c0u: goto label_3de9c0;
        case 0x3de9c4u: goto label_3de9c4;
        case 0x3de9c8u: goto label_3de9c8;
        case 0x3de9ccu: goto label_3de9cc;
        case 0x3de9d0u: goto label_3de9d0;
        case 0x3de9d4u: goto label_3de9d4;
        case 0x3de9d8u: goto label_3de9d8;
        case 0x3de9dcu: goto label_3de9dc;
        case 0x3de9e0u: goto label_3de9e0;
        case 0x3de9e4u: goto label_3de9e4;
        case 0x3de9e8u: goto label_3de9e8;
        case 0x3de9ecu: goto label_3de9ec;
        case 0x3de9f0u: goto label_3de9f0;
        case 0x3de9f4u: goto label_3de9f4;
        case 0x3de9f8u: goto label_3de9f8;
        case 0x3de9fcu: goto label_3de9fc;
        case 0x3dea00u: goto label_3dea00;
        case 0x3dea04u: goto label_3dea04;
        case 0x3dea08u: goto label_3dea08;
        case 0x3dea0cu: goto label_3dea0c;
        case 0x3dea10u: goto label_3dea10;
        case 0x3dea14u: goto label_3dea14;
        case 0x3dea18u: goto label_3dea18;
        case 0x3dea1cu: goto label_3dea1c;
        case 0x3dea20u: goto label_3dea20;
        case 0x3dea24u: goto label_3dea24;
        case 0x3dea28u: goto label_3dea28;
        case 0x3dea2cu: goto label_3dea2c;
        case 0x3dea30u: goto label_3dea30;
        case 0x3dea34u: goto label_3dea34;
        case 0x3dea38u: goto label_3dea38;
        case 0x3dea3cu: goto label_3dea3c;
        case 0x3dea40u: goto label_3dea40;
        case 0x3dea44u: goto label_3dea44;
        case 0x3dea48u: goto label_3dea48;
        case 0x3dea4cu: goto label_3dea4c;
        case 0x3dea50u: goto label_3dea50;
        case 0x3dea54u: goto label_3dea54;
        case 0x3dea58u: goto label_3dea58;
        case 0x3dea5cu: goto label_3dea5c;
        case 0x3dea60u: goto label_3dea60;
        case 0x3dea64u: goto label_3dea64;
        case 0x3dea68u: goto label_3dea68;
        case 0x3dea6cu: goto label_3dea6c;
        case 0x3dea70u: goto label_3dea70;
        case 0x3dea74u: goto label_3dea74;
        case 0x3dea78u: goto label_3dea78;
        case 0x3dea7cu: goto label_3dea7c;
        case 0x3dea80u: goto label_3dea80;
        case 0x3dea84u: goto label_3dea84;
        case 0x3dea88u: goto label_3dea88;
        case 0x3dea8cu: goto label_3dea8c;
        case 0x3dea90u: goto label_3dea90;
        case 0x3dea94u: goto label_3dea94;
        case 0x3dea98u: goto label_3dea98;
        case 0x3dea9cu: goto label_3dea9c;
        case 0x3deaa0u: goto label_3deaa0;
        case 0x3deaa4u: goto label_3deaa4;
        case 0x3deaa8u: goto label_3deaa8;
        case 0x3deaacu: goto label_3deaac;
        case 0x3deab0u: goto label_3deab0;
        case 0x3deab4u: goto label_3deab4;
        case 0x3deab8u: goto label_3deab8;
        case 0x3deabcu: goto label_3deabc;
        case 0x3deac0u: goto label_3deac0;
        case 0x3deac4u: goto label_3deac4;
        case 0x3deac8u: goto label_3deac8;
        case 0x3deaccu: goto label_3deacc;
        case 0x3dead0u: goto label_3dead0;
        case 0x3dead4u: goto label_3dead4;
        case 0x3dead8u: goto label_3dead8;
        case 0x3deadcu: goto label_3deadc;
        case 0x3deae0u: goto label_3deae0;
        case 0x3deae4u: goto label_3deae4;
        case 0x3deae8u: goto label_3deae8;
        case 0x3deaecu: goto label_3deaec;
        case 0x3deaf0u: goto label_3deaf0;
        case 0x3deaf4u: goto label_3deaf4;
        case 0x3deaf8u: goto label_3deaf8;
        case 0x3deafcu: goto label_3deafc;
        case 0x3deb00u: goto label_3deb00;
        case 0x3deb04u: goto label_3deb04;
        case 0x3deb08u: goto label_3deb08;
        case 0x3deb0cu: goto label_3deb0c;
        case 0x3deb10u: goto label_3deb10;
        case 0x3deb14u: goto label_3deb14;
        case 0x3deb18u: goto label_3deb18;
        case 0x3deb1cu: goto label_3deb1c;
        case 0x3deb20u: goto label_3deb20;
        case 0x3deb24u: goto label_3deb24;
        case 0x3deb28u: goto label_3deb28;
        case 0x3deb2cu: goto label_3deb2c;
        case 0x3deb30u: goto label_3deb30;
        case 0x3deb34u: goto label_3deb34;
        case 0x3deb38u: goto label_3deb38;
        case 0x3deb3cu: goto label_3deb3c;
        case 0x3deb40u: goto label_3deb40;
        case 0x3deb44u: goto label_3deb44;
        case 0x3deb48u: goto label_3deb48;
        case 0x3deb4cu: goto label_3deb4c;
        case 0x3deb50u: goto label_3deb50;
        case 0x3deb54u: goto label_3deb54;
        case 0x3deb58u: goto label_3deb58;
        case 0x3deb5cu: goto label_3deb5c;
        case 0x3deb60u: goto label_3deb60;
        case 0x3deb64u: goto label_3deb64;
        case 0x3deb68u: goto label_3deb68;
        case 0x3deb6cu: goto label_3deb6c;
        case 0x3deb70u: goto label_3deb70;
        case 0x3deb74u: goto label_3deb74;
        case 0x3deb78u: goto label_3deb78;
        case 0x3deb7cu: goto label_3deb7c;
        case 0x3deb80u: goto label_3deb80;
        case 0x3deb84u: goto label_3deb84;
        case 0x3deb88u: goto label_3deb88;
        case 0x3deb8cu: goto label_3deb8c;
        case 0x3deb90u: goto label_3deb90;
        case 0x3deb94u: goto label_3deb94;
        case 0x3deb98u: goto label_3deb98;
        case 0x3deb9cu: goto label_3deb9c;
        case 0x3deba0u: goto label_3deba0;
        case 0x3deba4u: goto label_3deba4;
        case 0x3deba8u: goto label_3deba8;
        case 0x3debacu: goto label_3debac;
        case 0x3debb0u: goto label_3debb0;
        case 0x3debb4u: goto label_3debb4;
        case 0x3debb8u: goto label_3debb8;
        case 0x3debbcu: goto label_3debbc;
        case 0x3debc0u: goto label_3debc0;
        case 0x3debc4u: goto label_3debc4;
        case 0x3debc8u: goto label_3debc8;
        case 0x3debccu: goto label_3debcc;
        case 0x3debd0u: goto label_3debd0;
        case 0x3debd4u: goto label_3debd4;
        case 0x3debd8u: goto label_3debd8;
        case 0x3debdcu: goto label_3debdc;
        case 0x3debe0u: goto label_3debe0;
        case 0x3debe4u: goto label_3debe4;
        case 0x3debe8u: goto label_3debe8;
        case 0x3debecu: goto label_3debec;
        case 0x3debf0u: goto label_3debf0;
        case 0x3debf4u: goto label_3debf4;
        case 0x3debf8u: goto label_3debf8;
        case 0x3debfcu: goto label_3debfc;
        case 0x3dec00u: goto label_3dec00;
        case 0x3dec04u: goto label_3dec04;
        case 0x3dec08u: goto label_3dec08;
        case 0x3dec0cu: goto label_3dec0c;
        case 0x3dec10u: goto label_3dec10;
        case 0x3dec14u: goto label_3dec14;
        case 0x3dec18u: goto label_3dec18;
        case 0x3dec1cu: goto label_3dec1c;
        case 0x3dec20u: goto label_3dec20;
        case 0x3dec24u: goto label_3dec24;
        case 0x3dec28u: goto label_3dec28;
        case 0x3dec2cu: goto label_3dec2c;
        case 0x3dec30u: goto label_3dec30;
        case 0x3dec34u: goto label_3dec34;
        case 0x3dec38u: goto label_3dec38;
        case 0x3dec3cu: goto label_3dec3c;
        case 0x3dec40u: goto label_3dec40;
        case 0x3dec44u: goto label_3dec44;
        case 0x3dec48u: goto label_3dec48;
        case 0x3dec4cu: goto label_3dec4c;
        case 0x3dec50u: goto label_3dec50;
        case 0x3dec54u: goto label_3dec54;
        case 0x3dec58u: goto label_3dec58;
        case 0x3dec5cu: goto label_3dec5c;
        case 0x3dec60u: goto label_3dec60;
        case 0x3dec64u: goto label_3dec64;
        case 0x3dec68u: goto label_3dec68;
        case 0x3dec6cu: goto label_3dec6c;
        case 0x3dec70u: goto label_3dec70;
        case 0x3dec74u: goto label_3dec74;
        case 0x3dec78u: goto label_3dec78;
        case 0x3dec7cu: goto label_3dec7c;
        case 0x3dec80u: goto label_3dec80;
        case 0x3dec84u: goto label_3dec84;
        case 0x3dec88u: goto label_3dec88;
        case 0x3dec8cu: goto label_3dec8c;
        case 0x3dec90u: goto label_3dec90;
        case 0x3dec94u: goto label_3dec94;
        case 0x3dec98u: goto label_3dec98;
        case 0x3dec9cu: goto label_3dec9c;
        case 0x3deca0u: goto label_3deca0;
        case 0x3deca4u: goto label_3deca4;
        case 0x3deca8u: goto label_3deca8;
        case 0x3decacu: goto label_3decac;
        case 0x3decb0u: goto label_3decb0;
        case 0x3decb4u: goto label_3decb4;
        case 0x3decb8u: goto label_3decb8;
        case 0x3decbcu: goto label_3decbc;
        case 0x3decc0u: goto label_3decc0;
        case 0x3decc4u: goto label_3decc4;
        case 0x3decc8u: goto label_3decc8;
        case 0x3decccu: goto label_3deccc;
        case 0x3decd0u: goto label_3decd0;
        case 0x3decd4u: goto label_3decd4;
        case 0x3decd8u: goto label_3decd8;
        case 0x3decdcu: goto label_3decdc;
        case 0x3dece0u: goto label_3dece0;
        case 0x3dece4u: goto label_3dece4;
        case 0x3dece8u: goto label_3dece8;
        case 0x3dececu: goto label_3decec;
        case 0x3decf0u: goto label_3decf0;
        case 0x3decf4u: goto label_3decf4;
        case 0x3decf8u: goto label_3decf8;
        case 0x3decfcu: goto label_3decfc;
        case 0x3ded00u: goto label_3ded00;
        case 0x3ded04u: goto label_3ded04;
        case 0x3ded08u: goto label_3ded08;
        case 0x3ded0cu: goto label_3ded0c;
        case 0x3ded10u: goto label_3ded10;
        case 0x3ded14u: goto label_3ded14;
        case 0x3ded18u: goto label_3ded18;
        case 0x3ded1cu: goto label_3ded1c;
        case 0x3ded20u: goto label_3ded20;
        case 0x3ded24u: goto label_3ded24;
        case 0x3ded28u: goto label_3ded28;
        case 0x3ded2cu: goto label_3ded2c;
        case 0x3ded30u: goto label_3ded30;
        case 0x3ded34u: goto label_3ded34;
        case 0x3ded38u: goto label_3ded38;
        case 0x3ded3cu: goto label_3ded3c;
        case 0x3ded40u: goto label_3ded40;
        case 0x3ded44u: goto label_3ded44;
        case 0x3ded48u: goto label_3ded48;
        case 0x3ded4cu: goto label_3ded4c;
        case 0x3ded50u: goto label_3ded50;
        case 0x3ded54u: goto label_3ded54;
        case 0x3ded58u: goto label_3ded58;
        case 0x3ded5cu: goto label_3ded5c;
        case 0x3ded60u: goto label_3ded60;
        case 0x3ded64u: goto label_3ded64;
        case 0x3ded68u: goto label_3ded68;
        case 0x3ded6cu: goto label_3ded6c;
        case 0x3ded70u: goto label_3ded70;
        case 0x3ded74u: goto label_3ded74;
        case 0x3ded78u: goto label_3ded78;
        case 0x3ded7cu: goto label_3ded7c;
        case 0x3ded80u: goto label_3ded80;
        case 0x3ded84u: goto label_3ded84;
        case 0x3ded88u: goto label_3ded88;
        case 0x3ded8cu: goto label_3ded8c;
        case 0x3ded90u: goto label_3ded90;
        case 0x3ded94u: goto label_3ded94;
        case 0x3ded98u: goto label_3ded98;
        case 0x3ded9cu: goto label_3ded9c;
        case 0x3deda0u: goto label_3deda0;
        case 0x3deda4u: goto label_3deda4;
        case 0x3deda8u: goto label_3deda8;
        case 0x3dedacu: goto label_3dedac;
        case 0x3dedb0u: goto label_3dedb0;
        case 0x3dedb4u: goto label_3dedb4;
        case 0x3dedb8u: goto label_3dedb8;
        case 0x3dedbcu: goto label_3dedbc;
        default: break;
    }

    ctx->pc = 0x3dd4a0u;

label_3dd4a0:
    // 0x3dd4a0: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x3dd4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
label_3dd4a4:
    // 0x3dd4a4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3dd4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3dd4a8:
    // 0x3dd4a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3dd4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3dd4ac:
    // 0x3dd4ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3dd4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3dd4b0:
    // 0x3dd4b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3dd4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3dd4b4:
    // 0x3dd4b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3dd4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3dd4b8:
    // 0x3dd4b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3dd4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3dd4bc:
    // 0x3dd4bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3dd4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3dd4c0:
    // 0x3dd4c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3dd4c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3dd4c4:
    // 0x3dd4c4: 0x8c730e80  lw          $s3, 0xE80($v1)
    ctx->pc = 0x3dd4c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3dd4c8:
    // 0x3dd4c8: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x3dd4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3dd4cc:
    // 0x3dd4cc: 0x8c8301c4  lw          $v1, 0x1C4($a0)
    ctx->pc = 0x3dd4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
label_3dd4d0:
    // 0x3dd4d0: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x3dd4d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_3dd4d4:
    // 0x3dd4d4: 0x10200631  beqz        $at, . + 4 + (0x631 << 2)
label_3dd4d8:
    if (ctx->pc == 0x3DD4D8u) {
        ctx->pc = 0x3DD4D8u;
            // 0x3dd4d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD4DCu;
        goto label_3dd4dc;
    }
    ctx->pc = 0x3DD4D4u;
    {
        const bool branch_taken_0x3dd4d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD4D4u;
            // 0x3dd4d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd4d4) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DD4DCu;
label_3dd4dc:
    // 0x3dd4dc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3dd4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3dd4e0:
    // 0x3dd4e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3dd4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3dd4e4:
    // 0x3dd4e4: 0x24849c60  addiu       $a0, $a0, -0x63A0
    ctx->pc = 0x3dd4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941792));
label_3dd4e8:
    // 0x3dd4e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3dd4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3dd4ec:
    // 0x3dd4ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3dd4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3dd4f0:
    // 0x3dd4f0: 0x600008  jr          $v1
label_3dd4f4:
    if (ctx->pc == 0x3DD4F4u) {
        ctx->pc = 0x3DD4F8u;
        goto label_3dd4f8;
    }
    ctx->pc = 0x3DD4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3DD4F8u: goto label_3dd4f8;
            case 0x3DD6CCu: goto label_3dd6cc;
            case 0x3DDD0Cu: goto label_3ddd0c;
            case 0x3DE298u: goto label_3de298;
            case 0x3DEA40u: goto label_3dea40;
            case 0x3DEB34u: goto label_3deb34;
            case 0x3DEBD4u: goto label_3debd4;
            case 0x3DEC7Cu: goto label_3dec7c;
            case 0x3DECCCu: goto label_3deccc;
            case 0x3DED9Cu: goto label_3ded9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3DD4F8u;
label_3dd4f8:
    // 0x3dd4f8: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x3dd4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_3dd4fc:
    // 0x3dd4fc: 0xc04cc34  jal         func_1330D0
label_3dd500:
    if (ctx->pc == 0x3DD500u) {
        ctx->pc = 0x3DD500u;
            // 0x3dd500: 0x262501d0  addiu       $a1, $s1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
        ctx->pc = 0x3DD504u;
        goto label_3dd504;
    }
    ctx->pc = 0x3DD4FCu;
    SET_GPR_U32(ctx, 31, 0x3DD504u);
    ctx->pc = 0x3DD500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD4FCu;
            // 0x3dd500: 0x262501d0  addiu       $a1, $s1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD504u; }
        if (ctx->pc != 0x3DD504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD504u; }
        if (ctx->pc != 0x3DD504u) { return; }
    }
    ctx->pc = 0x3DD504u;
label_3dd504:
    // 0x3dd504: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x3dd504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
label_3dd508:
    // 0x3dd508: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3dd508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dd50c:
    // 0x3dd50c: 0x0  nop
    ctx->pc = 0x3dd50cu;
    // NOP
label_3dd510:
    // 0x3dd510: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3dd510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dd514:
    // 0x3dd514: 0x45020622  bc1fl       . + 4 + (0x622 << 2)
label_3dd518:
    if (ctx->pc == 0x3DD518u) {
        ctx->pc = 0x3DD518u;
            // 0x3dd518: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x3DD51Cu;
        goto label_3dd51c;
    }
    ctx->pc = 0x3DD514u;
    {
        const bool branch_taken_0x3dd514 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dd514) {
            ctx->pc = 0x3DD518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD514u;
            // 0x3dd518: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DEDA0u;
            goto label_3deda0;
        }
    }
    ctx->pc = 0x3DD51Cu;
label_3dd51c:
    // 0x3dd51c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3dd51cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3dd520:
    // 0x3dd520: 0xae000de8  sw          $zero, 0xDE8($s0)
    ctx->pc = 0x3dd520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3560), GPR_U32(ctx, 0));
label_3dd524:
    // 0x3dd524: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3dd524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3dd528:
    // 0x3dd528: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x3dd528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_3dd52c:
    // 0x3dd52c: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x3dd52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
label_3dd530:
    // 0x3dd530: 0xc04cc04  jal         func_133010
label_3dd534:
    if (ctx->pc == 0x3DD534u) {
        ctx->pc = 0x3DD534u;
            // 0x3dd534: 0x24a59cc0  addiu       $a1, $a1, -0x6340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941888));
        ctx->pc = 0x3DD538u;
        goto label_3dd538;
    }
    ctx->pc = 0x3DD530u;
    SET_GPR_U32(ctx, 31, 0x3DD538u);
    ctx->pc = 0x3DD534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD530u;
            // 0x3dd534: 0x24a59cc0  addiu       $a1, $a1, -0x6340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD538u; }
        if (ctx->pc != 0x3DD538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD538u; }
        if (ctx->pc != 0x3DD538u) { return; }
    }
    ctx->pc = 0x3DD538u;
label_3dd538:
    // 0x3dd538: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3dd538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3dd53c:
    // 0x3dd53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dd53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dd540:
    // 0x3dd540: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3dd540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3dd544:
    // 0x3dd544: 0x320f809  jalr        $t9
label_3dd548:
    if (ctx->pc == 0x3DD548u) {
        ctx->pc = 0x3DD548u;
            // 0x3dd548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD54Cu;
        goto label_3dd54c;
    }
    ctx->pc = 0x3DD544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DD54Cu);
        ctx->pc = 0x3DD548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD544u;
            // 0x3dd548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DD54Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DD54Cu; }
            if (ctx->pc != 0x3DD54Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3DD54Cu;
label_3dd54c:
    // 0x3dd54c: 0x8e120550  lw          $s2, 0x550($s0)
    ctx->pc = 0x3dd54cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_3dd550:
    // 0x3dd550: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3dd550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3dd554:
    // 0x3dd554: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3dd554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3dd558:
    // 0x3dd558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dd558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dd55c:
    // 0x3dd55c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3dd55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3dd560:
    // 0x3dd560: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x3dd560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3dd564:
    // 0x3dd564: 0x8242010c  lb          $v0, 0x10C($s2)
    ctx->pc = 0x3dd564u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
label_3dd568:
    // 0x3dd568: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3dd568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dd56c:
    // 0x3dd56c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dd56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dd570:
    // 0x3dd570: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3dd570u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3dd574:
    // 0x3dd574: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3dd574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3dd578:
    // 0x3dd578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3dd578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3dd57c:
    // 0x3dd57c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3dd57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3dd580:
    // 0x3dd580: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3dd580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3dd584:
    // 0x3dd584: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x3dd584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_3dd588:
    // 0x3dd588: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x3dd588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3dd58c:
    // 0x3dd58c: 0x8245010d  lb          $a1, 0x10D($s2)
    ctx->pc = 0x3dd58cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_3dd590:
    // 0x3dd590: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3dd590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3dd594:
    // 0x3dd594: 0x320f809  jalr        $t9
label_3dd598:
    if (ctx->pc == 0x3DD598u) {
        ctx->pc = 0x3DD598u;
            // 0x3dd598: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3DD59Cu;
        goto label_3dd59c;
    }
    ctx->pc = 0x3DD594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DD59Cu);
        ctx->pc = 0x3DD598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD594u;
            // 0x3dd598: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DD59Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DD59Cu; }
            if (ctx->pc != 0x3DD59Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3DD59Cu;
label_3dd59c:
    // 0x3dd59c: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x3dd59cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3dd5a0:
    // 0x3dd5a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dd5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dd5a4:
    // 0x3dd5a4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3dd5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3dd5a8:
    // 0x3dd5a8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3dd5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3dd5ac:
    // 0x3dd5ac: 0x320f809  jalr        $t9
label_3dd5b0:
    if (ctx->pc == 0x3DD5B0u) {
        ctx->pc = 0x3DD5B0u;
            // 0x3dd5b0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3DD5B4u;
        goto label_3dd5b4;
    }
    ctx->pc = 0x3DD5ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DD5B4u);
        ctx->pc = 0x3DD5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD5ACu;
            // 0x3dd5b0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DD5B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DD5B4u; }
            if (ctx->pc != 0x3DD5B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3DD5B4u;
label_3dd5b4:
    // 0x3dd5b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3dd5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dd5b8:
    // 0x3dd5b8: 0xae2401c4  sw          $a0, 0x1C4($s1)
    ctx->pc = 0x3dd5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 4));
label_3dd5bc:
    // 0x3dd5bc: 0x8e030d60  lw          $v1, 0xD60($s0)
    ctx->pc = 0x3dd5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_3dd5c0:
    // 0x3dd5c0: 0xa064001c  sb          $a0, 0x1C($v1)
    ctx->pc = 0x3dd5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 4));
label_3dd5c4:
    // 0x3dd5c4: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x3dd5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_3dd5c8:
    // 0x3dd5c8: 0x546005f4  bnel        $v1, $zero, . + 4 + (0x5F4 << 2)
label_3dd5cc:
    if (ctx->pc == 0x3DD5CCu) {
        ctx->pc = 0x3DD5CCu;
            // 0x3dd5cc: 0xae2001f0  sw          $zero, 0x1F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
        ctx->pc = 0x3DD5D0u;
        goto label_3dd5d0;
    }
    ctx->pc = 0x3DD5C8u;
    {
        const bool branch_taken_0x3dd5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd5c8) {
            ctx->pc = 0x3DD5CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD5C8u;
            // 0x3dd5cc: 0xae2001f0  sw          $zero, 0x1F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DD5D0u;
label_3dd5d0:
    // 0x3dd5d0: 0xc040180  jal         func_100600
label_3dd5d4:
    if (ctx->pc == 0x3DD5D4u) {
        ctx->pc = 0x3DD5D4u;
            // 0x3dd5d4: 0x24040d20  addiu       $a0, $zero, 0xD20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3360));
        ctx->pc = 0x3DD5D8u;
        goto label_3dd5d8;
    }
    ctx->pc = 0x3DD5D0u;
    SET_GPR_U32(ctx, 31, 0x3DD5D8u);
    ctx->pc = 0x3DD5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD5D0u;
            // 0x3dd5d4: 0x24040d20  addiu       $a0, $zero, 0xD20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD5D8u; }
        if (ctx->pc != 0x3DD5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD5D8u; }
        if (ctx->pc != 0x3DD5D8u) { return; }
    }
    ctx->pc = 0x3DD5D8u;
label_3dd5d8:
    // 0x3dd5d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3dd5dc:
    if (ctx->pc == 0x3DD5DCu) {
        ctx->pc = 0x3DD5DCu;
            // 0x3dd5dc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD5E0u;
        goto label_3dd5e0;
    }
    ctx->pc = 0x3DD5D8u;
    {
        const bool branch_taken_0x3dd5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD5D8u;
            // 0x3dd5dc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd5d8) {
            ctx->pc = 0x3DD618u;
            goto label_3dd618;
        }
    }
    ctx->pc = 0x3DD5E0u;
label_3dd5e0:
    // 0x3dd5e0: 0x92050d98  lbu         $a1, 0xD98($s0)
    ctx->pc = 0x3dd5e0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3480)));
label_3dd5e4:
    // 0x3dd5e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dd5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dd5e8:
    // 0x3dd5e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3dd5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dd5ec:
    // 0x3dd5ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3dd5ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd5f0:
    // 0x3dd5f0: 0xc0ed8f8  jal         func_3B63E0
label_3dd5f4:
    if (ctx->pc == 0x3DD5F4u) {
        ctx->pc = 0x3DD5F4u;
            // 0x3dd5f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD5F8u;
        goto label_3dd5f8;
    }
    ctx->pc = 0x3DD5F0u;
    SET_GPR_U32(ctx, 31, 0x3DD5F8u);
    ctx->pc = 0x3DD5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD5F0u;
            // 0x3dd5f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B63E0u;
    if (runtime->hasFunction(0x3B63E0u)) {
        auto targetFn = runtime->lookupFunction(0x3B63E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD5F8u; }
        if (ctx->pc != 0x3DD5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B63E0_0x3b63e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD5F8u; }
        if (ctx->pc != 0x3DD5F8u) { return; }
    }
    ctx->pc = 0x3DD5F8u;
label_3dd5f8:
    // 0x3dd5f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3dd5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3dd5fc:
    // 0x3dd5fc: 0x24429760  addiu       $v0, $v0, -0x68A0
    ctx->pc = 0x3dd5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940512));
label_3dd600:
    // 0x3dd600: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3dd600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3dd604:
    // 0x3dd604: 0xae510d10  sw          $s1, 0xD10($s2)
    ctx->pc = 0x3dd604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3344), GPR_U32(ctx, 17));
label_3dd608:
    // 0x3dd608: 0xa2400d14  sb          $zero, 0xD14($s2)
    ctx->pc = 0x3dd608u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3348), (uint8_t)GPR_U32(ctx, 0));
label_3dd60c:
    // 0x3dd60c: 0xae400d08  sw          $zero, 0xD08($s2)
    ctx->pc = 0x3dd60cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3336), GPR_U32(ctx, 0));
label_3dd610:
    // 0x3dd610: 0xae400d04  sw          $zero, 0xD04($s2)
    ctx->pc = 0x3dd610u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3332), GPR_U32(ctx, 0));
label_3dd614:
    // 0x3dd614: 0xae400d00  sw          $zero, 0xD00($s2)
    ctx->pc = 0x3dd614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3328), GPR_U32(ctx, 0));
label_3dd618:
    // 0x3dd618: 0xae3201ec  sw          $s2, 0x1EC($s1)
    ctx->pc = 0x3dd618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 18));
label_3dd61c:
    // 0x3dd61c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3dd61cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3dd620:
    // 0x3dd620: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x3dd620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3dd624:
    // 0x3dd624: 0xe6400ca8  swc1        $f0, 0xCA8($s2)
    ctx->pc = 0x3dd624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3240), bits); }
label_3dd628:
    // 0x3dd628: 0x8e2401ec  lw          $a0, 0x1EC($s1)
    ctx->pc = 0x3dd628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_3dd62c:
    // 0x3dd62c: 0xc0f64e4  jal         func_3D9390
label_3dd630:
    if (ctx->pc == 0x3DD630u) {
        ctx->pc = 0x3DD630u;
            // 0x3dd630: 0x24a5f810  addiu       $a1, $a1, -0x7F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965264));
        ctx->pc = 0x3DD634u;
        goto label_3dd634;
    }
    ctx->pc = 0x3DD62Cu;
    SET_GPR_U32(ctx, 31, 0x3DD634u);
    ctx->pc = 0x3DD630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD62Cu;
            // 0x3dd630: 0x24a5f810  addiu       $a1, $a1, -0x7F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D9390u;
    if (runtime->hasFunction(0x3D9390u)) {
        auto targetFn = runtime->lookupFunction(0x3D9390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD634u; }
        if (ctx->pc != 0x3DD634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D9390_0x3d9390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD634u; }
        if (ctx->pc != 0x3DD634u) { return; }
    }
    ctx->pc = 0x3DD634u;
label_3dd634:
    // 0x3dd634: 0x8e2401ec  lw          $a0, 0x1EC($s1)
    ctx->pc = 0x3dd634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_3dd638:
    // 0x3dd638: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x3dd638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
label_3dd63c:
    // 0x3dd63c: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x3dd63cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_3dd640:
    // 0x3dd640: 0x3c0b4040  lui         $t3, 0x4040
    ctx->pc = 0x3dd640u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16448 << 16));
label_3dd644:
    // 0x3dd644: 0x3c0340e6  lui         $v1, 0x40E6
    ctx->pc = 0x3dd644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16614 << 16));
label_3dd648:
    // 0x3dd648: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x3dd648u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
label_3dd64c:
    // 0x3dd64c: 0xac850cd0  sw          $a1, 0xCD0($a0)
    ctx->pc = 0x3dd64cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3280), GPR_U32(ctx, 5));
label_3dd650:
    // 0x3dd650: 0x346a6666  ori         $t2, $v1, 0x6666
    ctx->pc = 0x3dd650u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_3dd654:
    // 0x3dd654: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x3dd654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_3dd658:
    // 0x3dd658: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x3dd658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
label_3dd65c:
    // 0x3dd65c: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x3dd65cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
label_3dd660:
    // 0x3dd660: 0x3466d70a  ori         $a2, $v1, 0xD70A
    ctx->pc = 0x3dd660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_3dd664:
    // 0x3dd664: 0x3487d70a  ori         $a3, $a0, 0xD70A
    ctx->pc = 0x3dd664u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
label_3dd668:
    // 0x3dd668: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x3dd668u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
label_3dd66c:
    // 0x3dd66c: 0xacab0cd4  sw          $t3, 0xCD4($a1)
    ctx->pc = 0x3dd66cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3284), GPR_U32(ctx, 11));
label_3dd670:
    // 0x3dd670: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x3dd670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
label_3dd674:
    // 0x3dd674: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x3dd674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_3dd678:
    // 0x3dd678: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x3dd678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_3dd67c:
    // 0x3dd67c: 0xac6a0cd8  sw          $t2, 0xCD8($v1)
    ctx->pc = 0x3dd67cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3288), GPR_U32(ctx, 10));
label_3dd680:
    // 0x3dd680: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x3dd680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_3dd684:
    // 0x3dd684: 0xac690cdc  sw          $t1, 0xCDC($v1)
    ctx->pc = 0x3dd684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3292), GPR_U32(ctx, 9));
label_3dd688:
    // 0x3dd688: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x3dd688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_3dd68c:
    // 0x3dd68c: 0xac680ce0  sw          $t0, 0xCE0($v1)
    ctx->pc = 0x3dd68cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3296), GPR_U32(ctx, 8));
label_3dd690:
    // 0x3dd690: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x3dd690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_3dd694:
    // 0x3dd694: 0xac670ce4  sw          $a3, 0xCE4($v1)
    ctx->pc = 0x3dd694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3300), GPR_U32(ctx, 7));
label_3dd698:
    // 0x3dd698: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x3dd698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_3dd69c:
    // 0x3dd69c: 0xac660ce8  sw          $a2, 0xCE8($v1)
    ctx->pc = 0x3dd69cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3304), GPR_U32(ctx, 6));
label_3dd6a0:
    // 0x3dd6a0: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x3dd6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_3dd6a4:
    // 0x3dd6a4: 0xac650cec  sw          $a1, 0xCEC($v1)
    ctx->pc = 0x3dd6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3308), GPR_U32(ctx, 5));
label_3dd6a8:
    // 0x3dd6a8: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x3dd6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_3dd6ac:
    // 0x3dd6ac: 0xac640cf0  sw          $a0, 0xCF0($v1)
    ctx->pc = 0x3dd6acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3312), GPR_U32(ctx, 4));
label_3dd6b0:
    // 0x3dd6b0: 0x8e2401ec  lw          $a0, 0x1EC($s1)
    ctx->pc = 0x3dd6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_3dd6b4:
    // 0x3dd6b4: 0x90830cb4  lbu         $v1, 0xCB4($a0)
    ctx->pc = 0x3dd6b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3252)));
label_3dd6b8:
    // 0x3dd6b8: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x3dd6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
label_3dd6bc:
    // 0x3dd6bc: 0xa0830cb4  sb          $v1, 0xCB4($a0)
    ctx->pc = 0x3dd6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3252), (uint8_t)GPR_U32(ctx, 3));
label_3dd6c0:
    // 0x3dd6c0: 0xae2001f0  sw          $zero, 0x1F0($s1)
    ctx->pc = 0x3dd6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
label_3dd6c4:
    // 0x3dd6c4: 0x100005b5  b           . + 4 + (0x5B5 << 2)
label_3dd6c8:
    if (ctx->pc == 0x3DD6C8u) {
        ctx->pc = 0x3DD6CCu;
        goto label_3dd6cc;
    }
    ctx->pc = 0x3DD6C4u;
    {
        const bool branch_taken_0x3dd6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd6c4) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DD6CCu;
label_3dd6cc:
    // 0x3dd6cc: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x3dd6ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3dd6d0:
    // 0x3dd6d0: 0x8e120d60  lw          $s2, 0xD60($s0)
    ctx->pc = 0x3dd6d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_3dd6d4:
    // 0x3dd6d4: 0xc6340134  lwc1        $f20, 0x134($s1)
    ctx->pc = 0x3dd6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3dd6d8:
    // 0x3dd6d8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3dd6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3dd6dc:
    // 0x3dd6dc: 0xc04cc04  jal         func_133010
label_3dd6e0:
    if (ctx->pc == 0x3DD6E0u) {
        ctx->pc = 0x3DD6E0u;
            // 0x3dd6e0: 0x268500f0  addiu       $a1, $s4, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
        ctx->pc = 0x3DD6E4u;
        goto label_3dd6e4;
    }
    ctx->pc = 0x3DD6DCu;
    SET_GPR_U32(ctx, 31, 0x3DD6E4u);
    ctx->pc = 0x3DD6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD6DCu;
            // 0x3dd6e0: 0x268500f0  addiu       $a1, $s4, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD6E4u; }
        if (ctx->pc != 0x3DD6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD6E4u; }
        if (ctx->pc != 0x3DD6E4u) { return; }
    }
    ctx->pc = 0x3DD6E4u;
label_3dd6e4:
    // 0x3dd6e4: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x3dd6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_3dd6e8:
    // 0x3dd6e8: 0xc04cc04  jal         func_133010
label_3dd6ec:
    if (ctx->pc == 0x3DD6ECu) {
        ctx->pc = 0x3DD6ECu;
            // 0x3dd6ec: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3DD6F0u;
        goto label_3dd6f0;
    }
    ctx->pc = 0x3DD6E8u;
    SET_GPR_U32(ctx, 31, 0x3DD6F0u);
    ctx->pc = 0x3DD6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD6E8u;
            // 0x3dd6ec: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD6F0u; }
        if (ctx->pc != 0x3DD6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD6F0u; }
        if (ctx->pc != 0x3DD6F0u) { return; }
    }
    ctx->pc = 0x3DD6F0u;
label_3dd6f0:
    // 0x3dd6f0: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3dd6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
label_3dd6f4:
    // 0x3dd6f4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3dd6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3dd6f8:
    // 0x3dd6f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3dd6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dd6fc:
    // 0x3dd6fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3dd6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dd700:
    // 0x3dd700: 0xc04cc7c  jal         func_1331F0
label_3dd704:
    if (ctx->pc == 0x3DD704u) {
        ctx->pc = 0x3DD704u;
            // 0x3dd704: 0x268600c0  addiu       $a2, $s4, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
        ctx->pc = 0x3DD708u;
        goto label_3dd708;
    }
    ctx->pc = 0x3DD700u;
    SET_GPR_U32(ctx, 31, 0x3DD708u);
    ctx->pc = 0x3DD704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD700u;
            // 0x3dd704: 0x268600c0  addiu       $a2, $s4, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD708u; }
        if (ctx->pc != 0x3DD708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD708u; }
        if (ctx->pc != 0x3DD708u) { return; }
    }
    ctx->pc = 0x3DD708u;
label_3dd708:
    // 0x3dd708: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3dd708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3dd70c:
    // 0x3dd70c: 0xc04c720  jal         func_131C80
label_3dd710:
    if (ctx->pc == 0x3DD710u) {
        ctx->pc = 0x3DD710u;
            // 0x3dd710: 0x26850090  addiu       $a1, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->pc = 0x3DD714u;
        goto label_3dd714;
    }
    ctx->pc = 0x3DD70Cu;
    SET_GPR_U32(ctx, 31, 0x3DD714u);
    ctx->pc = 0x3DD710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD70Cu;
            // 0x3dd710: 0x26850090  addiu       $a1, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD714u; }
        if (ctx->pc != 0x3DD714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD714u; }
        if (ctx->pc != 0x3DD714u) { return; }
    }
    ctx->pc = 0x3DD714u;
label_3dd714:
    // 0x3dd714: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3dd714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3dd718:
    // 0x3dd718: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x3dd718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_3dd71c:
    // 0x3dd71c: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x3dd71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3dd720:
    // 0x3dd720: 0xc680012c  lwc1        $f0, 0x12C($s4)
    ctx->pc = 0x3dd720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3dd724:
    // 0x3dd724: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3dd724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dd728:
    // 0x3dd728: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x3dd728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dd72c:
    // 0x3dd72c: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x3dd72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_3dd730:
    // 0x3dd730: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3dd730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dd734:
    // 0x3dd734: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3dd734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3dd738:
    // 0x3dd738: 0xc0d87e0  jal         func_361F80
label_3dd73c:
    if (ctx->pc == 0x3DD73Cu) {
        ctx->pc = 0x3DD73Cu;
            // 0x3dd73c: 0xe680012c  swc1        $f0, 0x12C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 300), bits); }
        ctx->pc = 0x3DD740u;
        goto label_3dd740;
    }
    ctx->pc = 0x3DD738u;
    SET_GPR_U32(ctx, 31, 0x3DD740u);
    ctx->pc = 0x3DD73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD738u;
            // 0x3dd73c: 0xe680012c  swc1        $f0, 0x12C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 300), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x361F80u;
    if (runtime->hasFunction(0x361F80u)) {
        auto targetFn = runtime->lookupFunction(0x361F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD740u; }
        if (ctx->pc != 0x3DD740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361F80_0x361f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD740u; }
        if (ctx->pc != 0x3DD740u) { return; }
    }
    ctx->pc = 0x3DD740u;
label_3dd740:
    // 0x3dd740: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x3dd740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_3dd744:
    // 0x3dd744: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x3dd744u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3dd748:
    // 0x3dd748: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3dd74c:
    if (ctx->pc == 0x3DD74Cu) {
        ctx->pc = 0x3DD74Cu;
            // 0x3dd74c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD750u;
        goto label_3dd750;
    }
    ctx->pc = 0x3DD748u;
    {
        const bool branch_taken_0x3dd748 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3DD74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD748u;
            // 0x3dd74c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd748) {
            ctx->pc = 0x3DD760u;
            goto label_3dd760;
        }
    }
    ctx->pc = 0x3DD750u;
label_3dd750:
    // 0x3dd750: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3dd750u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3dd754:
    // 0x3dd754: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3dd758:
    if (ctx->pc == 0x3DD758u) {
        ctx->pc = 0x3DD75Cu;
        goto label_3dd75c;
    }
    ctx->pc = 0x3DD754u;
    {
        const bool branch_taken_0x3dd754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd754) {
            ctx->pc = 0x3DD760u;
            goto label_3dd760;
        }
    }
    ctx->pc = 0x3DD75Cu;
label_3dd75c:
    // 0x3dd75c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x3dd75cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dd760:
    // 0x3dd760: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3dd764:
    if (ctx->pc == 0x3DD764u) {
        ctx->pc = 0x3DD768u;
        goto label_3dd768;
    }
    ctx->pc = 0x3DD760u;
    {
        const bool branch_taken_0x3dd760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd760) {
            ctx->pc = 0x3DD77Cu;
            goto label_3dd77c;
        }
    }
    ctx->pc = 0x3DD768u;
label_3dd768:
    // 0x3dd768: 0xc075eb4  jal         func_1D7AD0
label_3dd76c:
    if (ctx->pc == 0x3DD76Cu) {
        ctx->pc = 0x3DD76Cu;
            // 0x3dd76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD770u;
        goto label_3dd770;
    }
    ctx->pc = 0x3DD768u;
    SET_GPR_U32(ctx, 31, 0x3DD770u);
    ctx->pc = 0x3DD76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD768u;
            // 0x3dd76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD770u; }
        if (ctx->pc != 0x3DD770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD770u; }
        if (ctx->pc != 0x3DD770u) { return; }
    }
    ctx->pc = 0x3DD770u;
label_3dd770:
    // 0x3dd770: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3dd774:
    if (ctx->pc == 0x3DD774u) {
        ctx->pc = 0x3DD778u;
        goto label_3dd778;
    }
    ctx->pc = 0x3DD770u;
    {
        const bool branch_taken_0x3dd770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd770) {
            ctx->pc = 0x3DD77Cu;
            goto label_3dd77c;
        }
    }
    ctx->pc = 0x3DD778u;
label_3dd778:
    // 0x3dd778: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3dd778u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd77c:
    // 0x3dd77c: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
label_3dd780:
    if (ctx->pc == 0x3DD780u) {
        ctx->pc = 0x3DD780u;
            // 0x3dd780: 0x8e2401f8  lw          $a0, 0x1F8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
        ctx->pc = 0x3DD784u;
        goto label_3dd784;
    }
    ctx->pc = 0x3DD77Cu;
    {
        const bool branch_taken_0x3dd77c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd77c) {
            ctx->pc = 0x3DD780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD77Cu;
            // 0x3dd780: 0x8e2401f8  lw          $a0, 0x1F8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DD798u;
            goto label_3dd798;
        }
    }
    ctx->pc = 0x3DD784u;
label_3dd784:
    // 0x3dd784: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x3dd784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_3dd788:
    // 0x3dd788: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3dd788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3dd78c:
    // 0x3dd78c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3dd790:
    if (ctx->pc == 0x3DD790u) {
        ctx->pc = 0x3DD790u;
            // 0x3dd790: 0xc6820108  lwc1        $f2, 0x108($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3DD794u;
        goto label_3dd794;
    }
    ctx->pc = 0x3DD78Cu;
    {
        const bool branch_taken_0x3dd78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dd78c) {
            ctx->pc = 0x3DD790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD78Cu;
            // 0x3dd790: 0xc6820108  lwc1        $f2, 0x108($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DD7A4u;
            goto label_3dd7a4;
        }
    }
    ctx->pc = 0x3DD794u;
label_3dd794:
    // 0x3dd794: 0x8e2401f8  lw          $a0, 0x1F8($s1)
    ctx->pc = 0x3dd794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
label_3dd798:
    // 0x3dd798: 0xc10c9d8  jal         func_432760
label_3dd79c:
    if (ctx->pc == 0x3DD79Cu) {
        ctx->pc = 0x3DD7A0u;
        goto label_3dd7a0;
    }
    ctx->pc = 0x3DD798u;
    SET_GPR_U32(ctx, 31, 0x3DD7A0u);
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD7A0u; }
        if (ctx->pc != 0x3DD7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD7A0u; }
        if (ctx->pc != 0x3DD7A0u) { return; }
    }
    ctx->pc = 0x3DD7A0u;
label_3dd7a0:
    // 0x3dd7a0: 0xc6820108  lwc1        $f2, 0x108($s4)
    ctx->pc = 0x3dd7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3dd7a4:
    // 0x3dd7a4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3dd7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3dd7a8:
    // 0x3dd7a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3dd7a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dd7ac:
    // 0x3dd7ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dd7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dd7b0:
    // 0x3dd7b0: 0x0  nop
    ctx->pc = 0x3dd7b0u;
    // NOP
label_3dd7b4:
    // 0x3dd7b4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3dd7b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3dd7b8:
    // 0x3dd7b8: 0x4602a05d  msub.s      $f1, $f20, $f2
    ctx->pc = 0x3dd7b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
label_3dd7bc:
    // 0x3dd7bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3dd7bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dd7c0:
    // 0x3dd7c0: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
label_3dd7c4:
    if (ctx->pc == 0x3DD7C4u) {
        ctx->pc = 0x3DD7C4u;
            // 0x3dd7c4: 0x82420004  lb          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x3DD7C8u;
        goto label_3dd7c8;
    }
    ctx->pc = 0x3DD7C0u;
    {
        const bool branch_taken_0x3dd7c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dd7c0) {
            ctx->pc = 0x3DD7C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD7C0u;
            // 0x3dd7c4: 0x82420004  lb          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DD858u;
            goto label_3dd858;
        }
    }
    ctx->pc = 0x3DD7C8u;
label_3dd7c8:
    // 0x3dd7c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dd7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dd7cc:
    // 0x3dd7cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3dd7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3dd7d0:
    // 0x3dd7d0: 0xae2301c4  sw          $v1, 0x1C4($s1)
    ctx->pc = 0x3dd7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
label_3dd7d4:
    // 0x3dd7d4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3dd7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3dd7d8:
    // 0x3dd7d8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3dd7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3dd7dc:
    // 0x3dd7dc: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x3dd7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_3dd7e0:
    // 0x3dd7e0: 0x24639c48  addiu       $v1, $v1, -0x63B8
    ctx->pc = 0x3dd7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941768));
label_3dd7e4:
    // 0x3dd7e4: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x3dd7e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_3dd7e8:
    // 0x3dd7e8: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3dd7e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3dd7ec:
    // 0x3dd7ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3dd7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3dd7f0:
    // 0x3dd7f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3dd7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3dd7f4:
    // 0x3dd7f4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3dd7f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3dd7f8:
    // 0x3dd7f8: 0x320f809  jalr        $t9
label_3dd7fc:
    if (ctx->pc == 0x3DD7FCu) {
        ctx->pc = 0x3DD7FCu;
            // 0x3dd7fc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3DD800u;
        goto label_3dd800;
    }
    ctx->pc = 0x3DD7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DD800u);
        ctx->pc = 0x3DD7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD7F8u;
            // 0x3dd7fc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DD800u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DD800u; }
            if (ctx->pc != 0x3DD800u) { return; }
        }
        }
    }
    ctx->pc = 0x3DD800u;
label_3dd800:
    // 0x3dd800: 0x8e2401f4  lw          $a0, 0x1F4($s1)
    ctx->pc = 0x3dd800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
label_3dd804:
    // 0x3dd804: 0xc122c5c  jal         func_48B170
label_3dd808:
    if (ctx->pc == 0x3DD808u) {
        ctx->pc = 0x3DD808u;
            // 0x3dd808: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD80Cu;
        goto label_3dd80c;
    }
    ctx->pc = 0x3DD804u;
    SET_GPR_U32(ctx, 31, 0x3DD80Cu);
    ctx->pc = 0x3DD808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD804u;
            // 0x3dd808: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD80Cu; }
        if (ctx->pc != 0x3DD80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD80Cu; }
        if (ctx->pc != 0x3DD80Cu) { return; }
    }
    ctx->pc = 0x3DD80Cu;
label_3dd80c:
    // 0x3dd80c: 0xc10c9b4  jal         func_4326D0
label_3dd810:
    if (ctx->pc == 0x3DD810u) {
        ctx->pc = 0x3DD810u;
            // 0x3dd810: 0x8e2401f8  lw          $a0, 0x1F8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
        ctx->pc = 0x3DD814u;
        goto label_3dd814;
    }
    ctx->pc = 0x3DD80Cu;
    SET_GPR_U32(ctx, 31, 0x3DD814u);
    ctx->pc = 0x3DD810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD80Cu;
            // 0x3dd810: 0x8e2401f8  lw          $a0, 0x1F8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD814u; }
        if (ctx->pc != 0x3DD814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD814u; }
        if (ctx->pc != 0x3DD814u) { return; }
    }
    ctx->pc = 0x3DD814u;
label_3dd814:
    // 0x3dd814: 0x8e2401f4  lw          $a0, 0x1F4($s1)
    ctx->pc = 0x3dd814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
label_3dd818:
    // 0x3dd818: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3dd81c:
    if (ctx->pc == 0x3DD81Cu) {
        ctx->pc = 0x3DD81Cu;
            // 0x3dd81c: 0xae2001f4  sw          $zero, 0x1F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 0));
        ctx->pc = 0x3DD820u;
        goto label_3dd820;
    }
    ctx->pc = 0x3DD818u;
    {
        const bool branch_taken_0x3dd818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd818) {
            ctx->pc = 0x3DD81Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD818u;
            // 0x3dd81c: 0xae2001f4  sw          $zero, 0x1F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DD834u;
            goto label_3dd834;
        }
    }
    ctx->pc = 0x3DD820u;
label_3dd820:
    // 0x3dd820: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3dd820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3dd824:
    // 0x3dd824: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3dd824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3dd828:
    // 0x3dd828: 0x320f809  jalr        $t9
label_3dd82c:
    if (ctx->pc == 0x3DD82Cu) {
        ctx->pc = 0x3DD82Cu;
            // 0x3dd82c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DD830u;
        goto label_3dd830;
    }
    ctx->pc = 0x3DD828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DD830u);
        ctx->pc = 0x3DD82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD828u;
            // 0x3dd82c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DD830u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DD830u; }
            if (ctx->pc != 0x3DD830u) { return; }
        }
        }
    }
    ctx->pc = 0x3DD830u;
label_3dd830:
    // 0x3dd830: 0xae2001f4  sw          $zero, 0x1F4($s1)
    ctx->pc = 0x3dd830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 0));
label_3dd834:
    // 0x3dd834: 0x8e2401f8  lw          $a0, 0x1F8($s1)
    ctx->pc = 0x3dd834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
label_3dd838:
    // 0x3dd838: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3dd83c:
    if (ctx->pc == 0x3DD83Cu) {
        ctx->pc = 0x3DD83Cu;
            // 0x3dd83c: 0xae2001f8  sw          $zero, 0x1F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 0));
        ctx->pc = 0x3DD840u;
        goto label_3dd840;
    }
    ctx->pc = 0x3DD838u;
    {
        const bool branch_taken_0x3dd838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd838) {
            ctx->pc = 0x3DD83Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD838u;
            // 0x3dd83c: 0xae2001f8  sw          $zero, 0x1F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DD854u;
            goto label_3dd854;
        }
    }
    ctx->pc = 0x3DD840u;
label_3dd840:
    // 0x3dd840: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3dd840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3dd844:
    // 0x3dd844: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3dd844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3dd848:
    // 0x3dd848: 0x320f809  jalr        $t9
label_3dd84c:
    if (ctx->pc == 0x3DD84Cu) {
        ctx->pc = 0x3DD84Cu;
            // 0x3dd84c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DD850u;
        goto label_3dd850;
    }
    ctx->pc = 0x3DD848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DD850u);
        ctx->pc = 0x3DD84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD848u;
            // 0x3dd84c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DD850u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DD850u; }
            if (ctx->pc != 0x3DD850u) { return; }
        }
        }
    }
    ctx->pc = 0x3DD850u;
label_3dd850:
    // 0x3dd850: 0xae2001f8  sw          $zero, 0x1F8($s1)
    ctx->pc = 0x3dd850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 0));
label_3dd854:
    // 0x3dd854: 0x82420004  lb          $v0, 0x4($s2)
    ctx->pc = 0x3dd854u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_3dd858:
    // 0x3dd858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dd858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dd85c:
    // 0x3dd85c: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x3dd85cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3dd860:
    // 0x3dd860: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x3dd860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3dd864:
    // 0x3dd864: 0xc07731c  jal         func_1DCC70
label_3dd868:
    if (ctx->pc == 0x3DD868u) {
        ctx->pc = 0x3DD868u;
            // 0x3dd868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD86Cu;
        goto label_3dd86c;
    }
    ctx->pc = 0x3DD864u;
    SET_GPR_U32(ctx, 31, 0x3DD86Cu);
    ctx->pc = 0x3DD868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD864u;
            // 0x3dd868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD86Cu; }
        if (ctx->pc != 0x3DD86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD86Cu; }
        if (ctx->pc != 0x3DD86Cu) { return; }
    }
    ctx->pc = 0x3DD86Cu;
label_3dd86c:
    // 0x3dd86c: 0xc62301e0  lwc1        $f3, 0x1E0($s1)
    ctx->pc = 0x3dd86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3dd870:
    // 0x3dd870: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x3dd870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dd874:
    // 0x3dd874: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_3dd878:
    if (ctx->pc == 0x3DD878u) {
        ctx->pc = 0x3DD878u;
            // 0x3dd878: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x3DD87Cu;
        goto label_3dd87c;
    }
    ctx->pc = 0x3DD874u;
    {
        const bool branch_taken_0x3dd874 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DD878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD874u;
            // 0x3dd878: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd874) {
            ctx->pc = 0x3DD8B0u;
            goto label_3dd8b0;
        }
    }
    ctx->pc = 0x3DD87Cu;
label_3dd87c:
    // 0x3dd87c: 0x46141881  sub.s       $f2, $f3, $f20
    ctx->pc = 0x3dd87cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
label_3dd880:
    // 0x3dd880: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3dd880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3dd884:
    // 0x3dd884: 0xc62101e4  lwc1        $f1, 0x1E4($s1)
    ctx->pc = 0x3dd884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dd888:
    // 0x3dd888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dd888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dd88c:
    // 0x3dd88c: 0x0  nop
    ctx->pc = 0x3dd88cu;
    // NOP
label_3dd890:
    // 0x3dd890: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3dd890u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_3dd894:
    // 0x3dd894: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3dd894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3dd898:
    // 0x3dd898: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x3dd898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3dd89c:
    // 0x3dd89c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3dd89cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dd8a0:
    // 0x3dd8a0: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_3dd8a4:
    if (ctx->pc == 0x3DD8A4u) {
        ctx->pc = 0x3DD8A4u;
            // 0x3dd8a4: 0xe62001e0  swc1        $f0, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->pc = 0x3DD8A8u;
        goto label_3dd8a8;
    }
    ctx->pc = 0x3DD8A0u;
    {
        const bool branch_taken_0x3dd8a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DD8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD8A0u;
            // 0x3dd8a4: 0xe62001e0  swc1        $f0, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd8a0) {
            ctx->pc = 0x3DD8ECu;
            goto label_3dd8ec;
        }
    }
    ctx->pc = 0x3DD8A8u;
label_3dd8a8:
    // 0x3dd8a8: 0x10000010  b           . + 4 + (0x10 << 2)
label_3dd8ac:
    if (ctx->pc == 0x3DD8ACu) {
        ctx->pc = 0x3DD8ACu;
            // 0x3dd8ac: 0xe63401e0  swc1        $f20, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->pc = 0x3DD8B0u;
        goto label_3dd8b0;
    }
    ctx->pc = 0x3DD8A8u;
    {
        const bool branch_taken_0x3dd8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD8A8u;
            // 0x3dd8ac: 0xe63401e0  swc1        $f20, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd8a8) {
            ctx->pc = 0x3DD8ECu;
            goto label_3dd8ec;
        }
    }
    ctx->pc = 0x3DD8B0u;
label_3dd8b0:
    // 0x3dd8b0: 0x4603a036  c.le.s      $f20, $f3
    ctx->pc = 0x3dd8b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dd8b4:
    // 0x3dd8b4: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_3dd8b8:
    if (ctx->pc == 0x3DD8B8u) {
        ctx->pc = 0x3DD8B8u;
            // 0x3dd8b8: 0x8e2201f4  lw          $v0, 0x1F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
        ctx->pc = 0x3DD8BCu;
        goto label_3dd8bc;
    }
    ctx->pc = 0x3DD8B4u;
    {
        const bool branch_taken_0x3dd8b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dd8b4) {
            ctx->pc = 0x3DD8B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD8B4u;
            // 0x3dd8b8: 0x8e2201f4  lw          $v0, 0x1F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DD8F0u;
            goto label_3dd8f0;
        }
    }
    ctx->pc = 0x3DD8BCu;
label_3dd8bc:
    // 0x3dd8bc: 0x4603a081  sub.s       $f2, $f20, $f3
    ctx->pc = 0x3dd8bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
label_3dd8c0:
    // 0x3dd8c0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3dd8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3dd8c4:
    // 0x3dd8c4: 0xc62101e4  lwc1        $f1, 0x1E4($s1)
    ctx->pc = 0x3dd8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dd8c8:
    // 0x3dd8c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dd8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dd8cc:
    // 0x3dd8cc: 0x0  nop
    ctx->pc = 0x3dd8ccu;
    // NOP
label_3dd8d0:
    // 0x3dd8d0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3dd8d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_3dd8d4:
    // 0x3dd8d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3dd8d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3dd8d8:
    // 0x3dd8d8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3dd8d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3dd8dc:
    // 0x3dd8dc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3dd8dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dd8e0:
    // 0x3dd8e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3dd8e4:
    if (ctx->pc == 0x3DD8E4u) {
        ctx->pc = 0x3DD8E4u;
            // 0x3dd8e4: 0xe62001e0  swc1        $f0, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->pc = 0x3DD8E8u;
        goto label_3dd8e8;
    }
    ctx->pc = 0x3DD8E0u;
    {
        const bool branch_taken_0x3dd8e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DD8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD8E0u;
            // 0x3dd8e4: 0xe62001e0  swc1        $f0, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd8e0) {
            ctx->pc = 0x3DD8ECu;
            goto label_3dd8ec;
        }
    }
    ctx->pc = 0x3DD8E8u;
label_3dd8e8:
    // 0x3dd8e8: 0xe63401e0  swc1        $f20, 0x1E0($s1)
    ctx->pc = 0x3dd8e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
label_3dd8ec:
    // 0x3dd8ec: 0x8e2201f4  lw          $v0, 0x1F4($s1)
    ctx->pc = 0x3dd8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
label_3dd8f0:
    // 0x3dd8f0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3dd8f4:
    if (ctx->pc == 0x3DD8F4u) {
        ctx->pc = 0x3DD8F4u;
            // 0x3dd8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD8F8u;
        goto label_3dd8f8;
    }
    ctx->pc = 0x3DD8F0u;
    {
        const bool branch_taken_0x3dd8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd8f0) {
            ctx->pc = 0x3DD8F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD8F0u;
            // 0x3dd8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DD914u;
            goto label_3dd914;
        }
    }
    ctx->pc = 0x3DD8F8u;
label_3dd8f8:
    // 0x3dd8f8: 0xc0f7b74  jal         func_3DEDD0
label_3dd8fc:
    if (ctx->pc == 0x3DD8FCu) {
        ctx->pc = 0x3DD8FCu;
            // 0x3dd8fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD900u;
        goto label_3dd900;
    }
    ctx->pc = 0x3DD8F8u;
    SET_GPR_U32(ctx, 31, 0x3DD900u);
    ctx->pc = 0x3DD8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD8F8u;
            // 0x3dd8fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DEDD0u;
    if (runtime->hasFunction(0x3DEDD0u)) {
        auto targetFn = runtime->lookupFunction(0x3DEDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD900u; }
        if (ctx->pc != 0x3DD900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DEDD0_0x3dedd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD900u; }
        if (ctx->pc != 0x3DD900u) { return; }
    }
    ctx->pc = 0x3DD900u;
label_3dd900:
    // 0x3dd900: 0x8e2401f4  lw          $a0, 0x1F4($s1)
    ctx->pc = 0x3dd900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
label_3dd904:
    // 0x3dd904: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3dd904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd908:
    // 0x3dd908: 0xc122d2c  jal         func_48B4B0
label_3dd90c:
    if (ctx->pc == 0x3DD90Cu) {
        ctx->pc = 0x3DD90Cu;
            // 0x3dd90c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD910u;
        goto label_3dd910;
    }
    ctx->pc = 0x3DD908u;
    SET_GPR_U32(ctx, 31, 0x3DD910u);
    ctx->pc = 0x3DD90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD908u;
            // 0x3dd90c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD910u; }
        if (ctx->pc != 0x3DD910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD910u; }
        if (ctx->pc != 0x3DD910u) { return; }
    }
    ctx->pc = 0x3DD910u;
label_3dd910:
    // 0x3dd910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dd910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dd914:
    // 0x3dd914: 0xc0e1224  jal         func_384890
label_3dd918:
    if (ctx->pc == 0x3DD918u) {
        ctx->pc = 0x3DD91Cu;
        goto label_3dd91c;
    }
    ctx->pc = 0x3DD914u;
    SET_GPR_U32(ctx, 31, 0x3DD91Cu);
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD91Cu; }
        if (ctx->pc != 0x3DD91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD91Cu; }
        if (ctx->pc != 0x3DD91Cu) { return; }
    }
    ctx->pc = 0x3DD91Cu;
label_3dd91c:
    // 0x3dd91c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3dd91cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd920:
    // 0x3dd920: 0xc0e1224  jal         func_384890
label_3dd924:
    if (ctx->pc == 0x3DD924u) {
        ctx->pc = 0x3DD924u;
            // 0x3dd924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD928u;
        goto label_3dd928;
    }
    ctx->pc = 0x3DD920u;
    SET_GPR_U32(ctx, 31, 0x3DD928u);
    ctx->pc = 0x3DD924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD920u;
            // 0x3dd924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD928u; }
        if (ctx->pc != 0x3DD928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD928u; }
        if (ctx->pc != 0x3DD928u) { return; }
    }
    ctx->pc = 0x3DD928u;
label_3dd928:
    // 0x3dd928: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3dd928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd92c:
    // 0x3dd92c: 0xc0e1224  jal         func_384890
label_3dd930:
    if (ctx->pc == 0x3DD930u) {
        ctx->pc = 0x3DD930u;
            // 0x3dd930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD934u;
        goto label_3dd934;
    }
    ctx->pc = 0x3DD92Cu;
    SET_GPR_U32(ctx, 31, 0x3DD934u);
    ctx->pc = 0x3DD930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD92Cu;
            // 0x3dd930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD934u; }
        if (ctx->pc != 0x3DD934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD934u; }
        if (ctx->pc != 0x3DD934u) { return; }
    }
    ctx->pc = 0x3DD934u;
label_3dd934:
    // 0x3dd934: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x3dd934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3dd938:
    // 0x3dd938: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x3dd938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3dd93c:
    // 0x3dd93c: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x3dd93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3dd940:
    // 0x3dd940: 0xc04f3fc  jal         func_13CFF0
label_3dd944:
    if (ctx->pc == 0x3DD944u) {
        ctx->pc = 0x3DD944u;
            // 0x3dd944: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x3DD948u;
        goto label_3dd948;
    }
    ctx->pc = 0x3DD940u;
    SET_GPR_U32(ctx, 31, 0x3DD948u);
    ctx->pc = 0x3DD944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD940u;
            // 0x3dd944: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD948u; }
        if (ctx->pc != 0x3DD948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD948u; }
        if (ctx->pc != 0x3DD948u) { return; }
    }
    ctx->pc = 0x3DD948u;
label_3dd948:
    // 0x3dd948: 0xc0f7b70  jal         func_3DEDC0
label_3dd94c:
    if (ctx->pc == 0x3DD94Cu) {
        ctx->pc = 0x3DD94Cu;
            // 0x3dd94c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD950u;
        goto label_3dd950;
    }
    ctx->pc = 0x3DD948u;
    SET_GPR_U32(ctx, 31, 0x3DD950u);
    ctx->pc = 0x3DD94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD948u;
            // 0x3dd94c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DEDC0u;
    if (runtime->hasFunction(0x3DEDC0u)) {
        auto targetFn = runtime->lookupFunction(0x3DEDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD950u; }
        if (ctx->pc != 0x3DD950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DEDC0_0x3dedc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD950u; }
        if (ctx->pc != 0x3DD950u) { return; }
    }
    ctx->pc = 0x3DD950u;
label_3dd950:
    // 0x3dd950: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x3dd950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_3dd954:
    // 0x3dd954: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3dd954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd958:
    // 0x3dd958: 0xc04cd80  jal         func_133600
label_3dd95c:
    if (ctx->pc == 0x3DD95Cu) {
        ctx->pc = 0x3DD95Cu;
            // 0x3dd95c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD960u;
        goto label_3dd960;
    }
    ctx->pc = 0x3DD958u;
    SET_GPR_U32(ctx, 31, 0x3DD960u);
    ctx->pc = 0x3DD95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD958u;
            // 0x3dd95c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD960u; }
        if (ctx->pc != 0x3DD960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD960u; }
        if (ctx->pc != 0x3DD960u) { return; }
    }
    ctx->pc = 0x3DD960u;
label_3dd960:
    // 0x3dd960: 0xc62201e0  lwc1        $f2, 0x1E0($s1)
    ctx->pc = 0x3dd960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3dd964:
    // 0x3dd964: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3dd964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_3dd968:
    // 0x3dd968: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3dd968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3dd96c:
    // 0x3dd96c: 0x3c03c270  lui         $v1, 0xC270
    ctx->pc = 0x3dd96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49776 << 16));
label_3dd970:
    // 0x3dd970: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3dd970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_3dd974:
    // 0x3dd974: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x3dd974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_3dd978:
    // 0x3dd978: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x3dd978u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
label_3dd97c:
    // 0x3dd97c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3dd97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_3dd980:
    // 0x3dd980: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3dd980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dd984:
    // 0x3dd984: 0x0  nop
    ctx->pc = 0x3dd984u;
    // NOP
label_3dd988:
    // 0x3dd988: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3dd988u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3dd98c:
    // 0x3dd98c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dd98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dd990:
    // 0x3dd990: 0x0  nop
    ctx->pc = 0x3dd990u;
    // NOP
label_3dd994:
    // 0x3dd994: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3dd994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3dd998:
    // 0x3dd998: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dd998u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3dd99c:
    // 0x3dd99c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3dd99cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3dd9a0:
    // 0x3dd9a0: 0xc04cdf0  jal         func_1337C0
label_3dd9a4:
    if (ctx->pc == 0x3DD9A4u) {
        ctx->pc = 0x3DD9A4u;
            // 0x3dd9a4: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x3DD9A8u;
        goto label_3dd9a8;
    }
    ctx->pc = 0x3DD9A0u;
    SET_GPR_U32(ctx, 31, 0x3DD9A8u);
    ctx->pc = 0x3DD9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD9A0u;
            // 0x3dd9a4: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD9A8u; }
        if (ctx->pc != 0x3DD9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD9A8u; }
        if (ctx->pc != 0x3DD9A8u) { return; }
    }
    ctx->pc = 0x3DD9A8u;
label_3dd9a8:
    // 0x3dd9a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3dd9a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dd9ac:
    // 0x3dd9ac: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3dd9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
label_3dd9b0:
    // 0x3dd9b0: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x3dd9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_3dd9b4:
    // 0x3dd9b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3dd9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3dd9b8:
    // 0x3dd9b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3dd9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dd9bc:
    // 0x3dd9bc: 0xc04ce64  jal         func_133990
label_3dd9c0:
    if (ctx->pc == 0x3DD9C0u) {
        ctx->pc = 0x3DD9C0u;
            // 0x3dd9c0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3DD9C4u;
        goto label_3dd9c4;
    }
    ctx->pc = 0x3DD9BCu;
    SET_GPR_U32(ctx, 31, 0x3DD9C4u);
    ctx->pc = 0x3DD9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD9BCu;
            // 0x3dd9c0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD9C4u; }
        if (ctx->pc != 0x3DD9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD9C4u; }
        if (ctx->pc != 0x3DD9C4u) { return; }
    }
    ctx->pc = 0x3DD9C4u;
label_3dd9c4:
    // 0x3dd9c4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3dd9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3dd9c8:
    // 0x3dd9c8: 0xc04cce4  jal         func_133390
label_3dd9cc:
    if (ctx->pc == 0x3DD9CCu) {
        ctx->pc = 0x3DD9CCu;
            // 0x3dd9cc: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x3DD9D0u;
        goto label_3dd9d0;
    }
    ctx->pc = 0x3DD9C8u;
    SET_GPR_U32(ctx, 31, 0x3DD9D0u);
    ctx->pc = 0x3DD9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD9C8u;
            // 0x3dd9cc: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD9D0u; }
        if (ctx->pc != 0x3DD9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD9D0u; }
        if (ctx->pc != 0x3DD9D0u) { return; }
    }
    ctx->pc = 0x3DD9D0u;
label_3dd9d0:
    // 0x3dd9d0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3dd9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3dd9d4:
    // 0x3dd9d4: 0xc04c994  jal         func_132650
label_3dd9d8:
    if (ctx->pc == 0x3DD9D8u) {
        ctx->pc = 0x3DD9D8u;
            // 0x3dd9d8: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x3DD9DCu;
        goto label_3dd9dc;
    }
    ctx->pc = 0x3DD9D4u;
    SET_GPR_U32(ctx, 31, 0x3DD9DCu);
    ctx->pc = 0x3DD9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD9D4u;
            // 0x3dd9d8: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD9DCu; }
        if (ctx->pc != 0x3DD9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD9DCu; }
        if (ctx->pc != 0x3DD9DCu) { return; }
    }
    ctx->pc = 0x3DD9DCu;
label_3dd9dc:
    // 0x3dd9dc: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3dd9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3dd9e0:
    // 0x3dd9e0: 0xc04c74c  jal         func_131D30
label_3dd9e4:
    if (ctx->pc == 0x3DD9E4u) {
        ctx->pc = 0x3DD9E4u;
            // 0x3dd9e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD9E8u;
        goto label_3dd9e8;
    }
    ctx->pc = 0x3DD9E0u;
    SET_GPR_U32(ctx, 31, 0x3DD9E8u);
    ctx->pc = 0x3DD9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD9E0u;
            // 0x3dd9e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD9E8u; }
        if (ctx->pc != 0x3DD9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD9E8u; }
        if (ctx->pc != 0x3DD9E8u) { return; }
    }
    ctx->pc = 0x3DD9E8u;
label_3dd9e8:
    // 0x3dd9e8: 0xc0e1130  jal         func_3844C0
label_3dd9ec:
    if (ctx->pc == 0x3DD9ECu) {
        ctx->pc = 0x3DD9ECu;
            // 0x3dd9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD9F0u;
        goto label_3dd9f0;
    }
    ctx->pc = 0x3DD9E8u;
    SET_GPR_U32(ctx, 31, 0x3DD9F0u);
    ctx->pc = 0x3DD9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD9E8u;
            // 0x3dd9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844C0u;
    if (runtime->hasFunction(0x3844C0u)) {
        auto targetFn = runtime->lookupFunction(0x3844C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD9F0u; }
        if (ctx->pc != 0x3DD9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844C0_0x3844c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD9F0u; }
        if (ctx->pc != 0x3DD9F0u) { return; }
    }
    ctx->pc = 0x3DD9F0u;
label_3dd9f0:
    // 0x3dd9f0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3dd9f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3dd9f4:
    // 0x3dd9f4: 0xc0c1a0c  jal         func_306830
label_3dd9f8:
    if (ctx->pc == 0x3DD9F8u) {
        ctx->pc = 0x3DD9F8u;
            // 0x3dd9f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD9FCu;
        goto label_3dd9fc;
    }
    ctx->pc = 0x3DD9F4u;
    SET_GPR_U32(ctx, 31, 0x3DD9FCu);
    ctx->pc = 0x3DD9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD9F4u;
            // 0x3dd9f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD9FCu; }
        if (ctx->pc != 0x3DD9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD9FCu; }
        if (ctx->pc != 0x3DD9FCu) { return; }
    }
    ctx->pc = 0x3DD9FCu;
label_3dd9fc:
    // 0x3dd9fc: 0xc0e1224  jal         func_384890
label_3dda00:
    if (ctx->pc == 0x3DDA00u) {
        ctx->pc = 0x3DDA00u;
            // 0x3dda00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDA04u;
        goto label_3dda04;
    }
    ctx->pc = 0x3DD9FCu;
    SET_GPR_U32(ctx, 31, 0x3DDA04u);
    ctx->pc = 0x3DDA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD9FCu;
            // 0x3dda00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDA04u; }
        if (ctx->pc != 0x3DDA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDA04u; }
        if (ctx->pc != 0x3DDA04u) { return; }
    }
    ctx->pc = 0x3DDA04u;
label_3dda04:
    // 0x3dda04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3dda04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dda08:
    // 0x3dda08: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x3dda08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_3dda0c:
    // 0x3dda0c: 0xc04cc90  jal         func_133240
label_3dda10:
    if (ctx->pc == 0x3DDA10u) {
        ctx->pc = 0x3DDA10u;
            // 0x3dda10: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3DDA14u;
        goto label_3dda14;
    }
    ctx->pc = 0x3DDA0Cu;
    SET_GPR_U32(ctx, 31, 0x3DDA14u);
    ctx->pc = 0x3DDA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDA0Cu;
            // 0x3dda10: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDA14u; }
        if (ctx->pc != 0x3DDA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDA14u; }
        if (ctx->pc != 0x3DDA14u) { return; }
    }
    ctx->pc = 0x3DDA14u;
label_3dda14:
    // 0x3dda14: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x3dda14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_3dda18:
    // 0x3dda18: 0xc04cc44  jal         func_133110
label_3dda1c:
    if (ctx->pc == 0x3DDA1Cu) {
        ctx->pc = 0x3DDA1Cu;
            // 0x3dda1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDA20u;
        goto label_3dda20;
    }
    ctx->pc = 0x3DDA18u;
    SET_GPR_U32(ctx, 31, 0x3DDA20u);
    ctx->pc = 0x3DDA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDA18u;
            // 0x3dda1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDA20u; }
        if (ctx->pc != 0x3DDA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDA20u; }
        if (ctx->pc != 0x3DDA20u) { return; }
    }
    ctx->pc = 0x3DDA20u;
label_3dda20:
    // 0x3dda20: 0xc0b6d5c  jal         func_2DB570
label_3dda24:
    if (ctx->pc == 0x3DDA24u) {
        ctx->pc = 0x3DDA24u;
            // 0x3dda24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDA28u;
        goto label_3dda28;
    }
    ctx->pc = 0x3DDA20u;
    SET_GPR_U32(ctx, 31, 0x3DDA28u);
    ctx->pc = 0x3DDA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDA20u;
            // 0x3dda24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDA28u; }
        if (ctx->pc != 0x3DDA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDA28u; }
        if (ctx->pc != 0x3DDA28u) { return; }
    }
    ctx->pc = 0x3DDA28u;
label_3dda28:
    // 0x3dda28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3dda28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dda2c:
    // 0x3dda2c: 0xc04cc04  jal         func_133010
label_3dda30:
    if (ctx->pc == 0x3DDA30u) {
        ctx->pc = 0x3DDA30u;
            // 0x3dda30: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x3DDA34u;
        goto label_3dda34;
    }
    ctx->pc = 0x3DDA2Cu;
    SET_GPR_U32(ctx, 31, 0x3DDA34u);
    ctx->pc = 0x3DDA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDA2Cu;
            // 0x3dda30: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDA34u; }
        if (ctx->pc != 0x3DDA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDA34u; }
        if (ctx->pc != 0x3DDA34u) { return; }
    }
    ctx->pc = 0x3DDA34u;
label_3dda34:
    // 0x3dda34: 0xc62201e0  lwc1        $f2, 0x1E0($s1)
    ctx->pc = 0x3dda34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3dda38:
    // 0x3dda38: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3dda38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_3dda3c:
    // 0x3dda3c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3dda3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3dda40:
    // 0x3dda40: 0x3c03c270  lui         $v1, 0xC270
    ctx->pc = 0x3dda40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49776 << 16));
label_3dda44:
    // 0x3dda44: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3dda44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_3dda48:
    // 0x3dda48: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x3dda48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_3dda4c:
    // 0x3dda4c: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x3dda4cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
label_3dda50:
    // 0x3dda50: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3dda50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_3dda54:
    // 0x3dda54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3dda54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dda58:
    // 0x3dda58: 0x0  nop
    ctx->pc = 0x3dda58u;
    // NOP
label_3dda5c:
    // 0x3dda5c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3dda5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3dda60:
    // 0x3dda60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dda60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dda64:
    // 0x3dda64: 0x0  nop
    ctx->pc = 0x3dda64u;
    // NOP
label_3dda68:
    // 0x3dda68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3dda68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3dda6c:
    // 0x3dda6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dda6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3dda70:
    // 0x3dda70: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3dda70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3dda74:
    // 0x3dda74: 0xc04cdf0  jal         func_1337C0
label_3dda78:
    if (ctx->pc == 0x3DDA78u) {
        ctx->pc = 0x3DDA78u;
            // 0x3dda78: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x3DDA7Cu;
        goto label_3dda7c;
    }
    ctx->pc = 0x3DDA74u;
    SET_GPR_U32(ctx, 31, 0x3DDA7Cu);
    ctx->pc = 0x3DDA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDA74u;
            // 0x3dda78: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDA7Cu; }
        if (ctx->pc != 0x3DDA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDA7Cu; }
        if (ctx->pc != 0x3DDA7Cu) { return; }
    }
    ctx->pc = 0x3DDA7Cu;
label_3dda7c:
    // 0x3dda7c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3dda7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3dda80:
    // 0x3dda80: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3dda80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3dda84:
    // 0x3dda84: 0xc44c9c30  lwc1        $f12, -0x63D0($v0)
    ctx->pc = 0x3dda84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3dda88:
    // 0x3dda88: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x3dda88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_3dda8c:
    // 0x3dda8c: 0xc46d9c34  lwc1        $f13, -0x63CC($v1)
    ctx->pc = 0x3dda8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294941748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3dda90:
    // 0x3dda90: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3dda90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3dda94:
    // 0x3dda94: 0xc44e9c38  lwc1        $f14, -0x63C8($v0)
    ctx->pc = 0x3dda94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3dda98:
    // 0x3dda98: 0xc04ce64  jal         func_133990
label_3dda9c:
    if (ctx->pc == 0x3DDA9Cu) {
        ctx->pc = 0x3DDA9Cu;
            // 0x3dda9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDAA0u;
        goto label_3ddaa0;
    }
    ctx->pc = 0x3DDA98u;
    SET_GPR_U32(ctx, 31, 0x3DDAA0u);
    ctx->pc = 0x3DDA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDA98u;
            // 0x3dda9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDAA0u; }
        if (ctx->pc != 0x3DDAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDAA0u; }
        if (ctx->pc != 0x3DDAA0u) { return; }
    }
    ctx->pc = 0x3DDAA0u;
label_3ddaa0:
    // 0x3ddaa0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x3ddaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_3ddaa4:
    // 0x3ddaa4: 0xc04cce4  jal         func_133390
label_3ddaa8:
    if (ctx->pc == 0x3DDAA8u) {
        ctx->pc = 0x3DDAA8u;
            // 0x3ddaa8: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x3DDAACu;
        goto label_3ddaac;
    }
    ctx->pc = 0x3DDAA4u;
    SET_GPR_U32(ctx, 31, 0x3DDAACu);
    ctx->pc = 0x3DDAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDAA4u;
            // 0x3ddaa8: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDAACu; }
        if (ctx->pc != 0x3DDAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDAACu; }
        if (ctx->pc != 0x3DDAACu) { return; }
    }
    ctx->pc = 0x3DDAACu;
label_3ddaac:
    // 0x3ddaac: 0xc077264  jal         func_1DC990
label_3ddab0:
    if (ctx->pc == 0x3DDAB0u) {
        ctx->pc = 0x3DDAB0u;
            // 0x3ddab0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDAB4u;
        goto label_3ddab4;
    }
    ctx->pc = 0x3DDAACu;
    SET_GPR_U32(ctx, 31, 0x3DDAB4u);
    ctx->pc = 0x3DDAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDAACu;
            // 0x3ddab0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDAB4u; }
        if (ctx->pc != 0x3DDAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDAB4u; }
        if (ctx->pc != 0x3DDAB4u) { return; }
    }
    ctx->pc = 0x3DDAB4u;
label_3ddab4:
    // 0x3ddab4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x3ddab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_3ddab8:
    // 0x3ddab8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3ddab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddabc:
    // 0x3ddabc: 0xc04cc90  jal         func_133240
label_3ddac0:
    if (ctx->pc == 0x3DDAC0u) {
        ctx->pc = 0x3DDAC0u;
            // 0x3ddac0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDAC4u;
        goto label_3ddac4;
    }
    ctx->pc = 0x3DDABCu;
    SET_GPR_U32(ctx, 31, 0x3DDAC4u);
    ctx->pc = 0x3DDAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDABCu;
            // 0x3ddac0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDAC4u; }
        if (ctx->pc != 0x3DDAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDAC4u; }
        if (ctx->pc != 0x3DDAC4u) { return; }
    }
    ctx->pc = 0x3DDAC4u;
label_3ddac4:
    // 0x3ddac4: 0xc0c05c8  jal         func_301720
label_3ddac8:
    if (ctx->pc == 0x3DDAC8u) {
        ctx->pc = 0x3DDAC8u;
            // 0x3ddac8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDACCu;
        goto label_3ddacc;
    }
    ctx->pc = 0x3DDAC4u;
    SET_GPR_U32(ctx, 31, 0x3DDACCu);
    ctx->pc = 0x3DDAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDAC4u;
            // 0x3ddac8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDACCu; }
        if (ctx->pc != 0x3DDACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301720_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDACCu; }
        if (ctx->pc != 0x3DDACCu) { return; }
    }
    ctx->pc = 0x3DDACCu;
label_3ddacc:
    // 0x3ddacc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ddaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddad0:
    // 0x3ddad0: 0xc04cc04  jal         func_133010
label_3ddad4:
    if (ctx->pc == 0x3DDAD4u) {
        ctx->pc = 0x3DDAD4u;
            // 0x3ddad4: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x3DDAD8u;
        goto label_3ddad8;
    }
    ctx->pc = 0x3DDAD0u;
    SET_GPR_U32(ctx, 31, 0x3DDAD8u);
    ctx->pc = 0x3DDAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDAD0u;
            // 0x3ddad4: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDAD8u; }
        if (ctx->pc != 0x3DDAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDAD8u; }
        if (ctx->pc != 0x3DDAD8u) { return; }
    }
    ctx->pc = 0x3DDAD8u;
label_3ddad8:
    // 0x3ddad8: 0xc077280  jal         func_1DCA00
label_3ddadc:
    if (ctx->pc == 0x3DDADCu) {
        ctx->pc = 0x3DDADCu;
            // 0x3ddadc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDAE0u;
        goto label_3ddae0;
    }
    ctx->pc = 0x3DDAD8u;
    SET_GPR_U32(ctx, 31, 0x3DDAE0u);
    ctx->pc = 0x3DDADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDAD8u;
            // 0x3ddadc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDAE0u; }
        if (ctx->pc != 0x3DDAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDAE0u; }
        if (ctx->pc != 0x3DDAE0u) { return; }
    }
    ctx->pc = 0x3DDAE0u;
label_3ddae0:
    // 0x3ddae0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ddae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddae4:
    // 0x3ddae4: 0xc0b6d5c  jal         func_2DB570
label_3ddae8:
    if (ctx->pc == 0x3DDAE8u) {
        ctx->pc = 0x3DDAE8u;
            // 0x3ddae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDAECu;
        goto label_3ddaec;
    }
    ctx->pc = 0x3DDAE4u;
    SET_GPR_U32(ctx, 31, 0x3DDAECu);
    ctx->pc = 0x3DDAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDAE4u;
            // 0x3ddae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDAECu; }
        if (ctx->pc != 0x3DDAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDAECu; }
        if (ctx->pc != 0x3DDAECu) { return; }
    }
    ctx->pc = 0x3DDAECu;
label_3ddaec:
    // 0x3ddaec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ddaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ddaf0:
    // 0x3ddaf0: 0xc075318  jal         func_1D4C60
label_3ddaf4:
    if (ctx->pc == 0x3DDAF4u) {
        ctx->pc = 0x3DDAF4u;
            // 0x3ddaf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDAF8u;
        goto label_3ddaf8;
    }
    ctx->pc = 0x3DDAF0u;
    SET_GPR_U32(ctx, 31, 0x3DDAF8u);
    ctx->pc = 0x3DDAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDAF0u;
            // 0x3ddaf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDAF8u; }
        if (ctx->pc != 0x3DDAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDAF8u; }
        if (ctx->pc != 0x3DDAF8u) { return; }
    }
    ctx->pc = 0x3DDAF8u;
label_3ddaf8:
    // 0x3ddaf8: 0xc0b6cec  jal         func_2DB3B0
label_3ddafc:
    if (ctx->pc == 0x3DDAFCu) {
        ctx->pc = 0x3DDAFCu;
            // 0x3ddafc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB00u;
        goto label_3ddb00;
    }
    ctx->pc = 0x3DDAF8u;
    SET_GPR_U32(ctx, 31, 0x3DDB00u);
    ctx->pc = 0x3DDAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDAF8u;
            // 0x3ddafc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB00u; }
        if (ctx->pc != 0x3DDB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB00u; }
        if (ctx->pc != 0x3DDB00u) { return; }
    }
    ctx->pc = 0x3DDB00u;
label_3ddb00:
    // 0x3ddb00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ddb00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddb04:
    // 0x3ddb04: 0xc077280  jal         func_1DCA00
label_3ddb08:
    if (ctx->pc == 0x3DDB08u) {
        ctx->pc = 0x3DDB08u;
            // 0x3ddb08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB0Cu;
        goto label_3ddb0c;
    }
    ctx->pc = 0x3DDB04u;
    SET_GPR_U32(ctx, 31, 0x3DDB0Cu);
    ctx->pc = 0x3DDB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDB04u;
            // 0x3ddb08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB0Cu; }
        if (ctx->pc != 0x3DDB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB0Cu; }
        if (ctx->pc != 0x3DDB0Cu) { return; }
    }
    ctx->pc = 0x3DDB0Cu;
label_3ddb0c:
    // 0x3ddb0c: 0xc07727c  jal         func_1DC9F0
label_3ddb10:
    if (ctx->pc == 0x3DDB10u) {
        ctx->pc = 0x3DDB10u;
            // 0x3ddb10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB14u;
        goto label_3ddb14;
    }
    ctx->pc = 0x3DDB0Cu;
    SET_GPR_U32(ctx, 31, 0x3DDB14u);
    ctx->pc = 0x3DDB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDB0Cu;
            // 0x3ddb10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB14u; }
        if (ctx->pc != 0x3DDB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB14u; }
        if (ctx->pc != 0x3DDB14u) { return; }
    }
    ctx->pc = 0x3DDB14u;
label_3ddb14:
    // 0x3ddb14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ddb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ddb18:
    // 0x3ddb18: 0xc0c05e0  jal         func_301780
label_3ddb1c:
    if (ctx->pc == 0x3DDB1Cu) {
        ctx->pc = 0x3DDB1Cu;
            // 0x3ddb1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB20u;
        goto label_3ddb20;
    }
    ctx->pc = 0x3DDB18u;
    SET_GPR_U32(ctx, 31, 0x3DDB20u);
    ctx->pc = 0x3DDB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDB18u;
            // 0x3ddb1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB20u; }
        if (ctx->pc != 0x3DDB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB20u; }
        if (ctx->pc != 0x3DDB20u) { return; }
    }
    ctx->pc = 0x3DDB20u;
label_3ddb20:
    // 0x3ddb20: 0xc077280  jal         func_1DCA00
label_3ddb24:
    if (ctx->pc == 0x3DDB24u) {
        ctx->pc = 0x3DDB24u;
            // 0x3ddb24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB28u;
        goto label_3ddb28;
    }
    ctx->pc = 0x3DDB20u;
    SET_GPR_U32(ctx, 31, 0x3DDB28u);
    ctx->pc = 0x3DDB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDB20u;
            // 0x3ddb24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB28u; }
        if (ctx->pc != 0x3DDB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB28u; }
        if (ctx->pc != 0x3DDB28u) { return; }
    }
    ctx->pc = 0x3DDB28u;
label_3ddb28:
    // 0x3ddb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ddb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ddb2c:
    // 0x3ddb2c: 0xc0e5f68  jal         func_397DA0
label_3ddb30:
    if (ctx->pc == 0x3DDB30u) {
        ctx->pc = 0x3DDB30u;
            // 0x3ddb30: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB34u;
        goto label_3ddb34;
    }
    ctx->pc = 0x3DDB2Cu;
    SET_GPR_U32(ctx, 31, 0x3DDB34u);
    ctx->pc = 0x3DDB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDB2Cu;
            // 0x3ddb30: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB34u; }
        if (ctx->pc != 0x3DDB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB34u; }
        if (ctx->pc != 0x3DDB34u) { return; }
    }
    ctx->pc = 0x3DDB34u;
label_3ddb34:
    // 0x3ddb34: 0xc0efc48  jal         func_3BF120
label_3ddb38:
    if (ctx->pc == 0x3DDB38u) {
        ctx->pc = 0x3DDB38u;
            // 0x3ddb38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB3Cu;
        goto label_3ddb3c;
    }
    ctx->pc = 0x3DDB34u;
    SET_GPR_U32(ctx, 31, 0x3DDB3Cu);
    ctx->pc = 0x3DDB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDB34u;
            // 0x3ddb38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF120u;
    if (runtime->hasFunction(0x3BF120u)) {
        auto targetFn = runtime->lookupFunction(0x3BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB3Cu; }
        if (ctx->pc != 0x3DDB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF120_0x3bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB3Cu; }
        if (ctx->pc != 0x3DDB3Cu) { return; }
    }
    ctx->pc = 0x3DDB3Cu;
label_3ddb3c:
    // 0x3ddb3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ddb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddb40:
    // 0x3ddb40: 0xc0daef4  jal         func_36BBD0
label_3ddb44:
    if (ctx->pc == 0x3DDB44u) {
        ctx->pc = 0x3DDB44u;
            // 0x3ddb44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB48u;
        goto label_3ddb48;
    }
    ctx->pc = 0x3DDB40u;
    SET_GPR_U32(ctx, 31, 0x3DDB48u);
    ctx->pc = 0x3DDB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDB40u;
            // 0x3ddb44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBD0u;
    if (runtime->hasFunction(0x36BBD0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB48u; }
        if (ctx->pc != 0x3DDB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBD0_0x36bbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB48u; }
        if (ctx->pc != 0x3DDB48u) { return; }
    }
    ctx->pc = 0x3DDB48u;
label_3ddb48:
    // 0x3ddb48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ddb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ddb4c:
    // 0x3ddb4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ddb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ddb50:
    // 0x3ddb50: 0xc075378  jal         func_1D4DE0
label_3ddb54:
    if (ctx->pc == 0x3DDB54u) {
        ctx->pc = 0x3DDB54u;
            // 0x3ddb54: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB58u;
        goto label_3ddb58;
    }
    ctx->pc = 0x3DDB50u;
    SET_GPR_U32(ctx, 31, 0x3DDB58u);
    ctx->pc = 0x3DDB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDB50u;
            // 0x3ddb54: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB58u; }
        if (ctx->pc != 0x3DDB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB58u; }
        if (ctx->pc != 0x3DDB58u) { return; }
    }
    ctx->pc = 0x3DDB58u;
label_3ddb58:
    // 0x3ddb58: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ddb58u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ddb5c:
    // 0x3ddb5c: 0xc0daef0  jal         func_36BBC0
label_3ddb60:
    if (ctx->pc == 0x3DDB60u) {
        ctx->pc = 0x3DDB60u;
            // 0x3ddb60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB64u;
        goto label_3ddb64;
    }
    ctx->pc = 0x3DDB5Cu;
    SET_GPR_U32(ctx, 31, 0x3DDB64u);
    ctx->pc = 0x3DDB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDB5Cu;
            // 0x3ddb60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBC0u;
    if (runtime->hasFunction(0x36BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB64u; }
        if (ctx->pc != 0x3DDB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBC0_0x36bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB64u; }
        if (ctx->pc != 0x3DDB64u) { return; }
    }
    ctx->pc = 0x3DDB64u;
label_3ddb64:
    // 0x3ddb64: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x3ddb64u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3ddb68:
    // 0x3ddb68: 0xc0cef78  jal         func_33BDE0
label_3ddb6c:
    if (ctx->pc == 0x3DDB6Cu) {
        ctx->pc = 0x3DDB6Cu;
            // 0x3ddb6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB70u;
        goto label_3ddb70;
    }
    ctx->pc = 0x3DDB68u;
    SET_GPR_U32(ctx, 31, 0x3DDB70u);
    ctx->pc = 0x3DDB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDB68u;
            // 0x3ddb6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BDE0u;
    if (runtime->hasFunction(0x33BDE0u)) {
        auto targetFn = runtime->lookupFunction(0x33BDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB70u; }
        if (ctx->pc != 0x3DDB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BDE0_0x33bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB70u; }
        if (ctx->pc != 0x3DDB70u) { return; }
    }
    ctx->pc = 0x3DDB70u;
label_3ddb70:
    // 0x3ddb70: 0xc0c05dc  jal         func_301770
label_3ddb74:
    if (ctx->pc == 0x3DDB74u) {
        ctx->pc = 0x3DDB74u;
            // 0x3ddb74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB78u;
        goto label_3ddb78;
    }
    ctx->pc = 0x3DDB70u;
    SET_GPR_U32(ctx, 31, 0x3DDB78u);
    ctx->pc = 0x3DDB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDB70u;
            // 0x3ddb74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB78u; }
        if (ctx->pc != 0x3DDB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB78u; }
        if (ctx->pc != 0x3DDB78u) { return; }
    }
    ctx->pc = 0x3DDB78u;
label_3ddb78:
    // 0x3ddb78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ddb78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddb7c:
    // 0x3ddb7c: 0xc0daeec  jal         func_36BBB0
label_3ddb80:
    if (ctx->pc == 0x3DDB80u) {
        ctx->pc = 0x3DDB80u;
            // 0x3ddb80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB84u;
        goto label_3ddb84;
    }
    ctx->pc = 0x3DDB7Cu;
    SET_GPR_U32(ctx, 31, 0x3DDB84u);
    ctx->pc = 0x3DDB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDB7Cu;
            // 0x3ddb80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBB0u;
    if (runtime->hasFunction(0x36BBB0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB84u; }
        if (ctx->pc != 0x3DDB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBB0_0x36bbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB84u; }
        if (ctx->pc != 0x3DDB84u) { return; }
    }
    ctx->pc = 0x3DDB84u;
label_3ddb84:
    // 0x3ddb84: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ddb84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ddb88:
    // 0x3ddb88: 0xc0daef0  jal         func_36BBC0
label_3ddb8c:
    if (ctx->pc == 0x3DDB8Cu) {
        ctx->pc = 0x3DDB8Cu;
            // 0x3ddb8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB90u;
        goto label_3ddb90;
    }
    ctx->pc = 0x3DDB88u;
    SET_GPR_U32(ctx, 31, 0x3DDB90u);
    ctx->pc = 0x3DDB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDB88u;
            // 0x3ddb8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBC0u;
    if (runtime->hasFunction(0x36BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB90u; }
        if (ctx->pc != 0x3DDB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBC0_0x36bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDB90u; }
        if (ctx->pc != 0x3DDB90u) { return; }
    }
    ctx->pc = 0x3DDB90u;
label_3ddb90:
    // 0x3ddb90: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x3ddb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_3ddb94:
    // 0x3ddb94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ddb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ddb98:
    // 0x3ddb98: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x3ddb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_3ddb9c:
    // 0x3ddb9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3ddb9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3ddba0:
    // 0x3ddba0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3ddba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3ddba4:
    // 0x3ddba4: 0xc0daee8  jal         func_36BBA0
label_3ddba8:
    if (ctx->pc == 0x3DDBA8u) {
        ctx->pc = 0x3DDBA8u;
            // 0x3ddba8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3DDBACu;
        goto label_3ddbac;
    }
    ctx->pc = 0x3DDBA4u;
    SET_GPR_U32(ctx, 31, 0x3DDBACu);
    ctx->pc = 0x3DDBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDBA4u;
            // 0x3ddba8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBA0u;
    if (runtime->hasFunction(0x36BBA0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDBACu; }
        if (ctx->pc != 0x3DDBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBA0_0x36bba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDBACu; }
        if (ctx->pc != 0x3DDBACu) { return; }
    }
    ctx->pc = 0x3DDBACu;
label_3ddbac:
    // 0x3ddbac: 0xc0c05dc  jal         func_301770
label_3ddbb0:
    if (ctx->pc == 0x3DDBB0u) {
        ctx->pc = 0x3DDBB0u;
            // 0x3ddbb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDBB4u;
        goto label_3ddbb4;
    }
    ctx->pc = 0x3DDBACu;
    SET_GPR_U32(ctx, 31, 0x3DDBB4u);
    ctx->pc = 0x3DDBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDBACu;
            // 0x3ddbb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDBB4u; }
        if (ctx->pc != 0x3DDBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDBB4u; }
        if (ctx->pc != 0x3DDBB4u) { return; }
    }
    ctx->pc = 0x3DDBB4u;
label_3ddbb4:
    // 0x3ddbb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ddbb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddbb8:
    // 0x3ddbb8: 0xc077280  jal         func_1DCA00
label_3ddbbc:
    if (ctx->pc == 0x3DDBBCu) {
        ctx->pc = 0x3DDBBCu;
            // 0x3ddbbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDBC0u;
        goto label_3ddbc0;
    }
    ctx->pc = 0x3DDBB8u;
    SET_GPR_U32(ctx, 31, 0x3DDBC0u);
    ctx->pc = 0x3DDBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDBB8u;
            // 0x3ddbbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDBC0u; }
        if (ctx->pc != 0x3DDBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDBC0u; }
        if (ctx->pc != 0x3DDBC0u) { return; }
    }
    ctx->pc = 0x3DDBC0u;
label_3ddbc0:
    // 0x3ddbc0: 0xc07727c  jal         func_1DC9F0
label_3ddbc4:
    if (ctx->pc == 0x3DDBC4u) {
        ctx->pc = 0x3DDBC4u;
            // 0x3ddbc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDBC8u;
        goto label_3ddbc8;
    }
    ctx->pc = 0x3DDBC0u;
    SET_GPR_U32(ctx, 31, 0x3DDBC8u);
    ctx->pc = 0x3DDBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDBC0u;
            // 0x3ddbc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDBC8u; }
        if (ctx->pc != 0x3DDBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDBC8u; }
        if (ctx->pc != 0x3DDBC8u) { return; }
    }
    ctx->pc = 0x3DDBC8u;
label_3ddbc8:
    // 0x3ddbc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ddbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddbcc:
    // 0x3ddbcc: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x3ddbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_3ddbd0:
    // 0x3ddbd0: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x3ddbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_3ddbd4:
    // 0x3ddbd4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ddbd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ddbd8:
    // 0x3ddbd8: 0xc0c05d4  jal         func_301750
label_3ddbdc:
    if (ctx->pc == 0x3DDBDCu) {
        ctx->pc = 0x3DDBDCu;
            // 0x3ddbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDBE0u;
        goto label_3ddbe0;
    }
    ctx->pc = 0x3DDBD8u;
    SET_GPR_U32(ctx, 31, 0x3DDBE0u);
    ctx->pc = 0x3DDBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDBD8u;
            // 0x3ddbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301750u;
    if (runtime->hasFunction(0x301750u)) {
        auto targetFn = runtime->lookupFunction(0x301750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDBE0u; }
        if (ctx->pc != 0x3DDBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301750_0x301750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDBE0u; }
        if (ctx->pc != 0x3DDBE0u) { return; }
    }
    ctx->pc = 0x3DDBE0u;
label_3ddbe0:
    // 0x3ddbe0: 0xc077330  jal         func_1DCCC0
label_3ddbe4:
    if (ctx->pc == 0x3DDBE4u) {
        ctx->pc = 0x3DDBE4u;
            // 0x3ddbe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDBE8u;
        goto label_3ddbe8;
    }
    ctx->pc = 0x3DDBE0u;
    SET_GPR_U32(ctx, 31, 0x3DDBE8u);
    ctx->pc = 0x3DDBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDBE0u;
            // 0x3ddbe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDBE8u; }
        if (ctx->pc != 0x3DDBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDBE8u; }
        if (ctx->pc != 0x3DDBE8u) { return; }
    }
    ctx->pc = 0x3DDBE8u;
label_3ddbe8:
    // 0x3ddbe8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3ddbec:
    if (ctx->pc == 0x3DDBECu) {
        ctx->pc = 0x3DDBF0u;
        goto label_3ddbf0;
    }
    ctx->pc = 0x3DDBE8u;
    {
        const bool branch_taken_0x3ddbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ddbe8) {
            ctx->pc = 0x3DDC00u;
            goto label_3ddc00;
        }
    }
    ctx->pc = 0x3DDBF0u;
label_3ddbf0:
    // 0x3ddbf0: 0xc07732c  jal         func_1DCCB0
label_3ddbf4:
    if (ctx->pc == 0x3DDBF4u) {
        ctx->pc = 0x3DDBF4u;
            // 0x3ddbf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDBF8u;
        goto label_3ddbf8;
    }
    ctx->pc = 0x3DDBF0u;
    SET_GPR_U32(ctx, 31, 0x3DDBF8u);
    ctx->pc = 0x3DDBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDBF0u;
            // 0x3ddbf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDBF8u; }
        if (ctx->pc != 0x3DDBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDBF8u; }
        if (ctx->pc != 0x3DDBF8u) { return; }
    }
    ctx->pc = 0x3DDBF8u;
label_3ddbf8:
    // 0x3ddbf8: 0x10400468  beqz        $v0, . + 4 + (0x468 << 2)
label_3ddbfc:
    if (ctx->pc == 0x3DDBFCu) {
        ctx->pc = 0x3DDC00u;
        goto label_3ddc00;
    }
    ctx->pc = 0x3DDBF8u;
    {
        const bool branch_taken_0x3ddbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ddbf8) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DDC00u;
label_3ddc00:
    // 0x3ddc00: 0xc0775b8  jal         func_1DD6E0
label_3ddc04:
    if (ctx->pc == 0x3DDC04u) {
        ctx->pc = 0x3DDC08u;
        goto label_3ddc08;
    }
    ctx->pc = 0x3DDC00u;
    SET_GPR_U32(ctx, 31, 0x3DDC08u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDC08u; }
        if (ctx->pc != 0x3DDC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDC08u; }
        if (ctx->pc != 0x3DDC08u) { return; }
    }
    ctx->pc = 0x3DDC08u;
label_3ddc08:
    // 0x3ddc08: 0xc0775b4  jal         func_1DD6D0
label_3ddc0c:
    if (ctx->pc == 0x3DDC0Cu) {
        ctx->pc = 0x3DDC0Cu;
            // 0x3ddc0c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3DDC10u;
        goto label_3ddc10;
    }
    ctx->pc = 0x3DDC08u;
    SET_GPR_U32(ctx, 31, 0x3DDC10u);
    ctx->pc = 0x3DDC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDC08u;
            // 0x3ddc0c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDC10u; }
        if (ctx->pc != 0x3DDC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDC10u; }
        if (ctx->pc != 0x3DDC10u) { return; }
    }
    ctx->pc = 0x3DDC10u;
label_3ddc10:
    // 0x3ddc10: 0xc62201f0  lwc1        $f2, 0x1F0($s1)
    ctx->pc = 0x3ddc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ddc14:
    // 0x3ddc14: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3ddc14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_3ddc18:
    // 0x3ddc18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ddc18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ddc1c:
    // 0x3ddc1c: 0x0  nop
    ctx->pc = 0x3ddc1cu;
    // NOP
label_3ddc20:
    // 0x3ddc20: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3ddc20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3ddc24:
    // 0x3ddc24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3ddc24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ddc28:
    // 0x3ddc28: 0x4501045c  bc1t        . + 4 + (0x45C << 2)
label_3ddc2c:
    if (ctx->pc == 0x3DDC2Cu) {
        ctx->pc = 0x3DDC2Cu;
            // 0x3ddc2c: 0xe62001f0  swc1        $f0, 0x1F0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 496), bits); }
        ctx->pc = 0x3DDC30u;
        goto label_3ddc30;
    }
    ctx->pc = 0x3DDC28u;
    {
        const bool branch_taken_0x3ddc28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DDC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDC28u;
            // 0x3ddc2c: 0xe62001f0  swc1        $f0, 0x1F0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 496), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddc28) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DDC30u;
label_3ddc30:
    // 0x3ddc30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ddc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ddc34:
    // 0x3ddc34: 0xc07732c  jal         func_1DCCB0
label_3ddc38:
    if (ctx->pc == 0x3DDC38u) {
        ctx->pc = 0x3DDC38u;
            // 0x3ddc38: 0xae2001f0  sw          $zero, 0x1F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
        ctx->pc = 0x3DDC3Cu;
        goto label_3ddc3c;
    }
    ctx->pc = 0x3DDC34u;
    SET_GPR_U32(ctx, 31, 0x3DDC3Cu);
    ctx->pc = 0x3DDC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDC34u;
            // 0x3ddc38: 0xae2001f0  sw          $zero, 0x1F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDC3Cu; }
        if (ctx->pc != 0x3DDC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDC3Cu; }
        if (ctx->pc != 0x3DDC3Cu) { return; }
    }
    ctx->pc = 0x3DDC3Cu;
label_3ddc3c:
    // 0x3ddc3c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3ddc40:
    if (ctx->pc == 0x3DDC40u) {
        ctx->pc = 0x3DDC44u;
        goto label_3ddc44;
    }
    ctx->pc = 0x3DDC3Cu;
    {
        const bool branch_taken_0x3ddc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ddc3c) {
            ctx->pc = 0x3DDC6Cu;
            goto label_3ddc6c;
        }
    }
    ctx->pc = 0x3DDC44u;
label_3ddc44:
    // 0x3ddc44: 0xc077320  jal         func_1DCC80
label_3ddc48:
    if (ctx->pc == 0x3DDC48u) {
        ctx->pc = 0x3DDC48u;
            // 0x3ddc48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDC4Cu;
        goto label_3ddc4c;
    }
    ctx->pc = 0x3DDC44u;
    SET_GPR_U32(ctx, 31, 0x3DDC4Cu);
    ctx->pc = 0x3DDC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDC44u;
            // 0x3ddc48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDC4Cu; }
        if (ctx->pc != 0x3DDC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDC4Cu; }
        if (ctx->pc != 0x3DDC4Cu) { return; }
    }
    ctx->pc = 0x3DDC4Cu;
label_3ddc4c:
    // 0x3ddc4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ddc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddc50:
    // 0x3ddc50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3ddc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ddc54:
    // 0x3ddc54: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x3ddc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_3ddc58:
    // 0x3ddc58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ddc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ddc5c:
    // 0x3ddc5c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ddc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ddc60:
    // 0x3ddc60: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x3ddc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3ddc64:
    // 0x3ddc64: 0xc077554  jal         func_1DD550
label_3ddc68:
    if (ctx->pc == 0x3DDC68u) {
        ctx->pc = 0x3DDC68u;
            // 0x3ddc68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDC6Cu;
        goto label_3ddc6c;
    }
    ctx->pc = 0x3DDC64u;
    SET_GPR_U32(ctx, 31, 0x3DDC6Cu);
    ctx->pc = 0x3DDC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDC64u;
            // 0x3ddc68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD550u;
    if (runtime->hasFunction(0x1DD550u)) {
        auto targetFn = runtime->lookupFunction(0x1DD550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDC6Cu; }
        if (ctx->pc != 0x3DDC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD550_0x1dd550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDC6Cu; }
        if (ctx->pc != 0x3DDC6Cu) { return; }
    }
    ctx->pc = 0x3DDC6Cu;
label_3ddc6c:
    // 0x3ddc6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ddc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ddc70:
    // 0x3ddc70: 0xc0770e4  jal         func_1DC390
label_3ddc74:
    if (ctx->pc == 0x3DDC74u) {
        ctx->pc = 0x3DDC74u;
            // 0x3ddc74: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x3DDC78u;
        goto label_3ddc78;
    }
    ctx->pc = 0x3DDC70u;
    SET_GPR_U32(ctx, 31, 0x3DDC78u);
    ctx->pc = 0x3DDC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDC70u;
            // 0x3ddc74: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDC78u; }
        if (ctx->pc != 0x3DDC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDC78u; }
        if (ctx->pc != 0x3DDC78u) { return; }
    }
    ctx->pc = 0x3DDC78u;
label_3ddc78:
    // 0x3ddc78: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3ddc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3ddc7c:
    // 0x3ddc7c: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_3ddc80:
    if (ctx->pc == 0x3DDC80u) {
        ctx->pc = 0x3DDC80u;
            // 0x3ddc80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDC84u;
        goto label_3ddc84;
    }
    ctx->pc = 0x3DDC7Cu;
    {
        const bool branch_taken_0x3ddc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ddc7c) {
            ctx->pc = 0x3DDC80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDC7Cu;
            // 0x3ddc80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DDC8Cu;
            goto label_3ddc8c;
        }
    }
    ctx->pc = 0x3DDC84u;
label_3ddc84:
    // 0x3ddc84: 0x10000011  b           . + 4 + (0x11 << 2)
label_3ddc88:
    if (ctx->pc == 0x3DDC88u) {
        ctx->pc = 0x3DDC88u;
            // 0x3ddc88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDC8Cu;
        goto label_3ddc8c;
    }
    ctx->pc = 0x3DDC84u;
    {
        const bool branch_taken_0x3ddc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDC84u;
            // 0x3ddc88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddc84) {
            ctx->pc = 0x3DDCCCu;
            goto label_3ddccc;
        }
    }
    ctx->pc = 0x3DDC8Cu;
label_3ddc8c:
    // 0x3ddc8c: 0xc077324  jal         func_1DCC90
label_3ddc90:
    if (ctx->pc == 0x3DDC90u) {
        ctx->pc = 0x3DDC94u;
        goto label_3ddc94;
    }
    ctx->pc = 0x3DDC8Cu;
    SET_GPR_U32(ctx, 31, 0x3DDC94u);
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDC94u; }
        if (ctx->pc != 0x3DDC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDC94u; }
        if (ctx->pc != 0x3DDC94u) { return; }
    }
    ctx->pc = 0x3DDC94u;
label_3ddc94:
    // 0x3ddc94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ddc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ddc98:
    // 0x3ddc98: 0xc077258  jal         func_1DC960
label_3ddc9c:
    if (ctx->pc == 0x3DDC9Cu) {
        ctx->pc = 0x3DDC9Cu;
            // 0x3ddc9c: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3DDCA0u;
        goto label_3ddca0;
    }
    ctx->pc = 0x3DDC98u;
    SET_GPR_U32(ctx, 31, 0x3DDCA0u);
    ctx->pc = 0x3DDC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDC98u;
            // 0x3ddc9c: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDCA0u; }
        if (ctx->pc != 0x3DDCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDCA0u; }
        if (ctx->pc != 0x3DDCA0u) { return; }
    }
    ctx->pc = 0x3DDCA0u;
label_3ddca0:
    // 0x3ddca0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3ddca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddca4:
    // 0x3ddca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ddca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ddca8:
    // 0x3ddca8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ddca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ddcac:
    // 0x3ddcac: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x3ddcacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3ddcb0:
    // 0x3ddcb0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3ddcb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3ddcb4:
    // 0x3ddcb4: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x3ddcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_3ddcb8:
    // 0x3ddcb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ddcb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ddcbc:
    // 0x3ddcbc: 0xc0bb404  jal         func_2ED010
label_3ddcc0:
    if (ctx->pc == 0x3DDCC0u) {
        ctx->pc = 0x3DDCC0u;
            // 0x3ddcc0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3DDCC4u;
        goto label_3ddcc4;
    }
    ctx->pc = 0x3DDCBCu;
    SET_GPR_U32(ctx, 31, 0x3DDCC4u);
    ctx->pc = 0x3DDCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDCBCu;
            // 0x3ddcc0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDCC4u; }
        if (ctx->pc != 0x3DDCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDCC4u; }
        if (ctx->pc != 0x3DDCC4u) { return; }
    }
    ctx->pc = 0x3DDCC4u;
label_3ddcc4:
    // 0x3ddcc4: 0x10000435  b           . + 4 + (0x435 << 2)
label_3ddcc8:
    if (ctx->pc == 0x3DDCC8u) {
        ctx->pc = 0x3DDCCCu;
        goto label_3ddccc;
    }
    ctx->pc = 0x3DDCC4u;
    {
        const bool branch_taken_0x3ddcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ddcc4) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DDCCCu;
label_3ddccc:
    // 0x3ddccc: 0xc077324  jal         func_1DCC90
label_3ddcd0:
    if (ctx->pc == 0x3DDCD0u) {
        ctx->pc = 0x3DDCD4u;
        goto label_3ddcd4;
    }
    ctx->pc = 0x3DDCCCu;
    SET_GPR_U32(ctx, 31, 0x3DDCD4u);
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDCD4u; }
        if (ctx->pc != 0x3DDCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDCD4u; }
        if (ctx->pc != 0x3DDCD4u) { return; }
    }
    ctx->pc = 0x3DDCD4u;
label_3ddcd4:
    // 0x3ddcd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ddcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ddcd8:
    // 0x3ddcd8: 0xc077258  jal         func_1DC960
label_3ddcdc:
    if (ctx->pc == 0x3DDCDCu) {
        ctx->pc = 0x3DDCDCu;
            // 0x3ddcdc: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3DDCE0u;
        goto label_3ddce0;
    }
    ctx->pc = 0x3DDCD8u;
    SET_GPR_U32(ctx, 31, 0x3DDCE0u);
    ctx->pc = 0x3DDCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDCD8u;
            // 0x3ddcdc: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDCE0u; }
        if (ctx->pc != 0x3DDCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDCE0u; }
        if (ctx->pc != 0x3DDCE0u) { return; }
    }
    ctx->pc = 0x3DDCE0u;
label_3ddce0:
    // 0x3ddce0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3ddce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddce4:
    // 0x3ddce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ddce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ddce8:
    // 0x3ddce8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ddce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ddcec:
    // 0x3ddcec: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x3ddcecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3ddcf0:
    // 0x3ddcf0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3ddcf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3ddcf4:
    // 0x3ddcf4: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x3ddcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_3ddcf8:
    // 0x3ddcf8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ddcf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ddcfc:
    // 0x3ddcfc: 0xc0bb404  jal         func_2ED010
label_3ddd00:
    if (ctx->pc == 0x3DDD00u) {
        ctx->pc = 0x3DDD00u;
            // 0x3ddd00: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3DDD04u;
        goto label_3ddd04;
    }
    ctx->pc = 0x3DDCFCu;
    SET_GPR_U32(ctx, 31, 0x3DDD04u);
    ctx->pc = 0x3DDD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDCFCu;
            // 0x3ddd00: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDD04u; }
        if (ctx->pc != 0x3DDD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDD04u; }
        if (ctx->pc != 0x3DDD04u) { return; }
    }
    ctx->pc = 0x3DDD04u;
label_3ddd04:
    // 0x3ddd04: 0x10000425  b           . + 4 + (0x425 << 2)
label_3ddd08:
    if (ctx->pc == 0x3DDD08u) {
        ctx->pc = 0x3DDD0Cu;
        goto label_3ddd0c;
    }
    ctx->pc = 0x3DDD04u;
    {
        const bool branch_taken_0x3ddd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ddd04) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DDD0Cu;
label_3ddd0c:
    // 0x3ddd0c: 0xc6220150  lwc1        $f2, 0x150($s1)
    ctx->pc = 0x3ddd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ddd10:
    // 0x3ddd10: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x3ddd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_3ddd14:
    // 0x3ddd14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ddd14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ddd18:
    // 0x3ddd18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ddd18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ddd1c:
    // 0x3ddd1c: 0x0  nop
    ctx->pc = 0x3ddd1cu;
    // NOP
label_3ddd20:
    // 0x3ddd20: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x3ddd20u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3ddd24:
    // 0x3ddd24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ddd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ddd28:
    // 0x3ddd28: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x3ddd28u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
label_3ddd2c:
    // 0x3ddd2c: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x3ddd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3ddd30:
    // 0x3ddd30: 0x3c023d3d  lui         $v0, 0x3D3D
    ctx->pc = 0x3ddd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15677 << 16));
label_3ddd34:
    // 0x3ddd34: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x3ddd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_3ddd38:
    // 0x3ddd38: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3ddd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ddd3c:
    // 0x3ddd3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ddd3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ddd40:
    // 0x3ddd40: 0x0  nop
    ctx->pc = 0x3ddd40u;
    // NOP
label_3ddd44:
    // 0x3ddd44: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x3ddd44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3ddd48:
    // 0x3ddd48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ddd48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ddd4c:
    // 0x3ddd4c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3ddd50:
    if (ctx->pc == 0x3DDD50u) {
        ctx->pc = 0x3DDD50u;
            // 0x3ddd50: 0x26320030  addiu       $s2, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x3DDD54u;
        goto label_3ddd54;
    }
    ctx->pc = 0x3DDD4Cu;
    {
        const bool branch_taken_0x3ddd4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DDD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDD4Cu;
            // 0x3ddd50: 0x26320030  addiu       $s2, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddd4c) {
            ctx->pc = 0x3DDD58u;
            goto label_3ddd58;
        }
    }
    ctx->pc = 0x3DDD54u;
label_3ddd54:
    // 0x3ddd54: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x3ddd54u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_3ddd58:
    // 0x3ddd58: 0xe6410120  swc1        $f1, 0x120($s2)
    ctx->pc = 0x3ddd58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
label_3ddd5c:
    // 0x3ddd5c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3ddd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3ddd60:
    // 0x3ddd60: 0xe6010de4  swc1        $f1, 0xDE4($s0)
    ctx->pc = 0x3ddd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
label_3ddd64:
    // 0x3ddd64: 0xc04cc04  jal         func_133010
label_3ddd68:
    if (ctx->pc == 0x3DDD68u) {
        ctx->pc = 0x3DDD68u;
            // 0x3ddd68: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x3DDD6Cu;
        goto label_3ddd6c;
    }
    ctx->pc = 0x3DDD64u;
    SET_GPR_U32(ctx, 31, 0x3DDD6Cu);
    ctx->pc = 0x3DDD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDD64u;
            // 0x3ddd68: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDD6Cu; }
        if (ctx->pc != 0x3DDD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDD6Cu; }
        if (ctx->pc != 0x3DDD6Cu) { return; }
    }
    ctx->pc = 0x3DDD6Cu;
label_3ddd6c:
    // 0x3ddd6c: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x3ddd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_3ddd70:
    // 0x3ddd70: 0xc04cc04  jal         func_133010
label_3ddd74:
    if (ctx->pc == 0x3DDD74u) {
        ctx->pc = 0x3DDD74u;
            // 0x3ddd74: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3DDD78u;
        goto label_3ddd78;
    }
    ctx->pc = 0x3DDD70u;
    SET_GPR_U32(ctx, 31, 0x3DDD78u);
    ctx->pc = 0x3DDD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDD70u;
            // 0x3ddd74: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDD78u; }
        if (ctx->pc != 0x3DDD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDD78u; }
        if (ctx->pc != 0x3DDD78u) { return; }
    }
    ctx->pc = 0x3DDD78u;
label_3ddd78:
    // 0x3ddd78: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3ddd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
label_3ddd7c:
    // 0x3ddd7c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3ddd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3ddd80:
    // 0x3ddd80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ddd80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ddd84:
    // 0x3ddd84: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ddd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ddd88:
    // 0x3ddd88: 0xc04cc7c  jal         func_1331F0
label_3ddd8c:
    if (ctx->pc == 0x3DDD8Cu) {
        ctx->pc = 0x3DDD8Cu;
            // 0x3ddd8c: 0x264600c0  addiu       $a2, $s2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
        ctx->pc = 0x3DDD90u;
        goto label_3ddd90;
    }
    ctx->pc = 0x3DDD88u;
    SET_GPR_U32(ctx, 31, 0x3DDD90u);
    ctx->pc = 0x3DDD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDD88u;
            // 0x3ddd8c: 0x264600c0  addiu       $a2, $s2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDD90u; }
        if (ctx->pc != 0x3DDD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDD90u; }
        if (ctx->pc != 0x3DDD90u) { return; }
    }
    ctx->pc = 0x3DDD90u;
label_3ddd90:
    // 0x3ddd90: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3ddd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3ddd94:
    // 0x3ddd94: 0xc04c720  jal         func_131C80
label_3ddd98:
    if (ctx->pc == 0x3DDD98u) {
        ctx->pc = 0x3DDD98u;
            // 0x3ddd98: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->pc = 0x3DDD9Cu;
        goto label_3ddd9c;
    }
    ctx->pc = 0x3DDD94u;
    SET_GPR_U32(ctx, 31, 0x3DDD9Cu);
    ctx->pc = 0x3DDD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDD94u;
            // 0x3ddd98: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDD9Cu; }
        if (ctx->pc != 0x3DDD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDD9Cu; }
        if (ctx->pc != 0x3DDD9Cu) { return; }
    }
    ctx->pc = 0x3DDD9Cu;
label_3ddd9c:
    // 0x3ddd9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ddd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ddda0:
    // 0x3ddda0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x3ddda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_3ddda4:
    // 0x3ddda4: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x3ddda4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3ddda8:
    // 0x3ddda8: 0xc640012c  lwc1        $f0, 0x12C($s2)
    ctx->pc = 0x3ddda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3dddac:
    // 0x3dddac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dddacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dddb0:
    // 0x3dddb0: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x3dddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dddb4:
    // 0x3dddb4: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x3dddb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_3dddb8:
    // 0x3dddb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3dddb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dddbc:
    // 0x3dddbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3dddbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3dddc0:
    // 0x3dddc0: 0xc0d87e0  jal         func_361F80
label_3dddc4:
    if (ctx->pc == 0x3DDDC4u) {
        ctx->pc = 0x3DDDC4u;
            // 0x3dddc4: 0xe640012c  swc1        $f0, 0x12C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
        ctx->pc = 0x3DDDC8u;
        goto label_3dddc8;
    }
    ctx->pc = 0x3DDDC0u;
    SET_GPR_U32(ctx, 31, 0x3DDDC8u);
    ctx->pc = 0x3DDDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDDC0u;
            // 0x3dddc4: 0xe640012c  swc1        $f0, 0x12C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x361F80u;
    if (runtime->hasFunction(0x361F80u)) {
        auto targetFn = runtime->lookupFunction(0x361F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDDC8u; }
        if (ctx->pc != 0x3DDDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361F80_0x361f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDDC8u; }
        if (ctx->pc != 0x3DDDC8u) { return; }
    }
    ctx->pc = 0x3DDDC8u;
label_3dddc8:
    // 0x3dddc8: 0x96440110  lhu         $a0, 0x110($s2)
    ctx->pc = 0x3dddc8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 272)));
label_3dddcc:
    // 0x3dddcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3dddccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dddd0:
    // 0x3dddd0: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_3dddd4:
    if (ctx->pc == 0x3DDDD4u) {
        ctx->pc = 0x3DDDD4u;
            // 0x3dddd4: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x3DDDD8u;
        goto label_3dddd8;
    }
    ctx->pc = 0x3DDDD0u;
    {
        const bool branch_taken_0x3dddd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3dddd0) {
            ctx->pc = 0x3DDDD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDDD0u;
            // 0x3dddd4: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DDDE8u;
            goto label_3ddde8;
        }
    }
    ctx->pc = 0x3DDDD8u;
label_3dddd8:
    // 0x3dddd8: 0xae400120  sw          $zero, 0x120($s2)
    ctx->pc = 0x3dddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 0));
label_3ddddc:
    // 0x3ddddc: 0xae2001e8  sw          $zero, 0x1E8($s1)
    ctx->pc = 0x3ddddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
label_3ddde0:
    // 0x3ddde0: 0x100003ee  b           . + 4 + (0x3EE << 2)
label_3ddde4:
    if (ctx->pc == 0x3DDDE4u) {
        ctx->pc = 0x3DDDE4u;
            // 0x3ddde4: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x3DDDE8u;
        goto label_3ddde8;
    }
    ctx->pc = 0x3DDDE0u;
    {
        const bool branch_taken_0x3ddde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDDE0u;
            // 0x3ddde4: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddde0) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DDDE8u;
label_3ddde8:
    // 0x3ddde8: 0xc07731c  jal         func_1DCC70
label_3dddec:
    if (ctx->pc == 0x3DDDECu) {
        ctx->pc = 0x3DDDECu;
            // 0x3dddec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDDF0u;
        goto label_3dddf0;
    }
    ctx->pc = 0x3DDDE8u;
    SET_GPR_U32(ctx, 31, 0x3DDDF0u);
    ctx->pc = 0x3DDDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDDE8u;
            // 0x3dddec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDDF0u; }
        if (ctx->pc != 0x3DDDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDDF0u; }
        if (ctx->pc != 0x3DDDF0u) { return; }
    }
    ctx->pc = 0x3DDDF0u;
label_3dddf0:
    // 0x3dddf0: 0xc62401e0  lwc1        $f4, 0x1E0($s1)
    ctx->pc = 0x3dddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3dddf4:
    // 0x3dddf4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3dddf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3dddf8:
    // 0x3dddf8: 0x0  nop
    ctx->pc = 0x3dddf8u;
    // NOP
label_3dddfc:
    // 0x3dddfc: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x3dddfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dde00:
    // 0x3dde00: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_3dde04:
    if (ctx->pc == 0x3DDE04u) {
        ctx->pc = 0x3DDE04u;
            // 0x3dde04: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x3DDE08u;
        goto label_3dde08;
    }
    ctx->pc = 0x3DDE00u;
    {
        const bool branch_taken_0x3dde00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DDE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDE00u;
            // 0x3dde04: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dde00) {
            ctx->pc = 0x3DDE3Cu;
            goto label_3dde3c;
        }
    }
    ctx->pc = 0x3DDE08u;
label_3dde08:
    // 0x3dde08: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x3dde08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_3dde0c:
    // 0x3dde0c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3dde0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3dde10:
    // 0x3dde10: 0xc62101e4  lwc1        $f1, 0x1E4($s1)
    ctx->pc = 0x3dde10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dde14:
    // 0x3dde14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dde14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dde18:
    // 0x3dde18: 0x0  nop
    ctx->pc = 0x3dde18u;
    // NOP
label_3dde1c:
    // 0x3dde1c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3dde1cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_3dde20:
    // 0x3dde20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3dde20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3dde24:
    // 0x3dde24: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x3dde24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_3dde28:
    // 0x3dde28: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x3dde28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dde2c:
    // 0x3dde2c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_3dde30:
    if (ctx->pc == 0x3DDE30u) {
        ctx->pc = 0x3DDE30u;
            // 0x3dde30: 0xe62001e0  swc1        $f0, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->pc = 0x3DDE34u;
        goto label_3dde34;
    }
    ctx->pc = 0x3DDE2Cu;
    {
        const bool branch_taken_0x3dde2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DDE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDE2Cu;
            // 0x3dde30: 0xe62001e0  swc1        $f0, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dde2c) {
            ctx->pc = 0x3DDE78u;
            goto label_3dde78;
        }
    }
    ctx->pc = 0x3DDE34u;
label_3dde34:
    // 0x3dde34: 0x10000010  b           . + 4 + (0x10 << 2)
label_3dde38:
    if (ctx->pc == 0x3DDE38u) {
        ctx->pc = 0x3DDE38u;
            // 0x3dde38: 0xe62301e0  swc1        $f3, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->pc = 0x3DDE3Cu;
        goto label_3dde3c;
    }
    ctx->pc = 0x3DDE34u;
    {
        const bool branch_taken_0x3dde34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDE34u;
            // 0x3dde38: 0xe62301e0  swc1        $f3, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dde34) {
            ctx->pc = 0x3DDE78u;
            goto label_3dde78;
        }
    }
    ctx->pc = 0x3DDE3Cu;
label_3dde3c:
    // 0x3dde3c: 0x46041836  c.le.s      $f3, $f4
    ctx->pc = 0x3dde3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dde40:
    // 0x3dde40: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_3dde44:
    if (ctx->pc == 0x3DDE44u) {
        ctx->pc = 0x3DDE44u;
            // 0x3dde44: 0x8e2201f4  lw          $v0, 0x1F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
        ctx->pc = 0x3DDE48u;
        goto label_3dde48;
    }
    ctx->pc = 0x3DDE40u;
    {
        const bool branch_taken_0x3dde40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dde40) {
            ctx->pc = 0x3DDE44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDE40u;
            // 0x3dde44: 0x8e2201f4  lw          $v0, 0x1F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DDE7Cu;
            goto label_3dde7c;
        }
    }
    ctx->pc = 0x3DDE48u;
label_3dde48:
    // 0x3dde48: 0x46041881  sub.s       $f2, $f3, $f4
    ctx->pc = 0x3dde48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_3dde4c:
    // 0x3dde4c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3dde4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3dde50:
    // 0x3dde50: 0xc62101e4  lwc1        $f1, 0x1E4($s1)
    ctx->pc = 0x3dde50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dde54:
    // 0x3dde54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dde54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dde58:
    // 0x3dde58: 0x0  nop
    ctx->pc = 0x3dde58u;
    // NOP
label_3dde5c:
    // 0x3dde5c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3dde5cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_3dde60:
    // 0x3dde60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3dde60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3dde64:
    // 0x3dde64: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x3dde64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_3dde68:
    // 0x3dde68: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3dde68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dde6c:
    // 0x3dde6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3dde70:
    if (ctx->pc == 0x3DDE70u) {
        ctx->pc = 0x3DDE70u;
            // 0x3dde70: 0xe62001e0  swc1        $f0, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->pc = 0x3DDE74u;
        goto label_3dde74;
    }
    ctx->pc = 0x3DDE6Cu;
    {
        const bool branch_taken_0x3dde6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DDE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDE6Cu;
            // 0x3dde70: 0xe62001e0  swc1        $f0, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dde6c) {
            ctx->pc = 0x3DDE78u;
            goto label_3dde78;
        }
    }
    ctx->pc = 0x3DDE74u;
label_3dde74:
    // 0x3dde74: 0xe62301e0  swc1        $f3, 0x1E0($s1)
    ctx->pc = 0x3dde74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
label_3dde78:
    // 0x3dde78: 0x8e2201f4  lw          $v0, 0x1F4($s1)
    ctx->pc = 0x3dde78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
label_3dde7c:
    // 0x3dde7c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3dde80:
    if (ctx->pc == 0x3DDE80u) {
        ctx->pc = 0x3DDE80u;
            // 0x3dde80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDE84u;
        goto label_3dde84;
    }
    ctx->pc = 0x3DDE7Cu;
    {
        const bool branch_taken_0x3dde7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dde7c) {
            ctx->pc = 0x3DDE80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDE7Cu;
            // 0x3dde80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DDEA0u;
            goto label_3ddea0;
        }
    }
    ctx->pc = 0x3DDE84u;
label_3dde84:
    // 0x3dde84: 0xc0f7b74  jal         func_3DEDD0
label_3dde88:
    if (ctx->pc == 0x3DDE88u) {
        ctx->pc = 0x3DDE88u;
            // 0x3dde88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDE8Cu;
        goto label_3dde8c;
    }
    ctx->pc = 0x3DDE84u;
    SET_GPR_U32(ctx, 31, 0x3DDE8Cu);
    ctx->pc = 0x3DDE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDE84u;
            // 0x3dde88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DEDD0u;
    if (runtime->hasFunction(0x3DEDD0u)) {
        auto targetFn = runtime->lookupFunction(0x3DEDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDE8Cu; }
        if (ctx->pc != 0x3DDE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DEDD0_0x3dedd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDE8Cu; }
        if (ctx->pc != 0x3DDE8Cu) { return; }
    }
    ctx->pc = 0x3DDE8Cu;
label_3dde8c:
    // 0x3dde8c: 0x8e2401f4  lw          $a0, 0x1F4($s1)
    ctx->pc = 0x3dde8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
label_3dde90:
    // 0x3dde90: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3dde90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dde94:
    // 0x3dde94: 0xc122d2c  jal         func_48B4B0
label_3dde98:
    if (ctx->pc == 0x3DDE98u) {
        ctx->pc = 0x3DDE98u;
            // 0x3dde98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDE9Cu;
        goto label_3dde9c;
    }
    ctx->pc = 0x3DDE94u;
    SET_GPR_U32(ctx, 31, 0x3DDE9Cu);
    ctx->pc = 0x3DDE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDE94u;
            // 0x3dde98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDE9Cu; }
        if (ctx->pc != 0x3DDE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDE9Cu; }
        if (ctx->pc != 0x3DDE9Cu) { return; }
    }
    ctx->pc = 0x3DDE9Cu;
label_3dde9c:
    // 0x3dde9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dde9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ddea0:
    // 0x3ddea0: 0xc0e1224  jal         func_384890
label_3ddea4:
    if (ctx->pc == 0x3DDEA4u) {
        ctx->pc = 0x3DDEA8u;
        goto label_3ddea8;
    }
    ctx->pc = 0x3DDEA0u;
    SET_GPR_U32(ctx, 31, 0x3DDEA8u);
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDEA8u; }
        if (ctx->pc != 0x3DDEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDEA8u; }
        if (ctx->pc != 0x3DDEA8u) { return; }
    }
    ctx->pc = 0x3DDEA8u;
label_3ddea8:
    // 0x3ddea8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ddea8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddeac:
    // 0x3ddeac: 0xc0e1224  jal         func_384890
label_3ddeb0:
    if (ctx->pc == 0x3DDEB0u) {
        ctx->pc = 0x3DDEB0u;
            // 0x3ddeb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDEB4u;
        goto label_3ddeb4;
    }
    ctx->pc = 0x3DDEACu;
    SET_GPR_U32(ctx, 31, 0x3DDEB4u);
    ctx->pc = 0x3DDEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDEACu;
            // 0x3ddeb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDEB4u; }
        if (ctx->pc != 0x3DDEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDEB4u; }
        if (ctx->pc != 0x3DDEB4u) { return; }
    }
    ctx->pc = 0x3DDEB4u;
label_3ddeb4:
    // 0x3ddeb4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ddeb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddeb8:
    // 0x3ddeb8: 0xc0e1224  jal         func_384890
label_3ddebc:
    if (ctx->pc == 0x3DDEBCu) {
        ctx->pc = 0x3DDEBCu;
            // 0x3ddebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDEC0u;
        goto label_3ddec0;
    }
    ctx->pc = 0x3DDEB8u;
    SET_GPR_U32(ctx, 31, 0x3DDEC0u);
    ctx->pc = 0x3DDEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDEB8u;
            // 0x3ddebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDEC0u; }
        if (ctx->pc != 0x3DDEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDEC0u; }
        if (ctx->pc != 0x3DDEC0u) { return; }
    }
    ctx->pc = 0x3DDEC0u;
label_3ddec0:
    // 0x3ddec0: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x3ddec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3ddec4:
    // 0x3ddec4: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x3ddec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3ddec8:
    // 0x3ddec8: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x3ddec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3ddecc:
    // 0x3ddecc: 0xc04f3fc  jal         func_13CFF0
label_3dded0:
    if (ctx->pc == 0x3DDED0u) {
        ctx->pc = 0x3DDED0u;
            // 0x3dded0: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x3DDED4u;
        goto label_3dded4;
    }
    ctx->pc = 0x3DDECCu;
    SET_GPR_U32(ctx, 31, 0x3DDED4u);
    ctx->pc = 0x3DDED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDECCu;
            // 0x3dded0: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDED4u; }
        if (ctx->pc != 0x3DDED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDED4u; }
        if (ctx->pc != 0x3DDED4u) { return; }
    }
    ctx->pc = 0x3DDED4u;
label_3dded4:
    // 0x3dded4: 0xc0f7b70  jal         func_3DEDC0
label_3dded8:
    if (ctx->pc == 0x3DDED8u) {
        ctx->pc = 0x3DDED8u;
            // 0x3dded8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDEDCu;
        goto label_3ddedc;
    }
    ctx->pc = 0x3DDED4u;
    SET_GPR_U32(ctx, 31, 0x3DDEDCu);
    ctx->pc = 0x3DDED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDED4u;
            // 0x3dded8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DEDC0u;
    if (runtime->hasFunction(0x3DEDC0u)) {
        auto targetFn = runtime->lookupFunction(0x3DEDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDEDCu; }
        if (ctx->pc != 0x3DDEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DEDC0_0x3dedc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDEDCu; }
        if (ctx->pc != 0x3DDEDCu) { return; }
    }
    ctx->pc = 0x3DDEDCu;
label_3ddedc:
    // 0x3ddedc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3ddedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3ddee0:
    // 0x3ddee0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3ddee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddee4:
    // 0x3ddee4: 0xc04cd80  jal         func_133600
label_3ddee8:
    if (ctx->pc == 0x3DDEE8u) {
        ctx->pc = 0x3DDEE8u;
            // 0x3ddee8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDEECu;
        goto label_3ddeec;
    }
    ctx->pc = 0x3DDEE4u;
    SET_GPR_U32(ctx, 31, 0x3DDEECu);
    ctx->pc = 0x3DDEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDEE4u;
            // 0x3ddee8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDEECu; }
        if (ctx->pc != 0x3DDEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDEECu; }
        if (ctx->pc != 0x3DDEECu) { return; }
    }
    ctx->pc = 0x3DDEECu;
label_3ddeec:
    // 0x3ddeec: 0xc62201e0  lwc1        $f2, 0x1E0($s1)
    ctx->pc = 0x3ddeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ddef0:
    // 0x3ddef0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3ddef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_3ddef4:
    // 0x3ddef4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ddef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3ddef8:
    // 0x3ddef8: 0x3c03c270  lui         $v1, 0xC270
    ctx->pc = 0x3ddef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49776 << 16));
label_3ddefc:
    // 0x3ddefc: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3ddefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_3ddf00:
    // 0x3ddf00: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x3ddf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_3ddf04:
    // 0x3ddf04: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x3ddf04u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
label_3ddf08:
    // 0x3ddf08: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3ddf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_3ddf0c:
    // 0x3ddf0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ddf0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ddf10:
    // 0x3ddf10: 0x0  nop
    ctx->pc = 0x3ddf10u;
    // NOP
label_3ddf14:
    // 0x3ddf14: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ddf14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3ddf18:
    // 0x3ddf18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ddf18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ddf1c:
    // 0x3ddf1c: 0x0  nop
    ctx->pc = 0x3ddf1cu;
    // NOP
label_3ddf20:
    // 0x3ddf20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3ddf20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3ddf24:
    // 0x3ddf24: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ddf24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ddf28:
    // 0x3ddf28: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3ddf28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3ddf2c:
    // 0x3ddf2c: 0xc04cdf0  jal         func_1337C0
label_3ddf30:
    if (ctx->pc == 0x3DDF30u) {
        ctx->pc = 0x3DDF30u;
            // 0x3ddf30: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x3DDF34u;
        goto label_3ddf34;
    }
    ctx->pc = 0x3DDF2Cu;
    SET_GPR_U32(ctx, 31, 0x3DDF34u);
    ctx->pc = 0x3DDF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDF2Cu;
            // 0x3ddf30: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDF34u; }
        if (ctx->pc != 0x3DDF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDF34u; }
        if (ctx->pc != 0x3DDF34u) { return; }
    }
    ctx->pc = 0x3DDF34u;
label_3ddf34:
    // 0x3ddf34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3ddf34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ddf38:
    // 0x3ddf38: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3ddf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
label_3ddf3c:
    // 0x3ddf3c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x3ddf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_3ddf40:
    // 0x3ddf40: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3ddf40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ddf44:
    // 0x3ddf44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ddf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ddf48:
    // 0x3ddf48: 0xc04ce64  jal         func_133990
label_3ddf4c:
    if (ctx->pc == 0x3DDF4Cu) {
        ctx->pc = 0x3DDF4Cu;
            // 0x3ddf4c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3DDF50u;
        goto label_3ddf50;
    }
    ctx->pc = 0x3DDF48u;
    SET_GPR_U32(ctx, 31, 0x3DDF50u);
    ctx->pc = 0x3DDF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDF48u;
            // 0x3ddf4c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDF50u; }
        if (ctx->pc != 0x3DDF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDF50u; }
        if (ctx->pc != 0x3DDF50u) { return; }
    }
    ctx->pc = 0x3DDF50u;
label_3ddf50:
    // 0x3ddf50: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3ddf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3ddf54:
    // 0x3ddf54: 0xc04cce4  jal         func_133390
label_3ddf58:
    if (ctx->pc == 0x3DDF58u) {
        ctx->pc = 0x3DDF58u;
            // 0x3ddf58: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x3DDF5Cu;
        goto label_3ddf5c;
    }
    ctx->pc = 0x3DDF54u;
    SET_GPR_U32(ctx, 31, 0x3DDF5Cu);
    ctx->pc = 0x3DDF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDF54u;
            // 0x3ddf58: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDF5Cu; }
        if (ctx->pc != 0x3DDF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDF5Cu; }
        if (ctx->pc != 0x3DDF5Cu) { return; }
    }
    ctx->pc = 0x3DDF5Cu;
label_3ddf5c:
    // 0x3ddf5c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3ddf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3ddf60:
    // 0x3ddf60: 0xc04c994  jal         func_132650
label_3ddf64:
    if (ctx->pc == 0x3DDF64u) {
        ctx->pc = 0x3DDF64u;
            // 0x3ddf64: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x3DDF68u;
        goto label_3ddf68;
    }
    ctx->pc = 0x3DDF60u;
    SET_GPR_U32(ctx, 31, 0x3DDF68u);
    ctx->pc = 0x3DDF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDF60u;
            // 0x3ddf64: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDF68u; }
        if (ctx->pc != 0x3DDF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDF68u; }
        if (ctx->pc != 0x3DDF68u) { return; }
    }
    ctx->pc = 0x3DDF68u;
label_3ddf68:
    // 0x3ddf68: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3ddf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3ddf6c:
    // 0x3ddf6c: 0xc04c74c  jal         func_131D30
label_3ddf70:
    if (ctx->pc == 0x3DDF70u) {
        ctx->pc = 0x3DDF70u;
            // 0x3ddf70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDF74u;
        goto label_3ddf74;
    }
    ctx->pc = 0x3DDF6Cu;
    SET_GPR_U32(ctx, 31, 0x3DDF74u);
    ctx->pc = 0x3DDF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDF6Cu;
            // 0x3ddf70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDF74u; }
        if (ctx->pc != 0x3DDF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDF74u; }
        if (ctx->pc != 0x3DDF74u) { return; }
    }
    ctx->pc = 0x3DDF74u;
label_3ddf74:
    // 0x3ddf74: 0xc0e1130  jal         func_3844C0
label_3ddf78:
    if (ctx->pc == 0x3DDF78u) {
        ctx->pc = 0x3DDF78u;
            // 0x3ddf78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDF7Cu;
        goto label_3ddf7c;
    }
    ctx->pc = 0x3DDF74u;
    SET_GPR_U32(ctx, 31, 0x3DDF7Cu);
    ctx->pc = 0x3DDF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDF74u;
            // 0x3ddf78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844C0u;
    if (runtime->hasFunction(0x3844C0u)) {
        auto targetFn = runtime->lookupFunction(0x3844C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDF7Cu; }
        if (ctx->pc != 0x3DDF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844C0_0x3844c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDF7Cu; }
        if (ctx->pc != 0x3DDF7Cu) { return; }
    }
    ctx->pc = 0x3DDF7Cu;
label_3ddf7c:
    // 0x3ddf7c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3ddf7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3ddf80:
    // 0x3ddf80: 0xc0c1a0c  jal         func_306830
label_3ddf84:
    if (ctx->pc == 0x3DDF84u) {
        ctx->pc = 0x3DDF84u;
            // 0x3ddf84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDF88u;
        goto label_3ddf88;
    }
    ctx->pc = 0x3DDF80u;
    SET_GPR_U32(ctx, 31, 0x3DDF88u);
    ctx->pc = 0x3DDF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDF80u;
            // 0x3ddf84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDF88u; }
        if (ctx->pc != 0x3DDF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDF88u; }
        if (ctx->pc != 0x3DDF88u) { return; }
    }
    ctx->pc = 0x3DDF88u;
label_3ddf88:
    // 0x3ddf88: 0xc0e1224  jal         func_384890
label_3ddf8c:
    if (ctx->pc == 0x3DDF8Cu) {
        ctx->pc = 0x3DDF8Cu;
            // 0x3ddf8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDF90u;
        goto label_3ddf90;
    }
    ctx->pc = 0x3DDF88u;
    SET_GPR_U32(ctx, 31, 0x3DDF90u);
    ctx->pc = 0x3DDF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDF88u;
            // 0x3ddf8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDF90u; }
        if (ctx->pc != 0x3DDF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDF90u; }
        if (ctx->pc != 0x3DDF90u) { return; }
    }
    ctx->pc = 0x3DDF90u;
label_3ddf90:
    // 0x3ddf90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ddf90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddf94:
    // 0x3ddf94: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3ddf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3ddf98:
    // 0x3ddf98: 0xc04cc90  jal         func_133240
label_3ddf9c:
    if (ctx->pc == 0x3DDF9Cu) {
        ctx->pc = 0x3DDF9Cu;
            // 0x3ddf9c: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3DDFA0u;
        goto label_3ddfa0;
    }
    ctx->pc = 0x3DDF98u;
    SET_GPR_U32(ctx, 31, 0x3DDFA0u);
    ctx->pc = 0x3DDF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDF98u;
            // 0x3ddf9c: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDFA0u; }
        if (ctx->pc != 0x3DDFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDFA0u; }
        if (ctx->pc != 0x3DDFA0u) { return; }
    }
    ctx->pc = 0x3DDFA0u;
label_3ddfa0:
    // 0x3ddfa0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3ddfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3ddfa4:
    // 0x3ddfa4: 0xc04cc44  jal         func_133110
label_3ddfa8:
    if (ctx->pc == 0x3DDFA8u) {
        ctx->pc = 0x3DDFA8u;
            // 0x3ddfa8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDFACu;
        goto label_3ddfac;
    }
    ctx->pc = 0x3DDFA4u;
    SET_GPR_U32(ctx, 31, 0x3DDFACu);
    ctx->pc = 0x3DDFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDFA4u;
            // 0x3ddfa8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDFACu; }
        if (ctx->pc != 0x3DDFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDFACu; }
        if (ctx->pc != 0x3DDFACu) { return; }
    }
    ctx->pc = 0x3DDFACu;
label_3ddfac:
    // 0x3ddfac: 0xc0b6d5c  jal         func_2DB570
label_3ddfb0:
    if (ctx->pc == 0x3DDFB0u) {
        ctx->pc = 0x3DDFB0u;
            // 0x3ddfb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DDFB4u;
        goto label_3ddfb4;
    }
    ctx->pc = 0x3DDFACu;
    SET_GPR_U32(ctx, 31, 0x3DDFB4u);
    ctx->pc = 0x3DDFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDFACu;
            // 0x3ddfb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDFB4u; }
        if (ctx->pc != 0x3DDFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDFB4u; }
        if (ctx->pc != 0x3DDFB4u) { return; }
    }
    ctx->pc = 0x3DDFB4u;
label_3ddfb4:
    // 0x3ddfb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ddfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddfb8:
    // 0x3ddfb8: 0xc04cc04  jal         func_133010
label_3ddfbc:
    if (ctx->pc == 0x3DDFBCu) {
        ctx->pc = 0x3DDFBCu;
            // 0x3ddfbc: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3DDFC0u;
        goto label_3ddfc0;
    }
    ctx->pc = 0x3DDFB8u;
    SET_GPR_U32(ctx, 31, 0x3DDFC0u);
    ctx->pc = 0x3DDFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DDFB8u;
            // 0x3ddfbc: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDFC0u; }
        if (ctx->pc != 0x3DDFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DDFC0u; }
        if (ctx->pc != 0x3DDFC0u) { return; }
    }
    ctx->pc = 0x3DDFC0u;
label_3ddfc0:
    // 0x3ddfc0: 0xc62201e0  lwc1        $f2, 0x1E0($s1)
    ctx->pc = 0x3ddfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ddfc4:
    // 0x3ddfc4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3ddfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_3ddfc8:
    // 0x3ddfc8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ddfc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3ddfcc:
    // 0x3ddfcc: 0x3c03c270  lui         $v1, 0xC270
    ctx->pc = 0x3ddfccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49776 << 16));
label_3ddfd0:
    // 0x3ddfd0: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3ddfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_3ddfd4:
    // 0x3ddfd4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x3ddfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_3ddfd8:
    // 0x3ddfd8: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x3ddfd8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
label_3ddfdc:
    // 0x3ddfdc: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3ddfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_3ddfe0:
    // 0x3ddfe0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ddfe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ddfe4:
    // 0x3ddfe4: 0x0  nop
    ctx->pc = 0x3ddfe4u;
    // NOP
label_3ddfe8:
    // 0x3ddfe8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ddfe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3ddfec:
    // 0x3ddfec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ddfecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ddff0:
    // 0x3ddff0: 0x0  nop
    ctx->pc = 0x3ddff0u;
    // NOP
label_3ddff4:
    // 0x3ddff4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3ddff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3ddff8:
    // 0x3ddff8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ddff8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ddffc:
    // 0x3ddffc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3ddffcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3de000:
    // 0x3de000: 0xc04cdf0  jal         func_1337C0
label_3de004:
    if (ctx->pc == 0x3DE004u) {
        ctx->pc = 0x3DE004u;
            // 0x3de004: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x3DE008u;
        goto label_3de008;
    }
    ctx->pc = 0x3DE000u;
    SET_GPR_U32(ctx, 31, 0x3DE008u);
    ctx->pc = 0x3DE004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE000u;
            // 0x3de004: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE008u; }
        if (ctx->pc != 0x3DE008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE008u; }
        if (ctx->pc != 0x3DE008u) { return; }
    }
    ctx->pc = 0x3DE008u;
label_3de008:
    // 0x3de008: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3de008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3de00c:
    // 0x3de00c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3de00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3de010:
    // 0x3de010: 0xc44c9c30  lwc1        $f12, -0x63D0($v0)
    ctx->pc = 0x3de010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3de014:
    // 0x3de014: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x3de014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_3de018:
    // 0x3de018: 0xc46d9c34  lwc1        $f13, -0x63CC($v1)
    ctx->pc = 0x3de018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294941748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3de01c:
    // 0x3de01c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3de01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3de020:
    // 0x3de020: 0xc44e9c38  lwc1        $f14, -0x63C8($v0)
    ctx->pc = 0x3de020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3de024:
    // 0x3de024: 0xc04ce64  jal         func_133990
label_3de028:
    if (ctx->pc == 0x3DE028u) {
        ctx->pc = 0x3DE028u;
            // 0x3de028: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE02Cu;
        goto label_3de02c;
    }
    ctx->pc = 0x3DE024u;
    SET_GPR_U32(ctx, 31, 0x3DE02Cu);
    ctx->pc = 0x3DE028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE024u;
            // 0x3de028: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE02Cu; }
        if (ctx->pc != 0x3DE02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE02Cu; }
        if (ctx->pc != 0x3DE02Cu) { return; }
    }
    ctx->pc = 0x3DE02Cu;
label_3de02c:
    // 0x3de02c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3de02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3de030:
    // 0x3de030: 0xc04cce4  jal         func_133390
label_3de034:
    if (ctx->pc == 0x3DE034u) {
        ctx->pc = 0x3DE034u;
            // 0x3de034: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x3DE038u;
        goto label_3de038;
    }
    ctx->pc = 0x3DE030u;
    SET_GPR_U32(ctx, 31, 0x3DE038u);
    ctx->pc = 0x3DE034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE030u;
            // 0x3de034: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE038u; }
        if (ctx->pc != 0x3DE038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE038u; }
        if (ctx->pc != 0x3DE038u) { return; }
    }
    ctx->pc = 0x3DE038u;
label_3de038:
    // 0x3de038: 0xc077264  jal         func_1DC990
label_3de03c:
    if (ctx->pc == 0x3DE03Cu) {
        ctx->pc = 0x3DE03Cu;
            // 0x3de03c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE040u;
        goto label_3de040;
    }
    ctx->pc = 0x3DE038u;
    SET_GPR_U32(ctx, 31, 0x3DE040u);
    ctx->pc = 0x3DE03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE038u;
            // 0x3de03c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE040u; }
        if (ctx->pc != 0x3DE040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE040u; }
        if (ctx->pc != 0x3DE040u) { return; }
    }
    ctx->pc = 0x3DE040u;
label_3de040:
    // 0x3de040: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3de040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3de044:
    // 0x3de044: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3de044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de048:
    // 0x3de048: 0xc04cc90  jal         func_133240
label_3de04c:
    if (ctx->pc == 0x3DE04Cu) {
        ctx->pc = 0x3DE04Cu;
            // 0x3de04c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE050u;
        goto label_3de050;
    }
    ctx->pc = 0x3DE048u;
    SET_GPR_U32(ctx, 31, 0x3DE050u);
    ctx->pc = 0x3DE04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE048u;
            // 0x3de04c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE050u; }
        if (ctx->pc != 0x3DE050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE050u; }
        if (ctx->pc != 0x3DE050u) { return; }
    }
    ctx->pc = 0x3DE050u;
label_3de050:
    // 0x3de050: 0xc0c05c8  jal         func_301720
label_3de054:
    if (ctx->pc == 0x3DE054u) {
        ctx->pc = 0x3DE054u;
            // 0x3de054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE058u;
        goto label_3de058;
    }
    ctx->pc = 0x3DE050u;
    SET_GPR_U32(ctx, 31, 0x3DE058u);
    ctx->pc = 0x3DE054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE050u;
            // 0x3de054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE058u; }
        if (ctx->pc != 0x3DE058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301720_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE058u; }
        if (ctx->pc != 0x3DE058u) { return; }
    }
    ctx->pc = 0x3DE058u;
label_3de058:
    // 0x3de058: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3de058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de05c:
    // 0x3de05c: 0xc04cc04  jal         func_133010
label_3de060:
    if (ctx->pc == 0x3DE060u) {
        ctx->pc = 0x3DE060u;
            // 0x3de060: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x3DE064u;
        goto label_3de064;
    }
    ctx->pc = 0x3DE05Cu;
    SET_GPR_U32(ctx, 31, 0x3DE064u);
    ctx->pc = 0x3DE060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE05Cu;
            // 0x3de060: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE064u; }
        if (ctx->pc != 0x3DE064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE064u; }
        if (ctx->pc != 0x3DE064u) { return; }
    }
    ctx->pc = 0x3DE064u;
label_3de064:
    // 0x3de064: 0xc077280  jal         func_1DCA00
label_3de068:
    if (ctx->pc == 0x3DE068u) {
        ctx->pc = 0x3DE068u;
            // 0x3de068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE06Cu;
        goto label_3de06c;
    }
    ctx->pc = 0x3DE064u;
    SET_GPR_U32(ctx, 31, 0x3DE06Cu);
    ctx->pc = 0x3DE068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE064u;
            // 0x3de068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE06Cu; }
        if (ctx->pc != 0x3DE06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE06Cu; }
        if (ctx->pc != 0x3DE06Cu) { return; }
    }
    ctx->pc = 0x3DE06Cu;
label_3de06c:
    // 0x3de06c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3de06cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de070:
    // 0x3de070: 0xc0b6d5c  jal         func_2DB570
label_3de074:
    if (ctx->pc == 0x3DE074u) {
        ctx->pc = 0x3DE074u;
            // 0x3de074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE078u;
        goto label_3de078;
    }
    ctx->pc = 0x3DE070u;
    SET_GPR_U32(ctx, 31, 0x3DE078u);
    ctx->pc = 0x3DE074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE070u;
            // 0x3de074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE078u; }
        if (ctx->pc != 0x3DE078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE078u; }
        if (ctx->pc != 0x3DE078u) { return; }
    }
    ctx->pc = 0x3DE078u;
label_3de078:
    // 0x3de078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3de078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3de07c:
    // 0x3de07c: 0xc075318  jal         func_1D4C60
label_3de080:
    if (ctx->pc == 0x3DE080u) {
        ctx->pc = 0x3DE080u;
            // 0x3de080: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE084u;
        goto label_3de084;
    }
    ctx->pc = 0x3DE07Cu;
    SET_GPR_U32(ctx, 31, 0x3DE084u);
    ctx->pc = 0x3DE080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE07Cu;
            // 0x3de080: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE084u; }
        if (ctx->pc != 0x3DE084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE084u; }
        if (ctx->pc != 0x3DE084u) { return; }
    }
    ctx->pc = 0x3DE084u;
label_3de084:
    // 0x3de084: 0xc0b6cec  jal         func_2DB3B0
label_3de088:
    if (ctx->pc == 0x3DE088u) {
        ctx->pc = 0x3DE088u;
            // 0x3de088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE08Cu;
        goto label_3de08c;
    }
    ctx->pc = 0x3DE084u;
    SET_GPR_U32(ctx, 31, 0x3DE08Cu);
    ctx->pc = 0x3DE088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE084u;
            // 0x3de088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE08Cu; }
        if (ctx->pc != 0x3DE08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE08Cu; }
        if (ctx->pc != 0x3DE08Cu) { return; }
    }
    ctx->pc = 0x3DE08Cu;
label_3de08c:
    // 0x3de08c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3de08cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de090:
    // 0x3de090: 0xc077280  jal         func_1DCA00
label_3de094:
    if (ctx->pc == 0x3DE094u) {
        ctx->pc = 0x3DE094u;
            // 0x3de094: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE098u;
        goto label_3de098;
    }
    ctx->pc = 0x3DE090u;
    SET_GPR_U32(ctx, 31, 0x3DE098u);
    ctx->pc = 0x3DE094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE090u;
            // 0x3de094: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE098u; }
        if (ctx->pc != 0x3DE098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE098u; }
        if (ctx->pc != 0x3DE098u) { return; }
    }
    ctx->pc = 0x3DE098u;
label_3de098:
    // 0x3de098: 0xc07727c  jal         func_1DC9F0
label_3de09c:
    if (ctx->pc == 0x3DE09Cu) {
        ctx->pc = 0x3DE09Cu;
            // 0x3de09c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE0A0u;
        goto label_3de0a0;
    }
    ctx->pc = 0x3DE098u;
    SET_GPR_U32(ctx, 31, 0x3DE0A0u);
    ctx->pc = 0x3DE09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE098u;
            // 0x3de09c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0A0u; }
        if (ctx->pc != 0x3DE0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0A0u; }
        if (ctx->pc != 0x3DE0A0u) { return; }
    }
    ctx->pc = 0x3DE0A0u;
label_3de0a0:
    // 0x3de0a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3de0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3de0a4:
    // 0x3de0a4: 0xc0c05e0  jal         func_301780
label_3de0a8:
    if (ctx->pc == 0x3DE0A8u) {
        ctx->pc = 0x3DE0A8u;
            // 0x3de0a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE0ACu;
        goto label_3de0ac;
    }
    ctx->pc = 0x3DE0A4u;
    SET_GPR_U32(ctx, 31, 0x3DE0ACu);
    ctx->pc = 0x3DE0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE0A4u;
            // 0x3de0a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0ACu; }
        if (ctx->pc != 0x3DE0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0ACu; }
        if (ctx->pc != 0x3DE0ACu) { return; }
    }
    ctx->pc = 0x3DE0ACu;
label_3de0ac:
    // 0x3de0ac: 0xc077280  jal         func_1DCA00
label_3de0b0:
    if (ctx->pc == 0x3DE0B0u) {
        ctx->pc = 0x3DE0B0u;
            // 0x3de0b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE0B4u;
        goto label_3de0b4;
    }
    ctx->pc = 0x3DE0ACu;
    SET_GPR_U32(ctx, 31, 0x3DE0B4u);
    ctx->pc = 0x3DE0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE0ACu;
            // 0x3de0b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0B4u; }
        if (ctx->pc != 0x3DE0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0B4u; }
        if (ctx->pc != 0x3DE0B4u) { return; }
    }
    ctx->pc = 0x3DE0B4u;
label_3de0b4:
    // 0x3de0b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3de0b8:
    // 0x3de0b8: 0xc0e5f68  jal         func_397DA0
label_3de0bc:
    if (ctx->pc == 0x3DE0BCu) {
        ctx->pc = 0x3DE0BCu;
            // 0x3de0bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE0C0u;
        goto label_3de0c0;
    }
    ctx->pc = 0x3DE0B8u;
    SET_GPR_U32(ctx, 31, 0x3DE0C0u);
    ctx->pc = 0x3DE0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE0B8u;
            // 0x3de0bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0C0u; }
        if (ctx->pc != 0x3DE0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0C0u; }
        if (ctx->pc != 0x3DE0C0u) { return; }
    }
    ctx->pc = 0x3DE0C0u;
label_3de0c0:
    // 0x3de0c0: 0xc0efc48  jal         func_3BF120
label_3de0c4:
    if (ctx->pc == 0x3DE0C4u) {
        ctx->pc = 0x3DE0C4u;
            // 0x3de0c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE0C8u;
        goto label_3de0c8;
    }
    ctx->pc = 0x3DE0C0u;
    SET_GPR_U32(ctx, 31, 0x3DE0C8u);
    ctx->pc = 0x3DE0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE0C0u;
            // 0x3de0c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF120u;
    if (runtime->hasFunction(0x3BF120u)) {
        auto targetFn = runtime->lookupFunction(0x3BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0C8u; }
        if (ctx->pc != 0x3DE0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF120_0x3bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0C8u; }
        if (ctx->pc != 0x3DE0C8u) { return; }
    }
    ctx->pc = 0x3DE0C8u;
label_3de0c8:
    // 0x3de0c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3de0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de0cc:
    // 0x3de0cc: 0xc0daef4  jal         func_36BBD0
label_3de0d0:
    if (ctx->pc == 0x3DE0D0u) {
        ctx->pc = 0x3DE0D0u;
            // 0x3de0d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE0D4u;
        goto label_3de0d4;
    }
    ctx->pc = 0x3DE0CCu;
    SET_GPR_U32(ctx, 31, 0x3DE0D4u);
    ctx->pc = 0x3DE0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE0CCu;
            // 0x3de0d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBD0u;
    if (runtime->hasFunction(0x36BBD0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0D4u; }
        if (ctx->pc != 0x3DE0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBD0_0x36bbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0D4u; }
        if (ctx->pc != 0x3DE0D4u) { return; }
    }
    ctx->pc = 0x3DE0D4u;
label_3de0d4:
    // 0x3de0d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3de0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3de0d8:
    // 0x3de0d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3de0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3de0dc:
    // 0x3de0dc: 0xc075378  jal         func_1D4DE0
label_3de0e0:
    if (ctx->pc == 0x3DE0E0u) {
        ctx->pc = 0x3DE0E0u;
            // 0x3de0e0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE0E4u;
        goto label_3de0e4;
    }
    ctx->pc = 0x3DE0DCu;
    SET_GPR_U32(ctx, 31, 0x3DE0E4u);
    ctx->pc = 0x3DE0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE0DCu;
            // 0x3de0e0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0E4u; }
        if (ctx->pc != 0x3DE0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0E4u; }
        if (ctx->pc != 0x3DE0E4u) { return; }
    }
    ctx->pc = 0x3DE0E4u;
label_3de0e4:
    // 0x3de0e4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3de0e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3de0e8:
    // 0x3de0e8: 0xc0daef0  jal         func_36BBC0
label_3de0ec:
    if (ctx->pc == 0x3DE0ECu) {
        ctx->pc = 0x3DE0ECu;
            // 0x3de0ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE0F0u;
        goto label_3de0f0;
    }
    ctx->pc = 0x3DE0E8u;
    SET_GPR_U32(ctx, 31, 0x3DE0F0u);
    ctx->pc = 0x3DE0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE0E8u;
            // 0x3de0ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBC0u;
    if (runtime->hasFunction(0x36BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0F0u; }
        if (ctx->pc != 0x3DE0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBC0_0x36bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0F0u; }
        if (ctx->pc != 0x3DE0F0u) { return; }
    }
    ctx->pc = 0x3DE0F0u;
label_3de0f0:
    // 0x3de0f0: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x3de0f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3de0f4:
    // 0x3de0f4: 0xc0cef78  jal         func_33BDE0
label_3de0f8:
    if (ctx->pc == 0x3DE0F8u) {
        ctx->pc = 0x3DE0F8u;
            // 0x3de0f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE0FCu;
        goto label_3de0fc;
    }
    ctx->pc = 0x3DE0F4u;
    SET_GPR_U32(ctx, 31, 0x3DE0FCu);
    ctx->pc = 0x3DE0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE0F4u;
            // 0x3de0f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BDE0u;
    if (runtime->hasFunction(0x33BDE0u)) {
        auto targetFn = runtime->lookupFunction(0x33BDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0FCu; }
        if (ctx->pc != 0x3DE0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BDE0_0x33bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE0FCu; }
        if (ctx->pc != 0x3DE0FCu) { return; }
    }
    ctx->pc = 0x3DE0FCu;
label_3de0fc:
    // 0x3de0fc: 0xc0c05dc  jal         func_301770
label_3de100:
    if (ctx->pc == 0x3DE100u) {
        ctx->pc = 0x3DE100u;
            // 0x3de100: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE104u;
        goto label_3de104;
    }
    ctx->pc = 0x3DE0FCu;
    SET_GPR_U32(ctx, 31, 0x3DE104u);
    ctx->pc = 0x3DE100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE0FCu;
            // 0x3de100: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE104u; }
        if (ctx->pc != 0x3DE104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE104u; }
        if (ctx->pc != 0x3DE104u) { return; }
    }
    ctx->pc = 0x3DE104u;
label_3de104:
    // 0x3de104: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3de104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de108:
    // 0x3de108: 0xc0daeec  jal         func_36BBB0
label_3de10c:
    if (ctx->pc == 0x3DE10Cu) {
        ctx->pc = 0x3DE10Cu;
            // 0x3de10c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE110u;
        goto label_3de110;
    }
    ctx->pc = 0x3DE108u;
    SET_GPR_U32(ctx, 31, 0x3DE110u);
    ctx->pc = 0x3DE10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE108u;
            // 0x3de10c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBB0u;
    if (runtime->hasFunction(0x36BBB0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE110u; }
        if (ctx->pc != 0x3DE110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBB0_0x36bbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE110u; }
        if (ctx->pc != 0x3DE110u) { return; }
    }
    ctx->pc = 0x3DE110u;
label_3de110:
    // 0x3de110: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3de110u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3de114:
    // 0x3de114: 0xc0daef0  jal         func_36BBC0
label_3de118:
    if (ctx->pc == 0x3DE118u) {
        ctx->pc = 0x3DE118u;
            // 0x3de118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE11Cu;
        goto label_3de11c;
    }
    ctx->pc = 0x3DE114u;
    SET_GPR_U32(ctx, 31, 0x3DE11Cu);
    ctx->pc = 0x3DE118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE114u;
            // 0x3de118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBC0u;
    if (runtime->hasFunction(0x36BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE11Cu; }
        if (ctx->pc != 0x3DE11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBC0_0x36bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE11Cu; }
        if (ctx->pc != 0x3DE11Cu) { return; }
    }
    ctx->pc = 0x3DE11Cu;
label_3de11c:
    // 0x3de11c: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x3de11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_3de120:
    // 0x3de120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3de124:
    // 0x3de124: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x3de124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_3de128:
    // 0x3de128: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3de128u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3de12c:
    // 0x3de12c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3de12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3de130:
    // 0x3de130: 0xc0daee8  jal         func_36BBA0
label_3de134:
    if (ctx->pc == 0x3DE134u) {
        ctx->pc = 0x3DE134u;
            // 0x3de134: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3DE138u;
        goto label_3de138;
    }
    ctx->pc = 0x3DE130u;
    SET_GPR_U32(ctx, 31, 0x3DE138u);
    ctx->pc = 0x3DE134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE130u;
            // 0x3de134: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBA0u;
    if (runtime->hasFunction(0x36BBA0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE138u; }
        if (ctx->pc != 0x3DE138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBA0_0x36bba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE138u; }
        if (ctx->pc != 0x3DE138u) { return; }
    }
    ctx->pc = 0x3DE138u;
label_3de138:
    // 0x3de138: 0xc0c05dc  jal         func_301770
label_3de13c:
    if (ctx->pc == 0x3DE13Cu) {
        ctx->pc = 0x3DE13Cu;
            // 0x3de13c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE140u;
        goto label_3de140;
    }
    ctx->pc = 0x3DE138u;
    SET_GPR_U32(ctx, 31, 0x3DE140u);
    ctx->pc = 0x3DE13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE138u;
            // 0x3de13c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE140u; }
        if (ctx->pc != 0x3DE140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE140u; }
        if (ctx->pc != 0x3DE140u) { return; }
    }
    ctx->pc = 0x3DE140u;
label_3de140:
    // 0x3de140: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3de140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de144:
    // 0x3de144: 0xc077280  jal         func_1DCA00
label_3de148:
    if (ctx->pc == 0x3DE148u) {
        ctx->pc = 0x3DE148u;
            // 0x3de148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE14Cu;
        goto label_3de14c;
    }
    ctx->pc = 0x3DE144u;
    SET_GPR_U32(ctx, 31, 0x3DE14Cu);
    ctx->pc = 0x3DE148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE144u;
            // 0x3de148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE14Cu; }
        if (ctx->pc != 0x3DE14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE14Cu; }
        if (ctx->pc != 0x3DE14Cu) { return; }
    }
    ctx->pc = 0x3DE14Cu;
label_3de14c:
    // 0x3de14c: 0xc07727c  jal         func_1DC9F0
label_3de150:
    if (ctx->pc == 0x3DE150u) {
        ctx->pc = 0x3DE150u;
            // 0x3de150: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE154u;
        goto label_3de154;
    }
    ctx->pc = 0x3DE14Cu;
    SET_GPR_U32(ctx, 31, 0x3DE154u);
    ctx->pc = 0x3DE150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE14Cu;
            // 0x3de150: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE154u; }
        if (ctx->pc != 0x3DE154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE154u; }
        if (ctx->pc != 0x3DE154u) { return; }
    }
    ctx->pc = 0x3DE154u;
label_3de154:
    // 0x3de154: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3de154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de158:
    // 0x3de158: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x3de158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_3de15c:
    // 0x3de15c: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x3de15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_3de160:
    // 0x3de160: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3de160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3de164:
    // 0x3de164: 0xc0c05d4  jal         func_301750
label_3de168:
    if (ctx->pc == 0x3DE168u) {
        ctx->pc = 0x3DE168u;
            // 0x3de168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE16Cu;
        goto label_3de16c;
    }
    ctx->pc = 0x3DE164u;
    SET_GPR_U32(ctx, 31, 0x3DE16Cu);
    ctx->pc = 0x3DE168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE164u;
            // 0x3de168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301750u;
    if (runtime->hasFunction(0x301750u)) {
        auto targetFn = runtime->lookupFunction(0x301750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE16Cu; }
        if (ctx->pc != 0x3DE16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301750_0x301750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE16Cu; }
        if (ctx->pc != 0x3DE16Cu) { return; }
    }
    ctx->pc = 0x3DE16Cu;
label_3de16c:
    // 0x3de16c: 0xc077330  jal         func_1DCCC0
label_3de170:
    if (ctx->pc == 0x3DE170u) {
        ctx->pc = 0x3DE170u;
            // 0x3de170: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE174u;
        goto label_3de174;
    }
    ctx->pc = 0x3DE16Cu;
    SET_GPR_U32(ctx, 31, 0x3DE174u);
    ctx->pc = 0x3DE170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE16Cu;
            // 0x3de170: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE174u; }
        if (ctx->pc != 0x3DE174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE174u; }
        if (ctx->pc != 0x3DE174u) { return; }
    }
    ctx->pc = 0x3DE174u;
label_3de174:
    // 0x3de174: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3de178:
    if (ctx->pc == 0x3DE178u) {
        ctx->pc = 0x3DE17Cu;
        goto label_3de17c;
    }
    ctx->pc = 0x3DE174u;
    {
        const bool branch_taken_0x3de174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3de174) {
            ctx->pc = 0x3DE18Cu;
            goto label_3de18c;
        }
    }
    ctx->pc = 0x3DE17Cu;
label_3de17c:
    // 0x3de17c: 0xc07732c  jal         func_1DCCB0
label_3de180:
    if (ctx->pc == 0x3DE180u) {
        ctx->pc = 0x3DE180u;
            // 0x3de180: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE184u;
        goto label_3de184;
    }
    ctx->pc = 0x3DE17Cu;
    SET_GPR_U32(ctx, 31, 0x3DE184u);
    ctx->pc = 0x3DE180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE17Cu;
            // 0x3de180: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE184u; }
        if (ctx->pc != 0x3DE184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE184u; }
        if (ctx->pc != 0x3DE184u) { return; }
    }
    ctx->pc = 0x3DE184u;
label_3de184:
    // 0x3de184: 0x10400305  beqz        $v0, . + 4 + (0x305 << 2)
label_3de188:
    if (ctx->pc == 0x3DE188u) {
        ctx->pc = 0x3DE18Cu;
        goto label_3de18c;
    }
    ctx->pc = 0x3DE184u;
    {
        const bool branch_taken_0x3de184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de184) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DE18Cu;
label_3de18c:
    // 0x3de18c: 0xc0775b8  jal         func_1DD6E0
label_3de190:
    if (ctx->pc == 0x3DE190u) {
        ctx->pc = 0x3DE194u;
        goto label_3de194;
    }
    ctx->pc = 0x3DE18Cu;
    SET_GPR_U32(ctx, 31, 0x3DE194u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE194u; }
        if (ctx->pc != 0x3DE194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE194u; }
        if (ctx->pc != 0x3DE194u) { return; }
    }
    ctx->pc = 0x3DE194u;
label_3de194:
    // 0x3de194: 0xc0775b4  jal         func_1DD6D0
label_3de198:
    if (ctx->pc == 0x3DE198u) {
        ctx->pc = 0x3DE198u;
            // 0x3de198: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3DE19Cu;
        goto label_3de19c;
    }
    ctx->pc = 0x3DE194u;
    SET_GPR_U32(ctx, 31, 0x3DE19Cu);
    ctx->pc = 0x3DE198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE194u;
            // 0x3de198: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE19Cu; }
        if (ctx->pc != 0x3DE19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE19Cu; }
        if (ctx->pc != 0x3DE19Cu) { return; }
    }
    ctx->pc = 0x3DE19Cu;
label_3de19c:
    // 0x3de19c: 0xc62201f0  lwc1        $f2, 0x1F0($s1)
    ctx->pc = 0x3de19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3de1a0:
    // 0x3de1a0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3de1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_3de1a4:
    // 0x3de1a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3de1a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3de1a8:
    // 0x3de1a8: 0x0  nop
    ctx->pc = 0x3de1a8u;
    // NOP
label_3de1ac:
    // 0x3de1ac: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3de1acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3de1b0:
    // 0x3de1b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3de1b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3de1b4:
    // 0x3de1b4: 0x450102f9  bc1t        . + 4 + (0x2F9 << 2)
label_3de1b8:
    if (ctx->pc == 0x3DE1B8u) {
        ctx->pc = 0x3DE1B8u;
            // 0x3de1b8: 0xe62001f0  swc1        $f0, 0x1F0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 496), bits); }
        ctx->pc = 0x3DE1BCu;
        goto label_3de1bc;
    }
    ctx->pc = 0x3DE1B4u;
    {
        const bool branch_taken_0x3de1b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DE1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE1B4u;
            // 0x3de1b8: 0xe62001f0  swc1        $f0, 0x1F0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 496), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de1b4) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DE1BCu;
label_3de1bc:
    // 0x3de1bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3de1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3de1c0:
    // 0x3de1c0: 0xc07732c  jal         func_1DCCB0
label_3de1c4:
    if (ctx->pc == 0x3DE1C4u) {
        ctx->pc = 0x3DE1C4u;
            // 0x3de1c4: 0xae2001f0  sw          $zero, 0x1F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
        ctx->pc = 0x3DE1C8u;
        goto label_3de1c8;
    }
    ctx->pc = 0x3DE1C0u;
    SET_GPR_U32(ctx, 31, 0x3DE1C8u);
    ctx->pc = 0x3DE1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE1C0u;
            // 0x3de1c4: 0xae2001f0  sw          $zero, 0x1F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE1C8u; }
        if (ctx->pc != 0x3DE1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE1C8u; }
        if (ctx->pc != 0x3DE1C8u) { return; }
    }
    ctx->pc = 0x3DE1C8u;
label_3de1c8:
    // 0x3de1c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3de1cc:
    if (ctx->pc == 0x3DE1CCu) {
        ctx->pc = 0x3DE1D0u;
        goto label_3de1d0;
    }
    ctx->pc = 0x3DE1C8u;
    {
        const bool branch_taken_0x3de1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de1c8) {
            ctx->pc = 0x3DE1F8u;
            goto label_3de1f8;
        }
    }
    ctx->pc = 0x3DE1D0u;
label_3de1d0:
    // 0x3de1d0: 0xc077320  jal         func_1DCC80
label_3de1d4:
    if (ctx->pc == 0x3DE1D4u) {
        ctx->pc = 0x3DE1D4u;
            // 0x3de1d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE1D8u;
        goto label_3de1d8;
    }
    ctx->pc = 0x3DE1D0u;
    SET_GPR_U32(ctx, 31, 0x3DE1D8u);
    ctx->pc = 0x3DE1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE1D0u;
            // 0x3de1d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE1D8u; }
        if (ctx->pc != 0x3DE1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE1D8u; }
        if (ctx->pc != 0x3DE1D8u) { return; }
    }
    ctx->pc = 0x3DE1D8u;
label_3de1d8:
    // 0x3de1d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3de1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de1dc:
    // 0x3de1dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3de1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3de1e0:
    // 0x3de1e0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x3de1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_3de1e4:
    // 0x3de1e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3de1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3de1e8:
    // 0x3de1e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3de1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3de1ec:
    // 0x3de1ec: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x3de1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3de1f0:
    // 0x3de1f0: 0xc077554  jal         func_1DD550
label_3de1f4:
    if (ctx->pc == 0x3DE1F4u) {
        ctx->pc = 0x3DE1F4u;
            // 0x3de1f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE1F8u;
        goto label_3de1f8;
    }
    ctx->pc = 0x3DE1F0u;
    SET_GPR_U32(ctx, 31, 0x3DE1F8u);
    ctx->pc = 0x3DE1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE1F0u;
            // 0x3de1f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD550u;
    if (runtime->hasFunction(0x1DD550u)) {
        auto targetFn = runtime->lookupFunction(0x1DD550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE1F8u; }
        if (ctx->pc != 0x3DE1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD550_0x1dd550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE1F8u; }
        if (ctx->pc != 0x3DE1F8u) { return; }
    }
    ctx->pc = 0x3DE1F8u;
label_3de1f8:
    // 0x3de1f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3de1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3de1fc:
    // 0x3de1fc: 0xc0770e4  jal         func_1DC390
label_3de200:
    if (ctx->pc == 0x3DE200u) {
        ctx->pc = 0x3DE200u;
            // 0x3de200: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x3DE204u;
        goto label_3de204;
    }
    ctx->pc = 0x3DE1FCu;
    SET_GPR_U32(ctx, 31, 0x3DE204u);
    ctx->pc = 0x3DE200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE1FCu;
            // 0x3de200: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE204u; }
        if (ctx->pc != 0x3DE204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE204u; }
        if (ctx->pc != 0x3DE204u) { return; }
    }
    ctx->pc = 0x3DE204u;
label_3de204:
    // 0x3de204: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3de204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3de208:
    // 0x3de208: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_3de20c:
    if (ctx->pc == 0x3DE20Cu) {
        ctx->pc = 0x3DE20Cu;
            // 0x3de20c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE210u;
        goto label_3de210;
    }
    ctx->pc = 0x3DE208u;
    {
        const bool branch_taken_0x3de208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3de208) {
            ctx->pc = 0x3DE20Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE208u;
            // 0x3de20c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DE218u;
            goto label_3de218;
        }
    }
    ctx->pc = 0x3DE210u;
label_3de210:
    // 0x3de210: 0x10000011  b           . + 4 + (0x11 << 2)
label_3de214:
    if (ctx->pc == 0x3DE214u) {
        ctx->pc = 0x3DE214u;
            // 0x3de214: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE218u;
        goto label_3de218;
    }
    ctx->pc = 0x3DE210u;
    {
        const bool branch_taken_0x3de210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE210u;
            // 0x3de214: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de210) {
            ctx->pc = 0x3DE258u;
            goto label_3de258;
        }
    }
    ctx->pc = 0x3DE218u;
label_3de218:
    // 0x3de218: 0xc077324  jal         func_1DCC90
label_3de21c:
    if (ctx->pc == 0x3DE21Cu) {
        ctx->pc = 0x3DE220u;
        goto label_3de220;
    }
    ctx->pc = 0x3DE218u;
    SET_GPR_U32(ctx, 31, 0x3DE220u);
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE220u; }
        if (ctx->pc != 0x3DE220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE220u; }
        if (ctx->pc != 0x3DE220u) { return; }
    }
    ctx->pc = 0x3DE220u;
label_3de220:
    // 0x3de220: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3de220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3de224:
    // 0x3de224: 0xc077258  jal         func_1DC960
label_3de228:
    if (ctx->pc == 0x3DE228u) {
        ctx->pc = 0x3DE228u;
            // 0x3de228: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3DE22Cu;
        goto label_3de22c;
    }
    ctx->pc = 0x3DE224u;
    SET_GPR_U32(ctx, 31, 0x3DE22Cu);
    ctx->pc = 0x3DE228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE224u;
            // 0x3de228: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE22Cu; }
        if (ctx->pc != 0x3DE22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE22Cu; }
        if (ctx->pc != 0x3DE22Cu) { return; }
    }
    ctx->pc = 0x3DE22Cu;
label_3de22c:
    // 0x3de22c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3de22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de230:
    // 0x3de230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3de234:
    // 0x3de234: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3de234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3de238:
    // 0x3de238: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x3de238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3de23c:
    // 0x3de23c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3de23cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3de240:
    // 0x3de240: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x3de240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_3de244:
    // 0x3de244: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3de244u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3de248:
    // 0x3de248: 0xc0bb404  jal         func_2ED010
label_3de24c:
    if (ctx->pc == 0x3DE24Cu) {
        ctx->pc = 0x3DE24Cu;
            // 0x3de24c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3DE250u;
        goto label_3de250;
    }
    ctx->pc = 0x3DE248u;
    SET_GPR_U32(ctx, 31, 0x3DE250u);
    ctx->pc = 0x3DE24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE248u;
            // 0x3de24c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE250u; }
        if (ctx->pc != 0x3DE250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE250u; }
        if (ctx->pc != 0x3DE250u) { return; }
    }
    ctx->pc = 0x3DE250u;
label_3de250:
    // 0x3de250: 0x100002d2  b           . + 4 + (0x2D2 << 2)
label_3de254:
    if (ctx->pc == 0x3DE254u) {
        ctx->pc = 0x3DE258u;
        goto label_3de258;
    }
    ctx->pc = 0x3DE250u;
    {
        const bool branch_taken_0x3de250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de250) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DE258u;
label_3de258:
    // 0x3de258: 0xc077324  jal         func_1DCC90
label_3de25c:
    if (ctx->pc == 0x3DE25Cu) {
        ctx->pc = 0x3DE260u;
        goto label_3de260;
    }
    ctx->pc = 0x3DE258u;
    SET_GPR_U32(ctx, 31, 0x3DE260u);
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE260u; }
        if (ctx->pc != 0x3DE260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE260u; }
        if (ctx->pc != 0x3DE260u) { return; }
    }
    ctx->pc = 0x3DE260u;
label_3de260:
    // 0x3de260: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3de260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3de264:
    // 0x3de264: 0xc077258  jal         func_1DC960
label_3de268:
    if (ctx->pc == 0x3DE268u) {
        ctx->pc = 0x3DE268u;
            // 0x3de268: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3DE26Cu;
        goto label_3de26c;
    }
    ctx->pc = 0x3DE264u;
    SET_GPR_U32(ctx, 31, 0x3DE26Cu);
    ctx->pc = 0x3DE268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE264u;
            // 0x3de268: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE26Cu; }
        if (ctx->pc != 0x3DE26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE26Cu; }
        if (ctx->pc != 0x3DE26Cu) { return; }
    }
    ctx->pc = 0x3DE26Cu;
label_3de26c:
    // 0x3de26c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3de26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de270:
    // 0x3de270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3de274:
    // 0x3de274: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3de274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3de278:
    // 0x3de278: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x3de278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3de27c:
    // 0x3de27c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3de27cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3de280:
    // 0x3de280: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x3de280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_3de284:
    // 0x3de284: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3de284u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3de288:
    // 0x3de288: 0xc0bb404  jal         func_2ED010
label_3de28c:
    if (ctx->pc == 0x3DE28Cu) {
        ctx->pc = 0x3DE28Cu;
            // 0x3de28c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3DE290u;
        goto label_3de290;
    }
    ctx->pc = 0x3DE288u;
    SET_GPR_U32(ctx, 31, 0x3DE290u);
    ctx->pc = 0x3DE28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE288u;
            // 0x3de28c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE290u; }
        if (ctx->pc != 0x3DE290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE290u; }
        if (ctx->pc != 0x3DE290u) { return; }
    }
    ctx->pc = 0x3DE290u;
label_3de290:
    // 0x3de290: 0x100002c2  b           . + 4 + (0x2C2 << 2)
label_3de294:
    if (ctx->pc == 0x3DE294u) {
        ctx->pc = 0x3DE298u;
        goto label_3de298;
    }
    ctx->pc = 0x3DE290u;
    {
        const bool branch_taken_0x3de290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de290) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DE298u;
label_3de298:
    // 0x3de298: 0x26320030  addiu       $s2, $s1, 0x30
    ctx->pc = 0x3de298u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3de29c:
    // 0x3de29c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3de29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3de2a0:
    // 0x3de2a0: 0xc04cc04  jal         func_133010
label_3de2a4:
    if (ctx->pc == 0x3DE2A4u) {
        ctx->pc = 0x3DE2A4u;
            // 0x3de2a4: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x3DE2A8u;
        goto label_3de2a8;
    }
    ctx->pc = 0x3DE2A0u;
    SET_GPR_U32(ctx, 31, 0x3DE2A8u);
    ctx->pc = 0x3DE2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE2A0u;
            // 0x3de2a4: 0x264500f0  addiu       $a1, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE2A8u; }
        if (ctx->pc != 0x3DE2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE2A8u; }
        if (ctx->pc != 0x3DE2A8u) { return; }
    }
    ctx->pc = 0x3DE2A8u;
label_3de2a8:
    // 0x3de2a8: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x3de2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_3de2ac:
    // 0x3de2ac: 0xc04cc04  jal         func_133010
label_3de2b0:
    if (ctx->pc == 0x3DE2B0u) {
        ctx->pc = 0x3DE2B0u;
            // 0x3de2b0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3DE2B4u;
        goto label_3de2b4;
    }
    ctx->pc = 0x3DE2ACu;
    SET_GPR_U32(ctx, 31, 0x3DE2B4u);
    ctx->pc = 0x3DE2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE2ACu;
            // 0x3de2b0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE2B4u; }
        if (ctx->pc != 0x3DE2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE2B4u; }
        if (ctx->pc != 0x3DE2B4u) { return; }
    }
    ctx->pc = 0x3DE2B4u;
label_3de2b4:
    // 0x3de2b4: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3de2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
label_3de2b8:
    // 0x3de2b8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3de2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3de2bc:
    // 0x3de2bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3de2bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3de2c0:
    // 0x3de2c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3de2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3de2c4:
    // 0x3de2c4: 0xc04cc7c  jal         func_1331F0
label_3de2c8:
    if (ctx->pc == 0x3DE2C8u) {
        ctx->pc = 0x3DE2C8u;
            // 0x3de2c8: 0x264600c0  addiu       $a2, $s2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
        ctx->pc = 0x3DE2CCu;
        goto label_3de2cc;
    }
    ctx->pc = 0x3DE2C4u;
    SET_GPR_U32(ctx, 31, 0x3DE2CCu);
    ctx->pc = 0x3DE2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE2C4u;
            // 0x3de2c8: 0x264600c0  addiu       $a2, $s2, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE2CCu; }
        if (ctx->pc != 0x3DE2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE2CCu; }
        if (ctx->pc != 0x3DE2CCu) { return; }
    }
    ctx->pc = 0x3DE2CCu;
label_3de2cc:
    // 0x3de2cc: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3de2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3de2d0:
    // 0x3de2d0: 0xc04c720  jal         func_131C80
label_3de2d4:
    if (ctx->pc == 0x3DE2D4u) {
        ctx->pc = 0x3DE2D4u;
            // 0x3de2d4: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->pc = 0x3DE2D8u;
        goto label_3de2d8;
    }
    ctx->pc = 0x3DE2D0u;
    SET_GPR_U32(ctx, 31, 0x3DE2D8u);
    ctx->pc = 0x3DE2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE2D0u;
            // 0x3de2d4: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE2D8u; }
        if (ctx->pc != 0x3DE2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE2D8u; }
        if (ctx->pc != 0x3DE2D8u) { return; }
    }
    ctx->pc = 0x3DE2D8u;
label_3de2d8:
    // 0x3de2d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3de2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3de2dc:
    // 0x3de2dc: 0x8e2401e8  lw          $a0, 0x1E8($s1)
    ctx->pc = 0x3de2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
label_3de2e0:
    // 0x3de2e0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3de2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3de2e4:
    // 0x3de2e4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_3de2e8:
    if (ctx->pc == 0x3DE2E8u) {
        ctx->pc = 0x3DE2E8u;
            // 0x3de2e8: 0xc4410018  lwc1        $f1, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3DE2ECu;
        goto label_3de2ec;
    }
    ctx->pc = 0x3DE2E4u;
    {
        const bool branch_taken_0x3de2e4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3DE2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE2E4u;
            // 0x3de2e8: 0xc4410018  lwc1        $f1, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de2e4) {
            ctx->pc = 0x3DE2F8u;
            goto label_3de2f8;
        }
    }
    ctx->pc = 0x3DE2ECu;
label_3de2ec:
    // 0x3de2ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3de2ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3de2f0:
    // 0x3de2f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3de2f4:
    if (ctx->pc == 0x3DE2F4u) {
        ctx->pc = 0x3DE2F4u;
            // 0x3de2f4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3DE2F8u;
        goto label_3de2f8;
    }
    ctx->pc = 0x3DE2F0u;
    {
        const bool branch_taken_0x3de2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE2F0u;
            // 0x3de2f4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de2f0) {
            ctx->pc = 0x3DE314u;
            goto label_3de314;
        }
    }
    ctx->pc = 0x3DE2F8u;
label_3de2f8:
    // 0x3de2f8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3de2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3de2fc:
    // 0x3de2fc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3de2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3de300:
    // 0x3de300: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3de300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3de304:
    // 0x3de304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3de304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3de308:
    // 0x3de308: 0x0  nop
    ctx->pc = 0x3de308u;
    // NOP
label_3de30c:
    // 0x3de30c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3de30cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3de310:
    // 0x3de310: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3de310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3de314:
    // 0x3de314: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3de314u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3de318:
    // 0x3de318: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3de318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3de31c:
    // 0x3de31c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3de31cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3de320:
    // 0x3de320: 0x0  nop
    ctx->pc = 0x3de320u;
    // NOP
label_3de324:
    // 0x3de324: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3de324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3de328:
    // 0x3de328: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3de32c:
    if (ctx->pc == 0x3DE32Cu) {
        ctx->pc = 0x3DE32Cu;
            // 0x3de32c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3DE330u;
        goto label_3de330;
    }
    ctx->pc = 0x3DE328u;
    {
        const bool branch_taken_0x3de328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3de328) {
            ctx->pc = 0x3DE32Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE328u;
            // 0x3de32c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DE340u;
            goto label_3de340;
        }
    }
    ctx->pc = 0x3DE330u;
label_3de330:
    // 0x3de330: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3de330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3de334:
    // 0x3de334: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3de334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3de338:
    // 0x3de338: 0x10000007  b           . + 4 + (0x7 << 2)
label_3de33c:
    if (ctx->pc == 0x3DE33Cu) {
        ctx->pc = 0x3DE33Cu;
            // 0x3de33c: 0xae2401e8  sw          $a0, 0x1E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 4));
        ctx->pc = 0x3DE340u;
        goto label_3de340;
    }
    ctx->pc = 0x3DE338u;
    {
        const bool branch_taken_0x3de338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE338u;
            // 0x3de33c: 0xae2401e8  sw          $a0, 0x1E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de338) {
            ctx->pc = 0x3DE358u;
            goto label_3de358;
        }
    }
    ctx->pc = 0x3DE340u;
label_3de340:
    // 0x3de340: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3de340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3de344:
    // 0x3de344: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3de344u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3de348:
    // 0x3de348: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3de348u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3de34c:
    // 0x3de34c: 0x0  nop
    ctx->pc = 0x3de34cu;
    // NOP
label_3de350:
    // 0x3de350: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3de350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3de354:
    // 0x3de354: 0xae2401e8  sw          $a0, 0x1E8($s1)
    ctx->pc = 0x3de354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 4));
label_3de358:
    // 0x3de358: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_3de35c:
    if (ctx->pc == 0x3DE35Cu) {
        ctx->pc = 0x3DE35Cu;
            // 0x3de35c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x3DE360u;
        goto label_3de360;
    }
    ctx->pc = 0x3DE358u;
    {
        const bool branch_taken_0x3de358 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3de358) {
            ctx->pc = 0x3DE35Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE358u;
            // 0x3de35c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DE36Cu;
            goto label_3de36c;
        }
    }
    ctx->pc = 0x3DE360u;
label_3de360:
    // 0x3de360: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3de360u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3de364:
    // 0x3de364: 0x10000007  b           . + 4 + (0x7 << 2)
label_3de368:
    if (ctx->pc == 0x3DE368u) {
        ctx->pc = 0x3DE368u;
            // 0x3de368: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3DE36Cu;
        goto label_3de36c;
    }
    ctx->pc = 0x3DE364u;
    {
        const bool branch_taken_0x3de364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE364u;
            // 0x3de368: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de364) {
            ctx->pc = 0x3DE384u;
            goto label_3de384;
        }
    }
    ctx->pc = 0x3DE36Cu;
label_3de36c:
    // 0x3de36c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3de36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3de370:
    // 0x3de370: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3de370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3de374:
    // 0x3de374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3de374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3de378:
    // 0x3de378: 0x0  nop
    ctx->pc = 0x3de378u;
    // NOP
label_3de37c:
    // 0x3de37c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3de37cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3de380:
    // 0x3de380: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3de380u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3de384:
    // 0x3de384: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3de384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3de388:
    // 0x3de388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3de388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3de38c:
    // 0x3de38c: 0x0  nop
    ctx->pc = 0x3de38cu;
    // NOP
label_3de390:
    // 0x3de390: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3de390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3de394:
    // 0x3de394: 0x4503007e  bc1tl       . + 4 + (0x7E << 2)
label_3de398:
    if (ctx->pc == 0x3DE398u) {
        ctx->pc = 0x3DE398u;
            // 0x3de398: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x3DE39Cu;
        goto label_3de39c;
    }
    ctx->pc = 0x3DE394u;
    {
        const bool branch_taken_0x3de394 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3de394) {
            ctx->pc = 0x3DE398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE394u;
            // 0x3de398: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DE590u;
            goto label_3de590;
        }
    }
    ctx->pc = 0x3DE39Cu;
label_3de39c:
    // 0x3de39c: 0x8e630968  lw          $v1, 0x968($s3)
    ctx->pc = 0x3de39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
label_3de3a0:
    // 0x3de3a0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3de3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3de3a4:
    // 0x3de3a4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_3de3a8:
    if (ctx->pc == 0x3DE3A8u) {
        ctx->pc = 0x3DE3ACu;
        goto label_3de3ac;
    }
    ctx->pc = 0x3DE3A4u;
    {
        const bool branch_taken_0x3de3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3de3a4) {
            ctx->pc = 0x3DE400u;
            goto label_3de400;
        }
    }
    ctx->pc = 0x3DE3ACu;
label_3de3ac:
    // 0x3de3ac: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3de3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3de3b0:
    // 0x3de3b0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3de3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3de3b4:
    // 0x3de3b4: 0xc460f820  lwc1        $f0, -0x7E0($v1)
    ctx->pc = 0x3de3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3de3b8:
    // 0x3de3b8: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x3de3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_3de3bc:
    // 0x3de3bc: 0xc442f824  lwc1        $f2, -0x7DC($v0)
    ctx->pc = 0x3de3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3de3c0:
    // 0x3de3c0: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x3de3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_3de3c4:
    // 0x3de3c4: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x3de3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_3de3c8:
    // 0x3de3c8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3de3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3de3cc:
    // 0x3de3cc: 0xc461f828  lwc1        $f1, -0x7D8($v1)
    ctx->pc = 0x3de3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3de3d0:
    // 0x3de3d0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3de3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3de3d4:
    // 0x3de3d4: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x3de3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_3de3d8:
    // 0x3de3d8: 0xc440f82c  lwc1        $f0, -0x7D4($v0)
    ctx->pc = 0x3de3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3de3dc:
    // 0x3de3dc: 0xe7a20284  swc1        $f2, 0x284($sp)
    ctx->pc = 0x3de3dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_3de3e0:
    // 0x3de3e0: 0xe7a10288  swc1        $f1, 0x288($sp)
    ctx->pc = 0x3de3e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_3de3e4:
    // 0x3de3e4: 0xc04cc90  jal         func_133240
label_3de3e8:
    if (ctx->pc == 0x3DE3E8u) {
        ctx->pc = 0x3DE3E8u;
            // 0x3de3e8: 0xe7a0028c  swc1        $f0, 0x28C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
        ctx->pc = 0x3DE3ECu;
        goto label_3de3ec;
    }
    ctx->pc = 0x3DE3E4u;
    SET_GPR_U32(ctx, 31, 0x3DE3ECu);
    ctx->pc = 0x3DE3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE3E4u;
            // 0x3de3e8: 0xe7a0028c  swc1        $f0, 0x28C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE3ECu; }
        if (ctx->pc != 0x3DE3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE3ECu; }
        if (ctx->pc != 0x3DE3ECu) { return; }
    }
    ctx->pc = 0x3DE3ECu;
label_3de3ec:
    // 0x3de3ec: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x3de3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_3de3f0:
    // 0x3de3f0: 0xc04cc44  jal         func_133110
label_3de3f4:
    if (ctx->pc == 0x3DE3F4u) {
        ctx->pc = 0x3DE3F4u;
            // 0x3de3f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE3F8u;
        goto label_3de3f8;
    }
    ctx->pc = 0x3DE3F0u;
    SET_GPR_U32(ctx, 31, 0x3DE3F8u);
    ctx->pc = 0x3DE3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE3F0u;
            // 0x3de3f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE3F8u; }
        if (ctx->pc != 0x3DE3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE3F8u; }
        if (ctx->pc != 0x3DE3F8u) { return; }
    }
    ctx->pc = 0x3DE3F8u;
label_3de3f8:
    // 0x3de3f8: 0x10000015  b           . + 4 + (0x15 << 2)
label_3de3fc:
    if (ctx->pc == 0x3DE3FCu) {
        ctx->pc = 0x3DE3FCu;
            // 0x3de3fc: 0x8e020d9c  lw          $v0, 0xD9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
        ctx->pc = 0x3DE400u;
        goto label_3de400;
    }
    ctx->pc = 0x3DE3F8u;
    {
        const bool branch_taken_0x3de3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE3F8u;
            // 0x3de3fc: 0x8e020d9c  lw          $v0, 0xD9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de3f8) {
            ctx->pc = 0x3DE450u;
            goto label_3de450;
        }
    }
    ctx->pc = 0x3DE400u;
label_3de400:
    // 0x3de400: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3de400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3de404:
    // 0x3de404: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3de404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3de408:
    // 0x3de408: 0xc460f830  lwc1        $f0, -0x7D0($v1)
    ctx->pc = 0x3de408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3de40c:
    // 0x3de40c: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x3de40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_3de410:
    // 0x3de410: 0xc442f834  lwc1        $f2, -0x7CC($v0)
    ctx->pc = 0x3de410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3de414:
    // 0x3de414: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x3de414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_3de418:
    // 0x3de418: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x3de418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_3de41c:
    // 0x3de41c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3de41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3de420:
    // 0x3de420: 0xc461f838  lwc1        $f1, -0x7C8($v1)
    ctx->pc = 0x3de420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3de424:
    // 0x3de424: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3de424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3de428:
    // 0x3de428: 0xe7a00270  swc1        $f0, 0x270($sp)
    ctx->pc = 0x3de428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
label_3de42c:
    // 0x3de42c: 0xc440f83c  lwc1        $f0, -0x7C4($v0)
    ctx->pc = 0x3de42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3de430:
    // 0x3de430: 0xe7a20274  swc1        $f2, 0x274($sp)
    ctx->pc = 0x3de430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_3de434:
    // 0x3de434: 0xe7a10278  swc1        $f1, 0x278($sp)
    ctx->pc = 0x3de434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_3de438:
    // 0x3de438: 0xc04cc90  jal         func_133240
label_3de43c:
    if (ctx->pc == 0x3DE43Cu) {
        ctx->pc = 0x3DE43Cu;
            // 0x3de43c: 0xe7a0027c  swc1        $f0, 0x27C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
        ctx->pc = 0x3DE440u;
        goto label_3de440;
    }
    ctx->pc = 0x3DE438u;
    SET_GPR_U32(ctx, 31, 0x3DE440u);
    ctx->pc = 0x3DE43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE438u;
            // 0x3de43c: 0xe7a0027c  swc1        $f0, 0x27C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE440u; }
        if (ctx->pc != 0x3DE440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE440u; }
        if (ctx->pc != 0x3DE440u) { return; }
    }
    ctx->pc = 0x3DE440u;
label_3de440:
    // 0x3de440: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x3de440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_3de444:
    // 0x3de444: 0xc04cc44  jal         func_133110
label_3de448:
    if (ctx->pc == 0x3DE448u) {
        ctx->pc = 0x3DE448u;
            // 0x3de448: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE44Cu;
        goto label_3de44c;
    }
    ctx->pc = 0x3DE444u;
    SET_GPR_U32(ctx, 31, 0x3DE44Cu);
    ctx->pc = 0x3DE448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE444u;
            // 0x3de448: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE44Cu; }
        if (ctx->pc != 0x3DE44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE44Cu; }
        if (ctx->pc != 0x3DE44Cu) { return; }
    }
    ctx->pc = 0x3DE44Cu;
label_3de44c:
    // 0x3de44c: 0x8e020d9c  lw          $v0, 0xD9C($s0)
    ctx->pc = 0x3de44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_3de450:
    // 0x3de450: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3de450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3de454:
    // 0x3de454: 0x26040b10  addiu       $a0, $s0, 0xB10
    ctx->pc = 0x3de454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2832));
label_3de458:
    // 0x3de458: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3de458u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3de45c:
    // 0x3de45c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x3de45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_3de460:
    // 0x3de460: 0xae020d9c  sw          $v0, 0xD9C($s0)
    ctx->pc = 0x3de460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 2));
label_3de464:
    // 0x3de464: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3de464u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3de468:
    // 0x3de468: 0xc04cbd8  jal         func_132F60
label_3de46c:
    if (ctx->pc == 0x3DE46Cu) {
        ctx->pc = 0x3DE46Cu;
            // 0x3de46c: 0xae000af4  sw          $zero, 0xAF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2804), GPR_U32(ctx, 0));
        ctx->pc = 0x3DE470u;
        goto label_3de470;
    }
    ctx->pc = 0x3DE468u;
    SET_GPR_U32(ctx, 31, 0x3DE470u);
    ctx->pc = 0x3DE46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE468u;
            // 0x3de46c: 0xae000af4  sw          $zero, 0xAF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE470u; }
        if (ctx->pc != 0x3DE470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE470u; }
        if (ctx->pc != 0x3DE470u) { return; }
    }
    ctx->pc = 0x3DE470u;
label_3de470:
    // 0x3de470: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3de470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_3de474:
    // 0x3de474: 0xc075318  jal         func_1D4C60
label_3de478:
    if (ctx->pc == 0x3DE478u) {
        ctx->pc = 0x3DE478u;
            // 0x3de478: 0x260502e0  addiu       $a1, $s0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
        ctx->pc = 0x3DE47Cu;
        goto label_3de47c;
    }
    ctx->pc = 0x3DE474u;
    SET_GPR_U32(ctx, 31, 0x3DE47Cu);
    ctx->pc = 0x3DE478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE474u;
            // 0x3de478: 0x260502e0  addiu       $a1, $s0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE47Cu; }
        if (ctx->pc != 0x3DE47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE47Cu; }
        if (ctx->pc != 0x3DE47Cu) { return; }
    }
    ctx->pc = 0x3DE47Cu;
label_3de47c:
    // 0x3de47c: 0x26050560  addiu       $a1, $s0, 0x560
    ctx->pc = 0x3de47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_3de480:
    // 0x3de480: 0x26040840  addiu       $a0, $s0, 0x840
    ctx->pc = 0x3de480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_3de484:
    // 0x3de484: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3de484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3de488:
    // 0x3de488: 0xc0c6250  jal         func_318940
label_3de48c:
    if (ctx->pc == 0x3DE48Cu) {
        ctx->pc = 0x3DE48Cu;
            // 0x3de48c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE490u;
        goto label_3de490;
    }
    ctx->pc = 0x3DE488u;
    SET_GPR_U32(ctx, 31, 0x3DE490u);
    ctx->pc = 0x3DE48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE488u;
            // 0x3de48c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE490u; }
        if (ctx->pc != 0x3DE490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE490u; }
        if (ctx->pc != 0x3DE490u) { return; }
    }
    ctx->pc = 0x3DE490u;
label_3de490:
    // 0x3de490: 0x26460090  addiu       $a2, $s2, 0x90
    ctx->pc = 0x3de490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_3de494:
    // 0x3de494: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3de494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_3de498:
    // 0x3de498: 0xc075378  jal         func_1D4DE0
label_3de49c:
    if (ctx->pc == 0x3DE49Cu) {
        ctx->pc = 0x3DE49Cu;
            // 0x3de49c: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x3DE4A0u;
        goto label_3de4a0;
    }
    ctx->pc = 0x3DE498u;
    SET_GPR_U32(ctx, 31, 0x3DE4A0u);
    ctx->pc = 0x3DE49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE498u;
            // 0x3de49c: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE4A0u; }
        if (ctx->pc != 0x3DE4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE4A0u; }
        if (ctx->pc != 0x3DE4A0u) { return; }
    }
    ctx->pc = 0x3DE4A0u;
label_3de4a0:
    // 0x3de4a0: 0xc6010880  lwc1        $f1, 0x880($s0)
    ctx->pc = 0x3de4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3de4a4:
    // 0x3de4a4: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x3de4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
label_3de4a8:
    // 0x3de4a8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3de4a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3de4ac:
    // 0x3de4ac: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3de4acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3de4b0:
    // 0x3de4b0: 0xc0c753c  jal         func_31D4F0
label_3de4b4:
    if (ctx->pc == 0x3DE4B4u) {
        ctx->pc = 0x3DE4B4u;
            // 0x3de4b4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3DE4B8u;
        goto label_3de4b8;
    }
    ctx->pc = 0x3DE4B0u;
    SET_GPR_U32(ctx, 31, 0x3DE4B8u);
    ctx->pc = 0x3DE4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE4B0u;
            // 0x3de4b4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE4B8u; }
        if (ctx->pc != 0x3DE4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE4B8u; }
        if (ctx->pc != 0x3DE4B8u) { return; }
    }
    ctx->pc = 0x3DE4B8u;
label_3de4b8:
    // 0x3de4b8: 0xc60c0930  lwc1        $f12, 0x930($s0)
    ctx->pc = 0x3de4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3de4bc:
    // 0x3de4bc: 0xc60d0880  lwc1        $f13, 0x880($s0)
    ctx->pc = 0x3de4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3de4c0:
    // 0x3de4c0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3de4c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3de4c4:
    // 0x3de4c4: 0xc0c753c  jal         func_31D4F0
label_3de4c8:
    if (ctx->pc == 0x3DE4C8u) {
        ctx->pc = 0x3DE4C8u;
            // 0x3de4c8: 0x2604092c  addiu       $a0, $s0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
        ctx->pc = 0x3DE4CCu;
        goto label_3de4cc;
    }
    ctx->pc = 0x3DE4C4u;
    SET_GPR_U32(ctx, 31, 0x3DE4CCu);
    ctx->pc = 0x3DE4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE4C4u;
            // 0x3de4c8: 0x2604092c  addiu       $a0, $s0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE4CCu; }
        if (ctx->pc != 0x3DE4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE4CCu; }
        if (ctx->pc != 0x3DE4CCu) { return; }
    }
    ctx->pc = 0x3DE4CCu;
label_3de4cc:
    // 0x3de4cc: 0x26020890  addiu       $v0, $s0, 0x890
    ctx->pc = 0x3de4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_3de4d0:
    // 0x3de4d0: 0x26060560  addiu       $a2, $s0, 0x560
    ctx->pc = 0x3de4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_3de4d4:
    // 0x3de4d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3de4d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3de4d8:
    // 0x3de4d8: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x3de4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_3de4dc:
    // 0x3de4dc: 0xc0c6250  jal         func_318940
label_3de4e0:
    if (ctx->pc == 0x3DE4E0u) {
        ctx->pc = 0x3DE4E0u;
            // 0x3de4e0: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->pc = 0x3DE4E4u;
        goto label_3de4e4;
    }
    ctx->pc = 0x3DE4DCu;
    SET_GPR_U32(ctx, 31, 0x3DE4E4u);
    ctx->pc = 0x3DE4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE4DCu;
            // 0x3de4e0: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE4E4u; }
        if (ctx->pc != 0x3DE4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE4E4u; }
        if (ctx->pc != 0x3DE4E4u) { return; }
    }
    ctx->pc = 0x3DE4E4u;
label_3de4e4:
    // 0x3de4e4: 0x8e050d9c  lw          $a1, 0xD9C($s0)
    ctx->pc = 0x3de4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_3de4e8:
    // 0x3de4e8: 0x3c023f6d  lui         $v0, 0x3F6D
    ctx->pc = 0x3de4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16237 << 16));
label_3de4ec:
    // 0x3de4ec: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3de4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3de4f0:
    // 0x3de4f0: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x3de4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_3de4f4:
    // 0x3de4f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3de4f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3de4f8:
    // 0x3de4f8: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x3de4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_3de4fc:
    // 0x3de4fc: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x3de4fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_3de500:
    // 0x3de500: 0xae050d9c  sw          $a1, 0xD9C($s0)
    ctx->pc = 0x3de500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 5));
label_3de504:
    // 0x3de504: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3de504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3de508:
    // 0x3de508: 0xae030db8  sw          $v1, 0xDB8($s0)
    ctx->pc = 0x3de508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 3));
label_3de50c:
    // 0x3de50c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3de50cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3de510:
    // 0x3de510: 0xc04cbd8  jal         func_132F60
label_3de514:
    if (ctx->pc == 0x3DE514u) {
        ctx->pc = 0x3DE514u;
            // 0x3de514: 0xae020de4  sw          $v0, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 2));
        ctx->pc = 0x3DE518u;
        goto label_3de518;
    }
    ctx->pc = 0x3DE510u;
    SET_GPR_U32(ctx, 31, 0x3DE518u);
    ctx->pc = 0x3DE514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE510u;
            // 0x3de514: 0xae020de4  sw          $v0, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE518u; }
        if (ctx->pc != 0x3DE518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE518u; }
        if (ctx->pc != 0x3DE518u) { return; }
    }
    ctx->pc = 0x3DE518u;
label_3de518:
    // 0x3de518: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x3de518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
label_3de51c:
    // 0x3de51c: 0x260507e0  addiu       $a1, $s0, 0x7E0
    ctx->pc = 0x3de51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
label_3de520:
    // 0x3de520: 0xc04cca0  jal         func_133280
label_3de524:
    if (ctx->pc == 0x3DE524u) {
        ctx->pc = 0x3DE524u;
            // 0x3de524: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x3DE528u;
        goto label_3de528;
    }
    ctx->pc = 0x3DE520u;
    SET_GPR_U32(ctx, 31, 0x3DE528u);
    ctx->pc = 0x3DE524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE520u;
            // 0x3de524: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE528u; }
        if (ctx->pc != 0x3DE528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE528u; }
        if (ctx->pc != 0x3DE528u) { return; }
    }
    ctx->pc = 0x3DE528u;
label_3de528:
    // 0x3de528: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x3de528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_3de52c:
    // 0x3de52c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3de52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3de530:
    // 0x3de530: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3de530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3de534:
    // 0x3de534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3de534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3de538:
    // 0x3de538: 0xc0bdf9c  jal         func_2F7E70
label_3de53c:
    if (ctx->pc == 0x3DE53Cu) {
        ctx->pc = 0x3DE53Cu;
            // 0x3de53c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x3DE540u;
        goto label_3de540;
    }
    ctx->pc = 0x3DE538u;
    SET_GPR_U32(ctx, 31, 0x3DE540u);
    ctx->pc = 0x3DE53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE538u;
            // 0x3de53c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE540u; }
        if (ctx->pc != 0x3DE540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE540u; }
        if (ctx->pc != 0x3DE540u) { return; }
    }
    ctx->pc = 0x3DE540u;
label_3de540:
    // 0x3de540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3de544:
    // 0x3de544: 0xc07649c  jal         func_1D9270
label_3de548:
    if (ctx->pc == 0x3DE548u) {
        ctx->pc = 0x3DE548u;
            // 0x3de548: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3DE54Cu;
        goto label_3de54c;
    }
    ctx->pc = 0x3DE544u;
    SET_GPR_U32(ctx, 31, 0x3DE54Cu);
    ctx->pc = 0x3DE548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE544u;
            // 0x3de548: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE54Cu; }
        if (ctx->pc != 0x3DE54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE54Cu; }
        if (ctx->pc != 0x3DE54Cu) { return; }
    }
    ctx->pc = 0x3DE54Cu;
label_3de54c:
    // 0x3de54c: 0x8e100d74  lw          $s0, 0xD74($s0)
    ctx->pc = 0x3de54cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_3de550:
    // 0x3de550: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x3de550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_3de554:
    // 0x3de554: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3de554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3de558:
    // 0x3de558: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x3de558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_3de55c:
    // 0x3de55c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3de55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3de560:
    // 0x3de560: 0xc0a545c  jal         func_295170
label_3de564:
    if (ctx->pc == 0x3DE564u) {
        ctx->pc = 0x3DE564u;
            // 0x3de564: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x3DE568u;
        goto label_3de568;
    }
    ctx->pc = 0x3DE560u;
    SET_GPR_U32(ctx, 31, 0x3DE568u);
    ctx->pc = 0x3DE564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE560u;
            // 0x3de564: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE568u; }
        if (ctx->pc != 0x3DE568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE568u; }
        if (ctx->pc != 0x3DE568u) { return; }
    }
    ctx->pc = 0x3DE568u;
label_3de568:
    // 0x3de568: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x3de568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
label_3de56c:
    // 0x3de56c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3de56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3de570:
    // 0x3de570: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3de570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3de574:
    // 0x3de574: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3de574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3de578:
    // 0x3de578: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3de578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3de57c:
    // 0x3de57c: 0xc08bf20  jal         func_22FC80
label_3de580:
    if (ctx->pc == 0x3DE580u) {
        ctx->pc = 0x3DE580u;
            // 0x3de580: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE584u;
        goto label_3de584;
    }
    ctx->pc = 0x3DE57Cu;
    SET_GPR_U32(ctx, 31, 0x3DE584u);
    ctx->pc = 0x3DE580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE57Cu;
            // 0x3de580: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE584u; }
        if (ctx->pc != 0x3DE584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE584u; }
        if (ctx->pc != 0x3DE584u) { return; }
    }
    ctx->pc = 0x3DE584u;
label_3de584:
    // 0x3de584: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3de584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3de588:
    // 0x3de588: 0x10000204  b           . + 4 + (0x204 << 2)
label_3de58c:
    if (ctx->pc == 0x3DE58Cu) {
        ctx->pc = 0x3DE58Cu;
            // 0x3de58c: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x3DE590u;
        goto label_3de590;
    }
    ctx->pc = 0x3DE588u;
    {
        const bool branch_taken_0x3de588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE588u;
            // 0x3de58c: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de588) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DE590u;
label_3de590:
    // 0x3de590: 0xc07731c  jal         func_1DCC70
label_3de594:
    if (ctx->pc == 0x3DE594u) {
        ctx->pc = 0x3DE594u;
            // 0x3de594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE598u;
        goto label_3de598;
    }
    ctx->pc = 0x3DE590u;
    SET_GPR_U32(ctx, 31, 0x3DE598u);
    ctx->pc = 0x3DE594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE590u;
            // 0x3de594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE598u; }
        if (ctx->pc != 0x3DE598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE598u; }
        if (ctx->pc != 0x3DE598u) { return; }
    }
    ctx->pc = 0x3DE598u;
label_3de598:
    // 0x3de598: 0xc62401e0  lwc1        $f4, 0x1E0($s1)
    ctx->pc = 0x3de598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3de59c:
    // 0x3de59c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3de59cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3de5a0:
    // 0x3de5a0: 0x0  nop
    ctx->pc = 0x3de5a0u;
    // NOP
label_3de5a4:
    // 0x3de5a4: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x3de5a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3de5a8:
    // 0x3de5a8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_3de5ac:
    if (ctx->pc == 0x3DE5ACu) {
        ctx->pc = 0x3DE5ACu;
            // 0x3de5ac: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x3DE5B0u;
        goto label_3de5b0;
    }
    ctx->pc = 0x3DE5A8u;
    {
        const bool branch_taken_0x3de5a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DE5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE5A8u;
            // 0x3de5ac: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de5a8) {
            ctx->pc = 0x3DE5E4u;
            goto label_3de5e4;
        }
    }
    ctx->pc = 0x3DE5B0u;
label_3de5b0:
    // 0x3de5b0: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x3de5b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_3de5b4:
    // 0x3de5b4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3de5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3de5b8:
    // 0x3de5b8: 0xc62101e4  lwc1        $f1, 0x1E4($s1)
    ctx->pc = 0x3de5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3de5bc:
    // 0x3de5bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3de5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3de5c0:
    // 0x3de5c0: 0x0  nop
    ctx->pc = 0x3de5c0u;
    // NOP
label_3de5c4:
    // 0x3de5c4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3de5c4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_3de5c8:
    // 0x3de5c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3de5c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3de5cc:
    // 0x3de5cc: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x3de5ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_3de5d0:
    // 0x3de5d0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x3de5d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3de5d4:
    // 0x3de5d4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_3de5d8:
    if (ctx->pc == 0x3DE5D8u) {
        ctx->pc = 0x3DE5D8u;
            // 0x3de5d8: 0xe62001e0  swc1        $f0, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->pc = 0x3DE5DCu;
        goto label_3de5dc;
    }
    ctx->pc = 0x3DE5D4u;
    {
        const bool branch_taken_0x3de5d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DE5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE5D4u;
            // 0x3de5d8: 0xe62001e0  swc1        $f0, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de5d4) {
            ctx->pc = 0x3DE620u;
            goto label_3de620;
        }
    }
    ctx->pc = 0x3DE5DCu;
label_3de5dc:
    // 0x3de5dc: 0x10000010  b           . + 4 + (0x10 << 2)
label_3de5e0:
    if (ctx->pc == 0x3DE5E0u) {
        ctx->pc = 0x3DE5E0u;
            // 0x3de5e0: 0xe62301e0  swc1        $f3, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->pc = 0x3DE5E4u;
        goto label_3de5e4;
    }
    ctx->pc = 0x3DE5DCu;
    {
        const bool branch_taken_0x3de5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE5DCu;
            // 0x3de5e0: 0xe62301e0  swc1        $f3, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de5dc) {
            ctx->pc = 0x3DE620u;
            goto label_3de620;
        }
    }
    ctx->pc = 0x3DE5E4u;
label_3de5e4:
    // 0x3de5e4: 0x46041836  c.le.s      $f3, $f4
    ctx->pc = 0x3de5e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3de5e8:
    // 0x3de5e8: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_3de5ec:
    if (ctx->pc == 0x3DE5ECu) {
        ctx->pc = 0x3DE5ECu;
            // 0x3de5ec: 0x8e2201f4  lw          $v0, 0x1F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
        ctx->pc = 0x3DE5F0u;
        goto label_3de5f0;
    }
    ctx->pc = 0x3DE5E8u;
    {
        const bool branch_taken_0x3de5e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3de5e8) {
            ctx->pc = 0x3DE5ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE5E8u;
            // 0x3de5ec: 0x8e2201f4  lw          $v0, 0x1F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DE624u;
            goto label_3de624;
        }
    }
    ctx->pc = 0x3DE5F0u;
label_3de5f0:
    // 0x3de5f0: 0x46041881  sub.s       $f2, $f3, $f4
    ctx->pc = 0x3de5f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_3de5f4:
    // 0x3de5f4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3de5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3de5f8:
    // 0x3de5f8: 0xc62101e4  lwc1        $f1, 0x1E4($s1)
    ctx->pc = 0x3de5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3de5fc:
    // 0x3de5fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3de5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3de600:
    // 0x3de600: 0x0  nop
    ctx->pc = 0x3de600u;
    // NOP
label_3de604:
    // 0x3de604: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3de604u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_3de608:
    // 0x3de608: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3de608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3de60c:
    // 0x3de60c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x3de60cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_3de610:
    // 0x3de610: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3de610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3de614:
    // 0x3de614: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3de618:
    if (ctx->pc == 0x3DE618u) {
        ctx->pc = 0x3DE618u;
            // 0x3de618: 0xe62001e0  swc1        $f0, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->pc = 0x3DE61Cu;
        goto label_3de61c;
    }
    ctx->pc = 0x3DE614u;
    {
        const bool branch_taken_0x3de614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DE618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE614u;
            // 0x3de618: 0xe62001e0  swc1        $f0, 0x1E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de614) {
            ctx->pc = 0x3DE620u;
            goto label_3de620;
        }
    }
    ctx->pc = 0x3DE61Cu;
label_3de61c:
    // 0x3de61c: 0xe62301e0  swc1        $f3, 0x1E0($s1)
    ctx->pc = 0x3de61cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
label_3de620:
    // 0x3de620: 0x8e2201f4  lw          $v0, 0x1F4($s1)
    ctx->pc = 0x3de620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
label_3de624:
    // 0x3de624: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3de628:
    if (ctx->pc == 0x3DE628u) {
        ctx->pc = 0x3DE628u;
            // 0x3de628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE62Cu;
        goto label_3de62c;
    }
    ctx->pc = 0x3DE624u;
    {
        const bool branch_taken_0x3de624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de624) {
            ctx->pc = 0x3DE628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE624u;
            // 0x3de628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DE648u;
            goto label_3de648;
        }
    }
    ctx->pc = 0x3DE62Cu;
label_3de62c:
    // 0x3de62c: 0xc0f7b74  jal         func_3DEDD0
label_3de630:
    if (ctx->pc == 0x3DE630u) {
        ctx->pc = 0x3DE630u;
            // 0x3de630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE634u;
        goto label_3de634;
    }
    ctx->pc = 0x3DE62Cu;
    SET_GPR_U32(ctx, 31, 0x3DE634u);
    ctx->pc = 0x3DE630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE62Cu;
            // 0x3de630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DEDD0u;
    if (runtime->hasFunction(0x3DEDD0u)) {
        auto targetFn = runtime->lookupFunction(0x3DEDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE634u; }
        if (ctx->pc != 0x3DE634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DEDD0_0x3dedd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE634u; }
        if (ctx->pc != 0x3DE634u) { return; }
    }
    ctx->pc = 0x3DE634u;
label_3de634:
    // 0x3de634: 0x8e2401f4  lw          $a0, 0x1F4($s1)
    ctx->pc = 0x3de634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
label_3de638:
    // 0x3de638: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3de638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de63c:
    // 0x3de63c: 0xc122d2c  jal         func_48B4B0
label_3de640:
    if (ctx->pc == 0x3DE640u) {
        ctx->pc = 0x3DE640u;
            // 0x3de640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE644u;
        goto label_3de644;
    }
    ctx->pc = 0x3DE63Cu;
    SET_GPR_U32(ctx, 31, 0x3DE644u);
    ctx->pc = 0x3DE640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE63Cu;
            // 0x3de640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE644u; }
        if (ctx->pc != 0x3DE644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE644u; }
        if (ctx->pc != 0x3DE644u) { return; }
    }
    ctx->pc = 0x3DE644u;
label_3de644:
    // 0x3de644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3de648:
    // 0x3de648: 0xc0e1224  jal         func_384890
label_3de64c:
    if (ctx->pc == 0x3DE64Cu) {
        ctx->pc = 0x3DE650u;
        goto label_3de650;
    }
    ctx->pc = 0x3DE648u;
    SET_GPR_U32(ctx, 31, 0x3DE650u);
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE650u; }
        if (ctx->pc != 0x3DE650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE650u; }
        if (ctx->pc != 0x3DE650u) { return; }
    }
    ctx->pc = 0x3DE650u;
label_3de650:
    // 0x3de650: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3de650u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de654:
    // 0x3de654: 0xc0e1224  jal         func_384890
label_3de658:
    if (ctx->pc == 0x3DE658u) {
        ctx->pc = 0x3DE658u;
            // 0x3de658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE65Cu;
        goto label_3de65c;
    }
    ctx->pc = 0x3DE654u;
    SET_GPR_U32(ctx, 31, 0x3DE65Cu);
    ctx->pc = 0x3DE658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE654u;
            // 0x3de658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE65Cu; }
        if (ctx->pc != 0x3DE65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE65Cu; }
        if (ctx->pc != 0x3DE65Cu) { return; }
    }
    ctx->pc = 0x3DE65Cu;
label_3de65c:
    // 0x3de65c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3de65cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de660:
    // 0x3de660: 0xc0e1224  jal         func_384890
label_3de664:
    if (ctx->pc == 0x3DE664u) {
        ctx->pc = 0x3DE664u;
            // 0x3de664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE668u;
        goto label_3de668;
    }
    ctx->pc = 0x3DE660u;
    SET_GPR_U32(ctx, 31, 0x3DE668u);
    ctx->pc = 0x3DE664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE660u;
            // 0x3de664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE668u; }
        if (ctx->pc != 0x3DE668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE668u; }
        if (ctx->pc != 0x3DE668u) { return; }
    }
    ctx->pc = 0x3DE668u;
label_3de668:
    // 0x3de668: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x3de668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3de66c:
    // 0x3de66c: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x3de66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3de670:
    // 0x3de670: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x3de670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3de674:
    // 0x3de674: 0xc04f3fc  jal         func_13CFF0
label_3de678:
    if (ctx->pc == 0x3DE678u) {
        ctx->pc = 0x3DE678u;
            // 0x3de678: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3DE67Cu;
        goto label_3de67c;
    }
    ctx->pc = 0x3DE674u;
    SET_GPR_U32(ctx, 31, 0x3DE67Cu);
    ctx->pc = 0x3DE678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE674u;
            // 0x3de678: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE67Cu; }
        if (ctx->pc != 0x3DE67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE67Cu; }
        if (ctx->pc != 0x3DE67Cu) { return; }
    }
    ctx->pc = 0x3DE67Cu;
label_3de67c:
    // 0x3de67c: 0xc0f7b70  jal         func_3DEDC0
label_3de680:
    if (ctx->pc == 0x3DE680u) {
        ctx->pc = 0x3DE680u;
            // 0x3de680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE684u;
        goto label_3de684;
    }
    ctx->pc = 0x3DE67Cu;
    SET_GPR_U32(ctx, 31, 0x3DE684u);
    ctx->pc = 0x3DE680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE67Cu;
            // 0x3de680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DEDC0u;
    if (runtime->hasFunction(0x3DEDC0u)) {
        auto targetFn = runtime->lookupFunction(0x3DEDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE684u; }
        if (ctx->pc != 0x3DE684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DEDC0_0x3dedc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE684u; }
        if (ctx->pc != 0x3DE684u) { return; }
    }
    ctx->pc = 0x3DE684u;
label_3de684:
    // 0x3de684: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3de684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3de688:
    // 0x3de688: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3de688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de68c:
    // 0x3de68c: 0xc04cd80  jal         func_133600
label_3de690:
    if (ctx->pc == 0x3DE690u) {
        ctx->pc = 0x3DE690u;
            // 0x3de690: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE694u;
        goto label_3de694;
    }
    ctx->pc = 0x3DE68Cu;
    SET_GPR_U32(ctx, 31, 0x3DE694u);
    ctx->pc = 0x3DE690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE68Cu;
            // 0x3de690: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE694u; }
        if (ctx->pc != 0x3DE694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE694u; }
        if (ctx->pc != 0x3DE694u) { return; }
    }
    ctx->pc = 0x3DE694u;
label_3de694:
    // 0x3de694: 0xc62201e0  lwc1        $f2, 0x1E0($s1)
    ctx->pc = 0x3de694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3de698:
    // 0x3de698: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3de698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_3de69c:
    // 0x3de69c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3de69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3de6a0:
    // 0x3de6a0: 0x3c03c270  lui         $v1, 0xC270
    ctx->pc = 0x3de6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49776 << 16));
label_3de6a4:
    // 0x3de6a4: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3de6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_3de6a8:
    // 0x3de6a8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3de6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3de6ac:
    // 0x3de6ac: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x3de6acu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
label_3de6b0:
    // 0x3de6b0: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3de6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_3de6b4:
    // 0x3de6b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3de6b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3de6b8:
    // 0x3de6b8: 0x0  nop
    ctx->pc = 0x3de6b8u;
    // NOP
label_3de6bc:
    // 0x3de6bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3de6bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3de6c0:
    // 0x3de6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3de6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3de6c4:
    // 0x3de6c4: 0x0  nop
    ctx->pc = 0x3de6c4u;
    // NOP
label_3de6c8:
    // 0x3de6c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3de6c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3de6cc:
    // 0x3de6cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3de6ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3de6d0:
    // 0x3de6d0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3de6d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3de6d4:
    // 0x3de6d4: 0xc04cdf0  jal         func_1337C0
label_3de6d8:
    if (ctx->pc == 0x3DE6D8u) {
        ctx->pc = 0x3DE6D8u;
            // 0x3de6d8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3DE6DCu;
        goto label_3de6dc;
    }
    ctx->pc = 0x3DE6D4u;
    SET_GPR_U32(ctx, 31, 0x3DE6DCu);
    ctx->pc = 0x3DE6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE6D4u;
            // 0x3de6d8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE6DCu; }
        if (ctx->pc != 0x3DE6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE6DCu; }
        if (ctx->pc != 0x3DE6DCu) { return; }
    }
    ctx->pc = 0x3DE6DCu;
label_3de6dc:
    // 0x3de6dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3de6dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3de6e0:
    // 0x3de6e0: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3de6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
label_3de6e4:
    // 0x3de6e4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3de6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3de6e8:
    // 0x3de6e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3de6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3de6ec:
    // 0x3de6ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3de6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3de6f0:
    // 0x3de6f0: 0xc04ce64  jal         func_133990
label_3de6f4:
    if (ctx->pc == 0x3DE6F4u) {
        ctx->pc = 0x3DE6F4u;
            // 0x3de6f4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3DE6F8u;
        goto label_3de6f8;
    }
    ctx->pc = 0x3DE6F0u;
    SET_GPR_U32(ctx, 31, 0x3DE6F8u);
    ctx->pc = 0x3DE6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE6F0u;
            // 0x3de6f4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE6F8u; }
        if (ctx->pc != 0x3DE6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE6F8u; }
        if (ctx->pc != 0x3DE6F8u) { return; }
    }
    ctx->pc = 0x3DE6F8u;
label_3de6f8:
    // 0x3de6f8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3de6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3de6fc:
    // 0x3de6fc: 0xc04cce4  jal         func_133390
label_3de700:
    if (ctx->pc == 0x3DE700u) {
        ctx->pc = 0x3DE700u;
            // 0x3de700: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3DE704u;
        goto label_3de704;
    }
    ctx->pc = 0x3DE6FCu;
    SET_GPR_U32(ctx, 31, 0x3DE704u);
    ctx->pc = 0x3DE700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE6FCu;
            // 0x3de700: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE704u; }
        if (ctx->pc != 0x3DE704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE704u; }
        if (ctx->pc != 0x3DE704u) { return; }
    }
    ctx->pc = 0x3DE704u;
label_3de704:
    // 0x3de704: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3de704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3de708:
    // 0x3de708: 0xc04c994  jal         func_132650
label_3de70c:
    if (ctx->pc == 0x3DE70Cu) {
        ctx->pc = 0x3DE70Cu;
            // 0x3de70c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3DE710u;
        goto label_3de710;
    }
    ctx->pc = 0x3DE708u;
    SET_GPR_U32(ctx, 31, 0x3DE710u);
    ctx->pc = 0x3DE70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE708u;
            // 0x3de70c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE710u; }
        if (ctx->pc != 0x3DE710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE710u; }
        if (ctx->pc != 0x3DE710u) { return; }
    }
    ctx->pc = 0x3DE710u;
label_3de710:
    // 0x3de710: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3de710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3de714:
    // 0x3de714: 0xc04c74c  jal         func_131D30
label_3de718:
    if (ctx->pc == 0x3DE718u) {
        ctx->pc = 0x3DE718u;
            // 0x3de718: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE71Cu;
        goto label_3de71c;
    }
    ctx->pc = 0x3DE714u;
    SET_GPR_U32(ctx, 31, 0x3DE71Cu);
    ctx->pc = 0x3DE718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE714u;
            // 0x3de718: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE71Cu; }
        if (ctx->pc != 0x3DE71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE71Cu; }
        if (ctx->pc != 0x3DE71Cu) { return; }
    }
    ctx->pc = 0x3DE71Cu;
label_3de71c:
    // 0x3de71c: 0xc0e1130  jal         func_3844C0
label_3de720:
    if (ctx->pc == 0x3DE720u) {
        ctx->pc = 0x3DE720u;
            // 0x3de720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE724u;
        goto label_3de724;
    }
    ctx->pc = 0x3DE71Cu;
    SET_GPR_U32(ctx, 31, 0x3DE724u);
    ctx->pc = 0x3DE720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE71Cu;
            // 0x3de720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3844C0u;
    if (runtime->hasFunction(0x3844C0u)) {
        auto targetFn = runtime->lookupFunction(0x3844C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE724u; }
        if (ctx->pc != 0x3DE724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003844C0_0x3844c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE724u; }
        if (ctx->pc != 0x3DE724u) { return; }
    }
    ctx->pc = 0x3DE724u;
label_3de724:
    // 0x3de724: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3de724u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3de728:
    // 0x3de728: 0xc0c1a0c  jal         func_306830
label_3de72c:
    if (ctx->pc == 0x3DE72Cu) {
        ctx->pc = 0x3DE72Cu;
            // 0x3de72c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE730u;
        goto label_3de730;
    }
    ctx->pc = 0x3DE728u;
    SET_GPR_U32(ctx, 31, 0x3DE730u);
    ctx->pc = 0x3DE72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE728u;
            // 0x3de72c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE730u; }
        if (ctx->pc != 0x3DE730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE730u; }
        if (ctx->pc != 0x3DE730u) { return; }
    }
    ctx->pc = 0x3DE730u;
label_3de730:
    // 0x3de730: 0xc0e1224  jal         func_384890
label_3de734:
    if (ctx->pc == 0x3DE734u) {
        ctx->pc = 0x3DE734u;
            // 0x3de734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE738u;
        goto label_3de738;
    }
    ctx->pc = 0x3DE730u;
    SET_GPR_U32(ctx, 31, 0x3DE738u);
    ctx->pc = 0x3DE734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE730u;
            // 0x3de734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384890u;
    if (runtime->hasFunction(0x384890u)) {
        auto targetFn = runtime->lookupFunction(0x384890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE738u; }
        if (ctx->pc != 0x3DE738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384890_0x384890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE738u; }
        if (ctx->pc != 0x3DE738u) { return; }
    }
    ctx->pc = 0x3DE738u;
label_3de738:
    // 0x3de738: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3de738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de73c:
    // 0x3de73c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3de73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3de740:
    // 0x3de740: 0xc04cc90  jal         func_133240
label_3de744:
    if (ctx->pc == 0x3DE744u) {
        ctx->pc = 0x3DE744u;
            // 0x3de744: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3DE748u;
        goto label_3de748;
    }
    ctx->pc = 0x3DE740u;
    SET_GPR_U32(ctx, 31, 0x3DE748u);
    ctx->pc = 0x3DE744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE740u;
            // 0x3de744: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE748u; }
        if (ctx->pc != 0x3DE748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE748u; }
        if (ctx->pc != 0x3DE748u) { return; }
    }
    ctx->pc = 0x3DE748u;
label_3de748:
    // 0x3de748: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3de748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3de74c:
    // 0x3de74c: 0xc04cc44  jal         func_133110
label_3de750:
    if (ctx->pc == 0x3DE750u) {
        ctx->pc = 0x3DE750u;
            // 0x3de750: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE754u;
        goto label_3de754;
    }
    ctx->pc = 0x3DE74Cu;
    SET_GPR_U32(ctx, 31, 0x3DE754u);
    ctx->pc = 0x3DE750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE74Cu;
            // 0x3de750: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE754u; }
        if (ctx->pc != 0x3DE754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE754u; }
        if (ctx->pc != 0x3DE754u) { return; }
    }
    ctx->pc = 0x3DE754u;
label_3de754:
    // 0x3de754: 0xc0b6d5c  jal         func_2DB570
label_3de758:
    if (ctx->pc == 0x3DE758u) {
        ctx->pc = 0x3DE758u;
            // 0x3de758: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE75Cu;
        goto label_3de75c;
    }
    ctx->pc = 0x3DE754u;
    SET_GPR_U32(ctx, 31, 0x3DE75Cu);
    ctx->pc = 0x3DE758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE754u;
            // 0x3de758: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE75Cu; }
        if (ctx->pc != 0x3DE75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE75Cu; }
        if (ctx->pc != 0x3DE75Cu) { return; }
    }
    ctx->pc = 0x3DE75Cu;
label_3de75c:
    // 0x3de75c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3de75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de760:
    // 0x3de760: 0xc04cc04  jal         func_133010
label_3de764:
    if (ctx->pc == 0x3DE764u) {
        ctx->pc = 0x3DE764u;
            // 0x3de764: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3DE768u;
        goto label_3de768;
    }
    ctx->pc = 0x3DE760u;
    SET_GPR_U32(ctx, 31, 0x3DE768u);
    ctx->pc = 0x3DE764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE760u;
            // 0x3de764: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE768u; }
        if (ctx->pc != 0x3DE768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE768u; }
        if (ctx->pc != 0x3DE768u) { return; }
    }
    ctx->pc = 0x3DE768u;
label_3de768:
    // 0x3de768: 0xc62201e0  lwc1        $f2, 0x1E0($s1)
    ctx->pc = 0x3de768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3de76c:
    // 0x3de76c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3de76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_3de770:
    // 0x3de770: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3de770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3de774:
    // 0x3de774: 0x3c03c270  lui         $v1, 0xC270
    ctx->pc = 0x3de774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49776 << 16));
label_3de778:
    // 0x3de778: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3de778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_3de77c:
    // 0x3de77c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3de77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3de780:
    // 0x3de780: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x3de780u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
label_3de784:
    // 0x3de784: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3de784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_3de788:
    // 0x3de788: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3de788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3de78c:
    // 0x3de78c: 0x0  nop
    ctx->pc = 0x3de78cu;
    // NOP
label_3de790:
    // 0x3de790: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3de790u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3de794:
    // 0x3de794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3de794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3de798:
    // 0x3de798: 0x0  nop
    ctx->pc = 0x3de798u;
    // NOP
label_3de79c:
    // 0x3de79c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3de79cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3de7a0:
    // 0x3de7a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3de7a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3de7a4:
    // 0x3de7a4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3de7a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3de7a8:
    // 0x3de7a8: 0xc04cdf0  jal         func_1337C0
label_3de7ac:
    if (ctx->pc == 0x3DE7ACu) {
        ctx->pc = 0x3DE7ACu;
            // 0x3de7ac: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3DE7B0u;
        goto label_3de7b0;
    }
    ctx->pc = 0x3DE7A8u;
    SET_GPR_U32(ctx, 31, 0x3DE7B0u);
    ctx->pc = 0x3DE7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE7A8u;
            // 0x3de7ac: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE7B0u; }
        if (ctx->pc != 0x3DE7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE7B0u; }
        if (ctx->pc != 0x3DE7B0u) { return; }
    }
    ctx->pc = 0x3DE7B0u;
label_3de7b0:
    // 0x3de7b0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3de7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3de7b4:
    // 0x3de7b4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3de7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3de7b8:
    // 0x3de7b8: 0xc44c9c30  lwc1        $f12, -0x63D0($v0)
    ctx->pc = 0x3de7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3de7bc:
    // 0x3de7bc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3de7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3de7c0:
    // 0x3de7c0: 0xc46d9c34  lwc1        $f13, -0x63CC($v1)
    ctx->pc = 0x3de7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294941748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3de7c4:
    // 0x3de7c4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3de7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3de7c8:
    // 0x3de7c8: 0xc44e9c38  lwc1        $f14, -0x63C8($v0)
    ctx->pc = 0x3de7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3de7cc:
    // 0x3de7cc: 0xc04ce64  jal         func_133990
label_3de7d0:
    if (ctx->pc == 0x3DE7D0u) {
        ctx->pc = 0x3DE7D0u;
            // 0x3de7d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE7D4u;
        goto label_3de7d4;
    }
    ctx->pc = 0x3DE7CCu;
    SET_GPR_U32(ctx, 31, 0x3DE7D4u);
    ctx->pc = 0x3DE7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE7CCu;
            // 0x3de7d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE7D4u; }
        if (ctx->pc != 0x3DE7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE7D4u; }
        if (ctx->pc != 0x3DE7D4u) { return; }
    }
    ctx->pc = 0x3DE7D4u;
label_3de7d4:
    // 0x3de7d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3de7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3de7d8:
    // 0x3de7d8: 0xc04cce4  jal         func_133390
label_3de7dc:
    if (ctx->pc == 0x3DE7DCu) {
        ctx->pc = 0x3DE7DCu;
            // 0x3de7dc: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3DE7E0u;
        goto label_3de7e0;
    }
    ctx->pc = 0x3DE7D8u;
    SET_GPR_U32(ctx, 31, 0x3DE7E0u);
    ctx->pc = 0x3DE7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE7D8u;
            // 0x3de7dc: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE7E0u; }
        if (ctx->pc != 0x3DE7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE7E0u; }
        if (ctx->pc != 0x3DE7E0u) { return; }
    }
    ctx->pc = 0x3DE7E0u;
label_3de7e0:
    // 0x3de7e0: 0xc077264  jal         func_1DC990
label_3de7e4:
    if (ctx->pc == 0x3DE7E4u) {
        ctx->pc = 0x3DE7E4u;
            // 0x3de7e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE7E8u;
        goto label_3de7e8;
    }
    ctx->pc = 0x3DE7E0u;
    SET_GPR_U32(ctx, 31, 0x3DE7E8u);
    ctx->pc = 0x3DE7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE7E0u;
            // 0x3de7e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE7E8u; }
        if (ctx->pc != 0x3DE7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE7E8u; }
        if (ctx->pc != 0x3DE7E8u) { return; }
    }
    ctx->pc = 0x3DE7E8u;
label_3de7e8:
    // 0x3de7e8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3de7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3de7ec:
    // 0x3de7ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3de7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de7f0:
    // 0x3de7f0: 0xc04cc90  jal         func_133240
label_3de7f4:
    if (ctx->pc == 0x3DE7F4u) {
        ctx->pc = 0x3DE7F4u;
            // 0x3de7f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE7F8u;
        goto label_3de7f8;
    }
    ctx->pc = 0x3DE7F0u;
    SET_GPR_U32(ctx, 31, 0x3DE7F8u);
    ctx->pc = 0x3DE7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE7F0u;
            // 0x3de7f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE7F8u; }
        if (ctx->pc != 0x3DE7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE7F8u; }
        if (ctx->pc != 0x3DE7F8u) { return; }
    }
    ctx->pc = 0x3DE7F8u;
label_3de7f8:
    // 0x3de7f8: 0xc0c05c8  jal         func_301720
label_3de7fc:
    if (ctx->pc == 0x3DE7FCu) {
        ctx->pc = 0x3DE7FCu;
            // 0x3de7fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE800u;
        goto label_3de800;
    }
    ctx->pc = 0x3DE7F8u;
    SET_GPR_U32(ctx, 31, 0x3DE800u);
    ctx->pc = 0x3DE7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE7F8u;
            // 0x3de7fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE800u; }
        if (ctx->pc != 0x3DE800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301720_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE800u; }
        if (ctx->pc != 0x3DE800u) { return; }
    }
    ctx->pc = 0x3DE800u;
label_3de800:
    // 0x3de800: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3de800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de804:
    // 0x3de804: 0xc04cc04  jal         func_133010
label_3de808:
    if (ctx->pc == 0x3DE808u) {
        ctx->pc = 0x3DE808u;
            // 0x3de808: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3DE80Cu;
        goto label_3de80c;
    }
    ctx->pc = 0x3DE804u;
    SET_GPR_U32(ctx, 31, 0x3DE80Cu);
    ctx->pc = 0x3DE808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE804u;
            // 0x3de808: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE80Cu; }
        if (ctx->pc != 0x3DE80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE80Cu; }
        if (ctx->pc != 0x3DE80Cu) { return; }
    }
    ctx->pc = 0x3DE80Cu;
label_3de80c:
    // 0x3de80c: 0xc077280  jal         func_1DCA00
label_3de810:
    if (ctx->pc == 0x3DE810u) {
        ctx->pc = 0x3DE810u;
            // 0x3de810: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE814u;
        goto label_3de814;
    }
    ctx->pc = 0x3DE80Cu;
    SET_GPR_U32(ctx, 31, 0x3DE814u);
    ctx->pc = 0x3DE810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE80Cu;
            // 0x3de810: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE814u; }
        if (ctx->pc != 0x3DE814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE814u; }
        if (ctx->pc != 0x3DE814u) { return; }
    }
    ctx->pc = 0x3DE814u;
label_3de814:
    // 0x3de814: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3de814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de818:
    // 0x3de818: 0xc0b6d5c  jal         func_2DB570
label_3de81c:
    if (ctx->pc == 0x3DE81Cu) {
        ctx->pc = 0x3DE81Cu;
            // 0x3de81c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE820u;
        goto label_3de820;
    }
    ctx->pc = 0x3DE818u;
    SET_GPR_U32(ctx, 31, 0x3DE820u);
    ctx->pc = 0x3DE81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE818u;
            // 0x3de81c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE820u; }
        if (ctx->pc != 0x3DE820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE820u; }
        if (ctx->pc != 0x3DE820u) { return; }
    }
    ctx->pc = 0x3DE820u;
label_3de820:
    // 0x3de820: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3de820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3de824:
    // 0x3de824: 0xc075318  jal         func_1D4C60
label_3de828:
    if (ctx->pc == 0x3DE828u) {
        ctx->pc = 0x3DE828u;
            // 0x3de828: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE82Cu;
        goto label_3de82c;
    }
    ctx->pc = 0x3DE824u;
    SET_GPR_U32(ctx, 31, 0x3DE82Cu);
    ctx->pc = 0x3DE828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE824u;
            // 0x3de828: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE82Cu; }
        if (ctx->pc != 0x3DE82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE82Cu; }
        if (ctx->pc != 0x3DE82Cu) { return; }
    }
    ctx->pc = 0x3DE82Cu;
label_3de82c:
    // 0x3de82c: 0xc0b6cec  jal         func_2DB3B0
label_3de830:
    if (ctx->pc == 0x3DE830u) {
        ctx->pc = 0x3DE830u;
            // 0x3de830: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE834u;
        goto label_3de834;
    }
    ctx->pc = 0x3DE82Cu;
    SET_GPR_U32(ctx, 31, 0x3DE834u);
    ctx->pc = 0x3DE830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE82Cu;
            // 0x3de830: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE834u; }
        if (ctx->pc != 0x3DE834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE834u; }
        if (ctx->pc != 0x3DE834u) { return; }
    }
    ctx->pc = 0x3DE834u;
label_3de834:
    // 0x3de834: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3de834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de838:
    // 0x3de838: 0xc077280  jal         func_1DCA00
label_3de83c:
    if (ctx->pc == 0x3DE83Cu) {
        ctx->pc = 0x3DE83Cu;
            // 0x3de83c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE840u;
        goto label_3de840;
    }
    ctx->pc = 0x3DE838u;
    SET_GPR_U32(ctx, 31, 0x3DE840u);
    ctx->pc = 0x3DE83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE838u;
            // 0x3de83c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE840u; }
        if (ctx->pc != 0x3DE840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE840u; }
        if (ctx->pc != 0x3DE840u) { return; }
    }
    ctx->pc = 0x3DE840u;
label_3de840:
    // 0x3de840: 0xc07727c  jal         func_1DC9F0
label_3de844:
    if (ctx->pc == 0x3DE844u) {
        ctx->pc = 0x3DE844u;
            // 0x3de844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE848u;
        goto label_3de848;
    }
    ctx->pc = 0x3DE840u;
    SET_GPR_U32(ctx, 31, 0x3DE848u);
    ctx->pc = 0x3DE844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE840u;
            // 0x3de844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE848u; }
        if (ctx->pc != 0x3DE848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE848u; }
        if (ctx->pc != 0x3DE848u) { return; }
    }
    ctx->pc = 0x3DE848u;
label_3de848:
    // 0x3de848: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3de848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3de84c:
    // 0x3de84c: 0xc0c05e0  jal         func_301780
label_3de850:
    if (ctx->pc == 0x3DE850u) {
        ctx->pc = 0x3DE850u;
            // 0x3de850: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE854u;
        goto label_3de854;
    }
    ctx->pc = 0x3DE84Cu;
    SET_GPR_U32(ctx, 31, 0x3DE854u);
    ctx->pc = 0x3DE850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE84Cu;
            // 0x3de850: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE854u; }
        if (ctx->pc != 0x3DE854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE854u; }
        if (ctx->pc != 0x3DE854u) { return; }
    }
    ctx->pc = 0x3DE854u;
label_3de854:
    // 0x3de854: 0xc077280  jal         func_1DCA00
label_3de858:
    if (ctx->pc == 0x3DE858u) {
        ctx->pc = 0x3DE858u;
            // 0x3de858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE85Cu;
        goto label_3de85c;
    }
    ctx->pc = 0x3DE854u;
    SET_GPR_U32(ctx, 31, 0x3DE85Cu);
    ctx->pc = 0x3DE858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE854u;
            // 0x3de858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE85Cu; }
        if (ctx->pc != 0x3DE85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE85Cu; }
        if (ctx->pc != 0x3DE85Cu) { return; }
    }
    ctx->pc = 0x3DE85Cu;
label_3de85c:
    // 0x3de85c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3de860:
    // 0x3de860: 0xc0e5f68  jal         func_397DA0
label_3de864:
    if (ctx->pc == 0x3DE864u) {
        ctx->pc = 0x3DE864u;
            // 0x3de864: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE868u;
        goto label_3de868;
    }
    ctx->pc = 0x3DE860u;
    SET_GPR_U32(ctx, 31, 0x3DE868u);
    ctx->pc = 0x3DE864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE860u;
            // 0x3de864: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397DA0u;
    if (runtime->hasFunction(0x397DA0u)) {
        auto targetFn = runtime->lookupFunction(0x397DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE868u; }
        if (ctx->pc != 0x3DE868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397DA0_0x397da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE868u; }
        if (ctx->pc != 0x3DE868u) { return; }
    }
    ctx->pc = 0x3DE868u;
label_3de868:
    // 0x3de868: 0xc0efc48  jal         func_3BF120
label_3de86c:
    if (ctx->pc == 0x3DE86Cu) {
        ctx->pc = 0x3DE86Cu;
            // 0x3de86c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE870u;
        goto label_3de870;
    }
    ctx->pc = 0x3DE868u;
    SET_GPR_U32(ctx, 31, 0x3DE870u);
    ctx->pc = 0x3DE86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE868u;
            // 0x3de86c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF120u;
    if (runtime->hasFunction(0x3BF120u)) {
        auto targetFn = runtime->lookupFunction(0x3BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE870u; }
        if (ctx->pc != 0x3DE870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF120_0x3bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE870u; }
        if (ctx->pc != 0x3DE870u) { return; }
    }
    ctx->pc = 0x3DE870u;
label_3de870:
    // 0x3de870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3de870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de874:
    // 0x3de874: 0xc0daef4  jal         func_36BBD0
label_3de878:
    if (ctx->pc == 0x3DE878u) {
        ctx->pc = 0x3DE878u;
            // 0x3de878: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE87Cu;
        goto label_3de87c;
    }
    ctx->pc = 0x3DE874u;
    SET_GPR_U32(ctx, 31, 0x3DE87Cu);
    ctx->pc = 0x3DE878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE874u;
            // 0x3de878: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBD0u;
    if (runtime->hasFunction(0x36BBD0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE87Cu; }
        if (ctx->pc != 0x3DE87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBD0_0x36bbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE87Cu; }
        if (ctx->pc != 0x3DE87Cu) { return; }
    }
    ctx->pc = 0x3DE87Cu;
label_3de87c:
    // 0x3de87c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3de87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3de880:
    // 0x3de880: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3de880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3de884:
    // 0x3de884: 0xc075378  jal         func_1D4DE0
label_3de888:
    if (ctx->pc == 0x3DE888u) {
        ctx->pc = 0x3DE888u;
            // 0x3de888: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE88Cu;
        goto label_3de88c;
    }
    ctx->pc = 0x3DE884u;
    SET_GPR_U32(ctx, 31, 0x3DE88Cu);
    ctx->pc = 0x3DE888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE884u;
            // 0x3de888: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE88Cu; }
        if (ctx->pc != 0x3DE88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE88Cu; }
        if (ctx->pc != 0x3DE88Cu) { return; }
    }
    ctx->pc = 0x3DE88Cu;
label_3de88c:
    // 0x3de88c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3de88cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3de890:
    // 0x3de890: 0xc0daef0  jal         func_36BBC0
label_3de894:
    if (ctx->pc == 0x3DE894u) {
        ctx->pc = 0x3DE894u;
            // 0x3de894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE898u;
        goto label_3de898;
    }
    ctx->pc = 0x3DE890u;
    SET_GPR_U32(ctx, 31, 0x3DE898u);
    ctx->pc = 0x3DE894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE890u;
            // 0x3de894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBC0u;
    if (runtime->hasFunction(0x36BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE898u; }
        if (ctx->pc != 0x3DE898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBC0_0x36bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE898u; }
        if (ctx->pc != 0x3DE898u) { return; }
    }
    ctx->pc = 0x3DE898u;
label_3de898:
    // 0x3de898: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x3de898u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3de89c:
    // 0x3de89c: 0xc0cef78  jal         func_33BDE0
label_3de8a0:
    if (ctx->pc == 0x3DE8A0u) {
        ctx->pc = 0x3DE8A0u;
            // 0x3de8a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE8A4u;
        goto label_3de8a4;
    }
    ctx->pc = 0x3DE89Cu;
    SET_GPR_U32(ctx, 31, 0x3DE8A4u);
    ctx->pc = 0x3DE8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE89Cu;
            // 0x3de8a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BDE0u;
    if (runtime->hasFunction(0x33BDE0u)) {
        auto targetFn = runtime->lookupFunction(0x33BDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE8A4u; }
        if (ctx->pc != 0x3DE8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BDE0_0x33bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE8A4u; }
        if (ctx->pc != 0x3DE8A4u) { return; }
    }
    ctx->pc = 0x3DE8A4u;
label_3de8a4:
    // 0x3de8a4: 0xc0c05dc  jal         func_301770
label_3de8a8:
    if (ctx->pc == 0x3DE8A8u) {
        ctx->pc = 0x3DE8A8u;
            // 0x3de8a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE8ACu;
        goto label_3de8ac;
    }
    ctx->pc = 0x3DE8A4u;
    SET_GPR_U32(ctx, 31, 0x3DE8ACu);
    ctx->pc = 0x3DE8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE8A4u;
            // 0x3de8a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE8ACu; }
        if (ctx->pc != 0x3DE8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE8ACu; }
        if (ctx->pc != 0x3DE8ACu) { return; }
    }
    ctx->pc = 0x3DE8ACu;
label_3de8ac:
    // 0x3de8ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3de8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de8b0:
    // 0x3de8b0: 0xc0daeec  jal         func_36BBB0
label_3de8b4:
    if (ctx->pc == 0x3DE8B4u) {
        ctx->pc = 0x3DE8B4u;
            // 0x3de8b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE8B8u;
        goto label_3de8b8;
    }
    ctx->pc = 0x3DE8B0u;
    SET_GPR_U32(ctx, 31, 0x3DE8B8u);
    ctx->pc = 0x3DE8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE8B0u;
            // 0x3de8b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBB0u;
    if (runtime->hasFunction(0x36BBB0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE8B8u; }
        if (ctx->pc != 0x3DE8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBB0_0x36bbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE8B8u; }
        if (ctx->pc != 0x3DE8B8u) { return; }
    }
    ctx->pc = 0x3DE8B8u;
label_3de8b8:
    // 0x3de8b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3de8b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3de8bc:
    // 0x3de8bc: 0xc0daef0  jal         func_36BBC0
label_3de8c0:
    if (ctx->pc == 0x3DE8C0u) {
        ctx->pc = 0x3DE8C0u;
            // 0x3de8c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE8C4u;
        goto label_3de8c4;
    }
    ctx->pc = 0x3DE8BCu;
    SET_GPR_U32(ctx, 31, 0x3DE8C4u);
    ctx->pc = 0x3DE8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE8BCu;
            // 0x3de8c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBC0u;
    if (runtime->hasFunction(0x36BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE8C4u; }
        if (ctx->pc != 0x3DE8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBC0_0x36bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE8C4u; }
        if (ctx->pc != 0x3DE8C4u) { return; }
    }
    ctx->pc = 0x3DE8C4u;
label_3de8c4:
    // 0x3de8c4: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x3de8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_3de8c8:
    // 0x3de8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3de8cc:
    // 0x3de8cc: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x3de8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_3de8d0:
    // 0x3de8d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3de8d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3de8d4:
    // 0x3de8d4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3de8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3de8d8:
    // 0x3de8d8: 0xc0daee8  jal         func_36BBA0
label_3de8dc:
    if (ctx->pc == 0x3DE8DCu) {
        ctx->pc = 0x3DE8DCu;
            // 0x3de8dc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3DE8E0u;
        goto label_3de8e0;
    }
    ctx->pc = 0x3DE8D8u;
    SET_GPR_U32(ctx, 31, 0x3DE8E0u);
    ctx->pc = 0x3DE8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE8D8u;
            // 0x3de8dc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBA0u;
    if (runtime->hasFunction(0x36BBA0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE8E0u; }
        if (ctx->pc != 0x3DE8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBA0_0x36bba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE8E0u; }
        if (ctx->pc != 0x3DE8E0u) { return; }
    }
    ctx->pc = 0x3DE8E0u;
label_3de8e0:
    // 0x3de8e0: 0xc0c05dc  jal         func_301770
label_3de8e4:
    if (ctx->pc == 0x3DE8E4u) {
        ctx->pc = 0x3DE8E4u;
            // 0x3de8e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE8E8u;
        goto label_3de8e8;
    }
    ctx->pc = 0x3DE8E0u;
    SET_GPR_U32(ctx, 31, 0x3DE8E8u);
    ctx->pc = 0x3DE8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE8E0u;
            // 0x3de8e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE8E8u; }
        if (ctx->pc != 0x3DE8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE8E8u; }
        if (ctx->pc != 0x3DE8E8u) { return; }
    }
    ctx->pc = 0x3DE8E8u;
label_3de8e8:
    // 0x3de8e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3de8e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de8ec:
    // 0x3de8ec: 0xc077280  jal         func_1DCA00
label_3de8f0:
    if (ctx->pc == 0x3DE8F0u) {
        ctx->pc = 0x3DE8F0u;
            // 0x3de8f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE8F4u;
        goto label_3de8f4;
    }
    ctx->pc = 0x3DE8ECu;
    SET_GPR_U32(ctx, 31, 0x3DE8F4u);
    ctx->pc = 0x3DE8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE8ECu;
            // 0x3de8f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE8F4u; }
        if (ctx->pc != 0x3DE8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE8F4u; }
        if (ctx->pc != 0x3DE8F4u) { return; }
    }
    ctx->pc = 0x3DE8F4u;
label_3de8f4:
    // 0x3de8f4: 0xc07727c  jal         func_1DC9F0
label_3de8f8:
    if (ctx->pc == 0x3DE8F8u) {
        ctx->pc = 0x3DE8F8u;
            // 0x3de8f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE8FCu;
        goto label_3de8fc;
    }
    ctx->pc = 0x3DE8F4u;
    SET_GPR_U32(ctx, 31, 0x3DE8FCu);
    ctx->pc = 0x3DE8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE8F4u;
            // 0x3de8f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE8FCu; }
        if (ctx->pc != 0x3DE8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE8FCu; }
        if (ctx->pc != 0x3DE8FCu) { return; }
    }
    ctx->pc = 0x3DE8FCu;
label_3de8fc:
    // 0x3de8fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3de8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de900:
    // 0x3de900: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x3de900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_3de904:
    // 0x3de904: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x3de904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_3de908:
    // 0x3de908: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3de908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3de90c:
    // 0x3de90c: 0xc0c05d4  jal         func_301750
label_3de910:
    if (ctx->pc == 0x3DE910u) {
        ctx->pc = 0x3DE910u;
            // 0x3de910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE914u;
        goto label_3de914;
    }
    ctx->pc = 0x3DE90Cu;
    SET_GPR_U32(ctx, 31, 0x3DE914u);
    ctx->pc = 0x3DE910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE90Cu;
            // 0x3de910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301750u;
    if (runtime->hasFunction(0x301750u)) {
        auto targetFn = runtime->lookupFunction(0x301750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE914u; }
        if (ctx->pc != 0x3DE914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301750_0x301750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE914u; }
        if (ctx->pc != 0x3DE914u) { return; }
    }
    ctx->pc = 0x3DE914u;
label_3de914:
    // 0x3de914: 0xc077330  jal         func_1DCCC0
label_3de918:
    if (ctx->pc == 0x3DE918u) {
        ctx->pc = 0x3DE918u;
            // 0x3de918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE91Cu;
        goto label_3de91c;
    }
    ctx->pc = 0x3DE914u;
    SET_GPR_U32(ctx, 31, 0x3DE91Cu);
    ctx->pc = 0x3DE918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE914u;
            // 0x3de918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE91Cu; }
        if (ctx->pc != 0x3DE91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE91Cu; }
        if (ctx->pc != 0x3DE91Cu) { return; }
    }
    ctx->pc = 0x3DE91Cu;
label_3de91c:
    // 0x3de91c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3de920:
    if (ctx->pc == 0x3DE920u) {
        ctx->pc = 0x3DE924u;
        goto label_3de924;
    }
    ctx->pc = 0x3DE91Cu;
    {
        const bool branch_taken_0x3de91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3de91c) {
            ctx->pc = 0x3DE934u;
            goto label_3de934;
        }
    }
    ctx->pc = 0x3DE924u;
label_3de924:
    // 0x3de924: 0xc07732c  jal         func_1DCCB0
label_3de928:
    if (ctx->pc == 0x3DE928u) {
        ctx->pc = 0x3DE928u;
            // 0x3de928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE92Cu;
        goto label_3de92c;
    }
    ctx->pc = 0x3DE924u;
    SET_GPR_U32(ctx, 31, 0x3DE92Cu);
    ctx->pc = 0x3DE928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE924u;
            // 0x3de928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE92Cu; }
        if (ctx->pc != 0x3DE92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE92Cu; }
        if (ctx->pc != 0x3DE92Cu) { return; }
    }
    ctx->pc = 0x3DE92Cu;
label_3de92c:
    // 0x3de92c: 0x1040011b  beqz        $v0, . + 4 + (0x11B << 2)
label_3de930:
    if (ctx->pc == 0x3DE930u) {
        ctx->pc = 0x3DE934u;
        goto label_3de934;
    }
    ctx->pc = 0x3DE92Cu;
    {
        const bool branch_taken_0x3de92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de92c) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DE934u;
label_3de934:
    // 0x3de934: 0xc0775b8  jal         func_1DD6E0
label_3de938:
    if (ctx->pc == 0x3DE938u) {
        ctx->pc = 0x3DE93Cu;
        goto label_3de93c;
    }
    ctx->pc = 0x3DE934u;
    SET_GPR_U32(ctx, 31, 0x3DE93Cu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE93Cu; }
        if (ctx->pc != 0x3DE93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE93Cu; }
        if (ctx->pc != 0x3DE93Cu) { return; }
    }
    ctx->pc = 0x3DE93Cu;
label_3de93c:
    // 0x3de93c: 0xc0775b4  jal         func_1DD6D0
label_3de940:
    if (ctx->pc == 0x3DE940u) {
        ctx->pc = 0x3DE940u;
            // 0x3de940: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3DE944u;
        goto label_3de944;
    }
    ctx->pc = 0x3DE93Cu;
    SET_GPR_U32(ctx, 31, 0x3DE944u);
    ctx->pc = 0x3DE940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE93Cu;
            // 0x3de940: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE944u; }
        if (ctx->pc != 0x3DE944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE944u; }
        if (ctx->pc != 0x3DE944u) { return; }
    }
    ctx->pc = 0x3DE944u;
label_3de944:
    // 0x3de944: 0xc62201f0  lwc1        $f2, 0x1F0($s1)
    ctx->pc = 0x3de944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3de948:
    // 0x3de948: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3de948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_3de94c:
    // 0x3de94c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3de94cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3de950:
    // 0x3de950: 0x0  nop
    ctx->pc = 0x3de950u;
    // NOP
label_3de954:
    // 0x3de954: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3de954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3de958:
    // 0x3de958: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3de958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3de95c:
    // 0x3de95c: 0x4501010f  bc1t        . + 4 + (0x10F << 2)
label_3de960:
    if (ctx->pc == 0x3DE960u) {
        ctx->pc = 0x3DE960u;
            // 0x3de960: 0xe62001f0  swc1        $f0, 0x1F0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 496), bits); }
        ctx->pc = 0x3DE964u;
        goto label_3de964;
    }
    ctx->pc = 0x3DE95Cu;
    {
        const bool branch_taken_0x3de95c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DE960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE95Cu;
            // 0x3de960: 0xe62001f0  swc1        $f0, 0x1F0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 496), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de95c) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DE964u;
label_3de964:
    // 0x3de964: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3de964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3de968:
    // 0x3de968: 0xc07732c  jal         func_1DCCB0
label_3de96c:
    if (ctx->pc == 0x3DE96Cu) {
        ctx->pc = 0x3DE96Cu;
            // 0x3de96c: 0xae2001f0  sw          $zero, 0x1F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
        ctx->pc = 0x3DE970u;
        goto label_3de970;
    }
    ctx->pc = 0x3DE968u;
    SET_GPR_U32(ctx, 31, 0x3DE970u);
    ctx->pc = 0x3DE96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE968u;
            // 0x3de96c: 0xae2001f0  sw          $zero, 0x1F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE970u; }
        if (ctx->pc != 0x3DE970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE970u; }
        if (ctx->pc != 0x3DE970u) { return; }
    }
    ctx->pc = 0x3DE970u;
label_3de970:
    // 0x3de970: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3de974:
    if (ctx->pc == 0x3DE974u) {
        ctx->pc = 0x3DE978u;
        goto label_3de978;
    }
    ctx->pc = 0x3DE970u;
    {
        const bool branch_taken_0x3de970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de970) {
            ctx->pc = 0x3DE9A0u;
            goto label_3de9a0;
        }
    }
    ctx->pc = 0x3DE978u;
label_3de978:
    // 0x3de978: 0xc077320  jal         func_1DCC80
label_3de97c:
    if (ctx->pc == 0x3DE97Cu) {
        ctx->pc = 0x3DE97Cu;
            // 0x3de97c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE980u;
        goto label_3de980;
    }
    ctx->pc = 0x3DE978u;
    SET_GPR_U32(ctx, 31, 0x3DE980u);
    ctx->pc = 0x3DE97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE978u;
            // 0x3de97c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE980u; }
        if (ctx->pc != 0x3DE980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE980u; }
        if (ctx->pc != 0x3DE980u) { return; }
    }
    ctx->pc = 0x3DE980u;
label_3de980:
    // 0x3de980: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3de980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de984:
    // 0x3de984: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3de984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3de988:
    // 0x3de988: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x3de988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_3de98c:
    // 0x3de98c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3de98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3de990:
    // 0x3de990: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3de990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3de994:
    // 0x3de994: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x3de994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3de998:
    // 0x3de998: 0xc077554  jal         func_1DD550
label_3de99c:
    if (ctx->pc == 0x3DE99Cu) {
        ctx->pc = 0x3DE99Cu;
            // 0x3de99c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE9A0u;
        goto label_3de9a0;
    }
    ctx->pc = 0x3DE998u;
    SET_GPR_U32(ctx, 31, 0x3DE9A0u);
    ctx->pc = 0x3DE99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE998u;
            // 0x3de99c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD550u;
    if (runtime->hasFunction(0x1DD550u)) {
        auto targetFn = runtime->lookupFunction(0x1DD550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE9A0u; }
        if (ctx->pc != 0x3DE9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD550_0x1dd550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE9A0u; }
        if (ctx->pc != 0x3DE9A0u) { return; }
    }
    ctx->pc = 0x3DE9A0u;
label_3de9a0:
    // 0x3de9a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3de9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3de9a4:
    // 0x3de9a4: 0xc0770e4  jal         func_1DC390
label_3de9a8:
    if (ctx->pc == 0x3DE9A8u) {
        ctx->pc = 0x3DE9A8u;
            // 0x3de9a8: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x3DE9ACu;
        goto label_3de9ac;
    }
    ctx->pc = 0x3DE9A4u;
    SET_GPR_U32(ctx, 31, 0x3DE9ACu);
    ctx->pc = 0x3DE9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE9A4u;
            // 0x3de9a8: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE9ACu; }
        if (ctx->pc != 0x3DE9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE9ACu; }
        if (ctx->pc != 0x3DE9ACu) { return; }
    }
    ctx->pc = 0x3DE9ACu;
label_3de9ac:
    // 0x3de9ac: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3de9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3de9b0:
    // 0x3de9b0: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_3de9b4:
    if (ctx->pc == 0x3DE9B4u) {
        ctx->pc = 0x3DE9B4u;
            // 0x3de9b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE9B8u;
        goto label_3de9b8;
    }
    ctx->pc = 0x3DE9B0u;
    {
        const bool branch_taken_0x3de9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3de9b0) {
            ctx->pc = 0x3DE9B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE9B0u;
            // 0x3de9b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DE9C0u;
            goto label_3de9c0;
        }
    }
    ctx->pc = 0x3DE9B8u;
label_3de9b8:
    // 0x3de9b8: 0x10000011  b           . + 4 + (0x11 << 2)
label_3de9bc:
    if (ctx->pc == 0x3DE9BCu) {
        ctx->pc = 0x3DE9BCu;
            // 0x3de9bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DE9C0u;
        goto label_3de9c0;
    }
    ctx->pc = 0x3DE9B8u;
    {
        const bool branch_taken_0x3de9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE9B8u;
            // 0x3de9bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de9b8) {
            ctx->pc = 0x3DEA00u;
            goto label_3dea00;
        }
    }
    ctx->pc = 0x3DE9C0u;
label_3de9c0:
    // 0x3de9c0: 0xc077324  jal         func_1DCC90
label_3de9c4:
    if (ctx->pc == 0x3DE9C4u) {
        ctx->pc = 0x3DE9C8u;
        goto label_3de9c8;
    }
    ctx->pc = 0x3DE9C0u;
    SET_GPR_U32(ctx, 31, 0x3DE9C8u);
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE9C8u; }
        if (ctx->pc != 0x3DE9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE9C8u; }
        if (ctx->pc != 0x3DE9C8u) { return; }
    }
    ctx->pc = 0x3DE9C8u;
label_3de9c8:
    // 0x3de9c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3de9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3de9cc:
    // 0x3de9cc: 0xc077258  jal         func_1DC960
label_3de9d0:
    if (ctx->pc == 0x3DE9D0u) {
        ctx->pc = 0x3DE9D0u;
            // 0x3de9d0: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3DE9D4u;
        goto label_3de9d4;
    }
    ctx->pc = 0x3DE9CCu;
    SET_GPR_U32(ctx, 31, 0x3DE9D4u);
    ctx->pc = 0x3DE9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE9CCu;
            // 0x3de9d0: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE9D4u; }
        if (ctx->pc != 0x3DE9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE9D4u; }
        if (ctx->pc != 0x3DE9D4u) { return; }
    }
    ctx->pc = 0x3DE9D4u;
label_3de9d4:
    // 0x3de9d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3de9d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de9d8:
    // 0x3de9d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3de9dc:
    // 0x3de9dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3de9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3de9e0:
    // 0x3de9e0: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x3de9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3de9e4:
    // 0x3de9e4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3de9e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3de9e8:
    // 0x3de9e8: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x3de9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_3de9ec:
    // 0x3de9ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3de9ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3de9f0:
    // 0x3de9f0: 0xc0bb404  jal         func_2ED010
label_3de9f4:
    if (ctx->pc == 0x3DE9F4u) {
        ctx->pc = 0x3DE9F4u;
            // 0x3de9f4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3DE9F8u;
        goto label_3de9f8;
    }
    ctx->pc = 0x3DE9F0u;
    SET_GPR_U32(ctx, 31, 0x3DE9F8u);
    ctx->pc = 0x3DE9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DE9F0u;
            // 0x3de9f4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE9F8u; }
        if (ctx->pc != 0x3DE9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DE9F8u; }
        if (ctx->pc != 0x3DE9F8u) { return; }
    }
    ctx->pc = 0x3DE9F8u;
label_3de9f8:
    // 0x3de9f8: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_3de9fc:
    if (ctx->pc == 0x3DE9FCu) {
        ctx->pc = 0x3DEA00u;
        goto label_3dea00;
    }
    ctx->pc = 0x3DE9F8u;
    {
        const bool branch_taken_0x3de9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de9f8) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DEA00u;
label_3dea00:
    // 0x3dea00: 0xc077324  jal         func_1DCC90
label_3dea04:
    if (ctx->pc == 0x3DEA04u) {
        ctx->pc = 0x3DEA08u;
        goto label_3dea08;
    }
    ctx->pc = 0x3DEA00u;
    SET_GPR_U32(ctx, 31, 0x3DEA08u);
    ctx->pc = 0x1DCC90u;
    if (runtime->hasFunction(0x1DCC90u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEA08u; }
        if (ctx->pc != 0x3DEA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC90_0x1dcc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEA08u; }
        if (ctx->pc != 0x3DEA08u) { return; }
    }
    ctx->pc = 0x3DEA08u;
label_3dea08:
    // 0x3dea08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dea08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dea0c:
    // 0x3dea0c: 0xc077258  jal         func_1DC960
label_3dea10:
    if (ctx->pc == 0x3DEA10u) {
        ctx->pc = 0x3DEA10u;
            // 0x3dea10: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3DEA14u;
        goto label_3dea14;
    }
    ctx->pc = 0x3DEA0Cu;
    SET_GPR_U32(ctx, 31, 0x3DEA14u);
    ctx->pc = 0x3DEA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEA0Cu;
            // 0x3dea10: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC960u;
    if (runtime->hasFunction(0x1DC960u)) {
        auto targetFn = runtime->lookupFunction(0x1DC960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEA14u; }
        if (ctx->pc != 0x3DEA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC960_0x1dc960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEA14u; }
        if (ctx->pc != 0x3DEA14u) { return; }
    }
    ctx->pc = 0x3DEA14u;
label_3dea14:
    // 0x3dea14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3dea14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dea18:
    // 0x3dea18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dea18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dea1c:
    // 0x3dea1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3dea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3dea20:
    // 0x3dea20: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x3dea20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3dea24:
    // 0x3dea24: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3dea24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3dea28:
    // 0x3dea28: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x3dea28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_3dea2c:
    // 0x3dea2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3dea2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dea30:
    // 0x3dea30: 0xc0bb404  jal         func_2ED010
label_3dea34:
    if (ctx->pc == 0x3DEA34u) {
        ctx->pc = 0x3DEA34u;
            // 0x3dea34: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3DEA38u;
        goto label_3dea38;
    }
    ctx->pc = 0x3DEA30u;
    SET_GPR_U32(ctx, 31, 0x3DEA38u);
    ctx->pc = 0x3DEA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEA30u;
            // 0x3dea34: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEA38u; }
        if (ctx->pc != 0x3DEA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEA38u; }
        if (ctx->pc != 0x3DEA38u) { return; }
    }
    ctx->pc = 0x3DEA38u;
label_3dea38:
    // 0x3dea38: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_3dea3c:
    if (ctx->pc == 0x3DEA3Cu) {
        ctx->pc = 0x3DEA40u;
        goto label_3dea40;
    }
    ctx->pc = 0x3DEA38u;
    {
        const bool branch_taken_0x3dea38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dea38) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DEA40u;
label_3dea40:
    // 0x3dea40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3dea40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3dea44:
    // 0x3dea44: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x3dea44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3dea48:
    // 0x3dea48: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x3dea48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_3dea4c:
    // 0x3dea4c: 0x269300c0  addiu       $s3, $s4, 0xC0
    ctx->pc = 0x3dea4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
label_3dea50:
    // 0x3dea50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3dea50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dea54:
    // 0x3dea54: 0x262601d0  addiu       $a2, $s1, 0x1D0
    ctx->pc = 0x3dea54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_3dea58:
    // 0x3dea58: 0x26270080  addiu       $a3, $s1, 0x80
    ctx->pc = 0x3dea58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_3dea5c:
    // 0x3dea5c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x3dea5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3dea60:
    // 0x3dea60: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3dea60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_3dea64:
    // 0x3dea64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3dea64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dea68:
    // 0x3dea68: 0xc0b838c  jal         func_2E0E30
label_3dea6c:
    if (ctx->pc == 0x3DEA6Cu) {
        ctx->pc = 0x3DEA6Cu;
            // 0x3dea6c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DEA70u;
        goto label_3dea70;
    }
    ctx->pc = 0x3DEA68u;
    SET_GPR_U32(ctx, 31, 0x3DEA70u);
    ctx->pc = 0x3DEA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEA68u;
            // 0x3dea6c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E30u;
    if (runtime->hasFunction(0x2E0E30u)) {
        auto targetFn = runtime->lookupFunction(0x2E0E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEA70u; }
        if (ctx->pc != 0x3DEA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0E30_0x2e0e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEA70u; }
        if (ctx->pc != 0x3DEA70u) { return; }
    }
    ctx->pc = 0x3DEA70u;
label_3dea70:
    // 0x3dea70: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x3dea70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dea74:
    // 0x3dea74: 0x26720010  addiu       $s2, $s3, 0x10
    ctx->pc = 0x3dea74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3dea78:
    // 0x3dea78: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x3dea78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3dea7c:
    // 0x3dea7c: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x3dea7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_3dea80:
    // 0x3dea80: 0xc66c0014  lwc1        $f12, 0x14($s3)
    ctx->pc = 0x3dea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3dea84:
    // 0x3dea84: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x3dea84u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3dea88:
    // 0x3dea88: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x3dea88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_3dea8c:
    // 0x3dea8c: 0x46000344  c1          0x344
    ctx->pc = 0x3dea8cu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_3dea90:
    // 0x3dea90: 0x0  nop
    ctx->pc = 0x3dea90u;
    // NOP
label_3dea94:
    // 0x3dea94: 0x0  nop
    ctx->pc = 0x3dea94u;
    // NOP
label_3dea98:
    // 0x3dea98: 0xc04780a  jal         func_11E028
label_3dea9c:
    if (ctx->pc == 0x3DEA9Cu) {
        ctx->pc = 0x3DEAA0u;
        goto label_3deaa0;
    }
    ctx->pc = 0x3DEA98u;
    SET_GPR_U32(ctx, 31, 0x3DEAA0u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEAA0u; }
        if (ctx->pc != 0x3DEAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEAA0u; }
        if (ctx->pc != 0x3DEAA0u) { return; }
    }
    ctx->pc = 0x3DEAA0u;
label_3deaa0:
    // 0x3deaa0: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3deaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_3deaa4:
    // 0x3deaa4: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x3deaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_3deaa8:
    // 0x3deaa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3deaa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3deaac:
    // 0x3deaac: 0x0  nop
    ctx->pc = 0x3deaacu;
    // NOP
label_3deab0:
    // 0x3deab0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3deab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3deab4:
    // 0x3deab4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3deab4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3deab8:
    // 0x3deab8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3deab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3deabc:
    // 0x3deabc: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x3deabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3deac0:
    // 0x3deac0: 0xc64d0008  lwc1        $f13, 0x8($s2)
    ctx->pc = 0x3deac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3deac4:
    // 0x3deac4: 0xc04780a  jal         func_11E028
label_3deac8:
    if (ctx->pc == 0x3DEAC8u) {
        ctx->pc = 0x3DEAC8u;
            // 0x3deac8: 0x29823  negu        $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = 0x3DEACCu;
        goto label_3deacc;
    }
    ctx->pc = 0x3DEAC4u;
    SET_GPR_U32(ctx, 31, 0x3DEACCu);
    ctx->pc = 0x3DEAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEAC4u;
            // 0x3deac8: 0x29823  negu        $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEACCu; }
        if (ctx->pc != 0x3DEACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEACCu; }
        if (ctx->pc != 0x3DEACCu) { return; }
    }
    ctx->pc = 0x3DEACCu;
label_3deacc:
    // 0x3deacc: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3deaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_3dead0:
    // 0x3dead0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3dead0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dead4:
    // 0x3dead4: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x3dead4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_3dead8:
    // 0x3dead8: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x3dead8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_3deadc:
    // 0x3deadc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3deadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3deae0:
    // 0x3deae0: 0x0  nop
    ctx->pc = 0x3deae0u;
    // NOP
label_3deae4:
    // 0x3deae4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3deae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3deae8:
    // 0x3deae8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3deae8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3deaec:
    // 0x3deaec: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3deaecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3deaf0:
    // 0x3deaf0: 0xc04ca18  jal         func_132860
label_3deaf4:
    if (ctx->pc == 0x3DEAF4u) {
        ctx->pc = 0x3DEAF4u;
            // 0x3deaf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DEAF8u;
        goto label_3deaf8;
    }
    ctx->pc = 0x3DEAF0u;
    SET_GPR_U32(ctx, 31, 0x3DEAF8u);
    ctx->pc = 0x3DEAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEAF0u;
            // 0x3deaf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEAF8u; }
        if (ctx->pc != 0x3DEAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEAF8u; }
        if (ctx->pc != 0x3DEAF8u) { return; }
    }
    ctx->pc = 0x3DEAF8u;
label_3deaf8:
    // 0x3deaf8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x3deaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_3deafc:
    // 0x3deafc: 0xc04c74c  jal         func_131D30
label_3deb00:
    if (ctx->pc == 0x3DEB00u) {
        ctx->pc = 0x3DEB00u;
            // 0x3deb00: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x3DEB04u;
        goto label_3deb04;
    }
    ctx->pc = 0x3DEAFCu;
    SET_GPR_U32(ctx, 31, 0x3DEB04u);
    ctx->pc = 0x3DEB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEAFCu;
            // 0x3deb00: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEB04u; }
        if (ctx->pc != 0x3DEB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEB04u; }
        if (ctx->pc != 0x3DEB04u) { return; }
    }
    ctx->pc = 0x3DEB04u;
label_3deb04:
    // 0x3deb04: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x3deb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_3deb08:
    // 0x3deb08: 0xc04c74c  jal         func_131D30
label_3deb0c:
    if (ctx->pc == 0x3DEB0Cu) {
        ctx->pc = 0x3DEB0Cu;
            // 0x3deb0c: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x3DEB10u;
        goto label_3deb10;
    }
    ctx->pc = 0x3DEB08u;
    SET_GPR_U32(ctx, 31, 0x3DEB10u);
    ctx->pc = 0x3DEB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEB08u;
            // 0x3deb0c: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEB10u; }
        if (ctx->pc != 0x3DEB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEB10u; }
        if (ctx->pc != 0x3DEB10u) { return; }
    }
    ctx->pc = 0x3DEB10u;
label_3deb10:
    // 0x3deb10: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x3deb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_3deb14:
    // 0x3deb14: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3deb14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3deb18:
    // 0x3deb18: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x3deb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
label_3deb1c:
    // 0x3deb1c: 0x8e2401c8  lw          $a0, 0x1C8($s1)
    ctx->pc = 0x3deb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_3deb20:
    // 0x3deb20: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3deb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3deb24:
    // 0x3deb24: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x3deb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3deb28:
    // 0x3deb28: 0xe6800120  swc1        $f0, 0x120($s4)
    ctx->pc = 0x3deb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 288), bits); }
label_3deb2c:
    // 0x3deb2c: 0x1000009b  b           . + 4 + (0x9B << 2)
label_3deb30:
    if (ctx->pc == 0x3DEB30u) {
        ctx->pc = 0x3DEB30u;
            // 0x3deb30: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x3DEB34u;
        goto label_3deb34;
    }
    ctx->pc = 0x3DEB2Cu;
    {
        const bool branch_taken_0x3deb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEB2Cu;
            // 0x3deb30: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deb2c) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DEB34u;
label_3deb34:
    // 0x3deb34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3deb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3deb38:
    // 0x3deb38: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x3deb38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3deb3c:
    // 0x3deb3c: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x3deb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3deb40:
    // 0x3deb40: 0xc620015c  lwc1        $f0, 0x15C($s1)
    ctx->pc = 0x3deb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3deb44:
    // 0x3deb44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3deb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3deb48:
    // 0x3deb48: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3deb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3deb4c:
    // 0x3deb4c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x3deb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_3deb50:
    // 0x3deb50: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3deb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3deb54:
    // 0x3deb54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3deb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3deb58:
    // 0x3deb58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3deb58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3deb5c:
    // 0x3deb5c: 0xc0d87e0  jal         func_361F80
label_3deb60:
    if (ctx->pc == 0x3DEB60u) {
        ctx->pc = 0x3DEB60u;
            // 0x3deb60: 0xe620015c  swc1        $f0, 0x15C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 348), bits); }
        ctx->pc = 0x3DEB64u;
        goto label_3deb64;
    }
    ctx->pc = 0x3DEB5Cu;
    SET_GPR_U32(ctx, 31, 0x3DEB64u);
    ctx->pc = 0x3DEB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEB5Cu;
            // 0x3deb60: 0xe620015c  swc1        $f0, 0x15C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 348), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x361F80u;
    if (runtime->hasFunction(0x361F80u)) {
        auto targetFn = runtime->lookupFunction(0x361F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEB64u; }
        if (ctx->pc != 0x3DEB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361F80_0x361f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEB64u; }
        if (ctx->pc != 0x3DEB64u) { return; }
    }
    ctx->pc = 0x3DEB64u;
label_3deb64:
    // 0x3deb64: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3deb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3deb68:
    // 0x3deb68: 0xc04cc04  jal         func_133010
label_3deb6c:
    if (ctx->pc == 0x3DEB6Cu) {
        ctx->pc = 0x3DEB6Cu;
            // 0x3deb6c: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x3DEB70u;
        goto label_3deb70;
    }
    ctx->pc = 0x3DEB68u;
    SET_GPR_U32(ctx, 31, 0x3DEB70u);
    ctx->pc = 0x3DEB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEB68u;
            // 0x3deb6c: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEB70u; }
        if (ctx->pc != 0x3DEB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEB70u; }
        if (ctx->pc != 0x3DEB70u) { return; }
    }
    ctx->pc = 0x3DEB70u;
label_3deb70:
    // 0x3deb70: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3deb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
label_3deb74:
    // 0x3deb74: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3deb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3deb78:
    // 0x3deb78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3deb78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3deb7c:
    // 0x3deb7c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3deb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3deb80:
    // 0x3deb80: 0xc04cc7c  jal         func_1331F0
label_3deb84:
    if (ctx->pc == 0x3DEB84u) {
        ctx->pc = 0x3DEB84u;
            // 0x3deb84: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x3DEB88u;
        goto label_3deb88;
    }
    ctx->pc = 0x3DEB80u;
    SET_GPR_U32(ctx, 31, 0x3DEB88u);
    ctx->pc = 0x3DEB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEB80u;
            // 0x3deb84: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEB88u; }
        if (ctx->pc != 0x3DEB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEB88u; }
        if (ctx->pc != 0x3DEB88u) { return; }
    }
    ctx->pc = 0x3DEB88u;
label_3deb88:
    // 0x3deb88: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x3deb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_3deb8c:
    // 0x3deb8c: 0xc04cc04  jal         func_133010
label_3deb90:
    if (ctx->pc == 0x3DEB90u) {
        ctx->pc = 0x3DEB90u;
            // 0x3deb90: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3DEB94u;
        goto label_3deb94;
    }
    ctx->pc = 0x3DEB8Cu;
    SET_GPR_U32(ctx, 31, 0x3DEB94u);
    ctx->pc = 0x3DEB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEB8Cu;
            // 0x3deb90: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEB94u; }
        if (ctx->pc != 0x3DEB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEB94u; }
        if (ctx->pc != 0x3DEB94u) { return; }
    }
    ctx->pc = 0x3DEB94u;
label_3deb94:
    // 0x3deb94: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3deb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3deb98:
    // 0x3deb98: 0xc04c720  jal         func_131C80
label_3deb9c:
    if (ctx->pc == 0x3DEB9Cu) {
        ctx->pc = 0x3DEB9Cu;
            // 0x3deb9c: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->pc = 0x3DEBA0u;
        goto label_3deba0;
    }
    ctx->pc = 0x3DEB98u;
    SET_GPR_U32(ctx, 31, 0x3DEBA0u);
    ctx->pc = 0x3DEB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEB98u;
            // 0x3deb9c: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEBA0u; }
        if (ctx->pc != 0x3DEBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEBA0u; }
        if (ctx->pc != 0x3DEBA0u) { return; }
    }
    ctx->pc = 0x3DEBA0u;
label_3deba0:
    // 0x3deba0: 0x96040110  lhu         $a0, 0x110($s0)
    ctx->pc = 0x3deba0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_3deba4:
    // 0x3deba4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3deba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3deba8:
    // 0x3deba8: 0x1483007c  bne         $a0, $v1, . + 4 + (0x7C << 2)
label_3debac:
    if (ctx->pc == 0x3DEBACu) {
        ctx->pc = 0x3DEBB0u;
        goto label_3debb0;
    }
    ctx->pc = 0x3DEBA8u;
    {
        const bool branch_taken_0x3deba8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3deba8) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DEBB0u;
label_3debb0:
    // 0x3debb0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3debb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3debb4:
    // 0x3debb4: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x3debb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_3debb8:
    // 0x3debb8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3debb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3debbc:
    // 0x3debbc: 0xc057b7c  jal         func_15EDF0
label_3debc0:
    if (ctx->pc == 0x3DEBC0u) {
        ctx->pc = 0x3DEBC0u;
            // 0x3debc0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3DEBC4u;
        goto label_3debc4;
    }
    ctx->pc = 0x3DEBBCu;
    SET_GPR_U32(ctx, 31, 0x3DEBC4u);
    ctx->pc = 0x3DEBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEBBCu;
            // 0x3debc0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEBC4u; }
        if (ctx->pc != 0x3DEBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEBC4u; }
        if (ctx->pc != 0x3DEBC4u) { return; }
    }
    ctx->pc = 0x3DEBC4u;
label_3debc4:
    // 0x3debc4: 0xae2001ec  sw          $zero, 0x1EC($s1)
    ctx->pc = 0x3debc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 0));
label_3debc8:
    // 0x3debc8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3debc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3debcc:
    // 0x3debcc: 0x10000073  b           . + 4 + (0x73 << 2)
label_3debd0:
    if (ctx->pc == 0x3DEBD0u) {
        ctx->pc = 0x3DEBD0u;
            // 0x3debd0: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x3DEBD4u;
        goto label_3debd4;
    }
    ctx->pc = 0x3DEBCCu;
    {
        const bool branch_taken_0x3debcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEBCCu;
            // 0x3debd0: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3debcc) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DEBD4u;
label_3debd4:
    // 0x3debd4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x3debd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_3debd8:
    // 0x3debd8: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x3debd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3debdc:
    // 0x3debdc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3debdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3debe0:
    // 0x3debe0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3debe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3debe4:
    // 0x3debe4: 0xc0d8834  jal         func_3620D0
label_3debe8:
    if (ctx->pc == 0x3DEBE8u) {
        ctx->pc = 0x3DEBE8u;
            // 0x3debe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DEBECu;
        goto label_3debec;
    }
    ctx->pc = 0x3DEBE4u;
    SET_GPR_U32(ctx, 31, 0x3DEBECu);
    ctx->pc = 0x3DEBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEBE4u;
            // 0x3debe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3620D0u;
    if (runtime->hasFunction(0x3620D0u)) {
        auto targetFn = runtime->lookupFunction(0x3620D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEBECu; }
        if (ctx->pc != 0x3DEBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003620D0_0x3620d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEBECu; }
        if (ctx->pc != 0x3DEBECu) { return; }
    }
    ctx->pc = 0x3DEBECu;
label_3debec:
    // 0x3debec: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3debecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3debf0:
    // 0x3debf0: 0xc04cc04  jal         func_133010
label_3debf4:
    if (ctx->pc == 0x3DEBF4u) {
        ctx->pc = 0x3DEBF4u;
            // 0x3debf4: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x3DEBF8u;
        goto label_3debf8;
    }
    ctx->pc = 0x3DEBF0u;
    SET_GPR_U32(ctx, 31, 0x3DEBF8u);
    ctx->pc = 0x3DEBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEBF0u;
            // 0x3debf4: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEBF8u; }
        if (ctx->pc != 0x3DEBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEBF8u; }
        if (ctx->pc != 0x3DEBF8u) { return; }
    }
    ctx->pc = 0x3DEBF8u;
label_3debf8:
    // 0x3debf8: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3debf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
label_3debfc:
    // 0x3debfc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3debfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3dec00:
    // 0x3dec00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3dec00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dec04:
    // 0x3dec04: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3dec04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dec08:
    // 0x3dec08: 0xc04cc7c  jal         func_1331F0
label_3dec0c:
    if (ctx->pc == 0x3DEC0Cu) {
        ctx->pc = 0x3DEC0Cu;
            // 0x3dec0c: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x3DEC10u;
        goto label_3dec10;
    }
    ctx->pc = 0x3DEC08u;
    SET_GPR_U32(ctx, 31, 0x3DEC10u);
    ctx->pc = 0x3DEC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEC08u;
            // 0x3dec0c: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEC10u; }
        if (ctx->pc != 0x3DEC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEC10u; }
        if (ctx->pc != 0x3DEC10u) { return; }
    }
    ctx->pc = 0x3DEC10u;
label_3dec10:
    // 0x3dec10: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3dec10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3dec14:
    // 0x3dec14: 0xc04c720  jal         func_131C80
label_3dec18:
    if (ctx->pc == 0x3DEC18u) {
        ctx->pc = 0x3DEC18u;
            // 0x3dec18: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->pc = 0x3DEC1Cu;
        goto label_3dec1c;
    }
    ctx->pc = 0x3DEC14u;
    SET_GPR_U32(ctx, 31, 0x3DEC1Cu);
    ctx->pc = 0x3DEC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEC14u;
            // 0x3dec18: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEC1Cu; }
        if (ctx->pc != 0x3DEC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEC1Cu; }
        if (ctx->pc != 0x3DEC1Cu) { return; }
    }
    ctx->pc = 0x3DEC1Cu;
label_3dec1c:
    // 0x3dec1c: 0x96040110  lhu         $a0, 0x110($s0)
    ctx->pc = 0x3dec1cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_3dec20:
    // 0x3dec20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3dec20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dec24:
    // 0x3dec24: 0x1483005d  bne         $a0, $v1, . + 4 + (0x5D << 2)
label_3dec28:
    if (ctx->pc == 0x3DEC28u) {
        ctx->pc = 0x3DEC2Cu;
        goto label_3dec2c;
    }
    ctx->pc = 0x3DEC24u;
    {
        const bool branch_taken_0x3dec24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3dec24) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DEC2Cu;
label_3dec2c:
    // 0x3dec2c: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x3dec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_3dec30:
    // 0x3dec30: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3dec30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_3dec34:
    // 0x3dec34: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3dec34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3dec38:
    // 0x3dec38: 0x8e3001c8  lw          $s0, 0x1C8($s1)
    ctx->pc = 0x3dec38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_3dec3c:
    // 0x3dec3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3dec3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dec40:
    // 0x3dec40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dec40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dec44:
    // 0x3dec44: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3dec44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
label_3dec48:
    // 0x3dec48: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3dec48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3dec4c:
    // 0x3dec4c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3dec4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3dec50:
    // 0x3dec50: 0xc122b58  jal         func_48AD60
label_3dec54:
    if (ctx->pc == 0x3DEC54u) {
        ctx->pc = 0x3DEC54u;
            // 0x3dec54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DEC58u;
        goto label_3dec58;
    }
    ctx->pc = 0x3DEC50u;
    SET_GPR_U32(ctx, 31, 0x3DEC58u);
    ctx->pc = 0x3DEC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEC50u;
            // 0x3dec54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEC58u; }
        if (ctx->pc != 0x3DEC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEC58u; }
        if (ctx->pc != 0x3DEC58u) { return; }
    }
    ctx->pc = 0x3DEC58u;
label_3dec58:
    // 0x3dec58: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x3dec58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_3dec5c:
    // 0x3dec5c: 0xc04cc04  jal         func_133010
label_3dec60:
    if (ctx->pc == 0x3DEC60u) {
        ctx->pc = 0x3DEC60u;
            // 0x3dec60: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3DEC64u;
        goto label_3dec64;
    }
    ctx->pc = 0x3DEC5Cu;
    SET_GPR_U32(ctx, 31, 0x3DEC64u);
    ctx->pc = 0x3DEC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEC5Cu;
            // 0x3dec60: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEC64u; }
        if (ctx->pc != 0x3DEC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DEC64u; }
        if (ctx->pc != 0x3DEC64u) { return; }
    }
    ctx->pc = 0x3DEC64u;
label_3dec64:
    // 0x3dec64: 0xae3001c8  sw          $s0, 0x1C8($s1)
    ctx->pc = 0x3dec64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 456), GPR_U32(ctx, 16));
label_3dec68:
    // 0x3dec68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dec68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dec6c:
    // 0x3dec6c: 0xae2301c0  sw          $v1, 0x1C0($s1)
    ctx->pc = 0x3dec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 3));
label_3dec70:
    // 0x3dec70: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3dec70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3dec74:
    // 0x3dec74: 0x10000049  b           . + 4 + (0x49 << 2)
label_3dec78:
    if (ctx->pc == 0x3DEC78u) {
        ctx->pc = 0x3DEC78u;
            // 0x3dec78: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x3DEC7Cu;
        goto label_3dec7c;
    }
    ctx->pc = 0x3DEC74u;
    {
        const bool branch_taken_0x3dec74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEC74u;
            // 0x3dec78: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dec74) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DEC7Cu;
label_3dec7c:
    // 0x3dec7c: 0x8e2301c8  lw          $v1, 0x1C8($s1)
    ctx->pc = 0x3dec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_3dec80:
    // 0x3dec80: 0x8c6600a8  lw          $a2, 0xA8($v1)
    ctx->pc = 0x3dec80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
label_3dec84:
    // 0x3dec84: 0x50c0000c  beql        $a2, $zero, . + 4 + (0xC << 2)
label_3dec88:
    if (ctx->pc == 0x3DEC88u) {
        ctx->pc = 0x3DEC88u;
            // 0x3dec88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DEC8Cu;
        goto label_3dec8c;
    }
    ctx->pc = 0x3DEC84u;
    {
        const bool branch_taken_0x3dec84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dec84) {
            ctx->pc = 0x3DEC88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEC84u;
            // 0x3dec88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DECB8u;
            goto label_3decb8;
        }
    }
    ctx->pc = 0x3DEC8Cu;
label_3dec8c:
    // 0x3dec8c: 0x8c6500b8  lw          $a1, 0xB8($v1)
    ctx->pc = 0x3dec8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_3dec90:
    // 0x3dec90: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3dec90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3dec94:
    // 0x3dec94: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x3dec94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3dec98:
    // 0x3dec98: 0x8ce401c4  lw          $a0, 0x1C4($a3)
    ctx->pc = 0x3dec98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 452)));
label_3dec9c:
    // 0x3dec9c: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_3deca0:
    if (ctx->pc == 0x3DECA0u) {
        ctx->pc = 0x3DECA0u;
            // 0x3deca0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->pc = 0x3DECA4u;
        goto label_3deca4;
    }
    ctx->pc = 0x3DEC9Cu;
    {
        const bool branch_taken_0x3dec9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3dec9c) {
            ctx->pc = 0x3DECA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEC9Cu;
            // 0x3deca0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DECACu;
            goto label_3decac;
        }
    }
    ctx->pc = 0x3DECA4u;
label_3deca4:
    // 0x3deca4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3deca8:
    if (ctx->pc == 0x3DECA8u) {
        ctx->pc = 0x3DECACu;
        goto label_3decac;
    }
    ctx->pc = 0x3DECA4u;
    {
        const bool branch_taken_0x3deca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3deca4) {
            ctx->pc = 0x3DECB8u;
            goto label_3decb8;
        }
    }
    ctx->pc = 0x3DECACu;
label_3decac:
    // 0x3decac: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
label_3decb0:
    if (ctx->pc == 0x3DECB0u) {
        ctx->pc = 0x3DECB0u;
            // 0x3decb0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3DECB4u;
        goto label_3decb4;
    }
    ctx->pc = 0x3DECACu;
    {
        const bool branch_taken_0x3decac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DECB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DECACu;
            // 0x3decb0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3decac) {
            ctx->pc = 0x3DEC94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3dec94;
        }
    }
    ctx->pc = 0x3DECB4u;
label_3decb4:
    // 0x3decb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3decb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3decb8:
    // 0x3decb8: 0x14e00038  bnez        $a3, . + 4 + (0x38 << 2)
label_3decbc:
    if (ctx->pc == 0x3DECBCu) {
        ctx->pc = 0x3DECC0u;
        goto label_3decc0;
    }
    ctx->pc = 0x3DECB8u;
    {
        const bool branch_taken_0x3decb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x3decb8) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DECC0u;
label_3decc0:
    // 0x3decc0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3decc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3decc4:
    // 0x3decc4: 0x10000035  b           . + 4 + (0x35 << 2)
label_3decc8:
    if (ctx->pc == 0x3DECC8u) {
        ctx->pc = 0x3DECC8u;
            // 0x3decc8: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->pc = 0x3DECCCu;
        goto label_3deccc;
    }
    ctx->pc = 0x3DECC4u;
    {
        const bool branch_taken_0x3decc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DECC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DECC4u;
            // 0x3decc8: 0xae2301c4  sw          $v1, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3decc4) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DECCCu;
label_3deccc:
    // 0x3deccc: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x3decccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_3decd0:
    // 0x3decd0: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x3decd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3decd4:
    // 0x3decd4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3decd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3decd8:
    // 0x3decd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3decd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3decdc:
    // 0x3decdc: 0xc0d8834  jal         func_3620D0
label_3dece0:
    if (ctx->pc == 0x3DECE0u) {
        ctx->pc = 0x3DECE0u;
            // 0x3dece0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DECE4u;
        goto label_3dece4;
    }
    ctx->pc = 0x3DECDCu;
    SET_GPR_U32(ctx, 31, 0x3DECE4u);
    ctx->pc = 0x3DECE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DECDCu;
            // 0x3dece0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3620D0u;
    if (runtime->hasFunction(0x3620D0u)) {
        auto targetFn = runtime->lookupFunction(0x3620D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DECE4u; }
        if (ctx->pc != 0x3DECE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003620D0_0x3620d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DECE4u; }
        if (ctx->pc != 0x3DECE4u) { return; }
    }
    ctx->pc = 0x3DECE4u;
label_3dece4:
    // 0x3dece4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3dece4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3dece8:
    // 0x3dece8: 0xc04cc04  jal         func_133010
label_3decec:
    if (ctx->pc == 0x3DECECu) {
        ctx->pc = 0x3DECECu;
            // 0x3decec: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x3DECF0u;
        goto label_3decf0;
    }
    ctx->pc = 0x3DECE8u;
    SET_GPR_U32(ctx, 31, 0x3DECF0u);
    ctx->pc = 0x3DECECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DECE8u;
            // 0x3decec: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DECF0u; }
        if (ctx->pc != 0x3DECF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DECF0u; }
        if (ctx->pc != 0x3DECF0u) { return; }
    }
    ctx->pc = 0x3DECF0u;
label_3decf0:
    // 0x3decf0: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3decf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
label_3decf4:
    // 0x3decf4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3decf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3decf8:
    // 0x3decf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3decf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3decfc:
    // 0x3decfc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3decfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ded00:
    // 0x3ded00: 0xc04cc7c  jal         func_1331F0
label_3ded04:
    if (ctx->pc == 0x3DED04u) {
        ctx->pc = 0x3DED04u;
            // 0x3ded04: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x3DED08u;
        goto label_3ded08;
    }
    ctx->pc = 0x3DED00u;
    SET_GPR_U32(ctx, 31, 0x3DED08u);
    ctx->pc = 0x3DED04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DED00u;
            // 0x3ded04: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DED08u; }
        if (ctx->pc != 0x3DED08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DED08u; }
        if (ctx->pc != 0x3DED08u) { return; }
    }
    ctx->pc = 0x3DED08u;
label_3ded08:
    // 0x3ded08: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3ded08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3ded0c:
    // 0x3ded0c: 0xc04c720  jal         func_131C80
label_3ded10:
    if (ctx->pc == 0x3DED10u) {
        ctx->pc = 0x3DED10u;
            // 0x3ded10: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->pc = 0x3DED14u;
        goto label_3ded14;
    }
    ctx->pc = 0x3DED0Cu;
    SET_GPR_U32(ctx, 31, 0x3DED14u);
    ctx->pc = 0x3DED10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DED0Cu;
            // 0x3ded10: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DED14u; }
        if (ctx->pc != 0x3DED14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DED14u; }
        if (ctx->pc != 0x3DED14u) { return; }
    }
    ctx->pc = 0x3DED14u;
label_3ded14:
    // 0x3ded14: 0x96040110  lhu         $a0, 0x110($s0)
    ctx->pc = 0x3ded14u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_3ded18:
    // 0x3ded18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ded18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ded1c:
    // 0x3ded1c: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
label_3ded20:
    if (ctx->pc == 0x3DED20u) {
        ctx->pc = 0x3DED24u;
        goto label_3ded24;
    }
    ctx->pc = 0x3DED1Cu;
    {
        const bool branch_taken_0x3ded1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ded1c) {
            ctx->pc = 0x3DED9Cu;
            goto label_3ded9c;
        }
    }
    ctx->pc = 0x3DED24u;
label_3ded24:
    // 0x3ded24: 0x8e3001c8  lw          $s0, 0x1C8($s1)
    ctx->pc = 0x3ded24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
label_3ded28:
    // 0x3ded28: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ded28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3ded2c:
    // 0x3ded2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ded2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ded30:
    // 0x3ded30: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x3ded30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ded34:
    // 0x3ded34: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ded34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ded38:
    // 0x3ded38: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3ded3c:
    if (ctx->pc == 0x3DED3Cu) {
        ctx->pc = 0x3DED3Cu;
            // 0x3ded3c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3DED40u;
        goto label_3ded40;
    }
    ctx->pc = 0x3DED38u;
    {
        const bool branch_taken_0x3ded38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ded38) {
            ctx->pc = 0x3DED3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DED38u;
            // 0x3ded3c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DED50u;
            goto label_3ded50;
        }
    }
    ctx->pc = 0x3DED40u;
label_3ded40:
    // 0x3ded40: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ded40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ded44:
    // 0x3ded44: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3ded44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3ded48:
    // 0x3ded48: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ded4c:
    if (ctx->pc == 0x3DED4Cu) {
        ctx->pc = 0x3DED4Cu;
            // 0x3ded4c: 0xc60c006c  lwc1        $f12, 0x6C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3DED50u;
        goto label_3ded50;
    }
    ctx->pc = 0x3DED48u;
    {
        const bool branch_taken_0x3ded48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DED4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DED48u;
            // 0x3ded4c: 0xc60c006c  lwc1        $f12, 0x6C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ded48) {
            ctx->pc = 0x3DED68u;
            goto label_3ded68;
        }
    }
    ctx->pc = 0x3DED50u;
label_3ded50:
    // 0x3ded50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ded50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3ded54:
    // 0x3ded54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ded54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ded58:
    // 0x3ded58: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3ded58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3ded5c:
    // 0x3ded5c: 0x0  nop
    ctx->pc = 0x3ded5cu;
    // NOP
label_3ded60:
    // 0x3ded60: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3ded60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3ded64:
    // 0x3ded64: 0xc60c006c  lwc1        $f12, 0x6C($s0)
    ctx->pc = 0x3ded64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3ded68:
    // 0x3ded68: 0x3c02c110  lui         $v0, 0xC110
    ctx->pc = 0x3ded68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49424 << 16));
label_3ded6c:
    // 0x3ded6c: 0xc60d0038  lwc1        $f13, 0x38($s0)
    ctx->pc = 0x3ded6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3ded70:
    // 0x3ded70: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3ded70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3ded74:
    // 0x3ded74: 0xc122b58  jal         func_48AD60
label_3ded78:
    if (ctx->pc == 0x3DED78u) {
        ctx->pc = 0x3DED78u;
            // 0x3ded78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DED7Cu;
        goto label_3ded7c;
    }
    ctx->pc = 0x3DED74u;
    SET_GPR_U32(ctx, 31, 0x3DED7Cu);
    ctx->pc = 0x3DED78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DED74u;
            // 0x3ded78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DED7Cu; }
        if (ctx->pc != 0x3DED7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DED7Cu; }
        if (ctx->pc != 0x3DED7Cu) { return; }
    }
    ctx->pc = 0x3DED7Cu;
label_3ded7c:
    // 0x3ded7c: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x3ded7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_3ded80:
    // 0x3ded80: 0xc04cc04  jal         func_133010
label_3ded84:
    if (ctx->pc == 0x3DED84u) {
        ctx->pc = 0x3DED84u;
            // 0x3ded84: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3DED88u;
        goto label_3ded88;
    }
    ctx->pc = 0x3DED80u;
    SET_GPR_U32(ctx, 31, 0x3DED88u);
    ctx->pc = 0x3DED84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DED80u;
            // 0x3ded84: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DED88u; }
        if (ctx->pc != 0x3DED88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DED88u; }
        if (ctx->pc != 0x3DED88u) { return; }
    }
    ctx->pc = 0x3DED88u;
label_3ded88:
    // 0x3ded88: 0xae3001c8  sw          $s0, 0x1C8($s1)
    ctx->pc = 0x3ded88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 456), GPR_U32(ctx, 16));
label_3ded8c:
    // 0x3ded8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ded8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ded90:
    // 0x3ded90: 0xae2301c0  sw          $v1, 0x1C0($s1)
    ctx->pc = 0x3ded90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 3));
label_3ded94:
    // 0x3ded94: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3ded94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3ded98:
    // 0x3ded98: 0xae2301c4  sw          $v1, 0x1C4($s1)
    ctx->pc = 0x3ded98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
label_3ded9c:
    // 0x3ded9c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3ded9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3deda0:
    // 0x3deda0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3deda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3deda4:
    // 0x3deda4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3deda4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3deda8:
    // 0x3deda8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3deda8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dedac:
    // 0x3dedac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3dedacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dedb0:
    // 0x3dedb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3dedb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dedb4:
    // 0x3dedb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3dedb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dedb8:
    // 0x3dedb8: 0x3e00008  jr          $ra
label_3dedbc:
    if (ctx->pc == 0x3DEDBCu) {
        ctx->pc = 0x3DEDBCu;
            // 0x3dedbc: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x3DEDC0u;
        goto label_fallthrough_0x3dedb8;
    }
    ctx->pc = 0x3DEDB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DEDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DEDB8u;
            // 0x3dedbc: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3dedb8:
    ctx->pc = 0x3DEDC0u;
}
