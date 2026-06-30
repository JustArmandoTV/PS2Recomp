#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DF2D0
// Address: 0x1df2d0 - 0x1dfec0
void sub_001DF2D0_0x1df2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF2D0_0x1df2d0");
#endif

    switch (ctx->pc) {
        case 0x1df2d0u: goto label_1df2d0;
        case 0x1df2d4u: goto label_1df2d4;
        case 0x1df2d8u: goto label_1df2d8;
        case 0x1df2dcu: goto label_1df2dc;
        case 0x1df2e0u: goto label_1df2e0;
        case 0x1df2e4u: goto label_1df2e4;
        case 0x1df2e8u: goto label_1df2e8;
        case 0x1df2ecu: goto label_1df2ec;
        case 0x1df2f0u: goto label_1df2f0;
        case 0x1df2f4u: goto label_1df2f4;
        case 0x1df2f8u: goto label_1df2f8;
        case 0x1df2fcu: goto label_1df2fc;
        case 0x1df300u: goto label_1df300;
        case 0x1df304u: goto label_1df304;
        case 0x1df308u: goto label_1df308;
        case 0x1df30cu: goto label_1df30c;
        case 0x1df310u: goto label_1df310;
        case 0x1df314u: goto label_1df314;
        case 0x1df318u: goto label_1df318;
        case 0x1df31cu: goto label_1df31c;
        case 0x1df320u: goto label_1df320;
        case 0x1df324u: goto label_1df324;
        case 0x1df328u: goto label_1df328;
        case 0x1df32cu: goto label_1df32c;
        case 0x1df330u: goto label_1df330;
        case 0x1df334u: goto label_1df334;
        case 0x1df338u: goto label_1df338;
        case 0x1df33cu: goto label_1df33c;
        case 0x1df340u: goto label_1df340;
        case 0x1df344u: goto label_1df344;
        case 0x1df348u: goto label_1df348;
        case 0x1df34cu: goto label_1df34c;
        case 0x1df350u: goto label_1df350;
        case 0x1df354u: goto label_1df354;
        case 0x1df358u: goto label_1df358;
        case 0x1df35cu: goto label_1df35c;
        case 0x1df360u: goto label_1df360;
        case 0x1df364u: goto label_1df364;
        case 0x1df368u: goto label_1df368;
        case 0x1df36cu: goto label_1df36c;
        case 0x1df370u: goto label_1df370;
        case 0x1df374u: goto label_1df374;
        case 0x1df378u: goto label_1df378;
        case 0x1df37cu: goto label_1df37c;
        case 0x1df380u: goto label_1df380;
        case 0x1df384u: goto label_1df384;
        case 0x1df388u: goto label_1df388;
        case 0x1df38cu: goto label_1df38c;
        case 0x1df390u: goto label_1df390;
        case 0x1df394u: goto label_1df394;
        case 0x1df398u: goto label_1df398;
        case 0x1df39cu: goto label_1df39c;
        case 0x1df3a0u: goto label_1df3a0;
        case 0x1df3a4u: goto label_1df3a4;
        case 0x1df3a8u: goto label_1df3a8;
        case 0x1df3acu: goto label_1df3ac;
        case 0x1df3b0u: goto label_1df3b0;
        case 0x1df3b4u: goto label_1df3b4;
        case 0x1df3b8u: goto label_1df3b8;
        case 0x1df3bcu: goto label_1df3bc;
        case 0x1df3c0u: goto label_1df3c0;
        case 0x1df3c4u: goto label_1df3c4;
        case 0x1df3c8u: goto label_1df3c8;
        case 0x1df3ccu: goto label_1df3cc;
        case 0x1df3d0u: goto label_1df3d0;
        case 0x1df3d4u: goto label_1df3d4;
        case 0x1df3d8u: goto label_1df3d8;
        case 0x1df3dcu: goto label_1df3dc;
        case 0x1df3e0u: goto label_1df3e0;
        case 0x1df3e4u: goto label_1df3e4;
        case 0x1df3e8u: goto label_1df3e8;
        case 0x1df3ecu: goto label_1df3ec;
        case 0x1df3f0u: goto label_1df3f0;
        case 0x1df3f4u: goto label_1df3f4;
        case 0x1df3f8u: goto label_1df3f8;
        case 0x1df3fcu: goto label_1df3fc;
        case 0x1df400u: goto label_1df400;
        case 0x1df404u: goto label_1df404;
        case 0x1df408u: goto label_1df408;
        case 0x1df40cu: goto label_1df40c;
        case 0x1df410u: goto label_1df410;
        case 0x1df414u: goto label_1df414;
        case 0x1df418u: goto label_1df418;
        case 0x1df41cu: goto label_1df41c;
        case 0x1df420u: goto label_1df420;
        case 0x1df424u: goto label_1df424;
        case 0x1df428u: goto label_1df428;
        case 0x1df42cu: goto label_1df42c;
        case 0x1df430u: goto label_1df430;
        case 0x1df434u: goto label_1df434;
        case 0x1df438u: goto label_1df438;
        case 0x1df43cu: goto label_1df43c;
        case 0x1df440u: goto label_1df440;
        case 0x1df444u: goto label_1df444;
        case 0x1df448u: goto label_1df448;
        case 0x1df44cu: goto label_1df44c;
        case 0x1df450u: goto label_1df450;
        case 0x1df454u: goto label_1df454;
        case 0x1df458u: goto label_1df458;
        case 0x1df45cu: goto label_1df45c;
        case 0x1df460u: goto label_1df460;
        case 0x1df464u: goto label_1df464;
        case 0x1df468u: goto label_1df468;
        case 0x1df46cu: goto label_1df46c;
        case 0x1df470u: goto label_1df470;
        case 0x1df474u: goto label_1df474;
        case 0x1df478u: goto label_1df478;
        case 0x1df47cu: goto label_1df47c;
        case 0x1df480u: goto label_1df480;
        case 0x1df484u: goto label_1df484;
        case 0x1df488u: goto label_1df488;
        case 0x1df48cu: goto label_1df48c;
        case 0x1df490u: goto label_1df490;
        case 0x1df494u: goto label_1df494;
        case 0x1df498u: goto label_1df498;
        case 0x1df49cu: goto label_1df49c;
        case 0x1df4a0u: goto label_1df4a0;
        case 0x1df4a4u: goto label_1df4a4;
        case 0x1df4a8u: goto label_1df4a8;
        case 0x1df4acu: goto label_1df4ac;
        case 0x1df4b0u: goto label_1df4b0;
        case 0x1df4b4u: goto label_1df4b4;
        case 0x1df4b8u: goto label_1df4b8;
        case 0x1df4bcu: goto label_1df4bc;
        case 0x1df4c0u: goto label_1df4c0;
        case 0x1df4c4u: goto label_1df4c4;
        case 0x1df4c8u: goto label_1df4c8;
        case 0x1df4ccu: goto label_1df4cc;
        case 0x1df4d0u: goto label_1df4d0;
        case 0x1df4d4u: goto label_1df4d4;
        case 0x1df4d8u: goto label_1df4d8;
        case 0x1df4dcu: goto label_1df4dc;
        case 0x1df4e0u: goto label_1df4e0;
        case 0x1df4e4u: goto label_1df4e4;
        case 0x1df4e8u: goto label_1df4e8;
        case 0x1df4ecu: goto label_1df4ec;
        case 0x1df4f0u: goto label_1df4f0;
        case 0x1df4f4u: goto label_1df4f4;
        case 0x1df4f8u: goto label_1df4f8;
        case 0x1df4fcu: goto label_1df4fc;
        case 0x1df500u: goto label_1df500;
        case 0x1df504u: goto label_1df504;
        case 0x1df508u: goto label_1df508;
        case 0x1df50cu: goto label_1df50c;
        case 0x1df510u: goto label_1df510;
        case 0x1df514u: goto label_1df514;
        case 0x1df518u: goto label_1df518;
        case 0x1df51cu: goto label_1df51c;
        case 0x1df520u: goto label_1df520;
        case 0x1df524u: goto label_1df524;
        case 0x1df528u: goto label_1df528;
        case 0x1df52cu: goto label_1df52c;
        case 0x1df530u: goto label_1df530;
        case 0x1df534u: goto label_1df534;
        case 0x1df538u: goto label_1df538;
        case 0x1df53cu: goto label_1df53c;
        case 0x1df540u: goto label_1df540;
        case 0x1df544u: goto label_1df544;
        case 0x1df548u: goto label_1df548;
        case 0x1df54cu: goto label_1df54c;
        case 0x1df550u: goto label_1df550;
        case 0x1df554u: goto label_1df554;
        case 0x1df558u: goto label_1df558;
        case 0x1df55cu: goto label_1df55c;
        case 0x1df560u: goto label_1df560;
        case 0x1df564u: goto label_1df564;
        case 0x1df568u: goto label_1df568;
        case 0x1df56cu: goto label_1df56c;
        case 0x1df570u: goto label_1df570;
        case 0x1df574u: goto label_1df574;
        case 0x1df578u: goto label_1df578;
        case 0x1df57cu: goto label_1df57c;
        case 0x1df580u: goto label_1df580;
        case 0x1df584u: goto label_1df584;
        case 0x1df588u: goto label_1df588;
        case 0x1df58cu: goto label_1df58c;
        case 0x1df590u: goto label_1df590;
        case 0x1df594u: goto label_1df594;
        case 0x1df598u: goto label_1df598;
        case 0x1df59cu: goto label_1df59c;
        case 0x1df5a0u: goto label_1df5a0;
        case 0x1df5a4u: goto label_1df5a4;
        case 0x1df5a8u: goto label_1df5a8;
        case 0x1df5acu: goto label_1df5ac;
        case 0x1df5b0u: goto label_1df5b0;
        case 0x1df5b4u: goto label_1df5b4;
        case 0x1df5b8u: goto label_1df5b8;
        case 0x1df5bcu: goto label_1df5bc;
        case 0x1df5c0u: goto label_1df5c0;
        case 0x1df5c4u: goto label_1df5c4;
        case 0x1df5c8u: goto label_1df5c8;
        case 0x1df5ccu: goto label_1df5cc;
        case 0x1df5d0u: goto label_1df5d0;
        case 0x1df5d4u: goto label_1df5d4;
        case 0x1df5d8u: goto label_1df5d8;
        case 0x1df5dcu: goto label_1df5dc;
        case 0x1df5e0u: goto label_1df5e0;
        case 0x1df5e4u: goto label_1df5e4;
        case 0x1df5e8u: goto label_1df5e8;
        case 0x1df5ecu: goto label_1df5ec;
        case 0x1df5f0u: goto label_1df5f0;
        case 0x1df5f4u: goto label_1df5f4;
        case 0x1df5f8u: goto label_1df5f8;
        case 0x1df5fcu: goto label_1df5fc;
        case 0x1df600u: goto label_1df600;
        case 0x1df604u: goto label_1df604;
        case 0x1df608u: goto label_1df608;
        case 0x1df60cu: goto label_1df60c;
        case 0x1df610u: goto label_1df610;
        case 0x1df614u: goto label_1df614;
        case 0x1df618u: goto label_1df618;
        case 0x1df61cu: goto label_1df61c;
        case 0x1df620u: goto label_1df620;
        case 0x1df624u: goto label_1df624;
        case 0x1df628u: goto label_1df628;
        case 0x1df62cu: goto label_1df62c;
        case 0x1df630u: goto label_1df630;
        case 0x1df634u: goto label_1df634;
        case 0x1df638u: goto label_1df638;
        case 0x1df63cu: goto label_1df63c;
        case 0x1df640u: goto label_1df640;
        case 0x1df644u: goto label_1df644;
        case 0x1df648u: goto label_1df648;
        case 0x1df64cu: goto label_1df64c;
        case 0x1df650u: goto label_1df650;
        case 0x1df654u: goto label_1df654;
        case 0x1df658u: goto label_1df658;
        case 0x1df65cu: goto label_1df65c;
        case 0x1df660u: goto label_1df660;
        case 0x1df664u: goto label_1df664;
        case 0x1df668u: goto label_1df668;
        case 0x1df66cu: goto label_1df66c;
        case 0x1df670u: goto label_1df670;
        case 0x1df674u: goto label_1df674;
        case 0x1df678u: goto label_1df678;
        case 0x1df67cu: goto label_1df67c;
        case 0x1df680u: goto label_1df680;
        case 0x1df684u: goto label_1df684;
        case 0x1df688u: goto label_1df688;
        case 0x1df68cu: goto label_1df68c;
        case 0x1df690u: goto label_1df690;
        case 0x1df694u: goto label_1df694;
        case 0x1df698u: goto label_1df698;
        case 0x1df69cu: goto label_1df69c;
        case 0x1df6a0u: goto label_1df6a0;
        case 0x1df6a4u: goto label_1df6a4;
        case 0x1df6a8u: goto label_1df6a8;
        case 0x1df6acu: goto label_1df6ac;
        case 0x1df6b0u: goto label_1df6b0;
        case 0x1df6b4u: goto label_1df6b4;
        case 0x1df6b8u: goto label_1df6b8;
        case 0x1df6bcu: goto label_1df6bc;
        case 0x1df6c0u: goto label_1df6c0;
        case 0x1df6c4u: goto label_1df6c4;
        case 0x1df6c8u: goto label_1df6c8;
        case 0x1df6ccu: goto label_1df6cc;
        case 0x1df6d0u: goto label_1df6d0;
        case 0x1df6d4u: goto label_1df6d4;
        case 0x1df6d8u: goto label_1df6d8;
        case 0x1df6dcu: goto label_1df6dc;
        case 0x1df6e0u: goto label_1df6e0;
        case 0x1df6e4u: goto label_1df6e4;
        case 0x1df6e8u: goto label_1df6e8;
        case 0x1df6ecu: goto label_1df6ec;
        case 0x1df6f0u: goto label_1df6f0;
        case 0x1df6f4u: goto label_1df6f4;
        case 0x1df6f8u: goto label_1df6f8;
        case 0x1df6fcu: goto label_1df6fc;
        case 0x1df700u: goto label_1df700;
        case 0x1df704u: goto label_1df704;
        case 0x1df708u: goto label_1df708;
        case 0x1df70cu: goto label_1df70c;
        case 0x1df710u: goto label_1df710;
        case 0x1df714u: goto label_1df714;
        case 0x1df718u: goto label_1df718;
        case 0x1df71cu: goto label_1df71c;
        case 0x1df720u: goto label_1df720;
        case 0x1df724u: goto label_1df724;
        case 0x1df728u: goto label_1df728;
        case 0x1df72cu: goto label_1df72c;
        case 0x1df730u: goto label_1df730;
        case 0x1df734u: goto label_1df734;
        case 0x1df738u: goto label_1df738;
        case 0x1df73cu: goto label_1df73c;
        case 0x1df740u: goto label_1df740;
        case 0x1df744u: goto label_1df744;
        case 0x1df748u: goto label_1df748;
        case 0x1df74cu: goto label_1df74c;
        case 0x1df750u: goto label_1df750;
        case 0x1df754u: goto label_1df754;
        case 0x1df758u: goto label_1df758;
        case 0x1df75cu: goto label_1df75c;
        case 0x1df760u: goto label_1df760;
        case 0x1df764u: goto label_1df764;
        case 0x1df768u: goto label_1df768;
        case 0x1df76cu: goto label_1df76c;
        case 0x1df770u: goto label_1df770;
        case 0x1df774u: goto label_1df774;
        case 0x1df778u: goto label_1df778;
        case 0x1df77cu: goto label_1df77c;
        case 0x1df780u: goto label_1df780;
        case 0x1df784u: goto label_1df784;
        case 0x1df788u: goto label_1df788;
        case 0x1df78cu: goto label_1df78c;
        case 0x1df790u: goto label_1df790;
        case 0x1df794u: goto label_1df794;
        case 0x1df798u: goto label_1df798;
        case 0x1df79cu: goto label_1df79c;
        case 0x1df7a0u: goto label_1df7a0;
        case 0x1df7a4u: goto label_1df7a4;
        case 0x1df7a8u: goto label_1df7a8;
        case 0x1df7acu: goto label_1df7ac;
        case 0x1df7b0u: goto label_1df7b0;
        case 0x1df7b4u: goto label_1df7b4;
        case 0x1df7b8u: goto label_1df7b8;
        case 0x1df7bcu: goto label_1df7bc;
        case 0x1df7c0u: goto label_1df7c0;
        case 0x1df7c4u: goto label_1df7c4;
        case 0x1df7c8u: goto label_1df7c8;
        case 0x1df7ccu: goto label_1df7cc;
        case 0x1df7d0u: goto label_1df7d0;
        case 0x1df7d4u: goto label_1df7d4;
        case 0x1df7d8u: goto label_1df7d8;
        case 0x1df7dcu: goto label_1df7dc;
        case 0x1df7e0u: goto label_1df7e0;
        case 0x1df7e4u: goto label_1df7e4;
        case 0x1df7e8u: goto label_1df7e8;
        case 0x1df7ecu: goto label_1df7ec;
        case 0x1df7f0u: goto label_1df7f0;
        case 0x1df7f4u: goto label_1df7f4;
        case 0x1df7f8u: goto label_1df7f8;
        case 0x1df7fcu: goto label_1df7fc;
        case 0x1df800u: goto label_1df800;
        case 0x1df804u: goto label_1df804;
        case 0x1df808u: goto label_1df808;
        case 0x1df80cu: goto label_1df80c;
        case 0x1df810u: goto label_1df810;
        case 0x1df814u: goto label_1df814;
        case 0x1df818u: goto label_1df818;
        case 0x1df81cu: goto label_1df81c;
        case 0x1df820u: goto label_1df820;
        case 0x1df824u: goto label_1df824;
        case 0x1df828u: goto label_1df828;
        case 0x1df82cu: goto label_1df82c;
        case 0x1df830u: goto label_1df830;
        case 0x1df834u: goto label_1df834;
        case 0x1df838u: goto label_1df838;
        case 0x1df83cu: goto label_1df83c;
        case 0x1df840u: goto label_1df840;
        case 0x1df844u: goto label_1df844;
        case 0x1df848u: goto label_1df848;
        case 0x1df84cu: goto label_1df84c;
        case 0x1df850u: goto label_1df850;
        case 0x1df854u: goto label_1df854;
        case 0x1df858u: goto label_1df858;
        case 0x1df85cu: goto label_1df85c;
        case 0x1df860u: goto label_1df860;
        case 0x1df864u: goto label_1df864;
        case 0x1df868u: goto label_1df868;
        case 0x1df86cu: goto label_1df86c;
        case 0x1df870u: goto label_1df870;
        case 0x1df874u: goto label_1df874;
        case 0x1df878u: goto label_1df878;
        case 0x1df87cu: goto label_1df87c;
        case 0x1df880u: goto label_1df880;
        case 0x1df884u: goto label_1df884;
        case 0x1df888u: goto label_1df888;
        case 0x1df88cu: goto label_1df88c;
        case 0x1df890u: goto label_1df890;
        case 0x1df894u: goto label_1df894;
        case 0x1df898u: goto label_1df898;
        case 0x1df89cu: goto label_1df89c;
        case 0x1df8a0u: goto label_1df8a0;
        case 0x1df8a4u: goto label_1df8a4;
        case 0x1df8a8u: goto label_1df8a8;
        case 0x1df8acu: goto label_1df8ac;
        case 0x1df8b0u: goto label_1df8b0;
        case 0x1df8b4u: goto label_1df8b4;
        case 0x1df8b8u: goto label_1df8b8;
        case 0x1df8bcu: goto label_1df8bc;
        case 0x1df8c0u: goto label_1df8c0;
        case 0x1df8c4u: goto label_1df8c4;
        case 0x1df8c8u: goto label_1df8c8;
        case 0x1df8ccu: goto label_1df8cc;
        case 0x1df8d0u: goto label_1df8d0;
        case 0x1df8d4u: goto label_1df8d4;
        case 0x1df8d8u: goto label_1df8d8;
        case 0x1df8dcu: goto label_1df8dc;
        case 0x1df8e0u: goto label_1df8e0;
        case 0x1df8e4u: goto label_1df8e4;
        case 0x1df8e8u: goto label_1df8e8;
        case 0x1df8ecu: goto label_1df8ec;
        case 0x1df8f0u: goto label_1df8f0;
        case 0x1df8f4u: goto label_1df8f4;
        case 0x1df8f8u: goto label_1df8f8;
        case 0x1df8fcu: goto label_1df8fc;
        case 0x1df900u: goto label_1df900;
        case 0x1df904u: goto label_1df904;
        case 0x1df908u: goto label_1df908;
        case 0x1df90cu: goto label_1df90c;
        case 0x1df910u: goto label_1df910;
        case 0x1df914u: goto label_1df914;
        case 0x1df918u: goto label_1df918;
        case 0x1df91cu: goto label_1df91c;
        case 0x1df920u: goto label_1df920;
        case 0x1df924u: goto label_1df924;
        case 0x1df928u: goto label_1df928;
        case 0x1df92cu: goto label_1df92c;
        case 0x1df930u: goto label_1df930;
        case 0x1df934u: goto label_1df934;
        case 0x1df938u: goto label_1df938;
        case 0x1df93cu: goto label_1df93c;
        case 0x1df940u: goto label_1df940;
        case 0x1df944u: goto label_1df944;
        case 0x1df948u: goto label_1df948;
        case 0x1df94cu: goto label_1df94c;
        case 0x1df950u: goto label_1df950;
        case 0x1df954u: goto label_1df954;
        case 0x1df958u: goto label_1df958;
        case 0x1df95cu: goto label_1df95c;
        case 0x1df960u: goto label_1df960;
        case 0x1df964u: goto label_1df964;
        case 0x1df968u: goto label_1df968;
        case 0x1df96cu: goto label_1df96c;
        case 0x1df970u: goto label_1df970;
        case 0x1df974u: goto label_1df974;
        case 0x1df978u: goto label_1df978;
        case 0x1df97cu: goto label_1df97c;
        case 0x1df980u: goto label_1df980;
        case 0x1df984u: goto label_1df984;
        case 0x1df988u: goto label_1df988;
        case 0x1df98cu: goto label_1df98c;
        case 0x1df990u: goto label_1df990;
        case 0x1df994u: goto label_1df994;
        case 0x1df998u: goto label_1df998;
        case 0x1df99cu: goto label_1df99c;
        case 0x1df9a0u: goto label_1df9a0;
        case 0x1df9a4u: goto label_1df9a4;
        case 0x1df9a8u: goto label_1df9a8;
        case 0x1df9acu: goto label_1df9ac;
        case 0x1df9b0u: goto label_1df9b0;
        case 0x1df9b4u: goto label_1df9b4;
        case 0x1df9b8u: goto label_1df9b8;
        case 0x1df9bcu: goto label_1df9bc;
        case 0x1df9c0u: goto label_1df9c0;
        case 0x1df9c4u: goto label_1df9c4;
        case 0x1df9c8u: goto label_1df9c8;
        case 0x1df9ccu: goto label_1df9cc;
        case 0x1df9d0u: goto label_1df9d0;
        case 0x1df9d4u: goto label_1df9d4;
        case 0x1df9d8u: goto label_1df9d8;
        case 0x1df9dcu: goto label_1df9dc;
        case 0x1df9e0u: goto label_1df9e0;
        case 0x1df9e4u: goto label_1df9e4;
        case 0x1df9e8u: goto label_1df9e8;
        case 0x1df9ecu: goto label_1df9ec;
        case 0x1df9f0u: goto label_1df9f0;
        case 0x1df9f4u: goto label_1df9f4;
        case 0x1df9f8u: goto label_1df9f8;
        case 0x1df9fcu: goto label_1df9fc;
        case 0x1dfa00u: goto label_1dfa00;
        case 0x1dfa04u: goto label_1dfa04;
        case 0x1dfa08u: goto label_1dfa08;
        case 0x1dfa0cu: goto label_1dfa0c;
        case 0x1dfa10u: goto label_1dfa10;
        case 0x1dfa14u: goto label_1dfa14;
        case 0x1dfa18u: goto label_1dfa18;
        case 0x1dfa1cu: goto label_1dfa1c;
        case 0x1dfa20u: goto label_1dfa20;
        case 0x1dfa24u: goto label_1dfa24;
        case 0x1dfa28u: goto label_1dfa28;
        case 0x1dfa2cu: goto label_1dfa2c;
        case 0x1dfa30u: goto label_1dfa30;
        case 0x1dfa34u: goto label_1dfa34;
        case 0x1dfa38u: goto label_1dfa38;
        case 0x1dfa3cu: goto label_1dfa3c;
        case 0x1dfa40u: goto label_1dfa40;
        case 0x1dfa44u: goto label_1dfa44;
        case 0x1dfa48u: goto label_1dfa48;
        case 0x1dfa4cu: goto label_1dfa4c;
        case 0x1dfa50u: goto label_1dfa50;
        case 0x1dfa54u: goto label_1dfa54;
        case 0x1dfa58u: goto label_1dfa58;
        case 0x1dfa5cu: goto label_1dfa5c;
        case 0x1dfa60u: goto label_1dfa60;
        case 0x1dfa64u: goto label_1dfa64;
        case 0x1dfa68u: goto label_1dfa68;
        case 0x1dfa6cu: goto label_1dfa6c;
        case 0x1dfa70u: goto label_1dfa70;
        case 0x1dfa74u: goto label_1dfa74;
        case 0x1dfa78u: goto label_1dfa78;
        case 0x1dfa7cu: goto label_1dfa7c;
        case 0x1dfa80u: goto label_1dfa80;
        case 0x1dfa84u: goto label_1dfa84;
        case 0x1dfa88u: goto label_1dfa88;
        case 0x1dfa8cu: goto label_1dfa8c;
        case 0x1dfa90u: goto label_1dfa90;
        case 0x1dfa94u: goto label_1dfa94;
        case 0x1dfa98u: goto label_1dfa98;
        case 0x1dfa9cu: goto label_1dfa9c;
        case 0x1dfaa0u: goto label_1dfaa0;
        case 0x1dfaa4u: goto label_1dfaa4;
        case 0x1dfaa8u: goto label_1dfaa8;
        case 0x1dfaacu: goto label_1dfaac;
        case 0x1dfab0u: goto label_1dfab0;
        case 0x1dfab4u: goto label_1dfab4;
        case 0x1dfab8u: goto label_1dfab8;
        case 0x1dfabcu: goto label_1dfabc;
        case 0x1dfac0u: goto label_1dfac0;
        case 0x1dfac4u: goto label_1dfac4;
        case 0x1dfac8u: goto label_1dfac8;
        case 0x1dfaccu: goto label_1dfacc;
        case 0x1dfad0u: goto label_1dfad0;
        case 0x1dfad4u: goto label_1dfad4;
        case 0x1dfad8u: goto label_1dfad8;
        case 0x1dfadcu: goto label_1dfadc;
        case 0x1dfae0u: goto label_1dfae0;
        case 0x1dfae4u: goto label_1dfae4;
        case 0x1dfae8u: goto label_1dfae8;
        case 0x1dfaecu: goto label_1dfaec;
        case 0x1dfaf0u: goto label_1dfaf0;
        case 0x1dfaf4u: goto label_1dfaf4;
        case 0x1dfaf8u: goto label_1dfaf8;
        case 0x1dfafcu: goto label_1dfafc;
        case 0x1dfb00u: goto label_1dfb00;
        case 0x1dfb04u: goto label_1dfb04;
        case 0x1dfb08u: goto label_1dfb08;
        case 0x1dfb0cu: goto label_1dfb0c;
        case 0x1dfb10u: goto label_1dfb10;
        case 0x1dfb14u: goto label_1dfb14;
        case 0x1dfb18u: goto label_1dfb18;
        case 0x1dfb1cu: goto label_1dfb1c;
        case 0x1dfb20u: goto label_1dfb20;
        case 0x1dfb24u: goto label_1dfb24;
        case 0x1dfb28u: goto label_1dfb28;
        case 0x1dfb2cu: goto label_1dfb2c;
        case 0x1dfb30u: goto label_1dfb30;
        case 0x1dfb34u: goto label_1dfb34;
        case 0x1dfb38u: goto label_1dfb38;
        case 0x1dfb3cu: goto label_1dfb3c;
        case 0x1dfb40u: goto label_1dfb40;
        case 0x1dfb44u: goto label_1dfb44;
        case 0x1dfb48u: goto label_1dfb48;
        case 0x1dfb4cu: goto label_1dfb4c;
        case 0x1dfb50u: goto label_1dfb50;
        case 0x1dfb54u: goto label_1dfb54;
        case 0x1dfb58u: goto label_1dfb58;
        case 0x1dfb5cu: goto label_1dfb5c;
        case 0x1dfb60u: goto label_1dfb60;
        case 0x1dfb64u: goto label_1dfb64;
        case 0x1dfb68u: goto label_1dfb68;
        case 0x1dfb6cu: goto label_1dfb6c;
        case 0x1dfb70u: goto label_1dfb70;
        case 0x1dfb74u: goto label_1dfb74;
        case 0x1dfb78u: goto label_1dfb78;
        case 0x1dfb7cu: goto label_1dfb7c;
        case 0x1dfb80u: goto label_1dfb80;
        case 0x1dfb84u: goto label_1dfb84;
        case 0x1dfb88u: goto label_1dfb88;
        case 0x1dfb8cu: goto label_1dfb8c;
        case 0x1dfb90u: goto label_1dfb90;
        case 0x1dfb94u: goto label_1dfb94;
        case 0x1dfb98u: goto label_1dfb98;
        case 0x1dfb9cu: goto label_1dfb9c;
        case 0x1dfba0u: goto label_1dfba0;
        case 0x1dfba4u: goto label_1dfba4;
        case 0x1dfba8u: goto label_1dfba8;
        case 0x1dfbacu: goto label_1dfbac;
        case 0x1dfbb0u: goto label_1dfbb0;
        case 0x1dfbb4u: goto label_1dfbb4;
        case 0x1dfbb8u: goto label_1dfbb8;
        case 0x1dfbbcu: goto label_1dfbbc;
        case 0x1dfbc0u: goto label_1dfbc0;
        case 0x1dfbc4u: goto label_1dfbc4;
        case 0x1dfbc8u: goto label_1dfbc8;
        case 0x1dfbccu: goto label_1dfbcc;
        case 0x1dfbd0u: goto label_1dfbd0;
        case 0x1dfbd4u: goto label_1dfbd4;
        case 0x1dfbd8u: goto label_1dfbd8;
        case 0x1dfbdcu: goto label_1dfbdc;
        case 0x1dfbe0u: goto label_1dfbe0;
        case 0x1dfbe4u: goto label_1dfbe4;
        case 0x1dfbe8u: goto label_1dfbe8;
        case 0x1dfbecu: goto label_1dfbec;
        case 0x1dfbf0u: goto label_1dfbf0;
        case 0x1dfbf4u: goto label_1dfbf4;
        case 0x1dfbf8u: goto label_1dfbf8;
        case 0x1dfbfcu: goto label_1dfbfc;
        case 0x1dfc00u: goto label_1dfc00;
        case 0x1dfc04u: goto label_1dfc04;
        case 0x1dfc08u: goto label_1dfc08;
        case 0x1dfc0cu: goto label_1dfc0c;
        case 0x1dfc10u: goto label_1dfc10;
        case 0x1dfc14u: goto label_1dfc14;
        case 0x1dfc18u: goto label_1dfc18;
        case 0x1dfc1cu: goto label_1dfc1c;
        case 0x1dfc20u: goto label_1dfc20;
        case 0x1dfc24u: goto label_1dfc24;
        case 0x1dfc28u: goto label_1dfc28;
        case 0x1dfc2cu: goto label_1dfc2c;
        case 0x1dfc30u: goto label_1dfc30;
        case 0x1dfc34u: goto label_1dfc34;
        case 0x1dfc38u: goto label_1dfc38;
        case 0x1dfc3cu: goto label_1dfc3c;
        case 0x1dfc40u: goto label_1dfc40;
        case 0x1dfc44u: goto label_1dfc44;
        case 0x1dfc48u: goto label_1dfc48;
        case 0x1dfc4cu: goto label_1dfc4c;
        case 0x1dfc50u: goto label_1dfc50;
        case 0x1dfc54u: goto label_1dfc54;
        case 0x1dfc58u: goto label_1dfc58;
        case 0x1dfc5cu: goto label_1dfc5c;
        case 0x1dfc60u: goto label_1dfc60;
        case 0x1dfc64u: goto label_1dfc64;
        case 0x1dfc68u: goto label_1dfc68;
        case 0x1dfc6cu: goto label_1dfc6c;
        case 0x1dfc70u: goto label_1dfc70;
        case 0x1dfc74u: goto label_1dfc74;
        case 0x1dfc78u: goto label_1dfc78;
        case 0x1dfc7cu: goto label_1dfc7c;
        case 0x1dfc80u: goto label_1dfc80;
        case 0x1dfc84u: goto label_1dfc84;
        case 0x1dfc88u: goto label_1dfc88;
        case 0x1dfc8cu: goto label_1dfc8c;
        case 0x1dfc90u: goto label_1dfc90;
        case 0x1dfc94u: goto label_1dfc94;
        case 0x1dfc98u: goto label_1dfc98;
        case 0x1dfc9cu: goto label_1dfc9c;
        case 0x1dfca0u: goto label_1dfca0;
        case 0x1dfca4u: goto label_1dfca4;
        case 0x1dfca8u: goto label_1dfca8;
        case 0x1dfcacu: goto label_1dfcac;
        case 0x1dfcb0u: goto label_1dfcb0;
        case 0x1dfcb4u: goto label_1dfcb4;
        case 0x1dfcb8u: goto label_1dfcb8;
        case 0x1dfcbcu: goto label_1dfcbc;
        case 0x1dfcc0u: goto label_1dfcc0;
        case 0x1dfcc4u: goto label_1dfcc4;
        case 0x1dfcc8u: goto label_1dfcc8;
        case 0x1dfcccu: goto label_1dfccc;
        case 0x1dfcd0u: goto label_1dfcd0;
        case 0x1dfcd4u: goto label_1dfcd4;
        case 0x1dfcd8u: goto label_1dfcd8;
        case 0x1dfcdcu: goto label_1dfcdc;
        case 0x1dfce0u: goto label_1dfce0;
        case 0x1dfce4u: goto label_1dfce4;
        case 0x1dfce8u: goto label_1dfce8;
        case 0x1dfcecu: goto label_1dfcec;
        case 0x1dfcf0u: goto label_1dfcf0;
        case 0x1dfcf4u: goto label_1dfcf4;
        case 0x1dfcf8u: goto label_1dfcf8;
        case 0x1dfcfcu: goto label_1dfcfc;
        case 0x1dfd00u: goto label_1dfd00;
        case 0x1dfd04u: goto label_1dfd04;
        case 0x1dfd08u: goto label_1dfd08;
        case 0x1dfd0cu: goto label_1dfd0c;
        case 0x1dfd10u: goto label_1dfd10;
        case 0x1dfd14u: goto label_1dfd14;
        case 0x1dfd18u: goto label_1dfd18;
        case 0x1dfd1cu: goto label_1dfd1c;
        case 0x1dfd20u: goto label_1dfd20;
        case 0x1dfd24u: goto label_1dfd24;
        case 0x1dfd28u: goto label_1dfd28;
        case 0x1dfd2cu: goto label_1dfd2c;
        case 0x1dfd30u: goto label_1dfd30;
        case 0x1dfd34u: goto label_1dfd34;
        case 0x1dfd38u: goto label_1dfd38;
        case 0x1dfd3cu: goto label_1dfd3c;
        case 0x1dfd40u: goto label_1dfd40;
        case 0x1dfd44u: goto label_1dfd44;
        case 0x1dfd48u: goto label_1dfd48;
        case 0x1dfd4cu: goto label_1dfd4c;
        case 0x1dfd50u: goto label_1dfd50;
        case 0x1dfd54u: goto label_1dfd54;
        case 0x1dfd58u: goto label_1dfd58;
        case 0x1dfd5cu: goto label_1dfd5c;
        case 0x1dfd60u: goto label_1dfd60;
        case 0x1dfd64u: goto label_1dfd64;
        case 0x1dfd68u: goto label_1dfd68;
        case 0x1dfd6cu: goto label_1dfd6c;
        case 0x1dfd70u: goto label_1dfd70;
        case 0x1dfd74u: goto label_1dfd74;
        case 0x1dfd78u: goto label_1dfd78;
        case 0x1dfd7cu: goto label_1dfd7c;
        case 0x1dfd80u: goto label_1dfd80;
        case 0x1dfd84u: goto label_1dfd84;
        case 0x1dfd88u: goto label_1dfd88;
        case 0x1dfd8cu: goto label_1dfd8c;
        case 0x1dfd90u: goto label_1dfd90;
        case 0x1dfd94u: goto label_1dfd94;
        case 0x1dfd98u: goto label_1dfd98;
        case 0x1dfd9cu: goto label_1dfd9c;
        case 0x1dfda0u: goto label_1dfda0;
        case 0x1dfda4u: goto label_1dfda4;
        case 0x1dfda8u: goto label_1dfda8;
        case 0x1dfdacu: goto label_1dfdac;
        case 0x1dfdb0u: goto label_1dfdb0;
        case 0x1dfdb4u: goto label_1dfdb4;
        case 0x1dfdb8u: goto label_1dfdb8;
        case 0x1dfdbcu: goto label_1dfdbc;
        case 0x1dfdc0u: goto label_1dfdc0;
        case 0x1dfdc4u: goto label_1dfdc4;
        case 0x1dfdc8u: goto label_1dfdc8;
        case 0x1dfdccu: goto label_1dfdcc;
        case 0x1dfdd0u: goto label_1dfdd0;
        case 0x1dfdd4u: goto label_1dfdd4;
        case 0x1dfdd8u: goto label_1dfdd8;
        case 0x1dfddcu: goto label_1dfddc;
        case 0x1dfde0u: goto label_1dfde0;
        case 0x1dfde4u: goto label_1dfde4;
        case 0x1dfde8u: goto label_1dfde8;
        case 0x1dfdecu: goto label_1dfdec;
        case 0x1dfdf0u: goto label_1dfdf0;
        case 0x1dfdf4u: goto label_1dfdf4;
        case 0x1dfdf8u: goto label_1dfdf8;
        case 0x1dfdfcu: goto label_1dfdfc;
        case 0x1dfe00u: goto label_1dfe00;
        case 0x1dfe04u: goto label_1dfe04;
        case 0x1dfe08u: goto label_1dfe08;
        case 0x1dfe0cu: goto label_1dfe0c;
        case 0x1dfe10u: goto label_1dfe10;
        case 0x1dfe14u: goto label_1dfe14;
        case 0x1dfe18u: goto label_1dfe18;
        case 0x1dfe1cu: goto label_1dfe1c;
        case 0x1dfe20u: goto label_1dfe20;
        case 0x1dfe24u: goto label_1dfe24;
        case 0x1dfe28u: goto label_1dfe28;
        case 0x1dfe2cu: goto label_1dfe2c;
        case 0x1dfe30u: goto label_1dfe30;
        case 0x1dfe34u: goto label_1dfe34;
        case 0x1dfe38u: goto label_1dfe38;
        case 0x1dfe3cu: goto label_1dfe3c;
        case 0x1dfe40u: goto label_1dfe40;
        case 0x1dfe44u: goto label_1dfe44;
        case 0x1dfe48u: goto label_1dfe48;
        case 0x1dfe4cu: goto label_1dfe4c;
        case 0x1dfe50u: goto label_1dfe50;
        case 0x1dfe54u: goto label_1dfe54;
        case 0x1dfe58u: goto label_1dfe58;
        case 0x1dfe5cu: goto label_1dfe5c;
        case 0x1dfe60u: goto label_1dfe60;
        case 0x1dfe64u: goto label_1dfe64;
        case 0x1dfe68u: goto label_1dfe68;
        case 0x1dfe6cu: goto label_1dfe6c;
        case 0x1dfe70u: goto label_1dfe70;
        case 0x1dfe74u: goto label_1dfe74;
        case 0x1dfe78u: goto label_1dfe78;
        case 0x1dfe7cu: goto label_1dfe7c;
        case 0x1dfe80u: goto label_1dfe80;
        case 0x1dfe84u: goto label_1dfe84;
        case 0x1dfe88u: goto label_1dfe88;
        case 0x1dfe8cu: goto label_1dfe8c;
        case 0x1dfe90u: goto label_1dfe90;
        case 0x1dfe94u: goto label_1dfe94;
        case 0x1dfe98u: goto label_1dfe98;
        case 0x1dfe9cu: goto label_1dfe9c;
        case 0x1dfea0u: goto label_1dfea0;
        case 0x1dfea4u: goto label_1dfea4;
        case 0x1dfea8u: goto label_1dfea8;
        case 0x1dfeacu: goto label_1dfeac;
        case 0x1dfeb0u: goto label_1dfeb0;
        case 0x1dfeb4u: goto label_1dfeb4;
        case 0x1dfeb8u: goto label_1dfeb8;
        case 0x1dfebcu: goto label_1dfebc;
        default: break;
    }

    ctx->pc = 0x1df2d0u;

