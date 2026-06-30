#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FB100
// Address: 0x1fb100 - 0x1fc0a0
void sub_001FB100_0x1fb100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB100_0x1fb100");
#endif

    switch (ctx->pc) {
        case 0x1fb100u: goto label_1fb100;
        case 0x1fb104u: goto label_1fb104;
        case 0x1fb108u: goto label_1fb108;
        case 0x1fb10cu: goto label_1fb10c;
        case 0x1fb110u: goto label_1fb110;
        case 0x1fb114u: goto label_1fb114;
        case 0x1fb118u: goto label_1fb118;
        case 0x1fb11cu: goto label_1fb11c;
        case 0x1fb120u: goto label_1fb120;
        case 0x1fb124u: goto label_1fb124;
        case 0x1fb128u: goto label_1fb128;
        case 0x1fb12cu: goto label_1fb12c;
        case 0x1fb130u: goto label_1fb130;
        case 0x1fb134u: goto label_1fb134;
        case 0x1fb138u: goto label_1fb138;
        case 0x1fb13cu: goto label_1fb13c;
        case 0x1fb140u: goto label_1fb140;
        case 0x1fb144u: goto label_1fb144;
        case 0x1fb148u: goto label_1fb148;
        case 0x1fb14cu: goto label_1fb14c;
        case 0x1fb150u: goto label_1fb150;
        case 0x1fb154u: goto label_1fb154;
        case 0x1fb158u: goto label_1fb158;
        case 0x1fb15cu: goto label_1fb15c;
        case 0x1fb160u: goto label_1fb160;
        case 0x1fb164u: goto label_1fb164;
        case 0x1fb168u: goto label_1fb168;
        case 0x1fb16cu: goto label_1fb16c;
        case 0x1fb170u: goto label_1fb170;
        case 0x1fb174u: goto label_1fb174;
        case 0x1fb178u: goto label_1fb178;
        case 0x1fb17cu: goto label_1fb17c;
        case 0x1fb180u: goto label_1fb180;
        case 0x1fb184u: goto label_1fb184;
        case 0x1fb188u: goto label_1fb188;
        case 0x1fb18cu: goto label_1fb18c;
        case 0x1fb190u: goto label_1fb190;
        case 0x1fb194u: goto label_1fb194;
        case 0x1fb198u: goto label_1fb198;
        case 0x1fb19cu: goto label_1fb19c;
        case 0x1fb1a0u: goto label_1fb1a0;
        case 0x1fb1a4u: goto label_1fb1a4;
        case 0x1fb1a8u: goto label_1fb1a8;
        case 0x1fb1acu: goto label_1fb1ac;
        case 0x1fb1b0u: goto label_1fb1b0;
        case 0x1fb1b4u: goto label_1fb1b4;
        case 0x1fb1b8u: goto label_1fb1b8;
        case 0x1fb1bcu: goto label_1fb1bc;
        case 0x1fb1c0u: goto label_1fb1c0;
        case 0x1fb1c4u: goto label_1fb1c4;
        case 0x1fb1c8u: goto label_1fb1c8;
        case 0x1fb1ccu: goto label_1fb1cc;
        case 0x1fb1d0u: goto label_1fb1d0;
        case 0x1fb1d4u: goto label_1fb1d4;
        case 0x1fb1d8u: goto label_1fb1d8;
        case 0x1fb1dcu: goto label_1fb1dc;
        case 0x1fb1e0u: goto label_1fb1e0;
        case 0x1fb1e4u: goto label_1fb1e4;
        case 0x1fb1e8u: goto label_1fb1e8;
        case 0x1fb1ecu: goto label_1fb1ec;
        case 0x1fb1f0u: goto label_1fb1f0;
        case 0x1fb1f4u: goto label_1fb1f4;
        case 0x1fb1f8u: goto label_1fb1f8;
        case 0x1fb1fcu: goto label_1fb1fc;
        case 0x1fb200u: goto label_1fb200;
        case 0x1fb204u: goto label_1fb204;
        case 0x1fb208u: goto label_1fb208;
        case 0x1fb20cu: goto label_1fb20c;
        case 0x1fb210u: goto label_1fb210;
        case 0x1fb214u: goto label_1fb214;
        case 0x1fb218u: goto label_1fb218;
        case 0x1fb21cu: goto label_1fb21c;
        case 0x1fb220u: goto label_1fb220;
        case 0x1fb224u: goto label_1fb224;
        case 0x1fb228u: goto label_1fb228;
        case 0x1fb22cu: goto label_1fb22c;
        case 0x1fb230u: goto label_1fb230;
        case 0x1fb234u: goto label_1fb234;
        case 0x1fb238u: goto label_1fb238;
        case 0x1fb23cu: goto label_1fb23c;
        case 0x1fb240u: goto label_1fb240;
        case 0x1fb244u: goto label_1fb244;
        case 0x1fb248u: goto label_1fb248;
        case 0x1fb24cu: goto label_1fb24c;
        case 0x1fb250u: goto label_1fb250;
        case 0x1fb254u: goto label_1fb254;
        case 0x1fb258u: goto label_1fb258;
        case 0x1fb25cu: goto label_1fb25c;
        case 0x1fb260u: goto label_1fb260;
        case 0x1fb264u: goto label_1fb264;
        case 0x1fb268u: goto label_1fb268;
        case 0x1fb26cu: goto label_1fb26c;
        case 0x1fb270u: goto label_1fb270;
        case 0x1fb274u: goto label_1fb274;
        case 0x1fb278u: goto label_1fb278;
        case 0x1fb27cu: goto label_1fb27c;
        case 0x1fb280u: goto label_1fb280;
        case 0x1fb284u: goto label_1fb284;
        case 0x1fb288u: goto label_1fb288;
        case 0x1fb28cu: goto label_1fb28c;
        case 0x1fb290u: goto label_1fb290;
        case 0x1fb294u: goto label_1fb294;
        case 0x1fb298u: goto label_1fb298;
        case 0x1fb29cu: goto label_1fb29c;
        case 0x1fb2a0u: goto label_1fb2a0;
        case 0x1fb2a4u: goto label_1fb2a4;
        case 0x1fb2a8u: goto label_1fb2a8;
        case 0x1fb2acu: goto label_1fb2ac;
        case 0x1fb2b0u: goto label_1fb2b0;
        case 0x1fb2b4u: goto label_1fb2b4;
        case 0x1fb2b8u: goto label_1fb2b8;
        case 0x1fb2bcu: goto label_1fb2bc;
        case 0x1fb2c0u: goto label_1fb2c0;
        case 0x1fb2c4u: goto label_1fb2c4;
        case 0x1fb2c8u: goto label_1fb2c8;
        case 0x1fb2ccu: goto label_1fb2cc;
        case 0x1fb2d0u: goto label_1fb2d0;
        case 0x1fb2d4u: goto label_1fb2d4;
        case 0x1fb2d8u: goto label_1fb2d8;
        case 0x1fb2dcu: goto label_1fb2dc;
        case 0x1fb2e0u: goto label_1fb2e0;
        case 0x1fb2e4u: goto label_1fb2e4;
        case 0x1fb2e8u: goto label_1fb2e8;
        case 0x1fb2ecu: goto label_1fb2ec;
        case 0x1fb2f0u: goto label_1fb2f0;
        case 0x1fb2f4u: goto label_1fb2f4;
        case 0x1fb2f8u: goto label_1fb2f8;
        case 0x1fb2fcu: goto label_1fb2fc;
        case 0x1fb300u: goto label_1fb300;
        case 0x1fb304u: goto label_1fb304;
        case 0x1fb308u: goto label_1fb308;
        case 0x1fb30cu: goto label_1fb30c;
        case 0x1fb310u: goto label_1fb310;
        case 0x1fb314u: goto label_1fb314;
        case 0x1fb318u: goto label_1fb318;
        case 0x1fb31cu: goto label_1fb31c;
        case 0x1fb320u: goto label_1fb320;
        case 0x1fb324u: goto label_1fb324;
        case 0x1fb328u: goto label_1fb328;
        case 0x1fb32cu: goto label_1fb32c;
        case 0x1fb330u: goto label_1fb330;
        case 0x1fb334u: goto label_1fb334;
        case 0x1fb338u: goto label_1fb338;
        case 0x1fb33cu: goto label_1fb33c;
        case 0x1fb340u: goto label_1fb340;
        case 0x1fb344u: goto label_1fb344;
        case 0x1fb348u: goto label_1fb348;
        case 0x1fb34cu: goto label_1fb34c;
        case 0x1fb350u: goto label_1fb350;
        case 0x1fb354u: goto label_1fb354;
        case 0x1fb358u: goto label_1fb358;
        case 0x1fb35cu: goto label_1fb35c;
        case 0x1fb360u: goto label_1fb360;
        case 0x1fb364u: goto label_1fb364;
        case 0x1fb368u: goto label_1fb368;
        case 0x1fb36cu: goto label_1fb36c;
        case 0x1fb370u: goto label_1fb370;
        case 0x1fb374u: goto label_1fb374;
        case 0x1fb378u: goto label_1fb378;
        case 0x1fb37cu: goto label_1fb37c;
        case 0x1fb380u: goto label_1fb380;
        case 0x1fb384u: goto label_1fb384;
        case 0x1fb388u: goto label_1fb388;
        case 0x1fb38cu: goto label_1fb38c;
        case 0x1fb390u: goto label_1fb390;
        case 0x1fb394u: goto label_1fb394;
        case 0x1fb398u: goto label_1fb398;
        case 0x1fb39cu: goto label_1fb39c;
        case 0x1fb3a0u: goto label_1fb3a0;
        case 0x1fb3a4u: goto label_1fb3a4;
        case 0x1fb3a8u: goto label_1fb3a8;
        case 0x1fb3acu: goto label_1fb3ac;
        case 0x1fb3b0u: goto label_1fb3b0;
        case 0x1fb3b4u: goto label_1fb3b4;
        case 0x1fb3b8u: goto label_1fb3b8;
        case 0x1fb3bcu: goto label_1fb3bc;
        case 0x1fb3c0u: goto label_1fb3c0;
        case 0x1fb3c4u: goto label_1fb3c4;
        case 0x1fb3c8u: goto label_1fb3c8;
        case 0x1fb3ccu: goto label_1fb3cc;
        case 0x1fb3d0u: goto label_1fb3d0;
        case 0x1fb3d4u: goto label_1fb3d4;
        case 0x1fb3d8u: goto label_1fb3d8;
        case 0x1fb3dcu: goto label_1fb3dc;
        case 0x1fb3e0u: goto label_1fb3e0;
        case 0x1fb3e4u: goto label_1fb3e4;
        case 0x1fb3e8u: goto label_1fb3e8;
        case 0x1fb3ecu: goto label_1fb3ec;
        case 0x1fb3f0u: goto label_1fb3f0;
        case 0x1fb3f4u: goto label_1fb3f4;
        case 0x1fb3f8u: goto label_1fb3f8;
        case 0x1fb3fcu: goto label_1fb3fc;
        case 0x1fb400u: goto label_1fb400;
        case 0x1fb404u: goto label_1fb404;
        case 0x1fb408u: goto label_1fb408;
        case 0x1fb40cu: goto label_1fb40c;
        case 0x1fb410u: goto label_1fb410;
        case 0x1fb414u: goto label_1fb414;
        case 0x1fb418u: goto label_1fb418;
        case 0x1fb41cu: goto label_1fb41c;
        case 0x1fb420u: goto label_1fb420;
        case 0x1fb424u: goto label_1fb424;
        case 0x1fb428u: goto label_1fb428;
        case 0x1fb42cu: goto label_1fb42c;
        case 0x1fb430u: goto label_1fb430;
        case 0x1fb434u: goto label_1fb434;
        case 0x1fb438u: goto label_1fb438;
        case 0x1fb43cu: goto label_1fb43c;
        case 0x1fb440u: goto label_1fb440;
        case 0x1fb444u: goto label_1fb444;
        case 0x1fb448u: goto label_1fb448;
        case 0x1fb44cu: goto label_1fb44c;
        case 0x1fb450u: goto label_1fb450;
        case 0x1fb454u: goto label_1fb454;
        case 0x1fb458u: goto label_1fb458;
        case 0x1fb45cu: goto label_1fb45c;
        case 0x1fb460u: goto label_1fb460;
        case 0x1fb464u: goto label_1fb464;
        case 0x1fb468u: goto label_1fb468;
        case 0x1fb46cu: goto label_1fb46c;
        case 0x1fb470u: goto label_1fb470;
        case 0x1fb474u: goto label_1fb474;
        case 0x1fb478u: goto label_1fb478;
        case 0x1fb47cu: goto label_1fb47c;
        case 0x1fb480u: goto label_1fb480;
        case 0x1fb484u: goto label_1fb484;
        case 0x1fb488u: goto label_1fb488;
        case 0x1fb48cu: goto label_1fb48c;
        case 0x1fb490u: goto label_1fb490;
        case 0x1fb494u: goto label_1fb494;
        case 0x1fb498u: goto label_1fb498;
        case 0x1fb49cu: goto label_1fb49c;
        case 0x1fb4a0u: goto label_1fb4a0;
        case 0x1fb4a4u: goto label_1fb4a4;
        case 0x1fb4a8u: goto label_1fb4a8;
        case 0x1fb4acu: goto label_1fb4ac;
        case 0x1fb4b0u: goto label_1fb4b0;
        case 0x1fb4b4u: goto label_1fb4b4;
        case 0x1fb4b8u: goto label_1fb4b8;
        case 0x1fb4bcu: goto label_1fb4bc;
        case 0x1fb4c0u: goto label_1fb4c0;
        case 0x1fb4c4u: goto label_1fb4c4;
        case 0x1fb4c8u: goto label_1fb4c8;
        case 0x1fb4ccu: goto label_1fb4cc;
        case 0x1fb4d0u: goto label_1fb4d0;
        case 0x1fb4d4u: goto label_1fb4d4;
        case 0x1fb4d8u: goto label_1fb4d8;
        case 0x1fb4dcu: goto label_1fb4dc;
        case 0x1fb4e0u: goto label_1fb4e0;
        case 0x1fb4e4u: goto label_1fb4e4;
        case 0x1fb4e8u: goto label_1fb4e8;
        case 0x1fb4ecu: goto label_1fb4ec;
        case 0x1fb4f0u: goto label_1fb4f0;
        case 0x1fb4f4u: goto label_1fb4f4;
        case 0x1fb4f8u: goto label_1fb4f8;
        case 0x1fb4fcu: goto label_1fb4fc;
        case 0x1fb500u: goto label_1fb500;
        case 0x1fb504u: goto label_1fb504;
        case 0x1fb508u: goto label_1fb508;
        case 0x1fb50cu: goto label_1fb50c;
        case 0x1fb510u: goto label_1fb510;
        case 0x1fb514u: goto label_1fb514;
        case 0x1fb518u: goto label_1fb518;
        case 0x1fb51cu: goto label_1fb51c;
        case 0x1fb520u: goto label_1fb520;
        case 0x1fb524u: goto label_1fb524;
        case 0x1fb528u: goto label_1fb528;
        case 0x1fb52cu: goto label_1fb52c;
        case 0x1fb530u: goto label_1fb530;
        case 0x1fb534u: goto label_1fb534;
        case 0x1fb538u: goto label_1fb538;
        case 0x1fb53cu: goto label_1fb53c;
        case 0x1fb540u: goto label_1fb540;
        case 0x1fb544u: goto label_1fb544;
        case 0x1fb548u: goto label_1fb548;
        case 0x1fb54cu: goto label_1fb54c;
        case 0x1fb550u: goto label_1fb550;
        case 0x1fb554u: goto label_1fb554;
        case 0x1fb558u: goto label_1fb558;
        case 0x1fb55cu: goto label_1fb55c;
        case 0x1fb560u: goto label_1fb560;
        case 0x1fb564u: goto label_1fb564;
        case 0x1fb568u: goto label_1fb568;
        case 0x1fb56cu: goto label_1fb56c;
        case 0x1fb570u: goto label_1fb570;
        case 0x1fb574u: goto label_1fb574;
        case 0x1fb578u: goto label_1fb578;
        case 0x1fb57cu: goto label_1fb57c;
        case 0x1fb580u: goto label_1fb580;
        case 0x1fb584u: goto label_1fb584;
        case 0x1fb588u: goto label_1fb588;
        case 0x1fb58cu: goto label_1fb58c;
        case 0x1fb590u: goto label_1fb590;
        case 0x1fb594u: goto label_1fb594;
        case 0x1fb598u: goto label_1fb598;
        case 0x1fb59cu: goto label_1fb59c;
        case 0x1fb5a0u: goto label_1fb5a0;
        case 0x1fb5a4u: goto label_1fb5a4;
        case 0x1fb5a8u: goto label_1fb5a8;
        case 0x1fb5acu: goto label_1fb5ac;
        case 0x1fb5b0u: goto label_1fb5b0;
        case 0x1fb5b4u: goto label_1fb5b4;
        case 0x1fb5b8u: goto label_1fb5b8;
        case 0x1fb5bcu: goto label_1fb5bc;
        case 0x1fb5c0u: goto label_1fb5c0;
        case 0x1fb5c4u: goto label_1fb5c4;
        case 0x1fb5c8u: goto label_1fb5c8;
        case 0x1fb5ccu: goto label_1fb5cc;
        case 0x1fb5d0u: goto label_1fb5d0;
        case 0x1fb5d4u: goto label_1fb5d4;
        case 0x1fb5d8u: goto label_1fb5d8;
        case 0x1fb5dcu: goto label_1fb5dc;
        case 0x1fb5e0u: goto label_1fb5e0;
        case 0x1fb5e4u: goto label_1fb5e4;
        case 0x1fb5e8u: goto label_1fb5e8;
        case 0x1fb5ecu: goto label_1fb5ec;
        case 0x1fb5f0u: goto label_1fb5f0;
        case 0x1fb5f4u: goto label_1fb5f4;
        case 0x1fb5f8u: goto label_1fb5f8;
        case 0x1fb5fcu: goto label_1fb5fc;
        case 0x1fb600u: goto label_1fb600;
        case 0x1fb604u: goto label_1fb604;
        case 0x1fb608u: goto label_1fb608;
        case 0x1fb60cu: goto label_1fb60c;
        case 0x1fb610u: goto label_1fb610;
        case 0x1fb614u: goto label_1fb614;
        case 0x1fb618u: goto label_1fb618;
        case 0x1fb61cu: goto label_1fb61c;
        case 0x1fb620u: goto label_1fb620;
        case 0x1fb624u: goto label_1fb624;
        case 0x1fb628u: goto label_1fb628;
        case 0x1fb62cu: goto label_1fb62c;
        case 0x1fb630u: goto label_1fb630;
        case 0x1fb634u: goto label_1fb634;
        case 0x1fb638u: goto label_1fb638;
        case 0x1fb63cu: goto label_1fb63c;
        case 0x1fb640u: goto label_1fb640;
        case 0x1fb644u: goto label_1fb644;
        case 0x1fb648u: goto label_1fb648;
        case 0x1fb64cu: goto label_1fb64c;
        case 0x1fb650u: goto label_1fb650;
        case 0x1fb654u: goto label_1fb654;
        case 0x1fb658u: goto label_1fb658;
        case 0x1fb65cu: goto label_1fb65c;
        case 0x1fb660u: goto label_1fb660;
        case 0x1fb664u: goto label_1fb664;
        case 0x1fb668u: goto label_1fb668;
        case 0x1fb66cu: goto label_1fb66c;
        case 0x1fb670u: goto label_1fb670;
        case 0x1fb674u: goto label_1fb674;
        case 0x1fb678u: goto label_1fb678;
        case 0x1fb67cu: goto label_1fb67c;
        case 0x1fb680u: goto label_1fb680;
        case 0x1fb684u: goto label_1fb684;
        case 0x1fb688u: goto label_1fb688;
        case 0x1fb68cu: goto label_1fb68c;
        case 0x1fb690u: goto label_1fb690;
        case 0x1fb694u: goto label_1fb694;
        case 0x1fb698u: goto label_1fb698;
        case 0x1fb69cu: goto label_1fb69c;
        case 0x1fb6a0u: goto label_1fb6a0;
        case 0x1fb6a4u: goto label_1fb6a4;
        case 0x1fb6a8u: goto label_1fb6a8;
        case 0x1fb6acu: goto label_1fb6ac;
        case 0x1fb6b0u: goto label_1fb6b0;
        case 0x1fb6b4u: goto label_1fb6b4;
        case 0x1fb6b8u: goto label_1fb6b8;
        case 0x1fb6bcu: goto label_1fb6bc;
        case 0x1fb6c0u: goto label_1fb6c0;
        case 0x1fb6c4u: goto label_1fb6c4;
        case 0x1fb6c8u: goto label_1fb6c8;
        case 0x1fb6ccu: goto label_1fb6cc;
        case 0x1fb6d0u: goto label_1fb6d0;
        case 0x1fb6d4u: goto label_1fb6d4;
        case 0x1fb6d8u: goto label_1fb6d8;
        case 0x1fb6dcu: goto label_1fb6dc;
        case 0x1fb6e0u: goto label_1fb6e0;
        case 0x1fb6e4u: goto label_1fb6e4;
        case 0x1fb6e8u: goto label_1fb6e8;
        case 0x1fb6ecu: goto label_1fb6ec;
        case 0x1fb6f0u: goto label_1fb6f0;
        case 0x1fb6f4u: goto label_1fb6f4;
        case 0x1fb6f8u: goto label_1fb6f8;
        case 0x1fb6fcu: goto label_1fb6fc;
        case 0x1fb700u: goto label_1fb700;
        case 0x1fb704u: goto label_1fb704;
        case 0x1fb708u: goto label_1fb708;
        case 0x1fb70cu: goto label_1fb70c;
        case 0x1fb710u: goto label_1fb710;
        case 0x1fb714u: goto label_1fb714;
        case 0x1fb718u: goto label_1fb718;
        case 0x1fb71cu: goto label_1fb71c;
        case 0x1fb720u: goto label_1fb720;
        case 0x1fb724u: goto label_1fb724;
        case 0x1fb728u: goto label_1fb728;
        case 0x1fb72cu: goto label_1fb72c;
        case 0x1fb730u: goto label_1fb730;
        case 0x1fb734u: goto label_1fb734;
        case 0x1fb738u: goto label_1fb738;
        case 0x1fb73cu: goto label_1fb73c;
        case 0x1fb740u: goto label_1fb740;
        case 0x1fb744u: goto label_1fb744;
        case 0x1fb748u: goto label_1fb748;
        case 0x1fb74cu: goto label_1fb74c;
        case 0x1fb750u: goto label_1fb750;
        case 0x1fb754u: goto label_1fb754;
        case 0x1fb758u: goto label_1fb758;
        case 0x1fb75cu: goto label_1fb75c;
        case 0x1fb760u: goto label_1fb760;
        case 0x1fb764u: goto label_1fb764;
        case 0x1fb768u: goto label_1fb768;
        case 0x1fb76cu: goto label_1fb76c;
        case 0x1fb770u: goto label_1fb770;
        case 0x1fb774u: goto label_1fb774;
        case 0x1fb778u: goto label_1fb778;
        case 0x1fb77cu: goto label_1fb77c;
        case 0x1fb780u: goto label_1fb780;
        case 0x1fb784u: goto label_1fb784;
        case 0x1fb788u: goto label_1fb788;
        case 0x1fb78cu: goto label_1fb78c;
        case 0x1fb790u: goto label_1fb790;
        case 0x1fb794u: goto label_1fb794;
        case 0x1fb798u: goto label_1fb798;
        case 0x1fb79cu: goto label_1fb79c;
        case 0x1fb7a0u: goto label_1fb7a0;
        case 0x1fb7a4u: goto label_1fb7a4;
        case 0x1fb7a8u: goto label_1fb7a8;
        case 0x1fb7acu: goto label_1fb7ac;
        case 0x1fb7b0u: goto label_1fb7b0;
        case 0x1fb7b4u: goto label_1fb7b4;
        case 0x1fb7b8u: goto label_1fb7b8;
        case 0x1fb7bcu: goto label_1fb7bc;
        case 0x1fb7c0u: goto label_1fb7c0;
        case 0x1fb7c4u: goto label_1fb7c4;
        case 0x1fb7c8u: goto label_1fb7c8;
        case 0x1fb7ccu: goto label_1fb7cc;
        case 0x1fb7d0u: goto label_1fb7d0;
        case 0x1fb7d4u: goto label_1fb7d4;
        case 0x1fb7d8u: goto label_1fb7d8;
        case 0x1fb7dcu: goto label_1fb7dc;
        case 0x1fb7e0u: goto label_1fb7e0;
        case 0x1fb7e4u: goto label_1fb7e4;
        case 0x1fb7e8u: goto label_1fb7e8;
        case 0x1fb7ecu: goto label_1fb7ec;
        case 0x1fb7f0u: goto label_1fb7f0;
        case 0x1fb7f4u: goto label_1fb7f4;
        case 0x1fb7f8u: goto label_1fb7f8;
        case 0x1fb7fcu: goto label_1fb7fc;
        case 0x1fb800u: goto label_1fb800;
        case 0x1fb804u: goto label_1fb804;
        case 0x1fb808u: goto label_1fb808;
        case 0x1fb80cu: goto label_1fb80c;
        case 0x1fb810u: goto label_1fb810;
        case 0x1fb814u: goto label_1fb814;
        case 0x1fb818u: goto label_1fb818;
        case 0x1fb81cu: goto label_1fb81c;
        case 0x1fb820u: goto label_1fb820;
        case 0x1fb824u: goto label_1fb824;
        case 0x1fb828u: goto label_1fb828;
        case 0x1fb82cu: goto label_1fb82c;
        case 0x1fb830u: goto label_1fb830;
        case 0x1fb834u: goto label_1fb834;
        case 0x1fb838u: goto label_1fb838;
        case 0x1fb83cu: goto label_1fb83c;
        case 0x1fb840u: goto label_1fb840;
        case 0x1fb844u: goto label_1fb844;
        case 0x1fb848u: goto label_1fb848;
        case 0x1fb84cu: goto label_1fb84c;
        case 0x1fb850u: goto label_1fb850;
        case 0x1fb854u: goto label_1fb854;
        case 0x1fb858u: goto label_1fb858;
        case 0x1fb85cu: goto label_1fb85c;
        case 0x1fb860u: goto label_1fb860;
        case 0x1fb864u: goto label_1fb864;
        case 0x1fb868u: goto label_1fb868;
        case 0x1fb86cu: goto label_1fb86c;
        case 0x1fb870u: goto label_1fb870;
        case 0x1fb874u: goto label_1fb874;
        case 0x1fb878u: goto label_1fb878;
        case 0x1fb87cu: goto label_1fb87c;
        case 0x1fb880u: goto label_1fb880;
        case 0x1fb884u: goto label_1fb884;
        case 0x1fb888u: goto label_1fb888;
        case 0x1fb88cu: goto label_1fb88c;
        case 0x1fb890u: goto label_1fb890;
        case 0x1fb894u: goto label_1fb894;
        case 0x1fb898u: goto label_1fb898;
        case 0x1fb89cu: goto label_1fb89c;
        case 0x1fb8a0u: goto label_1fb8a0;
        case 0x1fb8a4u: goto label_1fb8a4;
        case 0x1fb8a8u: goto label_1fb8a8;
        case 0x1fb8acu: goto label_1fb8ac;
        case 0x1fb8b0u: goto label_1fb8b0;
        case 0x1fb8b4u: goto label_1fb8b4;
        case 0x1fb8b8u: goto label_1fb8b8;
        case 0x1fb8bcu: goto label_1fb8bc;
        case 0x1fb8c0u: goto label_1fb8c0;
        case 0x1fb8c4u: goto label_1fb8c4;
        case 0x1fb8c8u: goto label_1fb8c8;
        case 0x1fb8ccu: goto label_1fb8cc;
        case 0x1fb8d0u: goto label_1fb8d0;
        case 0x1fb8d4u: goto label_1fb8d4;
        case 0x1fb8d8u: goto label_1fb8d8;
        case 0x1fb8dcu: goto label_1fb8dc;
        case 0x1fb8e0u: goto label_1fb8e0;
        case 0x1fb8e4u: goto label_1fb8e4;
        case 0x1fb8e8u: goto label_1fb8e8;
        case 0x1fb8ecu: goto label_1fb8ec;
        case 0x1fb8f0u: goto label_1fb8f0;
        case 0x1fb8f4u: goto label_1fb8f4;
        case 0x1fb8f8u: goto label_1fb8f8;
        case 0x1fb8fcu: goto label_1fb8fc;
        case 0x1fb900u: goto label_1fb900;
        case 0x1fb904u: goto label_1fb904;
        case 0x1fb908u: goto label_1fb908;
        case 0x1fb90cu: goto label_1fb90c;
        case 0x1fb910u: goto label_1fb910;
        case 0x1fb914u: goto label_1fb914;
        case 0x1fb918u: goto label_1fb918;
        case 0x1fb91cu: goto label_1fb91c;
        case 0x1fb920u: goto label_1fb920;
        case 0x1fb924u: goto label_1fb924;
        case 0x1fb928u: goto label_1fb928;
        case 0x1fb92cu: goto label_1fb92c;
        case 0x1fb930u: goto label_1fb930;
        case 0x1fb934u: goto label_1fb934;
        case 0x1fb938u: goto label_1fb938;
        case 0x1fb93cu: goto label_1fb93c;
        case 0x1fb940u: goto label_1fb940;
        case 0x1fb944u: goto label_1fb944;
        case 0x1fb948u: goto label_1fb948;
        case 0x1fb94cu: goto label_1fb94c;
        case 0x1fb950u: goto label_1fb950;
        case 0x1fb954u: goto label_1fb954;
        case 0x1fb958u: goto label_1fb958;
        case 0x1fb95cu: goto label_1fb95c;
        case 0x1fb960u: goto label_1fb960;
        case 0x1fb964u: goto label_1fb964;
        case 0x1fb968u: goto label_1fb968;
        case 0x1fb96cu: goto label_1fb96c;
        case 0x1fb970u: goto label_1fb970;
        case 0x1fb974u: goto label_1fb974;
        case 0x1fb978u: goto label_1fb978;
        case 0x1fb97cu: goto label_1fb97c;
        case 0x1fb980u: goto label_1fb980;
        case 0x1fb984u: goto label_1fb984;
        case 0x1fb988u: goto label_1fb988;
        case 0x1fb98cu: goto label_1fb98c;
        case 0x1fb990u: goto label_1fb990;
        case 0x1fb994u: goto label_1fb994;
        case 0x1fb998u: goto label_1fb998;
        case 0x1fb99cu: goto label_1fb99c;
        case 0x1fb9a0u: goto label_1fb9a0;
        case 0x1fb9a4u: goto label_1fb9a4;
        case 0x1fb9a8u: goto label_1fb9a8;
        case 0x1fb9acu: goto label_1fb9ac;
        case 0x1fb9b0u: goto label_1fb9b0;
        case 0x1fb9b4u: goto label_1fb9b4;
        case 0x1fb9b8u: goto label_1fb9b8;
        case 0x1fb9bcu: goto label_1fb9bc;
        case 0x1fb9c0u: goto label_1fb9c0;
        case 0x1fb9c4u: goto label_1fb9c4;
        case 0x1fb9c8u: goto label_1fb9c8;
        case 0x1fb9ccu: goto label_1fb9cc;
        case 0x1fb9d0u: goto label_1fb9d0;
        case 0x1fb9d4u: goto label_1fb9d4;
        case 0x1fb9d8u: goto label_1fb9d8;
        case 0x1fb9dcu: goto label_1fb9dc;
        case 0x1fb9e0u: goto label_1fb9e0;
        case 0x1fb9e4u: goto label_1fb9e4;
        case 0x1fb9e8u: goto label_1fb9e8;
        case 0x1fb9ecu: goto label_1fb9ec;
        case 0x1fb9f0u: goto label_1fb9f0;
        case 0x1fb9f4u: goto label_1fb9f4;
        case 0x1fb9f8u: goto label_1fb9f8;
        case 0x1fb9fcu: goto label_1fb9fc;
        case 0x1fba00u: goto label_1fba00;
        case 0x1fba04u: goto label_1fba04;
        case 0x1fba08u: goto label_1fba08;
        case 0x1fba0cu: goto label_1fba0c;
        case 0x1fba10u: goto label_1fba10;
        case 0x1fba14u: goto label_1fba14;
        case 0x1fba18u: goto label_1fba18;
        case 0x1fba1cu: goto label_1fba1c;
        case 0x1fba20u: goto label_1fba20;
        case 0x1fba24u: goto label_1fba24;
        case 0x1fba28u: goto label_1fba28;
        case 0x1fba2cu: goto label_1fba2c;
        case 0x1fba30u: goto label_1fba30;
        case 0x1fba34u: goto label_1fba34;
        case 0x1fba38u: goto label_1fba38;
        case 0x1fba3cu: goto label_1fba3c;
        case 0x1fba40u: goto label_1fba40;
        case 0x1fba44u: goto label_1fba44;
        case 0x1fba48u: goto label_1fba48;
        case 0x1fba4cu: goto label_1fba4c;
        case 0x1fba50u: goto label_1fba50;
        case 0x1fba54u: goto label_1fba54;
        case 0x1fba58u: goto label_1fba58;
        case 0x1fba5cu: goto label_1fba5c;
        case 0x1fba60u: goto label_1fba60;
        case 0x1fba64u: goto label_1fba64;
        case 0x1fba68u: goto label_1fba68;
        case 0x1fba6cu: goto label_1fba6c;
        case 0x1fba70u: goto label_1fba70;
        case 0x1fba74u: goto label_1fba74;
        case 0x1fba78u: goto label_1fba78;
        case 0x1fba7cu: goto label_1fba7c;
        case 0x1fba80u: goto label_1fba80;
        case 0x1fba84u: goto label_1fba84;
        case 0x1fba88u: goto label_1fba88;
        case 0x1fba8cu: goto label_1fba8c;
        case 0x1fba90u: goto label_1fba90;
        case 0x1fba94u: goto label_1fba94;
        case 0x1fba98u: goto label_1fba98;
        case 0x1fba9cu: goto label_1fba9c;
        case 0x1fbaa0u: goto label_1fbaa0;
        case 0x1fbaa4u: goto label_1fbaa4;
        case 0x1fbaa8u: goto label_1fbaa8;
        case 0x1fbaacu: goto label_1fbaac;
        case 0x1fbab0u: goto label_1fbab0;
        case 0x1fbab4u: goto label_1fbab4;
        case 0x1fbab8u: goto label_1fbab8;
        case 0x1fbabcu: goto label_1fbabc;
        case 0x1fbac0u: goto label_1fbac0;
        case 0x1fbac4u: goto label_1fbac4;
        case 0x1fbac8u: goto label_1fbac8;
        case 0x1fbaccu: goto label_1fbacc;
        case 0x1fbad0u: goto label_1fbad0;
        case 0x1fbad4u: goto label_1fbad4;
        case 0x1fbad8u: goto label_1fbad8;
        case 0x1fbadcu: goto label_1fbadc;
        case 0x1fbae0u: goto label_1fbae0;
        case 0x1fbae4u: goto label_1fbae4;
        case 0x1fbae8u: goto label_1fbae8;
        case 0x1fbaecu: goto label_1fbaec;
        case 0x1fbaf0u: goto label_1fbaf0;
        case 0x1fbaf4u: goto label_1fbaf4;
        case 0x1fbaf8u: goto label_1fbaf8;
        case 0x1fbafcu: goto label_1fbafc;
        case 0x1fbb00u: goto label_1fbb00;
        case 0x1fbb04u: goto label_1fbb04;
        case 0x1fbb08u: goto label_1fbb08;
        case 0x1fbb0cu: goto label_1fbb0c;
        case 0x1fbb10u: goto label_1fbb10;
        case 0x1fbb14u: goto label_1fbb14;
        case 0x1fbb18u: goto label_1fbb18;
        case 0x1fbb1cu: goto label_1fbb1c;
        case 0x1fbb20u: goto label_1fbb20;
        case 0x1fbb24u: goto label_1fbb24;
        case 0x1fbb28u: goto label_1fbb28;
        case 0x1fbb2cu: goto label_1fbb2c;
        case 0x1fbb30u: goto label_1fbb30;
        case 0x1fbb34u: goto label_1fbb34;
        case 0x1fbb38u: goto label_1fbb38;
        case 0x1fbb3cu: goto label_1fbb3c;
        case 0x1fbb40u: goto label_1fbb40;
        case 0x1fbb44u: goto label_1fbb44;
        case 0x1fbb48u: goto label_1fbb48;
        case 0x1fbb4cu: goto label_1fbb4c;
        case 0x1fbb50u: goto label_1fbb50;
        case 0x1fbb54u: goto label_1fbb54;
        case 0x1fbb58u: goto label_1fbb58;
        case 0x1fbb5cu: goto label_1fbb5c;
        case 0x1fbb60u: goto label_1fbb60;
        case 0x1fbb64u: goto label_1fbb64;
        case 0x1fbb68u: goto label_1fbb68;
        case 0x1fbb6cu: goto label_1fbb6c;
        case 0x1fbb70u: goto label_1fbb70;
        case 0x1fbb74u: goto label_1fbb74;
        case 0x1fbb78u: goto label_1fbb78;
        case 0x1fbb7cu: goto label_1fbb7c;
        case 0x1fbb80u: goto label_1fbb80;
        case 0x1fbb84u: goto label_1fbb84;
        case 0x1fbb88u: goto label_1fbb88;
        case 0x1fbb8cu: goto label_1fbb8c;
        case 0x1fbb90u: goto label_1fbb90;
        case 0x1fbb94u: goto label_1fbb94;
        case 0x1fbb98u: goto label_1fbb98;
        case 0x1fbb9cu: goto label_1fbb9c;
        case 0x1fbba0u: goto label_1fbba0;
        case 0x1fbba4u: goto label_1fbba4;
        case 0x1fbba8u: goto label_1fbba8;
        case 0x1fbbacu: goto label_1fbbac;
        case 0x1fbbb0u: goto label_1fbbb0;
        case 0x1fbbb4u: goto label_1fbbb4;
        case 0x1fbbb8u: goto label_1fbbb8;
        case 0x1fbbbcu: goto label_1fbbbc;
        case 0x1fbbc0u: goto label_1fbbc0;
        case 0x1fbbc4u: goto label_1fbbc4;
        case 0x1fbbc8u: goto label_1fbbc8;
        case 0x1fbbccu: goto label_1fbbcc;
        case 0x1fbbd0u: goto label_1fbbd0;
        case 0x1fbbd4u: goto label_1fbbd4;
        case 0x1fbbd8u: goto label_1fbbd8;
        case 0x1fbbdcu: goto label_1fbbdc;
        case 0x1fbbe0u: goto label_1fbbe0;
        case 0x1fbbe4u: goto label_1fbbe4;
        case 0x1fbbe8u: goto label_1fbbe8;
        case 0x1fbbecu: goto label_1fbbec;
        case 0x1fbbf0u: goto label_1fbbf0;
        case 0x1fbbf4u: goto label_1fbbf4;
        case 0x1fbbf8u: goto label_1fbbf8;
        case 0x1fbbfcu: goto label_1fbbfc;
        case 0x1fbc00u: goto label_1fbc00;
        case 0x1fbc04u: goto label_1fbc04;
        case 0x1fbc08u: goto label_1fbc08;
        case 0x1fbc0cu: goto label_1fbc0c;
        case 0x1fbc10u: goto label_1fbc10;
        case 0x1fbc14u: goto label_1fbc14;
        case 0x1fbc18u: goto label_1fbc18;
        case 0x1fbc1cu: goto label_1fbc1c;
        case 0x1fbc20u: goto label_1fbc20;
        case 0x1fbc24u: goto label_1fbc24;
        case 0x1fbc28u: goto label_1fbc28;
        case 0x1fbc2cu: goto label_1fbc2c;
        case 0x1fbc30u: goto label_1fbc30;
        case 0x1fbc34u: goto label_1fbc34;
        case 0x1fbc38u: goto label_1fbc38;
        case 0x1fbc3cu: goto label_1fbc3c;
        case 0x1fbc40u: goto label_1fbc40;
        case 0x1fbc44u: goto label_1fbc44;
        case 0x1fbc48u: goto label_1fbc48;
        case 0x1fbc4cu: goto label_1fbc4c;
        case 0x1fbc50u: goto label_1fbc50;
        case 0x1fbc54u: goto label_1fbc54;
        case 0x1fbc58u: goto label_1fbc58;
        case 0x1fbc5cu: goto label_1fbc5c;
        case 0x1fbc60u: goto label_1fbc60;
        case 0x1fbc64u: goto label_1fbc64;
        case 0x1fbc68u: goto label_1fbc68;
        case 0x1fbc6cu: goto label_1fbc6c;
        case 0x1fbc70u: goto label_1fbc70;
        case 0x1fbc74u: goto label_1fbc74;
        case 0x1fbc78u: goto label_1fbc78;
        case 0x1fbc7cu: goto label_1fbc7c;
        case 0x1fbc80u: goto label_1fbc80;
        case 0x1fbc84u: goto label_1fbc84;
        case 0x1fbc88u: goto label_1fbc88;
        case 0x1fbc8cu: goto label_1fbc8c;
        case 0x1fbc90u: goto label_1fbc90;
        case 0x1fbc94u: goto label_1fbc94;
        case 0x1fbc98u: goto label_1fbc98;
        case 0x1fbc9cu: goto label_1fbc9c;
        case 0x1fbca0u: goto label_1fbca0;
        case 0x1fbca4u: goto label_1fbca4;
        case 0x1fbca8u: goto label_1fbca8;
        case 0x1fbcacu: goto label_1fbcac;
        case 0x1fbcb0u: goto label_1fbcb0;
        case 0x1fbcb4u: goto label_1fbcb4;
        case 0x1fbcb8u: goto label_1fbcb8;
        case 0x1fbcbcu: goto label_1fbcbc;
        case 0x1fbcc0u: goto label_1fbcc0;
        case 0x1fbcc4u: goto label_1fbcc4;
        case 0x1fbcc8u: goto label_1fbcc8;
        case 0x1fbcccu: goto label_1fbccc;
        case 0x1fbcd0u: goto label_1fbcd0;
        case 0x1fbcd4u: goto label_1fbcd4;
        case 0x1fbcd8u: goto label_1fbcd8;
        case 0x1fbcdcu: goto label_1fbcdc;
        case 0x1fbce0u: goto label_1fbce0;
        case 0x1fbce4u: goto label_1fbce4;
        case 0x1fbce8u: goto label_1fbce8;
        case 0x1fbcecu: goto label_1fbcec;
        case 0x1fbcf0u: goto label_1fbcf0;
        case 0x1fbcf4u: goto label_1fbcf4;
        case 0x1fbcf8u: goto label_1fbcf8;
        case 0x1fbcfcu: goto label_1fbcfc;
        case 0x1fbd00u: goto label_1fbd00;
        case 0x1fbd04u: goto label_1fbd04;
        case 0x1fbd08u: goto label_1fbd08;
        case 0x1fbd0cu: goto label_1fbd0c;
        case 0x1fbd10u: goto label_1fbd10;
        case 0x1fbd14u: goto label_1fbd14;
        case 0x1fbd18u: goto label_1fbd18;
        case 0x1fbd1cu: goto label_1fbd1c;
        case 0x1fbd20u: goto label_1fbd20;
        case 0x1fbd24u: goto label_1fbd24;
        case 0x1fbd28u: goto label_1fbd28;
        case 0x1fbd2cu: goto label_1fbd2c;
        case 0x1fbd30u: goto label_1fbd30;
        case 0x1fbd34u: goto label_1fbd34;
        case 0x1fbd38u: goto label_1fbd38;
        case 0x1fbd3cu: goto label_1fbd3c;
        case 0x1fbd40u: goto label_1fbd40;
        case 0x1fbd44u: goto label_1fbd44;
        case 0x1fbd48u: goto label_1fbd48;
        case 0x1fbd4cu: goto label_1fbd4c;
        case 0x1fbd50u: goto label_1fbd50;
        case 0x1fbd54u: goto label_1fbd54;
        case 0x1fbd58u: goto label_1fbd58;
        case 0x1fbd5cu: goto label_1fbd5c;
        case 0x1fbd60u: goto label_1fbd60;
        case 0x1fbd64u: goto label_1fbd64;
        case 0x1fbd68u: goto label_1fbd68;
        case 0x1fbd6cu: goto label_1fbd6c;
        case 0x1fbd70u: goto label_1fbd70;
        case 0x1fbd74u: goto label_1fbd74;
        case 0x1fbd78u: goto label_1fbd78;
        case 0x1fbd7cu: goto label_1fbd7c;
        case 0x1fbd80u: goto label_1fbd80;
        case 0x1fbd84u: goto label_1fbd84;
        case 0x1fbd88u: goto label_1fbd88;
        case 0x1fbd8cu: goto label_1fbd8c;
        case 0x1fbd90u: goto label_1fbd90;
        case 0x1fbd94u: goto label_1fbd94;
        case 0x1fbd98u: goto label_1fbd98;
        case 0x1fbd9cu: goto label_1fbd9c;
        case 0x1fbda0u: goto label_1fbda0;
        case 0x1fbda4u: goto label_1fbda4;
        case 0x1fbda8u: goto label_1fbda8;
        case 0x1fbdacu: goto label_1fbdac;
        case 0x1fbdb0u: goto label_1fbdb0;
        case 0x1fbdb4u: goto label_1fbdb4;
        case 0x1fbdb8u: goto label_1fbdb8;
        case 0x1fbdbcu: goto label_1fbdbc;
        case 0x1fbdc0u: goto label_1fbdc0;
        case 0x1fbdc4u: goto label_1fbdc4;
        case 0x1fbdc8u: goto label_1fbdc8;
        case 0x1fbdccu: goto label_1fbdcc;
        case 0x1fbdd0u: goto label_1fbdd0;
        case 0x1fbdd4u: goto label_1fbdd4;
        case 0x1fbdd8u: goto label_1fbdd8;
        case 0x1fbddcu: goto label_1fbddc;
        case 0x1fbde0u: goto label_1fbde0;
        case 0x1fbde4u: goto label_1fbde4;
        case 0x1fbde8u: goto label_1fbde8;
        case 0x1fbdecu: goto label_1fbdec;
        case 0x1fbdf0u: goto label_1fbdf0;
        case 0x1fbdf4u: goto label_1fbdf4;
        case 0x1fbdf8u: goto label_1fbdf8;
        case 0x1fbdfcu: goto label_1fbdfc;
        case 0x1fbe00u: goto label_1fbe00;
        case 0x1fbe04u: goto label_1fbe04;
        case 0x1fbe08u: goto label_1fbe08;
        case 0x1fbe0cu: goto label_1fbe0c;
        case 0x1fbe10u: goto label_1fbe10;
        case 0x1fbe14u: goto label_1fbe14;
        case 0x1fbe18u: goto label_1fbe18;
        case 0x1fbe1cu: goto label_1fbe1c;
        case 0x1fbe20u: goto label_1fbe20;
        case 0x1fbe24u: goto label_1fbe24;
        case 0x1fbe28u: goto label_1fbe28;
        case 0x1fbe2cu: goto label_1fbe2c;
        case 0x1fbe30u: goto label_1fbe30;
        case 0x1fbe34u: goto label_1fbe34;
        case 0x1fbe38u: goto label_1fbe38;
        case 0x1fbe3cu: goto label_1fbe3c;
        case 0x1fbe40u: goto label_1fbe40;
        case 0x1fbe44u: goto label_1fbe44;
        case 0x1fbe48u: goto label_1fbe48;
        case 0x1fbe4cu: goto label_1fbe4c;
        case 0x1fbe50u: goto label_1fbe50;
        case 0x1fbe54u: goto label_1fbe54;
        case 0x1fbe58u: goto label_1fbe58;
        case 0x1fbe5cu: goto label_1fbe5c;
        case 0x1fbe60u: goto label_1fbe60;
        case 0x1fbe64u: goto label_1fbe64;
        case 0x1fbe68u: goto label_1fbe68;
        case 0x1fbe6cu: goto label_1fbe6c;
        case 0x1fbe70u: goto label_1fbe70;
        case 0x1fbe74u: goto label_1fbe74;
        case 0x1fbe78u: goto label_1fbe78;
        case 0x1fbe7cu: goto label_1fbe7c;
        case 0x1fbe80u: goto label_1fbe80;
        case 0x1fbe84u: goto label_1fbe84;
        case 0x1fbe88u: goto label_1fbe88;
        case 0x1fbe8cu: goto label_1fbe8c;
        case 0x1fbe90u: goto label_1fbe90;
        case 0x1fbe94u: goto label_1fbe94;
        case 0x1fbe98u: goto label_1fbe98;
        case 0x1fbe9cu: goto label_1fbe9c;
        case 0x1fbea0u: goto label_1fbea0;
        case 0x1fbea4u: goto label_1fbea4;
        case 0x1fbea8u: goto label_1fbea8;
        case 0x1fbeacu: goto label_1fbeac;
        case 0x1fbeb0u: goto label_1fbeb0;
        case 0x1fbeb4u: goto label_1fbeb4;
        case 0x1fbeb8u: goto label_1fbeb8;
        case 0x1fbebcu: goto label_1fbebc;
        case 0x1fbec0u: goto label_1fbec0;
        case 0x1fbec4u: goto label_1fbec4;
        case 0x1fbec8u: goto label_1fbec8;
        case 0x1fbeccu: goto label_1fbecc;
        case 0x1fbed0u: goto label_1fbed0;
        case 0x1fbed4u: goto label_1fbed4;
        case 0x1fbed8u: goto label_1fbed8;
        case 0x1fbedcu: goto label_1fbedc;
        case 0x1fbee0u: goto label_1fbee0;
        case 0x1fbee4u: goto label_1fbee4;
        case 0x1fbee8u: goto label_1fbee8;
        case 0x1fbeecu: goto label_1fbeec;
        case 0x1fbef0u: goto label_1fbef0;
        case 0x1fbef4u: goto label_1fbef4;
        case 0x1fbef8u: goto label_1fbef8;
        case 0x1fbefcu: goto label_1fbefc;
        case 0x1fbf00u: goto label_1fbf00;
        case 0x1fbf04u: goto label_1fbf04;
        case 0x1fbf08u: goto label_1fbf08;
        case 0x1fbf0cu: goto label_1fbf0c;
        case 0x1fbf10u: goto label_1fbf10;
        case 0x1fbf14u: goto label_1fbf14;
        case 0x1fbf18u: goto label_1fbf18;
        case 0x1fbf1cu: goto label_1fbf1c;
        case 0x1fbf20u: goto label_1fbf20;
        case 0x1fbf24u: goto label_1fbf24;
        case 0x1fbf28u: goto label_1fbf28;
        case 0x1fbf2cu: goto label_1fbf2c;
        case 0x1fbf30u: goto label_1fbf30;
        case 0x1fbf34u: goto label_1fbf34;
        case 0x1fbf38u: goto label_1fbf38;
        case 0x1fbf3cu: goto label_1fbf3c;
        case 0x1fbf40u: goto label_1fbf40;
        case 0x1fbf44u: goto label_1fbf44;
        case 0x1fbf48u: goto label_1fbf48;
        case 0x1fbf4cu: goto label_1fbf4c;
        case 0x1fbf50u: goto label_1fbf50;
        case 0x1fbf54u: goto label_1fbf54;
        case 0x1fbf58u: goto label_1fbf58;
        case 0x1fbf5cu: goto label_1fbf5c;
        case 0x1fbf60u: goto label_1fbf60;
        case 0x1fbf64u: goto label_1fbf64;
        case 0x1fbf68u: goto label_1fbf68;
        case 0x1fbf6cu: goto label_1fbf6c;
        case 0x1fbf70u: goto label_1fbf70;
        case 0x1fbf74u: goto label_1fbf74;
        case 0x1fbf78u: goto label_1fbf78;
        case 0x1fbf7cu: goto label_1fbf7c;
        case 0x1fbf80u: goto label_1fbf80;
        case 0x1fbf84u: goto label_1fbf84;
        case 0x1fbf88u: goto label_1fbf88;
        case 0x1fbf8cu: goto label_1fbf8c;
        case 0x1fbf90u: goto label_1fbf90;
        case 0x1fbf94u: goto label_1fbf94;
        case 0x1fbf98u: goto label_1fbf98;
        case 0x1fbf9cu: goto label_1fbf9c;
        case 0x1fbfa0u: goto label_1fbfa0;
        case 0x1fbfa4u: goto label_1fbfa4;
        case 0x1fbfa8u: goto label_1fbfa8;
        case 0x1fbfacu: goto label_1fbfac;
        case 0x1fbfb0u: goto label_1fbfb0;
        case 0x1fbfb4u: goto label_1fbfb4;
        case 0x1fbfb8u: goto label_1fbfb8;
        case 0x1fbfbcu: goto label_1fbfbc;
        case 0x1fbfc0u: goto label_1fbfc0;
        case 0x1fbfc4u: goto label_1fbfc4;
        case 0x1fbfc8u: goto label_1fbfc8;
        case 0x1fbfccu: goto label_1fbfcc;
        case 0x1fbfd0u: goto label_1fbfd0;
        case 0x1fbfd4u: goto label_1fbfd4;
        case 0x1fbfd8u: goto label_1fbfd8;
        case 0x1fbfdcu: goto label_1fbfdc;
        case 0x1fbfe0u: goto label_1fbfe0;
        case 0x1fbfe4u: goto label_1fbfe4;
        case 0x1fbfe8u: goto label_1fbfe8;
        case 0x1fbfecu: goto label_1fbfec;
        case 0x1fbff0u: goto label_1fbff0;
        case 0x1fbff4u: goto label_1fbff4;
        case 0x1fbff8u: goto label_1fbff8;
        case 0x1fbffcu: goto label_1fbffc;
        case 0x1fc000u: goto label_1fc000;
        case 0x1fc004u: goto label_1fc004;
        case 0x1fc008u: goto label_1fc008;
        case 0x1fc00cu: goto label_1fc00c;
        case 0x1fc010u: goto label_1fc010;
        case 0x1fc014u: goto label_1fc014;
        case 0x1fc018u: goto label_1fc018;
        case 0x1fc01cu: goto label_1fc01c;
        case 0x1fc020u: goto label_1fc020;
        case 0x1fc024u: goto label_1fc024;
        case 0x1fc028u: goto label_1fc028;
        case 0x1fc02cu: goto label_1fc02c;
        case 0x1fc030u: goto label_1fc030;
        case 0x1fc034u: goto label_1fc034;
        case 0x1fc038u: goto label_1fc038;
        case 0x1fc03cu: goto label_1fc03c;
        case 0x1fc040u: goto label_1fc040;
        case 0x1fc044u: goto label_1fc044;
        case 0x1fc048u: goto label_1fc048;
        case 0x1fc04cu: goto label_1fc04c;
        case 0x1fc050u: goto label_1fc050;
        case 0x1fc054u: goto label_1fc054;
        case 0x1fc058u: goto label_1fc058;
        case 0x1fc05cu: goto label_1fc05c;
        case 0x1fc060u: goto label_1fc060;
        case 0x1fc064u: goto label_1fc064;
        case 0x1fc068u: goto label_1fc068;
        case 0x1fc06cu: goto label_1fc06c;
        case 0x1fc070u: goto label_1fc070;
        case 0x1fc074u: goto label_1fc074;
        case 0x1fc078u: goto label_1fc078;
        case 0x1fc07cu: goto label_1fc07c;
        case 0x1fc080u: goto label_1fc080;
        case 0x1fc084u: goto label_1fc084;
        case 0x1fc088u: goto label_1fc088;
        case 0x1fc08cu: goto label_1fc08c;
        case 0x1fc090u: goto label_1fc090;
        case 0x1fc094u: goto label_1fc094;
        case 0x1fc098u: goto label_1fc098;
        case 0x1fc09cu: goto label_1fc09c;
        default: break;
    }

    ctx->pc = 0x1fb100u;

