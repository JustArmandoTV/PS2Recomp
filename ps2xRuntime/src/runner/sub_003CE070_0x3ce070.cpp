#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CE070
// Address: 0x3ce070 - 0x3ce8c0
void sub_003CE070_0x3ce070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CE070_0x3ce070");
#endif

    switch (ctx->pc) {
        case 0x3ce070u: goto label_3ce070;
        case 0x3ce074u: goto label_3ce074;
        case 0x3ce078u: goto label_3ce078;
        case 0x3ce07cu: goto label_3ce07c;
        case 0x3ce080u: goto label_3ce080;
        case 0x3ce084u: goto label_3ce084;
        case 0x3ce088u: goto label_3ce088;
        case 0x3ce08cu: goto label_3ce08c;
        case 0x3ce090u: goto label_3ce090;
        case 0x3ce094u: goto label_3ce094;
        case 0x3ce098u: goto label_3ce098;
        case 0x3ce09cu: goto label_3ce09c;
        case 0x3ce0a0u: goto label_3ce0a0;
        case 0x3ce0a4u: goto label_3ce0a4;
        case 0x3ce0a8u: goto label_3ce0a8;
        case 0x3ce0acu: goto label_3ce0ac;
        case 0x3ce0b0u: goto label_3ce0b0;
        case 0x3ce0b4u: goto label_3ce0b4;
        case 0x3ce0b8u: goto label_3ce0b8;
        case 0x3ce0bcu: goto label_3ce0bc;
        case 0x3ce0c0u: goto label_3ce0c0;
        case 0x3ce0c4u: goto label_3ce0c4;
        case 0x3ce0c8u: goto label_3ce0c8;
        case 0x3ce0ccu: goto label_3ce0cc;
        case 0x3ce0d0u: goto label_3ce0d0;
        case 0x3ce0d4u: goto label_3ce0d4;
        case 0x3ce0d8u: goto label_3ce0d8;
        case 0x3ce0dcu: goto label_3ce0dc;
        case 0x3ce0e0u: goto label_3ce0e0;
        case 0x3ce0e4u: goto label_3ce0e4;
        case 0x3ce0e8u: goto label_3ce0e8;
        case 0x3ce0ecu: goto label_3ce0ec;
        case 0x3ce0f0u: goto label_3ce0f0;
        case 0x3ce0f4u: goto label_3ce0f4;
        case 0x3ce0f8u: goto label_3ce0f8;
        case 0x3ce0fcu: goto label_3ce0fc;
        case 0x3ce100u: goto label_3ce100;
        case 0x3ce104u: goto label_3ce104;
        case 0x3ce108u: goto label_3ce108;
        case 0x3ce10cu: goto label_3ce10c;
        case 0x3ce110u: goto label_3ce110;
        case 0x3ce114u: goto label_3ce114;
        case 0x3ce118u: goto label_3ce118;
        case 0x3ce11cu: goto label_3ce11c;
        case 0x3ce120u: goto label_3ce120;
        case 0x3ce124u: goto label_3ce124;
        case 0x3ce128u: goto label_3ce128;
        case 0x3ce12cu: goto label_3ce12c;
        case 0x3ce130u: goto label_3ce130;
        case 0x3ce134u: goto label_3ce134;
        case 0x3ce138u: goto label_3ce138;
        case 0x3ce13cu: goto label_3ce13c;
        case 0x3ce140u: goto label_3ce140;
        case 0x3ce144u: goto label_3ce144;
        case 0x3ce148u: goto label_3ce148;
        case 0x3ce14cu: goto label_3ce14c;
        case 0x3ce150u: goto label_3ce150;
        case 0x3ce154u: goto label_3ce154;
        case 0x3ce158u: goto label_3ce158;
        case 0x3ce15cu: goto label_3ce15c;
        case 0x3ce160u: goto label_3ce160;
        case 0x3ce164u: goto label_3ce164;
        case 0x3ce168u: goto label_3ce168;
        case 0x3ce16cu: goto label_3ce16c;
        case 0x3ce170u: goto label_3ce170;
        case 0x3ce174u: goto label_3ce174;
        case 0x3ce178u: goto label_3ce178;
        case 0x3ce17cu: goto label_3ce17c;
        case 0x3ce180u: goto label_3ce180;
        case 0x3ce184u: goto label_3ce184;
        case 0x3ce188u: goto label_3ce188;
        case 0x3ce18cu: goto label_3ce18c;
        case 0x3ce190u: goto label_3ce190;
        case 0x3ce194u: goto label_3ce194;
        case 0x3ce198u: goto label_3ce198;
        case 0x3ce19cu: goto label_3ce19c;
        case 0x3ce1a0u: goto label_3ce1a0;
        case 0x3ce1a4u: goto label_3ce1a4;
        case 0x3ce1a8u: goto label_3ce1a8;
        case 0x3ce1acu: goto label_3ce1ac;
        case 0x3ce1b0u: goto label_3ce1b0;
        case 0x3ce1b4u: goto label_3ce1b4;
        case 0x3ce1b8u: goto label_3ce1b8;
        case 0x3ce1bcu: goto label_3ce1bc;
        case 0x3ce1c0u: goto label_3ce1c0;
        case 0x3ce1c4u: goto label_3ce1c4;
        case 0x3ce1c8u: goto label_3ce1c8;
        case 0x3ce1ccu: goto label_3ce1cc;
        case 0x3ce1d0u: goto label_3ce1d0;
        case 0x3ce1d4u: goto label_3ce1d4;
        case 0x3ce1d8u: goto label_3ce1d8;
        case 0x3ce1dcu: goto label_3ce1dc;
        case 0x3ce1e0u: goto label_3ce1e0;
        case 0x3ce1e4u: goto label_3ce1e4;
        case 0x3ce1e8u: goto label_3ce1e8;
        case 0x3ce1ecu: goto label_3ce1ec;
        case 0x3ce1f0u: goto label_3ce1f0;
        case 0x3ce1f4u: goto label_3ce1f4;
        case 0x3ce1f8u: goto label_3ce1f8;
        case 0x3ce1fcu: goto label_3ce1fc;
        case 0x3ce200u: goto label_3ce200;
        case 0x3ce204u: goto label_3ce204;
        case 0x3ce208u: goto label_3ce208;
        case 0x3ce20cu: goto label_3ce20c;
        case 0x3ce210u: goto label_3ce210;
        case 0x3ce214u: goto label_3ce214;
        case 0x3ce218u: goto label_3ce218;
        case 0x3ce21cu: goto label_3ce21c;
        case 0x3ce220u: goto label_3ce220;
        case 0x3ce224u: goto label_3ce224;
        case 0x3ce228u: goto label_3ce228;
        case 0x3ce22cu: goto label_3ce22c;
        case 0x3ce230u: goto label_3ce230;
        case 0x3ce234u: goto label_3ce234;
        case 0x3ce238u: goto label_3ce238;
        case 0x3ce23cu: goto label_3ce23c;
        case 0x3ce240u: goto label_3ce240;
        case 0x3ce244u: goto label_3ce244;
        case 0x3ce248u: goto label_3ce248;
        case 0x3ce24cu: goto label_3ce24c;
        case 0x3ce250u: goto label_3ce250;
        case 0x3ce254u: goto label_3ce254;
        case 0x3ce258u: goto label_3ce258;
        case 0x3ce25cu: goto label_3ce25c;
        case 0x3ce260u: goto label_3ce260;
        case 0x3ce264u: goto label_3ce264;
        case 0x3ce268u: goto label_3ce268;
        case 0x3ce26cu: goto label_3ce26c;
        case 0x3ce270u: goto label_3ce270;
        case 0x3ce274u: goto label_3ce274;
        case 0x3ce278u: goto label_3ce278;
        case 0x3ce27cu: goto label_3ce27c;
        case 0x3ce280u: goto label_3ce280;
        case 0x3ce284u: goto label_3ce284;
        case 0x3ce288u: goto label_3ce288;
        case 0x3ce28cu: goto label_3ce28c;
        case 0x3ce290u: goto label_3ce290;
        case 0x3ce294u: goto label_3ce294;
        case 0x3ce298u: goto label_3ce298;
        case 0x3ce29cu: goto label_3ce29c;
        case 0x3ce2a0u: goto label_3ce2a0;
        case 0x3ce2a4u: goto label_3ce2a4;
        case 0x3ce2a8u: goto label_3ce2a8;
        case 0x3ce2acu: goto label_3ce2ac;
        case 0x3ce2b0u: goto label_3ce2b0;
        case 0x3ce2b4u: goto label_3ce2b4;
        case 0x3ce2b8u: goto label_3ce2b8;
        case 0x3ce2bcu: goto label_3ce2bc;
        case 0x3ce2c0u: goto label_3ce2c0;
        case 0x3ce2c4u: goto label_3ce2c4;
        case 0x3ce2c8u: goto label_3ce2c8;
        case 0x3ce2ccu: goto label_3ce2cc;
        case 0x3ce2d0u: goto label_3ce2d0;
        case 0x3ce2d4u: goto label_3ce2d4;
        case 0x3ce2d8u: goto label_3ce2d8;
        case 0x3ce2dcu: goto label_3ce2dc;
        case 0x3ce2e0u: goto label_3ce2e0;
        case 0x3ce2e4u: goto label_3ce2e4;
        case 0x3ce2e8u: goto label_3ce2e8;
        case 0x3ce2ecu: goto label_3ce2ec;
        case 0x3ce2f0u: goto label_3ce2f0;
        case 0x3ce2f4u: goto label_3ce2f4;
        case 0x3ce2f8u: goto label_3ce2f8;
        case 0x3ce2fcu: goto label_3ce2fc;
        case 0x3ce300u: goto label_3ce300;
        case 0x3ce304u: goto label_3ce304;
        case 0x3ce308u: goto label_3ce308;
        case 0x3ce30cu: goto label_3ce30c;
        case 0x3ce310u: goto label_3ce310;
        case 0x3ce314u: goto label_3ce314;
        case 0x3ce318u: goto label_3ce318;
        case 0x3ce31cu: goto label_3ce31c;
        case 0x3ce320u: goto label_3ce320;
        case 0x3ce324u: goto label_3ce324;
        case 0x3ce328u: goto label_3ce328;
        case 0x3ce32cu: goto label_3ce32c;
        case 0x3ce330u: goto label_3ce330;
        case 0x3ce334u: goto label_3ce334;
        case 0x3ce338u: goto label_3ce338;
        case 0x3ce33cu: goto label_3ce33c;
        case 0x3ce340u: goto label_3ce340;
        case 0x3ce344u: goto label_3ce344;
        case 0x3ce348u: goto label_3ce348;
        case 0x3ce34cu: goto label_3ce34c;
        case 0x3ce350u: goto label_3ce350;
        case 0x3ce354u: goto label_3ce354;
        case 0x3ce358u: goto label_3ce358;
        case 0x3ce35cu: goto label_3ce35c;
        case 0x3ce360u: goto label_3ce360;
        case 0x3ce364u: goto label_3ce364;
        case 0x3ce368u: goto label_3ce368;
        case 0x3ce36cu: goto label_3ce36c;
        case 0x3ce370u: goto label_3ce370;
        case 0x3ce374u: goto label_3ce374;
        case 0x3ce378u: goto label_3ce378;
        case 0x3ce37cu: goto label_3ce37c;
        case 0x3ce380u: goto label_3ce380;
        case 0x3ce384u: goto label_3ce384;
        case 0x3ce388u: goto label_3ce388;
        case 0x3ce38cu: goto label_3ce38c;
        case 0x3ce390u: goto label_3ce390;
        case 0x3ce394u: goto label_3ce394;
        case 0x3ce398u: goto label_3ce398;
        case 0x3ce39cu: goto label_3ce39c;
        case 0x3ce3a0u: goto label_3ce3a0;
        case 0x3ce3a4u: goto label_3ce3a4;
        case 0x3ce3a8u: goto label_3ce3a8;
        case 0x3ce3acu: goto label_3ce3ac;
        case 0x3ce3b0u: goto label_3ce3b0;
        case 0x3ce3b4u: goto label_3ce3b4;
        case 0x3ce3b8u: goto label_3ce3b8;
        case 0x3ce3bcu: goto label_3ce3bc;
        case 0x3ce3c0u: goto label_3ce3c0;
        case 0x3ce3c4u: goto label_3ce3c4;
        case 0x3ce3c8u: goto label_3ce3c8;
        case 0x3ce3ccu: goto label_3ce3cc;
        case 0x3ce3d0u: goto label_3ce3d0;
        case 0x3ce3d4u: goto label_3ce3d4;
        case 0x3ce3d8u: goto label_3ce3d8;
        case 0x3ce3dcu: goto label_3ce3dc;
        case 0x3ce3e0u: goto label_3ce3e0;
        case 0x3ce3e4u: goto label_3ce3e4;
        case 0x3ce3e8u: goto label_3ce3e8;
        case 0x3ce3ecu: goto label_3ce3ec;
        case 0x3ce3f0u: goto label_3ce3f0;
        case 0x3ce3f4u: goto label_3ce3f4;
        case 0x3ce3f8u: goto label_3ce3f8;
        case 0x3ce3fcu: goto label_3ce3fc;
        case 0x3ce400u: goto label_3ce400;
        case 0x3ce404u: goto label_3ce404;
        case 0x3ce408u: goto label_3ce408;
        case 0x3ce40cu: goto label_3ce40c;
        case 0x3ce410u: goto label_3ce410;
        case 0x3ce414u: goto label_3ce414;
        case 0x3ce418u: goto label_3ce418;
        case 0x3ce41cu: goto label_3ce41c;
        case 0x3ce420u: goto label_3ce420;
        case 0x3ce424u: goto label_3ce424;
        case 0x3ce428u: goto label_3ce428;
        case 0x3ce42cu: goto label_3ce42c;
        case 0x3ce430u: goto label_3ce430;
        case 0x3ce434u: goto label_3ce434;
        case 0x3ce438u: goto label_3ce438;
        case 0x3ce43cu: goto label_3ce43c;
        case 0x3ce440u: goto label_3ce440;
        case 0x3ce444u: goto label_3ce444;
        case 0x3ce448u: goto label_3ce448;
        case 0x3ce44cu: goto label_3ce44c;
        case 0x3ce450u: goto label_3ce450;
        case 0x3ce454u: goto label_3ce454;
        case 0x3ce458u: goto label_3ce458;
        case 0x3ce45cu: goto label_3ce45c;
        case 0x3ce460u: goto label_3ce460;
        case 0x3ce464u: goto label_3ce464;
        case 0x3ce468u: goto label_3ce468;
        case 0x3ce46cu: goto label_3ce46c;
        case 0x3ce470u: goto label_3ce470;
        case 0x3ce474u: goto label_3ce474;
        case 0x3ce478u: goto label_3ce478;
        case 0x3ce47cu: goto label_3ce47c;
        case 0x3ce480u: goto label_3ce480;
        case 0x3ce484u: goto label_3ce484;
        case 0x3ce488u: goto label_3ce488;
        case 0x3ce48cu: goto label_3ce48c;
        case 0x3ce490u: goto label_3ce490;
        case 0x3ce494u: goto label_3ce494;
        case 0x3ce498u: goto label_3ce498;
        case 0x3ce49cu: goto label_3ce49c;
        case 0x3ce4a0u: goto label_3ce4a0;
        case 0x3ce4a4u: goto label_3ce4a4;
        case 0x3ce4a8u: goto label_3ce4a8;
        case 0x3ce4acu: goto label_3ce4ac;
        case 0x3ce4b0u: goto label_3ce4b0;
        case 0x3ce4b4u: goto label_3ce4b4;
        case 0x3ce4b8u: goto label_3ce4b8;
        case 0x3ce4bcu: goto label_3ce4bc;
        case 0x3ce4c0u: goto label_3ce4c0;
        case 0x3ce4c4u: goto label_3ce4c4;
        case 0x3ce4c8u: goto label_3ce4c8;
        case 0x3ce4ccu: goto label_3ce4cc;
        case 0x3ce4d0u: goto label_3ce4d0;
        case 0x3ce4d4u: goto label_3ce4d4;
        case 0x3ce4d8u: goto label_3ce4d8;
        case 0x3ce4dcu: goto label_3ce4dc;
        case 0x3ce4e0u: goto label_3ce4e0;
        case 0x3ce4e4u: goto label_3ce4e4;
        case 0x3ce4e8u: goto label_3ce4e8;
        case 0x3ce4ecu: goto label_3ce4ec;
        case 0x3ce4f0u: goto label_3ce4f0;
        case 0x3ce4f4u: goto label_3ce4f4;
        case 0x3ce4f8u: goto label_3ce4f8;
        case 0x3ce4fcu: goto label_3ce4fc;
        case 0x3ce500u: goto label_3ce500;
        case 0x3ce504u: goto label_3ce504;
        case 0x3ce508u: goto label_3ce508;
        case 0x3ce50cu: goto label_3ce50c;
        case 0x3ce510u: goto label_3ce510;
        case 0x3ce514u: goto label_3ce514;
        case 0x3ce518u: goto label_3ce518;
        case 0x3ce51cu: goto label_3ce51c;
        case 0x3ce520u: goto label_3ce520;
        case 0x3ce524u: goto label_3ce524;
        case 0x3ce528u: goto label_3ce528;
        case 0x3ce52cu: goto label_3ce52c;
        case 0x3ce530u: goto label_3ce530;
        case 0x3ce534u: goto label_3ce534;
        case 0x3ce538u: goto label_3ce538;
        case 0x3ce53cu: goto label_3ce53c;
        case 0x3ce540u: goto label_3ce540;
        case 0x3ce544u: goto label_3ce544;
        case 0x3ce548u: goto label_3ce548;
        case 0x3ce54cu: goto label_3ce54c;
        case 0x3ce550u: goto label_3ce550;
        case 0x3ce554u: goto label_3ce554;
        case 0x3ce558u: goto label_3ce558;
        case 0x3ce55cu: goto label_3ce55c;
        case 0x3ce560u: goto label_3ce560;
        case 0x3ce564u: goto label_3ce564;
        case 0x3ce568u: goto label_3ce568;
        case 0x3ce56cu: goto label_3ce56c;
        case 0x3ce570u: goto label_3ce570;
        case 0x3ce574u: goto label_3ce574;
        case 0x3ce578u: goto label_3ce578;
        case 0x3ce57cu: goto label_3ce57c;
        case 0x3ce580u: goto label_3ce580;
        case 0x3ce584u: goto label_3ce584;
        case 0x3ce588u: goto label_3ce588;
        case 0x3ce58cu: goto label_3ce58c;
        case 0x3ce590u: goto label_3ce590;
        case 0x3ce594u: goto label_3ce594;
        case 0x3ce598u: goto label_3ce598;
        case 0x3ce59cu: goto label_3ce59c;
        case 0x3ce5a0u: goto label_3ce5a0;
        case 0x3ce5a4u: goto label_3ce5a4;
        case 0x3ce5a8u: goto label_3ce5a8;
        case 0x3ce5acu: goto label_3ce5ac;
        case 0x3ce5b0u: goto label_3ce5b0;
        case 0x3ce5b4u: goto label_3ce5b4;
        case 0x3ce5b8u: goto label_3ce5b8;
        case 0x3ce5bcu: goto label_3ce5bc;
        case 0x3ce5c0u: goto label_3ce5c0;
        case 0x3ce5c4u: goto label_3ce5c4;
        case 0x3ce5c8u: goto label_3ce5c8;
        case 0x3ce5ccu: goto label_3ce5cc;
        case 0x3ce5d0u: goto label_3ce5d0;
        case 0x3ce5d4u: goto label_3ce5d4;
        case 0x3ce5d8u: goto label_3ce5d8;
        case 0x3ce5dcu: goto label_3ce5dc;
        case 0x3ce5e0u: goto label_3ce5e0;
        case 0x3ce5e4u: goto label_3ce5e4;
        case 0x3ce5e8u: goto label_3ce5e8;
        case 0x3ce5ecu: goto label_3ce5ec;
        case 0x3ce5f0u: goto label_3ce5f0;
        case 0x3ce5f4u: goto label_3ce5f4;
        case 0x3ce5f8u: goto label_3ce5f8;
        case 0x3ce5fcu: goto label_3ce5fc;
        case 0x3ce600u: goto label_3ce600;
        case 0x3ce604u: goto label_3ce604;
        case 0x3ce608u: goto label_3ce608;
        case 0x3ce60cu: goto label_3ce60c;
        case 0x3ce610u: goto label_3ce610;
        case 0x3ce614u: goto label_3ce614;
        case 0x3ce618u: goto label_3ce618;
        case 0x3ce61cu: goto label_3ce61c;
        case 0x3ce620u: goto label_3ce620;
        case 0x3ce624u: goto label_3ce624;
        case 0x3ce628u: goto label_3ce628;
        case 0x3ce62cu: goto label_3ce62c;
        case 0x3ce630u: goto label_3ce630;
        case 0x3ce634u: goto label_3ce634;
        case 0x3ce638u: goto label_3ce638;
        case 0x3ce63cu: goto label_3ce63c;
        case 0x3ce640u: goto label_3ce640;
        case 0x3ce644u: goto label_3ce644;
        case 0x3ce648u: goto label_3ce648;
        case 0x3ce64cu: goto label_3ce64c;
        case 0x3ce650u: goto label_3ce650;
        case 0x3ce654u: goto label_3ce654;
        case 0x3ce658u: goto label_3ce658;
        case 0x3ce65cu: goto label_3ce65c;
        case 0x3ce660u: goto label_3ce660;
        case 0x3ce664u: goto label_3ce664;
        case 0x3ce668u: goto label_3ce668;
        case 0x3ce66cu: goto label_3ce66c;
        case 0x3ce670u: goto label_3ce670;
        case 0x3ce674u: goto label_3ce674;
        case 0x3ce678u: goto label_3ce678;
        case 0x3ce67cu: goto label_3ce67c;
        case 0x3ce680u: goto label_3ce680;
        case 0x3ce684u: goto label_3ce684;
        case 0x3ce688u: goto label_3ce688;
        case 0x3ce68cu: goto label_3ce68c;
        case 0x3ce690u: goto label_3ce690;
        case 0x3ce694u: goto label_3ce694;
        case 0x3ce698u: goto label_3ce698;
        case 0x3ce69cu: goto label_3ce69c;
        case 0x3ce6a0u: goto label_3ce6a0;
        case 0x3ce6a4u: goto label_3ce6a4;
        case 0x3ce6a8u: goto label_3ce6a8;
        case 0x3ce6acu: goto label_3ce6ac;
        case 0x3ce6b0u: goto label_3ce6b0;
        case 0x3ce6b4u: goto label_3ce6b4;
        case 0x3ce6b8u: goto label_3ce6b8;
        case 0x3ce6bcu: goto label_3ce6bc;
        case 0x3ce6c0u: goto label_3ce6c0;
        case 0x3ce6c4u: goto label_3ce6c4;
        case 0x3ce6c8u: goto label_3ce6c8;
        case 0x3ce6ccu: goto label_3ce6cc;
        case 0x3ce6d0u: goto label_3ce6d0;
        case 0x3ce6d4u: goto label_3ce6d4;
        case 0x3ce6d8u: goto label_3ce6d8;
        case 0x3ce6dcu: goto label_3ce6dc;
        case 0x3ce6e0u: goto label_3ce6e0;
        case 0x3ce6e4u: goto label_3ce6e4;
        case 0x3ce6e8u: goto label_3ce6e8;
        case 0x3ce6ecu: goto label_3ce6ec;
        case 0x3ce6f0u: goto label_3ce6f0;
        case 0x3ce6f4u: goto label_3ce6f4;
        case 0x3ce6f8u: goto label_3ce6f8;
        case 0x3ce6fcu: goto label_3ce6fc;
        case 0x3ce700u: goto label_3ce700;
        case 0x3ce704u: goto label_3ce704;
        case 0x3ce708u: goto label_3ce708;
        case 0x3ce70cu: goto label_3ce70c;
        case 0x3ce710u: goto label_3ce710;
        case 0x3ce714u: goto label_3ce714;
        case 0x3ce718u: goto label_3ce718;
        case 0x3ce71cu: goto label_3ce71c;
        case 0x3ce720u: goto label_3ce720;
        case 0x3ce724u: goto label_3ce724;
        case 0x3ce728u: goto label_3ce728;
        case 0x3ce72cu: goto label_3ce72c;
        case 0x3ce730u: goto label_3ce730;
        case 0x3ce734u: goto label_3ce734;
        case 0x3ce738u: goto label_3ce738;
        case 0x3ce73cu: goto label_3ce73c;
        case 0x3ce740u: goto label_3ce740;
        case 0x3ce744u: goto label_3ce744;
        case 0x3ce748u: goto label_3ce748;
        case 0x3ce74cu: goto label_3ce74c;
        case 0x3ce750u: goto label_3ce750;
        case 0x3ce754u: goto label_3ce754;
        case 0x3ce758u: goto label_3ce758;
        case 0x3ce75cu: goto label_3ce75c;
        case 0x3ce760u: goto label_3ce760;
        case 0x3ce764u: goto label_3ce764;
        case 0x3ce768u: goto label_3ce768;
        case 0x3ce76cu: goto label_3ce76c;
        case 0x3ce770u: goto label_3ce770;
        case 0x3ce774u: goto label_3ce774;
        case 0x3ce778u: goto label_3ce778;
        case 0x3ce77cu: goto label_3ce77c;
        case 0x3ce780u: goto label_3ce780;
        case 0x3ce784u: goto label_3ce784;
        case 0x3ce788u: goto label_3ce788;
        case 0x3ce78cu: goto label_3ce78c;
        case 0x3ce790u: goto label_3ce790;
        case 0x3ce794u: goto label_3ce794;
        case 0x3ce798u: goto label_3ce798;
        case 0x3ce79cu: goto label_3ce79c;
        case 0x3ce7a0u: goto label_3ce7a0;
        case 0x3ce7a4u: goto label_3ce7a4;
        case 0x3ce7a8u: goto label_3ce7a8;
        case 0x3ce7acu: goto label_3ce7ac;
        case 0x3ce7b0u: goto label_3ce7b0;
        case 0x3ce7b4u: goto label_3ce7b4;
        case 0x3ce7b8u: goto label_3ce7b8;
        case 0x3ce7bcu: goto label_3ce7bc;
        case 0x3ce7c0u: goto label_3ce7c0;
        case 0x3ce7c4u: goto label_3ce7c4;
        case 0x3ce7c8u: goto label_3ce7c8;
        case 0x3ce7ccu: goto label_3ce7cc;
        case 0x3ce7d0u: goto label_3ce7d0;
        case 0x3ce7d4u: goto label_3ce7d4;
        case 0x3ce7d8u: goto label_3ce7d8;
        case 0x3ce7dcu: goto label_3ce7dc;
        case 0x3ce7e0u: goto label_3ce7e0;
        case 0x3ce7e4u: goto label_3ce7e4;
        case 0x3ce7e8u: goto label_3ce7e8;
        case 0x3ce7ecu: goto label_3ce7ec;
        case 0x3ce7f0u: goto label_3ce7f0;
        case 0x3ce7f4u: goto label_3ce7f4;
        case 0x3ce7f8u: goto label_3ce7f8;
        case 0x3ce7fcu: goto label_3ce7fc;
        case 0x3ce800u: goto label_3ce800;
        case 0x3ce804u: goto label_3ce804;
        case 0x3ce808u: goto label_3ce808;
        case 0x3ce80cu: goto label_3ce80c;
        case 0x3ce810u: goto label_3ce810;
        case 0x3ce814u: goto label_3ce814;
        case 0x3ce818u: goto label_3ce818;
        case 0x3ce81cu: goto label_3ce81c;
        case 0x3ce820u: goto label_3ce820;
        case 0x3ce824u: goto label_3ce824;
        case 0x3ce828u: goto label_3ce828;
        case 0x3ce82cu: goto label_3ce82c;
        case 0x3ce830u: goto label_3ce830;
        case 0x3ce834u: goto label_3ce834;
        case 0x3ce838u: goto label_3ce838;
        case 0x3ce83cu: goto label_3ce83c;
        case 0x3ce840u: goto label_3ce840;
        case 0x3ce844u: goto label_3ce844;
        case 0x3ce848u: goto label_3ce848;
        case 0x3ce84cu: goto label_3ce84c;
        case 0x3ce850u: goto label_3ce850;
        case 0x3ce854u: goto label_3ce854;
        case 0x3ce858u: goto label_3ce858;
        case 0x3ce85cu: goto label_3ce85c;
        case 0x3ce860u: goto label_3ce860;
        case 0x3ce864u: goto label_3ce864;
        case 0x3ce868u: goto label_3ce868;
        case 0x3ce86cu: goto label_3ce86c;
        case 0x3ce870u: goto label_3ce870;
        case 0x3ce874u: goto label_3ce874;
        case 0x3ce878u: goto label_3ce878;
        case 0x3ce87cu: goto label_3ce87c;
        case 0x3ce880u: goto label_3ce880;
        case 0x3ce884u: goto label_3ce884;
        case 0x3ce888u: goto label_3ce888;
        case 0x3ce88cu: goto label_3ce88c;
        case 0x3ce890u: goto label_3ce890;
        case 0x3ce894u: goto label_3ce894;
        case 0x3ce898u: goto label_3ce898;
        case 0x3ce89cu: goto label_3ce89c;
        case 0x3ce8a0u: goto label_3ce8a0;
        case 0x3ce8a4u: goto label_3ce8a4;
        case 0x3ce8a8u: goto label_3ce8a8;
        case 0x3ce8acu: goto label_3ce8ac;
        case 0x3ce8b0u: goto label_3ce8b0;
        case 0x3ce8b4u: goto label_3ce8b4;
        case 0x3ce8b8u: goto label_3ce8b8;
        case 0x3ce8bcu: goto label_3ce8bc;
        default: break;
    }

    ctx->pc = 0x3ce070u;