label_1df2d0:
    // 0x1df2d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1df2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1df2d4:
    // 0x1df2d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1df2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1df2d8:
    // 0x1df2d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1df2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1df2dc:
    // 0x1df2dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1df2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1df2e0:
    // 0x1df2e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1df2e4:
    // 0x1df2e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1df2e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1df2e8:
    // 0x1df2e8: 0x8c840550  lw          $a0, 0x550($a0)
    ctx->pc = 0x1df2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_1df2ec:
    // 0x1df2ec: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x1df2ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1df2f0:
    // 0x1df2f0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1df2f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1df2f4:
    // 0x1df2f4: 0x320f809  jalr        $t9
label_1df2f8:
    if (ctx->pc == 0x1DF2F8u) {
        ctx->pc = 0x1DF2F8u;
            // 0x1df2f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF2FCu;
        goto label_1df2fc;
    }
    ctx->pc = 0x1DF2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF2FCu);
        ctx->pc = 0x1DF2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2F4u;
            // 0x1df2f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DF2FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2FCu; }
            if (ctx->pc != 0x1DF2FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1DF2FCu;
label_1df2fc:
    // 0x1df2fc: 0xc142c40  jal         func_50B100
label_1df300:
    if (ctx->pc == 0x1DF300u) {
        ctx->pc = 0x1DF300u;
            // 0x1df300: 0x26240940  addiu       $a0, $s1, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
        ctx->pc = 0x1DF304u;
        goto label_1df304;
    }
    ctx->pc = 0x1DF2FCu;
    SET_GPR_U32(ctx, 31, 0x1DF304u);
    ctx->pc = 0x1DF300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2FCu;
            // 0x1df300: 0x26240940  addiu       $a0, $s1, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50B100u;
    if (runtime->hasFunction(0x50B100u)) {
        auto targetFn = runtime->lookupFunction(0x50B100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF304u; }
        if (ctx->pc != 0x1DF304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050B100_0x50b100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF304u; }
        if (ctx->pc != 0x1DF304u) { return; }
    }
    ctx->pc = 0x1DF304u;
label_1df304:
    // 0x1df304: 0xa6200c40  sh          $zero, 0xC40($s1)
    ctx->pc = 0x1df304u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3136), (uint16_t)GPR_U32(ctx, 0));
label_1df308:
    // 0x1df308: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1df308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1df30c:
    // 0x1df30c: 0xa6220c44  sh          $v0, 0xC44($s1)
    ctx->pc = 0x1df30cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3140), (uint16_t)GPR_U32(ctx, 2));
label_1df310:
    // 0x1df310: 0x26240c50  addiu       $a0, $s1, 0xC50
    ctx->pc = 0x1df310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3152));
label_1df314:
    // 0x1df314: 0xae200c60  sw          $zero, 0xC60($s1)
    ctx->pc = 0x1df314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3168), GPR_U32(ctx, 0));
label_1df318:
    // 0x1df318: 0xae200c64  sw          $zero, 0xC64($s1)
    ctx->pc = 0x1df318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3172), GPR_U32(ctx, 0));
label_1df31c:
    // 0x1df31c: 0xa6220c68  sh          $v0, 0xC68($s1)
    ctx->pc = 0x1df31cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3176), (uint16_t)GPR_U32(ctx, 2));
label_1df320:
    // 0x1df320: 0xc04c968  jal         func_1325A0
label_1df324:
    if (ctx->pc == 0x1DF324u) {
        ctx->pc = 0x1DF324u;
            // 0x1df324: 0xa6200c6a  sh          $zero, 0xC6A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 3178), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1DF328u;
        goto label_1df328;
    }
    ctx->pc = 0x1DF320u;
    SET_GPR_U32(ctx, 31, 0x1DF328u);
    ctx->pc = 0x1DF324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF320u;
            // 0x1df324: 0xa6200c6a  sh          $zero, 0xC6A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 3178), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF328u; }
        if (ctx->pc != 0x1DF328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF328u; }
        if (ctx->pc != 0x1DF328u) { return; }
    }
    ctx->pc = 0x1DF328u;
label_1df328:
    // 0x1df328: 0xc0756a8  jal         func_1D5AA0
label_1df32c:
    if (ctx->pc == 0x1DF32Cu) {
        ctx->pc = 0x1DF32Cu;
            // 0x1df32c: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->pc = 0x1DF330u;
        goto label_1df330;
    }
    ctx->pc = 0x1DF328u;
    SET_GPR_U32(ctx, 31, 0x1DF330u);
    ctx->pc = 0x1DF32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF328u;
            // 0x1df32c: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AA0u;
    if (runtime->hasFunction(0x1D5AA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF330u; }
        if (ctx->pc != 0x1DF330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5AA0_0x1d5aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF330u; }
        if (ctx->pc != 0x1DF330u) { return; }
    }
    ctx->pc = 0x1DF330u;
label_1df330:
    // 0x1df330: 0xae200d7c  sw          $zero, 0xD7C($s1)
    ctx->pc = 0x1df330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3452), GPR_U32(ctx, 0));
label_1df334:
    // 0x1df334: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x1df334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_1df338:
    // 0x1df338: 0xae200da0  sw          $zero, 0xDA0($s1)
    ctx->pc = 0x1df338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3488), GPR_U32(ctx, 0));