label_1fb100:
    // 0x1fb100: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1fb100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1fb104:
    // 0x1fb104: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fb104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fb108:
    // 0x1fb108: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fb108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1fb10c:
    // 0x1fb10c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fb10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fb110:
    // 0x1fb110: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fb110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fb114:
    // 0x1fb114: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fb114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb118:
    // 0x1fb118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fb118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fb11c:
    // 0x1fb11c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1fb11cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1fb120:
    // 0x1fb120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fb120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fb124:
    // 0x1fb124: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fb124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fb128:
    // 0x1fb128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fb128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fb12c:
    // 0x1fb12c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1fb12cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fb130:
    // 0x1fb130: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1fb130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1fb134:
    // 0x1fb134: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fb134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fb138:
    // 0x1fb138: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1fb138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1fb13c:
    // 0x1fb13c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1fb13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fb140:
    // 0x1fb140: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1fb144:
    if (ctx->pc == 0x1FB144u) {
        ctx->pc = 0x1FB144u;
            // 0x1fb144: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1FB148u;
        goto label_1fb148;
    }
    ctx->pc = 0x1FB140u;
    {
        const bool branch_taken_0x1fb140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB140u;
            // 0x1fb144: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb140) {
            ctx->pc = 0x1FB170u;
            goto label_1fb170;
        }
    }
    ctx->pc = 0x1FB148u;
