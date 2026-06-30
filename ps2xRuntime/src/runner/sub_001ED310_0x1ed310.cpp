#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED310
// Address: 0x1ed310 - 0x1ee670
void sub_001ED310_0x1ed310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED310_0x1ed310");
#endif

    switch (ctx->pc) {
        case 0x1ed310u: goto label_1ed310;
        case 0x1ed314u: goto label_1ed314;
        case 0x1ed318u: goto label_1ed318;
        case 0x1ed31cu: goto label_1ed31c;
        case 0x1ed320u: goto label_1ed320;
        case 0x1ed324u: goto label_1ed324;
        case 0x1ed328u: goto label_1ed328;
        case 0x1ed32cu: goto label_1ed32c;
        case 0x1ed330u: goto label_1ed330;
        case 0x1ed334u: goto label_1ed334;
        case 0x1ed338u: goto label_1ed338;
        case 0x1ed33cu: goto label_1ed33c;
        case 0x1ed340u: goto label_1ed340;
        case 0x1ed344u: goto label_1ed344;
        case 0x1ed348u: goto label_1ed348;
        case 0x1ed34cu: goto label_1ed34c;
        case 0x1ed350u: goto label_1ed350;
        case 0x1ed354u: goto label_1ed354;
        case 0x1ed358u: goto label_1ed358;
        case 0x1ed35cu: goto label_1ed35c;
        case 0x1ed360u: goto label_1ed360;
        case 0x1ed364u: goto label_1ed364;
        case 0x1ed368u: goto label_1ed368;
        case 0x1ed36cu: goto label_1ed36c;
        case 0x1ed370u: goto label_1ed370;
        case 0x1ed374u: goto label_1ed374;
        case 0x1ed378u: goto label_1ed378;
        case 0x1ed37cu: goto label_1ed37c;
        case 0x1ed380u: goto label_1ed380;
        case 0x1ed384u: goto label_1ed384;
        case 0x1ed388u: goto label_1ed388;
        case 0x1ed38cu: goto label_1ed38c;
        case 0x1ed390u: goto label_1ed390;
        case 0x1ed394u: goto label_1ed394;
        case 0x1ed398u: goto label_1ed398;
        case 0x1ed39cu: goto label_1ed39c;
        case 0x1ed3a0u: goto label_1ed3a0;
        case 0x1ed3a4u: goto label_1ed3a4;
        case 0x1ed3a8u: goto label_1ed3a8;
        case 0x1ed3acu: goto label_1ed3ac;
        case 0x1ed3b0u: goto label_1ed3b0;
        case 0x1ed3b4u: goto label_1ed3b4;
        case 0x1ed3b8u: goto label_1ed3b8;
        case 0x1ed3bcu: goto label_1ed3bc;
        case 0x1ed3c0u: goto label_1ed3c0;
        case 0x1ed3c4u: goto label_1ed3c4;
        case 0x1ed3c8u: goto label_1ed3c8;
        case 0x1ed3ccu: goto label_1ed3cc;
        case 0x1ed3d0u: goto label_1ed3d0;
        case 0x1ed3d4u: goto label_1ed3d4;
        case 0x1ed3d8u: goto label_1ed3d8;
        case 0x1ed3dcu: goto label_1ed3dc;
        case 0x1ed3e0u: goto label_1ed3e0;
        case 0x1ed3e4u: goto label_1ed3e4;
        case 0x1ed3e8u: goto label_1ed3e8;
        case 0x1ed3ecu: goto label_1ed3ec;
        case 0x1ed3f0u: goto label_1ed3f0;
        case 0x1ed3f4u: goto label_1ed3f4;
        case 0x1ed3f8u: goto label_1ed3f8;
        case 0x1ed3fcu: goto label_1ed3fc;
        case 0x1ed400u: goto label_1ed400;
        case 0x1ed404u: goto label_1ed404;
        case 0x1ed408u: goto label_1ed408;
        case 0x1ed40cu: goto label_1ed40c;
        case 0x1ed410u: goto label_1ed410;
        case 0x1ed414u: goto label_1ed414;
        case 0x1ed418u: goto label_1ed418;
        case 0x1ed41cu: goto label_1ed41c;
        case 0x1ed420u: goto label_1ed420;
        case 0x1ed424u: goto label_1ed424;
        case 0x1ed428u: goto label_1ed428;
        case 0x1ed42cu: goto label_1ed42c;
        case 0x1ed430u: goto label_1ed430;
        case 0x1ed434u: goto label_1ed434;
        case 0x1ed438u: goto label_1ed438;
        case 0x1ed43cu: goto label_1ed43c;
        case 0x1ed440u: goto label_1ed440;
        case 0x1ed444u: goto label_1ed444;
        case 0x1ed448u: goto label_1ed448;
        case 0x1ed44cu: goto label_1ed44c;
        case 0x1ed450u: goto label_1ed450;
        case 0x1ed454u: goto label_1ed454;
        case 0x1ed458u: goto label_1ed458;
        case 0x1ed45cu: goto label_1ed45c;
        case 0x1ed460u: goto label_1ed460;
        case 0x1ed464u: goto label_1ed464;
        case 0x1ed468u: goto label_1ed468;
        case 0x1ed46cu: goto label_1ed46c;
        case 0x1ed470u: goto label_1ed470;
        case 0x1ed474u: goto label_1ed474;
        case 0x1ed478u: goto label_1ed478;
        case 0x1ed47cu: goto label_1ed47c;
        case 0x1ed480u: goto label_1ed480;
        case 0x1ed484u: goto label_1ed484;
        case 0x1ed488u: goto label_1ed488;
        case 0x1ed48cu: goto label_1ed48c;
        case 0x1ed490u: goto label_1ed490;
        case 0x1ed494u: goto label_1ed494;
        case 0x1ed498u: goto label_1ed498;
        case 0x1ed49cu: goto label_1ed49c;
        case 0x1ed4a0u: goto label_1ed4a0;
        case 0x1ed4a4u: goto label_1ed4a4;
        case 0x1ed4a8u: goto label_1ed4a8;
        case 0x1ed4acu: goto label_1ed4ac;
        case 0x1ed4b0u: goto label_1ed4b0;
        case 0x1ed4b4u: goto label_1ed4b4;
        case 0x1ed4b8u: goto label_1ed4b8;
        case 0x1ed4bcu: goto label_1ed4bc;
        case 0x1ed4c0u: goto label_1ed4c0;
        case 0x1ed4c4u: goto label_1ed4c4;
        case 0x1ed4c8u: goto label_1ed4c8;
        case 0x1ed4ccu: goto label_1ed4cc;
        case 0x1ed4d0u: goto label_1ed4d0;
        case 0x1ed4d4u: goto label_1ed4d4;
        case 0x1ed4d8u: goto label_1ed4d8;
        case 0x1ed4dcu: goto label_1ed4dc;
        case 0x1ed4e0u: goto label_1ed4e0;
        case 0x1ed4e4u: goto label_1ed4e4;
        case 0x1ed4e8u: goto label_1ed4e8;
        case 0x1ed4ecu: goto label_1ed4ec;
        case 0x1ed4f0u: goto label_1ed4f0;
        case 0x1ed4f4u: goto label_1ed4f4;
        case 0x1ed4f8u: goto label_1ed4f8;
        case 0x1ed4fcu: goto label_1ed4fc;
        case 0x1ed500u: goto label_1ed500;
        case 0x1ed504u: goto label_1ed504;
        case 0x1ed508u: goto label_1ed508;
        case 0x1ed50cu: goto label_1ed50c;
        case 0x1ed510u: goto label_1ed510;
        case 0x1ed514u: goto label_1ed514;
        case 0x1ed518u: goto label_1ed518;
        case 0x1ed51cu: goto label_1ed51c;
        case 0x1ed520u: goto label_1ed520;
        case 0x1ed524u: goto label_1ed524;
        case 0x1ed528u: goto label_1ed528;
        case 0x1ed52cu: goto label_1ed52c;
        case 0x1ed530u: goto label_1ed530;
        case 0x1ed534u: goto label_1ed534;
        case 0x1ed538u: goto label_1ed538;
        case 0x1ed53cu: goto label_1ed53c;
        case 0x1ed540u: goto label_1ed540;
        case 0x1ed544u: goto label_1ed544;
        case 0x1ed548u: goto label_1ed548;
        case 0x1ed54cu: goto label_1ed54c;
        case 0x1ed550u: goto label_1ed550;
        case 0x1ed554u: goto label_1ed554;
        case 0x1ed558u: goto label_1ed558;
        case 0x1ed55cu: goto label_1ed55c;
        case 0x1ed560u: goto label_1ed560;
        case 0x1ed564u: goto label_1ed564;
        case 0x1ed568u: goto label_1ed568;
        case 0x1ed56cu: goto label_1ed56c;
        case 0x1ed570u: goto label_1ed570;
        case 0x1ed574u: goto label_1ed574;
        case 0x1ed578u: goto label_1ed578;
        case 0x1ed57cu: goto label_1ed57c;
        case 0x1ed580u: goto label_1ed580;
        case 0x1ed584u: goto label_1ed584;
        case 0x1ed588u: goto label_1ed588;
        case 0x1ed58cu: goto label_1ed58c;
        case 0x1ed590u: goto label_1ed590;
        case 0x1ed594u: goto label_1ed594;
        case 0x1ed598u: goto label_1ed598;
        case 0x1ed59cu: goto label_1ed59c;
        case 0x1ed5a0u: goto label_1ed5a0;
        case 0x1ed5a4u: goto label_1ed5a4;
        case 0x1ed5a8u: goto label_1ed5a8;
        case 0x1ed5acu: goto label_1ed5ac;
        case 0x1ed5b0u: goto label_1ed5b0;
        case 0x1ed5b4u: goto label_1ed5b4;
        case 0x1ed5b8u: goto label_1ed5b8;
        case 0x1ed5bcu: goto label_1ed5bc;
        case 0x1ed5c0u: goto label_1ed5c0;
        case 0x1ed5c4u: goto label_1ed5c4;
        case 0x1ed5c8u: goto label_1ed5c8;
        case 0x1ed5ccu: goto label_1ed5cc;
        case 0x1ed5d0u: goto label_1ed5d0;
        case 0x1ed5d4u: goto label_1ed5d4;
        case 0x1ed5d8u: goto label_1ed5d8;
        case 0x1ed5dcu: goto label_1ed5dc;
        case 0x1ed5e0u: goto label_1ed5e0;
        case 0x1ed5e4u: goto label_1ed5e4;
        case 0x1ed5e8u: goto label_1ed5e8;
        case 0x1ed5ecu: goto label_1ed5ec;
        case 0x1ed5f0u: goto label_1ed5f0;
        case 0x1ed5f4u: goto label_1ed5f4;
        case 0x1ed5f8u: goto label_1ed5f8;
        case 0x1ed5fcu: goto label_1ed5fc;
        case 0x1ed600u: goto label_1ed600;
        case 0x1ed604u: goto label_1ed604;
        case 0x1ed608u: goto label_1ed608;
        case 0x1ed60cu: goto label_1ed60c;
        case 0x1ed610u: goto label_1ed610;
        case 0x1ed614u: goto label_1ed614;
        case 0x1ed618u: goto label_1ed618;
        case 0x1ed61cu: goto label_1ed61c;
        case 0x1ed620u: goto label_1ed620;
        case 0x1ed624u: goto label_1ed624;
        case 0x1ed628u: goto label_1ed628;
        case 0x1ed62cu: goto label_1ed62c;
        case 0x1ed630u: goto label_1ed630;
        case 0x1ed634u: goto label_1ed634;
        case 0x1ed638u: goto label_1ed638;
        case 0x1ed63cu: goto label_1ed63c;
        case 0x1ed640u: goto label_1ed640;
        case 0x1ed644u: goto label_1ed644;
        case 0x1ed648u: goto label_1ed648;
        case 0x1ed64cu: goto label_1ed64c;
        case 0x1ed650u: goto label_1ed650;
        case 0x1ed654u: goto label_1ed654;
        case 0x1ed658u: goto label_1ed658;
        case 0x1ed65cu: goto label_1ed65c;
        case 0x1ed660u: goto label_1ed660;
        case 0x1ed664u: goto label_1ed664;
        case 0x1ed668u: goto label_1ed668;
        case 0x1ed66cu: goto label_1ed66c;
        case 0x1ed670u: goto label_1ed670;
        case 0x1ed674u: goto label_1ed674;
        case 0x1ed678u: goto label_1ed678;
        case 0x1ed67cu: goto label_1ed67c;
        case 0x1ed680u: goto label_1ed680;
        case 0x1ed684u: goto label_1ed684;
        case 0x1ed688u: goto label_1ed688;
        case 0x1ed68cu: goto label_1ed68c;
        case 0x1ed690u: goto label_1ed690;
        case 0x1ed694u: goto label_1ed694;
        case 0x1ed698u: goto label_1ed698;
        case 0x1ed69cu: goto label_1ed69c;
        case 0x1ed6a0u: goto label_1ed6a0;
        case 0x1ed6a4u: goto label_1ed6a4;
        case 0x1ed6a8u: goto label_1ed6a8;
        case 0x1ed6acu: goto label_1ed6ac;
        case 0x1ed6b0u: goto label_1ed6b0;
        case 0x1ed6b4u: goto label_1ed6b4;
        case 0x1ed6b8u: goto label_1ed6b8;
        case 0x1ed6bcu: goto label_1ed6bc;
        case 0x1ed6c0u: goto label_1ed6c0;
        case 0x1ed6c4u: goto label_1ed6c4;
        case 0x1ed6c8u: goto label_1ed6c8;
        case 0x1ed6ccu: goto label_1ed6cc;
        case 0x1ed6d0u: goto label_1ed6d0;
        case 0x1ed6d4u: goto label_1ed6d4;
        case 0x1ed6d8u: goto label_1ed6d8;
        case 0x1ed6dcu: goto label_1ed6dc;
        case 0x1ed6e0u: goto label_1ed6e0;
        case 0x1ed6e4u: goto label_1ed6e4;
        case 0x1ed6e8u: goto label_1ed6e8;
        case 0x1ed6ecu: goto label_1ed6ec;
        case 0x1ed6f0u: goto label_1ed6f0;
        case 0x1ed6f4u: goto label_1ed6f4;
        case 0x1ed6f8u: goto label_1ed6f8;
        case 0x1ed6fcu: goto label_1ed6fc;
        case 0x1ed700u: goto label_1ed700;
        case 0x1ed704u: goto label_1ed704;
        case 0x1ed708u: goto label_1ed708;
        case 0x1ed70cu: goto label_1ed70c;
        case 0x1ed710u: goto label_1ed710;
        case 0x1ed714u: goto label_1ed714;
        case 0x1ed718u: goto label_1ed718;
        case 0x1ed71cu: goto label_1ed71c;
        case 0x1ed720u: goto label_1ed720;
        case 0x1ed724u: goto label_1ed724;
        case 0x1ed728u: goto label_1ed728;
        case 0x1ed72cu: goto label_1ed72c;
        case 0x1ed730u: goto label_1ed730;
        case 0x1ed734u: goto label_1ed734;
        case 0x1ed738u: goto label_1ed738;
        case 0x1ed73cu: goto label_1ed73c;
        case 0x1ed740u: goto label_1ed740;
        case 0x1ed744u: goto label_1ed744;
        case 0x1ed748u: goto label_1ed748;
        case 0x1ed74cu: goto label_1ed74c;
        case 0x1ed750u: goto label_1ed750;
        case 0x1ed754u: goto label_1ed754;
        case 0x1ed758u: goto label_1ed758;
        case 0x1ed75cu: goto label_1ed75c;
        case 0x1ed760u: goto label_1ed760;
        case 0x1ed764u: goto label_1ed764;
        case 0x1ed768u: goto label_1ed768;
        case 0x1ed76cu: goto label_1ed76c;
        case 0x1ed770u: goto label_1ed770;
        case 0x1ed774u: goto label_1ed774;
        case 0x1ed778u: goto label_1ed778;
        case 0x1ed77cu: goto label_1ed77c;
        case 0x1ed780u: goto label_1ed780;
        case 0x1ed784u: goto label_1ed784;
        case 0x1ed788u: goto label_1ed788;
        case 0x1ed78cu: goto label_1ed78c;
        case 0x1ed790u: goto label_1ed790;
        case 0x1ed794u: goto label_1ed794;
        case 0x1ed798u: goto label_1ed798;
        case 0x1ed79cu: goto label_1ed79c;
        case 0x1ed7a0u: goto label_1ed7a0;
        case 0x1ed7a4u: goto label_1ed7a4;
        case 0x1ed7a8u: goto label_1ed7a8;
        case 0x1ed7acu: goto label_1ed7ac;
        case 0x1ed7b0u: goto label_1ed7b0;
        case 0x1ed7b4u: goto label_1ed7b4;
        case 0x1ed7b8u: goto label_1ed7b8;
        case 0x1ed7bcu: goto label_1ed7bc;
        case 0x1ed7c0u: goto label_1ed7c0;
        case 0x1ed7c4u: goto label_1ed7c4;
        case 0x1ed7c8u: goto label_1ed7c8;
        case 0x1ed7ccu: goto label_1ed7cc;
        case 0x1ed7d0u: goto label_1ed7d0;
        case 0x1ed7d4u: goto label_1ed7d4;
        case 0x1ed7d8u: goto label_1ed7d8;
        case 0x1ed7dcu: goto label_1ed7dc;
        case 0x1ed7e0u: goto label_1ed7e0;
        case 0x1ed7e4u: goto label_1ed7e4;
        case 0x1ed7e8u: goto label_1ed7e8;
        case 0x1ed7ecu: goto label_1ed7ec;
        case 0x1ed7f0u: goto label_1ed7f0;
        case 0x1ed7f4u: goto label_1ed7f4;
        case 0x1ed7f8u: goto label_1ed7f8;
        case 0x1ed7fcu: goto label_1ed7fc;
        case 0x1ed800u: goto label_1ed800;
        case 0x1ed804u: goto label_1ed804;
        case 0x1ed808u: goto label_1ed808;
        case 0x1ed80cu: goto label_1ed80c;
        case 0x1ed810u: goto label_1ed810;
        case 0x1ed814u: goto label_1ed814;
        case 0x1ed818u: goto label_1ed818;
        case 0x1ed81cu: goto label_1ed81c;
        case 0x1ed820u: goto label_1ed820;
        case 0x1ed824u: goto label_1ed824;
        case 0x1ed828u: goto label_1ed828;
        case 0x1ed82cu: goto label_1ed82c;
        case 0x1ed830u: goto label_1ed830;
        case 0x1ed834u: goto label_1ed834;
        case 0x1ed838u: goto label_1ed838;
        case 0x1ed83cu: goto label_1ed83c;
        case 0x1ed840u: goto label_1ed840;
        case 0x1ed844u: goto label_1ed844;
        case 0x1ed848u: goto label_1ed848;
        case 0x1ed84cu: goto label_1ed84c;
        case 0x1ed850u: goto label_1ed850;
        case 0x1ed854u: goto label_1ed854;
        case 0x1ed858u: goto label_1ed858;
        case 0x1ed85cu: goto label_1ed85c;
        case 0x1ed860u: goto label_1ed860;
        case 0x1ed864u: goto label_1ed864;
        case 0x1ed868u: goto label_1ed868;
        case 0x1ed86cu: goto label_1ed86c;
        case 0x1ed870u: goto label_1ed870;
        case 0x1ed874u: goto label_1ed874;
        case 0x1ed878u: goto label_1ed878;
        case 0x1ed87cu: goto label_1ed87c;
        case 0x1ed880u: goto label_1ed880;
        case 0x1ed884u: goto label_1ed884;
        case 0x1ed888u: goto label_1ed888;
        case 0x1ed88cu: goto label_1ed88c;
        case 0x1ed890u: goto label_1ed890;
        case 0x1ed894u: goto label_1ed894;
        case 0x1ed898u: goto label_1ed898;
        case 0x1ed89cu: goto label_1ed89c;
        case 0x1ed8a0u: goto label_1ed8a0;
        case 0x1ed8a4u: goto label_1ed8a4;
        case 0x1ed8a8u: goto label_1ed8a8;
        case 0x1ed8acu: goto label_1ed8ac;
        case 0x1ed8b0u: goto label_1ed8b0;
        case 0x1ed8b4u: goto label_1ed8b4;
        case 0x1ed8b8u: goto label_1ed8b8;
        case 0x1ed8bcu: goto label_1ed8bc;
        case 0x1ed8c0u: goto label_1ed8c0;
        case 0x1ed8c4u: goto label_1ed8c4;
        case 0x1ed8c8u: goto label_1ed8c8;
        case 0x1ed8ccu: goto label_1ed8cc;
        case 0x1ed8d0u: goto label_1ed8d0;
        case 0x1ed8d4u: goto label_1ed8d4;
        case 0x1ed8d8u: goto label_1ed8d8;
        case 0x1ed8dcu: goto label_1ed8dc;
        case 0x1ed8e0u: goto label_1ed8e0;
        case 0x1ed8e4u: goto label_1ed8e4;
        case 0x1ed8e8u: goto label_1ed8e8;
        case 0x1ed8ecu: goto label_1ed8ec;
        case 0x1ed8f0u: goto label_1ed8f0;
        case 0x1ed8f4u: goto label_1ed8f4;
        case 0x1ed8f8u: goto label_1ed8f8;
        case 0x1ed8fcu: goto label_1ed8fc;
        case 0x1ed900u: goto label_1ed900;
        case 0x1ed904u: goto label_1ed904;
        case 0x1ed908u: goto label_1ed908;
        case 0x1ed90cu: goto label_1ed90c;
        case 0x1ed910u: goto label_1ed910;
        case 0x1ed914u: goto label_1ed914;
        case 0x1ed918u: goto label_1ed918;
        case 0x1ed91cu: goto label_1ed91c;
        case 0x1ed920u: goto label_1ed920;
        case 0x1ed924u: goto label_1ed924;
        case 0x1ed928u: goto label_1ed928;
        case 0x1ed92cu: goto label_1ed92c;
        case 0x1ed930u: goto label_1ed930;
        case 0x1ed934u: goto label_1ed934;
        case 0x1ed938u: goto label_1ed938;
        case 0x1ed93cu: goto label_1ed93c;
        case 0x1ed940u: goto label_1ed940;
        case 0x1ed944u: goto label_1ed944;
        case 0x1ed948u: goto label_1ed948;
        case 0x1ed94cu: goto label_1ed94c;
        case 0x1ed950u: goto label_1ed950;
        case 0x1ed954u: goto label_1ed954;
        case 0x1ed958u: goto label_1ed958;
        case 0x1ed95cu: goto label_1ed95c;
        case 0x1ed960u: goto label_1ed960;
        case 0x1ed964u: goto label_1ed964;
        case 0x1ed968u: goto label_1ed968;
        case 0x1ed96cu: goto label_1ed96c;
        case 0x1ed970u: goto label_1ed970;
        case 0x1ed974u: goto label_1ed974;
        case 0x1ed978u: goto label_1ed978;
        case 0x1ed97cu: goto label_1ed97c;
        case 0x1ed980u: goto label_1ed980;
        case 0x1ed984u: goto label_1ed984;
        case 0x1ed988u: goto label_1ed988;
        case 0x1ed98cu: goto label_1ed98c;
        case 0x1ed990u: goto label_1ed990;
        case 0x1ed994u: goto label_1ed994;
        case 0x1ed998u: goto label_1ed998;
        case 0x1ed99cu: goto label_1ed99c;
        case 0x1ed9a0u: goto label_1ed9a0;
        case 0x1ed9a4u: goto label_1ed9a4;
        case 0x1ed9a8u: goto label_1ed9a8;
        case 0x1ed9acu: goto label_1ed9ac;
        case 0x1ed9b0u: goto label_1ed9b0;
        case 0x1ed9b4u: goto label_1ed9b4;
        case 0x1ed9b8u: goto label_1ed9b8;
        case 0x1ed9bcu: goto label_1ed9bc;
        case 0x1ed9c0u: goto label_1ed9c0;
        case 0x1ed9c4u: goto label_1ed9c4;
        case 0x1ed9c8u: goto label_1ed9c8;
        case 0x1ed9ccu: goto label_1ed9cc;
        case 0x1ed9d0u: goto label_1ed9d0;
        case 0x1ed9d4u: goto label_1ed9d4;
        case 0x1ed9d8u: goto label_1ed9d8;
        case 0x1ed9dcu: goto label_1ed9dc;
        case 0x1ed9e0u: goto label_1ed9e0;
        case 0x1ed9e4u: goto label_1ed9e4;
        case 0x1ed9e8u: goto label_1ed9e8;
        case 0x1ed9ecu: goto label_1ed9ec;
        case 0x1ed9f0u: goto label_1ed9f0;
        case 0x1ed9f4u: goto label_1ed9f4;
        case 0x1ed9f8u: goto label_1ed9f8;
        case 0x1ed9fcu: goto label_1ed9fc;
        case 0x1eda00u: goto label_1eda00;
        case 0x1eda04u: goto label_1eda04;
        case 0x1eda08u: goto label_1eda08;
        case 0x1eda0cu: goto label_1eda0c;
        case 0x1eda10u: goto label_1eda10;
        case 0x1eda14u: goto label_1eda14;
        case 0x1eda18u: goto label_1eda18;
        case 0x1eda1cu: goto label_1eda1c;
        case 0x1eda20u: goto label_1eda20;
        case 0x1eda24u: goto label_1eda24;
        case 0x1eda28u: goto label_1eda28;
        case 0x1eda2cu: goto label_1eda2c;
        case 0x1eda30u: goto label_1eda30;
        case 0x1eda34u: goto label_1eda34;
        case 0x1eda38u: goto label_1eda38;
        case 0x1eda3cu: goto label_1eda3c;
        case 0x1eda40u: goto label_1eda40;
        case 0x1eda44u: goto label_1eda44;
        case 0x1eda48u: goto label_1eda48;
        case 0x1eda4cu: goto label_1eda4c;
        case 0x1eda50u: goto label_1eda50;
        case 0x1eda54u: goto label_1eda54;
        case 0x1eda58u: goto label_1eda58;
        case 0x1eda5cu: goto label_1eda5c;
        case 0x1eda60u: goto label_1eda60;
        case 0x1eda64u: goto label_1eda64;
        case 0x1eda68u: goto label_1eda68;
        case 0x1eda6cu: goto label_1eda6c;
        case 0x1eda70u: goto label_1eda70;
        case 0x1eda74u: goto label_1eda74;
        case 0x1eda78u: goto label_1eda78;
        case 0x1eda7cu: goto label_1eda7c;
        case 0x1eda80u: goto label_1eda80;
        case 0x1eda84u: goto label_1eda84;
        case 0x1eda88u: goto label_1eda88;
        case 0x1eda8cu: goto label_1eda8c;
        case 0x1eda90u: goto label_1eda90;
        case 0x1eda94u: goto label_1eda94;
        case 0x1eda98u: goto label_1eda98;
        case 0x1eda9cu: goto label_1eda9c;
        case 0x1edaa0u: goto label_1edaa0;
        case 0x1edaa4u: goto label_1edaa4;
        case 0x1edaa8u: goto label_1edaa8;
        case 0x1edaacu: goto label_1edaac;
        case 0x1edab0u: goto label_1edab0;
        case 0x1edab4u: goto label_1edab4;
        case 0x1edab8u: goto label_1edab8;
        case 0x1edabcu: goto label_1edabc;
        case 0x1edac0u: goto label_1edac0;
        case 0x1edac4u: goto label_1edac4;
        case 0x1edac8u: goto label_1edac8;
        case 0x1edaccu: goto label_1edacc;
        case 0x1edad0u: goto label_1edad0;
        case 0x1edad4u: goto label_1edad4;
        case 0x1edad8u: goto label_1edad8;
        case 0x1edadcu: goto label_1edadc;
        case 0x1edae0u: goto label_1edae0;
        case 0x1edae4u: goto label_1edae4;
        case 0x1edae8u: goto label_1edae8;
        case 0x1edaecu: goto label_1edaec;
        case 0x1edaf0u: goto label_1edaf0;
        case 0x1edaf4u: goto label_1edaf4;
        case 0x1edaf8u: goto label_1edaf8;
        case 0x1edafcu: goto label_1edafc;
        case 0x1edb00u: goto label_1edb00;
        case 0x1edb04u: goto label_1edb04;
        case 0x1edb08u: goto label_1edb08;
        case 0x1edb0cu: goto label_1edb0c;
        case 0x1edb10u: goto label_1edb10;
        case 0x1edb14u: goto label_1edb14;
        case 0x1edb18u: goto label_1edb18;
        case 0x1edb1cu: goto label_1edb1c;
        case 0x1edb20u: goto label_1edb20;
        case 0x1edb24u: goto label_1edb24;
        case 0x1edb28u: goto label_1edb28;
        case 0x1edb2cu: goto label_1edb2c;
        case 0x1edb30u: goto label_1edb30;
        case 0x1edb34u: goto label_1edb34;
        case 0x1edb38u: goto label_1edb38;
        case 0x1edb3cu: goto label_1edb3c;
        case 0x1edb40u: goto label_1edb40;
        case 0x1edb44u: goto label_1edb44;
        case 0x1edb48u: goto label_1edb48;
        case 0x1edb4cu: goto label_1edb4c;
        case 0x1edb50u: goto label_1edb50;
        case 0x1edb54u: goto label_1edb54;
        case 0x1edb58u: goto label_1edb58;
        case 0x1edb5cu: goto label_1edb5c;
        case 0x1edb60u: goto label_1edb60;
        case 0x1edb64u: goto label_1edb64;
        case 0x1edb68u: goto label_1edb68;
        case 0x1edb6cu: goto label_1edb6c;
        case 0x1edb70u: goto label_1edb70;
        case 0x1edb74u: goto label_1edb74;
        case 0x1edb78u: goto label_1edb78;
        case 0x1edb7cu: goto label_1edb7c;
        case 0x1edb80u: goto label_1edb80;
        case 0x1edb84u: goto label_1edb84;
        case 0x1edb88u: goto label_1edb88;
        case 0x1edb8cu: goto label_1edb8c;
        case 0x1edb90u: goto label_1edb90;
        case 0x1edb94u: goto label_1edb94;
        case 0x1edb98u: goto label_1edb98;
        case 0x1edb9cu: goto label_1edb9c;
        case 0x1edba0u: goto label_1edba0;
        case 0x1edba4u: goto label_1edba4;
        case 0x1edba8u: goto label_1edba8;
        case 0x1edbacu: goto label_1edbac;
        case 0x1edbb0u: goto label_1edbb0;
        case 0x1edbb4u: goto label_1edbb4;
        case 0x1edbb8u: goto label_1edbb8;
        case 0x1edbbcu: goto label_1edbbc;
        case 0x1edbc0u: goto label_1edbc0;
        case 0x1edbc4u: goto label_1edbc4;
        case 0x1edbc8u: goto label_1edbc8;
        case 0x1edbccu: goto label_1edbcc;
        case 0x1edbd0u: goto label_1edbd0;
        case 0x1edbd4u: goto label_1edbd4;
        case 0x1edbd8u: goto label_1edbd8;
        case 0x1edbdcu: goto label_1edbdc;
        case 0x1edbe0u: goto label_1edbe0;
        case 0x1edbe4u: goto label_1edbe4;
        case 0x1edbe8u: goto label_1edbe8;
        case 0x1edbecu: goto label_1edbec;
        case 0x1edbf0u: goto label_1edbf0;
        case 0x1edbf4u: goto label_1edbf4;
        case 0x1edbf8u: goto label_1edbf8;
        case 0x1edbfcu: goto label_1edbfc;
        case 0x1edc00u: goto label_1edc00;
        case 0x1edc04u: goto label_1edc04;
        case 0x1edc08u: goto label_1edc08;
        case 0x1edc0cu: goto label_1edc0c;
        case 0x1edc10u: goto label_1edc10;
        case 0x1edc14u: goto label_1edc14;
        case 0x1edc18u: goto label_1edc18;
        case 0x1edc1cu: goto label_1edc1c;
        case 0x1edc20u: goto label_1edc20;
        case 0x1edc24u: goto label_1edc24;
        case 0x1edc28u: goto label_1edc28;
        case 0x1edc2cu: goto label_1edc2c;
        case 0x1edc30u: goto label_1edc30;
        case 0x1edc34u: goto label_1edc34;
        case 0x1edc38u: goto label_1edc38;
        case 0x1edc3cu: goto label_1edc3c;
        case 0x1edc40u: goto label_1edc40;
        case 0x1edc44u: goto label_1edc44;
        case 0x1edc48u: goto label_1edc48;
        case 0x1edc4cu: goto label_1edc4c;
        case 0x1edc50u: goto label_1edc50;
        case 0x1edc54u: goto label_1edc54;
        case 0x1edc58u: goto label_1edc58;
        case 0x1edc5cu: goto label_1edc5c;
        case 0x1edc60u: goto label_1edc60;
        case 0x1edc64u: goto label_1edc64;
        case 0x1edc68u: goto label_1edc68;
        case 0x1edc6cu: goto label_1edc6c;
        case 0x1edc70u: goto label_1edc70;
        case 0x1edc74u: goto label_1edc74;
        case 0x1edc78u: goto label_1edc78;
        case 0x1edc7cu: goto label_1edc7c;
        case 0x1edc80u: goto label_1edc80;
        case 0x1edc84u: goto label_1edc84;
        case 0x1edc88u: goto label_1edc88;
        case 0x1edc8cu: goto label_1edc8c;
        case 0x1edc90u: goto label_1edc90;
        case 0x1edc94u: goto label_1edc94;
        case 0x1edc98u: goto label_1edc98;
        case 0x1edc9cu: goto label_1edc9c;
        case 0x1edca0u: goto label_1edca0;
        case 0x1edca4u: goto label_1edca4;
        case 0x1edca8u: goto label_1edca8;
        case 0x1edcacu: goto label_1edcac;
        case 0x1edcb0u: goto label_1edcb0;
        case 0x1edcb4u: goto label_1edcb4;
        case 0x1edcb8u: goto label_1edcb8;
        case 0x1edcbcu: goto label_1edcbc;
        case 0x1edcc0u: goto label_1edcc0;
        case 0x1edcc4u: goto label_1edcc4;
        case 0x1edcc8u: goto label_1edcc8;
        case 0x1edcccu: goto label_1edccc;
        case 0x1edcd0u: goto label_1edcd0;
        case 0x1edcd4u: goto label_1edcd4;
        case 0x1edcd8u: goto label_1edcd8;
        case 0x1edcdcu: goto label_1edcdc;
        case 0x1edce0u: goto label_1edce0;
        case 0x1edce4u: goto label_1edce4;
        case 0x1edce8u: goto label_1edce8;
        case 0x1edcecu: goto label_1edcec;
        case 0x1edcf0u: goto label_1edcf0;
        case 0x1edcf4u: goto label_1edcf4;
        case 0x1edcf8u: goto label_1edcf8;
        case 0x1edcfcu: goto label_1edcfc;
        case 0x1edd00u: goto label_1edd00;
        case 0x1edd04u: goto label_1edd04;
        case 0x1edd08u: goto label_1edd08;
        case 0x1edd0cu: goto label_1edd0c;
        case 0x1edd10u: goto label_1edd10;
        case 0x1edd14u: goto label_1edd14;
        case 0x1edd18u: goto label_1edd18;
        case 0x1edd1cu: goto label_1edd1c;
        case 0x1edd20u: goto label_1edd20;
        case 0x1edd24u: goto label_1edd24;
        case 0x1edd28u: goto label_1edd28;
        case 0x1edd2cu: goto label_1edd2c;
        case 0x1edd30u: goto label_1edd30;
        case 0x1edd34u: goto label_1edd34;
        case 0x1edd38u: goto label_1edd38;
        case 0x1edd3cu: goto label_1edd3c;
        case 0x1edd40u: goto label_1edd40;
        case 0x1edd44u: goto label_1edd44;
        case 0x1edd48u: goto label_1edd48;
        case 0x1edd4cu: goto label_1edd4c;
        case 0x1edd50u: goto label_1edd50;
        case 0x1edd54u: goto label_1edd54;
        case 0x1edd58u: goto label_1edd58;
        case 0x1edd5cu: goto label_1edd5c;
        case 0x1edd60u: goto label_1edd60;
        case 0x1edd64u: goto label_1edd64;
        case 0x1edd68u: goto label_1edd68;
        case 0x1edd6cu: goto label_1edd6c;
        case 0x1edd70u: goto label_1edd70;
        case 0x1edd74u: goto label_1edd74;
        case 0x1edd78u: goto label_1edd78;
        case 0x1edd7cu: goto label_1edd7c;
        case 0x1edd80u: goto label_1edd80;
        case 0x1edd84u: goto label_1edd84;
        case 0x1edd88u: goto label_1edd88;
        case 0x1edd8cu: goto label_1edd8c;
        case 0x1edd90u: goto label_1edd90;
        case 0x1edd94u: goto label_1edd94;
        case 0x1edd98u: goto label_1edd98;
        case 0x1edd9cu: goto label_1edd9c;
        case 0x1edda0u: goto label_1edda0;
        case 0x1edda4u: goto label_1edda4;
        case 0x1edda8u: goto label_1edda8;
        case 0x1eddacu: goto label_1eddac;
        case 0x1eddb0u: goto label_1eddb0;
        case 0x1eddb4u: goto label_1eddb4;
        case 0x1eddb8u: goto label_1eddb8;
        case 0x1eddbcu: goto label_1eddbc;
        case 0x1eddc0u: goto label_1eddc0;
        case 0x1eddc4u: goto label_1eddc4;
        case 0x1eddc8u: goto label_1eddc8;
        case 0x1eddccu: goto label_1eddcc;
        case 0x1eddd0u: goto label_1eddd0;
        case 0x1eddd4u: goto label_1eddd4;
        case 0x1eddd8u: goto label_1eddd8;
        case 0x1edddcu: goto label_1edddc;
        case 0x1edde0u: goto label_1edde0;
        case 0x1edde4u: goto label_1edde4;
        case 0x1edde8u: goto label_1edde8;
        case 0x1eddecu: goto label_1eddec;
        case 0x1eddf0u: goto label_1eddf0;
        case 0x1eddf4u: goto label_1eddf4;
        case 0x1eddf8u: goto label_1eddf8;
        case 0x1eddfcu: goto label_1eddfc;
        case 0x1ede00u: goto label_1ede00;
        case 0x1ede04u: goto label_1ede04;
        case 0x1ede08u: goto label_1ede08;
        case 0x1ede0cu: goto label_1ede0c;
        case 0x1ede10u: goto label_1ede10;
        case 0x1ede14u: goto label_1ede14;
        case 0x1ede18u: goto label_1ede18;
        case 0x1ede1cu: goto label_1ede1c;
        case 0x1ede20u: goto label_1ede20;
        case 0x1ede24u: goto label_1ede24;
        case 0x1ede28u: goto label_1ede28;
        case 0x1ede2cu: goto label_1ede2c;
        case 0x1ede30u: goto label_1ede30;
        case 0x1ede34u: goto label_1ede34;
        case 0x1ede38u: goto label_1ede38;
        case 0x1ede3cu: goto label_1ede3c;
        case 0x1ede40u: goto label_1ede40;
        case 0x1ede44u: goto label_1ede44;
        case 0x1ede48u: goto label_1ede48;
        case 0x1ede4cu: goto label_1ede4c;
        case 0x1ede50u: goto label_1ede50;
        case 0x1ede54u: goto label_1ede54;
        case 0x1ede58u: goto label_1ede58;
        case 0x1ede5cu: goto label_1ede5c;
        case 0x1ede60u: goto label_1ede60;
        case 0x1ede64u: goto label_1ede64;
        case 0x1ede68u: goto label_1ede68;
        case 0x1ede6cu: goto label_1ede6c;
        case 0x1ede70u: goto label_1ede70;
        case 0x1ede74u: goto label_1ede74;
        case 0x1ede78u: goto label_1ede78;
        case 0x1ede7cu: goto label_1ede7c;
        case 0x1ede80u: goto label_1ede80;
        case 0x1ede84u: goto label_1ede84;
        case 0x1ede88u: goto label_1ede88;
        case 0x1ede8cu: goto label_1ede8c;
        case 0x1ede90u: goto label_1ede90;
        case 0x1ede94u: goto label_1ede94;
        case 0x1ede98u: goto label_1ede98;
        case 0x1ede9cu: goto label_1ede9c;
        case 0x1edea0u: goto label_1edea0;
        case 0x1edea4u: goto label_1edea4;
        case 0x1edea8u: goto label_1edea8;
        case 0x1edeacu: goto label_1edeac;
        case 0x1edeb0u: goto label_1edeb0;
        case 0x1edeb4u: goto label_1edeb4;
        case 0x1edeb8u: goto label_1edeb8;
        case 0x1edebcu: goto label_1edebc;
        case 0x1edec0u: goto label_1edec0;
        case 0x1edec4u: goto label_1edec4;
        case 0x1edec8u: goto label_1edec8;
        case 0x1edeccu: goto label_1edecc;
        case 0x1eded0u: goto label_1eded0;
        case 0x1eded4u: goto label_1eded4;
        case 0x1eded8u: goto label_1eded8;
        case 0x1ededcu: goto label_1ededc;
        case 0x1edee0u: goto label_1edee0;
        case 0x1edee4u: goto label_1edee4;
        case 0x1edee8u: goto label_1edee8;
        case 0x1edeecu: goto label_1edeec;
        case 0x1edef0u: goto label_1edef0;
        case 0x1edef4u: goto label_1edef4;
        case 0x1edef8u: goto label_1edef8;
        case 0x1edefcu: goto label_1edefc;
        case 0x1edf00u: goto label_1edf00;
        case 0x1edf04u: goto label_1edf04;
        case 0x1edf08u: goto label_1edf08;
        case 0x1edf0cu: goto label_1edf0c;
        case 0x1edf10u: goto label_1edf10;
        case 0x1edf14u: goto label_1edf14;
        case 0x1edf18u: goto label_1edf18;
        case 0x1edf1cu: goto label_1edf1c;
        case 0x1edf20u: goto label_1edf20;
        case 0x1edf24u: goto label_1edf24;
        case 0x1edf28u: goto label_1edf28;
        case 0x1edf2cu: goto label_1edf2c;
        case 0x1edf30u: goto label_1edf30;
        case 0x1edf34u: goto label_1edf34;
        case 0x1edf38u: goto label_1edf38;
        case 0x1edf3cu: goto label_1edf3c;
        case 0x1edf40u: goto label_1edf40;
        case 0x1edf44u: goto label_1edf44;
        case 0x1edf48u: goto label_1edf48;
        case 0x1edf4cu: goto label_1edf4c;
        case 0x1edf50u: goto label_1edf50;
        case 0x1edf54u: goto label_1edf54;
        case 0x1edf58u: goto label_1edf58;
        case 0x1edf5cu: goto label_1edf5c;
        case 0x1edf60u: goto label_1edf60;
        case 0x1edf64u: goto label_1edf64;
        case 0x1edf68u: goto label_1edf68;
        case 0x1edf6cu: goto label_1edf6c;
        case 0x1edf70u: goto label_1edf70;
        case 0x1edf74u: goto label_1edf74;
        case 0x1edf78u: goto label_1edf78;
        case 0x1edf7cu: goto label_1edf7c;
        case 0x1edf80u: goto label_1edf80;
        case 0x1edf84u: goto label_1edf84;
        case 0x1edf88u: goto label_1edf88;
        case 0x1edf8cu: goto label_1edf8c;
        case 0x1edf90u: goto label_1edf90;
        case 0x1edf94u: goto label_1edf94;
        case 0x1edf98u: goto label_1edf98;
        case 0x1edf9cu: goto label_1edf9c;
        case 0x1edfa0u: goto label_1edfa0;
        case 0x1edfa4u: goto label_1edfa4;
        case 0x1edfa8u: goto label_1edfa8;
        case 0x1edfacu: goto label_1edfac;
        case 0x1edfb0u: goto label_1edfb0;
        case 0x1edfb4u: goto label_1edfb4;
        case 0x1edfb8u: goto label_1edfb8;
        case 0x1edfbcu: goto label_1edfbc;
        case 0x1edfc0u: goto label_1edfc0;
        case 0x1edfc4u: goto label_1edfc4;
        case 0x1edfc8u: goto label_1edfc8;
        case 0x1edfccu: goto label_1edfcc;
        case 0x1edfd0u: goto label_1edfd0;
        case 0x1edfd4u: goto label_1edfd4;
        case 0x1edfd8u: goto label_1edfd8;
        case 0x1edfdcu: goto label_1edfdc;
        case 0x1edfe0u: goto label_1edfe0;
        case 0x1edfe4u: goto label_1edfe4;
        case 0x1edfe8u: goto label_1edfe8;
        case 0x1edfecu: goto label_1edfec;
        case 0x1edff0u: goto label_1edff0;
        case 0x1edff4u: goto label_1edff4;
        case 0x1edff8u: goto label_1edff8;
        case 0x1edffcu: goto label_1edffc;
        case 0x1ee000u: goto label_1ee000;
        case 0x1ee004u: goto label_1ee004;
        case 0x1ee008u: goto label_1ee008;
        case 0x1ee00cu: goto label_1ee00c;
        case 0x1ee010u: goto label_1ee010;
        case 0x1ee014u: goto label_1ee014;
        case 0x1ee018u: goto label_1ee018;
        case 0x1ee01cu: goto label_1ee01c;
        case 0x1ee020u: goto label_1ee020;
        case 0x1ee024u: goto label_1ee024;
        case 0x1ee028u: goto label_1ee028;
        case 0x1ee02cu: goto label_1ee02c;
        case 0x1ee030u: goto label_1ee030;
        case 0x1ee034u: goto label_1ee034;
        case 0x1ee038u: goto label_1ee038;
        case 0x1ee03cu: goto label_1ee03c;
        case 0x1ee040u: goto label_1ee040;
        case 0x1ee044u: goto label_1ee044;
        case 0x1ee048u: goto label_1ee048;
        case 0x1ee04cu: goto label_1ee04c;
        case 0x1ee050u: goto label_1ee050;
        case 0x1ee054u: goto label_1ee054;
        case 0x1ee058u: goto label_1ee058;
        case 0x1ee05cu: goto label_1ee05c;
        case 0x1ee060u: goto label_1ee060;
        case 0x1ee064u: goto label_1ee064;
        case 0x1ee068u: goto label_1ee068;
        case 0x1ee06cu: goto label_1ee06c;
        case 0x1ee070u: goto label_1ee070;
        case 0x1ee074u: goto label_1ee074;
        case 0x1ee078u: goto label_1ee078;
        case 0x1ee07cu: goto label_1ee07c;
        case 0x1ee080u: goto label_1ee080;
        case 0x1ee084u: goto label_1ee084;
        case 0x1ee088u: goto label_1ee088;
        case 0x1ee08cu: goto label_1ee08c;
        case 0x1ee090u: goto label_1ee090;
        case 0x1ee094u: goto label_1ee094;
        case 0x1ee098u: goto label_1ee098;
        case 0x1ee09cu: goto label_1ee09c;
        case 0x1ee0a0u: goto label_1ee0a0;
        case 0x1ee0a4u: goto label_1ee0a4;
        case 0x1ee0a8u: goto label_1ee0a8;
        case 0x1ee0acu: goto label_1ee0ac;
        case 0x1ee0b0u: goto label_1ee0b0;
        case 0x1ee0b4u: goto label_1ee0b4;
        case 0x1ee0b8u: goto label_1ee0b8;
        case 0x1ee0bcu: goto label_1ee0bc;
        case 0x1ee0c0u: goto label_1ee0c0;
        case 0x1ee0c4u: goto label_1ee0c4;
        case 0x1ee0c8u: goto label_1ee0c8;
        case 0x1ee0ccu: goto label_1ee0cc;
        case 0x1ee0d0u: goto label_1ee0d0;
        case 0x1ee0d4u: goto label_1ee0d4;
        case 0x1ee0d8u: goto label_1ee0d8;
        case 0x1ee0dcu: goto label_1ee0dc;
        case 0x1ee0e0u: goto label_1ee0e0;
        case 0x1ee0e4u: goto label_1ee0e4;
        case 0x1ee0e8u: goto label_1ee0e8;
        case 0x1ee0ecu: goto label_1ee0ec;
        case 0x1ee0f0u: goto label_1ee0f0;
        case 0x1ee0f4u: goto label_1ee0f4;
        case 0x1ee0f8u: goto label_1ee0f8;
        case 0x1ee0fcu: goto label_1ee0fc;
        case 0x1ee100u: goto label_1ee100;
        case 0x1ee104u: goto label_1ee104;
        case 0x1ee108u: goto label_1ee108;
        case 0x1ee10cu: goto label_1ee10c;
        case 0x1ee110u: goto label_1ee110;
        case 0x1ee114u: goto label_1ee114;
        case 0x1ee118u: goto label_1ee118;
        case 0x1ee11cu: goto label_1ee11c;
        case 0x1ee120u: goto label_1ee120;
        case 0x1ee124u: goto label_1ee124;
        case 0x1ee128u: goto label_1ee128;
        case 0x1ee12cu: goto label_1ee12c;
        case 0x1ee130u: goto label_1ee130;
        case 0x1ee134u: goto label_1ee134;
        case 0x1ee138u: goto label_1ee138;
        case 0x1ee13cu: goto label_1ee13c;
        case 0x1ee140u: goto label_1ee140;
        case 0x1ee144u: goto label_1ee144;
        case 0x1ee148u: goto label_1ee148;
        case 0x1ee14cu: goto label_1ee14c;
        case 0x1ee150u: goto label_1ee150;
        case 0x1ee154u: goto label_1ee154;
        case 0x1ee158u: goto label_1ee158;
        case 0x1ee15cu: goto label_1ee15c;
        case 0x1ee160u: goto label_1ee160;
        case 0x1ee164u: goto label_1ee164;
        case 0x1ee168u: goto label_1ee168;
        case 0x1ee16cu: goto label_1ee16c;
        case 0x1ee170u: goto label_1ee170;
        case 0x1ee174u: goto label_1ee174;
        case 0x1ee178u: goto label_1ee178;
        case 0x1ee17cu: goto label_1ee17c;
        case 0x1ee180u: goto label_1ee180;
        case 0x1ee184u: goto label_1ee184;
        case 0x1ee188u: goto label_1ee188;
        case 0x1ee18cu: goto label_1ee18c;
        case 0x1ee190u: goto label_1ee190;
        case 0x1ee194u: goto label_1ee194;
        case 0x1ee198u: goto label_1ee198;
        case 0x1ee19cu: goto label_1ee19c;
        case 0x1ee1a0u: goto label_1ee1a0;
        case 0x1ee1a4u: goto label_1ee1a4;
        case 0x1ee1a8u: goto label_1ee1a8;
        case 0x1ee1acu: goto label_1ee1ac;
        case 0x1ee1b0u: goto label_1ee1b0;
        case 0x1ee1b4u: goto label_1ee1b4;
        case 0x1ee1b8u: goto label_1ee1b8;
        case 0x1ee1bcu: goto label_1ee1bc;
        case 0x1ee1c0u: goto label_1ee1c0;
        case 0x1ee1c4u: goto label_1ee1c4;
        case 0x1ee1c8u: goto label_1ee1c8;
        case 0x1ee1ccu: goto label_1ee1cc;
        case 0x1ee1d0u: goto label_1ee1d0;
        case 0x1ee1d4u: goto label_1ee1d4;
        case 0x1ee1d8u: goto label_1ee1d8;
        case 0x1ee1dcu: goto label_1ee1dc;
        case 0x1ee1e0u: goto label_1ee1e0;
        case 0x1ee1e4u: goto label_1ee1e4;
        case 0x1ee1e8u: goto label_1ee1e8;
        case 0x1ee1ecu: goto label_1ee1ec;
        case 0x1ee1f0u: goto label_1ee1f0;
        case 0x1ee1f4u: goto label_1ee1f4;
        case 0x1ee1f8u: goto label_1ee1f8;
        case 0x1ee1fcu: goto label_1ee1fc;
        case 0x1ee200u: goto label_1ee200;
        case 0x1ee204u: goto label_1ee204;
        case 0x1ee208u: goto label_1ee208;
        case 0x1ee20cu: goto label_1ee20c;
        case 0x1ee210u: goto label_1ee210;
        case 0x1ee214u: goto label_1ee214;
        case 0x1ee218u: goto label_1ee218;
        case 0x1ee21cu: goto label_1ee21c;
        case 0x1ee220u: goto label_1ee220;
        case 0x1ee224u: goto label_1ee224;
        case 0x1ee228u: goto label_1ee228;
        case 0x1ee22cu: goto label_1ee22c;
        case 0x1ee230u: goto label_1ee230;
        case 0x1ee234u: goto label_1ee234;
        case 0x1ee238u: goto label_1ee238;
        case 0x1ee23cu: goto label_1ee23c;
        case 0x1ee240u: goto label_1ee240;
        case 0x1ee244u: goto label_1ee244;
        case 0x1ee248u: goto label_1ee248;
        case 0x1ee24cu: goto label_1ee24c;
        case 0x1ee250u: goto label_1ee250;
        case 0x1ee254u: goto label_1ee254;
        case 0x1ee258u: goto label_1ee258;
        case 0x1ee25cu: goto label_1ee25c;
        case 0x1ee260u: goto label_1ee260;
        case 0x1ee264u: goto label_1ee264;
        case 0x1ee268u: goto label_1ee268;
        case 0x1ee26cu: goto label_1ee26c;
        case 0x1ee270u: goto label_1ee270;
        case 0x1ee274u: goto label_1ee274;
        case 0x1ee278u: goto label_1ee278;
        case 0x1ee27cu: goto label_1ee27c;
        case 0x1ee280u: goto label_1ee280;
        case 0x1ee284u: goto label_1ee284;
        case 0x1ee288u: goto label_1ee288;
        case 0x1ee28cu: goto label_1ee28c;
        case 0x1ee290u: goto label_1ee290;
        case 0x1ee294u: goto label_1ee294;
        case 0x1ee298u: goto label_1ee298;
        case 0x1ee29cu: goto label_1ee29c;
        case 0x1ee2a0u: goto label_1ee2a0;
        case 0x1ee2a4u: goto label_1ee2a4;
        case 0x1ee2a8u: goto label_1ee2a8;
        case 0x1ee2acu: goto label_1ee2ac;
        case 0x1ee2b0u: goto label_1ee2b0;
        case 0x1ee2b4u: goto label_1ee2b4;
        case 0x1ee2b8u: goto label_1ee2b8;
        case 0x1ee2bcu: goto label_1ee2bc;
        case 0x1ee2c0u: goto label_1ee2c0;
        case 0x1ee2c4u: goto label_1ee2c4;
        case 0x1ee2c8u: goto label_1ee2c8;
        case 0x1ee2ccu: goto label_1ee2cc;
        case 0x1ee2d0u: goto label_1ee2d0;
        case 0x1ee2d4u: goto label_1ee2d4;
        case 0x1ee2d8u: goto label_1ee2d8;
        case 0x1ee2dcu: goto label_1ee2dc;
        case 0x1ee2e0u: goto label_1ee2e0;
        case 0x1ee2e4u: goto label_1ee2e4;
        case 0x1ee2e8u: goto label_1ee2e8;
        case 0x1ee2ecu: goto label_1ee2ec;
        case 0x1ee2f0u: goto label_1ee2f0;
        case 0x1ee2f4u: goto label_1ee2f4;
        case 0x1ee2f8u: goto label_1ee2f8;
        case 0x1ee2fcu: goto label_1ee2fc;
        case 0x1ee300u: goto label_1ee300;
        case 0x1ee304u: goto label_1ee304;
        case 0x1ee308u: goto label_1ee308;
        case 0x1ee30cu: goto label_1ee30c;
        case 0x1ee310u: goto label_1ee310;
        case 0x1ee314u: goto label_1ee314;
        case 0x1ee318u: goto label_1ee318;
        case 0x1ee31cu: goto label_1ee31c;
        case 0x1ee320u: goto label_1ee320;
        case 0x1ee324u: goto label_1ee324;
        case 0x1ee328u: goto label_1ee328;
        case 0x1ee32cu: goto label_1ee32c;
        case 0x1ee330u: goto label_1ee330;
        case 0x1ee334u: goto label_1ee334;
        case 0x1ee338u: goto label_1ee338;
        case 0x1ee33cu: goto label_1ee33c;
        case 0x1ee340u: goto label_1ee340;
        case 0x1ee344u: goto label_1ee344;
        case 0x1ee348u: goto label_1ee348;
        case 0x1ee34cu: goto label_1ee34c;
        case 0x1ee350u: goto label_1ee350;
        case 0x1ee354u: goto label_1ee354;
        case 0x1ee358u: goto label_1ee358;
        case 0x1ee35cu: goto label_1ee35c;
        case 0x1ee360u: goto label_1ee360;
        case 0x1ee364u: goto label_1ee364;
        case 0x1ee368u: goto label_1ee368;
        case 0x1ee36cu: goto label_1ee36c;
        case 0x1ee370u: goto label_1ee370;
        case 0x1ee374u: goto label_1ee374;
        case 0x1ee378u: goto label_1ee378;
        case 0x1ee37cu: goto label_1ee37c;
        case 0x1ee380u: goto label_1ee380;
        case 0x1ee384u: goto label_1ee384;
        case 0x1ee388u: goto label_1ee388;
        case 0x1ee38cu: goto label_1ee38c;
        case 0x1ee390u: goto label_1ee390;
        case 0x1ee394u: goto label_1ee394;
        case 0x1ee398u: goto label_1ee398;
        case 0x1ee39cu: goto label_1ee39c;
        case 0x1ee3a0u: goto label_1ee3a0;
        case 0x1ee3a4u: goto label_1ee3a4;
        case 0x1ee3a8u: goto label_1ee3a8;
        case 0x1ee3acu: goto label_1ee3ac;
        case 0x1ee3b0u: goto label_1ee3b0;
        case 0x1ee3b4u: goto label_1ee3b4;
        case 0x1ee3b8u: goto label_1ee3b8;
        case 0x1ee3bcu: goto label_1ee3bc;
        case 0x1ee3c0u: goto label_1ee3c0;
        case 0x1ee3c4u: goto label_1ee3c4;
        case 0x1ee3c8u: goto label_1ee3c8;
        case 0x1ee3ccu: goto label_1ee3cc;
        case 0x1ee3d0u: goto label_1ee3d0;
        case 0x1ee3d4u: goto label_1ee3d4;
        case 0x1ee3d8u: goto label_1ee3d8;
        case 0x1ee3dcu: goto label_1ee3dc;
        case 0x1ee3e0u: goto label_1ee3e0;
        case 0x1ee3e4u: goto label_1ee3e4;
        case 0x1ee3e8u: goto label_1ee3e8;
        case 0x1ee3ecu: goto label_1ee3ec;
        case 0x1ee3f0u: goto label_1ee3f0;
        case 0x1ee3f4u: goto label_1ee3f4;
        case 0x1ee3f8u: goto label_1ee3f8;
        case 0x1ee3fcu: goto label_1ee3fc;
        case 0x1ee400u: goto label_1ee400;
        case 0x1ee404u: goto label_1ee404;
        case 0x1ee408u: goto label_1ee408;
        case 0x1ee40cu: goto label_1ee40c;
        case 0x1ee410u: goto label_1ee410;
        case 0x1ee414u: goto label_1ee414;
        case 0x1ee418u: goto label_1ee418;
        case 0x1ee41cu: goto label_1ee41c;
        case 0x1ee420u: goto label_1ee420;
        case 0x1ee424u: goto label_1ee424;
        case 0x1ee428u: goto label_1ee428;
        case 0x1ee42cu: goto label_1ee42c;
        case 0x1ee430u: goto label_1ee430;
        case 0x1ee434u: goto label_1ee434;
        case 0x1ee438u: goto label_1ee438;
        case 0x1ee43cu: goto label_1ee43c;
        case 0x1ee440u: goto label_1ee440;
        case 0x1ee444u: goto label_1ee444;
        case 0x1ee448u: goto label_1ee448;
        case 0x1ee44cu: goto label_1ee44c;
        case 0x1ee450u: goto label_1ee450;
        case 0x1ee454u: goto label_1ee454;
        case 0x1ee458u: goto label_1ee458;
        case 0x1ee45cu: goto label_1ee45c;
        case 0x1ee460u: goto label_1ee460;
        case 0x1ee464u: goto label_1ee464;
        case 0x1ee468u: goto label_1ee468;
        case 0x1ee46cu: goto label_1ee46c;
        case 0x1ee470u: goto label_1ee470;
        case 0x1ee474u: goto label_1ee474;
        case 0x1ee478u: goto label_1ee478;
        case 0x1ee47cu: goto label_1ee47c;
        case 0x1ee480u: goto label_1ee480;
        case 0x1ee484u: goto label_1ee484;
        case 0x1ee488u: goto label_1ee488;
        case 0x1ee48cu: goto label_1ee48c;
        case 0x1ee490u: goto label_1ee490;
        case 0x1ee494u: goto label_1ee494;
        case 0x1ee498u: goto label_1ee498;
        case 0x1ee49cu: goto label_1ee49c;
        case 0x1ee4a0u: goto label_1ee4a0;
        case 0x1ee4a4u: goto label_1ee4a4;
        case 0x1ee4a8u: goto label_1ee4a8;
        case 0x1ee4acu: goto label_1ee4ac;
        case 0x1ee4b0u: goto label_1ee4b0;
        case 0x1ee4b4u: goto label_1ee4b4;
        case 0x1ee4b8u: goto label_1ee4b8;
        case 0x1ee4bcu: goto label_1ee4bc;
        case 0x1ee4c0u: goto label_1ee4c0;
        case 0x1ee4c4u: goto label_1ee4c4;
        case 0x1ee4c8u: goto label_1ee4c8;
        case 0x1ee4ccu: goto label_1ee4cc;
        case 0x1ee4d0u: goto label_1ee4d0;
        case 0x1ee4d4u: goto label_1ee4d4;
        case 0x1ee4d8u: goto label_1ee4d8;
        case 0x1ee4dcu: goto label_1ee4dc;
        case 0x1ee4e0u: goto label_1ee4e0;
        case 0x1ee4e4u: goto label_1ee4e4;
        case 0x1ee4e8u: goto label_1ee4e8;
        case 0x1ee4ecu: goto label_1ee4ec;
        case 0x1ee4f0u: goto label_1ee4f0;
        case 0x1ee4f4u: goto label_1ee4f4;
        case 0x1ee4f8u: goto label_1ee4f8;
        case 0x1ee4fcu: goto label_1ee4fc;
        case 0x1ee500u: goto label_1ee500;
        case 0x1ee504u: goto label_1ee504;
        case 0x1ee508u: goto label_1ee508;
        case 0x1ee50cu: goto label_1ee50c;
        case 0x1ee510u: goto label_1ee510;
        case 0x1ee514u: goto label_1ee514;
        case 0x1ee518u: goto label_1ee518;
        case 0x1ee51cu: goto label_1ee51c;
        case 0x1ee520u: goto label_1ee520;
        case 0x1ee524u: goto label_1ee524;
        case 0x1ee528u: goto label_1ee528;
        case 0x1ee52cu: goto label_1ee52c;
        case 0x1ee530u: goto label_1ee530;
        case 0x1ee534u: goto label_1ee534;
        case 0x1ee538u: goto label_1ee538;
        case 0x1ee53cu: goto label_1ee53c;
        case 0x1ee540u: goto label_1ee540;
        case 0x1ee544u: goto label_1ee544;
        case 0x1ee548u: goto label_1ee548;
        case 0x1ee54cu: goto label_1ee54c;
        case 0x1ee550u: goto label_1ee550;
        case 0x1ee554u: goto label_1ee554;
        case 0x1ee558u: goto label_1ee558;
        case 0x1ee55cu: goto label_1ee55c;
        case 0x1ee560u: goto label_1ee560;
        case 0x1ee564u: goto label_1ee564;
        case 0x1ee568u: goto label_1ee568;
        case 0x1ee56cu: goto label_1ee56c;
        case 0x1ee570u: goto label_1ee570;
        case 0x1ee574u: goto label_1ee574;
        case 0x1ee578u: goto label_1ee578;
        case 0x1ee57cu: goto label_1ee57c;
        case 0x1ee580u: goto label_1ee580;
        case 0x1ee584u: goto label_1ee584;
        case 0x1ee588u: goto label_1ee588;
        case 0x1ee58cu: goto label_1ee58c;
        case 0x1ee590u: goto label_1ee590;
        case 0x1ee594u: goto label_1ee594;
        case 0x1ee598u: goto label_1ee598;
        case 0x1ee59cu: goto label_1ee59c;
        case 0x1ee5a0u: goto label_1ee5a0;
        case 0x1ee5a4u: goto label_1ee5a4;
        case 0x1ee5a8u: goto label_1ee5a8;
        case 0x1ee5acu: goto label_1ee5ac;
        case 0x1ee5b0u: goto label_1ee5b0;
        case 0x1ee5b4u: goto label_1ee5b4;
        case 0x1ee5b8u: goto label_1ee5b8;
        case 0x1ee5bcu: goto label_1ee5bc;
        case 0x1ee5c0u: goto label_1ee5c0;
        case 0x1ee5c4u: goto label_1ee5c4;
        case 0x1ee5c8u: goto label_1ee5c8;
        case 0x1ee5ccu: goto label_1ee5cc;
        case 0x1ee5d0u: goto label_1ee5d0;
        case 0x1ee5d4u: goto label_1ee5d4;
        case 0x1ee5d8u: goto label_1ee5d8;
        case 0x1ee5dcu: goto label_1ee5dc;
        case 0x1ee5e0u: goto label_1ee5e0;
        case 0x1ee5e4u: goto label_1ee5e4;
        case 0x1ee5e8u: goto label_1ee5e8;
        case 0x1ee5ecu: goto label_1ee5ec;
        case 0x1ee5f0u: goto label_1ee5f0;
        case 0x1ee5f4u: goto label_1ee5f4;
        case 0x1ee5f8u: goto label_1ee5f8;
        case 0x1ee5fcu: goto label_1ee5fc;
        case 0x1ee600u: goto label_1ee600;
        case 0x1ee604u: goto label_1ee604;
        case 0x1ee608u: goto label_1ee608;
        case 0x1ee60cu: goto label_1ee60c;
        case 0x1ee610u: goto label_1ee610;
        case 0x1ee614u: goto label_1ee614;
        case 0x1ee618u: goto label_1ee618;
        case 0x1ee61cu: goto label_1ee61c;
        case 0x1ee620u: goto label_1ee620;
        case 0x1ee624u: goto label_1ee624;
        case 0x1ee628u: goto label_1ee628;
        case 0x1ee62cu: goto label_1ee62c;
        case 0x1ee630u: goto label_1ee630;
        case 0x1ee634u: goto label_1ee634;
        case 0x1ee638u: goto label_1ee638;
        case 0x1ee63cu: goto label_1ee63c;
        case 0x1ee640u: goto label_1ee640;
        case 0x1ee644u: goto label_1ee644;
        case 0x1ee648u: goto label_1ee648;
        case 0x1ee64cu: goto label_1ee64c;
        case 0x1ee650u: goto label_1ee650;
        case 0x1ee654u: goto label_1ee654;
        case 0x1ee658u: goto label_1ee658;
        case 0x1ee65cu: goto label_1ee65c;
        case 0x1ee660u: goto label_1ee660;
        case 0x1ee664u: goto label_1ee664;
        case 0x1ee668u: goto label_1ee668;
        case 0x1ee66cu: goto label_1ee66c;
        default: break;
    }

    ctx->pc = 0x1ed310u;