label_1df33c:
    // 0x1df33c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1df33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1df340:
    // 0x1df340: 0xae200da4  sw          $zero, 0xDA4($s1)
    ctx->pc = 0x1df340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3492), GPR_U32(ctx, 0));
label_1df344:
    // 0x1df344: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1df344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1df348:
    // 0x1df348: 0xae200da8  sw          $zero, 0xDA8($s1)
    ctx->pc = 0x1df348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3496), GPR_U32(ctx, 0));
label_1df34c:
    // 0x1df34c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df350:
    // 0x1df350: 0xae200dac  sw          $zero, 0xDAC($s1)
    ctx->pc = 0x1df350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3500), GPR_U32(ctx, 0));
label_1df354:
    // 0x1df354: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x1df354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_1df358:
    // 0x1df358: 0xae260db8  sw          $a2, 0xDB8($s1)
    ctx->pc = 0x1df358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3512), GPR_U32(ctx, 6));
label_1df35c:
    // 0x1df35c: 0xae250dbc  sw          $a1, 0xDBC($s1)
    ctx->pc = 0x1df35cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3516), GPR_U32(ctx, 5));
label_1df360:
    // 0x1df360: 0xae200dc8  sw          $zero, 0xDC8($s1)
    ctx->pc = 0x1df360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3528), GPR_U32(ctx, 0));
label_1df364:
    // 0x1df364: 0xae200de8  sw          $zero, 0xDE8($s1)
    ctx->pc = 0x1df364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3560), GPR_U32(ctx, 0));
label_1df368:
    // 0x1df368: 0xae200dec  sw          $zero, 0xDEC($s1)
    ctx->pc = 0x1df368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3564), GPR_U32(ctx, 0));
label_1df36c:
    // 0x1df36c: 0xa2200e3d  sb          $zero, 0xE3D($s1)
    ctx->pc = 0x1df36cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3645), (uint8_t)GPR_U32(ctx, 0));
label_1df370:
    // 0x1df370: 0xae200df8  sw          $zero, 0xDF8($s1)
    ctx->pc = 0x1df370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3576), GPR_U32(ctx, 0));
label_1df374:
    // 0x1df374: 0xae200dfc  sw          $zero, 0xDFC($s1)
    ctx->pc = 0x1df374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3580), GPR_U32(ctx, 0));
label_1df378:
    // 0x1df378: 0xae200e00  sw          $zero, 0xE00($s1)
    ctx->pc = 0x1df378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3584), GPR_U32(ctx, 0));
label_1df37c:
    // 0x1df37c: 0xae200e04  sw          $zero, 0xE04($s1)
    ctx->pc = 0x1df37cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3588), GPR_U32(ctx, 0));
label_1df380:
    // 0x1df380: 0xae250e08  sw          $a1, 0xE08($s1)
    ctx->pc = 0x1df380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3592), GPR_U32(ctx, 5));
label_1df384:
    // 0x1df384: 0xae200e0c  sw          $zero, 0xE0C($s1)
    ctx->pc = 0x1df384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3596), GPR_U32(ctx, 0));
label_1df388:
    // 0x1df388: 0xae200e10  sw          $zero, 0xE10($s1)
    ctx->pc = 0x1df388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3600), GPR_U32(ctx, 0));
label_1df38c:
    // 0x1df38c: 0xae200e14  sw          $zero, 0xE14($s1)
    ctx->pc = 0x1df38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3604), GPR_U32(ctx, 0));
label_1df390:
    // 0x1df390: 0xae200e18  sw          $zero, 0xE18($s1)
    ctx->pc = 0x1df390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3608), GPR_U32(ctx, 0));
label_1df394:
    // 0x1df394: 0xae200e2c  sw          $zero, 0xE2C($s1)
    ctx->pc = 0x1df394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3628), GPR_U32(ctx, 0));
label_1df398:
    // 0x1df398: 0xae200e30  sw          $zero, 0xE30($s1)
    ctx->pc = 0x1df398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 0));
label_1df39c:
    // 0x1df39c: 0xae200e28  sw          $zero, 0xE28($s1)
    ctx->pc = 0x1df39cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3624), GPR_U32(ctx, 0));
label_1df3a0:
    // 0x1df3a0: 0xa2200e3e  sb          $zero, 0xE3E($s1)
    ctx->pc = 0x1df3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3646), (uint8_t)GPR_U32(ctx, 0));
label_1df3a4:
    // 0x1df3a4: 0xa2200e3f  sb          $zero, 0xE3F($s1)
    ctx->pc = 0x1df3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3647), (uint8_t)GPR_U32(ctx, 0));
label_1df3a8:
    // 0x1df3a8: 0xae20117c  sw          $zero, 0x117C($s1)
    ctx->pc = 0x1df3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4476), GPR_U32(ctx, 0));
label_1df3ac:
    // 0x1df3ac: 0xae201180  sw          $zero, 0x1180($s1)
    ctx->pc = 0x1df3acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4480), GPR_U32(ctx, 0));
label_1df3b0:
    // 0x1df3b0: 0xa620119c  sh          $zero, 0x119C($s1)
    ctx->pc = 0x1df3b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4508), (uint16_t)GPR_U32(ctx, 0));
label_1df3b4:
    // 0x1df3b4: 0xa220119e  sb          $zero, 0x119E($s1)
    ctx->pc = 0x1df3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4510), (uint8_t)GPR_U32(ctx, 0));
label_1df3b8:
    // 0x1df3b8: 0xa22011a7  sb          $zero, 0x11A7($s1)
    ctx->pc = 0x1df3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4519), (uint8_t)GPR_U32(ctx, 0));
label_1df3bc:
    // 0x1df3bc: 0xa22311a8  sb          $v1, 0x11A8($s1)
    ctx->pc = 0x1df3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4520), (uint8_t)GPR_U32(ctx, 3));
label_1df3c0:
    // 0x1df3c0: 0xae201188  sw          $zero, 0x1188($s1)
    ctx->pc = 0x1df3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4488), GPR_U32(ctx, 0));
label_1df3c4:
    // 0x1df3c4: 0xae201190  sw          $zero, 0x1190($s1)
    ctx->pc = 0x1df3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4496), GPR_U32(ctx, 0));
label_1df3c8:
    // 0x1df3c8: 0xae251194  sw          $a1, 0x1194($s1)
    ctx->pc = 0x1df3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4500), GPR_U32(ctx, 5));
label_1df3cc:
    // 0x1df3cc: 0xa22211a1  sb          $v0, 0x11A1($s1)
    ctx->pc = 0x1df3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4513), (uint8_t)GPR_U32(ctx, 2));
label_1df3d0:
    // 0x1df3d0: 0xae2011e4  sw          $zero, 0x11E4($s1)
    ctx->pc = 0x1df3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4580), GPR_U32(ctx, 0));
label_1df3d4:
    // 0x1df3d4: 0xa22311ad  sb          $v1, 0x11AD($s1)
    ctx->pc = 0x1df3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4525), (uint8_t)GPR_U32(ctx, 3));
label_1df3d8:
    // 0x1df3d8: 0xae200e64  sw          $zero, 0xE64($s1)
    ctx->pc = 0x1df3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3684), GPR_U32(ctx, 0));
label_1df3dc:
    // 0x1df3dc: 0xae200e68  sw          $zero, 0xE68($s1)
    ctx->pc = 0x1df3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3688), GPR_U32(ctx, 0));
label_1df3e0:
    // 0x1df3e0: 0xae200e6c  sw          $zero, 0xE6C($s1)
    ctx->pc = 0x1df3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3692), GPR_U32(ctx, 0));
label_1df3e4:
    // 0x1df3e4: 0xae200e70  sw          $zero, 0xE70($s1)
    ctx->pc = 0x1df3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3696), GPR_U32(ctx, 0));
label_1df3e8:
    // 0x1df3e8: 0xae200e74  sw          $zero, 0xE74($s1)
    ctx->pc = 0x1df3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3700), GPR_U32(ctx, 0));
label_1df3ec:
    // 0x1df3ec: 0xae2311f0  sw          $v1, 0x11F0($s1)
    ctx->pc = 0x1df3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4592), GPR_U32(ctx, 3));
label_1df3f0:
    // 0x1df3f0: 0xae2011e0  sw          $zero, 0x11E0($s1)
    ctx->pc = 0x1df3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4576), GPR_U32(ctx, 0));
label_1df3f4:
    // 0x1df3f4: 0xae201224  sw          $zero, 0x1224($s1)
    ctx->pc = 0x1df3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4644), GPR_U32(ctx, 0));
label_1df3f8:
    // 0x1df3f8: 0xa22011a6  sb          $zero, 0x11A6($s1)
    ctx->pc = 0x1df3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4518), (uint8_t)GPR_U32(ctx, 0));
label_1df3fc:
    // 0x1df3fc: 0xa22011a5  sb          $zero, 0x11A5($s1)
    ctx->pc = 0x1df3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4517), (uint8_t)GPR_U32(ctx, 0));
label_1df400:
    // 0x1df400: 0xc04f26c  jal         func_13C9B0
label_1df404:
    if (ctx->pc == 0x1DF404u) {
        ctx->pc = 0x1DF404u;
            // 0x1df404: 0xa22011a4  sb          $zero, 0x11A4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4516), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1DF408u;
        goto label_1df408;
    }
    ctx->pc = 0x1DF400u;
    SET_GPR_U32(ctx, 31, 0x1DF408u);
    ctx->pc = 0x1DF404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF400u;
            // 0x1df404: 0xa22011a4  sb          $zero, 0x11A4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4516), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF408u; }
        if (ctx->pc != 0x1DF408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF408u; }
        if (ctx->pc != 0x1DF408u) { return; }
    }
    ctx->pc = 0x1DF408u;
label_1df408:
    // 0x1df408: 0xc04f26c  jal         func_13C9B0
label_1df40c:
    if (ctx->pc == 0x1DF40Cu) {
        ctx->pc = 0x1DF40Cu;
            // 0x1df40c: 0x26240100  addiu       $a0, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->pc = 0x1DF410u;
        goto label_1df410;
    }
    ctx->pc = 0x1DF408u;
    SET_GPR_U32(ctx, 31, 0x1DF410u);
    ctx->pc = 0x1DF40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF408u;
            // 0x1df40c: 0x26240100  addiu       $a0, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF410u; }
        if (ctx->pc != 0x1DF410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF410u; }
        if (ctx->pc != 0x1DF410u) { return; }
    }
    ctx->pc = 0x1DF410u;
label_1df410:
    // 0x1df410: 0xc04f26c  jal         func_13C9B0
label_1df414:
    if (ctx->pc == 0x1DF414u) {
        ctx->pc = 0x1DF414u;
            // 0x1df414: 0x26240180  addiu       $a0, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->pc = 0x1DF418u;
        goto label_1df418;
    }
    ctx->pc = 0x1DF410u;
    SET_GPR_U32(ctx, 31, 0x1DF418u);
    ctx->pc = 0x1DF414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF410u;
            // 0x1df414: 0x26240180  addiu       $a0, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF418u; }
        if (ctx->pc != 0x1DF418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF418u; }
        if (ctx->pc != 0x1DF418u) { return; }
    }
    ctx->pc = 0x1DF418u;
label_1df418:
    // 0x1df418: 0xc04f26c  jal         func_13C9B0
label_1df41c:
    if (ctx->pc == 0x1DF41Cu) {
        ctx->pc = 0x1DF41Cu;
            // 0x1df41c: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->pc = 0x1DF420u;
        goto label_1df420;
    }
    ctx->pc = 0x1DF418u;
    SET_GPR_U32(ctx, 31, 0x1DF420u);
    ctx->pc = 0x1DF41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF418u;
            // 0x1df41c: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF420u; }
        if (ctx->pc != 0x1DF420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF420u; }
        if (ctx->pc != 0x1DF420u) { return; }
    }
    ctx->pc = 0x1DF420u;
label_1df420:
    // 0x1df420: 0xc04f26c  jal         func_13C9B0
label_1df424:
    if (ctx->pc == 0x1DF424u) {
        ctx->pc = 0x1DF424u;
            // 0x1df424: 0x26240200  addiu       $a0, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->pc = 0x1DF428u;
        goto label_1df428;
    }
    ctx->pc = 0x1DF420u;
    SET_GPR_U32(ctx, 31, 0x1DF428u);
    ctx->pc = 0x1DF424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF420u;
            // 0x1df424: 0x26240200  addiu       $a0, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF428u; }
        if (ctx->pc != 0x1DF428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF428u; }
        if (ctx->pc != 0x1DF428u) { return; }
    }
    ctx->pc = 0x1DF428u;
label_1df428:
    // 0x1df428: 0xc04f26c  jal         func_13C9B0
label_1df42c:
    if (ctx->pc == 0x1DF42Cu) {
        ctx->pc = 0x1DF42Cu;
            // 0x1df42c: 0x26240240  addiu       $a0, $s1, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
        ctx->pc = 0x1DF430u;
        goto label_1df430;
    }
    ctx->pc = 0x1DF428u;
    SET_GPR_U32(ctx, 31, 0x1DF430u);
    ctx->pc = 0x1DF42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF428u;
            // 0x1df42c: 0x26240240  addiu       $a0, $s1, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF430u; }
        if (ctx->pc != 0x1DF430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF430u; }
        if (ctx->pc != 0x1DF430u) { return; }
    }
    ctx->pc = 0x1DF430u;
label_1df430:
    // 0x1df430: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1df430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1df434:
    // 0x1df434: 0x262403d0  addiu       $a0, $s1, 0x3D0
    ctx->pc = 0x1df434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 976));
label_1df438:
    // 0x1df438: 0xc04cc04  jal         func_133010
label_1df43c:
    if (ctx->pc == 0x1DF43Cu) {
        ctx->pc = 0x1DF43Cu;
            // 0x1df43c: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->pc = 0x1DF440u;
        goto label_1df440;
    }
    ctx->pc = 0x1DF438u;
    SET_GPR_U32(ctx, 31, 0x1DF440u);
    ctx->pc = 0x1DF43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF438u;
            // 0x1df43c: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF440u; }
        if (ctx->pc != 0x1DF440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF440u; }
        if (ctx->pc != 0x1DF440u) { return; }
    }
    ctx->pc = 0x1DF440u;
label_1df440:
    // 0x1df440: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1df440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1df444:
    // 0x1df444: 0x26240380  addiu       $a0, $s1, 0x380
    ctx->pc = 0x1df444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_1df448:
    // 0x1df448: 0xc04cc04  jal         func_133010
label_1df44c:
    if (ctx->pc == 0x1DF44Cu) {
        ctx->pc = 0x1DF44Cu;
            // 0x1df44c: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->pc = 0x1DF450u;
        goto label_1df450;
    }
    ctx->pc = 0x1DF448u;
    SET_GPR_U32(ctx, 31, 0x1DF450u);
    ctx->pc = 0x1DF44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF448u;
            // 0x1df44c: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF450u; }
        if (ctx->pc != 0x1DF450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF450u; }
        if (ctx->pc != 0x1DF450u) { return; }
    }
    ctx->pc = 0x1DF450u;
label_1df450:
    // 0x1df450: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1df450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1df454:
    // 0x1df454: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1df454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
label_1df458:
    // 0x1df458: 0xc04cc04  jal         func_133010
label_1df45c:
    if (ctx->pc == 0x1DF45Cu) {
        ctx->pc = 0x1DF45Cu;
            // 0x1df45c: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->pc = 0x1DF460u;
        goto label_1df460;
    }
    ctx->pc = 0x1DF458u;
    SET_GPR_U32(ctx, 31, 0x1DF460u);
    ctx->pc = 0x1DF45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF458u;
            // 0x1df45c: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF460u; }
        if (ctx->pc != 0x1DF460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF460u; }
        if (ctx->pc != 0x1DF460u) { return; }
    }
    ctx->pc = 0x1DF460u;
label_1df460:
    // 0x1df460: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1df460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1df464:
    // 0x1df464: 0x262403a0  addiu       $a0, $s1, 0x3A0
    ctx->pc = 0x1df464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 928));
label_1df468:
    // 0x1df468: 0xc04cc04  jal         func_133010
label_1df46c:
    if (ctx->pc == 0x1DF46Cu) {
        ctx->pc = 0x1DF46Cu;
            // 0x1df46c: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->pc = 0x1DF470u;
        goto label_1df470;
    }
    ctx->pc = 0x1DF468u;
    SET_GPR_U32(ctx, 31, 0x1DF470u);
    ctx->pc = 0x1DF46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF468u;
            // 0x1df46c: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF470u; }
        if (ctx->pc != 0x1DF470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF470u; }
        if (ctx->pc != 0x1DF470u) { return; }
    }
    ctx->pc = 0x1DF470u;
label_1df470:
    // 0x1df470: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1df470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1df474:
    // 0x1df474: 0x26240360  addiu       $a0, $s1, 0x360
    ctx->pc = 0x1df474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
label_1df478:
    // 0x1df478: 0xc04cc04  jal         func_133010
label_1df47c:
    if (ctx->pc == 0x1DF47Cu) {
        ctx->pc = 0x1DF47Cu;
            // 0x1df47c: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->pc = 0x1DF480u;
        goto label_1df480;
    }
    ctx->pc = 0x1DF478u;
    SET_GPR_U32(ctx, 31, 0x1DF480u);
    ctx->pc = 0x1DF47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF478u;
            // 0x1df47c: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF480u; }
        if (ctx->pc != 0x1DF480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF480u; }
        if (ctx->pc != 0x1DF480u) { return; }
    }
    ctx->pc = 0x1DF480u;
label_1df480:
    // 0x1df480: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1df480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1df484:
    // 0x1df484: 0x26240370  addiu       $a0, $s1, 0x370
    ctx->pc = 0x1df484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
label_1df488:
    // 0x1df488: 0xc04cc04  jal         func_133010
label_1df48c:
    if (ctx->pc == 0x1DF48Cu) {
        ctx->pc = 0x1DF48Cu;
            // 0x1df48c: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->pc = 0x1DF490u;
        goto label_1df490;
    }
    ctx->pc = 0x1DF488u;
    SET_GPR_U32(ctx, 31, 0x1DF490u);
    ctx->pc = 0x1DF48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF488u;
            // 0x1df48c: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF490u; }
        if (ctx->pc != 0x1DF490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF490u; }
        if (ctx->pc != 0x1DF490u) { return; }
    }
    ctx->pc = 0x1DF490u;
label_1df490:
    // 0x1df490: 0x26220d8c  addiu       $v0, $s1, 0xD8C
    ctx->pc = 0x1df490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3468));
label_1df494:
    // 0x1df494: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1df494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1df498:
    // 0x1df498: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1df498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_1df49c:
    // 0x1df49c: 0x26250d80  addiu       $a1, $s1, 0xD80
    ctx->pc = 0x1df49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3456));
label_1df4a0:
    // 0x1df4a0: 0x8e220d90  lw          $v0, 0xD90($s1)
    ctx->pc = 0x1df4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3472)));
label_1df4a4:
    // 0x1df4a4: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x1df4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1df4a8:
    // 0x1df4a8: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x1df4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_1df4ac:
    // 0x1df4ac: 0xc05827c  jal         func_1609F0
label_1df4b0:
    if (ctx->pc == 0x1DF4B0u) {
        ctx->pc = 0x1DF4B0u;
            // 0x1df4b0: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x1DF4B4u;
        goto label_1df4b4;
    }
    ctx->pc = 0x1DF4ACu;
    SET_GPR_U32(ctx, 31, 0x1DF4B4u);
    ctx->pc = 0x1DF4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF4ACu;
            // 0x1df4b0: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1609F0u;
    if (runtime->hasFunction(0x1609F0u)) {
        auto targetFn = runtime->lookupFunction(0x1609F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4B4u; }
        if (ctx->pc != 0x1DF4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001609F0_0x1609f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4B4u; }
        if (ctx->pc != 0x1DF4B4u) { return; }
    }
    ctx->pc = 0x1DF4B4u;
label_1df4b4:
    // 0x1df4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df4b8:
    // 0x1df4b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1df4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1df4bc:
    // 0x1df4bc: 0xc075ee8  jal         func_1D7BA0
label_1df4c0:
    if (ctx->pc == 0x1DF4C0u) {
        ctx->pc = 0x1DF4C0u;
            // 0x1df4c0: 0xa22211a4  sb          $v0, 0x11A4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4516), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1DF4C4u;
        goto label_1df4c4;
    }
    ctx->pc = 0x1DF4BCu;
    SET_GPR_U32(ctx, 31, 0x1DF4C4u);
    ctx->pc = 0x1DF4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF4BCu;
            // 0x1df4c0: 0xa22211a4  sb          $v0, 0x11A4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4516), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7BA0u;
    if (runtime->hasFunction(0x1D7BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4C4u; }
        if (ctx->pc != 0x1DF4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7BA0_0x1d7ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4C4u; }
        if (ctx->pc != 0x1DF4C4u) { return; }
    }
    ctx->pc = 0x1DF4C4u;
label_1df4c4:
    // 0x1df4c4: 0x8e220e38  lw          $v0, 0xE38($s1)
    ctx->pc = 0x1df4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_1df4c8:
    // 0x1df4c8: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1df4c8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1df4cc:
    // 0x1df4cc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_1df4d0:
    if (ctx->pc == 0x1DF4D0u) {
        ctx->pc = 0x1DF4D0u;
            // 0x1df4d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF4D4u;
        goto label_1df4d4;
    }
    ctx->pc = 0x1DF4CCu;
    {
        const bool branch_taken_0x1df4cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DF4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF4CCu;
            // 0x1df4d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4cc) {
            ctx->pc = 0x1DF4E4u;
            goto label_1df4e4;
        }
    }
    ctx->pc = 0x1DF4D4u;
label_1df4d4:
    // 0x1df4d4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1df4d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1df4d8:
    // 0x1df4d8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1df4dc:
    if (ctx->pc == 0x1DF4DCu) {
        ctx->pc = 0x1DF4E0u;
        goto label_1df4e0;
    }
    ctx->pc = 0x1DF4D8u;
    {
        const bool branch_taken_0x1df4d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df4d8) {
            ctx->pc = 0x1DF4E4u;
            goto label_1df4e4;
        }
    }
    ctx->pc = 0x1DF4E0u;
label_1df4e0:
    // 0x1df4e0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1df4e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1df4e4:
    // 0x1df4e4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1df4e8:
    if (ctx->pc == 0x1DF4E8u) {
        ctx->pc = 0x1DF4ECu;
        goto label_1df4ec;
    }
    ctx->pc = 0x1DF4E4u;
    {
        const bool branch_taken_0x1df4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df4e4) {
            ctx->pc = 0x1DF524u;
            goto label_1df524;
        }
    }
    ctx->pc = 0x1DF4ECu;
label_1df4ec:
    // 0x1df4ec: 0x822211aa  lb          $v0, 0x11AA($s1)
    ctx->pc = 0x1df4ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_1df4f0:
    // 0x1df4f0: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1df4f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1df4f4:
    // 0x1df4f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1df4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1df4f8:
    // 0x1df4f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1df4fc:
    if (ctx->pc == 0x1DF4FCu) {
        ctx->pc = 0x1DF500u;
        goto label_1df500;
    }
    ctx->pc = 0x1DF4F8u;
    {
        const bool branch_taken_0x1df4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df4f8) {
            ctx->pc = 0x1DF518u;
            goto label_1df518;
        }
    }
    ctx->pc = 0x1DF500u;