label_1fb148:
    // 0x1fb148: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1fb148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fb14c:
    // 0x1fb14c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1fb14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1fb150:
    // 0x1fb150: 0x2442b0a8  addiu       $v0, $v0, -0x4F58
    ctx->pc = 0x1fb150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946984));
label_1fb154:
    // 0x1fb154: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fb154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1fb158:
    // 0x1fb158: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fb158u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1fb15c:
    // 0x1fb15c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1fb15cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1fb160:
    // 0x1fb160: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fb160u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1fb164:
    // 0x1fb164: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1fb164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1fb168:
    // 0x1fb168: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1fb168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1fb16c:
    // 0x1fb16c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fb16cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1fb170:
    // 0x1fb170: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1fb170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1fb174:
    // 0x1fb174: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1fb174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1fb178:
    // 0x1fb178: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x1fb178u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1fb17c:
    // 0x1fb17c: 0xc09e9ec  jal         func_27A7B0
label_1fb180:
    if (ctx->pc == 0x1FB180u) {
        ctx->pc = 0x1FB180u;
            // 0x1fb180: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x1FB184u;
        goto label_1fb184;
    }
    ctx->pc = 0x1FB17Cu;
    SET_GPR_U32(ctx, 31, 0x1FB184u);
    ctx->pc = 0x1FB180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB17Cu;
            // 0x1fb180: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A7B0u;
    if (runtime->hasFunction(0x27A7B0u)) {
        auto targetFn = runtime->lookupFunction(0x27A7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB184u; }
        if (ctx->pc != 0x1FB184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A7B0_0x27a7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB184u; }
        if (ctx->pc != 0x1FB184u) { return; }
    }
    ctx->pc = 0x1FB184u;
label_1fb184:
    // 0x1fb184: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1fb184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1fb188:
    // 0x1fb188: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1fb188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fb18c:
    // 0x1fb18c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1fb18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1fb190:
    // 0x1fb190: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1fb190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1fb194:
    // 0x1fb194: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1fb194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1fb198:
    // 0x1fb198: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1fb198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1fb19c:
    // 0x1fb19c: 0xc4620030  lwc1        $f2, 0x30($v1)
    ctx->pc = 0x1fb19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb1a0:
    // 0x1fb1a0: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1fb1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb1a4:
    // 0x1fb1a4: 0xc4640034  lwc1        $f4, 0x34($v1)
    ctx->pc = 0x1fb1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fb1a8:
    // 0x1fb1a8: 0xc4430034  lwc1        $f3, 0x34($v0)
    ctx->pc = 0x1fb1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fb1ac:
    // 0x1fb1ac: 0x46001141  sub.s       $f5, $f2, $f0
    ctx->pc = 0x1fb1acu;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1fb1b0:
    // 0x1fb1b0: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1fb1b0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1fb1b4:
    // 0x1fb1b4: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x1fb1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb1b8:
    // 0x1fb1b8: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1fb1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb1bc:
    // 0x1fb1bc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1fb1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb1c0:
    // 0x1fb1c0: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1fb1c0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fb1c4:
    // 0x1fb1c4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1fb1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb1c8:
    // 0x1fb1c8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1fb1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb1cc:
    // 0x1fb1cc: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fb1ccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fb1d0:
    // 0x1fb1d0: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fb1d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fb1d4:
    // 0x1fb1d4: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fb1d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fb1d8:
    // 0x1fb1d8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1fb1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1fb1dc:
    // 0x1fb1dc: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1fb1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb1e0:
    // 0x1fb1e0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1fb1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb1e4:
    // 0x1fb1e4: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x1fb1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb1e8:
    // 0x1fb1e8: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fb1e8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fb1ec:
    // 0x1fb1ec: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fb1ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fb1f0:
    // 0x1fb1f0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fb1f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fb1f4:
    // 0x1fb1f4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1fb1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1fb1f8:
    // 0x1fb1f8: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x1fb1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb1fc:
    // 0x1fb1fc: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x1fb1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb200:
    // 0x1fb200: 0xc4420028  lwc1        $f2, 0x28($v0)
    ctx->pc = 0x1fb200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb204:
    // 0x1fb204: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fb204u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fb208:
    // 0x1fb208: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fb208u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fb20c:
    // 0x1fb20c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fb20cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fb210:
    // 0x1fb210: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x1fb210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_1fb214:
    // 0x1fb214: 0xc09ea24  jal         func_27A890