label_3ce070:
    // 0x3ce070: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3ce070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3ce074:
    // 0x3ce074: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ce074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ce078:
    // 0x3ce078: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3ce078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3ce07c:
    // 0x3ce07c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x3ce07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_3ce080:
    // 0x3ce080: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x3ce080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_3ce084:
    // 0x3ce084: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3ce084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_3ce088:
    // 0x3ce088: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3ce088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3ce08c:
    // 0x3ce08c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3ce08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3ce090:
    // 0x3ce090: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ce090u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ce094:
    // 0x3ce094: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3ce094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3ce098:
    // 0x3ce098: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3ce098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3ce09c:
    // 0x3ce09c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3ce09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3ce0a0:
    // 0x3ce0a0: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x3ce0a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
label_3ce0a4:
    // 0x3ce0a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ce0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3ce0a8:
    // 0x3ce0a8: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x3ce0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_3ce0ac:
    // 0x3ce0ac: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3ce0acu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3ce0b0:
    // 0x3ce0b0: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x3ce0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_3ce0b4:
    // 0x3ce0b4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3ce0b4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3ce0b8:
    // 0x3ce0b8: 0x265290b0  addiu       $s2, $s2, -0x6F50
    ctx->pc = 0x3ce0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938800));
label_3ce0bc:
    // 0x3ce0bc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3ce0bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3ce0c0:
    // 0x3ce0c0: 0x2631ab70  addiu       $s1, $s1, -0x5490
    ctx->pc = 0x3ce0c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945648));