label_1df500:
    // 0x1df500: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1df500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1df504:
    // 0x1df504: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1df504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1df508:
    // 0x1df508: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x1df508u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
label_1df50c:
    // 0x1df50c: 0x401027  not         $v0, $v0
    ctx->pc = 0x1df50cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_1df510:
    // 0x1df510: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1df510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1df514:
    // 0x1df514: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1df514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1df518:
    // 0x1df518: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1df51c:
    if (ctx->pc == 0x1DF51Cu) {
        ctx->pc = 0x1DF520u;
        goto label_1df520;
    }
    ctx->pc = 0x1DF518u;
    {
        const bool branch_taken_0x1df518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df518) {
            ctx->pc = 0x1DF524u;
            goto label_1df524;
        }
    }
    ctx->pc = 0x1DF520u;
label_1df520:
    // 0x1df520: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1df520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df524:
    // 0x1df524: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_1df528:
    if (ctx->pc == 0x1DF528u) {
        ctx->pc = 0x1DF528u;
            // 0x1df528: 0x262402d0  addiu       $a0, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->pc = 0x1DF52Cu;
        goto label_1df52c;
    }
    ctx->pc = 0x1DF524u;
    {
        const bool branch_taken_0x1df524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df524) {
            ctx->pc = 0x1DF528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF524u;
            // 0x1df528: 0x262402d0  addiu       $a0, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF548u;
            goto label_1df548;
        }
    }
    ctx->pc = 0x1DF52Cu;
label_1df52c:
    // 0x1df52c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1df52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1df530:
    // 0x1df530: 0x8e250d98  lw          $a1, 0xD98($s1)
    ctx->pc = 0x1df530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_1df534:
    // 0x1df534: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x1df534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1df538:
    // 0x1df538: 0x8c4407b8  lw          $a0, 0x7B8($v0)
    ctx->pc = 0x1df538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1976)));
label_1df53c:
    // 0x1df53c: 0xc0bc1d4  jal         func_2F0750
label_1df540:
    if (ctx->pc == 0x1DF540u) {
        ctx->pc = 0x1DF540u;
            // 0x1df540: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF544u;
        goto label_1df544;
    }
    ctx->pc = 0x1DF53Cu;
    SET_GPR_U32(ctx, 31, 0x1DF544u);
    ctx->pc = 0x1DF540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF53Cu;
            // 0x1df540: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0750u;
    if (runtime->hasFunction(0x2F0750u)) {
        auto targetFn = runtime->lookupFunction(0x2F0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF544u; }
        if (ctx->pc != 0x1DF544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0750_0x2f0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF544u; }
        if (ctx->pc != 0x1DF544u) { return; }
    }
    ctx->pc = 0x1DF544u;
label_1df544:
    // 0x1df544: 0x262402d0  addiu       $a0, $s1, 0x2D0
    ctx->pc = 0x1df544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
label_1df548:
    // 0x1df548: 0xc04cc04  jal         func_133010
label_1df54c:
    if (ctx->pc == 0x1DF54Cu) {
        ctx->pc = 0x1DF54Cu;
            // 0x1df54c: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->pc = 0x1DF550u;
        goto label_1df550;
    }
    ctx->pc = 0x1DF548u;
    SET_GPR_U32(ctx, 31, 0x1DF550u);
    ctx->pc = 0x1DF54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF548u;
            // 0x1df54c: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF550u; }
        if (ctx->pc != 0x1DF550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF550u; }
        if (ctx->pc != 0x1DF550u) { return; }
    }
    ctx->pc = 0x1DF550u;
label_1df550:
    // 0x1df550: 0x262402c0  addiu       $a0, $s1, 0x2C0
    ctx->pc = 0x1df550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_1df554:
    // 0x1df554: 0xc04cc04  jal         func_133010
label_1df558:
    if (ctx->pc == 0x1DF558u) {
        ctx->pc = 0x1DF558u;
            // 0x1df558: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF55Cu;
        goto label_1df55c;
    }
    ctx->pc = 0x1DF554u;
    SET_GPR_U32(ctx, 31, 0x1DF55Cu);
    ctx->pc = 0x1DF558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF554u;
            // 0x1df558: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF55Cu; }
        if (ctx->pc != 0x1DF55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF55Cu; }
        if (ctx->pc != 0x1DF55Cu) { return; }
    }
    ctx->pc = 0x1DF55Cu;
label_1df55c:
    // 0x1df55c: 0x8e320d74  lw          $s2, 0xD74($s1)
    ctx->pc = 0x1df55cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_1df560:
    // 0x1df560: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1df560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1df564:
    // 0x1df564: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1df564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1df568:
    // 0x1df568: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1df568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1df56c:
    // 0x1df56c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1df56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1df570:
    // 0x1df570: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x1df570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_1df574:
    // 0x1df574: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1df574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1df578:
    // 0x1df578: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1df578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1df57c:
    // 0x1df57c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1df57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1df580:
    // 0x1df580: 0xc0a5444  jal         func_295110
label_1df584:
    if (ctx->pc == 0x1DF584u) {
        ctx->pc = 0x1DF584u;
            // 0x1df584: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1DF588u;
        goto label_1df588;
    }
    ctx->pc = 0x1DF580u;
    SET_GPR_U32(ctx, 31, 0x1DF588u);
    ctx->pc = 0x1DF584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF580u;
            // 0x1df584: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF588u; }
        if (ctx->pc != 0x1DF588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF588u; }
        if (ctx->pc != 0x1DF588u) { return; }
    }
    ctx->pc = 0x1DF588u;
label_1df588:
    // 0x1df588: 0xae4002d0  sw          $zero, 0x2D0($s2)
    ctx->pc = 0x1df588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 720), GPR_U32(ctx, 0));
label_1df58c:
    // 0x1df58c: 0x262402d0  addiu       $a0, $s1, 0x2D0
    ctx->pc = 0x1df58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
label_1df590:
    // 0x1df590: 0xae4002d4  sw          $zero, 0x2D4($s2)
    ctx->pc = 0x1df590u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 724), GPR_U32(ctx, 0));
label_1df594:
    // 0x1df594: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1df594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df598:
    // 0x1df598: 0xae4002d8  sw          $zero, 0x2D8($s2)
    ctx->pc = 0x1df598u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 728), GPR_U32(ctx, 0));
label_1df59c:
    // 0x1df59c: 0xc04cc04  jal         func_133010
label_1df5a0:
    if (ctx->pc == 0x1DF5A0u) {
        ctx->pc = 0x1DF5A0u;
            // 0x1df5a0: 0xae4002dc  sw          $zero, 0x2DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 732), GPR_U32(ctx, 0));
        ctx->pc = 0x1DF5A4u;
        goto label_1df5a4;
    }
    ctx->pc = 0x1DF59Cu;
    SET_GPR_U32(ctx, 31, 0x1DF5A4u);
    ctx->pc = 0x1DF5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF59Cu;
            // 0x1df5a0: 0xae4002dc  sw          $zero, 0x2DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5A4u; }
        if (ctx->pc != 0x1DF5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5A4u; }
        if (ctx->pc != 0x1DF5A4u) { return; }
    }
    ctx->pc = 0x1DF5A4u;
label_1df5a4:
    // 0x1df5a4: 0xc075368  jal         func_1D4DA0
label_1df5a8:
    if (ctx->pc == 0x1DF5A8u) {
        ctx->pc = 0x1DF5A8u;
            // 0x1df5a8: 0x26240560  addiu       $a0, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x1DF5ACu;
        goto label_1df5ac;
    }
    ctx->pc = 0x1DF5A4u;
    SET_GPR_U32(ctx, 31, 0x1DF5ACu);
    ctx->pc = 0x1DF5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5A4u;
            // 0x1df5a8: 0x26240560  addiu       $a0, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DA0u;
    if (runtime->hasFunction(0x1D4DA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5ACu; }
        if (ctx->pc != 0x1DF5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DA0_0x1d4da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5ACu; }
        if (ctx->pc != 0x1DF5ACu) { return; }
    }
    ctx->pc = 0x1DF5ACu;
label_1df5ac:
    // 0x1df5ac: 0x262402e0  addiu       $a0, $s1, 0x2E0
    ctx->pc = 0x1df5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
label_1df5b0:
    // 0x1df5b0: 0xc04cc04  jal         func_133010
label_1df5b4:
    if (ctx->pc == 0x1DF5B4u) {
        ctx->pc = 0x1DF5B4u;
            // 0x1df5b4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x1DF5B8u;
        goto label_1df5b8;
    }
    ctx->pc = 0x1DF5B0u;
    SET_GPR_U32(ctx, 31, 0x1DF5B8u);
    ctx->pc = 0x1DF5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5B0u;
            // 0x1df5b4: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5B8u; }
        if (ctx->pc != 0x1DF5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5B8u; }
        if (ctx->pc != 0x1DF5B8u) { return; }
    }
    ctx->pc = 0x1DF5B8u;
label_1df5b8:
    // 0x1df5b8: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x1df5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_1df5bc:
    // 0x1df5bc: 0xc075318  jal         func_1D4C60
label_1df5c0:
    if (ctx->pc == 0x1DF5C0u) {
        ctx->pc = 0x1DF5C0u;
            // 0x1df5c0: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->pc = 0x1DF5C4u;
        goto label_1df5c4;
    }
    ctx->pc = 0x1DF5BCu;
    SET_GPR_U32(ctx, 31, 0x1DF5C4u);
    ctx->pc = 0x1DF5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5BCu;
            // 0x1df5c0: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5C4u; }
        if (ctx->pc != 0x1DF5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5C4u; }
        if (ctx->pc != 0x1DF5C4u) { return; }
    }
    ctx->pc = 0x1DF5C4u;
label_1df5c4:
    // 0x1df5c4: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x1df5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_1df5c8:
    // 0x1df5c8: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x1df5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
label_1df5cc:
    // 0x1df5cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1df5ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1df5d0:
    // 0x1df5d0: 0xc0c6250  jal         func_318940
label_1df5d4:
    if (ctx->pc == 0x1DF5D4u) {
        ctx->pc = 0x1DF5D4u;
            // 0x1df5d4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF5D8u;
        goto label_1df5d8;
    }
    ctx->pc = 0x1DF5D0u;
    SET_GPR_U32(ctx, 31, 0x1DF5D8u);
    ctx->pc = 0x1DF5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5D0u;
            // 0x1df5d4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5D8u; }
        if (ctx->pc != 0x1DF5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5D8u; }
        if (ctx->pc != 0x1DF5D8u) { return; }
    }
    ctx->pc = 0x1DF5D8u;
label_1df5d8:
    // 0x1df5d8: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x1df5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_1df5dc:
    // 0x1df5dc: 0x262408f0  addiu       $a0, $s1, 0x8F0
    ctx->pc = 0x1df5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2288));
label_1df5e0:
    // 0x1df5e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1df5e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1df5e4:
    // 0x1df5e4: 0xc0c6250  jal         func_318940
label_1df5e8:
    if (ctx->pc == 0x1DF5E8u) {
        ctx->pc = 0x1DF5E8u;
            // 0x1df5e8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF5ECu;
        goto label_1df5ec;
    }
    ctx->pc = 0x1DF5E4u;
    SET_GPR_U32(ctx, 31, 0x1DF5ECu);
    ctx->pc = 0x1DF5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5E4u;
            // 0x1df5e8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5ECu; }
        if (ctx->pc != 0x1DF5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5ECu; }
        if (ctx->pc != 0x1DF5ECu) { return; }
    }
    ctx->pc = 0x1DF5ECu;
label_1df5ec:
    // 0x1df5ec: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x1df5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1df5f0:
    // 0x1df5f0: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x1df5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_1df5f4:
    // 0x1df5f4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1df5f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1df5f8:
    // 0x1df5f8: 0xc0c753c  jal         func_31D4F0
label_1df5fc:
    if (ctx->pc == 0x1DF5FCu) {
        ctx->pc = 0x1DF5FCu;
            // 0x1df5fc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1DF600u;
        goto label_1df600;
    }
    ctx->pc = 0x1DF5F8u;
    SET_GPR_U32(ctx, 31, 0x1DF600u);
    ctx->pc = 0x1DF5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5F8u;
            // 0x1df5fc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF600u; }
        if (ctx->pc != 0x1DF600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF600u; }
        if (ctx->pc != 0x1DF600u) { return; }
    }
    ctx->pc = 0x1DF600u;
label_1df600:
    // 0x1df600: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x1df600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1df604:
    // 0x1df604: 0x2624092c  addiu       $a0, $s1, 0x92C
    ctx->pc = 0x1df604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
label_1df608:
    // 0x1df608: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1df608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1df60c:
    // 0x1df60c: 0xc0c753c  jal         func_31D4F0
label_1df610:
    if (ctx->pc == 0x1DF610u) {
        ctx->pc = 0x1DF610u;
            // 0x1df610: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1DF614u;
        goto label_1df614;
    }
    ctx->pc = 0x1DF60Cu;
    SET_GPR_U32(ctx, 31, 0x1DF614u);
    ctx->pc = 0x1DF610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF60Cu;
            // 0x1df610: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF614u; }
        if (ctx->pc != 0x1DF614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF614u; }
        if (ctx->pc != 0x1DF614u) { return; }
    }
    ctx->pc = 0x1DF614u;
label_1df614:
    // 0x1df614: 0xc0b6798  jal         func_2D9E60
label_1df618:
    if (ctx->pc == 0x1DF618u) {
        ctx->pc = 0x1DF618u;
            // 0x1df618: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->pc = 0x1DF61Cu;
        goto label_1df61c;
    }
    ctx->pc = 0x1DF614u;
    SET_GPR_U32(ctx, 31, 0x1DF61Cu);
    ctx->pc = 0x1DF618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF614u;
            // 0x1df618: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9E60u;
    if (runtime->hasFunction(0x2D9E60u)) {
        auto targetFn = runtime->lookupFunction(0x2D9E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF61Cu; }
        if (ctx->pc != 0x1DF61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9E60_0x2d9e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF61Cu; }
        if (ctx->pc != 0x1DF61Cu) { return; }
    }
    ctx->pc = 0x1DF61Cu;
label_1df61c:
    // 0x1df61c: 0xc0b9210  jal         func_2E4840
label_1df620:
    if (ctx->pc == 0x1DF620u) {
        ctx->pc = 0x1DF620u;
            // 0x1df620: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->pc = 0x1DF624u;
        goto label_1df624;
    }
    ctx->pc = 0x1DF61Cu;
    SET_GPR_U32(ctx, 31, 0x1DF624u);
    ctx->pc = 0x1DF620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF61Cu;
            // 0x1df620: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF624u; }
        if (ctx->pc != 0x1DF624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF624u; }
        if (ctx->pc != 0x1DF624u) { return; }
    }
    ctx->pc = 0x1DF624u;
label_1df624:
    // 0x1df624: 0xc0b9210  jal         func_2E4840
label_1df628:
    if (ctx->pc == 0x1DF628u) {
        ctx->pc = 0x1DF628u;
            // 0x1df628: 0x26240890  addiu       $a0, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->pc = 0x1DF62Cu;
        goto label_1df62c;
    }
    ctx->pc = 0x1DF624u;
    SET_GPR_U32(ctx, 31, 0x1DF62Cu);
    ctx->pc = 0x1DF628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF624u;
            // 0x1df628: 0x26240890  addiu       $a0, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF62Cu; }
        if (ctx->pc != 0x1DF62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF62Cu; }
        if (ctx->pc != 0x1DF62Cu) { return; }
    }
    ctx->pc = 0x1DF62Cu;
label_1df62c:
    // 0x1df62c: 0xc04f26c  jal         func_13C9B0
label_1df630:
    if (ctx->pc == 0x1DF630u) {
        ctx->pc = 0x1DF630u;
            // 0x1df630: 0x26240140  addiu       $a0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->pc = 0x1DF634u;
        goto label_1df634;
    }
    ctx->pc = 0x1DF62Cu;
    SET_GPR_U32(ctx, 31, 0x1DF634u);
    ctx->pc = 0x1DF630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF62Cu;
            // 0x1df630: 0x26240140  addiu       $a0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF634u; }
        if (ctx->pc != 0x1DF634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF634u; }
        if (ctx->pc != 0x1DF634u) { return; }
    }
    ctx->pc = 0x1DF634u;
label_1df634:
    // 0x1df634: 0xc04f26c  jal         func_13C9B0
label_1df638:
    if (ctx->pc == 0x1DF638u) {
        ctx->pc = 0x1DF638u;
            // 0x1df638: 0x26240280  addiu       $a0, $s1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
        ctx->pc = 0x1DF63Cu;
        goto label_1df63c;
    }
    ctx->pc = 0x1DF634u;
    SET_GPR_U32(ctx, 31, 0x1DF63Cu);
    ctx->pc = 0x1DF638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF634u;
            // 0x1df638: 0x26240280  addiu       $a0, $s1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF63Cu; }
        if (ctx->pc != 0x1DF63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF63Cu; }
        if (ctx->pc != 0x1DF63Cu) { return; }
    }
    ctx->pc = 0x1DF63Cu;
label_1df63c:
    // 0x1df63c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1df63cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1df640:
    // 0x1df640: 0x26240300  addiu       $a0, $s1, 0x300
    ctx->pc = 0x1df640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_1df644:
    // 0x1df644: 0xc04cc04  jal         func_133010
label_1df648:
    if (ctx->pc == 0x1DF648u) {
        ctx->pc = 0x1DF648u;
            // 0x1df648: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->pc = 0x1DF64Cu;
        goto label_1df64c;
    }
    ctx->pc = 0x1DF644u;
    SET_GPR_U32(ctx, 31, 0x1DF64Cu);
    ctx->pc = 0x1DF648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF644u;
            // 0x1df648: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF64Cu; }
        if (ctx->pc != 0x1DF64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF64Cu; }
        if (ctx->pc != 0x1DF64Cu) { return; }
    }
    ctx->pc = 0x1DF64Cu;
label_1df64c:
    // 0x1df64c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1df64cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1df650:
    // 0x1df650: 0x26240310  addiu       $a0, $s1, 0x310
    ctx->pc = 0x1df650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_1df654:
    // 0x1df654: 0xc04cc04  jal         func_133010
label_1df658:
    if (ctx->pc == 0x1DF658u) {
        ctx->pc = 0x1DF658u;
            // 0x1df658: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->pc = 0x1DF65Cu;
        goto label_1df65c;
    }
    ctx->pc = 0x1DF654u;
    SET_GPR_U32(ctx, 31, 0x1DF65Cu);
    ctx->pc = 0x1DF658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF654u;
            // 0x1df658: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF65Cu; }
        if (ctx->pc != 0x1DF65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF65Cu; }
        if (ctx->pc != 0x1DF65Cu) { return; }
    }
    ctx->pc = 0x1DF65Cu;
label_1df65c:
    // 0x1df65c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1df65cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1df660:
    // 0x1df660: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x1df660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_1df664:
    // 0x1df664: 0xc04cc04  jal         func_133010
label_1df668:
    if (ctx->pc == 0x1DF668u) {
        ctx->pc = 0x1DF668u;
            // 0x1df668: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->pc = 0x1DF66Cu;
        goto label_1df66c;
    }
    ctx->pc = 0x1DF664u;
    SET_GPR_U32(ctx, 31, 0x1DF66Cu);
    ctx->pc = 0x1DF668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF664u;
            // 0x1df668: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF66Cu; }
        if (ctx->pc != 0x1DF66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF66Cu; }
        if (ctx->pc != 0x1DF66Cu) { return; }
    }
    ctx->pc = 0x1DF66Cu;
label_1df66c:
    // 0x1df66c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1df66cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1df670:
    // 0x1df670: 0x26240330  addiu       $a0, $s1, 0x330
    ctx->pc = 0x1df670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
label_1df674:
    // 0x1df674: 0xc04cc04  jal         func_133010
label_1df678:
    if (ctx->pc == 0x1DF678u) {
        ctx->pc = 0x1DF678u;
            // 0x1df678: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->pc = 0x1DF67Cu;
        goto label_1df67c;
    }
    ctx->pc = 0x1DF674u;
    SET_GPR_U32(ctx, 31, 0x1DF67Cu);
    ctx->pc = 0x1DF678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF674u;
            // 0x1df678: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF67Cu; }
        if (ctx->pc != 0x1DF67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF67Cu; }
        if (ctx->pc != 0x1DF67Cu) { return; }
    }
    ctx->pc = 0x1DF67Cu;
label_1df67c:
    // 0x1df67c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1df67cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1df680:
    // 0x1df680: 0x26240340  addiu       $a0, $s1, 0x340
    ctx->pc = 0x1df680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_1df684:
    // 0x1df684: 0xc04cc04  jal         func_133010
label_1df688:
    if (ctx->pc == 0x1DF688u) {
        ctx->pc = 0x1DF688u;
            // 0x1df688: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->pc = 0x1DF68Cu;
        goto label_1df68c;
    }
    ctx->pc = 0x1DF684u;
    SET_GPR_U32(ctx, 31, 0x1DF68Cu);
    ctx->pc = 0x1DF688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF684u;
            // 0x1df688: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF68Cu; }
        if (ctx->pc != 0x1DF68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF68Cu; }
        if (ctx->pc != 0x1DF68Cu) { return; }
    }
    ctx->pc = 0x1DF68Cu;
label_1df68c:
    // 0x1df68c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1df68cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1df690:
    // 0x1df690: 0x262403c0  addiu       $a0, $s1, 0x3C0
    ctx->pc = 0x1df690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 960));
label_1df694:
    // 0x1df694: 0xc04cc04  jal         func_133010
label_1df698:
    if (ctx->pc == 0x1DF698u) {
        ctx->pc = 0x1DF698u;
            // 0x1df698: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->pc = 0x1DF69Cu;
        goto label_1df69c;
    }
    ctx->pc = 0x1DF694u;
    SET_GPR_U32(ctx, 31, 0x1DF69Cu);
    ctx->pc = 0x1DF698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF694u;
            // 0x1df698: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF69Cu; }
        if (ctx->pc != 0x1DF69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF69Cu; }
        if (ctx->pc != 0x1DF69Cu) { return; }
    }
    ctx->pc = 0x1DF69Cu;
label_1df69c:
    // 0x1df69c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1df69cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1df6a0:
    // 0x1df6a0: 0x26240350  addiu       $a0, $s1, 0x350
    ctx->pc = 0x1df6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
label_1df6a4:
    // 0x1df6a4: 0xc04cc04  jal         func_133010
label_1df6a8:
    if (ctx->pc == 0x1DF6A8u) {
        ctx->pc = 0x1DF6A8u;
            // 0x1df6a8: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->pc = 0x1DF6ACu;
        goto label_1df6ac;
    }
    ctx->pc = 0x1DF6A4u;
    SET_GPR_U32(ctx, 31, 0x1DF6ACu);
    ctx->pc = 0x1DF6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF6A4u;
            // 0x1df6a8: 0x24a5c8f0  addiu       $a1, $a1, -0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6ACu; }
        if (ctx->pc != 0x1DF6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6ACu; }
        if (ctx->pc != 0x1DF6ACu) { return; }
    }
    ctx->pc = 0x1DF6ACu;