label_1fb218:
    if (ctx->pc == 0x1FB218u) {
        ctx->pc = 0x1FB218u;
            // 0x1fb218: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x1FB21Cu;
        goto label_1fb21c;
    }
    ctx->pc = 0x1FB214u;
    SET_GPR_U32(ctx, 31, 0x1FB21Cu);
    ctx->pc = 0x1FB218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB214u;
            // 0x1fb218: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A890u;
    if (runtime->hasFunction(0x27A890u)) {
        auto targetFn = runtime->lookupFunction(0x27A890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB21Cu; }
        if (ctx->pc != 0x1FB21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A890_0x27a890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB21Cu; }
        if (ctx->pc != 0x1FB21Cu) { return; }
    }
    ctx->pc = 0x1FB21Cu;
label_1fb21c:
    // 0x1fb21c: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x1fb21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb220:
    // 0x1fb220: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1fb220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb224:
    // 0x1fb224: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1fb224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb228:
    // 0x1fb228: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1fb228u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1fb22c:
    // 0x1fb22c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1fb22cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fb230:
    // 0x1fb230: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1fb234:
    if (ctx->pc == 0x1FB234u) {
        ctx->pc = 0x1FB238u;
        goto label_1fb238;
    }
    ctx->pc = 0x1FB230u;
    {
        const bool branch_taken_0x1fb230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb230) {
            ctx->pc = 0x1FB250u;
            goto label_1fb250;
        }
    }
    ctx->pc = 0x1FB238u;
label_1fb238:
    // 0x1fb238: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1fb238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fb23c:
    // 0x1fb23c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fb23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fb240:
    // 0x1fb240: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1fb240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fb244:
    // 0x1fb244: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1fb244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1fb248:
    // 0x1fb248: 0x320f809  jalr        $t9
label_1fb24c:
    if (ctx->pc == 0x1FB24Cu) {
        ctx->pc = 0x1FB24Cu;
            // 0x1fb24c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FB250u;
        goto label_1fb250;
    }
    ctx->pc = 0x1FB248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FB250u);
        ctx->pc = 0x1FB24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB248u;
            // 0x1fb24c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FB250u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FB250u; }
            if (ctx->pc != 0x1FB250u) { return; }
        }
        }
    }
    ctx->pc = 0x1FB250u;
label_1fb250:
    // 0x1fb250: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fb250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fb254:
    // 0x1fb254: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1fb254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1fb258:
    // 0x1fb258: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1fb258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1fb25c:
    // 0x1fb25c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fb25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fb260:
    // 0x1fb260: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1fb260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1fb264:
    // 0x1fb264: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fb264u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fb268:
    // 0x1fb268: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fb26c:
    if (ctx->pc == 0x1FB26Cu) {
        ctx->pc = 0x1FB26Cu;
            // 0x1fb26c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1FB270u;
        goto label_1fb270;
    }
    ctx->pc = 0x1FB268u;
    {
        const bool branch_taken_0x1fb268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB268u;
            // 0x1fb26c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb268) {
            ctx->pc = 0x1FB298u;
            goto label_1fb298;
        }
    }
    ctx->pc = 0x1FB270u;
label_1fb270:
    // 0x1fb270: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1fb270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1fb274:
    // 0x1fb274: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fb274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fb278:
    // 0x1fb278: 0x2463b0b8  addiu       $v1, $v1, -0x4F48
    ctx->pc = 0x1fb278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947000));
label_1fb27c:
    // 0x1fb27c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fb27cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fb280:
    // 0x1fb280: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fb280u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1fb284:
    // 0x1fb284: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fb284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1fb288:
    // 0x1fb288: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fb288u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1fb28c:
    // 0x1fb28c: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1fb28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1fb290:
    // 0x1fb290: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fb290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1fb294:
    // 0x1fb294: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1fb294u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1fb298:
    // 0x1fb298: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fb298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb29c:
    // 0x1fb29c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fb29cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fb2a0:
    // 0x1fb2a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fb2a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb2a4:
    // 0x1fb2a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fb2a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb2a8:
    // 0x1fb2a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fb2a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb2ac:
    // 0x1fb2ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fb2acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb2b0:
    // 0x1fb2b0: 0x3e00008  jr          $ra
label_1fb2b4:
    if (ctx->pc == 0x1FB2B4u) {
        ctx->pc = 0x1FB2B4u;
            // 0x1fb2b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1FB2B8u;
        goto label_1fb2b8;
    }
    ctx->pc = 0x1FB2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB2B0u;
            // 0x1fb2b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB2B8u;
label_1fb2b8:
    // 0x1fb2b8: 0x0  nop
    ctx->pc = 0x1fb2b8u;
    // NOP
label_1fb2bc:
    // 0x1fb2bc: 0x0  nop
    ctx->pc = 0x1fb2bcu;
    // NOP
label_1fb2c0:
    // 0x1fb2c0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1fb2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1fb2c4:
    // 0x1fb2c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fb2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fb2c8:
    // 0x1fb2c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1fb2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1fb2cc:
    // 0x1fb2cc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1fb2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1fb2d0:
    // 0x1fb2d0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1fb2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1fb2d4:
    // 0x1fb2d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1fb2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1fb2d8:
    // 0x1fb2d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fb2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1fb2dc:
    // 0x1fb2dc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1fb2dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fb2e0:
    // 0x1fb2e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fb2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fb2e4:
    // 0x1fb2e4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1fb2e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fb2e8:
    // 0x1fb2e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fb2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fb2ec:
    // 0x1fb2ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fb2ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb2f0:
    // 0x1fb2f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fb2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fb2f4:
    // 0x1fb2f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1fb2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1fb2f8:
    // 0x1fb2f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fb2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fb2fc:
    // 0x1fb2fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fb2fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fb300:
    // 0x1fb300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fb300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fb304:
    // 0x1fb304: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1fb304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fb308:
    // 0x1fb308: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1fb308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1fb30c:
    // 0x1fb30c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fb310:
    // 0x1fb310: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1fb310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1fb314:
    // 0x1fb314: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1fb314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fb318:
    // 0x1fb318: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1fb31c:
    if (ctx->pc == 0x1FB31Cu) {
        ctx->pc = 0x1FB31Cu;
            // 0x1fb31c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1FB320u;
        goto label_1fb320;
    }
    ctx->pc = 0x1FB318u;
    {
        const bool branch_taken_0x1fb318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB318u;
            // 0x1fb31c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb318) {
            ctx->pc = 0x1FB348u;
            goto label_1fb348;
        }
    }
    ctx->pc = 0x1FB320u;
label_1fb320:
    // 0x1fb320: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1fb320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fb324:
    // 0x1fb324: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1fb324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1fb328:
    // 0x1fb328: 0x2442d9a0  addiu       $v0, $v0, -0x2660
    ctx->pc = 0x1fb328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957472));
label_1fb32c:
    // 0x1fb32c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fb32cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1fb330:
    // 0x1fb330: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fb330u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1fb334:
    // 0x1fb334: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1fb334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1fb338:
    // 0x1fb338: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fb338u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1fb33c:
    // 0x1fb33c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1fb33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1fb340:
    // 0x1fb340: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1fb340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1fb344:
    // 0x1fb344: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fb344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1fb348:
    // 0x1fb348: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1fb348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1fb34c:
    // 0x1fb34c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1fb34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fb350:
    // 0x1fb350: 0x8eb70000  lw          $s7, 0x0($s5)
    ctx->pc = 0x1fb350u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1fb354:
    // 0x1fb354: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1fb354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1fb358:
    // 0x1fb358: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1fb358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1fb35c:
    // 0x1fb35c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1fb35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb360:
    // 0x1fb360: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x1fb360u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fb364:
    // 0x1fb364: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1fb364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb368:
    // 0x1fb368: 0x26e30020  addiu       $v1, $s7, 0x20
    ctx->pc = 0x1fb368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
label_1fb36c:
    // 0x1fb36c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1fb36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb370:
    // 0x1fb370: 0x8e7e0000  lw          $fp, 0x0($s3)
    ctx->pc = 0x1fb370u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1fb374:
    // 0x1fb374: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1fb374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1fb378:
    // 0x1fb378: 0x24900030  addiu       $s0, $a0, 0x30
    ctx->pc = 0x1fb378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_1fb37c:
    // 0x1fb37c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fb37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb380:
    // 0x1fb380: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1fb380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1fb384:
    // 0x1fb384: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x1fb384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fb388:
    // 0x1fb388: 0xc44b0014  lwc1        $f11, 0x14($v0)
    ctx->pc = 0x1fb388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1fb38c:
    // 0x1fb38c: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x1fb38cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1fb390:
    // 0x1fb390: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x1fb390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1fb394:
    // 0x1fb394: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1fb394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1fb398:
    // 0x1fb398: 0xe7ac00b0  swc1        $f12, 0xB0($sp)
    ctx->pc = 0x1fb398u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1fb39c:
    // 0x1fb39c: 0xc44a0018  lwc1        $f10, 0x18($v0)
    ctx->pc = 0x1fb39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1fb3a0:
    // 0x1fb3a0: 0xe7ab00b4  swc1        $f11, 0xB4($sp)
    ctx->pc = 0x1fb3a0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1fb3a4:
    // 0x1fb3a4: 0xc449001c  lwc1        $f9, 0x1C($v0)
    ctx->pc = 0x1fb3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1fb3a8:
    // 0x1fb3a8: 0xe7aa00b8  swc1        $f10, 0xB8($sp)
    ctx->pc = 0x1fb3a8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1fb3ac:
    // 0x1fb3ac: 0xc4480020  lwc1        $f8, 0x20($v0)
    ctx->pc = 0x1fb3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1fb3b0:
    // 0x1fb3b0: 0xe7a900bc  swc1        $f9, 0xBC($sp)
    ctx->pc = 0x1fb3b0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1fb3b4:
    // 0x1fb3b4: 0xc4470024  lwc1        $f7, 0x24($v0)
    ctx->pc = 0x1fb3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1fb3b8:
    // 0x1fb3b8: 0xe7a800c0  swc1        $f8, 0xC0($sp)
    ctx->pc = 0x1fb3b8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1fb3bc:
    // 0x1fb3bc: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x1fb3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fb3c0:
    // 0x1fb3c0: 0xe7a700c4  swc1        $f7, 0xC4($sp)
    ctx->pc = 0x1fb3c0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1fb3c4:
    // 0x1fb3c4: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x1fb3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fb3c8:
    // 0x1fb3c8: 0xe7a600c8  swc1        $f6, 0xC8($sp)
    ctx->pc = 0x1fb3c8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1fb3cc:
    // 0x1fb3cc: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x1fb3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fb3d0:
    // 0x1fb3d0: 0xe7a500cc  swc1        $f5, 0xCC($sp)
    ctx->pc = 0x1fb3d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1fb3d4:
    // 0x1fb3d4: 0xc4430034  lwc1        $f3, 0x34($v0)
    ctx->pc = 0x1fb3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fb3d8:
    // 0x1fb3d8: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x1fb3d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1fb3dc:
    // 0x1fb3dc: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x1fb3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb3e0:
    // 0x1fb3e0: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x1fb3e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1fb3e4:
    // 0x1fb3e4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1fb3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb3e8:
    // 0x1fb3e8: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x1fb3e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1fb3ec:
    // 0x1fb3ec: 0xe7a100dc  swc1        $f1, 0xDC($sp)
    ctx->pc = 0x1fb3ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1fb3f0:
    // 0x1fb3f0: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x1fb3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fb3f4:
    // 0x1fb3f4: 0xc7ab00a0  lwc1        $f11, 0xA0($sp)
    ctx->pc = 0x1fb3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1fb3f8:
    // 0x1fb3f8: 0xc7aa00b0  lwc1        $f10, 0xB0($sp)
    ctx->pc = 0x1fb3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1fb3fc:
    // 0x1fb3fc: 0xc7a900d0  lwc1        $f9, 0xD0($sp)
    ctx->pc = 0x1fb3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1fb400:
    // 0x1fb400: 0xc7a800c4  lwc1        $f8, 0xC4($sp)
    ctx->pc = 0x1fb400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1fb404:
    // 0x1fb404: 0xc7a700a4  lwc1        $f7, 0xA4($sp)
    ctx->pc = 0x1fb404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1fb408:
    // 0x1fb408: 0xc7a600b4  lwc1        $f6, 0xB4($sp)
    ctx->pc = 0x1fb408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fb40c:
    // 0x1fb40c: 0xc7a500d4  lwc1        $f5, 0xD4($sp)
    ctx->pc = 0x1fb40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fb410:
    // 0x1fb410: 0xc7a400c8  lwc1        $f4, 0xC8($sp)
    ctx->pc = 0x1fb410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fb414:
    // 0x1fb414: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x1fb414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fb418:
    // 0x1fb418: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x1fb418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb41c:
    // 0x1fb41c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1fb41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb420:
    // 0x1fb420: 0xc46e0004  lwc1        $f14, 0x4($v1)
    ctx->pc = 0x1fb420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1fb424:
    // 0x1fb424: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fb424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1fb428:
    // 0x1fb428: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1fb428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1fb42c:
    // 0x1fb42c: 0xc46d0008  lwc1        $f13, 0x8($v1)
    ctx->pc = 0x1fb42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1fb430:
    // 0x1fb430: 0x460a701a  mula.s      $f14, $f10
    ctx->pc = 0x1fb430u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
label_1fb434:
    // 0x1fb434: 0x460b781e  madda.s     $f15, $f11
    ctx->pc = 0x1fb434u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[11]));
label_1fb438:
    // 0x1fb438: 0x460c681c  madd.s      $f0, $f13, $f12
    ctx->pc = 0x1fb438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[12]));
label_1fb43c:
    // 0x1fb43c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1fb43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1fb440:
    // 0x1fb440: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x1fb440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_1fb444:
    // 0x1fb444: 0x4606701a  mula.s      $f14, $f6
    ctx->pc = 0x1fb444u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
label_1fb448:
    // 0x1fb448: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1fb448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1fb44c:
    // 0x1fb44c: 0x4607781e  madda.s     $f15, $f7
    ctx->pc = 0x1fb44cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[7]));
label_1fb450:
    // 0x1fb450: 0x4608681c  madd.s      $f0, $f13, $f8
    ctx->pc = 0x1fb450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[8]));
label_1fb454:
    // 0x1fb454: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1fb454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1fb458:
    // 0x1fb458: 0x4602701a  mula.s      $f14, $f2
    ctx->pc = 0x1fb458u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
label_1fb45c:
    // 0x1fb45c: 0x4603781e  madda.s     $f15, $f3
    ctx->pc = 0x1fb45cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[3]));
label_1fb460:
    // 0x1fb460: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1fb460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1fb464:
    // 0x1fb464: 0x4604681c  madd.s      $f0, $f13, $f4
    ctx->pc = 0x1fb464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[4]));
label_1fb468:
    // 0x1fb468: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fb468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fb46c:
    // 0x1fb46c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1fb46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1fb470:
    // 0x1fb470: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1fb470u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_1fb474:
    // 0x1fb474: 0x4c1ffea  bgez        $a2, . + 4 + (-0x16 << 2)
label_1fb478:
    if (ctx->pc == 0x1FB478u) {
        ctx->pc = 0x1FB478u;
            // 0x1fb478: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->pc = 0x1FB47Cu;
        goto label_1fb47c;
    }
    ctx->pc = 0x1FB474u;
    {
        const bool branch_taken_0x1fb474 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1FB478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB474u;
            // 0x1fb478: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb474) {
            ctx->pc = 0x1FB420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fb420;
        }
    }
    ctx->pc = 0x1FB47Cu;
label_1fb47c:
    // 0x1fb47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fb47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb480:
    // 0x1fb480: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1fb480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1fb484:
    // 0x1fb484: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x1fb484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1fb488:
    // 0x1fb488: 0xc09ea24  jal         func_27A890
label_1fb48c:
    if (ctx->pc == 0x1FB48Cu) {
        ctx->pc = 0x1FB48Cu;
            // 0x1fb48c: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x1FB490u;
        goto label_1fb490;
    }
    ctx->pc = 0x1FB488u;
    SET_GPR_U32(ctx, 31, 0x1FB490u);
    ctx->pc = 0x1FB48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB488u;
            // 0x1fb48c: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A890u;
    if (runtime->hasFunction(0x27A890u)) {
        auto targetFn = runtime->lookupFunction(0x27A890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB490u; }
        if (ctx->pc != 0x1FB490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A890_0x27a890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB490u; }
        if (ctx->pc != 0x1FB490u) { return; }
    }
    ctx->pc = 0x1FB490u;
label_1fb490:
    // 0x1fb490: 0xc6e30010  lwc1        $f3, 0x10($s7)
    ctx->pc = 0x1fb490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fb494:
    // 0x1fb494: 0xc7c20010  lwc1        $f2, 0x10($fp)
    ctx->pc = 0x1fb494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb498:
    // 0x1fb498: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x1fb498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb49c:
    // 0x1fb49c: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x1fb49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb4a0:
    // 0x1fb4a0: 0x46031100  add.s       $f4, $f2, $f3
    ctx->pc = 0x1fb4a0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1fb4a4:
    // 0x1fb4a4: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x1fb4a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_1fb4a8:
    // 0x1fb4a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fb4a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fb4ac:
    // 0x1fb4ac: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
label_1fb4b0:
    if (ctx->pc == 0x1FB4B0u) {
        ctx->pc = 0x1FB4B0u;
            // 0x1fb4b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FB4B4u;
        goto label_1fb4b4;
    }
    ctx->pc = 0x1FB4ACu;
    {
        const bool branch_taken_0x1fb4ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb4ac) {
            ctx->pc = 0x1FB4B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB4ACu;
            // 0x1fb4b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FB548u;
            goto label_1fb548;
        }
    }
    ctx->pc = 0x1FB4B4u;
label_1fb4b4:
    // 0x1fb4b4: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x1fb4b4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_1fb4b8:
    // 0x1fb4b8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1fb4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb4bc:
    // 0x1fb4bc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1fb4bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fb4c0:
    // 0x1fb4c0: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1fb4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb4c4:
    // 0x1fb4c4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fb4c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fb4c8:
    // 0x1fb4c8: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1fb4c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_1fb4cc:
    // 0x1fb4cc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1fb4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1fb4d0:
    // 0x1fb4d0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1fb4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb4d4:
    // 0x1fb4d4: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x1fb4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb4d8:
    // 0x1fb4d8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fb4d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fb4dc:
    // 0x1fb4dc: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1fb4dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_1fb4e0:
    // 0x1fb4e0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1fb4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1fb4e4:
    // 0x1fb4e4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1fb4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb4e8:
    // 0x1fb4e8: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1fb4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb4ec:
    // 0x1fb4ec: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fb4ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fb4f0:
    // 0x1fb4f0: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1fb4f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_1fb4f4:
    // 0x1fb4f4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1fb4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1fb4f8:
    // 0x1fb4f8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1fb4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb4fc:
    // 0x1fb4fc: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x1fb4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb500:
    // 0x1fb500: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fb500u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fb504:
    // 0x1fb504: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1fb504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_1fb508:
    // 0x1fb508: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1fb508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1fb50c:
    // 0x1fb50c: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x1fb50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb510:
    // 0x1fb510: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1fb510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb514:
    // 0x1fb514: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1fb514u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1fb518:
    // 0x1fb518: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1fb518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1fb51c:
    // 0x1fb51c: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1fb51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb520:
    // 0x1fb520: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1fb520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1fb524:
    // 0x1fb524: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1fb524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb528:
    // 0x1fb528: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1fb528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1fb52c:
    // 0x1fb52c: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1fb52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb530:
    // 0x1fb530: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1fb530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1fb534:
    // 0x1fb534: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1fb538:
    if (ctx->pc == 0x1FB538u) {
        ctx->pc = 0x1FB538u;
            // 0x1fb538: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->pc = 0x1FB53Cu;
        goto label_1fb53c;
    }
    ctx->pc = 0x1FB534u;
    {
        const bool branch_taken_0x1fb534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB534u;
            // 0x1fb538: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb534) {
            ctx->pc = 0x1FB544u;
            goto label_1fb544;
        }
    }
    ctx->pc = 0x1FB53Cu;