label_1ed310:
    // 0x1ed310: 0x27bdee10  addiu       $sp, $sp, -0x11F0
    ctx->pc = 0x1ed310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962704));
label_1ed314:
    // 0x1ed314: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ed314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1ed318:
    // 0x1ed318: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ed318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1ed31c:
    // 0x1ed31c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1ed31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1ed320:
    // 0x1ed320: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1ed320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1ed324:
    // 0x1ed324: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1ed324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1ed328:
    // 0x1ed328: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1ed328u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ed32c:
    // 0x1ed32c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ed32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1ed330:
    // 0x1ed330: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ed330u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ed334:
    // 0x1ed334: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ed334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1ed338:
    // 0x1ed338: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ed338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ed33c:
    // 0x1ed33c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ed33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1ed340:
    // 0x1ed340: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ed340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ed344:
    // 0x1ed344: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ed344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ed348:
    // 0x1ed348: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x1ed348u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_1ed34c:
    // 0x1ed34c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1ed34cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1ed350:
    // 0x1ed350: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1ed350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ed354:
    // 0x1ed354: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1ed354u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ed358:
    // 0x1ed358: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1ed358u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ed35c:
    // 0x1ed35c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ed35cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ed360:
    // 0x1ed360: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1ed360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1ed364:
    // 0x1ed364: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ed364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1ed368:
    // 0x1ed368: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1ed368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1ed36c:
    // 0x1ed36c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1ed36cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1ed370:
    // 0x1ed370: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1ed374:
    if (ctx->pc == 0x1ED374u) {
        ctx->pc = 0x1ED374u;
            // 0x1ed374: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x1ED378u;
        goto label_1ed378;
    }
    ctx->pc = 0x1ED370u;
    {
        const bool branch_taken_0x1ed370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED370u;
            // 0x1ed374: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed370) {
            ctx->pc = 0x1ED3ACu;
            goto label_1ed3ac;
        }
    }
    ctx->pc = 0x1ED378u;