label_3ce0c4:
    // 0x3ce0c4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3ce0c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3ce0c8:
    // 0x3ce0c8: 0x26102110  addiu       $s0, $s0, 0x2110
    ctx->pc = 0x3ce0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8464));
label_3ce0cc:
    // 0x3ce0cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ce0ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3ce0d0:
    // 0x3ce0d0: 0x8c5789e0  lw          $s7, -0x7620($v0)
    ctx->pc = 0x3ce0d0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ce0d4:
    // 0x3ce0d4: 0x8488005e  lh          $t0, 0x5E($a0)
    ctx->pc = 0x3ce0d4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 94)));
label_3ce0d8:
    // 0x3ce0d8: 0x84830062  lh          $v1, 0x62($a0)
    ctx->pc = 0x3ce0d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 98)));
label_3ce0dc:
    // 0x3ce0dc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3ce0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3ce0e0:
    // 0x3ce0e0: 0x84860064  lh          $a2, 0x64($a0)
    ctx->pc = 0x3ce0e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3ce0e4:
    // 0x3ce0e4: 0x844590b8  lh          $a1, -0x6F48($v0)
    ctx->pc = 0x3ce0e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294938808)));
label_3ce0e8:
    // 0x3ce0e8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3ce0e8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce0ec:
    // 0x3ce0ec: 0x0  nop
    ctx->pc = 0x3ce0ecu;
    // NOP
label_3ce0f0:
    // 0x3ce0f0: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x3ce0f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_3ce0f4:
    // 0x3ce0f4: 0x84870060  lh          $a3, 0x60($a0)
    ctx->pc = 0x3ce0f4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
label_3ce0f8:
    // 0x3ce0f8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3ce0f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_3ce0fc:
    // 0x3ce0fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ce0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ce100:
    // 0x3ce100: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3ce100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3ce104:
    // 0x3ce104: 0x8c56078c  lw          $s6, 0x78C($v0)
    ctx->pc = 0x3ce104u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1932)));
label_3ce108:
    // 0x3ce108: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x3ce108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
label_3ce10c:
    // 0x3ce10c: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3ce10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3ce110:
    // 0x3ce110: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x3ce110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3ce114:
    // 0x3ce114: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ce114u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce118:
    // 0x3ce118: 0x1031023  subu        $v0, $t0, $v1
    ctx->pc = 0x3ce118u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_3ce11c:
    // 0x3ce11c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3ce11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3ce120:
    // 0x3ce120: 0x1031021  addu        $v0, $t0, $v1
    ctx->pc = 0x3ce120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_3ce124:
    // 0x3ce124: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3ce124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3ce128:
    // 0x3ce128: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x3ce128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
label_3ce12c:
    // 0x3ce12c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3ce130:
    if (ctx->pc == 0x3CE130u) {
        ctx->pc = 0x3CE130u;
            // 0x3ce130: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3CE134u;
        goto label_3ce134;
    }
    ctx->pc = 0x3CE12Cu;
    {
        const bool branch_taken_0x3ce12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE12Cu;
            // 0x3ce130: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce12c) {
            ctx->pc = 0x3CE138u;
            goto label_3ce138;
        }
    }
    ctx->pc = 0x3CE134u;
label_3ce134:
    // 0x3ce134: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x3ce134u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ce138:
    // 0x3ce138: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ce138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ce13c:
    // 0x3ce13c: 0x92b3005c  lbu         $s3, 0x5C($s5)
    ctx->pc = 0x3ce13cu;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 92)));
label_3ce140:
    // 0x3ce140: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3ce140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3ce144:
    // 0x3ce144: 0xc0506ac  jal         func_141AB0
label_3ce148:
    if (ctx->pc == 0x3CE148u) {
        ctx->pc = 0x3CE148u;
            // 0x3ce148: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3CE14Cu;
        goto label_3ce14c;
    }
    ctx->pc = 0x3CE144u;
    SET_GPR_U32(ctx, 31, 0x3CE14Cu);
    ctx->pc = 0x3CE148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE144u;
            // 0x3ce148: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE14Cu; }
        if (ctx->pc != 0x3CE14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE14Cu; }
        if (ctx->pc != 0x3CE14Cu) { return; }
    }
    ctx->pc = 0x3CE14Cu;
label_3ce14c:
    // 0x3ce14c: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x3ce14cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3ce150:
    // 0x3ce150: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3ce150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3ce154:
    // 0x3ce154: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3ce154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3ce158:
    // 0x3ce158: 0x320f809  jalr        $t9
label_3ce15c:
    if (ctx->pc == 0x3CE15Cu) {
        ctx->pc = 0x3CE15Cu;
            // 0x3ce15c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3CE160u;
        goto label_3ce160;
    }
    ctx->pc = 0x3CE158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CE160u);
        ctx->pc = 0x3CE15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE158u;
            // 0x3ce15c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CE160u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CE160u; }
            if (ctx->pc != 0x3CE160u) { return; }
        }
        }
    }
    ctx->pc = 0x3CE160u;