label_1fb53c:
    // 0x1fb53c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fb540:
    if (ctx->pc == 0x1FB540u) {
        ctx->pc = 0x1FB540u;
            // 0x1fb540: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FB544u;
        goto label_1fb544;
    }
    ctx->pc = 0x1FB53Cu;
    {
        const bool branch_taken_0x1fb53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB53Cu;
            // 0x1fb540: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb53c) {
            ctx->pc = 0x1FB548u;
            goto label_1fb548;
        }
    }
    ctx->pc = 0x1FB544u;
label_1fb544:
    // 0x1fb544: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fb544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fb548:
    // 0x1fb548: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
label_1fb54c:
    if (ctx->pc == 0x1FB54Cu) {
        ctx->pc = 0x1FB54Cu;
            // 0x1fb54c: 0x9684000c  lhu         $a0, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x1FB550u;
        goto label_1fb550;
    }
    ctx->pc = 0x1FB548u;
    {
        const bool branch_taken_0x1fb548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb548) {
            ctx->pc = 0x1FB54Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB548u;
            // 0x1fb54c: 0x9684000c  lhu         $a0, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FB5B4u;
            goto label_1fb5b4;
        }
    }
    ctx->pc = 0x1FB550u;
label_1fb550:
    // 0x1fb550: 0x9684000c  lhu         $a0, 0xC($s4)
    ctx->pc = 0x1fb550u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_1fb554:
    // 0x1fb554: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1fb554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1fb558:
    // 0x1fb558: 0x5483000d  bnel        $a0, $v1, . + 4 + (0xD << 2)
label_1fb55c:
    if (ctx->pc == 0x1FB55Cu) {
        ctx->pc = 0x1FB55Cu;
            // 0x1fb55c: 0x9685000c  lhu         $a1, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x1FB560u;
        goto label_1fb560;
    }
    ctx->pc = 0x1FB558u;
    {
        const bool branch_taken_0x1fb558 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fb558) {
            ctx->pc = 0x1FB55Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB558u;
            // 0x1fb55c: 0x9685000c  lhu         $a1, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FB590u;
            goto label_1fb590;
        }
    }
    ctx->pc = 0x1FB560u;
label_1fb560:
    // 0x1fb560: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1fb560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1fb564:
    // 0x1fb564: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fb564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fb568:
    // 0x1fb568: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1fb568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fb56c:
    // 0x1fb56c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1fb56cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1fb570:
    // 0x1fb570: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1fb570u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fb574:
    // 0x1fb574: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fb574u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb578:
    // 0x1fb578: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fb578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fb57c:
    // 0x1fb57c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1fb57cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1fb580:
    // 0x1fb580: 0x320f809  jalr        $t9
label_1fb584:
    if (ctx->pc == 0x1FB584u) {
        ctx->pc = 0x1FB584u;
            // 0x1fb584: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FB588u;
        goto label_1fb588;
    }
    ctx->pc = 0x1FB580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FB588u);
        ctx->pc = 0x1FB584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB580u;
            // 0x1fb584: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FB588u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FB588u; }
            if (ctx->pc != 0x1FB588u) { return; }
        }
        }
    }
    ctx->pc = 0x1FB588u;
label_1fb588:
    // 0x1fb588: 0xa682000c  sh          $v0, 0xC($s4)
    ctx->pc = 0x1fb588u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 2));
label_1fb58c:
    // 0x1fb58c: 0x9685000c  lhu         $a1, 0xC($s4)
    ctx->pc = 0x1fb58cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_1fb590:
    // 0x1fb590: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1fb590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1fb594:
    // 0x1fb594: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
label_1fb598:
    if (ctx->pc == 0x1FB598u) {
        ctx->pc = 0x1FB59Cu;
        goto label_1fb59c;
    }
    ctx->pc = 0x1FB594u;
    {
        const bool branch_taken_0x1fb594 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fb594) {
            ctx->pc = 0x1FB5E8u;
            goto label_1fb5e8;
        }
    }
    ctx->pc = 0x1FB59Cu;
label_1fb59c:
    // 0x1fb59c: 0xc07af98  jal         func_1EBE60
label_1fb5a0:
    if (ctx->pc == 0x1FB5A0u) {
        ctx->pc = 0x1FB5A0u;
            // 0x1fb5a0: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x1FB5A4u;
        goto label_1fb5a4;
    }
    ctx->pc = 0x1FB59Cu;
    SET_GPR_U32(ctx, 31, 0x1FB5A4u);
    ctx->pc = 0x1FB5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB59Cu;
            // 0x1fb5a0: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE60u;
    if (runtime->hasFunction(0x1EBE60u)) {
        auto targetFn = runtime->lookupFunction(0x1EBE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB5A4u; }
        if (ctx->pc != 0x1FB5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EBE60_0x1ebe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB5A4u; }
        if (ctx->pc != 0x1FB5A4u) { return; }
    }
    ctx->pc = 0x1FB5A4u;
label_1fb5a4:
    // 0x1fb5a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1fb5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fb5a8:
    // 0x1fb5a8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1fb5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1fb5ac:
    // 0x1fb5ac: 0x1000000e  b           . + 4 + (0xE << 2)
label_1fb5b0:
    if (ctx->pc == 0x1FB5B0u) {
        ctx->pc = 0x1FB5B0u;
            // 0x1fb5b0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1FB5B4u;
        goto label_1fb5b4;
    }
    ctx->pc = 0x1FB5ACu;
    {
        const bool branch_taken_0x1fb5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB5ACu;
            // 0x1fb5b0: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb5ac) {
            ctx->pc = 0x1FB5E8u;
            goto label_1fb5e8;
        }
    }
    ctx->pc = 0x1FB5B4u;
label_1fb5b4:
    // 0x1fb5b4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1fb5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1fb5b8:
    // 0x1fb5b8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1fb5bc:
    if (ctx->pc == 0x1FB5BCu) {
        ctx->pc = 0x1FB5C0u;
        goto label_1fb5c0;
    }
    ctx->pc = 0x1FB5B8u;
    {
        const bool branch_taken_0x1fb5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fb5b8) {
            ctx->pc = 0x1FB5E8u;
            goto label_1fb5e8;
        }
    }
    ctx->pc = 0x1FB5C0u;
label_1fb5c0:
    // 0x1fb5c0: 0xc07af94  jal         func_1EBE50
label_1fb5c4:
    if (ctx->pc == 0x1FB5C4u) {
        ctx->pc = 0x1FB5C4u;
            // 0x1fb5c4: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1FB5C8u;
        goto label_1fb5c8;
    }
    ctx->pc = 0x1FB5C0u;
    SET_GPR_U32(ctx, 31, 0x1FB5C8u);
    ctx->pc = 0x1FB5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB5C0u;
            // 0x1fb5c4: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE50u;
    if (runtime->hasFunction(0x1EBE50u)) {
        auto targetFn = runtime->lookupFunction(0x1EBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB5C8u; }
        if (ctx->pc != 0x1FB5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EBE50_0x1ebe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB5C8u; }
        if (ctx->pc != 0x1FB5C8u) { return; }
    }
    ctx->pc = 0x1FB5C8u;
label_1fb5c8:
    // 0x1fb5c8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1fb5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1fb5cc:
    // 0x1fb5cc: 0x9685000c  lhu         $a1, 0xC($s4)
    ctx->pc = 0x1fb5ccu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_1fb5d0:
    // 0x1fb5d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fb5d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fb5d4:
    // 0x1fb5d4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1fb5d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1fb5d8:
    // 0x1fb5d8: 0x320f809  jalr        $t9
label_1fb5dc:
    if (ctx->pc == 0x1FB5DCu) {
        ctx->pc = 0x1FB5DCu;
            // 0x1fb5dc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FB5E0u;
        goto label_1fb5e0;
    }
    ctx->pc = 0x1FB5D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FB5E0u);
        ctx->pc = 0x1FB5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB5D8u;
            // 0x1fb5dc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FB5E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FB5E0u; }
            if (ctx->pc != 0x1FB5E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1FB5E0u;
label_1fb5e0:
    // 0x1fb5e0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1fb5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1fb5e4:
    // 0x1fb5e4: 0xa683000c  sh          $v1, 0xC($s4)
    ctx->pc = 0x1fb5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 3));
label_1fb5e8:
    // 0x1fb5e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fb5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fb5ec:
    // 0x1fb5ec: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1fb5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1fb5f0:
    // 0x1fb5f0: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1fb5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1fb5f4:
    // 0x1fb5f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fb5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fb5f8:
    // 0x1fb5f8: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1fb5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1fb5fc:
    // 0x1fb5fc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fb5fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fb600:
    // 0x1fb600: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fb604:
    if (ctx->pc == 0x1FB604u) {
        ctx->pc = 0x1FB604u;
            // 0x1fb604: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1FB608u;
        goto label_1fb608;
    }
    ctx->pc = 0x1FB600u;
    {
        const bool branch_taken_0x1fb600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB600u;
            // 0x1fb604: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb600) {
            ctx->pc = 0x1FB630u;
            goto label_1fb630;
        }
    }
    ctx->pc = 0x1FB608u;
label_1fb608:
    // 0x1fb608: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1fb608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1fb60c:
    // 0x1fb60c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1fb60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1fb610:
    // 0x1fb610: 0x2463d998  addiu       $v1, $v1, -0x2668
    ctx->pc = 0x1fb610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957464));
label_1fb614:
    // 0x1fb614: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fb614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fb618:
    // 0x1fb618: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fb618u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1fb61c:
    // 0x1fb61c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fb61cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1fb620:
    // 0x1fb620: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fb620u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1fb624:
    // 0x1fb624: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1fb624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1fb628:
    // 0x1fb628: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fb628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1fb62c:
    // 0x1fb62c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1fb62cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1fb630:
    // 0x1fb630: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1fb630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1fb634:
    // 0x1fb634: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1fb634u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1fb638:
    // 0x1fb638: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1fb638u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1fb63c:
    // 0x1fb63c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1fb63cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fb640:
    // 0x1fb640: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fb640u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb644:
    // 0x1fb644: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fb644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fb648:
    // 0x1fb648: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fb648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb64c:
    // 0x1fb64c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fb64cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb650:
    // 0x1fb650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fb650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb654:
    // 0x1fb654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fb654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb658:
    // 0x1fb658: 0x3e00008  jr          $ra
label_1fb65c:
    if (ctx->pc == 0x1FB65Cu) {
        ctx->pc = 0x1FB65Cu;
            // 0x1fb65c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1FB660u;
        goto label_1fb660;
    }
    ctx->pc = 0x1FB658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB658u;
            // 0x1fb65c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB660u;
label_1fb660:
    // 0x1fb660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fb664:
    // 0x1fb664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fb664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fb668:
    // 0x1fb668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fb668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fb66c:
    // 0x1fb66c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fb66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb670:
    // 0x1fb670: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
label_1fb674:
    if (ctx->pc == 0x1FB674u) {
        ctx->pc = 0x1FB674u;
            // 0x1fb674: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FB678u;
        goto label_1fb678;
    }
    ctx->pc = 0x1FB670u;
    {
        const bool branch_taken_0x1fb670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb670) {
            ctx->pc = 0x1FB674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB670u;
            // 0x1fb674: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FB700u;
            goto label_1fb700;
        }
    }
    ctx->pc = 0x1FB678u;
label_1fb678:
    // 0x1fb678: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fb678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fb67c:
    // 0x1fb67c: 0x2442de50  addiu       $v0, $v0, -0x21B0
    ctx->pc = 0x1fb67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958672));
label_1fb680:
    // 0x1fb680: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_1fb684:
    if (ctx->pc == 0x1FB684u) {
        ctx->pc = 0x1FB684u;
            // 0x1fb684: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FB688u;
        goto label_1fb688;
    }
    ctx->pc = 0x1FB680u;
    {
        const bool branch_taken_0x1fb680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB680u;
            // 0x1fb684: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb680) {
            ctx->pc = 0x1FB6D4u;
            goto label_1fb6d4;
        }
    }
    ctx->pc = 0x1FB688u;
label_1fb688:
    // 0x1fb688: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fb688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fb68c:
    // 0x1fb68c: 0x2442de10  addiu       $v0, $v0, -0x21F0
    ctx->pc = 0x1fb68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958608));
label_1fb690:
    // 0x1fb690: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1fb694:
    if (ctx->pc == 0x1FB694u) {
        ctx->pc = 0x1FB694u;
            // 0x1fb694: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FB698u;
        goto label_1fb698;
    }
    ctx->pc = 0x1FB690u;
    {
        const bool branch_taken_0x1fb690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB690u;
            // 0x1fb694: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb690) {
            ctx->pc = 0x1FB6D4u;
            goto label_1fb6d4;
        }
    }
    ctx->pc = 0x1FB698u;
label_1fb698:
    // 0x1fb698: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fb698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fb69c:
    // 0x1fb69c: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x1fb69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_1fb6a0:
    // 0x1fb6a0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1fb6a4:
    if (ctx->pc == 0x1FB6A4u) {
        ctx->pc = 0x1FB6A4u;
            // 0x1fb6a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FB6A8u;
        goto label_1fb6a8;
    }
    ctx->pc = 0x1FB6A0u;
    {
        const bool branch_taken_0x1fb6a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB6A0u;
            // 0x1fb6a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6a0) {
            ctx->pc = 0x1FB6D4u;
            goto label_1fb6d4;
        }
    }
    ctx->pc = 0x1FB6A8u;
label_1fb6a8:
    // 0x1fb6a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fb6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fb6ac:
    // 0x1fb6ac: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1fb6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1fb6b0:
    // 0x1fb6b0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1fb6b4:
    if (ctx->pc == 0x1FB6B4u) {
        ctx->pc = 0x1FB6B4u;
            // 0x1fb6b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FB6B8u;
        goto label_1fb6b8;
    }
    ctx->pc = 0x1FB6B0u;
    {
        const bool branch_taken_0x1fb6b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB6B0u;
            // 0x1fb6b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6b0) {
            ctx->pc = 0x1FB6D4u;
            goto label_1fb6d4;
        }
    }
    ctx->pc = 0x1FB6B8u;
label_1fb6b8:
    // 0x1fb6b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fb6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fb6bc:
    // 0x1fb6bc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1fb6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1fb6c0:
    // 0x1fb6c0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1fb6c4:
    if (ctx->pc == 0x1FB6C4u) {
        ctx->pc = 0x1FB6C4u;
            // 0x1fb6c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FB6C8u;
        goto label_1fb6c8;
    }
    ctx->pc = 0x1FB6C0u;
    {
        const bool branch_taken_0x1fb6c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB6C0u;
            // 0x1fb6c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6c0) {
            ctx->pc = 0x1FB6D4u;
            goto label_1fb6d4;
        }
    }
    ctx->pc = 0x1FB6C8u;
label_1fb6c8:
    // 0x1fb6c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fb6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fb6cc:
    // 0x1fb6cc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1fb6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1fb6d0:
    // 0x1fb6d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fb6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fb6d4:
    // 0x1fb6d4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1fb6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1fb6d8:
    // 0x1fb6d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1fb6d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1fb6dc:
    // 0x1fb6dc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1fb6e0:
    if (ctx->pc == 0x1FB6E0u) {
        ctx->pc = 0x1FB6E4u;
        goto label_1fb6e4;
    }
    ctx->pc = 0x1FB6DCu;
    {
        const bool branch_taken_0x1fb6dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fb6dc) {
            ctx->pc = 0x1FB6FCu;
            goto label_1fb6fc;
        }
    }
    ctx->pc = 0x1FB6E4u;
label_1fb6e4:
    // 0x1fb6e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fb6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fb6e8:
    // 0x1fb6e8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1fb6e8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1fb6ec:
    // 0x1fb6ec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1fb6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1fb6f0:
    // 0x1fb6f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fb6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb6f4:
    // 0x1fb6f4: 0xc0a7ab4  jal         func_29EAD0
label_1fb6f8:
    if (ctx->pc == 0x1FB6F8u) {
        ctx->pc = 0x1FB6F8u;
            // 0x1fb6f8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1FB6FCu;
        goto label_1fb6fc;
    }
    ctx->pc = 0x1FB6F4u;
    SET_GPR_U32(ctx, 31, 0x1FB6FCu);
    ctx->pc = 0x1FB6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB6F4u;
            // 0x1fb6f8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB6FCu; }
        if (ctx->pc != 0x1FB6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB6FCu; }
        if (ctx->pc != 0x1FB6FCu) { return; }
    }
    ctx->pc = 0x1FB6FCu;
label_1fb6fc:
    // 0x1fb6fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fb6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb700:
    // 0x1fb700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb704:
    // 0x1fb704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fb704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb708:
    // 0x1fb708: 0x3e00008  jr          $ra
label_1fb70c:
    if (ctx->pc == 0x1FB70Cu) {
        ctx->pc = 0x1FB70Cu;
            // 0x1fb70c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FB710u;
        goto label_1fb710;
    }
    ctx->pc = 0x1FB708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB708u;
            // 0x1fb70c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB710u;
label_1fb710:
    // 0x1fb710: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1fb710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1fb714:
    // 0x1fb714: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fb714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fb718:
    // 0x1fb718: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1fb718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1fb71c:
    // 0x1fb71c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1fb71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1fb720:
    // 0x1fb720: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1fb720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1fb724:
    // 0x1fb724: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1fb724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1fb728:
    // 0x1fb728: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1fb728u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fb72c:
    // 0x1fb72c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1fb72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1fb730:
    // 0x1fb730: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1fb730u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fb734:
    // 0x1fb734: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1fb734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1fb738:
    // 0x1fb738: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1fb738u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fb73c:
    // 0x1fb73c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1fb73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1fb740:
    // 0x1fb740: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fb740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb744:
    // 0x1fb744: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fb744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1fb748:
    // 0x1fb748: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1fb748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1fb74c:
    // 0x1fb74c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fb74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fb750:
    // 0x1fb750: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1fb750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fb754:
    // 0x1fb754: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fb754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fb758:
    // 0x1fb758: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1fb758u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fb75c:
    // 0x1fb75c: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1fb75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1fb760:
    // 0x1fb760: 0xc5143030  lwc1        $f20, 0x3030($t0)
    ctx->pc = 0x1fb760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fb764:
    // 0x1fb764: 0x8d120000  lw          $s2, 0x0($t0)
    ctx->pc = 0x1fb764u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1fb768:
    // 0x1fb768: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fb768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fb76c:
    // 0x1fb76c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1fb76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1fb770:
    // 0x1fb770: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1fb770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fb774:
    // 0x1fb774: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1fb778:
    if (ctx->pc == 0x1FB778u) {
        ctx->pc = 0x1FB778u;
            // 0x1fb778: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1FB77Cu;
        goto label_1fb77c;
    }
    ctx->pc = 0x1FB774u;
    {
        const bool branch_taken_0x1fb774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB774u;
            // 0x1fb778: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb774) {
            ctx->pc = 0x1FB7A4u;
            goto label_1fb7a4;
        }
    }
    ctx->pc = 0x1FB77Cu;
label_1fb77c:
    // 0x1fb77c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1fb77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fb780:
    // 0x1fb780: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1fb780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1fb784:
    // 0x1fb784: 0x2442d9a0  addiu       $v0, $v0, -0x2660
    ctx->pc = 0x1fb784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957472));