label_1ed378:
    // 0x1ed378: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x1ed378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1ed37c:
    // 0x1ed37c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ed37cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1ed380:
    // 0x1ed380: 0x2484acd0  addiu       $a0, $a0, -0x5330
    ctx->pc = 0x1ed380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946000));
label_1ed384:
    // 0x1ed384: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ed384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1ed388:
    // 0x1ed388: 0x2463ace0  addiu       $v1, $v1, -0x5320
    ctx->pc = 0x1ed388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946016));
label_1ed38c:
    // 0x1ed38c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1ed38cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_1ed390:
    // 0x1ed390: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1ed390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_1ed394:
    // 0x1ed394: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ed394u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1ed398:
    // 0x1ed398: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1ed398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1ed39c:
    // 0x1ed39c: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ed39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_1ed3a0:
    // 0x1ed3a0: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1ed3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1ed3a4:
    // 0x1ed3a4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1ed3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_1ed3a8:
    // 0x1ed3a8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1ed3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_1ed3ac:
    // 0x1ed3ac: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x1ed3acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ed3b0:
    // 0x1ed3b0: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x1ed3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
label_1ed3b4:
    // 0x1ed3b4: 0x8e490008  lw          $t1, 0x8($s2)
    ctx->pc = 0x1ed3b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ed3b8:
    // 0x1ed3b8: 0x3464ffee  ori         $a0, $v1, 0xFFEE
    ctx->pc = 0x1ed3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_1ed3bc:
    // 0x1ed3bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ed3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ed3c0:
    // 0x1ed3c0: 0xc6a20028  lwc1        $f2, 0x28($s5)
    ctx->pc = 0x1ed3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ed3c4:
    // 0x1ed3c4: 0xc501005c  lwc1        $f1, 0x5C($t0)
    ctx->pc = 0x1ed3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed3c8:
    // 0x1ed3c8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1ed3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ed3cc:
    // 0x1ed3cc: 0xc520005c  lwc1        $f0, 0x5C($t1)
    ctx->pc = 0x1ed3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed3d0:
    // 0x1ed3d0: 0xafa411c0  sw          $a0, 0x11C0($sp)
    ctx->pc = 0x1ed3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4544), GPR_U32(ctx, 4));
label_1ed3d4:
    // 0x1ed3d4: 0xc5030040  lwc1        $f3, 0x40($t0)
    ctx->pc = 0x1ed3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ed3d8:
    // 0x1ed3d8: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x1ed3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
label_1ed3dc:
    // 0x1ed3dc: 0x46011202  mul.s       $f8, $f2, $f1
    ctx->pc = 0x1ed3dcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1ed3e0:
    // 0x1ed3e0: 0x26273038  addiu       $a3, $s1, 0x3038
    ctx->pc = 0x1ed3e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 12344));
label_1ed3e4:
    // 0x1ed3e4: 0x27a611c8  addiu       $a2, $sp, 0x11C8
    ctx->pc = 0x1ed3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4552));
label_1ed3e8:
    // 0x1ed3e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ed3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ed3ec:
    // 0x1ed3ec: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x1ed3ecu;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1ed3f0:
    // 0x1ed3f0: 0xc5020050  lwc1        $f2, 0x50($t0)
    ctx->pc = 0x1ed3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ed3f4:
    // 0x1ed3f4: 0xc5010044  lwc1        $f1, 0x44($t0)
    ctx->pc = 0x1ed3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed3f8:
    // 0x1ed3f8: 0xc5000054  lwc1        $f0, 0x54($t0)
    ctx->pc = 0x1ed3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed3fc:
    // 0x1ed3fc: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1ed3fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1ed400:
    // 0x1ed400: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ed400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ed404:
    // 0x1ed404: 0x4602401a  mula.s      $f8, $f2
    ctx->pc = 0x1ed404u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_1ed408:
    // 0x1ed408: 0x46004182  mul.s       $f6, $f8, $f0
    ctx->pc = 0x1ed408u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_1ed40c:
    // 0x1ed40c: 0xc5030048  lwc1        $f3, 0x48($t0)
    ctx->pc = 0x1ed40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ed410:
    // 0x1ed410: 0xc5020058  lwc1        $f2, 0x58($t0)
    ctx->pc = 0x1ed410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ed414:
    // 0x1ed414: 0xc5210050  lwc1        $f1, 0x50($t1)
    ctx->pc = 0x1ed414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed418:
    // 0x1ed418: 0xc5200040  lwc1        $f0, 0x40($t1)
    ctx->pc = 0x1ed418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed41c:
    // 0x1ed41c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1ed41cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1ed420:
    // 0x1ed420: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ed420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ed424:
    // 0x1ed424: 0x46024142  mul.s       $f5, $f8, $f2
    ctx->pc = 0x1ed424u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_1ed428:
    // 0x1ed428: 0x46003d1c  madd.s      $f20, $f7, $f0
    ctx->pc = 0x1ed428u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[0]));
label_1ed42c:
    // 0x1ed42c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1ed42cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ed430:
    // 0x1ed430: 0xc5230054  lwc1        $f3, 0x54($t1)
    ctx->pc = 0x1ed430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ed434:
    // 0x1ed434: 0xc5220044  lwc1        $f2, 0x44($t1)
    ctx->pc = 0x1ed434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ed438:
    // 0x1ed438: 0xc5210058  lwc1        $f1, 0x58($t1)
    ctx->pc = 0x1ed438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed43c:
    // 0x1ed43c: 0xc5200048  lwc1        $f0, 0x48($t1)
    ctx->pc = 0x1ed43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed440:
    // 0x1ed440: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1ed440u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1ed444:
    // 0x1ed444: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ed444u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ed448:
    // 0x1ed448: 0x46062018  adda.s      $f4, $f6
    ctx->pc = 0x1ed448u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
label_1ed44c:
    // 0x1ed44c: 0x46023d5c  madd.s      $f21, $f7, $f2
    ctx->pc = 0x1ed44cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
label_1ed450:
    // 0x1ed450: 0x46052018  adda.s      $f4, $f5
    ctx->pc = 0x1ed450u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_1ed454:
    // 0x1ed454: 0x46003d9c  madd.s      $f22, $f7, $f0
    ctx->pc = 0x1ed454u;
    ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[0]));
label_1ed458:
    // 0x1ed458: 0xc501009c  lwc1        $f1, 0x9C($t0)
    ctx->pc = 0x1ed458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed45c:
    // 0x1ed45c: 0xc520009c  lwc1        $f0, 0x9C($t1)
    ctx->pc = 0x1ed45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed460:
    // 0x1ed460: 0xc52200a0  lwc1        $f2, 0xA0($t1)
    ctx->pc = 0x1ed460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ed464:
    // 0x1ed464: 0x46014142  mul.s       $f5, $f8, $f1
    ctx->pc = 0x1ed464u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_1ed468:
    // 0x1ed468: 0x460038c2  mul.s       $f3, $f7, $f0
    ctx->pc = 0x1ed468u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1ed46c:
    // 0x1ed46c: 0xc6213010  lwc1        $f1, 0x3010($s1)
    ctx->pc = 0x1ed46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed470:
    // 0x1ed470: 0xc6203014  lwc1        $f0, 0x3014($s1)
    ctx->pc = 0x1ed470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed474:
    // 0x1ed474: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1ed474u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1ed478:
    // 0x1ed478: 0xe7a111a0  swc1        $f1, 0x11A0($sp)
    ctx->pc = 0x1ed478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4512), bits); }
label_1ed47c:
    // 0x1ed47c: 0xe7a011a4  swc1        $f0, 0x11A4($sp)
    ctx->pc = 0x1ed47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4516), bits); }
label_1ed480:
    // 0x1ed480: 0xc6213018  lwc1        $f1, 0x3018($s1)
    ctx->pc = 0x1ed480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed484:
    // 0x1ed484: 0xc620301c  lwc1        $f0, 0x301C($s1)
    ctx->pc = 0x1ed484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed488:
    // 0x1ed488: 0xc6223020  lwc1        $f2, 0x3020($s1)
    ctx->pc = 0x1ed488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ed48c:
    // 0x1ed48c: 0xe7a111a8  swc1        $f1, 0x11A8($sp)
    ctx->pc = 0x1ed48cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4520), bits); }
label_1ed490:
    // 0x1ed490: 0xc6213024  lwc1        $f1, 0x3024($s1)
    ctx->pc = 0x1ed490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed494:
    // 0x1ed494: 0xe7a011ac  swc1        $f0, 0x11AC($sp)
    ctx->pc = 0x1ed494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4524), bits); }
label_1ed498:
    // 0x1ed498: 0xc6203028  lwc1        $f0, 0x3028($s1)
    ctx->pc = 0x1ed498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed49c:
    // 0x1ed49c: 0xe7a211b0  swc1        $f2, 0x11B0($sp)
    ctx->pc = 0x1ed49cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4528), bits); }
label_1ed4a0:
    // 0x1ed4a0: 0xc622302c  lwc1        $f2, 0x302C($s1)
    ctx->pc = 0x1ed4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ed4a4:
    // 0x1ed4a4: 0xe7a111b4  swc1        $f1, 0x11B4($sp)
    ctx->pc = 0x1ed4a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4532), bits); }
label_1ed4a8:
    // 0x1ed4a8: 0xe7a011b8  swc1        $f0, 0x11B8($sp)
    ctx->pc = 0x1ed4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4536), bits); }
label_1ed4ac:
    // 0x1ed4ac: 0xc50400a0  lwc1        $f4, 0xA0($t0)
    ctx->pc = 0x1ed4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ed4b0:
    // 0x1ed4b0: 0xc6213030  lwc1        $f1, 0x3030($s1)
    ctx->pc = 0x1ed4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed4b4:
    // 0x1ed4b4: 0xe7a211bc  swc1        $f2, 0x11BC($sp)
    ctx->pc = 0x1ed4b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4540), bits); }
label_1ed4b8:
    // 0x1ed4b8: 0xc6203034  lwc1        $f0, 0x3034($s1)
    ctx->pc = 0x1ed4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed4bc:
    // 0x1ed4bc: 0xe7a111c0  swc1        $f1, 0x11C0($sp)
    ctx->pc = 0x1ed4bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4544), bits); }
label_1ed4c0:
    // 0x1ed4c0: 0x460525dc  madd.s      $f23, $f4, $f5
    ctx->pc = 0x1ed4c0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_1ed4c4:
    // 0x1ed4c4: 0xe7a011c4  swc1        $f0, 0x11C4($sp)
    ctx->pc = 0x1ed4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4548), bits); }
label_1ed4c8:
    // 0x1ed4c8: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x1ed4c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1ed4cc:
    // 0x1ed4cc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ed4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1ed4d0:
    // 0x1ed4d0: 0x84e30002  lh          $v1, 0x2($a3)
    ctx->pc = 0x1ed4d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_1ed4d4:
    // 0x1ed4d4: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x1ed4d4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_1ed4d8:
    // 0x1ed4d8: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x1ed4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
label_1ed4dc:
    // 0x1ed4dc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1ed4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_1ed4e0:
    // 0x1ed4e0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_1ed4e4:
    if (ctx->pc == 0x1ED4E4u) {
        ctx->pc = 0x1ED4E4u;
            // 0x1ed4e4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x1ED4E8u;
        goto label_1ed4e8;
    }
    ctx->pc = 0x1ED4E0u;
    {
        const bool branch_taken_0x1ed4e0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1ED4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED4E0u;
            // 0x1ed4e4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4e0) {
            ctx->pc = 0x1ED4C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed4c8;
        }
    }
    ctx->pc = 0x1ED4E8u;
label_1ed4e8:
    // 0x1ed4e8: 0xc6213044  lwc1        $f1, 0x3044($s1)
    ctx->pc = 0x1ed4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed4ec:
    // 0x1ed4ec: 0x8e283050  lw          $t0, 0x3050($s1)
    ctx->pc = 0x1ed4ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12368)));
label_1ed4f0:
    // 0x1ed4f0: 0xc6203048  lwc1        $f0, 0x3048($s1)
    ctx->pc = 0x1ed4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed4f4:
    // 0x1ed4f4: 0xe7a111d4  swc1        $f1, 0x11D4($sp)
    ctx->pc = 0x1ed4f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4564), bits); }
label_1ed4f8:
    // 0x1ed4f8: 0x1100001b  beqz        $t0, . + 4 + (0x1B << 2)
label_1ed4fc:
    if (ctx->pc == 0x1ED4FCu) {
        ctx->pc = 0x1ED4FCu;
            // 0x1ed4fc: 0xe7a011d8  swc1        $f0, 0x11D8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4568), bits); }
        ctx->pc = 0x1ED500u;
        goto label_1ed500;
    }
    ctx->pc = 0x1ED4F8u;
    {
        const bool branch_taken_0x1ed4f8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED4F8u;
            // 0x1ed4fc: 0xe7a011d8  swc1        $f0, 0x11D8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4f8) {
            ctx->pc = 0x1ED568u;
            goto label_1ed568;
        }
    }
    ctx->pc = 0x1ED500u;
label_1ed500:
    // 0x1ed500: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1ed500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1ed504:
    // 0x1ed504: 0x25070008  addiu       $a3, $t0, 0x8
    ctx->pc = 0x1ed504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_1ed508:
    // 0x1ed508: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1ed508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1ed50c:
    // 0x1ed50c: 0x27a6019c  addiu       $a2, $sp, 0x19C
    ctx->pc = 0x1ed50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_1ed510:
    // 0x1ed510: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ed510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ed514:
    // 0x1ed514: 0xafa40194  sw          $a0, 0x194($sp)
    ctx->pc = 0x1ed514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 4));
label_1ed518:
    // 0x1ed518: 0xafa30198  sw          $v1, 0x198($sp)
    ctx->pc = 0x1ed518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 3));
label_1ed51c:
    // 0x1ed51c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1ed51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1ed520:
    // 0x1ed520: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ed520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1ed524:
    // 0x1ed524: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1ed524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1ed528:
    // 0x1ed528: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1ed528u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_1ed52c:
    // 0x1ed52c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1ed52cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_1ed530:
    // 0x1ed530: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1ed530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1ed534:
    // 0x1ed534: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_1ed538:
    if (ctx->pc == 0x1ED538u) {
        ctx->pc = 0x1ED538u;
            // 0x1ed538: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x1ED53Cu;
        goto label_1ed53c;
    }
    ctx->pc = 0x1ED534u;
    {
        const bool branch_taken_0x1ed534 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1ED538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED534u;
            // 0x1ed538: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed534) {
            ctx->pc = 0x1ED51Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed51c;
        }
    }
    ctx->pc = 0x1ED53Cu;
label_1ed53c:
    // 0x1ed53c: 0x25070408  addiu       $a3, $t0, 0x408
    ctx->pc = 0x1ed53cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1032));
label_1ed540:
    // 0x1ed540: 0x27a6059c  addiu       $a2, $sp, 0x59C
    ctx->pc = 0x1ed540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1436));
label_1ed544:
    // 0x1ed544: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x1ed544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1ed548:
    // 0x1ed548: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1ed548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1ed54c:
    // 0x1ed54c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ed54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1ed550:
    // 0x1ed550: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1ed550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1ed554:
    // 0x1ed554: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1ed554u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_1ed558:
    // 0x1ed558: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1ed558u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_1ed55c:
    // 0x1ed55c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1ed55cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1ed560:
    // 0x1ed560: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_1ed564:
    if (ctx->pc == 0x1ED564u) {
        ctx->pc = 0x1ED564u;
            // 0x1ed564: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x1ED568u;
        goto label_1ed568;
    }
    ctx->pc = 0x1ED560u;
    {
        const bool branch_taken_0x1ed560 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1ED564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED560u;
            // 0x1ed564: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed560) {
            ctx->pc = 0x1ED548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed548;
        }
    }
    ctx->pc = 0x1ED568u;
label_1ed568:
    // 0x1ed568: 0x82830084  lb          $v1, 0x84($s4)
    ctx->pc = 0x1ed568u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 132)));
label_1ed56c:
    // 0x1ed56c: 0x106000d9  beqz        $v1, . + 4 + (0xD9 << 2)
label_1ed570:
    if (ctx->pc == 0x1ED570u) {
        ctx->pc = 0x1ED574u;
        goto label_1ed574;
    }
    ctx->pc = 0x1ED56Cu;
    {
        const bool branch_taken_0x1ed56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed56c) {
            ctx->pc = 0x1ED8D4u;
            goto label_1ed8d4;
        }
    }
    ctx->pc = 0x1ED574u;
label_1ed574:
    // 0x1ed574: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x1ed574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed578:
    // 0x1ed578: 0xc683002c  lwc1        $f3, 0x2C($s4)
    ctx->pc = 0x1ed578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ed57c:
    // 0x1ed57c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1ed57cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ed580:
    // 0x1ed580: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1ed584:
    if (ctx->pc == 0x1ED584u) {
        ctx->pc = 0x1ED584u;
            // 0x1ed584: 0x2696002c  addiu       $s6, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->pc = 0x1ED588u;
        goto label_1ed588;
    }
    ctx->pc = 0x1ED580u;
    {
        const bool branch_taken_0x1ed580 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ED584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED580u;
            // 0x1ed584: 0x2696002c  addiu       $s6, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed580) {
            ctx->pc = 0x1ED5E4u;
            goto label_1ed5e4;
        }
    }
    ctx->pc = 0x1ED588u;