label_1df6ac:
    // 0x1df6ac: 0xae200de4  sw          $zero, 0xDE4($s1)
    ctx->pc = 0x1df6acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 0));
label_1df6b0:
    // 0x1df6b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1df6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1df6b4:
    // 0x1df6b4: 0xae200dd8  sw          $zero, 0xDD8($s1)
    ctx->pc = 0x1df6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3544), GPR_U32(ctx, 0));
label_1df6b8:
    // 0x1df6b8: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1df6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_1df6bc:
    // 0x1df6bc: 0xae220df0  sw          $v0, 0xDF0($s1)
    ctx->pc = 0x1df6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3568), GPR_U32(ctx, 2));
label_1df6c0:
    // 0x1df6c0: 0x26240a50  addiu       $a0, $s1, 0xA50
    ctx->pc = 0x1df6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
label_1df6c4:
    // 0x1df6c4: 0xae200df4  sw          $zero, 0xDF4($s1)
    ctx->pc = 0x1df6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3572), GPR_U32(ctx, 0));
label_1df6c8:
    // 0x1df6c8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1df6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_1df6cc:
    // 0x1df6cc: 0xae230e9c  sw          $v1, 0xE9C($s1)
    ctx->pc = 0x1df6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3740), GPR_U32(ctx, 3));
label_1df6d0:
    // 0x1df6d0: 0xae220e98  sw          $v0, 0xE98($s1)
    ctx->pc = 0x1df6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3736), GPR_U32(ctx, 2));
label_1df6d4:
    // 0x1df6d4: 0xae200dc0  sw          $zero, 0xDC0($s1)
    ctx->pc = 0x1df6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3520), GPR_U32(ctx, 0));
label_1df6d8:
    // 0x1df6d8: 0xae200dc4  sw          $zero, 0xDC4($s1)
    ctx->pc = 0x1df6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3524), GPR_U32(ctx, 0));
label_1df6dc:
    // 0x1df6dc: 0xae200dcc  sw          $zero, 0xDCC($s1)
    ctx->pc = 0x1df6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3532), GPR_U32(ctx, 0));
label_1df6e0:
    // 0x1df6e0: 0xae200dd0  sw          $zero, 0xDD0($s1)
    ctx->pc = 0x1df6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3536), GPR_U32(ctx, 0));
label_1df6e4:
    // 0x1df6e4: 0xc0eeb94  jal         func_3BAE50
label_1df6e8:
    if (ctx->pc == 0x1DF6E8u) {
        ctx->pc = 0x1DF6E8u;
            // 0x1df6e8: 0xae200dd4  sw          $zero, 0xDD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3540), GPR_U32(ctx, 0));
        ctx->pc = 0x1DF6ECu;
        goto label_1df6ec;
    }
    ctx->pc = 0x1DF6E4u;
    SET_GPR_U32(ctx, 31, 0x1DF6ECu);
    ctx->pc = 0x1DF6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF6E4u;
            // 0x1df6e8: 0xae200dd4  sw          $zero, 0xDD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BAE50u;
    if (runtime->hasFunction(0x3BAE50u)) {
        auto targetFn = runtime->lookupFunction(0x3BAE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6ECu; }
        if (ctx->pc != 0x1DF6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BAE50_0x3bae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6ECu; }
        if (ctx->pc != 0x1DF6ECu) { return; }
    }
    ctx->pc = 0x1DF6ECu;
label_1df6ec:
    // 0x1df6ec: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1df6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_1df6f0:
    // 0x1df6f0: 0xc0ab808  jal         func_2AE020
label_1df6f4:
    if (ctx->pc == 0x1DF6F4u) {
        ctx->pc = 0x1DF6F4u;
            // 0x1df6f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DF6F8u;
        goto label_1df6f8;
    }
    ctx->pc = 0x1DF6F0u;
    SET_GPR_U32(ctx, 31, 0x1DF6F8u);
    ctx->pc = 0x1DF6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF6F0u;
            // 0x1df6f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6F8u; }
        if (ctx->pc != 0x1DF6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6F8u; }
        if (ctx->pc != 0x1DF6F8u) { return; }
    }
    ctx->pc = 0x1DF6F8u;
label_1df6f8:
    // 0x1df6f8: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1df6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_1df6fc:
    // 0x1df6fc: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x1df6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_1df700:
    // 0x1df700: 0xae220d9c  sw          $v0, 0xD9C($s1)
    ctx->pc = 0x1df700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3484), GPR_U32(ctx, 2));
label_1df704:
    // 0x1df704: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x1df704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_1df708:
    // 0x1df708: 0x8e260da0  lw          $a2, 0xDA0($s1)
    ctx->pc = 0x1df708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_1df70c:
    // 0x1df70c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1df70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1df710:
    // 0x1df710: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1df710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1df714:
    // 0x1df714: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x1df714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_1df718:
    // 0x1df718: 0xae250da0  sw          $a1, 0xDA0($s1)
    ctx->pc = 0x1df718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3488), GPR_U32(ctx, 5));
label_1df71c:
    // 0x1df71c: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x1df71cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_1df720:
    // 0x1df720: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1df720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1df724:
    // 0x1df724: 0xae250da0  sw          $a1, 0xDA0($s1)
    ctx->pc = 0x1df724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3488), GPR_U32(ctx, 5));
label_1df728:
    // 0x1df728: 0xae240da0  sw          $a0, 0xDA0($s1)
    ctx->pc = 0x1df728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3488), GPR_U32(ctx, 4));
label_1df72c:
    // 0x1df72c: 0xae20118c  sw          $zero, 0x118C($s1)
    ctx->pc = 0x1df72cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4492), GPR_U32(ctx, 0));
label_1df730:
    // 0x1df730: 0xa22011cc  sb          $zero, 0x11CC($s1)
    ctx->pc = 0x1df730u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4556), (uint8_t)GPR_U32(ctx, 0));
label_1df734:
    // 0x1df734: 0xae2311d0  sw          $v1, 0x11D0($s1)
    ctx->pc = 0x1df734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4560), GPR_U32(ctx, 3));
label_1df738:
    // 0x1df738: 0xae221220  sw          $v0, 0x1220($s1)
    ctx->pc = 0x1df738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4640), GPR_U32(ctx, 2));
label_1df73c:
    // 0x1df73c: 0xa22011c0  sb          $zero, 0x11C0($s1)
    ctx->pc = 0x1df73cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4544), (uint8_t)GPR_U32(ctx, 0));
label_1df740:
    // 0x1df740: 0x8e2511c4  lw          $a1, 0x11C4($s1)
    ctx->pc = 0x1df740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4548)));
label_1df744:
    // 0x1df744: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_1df748:
    if (ctx->pc == 0x1DF748u) {
        ctx->pc = 0x1DF748u;
            // 0x1df748: 0x8e2511c8  lw          $a1, 0x11C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4552)));
        ctx->pc = 0x1DF74Cu;
        goto label_1df74c;
    }
    ctx->pc = 0x1DF744u;
    {
        const bool branch_taken_0x1df744 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df744) {
            ctx->pc = 0x1DF748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF744u;
            // 0x1df748: 0x8e2511c8  lw          $a1, 0x11C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4552)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF764u;
            goto label_1df764;
        }
    }
    ctx->pc = 0x1DF74Cu;
label_1df74c:
    // 0x1df74c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1df74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1df750:
    // 0x1df750: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x1df750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_1df754:
    // 0x1df754: 0xc057b7c  jal         func_15EDF0
label_1df758:
    if (ctx->pc == 0x1DF758u) {
        ctx->pc = 0x1DF758u;
            // 0x1df758: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DF75Cu;
        goto label_1df75c;
    }
    ctx->pc = 0x1DF754u;
    SET_GPR_U32(ctx, 31, 0x1DF75Cu);
    ctx->pc = 0x1DF758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF754u;
            // 0x1df758: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF75Cu; }
        if (ctx->pc != 0x1DF75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF75Cu; }
        if (ctx->pc != 0x1DF75Cu) { return; }
    }
    ctx->pc = 0x1DF75Cu;
label_1df75c:
    // 0x1df75c: 0xae2011c4  sw          $zero, 0x11C4($s1)
    ctx->pc = 0x1df75cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4548), GPR_U32(ctx, 0));
label_1df760:
    // 0x1df760: 0x8e2511c8  lw          $a1, 0x11C8($s1)
    ctx->pc = 0x1df760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4552)));
label_1df764:
    // 0x1df764: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_1df768:
    if (ctx->pc == 0x1DF768u) {
        ctx->pc = 0x1DF768u;
            // 0x1df768: 0xae200e1c  sw          $zero, 0xE1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
        ctx->pc = 0x1DF76Cu;
        goto label_1df76c;
    }
    ctx->pc = 0x1DF764u;
    {
        const bool branch_taken_0x1df764 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df764) {
            ctx->pc = 0x1DF768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF764u;
            // 0x1df768: 0xae200e1c  sw          $zero, 0xE1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF784u;
            goto label_1df784;
        }
    }
    ctx->pc = 0x1DF76Cu;
label_1df76c:
    // 0x1df76c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1df76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1df770:
    // 0x1df770: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x1df770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_1df774:
    // 0x1df774: 0xc057b7c  jal         func_15EDF0
label_1df778:
    if (ctx->pc == 0x1DF778u) {
        ctx->pc = 0x1DF778u;
            // 0x1df778: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DF77Cu;
        goto label_1df77c;
    }
    ctx->pc = 0x1DF774u;
    SET_GPR_U32(ctx, 31, 0x1DF77Cu);
    ctx->pc = 0x1DF778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF774u;
            // 0x1df778: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF77Cu; }
        if (ctx->pc != 0x1DF77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF77Cu; }
        if (ctx->pc != 0x1DF77Cu) { return; }
    }
    ctx->pc = 0x1DF77Cu;
label_1df77c:
    // 0x1df77c: 0xae2011c8  sw          $zero, 0x11C8($s1)
    ctx->pc = 0x1df77cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4552), GPR_U32(ctx, 0));
label_1df780:
    // 0x1df780: 0xae200e1c  sw          $zero, 0xE1C($s1)
    ctx->pc = 0x1df780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
label_1df784:
    // 0x1df784: 0xae200e20  sw          $zero, 0xE20($s1)
    ctx->pc = 0x1df784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3616), GPR_U32(ctx, 0));
label_1df788:
    // 0x1df788: 0xae200e24  sw          $zero, 0xE24($s1)
    ctx->pc = 0x1df788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3620), GPR_U32(ctx, 0));
label_1df78c:
    // 0x1df78c: 0xae2011d4  sw          $zero, 0x11D4($s1)
    ctx->pc = 0x1df78cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4564), GPR_U32(ctx, 0));
label_1df790:
    // 0x1df790: 0xae2011d8  sw          $zero, 0x11D8($s1)
    ctx->pc = 0x1df790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4568), GPR_U32(ctx, 0));
label_1df794:
    // 0x1df794: 0x8e240d78  lw          $a0, 0xD78($s1)
    ctx->pc = 0x1df794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
label_1df798:
    // 0x1df798: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1df798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1df79c:
    // 0x1df79c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1df79cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1df7a0:
    // 0x1df7a0: 0x320f809  jalr        $t9
label_1df7a4:
    if (ctx->pc == 0x1DF7A4u) {
        ctx->pc = 0x1DF7A8u;
        goto label_1df7a8;
    }
    ctx->pc = 0x1DF7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF7A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DF7A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF7A8u; }
            if (ctx->pc != 0x1DF7A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DF7A8u;
label_1df7a8:
    // 0x1df7a8: 0xc1309f0  jal         func_4C27C0
label_1df7ac:
    if (ctx->pc == 0x1DF7ACu) {
        ctx->pc = 0x1DF7ACu;
            // 0x1df7ac: 0x26240c90  addiu       $a0, $s1, 0xC90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3216));
        ctx->pc = 0x1DF7B0u;
        goto label_1df7b0;
    }
    ctx->pc = 0x1DF7A8u;
    SET_GPR_U32(ctx, 31, 0x1DF7B0u);
    ctx->pc = 0x1DF7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF7A8u;
            // 0x1df7ac: 0x26240c90  addiu       $a0, $s1, 0xC90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C27C0u;
    if (runtime->hasFunction(0x4C27C0u)) {
        auto targetFn = runtime->lookupFunction(0x4C27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF7B0u; }
        if (ctx->pc != 0x1DF7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C27C0_0x4c27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF7B0u; }
        if (ctx->pc != 0x1DF7B0u) { return; }
    }
    ctx->pc = 0x1DF7B0u;
label_1df7b0:
    // 0x1df7b0: 0x8e220e38  lw          $v0, 0xE38($s1)
    ctx->pc = 0x1df7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_1df7b4:
    // 0x1df7b4: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1df7b4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1df7b8:
    // 0x1df7b8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_1df7bc:
    if (ctx->pc == 0x1DF7BCu) {
        ctx->pc = 0x1DF7BCu;
            // 0x1df7bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7C0u;
        goto label_1df7c0;
    }
    ctx->pc = 0x1DF7B8u;
    {
        const bool branch_taken_0x1df7b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DF7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF7B8u;
            // 0x1df7bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7b8) {
            ctx->pc = 0x1DF7D0u;
            goto label_1df7d0;
        }
    }
    ctx->pc = 0x1DF7C0u;
label_1df7c0:
    // 0x1df7c0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1df7c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1df7c4:
    // 0x1df7c4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1df7c8:
    if (ctx->pc == 0x1DF7C8u) {
        ctx->pc = 0x1DF7CCu;
        goto label_1df7cc;
    }
    ctx->pc = 0x1DF7C4u;
    {
        const bool branch_taken_0x1df7c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df7c4) {
            ctx->pc = 0x1DF7D0u;
            goto label_1df7d0;
        }
    }
    ctx->pc = 0x1DF7CCu;
label_1df7cc:
    // 0x1df7cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1df7ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1df7d0:
    // 0x1df7d0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1df7d4:
    if (ctx->pc == 0x1DF7D4u) {
        ctx->pc = 0x1DF7D8u;
        goto label_1df7d8;
    }
    ctx->pc = 0x1DF7D0u;
    {
        const bool branch_taken_0x1df7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df7d0) {
            ctx->pc = 0x1DF810u;
            goto label_1df810;
        }
    }
    ctx->pc = 0x1DF7D8u;
label_1df7d8:
    // 0x1df7d8: 0x822211aa  lb          $v0, 0x11AA($s1)
    ctx->pc = 0x1df7d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_1df7dc:
    // 0x1df7dc: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1df7dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1df7e0:
    // 0x1df7e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1df7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1df7e4:
    // 0x1df7e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1df7e8:
    if (ctx->pc == 0x1DF7E8u) {
        ctx->pc = 0x1DF7ECu;
        goto label_1df7ec;
    }
    ctx->pc = 0x1DF7E4u;
    {
        const bool branch_taken_0x1df7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df7e4) {
            ctx->pc = 0x1DF804u;
            goto label_1df804;
        }
    }
    ctx->pc = 0x1DF7ECu;
label_1df7ec:
    // 0x1df7ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1df7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1df7f0:
    // 0x1df7f0: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1df7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1df7f4:
    // 0x1df7f4: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x1df7f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
label_1df7f8:
    // 0x1df7f8: 0x401027  not         $v0, $v0
    ctx->pc = 0x1df7f8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_1df7fc:
    // 0x1df7fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1df7fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1df800:
    // 0x1df800: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1df800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1df804:
    // 0x1df804: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1df808:
    if (ctx->pc == 0x1DF808u) {
        ctx->pc = 0x1DF80Cu;
        goto label_1df80c;
    }
    ctx->pc = 0x1DF804u;
    {
        const bool branch_taken_0x1df804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df804) {
            ctx->pc = 0x1DF810u;
            goto label_1df810;
        }
    }
    ctx->pc = 0x1DF80Cu;
label_1df80c:
    // 0x1df80c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1df80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df810:
    // 0x1df810: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
label_1df814:
    if (ctx->pc == 0x1DF814u) {
        ctx->pc = 0x1DF814u;
            // 0x1df814: 0x8e230e34  lw          $v1, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->pc = 0x1DF818u;
        goto label_1df818;
    }
    ctx->pc = 0x1DF810u;
    {
        const bool branch_taken_0x1df810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df810) {
            ctx->pc = 0x1DF814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF810u;
            // 0x1df814: 0x8e230e34  lw          $v1, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF868u;
            goto label_1df868;
        }
    }
    ctx->pc = 0x1DF818u;
label_1df818:
    // 0x1df818: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1df818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1df81c:
    // 0x1df81c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1df81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df820:
    // 0x1df820: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x1df820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1df824:
    // 0x1df824: 0x8c42095c  lw          $v0, 0x95C($v0)
    ctx->pc = 0x1df824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2396)));
label_1df828:
    // 0x1df828: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
label_1df82c:
    if (ctx->pc == 0x1DF82Cu) {
        ctx->pc = 0x1DF82Cu;
            // 0x1df82c: 0x8e230d68  lw          $v1, 0xD68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3432)));
        ctx->pc = 0x1DF830u;
        goto label_1df830;
    }
    ctx->pc = 0x1DF828u;
    {
        const bool branch_taken_0x1df828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1df828) {
            ctx->pc = 0x1DF82Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF828u;
            // 0x1df82c: 0x8e230d68  lw          $v1, 0xD68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3432)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF854u;
            goto label_1df854;
        }
    }
    ctx->pc = 0x1DF830u;
label_1df830:
    // 0x1df830: 0x8e220d68  lw          $v0, 0xD68($s1)
    ctx->pc = 0x1df830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3432)));
label_1df834:
    // 0x1df834: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1df838:
    if (ctx->pc == 0x1DF838u) {
        ctx->pc = 0x1DF83Cu;
        goto label_1df83c;
    }
    ctx->pc = 0x1DF834u;
    {
        const bool branch_taken_0x1df834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df834) {
            ctx->pc = 0x1DF864u;
            goto label_1df864;
        }
    }
    ctx->pc = 0x1DF83Cu;
label_1df83c:
    // 0x1df83c: 0xa043001c  sb          $v1, 0x1C($v0)
    ctx->pc = 0x1df83cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 3));
label_1df840:
    // 0x1df840: 0x8e220d68  lw          $v0, 0xD68($s1)
    ctx->pc = 0x1df840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3432)));
label_1df844:
    // 0x1df844: 0xae220d60  sw          $v0, 0xD60($s1)
    ctx->pc = 0x1df844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3424), GPR_U32(ctx, 2));
label_1df848:
    // 0x1df848: 0x8e220e38  lw          $v0, 0xE38($s1)
    ctx->pc = 0x1df848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_1df84c:
    // 0x1df84c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1df850:
    if (ctx->pc == 0x1DF850u) {
        ctx->pc = 0x1DF850u;
            // 0x1df850: 0xae220e34  sw          $v0, 0xE34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3636), GPR_U32(ctx, 2));
        ctx->pc = 0x1DF854u;
        goto label_1df854;
    }
    ctx->pc = 0x1DF84Cu;
    {
        const bool branch_taken_0x1df84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF84Cu;
            // 0x1df850: 0xae220e34  sw          $v0, 0xE34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df84c) {
            ctx->pc = 0x1DF864u;
            goto label_1df864;
        }
    }
    ctx->pc = 0x1DF854u;
label_1df854:
    // 0x1df854: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1df854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1df858:
    // 0x1df858: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x1df858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1df85c:
    // 0x1df85c: 0xae230d60  sw          $v1, 0xD60($s1)
    ctx->pc = 0x1df85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3424), GPR_U32(ctx, 3));
label_1df860:
    // 0x1df860: 0xae220e34  sw          $v0, 0xE34($s1)
    ctx->pc = 0x1df860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3636), GPR_U32(ctx, 2));
label_1df864:
    // 0x1df864: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x1df864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_1df868:
    // 0x1df868: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1df868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1df86c:
    // 0x1df86c: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
label_1df870:
    if (ctx->pc == 0x1DF870u) {
        ctx->pc = 0x1DF870u;
            // 0x1df870: 0x8e230a78  lw          $v1, 0xA78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2680)));
        ctx->pc = 0x1DF874u;
        goto label_1df874;
    }
    ctx->pc = 0x1DF86Cu;
    {
        const bool branch_taken_0x1df86c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1df86c) {
            ctx->pc = 0x1DF870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF86Cu;
            // 0x1df870: 0x8e230a78  lw          $v1, 0xA78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2680)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF8A8u;
            goto label_1df8a8;
        }
    }
    ctx->pc = 0x1DF874u;
label_1df874:
    // 0x1df874: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1df874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1df878:
    // 0x1df878: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1df878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1df87c:
    // 0x1df87c: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1df87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1df880:
    // 0x1df880: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1df880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_1df884:
    // 0x1df884: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_1df888:
    if (ctx->pc == 0x1DF888u) {
        ctx->pc = 0x1DF88Cu;
        goto label_1df88c;
    }
    ctx->pc = 0x1DF884u;
    {
        const bool branch_taken_0x1df884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1df884) {
            ctx->pc = 0x1DF8A4u;
            goto label_1df8a4;
        }
    }
    ctx->pc = 0x1DF88Cu;
label_1df88c:
    // 0x1df88c: 0x8e230a78  lw          $v1, 0xA78($s1)
    ctx->pc = 0x1df88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2680)));
label_1df890:
    // 0x1df890: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1df890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1df894:
    // 0x1df894: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1df894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1df898:
    // 0x1df898: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1df898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1df89c:
    // 0x1df89c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1df8a0:
    if (ctx->pc == 0x1DF8A0u) {
        ctx->pc = 0x1DF8A0u;
            // 0x1df8a0: 0xae220a78  sw          $v0, 0xA78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2680), GPR_U32(ctx, 2));
        ctx->pc = 0x1DF8A4u;
        goto label_1df8a4;
    }
    ctx->pc = 0x1DF89Cu;
    {
        const bool branch_taken_0x1df89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF89Cu;
            // 0x1df8a0: 0xae220a78  sw          $v0, 0xA78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df89c) {
            ctx->pc = 0x1DF8B4u;
            goto label_1df8b4;
        }
    }
    ctx->pc = 0x1DF8A4u;
label_1df8a4:
    // 0x1df8a4: 0x8e230a78  lw          $v1, 0xA78($s1)
    ctx->pc = 0x1df8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2680)));
label_1df8a8:
    // 0x1df8a8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1df8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1df8ac:
    // 0x1df8ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1df8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1df8b0:
    // 0x1df8b0: 0xae220a78  sw          $v0, 0xA78($s1)
    ctx->pc = 0x1df8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2680), GPR_U32(ctx, 2));
label_1df8b4:
    // 0x1df8b4: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x1df8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_1df8b8:
    // 0x1df8b8: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x1df8b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1df8bc:
    // 0x1df8bc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1df8bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1df8c0:
    // 0x1df8c0: 0x320f809  jalr        $t9