label_1fb788:
    // 0x1fb788: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fb788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1fb78c:
    // 0x1fb78c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fb78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1fb790:
    // 0x1fb790: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1fb790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1fb794:
    // 0x1fb794: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fb794u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1fb798:
    // 0x1fb798: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1fb798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1fb79c:
    // 0x1fb79c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1fb79cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1fb7a0:
    // 0x1fb7a0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fb7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1fb7a4:
    // 0x1fb7a4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1fb7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1fb7a8:
    // 0x1fb7a8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1fb7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fb7ac:
    // 0x1fb7ac: 0x8ebe0000  lw          $fp, 0x0($s5)
    ctx->pc = 0x1fb7acu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1fb7b0:
    // 0x1fb7b0: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1fb7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1fb7b4:
    // 0x1fb7b4: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x1fb7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1fb7b8:
    // 0x1fb7b8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1fb7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1fb7bc:
    // 0x1fb7bc: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1fb7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1fb7c0:
    // 0x1fb7c0: 0x27c30020  addiu       $v1, $fp, 0x20
    ctx->pc = 0x1fb7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_1fb7c4:
    // 0x1fb7c4: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x1fb7c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1fb7c8:
    // 0x1fb7c8: 0x24900030  addiu       $s0, $a0, 0x30
    ctx->pc = 0x1fb7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_1fb7cc:
    // 0x1fb7cc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1fb7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1fb7d0:
    // 0x1fb7d0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1fb7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb7d4:
    // 0x1fb7d4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1fb7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb7d8:
    // 0x1fb7d8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1fb7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb7dc:
    // 0x1fb7dc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1fb7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1fb7e0:
    // 0x1fb7e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fb7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb7e4:
    // 0x1fb7e4: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x1fb7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fb7e8:
    // 0x1fb7e8: 0xc44b0014  lwc1        $f11, 0x14($v0)
    ctx->pc = 0x1fb7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1fb7ec:
    // 0x1fb7ec: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x1fb7ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1fb7f0:
    // 0x1fb7f0: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x1fb7f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1fb7f4:
    // 0x1fb7f4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1fb7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1fb7f8:
    // 0x1fb7f8: 0xe7ac00d0  swc1        $f12, 0xD0($sp)
    ctx->pc = 0x1fb7f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1fb7fc:
    // 0x1fb7fc: 0xc44a0018  lwc1        $f10, 0x18($v0)
    ctx->pc = 0x1fb7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1fb800:
    // 0x1fb800: 0xe7ab00d4  swc1        $f11, 0xD4($sp)
    ctx->pc = 0x1fb800u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1fb804:
    // 0x1fb804: 0xc449001c  lwc1        $f9, 0x1C($v0)
    ctx->pc = 0x1fb804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1fb808:
    // 0x1fb808: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x1fb808u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1fb80c:
    // 0x1fb80c: 0xc4480020  lwc1        $f8, 0x20($v0)
    ctx->pc = 0x1fb80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1fb810:
    // 0x1fb810: 0xe7a900dc  swc1        $f9, 0xDC($sp)
    ctx->pc = 0x1fb810u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1fb814:
    // 0x1fb814: 0xc4470024  lwc1        $f7, 0x24($v0)
    ctx->pc = 0x1fb814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1fb818:
    // 0x1fb818: 0xe7a800e0  swc1        $f8, 0xE0($sp)
    ctx->pc = 0x1fb818u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1fb81c:
    // 0x1fb81c: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x1fb81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fb820:
    // 0x1fb820: 0xe7a700e4  swc1        $f7, 0xE4($sp)
    ctx->pc = 0x1fb820u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1fb824:
    // 0x1fb824: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x1fb824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fb828:
    // 0x1fb828: 0xe7a600e8  swc1        $f6, 0xE8($sp)
    ctx->pc = 0x1fb828u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1fb82c:
    // 0x1fb82c: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x1fb82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fb830:
    // 0x1fb830: 0xe7a500ec  swc1        $f5, 0xEC($sp)
    ctx->pc = 0x1fb830u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1fb834:
    // 0x1fb834: 0xc4430034  lwc1        $f3, 0x34($v0)
    ctx->pc = 0x1fb834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fb838:
    // 0x1fb838: 0xe7a400f0  swc1        $f4, 0xF0($sp)
    ctx->pc = 0x1fb838u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1fb83c:
    // 0x1fb83c: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x1fb83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb840:
    // 0x1fb840: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x1fb840u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1fb844:
    // 0x1fb844: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1fb844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb848:
    // 0x1fb848: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x1fb848u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1fb84c:
    // 0x1fb84c: 0xe7a100fc  swc1        $f1, 0xFC($sp)
    ctx->pc = 0x1fb84cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1fb850:
    // 0x1fb850: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x1fb850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fb854:
    // 0x1fb854: 0xc7ab00c0  lwc1        $f11, 0xC0($sp)
    ctx->pc = 0x1fb854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1fb858:
    // 0x1fb858: 0xc7aa00d0  lwc1        $f10, 0xD0($sp)
    ctx->pc = 0x1fb858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1fb85c:
    // 0x1fb85c: 0xc7a900f0  lwc1        $f9, 0xF0($sp)
    ctx->pc = 0x1fb85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1fb860:
    // 0x1fb860: 0xc7a800e4  lwc1        $f8, 0xE4($sp)
    ctx->pc = 0x1fb860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1fb864:
    // 0x1fb864: 0xc7a700c4  lwc1        $f7, 0xC4($sp)
    ctx->pc = 0x1fb864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1fb868:
    // 0x1fb868: 0xc7a600d4  lwc1        $f6, 0xD4($sp)
    ctx->pc = 0x1fb868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fb86c:
    // 0x1fb86c: 0xc7a500f4  lwc1        $f5, 0xF4($sp)
    ctx->pc = 0x1fb86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fb870:
    // 0x1fb870: 0xc7a400e8  lwc1        $f4, 0xE8($sp)
    ctx->pc = 0x1fb870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fb874:
    // 0x1fb874: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x1fb874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fb878:
    // 0x1fb878: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x1fb878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb87c:
    // 0x1fb87c: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1fb87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb880:
    // 0x1fb880: 0xc46e0004  lwc1        $f14, 0x4($v1)
    ctx->pc = 0x1fb880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1fb884:
    // 0x1fb884: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fb884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1fb888:
    // 0x1fb888: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1fb888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1fb88c:
    // 0x1fb88c: 0xc46d0008  lwc1        $f13, 0x8($v1)
    ctx->pc = 0x1fb88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1fb890:
    // 0x1fb890: 0x460a701a  mula.s      $f14, $f10
    ctx->pc = 0x1fb890u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
label_1fb894:
    // 0x1fb894: 0x460b781e  madda.s     $f15, $f11
    ctx->pc = 0x1fb894u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[11]));
label_1fb898:
    // 0x1fb898: 0x460c681c  madd.s      $f0, $f13, $f12
    ctx->pc = 0x1fb898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[12]));
label_1fb89c:
    // 0x1fb89c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1fb89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1fb8a0:
    // 0x1fb8a0: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x1fb8a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_1fb8a4:
    // 0x1fb8a4: 0x4606701a  mula.s      $f14, $f6
    ctx->pc = 0x1fb8a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
label_1fb8a8:
    // 0x1fb8a8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1fb8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1fb8ac:
    // 0x1fb8ac: 0x4607781e  madda.s     $f15, $f7
    ctx->pc = 0x1fb8acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[7]));
label_1fb8b0:
    // 0x1fb8b0: 0x4608681c  madd.s      $f0, $f13, $f8
    ctx->pc = 0x1fb8b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[8]));
label_1fb8b4:
    // 0x1fb8b4: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1fb8b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1fb8b8:
    // 0x1fb8b8: 0x4602701a  mula.s      $f14, $f2
    ctx->pc = 0x1fb8b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
label_1fb8bc:
    // 0x1fb8bc: 0x4603781e  madda.s     $f15, $f3
    ctx->pc = 0x1fb8bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[3]));
label_1fb8c0:
    // 0x1fb8c0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1fb8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1fb8c4:
    // 0x1fb8c4: 0x4604681c  madd.s      $f0, $f13, $f4
    ctx->pc = 0x1fb8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[4]));
label_1fb8c8:
    // 0x1fb8c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fb8c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fb8cc:
    // 0x1fb8cc: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1fb8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1fb8d0:
    // 0x1fb8d0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1fb8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_1fb8d4:
    // 0x1fb8d4: 0x4c1ffea  bgez        $a2, . + 4 + (-0x16 << 2)
label_1fb8d8:
    if (ctx->pc == 0x1FB8D8u) {
        ctx->pc = 0x1FB8D8u;
            // 0x1fb8d8: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->pc = 0x1FB8DCu;
        goto label_1fb8dc;
    }
    ctx->pc = 0x1FB8D4u;
    {
        const bool branch_taken_0x1fb8d4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1FB8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB8D4u;
            // 0x1fb8d8: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8d4) {
            ctx->pc = 0x1FB880u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fb880;
        }
    }
    ctx->pc = 0x1FB8DCu;
label_1fb8dc:
    // 0x1fb8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fb8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb8e0:
    // 0x1fb8e0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1fb8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1fb8e4:
    // 0x1fb8e4: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x1fb8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1fb8e8:
    // 0x1fb8e8: 0xc09ea24  jal         func_27A890
label_1fb8ec:
    if (ctx->pc == 0x1FB8ECu) {
        ctx->pc = 0x1FB8ECu;
            // 0x1fb8ec: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1FB8F0u;
        goto label_1fb8f0;
    }
    ctx->pc = 0x1FB8E8u;
    SET_GPR_U32(ctx, 31, 0x1FB8F0u);
    ctx->pc = 0x1FB8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB8E8u;
            // 0x1fb8ec: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A890u;
    if (runtime->hasFunction(0x27A890u)) {
        auto targetFn = runtime->lookupFunction(0x27A890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB8F0u; }
        if (ctx->pc != 0x1FB8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A890_0x27a890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB8F0u; }
        if (ctx->pc != 0x1FB8F0u) { return; }
    }
    ctx->pc = 0x1FB8F0u;
label_1fb8f0:
    // 0x1fb8f0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1fb8f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1fb8f4:
    // 0x1fb8f4: 0xc7c30010  lwc1        $f3, 0x10($fp)
    ctx->pc = 0x1fb8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fb8f8:
    // 0x1fb8f8: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x1fb8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb8fc:
    // 0x1fb8fc: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x1fb8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb900:
    // 0x1fb900: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x1fb900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb904:
    // 0x1fb904: 0x46031100  add.s       $f4, $f2, $f3
    ctx->pc = 0x1fb904u;
    ctx->f[4] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1fb908:
    // 0x1fb908: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x1fb908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_1fb90c:
    // 0x1fb90c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fb90cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fb910:
    // 0x1fb910: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
label_1fb914:
    if (ctx->pc == 0x1FB914u) {
        ctx->pc = 0x1FB914u;
            // 0x1fb914: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FB918u;
        goto label_1fb918;
    }
    ctx->pc = 0x1FB910u;
    {
        const bool branch_taken_0x1fb910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb910) {
            ctx->pc = 0x1FB914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB910u;
            // 0x1fb914: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FB9ACu;
            goto label_1fb9ac;
        }
    }
    ctx->pc = 0x1FB918u;
label_1fb918:
    // 0x1fb918: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x1fb918u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_1fb91c:
    // 0x1fb91c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1fb91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb920:
    // 0x1fb920: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1fb920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fb924:
    // 0x1fb924: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x1fb924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb928:
    // 0x1fb928: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fb928u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fb92c:
    // 0x1fb92c: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1fb92cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_1fb930:
    // 0x1fb930: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1fb930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1fb934:
    // 0x1fb934: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1fb934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb938:
    // 0x1fb938: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x1fb938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb93c:
    // 0x1fb93c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fb93cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fb940:
    // 0x1fb940: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1fb940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_1fb944:
    // 0x1fb944: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1fb944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1fb948:
    // 0x1fb948: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1fb948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb94c:
    // 0x1fb94c: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x1fb94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb950:
    // 0x1fb950: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fb950u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fb954:
    // 0x1fb954: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1fb954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_1fb958:
    // 0x1fb958: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1fb958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1fb95c:
    // 0x1fb95c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1fb95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb960:
    // 0x1fb960: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x1fb960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb964:
    // 0x1fb964: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fb964u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fb968:
    // 0x1fb968: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1fb968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_1fb96c:
    // 0x1fb96c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1fb96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1fb970:
    // 0x1fb970: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x1fb970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb974:
    // 0x1fb974: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x1fb974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb978:
    // 0x1fb978: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1fb978u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1fb97c:
    // 0x1fb97c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1fb97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1fb980:
    // 0x1fb980: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x1fb980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb984:
    // 0x1fb984: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1fb984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1fb988:
    // 0x1fb988: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1fb988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb98c:
    // 0x1fb98c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1fb98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1fb990:
    // 0x1fb990: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x1fb990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fb994:
    // 0x1fb994: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1fb994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1fb998:
    // 0x1fb998: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1fb99c:
    if (ctx->pc == 0x1FB99Cu) {
        ctx->pc = 0x1FB99Cu;
            // 0x1fb99c: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->pc = 0x1FB9A0u;
        goto label_1fb9a0;
    }
    ctx->pc = 0x1FB998u;
    {
        const bool branch_taken_0x1fb998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB998u;
            // 0x1fb99c: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb998) {
            ctx->pc = 0x1FB9A8u;
            goto label_1fb9a8;
        }
    }
    ctx->pc = 0x1FB9A0u;
label_1fb9a0:
    // 0x1fb9a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fb9a4:
    if (ctx->pc == 0x1FB9A4u) {
        ctx->pc = 0x1FB9A4u;
            // 0x1fb9a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FB9A8u;
        goto label_1fb9a8;
    }
    ctx->pc = 0x1FB9A0u;
    {
        const bool branch_taken_0x1fb9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB9A0u;
            // 0x1fb9a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9a0) {
            ctx->pc = 0x1FB9ACu;
            goto label_1fb9ac;
        }
    }
    ctx->pc = 0x1FB9A8u;
label_1fb9a8:
    // 0x1fb9a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fb9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fb9ac:
    // 0x1fb9ac: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
label_1fb9b0:
    if (ctx->pc == 0x1FB9B0u) {
        ctx->pc = 0x1FB9B0u;
            // 0x1fb9b0: 0x9684000c  lhu         $a0, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x1FB9B4u;
        goto label_1fb9b4;
    }
    ctx->pc = 0x1FB9ACu;
    {
        const bool branch_taken_0x1fb9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb9ac) {
            ctx->pc = 0x1FB9B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB9ACu;
            // 0x1fb9b0: 0x9684000c  lhu         $a0, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FBA18u;
            goto label_1fba18;
        }
    }
    ctx->pc = 0x1FB9B4u;
label_1fb9b4:
    // 0x1fb9b4: 0x9684000c  lhu         $a0, 0xC($s4)
    ctx->pc = 0x1fb9b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_1fb9b8:
    // 0x1fb9b8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1fb9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1fb9bc:
    // 0x1fb9bc: 0x5483000d  bnel        $a0, $v1, . + 4 + (0xD << 2)
label_1fb9c0:
    if (ctx->pc == 0x1FB9C0u) {
        ctx->pc = 0x1FB9C0u;
            // 0x1fb9c0: 0x9685000c  lhu         $a1, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x1FB9C4u;
        goto label_1fb9c4;
    }
    ctx->pc = 0x1FB9BCu;
    {
        const bool branch_taken_0x1fb9bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fb9bc) {
            ctx->pc = 0x1FB9C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB9BCu;
            // 0x1fb9c0: 0x9685000c  lhu         $a1, 0xC($s4) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FB9F4u;
            goto label_1fb9f4;
        }
    }
    ctx->pc = 0x1FB9C4u;
label_1fb9c4:
    // 0x1fb9c4: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1fb9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1fb9c8:
    // 0x1fb9c8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1fb9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1fb9cc:
    // 0x1fb9cc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1fb9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fb9d0:
    // 0x1fb9d0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1fb9d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1fb9d4:
    // 0x1fb9d4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1fb9d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fb9d8:
    // 0x1fb9d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fb9d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb9dc:
    // 0x1fb9dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fb9dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fb9e0:
    // 0x1fb9e0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1fb9e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1fb9e4:
    // 0x1fb9e4: 0x320f809  jalr        $t9
label_1fb9e8:
    if (ctx->pc == 0x1FB9E8u) {
        ctx->pc = 0x1FB9E8u;
            // 0x1fb9e8: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9ECu;
        goto label_1fb9ec;
    }
    ctx->pc = 0x1FB9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FB9ECu);
        ctx->pc = 0x1FB9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB9E4u;
            // 0x1fb9e8: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FB9ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FB9ECu; }
            if (ctx->pc != 0x1FB9ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1FB9ECu;
label_1fb9ec:
    // 0x1fb9ec: 0xa682000c  sh          $v0, 0xC($s4)
    ctx->pc = 0x1fb9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 2));
label_1fb9f0:
    // 0x1fb9f0: 0x9685000c  lhu         $a1, 0xC($s4)
    ctx->pc = 0x1fb9f0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_1fb9f4:
    // 0x1fb9f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1fb9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1fb9f8:
    // 0x1fb9f8: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
label_1fb9fc:
    if (ctx->pc == 0x1FB9FCu) {
        ctx->pc = 0x1FBA00u;
        goto label_1fba00;
    }
    ctx->pc = 0x1FB9F8u;
    {
        const bool branch_taken_0x1fb9f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fb9f8) {
            ctx->pc = 0x1FBA4Cu;
            goto label_1fba4c;
        }
    }
    ctx->pc = 0x1FBA00u;
label_1fba00:
    // 0x1fba00: 0xc07af98  jal         func_1EBE60
label_1fba04:
    if (ctx->pc == 0x1FBA04u) {
        ctx->pc = 0x1FBA04u;
            // 0x1fba04: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x1FBA08u;
        goto label_1fba08;
    }
    ctx->pc = 0x1FBA00u;
    SET_GPR_U32(ctx, 31, 0x1FBA08u);
    ctx->pc = 0x1FBA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBA00u;
            // 0x1fba04: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE60u;
    if (runtime->hasFunction(0x1EBE60u)) {
        auto targetFn = runtime->lookupFunction(0x1EBE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBA08u; }
        if (ctx->pc != 0x1FBA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EBE60_0x1ebe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBA08u; }
        if (ctx->pc != 0x1FBA08u) { return; }
    }
    ctx->pc = 0x1FBA08u;
label_1fba08:
    // 0x1fba08: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1fba08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1fba0c:
    // 0x1fba0c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1fba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1fba10:
    // 0x1fba10: 0x1000000e  b           . + 4 + (0xE << 2)
label_1fba14:
    if (ctx->pc == 0x1FBA14u) {
        ctx->pc = 0x1FBA14u;
            // 0x1fba14: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1FBA18u;
        goto label_1fba18;
    }
    ctx->pc = 0x1FBA10u;
    {
        const bool branch_taken_0x1fba10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBA10u;
            // 0x1fba14: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba10) {
            ctx->pc = 0x1FBA4Cu;
            goto label_1fba4c;
        }
    }
    ctx->pc = 0x1FBA18u;
label_1fba18:
    // 0x1fba18: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1fba18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1fba1c:
    // 0x1fba1c: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1fba20:
    if (ctx->pc == 0x1FBA20u) {
        ctx->pc = 0x1FBA24u;
        goto label_1fba24;
    }
    ctx->pc = 0x1FBA1Cu;
    {
        const bool branch_taken_0x1fba1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fba1c) {
            ctx->pc = 0x1FBA4Cu;
            goto label_1fba4c;
        }
    }
    ctx->pc = 0x1FBA24u;
label_1fba24:
    // 0x1fba24: 0xc07af94  jal         func_1EBE50
label_1fba28:
    if (ctx->pc == 0x1FBA28u) {
        ctx->pc = 0x1FBA28u;
            // 0x1fba28: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x1FBA2Cu;
        goto label_1fba2c;
    }
    ctx->pc = 0x1FBA24u;
    SET_GPR_U32(ctx, 31, 0x1FBA2Cu);
    ctx->pc = 0x1FBA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBA24u;
            // 0x1fba28: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE50u;
    if (runtime->hasFunction(0x1EBE50u)) {
        auto targetFn = runtime->lookupFunction(0x1EBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBA2Cu; }
        if (ctx->pc != 0x1FBA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EBE50_0x1ebe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBA2Cu; }
        if (ctx->pc != 0x1FBA2Cu) { return; }
    }
    ctx->pc = 0x1FBA2Cu;
label_1fba2c:
    // 0x1fba2c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1fba2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1fba30:
    // 0x1fba30: 0x9685000c  lhu         $a1, 0xC($s4)
    ctx->pc = 0x1fba30u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_1fba34:
    // 0x1fba34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fba34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fba38:
    // 0x1fba38: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1fba38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1fba3c:
    // 0x1fba3c: 0x320f809  jalr        $t9
label_1fba40:
    if (ctx->pc == 0x1FBA40u) {
        ctx->pc = 0x1FBA40u;
            // 0x1fba40: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA44u;
        goto label_1fba44;
    }
    ctx->pc = 0x1FBA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FBA44u);
        ctx->pc = 0x1FBA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBA3Cu;
            // 0x1fba40: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FBA44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FBA44u; }
            if (ctx->pc != 0x1FBA44u) { return; }
        }
        }
    }
    ctx->pc = 0x1FBA44u;
label_1fba44:
    // 0x1fba44: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1fba44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1fba48:
    // 0x1fba48: 0xa683000c  sh          $v1, 0xC($s4)
    ctx->pc = 0x1fba48u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 3));