label_1ed588:
    // 0x1ed588: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x1ed588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed58c:
    // 0x1ed58c: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x1ed58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed590:
    // 0x1ed590: 0xc6820028  lwc1        $f2, 0x28($s4)
    ctx->pc = 0x1ed590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ed594:
    // 0x1ed594: 0x4600a81a  mula.s      $f21, $f0
    ctx->pc = 0x1ed594u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1ed598:
    // 0x1ed598: 0x4601a01e  madda.s     $f20, $f1
    ctx->pc = 0x1ed598u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
label_1ed59c:
    // 0x1ed59c: 0x4602b01c  madd.s      $f0, $f22, $f2
    ctx->pc = 0x1ed59cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[2]));
label_1ed5a0:
    // 0x1ed5a0: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x1ed5a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_1ed5a4:
    // 0x1ed5a4: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x1ed5a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_1ed5a8:
    // 0x1ed5a8: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x1ed5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_1ed5ac:
    // 0x1ed5ac: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x1ed5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed5b0:
    // 0x1ed5b0: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1ed5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed5b4:
    // 0x1ed5b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ed5b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ed5b8:
    // 0x1ed5b8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_1ed5bc:
    if (ctx->pc == 0x1ED5BCu) {
        ctx->pc = 0x1ED5C0u;
        goto label_1ed5c0;
    }
    ctx->pc = 0x1ED5B8u;
    {
        const bool branch_taken_0x1ed5b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed5b8) {
            ctx->pc = 0x1ED5E4u;
            goto label_1ed5e4;
        }
    }
    ctx->pc = 0x1ED5C0u;
label_1ed5c0:
    // 0x1ed5c0: 0x92830032  lbu         $v1, 0x32($s4)
    ctx->pc = 0x1ed5c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 50)));
label_1ed5c4:
    // 0x1ed5c4: 0x506001cc  beql        $v1, $zero, . + 4 + (0x1CC << 2)
label_1ed5c8:
    if (ctx->pc == 0x1ED5C8u) {
        ctx->pc = 0x1ED5C8u;
            // 0x1ed5c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1ED5CCu;
        goto label_1ed5cc;
    }
    ctx->pc = 0x1ED5C4u;
    {
        const bool branch_taken_0x1ed5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed5c4) {
            ctx->pc = 0x1ED5C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED5C4u;
            // 0x1ed5c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EDCF8u;
            goto label_1edcf8;
        }
    }
    ctx->pc = 0x1ED5CCu;
label_1ed5cc:
    // 0x1ed5cc: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1ed5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ed5d0:
    // 0x1ed5d0: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1ed5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1ed5d4:
    // 0x1ed5d4: 0xc098768  jal         func_261DA0
label_1ed5d8:
    if (ctx->pc == 0x1ED5D8u) {
        ctx->pc = 0x1ED5D8u;
            // 0x1ed5d8: 0x26840030  addiu       $a0, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->pc = 0x1ED5DCu;
        goto label_1ed5dc;
    }
    ctx->pc = 0x1ED5D4u;
    SET_GPR_U32(ctx, 31, 0x1ED5DCu);
    ctx->pc = 0x1ED5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED5D4u;
            // 0x1ed5d8: 0x26840030  addiu       $a0, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261DA0u;
    if (runtime->hasFunction(0x261DA0u)) {
        auto targetFn = runtime->lookupFunction(0x261DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5DCu; }
        if (ctx->pc != 0x1ED5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261DA0_0x261da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5DCu; }
        if (ctx->pc != 0x1ED5DCu) { return; }
    }
    ctx->pc = 0x1ED5DCu;
label_1ed5dc:
    // 0x1ed5dc: 0x100001c5  b           . + 4 + (0x1C5 << 2)
label_1ed5e0:
    if (ctx->pc == 0x1ED5E0u) {
        ctx->pc = 0x1ED5E4u;
        goto label_1ed5e4;
    }
    ctx->pc = 0x1ED5DCu;
    {
        const bool branch_taken_0x1ed5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed5dc) {
            ctx->pc = 0x1EDCF4u;
            goto label_1edcf4;
        }
    }
    ctx->pc = 0x1ED5E4u;
label_1ed5e4:
    // 0x1ed5e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ed5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ed5e8:
    // 0x1ed5e8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1ed5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1ed5ec:
    // 0x1ed5ec: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1ed5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1ed5f0:
    // 0x1ed5f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ed5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ed5f4:
    // 0x1ed5f4: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1ed5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1ed5f8:
    // 0x1ed5f8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1ed5f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ed5fc:
    // 0x1ed5fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1ed600:
    if (ctx->pc == 0x1ED600u) {
        ctx->pc = 0x1ED600u;
            // 0x1ed600: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1ED604u;
        goto label_1ed604;
    }
    ctx->pc = 0x1ED5FCu;
    {
        const bool branch_taken_0x1ed5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED5FCu;
            // 0x1ed600: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed5fc) {
            ctx->pc = 0x1ED62Cu;
            goto label_1ed62c;
        }
    }
    ctx->pc = 0x1ED604u;
label_1ed604:
    // 0x1ed604: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ed604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ed608:
    // 0x1ed608: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ed608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1ed60c:
    // 0x1ed60c: 0x2442ace8  addiu       $v0, $v0, -0x5318
    ctx->pc = 0x1ed60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946024));
label_1ed610:
    // 0x1ed610: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ed610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ed614:
    // 0x1ed614: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ed614u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1ed618:
    // 0x1ed618: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ed618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1ed61c:
    // 0x1ed61c: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ed61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1ed620:
    // 0x1ed620: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1ed620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1ed624:
    // 0x1ed624: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1ed624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1ed628:
    // 0x1ed628: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ed628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ed62c:
    // 0x1ed62c: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x1ed62cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1ed630:
    // 0x1ed630: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ed630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ed634:
    // 0x1ed634: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ed634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ed638:
    // 0x1ed638: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ed638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ed63c:
    // 0x1ed63c: 0x2463d800  addiu       $v1, $v1, -0x2800
    ctx->pc = 0x1ed63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957056));
label_1ed640:
    // 0x1ed640: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x1ed640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1ed644:
    // 0x1ed644: 0xa7a50176  sh          $a1, 0x176($sp)
    ctx->pc = 0x1ed644u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 374), (uint16_t)GPR_U32(ctx, 5));
label_1ed648:
    // 0x1ed648: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ed648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ed64c:
    // 0x1ed64c: 0xafa60178  sw          $a2, 0x178($sp)
    ctx->pc = 0x1ed64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 6));
label_1ed650:
    // 0x1ed650: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ed650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ed654:
    // 0x1ed654: 0xafa8017c  sw          $t0, 0x17C($sp)
    ctx->pc = 0x1ed654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 8));
label_1ed658:
    // 0x1ed658: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ed658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ed65c:
    // 0x1ed65c: 0xafa30170  sw          $v1, 0x170($sp)
    ctx->pc = 0x1ed65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
label_1ed660:
    // 0x1ed660: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1ed660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ed664:
    // 0x1ed664: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x1ed664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
label_1ed668:
    // 0x1ed668: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ed668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ed66c:
    // 0x1ed66c: 0xc07c000  jal         func_1F0000
label_1ed670:
    if (ctx->pc == 0x1ED670u) {
        ctx->pc = 0x1ED670u;
            // 0x1ed670: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x1ED674u;
        goto label_1ed674;
    }
    ctx->pc = 0x1ED66Cu;
    SET_GPR_U32(ctx, 31, 0x1ED674u);
    ctx->pc = 0x1ED670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED66Cu;
            // 0x1ed670: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0000u;
    if (runtime->hasFunction(0x1F0000u)) {
        auto targetFn = runtime->lookupFunction(0x1F0000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED674u; }
        if (ctx->pc != 0x1ED674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0000_0x1f0000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED674u; }
        if (ctx->pc != 0x1ED674u) { return; }
    }
    ctx->pc = 0x1ED674u;
label_1ed674:
    // 0x1ed674: 0x8fa3017c  lw          $v1, 0x17C($sp)
    ctx->pc = 0x1ed674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_1ed678:
    // 0x1ed678: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x1ed678u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_1ed67c:
    // 0x1ed67c: 0x83a30180  lb          $v1, 0x180($sp)
    ctx->pc = 0x1ed67cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
label_1ed680:
    // 0x1ed680: 0x50600068  beql        $v1, $zero, . + 4 + (0x68 << 2)
label_1ed684:
    if (ctx->pc == 0x1ED684u) {
        ctx->pc = 0x1ED684u;
            // 0x1ed684: 0x92830032  lbu         $v1, 0x32($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 50)));
        ctx->pc = 0x1ED688u;
        goto label_1ed688;
    }
    ctx->pc = 0x1ED680u;
    {
        const bool branch_taken_0x1ed680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed680) {
            ctx->pc = 0x1ED684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED680u;
            // 0x1ed684: 0x92830032  lbu         $v1, 0x32($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 50)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ED824u;
            goto label_1ed824;
        }
    }
    ctx->pc = 0x1ED688u;
label_1ed688:
    // 0x1ed688: 0xc6213030  lwc1        $f1, 0x3030($s1)
    ctx->pc = 0x1ed688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed68c:
    // 0x1ed68c: 0xc7a011c0  lwc1        $f0, 0x11C0($sp)
    ctx->pc = 0x1ed68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed690:
    // 0x1ed690: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ed690u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ed694:
    // 0x1ed694: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
label_1ed698:
    if (ctx->pc == 0x1ED698u) {
        ctx->pc = 0x1ED698u;
            // 0x1ed698: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x1ED69Cu;
        goto label_1ed69c;
    }
    ctx->pc = 0x1ED694u;
    {
        const bool branch_taken_0x1ed694 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ED698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED694u;
            // 0x1ed698: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed694) {
            ctx->pc = 0x1ED78Cu;
            goto label_1ed78c;
        }
    }
    ctx->pc = 0x1ED69Cu;
label_1ed69c:
    // 0x1ed69c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1ed69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1ed6a0:
    // 0x1ed6a0: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x1ed6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ed6a4:
    // 0x1ed6a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ed6a8:
    if (ctx->pc == 0x1ED6A8u) {
        ctx->pc = 0x1ED6A8u;
            // 0x1ed6a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6ACu;
        goto label_1ed6ac;
    }
    ctx->pc = 0x1ED6A4u;
    {
        const bool branch_taken_0x1ed6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED6A4u;
            // 0x1ed6a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6a4) {
            ctx->pc = 0x1ED6C8u;
            goto label_1ed6c8;
        }
    }
    ctx->pc = 0x1ED6ACu;
label_1ed6ac:
    // 0x1ed6ac: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x1ed6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1ed6b0:
    // 0x1ed6b0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1ed6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1ed6b4:
    // 0x1ed6b4: 0x0  nop
    ctx->pc = 0x1ed6b4u;
    // NOP
label_1ed6b8:
    // 0x1ed6b8: 0x0  nop
    ctx->pc = 0x1ed6b8u;
    // NOP
label_1ed6bc:
    // 0x1ed6bc: 0x0  nop
    ctx->pc = 0x1ed6bcu;
    // NOP
label_1ed6c0:
    // 0x1ed6c0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1ed6c4:
    if (ctx->pc == 0x1ED6C4u) {
        ctx->pc = 0x1ED6C8u;
        goto label_1ed6c8;
    }
    ctx->pc = 0x1ED6C0u;
    {
        const bool branch_taken_0x1ed6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed6c0) {
            ctx->pc = 0x1ED6ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed6ac;
        }
    }
    ctx->pc = 0x1ED6C8u;
label_1ed6c8:
    // 0x1ed6c8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1ed6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1ed6cc:
    // 0x1ed6cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ed6d0:
    if (ctx->pc == 0x1ED6D0u) {
        ctx->pc = 0x1ED6D0u;
            // 0x1ed6d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6D4u;
        goto label_1ed6d4;
    }
    ctx->pc = 0x1ED6CCu;
    {
        const bool branch_taken_0x1ed6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED6CCu;
            // 0x1ed6d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6cc) {
            ctx->pc = 0x1ED6F0u;
            goto label_1ed6f0;
        }
    }
    ctx->pc = 0x1ED6D4u;
label_1ed6d4:
    // 0x1ed6d4: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x1ed6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1ed6d8:
    // 0x1ed6d8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1ed6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1ed6dc:
    // 0x1ed6dc: 0x0  nop
    ctx->pc = 0x1ed6dcu;
    // NOP
label_1ed6e0:
    // 0x1ed6e0: 0x0  nop
    ctx->pc = 0x1ed6e0u;
    // NOP
label_1ed6e4:
    // 0x1ed6e4: 0x0  nop
    ctx->pc = 0x1ed6e4u;
    // NOP
label_1ed6e8:
    // 0x1ed6e8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1ed6ec:
    if (ctx->pc == 0x1ED6ECu) {
        ctx->pc = 0x1ED6F0u;
        goto label_1ed6f0;
    }
    ctx->pc = 0x1ED6E8u;
    {
        const bool branch_taken_0x1ed6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed6e8) {
            ctx->pc = 0x1ED6D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed6d4;
        }
    }
    ctx->pc = 0x1ED6F0u;
label_1ed6f0:
    // 0x1ed6f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ed6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ed6f4:
    // 0x1ed6f4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1ed6f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1ed6f8:
    // 0x1ed6f8: 0x320f809  jalr        $t9
label_1ed6fc:
    if (ctx->pc == 0x1ED6FCu) {
        ctx->pc = 0x1ED6FCu;
            // 0x1ed6fc: 0x26283044  addiu       $t0, $s1, 0x3044 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 12356));
        ctx->pc = 0x1ED700u;
        goto label_1ed700;
    }
    ctx->pc = 0x1ED6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1ED700u);
        ctx->pc = 0x1ED6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED6F8u;
            // 0x1ed6fc: 0x26283044  addiu       $t0, $s1, 0x3044 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 12356));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ED700u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ED700u; }
            if (ctx->pc != 0x1ED700u) { return; }
        }
        }
    }
    ctx->pc = 0x1ED700u;
label_1ed700:
    // 0x1ed700: 0xc7a011a0  lwc1        $f0, 0x11A0($sp)
    ctx->pc = 0x1ed700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed704:
    // 0x1ed704: 0x27a611c8  addiu       $a2, $sp, 0x11C8
    ctx->pc = 0x1ed704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4552));
label_1ed708:
    // 0x1ed708: 0xc7a211a4  lwc1        $f2, 0x11A4($sp)
    ctx->pc = 0x1ed708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ed70c:
    // 0x1ed70c: 0x26253038  addiu       $a1, $s1, 0x3038
    ctx->pc = 0x1ed70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12344));
label_1ed710:
    // 0x1ed710: 0xc7a111a8  lwc1        $f1, 0x11A8($sp)
    ctx->pc = 0x1ed710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed714:
    // 0x1ed714: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ed714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ed718:
    // 0x1ed718: 0xe6203010  swc1        $f0, 0x3010($s1)
    ctx->pc = 0x1ed718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12304), bits); }
label_1ed71c:
    // 0x1ed71c: 0xc7a011ac  lwc1        $f0, 0x11AC($sp)
    ctx->pc = 0x1ed71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed720:
    // 0x1ed720: 0xe6223014  swc1        $f2, 0x3014($s1)
    ctx->pc = 0x1ed720u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12308), bits); }
label_1ed724:
    // 0x1ed724: 0xe6213018  swc1        $f1, 0x3018($s1)
    ctx->pc = 0x1ed724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12312), bits); }
label_1ed728:
    // 0x1ed728: 0xe620301c  swc1        $f0, 0x301C($s1)
    ctx->pc = 0x1ed728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12316), bits); }
label_1ed72c:
    // 0x1ed72c: 0xc7a211b0  lwc1        $f2, 0x11B0($sp)
    ctx->pc = 0x1ed72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ed730:
    // 0x1ed730: 0xc7a111b4  lwc1        $f1, 0x11B4($sp)
    ctx->pc = 0x1ed730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed734:
    // 0x1ed734: 0xc7a011b8  lwc1        $f0, 0x11B8($sp)
    ctx->pc = 0x1ed734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed738:
    // 0x1ed738: 0xe6223020  swc1        $f2, 0x3020($s1)
    ctx->pc = 0x1ed738u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12320), bits); }
label_1ed73c:
    // 0x1ed73c: 0xe6213024  swc1        $f1, 0x3024($s1)
    ctx->pc = 0x1ed73cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12324), bits); }
label_1ed740:
    // 0x1ed740: 0xe6203028  swc1        $f0, 0x3028($s1)
    ctx->pc = 0x1ed740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12328), bits); }
label_1ed744:
    // 0x1ed744: 0xc7a211bc  lwc1        $f2, 0x11BC($sp)
    ctx->pc = 0x1ed744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ed748:
    // 0x1ed748: 0xc7a111c0  lwc1        $f1, 0x11C0($sp)
    ctx->pc = 0x1ed748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed74c:
    // 0x1ed74c: 0xc7a011c4  lwc1        $f0, 0x11C4($sp)
    ctx->pc = 0x1ed74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed750:
    // 0x1ed750: 0xe622302c  swc1        $f2, 0x302C($s1)
    ctx->pc = 0x1ed750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12332), bits); }
label_1ed754:
    // 0x1ed754: 0xe6213030  swc1        $f1, 0x3030($s1)
    ctx->pc = 0x1ed754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12336), bits); }
label_1ed758:
    // 0x1ed758: 0xe6203034  swc1        $f0, 0x3034($s1)
    ctx->pc = 0x1ed758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12340), bits); }
label_1ed75c:
    // 0x1ed75c: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x1ed75cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_1ed760:
    // 0x1ed760: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ed760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1ed764:
    // 0x1ed764: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x1ed764u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_1ed768:
    // 0x1ed768: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1ed768u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1ed76c:
    // 0x1ed76c: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x1ed76cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_1ed770:
    // 0x1ed770: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1ed770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1ed774:
    // 0x1ed774: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_1ed778:
    if (ctx->pc == 0x1ED778u) {
        ctx->pc = 0x1ED778u;
            // 0x1ed778: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x1ED77Cu;
        goto label_1ed77c;
    }
    ctx->pc = 0x1ED774u;
    {
        const bool branch_taken_0x1ed774 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1ED778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED774u;
            // 0x1ed778: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed774) {
            ctx->pc = 0x1ED75Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed75c;
        }
    }
    ctx->pc = 0x1ED77Cu;
label_1ed77c:
    // 0x1ed77c: 0xc7a111d4  lwc1        $f1, 0x11D4($sp)
    ctx->pc = 0x1ed77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed780:
    // 0x1ed780: 0xc7a011d8  lwc1        $f0, 0x11D8($sp)
    ctx->pc = 0x1ed780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed784:
    // 0x1ed784: 0xe6213044  swc1        $f1, 0x3044($s1)
    ctx->pc = 0x1ed784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12356), bits); }
label_1ed788:
    // 0x1ed788: 0xe6203048  swc1        $f0, 0x3048($s1)
    ctx->pc = 0x1ed788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12360), bits); }
label_1ed78c:
    // 0x1ed78c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1ed78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_1ed790:
    // 0x1ed790: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ed790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ed794:
    // 0x1ed794: 0x8e273050  lw          $a3, 0x3050($s1)
    ctx->pc = 0x1ed794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12368)));
label_1ed798:
    // 0x1ed798: 0x50e0001c  beql        $a3, $zero, . + 4 + (0x1C << 2)
label_1ed79c:
    if (ctx->pc == 0x1ED79Cu) {
        ctx->pc = 0x1ED79Cu;
            // 0x1ed79c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1ED7A0u;
        goto label_1ed7a0;
    }
    ctx->pc = 0x1ED798u;
    {
        const bool branch_taken_0x1ed798 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed798) {
            ctx->pc = 0x1ED79Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED798u;
            // 0x1ed79c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ED80Cu;
            goto label_1ed80c;
        }
    }
    ctx->pc = 0x1ED7A0u;
label_1ed7a0:
    // 0x1ed7a0: 0x8fa30194  lw          $v1, 0x194($sp)
    ctx->pc = 0x1ed7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_1ed7a4:
    // 0x1ed7a4: 0x27a6019c  addiu       $a2, $sp, 0x19C
    ctx->pc = 0x1ed7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_1ed7a8:
    // 0x1ed7a8: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1ed7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1ed7ac:
    // 0x1ed7ac: 0x24e50008  addiu       $a1, $a3, 0x8
    ctx->pc = 0x1ed7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1ed7b0:
    // 0x1ed7b0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1ed7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ed7b4:
    // 0x1ed7b4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1ed7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_1ed7b8:
    // 0x1ed7b8: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1ed7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_1ed7bc:
    // 0x1ed7bc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1ed7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ed7c0:
    // 0x1ed7c0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ed7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1ed7c4:
    // 0x1ed7c4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1ed7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1ed7c8:
    // 0x1ed7c8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1ed7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1ed7cc:
    // 0x1ed7cc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1ed7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1ed7d0:
    // 0x1ed7d0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1ed7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1ed7d4:
    // 0x1ed7d4: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_1ed7d8:
    if (ctx->pc == 0x1ED7D8u) {
        ctx->pc = 0x1ED7D8u;
            // 0x1ed7d8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x1ED7DCu;
        goto label_1ed7dc;
    }
    ctx->pc = 0x1ED7D4u;
    {
        const bool branch_taken_0x1ed7d4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1ED7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED7D4u;
            // 0x1ed7d8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed7d4) {
            ctx->pc = 0x1ED7BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed7bc;
        }
    }
    ctx->pc = 0x1ED7DCu;
label_1ed7dc:
    // 0x1ed7dc: 0x24e50408  addiu       $a1, $a3, 0x408
    ctx->pc = 0x1ed7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1032));
label_1ed7e0:
    // 0x1ed7e0: 0x27a6059c  addiu       $a2, $sp, 0x59C
    ctx->pc = 0x1ed7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1436));
label_1ed7e4:
    // 0x1ed7e4: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x1ed7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1ed7e8:
    // 0x1ed7e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1ed7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ed7ec:
    // 0x1ed7ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ed7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1ed7f0:
    // 0x1ed7f0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1ed7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1ed7f4:
    // 0x1ed7f4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1ed7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1ed7f8:
    // 0x1ed7f8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1ed7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1ed7fc:
    // 0x1ed7fc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1ed7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1ed800:
    // 0x1ed800: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_1ed804:
    if (ctx->pc == 0x1ED804u) {
        ctx->pc = 0x1ED804u;
            // 0x1ed804: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x1ED808u;
        goto label_1ed808;
    }
    ctx->pc = 0x1ED800u;
    {
        const bool branch_taken_0x1ed800 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1ED804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED800u;
            // 0x1ed804: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed800) {
            ctx->pc = 0x1ED7E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed7e8;
        }
    }
    ctx->pc = 0x1ED808u;
label_1ed808:
    // 0x1ed808: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1ed808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ed80c:
    // 0x1ed80c: 0xc07b480  jal         func_1ED200
label_1ed810:
    if (ctx->pc == 0x1ED810u) {
        ctx->pc = 0x1ED810u;
            // 0x1ed810: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ED814u;
        goto label_1ed814;
    }
    ctx->pc = 0x1ED80Cu;
    SET_GPR_U32(ctx, 31, 0x1ED814u);
    ctx->pc = 0x1ED810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED80Cu;
            // 0x1ed810: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED200u;
    if (runtime->hasFunction(0x1ED200u)) {
        auto targetFn = runtime->lookupFunction(0x1ED200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED814u; }
        if (ctx->pc != 0x1ED814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED200_0x1ed200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED814u; }
        if (ctx->pc != 0x1ED814u) { return; }
    }
    ctx->pc = 0x1ED814u;
label_1ed814:
    // 0x1ed814: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ed814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ed818:
    // 0x1ed818: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1ed818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1ed81c:
    // 0x1ed81c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1ed820:
    if (ctx->pc == 0x1ED820u) {
        ctx->pc = 0x1ED820u;
            // 0x1ed820: 0xafa20170  sw          $v0, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
        ctx->pc = 0x1ED824u;
        goto label_1ed824;
    }
    ctx->pc = 0x1ED81Cu;
    {
        const bool branch_taken_0x1ed81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED81Cu;
            // 0x1ed820: 0xafa20170  sw          $v0, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed81c) {
            ctx->pc = 0x1ED8D4u;
            goto label_1ed8d4;
        }
    }
    ctx->pc = 0x1ED824u;
label_1ed824:
    // 0x1ed824: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_1ed828:
    if (ctx->pc == 0x1ED828u) {
        ctx->pc = 0x1ED82Cu;
        goto label_1ed82c;
    }
    ctx->pc = 0x1ED824u;
    {
        const bool branch_taken_0x1ed824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed824) {
            ctx->pc = 0x1ED8C4u;
            goto label_1ed8c4;
        }
    }
    ctx->pc = 0x1ED82Cu;
label_1ed82c:
    // 0x1ed82c: 0x82830085  lb          $v1, 0x85($s4)
    ctx->pc = 0x1ed82cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 133)));
label_1ed830:
    // 0x1ed830: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_1ed834:
    if (ctx->pc == 0x1ED834u) {
        ctx->pc = 0x1ED838u;
        goto label_1ed838;
    }
    ctx->pc = 0x1ED830u;
    {
        const bool branch_taken_0x1ed830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed830) {
            ctx->pc = 0x1ED8C4u;
            goto label_1ed8c4;
        }
    }
    ctx->pc = 0x1ED838u;
label_1ed838:
    // 0x1ed838: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1ed838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1ed83c:
    // 0x1ed83c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1ed840:
    if (ctx->pc == 0x1ED840u) {
        ctx->pc = 0x1ED840u;
            // 0x1ed840: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ED844u;
        goto label_1ed844;
    }
    ctx->pc = 0x1ED83Cu;
    {
        const bool branch_taken_0x1ed83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED83Cu;
            // 0x1ed840: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed83c) {
            ctx->pc = 0x1ED860u;
            goto label_1ed860;
        }
    }
    ctx->pc = 0x1ED844u;
label_1ed844:
    // 0x1ed844: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x1ed844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1ed848:
    // 0x1ed848: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1ed848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1ed84c:
    // 0x1ed84c: 0x0  nop
    ctx->pc = 0x1ed84cu;
    // NOP
label_1ed850:
    // 0x1ed850: 0x0  nop
    ctx->pc = 0x1ed850u;
    // NOP
label_1ed854:
    // 0x1ed854: 0x0  nop
    ctx->pc = 0x1ed854u;
    // NOP
label_1ed858:
    // 0x1ed858: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1ed85c:
    if (ctx->pc == 0x1ED85Cu) {
        ctx->pc = 0x1ED860u;
        goto label_1ed860;
    }
    ctx->pc = 0x1ED858u;
    {
        const bool branch_taken_0x1ed858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed858) {
            ctx->pc = 0x1ED844u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed844;
        }
    }
    ctx->pc = 0x1ED860u;
label_1ed860:
    // 0x1ed860: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x1ed860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1ed864:
    // 0x1ed864: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1ed864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed868:
    // 0x1ed868: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1ed86c:
    if (ctx->pc == 0x1ED86Cu) {
        ctx->pc = 0x1ED86Cu;
            // 0x1ed86c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ED870u;
        goto label_1ed870;
    }
    ctx->pc = 0x1ED868u;
    {
        const bool branch_taken_0x1ed868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED868u;
            // 0x1ed86c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed868) {
            ctx->pc = 0x1ED890u;
            goto label_1ed890;
        }
    }
    ctx->pc = 0x1ED870u;
label_1ed870:
    // 0x1ed870: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1ed870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1ed874:
    // 0x1ed874: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1ed874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1ed878:
    // 0x1ed878: 0x0  nop
    ctx->pc = 0x1ed878u;
    // NOP
label_1ed87c:
    // 0x1ed87c: 0x0  nop
    ctx->pc = 0x1ed87cu;
    // NOP
label_1ed880:
    // 0x1ed880: 0x0  nop
    ctx->pc = 0x1ed880u;
    // NOP
label_1ed884:
    // 0x1ed884: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1ed888:
    if (ctx->pc == 0x1ED888u) {
        ctx->pc = 0x1ED88Cu;
        goto label_1ed88c;
    }
    ctx->pc = 0x1ED884u;
    {
        const bool branch_taken_0x1ed884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed884) {
            ctx->pc = 0x1ED870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed870;
        }
    }
    ctx->pc = 0x1ED88Cu;
label_1ed88c:
    // 0x1ed88c: 0x0  nop
    ctx->pc = 0x1ed88cu;
    // NOP
label_1ed890:
    // 0x1ed890: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x1ed890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ed894:
    // 0x1ed894: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1ed894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ed898:
    // 0x1ed898: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1ed89c:
    if (ctx->pc == 0x1ED89Cu) {
        ctx->pc = 0x1ED89Cu;
            // 0x1ed89c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1ED8A0u;
        goto label_1ed8a0;
    }
    ctx->pc = 0x1ED898u;
    {
        const bool branch_taken_0x1ed898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed898) {
            ctx->pc = 0x1ED89Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED898u;
            // 0x1ed89c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ED8A0u;
            goto label_1ed8a0;
        }
    }
    ctx->pc = 0x1ED8A0u;