label_1df8c4:
    if (ctx->pc == 0x1DF8C4u) {
        ctx->pc = 0x1DF8C8u;
        goto label_1df8c8;
    }
    ctx->pc = 0x1DF8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF8C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DF8C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF8C8u; }
            if (ctx->pc != 0x1DF8C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DF8C8u;
label_1df8c8:
    // 0x1df8c8: 0x8e220d60  lw          $v0, 0xD60($s1)
    ctx->pc = 0x1df8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_1df8cc:
    // 0x1df8cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1df8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df8d0:
    // 0x1df8d0: 0xa043001c  sb          $v1, 0x1C($v0)
    ctx->pc = 0x1df8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 3));
label_1df8d4:
    // 0x1df8d4: 0x8e240d64  lw          $a0, 0xD64($s1)
    ctx->pc = 0x1df8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3428)));
label_1df8d8:
    // 0x1df8d8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_1df8dc:
    if (ctx->pc == 0x1DF8DCu) {
        ctx->pc = 0x1DF8DCu;
            // 0x1df8dc: 0x8e220e38  lw          $v0, 0xE38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
        ctx->pc = 0x1DF8E0u;
        goto label_1df8e0;
    }
    ctx->pc = 0x1DF8D8u;
    {
        const bool branch_taken_0x1df8d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df8d8) {
            ctx->pc = 0x1DF8DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF8D8u;
            // 0x1df8dc: 0x8e220e38  lw          $v0, 0xE38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF900u;
            goto label_1df900;
        }
    }
    ctx->pc = 0x1DF8E0u;
label_1df8e0:
    // 0x1df8e0: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x1df8e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1df8e4:
    // 0x1df8e4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1df8e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1df8e8:
    // 0x1df8e8: 0x320f809  jalr        $t9
label_1df8ec:
    if (ctx->pc == 0x1DF8ECu) {
        ctx->pc = 0x1DF8F0u;
        goto label_1df8f0;
    }
    ctx->pc = 0x1DF8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF8F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DF8F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF8F0u; }
            if (ctx->pc != 0x1DF8F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DF8F0u;
label_1df8f0:
    // 0x1df8f0: 0x8e220d64  lw          $v0, 0xD64($s1)
    ctx->pc = 0x1df8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3428)));
label_1df8f4:
    // 0x1df8f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1df8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df8f8:
    // 0x1df8f8: 0xa043001c  sb          $v1, 0x1C($v0)
    ctx->pc = 0x1df8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 3));
label_1df8fc:
    // 0x1df8fc: 0x8e220e38  lw          $v0, 0xE38($s1)
    ctx->pc = 0x1df8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_1df900:
    // 0x1df900: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1df900u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1df904:
    // 0x1df904: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_1df908:
    if (ctx->pc == 0x1DF908u) {
        ctx->pc = 0x1DF908u;
            // 0x1df908: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF90Cu;
        goto label_1df90c;
    }
    ctx->pc = 0x1DF904u;
    {
        const bool branch_taken_0x1df904 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DF908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF904u;
            // 0x1df908: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df904) {
            ctx->pc = 0x1DF91Cu;
            goto label_1df91c;
        }
    }
    ctx->pc = 0x1DF90Cu;
label_1df90c:
    // 0x1df90c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1df90cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1df910:
    // 0x1df910: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1df914:
    if (ctx->pc == 0x1DF914u) {
        ctx->pc = 0x1DF918u;
        goto label_1df918;
    }
    ctx->pc = 0x1DF910u;
    {
        const bool branch_taken_0x1df910 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df910) {
            ctx->pc = 0x1DF91Cu;
            goto label_1df91c;
        }
    }
    ctx->pc = 0x1DF918u;
label_1df918:
    // 0x1df918: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1df918u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1df91c:
    // 0x1df91c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1df920:
    if (ctx->pc == 0x1DF920u) {
        ctx->pc = 0x1DF924u;
        goto label_1df924;
    }
    ctx->pc = 0x1DF91Cu;
    {
        const bool branch_taken_0x1df91c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df91c) {
            ctx->pc = 0x1DF95Cu;
            goto label_1df95c;
        }
    }
    ctx->pc = 0x1DF924u;
label_1df924:
    // 0x1df924: 0x822211aa  lb          $v0, 0x11AA($s1)
    ctx->pc = 0x1df924u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_1df928:
    // 0x1df928: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1df928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1df92c:
    // 0x1df92c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1df92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1df930:
    // 0x1df930: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1df934:
    if (ctx->pc == 0x1DF934u) {
        ctx->pc = 0x1DF938u;
        goto label_1df938;
    }
    ctx->pc = 0x1DF930u;
    {
        const bool branch_taken_0x1df930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df930) {
            ctx->pc = 0x1DF950u;
            goto label_1df950;
        }
    }
    ctx->pc = 0x1DF938u;
label_1df938:
    // 0x1df938: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1df938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1df93c:
    // 0x1df93c: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1df93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1df940:
    // 0x1df940: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x1df940u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
label_1df944:
    // 0x1df944: 0x401027  not         $v0, $v0
    ctx->pc = 0x1df944u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_1df948:
    // 0x1df948: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1df948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1df94c:
    // 0x1df94c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1df94cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1df950:
    // 0x1df950: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1df954:
    if (ctx->pc == 0x1DF954u) {
        ctx->pc = 0x1DF958u;
        goto label_1df958;
    }
    ctx->pc = 0x1DF950u;
    {
        const bool branch_taken_0x1df950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df950) {
            ctx->pc = 0x1DF95Cu;
            goto label_1df95c;
        }
    }
    ctx->pc = 0x1DF958u;
label_1df958:
    // 0x1df958: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1df958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df95c:
    // 0x1df95c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_1df960:
    if (ctx->pc == 0x1DF960u) {
        ctx->pc = 0x1DF964u;
        goto label_1df964;
    }
    ctx->pc = 0x1DF95Cu;
    {
        const bool branch_taken_0x1df95c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df95c) {
            ctx->pc = 0x1DF974u;
            goto label_1df974;
        }
    }
    ctx->pc = 0x1DF964u;
label_1df964:
    // 0x1df964: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x1df964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_1df968:
    // 0x1df968: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1df968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1df96c:
    // 0x1df96c: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
label_1df970:
    if (ctx->pc == 0x1DF970u) {
        ctx->pc = 0x1DF970u;
            // 0x1df970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF974u;
        goto label_1df974;
    }
    ctx->pc = 0x1DF96Cu;
    {
        const bool branch_taken_0x1df96c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1df96c) {
            ctx->pc = 0x1DF970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF96Cu;
            // 0x1df970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DF9A8u;
            goto label_1df9a8;
        }
    }
    ctx->pc = 0x1DF974u;
label_1df974:
    // 0x1df974: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1df974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1df978:
    // 0x1df978: 0x8e230d98  lw          $v1, 0xD98($s1)
    ctx->pc = 0x1df978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_1df97c:
    // 0x1df97c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x1df97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_1df980:
    // 0x1df980: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1df980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1df984:
    // 0x1df984: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1df984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1df988:
    // 0x1df988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1df988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1df98c:
    // 0x1df98c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1df98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1df990:
    // 0x1df990: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1df990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1df994:
    // 0x1df994: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1df994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1df998:
    // 0x1df998: 0x320f809  jalr        $t9
label_1df99c:
    if (ctx->pc == 0x1DF99Cu) {
        ctx->pc = 0x1DF9A0u;
        goto label_1df9a0;
    }
    ctx->pc = 0x1DF998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF9A0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DF9A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF9A0u; }
            if (ctx->pc != 0x1DF9A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DF9A0u;
label_1df9a0:
    // 0x1df9a0: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x1df9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_1df9a4:
    // 0x1df9a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1df9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1df9a8:
    // 0x1df9a8: 0xc07649c  jal         func_1D9270
label_1df9ac:
    if (ctx->pc == 0x1DF9ACu) {
        ctx->pc = 0x1DF9ACu;
            // 0x1df9ac: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x1DF9B0u;
        goto label_1df9b0;
    }
    ctx->pc = 0x1DF9A8u;
    SET_GPR_U32(ctx, 31, 0x1DF9B0u);
    ctx->pc = 0x1DF9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF9A8u;
            // 0x1df9ac: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF9B0u; }
        if (ctx->pc != 0x1DF9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF9B0u; }
        if (ctx->pc != 0x1DF9B0u) { return; }
    }
    ctx->pc = 0x1DF9B0u;
label_1df9b0:
    // 0x1df9b0: 0xc0bbec8  jal         func_2EFB20
label_1df9b4:
    if (ctx->pc == 0x1DF9B4u) {
        ctx->pc = 0x1DF9B4u;
            // 0x1df9b4: 0x26240ab0  addiu       $a0, $s1, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
        ctx->pc = 0x1DF9B8u;
        goto label_1df9b8;
    }
    ctx->pc = 0x1DF9B0u;
    SET_GPR_U32(ctx, 31, 0x1DF9B8u);
    ctx->pc = 0x1DF9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF9B0u;
            // 0x1df9b4: 0x26240ab0  addiu       $a0, $s1, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EFB20u;
    if (runtime->hasFunction(0x2EFB20u)) {
        auto targetFn = runtime->lookupFunction(0x2EFB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF9B8u; }
        if (ctx->pc != 0x1DF9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EFB20_0x2efb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF9B8u; }
        if (ctx->pc != 0x1DF9B8u) { return; }
    }
    ctx->pc = 0x1DF9B8u;
label_1df9b8:
    // 0x1df9b8: 0xc0754b4  jal         func_1D52D0
label_1df9bc:
    if (ctx->pc == 0x1DF9BCu) {
        ctx->pc = 0x1DF9BCu;
            // 0x1df9bc: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->pc = 0x1DF9C0u;
        goto label_1df9c0;
    }
    ctx->pc = 0x1DF9B8u;
    SET_GPR_U32(ctx, 31, 0x1DF9C0u);
    ctx->pc = 0x1DF9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF9B8u;
            // 0x1df9bc: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF9C0u; }
        if (ctx->pc != 0x1DF9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF9C0u; }
        if (ctx->pc != 0x1DF9C0u) { return; }
    }
    ctx->pc = 0x1DF9C0u;
label_1df9c0:
    // 0x1df9c0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1df9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1df9c4:
    // 0x1df9c4: 0xe6200de0  swc1        $f0, 0xDE0($s1)
    ctx->pc = 0x1df9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3552), bits); }
label_1df9c8:
    // 0x1df9c8: 0xc0be408  jal         func_2F9020
label_1df9cc:
    if (ctx->pc == 0x1DF9CCu) {
        ctx->pc = 0x1DF9CCu;
            // 0x1df9cc: 0x8e240d70  lw          $a0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->pc = 0x1DF9D0u;
        goto label_1df9d0;
    }
    ctx->pc = 0x1DF9C8u;
    SET_GPR_U32(ctx, 31, 0x1DF9D0u);
    ctx->pc = 0x1DF9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF9C8u;
            // 0x1df9cc: 0x8e240d70  lw          $a0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9020u;
    if (runtime->hasFunction(0x2F9020u)) {
        auto targetFn = runtime->lookupFunction(0x2F9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF9D0u; }
        if (ctx->pc != 0x1DF9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9020_0x2f9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF9D0u; }
        if (ctx->pc != 0x1DF9D0u) { return; }
    }
    ctx->pc = 0x1DF9D0u;
label_1df9d0:
    // 0x1df9d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1df9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1df9d4:
    // 0x1df9d4: 0xae250db4  sw          $a1, 0xDB4($s1)
    ctx->pc = 0x1df9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3508), GPR_U32(ctx, 5));
label_1df9d8:
    // 0x1df9d8: 0xae250db0  sw          $a1, 0xDB0($s1)
    ctx->pc = 0x1df9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3504), GPR_U32(ctx, 5));
label_1df9dc:
    // 0x1df9dc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1df9dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1df9e0:
    // 0x1df9e0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x1df9e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_1df9e4:
    // 0x1df9e4: 0x320f809  jalr        $t9
label_1df9e8:
    if (ctx->pc == 0x1DF9E8u) {
        ctx->pc = 0x1DF9E8u;
            // 0x1df9e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9ECu;
        goto label_1df9ec;
    }
    ctx->pc = 0x1DF9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF9ECu);
        ctx->pc = 0x1DF9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF9E4u;
            // 0x1df9e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DF9ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF9ECu; }
            if (ctx->pc != 0x1DF9ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1DF9ECu;
label_1df9ec:
    // 0x1df9ec: 0x8e220d70  lw          $v0, 0xD70($s1)
    ctx->pc = 0x1df9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_1df9f0:
    // 0x1df9f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1df9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df9f4:
    // 0x1df9f4: 0xa04300dd  sb          $v1, 0xDD($v0)
    ctx->pc = 0x1df9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 221), (uint8_t)GPR_U32(ctx, 3));
label_1df9f8:
    // 0x1df9f8: 0x8e320d6c  lw          $s2, 0xD6C($s1)
    ctx->pc = 0x1df9f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_1df9fc:
    // 0x1df9fc: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x1df9fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_1dfa00:
    // 0x1dfa00: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1dfa00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1dfa04:
    // 0x1dfa04: 0x320f809  jalr        $t9
label_1dfa08:
    if (ctx->pc == 0x1DFA08u) {
        ctx->pc = 0x1DFA08u;
            // 0x1dfa08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA0Cu;
        goto label_1dfa0c;
    }
    ctx->pc = 0x1DFA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFA0Cu);
        ctx->pc = 0x1DFA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA04u;
            // 0x1dfa08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFA0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA0Cu; }
            if (ctx->pc != 0x1DFA0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DFA0Cu;
label_1dfa0c:
    // 0x1dfa0c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1dfa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1dfa10:
    // 0x1dfa10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dfa10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfa14:
    // 0x1dfa14: 0xc440c5d8  lwc1        $f0, -0x3A28($v0)
    ctx->pc = 0x1dfa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dfa18:
    // 0x1dfa18: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x1dfa18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1dfa1c:
    // 0x1dfa1c: 0xae200e00  sw          $zero, 0xE00($s1)
    ctx->pc = 0x1dfa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3584), GPR_U32(ctx, 0));
label_1dfa20:
    // 0x1dfa20: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1dfa20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1dfa24:
    // 0x1dfa24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dfa24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1dfa28:
    // 0x1dfa28: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1dfa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1dfa2c:
    // 0x1dfa2c: 0x8c440ea0  lw          $a0, 0xEA0($v0)
    ctx->pc = 0x1dfa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3744)));
label_1dfa30:
    // 0x1dfa30: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1dfa34:
    if (ctx->pc == 0x1DFA34u) {
        ctx->pc = 0x1DFA34u;
            // 0x1dfa34: 0x24520ea0  addiu       $s2, $v0, 0xEA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 3744));
        ctx->pc = 0x1DFA38u;
        goto label_1dfa38;
    }
    ctx->pc = 0x1DFA30u;
    {
        const bool branch_taken_0x1dfa30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA30u;
            // 0x1dfa34: 0x24520ea0  addiu       $s2, $v0, 0xEA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 3744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa30) {
            ctx->pc = 0x1DFA50u;
            goto label_1dfa50;
        }
    }
    ctx->pc = 0x1DFA38u;
label_1dfa38:
    // 0x1dfa38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dfa38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dfa3c:
    // 0x1dfa3c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1dfa3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1dfa40:
    // 0x1dfa40: 0x320f809  jalr        $t9
label_1dfa44:
    if (ctx->pc == 0x1DFA44u) {
        ctx->pc = 0x1DFA44u;
            // 0x1dfa44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DFA48u;
        goto label_1dfa48;
    }
    ctx->pc = 0x1DFA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFA48u);
        ctx->pc = 0x1DFA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA40u;
            // 0x1dfa44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFA48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA48u; }
            if (ctx->pc != 0x1DFA48u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFA48u;
label_1dfa48:
    // 0x1dfa48: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1dfa48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1dfa4c:
    // 0x1dfa4c: 0x0  nop
    ctx->pc = 0x1dfa4cu;
    // NOP
label_1dfa50:
    // 0x1dfa50: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x1dfa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_1dfa54:
    // 0x1dfa54: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1dfa54u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1dfa58:
    // 0x1dfa58: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_1dfa5c:
    if (ctx->pc == 0x1DFA5Cu) {
        ctx->pc = 0x1DFA5Cu;
            // 0x1dfa5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA60u;
        goto label_1dfa60;
    }
    ctx->pc = 0x1DFA58u;
    {
        const bool branch_taken_0x1dfa58 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1DFA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA58u;
            // 0x1dfa5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa58) {
            ctx->pc = 0x1DFA70u;
            goto label_1dfa70;
        }
    }
    ctx->pc = 0x1DFA60u;
label_1dfa60:
    // 0x1dfa60: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x1dfa60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_1dfa64:
    // 0x1dfa64: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1dfa68:
    if (ctx->pc == 0x1DFA68u) {
        ctx->pc = 0x1DFA6Cu;
        goto label_1dfa6c;
    }
    ctx->pc = 0x1DFA64u;
    {
        const bool branch_taken_0x1dfa64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa64) {
            ctx->pc = 0x1DFA70u;
            goto label_1dfa70;
        }
    }
    ctx->pc = 0x1DFA6Cu;
label_1dfa6c:
    // 0x1dfa6c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dfa6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dfa70:
    // 0x1dfa70: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1dfa74:
    if (ctx->pc == 0x1DFA74u) {
        ctx->pc = 0x1DFA78u;
        goto label_1dfa78;
    }
    ctx->pc = 0x1DFA70u;
    {
        const bool branch_taken_0x1dfa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa70) {
            ctx->pc = 0x1DFAB0u;
            goto label_1dfab0;
        }
    }
    ctx->pc = 0x1DFA78u;
label_1dfa78:
    // 0x1dfa78: 0x822211aa  lb          $v0, 0x11AA($s1)
    ctx->pc = 0x1dfa78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_1dfa7c:
    // 0x1dfa7c: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1dfa7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1dfa80:
    // 0x1dfa80: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dfa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1dfa84:
    // 0x1dfa84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dfa88:
    if (ctx->pc == 0x1DFA88u) {
        ctx->pc = 0x1DFA8Cu;
        goto label_1dfa8c;
    }
    ctx->pc = 0x1DFA84u;
    {
        const bool branch_taken_0x1dfa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa84) {
            ctx->pc = 0x1DFAA4u;
            goto label_1dfaa4;
        }
    }
    ctx->pc = 0x1DFA8Cu;
label_1dfa8c:
    // 0x1dfa8c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1dfa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1dfa90:
    // 0x1dfa90: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1dfa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1dfa94:
    // 0x1dfa94: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x1dfa94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
label_1dfa98:
    // 0x1dfa98: 0x401027  not         $v0, $v0
    ctx->pc = 0x1dfa98u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_1dfa9c:
    // 0x1dfa9c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dfa9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1dfaa0:
    // 0x1dfaa0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dfaa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1dfaa4:
    // 0x1dfaa4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1dfaa8:
    if (ctx->pc == 0x1DFAA8u) {
        ctx->pc = 0x1DFAACu;
        goto label_1dfaac;
    }
    ctx->pc = 0x1DFAA4u;
    {
        const bool branch_taken_0x1dfaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfaa4) {
            ctx->pc = 0x1DFAB0u;
            goto label_1dfab0;
        }
    }
    ctx->pc = 0x1DFAACu;
label_1dfaac:
    // 0x1dfaac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dfaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfab0:
    // 0x1dfab0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_1dfab4:
    if (ctx->pc == 0x1DFAB4u) {
        ctx->pc = 0x1DFAB8u;
        goto label_1dfab8;
    }
    ctx->pc = 0x1DFAB0u;
    {
        const bool branch_taken_0x1dfab0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfab0) {
            ctx->pc = 0x1DFAC8u;
            goto label_1dfac8;
        }
    }
    ctx->pc = 0x1DFAB8u;
label_1dfab8:
    // 0x1dfab8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1dfab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1dfabc:
    // 0x1dfabc: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_1dfac0:
    if (ctx->pc == 0x1DFAC0u) {
        ctx->pc = 0x1DFAC4u;
        goto label_1dfac4;
    }
    ctx->pc = 0x1DFABCu;
    {
        const bool branch_taken_0x1dfabc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dfabc) {
            ctx->pc = 0x1DFB08u;
            goto label_1dfb08;
        }
    }
    ctx->pc = 0x1DFAC4u;
label_1dfac4:
    // 0x1dfac4: 0x0  nop
    ctx->pc = 0x1dfac4u;
    // NOP
label_1dfac8:
    // 0x1dfac8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dfac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dfacc:
    // 0x1dfacc: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x1dfaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1dfad0:
    // 0x1dfad0: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x1dfad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_1dfad4:
    // 0x1dfad4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1dfad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dfad8:
    // 0x1dfad8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1dfadc:
    if (ctx->pc == 0x1DFADCu) {
        ctx->pc = 0x1DFAE0u;
        goto label_1dfae0;
    }
    ctx->pc = 0x1DFAD8u;
    {
        const bool branch_taken_0x1dfad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dfad8) {
            ctx->pc = 0x1DFB08u;
            goto label_1dfb08;
        }
    }
    ctx->pc = 0x1DFAE0u;
label_1dfae0:
    // 0x1dfae0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1dfae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1dfae4:
    // 0x1dfae4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dfae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dfae8:
    // 0x1dfae8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1dfaec:
    if (ctx->pc == 0x1DFAECu) {
        ctx->pc = 0x1DFAF0u;
        goto label_1dfaf0;
    }
    ctx->pc = 0x1DFAE8u;
    {
        const bool branch_taken_0x1dfae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dfae8) {
            ctx->pc = 0x1DFB08u;
            goto label_1dfb08;
        }
    }
    ctx->pc = 0x1DFAF0u;
label_1dfaf0:
    // 0x1dfaf0: 0xc072b78  jal         func_1CADE0
label_1dfaf4:
    if (ctx->pc == 0x1DFAF4u) {
        ctx->pc = 0x1DFAF4u;
            // 0x1dfaf4: 0x92240084  lbu         $a0, 0x84($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->pc = 0x1DFAF8u;
        goto label_1dfaf8;
    }
    ctx->pc = 0x1DFAF0u;
    SET_GPR_U32(ctx, 31, 0x1DFAF8u);
    ctx->pc = 0x1DFAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFAF0u;
            // 0x1dfaf4: 0x92240084  lbu         $a0, 0x84($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFAF8u; }
        if (ctx->pc != 0x1DFAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFAF8u; }
        if (ctx->pc != 0x1DFAF8u) { return; }
    }
    ctx->pc = 0x1DFAF8u;
label_1dfaf8:
    // 0x1dfaf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dfafc:
    if (ctx->pc == 0x1DFAFCu) {
        ctx->pc = 0x1DFB00u;
        goto label_1dfb00;
    }
    ctx->pc = 0x1DFAF8u;
    {
        const bool branch_taken_0x1dfaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfaf8) {
            ctx->pc = 0x1DFB08u;
            goto label_1dfb08;
        }
    }
    ctx->pc = 0x1DFB00u;
label_1dfb00:
    // 0x1dfb00: 0xc072aaa  jal         func_1CAAA8