label_1fba4c:
    // 0x1fba4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fba50:
    // 0x1fba50: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1fba50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1fba54:
    // 0x1fba54: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1fba54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1fba58:
    // 0x1fba58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fba58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fba5c:
    // 0x1fba5c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1fba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1fba60:
    // 0x1fba60: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fba60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fba64:
    // 0x1fba64: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fba68:
    if (ctx->pc == 0x1FBA68u) {
        ctx->pc = 0x1FBA68u;
            // 0x1fba68: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1FBA6Cu;
        goto label_1fba6c;
    }
    ctx->pc = 0x1FBA64u;
    {
        const bool branch_taken_0x1fba64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBA64u;
            // 0x1fba68: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba64) {
            ctx->pc = 0x1FBA94u;
            goto label_1fba94;
        }
    }
    ctx->pc = 0x1FBA6Cu;
label_1fba6c:
    // 0x1fba6c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1fba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1fba70:
    // 0x1fba70: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1fba70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1fba74:
    // 0x1fba74: 0x2463d998  addiu       $v1, $v1, -0x2668
    ctx->pc = 0x1fba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957464));
label_1fba78:
    // 0x1fba78: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fba78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fba7c:
    // 0x1fba7c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1fba80:
    // 0x1fba80: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fba80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1fba84:
    // 0x1fba84: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fba84u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1fba88:
    // 0x1fba88: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1fba88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1fba8c:
    // 0x1fba8c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1fba90:
    // 0x1fba90: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1fba90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1fba94:
    // 0x1fba94: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1fba94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1fba98:
    // 0x1fba98: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x1fba98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fba9c:
    // 0x1fba9c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_1fbaa0:
    if (ctx->pc == 0x1FBAA0u) {
        ctx->pc = 0x1FBAA4u;
        goto label_1fbaa4;
    }
    ctx->pc = 0x1FBA9Cu;
    {
        const bool branch_taken_0x1fba9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fba9c) {
            ctx->pc = 0x1FBB40u;
            goto label_1fbb40;
        }
    }
    ctx->pc = 0x1FBAA4u;
label_1fbaa4:
    // 0x1fbaa4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1fbaa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fbaa8:
    // 0x1fbaa8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1fbaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbaac:
    // 0x1fbaac: 0xc643001c  lwc1        $f3, 0x1C($s2)
    ctx->pc = 0x1fbaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fbab0:
    // 0x1fbab0: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x1fbab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fbab4:
    // 0x1fbab4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fbab4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fbab8:
    // 0x1fbab8: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1fbab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1fbabc:
    // 0x1fbabc: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1fbabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1fbac0:
    // 0x1fbac0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1fbac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbac4:
    // 0x1fbac4: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1fbac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fbac8:
    // 0x1fbac8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fbac8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fbacc:
    // 0x1fbacc: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1fbaccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1fbad0:
    // 0x1fbad0: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1fbad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1fbad4:
    // 0x1fbad4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1fbad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbad8:
    // 0x1fbad8: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x1fbad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fbadc:
    // 0x1fbadc: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fbadcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fbae0:
    // 0x1fbae0: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1fbae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1fbae4:
    // 0x1fbae4: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1fbae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1fbae8:
    // 0x1fbae8: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x1fbae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbaec:
    // 0x1fbaec: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x1fbaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fbaf0:
    // 0x1fbaf0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fbaf0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fbaf4:
    // 0x1fbaf4: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1fbaf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1fbaf8:
    // 0x1fbaf8: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x1fbaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1fbafc:
    // 0x1fbafc: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1fbafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbb00:
    // 0x1fbb00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fbb00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1fbb04:
    // 0x1fbb04: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x1fbb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_1fbb08:
    // 0x1fbb08: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x1fbb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbb0c:
    // 0x1fbb0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fbb0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1fbb10:
    // 0x1fbb10: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1fbb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_1fbb14:
    // 0x1fbb14: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1fbb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbb18:
    // 0x1fbb18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fbb18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1fbb1c:
    // 0x1fbb1c: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x1fbb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_1fbb20:
    // 0x1fbb20: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x1fbb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbb24:
    // 0x1fbb24: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1fbb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_1fbb28:
    // 0x1fbb28: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1fbb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1fbb2c:
    // 0x1fbb2c: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1fbb2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_1fbb30:
    // 0x1fbb30: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x1fbb30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fbb34:
    // 0x1fbb34: 0x5460ffdd  bnel        $v1, $zero, . + 4 + (-0x23 << 2)
label_1fbb38:
    if (ctx->pc == 0x1FBB38u) {
        ctx->pc = 0x1FBB38u;
            // 0x1fbb38: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1FBB3Cu;
        goto label_1fbb3c;
    }
    ctx->pc = 0x1FBB34u;
    {
        const bool branch_taken_0x1fbb34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb34) {
            ctx->pc = 0x1FBB38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB34u;
            // 0x1fbb38: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FBAACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fbaac;
        }
    }
    ctx->pc = 0x1FBB3Cu;
label_1fbb3c:
    // 0x1fbb3c: 0x0  nop
    ctx->pc = 0x1fbb3cu;
    // NOP
label_1fbb40:
    // 0x1fbb40: 0xc6603030  lwc1        $f0, 0x3030($s3)
    ctx->pc = 0x1fbb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbb44:
    // 0x1fbb44: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1fbb44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fbb48:
    // 0x1fbb48: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
label_1fbb4c:
    if (ctx->pc == 0x1FBB4Cu) {
        ctx->pc = 0x1FBB4Cu;
            // 0x1fbb4c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x1FBB50u;
        goto label_1fbb50;
    }
    ctx->pc = 0x1FBB48u;
    {
        const bool branch_taken_0x1fbb48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fbb48) {
            ctx->pc = 0x1FBB4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBB48u;
            // 0x1fbb4c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FBBF0u;
            goto label_1fbbf0;
        }
    }
    ctx->pc = 0x1FBB50u;
label_1fbb50:
    // 0x1fbb50: 0xc6603020  lwc1        $f0, 0x3020($s3)
    ctx->pc = 0x1fbb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbb54:
    // 0x1fbb54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fbb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fbb58:
    // 0x1fbb58: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fbb58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1fbb5c:
    // 0x1fbb5c: 0xe6603020  swc1        $f0, 0x3020($s3)
    ctx->pc = 0x1fbb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12320), bits); }
label_1fbb60:
    // 0x1fbb60: 0xc6603024  lwc1        $f0, 0x3024($s3)
    ctx->pc = 0x1fbb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbb64:
    // 0x1fbb64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fbb64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1fbb68:
    // 0x1fbb68: 0xe6603024  swc1        $f0, 0x3024($s3)
    ctx->pc = 0x1fbb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12324), bits); }
label_1fbb6c:
    // 0x1fbb6c: 0xc6603028  lwc1        $f0, 0x3028($s3)
    ctx->pc = 0x1fbb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbb70:
    // 0x1fbb70: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fbb70u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1fbb74:
    // 0x1fbb74: 0xe6603028  swc1        $f0, 0x3028($s3)
    ctx->pc = 0x1fbb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12328), bits); }
label_1fbb78:
    // 0x1fbb78: 0xc660302c  lwc1        $f0, 0x302C($s3)
    ctx->pc = 0x1fbb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbb7c:
    // 0x1fbb7c: 0xe660302c  swc1        $f0, 0x302C($s3)
    ctx->pc = 0x1fbb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12332), bits); }
label_1fbb80:
    // 0x1fbb80: 0x92653042  lbu         $a1, 0x3042($s3)
    ctx->pc = 0x1fbb80u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12354)));
label_1fbb84:
    // 0x1fbb84: 0x92643043  lbu         $a0, 0x3043($s3)
    ctx->pc = 0x1fbb84u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12355)));
label_1fbb88:
    // 0x1fbb88: 0xa2643042  sb          $a0, 0x3042($s3)
    ctx->pc = 0x1fbb88u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12354), (uint8_t)GPR_U32(ctx, 4));
label_1fbb8c:
    // 0x1fbb8c: 0xa2653043  sb          $a1, 0x3043($s3)
    ctx->pc = 0x1fbb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12355), (uint8_t)GPR_U32(ctx, 5));
label_1fbb90:
    // 0x1fbb90: 0x92653040  lbu         $a1, 0x3040($s3)
    ctx->pc = 0x1fbb90u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12352)));
label_1fbb94:
    // 0x1fbb94: 0x92643041  lbu         $a0, 0x3041($s3)
    ctx->pc = 0x1fbb94u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12353)));
label_1fbb98:
    // 0x1fbb98: 0xa2643040  sb          $a0, 0x3040($s3)
    ctx->pc = 0x1fbb98u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12352), (uint8_t)GPR_U32(ctx, 4));
label_1fbb9c:
    // 0x1fbb9c: 0xa2653041  sb          $a1, 0x3041($s3)
    ctx->pc = 0x1fbb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 12353), (uint8_t)GPR_U32(ctx, 5));
label_1fbba0:
    // 0x1fbba0: 0x92653040  lbu         $a1, 0x3040($s3)
    ctx->pc = 0x1fbba0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12352)));
label_1fbba4:
    // 0x1fbba4: 0x92643041  lbu         $a0, 0x3041($s3)
    ctx->pc = 0x1fbba4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12353)));
label_1fbba8:
    // 0x1fbba8: 0x96663038  lhu         $a2, 0x3038($s3)
    ctx->pc = 0x1fbba8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12344)));
label_1fbbac:
    // 0x1fbbac: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1fbbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1fbbb0:
    // 0x1fbbb0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fbbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1fbbb4:
    // 0x1fbbb4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1fbbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1fbbb8:
    // 0x1fbbb8: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x1fbbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1fbbbc:
    // 0x1fbbbc: 0x94a43038  lhu         $a0, 0x3038($a1)
    ctx->pc = 0x1fbbbcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12344)));
label_1fbbc0:
    // 0x1fbbc0: 0xa6643038  sh          $a0, 0x3038($s3)
    ctx->pc = 0x1fbbc0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12344), (uint16_t)GPR_U32(ctx, 4));
label_1fbbc4:
    // 0x1fbbc4: 0xa4a63038  sh          $a2, 0x3038($a1)
    ctx->pc = 0x1fbbc4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12344), (uint16_t)GPR_U32(ctx, 6));
label_1fbbc8:
    // 0x1fbbc8: 0x92653040  lbu         $a1, 0x3040($s3)
    ctx->pc = 0x1fbbc8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12352)));
label_1fbbcc:
    // 0x1fbbcc: 0x92643041  lbu         $a0, 0x3041($s3)
    ctx->pc = 0x1fbbccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12353)));
label_1fbbd0:
    // 0x1fbbd0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1fbbd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1fbbd4:
    // 0x1fbbd4: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1fbbd8:
    if (ctx->pc == 0x1FBBD8u) {
        ctx->pc = 0x1FBBDCu;
        goto label_1fbbdc;
    }
    ctx->pc = 0x1FBBD4u;
    {
        const bool branch_taken_0x1fbbd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fbbd4) {
            ctx->pc = 0x1FBBECu;
            goto label_1fbbec;
        }
    }
    ctx->pc = 0x1FBBDCu;
label_1fbbdc:
    // 0x1fbbdc: 0x9664303a  lhu         $a0, 0x303A($s3)
    ctx->pc = 0x1fbbdcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12346)));
label_1fbbe0:
    // 0x1fbbe0: 0x9663303c  lhu         $v1, 0x303C($s3)
    ctx->pc = 0x1fbbe0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12348)));
label_1fbbe4:
    // 0x1fbbe4: 0xa663303a  sh          $v1, 0x303A($s3)
    ctx->pc = 0x1fbbe4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12346), (uint16_t)GPR_U32(ctx, 3));
label_1fbbe8:
    // 0x1fbbe8: 0xa664303c  sh          $a0, 0x303C($s3)
    ctx->pc = 0x1fbbe8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12348), (uint16_t)GPR_U32(ctx, 4));
label_1fbbec:
    // 0x1fbbec: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1fbbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1fbbf0:
    // 0x1fbbf0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1fbbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fbbf4:
    // 0x1fbbf4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1fbbf4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1fbbf8:
    // 0x1fbbf8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1fbbf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1fbbfc:
    // 0x1fbbfc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1fbbfcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1fbc00:
    // 0x1fbc00: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1fbc00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fbc04:
    // 0x1fbc04: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1fbc04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fbc08:
    // 0x1fbc08: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1fbc08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fbc0c:
    // 0x1fbc0c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fbc0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fbc10:
    // 0x1fbc10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fbc10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fbc14:
    // 0x1fbc14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fbc14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fbc18:
    // 0x1fbc18: 0x3e00008  jr          $ra
label_1fbc1c:
    if (ctx->pc == 0x1FBC1Cu) {
        ctx->pc = 0x1FBC1Cu;
            // 0x1fbc1c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x1FBC20u;
        goto label_1fbc20;
    }
    ctx->pc = 0x1FBC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBC18u;
            // 0x1fbc1c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FBC20u;
label_1fbc20:
    // 0x1fbc20: 0x3e00008  jr          $ra
label_1fbc24:
    if (ctx->pc == 0x1FBC24u) {
        ctx->pc = 0x1FBC28u;
        goto label_1fbc28;
    }
    ctx->pc = 0x1FBC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FBC28u;
label_1fbc28:
    // 0x1fbc28: 0x0  nop
    ctx->pc = 0x1fbc28u;
    // NOP
label_1fbc2c:
    // 0x1fbc2c: 0x0  nop
    ctx->pc = 0x1fbc2cu;
    // NOP
label_1fbc30:
    // 0x1fbc30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1fbc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1fbc34:
    // 0x1fbc34: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1fbc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1fbc38:
    // 0x1fbc38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fbc3c:
    // 0x1fbc3c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1fbc3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fbc40:
    // 0x1fbc40: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1fbc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fbc44:
    // 0x1fbc44: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1fbc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1fbc48:
    // 0x1fbc48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fbc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fbc4c:
    // 0x1fbc4c: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1fbc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
label_1fbc50:
    // 0x1fbc50: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1fbc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_1fbc54:
    // 0x1fbc54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fbc54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbc58:
    // 0x1fbc58: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1fbc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fbc5c:
    // 0x1fbc5c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1fbc5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1fbc60:
    // 0x1fbc60: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1fbc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1fbc64:
    // 0x1fbc64: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x1fbc64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_1fbc68:
    // 0x1fbc68: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1fbc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1fbc6c:
    // 0x1fbc6c: 0xafa4007c  sw          $a0, 0x7C($sp)
    ctx->pc = 0x1fbc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
label_1fbc70:
    // 0x1fbc70: 0x80c40010  lb          $a0, 0x10($a2)
    ctx->pc = 0x1fbc70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_1fbc74:
    // 0x1fbc74: 0xa3a40080  sb          $a0, 0x80($sp)
    ctx->pc = 0x1fbc74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 4));
label_1fbc78:
    // 0x1fbc78: 0xc4c90020  lwc1        $f9, 0x20($a2)
    ctx->pc = 0x1fbc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1fbc7c:
    // 0x1fbc7c: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1fbc7cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1fbc80:
    // 0x1fbc80: 0xc4c80024  lwc1        $f8, 0x24($a2)
    ctx->pc = 0x1fbc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1fbc84:
    // 0x1fbc84: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1fbc84u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
label_1fbc88:
    // 0x1fbc88: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1fbc88u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1fbc8c:
    // 0x1fbc8c: 0xc4c70028  lwc1        $f7, 0x28($a2)
    ctx->pc = 0x1fbc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1fbc90:
    // 0x1fbc90: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1fbc90u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
label_1fbc94:
    // 0x1fbc94: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1fbc94u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1fbc98:
    // 0x1fbc98: 0xc4c6002c  lwc1        $f6, 0x2C($a2)
    ctx->pc = 0x1fbc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fbc9c:
    // 0x1fbc9c: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1fbc9cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
label_1fbca0:
    // 0x1fbca0: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1fbca0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1fbca4:
    // 0x1fbca4: 0xc4c50030  lwc1        $f5, 0x30($a2)
    ctx->pc = 0x1fbca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fbca8:
    // 0x1fbca8: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1fbca8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
label_1fbcac:
    // 0x1fbcac: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1fbcacu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1fbcb0:
    // 0x1fbcb0: 0xc4c50034  lwc1        $f5, 0x34($a2)
    ctx->pc = 0x1fbcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fbcb4:
    // 0x1fbcb4: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1fbcb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1fbcb8:
    // 0x1fbcb8: 0x8cc40038  lw          $a0, 0x38($a2)
    ctx->pc = 0x1fbcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_1fbcbc:
    // 0x1fbcbc: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1fbcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_1fbcc0:
    // 0x1fbcc0: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1fbcc0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1fbcc4:
    // 0x1fbcc4: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1fbcc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1fbcc8:
    // 0x1fbcc8: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1fbcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1fbccc:
    // 0x1fbccc: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1fbcccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1fbcd0:
    // 0x1fbcd0: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1fbcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
label_1fbcd4:
    // 0x1fbcd4: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1fbcd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1fbcd8:
    // 0x1fbcd8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1fbcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1fbcdc:
    // 0x1fbcdc: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1fbcdcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1fbce0:
    // 0x1fbce0: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1fbce0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1fbce4:
    // 0x1fbce4: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1fbce4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1fbce8:
    // 0x1fbce8: 0x11000012  beqz        $t0, . + 4 + (0x12 << 2)
label_1fbcec:
    if (ctx->pc == 0x1FBCECu) {
        ctx->pc = 0x1FBCECu;
            // 0x1fbcec: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x1FBCF0u;
        goto label_1fbcf0;
    }
    ctx->pc = 0x1FBCE8u;
    {
        const bool branch_taken_0x1fbce8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBCE8u;
            // 0x1fbcec: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbce8) {
            ctx->pc = 0x1FBD34u;
            goto label_1fbd34;
        }
    }
    ctx->pc = 0x1FBCF0u;
label_1fbcf0:
    // 0x1fbcf0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fbcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fbcf4:
    // 0x1fbcf4: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x1fbcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
label_1fbcf8:
    // 0x1fbcf8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1fbcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1fbcfc:
    // 0x1fbcfc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1fbcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1fbd00:
    // 0x1fbd00: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1fbd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1fbd04:
    // 0x1fbd04: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1fbd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fbd08:
    // 0x1fbd08: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1fbd08u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1fbd0c:
    // 0x1fbd0c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1fbd0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1fbd10:
    // 0x1fbd10: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1fbd10u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1fbd14:
    // 0x1fbd14: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1fbd14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fbd18:
    // 0x1fbd18: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1fbd18u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1fbd1c:
    // 0x1fbd1c: 0xc07c364  jal         func_1F0D90
label_1fbd20:
    if (ctx->pc == 0x1FBD20u) {
        ctx->pc = 0x1FBD20u;
            // 0x1fbd20: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x1FBD24u;
        goto label_1fbd24;
    }
    ctx->pc = 0x1FBD1Cu;
    SET_GPR_U32(ctx, 31, 0x1FBD24u);
    ctx->pc = 0x1FBD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBD1Cu;
            // 0x1fbd20: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0D90u;
    if (runtime->hasFunction(0x1F0D90u)) {
        auto targetFn = runtime->lookupFunction(0x1F0D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBD24u; }
        if (ctx->pc != 0x1FBD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0D90_0x1f0d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBD24u; }
        if (ctx->pc != 0x1FBD24u) { return; }
    }
    ctx->pc = 0x1FBD24u;
label_1fbd24:
    // 0x1fbd24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fbd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fbd28:
    // 0x1fbd28: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1fbd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1fbd2c:
    // 0x1fbd2c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fbd30:
    if (ctx->pc == 0x1FBD30u) {
        ctx->pc = 0x1FBD30u;
            // 0x1fbd30: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x1FBD34u;
        goto label_1fbd34;
    }
    ctx->pc = 0x1FBD2Cu;
    {
        const bool branch_taken_0x1fbd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBD2Cu;
            // 0x1fbd30: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd2c) {
            ctx->pc = 0x1FBD4Cu;
            goto label_1fbd4c;
        }
    }
    ctx->pc = 0x1FBD34u;
label_1fbd34:
    // 0x1fbd34: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fbd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fbd38:
    // 0x1fbd38: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1fbd38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fbd3c:
    // 0x1fbd3c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1fbd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1fbd40:
    // 0x1fbd40: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1fbd40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1fbd44:
    // 0x1fbd44: 0xc07c364  jal         func_1F0D90
label_1fbd48:
    if (ctx->pc == 0x1FBD48u) {
        ctx->pc = 0x1FBD48u;
            // 0x1fbd48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD4Cu;
        goto label_1fbd4c;
    }
    ctx->pc = 0x1FBD44u;
    SET_GPR_U32(ctx, 31, 0x1FBD4Cu);
    ctx->pc = 0x1FBD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBD44u;
            // 0x1fbd48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0D90u;
    if (runtime->hasFunction(0x1F0D90u)) {
        auto targetFn = runtime->lookupFunction(0x1F0D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBD4Cu; }
        if (ctx->pc != 0x1FBD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0D90_0x1f0d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBD4Cu; }
        if (ctx->pc != 0x1FBD4Cu) { return; }
    }
    ctx->pc = 0x1FBD4Cu;