label_1ed8a0:
    // 0x1ed8a0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1ed8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1ed8a4:
    // 0x1ed8a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ed8a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ed8a8:
    // 0x1ed8a8: 0x0  nop
    ctx->pc = 0x1ed8a8u;
    // NOP
label_1ed8ac:
    // 0x1ed8ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ed8acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1ed8b0:
    // 0x1ed8b0: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1ed8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed8b4:
    // 0x1ed8b4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1ed8b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1ed8b8:
    // 0x1ed8b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ed8b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ed8bc:
    // 0x1ed8bc: 0x4503ff73  bc1tl       . + 4 + (-0x8D << 2)
label_1ed8c0:
    if (ctx->pc == 0x1ED8C0u) {
        ctx->pc = 0x1ED8C0u;
            // 0x1ed8c0: 0xc6213030  lwc1        $f1, 0x3030($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x1ED8C4u;
        goto label_1ed8c4;
    }
    ctx->pc = 0x1ED8BCu;
    {
        const bool branch_taken_0x1ed8bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ed8bc) {
            ctx->pc = 0x1ED8C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED8BCu;
            // 0x1ed8c0: 0xc6213030  lwc1        $f1, 0x3030($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ED68Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed68c;
        }
    }
    ctx->pc = 0x1ED8C4u;
label_1ed8c4:
    // 0x1ed8c4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ed8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ed8c8:
    // 0x1ed8c8: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1ed8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_1ed8cc:
    // 0x1ed8cc: 0x10000109  b           . + 4 + (0x109 << 2)
label_1ed8d0:
    if (ctx->pc == 0x1ED8D0u) {
        ctx->pc = 0x1ED8D0u;
            // 0x1ed8d0: 0xafa30170  sw          $v1, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
        ctx->pc = 0x1ED8D4u;
        goto label_1ed8d4;
    }
    ctx->pc = 0x1ED8CCu;
    {
        const bool branch_taken_0x1ed8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED8CCu;
            // 0x1ed8d0: 0xafa30170  sw          $v1, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8cc) {
            ctx->pc = 0x1EDCF4u;
            goto label_1edcf4;
        }
    }
    ctx->pc = 0x1ED8D4u;
label_1ed8d4:
    // 0x1ed8d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ed8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ed8d8:
    // 0x1ed8d8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1ed8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1ed8dc:
    // 0x1ed8dc: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1ed8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1ed8e0:
    // 0x1ed8e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ed8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ed8e4:
    // 0x1ed8e4: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1ed8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1ed8e8:
    // 0x1ed8e8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1ed8e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ed8ec:
    // 0x1ed8ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1ed8f0:
    if (ctx->pc == 0x1ED8F0u) {
        ctx->pc = 0x1ED8F0u;
            // 0x1ed8f0: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1ED8F4u;
        goto label_1ed8f4;
    }
    ctx->pc = 0x1ED8ECu;
    {
        const bool branch_taken_0x1ed8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED8ECu;
            // 0x1ed8f0: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed8ec) {
            ctx->pc = 0x1ED91Cu;
            goto label_1ed91c;
        }
    }
    ctx->pc = 0x1ED8F4u;
label_1ed8f4:
    // 0x1ed8f4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ed8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ed8f8:
    // 0x1ed8f8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ed8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1ed8fc:
    // 0x1ed8fc: 0x2442acf0  addiu       $v0, $v0, -0x5310
    ctx->pc = 0x1ed8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946032));
label_1ed900:
    // 0x1ed900: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ed900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ed904:
    // 0x1ed904: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ed904u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1ed908:
    // 0x1ed908: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ed908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1ed90c:
    // 0x1ed90c: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ed90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1ed910:
    // 0x1ed910: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1ed910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1ed914:
    // 0x1ed914: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1ed914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1ed918:
    // 0x1ed918: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ed918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ed91c:
    // 0x1ed91c: 0x86830086  lh          $v1, 0x86($s4)
    ctx->pc = 0x1ed91cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 134)));
label_1ed920:
    // 0x1ed920: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1ed920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ed924:
    // 0x1ed924: 0x4610080  bgez        $v1, . + 4 + (0x80 << 2)
label_1ed928:
    if (ctx->pc == 0x1ED928u) {
        ctx->pc = 0x1ED928u;
            // 0x1ed928: 0xa6820086  sh          $v0, 0x86($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 134), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1ED92Cu;
        goto label_1ed92c;
    }
    ctx->pc = 0x1ED924u;
    {
        const bool branch_taken_0x1ed924 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1ED928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED924u;
            // 0x1ed928: 0xa6820086  sh          $v0, 0x86($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 134), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed924) {
            ctx->pc = 0x1EDB28u;
            goto label_1edb28;
        }
    }
    ctx->pc = 0x1ED92Cu;
label_1ed92c:
    // 0x1ed92c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1ed92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1ed930:
    // 0x1ed930: 0xa6820086  sh          $v0, 0x86($s4)
    ctx->pc = 0x1ed930u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 134), (uint16_t)GPR_U32(ctx, 2));
label_1ed934:
    // 0x1ed934: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1ed934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ed938:
    // 0x1ed938: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1ed938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ed93c:
    // 0x1ed93c: 0xc0a45a0  jal         func_291680
label_1ed940:
    if (ctx->pc == 0x1ED940u) {
        ctx->pc = 0x1ED940u;
            // 0x1ed940: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1ED944u;
        goto label_1ed944;
    }
    ctx->pc = 0x1ED93Cu;
    SET_GPR_U32(ctx, 31, 0x1ED944u);
    ctx->pc = 0x1ED940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED93Cu;
            // 0x1ed940: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED944u; }
        if (ctx->pc != 0x1ED944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED944u; }
        if (ctx->pc != 0x1ED944u) { return; }
    }
    ctx->pc = 0x1ED944u;
label_1ed944:
    // 0x1ed944: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ed944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ed948:
    // 0x1ed948: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1ed948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1ed94c:
    // 0x1ed94c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1ed94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1ed950:
    // 0x1ed950: 0x2685000c  addiu       $a1, $s4, 0xC
    ctx->pc = 0x1ed950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1ed954:
    // 0x1ed954: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x1ed954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_1ed958:
    // 0x1ed958: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x1ed958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1ed95c:
    // 0x1ed95c: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x1ed95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
label_1ed960:
    // 0x1ed960: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ed960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ed964:
    // 0x1ed964: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x1ed964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
label_1ed968:
    // 0x1ed968: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1ed968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_1ed96c:
    // 0x1ed96c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1ed96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ed970:
    // 0x1ed970: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1ed970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_1ed974:
    // 0x1ed974: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x1ed974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed978:
    // 0x1ed978: 0xc0991e4  jal         func_264790
label_1ed97c:
    if (ctx->pc == 0x1ED97Cu) {
        ctx->pc = 0x1ED97Cu;
            // 0x1ed97c: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->pc = 0x1ED980u;
        goto label_1ed980;
    }
    ctx->pc = 0x1ED978u;
    SET_GPR_U32(ctx, 31, 0x1ED980u);
    ctx->pc = 0x1ED97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED978u;
            // 0x1ed97c: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x264790u;
    if (runtime->hasFunction(0x264790u)) {
        auto targetFn = runtime->lookupFunction(0x264790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED980u; }
        if (ctx->pc != 0x1ED980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264790_0x264790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED980u; }
        if (ctx->pc != 0x1ED980u) { return; }
    }
    ctx->pc = 0x1ED980u;
label_1ed980:
    // 0x1ed980: 0x50400067  beql        $v0, $zero, . + 4 + (0x67 << 2)
label_1ed984:
    if (ctx->pc == 0x1ED984u) {
        ctx->pc = 0x1ED984u;
            // 0x1ed984: 0xc680002c  lwc1        $f0, 0x2C($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1ED988u;
        goto label_1ed988;
    }
    ctx->pc = 0x1ED980u;
    {
        const bool branch_taken_0x1ed980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed980) {
            ctx->pc = 0x1ED984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED980u;
            // 0x1ed984: 0xc680002c  lwc1        $f0, 0x2C($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EDB20u;
            goto label_1edb20;
        }
    }
    ctx->pc = 0x1ED988u;
label_1ed988:
    // 0x1ed988: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1ed988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ed98c:
    // 0x1ed98c: 0xc07b498  jal         func_1ED260
label_1ed990:
    if (ctx->pc == 0x1ED990u) {
        ctx->pc = 0x1ED990u;
            // 0x1ed990: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ED994u;
        goto label_1ed994;
    }
    ctx->pc = 0x1ED98Cu;
    SET_GPR_U32(ctx, 31, 0x1ED994u);
    ctx->pc = 0x1ED990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED98Cu;
            // 0x1ed990: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED260u;
    if (runtime->hasFunction(0x1ED260u)) {
        auto targetFn = runtime->lookupFunction(0x1ED260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED994u; }
        if (ctx->pc != 0x1ED994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED260_0x1ed260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED994u; }
        if (ctx->pc != 0x1ED994u) { return; }
    }
    ctx->pc = 0x1ED994u;
label_1ed994:
    // 0x1ed994: 0xc6213030  lwc1        $f1, 0x3030($s1)
    ctx->pc = 0x1ed994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ed998:
    // 0x1ed998: 0xc7a011c0  lwc1        $f0, 0x11C0($sp)
    ctx->pc = 0x1ed998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ed99c:
    // 0x1ed99c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1ed99cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ed9a0:
    // 0x1ed9a0: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
label_1ed9a4:
    if (ctx->pc == 0x1ED9A4u) {
        ctx->pc = 0x1ED9A4u;
            // 0x1ed9a4: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x1ED9A8u;
        goto label_1ed9a8;
    }
    ctx->pc = 0x1ED9A0u;
    {
        const bool branch_taken_0x1ed9a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ED9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED9A0u;
            // 0x1ed9a4: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed9a0) {
            ctx->pc = 0x1EDA9Cu;
            goto label_1eda9c;
        }
    }
    ctx->pc = 0x1ED9A8u;
label_1ed9a8:
    // 0x1ed9a8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1ed9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1ed9ac:
    // 0x1ed9ac: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x1ed9acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ed9b0:
    // 0x1ed9b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ed9b4:
    if (ctx->pc == 0x1ED9B4u) {
        ctx->pc = 0x1ED9B4u;
            // 0x1ed9b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ED9B8u;
        goto label_1ed9b8;
    }
    ctx->pc = 0x1ED9B0u;
    {
        const bool branch_taken_0x1ed9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED9B0u;
            // 0x1ed9b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed9b0) {
            ctx->pc = 0x1ED9D8u;
            goto label_1ed9d8;
        }
    }
    ctx->pc = 0x1ED9B8u;
label_1ed9b8:
    // 0x1ed9b8: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x1ed9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1ed9bc:
    // 0x1ed9bc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1ed9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1ed9c0:
    // 0x1ed9c0: 0x0  nop
    ctx->pc = 0x1ed9c0u;
    // NOP
label_1ed9c4:
    // 0x1ed9c4: 0x0  nop
    ctx->pc = 0x1ed9c4u;
    // NOP
label_1ed9c8:
    // 0x1ed9c8: 0x0  nop
    ctx->pc = 0x1ed9c8u;
    // NOP
label_1ed9cc:
    // 0x1ed9cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1ed9d0:
    if (ctx->pc == 0x1ED9D0u) {
        ctx->pc = 0x1ED9D4u;
        goto label_1ed9d4;
    }
    ctx->pc = 0x1ED9CCu;
    {
        const bool branch_taken_0x1ed9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed9cc) {
            ctx->pc = 0x1ED9B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed9b8;
        }
    }
    ctx->pc = 0x1ED9D4u;
label_1ed9d4:
    // 0x1ed9d4: 0x0  nop
    ctx->pc = 0x1ed9d4u;
    // NOP
label_1ed9d8:
    // 0x1ed9d8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1ed9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1ed9dc:
    // 0x1ed9dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ed9e0:
    if (ctx->pc == 0x1ED9E0u) {
        ctx->pc = 0x1ED9E0u;
            // 0x1ed9e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ED9E4u;
        goto label_1ed9e4;
    }
    ctx->pc = 0x1ED9DCu;
    {
        const bool branch_taken_0x1ed9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED9DCu;
            // 0x1ed9e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed9dc) {
            ctx->pc = 0x1EDA00u;
            goto label_1eda00;
        }
    }
    ctx->pc = 0x1ED9E4u;
label_1ed9e4:
    // 0x1ed9e4: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x1ed9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1ed9e8:
    // 0x1ed9e8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1ed9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1ed9ec:
    // 0x1ed9ec: 0x0  nop
    ctx->pc = 0x1ed9ecu;
    // NOP
label_1ed9f0:
    // 0x1ed9f0: 0x0  nop
    ctx->pc = 0x1ed9f0u;
    // NOP
label_1ed9f4:
    // 0x1ed9f4: 0x0  nop
    ctx->pc = 0x1ed9f4u;
    // NOP
label_1ed9f8:
    // 0x1ed9f8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1ed9fc:
    if (ctx->pc == 0x1ED9FCu) {
        ctx->pc = 0x1EDA00u;
        goto label_1eda00;
    }
    ctx->pc = 0x1ED9F8u;
    {
        const bool branch_taken_0x1ed9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed9f8) {
            ctx->pc = 0x1ED9E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed9e4;
        }
    }
    ctx->pc = 0x1EDA00u;
label_1eda00:
    // 0x1eda00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1eda00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1eda04:
    // 0x1eda04: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1eda04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1eda08:
    // 0x1eda08: 0x320f809  jalr        $t9
label_1eda0c:
    if (ctx->pc == 0x1EDA0Cu) {
        ctx->pc = 0x1EDA0Cu;
            // 0x1eda0c: 0x26283044  addiu       $t0, $s1, 0x3044 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 12356));
        ctx->pc = 0x1EDA10u;
        goto label_1eda10;
    }
    ctx->pc = 0x1EDA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EDA10u);
        ctx->pc = 0x1EDA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDA08u;
            // 0x1eda0c: 0x26283044  addiu       $t0, $s1, 0x3044 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 12356));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EDA10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA10u; }
            if (ctx->pc != 0x1EDA10u) { return; }
        }
        }
    }
    ctx->pc = 0x1EDA10u;
label_1eda10:
    // 0x1eda10: 0xc7a011a0  lwc1        $f0, 0x11A0($sp)
    ctx->pc = 0x1eda10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eda14:
    // 0x1eda14: 0x27a711c8  addiu       $a3, $sp, 0x11C8
    ctx->pc = 0x1eda14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4552));
label_1eda18:
    // 0x1eda18: 0xc7a211a4  lwc1        $f2, 0x11A4($sp)
    ctx->pc = 0x1eda18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1eda1c:
    // 0x1eda1c: 0x26263038  addiu       $a2, $s1, 0x3038
    ctx->pc = 0x1eda1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12344));
label_1eda20:
    // 0x1eda20: 0xc7a111a8  lwc1        $f1, 0x11A8($sp)
    ctx->pc = 0x1eda20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eda24:
    // 0x1eda24: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1eda24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1eda28:
    // 0x1eda28: 0xe6203010  swc1        $f0, 0x3010($s1)
    ctx->pc = 0x1eda28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12304), bits); }
label_1eda2c:
    // 0x1eda2c: 0xc7a011ac  lwc1        $f0, 0x11AC($sp)
    ctx->pc = 0x1eda2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eda30:
    // 0x1eda30: 0xe6223014  swc1        $f2, 0x3014($s1)
    ctx->pc = 0x1eda30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12308), bits); }
label_1eda34:
    // 0x1eda34: 0xe6213018  swc1        $f1, 0x3018($s1)
    ctx->pc = 0x1eda34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12312), bits); }
label_1eda38:
    // 0x1eda38: 0xe620301c  swc1        $f0, 0x301C($s1)
    ctx->pc = 0x1eda38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12316), bits); }
label_1eda3c:
    // 0x1eda3c: 0xc7a211b0  lwc1        $f2, 0x11B0($sp)
    ctx->pc = 0x1eda3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1eda40:
    // 0x1eda40: 0xc7a111b4  lwc1        $f1, 0x11B4($sp)
    ctx->pc = 0x1eda40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eda44:
    // 0x1eda44: 0xc7a011b8  lwc1        $f0, 0x11B8($sp)
    ctx->pc = 0x1eda44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eda48:
    // 0x1eda48: 0xe6223020  swc1        $f2, 0x3020($s1)
    ctx->pc = 0x1eda48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12320), bits); }
label_1eda4c:
    // 0x1eda4c: 0xe6213024  swc1        $f1, 0x3024($s1)
    ctx->pc = 0x1eda4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12324), bits); }
label_1eda50:
    // 0x1eda50: 0xe6203028  swc1        $f0, 0x3028($s1)
    ctx->pc = 0x1eda50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12328), bits); }
label_1eda54:
    // 0x1eda54: 0xc7a211bc  lwc1        $f2, 0x11BC($sp)
    ctx->pc = 0x1eda54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1eda58:
    // 0x1eda58: 0xc7a111c0  lwc1        $f1, 0x11C0($sp)
    ctx->pc = 0x1eda58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eda5c:
    // 0x1eda5c: 0xc7a011c4  lwc1        $f0, 0x11C4($sp)
    ctx->pc = 0x1eda5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eda60:
    // 0x1eda60: 0xe622302c  swc1        $f2, 0x302C($s1)
    ctx->pc = 0x1eda60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12332), bits); }
label_1eda64:
    // 0x1eda64: 0xe6213030  swc1        $f1, 0x3030($s1)
    ctx->pc = 0x1eda64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12336), bits); }
label_1eda68:
    // 0x1eda68: 0xe6203034  swc1        $f0, 0x3034($s1)
    ctx->pc = 0x1eda68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12340), bits); }
label_1eda6c:
    // 0x1eda6c: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x1eda6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1eda70:
    // 0x1eda70: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1eda70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1eda74:
    // 0x1eda74: 0x84e30002  lh          $v1, 0x2($a3)
    ctx->pc = 0x1eda74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_1eda78:
    // 0x1eda78: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x1eda78u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_1eda7c:
    // 0x1eda7c: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x1eda7cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
label_1eda80:
    // 0x1eda80: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1eda80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_1eda84:
    // 0x1eda84: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_1eda88:
    if (ctx->pc == 0x1EDA88u) {
        ctx->pc = 0x1EDA88u;
            // 0x1eda88: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x1EDA8Cu;
        goto label_1eda8c;
    }
    ctx->pc = 0x1EDA84u;
    {
        const bool branch_taken_0x1eda84 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1EDA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDA84u;
            // 0x1eda88: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda84) {
            ctx->pc = 0x1EDA6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eda6c;
        }
    }
    ctx->pc = 0x1EDA8Cu;
label_1eda8c:
    // 0x1eda8c: 0xc7a111d4  lwc1        $f1, 0x11D4($sp)
    ctx->pc = 0x1eda8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eda90:
    // 0x1eda90: 0xc7a011d8  lwc1        $f0, 0x11D8($sp)
    ctx->pc = 0x1eda90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eda94:
    // 0x1eda94: 0xe6213044  swc1        $f1, 0x3044($s1)
    ctx->pc = 0x1eda94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12356), bits); }
label_1eda98:
    // 0x1eda98: 0xe6203048  swc1        $f0, 0x3048($s1)
    ctx->pc = 0x1eda98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12360), bits); }
label_1eda9c:
    // 0x1eda9c: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1eda9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_1edaa0:
    // 0x1edaa0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1edaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1edaa4:
    // 0x1edaa4: 0x8e283050  lw          $t0, 0x3050($s1)
    ctx->pc = 0x1edaa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12368)));
label_1edaa8:
    // 0x1edaa8: 0x5100feb3  beql        $t0, $zero, . + 4 + (-0x14D << 2)
label_1edaac:
    if (ctx->pc == 0x1EDAACu) {
        ctx->pc = 0x1EDAACu;
            // 0x1edaac: 0xc6a00004  lwc1        $f0, 0x4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1EDAB0u;
        goto label_1edab0;
    }
    ctx->pc = 0x1EDAA8u;
    {
        const bool branch_taken_0x1edaa8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edaa8) {
            ctx->pc = 0x1EDAACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDAA8u;
            // 0x1edaac: 0xc6a00004  lwc1        $f0, 0x4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ED578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed578;
        }
    }
    ctx->pc = 0x1EDAB0u;
label_1edab0:
    // 0x1edab0: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x1edab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_1edab4:
    // 0x1edab4: 0x27a7019c  addiu       $a3, $sp, 0x19C
    ctx->pc = 0x1edab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_1edab8:
    // 0x1edab8: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1edab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_1edabc:
    // 0x1edabc: 0x25060008  addiu       $a2, $t0, 0x8
    ctx->pc = 0x1edabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_1edac0:
    // 0x1edac0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1edac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1edac4:
    // 0x1edac4: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x1edac4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
label_1edac8:
    // 0x1edac8: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x1edac8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_1edacc:
    // 0x1edacc: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1edaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1edad0:
    // 0x1edad0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1edad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1edad4:
    // 0x1edad4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1edad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1edad8:
    // 0x1edad8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1edad8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_1edadc:
    // 0x1edadc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1edadcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_1edae0:
    // 0x1edae0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1edae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1edae4:
    // 0x1edae4: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_1edae8:
    if (ctx->pc == 0x1EDAE8u) {
        ctx->pc = 0x1EDAE8u;
            // 0x1edae8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x1EDAECu;
        goto label_1edaec;
    }
    ctx->pc = 0x1EDAE4u;
    {
        const bool branch_taken_0x1edae4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1EDAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDAE4u;
            // 0x1edae8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edae4) {
            ctx->pc = 0x1EDACCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1edacc;
        }
    }
    ctx->pc = 0x1EDAECu;
label_1edaec:
    // 0x1edaec: 0x25060408  addiu       $a2, $t0, 0x408
    ctx->pc = 0x1edaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1032));
label_1edaf0:
    // 0x1edaf0: 0x27a7059c  addiu       $a3, $sp, 0x59C
    ctx->pc = 0x1edaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1436));
label_1edaf4:
    // 0x1edaf4: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x1edaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1edaf8:
    // 0x1edaf8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1edaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1edafc:
    // 0x1edafc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1edafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1edb00:
    // 0x1edb00: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1edb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1edb04:
    // 0x1edb04: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1edb04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_1edb08:
    // 0x1edb08: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1edb08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_1edb0c:
    // 0x1edb0c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1edb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1edb10:
    // 0x1edb10: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_1edb14:
    if (ctx->pc == 0x1EDB14u) {
        ctx->pc = 0x1EDB14u;
            // 0x1edb14: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x1EDB18u;
        goto label_1edb18;
    }
    ctx->pc = 0x1EDB10u;
    {
        const bool branch_taken_0x1edb10 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1EDB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDB10u;
            // 0x1edb14: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edb10) {
            ctx->pc = 0x1EDAF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1edaf8;
        }
    }
    ctx->pc = 0x1EDB18u;
label_1edb18:
    // 0x1edb18: 0x1000fe96  b           . + 4 + (-0x16A << 2)
label_1edb1c:
    if (ctx->pc == 0x1EDB1Cu) {
        ctx->pc = 0x1EDB20u;
        goto label_1edb20;
    }
    ctx->pc = 0x1EDB18u;
    {
        const bool branch_taken_0x1edb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edb18) {
            ctx->pc = 0x1ED574u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed574;
        }
    }
    ctx->pc = 0x1EDB20u;
label_1edb20:
    // 0x1edb20: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1edb20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1edb24:
    // 0x1edb24: 0xe680003c  swc1        $f0, 0x3C($s4)
    ctx->pc = 0x1edb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_1edb28:
    // 0x1edb28: 0x4615a81a  mula.s      $f21, $f21
    ctx->pc = 0x1edb28u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_1edb2c:
    // 0x1edb2c: 0x4614a01e  madda.s     $f20, $f20
    ctx->pc = 0x1edb2cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[20]));
label_1edb30:
    // 0x1edb30: 0x4616b01c  madd.s      $f0, $f22, $f22
    ctx->pc = 0x1edb30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[22]));
label_1edb34:
    // 0x1edb34: 0x46000044  c1          0x44
    ctx->pc = 0x1edb34u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_1edb38:
    // 0x1edb38: 0xc680003c  lwc1        $f0, 0x3C($s4)
    ctx->pc = 0x1edb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1edb3c:
    // 0x1edb3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1edb3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1edb40:
    // 0x1edb40: 0xe680003c  swc1        $f0, 0x3C($s4)
    ctx->pc = 0x1edb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_1edb44:
    // 0x1edb44: 0xafb30090  sw          $s3, 0x90($sp)
    ctx->pc = 0x1edb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 19));
label_1edb48:
    // 0x1edb48: 0xafb20094  sw          $s2, 0x94($sp)
    ctx->pc = 0x1edb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 18));
label_1edb4c:
    // 0x1edb4c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1edb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1edb50:
    // 0x1edb50: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1edb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_1edb54:
    // 0x1edb54: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1edb54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1edb58:
    // 0x1edb58: 0xafb50098  sw          $s5, 0x98($sp)
    ctx->pc = 0x1edb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 21));
label_1edb5c:
    // 0x1edb5c: 0xe7b500f4  swc1        $f21, 0xF4($sp)
    ctx->pc = 0x1edb5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1edb60:
    // 0x1edb60: 0xe7b600f8  swc1        $f22, 0xF8($sp)
    ctx->pc = 0x1edb60u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1edb64:
    // 0x1edb64: 0xe7b700fc  swc1        $f23, 0xFC($sp)
    ctx->pc = 0x1edb64u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1edb68:
    // 0x1edb68: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1edb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1edb6c:
    // 0x1edb6c: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1edb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1edb70:
    // 0x1edb70: 0xc0a45a0  jal         func_291680
label_1edb74:
    if (ctx->pc == 0x1EDB74u) {
        ctx->pc = 0x1EDB74u;
            // 0x1edb74: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1EDB78u;
        goto label_1edb78;
    }
    ctx->pc = 0x1EDB70u;
    SET_GPR_U32(ctx, 31, 0x1EDB78u);
    ctx->pc = 0x1EDB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDB70u;
            // 0x1edb74: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB78u; }
        if (ctx->pc != 0x1EDB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDB78u; }
        if (ctx->pc != 0x1EDB78u) { return; }
    }
    ctx->pc = 0x1EDB78u;
label_1edb78:
    // 0x1edb78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1edb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1edb7c:
    // 0x1edb7c: 0x8e120048  lw          $s2, 0x48($s0)
    ctx->pc = 0x1edb7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1edb80:
    // 0x1edb80: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1edb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1edb84:
    // 0x1edb84: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x1edb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_1edb88:
    // 0x1edb88: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1edb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1edb8c:
    // 0x1edb8c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1edb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1edb90:
    // 0x1edb90: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x1edb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1edb94:
    // 0x1edb94: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1edb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1edb98:
    // 0x1edb98: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1edb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1edb9c:
    // 0x1edb9c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x1edb9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_1edba0:
    // 0x1edba0: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x1edba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1edba4:
    // 0x1edba4: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x1edba4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1edba8:
    // 0x1edba8: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_1edbac:
    if (ctx->pc == 0x1EDBACu) {
        ctx->pc = 0x1EDBACu;
            // 0x1edbac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x1EDBB0u;
        goto label_1edbb0;
    }
    ctx->pc = 0x1EDBA8u;
    {
        const bool branch_taken_0x1edba8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edba8) {
            ctx->pc = 0x1EDBACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDBA8u;
            // 0x1edbac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EDBB8u;
            goto label_1edbb8;
        }
    }
    ctx->pc = 0x1EDBB0u;
label_1edbb0:
    // 0x1edbb0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1edbb4:
    if (ctx->pc == 0x1EDBB4u) {
        ctx->pc = 0x1EDBB4u;
            // 0x1edbb4: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x1EDBB8u;
        goto label_1edbb8;
    }
    ctx->pc = 0x1EDBB0u;
    {
        const bool branch_taken_0x1edbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDBB0u;
            // 0x1edbb4: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbb0) {
            ctx->pc = 0x1EDBC4u;
            goto label_1edbc4;
        }
    }
    ctx->pc = 0x1EDBB8u;
label_1edbb8:
    // 0x1edbb8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1edbb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1edbbc:
    // 0x1edbbc: 0x320f809  jalr        $t9
label_1edbc0:
    if (ctx->pc == 0x1EDBC0u) {
        ctx->pc = 0x1EDBC4u;
        goto label_1edbc4;
    }
    ctx->pc = 0x1EDBBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EDBC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EDBC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EDBC4u; }
            if (ctx->pc != 0x1EDBC4u) { return; }
        }
        }
    }
    ctx->pc = 0x1EDBC4u;
label_1edbc4:
    // 0x1edbc4: 0xafa211e8  sw          $v0, 0x11E8($sp)
    ctx->pc = 0x1edbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4584), GPR_U32(ctx, 2));