label_3ce160:
    // 0x3ce160: 0xc6210258  lwc1        $f1, 0x258($s1)
    ctx->pc = 0x3ce160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ce164:
    // 0x3ce164: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3ce164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3ce168:
    // 0x3ce168: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3ce168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3ce16c:
    // 0x3ce16c: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3ce16cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3ce170:
    // 0x3ce170: 0xc620025c  lwc1        $f0, 0x25C($s1)
    ctx->pc = 0x3ce170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ce174:
    // 0x3ce174: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3ce174u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3ce178:
    // 0x3ce178: 0x46011582  mul.s       $f22, $f2, $f1
    ctx->pc = 0x3ce178u;
    ctx->f[22] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3ce17c:
    // 0x3ce17c: 0x327e00ff  andi        $fp, $s3, 0xFF
    ctx->pc = 0x3ce17cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_3ce180:
    // 0x3ce180: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3ce180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3ce184:
    // 0x3ce184: 0x26250250  addiu       $a1, $s1, 0x250
    ctx->pc = 0x3ce184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
label_3ce188:
    // 0x3ce188: 0x3c29825  or          $s3, $fp, $v0
    ctx->pc = 0x3ce188u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
label_3ce18c:
    // 0x3ce18c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ce18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ce190:
    // 0x3ce190: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ce190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3ce194:
    // 0x3ce194: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3ce194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ce198:
    // 0x3ce198: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ce198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce19c:
    // 0x3ce19c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x3ce19cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3ce1a0:
    // 0x3ce1a0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3ce1a0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce1a4:
    // 0x3ce1a4: 0x0  nop
    ctx->pc = 0x3ce1a4u;
    // NOP
label_3ce1a8:
    // 0x3ce1a8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ce1a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3ce1ac:
    // 0x3ce1ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ce1acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce1b0:
    // 0x3ce1b0: 0x0  nop
    ctx->pc = 0x3ce1b0u;
    // NOP
label_3ce1b4:
    // 0x3ce1b4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ce1b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3ce1b8:
    // 0x3ce1b8: 0x4616c301  sub.s       $f12, $f24, $f22
    ctx->pc = 0x3ce1b8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[24], ctx->f[22]);
label_3ce1bc:
    // 0x3ce1bc: 0x4601bb41  sub.s       $f13, $f23, $f1
    ctx->pc = 0x3ce1bcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
label_3ce1c0:
    // 0x3ce1c0: 0x4601bbc0  add.s       $f15, $f23, $f1
    ctx->pc = 0x3ce1c0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
label_3ce1c4:
    // 0x3ce1c4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3ce1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3ce1c8:
    // 0x3ce1c8: 0xc0bc284  jal         func_2F0A10
label_3ce1cc:
    if (ctx->pc == 0x3CE1CCu) {
        ctx->pc = 0x3CE1CCu;
            // 0x3ce1cc: 0x4616c380  add.s       $f14, $f24, $f22 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
        ctx->pc = 0x3CE1D0u;
        goto label_3ce1d0;
    }
    ctx->pc = 0x3CE1C8u;
    SET_GPR_U32(ctx, 31, 0x3CE1D0u);
    ctx->pc = 0x3CE1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE1C8u;
            // 0x3ce1cc: 0x4616c380  add.s       $f14, $f24, $f22 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE1D0u; }
        if (ctx->pc != 0x3CE1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE1D0u; }
        if (ctx->pc != 0x3CE1D0u) { return; }
    }
    ctx->pc = 0x3CE1D0u;
label_3ce1d0:
    // 0x3ce1d0: 0xc62001ec  lwc1        $f0, 0x1EC($s1)
    ctx->pc = 0x3ce1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ce1d4:
    // 0x3ce1d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3ce1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3ce1d8:
    // 0x3ce1d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3ce1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3ce1dc:
    // 0x3ce1dc: 0x8643000a  lh          $v1, 0xA($s2)
    ctx->pc = 0x3ce1dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_3ce1e0:
    // 0x3ce1e0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x3ce1e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3ce1e4:
    // 0x3ce1e4: 0x4616c041  sub.s       $f1, $f24, $f22
    ctx->pc = 0x3ce1e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[22]);
label_3ce1e8:
    // 0x3ce1e8: 0x92440012  lbu         $a0, 0x12($s2)
    ctx->pc = 0x3ce1e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
label_3ce1ec:
    // 0x3ce1ec: 0x263401e0  addiu       $s4, $s1, 0x1E0
    ctx->pc = 0x3ce1ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_3ce1f0:
    // 0x3ce1f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ce1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ce1f4:
    // 0x3ce1f4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3ce1f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3ce1f8:
    // 0x3ce1f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ce1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce1fc:
    // 0x3ce1fc: 0x0  nop
    ctx->pc = 0x3ce1fcu;
    // NOP
label_3ce200:
    // 0x3ce200: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3ce200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3ce204:
    // 0x3ce204: 0x4602bd40  add.s       $f21, $f23, $f2
    ctx->pc = 0x3ce204u;
    ctx->f[21] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
label_3ce208:
    // 0x3ce208: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_3ce20c:
    if (ctx->pc == 0x3CE20Cu) {
        ctx->pc = 0x3CE20Cu;
            // 0x3ce20c: 0x4602bd01  sub.s       $f20, $f23, $f2 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
        ctx->pc = 0x3CE210u;
        goto label_3ce210;
    }
    ctx->pc = 0x3CE208u;
    {
        const bool branch_taken_0x3ce208 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3CE20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE208u;
            // 0x3ce20c: 0x4602bd01  sub.s       $f20, $f23, $f2 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[23], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce208) {
            ctx->pc = 0x3CE21Cu;
            goto label_3ce21c;
        }
    }
    ctx->pc = 0x3CE210u;
label_3ce210:
    // 0x3ce210: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ce210u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce214:
    // 0x3ce214: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ce218:
    if (ctx->pc == 0x3CE218u) {
        ctx->pc = 0x3CE218u;
            // 0x3ce218: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3CE21Cu;
        goto label_3ce21c;
    }
    ctx->pc = 0x3CE214u;
    {
        const bool branch_taken_0x3ce214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE214u;
            // 0x3ce218: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce214) {
            ctx->pc = 0x3CE238u;
            goto label_3ce238;
        }
    }
    ctx->pc = 0x3CE21Cu;
label_3ce21c:
    // 0x3ce21c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3ce21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3ce220:
    // 0x3ce220: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3ce220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3ce224:
    // 0x3ce224: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ce224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ce228:
    // 0x3ce228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ce228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce22c:
    // 0x3ce22c: 0x0  nop
    ctx->pc = 0x3ce22cu;
    // NOP
label_3ce230:
    // 0x3ce230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ce230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ce234:
    // 0x3ce234: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3ce234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3ce238:
    // 0x3ce238: 0x46000b81  sub.s       $f14, $f1, $f0
    ctx->pc = 0x3ce238u;
    ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3ce23c:
    // 0x3ce23c: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x3ce23cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3ce240:
    // 0x3ce240: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ce240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3ce244:
    // 0x3ce244: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3ce244u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3ce248:
    // 0x3ce248: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ce248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ce24c:
    // 0x3ce24c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ce24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ce250:
    // 0x3ce250: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ce250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce254:
    // 0x3ce254: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3ce254u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce258:
    // 0x3ce258: 0x0  nop
    ctx->pc = 0x3ce258u;
    // NOP
label_3ce25c:
    // 0x3ce25c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ce25cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3ce260:
    // 0x3ce260: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3ce260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ce264:
    // 0x3ce264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ce264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce268:
    // 0x3ce268: 0x0  nop
    ctx->pc = 0x3ce268u;
    // NOP
label_3ce26c:
    // 0x3ce26c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ce26cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3ce270:
    // 0x3ce270: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3ce270u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3ce274:
    // 0x3ce274: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3ce274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3ce278:
    // 0x3ce278: 0xc0bc284  jal         func_2F0A10
label_3ce27c:
    if (ctx->pc == 0x3CE27Cu) {
        ctx->pc = 0x3CE27Cu;
            // 0x3ce27c: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3CE280u;
        goto label_3ce280;
    }
    ctx->pc = 0x3CE278u;
    SET_GPR_U32(ctx, 31, 0x3CE280u);
    ctx->pc = 0x3CE27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE278u;
            // 0x3ce27c: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE280u; }
        if (ctx->pc != 0x3CE280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE280u; }
        if (ctx->pc != 0x3CE280u) { return; }
    }
    ctx->pc = 0x3CE280u;
label_3ce280:
    // 0x3ce280: 0x8643000a  lh          $v1, 0xA($s2)
    ctx->pc = 0x3ce280u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_3ce284:
    // 0x3ce284: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x3ce284u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ce288:
    // 0x3ce288: 0x92440012  lbu         $a0, 0x12($s2)
    ctx->pc = 0x3ce288u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
label_3ce28c:
    // 0x3ce28c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3ce28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ce290:
    // 0x3ce290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ce290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce294:
    // 0x3ce294: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_3ce298:
    if (ctx->pc == 0x3CE298u) {
        ctx->pc = 0x3CE298u;
            // 0x3ce298: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3CE29Cu;
        goto label_3ce29c;
    }
    ctx->pc = 0x3CE294u;
    {
        const bool branch_taken_0x3ce294 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3CE298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE294u;
            // 0x3ce298: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce294) {
            ctx->pc = 0x3CE2A8u;
            goto label_3ce2a8;
        }
    }
    ctx->pc = 0x3CE29Cu;
label_3ce29c:
    // 0x3ce29c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ce29cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce2a0:
    // 0x3ce2a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ce2a4:
    if (ctx->pc == 0x3CE2A4u) {
        ctx->pc = 0x3CE2A4u;
            // 0x3ce2a4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3CE2A8u;
        goto label_3ce2a8;
    }
    ctx->pc = 0x3CE2A0u;
    {
        const bool branch_taken_0x3ce2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE2A0u;
            // 0x3ce2a4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce2a0) {
            ctx->pc = 0x3CE2C4u;
            goto label_3ce2c4;
        }
    }
    ctx->pc = 0x3CE2A8u;
label_3ce2a8:
    // 0x3ce2a8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x3ce2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3ce2ac:
    // 0x3ce2ac: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3ce2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3ce2b0:
    // 0x3ce2b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ce2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ce2b4:
    // 0x3ce2b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ce2b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce2b8:
    // 0x3ce2b8: 0x0  nop
    ctx->pc = 0x3ce2b8u;
    // NOP
label_3ce2bc:
    // 0x3ce2bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3ce2bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ce2c0:
    // 0x3ce2c0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ce2c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3ce2c4:
    // 0x3ce2c4: 0x4616c000  add.s       $f0, $f24, $f22
    ctx->pc = 0x3ce2c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
label_3ce2c8:
    // 0x3ce2c8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ce2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3ce2cc:
    // 0x3ce2cc: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3ce2ccu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3ce2d0:
    // 0x3ce2d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ce2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ce2d4:
    // 0x3ce2d4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3ce2d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3ce2d8:
    // 0x3ce2d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ce2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ce2dc:
    // 0x3ce2dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3ce2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ce2e0:
    // 0x3ce2e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ce2e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce2e4:
    // 0x3ce2e4: 0x46000b80  add.s       $f14, $f1, $f0
    ctx->pc = 0x3ce2e4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3ce2e8:
    // 0x3ce2e8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3ce2e8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce2ec:
    // 0x3ce2ec: 0x0  nop
    ctx->pc = 0x3ce2ecu;
    // NOP
label_3ce2f0:
    // 0x3ce2f0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ce2f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3ce2f4:
    // 0x3ce2f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ce2f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce2f8:
    // 0x3ce2f8: 0x0  nop
    ctx->pc = 0x3ce2f8u;
    // NOP
label_3ce2fc:
    // 0x3ce2fc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ce2fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3ce300:
    // 0x3ce300: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3ce300u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3ce304:
    // 0x3ce304: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3ce304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3ce308:
    // 0x3ce308: 0xc0bc284  jal         func_2F0A10
label_3ce30c:
    if (ctx->pc == 0x3CE30Cu) {
        ctx->pc = 0x3CE30Cu;
            // 0x3ce30c: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3CE310u;
        goto label_3ce310;
    }
    ctx->pc = 0x3CE308u;
    SET_GPR_U32(ctx, 31, 0x3CE310u);
    ctx->pc = 0x3CE30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE308u;
            // 0x3ce30c: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE310u; }
        if (ctx->pc != 0x3CE310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE310u; }
        if (ctx->pc != 0x3CE310u) { return; }
    }
    ctx->pc = 0x3CE310u;