label_1fbd4c:
    // 0x1fbd4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fbd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fbd50:
    // 0x1fbd50: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1fbd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1fbd54:
    // 0x1fbd54: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1fbd54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1fbd58:
    // 0x1fbd58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbd58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fbd5c:
    // 0x1fbd5c: 0x3e00008  jr          $ra
label_1fbd60:
    if (ctx->pc == 0x1FBD60u) {
        ctx->pc = 0x1FBD60u;
            // 0x1fbd60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1FBD64u;
        goto label_1fbd64;
    }
    ctx->pc = 0x1FBD5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBD5Cu;
            // 0x1fbd60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FBD64u;
label_1fbd64:
    // 0x1fbd64: 0x0  nop
    ctx->pc = 0x1fbd64u;
    // NOP
label_1fbd68:
    // 0x1fbd68: 0x0  nop
    ctx->pc = 0x1fbd68u;
    // NOP
label_1fbd6c:
    // 0x1fbd6c: 0x0  nop
    ctx->pc = 0x1fbd6cu;
    // NOP
label_1fbd70:
    // 0x1fbd70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fbd74:
    // 0x1fbd74: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1fbd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1fbd78:
    // 0x1fbd78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fbd7c:
    // 0x1fbd7c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1fbd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1fbd80:
    // 0x1fbd80: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1fbd80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_1fbd84:
    // 0x1fbd84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fbd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fbd88:
    // 0x1fbd88: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1fbd88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fbd8c:
    // 0x1fbd8c: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1fbd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
label_1fbd90:
    // 0x1fbd90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fbd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fbd94:
    // 0x1fbd94: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1fbd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1fbd98:
    // 0x1fbd98: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1fbd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fbd9c:
    // 0x1fbd9c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1fbd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1fbda0:
    // 0x1fbda0: 0xc07eb14  jal         func_1FAC50
label_1fbda4:
    if (ctx->pc == 0x1FBDA4u) {
        ctx->pc = 0x1FBDA4u;
            // 0x1fbda4: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FBDA8u;
        goto label_1fbda8;
    }
    ctx->pc = 0x1FBDA0u;
    SET_GPR_U32(ctx, 31, 0x1FBDA8u);
    ctx->pc = 0x1FBDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBDA0u;
            // 0x1fbda4: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC50u;
    if (runtime->hasFunction(0x1FAC50u)) {
        auto targetFn = runtime->lookupFunction(0x1FAC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBDA8u; }
        if (ctx->pc != 0x1FBDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FAC50_0x1fac50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBDA8u; }
        if (ctx->pc != 0x1FBDA8u) { return; }
    }
    ctx->pc = 0x1FBDA8u;
label_1fbda8:
    // 0x1fbda8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fbda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fbdac:
    // 0x1fbdac: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1fbdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1fbdb0:
    // 0x1fbdb0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1fbdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1fbdb4:
    // 0x1fbdb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fbdb8:
    // 0x1fbdb8: 0x3e00008  jr          $ra
label_1fbdbc:
    if (ctx->pc == 0x1FBDBCu) {
        ctx->pc = 0x1FBDBCu;
            // 0x1fbdbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FBDC0u;
        goto label_1fbdc0;
    }
    ctx->pc = 0x1FBDB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBDB8u;
            // 0x1fbdbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FBDC0u;
label_1fbdc0:
    // 0x1fbdc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fbdc4:
    // 0x1fbdc4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1fbdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1fbdc8:
    // 0x1fbdc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fbdcc:
    // 0x1fbdcc: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1fbdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1fbdd0:
    // 0x1fbdd0: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1fbdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1fbdd4:
    // 0x1fbdd4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fbdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fbdd8:
    // 0x1fbdd8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1fbdd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fbddc:
    // 0x1fbddc: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1fbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
label_1fbde0:
    // 0x1fbde0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1fbde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fbde4:
    // 0x1fbde4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1fbde4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1fbde8:
    // 0x1fbde8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1fbde8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fbdec:
    // 0x1fbdec: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1fbdecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1fbdf0:
    // 0x1fbdf0: 0xc07ea5c  jal         func_1FA970
label_1fbdf4:
    if (ctx->pc == 0x1FBDF4u) {
        ctx->pc = 0x1FBDF4u;
            // 0x1fbdf4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FBDF8u;
        goto label_1fbdf8;
    }
    ctx->pc = 0x1FBDF0u;
    SET_GPR_U32(ctx, 31, 0x1FBDF8u);
    ctx->pc = 0x1FBDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBDF0u;
            // 0x1fbdf4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA970u;
    if (runtime->hasFunction(0x1FA970u)) {
        auto targetFn = runtime->lookupFunction(0x1FA970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBDF8u; }
        if (ctx->pc != 0x1FBDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FA970_0x1fa970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBDF8u; }
        if (ctx->pc != 0x1FBDF8u) { return; }
    }
    ctx->pc = 0x1FBDF8u;
label_1fbdf8:
    // 0x1fbdf8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fbdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fbdfc:
    // 0x1fbdfc: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1fbdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1fbe00:
    // 0x1fbe00: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1fbe00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1fbe04:
    // 0x1fbe04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbe04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fbe08:
    // 0x1fbe08: 0x3e00008  jr          $ra
label_1fbe0c:
    if (ctx->pc == 0x1FBE0Cu) {
        ctx->pc = 0x1FBE0Cu;
            // 0x1fbe0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FBE10u;
        goto label_1fbe10;
    }
    ctx->pc = 0x1FBE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBE08u;
            // 0x1fbe0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FBE10u;
label_1fbe10:
    // 0x1fbe10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fbe14:
    // 0x1fbe14: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1fbe14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fbe18:
    // 0x1fbe18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fbe1c:
    // 0x1fbe1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fbe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fbe20:
    // 0x1fbe20: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1fbe20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_1fbe24:
    // 0x1fbe24: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1fbe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
label_1fbe28:
    // 0x1fbe28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fbe28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fbe2c:
    // 0x1fbe2c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1fbe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1fbe30:
    // 0x1fbe30: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1fbe30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1fbe34:
    // 0x1fbe34: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1fbe34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fbe38:
    // 0x1fbe38: 0xc07ec40  jal         func_1FB100
label_1fbe3c:
    if (ctx->pc == 0x1FBE3Cu) {
        ctx->pc = 0x1FBE3Cu;
            // 0x1fbe3c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1FBE40u;
        goto label_1fbe40;
    }
    ctx->pc = 0x1FBE38u;
    SET_GPR_U32(ctx, 31, 0x1FBE40u);
    ctx->pc = 0x1FBE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBE38u;
            // 0x1fbe3c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB100u;
    goto label_1fb100;
    ctx->pc = 0x1FBE40u;
label_1fbe40:
    // 0x1fbe40: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fbe40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fbe44:
    // 0x1fbe44: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1fbe44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1fbe48:
    // 0x1fbe48: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1fbe48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1fbe4c:
    // 0x1fbe4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbe4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fbe50:
    // 0x1fbe50: 0x3e00008  jr          $ra
label_1fbe54:
    if (ctx->pc == 0x1FBE54u) {
        ctx->pc = 0x1FBE54u;
            // 0x1fbe54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FBE58u;
        goto label_1fbe58;
    }
    ctx->pc = 0x1FBE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBE50u;
            // 0x1fbe54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FBE58u;
label_1fbe58:
    // 0x1fbe58: 0x0  nop
    ctx->pc = 0x1fbe58u;
    // NOP
label_1fbe5c:
    // 0x1fbe5c: 0x0  nop
    ctx->pc = 0x1fbe5cu;
    // NOP
label_1fbe60:
    // 0x1fbe60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fbe64:
    // 0x1fbe64: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1fbe64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fbe68:
    // 0x1fbe68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbe68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fbe6c:
    // 0x1fbe6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fbe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fbe70:
    // 0x1fbe70: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1fbe70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1fbe74:
    // 0x1fbe74: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1fbe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
label_1fbe78:
    // 0x1fbe78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1fbe78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fbe7c:
    // 0x1fbe7c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1fbe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1fbe80:
    // 0x1fbe80: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1fbe80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1fbe84:
    // 0x1fbe84: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1fbe84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fbe88:
    // 0x1fbe88: 0xc07ebd4  jal         func_1FAF50
label_1fbe8c:
    if (ctx->pc == 0x1FBE8Cu) {
        ctx->pc = 0x1FBE8Cu;
            // 0x1fbe8c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1FBE90u;
        goto label_1fbe90;
    }
    ctx->pc = 0x1FBE88u;
    SET_GPR_U32(ctx, 31, 0x1FBE90u);
    ctx->pc = 0x1FBE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBE88u;
            // 0x1fbe8c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF50u;
    if (runtime->hasFunction(0x1FAF50u)) {
        auto targetFn = runtime->lookupFunction(0x1FAF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE90u; }
        if (ctx->pc != 0x1FBE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FAF50_0x1faf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBE90u; }
        if (ctx->pc != 0x1FBE90u) { return; }
    }
    ctx->pc = 0x1FBE90u;
label_1fbe90:
    // 0x1fbe90: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fbe90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fbe94:
    // 0x1fbe94: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1fbe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1fbe98:
    // 0x1fbe98: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1fbe98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1fbe9c:
    // 0x1fbe9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbe9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fbea0:
    // 0x1fbea0: 0x3e00008  jr          $ra
label_1fbea4:
    if (ctx->pc == 0x1FBEA4u) {
        ctx->pc = 0x1FBEA4u;
            // 0x1fbea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FBEA8u;
        goto label_1fbea8;
    }
    ctx->pc = 0x1FBEA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBEA0u;
            // 0x1fbea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FBEA8u;
label_1fbea8:
    // 0x1fbea8: 0x0  nop
    ctx->pc = 0x1fbea8u;
    // NOP
label_1fbeac:
    // 0x1fbeac: 0x0  nop
    ctx->pc = 0x1fbeacu;
    // NOP
label_1fbeb0:
    // 0x1fbeb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fbeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1fbeb4:
    // 0x1fbeb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fbeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fbeb8:
    // 0x1fbeb8: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1fbeb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1fbebc:
    // 0x1fbebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fbebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fbec0:
    // 0x1fbec0: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x1fbec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_1fbec4:
    // 0x1fbec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fbec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fbec8:
    // 0x1fbec8: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x1fbec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1fbecc:
    // 0x1fbecc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1fbeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1fbed0:
    // 0x1fbed0: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1fbed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1fbed4:
    // 0x1fbed4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1fbed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbed8:
    // 0x1fbed8: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1fbed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fbedc:
    // 0x1fbedc: 0xc4a6001c  lwc1        $f6, 0x1C($a1)
    ctx->pc = 0x1fbedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fbee0:
    // 0x1fbee0: 0x46002818  adda.s      $f5, $f0
    ctx->pc = 0x1fbee0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1fbee4:
    // 0x1fbee4: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x1fbee4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_1fbee8:
    // 0x1fbee8: 0x4606081c  madd.s      $f0, $f1, $f6
    ctx->pc = 0x1fbee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
label_1fbeec:
    // 0x1fbeec: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1fbeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1fbef0:
    // 0x1fbef0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1fbef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbef4:
    // 0x1fbef4: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x1fbef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fbef8:
    // 0x1fbef8: 0x46002818  adda.s      $f5, $f0
    ctx->pc = 0x1fbef8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1fbefc:
    // 0x1fbefc: 0x4606181c  madd.s      $f0, $f3, $f6
    ctx->pc = 0x1fbefcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
label_1fbf00:
    // 0x1fbf00: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1fbf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1fbf04:
    // 0x1fbf04: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1fbf04u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
label_1fbf08:
    // 0x1fbf08: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x1fbf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fbf0c:
    // 0x1fbf0c: 0xc4a40018  lwc1        $f4, 0x18($a1)
    ctx->pc = 0x1fbf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fbf10:
    // 0x1fbf10: 0x46032818  adda.s      $f5, $f3
    ctx->pc = 0x1fbf10u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_1fbf14:
    // 0x1fbf14: 0x460620dc  madd.s      $f3, $f4, $f6
    ctx->pc = 0x1fbf14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
label_1fbf18:
    // 0x1fbf18: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x1fbf18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1fbf1c:
    // 0x1fbf1c: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x1fbf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fbf20:
    // 0x1fbf20: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x1fbf20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
label_1fbf24:
    // 0x1fbf24: 0x46032818  adda.s      $f5, $f3
    ctx->pc = 0x1fbf24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_1fbf28:
    // 0x1fbf28: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1fbf28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1fbf2c:
    // 0x1fbf2c: 0x4606305c  madd.s      $f1, $f6, $f6
    ctx->pc = 0x1fbf2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
label_1fbf30:
    // 0x1fbf30: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x1fbf30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1fbf34:
    // 0x1fbf34: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x1fbf34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1fbf38:
    // 0x1fbf38: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1fbf38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1fbf3c:
    // 0x1fbf3c: 0xe7a6003c  swc1        $f6, 0x3C($sp)
    ctx->pc = 0x1fbf3cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1fbf40:
    // 0x1fbf40: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1fbf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fbf44:
    // 0x1fbf44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fbf44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fbf48:
    // 0x1fbf48: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1fbf48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1fbf4c:
    // 0x1fbf4c: 0x320f809  jalr        $t9
label_1fbf50:
    if (ctx->pc == 0x1FBF50u) {
        ctx->pc = 0x1FBF50u;
            // 0x1fbf50: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FBF54u;
        goto label_1fbf54;
    }
    ctx->pc = 0x1FBF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FBF54u);
        ctx->pc = 0x1FBF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF4Cu;
            // 0x1fbf50: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FBF54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF54u; }
            if (ctx->pc != 0x1FBF54u) { return; }
        }
        }
    }
    ctx->pc = 0x1FBF54u;
label_1fbf54:
    // 0x1fbf54: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1fbf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fbf58:
    // 0x1fbf58: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1fbf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbf5c:
    // 0x1fbf5c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1fbf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1fbf60:
    // 0x1fbf60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fbf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fbf64:
    // 0x1fbf64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fbf64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fbf68:
    // 0x1fbf68: 0x3e00008  jr          $ra
label_1fbf6c:
    if (ctx->pc == 0x1FBF6Cu) {
        ctx->pc = 0x1FBF6Cu;
            // 0x1fbf6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1FBF70u;
        goto label_1fbf70;
    }
    ctx->pc = 0x1FBF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF68u;
            // 0x1fbf6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FBF70u;
label_1fbf70:
    // 0x1fbf70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fbf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1fbf74:
    // 0x1fbf74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fbf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fbf78:
    // 0x1fbf78: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1fbf78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fbf7c:
    // 0x1fbf7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fbf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fbf80:
    // 0x1fbf80: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x1fbf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_1fbf84:
    // 0x1fbf84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fbf84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf88:
    // 0x1fbf88: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x1fbf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1fbf8c:
    // 0x1fbf8c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1fbf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1fbf90:
    // 0x1fbf90: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1fbf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1fbf94:
    // 0x1fbf94: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1fbf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbf98:
    // 0x1fbf98: 0xc4a3001c  lwc1        $f3, 0x1C($a1)
    ctx->pc = 0x1fbf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fbf9c:
    // 0x1fbf9c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1fbf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fbfa0:
    // 0x1fbfa0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fbfa0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fbfa4:
    // 0x1fbfa4: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1fbfa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_1fbfa8:
    // 0x1fbfa8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1fbfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1fbfac:
    // 0x1fbfac: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1fbfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbfb0:
    // 0x1fbfb0: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1fbfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fbfb4:
    // 0x1fbfb4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fbfb4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fbfb8:
    // 0x1fbfb8: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1fbfb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_1fbfbc:
    // 0x1fbfbc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1fbfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1fbfc0:
    // 0x1fbfc0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1fbfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbfc4:
    // 0x1fbfc4: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x1fbfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fbfc8:
    // 0x1fbfc8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fbfc8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fbfcc:
    // 0x1fbfcc: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1fbfccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_1fbfd0:
    // 0x1fbfd0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1fbfd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1fbfd4:
    // 0x1fbfd4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1fbfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbfd8:
    // 0x1fbfd8: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x1fbfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fbfdc:
    // 0x1fbfdc: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fbfdcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fbfe0:
    // 0x1fbfe0: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1fbfe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_1fbfe4:
    // 0x1fbfe4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1fbfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1fbfe8:
    // 0x1fbfe8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1fbfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbfec:
    // 0x1fbfec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fbfecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1fbff0:
    // 0x1fbff0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1fbff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1fbff4:
    // 0x1fbff4: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1fbff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbff8:
    // 0x1fbff8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fbff8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1fbffc:
    // 0x1fbffc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1fbffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1fc000:
    // 0x1fc000: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1fc000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc004:
    // 0x1fc004: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fc004u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1fc008:
    // 0x1fc008: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1fc008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1fc00c:
    // 0x1fc00c: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1fc00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc010:
    // 0x1fc010: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1fc010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1fc014:
    // 0x1fc014: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1fc014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1fc018:
    // 0x1fc018: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fc018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc01c:
    // 0x1fc01c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1fc01cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1fc020:
    // 0x1fc020: 0x320f809  jalr        $t9
label_1fc024:
    if (ctx->pc == 0x1FC024u) {
        ctx->pc = 0x1FC024u;
            // 0x1fc024: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FC028u;
        goto label_1fc028;
    }
    ctx->pc = 0x1FC020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FC028u);
        ctx->pc = 0x1FC024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC020u;
            // 0x1fc024: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FC028u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FC028u; }
            if (ctx->pc != 0x1FC028u) { return; }
        }
        }
    }
    ctx->pc = 0x1FC028u;
label_1fc028:
    // 0x1fc028: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1fc028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1fc02c:
    // 0x1fc02c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1fc02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc030:
    // 0x1fc030: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1fc030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1fc034:
    // 0x1fc034: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc038:
    // 0x1fc038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc03c:
    // 0x1fc03c: 0x3e00008  jr          $ra
label_1fc040:
    if (ctx->pc == 0x1FC040u) {
        ctx->pc = 0x1FC040u;
            // 0x1fc040: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1FC044u;
        goto label_1fc044;
    }
    ctx->pc = 0x1FC03Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC03Cu;
            // 0x1fc040: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC044u;
label_1fc044:
    // 0x1fc044: 0x0  nop
    ctx->pc = 0x1fc044u;
    // NOP
label_1fc048:
    // 0x1fc048: 0x0  nop
    ctx->pc = 0x1fc048u;
    // NOP
label_1fc04c:
    // 0x1fc04c: 0x0  nop
    ctx->pc = 0x1fc04cu;
    // NOP
label_1fc050:
    // 0x1fc050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fc054:
    // 0x1fc054: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1fc054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fc058:
    // 0x1fc058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fc058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fc05c:
    // 0x1fc05c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1fc05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fc060:
    // 0x1fc060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fc064:
    // 0x1fc064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc068:
    // 0x1fc068: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1fc068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fc06c:
    // 0x1fc06c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fc06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc070:
    // 0x1fc070: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1fc070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1fc074:
    // 0x1fc074: 0x320f809  jalr        $t9
label_1fc078:
    if (ctx->pc == 0x1FC078u) {
        ctx->pc = 0x1FC078u;
            // 0x1fc078: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FC07Cu;
        goto label_1fc07c;
    }
    ctx->pc = 0x1FC074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FC07Cu);
        ctx->pc = 0x1FC078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC074u;
            // 0x1fc078: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FC07Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FC07Cu; }
            if (ctx->pc != 0x1FC07Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FC07Cu;
label_1fc07c:
    // 0x1fc07c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1fc07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fc080:
    // 0x1fc080: 0x80630004  lb          $v1, 0x4($v1)
    ctx->pc = 0x1fc080u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_1fc084:
    // 0x1fc084: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x1fc084u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_1fc088:
    // 0x1fc088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc08c:
    // 0x1fc08c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc090:
    // 0x1fc090: 0x3e00008  jr          $ra
label_1fc094:
    if (ctx->pc == 0x1FC094u) {
        ctx->pc = 0x1FC094u;
            // 0x1fc094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FC098u;
        goto label_1fc098;
    }
    ctx->pc = 0x1FC090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC090u;
            // 0x1fc094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC098u;
label_1fc098:
    // 0x1fc098: 0x0  nop
    ctx->pc = 0x1fc098u;
    // NOP
label_1fc09c:
    // 0x1fc09c: 0x0  nop
    ctx->pc = 0x1fc09cu;
    // NOP
}