label_1edbc8:
    // 0x1edbc8: 0x1a400031  blez        $s2, . + 4 + (0x31 << 2)
label_1edbcc:
    if (ctx->pc == 0x1EDBCCu) {
        ctx->pc = 0x1EDBCCu;
            // 0x1edbcc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBD0u;
        goto label_1edbd0;
    }
    ctx->pc = 0x1EDBC8u;
    {
        const bool branch_taken_0x1edbc8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1EDBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDBC8u;
            // 0x1edbcc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbc8) {
            ctx->pc = 0x1EDC90u;
            goto label_1edc90;
        }
    }
    ctx->pc = 0x1EDBD0u;
label_1edbd0:
    // 0x1edbd0: 0x2a410009  slti        $at, $s2, 0x9
    ctx->pc = 0x1edbd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_1edbd4:
    // 0x1edbd4: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_1edbd8:
    if (ctx->pc == 0x1EDBD8u) {
        ctx->pc = 0x1EDBD8u;
            // 0x1edbd8: 0x2646fff8  addiu       $a2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->pc = 0x1EDBDCu;
        goto label_1edbdc;
    }
    ctx->pc = 0x1EDBD4u;
    {
        const bool branch_taken_0x1edbd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDBD4u;
            // 0x1edbd8: 0x2646fff8  addiu       $a2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbd4) {
            ctx->pc = 0x1EDC60u;
            goto label_1edc60;
        }
    }
    ctx->pc = 0x1EDBDCu;
label_1edbdc:
    // 0x1edbdc: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
label_1edbe0:
    if (ctx->pc == 0x1EDBE0u) {
        ctx->pc = 0x1EDBE0u;
            // 0x1edbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EDBE4u;
        goto label_1edbe4;
    }
    ctx->pc = 0x1EDBDCu;
    {
        const bool branch_taken_0x1edbdc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1EDBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDBDCu;
            // 0x1edbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edbdc) {
            ctx->pc = 0x1EDBFCu;
            goto label_1edbfc;
        }
    }
    ctx->pc = 0x1EDBE4u;
label_1edbe4:
    // 0x1edbe4: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x1edbe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
label_1edbe8:
    // 0x1edbe8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1edbe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_1edbec:
    // 0x1edbec: 0x241082a  slt         $at, $s2, $at
    ctx->pc = 0x1edbecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_1edbf0:
    // 0x1edbf0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1edbf4:
    if (ctx->pc == 0x1EDBF4u) {
        ctx->pc = 0x1EDBF8u;
        goto label_1edbf8;
    }
    ctx->pc = 0x1EDBF0u;
    {
        const bool branch_taken_0x1edbf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edbf0) {
            ctx->pc = 0x1EDBFCu;
            goto label_1edbfc;
        }
    }
    ctx->pc = 0x1EDBF8u;
label_1edbf8:
    // 0x1edbf8: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x1edbf8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1edbfc:
    // 0x1edbfc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1edc00:
    if (ctx->pc == 0x1EDC00u) {
        ctx->pc = 0x1EDC04u;
        goto label_1edc04;
    }
    ctx->pc = 0x1EDBFCu;
    {
        const bool branch_taken_0x1edbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edbfc) {
            ctx->pc = 0x1EDC60u;
            goto label_1edc60;
        }
    }
    ctx->pc = 0x1EDC04u;
label_1edc04:
    // 0x1edc04: 0x8fa511e8  lw          $a1, 0x11E8($sp)
    ctx->pc = 0x1edc04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4584)));
label_1edc08:
    // 0x1edc08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1edc08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edc0c:
    // 0x1edc0c: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x1edc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1edc10:
    // 0x1edc10: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1edc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1edc14:
    // 0x1edc14: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1edc14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_1edc18:
    // 0x1edc18: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x1edc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_1edc1c:
    // 0x1edc1c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1edc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1edc20:
    // 0x1edc20: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1edc20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1edc24:
    // 0x1edc24: 0x25020003  addiu       $v0, $t0, 0x3
    ctx->pc = 0x1edc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_1edc28:
    // 0x1edc28: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1edc28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1edc2c:
    // 0x1edc2c: 0x25030004  addiu       $v1, $t0, 0x4
    ctx->pc = 0x1edc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1edc30:
    // 0x1edc30: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1edc30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_1edc34:
    // 0x1edc34: 0x25020005  addiu       $v0, $t0, 0x5
    ctx->pc = 0x1edc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
label_1edc38:
    // 0x1edc38: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1edc38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_1edc3c:
    // 0x1edc3c: 0x25030006  addiu       $v1, $t0, 0x6
    ctx->pc = 0x1edc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
label_1edc40:
    // 0x1edc40: 0x25020007  addiu       $v0, $t0, 0x7
    ctx->pc = 0x1edc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
label_1edc44:
    // 0x1edc44: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1edc44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_1edc48:
    // 0x1edc48: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1edc48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_1edc4c:
    // 0x1edc4c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1edc4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_1edc50:
    // 0x1edc50: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x1edc50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1edc54:
    // 0x1edc54: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_1edc58:
    if (ctx->pc == 0x1EDC58u) {
        ctx->pc = 0x1EDC58u;
            // 0x1edc58: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->pc = 0x1EDC5Cu;
        goto label_1edc5c;
    }
    ctx->pc = 0x1EDC54u;
    {
        const bool branch_taken_0x1edc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDC54u;
            // 0x1edc58: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc54) {
            ctx->pc = 0x1EDC0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1edc0c;
        }
    }
    ctx->pc = 0x1EDC5Cu;
label_1edc5c:
    // 0x1edc5c: 0x0  nop
    ctx->pc = 0x1edc5cu;
    // NOP
label_1edc60:
    // 0x1edc60: 0x112082a  slt         $at, $t0, $s2
    ctx->pc = 0x1edc60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1edc64:
    // 0x1edc64: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1edc68:
    if (ctx->pc == 0x1EDC68u) {
        ctx->pc = 0x1EDC6Cu;
        goto label_1edc6c;
    }
    ctx->pc = 0x1EDC64u;
    {
        const bool branch_taken_0x1edc64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edc64) {
            ctx->pc = 0x1EDC90u;
            goto label_1edc90;
        }
    }
    ctx->pc = 0x1EDC6Cu;
label_1edc6c:
    // 0x1edc6c: 0x8fa311e8  lw          $v1, 0x11E8($sp)
    ctx->pc = 0x1edc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4584)));
label_1edc70:
    // 0x1edc70: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1edc70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1edc74:
    // 0x1edc74: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1edc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1edc78:
    // 0x1edc78: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1edc78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_1edc7c:
    // 0x1edc7c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1edc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1edc80:
    // 0x1edc80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1edc80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1edc84:
    // 0x1edc84: 0x112102a  slt         $v0, $t0, $s2
    ctx->pc = 0x1edc84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1edc88:
    // 0x1edc88: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1edc8c:
    if (ctx->pc == 0x1EDC8Cu) {
        ctx->pc = 0x1EDC90u;
        goto label_1edc90;
    }
    ctx->pc = 0x1EDC88u;
    {
        const bool branch_taken_0x1edc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edc88) {
            ctx->pc = 0x1EDC74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1edc74;
        }
    }
    ctx->pc = 0x1EDC90u;
label_1edc90:
    // 0x1edc90: 0x8fa811e8  lw          $t0, 0x11E8($sp)
    ctx->pc = 0x1edc90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4584)));
label_1edc94:
    // 0x1edc94: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1edc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1edc98:
    // 0x1edc98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1edc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1edc9c:
    // 0x1edc9c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1edc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1edca0:
    // 0x1edca0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_1edca4:
    if (ctx->pc == 0x1EDCA4u) {
        ctx->pc = 0x1EDCA4u;
            // 0x1edca4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1EDCA8u;
        goto label_1edca8;
    }
    ctx->pc = 0x1EDCA0u;
    {
        const bool branch_taken_0x1edca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDCA0u;
            // 0x1edca4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edca0) {
            ctx->pc = 0x1EDCACu;
            goto label_1edcac;
        }
    }
    ctx->pc = 0x1EDCA8u;
label_1edca8:
    // 0x1edca8: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x1edca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1edcac:
    // 0x1edcac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1edcacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1edcb0:
    // 0x1edcb0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1edcb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1edcb4:
    // 0x1edcb4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1edcb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1edcb8:
    // 0x1edcb8: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x1edcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_1edcbc:
    // 0x1edcbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1edcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1edcc0:
    // 0x1edcc0: 0xc091cc4  jal         func_247310
label_1edcc4:
    if (ctx->pc == 0x1EDCC4u) {
        ctx->pc = 0x1EDCC4u;
            // 0x1edcc4: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1EDCC8u;
        goto label_1edcc8;
    }
    ctx->pc = 0x1EDCC0u;
    SET_GPR_U32(ctx, 31, 0x1EDCC8u);
    ctx->pc = 0x1EDCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDCC0u;
            // 0x1edcc4: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247310u;
    if (runtime->hasFunction(0x247310u)) {
        auto targetFn = runtime->lookupFunction(0x247310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDCC8u; }
        if (ctx->pc != 0x1EDCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247310_0x247310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDCC8u; }
        if (ctx->pc != 0x1EDCC8u) { return; }
    }
    ctx->pc = 0x1EDCC8u;
label_1edcc8:
    // 0x1edcc8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1edcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1edccc:
    // 0x1edccc: 0x8fa511e8  lw          $a1, 0x11E8($sp)
    ctx->pc = 0x1edcccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4584)));
label_1edcd0:
    // 0x1edcd0: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x1edcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_1edcd4:
    // 0x1edcd4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1edcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_1edcd8:
    // 0x1edcd8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1edcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1edcdc:
    // 0x1edcdc: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_1edce0:
    if (ctx->pc == 0x1EDCE0u) {
        ctx->pc = 0x1EDCE4u;
        goto label_1edce4;
    }
    ctx->pc = 0x1EDCDCu;
    {
        const bool branch_taken_0x1edcdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1edcdc) {
            ctx->pc = 0x1EDCF4u;
            goto label_1edcf4;
        }
    }
    ctx->pc = 0x1EDCE4u;
label_1edce4:
    // 0x1edce4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1edce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1edce8:
    // 0x1edce8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1edce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1edcec:
    // 0x1edcec: 0x320f809  jalr        $t9
label_1edcf0:
    if (ctx->pc == 0x1EDCF0u) {
        ctx->pc = 0x1EDCF4u;
        goto label_1edcf4;
    }
    ctx->pc = 0x1EDCECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EDCF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EDCF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EDCF4u; }
            if (ctx->pc != 0x1EDCF4u) { return; }
        }
        }
    }
    ctx->pc = 0x1EDCF4u;
label_1edcf4:
    // 0x1edcf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edcf8:
    // 0x1edcf8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1edcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1edcfc:
    // 0x1edcfc: 0xa2830085  sb          $v1, 0x85($s4)
    ctx->pc = 0x1edcfcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 133), (uint8_t)GPR_U32(ctx, 3));
label_1edd00:
    // 0x1edd00: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1edd00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1edd04:
    // 0x1edd04: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1edd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1edd08:
    // 0x1edd08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1edd08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1edd0c:
    // 0x1edd0c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1edd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1edd10:
    // 0x1edd10: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1edd10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1edd14:
    // 0x1edd14: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1edd18:
    if (ctx->pc == 0x1EDD18u) {
        ctx->pc = 0x1EDD18u;
            // 0x1edd18: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1EDD1Cu;
        goto label_1edd1c;
    }
    ctx->pc = 0x1EDD14u;
    {
        const bool branch_taken_0x1edd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDD14u;
            // 0x1edd18: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd14) {
            ctx->pc = 0x1EDD44u;
            goto label_1edd44;
        }
    }
    ctx->pc = 0x1EDD1Cu;
label_1edd1c:
    // 0x1edd1c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1edd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1edd20:
    // 0x1edd20: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1edd20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1edd24:
    // 0x1edd24: 0x2463acb0  addiu       $v1, $v1, -0x5350
    ctx->pc = 0x1edd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945968));
label_1edd28:
    // 0x1edd28: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1edd28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1edd2c:
    // 0x1edd2c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1edd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1edd30:
    // 0x1edd30: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1edd30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1edd34:
    // 0x1edd34: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1edd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1edd38:
    // 0x1edd38: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1edd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1edd3c:
    // 0x1edd3c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1edd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1edd40:
    // 0x1edd40: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1edd40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1edd44:
    // 0x1edd44: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1edd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1edd48:
    // 0x1edd48: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1edd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1edd4c:
    // 0x1edd4c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1edd4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1edd50:
    // 0x1edd50: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1edd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1edd54:
    // 0x1edd54: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1edd54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1edd58:
    // 0x1edd58: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1edd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1edd5c:
    // 0x1edd5c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1edd5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1edd60:
    // 0x1edd60: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1edd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1edd64:
    // 0x1edd64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1edd64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1edd68:
    // 0x1edd68: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1edd68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1edd6c:
    // 0x1edd6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1edd6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1edd70:
    // 0x1edd70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1edd70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1edd74:
    // 0x1edd74: 0x3e00008  jr          $ra
label_1edd78:
    if (ctx->pc == 0x1EDD78u) {
        ctx->pc = 0x1EDD78u;
            // 0x1edd78: 0x27bd11f0  addiu       $sp, $sp, 0x11F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4592));
        ctx->pc = 0x1EDD7Cu;
        goto label_1edd7c;
    }
    ctx->pc = 0x1EDD74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDD74u;
            // 0x1edd78: 0x27bd11f0  addiu       $sp, $sp, 0x11F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EDD7Cu;
label_1edd7c:
    // 0x1edd7c: 0x0  nop
    ctx->pc = 0x1edd7cu;
    // NOP
label_1edd80:
    // 0x1edd80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1edd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1edd84:
    // 0x1edd84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1edd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1edd88:
    // 0x1edd88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1edd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1edd8c:
    // 0x1edd8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1edd8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1edd90:
    // 0x1edd90: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_1edd94:
    if (ctx->pc == 0x1EDD94u) {
        ctx->pc = 0x1EDD94u;
            // 0x1edd94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD98u;
        goto label_1edd98;
    }
    ctx->pc = 0x1EDD90u;
    {
        const bool branch_taken_0x1edd90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edd90) {
            ctx->pc = 0x1EDD94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDD90u;
            // 0x1edd94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EDE00u;
            goto label_1ede00;
        }
    }
    ctx->pc = 0x1EDD98u;
label_1edd98:
    // 0x1edd98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1edd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1edd9c:
    // 0x1edd9c: 0x2442d800  addiu       $v0, $v0, -0x2800
    ctx->pc = 0x1edd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957056));
label_1edda0:
    // 0x1edda0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1edda4:
    if (ctx->pc == 0x1EDDA4u) {
        ctx->pc = 0x1EDDA4u;
            // 0x1edda4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EDDA8u;
        goto label_1edda8;
    }
    ctx->pc = 0x1EDDA0u;
    {
        const bool branch_taken_0x1edda0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDDA0u;
            // 0x1edda4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edda0) {
            ctx->pc = 0x1EDDD4u;
            goto label_1eddd4;
        }
    }
    ctx->pc = 0x1EDDA8u;
label_1edda8:
    // 0x1edda8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1edda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eddac:
    // 0x1eddac: 0x2442d830  addiu       $v0, $v0, -0x27D0
    ctx->pc = 0x1eddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957104));
label_1eddb0:
    // 0x1eddb0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1eddb4:
    if (ctx->pc == 0x1EDDB4u) {
        ctx->pc = 0x1EDDB4u;
            // 0x1eddb4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EDDB8u;
        goto label_1eddb8;
    }
    ctx->pc = 0x1EDDB0u;
    {
        const bool branch_taken_0x1eddb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDDB0u;
            // 0x1eddb4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eddb0) {
            ctx->pc = 0x1EDDD4u;
            goto label_1eddd4;
        }
    }
    ctx->pc = 0x1EDDB8u;
label_1eddb8:
    // 0x1eddb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eddbc:
    // 0x1eddbc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1eddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1eddc0:
    // 0x1eddc0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1eddc4:
    if (ctx->pc == 0x1EDDC4u) {
        ctx->pc = 0x1EDDC4u;
            // 0x1eddc4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EDDC8u;
        goto label_1eddc8;
    }
    ctx->pc = 0x1EDDC0u;
    {
        const bool branch_taken_0x1eddc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDDC0u;
            // 0x1eddc4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eddc0) {
            ctx->pc = 0x1EDDD4u;
            goto label_1eddd4;
        }
    }
    ctx->pc = 0x1EDDC8u;
label_1eddc8:
    // 0x1eddc8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1eddcc:
    // 0x1eddcc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1eddccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1eddd0:
    // 0x1eddd0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1eddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1eddd4:
    // 0x1eddd4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1eddd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1eddd8:
    // 0x1eddd8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1eddd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1edddc:
    // 0x1edddc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1edde0:
    if (ctx->pc == 0x1EDDE0u) {
        ctx->pc = 0x1EDDE4u;
        goto label_1edde4;
    }
    ctx->pc = 0x1EDDDCu;
    {
        const bool branch_taken_0x1edddc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1edddc) {
            ctx->pc = 0x1EDDFCu;
            goto label_1eddfc;
        }
    }
    ctx->pc = 0x1EDDE4u;
label_1edde4:
    // 0x1edde4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1edde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1edde8:
    // 0x1edde8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1edde8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1eddec:
    // 0x1eddec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1eddecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1eddf0:
    // 0x1eddf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eddf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eddf4:
    // 0x1eddf4: 0xc0a7ab4  jal         func_29EAD0
label_1eddf8:
    if (ctx->pc == 0x1EDDF8u) {
        ctx->pc = 0x1EDDF8u;
            // 0x1eddf8: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1EDDFCu;
        goto label_1eddfc;
    }
    ctx->pc = 0x1EDDF4u;
    SET_GPR_U32(ctx, 31, 0x1EDDFCu);
    ctx->pc = 0x1EDDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDDF4u;
            // 0x1eddf8: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDDFCu; }
        if (ctx->pc != 0x1EDDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDDFCu; }
        if (ctx->pc != 0x1EDDFCu) { return; }
    }
    ctx->pc = 0x1EDDFCu;
label_1eddfc:
    // 0x1eddfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1eddfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ede00:
    // 0x1ede00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ede00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ede04:
    // 0x1ede04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ede04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ede08:
    // 0x1ede08: 0x3e00008  jr          $ra
label_1ede0c:
    if (ctx->pc == 0x1EDE0Cu) {
        ctx->pc = 0x1EDE0Cu;
            // 0x1ede0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EDE10u;
        goto label_1ede10;
    }
    ctx->pc = 0x1EDE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE08u;
            // 0x1ede0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EDE10u;
label_1ede10:
    // 0x1ede10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ede10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ede14:
    // 0x1ede14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ede14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ede18:
    // 0x1ede18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ede18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ede1c:
    // 0x1ede1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ede1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ede20:
    // 0x1ede20: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_1ede24:
    if (ctx->pc == 0x1EDE24u) {
        ctx->pc = 0x1EDE24u;
            // 0x1ede24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE28u;
        goto label_1ede28;
    }
    ctx->pc = 0x1EDE20u;
    {
        const bool branch_taken_0x1ede20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ede20) {
            ctx->pc = 0x1EDE24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE20u;
            // 0x1ede24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EDE80u;
            goto label_1ede80;
        }
    }
    ctx->pc = 0x1EDE28u;
label_1ede28:
    // 0x1ede28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ede28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ede2c:
    // 0x1ede2c: 0x2442d830  addiu       $v0, $v0, -0x27D0
    ctx->pc = 0x1ede2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957104));
label_1ede30:
    // 0x1ede30: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1ede34:
    if (ctx->pc == 0x1EDE34u) {
        ctx->pc = 0x1EDE34u;
            // 0x1ede34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EDE38u;
        goto label_1ede38;
    }
    ctx->pc = 0x1EDE30u;
    {
        const bool branch_taken_0x1ede30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE30u;
            // 0x1ede34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede30) {
            ctx->pc = 0x1EDE54u;
            goto label_1ede54;
        }
    }
    ctx->pc = 0x1EDE38u;
label_1ede38:
    // 0x1ede38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ede38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ede3c:
    // 0x1ede3c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1ede3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1ede40:
    // 0x1ede40: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1ede44:
    if (ctx->pc == 0x1EDE44u) {
        ctx->pc = 0x1EDE44u;
            // 0x1ede44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EDE48u;
        goto label_1ede48;
    }
    ctx->pc = 0x1EDE40u;
    {
        const bool branch_taken_0x1ede40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE40u;
            // 0x1ede44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede40) {
            ctx->pc = 0x1EDE54u;
            goto label_1ede54;
        }
    }
    ctx->pc = 0x1EDE48u;
label_1ede48:
    // 0x1ede48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ede48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ede4c:
    // 0x1ede4c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1ede4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1ede50:
    // 0x1ede50: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ede50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ede54:
    // 0x1ede54: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1ede54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1ede58:
    // 0x1ede58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ede58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1ede5c:
    // 0x1ede5c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1ede60:
    if (ctx->pc == 0x1EDE60u) {
        ctx->pc = 0x1EDE64u;
        goto label_1ede64;
    }
    ctx->pc = 0x1EDE5Cu;
    {
        const bool branch_taken_0x1ede5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ede5c) {
            ctx->pc = 0x1EDE7Cu;
            goto label_1ede7c;
        }
    }
    ctx->pc = 0x1EDE64u;
label_1ede64:
    // 0x1ede64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ede64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ede68:
    // 0x1ede68: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1ede68u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1ede6c:
    // 0x1ede6c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ede6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ede70:
    // 0x1ede70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ede70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ede74:
    // 0x1ede74: 0xc0a7ab4  jal         func_29EAD0
label_1ede78:
    if (ctx->pc == 0x1EDE78u) {
        ctx->pc = 0x1EDE78u;
            // 0x1ede78: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1EDE7Cu;
        goto label_1ede7c;
    }
    ctx->pc = 0x1EDE74u;
    SET_GPR_U32(ctx, 31, 0x1EDE7Cu);
    ctx->pc = 0x1EDE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE74u;
            // 0x1ede78: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDE7Cu; }
        if (ctx->pc != 0x1EDE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDE7Cu; }
        if (ctx->pc != 0x1EDE7Cu) { return; }
    }
    ctx->pc = 0x1EDE7Cu;
label_1ede7c:
    // 0x1ede7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ede7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ede80:
    // 0x1ede80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ede80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ede84:
    // 0x1ede84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ede84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ede88:
    // 0x1ede88: 0x3e00008  jr          $ra
label_1ede8c:
    if (ctx->pc == 0x1EDE8Cu) {
        ctx->pc = 0x1EDE8Cu;
            // 0x1ede8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EDE90u;
        goto label_1ede90;
    }
    ctx->pc = 0x1EDE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDE88u;
            // 0x1ede8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EDE90u;
label_1ede90:
    // 0x1ede90: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x1ede90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
label_1ede94:
    // 0x1ede94: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1ede94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1ede98:
    // 0x1ede98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ede98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1ede9c:
    // 0x1ede9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ede9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1edea0:
    // 0x1edea0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1edea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1edea4:
    // 0x1edea4: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x1edea4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1edea8:
    // 0x1edea8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1edea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1edeac:
    // 0x1edeac: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1edeacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1edeb0:
    // 0x1edeb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1edeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1edeb4:
    // 0x1edeb4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1edeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1edeb8:
    // 0x1edeb8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1edeb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1edebc:
    // 0x1edebc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1edebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1edec0:
    // 0x1edec0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1edec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1edec4:
    // 0x1edec4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1edec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1edec8:
    // 0x1edec8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1edec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1edecc:
    // 0x1edecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1edeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eded0:
    // 0x1eded0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1eded0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1eded4:
    // 0x1eded4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1eded4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1eded8:
    // 0x1eded8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1eded8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1ededc:
    // 0x1ededc: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
label_1edee0:
    if (ctx->pc == 0x1EDEE0u) {
        ctx->pc = 0x1EDEE0u;
            // 0x1edee0: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EDEE4u;
        goto label_1edee4;
    }
    ctx->pc = 0x1EDEDCu;
    {
        const bool branch_taken_0x1ededc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EDEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDEDCu;
            // 0x1edee0: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ededc) {
            ctx->pc = 0x1EDF70u;
            goto label_1edf70;
        }
    }
    ctx->pc = 0x1EDEE4u;
label_1edee4:
    // 0x1edee4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1edee4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1edee8:
    // 0x1edee8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1edee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edeec:
    // 0x1edeec: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x1edeecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_1edef0:
    // 0x1edef0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1edef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_1edef4:
    // 0x1edef4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1edef4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1edef8:
    // 0x1edef8: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
label_1edefc:
    if (ctx->pc == 0x1EDEFCu) {
        ctx->pc = 0x1EDEFCu;
            // 0x1edefc: 0x3aa03  sra         $s5, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 3), 8));
        ctx->pc = 0x1EDF00u;
        goto label_1edf00;
    }
    ctx->pc = 0x1EDEF8u;
    {
        const bool branch_taken_0x1edef8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDEF8u;
            // 0x1edefc: 0x3aa03  sra         $s5, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edef8) {
            ctx->pc = 0x1EDF38u;
            goto label_1edf38;
        }
    }
    ctx->pc = 0x1EDF00u;
label_1edf00:
    // 0x1edf00: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x1edf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_1edf04:
    // 0x1edf04: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1edf04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1edf08:
    // 0x1edf08: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1edf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_1edf0c:
    // 0x1edf0c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1edf0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_1edf10:
    // 0x1edf10: 0x50550005  beql        $v0, $s5, . + 4 + (0x5 << 2)
label_1edf14:
    if (ctx->pc == 0x1EDF14u) {
        ctx->pc = 0x1EDF14u;
            // 0x1edf14: 0x92020008  lbu         $v0, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1EDF18u;
        goto label_1edf18;
    }
    ctx->pc = 0x1EDF10u;
    {
        const bool branch_taken_0x1edf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x1edf10) {
            ctx->pc = 0x1EDF14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF10u;
            // 0x1edf14: 0x92020008  lbu         $v0, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EDF28u;
            goto label_1edf28;
        }
    }
    ctx->pc = 0x1EDF18u;
label_1edf18:
    // 0x1edf18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edf1c:
    // 0x1edf1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1edf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1edf20:
    // 0x1edf20: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1edf24:
    if (ctx->pc == 0x1EDF24u) {
        ctx->pc = 0x1EDF24u;
            // 0x1edf24: 0xa2830010  sb          $v1, 0x10($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EDF28u;
        goto label_1edf28;
    }
    ctx->pc = 0x1EDF20u;
    {
        const bool branch_taken_0x1edf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF20u;
            // 0x1edf24: 0xa2830010  sb          $v1, 0x10($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf20) {
            ctx->pc = 0x1EE058u;
            goto label_1ee058;
        }
    }
    ctx->pc = 0x1EDF28u;
label_1edf28:
    // 0x1edf28: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1edf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1edf2c:
    // 0x1edf2c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1edf2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1edf30:
    // 0x1edf30: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1edf34:
    if (ctx->pc == 0x1EDF34u) {
        ctx->pc = 0x1EDF34u;
            // 0x1edf34: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x1EDF38u;
        goto label_1edf38;
    }
    ctx->pc = 0x1EDF30u;
    {
        const bool branch_taken_0x1edf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF30u;
            // 0x1edf34: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf30) {
            ctx->pc = 0x1EDF04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1edf04;
        }
    }
    ctx->pc = 0x1EDF38u;
label_1edf38:
    // 0x1edf38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1edf38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1edf3c:
    // 0x1edf3c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1edf3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1edf40:
    // 0x1edf40: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1edf40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1edf44:
    // 0x1edf44: 0x320f809  jalr        $t9
label_1edf48:
    if (ctx->pc == 0x1EDF48u) {
        ctx->pc = 0x1EDF48u;
            // 0x1edf48: 0x27a60290  addiu       $a2, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x1EDF4Cu;
        goto label_1edf4c;
    }
    ctx->pc = 0x1EDF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EDF4Cu);
        ctx->pc = 0x1EDF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF44u;
            // 0x1edf48: 0x27a60290  addiu       $a2, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EDF4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF4Cu; }
            if (ctx->pc != 0x1EDF4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1EDF4Cu;
label_1edf4c:
    // 0x1edf4c: 0x27a304a0  addiu       $v1, $sp, 0x4A0
    ctx->pc = 0x1edf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_1edf50:
    // 0x1edf50: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1edf54:
    if (ctx->pc == 0x1EDF54u) {
        ctx->pc = 0x1EDF54u;
            // 0x1edf54: 0xafa204a0  sw          $v0, 0x4A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
        ctx->pc = 0x1EDF58u;
        goto label_1edf58;
    }
    ctx->pc = 0x1EDF50u;
    {
        const bool branch_taken_0x1edf50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edf50) {
            ctx->pc = 0x1EDF54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF50u;
            // 0x1edf54: 0xafa204a0  sw          $v0, 0x4A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EDF68u;
            goto label_1edf68;
        }
    }
    ctx->pc = 0x1EDF58u;