label_3ce310:
    // 0x3ce310: 0x8642000c  lh          $v0, 0xC($s2)
    ctx->pc = 0x3ce310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_3ce314:
    // 0x3ce314: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3ce314u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce318:
    // 0x3ce318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ce318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce31c:
    // 0x3ce31c: 0x0  nop
    ctx->pc = 0x3ce31cu;
    // NOP
label_3ce320:
    // 0x3ce320: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ce320u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ce324:
    // 0x3ce324: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x3ce324u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_3ce328:
    // 0x3ce328: 0x86a30066  lh          $v1, 0x66($s5)
    ctx->pc = 0x3ce328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
label_3ce32c:
    // 0x3ce32c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3ce32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3ce330:
    // 0x3ce330: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ce330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ce334:
    // 0x3ce334: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3ce334u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3ce338:
    // 0x3ce338: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ce338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3ce33c:
    // 0x3ce33c: 0x262502f0  addiu       $a1, $s1, 0x2F0
    ctx->pc = 0x3ce33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
label_3ce340:
    // 0x3ce340: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ce340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce344:
    // 0x3ce344: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ce344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ce348:
    // 0x3ce348: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x3ce348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_3ce34c:
    // 0x3ce34c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3ce34cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3ce350:
    // 0x3ce350: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3ce350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ce354:
    // 0x3ce354: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ce354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce358:
    // 0x3ce358: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3ce358u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce35c:
    // 0x3ce35c: 0x0  nop
    ctx->pc = 0x3ce35cu;
    // NOP
label_3ce360:
    // 0x3ce360: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ce360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3ce364:
    // 0x3ce364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ce364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce368:
    // 0x3ce368: 0x0  nop
    ctx->pc = 0x3ce368u;
    // NOP
label_3ce36c:
    // 0x3ce36c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ce36cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3ce370:
    // 0x3ce370: 0xc62002fc  lwc1        $f0, 0x2FC($s1)
    ctx->pc = 0x3ce370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ce374:
    // 0x3ce374: 0xc63402f8  lwc1        $f20, 0x2F8($s1)
    ctx->pc = 0x3ce374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ce378:
    // 0x3ce378: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3ce378u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3ce37c:
    // 0x3ce37c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3ce37cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3ce380:
    // 0x3ce380: 0x4614ab80  add.s       $f14, $f21, $f20
    ctx->pc = 0x3ce380u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_3ce384:
    // 0x3ce384: 0x4600bb41  sub.s       $f13, $f23, $f0
    ctx->pc = 0x3ce384u;
    ctx->f[13] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
label_3ce388:
    // 0x3ce388: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3ce388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3ce38c:
    // 0x3ce38c: 0xc0bc284  jal         func_2F0A10
label_3ce390:
    if (ctx->pc == 0x3CE390u) {
        ctx->pc = 0x3CE390u;
            // 0x3ce390: 0x4600bbc0  add.s       $f15, $f23, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->pc = 0x3CE394u;
        goto label_3ce394;
    }
    ctx->pc = 0x3CE38Cu;
    SET_GPR_U32(ctx, 31, 0x3CE394u);
    ctx->pc = 0x3CE390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE38Cu;
            // 0x3ce390: 0x4600bbc0  add.s       $f15, $f23, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE394u; }
        if (ctx->pc != 0x3CE394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE394u; }
        if (ctx->pc != 0x3CE394u) { return; }
    }
    ctx->pc = 0x3CE394u;
label_3ce394:
    // 0x3ce394: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x3ce394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_3ce398:
    // 0x3ce398: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x3ce398u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
label_3ce39c:
    // 0x3ce39c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3ce3a0:
    if (ctx->pc == 0x3CE3A0u) {
        ctx->pc = 0x3CE3A0u;
            // 0x3ce3a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3CE3A4u;
        goto label_3ce3a4;
    }
    ctx->pc = 0x3CE39Cu;
    {
        const bool branch_taken_0x3ce39c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3ce39c) {
            ctx->pc = 0x3CE3A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE39Cu;
            // 0x3ce3a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CE3B0u;
            goto label_3ce3b0;
        }
    }
    ctx->pc = 0x3CE3A4u;
label_3ce3a4:
    // 0x3ce3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ce3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce3a8:
    // 0x3ce3a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ce3ac:
    if (ctx->pc == 0x3CE3ACu) {
        ctx->pc = 0x3CE3ACu;
            // 0x3ce3ac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3CE3B0u;
        goto label_3ce3b0;
    }
    ctx->pc = 0x3CE3A8u;
    {
        const bool branch_taken_0x3ce3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE3A8u;
            // 0x3ce3ac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce3a8) {
            ctx->pc = 0x3CE3C8u;
            goto label_3ce3c8;
        }
    }
    ctx->pc = 0x3CE3B0u;
label_3ce3b0:
    // 0x3ce3b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ce3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3ce3b4:
    // 0x3ce3b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ce3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ce3b8:
    // 0x3ce3b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ce3b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce3bc:
    // 0x3ce3bc: 0x0  nop
    ctx->pc = 0x3ce3bcu;
    // NOP
label_3ce3c0:
    // 0x3ce3c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ce3c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ce3c4:
    // 0x3ce3c4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3ce3c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3ce3c8:
    // 0x3ce3c8: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x3ce3c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3ce3cc:
    // 0x3ce3cc: 0x2682002c  addiu       $v0, $s4, 0x2C
    ctx->pc = 0x3ce3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
label_3ce3d0:
    // 0x3ce3d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ce3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3ce3d4:
    // 0x3ce3d4: 0x3c093f00  lui         $t1, 0x3F00
    ctx->pc = 0x3ce3d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16128 << 16));
label_3ce3d8:
    // 0x3ce3d8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x3ce3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3ce3dc:
    // 0x3ce3dc: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3ce3dcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3ce3e0:
    // 0x3ce3e0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ce3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3ce3e4:
    // 0x3ce3e4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3ce3e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3ce3e8:
    // 0x3ce3e8: 0x4600ab00  add.s       $f12, $f21, $f0
    ctx->pc = 0x3ce3e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3ce3ec:
    // 0x3ce3ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ce3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ce3f0:
    // 0x3ce3f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3ce3f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ce3f4:
    // 0x3ce3f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ce3f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce3f8:
    // 0x3ce3f8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3ce3f8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce3fc:
    // 0x3ce3fc: 0x0  nop
    ctx->pc = 0x3ce3fcu;
    // NOP
label_3ce400:
    // 0x3ce400: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ce400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3ce404:
    // 0x3ce404: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ce404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce408:
    // 0x3ce408: 0x0  nop
    ctx->pc = 0x3ce408u;
    // NOP
label_3ce40c:
    // 0x3ce40c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ce40cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3ce410:
    // 0x3ce410: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3ce410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ce414:
    // 0x3ce414: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x3ce414u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ce418:
    // 0x3ce418: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x3ce418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ce41c:
    // 0x3ce41c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3ce41cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3ce420:
    // 0x3ce420: 0x46026380  add.s       $f14, $f12, $f2
    ctx->pc = 0x3ce420u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_3ce424:
    // 0x3ce424: 0x4600bb41  sub.s       $f13, $f23, $f0
    ctx->pc = 0x3ce424u;
    ctx->f[13] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
label_3ce428:
    // 0x3ce428: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3ce428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3ce42c:
    // 0x3ce42c: 0xc0bc284  jal         func_2F0A10
label_3ce430:
    if (ctx->pc == 0x3CE430u) {
        ctx->pc = 0x3CE430u;
            // 0x3ce430: 0x4600bbc0  add.s       $f15, $f23, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->pc = 0x3CE434u;
        goto label_3ce434;
    }
    ctx->pc = 0x3CE42Cu;
    SET_GPR_U32(ctx, 31, 0x3CE434u);
    ctx->pc = 0x3CE430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE42Cu;
            // 0x3ce430: 0x4600bbc0  add.s       $f15, $f23, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE434u; }
        if (ctx->pc != 0x3CE434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE434u; }
        if (ctx->pc != 0x3CE434u) { return; }
    }
    ctx->pc = 0x3CE434u;
label_3ce434:
    // 0x3ce434: 0x8643000e  lh          $v1, 0xE($s2)
    ctx->pc = 0x3ce434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_3ce438:
    // 0x3ce438: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3ce438u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3ce43c:
    // 0x3ce43c: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x3ce43cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3ce440:
    // 0x3ce440: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ce440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce444:
    // 0x3ce444: 0x0  nop
    ctx->pc = 0x3ce444u;
    // NOP
label_3ce448:
    // 0x3ce448: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ce448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ce44c:
    // 0x3ce44c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_3ce450:
    if (ctx->pc == 0x3CE450u) {
        ctx->pc = 0x3CE450u;
            // 0x3ce450: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->pc = 0x3CE454u;
        goto label_3ce454;
    }
    ctx->pc = 0x3CE44Cu;
    {
        const bool branch_taken_0x3ce44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE44Cu;
            // 0x3ce450: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce44c) {
            ctx->pc = 0x3CE328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ce328;
        }
    }
    ctx->pc = 0x3CE454u;
label_3ce454:
    // 0x3ce454: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x3ce454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_3ce458:
    // 0x3ce458: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3ce458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3ce45c:
    // 0x3ce45c: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x3ce45cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ce460:
    // 0x3ce460: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x3ce460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_3ce464:
    // 0x3ce464: 0x8646000a  lh          $a2, 0xA($s2)
    ctx->pc = 0x3ce464u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_3ce468:
    // 0x3ce468: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3ce468u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3ce46c:
    // 0x3ce46c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x3ce46cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3ce470:
    // 0x3ce470: 0xc62101ec  lwc1        $f1, 0x1EC($s1)
    ctx->pc = 0x3ce470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ce474:
    // 0x3ce474: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3ce474u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3ce478:
    // 0x3ce478: 0x262501e0  addiu       $a1, $s1, 0x1E0
    ctx->pc = 0x3ce478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_3ce47c:
    // 0x3ce47c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3ce47cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3ce480:
    // 0x3ce480: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ce480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce484:
    // 0x3ce484: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x3ce484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3ce488:
    // 0x3ce488: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ce488u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce48c:
    // 0x3ce48c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x3ce48cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ce490:
    // 0x3ce490: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3ce490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3ce494:
    // 0x3ce494: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ce494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ce498:
    // 0x3ce498: 0x464823  subu        $t1, $v0, $a2
    ctx->pc = 0x3ce498u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3ce49c:
    // 0x3ce49c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ce49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3ce4a0:
    // 0x3ce4a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3ce4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ce4a4:
    // 0x3ce4a4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3ce4a4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce4a8:
    // 0x3ce4a8: 0x0  nop
    ctx->pc = 0x3ce4a8u;
    // NOP
label_3ce4ac:
    // 0x3ce4ac: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x3ce4acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_3ce4b0:
    // 0x3ce4b0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3ce4b0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce4b4:
    // 0x3ce4b4: 0x0  nop
    ctx->pc = 0x3ce4b4u;
    // NOP
label_3ce4b8:
    // 0x3ce4b8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ce4b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3ce4bc:
    // 0x3ce4bc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3ce4bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3ce4c0:
    // 0x3ce4c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ce4c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce4c4:
    // 0x3ce4c4: 0x0  nop
    ctx->pc = 0x3ce4c4u;
    // NOP
label_3ce4c8:
    // 0x3ce4c8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ce4c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3ce4cc:
    // 0x3ce4cc: 0x4601bb41  sub.s       $f13, $f23, $f1
    ctx->pc = 0x3ce4ccu;
    ctx->f[13] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
label_3ce4d0:
    // 0x3ce4d0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3ce4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3ce4d4:
    // 0x3ce4d4: 0xc0bc284  jal         func_2F0A10
label_3ce4d8:
    if (ctx->pc == 0x3CE4D8u) {
        ctx->pc = 0x3CE4D8u;
            // 0x3ce4d8: 0x4601bbc0  add.s       $f15, $f23, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
        ctx->pc = 0x3CE4DCu;
        goto label_3ce4dc;
    }
    ctx->pc = 0x3CE4D4u;
    SET_GPR_U32(ctx, 31, 0x3CE4DCu);
    ctx->pc = 0x3CE4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE4D4u;
            // 0x3ce4d8: 0x4601bbc0  add.s       $f15, $f23, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE4DCu; }
        if (ctx->pc != 0x3CE4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE4DCu; }
        if (ctx->pc != 0x3CE4DCu) { return; }
    }
    ctx->pc = 0x3CE4DCu;