label_1dfb04:
    if (ctx->pc == 0x1DFB04u) {
        ctx->pc = 0x1DFB04u;
            // 0x1dfb04: 0x92240084  lbu         $a0, 0x84($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->pc = 0x1DFB08u;
        goto label_1dfb08;
    }
    ctx->pc = 0x1DFB00u;
    SET_GPR_U32(ctx, 31, 0x1DFB08u);
    ctx->pc = 0x1DFB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB00u;
            // 0x1dfb04: 0x92240084  lbu         $a0, 0x84($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB08u; }
        if (ctx->pc != 0x1DFB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB08u; }
        if (ctx->pc != 0x1DFB08u) { return; }
    }
    ctx->pc = 0x1DFB08u;
label_1dfb08:
    // 0x1dfb08: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1dfb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dfb0c:
    // 0x1dfb0c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1dfb0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dfb10:
    // 0x1dfb10: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1dfb10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_1dfb14:
    // 0x1dfb14: 0x5440ffc3  bnel        $v0, $zero, . + 4 + (-0x3D << 2)
label_1dfb18:
    if (ctx->pc == 0x1DFB18u) {
        ctx->pc = 0x1DFB18u;
            // 0x1dfb18: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x1DFB1Cu;
        goto label_1dfb1c;
    }
    ctx->pc = 0x1DFB14u;
    {
        const bool branch_taken_0x1dfb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfb14) {
            ctx->pc = 0x1DFB18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB14u;
            // 0x1dfb18: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFA24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dfa24;
        }
    }
    ctx->pc = 0x1DFB1Cu;
label_1dfb1c:
    // 0x1dfb1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dfb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb20:
    // 0x1dfb20: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1dfb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1dfb24:
    // 0x1dfb24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dfb24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1dfb28:
    // 0x1dfb28: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1dfb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1dfb2c:
    // 0x1dfb2c: 0x8c450eb0  lw          $a1, 0xEB0($v0)
    ctx->pc = 0x1dfb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3760)));
label_1dfb30:
    // 0x1dfb30: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1dfb34:
    if (ctx->pc == 0x1DFB34u) {
        ctx->pc = 0x1DFB34u;
            // 0x1dfb34: 0x24520eb0  addiu       $s2, $v0, 0xEB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
        ctx->pc = 0x1DFB38u;
        goto label_1dfb38;
    }
    ctx->pc = 0x1DFB30u;
    {
        const bool branch_taken_0x1dfb30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB30u;
            // 0x1dfb34: 0x24520eb0  addiu       $s2, $v0, 0xEB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb30) {
            ctx->pc = 0x1DFB50u;
            goto label_1dfb50;
        }
    }
    ctx->pc = 0x1DFB38u;
label_1dfb38:
    // 0x1dfb38: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1dfb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1dfb3c:
    // 0x1dfb3c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x1dfb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_1dfb40:
    // 0x1dfb40: 0xc057b7c  jal         func_15EDF0
label_1dfb44:
    if (ctx->pc == 0x1DFB44u) {
        ctx->pc = 0x1DFB44u;
            // 0x1dfb44: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DFB48u;
        goto label_1dfb48;
    }
    ctx->pc = 0x1DFB40u;
    SET_GPR_U32(ctx, 31, 0x1DFB48u);
    ctx->pc = 0x1DFB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB40u;
            // 0x1dfb44: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB48u; }
        if (ctx->pc != 0x1DFB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB48u; }
        if (ctx->pc != 0x1DFB48u) { return; }
    }
    ctx->pc = 0x1DFB48u;
label_1dfb48:
    // 0x1dfb48: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1dfb48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1dfb4c:
    // 0x1dfb4c: 0x0  nop
    ctx->pc = 0x1dfb4cu;
    // NOP
label_1dfb50:
    // 0x1dfb50: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1dfb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dfb54:
    // 0x1dfb54: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1dfb54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dfb58:
    // 0x1dfb58: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1dfb58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_1dfb5c:
    // 0x1dfb5c: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
label_1dfb60:
    if (ctx->pc == 0x1DFB60u) {
        ctx->pc = 0x1DFB60u;
            // 0x1dfb60: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x1DFB64u;
        goto label_1dfb64;
    }
    ctx->pc = 0x1DFB5Cu;
    {
        const bool branch_taken_0x1dfb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfb5c) {
            ctx->pc = 0x1DFB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB5Cu;
            // 0x1dfb60: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFB24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dfb24;
        }
    }
    ctx->pc = 0x1DFB64u;
label_1dfb64:
    // 0x1dfb64: 0xc0eeff8  jal         func_3BBFE0
label_1dfb68:
    if (ctx->pc == 0x1DFB68u) {
        ctx->pc = 0x1DFB68u;
            // 0x1dfb68: 0x8e240a60  lw          $a0, 0xA60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2656)));
        ctx->pc = 0x1DFB6Cu;
        goto label_1dfb6c;
    }
    ctx->pc = 0x1DFB64u;
    SET_GPR_U32(ctx, 31, 0x1DFB6Cu);
    ctx->pc = 0x1DFB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB64u;
            // 0x1dfb68: 0x8e240a60  lw          $a0, 0xA60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BBFE0u;
    if (runtime->hasFunction(0x3BBFE0u)) {
        auto targetFn = runtime->lookupFunction(0x3BBFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB6Cu; }
        if (ctx->pc != 0x1DFB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BBFE0_0x3bbfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFB6Cu; }
        if (ctx->pc != 0x1DFB6Cu) { return; }
    }
    ctx->pc = 0x1DFB6Cu;
label_1dfb6c:
    // 0x1dfb6c: 0x8e250da0  lw          $a1, 0xDA0($s1)
    ctx->pc = 0x1dfb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_1dfb70:
    // 0x1dfb70: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x1dfb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_1dfb74:
    // 0x1dfb74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dfb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dfb78:
    // 0x1dfb78: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1dfb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1dfb7c:
    // 0x1dfb7c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1dfb7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1dfb80:
    // 0x1dfb80: 0xae240da0  sw          $a0, 0xDA0($s1)
    ctx->pc = 0x1dfb80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3488), GPR_U32(ctx, 4));
label_1dfb84:
    // 0x1dfb84: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x1dfb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_1dfb88:
    // 0x1dfb88: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x1dfb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_1dfb8c:
    // 0x1dfb8c: 0x5083001b  beql        $a0, $v1, . + 4 + (0x1B << 2)
label_1dfb90:
    if (ctx->pc == 0x1DFB90u) {
        ctx->pc = 0x1DFB90u;
            // 0x1dfb90: 0x8e220da0  lw          $v0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->pc = 0x1DFB94u;
        goto label_1dfb94;
    }
    ctx->pc = 0x1DFB8Cu;
    {
        const bool branch_taken_0x1dfb8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dfb8c) {
            ctx->pc = 0x1DFB90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB8Cu;
            // 0x1dfb90: 0x8e220da0  lw          $v0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFBFCu;
            goto label_1dfbfc;
        }
    }
    ctx->pc = 0x1DFB94u;
label_1dfb94:
    // 0x1dfb94: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1dfb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dfb98:
    // 0x1dfb98: 0x5082000f  beql        $a0, $v0, . + 4 + (0xF << 2)
label_1dfb9c:
    if (ctx->pc == 0x1DFB9Cu) {
        ctx->pc = 0x1DFB9Cu;
            // 0x1dfb9c: 0x8e220da0  lw          $v0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->pc = 0x1DFBA0u;
        goto label_1dfba0;
    }
    ctx->pc = 0x1DFB98u;
    {
        const bool branch_taken_0x1dfb98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dfb98) {
            ctx->pc = 0x1DFB9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB98u;
            // 0x1dfb9c: 0x8e220da0  lw          $v0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFBD8u;
            goto label_1dfbd8;
        }
    }
    ctx->pc = 0x1DFBA0u;
label_1dfba0:
    // 0x1dfba0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1dfba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1dfba4:
    // 0x1dfba4: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
label_1dfba8:
    if (ctx->pc == 0x1DFBA8u) {
        ctx->pc = 0x1DFBA8u;
            // 0x1dfba8: 0x8e220da0  lw          $v0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->pc = 0x1DFBACu;
        goto label_1dfbac;
    }
    ctx->pc = 0x1DFBA4u;
    {
        const bool branch_taken_0x1dfba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dfba4) {
            ctx->pc = 0x1DFBA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFBA4u;
            // 0x1dfba8: 0x8e220da0  lw          $v0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFBB4u;
            goto label_1dfbb4;
        }
    }
    ctx->pc = 0x1DFBACu;
label_1dfbac:
    // 0x1dfbac: 0x10000024  b           . + 4 + (0x24 << 2)
label_1dfbb0:
    if (ctx->pc == 0x1DFBB0u) {
        ctx->pc = 0x1DFBB0u;
            // 0x1dfbb0: 0x8e230da0  lw          $v1, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->pc = 0x1DFBB4u;
        goto label_1dfbb4;
    }
    ctx->pc = 0x1DFBACu;
    {
        const bool branch_taken_0x1dfbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFBACu;
            // 0x1dfbb0: 0x8e230da0  lw          $v1, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbac) {
            ctx->pc = 0x1DFC40u;
            goto label_1dfc40;
        }
    }
    ctx->pc = 0x1DFBB4u;
label_1dfbb4:
    // 0x1dfbb4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1dfbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_1dfbb8:
    // 0x1dfbb8: 0xae220da0  sw          $v0, 0xDA0($s1)
    ctx->pc = 0x1dfbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3488), GPR_U32(ctx, 2));
label_1dfbbc:
    // 0x1dfbbc: 0x8e24114c  lw          $a0, 0x114C($s1)
    ctx->pc = 0x1dfbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4428)));
label_1dfbc0:
    // 0x1dfbc0: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_1dfbc4:
    if (ctx->pc == 0x1DFBC4u) {
        ctx->pc = 0x1DFBC8u;
        goto label_1dfbc8;
    }
    ctx->pc = 0x1DFBC0u;
    {
        const bool branch_taken_0x1dfbc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfbc0) {
            ctx->pc = 0x1DFC3Cu;
            goto label_1dfc3c;
        }
    }
    ctx->pc = 0x1DFBC8u;
label_1dfbc8:
    // 0x1dfbc8: 0xc0f56d0  jal         func_3D5B40
label_1dfbcc:
    if (ctx->pc == 0x1DFBCCu) {
        ctx->pc = 0x1DFBCCu;
            // 0x1dfbcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DFBD0u;
        goto label_1dfbd0;
    }
    ctx->pc = 0x1DFBC8u;
    SET_GPR_U32(ctx, 31, 0x1DFBD0u);
    ctx->pc = 0x1DFBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFBC8u;
            // 0x1dfbcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D5B40u;
    if (runtime->hasFunction(0x3D5B40u)) {
        auto targetFn = runtime->lookupFunction(0x3D5B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBD0u; }
        if (ctx->pc != 0x1DFBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D5B40_0x3d5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBD0u; }
        if (ctx->pc != 0x1DFBD0u) { return; }
    }
    ctx->pc = 0x1DFBD0u;
label_1dfbd0:
    // 0x1dfbd0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1dfbd4:
    if (ctx->pc == 0x1DFBD4u) {
        ctx->pc = 0x1DFBD8u;
        goto label_1dfbd8;
    }
    ctx->pc = 0x1DFBD0u;
    {
        const bool branch_taken_0x1dfbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfbd0) {
            ctx->pc = 0x1DFC3Cu;
            goto label_1dfc3c;
        }
    }
    ctx->pc = 0x1DFBD8u;
label_1dfbd8:
    // 0x1dfbd8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1dfbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_1dfbdc:
    // 0x1dfbdc: 0xae220da0  sw          $v0, 0xDA0($s1)
    ctx->pc = 0x1dfbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3488), GPR_U32(ctx, 2));
label_1dfbe0:
    // 0x1dfbe0: 0x8e24114c  lw          $a0, 0x114C($s1)
    ctx->pc = 0x1dfbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4428)));
label_1dfbe4:
    // 0x1dfbe4: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_1dfbe8:
    if (ctx->pc == 0x1DFBE8u) {
        ctx->pc = 0x1DFBECu;
        goto label_1dfbec;
    }
    ctx->pc = 0x1DFBE4u;
    {
        const bool branch_taken_0x1dfbe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfbe4) {
            ctx->pc = 0x1DFC3Cu;
            goto label_1dfc3c;
        }
    }
    ctx->pc = 0x1DFBECu;
label_1dfbec:
    // 0x1dfbec: 0xc0f56d0  jal         func_3D5B40
label_1dfbf0:
    if (ctx->pc == 0x1DFBF0u) {
        ctx->pc = 0x1DFBF0u;
            // 0x1dfbf0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1DFBF4u;
        goto label_1dfbf4;
    }
    ctx->pc = 0x1DFBECu;
    SET_GPR_U32(ctx, 31, 0x1DFBF4u);
    ctx->pc = 0x1DFBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFBECu;
            // 0x1dfbf0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D5B40u;
    if (runtime->hasFunction(0x3D5B40u)) {
        auto targetFn = runtime->lookupFunction(0x3D5B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBF4u; }
        if (ctx->pc != 0x1DFBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D5B40_0x3d5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBF4u; }
        if (ctx->pc != 0x1DFBF4u) { return; }
    }
    ctx->pc = 0x1DFBF4u;
label_1dfbf4:
    // 0x1dfbf4: 0x10000011  b           . + 4 + (0x11 << 2)
label_1dfbf8:
    if (ctx->pc == 0x1DFBF8u) {
        ctx->pc = 0x1DFBFCu;
        goto label_1dfbfc;
    }
    ctx->pc = 0x1DFBF4u;
    {
        const bool branch_taken_0x1dfbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfbf4) {
            ctx->pc = 0x1DFC3Cu;
            goto label_1dfc3c;
        }
    }
    ctx->pc = 0x1DFBFCu;
label_1dfbfc:
    // 0x1dfbfc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1dfbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_1dfc00:
    // 0x1dfc00: 0xae220da0  sw          $v0, 0xDA0($s1)
    ctx->pc = 0x1dfc00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3488), GPR_U32(ctx, 2));
label_1dfc04:
    // 0x1dfc04: 0x8e24114c  lw          $a0, 0x114C($s1)
    ctx->pc = 0x1dfc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4428)));
label_1dfc08:
    // 0x1dfc08: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1dfc0c:
    if (ctx->pc == 0x1DFC0Cu) {
        ctx->pc = 0x1DFC0Cu;
            // 0x1dfc0c: 0x822511aa  lb          $a1, 0x11AA($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
        ctx->pc = 0x1DFC10u;
        goto label_1dfc10;
    }
    ctx->pc = 0x1DFC08u;
    {
        const bool branch_taken_0x1dfc08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfc08) {
            ctx->pc = 0x1DFC0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC08u;
            // 0x1dfc0c: 0x822511aa  lb          $a1, 0x11AA($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFC1Cu;
            goto label_1dfc1c;
        }
    }
    ctx->pc = 0x1DFC10u;
label_1dfc10:
    // 0x1dfc10: 0xc0f56d0  jal         func_3D5B40
label_1dfc14:
    if (ctx->pc == 0x1DFC14u) {
        ctx->pc = 0x1DFC14u;
            // 0x1dfc14: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1DFC18u;
        goto label_1dfc18;
    }
    ctx->pc = 0x1DFC10u;
    SET_GPR_U32(ctx, 31, 0x1DFC18u);
    ctx->pc = 0x1DFC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC10u;
            // 0x1dfc14: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D5B40u;
    if (runtime->hasFunction(0x3D5B40u)) {
        auto targetFn = runtime->lookupFunction(0x3D5B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC18u; }
        if (ctx->pc != 0x1DFC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D5B40_0x3d5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC18u; }
        if (ctx->pc != 0x1DFC18u) { return; }
    }
    ctx->pc = 0x1DFC18u;
label_1dfc18:
    // 0x1dfc18: 0x822511aa  lb          $a1, 0x11AA($s1)
    ctx->pc = 0x1dfc18u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_1dfc1c:
    // 0x1dfc1c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1dfc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_1dfc20:
    // 0x1dfc20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1dfc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dfc24:
    // 0x1dfc24: 0x90636080  lbu         $v1, 0x6080($v1)
    ctx->pc = 0x1dfc24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24704)));
label_1dfc28:
    // 0x1dfc28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1dfc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1dfc2c:
    // 0x1dfc2c: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x1dfc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_1dfc30:
    // 0x1dfc30: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1dfc30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1dfc34:
    // 0x1dfc34: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1dfc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1dfc38:
    // 0x1dfc38: 0xa0436080  sb          $v1, 0x6080($v0)
    ctx->pc = 0x1dfc38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24704), (uint8_t)GPR_U32(ctx, 3));
label_1dfc3c:
    // 0x1dfc3c: 0x8e230da0  lw          $v1, 0xDA0($s1)
    ctx->pc = 0x1dfc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_1dfc40:
    // 0x1dfc40: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x1dfc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_1dfc44:
    // 0x1dfc44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dfc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1dfc48:
    // 0x1dfc48: 0xae220da0  sw          $v0, 0xDA0($s1)
    ctx->pc = 0x1dfc48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3488), GPR_U32(ctx, 2));
label_1dfc4c:
    // 0x1dfc4c: 0x8e251148  lw          $a1, 0x1148($s1)
    ctx->pc = 0x1dfc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4424)));
label_1dfc50:
    // 0x1dfc50: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_1dfc54:
    if (ctx->pc == 0x1DFC54u) {
        ctx->pc = 0x1DFC54u;
            // 0x1dfc54: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->pc = 0x1DFC58u;
        goto label_1dfc58;
    }
    ctx->pc = 0x1DFC50u;
    {
        const bool branch_taken_0x1dfc50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfc50) {
            ctx->pc = 0x1DFC54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC50u;
            // 0x1dfc54: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFC70u;
            goto label_1dfc70;
        }
    }
    ctx->pc = 0x1DFC58u;
label_1dfc58:
    // 0x1dfc58: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1dfc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1dfc5c:
    // 0x1dfc5c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x1dfc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_1dfc60:
    // 0x1dfc60: 0xc057b7c  jal         func_15EDF0
label_1dfc64:
    if (ctx->pc == 0x1DFC64u) {
        ctx->pc = 0x1DFC64u;
            // 0x1dfc64: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x1DFC68u;
        goto label_1dfc68;
    }
    ctx->pc = 0x1DFC60u;
    SET_GPR_U32(ctx, 31, 0x1DFC68u);
    ctx->pc = 0x1DFC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC60u;
            // 0x1dfc64: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC68u; }
        if (ctx->pc != 0x1DFC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC68u; }
        if (ctx->pc != 0x1DFC68u) { return; }
    }
    ctx->pc = 0x1DFC68u;
label_1dfc68:
    // 0x1dfc68: 0xae201148  sw          $zero, 0x1148($s1)
    ctx->pc = 0x1dfc68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4424), GPR_U32(ctx, 0));
label_1dfc6c:
    // 0x1dfc6c: 0x8e240d74  lw          $a0, 0xD74($s1)
    ctx->pc = 0x1dfc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_1dfc70:
    // 0x1dfc70: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x1dfc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_1dfc74:
    // 0x1dfc74: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1dfc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1dfc78:
    // 0x1dfc78: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x1dfc78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
label_1dfc7c:
    // 0x1dfc7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1dfc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1dfc80:
    // 0x1dfc80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1dfc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1dfc84:
    // 0x1dfc84: 0xa0600281  sb          $zero, 0x281($v1)
    ctx->pc = 0x1dfc84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 641), (uint8_t)GPR_U32(ctx, 0));
label_1dfc88:
    // 0x1dfc88: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x1dfc88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_1dfc8c:
    // 0x1dfc8c: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x1dfc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_1dfc90:
    // 0x1dfc90: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1dfc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1dfc94:
    // 0x1dfc94: 0xc0a545c  jal         func_295170
label_1dfc98:
    if (ctx->pc == 0x1DFC98u) {
        ctx->pc = 0x1DFC98u;
            // 0x1dfc98: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x1DFC9Cu;
        goto label_1dfc9c;
    }
    ctx->pc = 0x1DFC94u;
    SET_GPR_U32(ctx, 31, 0x1DFC9Cu);
    ctx->pc = 0x1DFC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC94u;
            // 0x1dfc98: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC9Cu; }
        if (ctx->pc != 0x1DFC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC9Cu; }
        if (ctx->pc != 0x1DFC9Cu) { return; }
    }
    ctx->pc = 0x1DFC9Cu;
label_1dfc9c:
    // 0x1dfc9c: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x1dfc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
label_1dfca0:
    // 0x1dfca0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1dfca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1dfca4:
    // 0x1dfca4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1dfca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1dfca8:
    // 0x1dfca8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x1dfca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_1dfcac:
    // 0x1dfcac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1dfcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1dfcb0:
    // 0x1dfcb0: 0xc08bf20  jal         func_22FC80
label_1dfcb4:
    if (ctx->pc == 0x1DFCB4u) {
        ctx->pc = 0x1DFCB4u;
            // 0x1dfcb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFCB8u;
        goto label_1dfcb8;
    }
    ctx->pc = 0x1DFCB0u;
    SET_GPR_U32(ctx, 31, 0x1DFCB8u);
    ctx->pc = 0x1DFCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFCB0u;
            // 0x1dfcb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFCB8u; }
        if (ctx->pc != 0x1DFCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFCB8u; }
        if (ctx->pc != 0x1DFCB8u) { return; }
    }
    ctx->pc = 0x1DFCB8u;
label_1dfcb8:
    // 0x1dfcb8: 0x8e220d9c  lw          $v0, 0xD9C($s1)
    ctx->pc = 0x1dfcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3484)));
label_1dfcbc:
    // 0x1dfcbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dfcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dfcc0:
    // 0x1dfcc0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1dfcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1dfcc4:
    // 0x1dfcc4: 0xae220d9c  sw          $v0, 0xD9C($s1)
    ctx->pc = 0x1dfcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3484), GPR_U32(ctx, 2));
label_1dfcc8:
    // 0x1dfcc8: 0x8e220db8  lw          $v0, 0xDB8($s1)
    ctx->pc = 0x1dfcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3512)));
label_1dfccc:
    // 0x1dfccc: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x1dfcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
label_1dfcd0:
    // 0x1dfcd0: 0xc077fd4  jal         func_1DFF50
label_1dfcd4:
    if (ctx->pc == 0x1DFCD4u) {
        ctx->pc = 0x1DFCD4u;
            // 0x1dfcd4: 0xae220db8  sw          $v0, 0xDB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3512), GPR_U32(ctx, 2));
        ctx->pc = 0x1DFCD8u;
        goto label_1dfcd8;
    }
    ctx->pc = 0x1DFCD0u;
    SET_GPR_U32(ctx, 31, 0x1DFCD8u);
    ctx->pc = 0x1DFCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFCD0u;
            // 0x1dfcd4: 0xae220db8  sw          $v0, 0xDB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF50u;
    if (runtime->hasFunction(0x1DFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFCD8u; }
        if (ctx->pc != 0x1DFCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF50_0x1dff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFCD8u; }
        if (ctx->pc != 0x1DFCD8u) { return; }
    }
    ctx->pc = 0x1DFCD8u;
label_1dfcd8:
    // 0x1dfcd8: 0x8e241144  lw          $a0, 0x1144($s1)
    ctx->pc = 0x1dfcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4420)));