label_1edf58:
    // 0x1edf58: 0xafb304ac  sw          $s3, 0x4AC($sp)
    ctx->pc = 0x1edf58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1196), GPR_U32(ctx, 19));
label_1edf5c:
    // 0x1edf5c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1edf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1edf60:
    // 0x1edf60: 0xafa304a8  sw          $v1, 0x4A8($sp)
    ctx->pc = 0x1edf60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 3));
label_1edf64:
    // 0x1edf64: 0xafa204a0  sw          $v0, 0x4A0($sp)
    ctx->pc = 0x1edf64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 2));
label_1edf68:
    // 0x1edf68: 0x27b304a0  addiu       $s3, $sp, 0x4A0
    ctx->pc = 0x1edf68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_1edf6c:
    // 0x1edf6c: 0xafb504a4  sw          $s5, 0x4A4($sp)
    ctx->pc = 0x1edf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 21));
label_1edf70:
    // 0x1edf70: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1edf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1edf74:
    // 0x1edf74: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1edf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1edf78:
    // 0x1edf78: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1edf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1edf7c:
    // 0x1edf7c: 0x5462002d  bnel        $v1, $v0, . + 4 + (0x2D << 2)
label_1edf80:
    if (ctx->pc == 0x1EDF80u) {
        ctx->pc = 0x1EDF80u;
            // 0x1edf80: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x1EDF84u;
        goto label_1edf84;
    }
    ctx->pc = 0x1EDF7Cu;
    {
        const bool branch_taken_0x1edf7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1edf7c) {
            ctx->pc = 0x1EDF80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDF7Cu;
            // 0x1edf80: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE034u;
            goto label_1ee034;
        }
    }
    ctx->pc = 0x1EDF84u;
label_1edf84:
    // 0x1edf84: 0x92060008  lbu         $a2, 0x8($s0)
    ctx->pc = 0x1edf84u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_1edf88:
    // 0x1edf88: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x1edf88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1edf8c:
    // 0x1edf8c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1edf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1edf90:
    // 0x1edf90: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1edf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1edf94:
    // 0x1edf94: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1edf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_1edf98:
    // 0x1edf98: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1edf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1edf9c:
    // 0x1edf9c: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x1edf9cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1edfa0:
    // 0x1edfa0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1edfa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1edfa4:
    // 0x1edfa4: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x1edfa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
label_1edfa8:
    // 0x1edfa8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_1edfac:
    if (ctx->pc == 0x1EDFACu) {
        ctx->pc = 0x1EDFACu;
            // 0x1edfac: 0x5aa03  sra         $s5, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 5), 8));
        ctx->pc = 0x1EDFB0u;
        goto label_1edfb0;
    }
    ctx->pc = 0x1EDFA8u;
    {
        const bool branch_taken_0x1edfa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFA8u;
            // 0x1edfac: 0x5aa03  sra         $s5, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edfa8) {
            ctx->pc = 0x1EDFF8u;
            goto label_1edff8;
        }
    }
    ctx->pc = 0x1EDFB0u;
label_1edfb0:
    // 0x1edfb0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1edfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1edfb4:
    // 0x1edfb4: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x1edfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1edfb8:
    // 0x1edfb8: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x1edfb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_1edfbc:
    // 0x1edfbc: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1edfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_1edfc0:
    // 0x1edfc0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1edfc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_1edfc4:
    // 0x1edfc4: 0x50750005  beql        $v1, $s5, . + 4 + (0x5 << 2)
label_1edfc8:
    if (ctx->pc == 0x1EDFC8u) {
        ctx->pc = 0x1EDFC8u;
            // 0x1edfc8: 0x92050008  lbu         $a1, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1EDFCCu;
        goto label_1edfcc;
    }
    ctx->pc = 0x1EDFC4u;
    {
        const bool branch_taken_0x1edfc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x1edfc4) {
            ctx->pc = 0x1EDFC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFC4u;
            // 0x1edfc8: 0x92050008  lbu         $a1, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EDFDCu;
            goto label_1edfdc;
        }
    }
    ctx->pc = 0x1EDFCCu;
label_1edfcc:
    // 0x1edfcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1edfd0:
    // 0x1edfd0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1edfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1edfd4:
    // 0x1edfd4: 0x10000020  b           . + 4 + (0x20 << 2)
label_1edfd8:
    if (ctx->pc == 0x1EDFD8u) {
        ctx->pc = 0x1EDFD8u;
            // 0x1edfd8: 0xa2830010  sb          $v1, 0x10($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EDFDCu;
        goto label_1edfdc;
    }
    ctx->pc = 0x1EDFD4u;
    {
        const bool branch_taken_0x1edfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFD4u;
            // 0x1edfd8: 0xa2830010  sb          $v1, 0x10($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edfd4) {
            ctx->pc = 0x1EE058u;
            goto label_1ee058;
        }
    }
    ctx->pc = 0x1EDFDCu;
label_1edfdc:
    // 0x1edfdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1edfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1edfe0:
    // 0x1edfe0: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x1edfe0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1edfe4:
    // 0x1edfe4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1edfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1edfe8:
    // 0x1edfe8: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1edfe8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1edfec:
    // 0x1edfec: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_1edff0:
    if (ctx->pc == 0x1EDFF0u) {
        ctx->pc = 0x1EDFF0u;
            // 0x1edff0: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x1EDFF4u;
        goto label_1edff4;
    }
    ctx->pc = 0x1EDFECu;
    {
        const bool branch_taken_0x1edfec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EDFECu;
            // 0x1edff0: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edfec) {
            ctx->pc = 0x1EDFB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1edfb8;
        }
    }
    ctx->pc = 0x1EDFF4u;
label_1edff4:
    // 0x1edff4: 0x0  nop
    ctx->pc = 0x1edff4u;
    // NOP
label_1edff8:
    // 0x1edff8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1edff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1edffc:
    // 0x1edffc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1edffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ee000:
    // 0x1ee000: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1ee000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1ee004:
    // 0x1ee004: 0x320f809  jalr        $t9
label_1ee008:
    if (ctx->pc == 0x1EE008u) {
        ctx->pc = 0x1EE008u;
            // 0x1ee008: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1EE00Cu;
        goto label_1ee00c;
    }
    ctx->pc = 0x1EE004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EE00Cu);
        ctx->pc = 0x1EE008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE004u;
            // 0x1ee008: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EE00Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EE00Cu; }
            if (ctx->pc != 0x1EE00Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1EE00Cu;
label_1ee00c:
    // 0x1ee00c: 0x27a30490  addiu       $v1, $sp, 0x490
    ctx->pc = 0x1ee00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_1ee010:
    // 0x1ee010: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1ee014:
    if (ctx->pc == 0x1EE014u) {
        ctx->pc = 0x1EE014u;
            // 0x1ee014: 0xafa20490  sw          $v0, 0x490($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 2));
        ctx->pc = 0x1EE018u;
        goto label_1ee018;
    }
    ctx->pc = 0x1EE010u;
    {
        const bool branch_taken_0x1ee010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee010) {
            ctx->pc = 0x1EE014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE010u;
            // 0x1ee014: 0xafa20490  sw          $v0, 0x490($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE028u;
            goto label_1ee028;
        }
    }
    ctx->pc = 0x1EE018u;
label_1ee018:
    // 0x1ee018: 0xafb2049c  sw          $s2, 0x49C($sp)
    ctx->pc = 0x1ee018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1180), GPR_U32(ctx, 18));
label_1ee01c:
    // 0x1ee01c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1ee01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ee020:
    // 0x1ee020: 0xafa30498  sw          $v1, 0x498($sp)
    ctx->pc = 0x1ee020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1176), GPR_U32(ctx, 3));
label_1ee024:
    // 0x1ee024: 0xafa20490  sw          $v0, 0x490($sp)
    ctx->pc = 0x1ee024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 2));
label_1ee028:
    // 0x1ee028: 0x27b20490  addiu       $s2, $sp, 0x490
    ctx->pc = 0x1ee028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_1ee02c:
    // 0x1ee02c: 0xafb50494  sw          $s5, 0x494($sp)
    ctx->pc = 0x1ee02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 21));
label_1ee030:
    // 0x1ee030: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1ee030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1ee034:
    // 0x1ee034: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ee034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ee038:
    // 0x1ee038: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ee038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ee03c:
    // 0x1ee03c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ee03cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee040:
    // 0x1ee040: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1ee040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ee044:
    // 0x1ee044: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ee044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ee048:
    // 0x1ee048: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ee048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ee04c:
    // 0x1ee04c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ee04cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ee050:
    // 0x1ee050: 0x320f809  jalr        $t9
label_1ee054:
    if (ctx->pc == 0x1EE054u) {
        ctx->pc = 0x1EE054u;
            // 0x1ee054: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE058u;
        goto label_1ee058;
    }
    ctx->pc = 0x1EE050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EE058u);
        ctx->pc = 0x1EE054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE050u;
            // 0x1ee054: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EE058u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EE058u; }
            if (ctx->pc != 0x1EE058u) { return; }
        }
        }
    }
    ctx->pc = 0x1EE058u;
label_1ee058:
    // 0x1ee058: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ee058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1ee05c:
    // 0x1ee05c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ee05cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ee060:
    // 0x1ee060: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ee060u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ee064:
    // 0x1ee064: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ee064u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ee068:
    // 0x1ee068: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ee068u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ee06c:
    // 0x1ee06c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ee06cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ee070:
    // 0x1ee070: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ee070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee074:
    // 0x1ee074: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee078:
    // 0x1ee078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee07c:
    // 0x1ee07c: 0x3e00008  jr          $ra
label_1ee080:
    if (ctx->pc == 0x1EE080u) {
        ctx->pc = 0x1EE080u;
            // 0x1ee080: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->pc = 0x1EE084u;
        goto label_1ee084;
    }
    ctx->pc = 0x1EE07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE07Cu;
            // 0x1ee080: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE084u;
label_1ee084:
    // 0x1ee084: 0x0  nop
    ctx->pc = 0x1ee084u;
    // NOP
label_1ee088:
    // 0x1ee088: 0x0  nop
    ctx->pc = 0x1ee088u;
    // NOP
label_1ee08c:
    // 0x1ee08c: 0x0  nop
    ctx->pc = 0x1ee08cu;
    // NOP
label_1ee090:
    // 0x1ee090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ee090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ee094:
    // 0x1ee094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ee098:
    // 0x1ee098: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1ee098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1ee09c:
    // 0x1ee09c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ee09cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ee0a0:
    // 0x1ee0a0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1ee0a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1ee0a4:
    // 0x1ee0a4: 0x320f809  jalr        $t9
label_1ee0a8:
    if (ctx->pc == 0x1EE0A8u) {
        ctx->pc = 0x1EE0ACu;
        goto label_1ee0ac;
    }
    ctx->pc = 0x1EE0A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EE0ACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EE0ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EE0ACu; }
            if (ctx->pc != 0x1EE0ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1EE0ACu;
label_1ee0ac:
    // 0x1ee0ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee0b0:
    // 0x1ee0b0: 0x3e00008  jr          $ra
label_1ee0b4:
    if (ctx->pc == 0x1EE0B4u) {
        ctx->pc = 0x1EE0B4u;
            // 0x1ee0b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EE0B8u;
        goto label_1ee0b8;
    }
    ctx->pc = 0x1EE0B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0B0u;
            // 0x1ee0b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE0B8u;
label_1ee0b8:
    // 0x1ee0b8: 0x0  nop
    ctx->pc = 0x1ee0b8u;
    // NOP
label_1ee0bc:
    // 0x1ee0bc: 0x0  nop
    ctx->pc = 0x1ee0bcu;
    // NOP
label_1ee0c0:
    // 0x1ee0c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ee0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ee0c4:
    // 0x1ee0c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ee0c8:
    // 0x1ee0c8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1ee0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1ee0cc:
    // 0x1ee0cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ee0ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ee0d0:
    // 0x1ee0d0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ee0d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ee0d4:
    // 0x1ee0d4: 0x320f809  jalr        $t9
label_1ee0d8:
    if (ctx->pc == 0x1EE0D8u) {
        ctx->pc = 0x1EE0DCu;
        goto label_1ee0dc;
    }
    ctx->pc = 0x1EE0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EE0DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EE0DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EE0DCu; }
            if (ctx->pc != 0x1EE0DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1EE0DCu;
label_1ee0dc:
    // 0x1ee0dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee0e0:
    // 0x1ee0e0: 0x3e00008  jr          $ra
label_1ee0e4:
    if (ctx->pc == 0x1EE0E4u) {
        ctx->pc = 0x1EE0E4u;
            // 0x1ee0e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EE0E8u;
        goto label_1ee0e8;
    }
    ctx->pc = 0x1EE0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE0E0u;
            // 0x1ee0e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE0E8u;
label_1ee0e8:
    // 0x1ee0e8: 0x0  nop
    ctx->pc = 0x1ee0e8u;
    // NOP
label_1ee0ec:
    // 0x1ee0ec: 0x0  nop
    ctx->pc = 0x1ee0ecu;
    // NOP
label_1ee0f0:
    // 0x1ee0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ee0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ee0f4:
    // 0x1ee0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ee0f8:
    // 0x1ee0f8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1ee0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1ee0fc:
    // 0x1ee0fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ee0fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ee100:
    // 0x1ee100: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1ee100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1ee104:
    // 0x1ee104: 0x320f809  jalr        $t9
label_1ee108:
    if (ctx->pc == 0x1EE108u) {
        ctx->pc = 0x1EE10Cu;
        goto label_1ee10c;
    }
    ctx->pc = 0x1EE104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EE10Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EE10Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EE10Cu; }
            if (ctx->pc != 0x1EE10Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1EE10Cu;
label_1ee10c:
    // 0x1ee10c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee110:
    // 0x1ee110: 0x3e00008  jr          $ra
label_1ee114:
    if (ctx->pc == 0x1EE114u) {
        ctx->pc = 0x1EE114u;
            // 0x1ee114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EE118u;
        goto label_1ee118;
    }
    ctx->pc = 0x1EE110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE110u;
            // 0x1ee114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE118u;
label_1ee118:
    // 0x1ee118: 0x0  nop
    ctx->pc = 0x1ee118u;
    // NOP
label_1ee11c:
    // 0x1ee11c: 0x0  nop
    ctx->pc = 0x1ee11cu;
    // NOP
label_1ee120:
    // 0x1ee120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ee120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ee124:
    // 0x1ee124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ee128:
    // 0x1ee128: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1ee128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1ee12c:
    // 0x1ee12c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ee12cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ee130:
    // 0x1ee130: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1ee130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1ee134:
    // 0x1ee134: 0x320f809  jalr        $t9
label_1ee138:
    if (ctx->pc == 0x1EE138u) {
        ctx->pc = 0x1EE13Cu;
        goto label_1ee13c;
    }
    ctx->pc = 0x1EE134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EE13Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EE13Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EE13Cu; }
            if (ctx->pc != 0x1EE13Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1EE13Cu;
label_1ee13c:
    // 0x1ee13c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee140:
    // 0x1ee140: 0x3e00008  jr          $ra
label_1ee144:
    if (ctx->pc == 0x1EE144u) {
        ctx->pc = 0x1EE144u;
            // 0x1ee144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EE148u;
        goto label_1ee148;
    }
    ctx->pc = 0x1EE140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE140u;
            // 0x1ee144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE148u;
label_1ee148:
    // 0x1ee148: 0x0  nop
    ctx->pc = 0x1ee148u;
    // NOP
label_1ee14c:
    // 0x1ee14c: 0x0  nop
    ctx->pc = 0x1ee14cu;
    // NOP
label_1ee150:
    // 0x1ee150: 0x3e00008  jr          $ra
label_1ee154:
    if (ctx->pc == 0x1EE154u) {
        ctx->pc = 0x1EE158u;
        goto label_1ee158;
    }
    ctx->pc = 0x1EE150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE158u;
label_1ee158:
    // 0x1ee158: 0x0  nop
    ctx->pc = 0x1ee158u;
    // NOP
label_1ee15c:
    // 0x1ee15c: 0x0  nop
    ctx->pc = 0x1ee15cu;
    // NOP
label_1ee160:
    // 0x1ee160: 0x27bdfb20  addiu       $sp, $sp, -0x4E0
    ctx->pc = 0x1ee160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966048));
label_1ee164:
    // 0x1ee164: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1ee164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1ee168:
    // 0x1ee168: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1ee168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1ee16c:
    // 0x1ee16c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1ee16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_1ee170:
    // 0x1ee170: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1ee170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1ee174:
    // 0x1ee174: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x1ee174u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1ee178:
    // 0x1ee178: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1ee178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1ee17c:
    // 0x1ee17c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1ee17cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1ee180:
    // 0x1ee180: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1ee180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1ee184:
    // 0x1ee184: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1ee184u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ee188:
    // 0x1ee188: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1ee188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1ee18c:
    // 0x1ee18c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1ee18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1ee190:
    // 0x1ee190: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ee190u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee194:
    // 0x1ee194: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ee194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1ee198:
    // 0x1ee198: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ee198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ee19c:
    // 0x1ee19c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ee19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1ee1a0:
    // 0x1ee1a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ee1a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ee1a4:
    // 0x1ee1a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ee1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ee1a8:
    // 0x1ee1a8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1ee1a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ee1ac:
    // 0x1ee1ac: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1ee1acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1ee1b0:
    // 0x1ee1b0: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x1ee1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1ee1b4:
    // 0x1ee1b4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1ee1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ee1b8:
    // 0x1ee1b8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1ee1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1ee1bc:
    // 0x1ee1bc: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
label_1ee1c0:
    if (ctx->pc == 0x1EE1C0u) {
        ctx->pc = 0x1EE1C0u;
            // 0x1ee1c0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1EE1C4u;
        goto label_1ee1c4;
    }
    ctx->pc = 0x1EE1BCu;
    {
        const bool branch_taken_0x1ee1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EE1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE1BCu;
            // 0x1ee1c0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1bc) {
            ctx->pc = 0x1EE250u;
            goto label_1ee250;
        }
    }
    ctx->pc = 0x1EE1C4u;
label_1ee1c4:
    // 0x1ee1c4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1ee1c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ee1c8:
    // 0x1ee1c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ee1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee1cc:
    // 0x1ee1cc: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x1ee1ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_1ee1d0:
    // 0x1ee1d0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1ee1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_1ee1d4:
    // 0x1ee1d4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1ee1d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ee1d8:
    // 0x1ee1d8: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
label_1ee1dc:
    if (ctx->pc == 0x1EE1DCu) {
        ctx->pc = 0x1EE1DCu;
            // 0x1ee1dc: 0x3aa03  sra         $s5, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 3), 8));
        ctx->pc = 0x1EE1E0u;
        goto label_1ee1e0;
    }
    ctx->pc = 0x1EE1D8u;
    {
        const bool branch_taken_0x1ee1d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE1D8u;
            // 0x1ee1dc: 0x3aa03  sra         $s5, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1d8) {
            ctx->pc = 0x1EE218u;
            goto label_1ee218;
        }
    }
    ctx->pc = 0x1EE1E0u;
label_1ee1e0:
    // 0x1ee1e0: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x1ee1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_1ee1e4:
    // 0x1ee1e4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1ee1e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1ee1e8:
    // 0x1ee1e8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1ee1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_1ee1ec:
    // 0x1ee1ec: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1ee1ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_1ee1f0:
    // 0x1ee1f0: 0x50550004  beql        $v0, $s5, . + 4 + (0x4 << 2)
label_1ee1f4:
    if (ctx->pc == 0x1EE1F4u) {
        ctx->pc = 0x1EE1F4u;
            // 0x1ee1f4: 0x92020008  lbu         $v0, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1EE1F8u;
        goto label_1ee1f8;
    }
    ctx->pc = 0x1EE1F0u;
    {
        const bool branch_taken_0x1ee1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x1ee1f0) {
            ctx->pc = 0x1EE1F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE1F0u;
            // 0x1ee1f4: 0x92020008  lbu         $v0, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE204u;
            goto label_1ee204;
        }
    }
    ctx->pc = 0x1EE1F8u;
label_1ee1f8:
    // 0x1ee1f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee1fc:
    // 0x1ee1fc: 0x10000050  b           . + 4 + (0x50 << 2)
label_1ee200:
    if (ctx->pc == 0x1EE200u) {
        ctx->pc = 0x1EE200u;
            // 0x1ee200: 0xa2820010  sb          $v0, 0x10($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1EE204u;
        goto label_1ee204;
    }
    ctx->pc = 0x1EE1FCu;
    {
        const bool branch_taken_0x1ee1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE1FCu;
            // 0x1ee200: 0xa2820010  sb          $v0, 0x10($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee1fc) {
            ctx->pc = 0x1EE340u;
            goto label_1ee340;
        }
    }
    ctx->pc = 0x1EE204u;
label_1ee204:
    // 0x1ee204: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ee204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ee208:
    // 0x1ee208: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1ee208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ee20c:
    // 0x1ee20c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1ee210:
    if (ctx->pc == 0x1EE210u) {
        ctx->pc = 0x1EE210u;
            // 0x1ee210: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x1EE214u;
        goto label_1ee214;
    }
    ctx->pc = 0x1EE20Cu;
    {
        const bool branch_taken_0x1ee20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE20Cu;
            // 0x1ee210: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee20c) {
            ctx->pc = 0x1EE1E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ee1e4;
        }
    }
    ctx->pc = 0x1EE214u;
label_1ee214:
    // 0x1ee214: 0x0  nop
    ctx->pc = 0x1ee214u;
    // NOP
label_1ee218:
    // 0x1ee218: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ee218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ee21c:
    // 0x1ee21c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ee21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ee220:
    // 0x1ee220: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1ee220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1ee224:
    // 0x1ee224: 0x320f809  jalr        $t9
label_1ee228:
    if (ctx->pc == 0x1EE228u) {
        ctx->pc = 0x1EE228u;
            // 0x1ee228: 0x27a602c0  addiu       $a2, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = 0x1EE22Cu;
        goto label_1ee22c;
    }
    ctx->pc = 0x1EE224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EE22Cu);
        ctx->pc = 0x1EE228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE224u;
            // 0x1ee228: 0x27a602c0  addiu       $a2, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EE22Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EE22Cu; }
            if (ctx->pc != 0x1EE22Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1EE22Cu;
label_1ee22c:
    // 0x1ee22c: 0x27a304d0  addiu       $v1, $sp, 0x4D0
    ctx->pc = 0x1ee22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_1ee230:
    // 0x1ee230: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1ee234:
    if (ctx->pc == 0x1EE234u) {
        ctx->pc = 0x1EE234u;
            // 0x1ee234: 0xafa204d0  sw          $v0, 0x4D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 2));
        ctx->pc = 0x1EE238u;
        goto label_1ee238;
    }
    ctx->pc = 0x1EE230u;
    {
        const bool branch_taken_0x1ee230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee230) {
            ctx->pc = 0x1EE234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE230u;
            // 0x1ee234: 0xafa204d0  sw          $v0, 0x4D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE248u;
            goto label_1ee248;
        }
    }
    ctx->pc = 0x1EE238u;
label_1ee238:
    // 0x1ee238: 0xafb304dc  sw          $s3, 0x4DC($sp)
    ctx->pc = 0x1ee238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1244), GPR_U32(ctx, 19));
label_1ee23c:
    // 0x1ee23c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1ee23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1ee240:
    // 0x1ee240: 0xafa304d8  sw          $v1, 0x4D8($sp)
    ctx->pc = 0x1ee240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1240), GPR_U32(ctx, 3));
label_1ee244:
    // 0x1ee244: 0xafa204d0  sw          $v0, 0x4D0($sp)
    ctx->pc = 0x1ee244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 2));
label_1ee248:
    // 0x1ee248: 0x27b304d0  addiu       $s3, $sp, 0x4D0
    ctx->pc = 0x1ee248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_1ee24c:
    // 0x1ee24c: 0xafb504d4  sw          $s5, 0x4D4($sp)
    ctx->pc = 0x1ee24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1236), GPR_U32(ctx, 21));
label_1ee250:
    // 0x1ee250: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1ee250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ee254:
    // 0x1ee254: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1ee254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1ee258:
    // 0x1ee258: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1ee258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1ee25c:
    // 0x1ee25c: 0x5462002b  bnel        $v1, $v0, . + 4 + (0x2B << 2)
label_1ee260:
    if (ctx->pc == 0x1EE260u) {
        ctx->pc = 0x1EE260u;
            // 0x1ee260: 0x8fa204e0  lw          $v0, 0x4E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1248)));
        ctx->pc = 0x1EE264u;
        goto label_1ee264;
    }
    ctx->pc = 0x1EE25Cu;
    {
        const bool branch_taken_0x1ee25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee25c) {
            ctx->pc = 0x1EE260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE25Cu;
            // 0x1ee260: 0x8fa204e0  lw          $v0, 0x4E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1248)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE30Cu;
            goto label_1ee30c;
        }
    }
    ctx->pc = 0x1EE264u;
label_1ee264:
    // 0x1ee264: 0x92060008  lbu         $a2, 0x8($s0)
    ctx->pc = 0x1ee264u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_1ee268:
    // 0x1ee268: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x1ee268u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1ee26c:
    // 0x1ee26c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1ee26cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1ee270:
    // 0x1ee270: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1ee270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ee274:
    // 0x1ee274: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1ee274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_1ee278:
    // 0x1ee278: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1ee278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1ee27c:
    // 0x1ee27c: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x1ee27cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1ee280:
    // 0x1ee280: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1ee280u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ee284:
    // 0x1ee284: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x1ee284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
label_1ee288:
    // 0x1ee288: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1ee28c:
    if (ctx->pc == 0x1EE28Cu) {
        ctx->pc = 0x1EE28Cu;
            // 0x1ee28c: 0x5aa03  sra         $s5, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 5), 8));
        ctx->pc = 0x1EE290u;
        goto label_1ee290;
    }
    ctx->pc = 0x1EE288u;
    {
        const bool branch_taken_0x1ee288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE288u;
            // 0x1ee28c: 0x5aa03  sra         $s5, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee288) {
            ctx->pc = 0x1EE2D0u;
            goto label_1ee2d0;
        }
    }
    ctx->pc = 0x1EE290u;
label_1ee290:
    // 0x1ee290: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1ee290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ee294:
    // 0x1ee294: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x1ee294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1ee298:
    // 0x1ee298: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x1ee298u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_1ee29c:
    // 0x1ee29c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1ee29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_1ee2a0:
    // 0x1ee2a0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1ee2a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_1ee2a4:
    // 0x1ee2a4: 0x50750004  beql        $v1, $s5, . + 4 + (0x4 << 2)
label_1ee2a8:
    if (ctx->pc == 0x1EE2A8u) {
        ctx->pc = 0x1EE2A8u;
            // 0x1ee2a8: 0x92050008  lbu         $a1, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1EE2ACu;
        goto label_1ee2ac;
    }
    ctx->pc = 0x1EE2A4u;
    {
        const bool branch_taken_0x1ee2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x1ee2a4) {
            ctx->pc = 0x1EE2A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE2A4u;
            // 0x1ee2a8: 0x92050008  lbu         $a1, 0x8($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE2B8u;
            goto label_1ee2b8;
        }
    }
    ctx->pc = 0x1EE2ACu;
label_1ee2ac:
    // 0x1ee2ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee2b0:
    // 0x1ee2b0: 0x10000023  b           . + 4 + (0x23 << 2)
label_1ee2b4:
    if (ctx->pc == 0x1EE2B4u) {
        ctx->pc = 0x1EE2B4u;
            // 0x1ee2b4: 0xa2820010  sb          $v0, 0x10($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1EE2B8u;
        goto label_1ee2b8;
    }
    ctx->pc = 0x1EE2B0u;
    {
        const bool branch_taken_0x1ee2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE2B0u;
            // 0x1ee2b4: 0xa2820010  sb          $v0, 0x10($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2b0) {
            ctx->pc = 0x1EE340u;
            goto label_1ee340;
        }
    }
    ctx->pc = 0x1EE2B8u;
label_1ee2b8:
    // 0x1ee2b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ee2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ee2bc:
    // 0x1ee2bc: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x1ee2bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_1ee2c0:
    // 0x1ee2c0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1ee2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1ee2c4:
    // 0x1ee2c4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1ee2c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ee2c8:
    // 0x1ee2c8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_1ee2cc:
    if (ctx->pc == 0x1EE2CCu) {
        ctx->pc = 0x1EE2CCu;
            // 0x1ee2cc: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x1EE2D0u;
        goto label_1ee2d0;
    }
    ctx->pc = 0x1EE2C8u;
    {
        const bool branch_taken_0x1ee2c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE2C8u;
            // 0x1ee2cc: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2c8) {
            ctx->pc = 0x1EE298u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ee298;
        }
    }
    ctx->pc = 0x1EE2D0u;
label_1ee2d0:
    // 0x1ee2d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ee2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ee2d4:
    // 0x1ee2d4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ee2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ee2d8:
    // 0x1ee2d8: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1ee2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1ee2dc:
    // 0x1ee2dc: 0x320f809  jalr        $t9