label_3ce4dc:
    // 0x3ce4dc: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x3ce4dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_3ce4e0:
    // 0x3ce4e0: 0x3c093f00  lui         $t1, 0x3F00
    ctx->pc = 0x3ce4e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16128 << 16));
label_3ce4e4:
    // 0x3ce4e4: 0x86aa0066  lh          $t2, 0x66($s5)
    ctx->pc = 0x3ce4e4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
label_3ce4e8:
    // 0x3ce4e8: 0xc621023c  lwc1        $f1, 0x23C($s1)
    ctx->pc = 0x3ce4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ce4ec:
    // 0x3ce4ec: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x3ce4ecu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3ce4f0:
    // 0x3ce4f0: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x3ce4f0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3ce4f4:
    // 0x3ce4f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ce4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce4f8:
    // 0x3ce4f8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x3ce4f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3ce4fc:
    // 0x3ce4fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ce4fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ce500:
    // 0x3ce500: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ce500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3ce504:
    // 0x3ce504: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3ce504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ce508:
    // 0x3ce508: 0x26250230  addiu       $a1, $s1, 0x230
    ctx->pc = 0x3ce508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
label_3ce50c:
    // 0x3ce50c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ce50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ce510:
    // 0x3ce510: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ce510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce514:
    // 0x3ce514: 0x4600b900  add.s       $f4, $f23, $f0
    ctx->pc = 0x3ce514u;
    ctx->f[4] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_3ce518:
    // 0x3ce518: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x3ce518u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce51c:
    // 0x3ce51c: 0x0  nop
    ctx->pc = 0x3ce51cu;
    // NOP
label_3ce520:
    // 0x3ce520: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3ce520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3ce524:
    // 0x3ce524: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3ce524u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce528:
    // 0x3ce528: 0x0  nop
    ctx->pc = 0x3ce528u;
    // NOP
label_3ce52c:
    // 0x3ce52c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ce52cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3ce530:
    // 0x3ce530: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3ce530u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3ce534:
    // 0x3ce534: 0xc6230238  lwc1        $f3, 0x238($s1)
    ctx->pc = 0x3ce534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3ce538:
    // 0x3ce538: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ce538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce53c:
    // 0x3ce53c: 0x0  nop
    ctx->pc = 0x3ce53cu;
    // NOP
label_3ce540:
    // 0x3ce540: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ce540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3ce544:
    // 0x3ce544: 0x46036380  add.s       $f14, $f12, $f3
    ctx->pc = 0x3ce544u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
label_3ce548:
    // 0x3ce548: 0x46012341  sub.s       $f13, $f4, $f1
    ctx->pc = 0x3ce548u;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_3ce54c:
    // 0x3ce54c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3ce54cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3ce550:
    // 0x3ce550: 0xc0bc284  jal         func_2F0A10
label_3ce554:
    if (ctx->pc == 0x3CE554u) {
        ctx->pc = 0x3CE554u;
            // 0x3ce554: 0x460123c0  add.s       $f15, $f4, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
        ctx->pc = 0x3CE558u;
        goto label_3ce558;
    }
    ctx->pc = 0x3CE550u;
    SET_GPR_U32(ctx, 31, 0x3CE558u);
    ctx->pc = 0x3CE554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE550u;
            // 0x3ce554: 0x460123c0  add.s       $f15, $f4, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE558u; }
        if (ctx->pc != 0x3CE558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE558u; }
        if (ctx->pc != 0x3CE558u) { return; }
    }
    ctx->pc = 0x3CE558u;
label_3ce558:
    // 0x3ce558: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x3ce558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3ce55c:
    // 0x3ce55c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ce55cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ce560:
    // 0x3ce560: 0x320f809  jalr        $t9
label_3ce564:
    if (ctx->pc == 0x3CE564u) {
        ctx->pc = 0x3CE564u;
            // 0x3ce564: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CE568u;
        goto label_3ce568;
    }
    ctx->pc = 0x3CE560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CE568u);
        ctx->pc = 0x3CE564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE560u;
            // 0x3ce564: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CE568u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CE568u; }
            if (ctx->pc != 0x3CE568u) { return; }
        }
        }
    }
    ctx->pc = 0x3CE568u;
label_3ce568:
    // 0x3ce568: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3ce568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3ce56c:
    // 0x3ce56c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3ce56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3ce570:
    // 0x3ce570: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x3ce570u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3ce574:
    // 0x3ce574: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3ce574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3ce578:
    // 0x3ce578: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x3ce578u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ce57c:
    // 0x3ce57c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3ce57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3ce580:
    // 0x3ce580: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3ce580u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ce584:
    // 0x3ce584: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3ce584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ce588:
    // 0x3ce588: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3ce588u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ce58c:
    // 0x3ce58c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ce58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ce590:
    // 0x3ce590: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3ce590u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ce594:
    // 0x3ce594: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3ce594u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ce598:
    // 0x3ce598: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3ce598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ce59c:
    // 0x3ce59c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3ce59cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ce5a0:
    // 0x3ce5a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ce5a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ce5a4:
    // 0x3ce5a4: 0x3e00008  jr          $ra
label_3ce5a8:
    if (ctx->pc == 0x3CE5A8u) {
        ctx->pc = 0x3CE5A8u;
            // 0x3ce5a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3CE5ACu;
        goto label_3ce5ac;
    }
    ctx->pc = 0x3CE5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CE5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE5A4u;
            // 0x3ce5a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CE5ACu;
label_3ce5ac:
    // 0x3ce5ac: 0x0  nop
    ctx->pc = 0x3ce5acu;
    // NOP
label_3ce5b0:
    // 0x3ce5b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ce5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ce5b4:
    // 0x3ce5b4: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x3ce5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_3ce5b8:
    // 0x3ce5b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ce5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ce5bc:
    // 0x3ce5bc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3ce5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3ce5c0:
    // 0x3ce5c0: 0x8cc90eac  lw          $t1, 0xEAC($a2)
    ctx->pc = 0x3ce5c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3756)));
label_3ce5c4:
    // 0x3ce5c4: 0x90870010  lbu         $a3, 0x10($a0)
    ctx->pc = 0x3ce5c4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3ce5c8:
    // 0x3ce5c8: 0x8c688a08  lw          $t0, -0x75F8($v1)
    ctx->pc = 0x3ce5c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3ce5cc:
    // 0x3ce5cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ce5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ce5d0:
    // 0x3ce5d0: 0x10e6009a  beq         $a3, $a2, . + 4 + (0x9A << 2)
label_3ce5d4:
    if (ctx->pc == 0x3CE5D4u) {
        ctx->pc = 0x3CE5D4u;
            // 0x3ce5d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CE5D8u;
        goto label_3ce5d8;
    }
    ctx->pc = 0x3CE5D0u;
    {
        const bool branch_taken_0x3ce5d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x3CE5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE5D0u;
            // 0x3ce5d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce5d0) {
            ctx->pc = 0x3CE83Cu;
            goto label_3ce83c;
        }
    }
    ctx->pc = 0x3CE5D8u;
label_3ce5d8:
    // 0x3ce5d8: 0x50e00093  beql        $a3, $zero, . + 4 + (0x93 << 2)
label_3ce5dc:
    if (ctx->pc == 0x3CE5DCu) {
        ctx->pc = 0x3CE5DCu;
            // 0x3ce5dc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3CE5E0u;
        goto label_3ce5e0;
    }
    ctx->pc = 0x3CE5D8u;
    {
        const bool branch_taken_0x3ce5d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce5d8) {
            ctx->pc = 0x3CE5DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE5D8u;
            // 0x3ce5dc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CE828u;
            goto label_3ce828;
        }
    }
    ctx->pc = 0x3CE5E0u;
label_3ce5e0:
    // 0x3ce5e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ce5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ce5e4:
    // 0x3ce5e4: 0x10e3005e  beq         $a3, $v1, . + 4 + (0x5E << 2)
label_3ce5e8:
    if (ctx->pc == 0x3CE5E8u) {
        ctx->pc = 0x3CE5ECu;
        goto label_3ce5ec;
    }
    ctx->pc = 0x3CE5E4u;
    {
        const bool branch_taken_0x3ce5e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ce5e4) {
            ctx->pc = 0x3CE760u;
            goto label_3ce760;
        }
    }
    ctx->pc = 0x3CE5ECu;
label_3ce5ec:
    // 0x3ce5ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ce5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ce5f0:
    // 0x3ce5f0: 0x10e30020  beq         $a3, $v1, . + 4 + (0x20 << 2)
label_3ce5f4:
    if (ctx->pc == 0x3CE5F4u) {
        ctx->pc = 0x3CE5F8u;
        goto label_3ce5f8;
    }
    ctx->pc = 0x3CE5F0u;
    {
        const bool branch_taken_0x3ce5f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ce5f0) {
            ctx->pc = 0x3CE674u;
            goto label_3ce674;
        }
    }
    ctx->pc = 0x3CE5F8u;
label_3ce5f8:
    // 0x3ce5f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ce5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ce5fc:
    // 0x3ce5fc: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
label_3ce600:
    if (ctx->pc == 0x3CE600u) {
        ctx->pc = 0x3CE604u;
        goto label_3ce604;
    }
    ctx->pc = 0x3CE5FCu;
    {
        const bool branch_taken_0x3ce5fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ce5fc) {
            ctx->pc = 0x3CE60Cu;
            goto label_3ce60c;
        }
    }
    ctx->pc = 0x3CE604u;
label_3ce604:
    // 0x3ce604: 0x10000092  b           . + 4 + (0x92 << 2)
label_3ce608:
    if (ctx->pc == 0x3CE608u) {
        ctx->pc = 0x3CE608u;
            // 0x3ce608: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3CE60Cu;
        goto label_3ce60c;
    }
    ctx->pc = 0x3CE604u;
    {
        const bool branch_taken_0x3ce604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE604u;
            // 0x3ce608: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce604) {
            ctx->pc = 0x3CE850u;
            goto label_3ce850;
        }
    }
    ctx->pc = 0x3CE60Cu;
label_3ce60c:
    // 0x3ce60c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ce60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ce610:
    // 0x3ce610: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3ce610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3ce614:
    // 0x3ce614: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3ce614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3ce618:
    // 0x3ce618: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3ce618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3ce61c:
    // 0x3ce61c: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3ce620:
    if (ctx->pc == 0x3CE620u) {
        ctx->pc = 0x3CE620u;
            // 0x3ce620: 0xc5010018  lwc1        $f1, 0x18($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3CE624u;
        goto label_3ce624;
    }
    ctx->pc = 0x3CE61Cu;
    {
        const bool branch_taken_0x3ce61c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce61c) {
            ctx->pc = 0x3CE620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE61Cu;
            // 0x3ce620: 0xc5010018  lwc1        $f1, 0x18($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CE63Cu;
            goto label_3ce63c;
        }
    }
    ctx->pc = 0x3CE624u;
label_3ce624:
    // 0x3ce624: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ce624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ce628:
    // 0x3ce628: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ce628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ce62c:
    // 0x3ce62c: 0x320f809  jalr        $t9
label_3ce630:
    if (ctx->pc == 0x3CE630u) {
        ctx->pc = 0x3CE630u;
            // 0x3ce630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CE634u;
        goto label_3ce634;
    }
    ctx->pc = 0x3CE62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CE634u);
        ctx->pc = 0x3CE630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE62Cu;
            // 0x3ce630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CE634u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CE634u; }
            if (ctx->pc != 0x3CE634u) { return; }
        }
        }
    }
    ctx->pc = 0x3CE634u;
label_3ce634:
    // 0x3ce634: 0x10000085  b           . + 4 + (0x85 << 2)
label_3ce638:
    if (ctx->pc == 0x3CE638u) {
        ctx->pc = 0x3CE63Cu;
        goto label_3ce63c;
    }
    ctx->pc = 0x3CE634u;
    {
        const bool branch_taken_0x3ce634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce634) {
            ctx->pc = 0x3CE84Cu;
            goto label_3ce84c;
        }
    }
    ctx->pc = 0x3CE63Cu;