label_1dfcdc:
    // 0x1dfcdc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1dfce0:
    if (ctx->pc == 0x1DFCE0u) {
        ctx->pc = 0x1DFCE0u;
            // 0x1dfce0: 0x262411f4  addiu       $a0, $s1, 0x11F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4596));
        ctx->pc = 0x1DFCE4u;
        goto label_1dfce4;
    }
    ctx->pc = 0x1DFCDCu;
    {
        const bool branch_taken_0x1dfcdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfcdc) {
            ctx->pc = 0x1DFCE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFCDCu;
            // 0x1dfce0: 0x262411f4  addiu       $a0, $s1, 0x11F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4596));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFCF0u;
            goto label_1dfcf0;
        }
    }
    ctx->pc = 0x1DFCE4u;
label_1dfce4:
    // 0x1dfce4: 0xc0fd590  jal         func_3F5640
label_1dfce8:
    if (ctx->pc == 0x1DFCE8u) {
        ctx->pc = 0x1DFCECu;
        goto label_1dfcec;
    }
    ctx->pc = 0x1DFCE4u;
    SET_GPR_U32(ctx, 31, 0x1DFCECu);
    ctx->pc = 0x3F5640u;
    if (runtime->hasFunction(0x3F5640u)) {
        auto targetFn = runtime->lookupFunction(0x3F5640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFCECu; }
        if (ctx->pc != 0x1DFCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F5640_0x3f5640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFCECu; }
        if (ctx->pc != 0x1DFCECu) { return; }
    }
    ctx->pc = 0x1DFCECu;
label_1dfcec:
    // 0x1dfcec: 0x262411f4  addiu       $a0, $s1, 0x11F4
    ctx->pc = 0x1dfcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4596));
label_1dfcf0:
    // 0x1dfcf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dfcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfcf4:
    // 0x1dfcf4: 0xc04a576  jal         func_1295D8
label_1dfcf8:
    if (ctx->pc == 0x1DFCF8u) {
        ctx->pc = 0x1DFCF8u;
            // 0x1dfcf8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1DFCFCu;
        goto label_1dfcfc;
    }
    ctx->pc = 0x1DFCF4u;
    SET_GPR_U32(ctx, 31, 0x1DFCFCu);
    ctx->pc = 0x1DFCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFCF4u;
            // 0x1dfcf8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFCFCu; }
        if (ctx->pc != 0x1DFCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFCFCu; }
        if (ctx->pc != 0x1DFCFCu) { return; }
    }
    ctx->pc = 0x1DFCFCu;
label_1dfcfc:
    // 0x1dfcfc: 0x26241208  addiu       $a0, $s1, 0x1208
    ctx->pc = 0x1dfcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4616));
label_1dfd00:
    // 0x1dfd00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dfd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfd04:
    // 0x1dfd04: 0xc04a576  jal         func_1295D8
label_1dfd08:
    if (ctx->pc == 0x1DFD08u) {
        ctx->pc = 0x1DFD08u;
            // 0x1dfd08: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1DFD0Cu;
        goto label_1dfd0c;
    }
    ctx->pc = 0x1DFD04u;
    SET_GPR_U32(ctx, 31, 0x1DFD0Cu);
    ctx->pc = 0x1DFD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD04u;
            // 0x1dfd08: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD0Cu; }
        if (ctx->pc != 0x1DFD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD0Cu; }
        if (ctx->pc != 0x1DFD0Cu) { return; }
    }
    ctx->pc = 0x1DFD0Cu;
label_1dfd0c:
    // 0x1dfd0c: 0xae20121c  sw          $zero, 0x121C($s1)
    ctx->pc = 0x1dfd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4636), GPR_U32(ctx, 0));
label_1dfd10:
    // 0x1dfd10: 0xae201228  sw          $zero, 0x1228($s1)
    ctx->pc = 0x1dfd10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4648), GPR_U32(ctx, 0));
label_1dfd14:
    // 0x1dfd14: 0xa22011ac  sb          $zero, 0x11AC($s1)
    ctx->pc = 0x1dfd14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4524), (uint8_t)GPR_U32(ctx, 0));
label_1dfd18:
    // 0x1dfd18: 0xc0b6830  jal         func_2DA0C0
label_1dfd1c:
    if (ctx->pc == 0x1DFD1Cu) {
        ctx->pc = 0x1DFD1Cu;
            // 0x1dfd1c: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->pc = 0x1DFD20u;
        goto label_1dfd20;
    }
    ctx->pc = 0x1DFD18u;
    SET_GPR_U32(ctx, 31, 0x1DFD20u);
    ctx->pc = 0x1DFD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD18u;
            // 0x1dfd1c: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DA0C0u;
    if (runtime->hasFunction(0x2DA0C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DA0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD20u; }
        if (ctx->pc != 0x1DFD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DA0C0_0x2da0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD20u; }
        if (ctx->pc != 0x1DFD20u) { return; }
    }
    ctx->pc = 0x1DFD20u;
label_1dfd20:
    // 0x1dfd20: 0xc0fe304  jal         func_3F8C10
label_1dfd24:
    if (ctx->pc == 0x1DFD24u) {
        ctx->pc = 0x1DFD24u;
            // 0x1dfd24: 0x26240bc0  addiu       $a0, $s1, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3008));
        ctx->pc = 0x1DFD28u;
        goto label_1dfd28;
    }
    ctx->pc = 0x1DFD20u;
    SET_GPR_U32(ctx, 31, 0x1DFD28u);
    ctx->pc = 0x1DFD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD20u;
            // 0x1dfd24: 0x26240bc0  addiu       $a0, $s1, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F8C10u;
    if (runtime->hasFunction(0x3F8C10u)) {
        auto targetFn = runtime->lookupFunction(0x3F8C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD28u; }
        if (ctx->pc != 0x1DFD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F8C10_0x3f8c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD28u; }
        if (ctx->pc != 0x1DFD28u) { return; }
    }
    ctx->pc = 0x1DFD28u;
label_1dfd28:
    // 0x1dfd28: 0xc0fe290  jal         func_3F8A40
label_1dfd2c:
    if (ctx->pc == 0x1DFD2Cu) {
        ctx->pc = 0x1DFD2Cu;
            // 0x1dfd2c: 0x26240bc0  addiu       $a0, $s1, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3008));
        ctx->pc = 0x1DFD30u;
        goto label_1dfd30;
    }
    ctx->pc = 0x1DFD28u;
    SET_GPR_U32(ctx, 31, 0x1DFD30u);
    ctx->pc = 0x1DFD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD28u;
            // 0x1dfd2c: 0x26240bc0  addiu       $a0, $s1, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F8A40u;
    if (runtime->hasFunction(0x3F8A40u)) {
        auto targetFn = runtime->lookupFunction(0x3F8A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD30u; }
        if (ctx->pc != 0x1DFD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F8A40_0x3f8a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD30u; }
        if (ctx->pc != 0x1DFD30u) { return; }
    }
    ctx->pc = 0x1DFD30u;
label_1dfd30:
    // 0x1dfd30: 0xc072b78  jal         func_1CADE0
label_1dfd34:
    if (ctx->pc == 0x1DFD34u) {
        ctx->pc = 0x1DFD34u;
            // 0x1dfd34: 0x92240094  lbu         $a0, 0x94($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->pc = 0x1DFD38u;
        goto label_1dfd38;
    }
    ctx->pc = 0x1DFD30u;
    SET_GPR_U32(ctx, 31, 0x1DFD38u);
    ctx->pc = 0x1DFD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD30u;
            // 0x1dfd34: 0x92240094  lbu         $a0, 0x94($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD38u; }
        if (ctx->pc != 0x1DFD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD38u; }
        if (ctx->pc != 0x1DFD38u) { return; }
    }
    ctx->pc = 0x1DFD38u;
label_1dfd38:
    // 0x1dfd38: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1dfd3c:
    if (ctx->pc == 0x1DFD3Cu) {
        ctx->pc = 0x1DFD3Cu;
            // 0x1dfd3c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1DFD40u;
        goto label_1dfd40;
    }
    ctx->pc = 0x1DFD38u;
    {
        const bool branch_taken_0x1dfd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfd38) {
            ctx->pc = 0x1DFD3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD38u;
            // 0x1dfd3c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFD4Cu;
            goto label_1dfd4c;
        }
    }
    ctx->pc = 0x1DFD40u;
label_1dfd40:
    // 0x1dfd40: 0xc072aaa  jal         func_1CAAA8
label_1dfd44:
    if (ctx->pc == 0x1DFD44u) {
        ctx->pc = 0x1DFD44u;
            // 0x1dfd44: 0x92240094  lbu         $a0, 0x94($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->pc = 0x1DFD48u;
        goto label_1dfd48;
    }
    ctx->pc = 0x1DFD40u;
    SET_GPR_U32(ctx, 31, 0x1DFD48u);
    ctx->pc = 0x1DFD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD40u;
            // 0x1dfd44: 0x92240094  lbu         $a0, 0x94($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD48u; }
        if (ctx->pc != 0x1DFD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD48u; }
        if (ctx->pc != 0x1DFD48u) { return; }
    }
    ctx->pc = 0x1DFD48u;
label_1dfd48:
    // 0x1dfd48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1dfd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1dfd4c:
    // 0x1dfd4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dfd4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dfd50:
    // 0x1dfd50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dfd50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dfd54:
    // 0x1dfd54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dfd54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dfd58:
    // 0x1dfd58: 0x3e00008  jr          $ra
label_1dfd5c:
    if (ctx->pc == 0x1DFD5Cu) {
        ctx->pc = 0x1DFD5Cu;
            // 0x1dfd5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1DFD60u;
        goto label_1dfd60;
    }
    ctx->pc = 0x1DFD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD58u;
            // 0x1dfd5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DFD60u;
label_1dfd60:
    // 0x1dfd60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1dfd64:
    // 0x1dfd64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dfd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfd68:
    // 0x1dfd68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dfd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dfd6c:
    // 0x1dfd6c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1dfd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1dfd70:
    // 0x1dfd70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dfd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dfd74:
    // 0x1dfd74: 0xc04a576  jal         func_1295D8
label_1dfd78:
    if (ctx->pc == 0x1DFD78u) {
        ctx->pc = 0x1DFD78u;
            // 0x1dfd78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD7Cu;
        goto label_1dfd7c;
    }
    ctx->pc = 0x1DFD74u;
    SET_GPR_U32(ctx, 31, 0x1DFD7Cu);
    ctx->pc = 0x1DFD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD74u;
            // 0x1dfd78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD7Cu; }
        if (ctx->pc != 0x1DFD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD7Cu; }
        if (ctx->pc != 0x1DFD7Cu) { return; }
    }
    ctx->pc = 0x1DFD7Cu;
label_1dfd7c:
    // 0x1dfd7c: 0xa2000015  sb          $zero, 0x15($s0)
    ctx->pc = 0x1dfd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
label_1dfd80:
    // 0x1dfd80: 0x163c  dsll32      $v0, $zero, 24
    ctx->pc = 0x1dfd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 24));
label_1dfd84:
    // 0x1dfd84: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1dfd84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_1dfd88:
    // 0x1dfd88: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x1dfd88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
label_1dfd8c:
    // 0x1dfd8c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1dfd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1dfd90:
    // 0x1dfd90: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1dfd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1dfd94:
    // 0x1dfd94: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1dfd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1dfd98:
    // 0x1dfd98: 0xc13ef98  jal         func_4FBE60
label_1dfd9c:
    if (ctx->pc == 0x1DFD9Cu) {
        ctx->pc = 0x1DFD9Cu;
            // 0x1dfd9c: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x1DFDA0u;
        goto label_1dfda0;
    }
    ctx->pc = 0x1DFD98u;
    SET_GPR_U32(ctx, 31, 0x1DFDA0u);
    ctx->pc = 0x1DFD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD98u;
            // 0x1dfd9c: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FBE60u;
    if (runtime->hasFunction(0x4FBE60u)) {
        auto targetFn = runtime->lookupFunction(0x4FBE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDA0u; }
        if (ctx->pc != 0x1DFDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FBE60_0x4fbe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDA0u; }
        if (ctx->pc != 0x1DFDA0u) { return; }
    }
    ctx->pc = 0x1DFDA0u;
label_1dfda0:
    // 0x1dfda0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dfda0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dfda4:
    // 0x1dfda4: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x1dfda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
label_1dfda8:
    // 0x1dfda8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1dfda8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1dfdac:
    // 0x1dfdac: 0xc04cbd8  jal         func_132F60
label_1dfdb0:
    if (ctx->pc == 0x1DFDB0u) {
        ctx->pc = 0x1DFDB0u;
            // 0x1dfdb0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1DFDB4u;
        goto label_1dfdb4;
    }
    ctx->pc = 0x1DFDACu;
    SET_GPR_U32(ctx, 31, 0x1DFDB4u);
    ctx->pc = 0x1DFDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFDACu;
            // 0x1dfdb0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDB4u; }
        if (ctx->pc != 0x1DFDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDB4u; }
        if (ctx->pc != 0x1DFDB4u) { return; }
    }
    ctx->pc = 0x1DFDB4u;
label_1dfdb4:
    // 0x1dfdb4: 0xa2000164  sb          $zero, 0x164($s0)
    ctx->pc = 0x1dfdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 356), (uint8_t)GPR_U32(ctx, 0));
label_1dfdb8:
    // 0x1dfdb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1dfdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1dfdbc:
    // 0x1dfdbc: 0xa2000165  sb          $zero, 0x165($s0)
    ctx->pc = 0x1dfdbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 357), (uint8_t)GPR_U32(ctx, 0));
label_1dfdc0:
    // 0x1dfdc0: 0xa2000188  sb          $zero, 0x188($s0)
    ctx->pc = 0x1dfdc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 392), (uint8_t)GPR_U32(ctx, 0));
label_1dfdc4:
    // 0x1dfdc4: 0xa2000124  sb          $zero, 0x124($s0)
    ctx->pc = 0x1dfdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 292), (uint8_t)GPR_U32(ctx, 0));
label_1dfdc8:
    // 0x1dfdc8: 0xa2000166  sb          $zero, 0x166($s0)
    ctx->pc = 0x1dfdc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 358), (uint8_t)GPR_U32(ctx, 0));
label_1dfdcc:
    // 0x1dfdcc: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x1dfdccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
label_1dfdd0:
    // 0x1dfdd0: 0xa6000162  sh          $zero, 0x162($s0)
    ctx->pc = 0x1dfdd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
label_1dfdd4:
    // 0x1dfdd4: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x1dfdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
label_1dfdd8:
    // 0x1dfdd8: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x1dfdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_1dfddc:
    // 0x1dfddc: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x1dfddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
label_1dfde0:
    // 0x1dfde0: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x1dfde0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
label_1dfde4:
    // 0x1dfde4: 0xa2000169  sb          $zero, 0x169($s0)
    ctx->pc = 0x1dfde4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 361), (uint8_t)GPR_U32(ctx, 0));
label_1dfde8:
    // 0x1dfde8: 0xa2000167  sb          $zero, 0x167($s0)
    ctx->pc = 0x1dfde8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 359), (uint8_t)GPR_U32(ctx, 0));
label_1dfdec:
    // 0x1dfdec: 0xc074740  jal         func_1D1D00
label_1dfdf0:
    if (ctx->pc == 0x1DFDF0u) {
        ctx->pc = 0x1DFDF0u;
            // 0x1dfdf0: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x1DFDF4u;
        goto label_1dfdf4;
    }
    ctx->pc = 0x1DFDECu;
    SET_GPR_U32(ctx, 31, 0x1DFDF4u);
    ctx->pc = 0x1DFDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFDECu;
            // 0x1dfdf0: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDF4u; }
        if (ctx->pc != 0x1DFDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDF4u; }
        if (ctx->pc != 0x1DFDF4u) { return; }
    }
    ctx->pc = 0x1DFDF4u;
label_1dfdf4:
    // 0x1dfdf4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_1dfdf8:
    if (ctx->pc == 0x1DFDF8u) {
        ctx->pc = 0x1DFDF8u;
            // 0x1dfdf8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1DFDFCu;
        goto label_1dfdfc;
    }
    ctx->pc = 0x1DFDF4u;
    {
        const bool branch_taken_0x1dfdf4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1dfdf4) {
            ctx->pc = 0x1DFDF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFDF4u;
            // 0x1dfdf8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFE08u;
            goto label_1dfe08;
        }
    }
    ctx->pc = 0x1DFDFCu;
label_1dfdfc:
    // 0x1dfdfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dfdfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfe00:
    // 0x1dfe00: 0x10000007  b           . + 4 + (0x7 << 2)
label_1dfe04:
    if (ctx->pc == 0x1DFE04u) {
        ctx->pc = 0x1DFE04u;
            // 0x1dfe04: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1DFE08u;
        goto label_1dfe08;
    }
    ctx->pc = 0x1DFE00u;
    {
        const bool branch_taken_0x1dfe00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE00u;
            // 0x1dfe04: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe00) {
            ctx->pc = 0x1DFE20u;
            goto label_1dfe20;
        }
    }
    ctx->pc = 0x1DFE08u;
label_1dfe08:
    // 0x1dfe08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dfe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dfe0c:
    // 0x1dfe0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dfe0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1dfe10:
    // 0x1dfe10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dfe10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfe14:
    // 0x1dfe14: 0x0  nop
    ctx->pc = 0x1dfe14u;
    // NOP
label_1dfe18:
    // 0x1dfe18: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1dfe18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1dfe1c:
    // 0x1dfe1c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1dfe1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1dfe20:
    // 0x1dfe20: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x1dfe20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_1dfe24:
    // 0x1dfe24: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1dfe24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1dfe28:
    // 0x1dfe28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dfe28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfe2c:
    // 0x1dfe2c: 0x0  nop
    ctx->pc = 0x1dfe2cu;
    // NOP
label_1dfe30:
    // 0x1dfe30: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1dfe30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1dfe34:
    // 0x1dfe34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1dfe34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1dfe38:
    // 0x1dfe38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dfe38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfe3c:
    // 0x1dfe3c: 0x0  nop
    ctx->pc = 0x1dfe3cu;
    // NOP
label_1dfe40:
    // 0x1dfe40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1dfe40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1dfe44:
    // 0x1dfe44: 0xe6000184  swc1        $f0, 0x184($s0)
    ctx->pc = 0x1dfe44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 388), bits); }
label_1dfe48:
    // 0x1dfe48: 0xc074740  jal         func_1D1D00
label_1dfe4c:
    if (ctx->pc == 0x1DFE4Cu) {
        ctx->pc = 0x1DFE4Cu;
            // 0x1dfe4c: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x1DFE50u;
        goto label_1dfe50;
    }
    ctx->pc = 0x1DFE48u;
    SET_GPR_U32(ctx, 31, 0x1DFE50u);
    ctx->pc = 0x1DFE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE48u;
            // 0x1dfe4c: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE50u; }
        if (ctx->pc != 0x1DFE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE50u; }
        if (ctx->pc != 0x1DFE50u) { return; }
    }
    ctx->pc = 0x1DFE50u;
label_1dfe50:
    // 0x1dfe50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1dfe50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dfe54:
    // 0x1dfe54: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1dfe54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1dfe58:
    // 0x1dfe58: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1dfe58u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1dfe5c:
    // 0x1dfe5c: 0x1010  mfhi        $v0
    ctx->pc = 0x1dfe5cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1dfe60:
    // 0x1dfe60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dfe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1dfe64:
    // 0x1dfe64: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x1dfe64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
label_1dfe68:
    // 0x1dfe68: 0xc074740  jal         func_1D1D00
label_1dfe6c:
    if (ctx->pc == 0x1DFE6Cu) {
        ctx->pc = 0x1DFE6Cu;
            // 0x1dfe6c: 0x8c64a2e0  lw          $a0, -0x5D20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943456)));
        ctx->pc = 0x1DFE70u;
        goto label_1dfe70;
    }
    ctx->pc = 0x1DFE68u;
    SET_GPR_U32(ctx, 31, 0x1DFE70u);
    ctx->pc = 0x1DFE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE68u;
            // 0x1dfe6c: 0x8c64a2e0  lw          $a0, -0x5D20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE70u; }
        if (ctx->pc != 0x1DFE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE70u; }
        if (ctx->pc != 0x1DFE70u) { return; }
    }
    ctx->pc = 0x1DFE70u;
label_1dfe70:
    // 0x1dfe70: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1dfe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1dfe74:
    // 0x1dfe74: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1dfe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1dfe78:
    // 0x1dfe78: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1dfe78u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1dfe7c:
    // 0x1dfe7c: 0x1010  mfhi        $v0
    ctx->pc = 0x1dfe7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1dfe80:
    // 0x1dfe80: 0xc13df30  jal         func_4F7CC0
label_1dfe84:
    if (ctx->pc == 0x1DFE84u) {
        ctx->pc = 0x1DFE84u;
            // 0x1dfe84: 0xa2020168  sb          $v0, 0x168($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 360), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1DFE88u;
        goto label_1dfe88;
    }
    ctx->pc = 0x1DFE80u;
    SET_GPR_U32(ctx, 31, 0x1DFE88u);
    ctx->pc = 0x1DFE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE80u;
            // 0x1dfe84: 0xa2020168  sb          $v0, 0x168($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 360), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F7CC0u;
    if (runtime->hasFunction(0x4F7CC0u)) {
        auto targetFn = runtime->lookupFunction(0x4F7CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE88u; }
        if (ctx->pc != 0x1DFE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F7CC0_0x4f7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE88u; }
        if (ctx->pc != 0x1DFE88u) { return; }
    }
    ctx->pc = 0x1DFE88u;
label_1dfe88:
    // 0x1dfe88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dfe88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dfe8c:
    // 0x1dfe8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dfe8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dfe90:
    // 0x1dfe90: 0x3e00008  jr          $ra
label_1dfe94:
    if (ctx->pc == 0x1DFE94u) {
        ctx->pc = 0x1DFE94u;
            // 0x1dfe94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1DFE98u;
        goto label_1dfe98;
    }
    ctx->pc = 0x1DFE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE90u;
            // 0x1dfe94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DFE98u;
label_1dfe98:
    // 0x1dfe98: 0x0  nop
    ctx->pc = 0x1dfe98u;
    // NOP
label_1dfe9c:
    // 0x1dfe9c: 0x0  nop
    ctx->pc = 0x1dfe9cu;
    // NOP
label_1dfea0:
    // 0x1dfea0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dfea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dfea4:
    // 0x1dfea4: 0x248503e0  addiu       $a1, $a0, 0x3E0
    ctx->pc = 0x1dfea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 992));
label_1dfea8:
    // 0x1dfea8: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x1dfea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_1dfeac:
    // 0x1dfeac: 0x3200008  jr          $t9
label_1dfeb0:
    if (ctx->pc == 0x1DFEB0u) {
        ctx->pc = 0x1DFEB4u;
        goto label_1dfeb4;
    }
    ctx->pc = 0x1DFEACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DFEB4u;
label_1dfeb4:
    // 0x1dfeb4: 0x0  nop
    ctx->pc = 0x1dfeb4u;
    // NOP
label_1dfeb8:
    // 0x1dfeb8: 0x0  nop
    ctx->pc = 0x1dfeb8u;
    // NOP
label_1dfebc:
    // 0x1dfebc: 0x0  nop
    ctx->pc = 0x1dfebcu;
    // NOP
}