label_1ee2e0:
    if (ctx->pc == 0x1EE2E0u) {
        ctx->pc = 0x1EE2E0u;
            // 0x1ee2e0: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1EE2E4u;
        goto label_1ee2e4;
    }
    ctx->pc = 0x1EE2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EE2E4u);
        ctx->pc = 0x1EE2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE2DCu;
            // 0x1ee2e0: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EE2E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EE2E4u; }
            if (ctx->pc != 0x1EE2E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1EE2E4u;
label_1ee2e4:
    // 0x1ee2e4: 0x27a304c0  addiu       $v1, $sp, 0x4C0
    ctx->pc = 0x1ee2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_1ee2e8:
    // 0x1ee2e8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1ee2ec:
    if (ctx->pc == 0x1EE2ECu) {
        ctx->pc = 0x1EE2ECu;
            // 0x1ee2ec: 0xafa204c0  sw          $v0, 0x4C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
        ctx->pc = 0x1EE2F0u;
        goto label_1ee2f0;
    }
    ctx->pc = 0x1EE2E8u;
    {
        const bool branch_taken_0x1ee2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee2e8) {
            ctx->pc = 0x1EE2ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE2E8u;
            // 0x1ee2ec: 0xafa204c0  sw          $v0, 0x4C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE300u;
            goto label_1ee300;
        }
    }
    ctx->pc = 0x1EE2F0u;
label_1ee2f0:
    // 0x1ee2f0: 0xafb204cc  sw          $s2, 0x4CC($sp)
    ctx->pc = 0x1ee2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1228), GPR_U32(ctx, 18));
label_1ee2f4:
    // 0x1ee2f4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1ee2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ee2f8:
    // 0x1ee2f8: 0xafa304c8  sw          $v1, 0x4C8($sp)
    ctx->pc = 0x1ee2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1224), GPR_U32(ctx, 3));
label_1ee2fc:
    // 0x1ee2fc: 0xafa204c0  sw          $v0, 0x4C0($sp)
    ctx->pc = 0x1ee2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
label_1ee300:
    // 0x1ee300: 0x27b204c0  addiu       $s2, $sp, 0x4C0
    ctx->pc = 0x1ee300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_1ee304:
    // 0x1ee304: 0xafb504c4  sw          $s5, 0x4C4($sp)
    ctx->pc = 0x1ee304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 21));
label_1ee308:
    // 0x1ee308: 0x8fa204e0  lw          $v0, 0x4E0($sp)
    ctx->pc = 0x1ee308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1248)));
label_1ee30c:
    // 0x1ee30c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ee30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ee310:
    // 0x1ee310: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ee310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ee314:
    // 0x1ee314: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ee314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee318:
    // 0x1ee318: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1ee318u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ee31c:
    // 0x1ee31c: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1ee31cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ee320:
    // 0x1ee320: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1ee320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1ee324:
    // 0x1ee324: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ee324u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1ee328:
    // 0x1ee328: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1ee328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1ee32c:
    // 0x1ee32c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1ee32cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ee330:
    // 0x1ee330: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ee330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ee334:
    // 0x1ee334: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1ee334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1ee338:
    // 0x1ee338: 0x320f809  jalr        $t9
label_1ee33c:
    if (ctx->pc == 0x1EE33Cu) {
        ctx->pc = 0x1EE33Cu;
            // 0x1ee33c: 0x3c0582d  daddu       $t3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE340u;
        goto label_1ee340;
    }
    ctx->pc = 0x1EE338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EE340u);
        ctx->pc = 0x1EE33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE338u;
            // 0x1ee33c: 0x3c0582d  daddu       $t3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EE340u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EE340u; }
            if (ctx->pc != 0x1EE340u) { return; }
        }
        }
    }
    ctx->pc = 0x1EE340u;
label_1ee340:
    // 0x1ee340: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1ee340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1ee344:
    // 0x1ee344: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1ee344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ee348:
    // 0x1ee348: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1ee348u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1ee34c:
    // 0x1ee34c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1ee34cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1ee350:
    // 0x1ee350: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1ee350u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ee354:
    // 0x1ee354: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1ee354u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ee358:
    // 0x1ee358: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1ee358u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ee35c:
    // 0x1ee35c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1ee35cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ee360:
    // 0x1ee360: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ee360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ee364:
    // 0x1ee364: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ee364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ee368:
    // 0x1ee368: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ee368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee36c:
    // 0x1ee36c: 0x3e00008  jr          $ra
label_1ee370:
    if (ctx->pc == 0x1EE370u) {
        ctx->pc = 0x1EE370u;
            // 0x1ee370: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->pc = 0x1EE374u;
        goto label_1ee374;
    }
    ctx->pc = 0x1EE36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE36Cu;
            // 0x1ee370: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE374u;
label_1ee374:
    // 0x1ee374: 0x0  nop
    ctx->pc = 0x1ee374u;
    // NOP
label_1ee378:
    // 0x1ee378: 0x0  nop
    ctx->pc = 0x1ee378u;
    // NOP
label_1ee37c:
    // 0x1ee37c: 0x0  nop
    ctx->pc = 0x1ee37cu;
    // NOP
label_1ee380:
    // 0x1ee380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ee380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ee384:
    // 0x1ee384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ee388:
    // 0x1ee388: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1ee388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1ee38c:
    // 0x1ee38c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ee38cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ee390:
    // 0x1ee390: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1ee390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1ee394:
    // 0x1ee394: 0x320f809  jalr        $t9
label_1ee398:
    if (ctx->pc == 0x1EE398u) {
        ctx->pc = 0x1EE39Cu;
        goto label_1ee39c;
    }
    ctx->pc = 0x1EE394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EE39Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EE39Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EE39Cu; }
            if (ctx->pc != 0x1EE39Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1EE39Cu;
label_1ee39c:
    // 0x1ee39c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee3a0:
    // 0x1ee3a0: 0x3e00008  jr          $ra
label_1ee3a4:
    if (ctx->pc == 0x1EE3A4u) {
        ctx->pc = 0x1EE3A4u;
            // 0x1ee3a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EE3A8u;
        goto label_1ee3a8;
    }
    ctx->pc = 0x1EE3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE3A0u;
            // 0x1ee3a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE3A8u;
label_1ee3a8:
    // 0x1ee3a8: 0x0  nop
    ctx->pc = 0x1ee3a8u;
    // NOP
label_1ee3ac:
    // 0x1ee3ac: 0x0  nop
    ctx->pc = 0x1ee3acu;
    // NOP
label_1ee3b0:
    // 0x1ee3b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ee3b4:
    // 0x1ee3b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ee3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ee3b8:
    // 0x1ee3b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ee3bc:
    // 0x1ee3bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ee3c0:
    // 0x1ee3c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ee3c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee3c4:
    // 0x1ee3c4: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
label_1ee3c8:
    if (ctx->pc == 0x1EE3C8u) {
        ctx->pc = 0x1EE3C8u;
            // 0x1ee3c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE3CCu;
        goto label_1ee3cc;
    }
    ctx->pc = 0x1EE3C4u;
    {
        const bool branch_taken_0x1ee3c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE3C4u;
            // 0x1ee3c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3c4) {
            ctx->pc = 0x1EE488u;
            goto label_1ee488;
        }
    }
    ctx->pc = 0x1EE3CCu;
label_1ee3cc:
    // 0x1ee3cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ee3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ee3d0:
    // 0x1ee3d0: 0x2442d8a0  addiu       $v0, $v0, -0x2760
    ctx->pc = 0x1ee3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957216));
label_1ee3d4:
    // 0x1ee3d4: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_1ee3d8:
    if (ctx->pc == 0x1EE3D8u) {
        ctx->pc = 0x1EE3D8u;
            // 0x1ee3d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EE3DCu;
        goto label_1ee3dc;
    }
    ctx->pc = 0x1EE3D4u;
    {
        const bool branch_taken_0x1ee3d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE3D4u;
            // 0x1ee3d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3d4) {
            ctx->pc = 0x1EE460u;
            goto label_1ee460;
        }
    }
    ctx->pc = 0x1EE3DCu;
label_1ee3dc:
    // 0x1ee3dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ee3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ee3e0:
    // 0x1ee3e0: 0x2442d8e0  addiu       $v0, $v0, -0x2720
    ctx->pc = 0x1ee3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957280));
label_1ee3e4:
    // 0x1ee3e4: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_1ee3e8:
    if (ctx->pc == 0x1EE3E8u) {
        ctx->pc = 0x1EE3E8u;
            // 0x1ee3e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EE3ECu;
        goto label_1ee3ec;
    }
    ctx->pc = 0x1EE3E4u;
    {
        const bool branch_taken_0x1ee3e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE3E4u;
            // 0x1ee3e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3e4) {
            ctx->pc = 0x1EE460u;
            goto label_1ee460;
        }
    }
    ctx->pc = 0x1EE3ECu;
label_1ee3ec:
    // 0x1ee3ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ee3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ee3f0:
    // 0x1ee3f0: 0x2442d860  addiu       $v0, $v0, -0x27A0
    ctx->pc = 0x1ee3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957152));
label_1ee3f4:
    // 0x1ee3f4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_1ee3f8:
    if (ctx->pc == 0x1EE3F8u) {
        ctx->pc = 0x1EE3F8u;
            // 0x1ee3f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EE3FCu;
        goto label_1ee3fc;
    }
    ctx->pc = 0x1EE3F4u;
    {
        const bool branch_taken_0x1ee3f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE3F4u;
            // 0x1ee3f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee3f4) {
            ctx->pc = 0x1EE460u;
            goto label_1ee460;
        }
    }
    ctx->pc = 0x1EE3FCu;
label_1ee3fc:
    // 0x1ee3fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ee3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ee400:
    // 0x1ee400: 0x2442d9a0  addiu       $v0, $v0, -0x2660
    ctx->pc = 0x1ee400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957472));
label_1ee404:
    // 0x1ee404: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_1ee408:
    if (ctx->pc == 0x1EE408u) {
        ctx->pc = 0x1EE408u;
            // 0x1ee408: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EE40Cu;
        goto label_1ee40c;
    }
    ctx->pc = 0x1EE404u;
    {
        const bool branch_taken_0x1ee404 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE404u;
            // 0x1ee408: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee404) {
            ctx->pc = 0x1EE460u;
            goto label_1ee460;
        }
    }
    ctx->pc = 0x1EE40Cu;
label_1ee40c:
    // 0x1ee40c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ee40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ee410:
    // 0x1ee410: 0x2442d960  addiu       $v0, $v0, -0x26A0
    ctx->pc = 0x1ee410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957408));
label_1ee414:
    // 0x1ee414: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_1ee418:
    if (ctx->pc == 0x1EE418u) {
        ctx->pc = 0x1EE418u;
            // 0x1ee418: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EE41Cu;
        goto label_1ee41c;
    }
    ctx->pc = 0x1EE414u;
    {
        const bool branch_taken_0x1ee414 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE414u;
            // 0x1ee418: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee414) {
            ctx->pc = 0x1EE460u;
            goto label_1ee460;
        }
    }
    ctx->pc = 0x1EE41Cu;
label_1ee41c:
    // 0x1ee41c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ee41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ee420:
    // 0x1ee420: 0x2442d920  addiu       $v0, $v0, -0x26E0
    ctx->pc = 0x1ee420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957344));
label_1ee424:
    // 0x1ee424: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_1ee428:
    if (ctx->pc == 0x1EE428u) {
        ctx->pc = 0x1EE428u;
            // 0x1ee428: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EE42Cu;
        goto label_1ee42c;
    }
    ctx->pc = 0x1EE424u;
    {
        const bool branch_taken_0x1ee424 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE424u;
            // 0x1ee428: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee424) {
            ctx->pc = 0x1EE460u;
            goto label_1ee460;
        }
    }
    ctx->pc = 0x1EE42Cu;
label_1ee42c:
    // 0x1ee42c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ee42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ee430:
    // 0x1ee430: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x1ee430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_1ee434:
    // 0x1ee434: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_1ee438:
    if (ctx->pc == 0x1EE438u) {
        ctx->pc = 0x1EE438u;
            // 0x1ee438: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EE43Cu;
        goto label_1ee43c;
    }
    ctx->pc = 0x1EE434u;
    {
        const bool branch_taken_0x1ee434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE434u;
            // 0x1ee438: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee434) {
            ctx->pc = 0x1EE460u;
            goto label_1ee460;
        }
    }
    ctx->pc = 0x1EE43Cu;
label_1ee43c:
    // 0x1ee43c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ee43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ee440:
    // 0x1ee440: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1ee440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1ee444:
    // 0x1ee444: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1ee448:
    if (ctx->pc == 0x1EE448u) {
        ctx->pc = 0x1EE448u;
            // 0x1ee448: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EE44Cu;
        goto label_1ee44c;
    }
    ctx->pc = 0x1EE444u;
    {
        const bool branch_taken_0x1ee444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE444u;
            // 0x1ee448: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee444) {
            ctx->pc = 0x1EE460u;
            goto label_1ee460;
        }
    }
    ctx->pc = 0x1EE44Cu;
label_1ee44c:
    // 0x1ee44c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ee44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ee450:
    // 0x1ee450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ee450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee454:
    // 0x1ee454: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1ee454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1ee458:
    // 0x1ee458: 0xc078c1c  jal         func_1E3070
label_1ee45c:
    if (ctx->pc == 0x1EE45Cu) {
        ctx->pc = 0x1EE45Cu;
            // 0x1ee45c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EE460u;
        goto label_1ee460;
    }
    ctx->pc = 0x1EE458u;
    SET_GPR_U32(ctx, 31, 0x1EE460u);
    ctx->pc = 0x1EE45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE458u;
            // 0x1ee45c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3070u;
    if (runtime->hasFunction(0x1E3070u)) {
        auto targetFn = runtime->lookupFunction(0x1E3070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE460u; }
        if (ctx->pc != 0x1EE460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3070_0x1e3070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE460u; }
        if (ctx->pc != 0x1EE460u) { return; }
    }
    ctx->pc = 0x1EE460u;
label_1ee460:
    // 0x1ee460: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1ee460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1ee464:
    // 0x1ee464: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ee464u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1ee468:
    // 0x1ee468: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_1ee46c:
    if (ctx->pc == 0x1EE46Cu) {
        ctx->pc = 0x1EE46Cu;
            // 0x1ee46c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE470u;
        goto label_1ee470;
    }
    ctx->pc = 0x1EE468u;
    {
        const bool branch_taken_0x1ee468 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ee468) {
            ctx->pc = 0x1EE46Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE468u;
            // 0x1ee46c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE48Cu;
            goto label_1ee48c;
        }
    }
    ctx->pc = 0x1EE470u;
label_1ee470:
    // 0x1ee470: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ee470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ee474:
    // 0x1ee474: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1ee474u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_1ee478:
    // 0x1ee478: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ee478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ee47c:
    // 0x1ee47c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ee47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee480:
    // 0x1ee480: 0xc0a7ab4  jal         func_29EAD0
label_1ee484:
    if (ctx->pc == 0x1EE484u) {
        ctx->pc = 0x1EE484u;
            // 0x1ee484: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EE488u;
        goto label_1ee488;
    }
    ctx->pc = 0x1EE480u;
    SET_GPR_U32(ctx, 31, 0x1EE488u);
    ctx->pc = 0x1EE484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE480u;
            // 0x1ee484: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE488u; }
        if (ctx->pc != 0x1EE488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE488u; }
        if (ctx->pc != 0x1EE488u) { return; }
    }
    ctx->pc = 0x1EE488u;
label_1ee488:
    // 0x1ee488: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ee488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ee48c:
    // 0x1ee48c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ee48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee490:
    // 0x1ee490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee494:
    // 0x1ee494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee498:
    // 0x1ee498: 0x3e00008  jr          $ra
label_1ee49c:
    if (ctx->pc == 0x1EE49Cu) {
        ctx->pc = 0x1EE49Cu;
            // 0x1ee49c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1EE4A0u;
        goto label_1ee4a0;
    }
    ctx->pc = 0x1EE498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE498u;
            // 0x1ee49c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE4A0u;
label_1ee4a0:
    // 0x1ee4a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ee4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ee4a4:
    // 0x1ee4a4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ee4a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ee4a8:
    // 0x1ee4a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ee4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ee4ac:
    // 0x1ee4ac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ee4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ee4b0:
    // 0x1ee4b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ee4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1ee4b4:
    // 0x1ee4b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ee4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee4b8:
    // 0x1ee4b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ee4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ee4bc:
    // 0x1ee4bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ee4bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ee4c0:
    // 0x1ee4c0: 0x8d110000  lw          $s1, 0x0($t0)
    ctx->pc = 0x1ee4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1ee4c4:
    // 0x1ee4c4: 0xc5143030  lwc1        $f20, 0x3030($t0)
    ctx->pc = 0x1ee4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ee4c8:
    // 0x1ee4c8: 0xc07b4c4  jal         func_1ED310
label_1ee4cc:
    if (ctx->pc == 0x1EE4CCu) {
        ctx->pc = 0x1EE4CCu;
            // 0x1ee4cc: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE4D0u;
        goto label_1ee4d0;
    }
    ctx->pc = 0x1EE4C8u;
    SET_GPR_U32(ctx, 31, 0x1EE4D0u);
    ctx->pc = 0x1EE4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE4C8u;
            // 0x1ee4cc: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED310u;
    goto label_1ed310;
    ctx->pc = 0x1EE4D0u;
label_1ee4d0:
    // 0x1ee4d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ee4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ee4d4:
    // 0x1ee4d4: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x1ee4d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1ee4d8:
    // 0x1ee4d8: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_1ee4dc:
    if (ctx->pc == 0x1EE4DCu) {
        ctx->pc = 0x1EE4E0u;
        goto label_1ee4e0;
    }
    ctx->pc = 0x1EE4D8u;
    {
        const bool branch_taken_0x1ee4d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4d8) {
            ctx->pc = 0x1EE578u;
            goto label_1ee578;
        }
    }
    ctx->pc = 0x1EE4E0u;
label_1ee4e0:
    // 0x1ee4e0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1ee4e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ee4e4:
    // 0x1ee4e4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1ee4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee4e8:
    // 0x1ee4e8: 0xc623001c  lwc1        $f3, 0x1C($s1)
    ctx->pc = 0x1ee4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ee4ec:
    // 0x1ee4ec: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1ee4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee4f0:
    // 0x1ee4f0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1ee4f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1ee4f4:
    // 0x1ee4f4: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1ee4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1ee4f8:
    // 0x1ee4f8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1ee4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1ee4fc:
    // 0x1ee4fc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1ee4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee500:
    // 0x1ee500: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1ee500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee504:
    // 0x1ee504: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1ee504u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1ee508:
    // 0x1ee508: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1ee508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1ee50c:
    // 0x1ee50c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1ee50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1ee510:
    // 0x1ee510: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1ee510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee514:
    // 0x1ee514: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1ee514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee518:
    // 0x1ee518: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1ee518u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1ee51c:
    // 0x1ee51c: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1ee51cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1ee520:
    // 0x1ee520: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1ee520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1ee524:
    // 0x1ee524: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1ee524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee528:
    // 0x1ee528: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1ee528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ee52c:
    // 0x1ee52c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1ee52cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1ee530:
    // 0x1ee530: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1ee530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1ee534:
    // 0x1ee534: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1ee534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1ee538:
    // 0x1ee538: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1ee538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee53c:
    // 0x1ee53c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ee53cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1ee540:
    // 0x1ee540: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1ee540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1ee544:
    // 0x1ee544: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1ee544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee548:
    // 0x1ee548: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ee548u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1ee54c:
    // 0x1ee54c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1ee54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1ee550:
    // 0x1ee550: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1ee550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee554:
    // 0x1ee554: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ee554u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1ee558:
    // 0x1ee558: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1ee558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1ee55c:
    // 0x1ee55c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x1ee55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee560:
    // 0x1ee560: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1ee560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1ee564:
    // 0x1ee564: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ee564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ee568:
    // 0x1ee568: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1ee568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1ee56c:
    // 0x1ee56c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1ee56cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1ee570:
    // 0x1ee570: 0x5460ffdd  bnel        $v1, $zero, . + 4 + (-0x23 << 2)
label_1ee574:
    if (ctx->pc == 0x1EE574u) {
        ctx->pc = 0x1EE574u;
            // 0x1ee574: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1EE578u;
        goto label_1ee578;
    }
    ctx->pc = 0x1EE570u;
    {
        const bool branch_taken_0x1ee570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee570) {
            ctx->pc = 0x1EE574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE570u;
            // 0x1ee574: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE4E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ee4e8;
        }
    }
    ctx->pc = 0x1EE578u;
label_1ee578:
    // 0x1ee578: 0xc6003030  lwc1        $f0, 0x3030($s0)
    ctx->pc = 0x1ee578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee57c:
    // 0x1ee57c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1ee57cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ee580:
    // 0x1ee580: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
label_1ee584:
    if (ctx->pc == 0x1EE584u) {
        ctx->pc = 0x1EE584u;
            // 0x1ee584: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1EE588u;
        goto label_1ee588;
    }
    ctx->pc = 0x1EE580u;
    {
        const bool branch_taken_0x1ee580 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ee580) {
            ctx->pc = 0x1EE584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE580u;
            // 0x1ee584: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EE628u;
            goto label_1ee628;
        }
    }
    ctx->pc = 0x1EE588u;
label_1ee588:
    // 0x1ee588: 0xc6003020  lwc1        $f0, 0x3020($s0)
    ctx->pc = 0x1ee588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee58c:
    // 0x1ee58c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ee590:
    // 0x1ee590: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ee590u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1ee594:
    // 0x1ee594: 0xe6003020  swc1        $f0, 0x3020($s0)
    ctx->pc = 0x1ee594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12320), bits); }
label_1ee598:
    // 0x1ee598: 0xc6003024  lwc1        $f0, 0x3024($s0)
    ctx->pc = 0x1ee598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee59c:
    // 0x1ee59c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ee59cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1ee5a0:
    // 0x1ee5a0: 0xe6003024  swc1        $f0, 0x3024($s0)
    ctx->pc = 0x1ee5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12324), bits); }
label_1ee5a4:
    // 0x1ee5a4: 0xc6003028  lwc1        $f0, 0x3028($s0)
    ctx->pc = 0x1ee5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee5a8:
    // 0x1ee5a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ee5a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1ee5ac:
    // 0x1ee5ac: 0xe6003028  swc1        $f0, 0x3028($s0)
    ctx->pc = 0x1ee5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12328), bits); }
label_1ee5b0:
    // 0x1ee5b0: 0xc600302c  lwc1        $f0, 0x302C($s0)
    ctx->pc = 0x1ee5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ee5b4:
    // 0x1ee5b4: 0xe600302c  swc1        $f0, 0x302C($s0)
    ctx->pc = 0x1ee5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12332), bits); }
label_1ee5b8:
    // 0x1ee5b8: 0x92053042  lbu         $a1, 0x3042($s0)
    ctx->pc = 0x1ee5b8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12354)));
label_1ee5bc:
    // 0x1ee5bc: 0x92043043  lbu         $a0, 0x3043($s0)
    ctx->pc = 0x1ee5bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12355)));
label_1ee5c0:
    // 0x1ee5c0: 0xa2043042  sb          $a0, 0x3042($s0)
    ctx->pc = 0x1ee5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12354), (uint8_t)GPR_U32(ctx, 4));
label_1ee5c4:
    // 0x1ee5c4: 0xa2053043  sb          $a1, 0x3043($s0)
    ctx->pc = 0x1ee5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12355), (uint8_t)GPR_U32(ctx, 5));
label_1ee5c8:
    // 0x1ee5c8: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1ee5c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1ee5cc:
    // 0x1ee5cc: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1ee5ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1ee5d0:
    // 0x1ee5d0: 0xa2043040  sb          $a0, 0x3040($s0)
    ctx->pc = 0x1ee5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12352), (uint8_t)GPR_U32(ctx, 4));
label_1ee5d4:
    // 0x1ee5d4: 0xa2053041  sb          $a1, 0x3041($s0)
    ctx->pc = 0x1ee5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12353), (uint8_t)GPR_U32(ctx, 5));
label_1ee5d8:
    // 0x1ee5d8: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1ee5d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1ee5dc:
    // 0x1ee5dc: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1ee5dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1ee5e0:
    // 0x1ee5e0: 0x96063038  lhu         $a2, 0x3038($s0)
    ctx->pc = 0x1ee5e0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12344)));
label_1ee5e4:
    // 0x1ee5e4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1ee5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1ee5e8:
    // 0x1ee5e8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ee5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1ee5ec:
    // 0x1ee5ec: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1ee5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1ee5f0:
    // 0x1ee5f0: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1ee5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1ee5f4:
    // 0x1ee5f4: 0x94a43038  lhu         $a0, 0x3038($a1)
    ctx->pc = 0x1ee5f4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12344)));
label_1ee5f8:
    // 0x1ee5f8: 0xa6043038  sh          $a0, 0x3038($s0)
    ctx->pc = 0x1ee5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12344), (uint16_t)GPR_U32(ctx, 4));
label_1ee5fc:
    // 0x1ee5fc: 0xa4a63038  sh          $a2, 0x3038($a1)
    ctx->pc = 0x1ee5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12344), (uint16_t)GPR_U32(ctx, 6));
label_1ee600:
    // 0x1ee600: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1ee600u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1ee604:
    // 0x1ee604: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1ee604u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1ee608:
    // 0x1ee608: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1ee608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1ee60c:
    // 0x1ee60c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1ee610:
    if (ctx->pc == 0x1EE610u) {
        ctx->pc = 0x1EE614u;
        goto label_1ee614;
    }
    ctx->pc = 0x1EE60Cu;
    {
        const bool branch_taken_0x1ee60c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ee60c) {
            ctx->pc = 0x1EE624u;
            goto label_1ee624;
        }
    }
    ctx->pc = 0x1EE614u;
label_1ee614:
    // 0x1ee614: 0x9604303a  lhu         $a0, 0x303A($s0)
    ctx->pc = 0x1ee614u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12346)));
label_1ee618:
    // 0x1ee618: 0x9603303c  lhu         $v1, 0x303C($s0)
    ctx->pc = 0x1ee618u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12348)));
label_1ee61c:
    // 0x1ee61c: 0xa603303a  sh          $v1, 0x303A($s0)
    ctx->pc = 0x1ee61cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12346), (uint16_t)GPR_U32(ctx, 3));
label_1ee620:
    // 0x1ee620: 0xa604303c  sh          $a0, 0x303C($s0)
    ctx->pc = 0x1ee620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12348), (uint16_t)GPR_U32(ctx, 4));
label_1ee624:
    // 0x1ee624: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ee624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ee628:
    // 0x1ee628: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ee628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ee62c:
    // 0x1ee62c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ee62cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee630:
    // 0x1ee630: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ee630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee634:
    // 0x1ee634: 0x3e00008  jr          $ra
label_1ee638:
    if (ctx->pc == 0x1EE638u) {
        ctx->pc = 0x1EE638u;
            // 0x1ee638: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1EE63Cu;
        goto label_1ee63c;
    }
    ctx->pc = 0x1EE634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE634u;
            // 0x1ee638: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE63Cu;
label_1ee63c:
    // 0x1ee63c: 0x0  nop
    ctx->pc = 0x1ee63cu;
    // NOP
label_1ee640:
    // 0x1ee640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ee640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ee644:
    // 0x1ee644: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ee644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ee648:
    // 0x1ee648: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ee648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ee64c:
    // 0x1ee64c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ee650:
    // 0x1ee650: 0xc07b264  jal         func_1EC990
label_1ee654:
    if (ctx->pc == 0x1EE654u) {
        ctx->pc = 0x1EE654u;
            // 0x1ee654: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EE658u;
        goto label_1ee658;
    }
    ctx->pc = 0x1EE650u;
    SET_GPR_U32(ctx, 31, 0x1EE658u);
    ctx->pc = 0x1EE654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE650u;
            // 0x1ee654: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC990u;
    if (runtime->hasFunction(0x1EC990u)) {
        auto targetFn = runtime->lookupFunction(0x1EC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE658u; }
        if (ctx->pc != 0x1EE658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC990_0x1ec990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE658u; }
        if (ctx->pc != 0x1EE658u) { return; }
    }
    ctx->pc = 0x1EE658u;
label_1ee658:
    // 0x1ee658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee65c:
    // 0x1ee65c: 0x3e00008  jr          $ra
label_1ee660:
    if (ctx->pc == 0x1EE660u) {
        ctx->pc = 0x1EE660u;
            // 0x1ee660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EE664u;
        goto label_1ee664;
    }
    ctx->pc = 0x1EE65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE65Cu;
            // 0x1ee660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE664u;
label_1ee664:
    // 0x1ee664: 0x0  nop
    ctx->pc = 0x1ee664u;
    // NOP
label_1ee668:
    // 0x1ee668: 0x0  nop
    ctx->pc = 0x1ee668u;
    // NOP
label_1ee66c:
    // 0x1ee66c: 0x0  nop
    ctx->pc = 0x1ee66cu;
    // NOP
}