label_3ce63c:
    // 0x3ce63c: 0xc4a00054  lwc1        $f0, 0x54($a1)
    ctx->pc = 0x3ce63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ce640:
    // 0x3ce640: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3ce640u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ce644:
    // 0x3ce644: 0xe4a10054  swc1        $f1, 0x54($a1)
    ctx->pc = 0x3ce644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
label_3ce648:
    // 0x3ce648: 0xc4a0006c  lwc1        $f0, 0x6C($a1)
    ctx->pc = 0x3ce648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ce64c:
    // 0x3ce64c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ce64cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ce650:
    // 0x3ce650: 0x4501007e  bc1t        . + 4 + (0x7E << 2)
label_3ce654:
    if (ctx->pc == 0x3CE654u) {
        ctx->pc = 0x3CE658u;
        goto label_3ce658;
    }
    ctx->pc = 0x3CE650u;
    {
        const bool branch_taken_0x3ce650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ce650) {
            ctx->pc = 0x3CE84Cu;
            goto label_3ce84c;
        }
    }
    ctx->pc = 0x3CE658u;
label_3ce658:
    // 0x3ce658: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x3ce658u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
label_3ce65c:
    // 0x3ce65c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ce65cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ce660:
    // 0x3ce660: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3ce660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3ce664:
    // 0x3ce664: 0x320f809  jalr        $t9
label_3ce668:
    if (ctx->pc == 0x3CE668u) {
        ctx->pc = 0x3CE66Cu;
        goto label_3ce66c;
    }
    ctx->pc = 0x3CE664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CE66Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CE66Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CE66Cu; }
            if (ctx->pc != 0x3CE66Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3CE66Cu;
label_3ce66c:
    // 0x3ce66c: 0x10000077  b           . + 4 + (0x77 << 2)
label_3ce670:
    if (ctx->pc == 0x3CE670u) {
        ctx->pc = 0x3CE674u;
        goto label_3ce674;
    }
    ctx->pc = 0x3CE66Cu;
    {
        const bool branch_taken_0x3ce66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce66c) {
            ctx->pc = 0x3CE84Cu;
            goto label_3ce84c;
        }
    }
    ctx->pc = 0x3CE674u;
label_3ce674:
    // 0x3ce674: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ce674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ce678:
    // 0x3ce678: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3ce678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3ce67c:
    // 0x3ce67c: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3ce67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3ce680:
    // 0x3ce680: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3ce680u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3ce684:
    // 0x3ce684: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3ce688:
    if (ctx->pc == 0x3CE688u) {
        ctx->pc = 0x3CE688u;
            // 0x3ce688: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->pc = 0x3CE68Cu;
        goto label_3ce68c;
    }
    ctx->pc = 0x3CE684u;
    {
        const bool branch_taken_0x3ce684 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce684) {
            ctx->pc = 0x3CE688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE684u;
            // 0x3ce688: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CE6A4u;
            goto label_3ce6a4;
        }
    }
    ctx->pc = 0x3CE68Cu;
label_3ce68c:
    // 0x3ce68c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ce68cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ce690:
    // 0x3ce690: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ce690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ce694:
    // 0x3ce694: 0x320f809  jalr        $t9
label_3ce698:
    if (ctx->pc == 0x3CE698u) {
        ctx->pc = 0x3CE698u;
            // 0x3ce698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CE69Cu;
        goto label_3ce69c;
    }
    ctx->pc = 0x3CE694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CE69Cu);
        ctx->pc = 0x3CE698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE694u;
            // 0x3ce698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CE69Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CE69Cu; }
            if (ctx->pc != 0x3CE69Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3CE69Cu;
label_3ce69c:
    // 0x3ce69c: 0x1000006b  b           . + 4 + (0x6B << 2)
label_3ce6a0:
    if (ctx->pc == 0x3CE6A0u) {
        ctx->pc = 0x3CE6A4u;
        goto label_3ce6a4;
    }
    ctx->pc = 0x3CE69Cu;
    {
        const bool branch_taken_0x3ce69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce69c) {
            ctx->pc = 0x3CE84Cu;
            goto label_3ce84c;
        }
    }
    ctx->pc = 0x3CE6A4u;
label_3ce6a4:
    // 0x3ce6a4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3ce6a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3ce6a8:
    // 0x3ce6a8: 0x90a3005d  lbu         $v1, 0x5D($a1)
    ctx->pc = 0x3ce6a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 93)));
label_3ce6ac:
    // 0x3ce6ac: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_3ce6b0:
    if (ctx->pc == 0x3CE6B0u) {
        ctx->pc = 0x3CE6B0u;
            // 0x3ce6b0: 0xc5030018  lwc1        $f3, 0x18($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x3CE6B4u;
        goto label_3ce6b4;
    }
    ctx->pc = 0x3CE6ACu;
    {
        const bool branch_taken_0x3ce6ac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3CE6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE6ACu;
            // 0x3ce6b0: 0xc5030018  lwc1        $f3, 0x18($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce6ac) {
            ctx->pc = 0x3CE6C0u;
            goto label_3ce6c0;
        }
    }
    ctx->pc = 0x3CE6B4u;
label_3ce6b4:
    // 0x3ce6b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ce6b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce6b8:
    // 0x3ce6b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ce6bc:
    if (ctx->pc == 0x3CE6BCu) {
        ctx->pc = 0x3CE6BCu;
            // 0x3ce6bc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3CE6C0u;
        goto label_3ce6c0;
    }
    ctx->pc = 0x3CE6B8u;
    {
        const bool branch_taken_0x3ce6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE6B8u;
            // 0x3ce6bc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce6b8) {
            ctx->pc = 0x3CE6DCu;
            goto label_3ce6dc;
        }
    }
    ctx->pc = 0x3CE6C0u;
label_3ce6c0:
    // 0x3ce6c0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x3ce6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_3ce6c4:
    // 0x3ce6c4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3ce6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3ce6c8:
    // 0x3ce6c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ce6c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3ce6cc:
    // 0x3ce6cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ce6ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce6d0:
    // 0x3ce6d0: 0x0  nop
    ctx->pc = 0x3ce6d0u;
    // NOP
label_3ce6d4:
    // 0x3ce6d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3ce6d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ce6d8:
    // 0x3ce6d8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ce6d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3ce6dc:
    // 0x3ce6dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ce6dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce6e0:
    // 0x3ce6e0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ce6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3ce6e4:
    // 0x3ce6e4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3ce6e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ce6e8:
    // 0x3ce6e8: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x3ce6e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3ce6ec:
    // 0x3ce6ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ce6ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce6f0:
    // 0x3ce6f0: 0x0  nop
    ctx->pc = 0x3ce6f0u;
    // NOP
label_3ce6f4:
    // 0x3ce6f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ce6f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ce6f8:
    // 0x3ce6f8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3ce6fc:
    if (ctx->pc == 0x3CE6FCu) {
        ctx->pc = 0x3CE6FCu;
            // 0x3ce6fc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3CE700u;
        goto label_3ce700;
    }
    ctx->pc = 0x3CE6F8u;
    {
        const bool branch_taken_0x3ce6f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ce6f8) {
            ctx->pc = 0x3CE6FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE6F8u;
            // 0x3ce6fc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CE710u;
            goto label_3ce710;
        }
    }
    ctx->pc = 0x3CE700u;
label_3ce700:
    // 0x3ce700: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ce700u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ce704:
    // 0x3ce704: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3ce704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3ce708:
    // 0x3ce708: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ce70c:
    if (ctx->pc == 0x3CE70Cu) {
        ctx->pc = 0x3CE70Cu;
            // 0x3ce70c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3CE710u;
        goto label_3ce710;
    }
    ctx->pc = 0x3CE708u;
    {
        const bool branch_taken_0x3ce708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE708u;
            // 0x3ce70c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce708) {
            ctx->pc = 0x3CE728u;
            goto label_3ce728;
        }
    }
    ctx->pc = 0x3CE710u;
label_3ce710:
    // 0x3ce710: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ce710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3ce714:
    // 0x3ce714: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ce714u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ce718:
    // 0x3ce718: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3ce718u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3ce71c:
    // 0x3ce71c: 0x0  nop
    ctx->pc = 0x3ce71cu;
    // NOP
label_3ce720:
    // 0x3ce720: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ce720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3ce724:
    // 0x3ce724: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3ce724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3ce728:
    // 0x3ce728: 0xa0a4005d  sb          $a0, 0x5D($a1)
    ctx->pc = 0x3ce728u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 93), (uint8_t)GPR_U32(ctx, 4));
label_3ce72c:
    // 0x3ce72c: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x3ce72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_3ce730:
    // 0x3ce730: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3ce730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3ce734:
    // 0x3ce734: 0x906300e4  lbu         $v1, 0xE4($v1)
    ctx->pc = 0x3ce734u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
label_3ce738:
    // 0x3ce738: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3ce738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3ce73c:
    // 0x3ce73c: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
label_3ce740:
    if (ctx->pc == 0x3CE740u) {
        ctx->pc = 0x3CE744u;
        goto label_3ce744;
    }
    ctx->pc = 0x3CE73Cu;
    {
        const bool branch_taken_0x3ce73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce73c) {
            ctx->pc = 0x3CE84Cu;
            goto label_3ce84c;
        }
    }
    ctx->pc = 0x3CE744u;
label_3ce744:
    // 0x3ce744: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x3ce744u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
label_3ce748:
    // 0x3ce748: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x3ce748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3ce74c:
    // 0x3ce74c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3ce74cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3ce750:
    // 0x3ce750: 0x320f809  jalr        $t9
label_3ce754:
    if (ctx->pc == 0x3CE754u) {
        ctx->pc = 0x3CE754u;
            // 0x3ce754: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CE758u;
        goto label_3ce758;
    }
    ctx->pc = 0x3CE750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CE758u);
        ctx->pc = 0x3CE754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE750u;
            // 0x3ce754: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CE758u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CE758u; }
            if (ctx->pc != 0x3CE758u) { return; }
        }
        }
    }
    ctx->pc = 0x3CE758u;
label_3ce758:
    // 0x3ce758: 0x1000003c  b           . + 4 + (0x3C << 2)
label_3ce75c:
    if (ctx->pc == 0x3CE75Cu) {
        ctx->pc = 0x3CE760u;
        goto label_3ce760;
    }
    ctx->pc = 0x3CE758u;
    {
        const bool branch_taken_0x3ce758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce758) {
            ctx->pc = 0x3CE84Cu;
            goto label_3ce84c;
        }
    }
    ctx->pc = 0x3CE760u;
label_3ce760:
    // 0x3ce760: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ce760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ce764:
    // 0x3ce764: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3ce764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3ce768:
    // 0x3ce768: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3ce768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3ce76c:
    // 0x3ce76c: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3ce76cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3ce770:
    // 0x3ce770: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3ce774:
    if (ctx->pc == 0x3CE774u) {
        ctx->pc = 0x3CE774u;
            // 0x3ce774: 0xc5010018  lwc1        $f1, 0x18($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3CE778u;
        goto label_3ce778;
    }
    ctx->pc = 0x3CE770u;
    {
        const bool branch_taken_0x3ce770 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce770) {
            ctx->pc = 0x3CE774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE770u;
            // 0x3ce774: 0xc5010018  lwc1        $f1, 0x18($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CE790u;
            goto label_3ce790;
        }
    }
    ctx->pc = 0x3CE778u;
label_3ce778:
    // 0x3ce778: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ce778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ce77c:
    // 0x3ce77c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ce77cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ce780:
    // 0x3ce780: 0x320f809  jalr        $t9
label_3ce784:
    if (ctx->pc == 0x3CE784u) {
        ctx->pc = 0x3CE784u;
            // 0x3ce784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CE788u;
        goto label_3ce788;
    }
    ctx->pc = 0x3CE780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CE788u);
        ctx->pc = 0x3CE784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE780u;
            // 0x3ce784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CE788u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CE788u; }
            if (ctx->pc != 0x3CE788u) { return; }
        }
        }
    }
    ctx->pc = 0x3CE788u;
label_3ce788:
    // 0x3ce788: 0x10000030  b           . + 4 + (0x30 << 2)
label_3ce78c:
    if (ctx->pc == 0x3CE78Cu) {
        ctx->pc = 0x3CE790u;
        goto label_3ce790;
    }
    ctx->pc = 0x3CE788u;
    {
        const bool branch_taken_0x3ce788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce788) {
            ctx->pc = 0x3CE84Cu;
            goto label_3ce84c;
        }
    }
    ctx->pc = 0x3CE790u;
label_3ce790:
    // 0x3ce790: 0xc4a00054  lwc1        $f0, 0x54($a1)
    ctx->pc = 0x3ce790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ce794:
    // 0x3ce794: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ce794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ce798:
    // 0x3ce798: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x3ce798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
label_3ce79c:
    // 0x3ce79c: 0xc4a20074  lwc1        $f2, 0x74($a1)
    ctx->pc = 0x3ce79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ce7a0:
    // 0x3ce7a0: 0xc4a00054  lwc1        $f0, 0x54($a1)
    ctx->pc = 0x3ce7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ce7a4:
    // 0x3ce7a4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3ce7a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ce7a8:
    // 0x3ce7a8: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_3ce7ac:
    if (ctx->pc == 0x3CE7ACu) {
        ctx->pc = 0x3CE7ACu;
            // 0x3ce7ac: 0x3c04437f  lui         $a0, 0x437F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
        ctx->pc = 0x3CE7B0u;
        goto label_3ce7b0;
    }
    ctx->pc = 0x3CE7A8u;
    {
        const bool branch_taken_0x3ce7a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ce7a8) {
            ctx->pc = 0x3CE7ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE7A8u;
            // 0x3ce7ac: 0x3c04437f  lui         $a0, 0x437F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CE7CCu;
            goto label_3ce7cc;
        }
    }
    ctx->pc = 0x3CE7B0u;
label_3ce7b0:
    // 0x3ce7b0: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x3ce7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
label_3ce7b4:
    // 0x3ce7b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ce7b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ce7b8:
    // 0x3ce7b8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ce7b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ce7bc:
    // 0x3ce7bc: 0x320f809  jalr        $t9
label_3ce7c0:
    if (ctx->pc == 0x3CE7C0u) {
        ctx->pc = 0x3CE7C0u;
            // 0x3ce7c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CE7C4u;
        goto label_3ce7c4;
    }
    ctx->pc = 0x3CE7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CE7C4u);
        ctx->pc = 0x3CE7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE7BCu;
            // 0x3ce7c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CE7C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CE7C4u; }
            if (ctx->pc != 0x3CE7C4u) { return; }
        }
        }
    }
    ctx->pc = 0x3CE7C4u;
label_3ce7c4:
    // 0x3ce7c4: 0x10000021  b           . + 4 + (0x21 << 2)
label_3ce7c8:
    if (ctx->pc == 0x3CE7C8u) {
        ctx->pc = 0x3CE7CCu;
        goto label_3ce7cc;
    }
    ctx->pc = 0x3CE7C4u;
    {
        const bool branch_taken_0x3ce7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce7c4) {
            ctx->pc = 0x3CE84Cu;
            goto label_3ce84c;
        }
    }
    ctx->pc = 0x3CE7CCu;
label_3ce7cc:
    // 0x3ce7cc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ce7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3ce7d0:
    // 0x3ce7d0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ce7d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ce7d4:
    // 0x3ce7d4: 0x0  nop
    ctx->pc = 0x3ce7d4u;
    // NOP
label_3ce7d8:
    // 0x3ce7d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3ce7d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3ce7dc:
    // 0x3ce7dc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3ce7dcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_3ce7e0:
    // 0x3ce7e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ce7e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3ce7e4:
    // 0x3ce7e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ce7e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ce7e8:
    // 0x3ce7e8: 0x0  nop
    ctx->pc = 0x3ce7e8u;
    // NOP
label_3ce7ec:
    // 0x3ce7ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ce7ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ce7f0:
    // 0x3ce7f0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3ce7f4:
    if (ctx->pc == 0x3CE7F4u) {
        ctx->pc = 0x3CE7F4u;
            // 0x3ce7f4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3CE7F8u;
        goto label_3ce7f8;
    }
    ctx->pc = 0x3CE7F0u;
    {
        const bool branch_taken_0x3ce7f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ce7f0) {
            ctx->pc = 0x3CE7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE7F0u;
            // 0x3ce7f4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CE808u;
            goto label_3ce808;
        }
    }
    ctx->pc = 0x3CE7F8u;
label_3ce7f8:
    // 0x3ce7f8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ce7f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ce7fc:
    // 0x3ce7fc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3ce7fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3ce800:
    // 0x3ce800: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ce804:
    if (ctx->pc == 0x3CE804u) {
        ctx->pc = 0x3CE804u;
            // 0x3ce804: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3CE808u;
        goto label_3ce808;
    }
    ctx->pc = 0x3CE800u;
    {
        const bool branch_taken_0x3ce800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE800u;
            // 0x3ce804: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce800) {
            ctx->pc = 0x3CE820u;
            goto label_3ce820;
        }
    }
    ctx->pc = 0x3CE808u;
label_3ce808:
    // 0x3ce808: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ce808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3ce80c:
    // 0x3ce80c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ce80cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ce810:
    // 0x3ce810: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3ce810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3ce814:
    // 0x3ce814: 0x0  nop
    ctx->pc = 0x3ce814u;
    // NOP
label_3ce818:
    // 0x3ce818: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ce818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3ce81c:
    // 0x3ce81c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3ce81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3ce820:
    // 0x3ce820: 0x1000000a  b           . + 4 + (0xA << 2)
label_3ce824:
    if (ctx->pc == 0x3CE824u) {
        ctx->pc = 0x3CE824u;
            // 0x3ce824: 0xa0a4005c  sb          $a0, 0x5C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 92), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x3CE828u;
        goto label_3ce828;
    }
    ctx->pc = 0x3CE820u;
    {
        const bool branch_taken_0x3ce820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE820u;
            // 0x3ce824: 0xa0a4005c  sb          $a0, 0x5C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 92), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce820) {
            ctx->pc = 0x3CE84Cu;
            goto label_3ce84c;
        }
    }
    ctx->pc = 0x3CE828u;
label_3ce828:
    // 0x3ce828: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3ce828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3ce82c:
    // 0x3ce82c: 0x320f809  jalr        $t9
label_3ce830:
    if (ctx->pc == 0x3CE830u) {
        ctx->pc = 0x3CE834u;
        goto label_3ce834;
    }
    ctx->pc = 0x3CE82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CE834u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CE834u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CE834u; }
            if (ctx->pc != 0x3CE834u) { return; }
        }
        }
    }
    ctx->pc = 0x3CE834u;
label_3ce834:
    // 0x3ce834: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ce838:
    if (ctx->pc == 0x3CE838u) {
        ctx->pc = 0x3CE83Cu;
        goto label_3ce83c;
    }
    ctx->pc = 0x3CE834u;
    {
        const bool branch_taken_0x3ce834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce834) {
            ctx->pc = 0x3CE84Cu;
            goto label_3ce84c;
        }
    }
    ctx->pc = 0x3CE83Cu;
label_3ce83c:
    // 0x3ce83c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3ce83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3ce840:
    // 0x3ce840: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3ce840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3ce844:
    // 0x3ce844: 0xc057b7c  jal         func_15EDF0
label_3ce848:
    if (ctx->pc == 0x3CE848u) {
        ctx->pc = 0x3CE848u;
            // 0x3ce848: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3CE84Cu;
        goto label_3ce84c;
    }
    ctx->pc = 0x3CE844u;
    SET_GPR_U32(ctx, 31, 0x3CE84Cu);
    ctx->pc = 0x3CE848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE844u;
            // 0x3ce848: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE84Cu; }
        if (ctx->pc != 0x3CE84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE84Cu; }
        if (ctx->pc != 0x3CE84Cu) { return; }
    }
    ctx->pc = 0x3CE84Cu;
label_3ce84c:
    // 0x3ce84c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ce84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ce850:
    // 0x3ce850: 0x3e00008  jr          $ra
label_3ce854:
    if (ctx->pc == 0x3CE854u) {
        ctx->pc = 0x3CE854u;
            // 0x3ce854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3CE858u;
        goto label_3ce858;
    }
    ctx->pc = 0x3CE850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CE854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE850u;
            // 0x3ce854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CE858u;
label_3ce858:
    // 0x3ce858: 0x0  nop
    ctx->pc = 0x3ce858u;
    // NOP
label_3ce85c:
    // 0x3ce85c: 0x0  nop
    ctx->pc = 0x3ce85cu;
    // NOP
label_3ce860:
    // 0x3ce860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ce860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ce864:
    // 0x3ce864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ce864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ce868:
    // 0x3ce868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ce868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ce86c:
    // 0x3ce86c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ce86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ce870:
    // 0x3ce870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ce870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ce874:
    // 0x3ce874: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3ce878:
    if (ctx->pc == 0x3CE878u) {
        ctx->pc = 0x3CE878u;
            // 0x3ce878: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CE87Cu;
        goto label_3ce87c;
    }
    ctx->pc = 0x3CE874u;
    {
        const bool branch_taken_0x3ce874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE874u;
            // 0x3ce878: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce874) {
            ctx->pc = 0x3CE8A8u;
            goto label_3ce8a8;
        }
    }
    ctx->pc = 0x3CE87Cu;
label_3ce87c:
    // 0x3ce87c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3ce87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3ce880:
    // 0x3ce880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ce880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce884:
    // 0x3ce884: 0x244290e0  addiu       $v0, $v0, -0x6F20
    ctx->pc = 0x3ce884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938848));
label_3ce888:
    // 0x3ce888: 0xc0ee744  jal         func_3B9D10
label_3ce88c:
    if (ctx->pc == 0x3CE88Cu) {
        ctx->pc = 0x3CE88Cu;
            // 0x3ce88c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3CE890u;
        goto label_3ce890;
    }
    ctx->pc = 0x3CE888u;
    SET_GPR_U32(ctx, 31, 0x3CE890u);
    ctx->pc = 0x3CE88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE888u;
            // 0x3ce88c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D10u;
    if (runtime->hasFunction(0x3B9D10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE890u; }
        if (ctx->pc != 0x3CE890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D10_0x3b9d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE890u; }
        if (ctx->pc != 0x3CE890u) { return; }
    }
    ctx->pc = 0x3CE890u;
label_3ce890:
    // 0x3ce890: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3ce890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3ce894:
    // 0x3ce894: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3ce894u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3ce898:
    // 0x3ce898: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3ce89c:
    if (ctx->pc == 0x3CE89Cu) {
        ctx->pc = 0x3CE89Cu;
            // 0x3ce89c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CE8A0u;
        goto label_3ce8a0;
    }
    ctx->pc = 0x3CE898u;
    {
        const bool branch_taken_0x3ce898 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3ce898) {
            ctx->pc = 0x3CE89Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE898u;
            // 0x3ce89c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CE8ACu;
            goto label_3ce8ac;
        }
    }
    ctx->pc = 0x3CE8A0u;
label_3ce8a0:
    // 0x3ce8a0: 0xc0400a8  jal         func_1002A0
label_3ce8a4:
    if (ctx->pc == 0x3CE8A4u) {
        ctx->pc = 0x3CE8A4u;
            // 0x3ce8a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CE8A8u;
        goto label_3ce8a8;
    }
    ctx->pc = 0x3CE8A0u;
    SET_GPR_U32(ctx, 31, 0x3CE8A8u);
    ctx->pc = 0x3CE8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE8A0u;
            // 0x3ce8a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE8A8u; }
        if (ctx->pc != 0x3CE8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CE8A8u; }
        if (ctx->pc != 0x3CE8A8u) { return; }
    }
    ctx->pc = 0x3CE8A8u;
label_3ce8a8:
    // 0x3ce8a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ce8a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ce8ac:
    // 0x3ce8ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ce8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ce8b0:
    // 0x3ce8b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ce8b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ce8b4:
    // 0x3ce8b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ce8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ce8b8:
    // 0x3ce8b8: 0x3e00008  jr          $ra
label_3ce8bc:
    if (ctx->pc == 0x3CE8BCu) {
        ctx->pc = 0x3CE8BCu;
            // 0x3ce8bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3CE8C0u;
        goto label_fallthrough_0x3ce8b8;
    }
    ctx->pc = 0x3CE8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CE8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CE8B8u;
            // 0x3ce8bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3ce8b8:
    ctx->pc = 0x3CE8C0u;
}
