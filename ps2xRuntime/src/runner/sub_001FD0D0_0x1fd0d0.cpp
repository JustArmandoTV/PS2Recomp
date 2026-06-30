#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD0D0
// Address: 0x1fd0d0 - 0x1fdb00
void sub_001FD0D0_0x1fd0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD0D0_0x1fd0d0");
#endif

    switch (ctx->pc) {
        case 0x1fd0d0u: goto label_1fd0d0;
        case 0x1fd0d4u: goto label_1fd0d4;
        case 0x1fd0d8u: goto label_1fd0d8;
        case 0x1fd0dcu: goto label_1fd0dc;
        case 0x1fd0e0u: goto label_1fd0e0;
        case 0x1fd0e4u: goto label_1fd0e4;
        case 0x1fd0e8u: goto label_1fd0e8;
        case 0x1fd0ecu: goto label_1fd0ec;
        case 0x1fd0f0u: goto label_1fd0f0;
        case 0x1fd0f4u: goto label_1fd0f4;
        case 0x1fd0f8u: goto label_1fd0f8;
        case 0x1fd0fcu: goto label_1fd0fc;
        case 0x1fd100u: goto label_1fd100;
        case 0x1fd104u: goto label_1fd104;
        case 0x1fd108u: goto label_1fd108;
        case 0x1fd10cu: goto label_1fd10c;
        case 0x1fd110u: goto label_1fd110;
        case 0x1fd114u: goto label_1fd114;
        case 0x1fd118u: goto label_1fd118;
        case 0x1fd11cu: goto label_1fd11c;
        case 0x1fd120u: goto label_1fd120;
        case 0x1fd124u: goto label_1fd124;
        case 0x1fd128u: goto label_1fd128;
        case 0x1fd12cu: goto label_1fd12c;
        case 0x1fd130u: goto label_1fd130;
        case 0x1fd134u: goto label_1fd134;
        case 0x1fd138u: goto label_1fd138;
        case 0x1fd13cu: goto label_1fd13c;
        case 0x1fd140u: goto label_1fd140;
        case 0x1fd144u: goto label_1fd144;
        case 0x1fd148u: goto label_1fd148;
        case 0x1fd14cu: goto label_1fd14c;
        case 0x1fd150u: goto label_1fd150;
        case 0x1fd154u: goto label_1fd154;
        case 0x1fd158u: goto label_1fd158;
        case 0x1fd15cu: goto label_1fd15c;
        case 0x1fd160u: goto label_1fd160;
        case 0x1fd164u: goto label_1fd164;
        case 0x1fd168u: goto label_1fd168;
        case 0x1fd16cu: goto label_1fd16c;
        case 0x1fd170u: goto label_1fd170;
        case 0x1fd174u: goto label_1fd174;
        case 0x1fd178u: goto label_1fd178;
        case 0x1fd17cu: goto label_1fd17c;
        case 0x1fd180u: goto label_1fd180;
        case 0x1fd184u: goto label_1fd184;
        case 0x1fd188u: goto label_1fd188;
        case 0x1fd18cu: goto label_1fd18c;
        case 0x1fd190u: goto label_1fd190;
        case 0x1fd194u: goto label_1fd194;
        case 0x1fd198u: goto label_1fd198;
        case 0x1fd19cu: goto label_1fd19c;
        case 0x1fd1a0u: goto label_1fd1a0;
        case 0x1fd1a4u: goto label_1fd1a4;
        case 0x1fd1a8u: goto label_1fd1a8;
        case 0x1fd1acu: goto label_1fd1ac;
        case 0x1fd1b0u: goto label_1fd1b0;
        case 0x1fd1b4u: goto label_1fd1b4;
        case 0x1fd1b8u: goto label_1fd1b8;
        case 0x1fd1bcu: goto label_1fd1bc;
        case 0x1fd1c0u: goto label_1fd1c0;
        case 0x1fd1c4u: goto label_1fd1c4;
        case 0x1fd1c8u: goto label_1fd1c8;
        case 0x1fd1ccu: goto label_1fd1cc;
        case 0x1fd1d0u: goto label_1fd1d0;
        case 0x1fd1d4u: goto label_1fd1d4;
        case 0x1fd1d8u: goto label_1fd1d8;
        case 0x1fd1dcu: goto label_1fd1dc;
        case 0x1fd1e0u: goto label_1fd1e0;
        case 0x1fd1e4u: goto label_1fd1e4;
        case 0x1fd1e8u: goto label_1fd1e8;
        case 0x1fd1ecu: goto label_1fd1ec;
        case 0x1fd1f0u: goto label_1fd1f0;
        case 0x1fd1f4u: goto label_1fd1f4;
        case 0x1fd1f8u: goto label_1fd1f8;
        case 0x1fd1fcu: goto label_1fd1fc;
        case 0x1fd200u: goto label_1fd200;
        case 0x1fd204u: goto label_1fd204;
        case 0x1fd208u: goto label_1fd208;
        case 0x1fd20cu: goto label_1fd20c;
        case 0x1fd210u: goto label_1fd210;
        case 0x1fd214u: goto label_1fd214;
        case 0x1fd218u: goto label_1fd218;
        case 0x1fd21cu: goto label_1fd21c;
        case 0x1fd220u: goto label_1fd220;
        case 0x1fd224u: goto label_1fd224;
        case 0x1fd228u: goto label_1fd228;
        case 0x1fd22cu: goto label_1fd22c;
        case 0x1fd230u: goto label_1fd230;
        case 0x1fd234u: goto label_1fd234;
        case 0x1fd238u: goto label_1fd238;
        case 0x1fd23cu: goto label_1fd23c;
        case 0x1fd240u: goto label_1fd240;
        case 0x1fd244u: goto label_1fd244;
        case 0x1fd248u: goto label_1fd248;
        case 0x1fd24cu: goto label_1fd24c;
        case 0x1fd250u: goto label_1fd250;
        case 0x1fd254u: goto label_1fd254;
        case 0x1fd258u: goto label_1fd258;
        case 0x1fd25cu: goto label_1fd25c;
        case 0x1fd260u: goto label_1fd260;
        case 0x1fd264u: goto label_1fd264;
        case 0x1fd268u: goto label_1fd268;
        case 0x1fd26cu: goto label_1fd26c;
        case 0x1fd270u: goto label_1fd270;
        case 0x1fd274u: goto label_1fd274;
        case 0x1fd278u: goto label_1fd278;
        case 0x1fd27cu: goto label_1fd27c;
        case 0x1fd280u: goto label_1fd280;
        case 0x1fd284u: goto label_1fd284;
        case 0x1fd288u: goto label_1fd288;
        case 0x1fd28cu: goto label_1fd28c;
        case 0x1fd290u: goto label_1fd290;
        case 0x1fd294u: goto label_1fd294;
        case 0x1fd298u: goto label_1fd298;
        case 0x1fd29cu: goto label_1fd29c;
        case 0x1fd2a0u: goto label_1fd2a0;
        case 0x1fd2a4u: goto label_1fd2a4;
        case 0x1fd2a8u: goto label_1fd2a8;
        case 0x1fd2acu: goto label_1fd2ac;
        case 0x1fd2b0u: goto label_1fd2b0;
        case 0x1fd2b4u: goto label_1fd2b4;
        case 0x1fd2b8u: goto label_1fd2b8;
        case 0x1fd2bcu: goto label_1fd2bc;
        case 0x1fd2c0u: goto label_1fd2c0;
        case 0x1fd2c4u: goto label_1fd2c4;
        case 0x1fd2c8u: goto label_1fd2c8;
        case 0x1fd2ccu: goto label_1fd2cc;
        case 0x1fd2d0u: goto label_1fd2d0;
        case 0x1fd2d4u: goto label_1fd2d4;
        case 0x1fd2d8u: goto label_1fd2d8;
        case 0x1fd2dcu: goto label_1fd2dc;
        case 0x1fd2e0u: goto label_1fd2e0;
        case 0x1fd2e4u: goto label_1fd2e4;
        case 0x1fd2e8u: goto label_1fd2e8;
        case 0x1fd2ecu: goto label_1fd2ec;
        case 0x1fd2f0u: goto label_1fd2f0;
        case 0x1fd2f4u: goto label_1fd2f4;
        case 0x1fd2f8u: goto label_1fd2f8;
        case 0x1fd2fcu: goto label_1fd2fc;
        case 0x1fd300u: goto label_1fd300;
        case 0x1fd304u: goto label_1fd304;
        case 0x1fd308u: goto label_1fd308;
        case 0x1fd30cu: goto label_1fd30c;
        case 0x1fd310u: goto label_1fd310;
        case 0x1fd314u: goto label_1fd314;
        case 0x1fd318u: goto label_1fd318;
        case 0x1fd31cu: goto label_1fd31c;
        case 0x1fd320u: goto label_1fd320;
        case 0x1fd324u: goto label_1fd324;
        case 0x1fd328u: goto label_1fd328;
        case 0x1fd32cu: goto label_1fd32c;
        case 0x1fd330u: goto label_1fd330;
        case 0x1fd334u: goto label_1fd334;
        case 0x1fd338u: goto label_1fd338;
        case 0x1fd33cu: goto label_1fd33c;
        case 0x1fd340u: goto label_1fd340;
        case 0x1fd344u: goto label_1fd344;
        case 0x1fd348u: goto label_1fd348;
        case 0x1fd34cu: goto label_1fd34c;
        case 0x1fd350u: goto label_1fd350;
        case 0x1fd354u: goto label_1fd354;
        case 0x1fd358u: goto label_1fd358;
        case 0x1fd35cu: goto label_1fd35c;
        case 0x1fd360u: goto label_1fd360;
        case 0x1fd364u: goto label_1fd364;
        case 0x1fd368u: goto label_1fd368;
        case 0x1fd36cu: goto label_1fd36c;
        case 0x1fd370u: goto label_1fd370;
        case 0x1fd374u: goto label_1fd374;
        case 0x1fd378u: goto label_1fd378;
        case 0x1fd37cu: goto label_1fd37c;
        case 0x1fd380u: goto label_1fd380;
        case 0x1fd384u: goto label_1fd384;
        case 0x1fd388u: goto label_1fd388;
        case 0x1fd38cu: goto label_1fd38c;
        case 0x1fd390u: goto label_1fd390;
        case 0x1fd394u: goto label_1fd394;
        case 0x1fd398u: goto label_1fd398;
        case 0x1fd39cu: goto label_1fd39c;
        case 0x1fd3a0u: goto label_1fd3a0;
        case 0x1fd3a4u: goto label_1fd3a4;
        case 0x1fd3a8u: goto label_1fd3a8;
        case 0x1fd3acu: goto label_1fd3ac;
        case 0x1fd3b0u: goto label_1fd3b0;
        case 0x1fd3b4u: goto label_1fd3b4;
        case 0x1fd3b8u: goto label_1fd3b8;
        case 0x1fd3bcu: goto label_1fd3bc;
        case 0x1fd3c0u: goto label_1fd3c0;
        case 0x1fd3c4u: goto label_1fd3c4;
        case 0x1fd3c8u: goto label_1fd3c8;
        case 0x1fd3ccu: goto label_1fd3cc;
        case 0x1fd3d0u: goto label_1fd3d0;
        case 0x1fd3d4u: goto label_1fd3d4;
        case 0x1fd3d8u: goto label_1fd3d8;
        case 0x1fd3dcu: goto label_1fd3dc;
        case 0x1fd3e0u: goto label_1fd3e0;
        case 0x1fd3e4u: goto label_1fd3e4;
        case 0x1fd3e8u: goto label_1fd3e8;
        case 0x1fd3ecu: goto label_1fd3ec;
        case 0x1fd3f0u: goto label_1fd3f0;
        case 0x1fd3f4u: goto label_1fd3f4;
        case 0x1fd3f8u: goto label_1fd3f8;
        case 0x1fd3fcu: goto label_1fd3fc;
        case 0x1fd400u: goto label_1fd400;
        case 0x1fd404u: goto label_1fd404;
        case 0x1fd408u: goto label_1fd408;
        case 0x1fd40cu: goto label_1fd40c;
        case 0x1fd410u: goto label_1fd410;
        case 0x1fd414u: goto label_1fd414;
        case 0x1fd418u: goto label_1fd418;
        case 0x1fd41cu: goto label_1fd41c;
        case 0x1fd420u: goto label_1fd420;
        case 0x1fd424u: goto label_1fd424;
        case 0x1fd428u: goto label_1fd428;
        case 0x1fd42cu: goto label_1fd42c;
        case 0x1fd430u: goto label_1fd430;
        case 0x1fd434u: goto label_1fd434;
        case 0x1fd438u: goto label_1fd438;
        case 0x1fd43cu: goto label_1fd43c;
        case 0x1fd440u: goto label_1fd440;
        case 0x1fd444u: goto label_1fd444;
        case 0x1fd448u: goto label_1fd448;
        case 0x1fd44cu: goto label_1fd44c;
        case 0x1fd450u: goto label_1fd450;
        case 0x1fd454u: goto label_1fd454;
        case 0x1fd458u: goto label_1fd458;
        case 0x1fd45cu: goto label_1fd45c;
        case 0x1fd460u: goto label_1fd460;
        case 0x1fd464u: goto label_1fd464;
        case 0x1fd468u: goto label_1fd468;
        case 0x1fd46cu: goto label_1fd46c;
        case 0x1fd470u: goto label_1fd470;
        case 0x1fd474u: goto label_1fd474;
        case 0x1fd478u: goto label_1fd478;
        case 0x1fd47cu: goto label_1fd47c;
        case 0x1fd480u: goto label_1fd480;
        case 0x1fd484u: goto label_1fd484;
        case 0x1fd488u: goto label_1fd488;
        case 0x1fd48cu: goto label_1fd48c;
        case 0x1fd490u: goto label_1fd490;
        case 0x1fd494u: goto label_1fd494;
        case 0x1fd498u: goto label_1fd498;
        case 0x1fd49cu: goto label_1fd49c;
        case 0x1fd4a0u: goto label_1fd4a0;
        case 0x1fd4a4u: goto label_1fd4a4;
        case 0x1fd4a8u: goto label_1fd4a8;
        case 0x1fd4acu: goto label_1fd4ac;
        case 0x1fd4b0u: goto label_1fd4b0;
        case 0x1fd4b4u: goto label_1fd4b4;
        case 0x1fd4b8u: goto label_1fd4b8;
        case 0x1fd4bcu: goto label_1fd4bc;
        case 0x1fd4c0u: goto label_1fd4c0;
        case 0x1fd4c4u: goto label_1fd4c4;
        case 0x1fd4c8u: goto label_1fd4c8;
        case 0x1fd4ccu: goto label_1fd4cc;
        case 0x1fd4d0u: goto label_1fd4d0;
        case 0x1fd4d4u: goto label_1fd4d4;
        case 0x1fd4d8u: goto label_1fd4d8;
        case 0x1fd4dcu: goto label_1fd4dc;
        case 0x1fd4e0u: goto label_1fd4e0;
        case 0x1fd4e4u: goto label_1fd4e4;
        case 0x1fd4e8u: goto label_1fd4e8;
        case 0x1fd4ecu: goto label_1fd4ec;
        case 0x1fd4f0u: goto label_1fd4f0;
        case 0x1fd4f4u: goto label_1fd4f4;
        case 0x1fd4f8u: goto label_1fd4f8;
        case 0x1fd4fcu: goto label_1fd4fc;
        case 0x1fd500u: goto label_1fd500;
        case 0x1fd504u: goto label_1fd504;
        case 0x1fd508u: goto label_1fd508;
        case 0x1fd50cu: goto label_1fd50c;
        case 0x1fd510u: goto label_1fd510;
        case 0x1fd514u: goto label_1fd514;
        case 0x1fd518u: goto label_1fd518;
        case 0x1fd51cu: goto label_1fd51c;
        case 0x1fd520u: goto label_1fd520;
        case 0x1fd524u: goto label_1fd524;
        case 0x1fd528u: goto label_1fd528;
        case 0x1fd52cu: goto label_1fd52c;
        case 0x1fd530u: goto label_1fd530;
        case 0x1fd534u: goto label_1fd534;
        case 0x1fd538u: goto label_1fd538;
        case 0x1fd53cu: goto label_1fd53c;
        case 0x1fd540u: goto label_1fd540;
        case 0x1fd544u: goto label_1fd544;
        case 0x1fd548u: goto label_1fd548;
        case 0x1fd54cu: goto label_1fd54c;
        case 0x1fd550u: goto label_1fd550;
        case 0x1fd554u: goto label_1fd554;
        case 0x1fd558u: goto label_1fd558;
        case 0x1fd55cu: goto label_1fd55c;
        case 0x1fd560u: goto label_1fd560;
        case 0x1fd564u: goto label_1fd564;
        case 0x1fd568u: goto label_1fd568;
        case 0x1fd56cu: goto label_1fd56c;
        case 0x1fd570u: goto label_1fd570;
        case 0x1fd574u: goto label_1fd574;
        case 0x1fd578u: goto label_1fd578;
        case 0x1fd57cu: goto label_1fd57c;
        case 0x1fd580u: goto label_1fd580;
        case 0x1fd584u: goto label_1fd584;
        case 0x1fd588u: goto label_1fd588;
        case 0x1fd58cu: goto label_1fd58c;
        case 0x1fd590u: goto label_1fd590;
        case 0x1fd594u: goto label_1fd594;
        case 0x1fd598u: goto label_1fd598;
        case 0x1fd59cu: goto label_1fd59c;
        case 0x1fd5a0u: goto label_1fd5a0;
        case 0x1fd5a4u: goto label_1fd5a4;
        case 0x1fd5a8u: goto label_1fd5a8;
        case 0x1fd5acu: goto label_1fd5ac;
        case 0x1fd5b0u: goto label_1fd5b0;
        case 0x1fd5b4u: goto label_1fd5b4;
        case 0x1fd5b8u: goto label_1fd5b8;
        case 0x1fd5bcu: goto label_1fd5bc;
        case 0x1fd5c0u: goto label_1fd5c0;
        case 0x1fd5c4u: goto label_1fd5c4;
        case 0x1fd5c8u: goto label_1fd5c8;
        case 0x1fd5ccu: goto label_1fd5cc;
        case 0x1fd5d0u: goto label_1fd5d0;
        case 0x1fd5d4u: goto label_1fd5d4;
        case 0x1fd5d8u: goto label_1fd5d8;
        case 0x1fd5dcu: goto label_1fd5dc;
        case 0x1fd5e0u: goto label_1fd5e0;
        case 0x1fd5e4u: goto label_1fd5e4;
        case 0x1fd5e8u: goto label_1fd5e8;
        case 0x1fd5ecu: goto label_1fd5ec;
        case 0x1fd5f0u: goto label_1fd5f0;
        case 0x1fd5f4u: goto label_1fd5f4;
        case 0x1fd5f8u: goto label_1fd5f8;
        case 0x1fd5fcu: goto label_1fd5fc;
        case 0x1fd600u: goto label_1fd600;
        case 0x1fd604u: goto label_1fd604;
        case 0x1fd608u: goto label_1fd608;
        case 0x1fd60cu: goto label_1fd60c;
        case 0x1fd610u: goto label_1fd610;
        case 0x1fd614u: goto label_1fd614;
        case 0x1fd618u: goto label_1fd618;
        case 0x1fd61cu: goto label_1fd61c;
        case 0x1fd620u: goto label_1fd620;
        case 0x1fd624u: goto label_1fd624;
        case 0x1fd628u: goto label_1fd628;
        case 0x1fd62cu: goto label_1fd62c;
        case 0x1fd630u: goto label_1fd630;
        case 0x1fd634u: goto label_1fd634;
        case 0x1fd638u: goto label_1fd638;
        case 0x1fd63cu: goto label_1fd63c;
        case 0x1fd640u: goto label_1fd640;
        case 0x1fd644u: goto label_1fd644;
        case 0x1fd648u: goto label_1fd648;
        case 0x1fd64cu: goto label_1fd64c;
        case 0x1fd650u: goto label_1fd650;
        case 0x1fd654u: goto label_1fd654;
        case 0x1fd658u: goto label_1fd658;
        case 0x1fd65cu: goto label_1fd65c;
        case 0x1fd660u: goto label_1fd660;
        case 0x1fd664u: goto label_1fd664;
        case 0x1fd668u: goto label_1fd668;
        case 0x1fd66cu: goto label_1fd66c;
        case 0x1fd670u: goto label_1fd670;
        case 0x1fd674u: goto label_1fd674;
        case 0x1fd678u: goto label_1fd678;
        case 0x1fd67cu: goto label_1fd67c;
        case 0x1fd680u: goto label_1fd680;
        case 0x1fd684u: goto label_1fd684;
        case 0x1fd688u: goto label_1fd688;
        case 0x1fd68cu: goto label_1fd68c;
        case 0x1fd690u: goto label_1fd690;
        case 0x1fd694u: goto label_1fd694;
        case 0x1fd698u: goto label_1fd698;
        case 0x1fd69cu: goto label_1fd69c;
        case 0x1fd6a0u: goto label_1fd6a0;
        case 0x1fd6a4u: goto label_1fd6a4;
        case 0x1fd6a8u: goto label_1fd6a8;
        case 0x1fd6acu: goto label_1fd6ac;
        case 0x1fd6b0u: goto label_1fd6b0;
        case 0x1fd6b4u: goto label_1fd6b4;
        case 0x1fd6b8u: goto label_1fd6b8;
        case 0x1fd6bcu: goto label_1fd6bc;
        case 0x1fd6c0u: goto label_1fd6c0;
        case 0x1fd6c4u: goto label_1fd6c4;
        case 0x1fd6c8u: goto label_1fd6c8;
        case 0x1fd6ccu: goto label_1fd6cc;
        case 0x1fd6d0u: goto label_1fd6d0;
        case 0x1fd6d4u: goto label_1fd6d4;
        case 0x1fd6d8u: goto label_1fd6d8;
        case 0x1fd6dcu: goto label_1fd6dc;
        case 0x1fd6e0u: goto label_1fd6e0;
        case 0x1fd6e4u: goto label_1fd6e4;
        case 0x1fd6e8u: goto label_1fd6e8;
        case 0x1fd6ecu: goto label_1fd6ec;
        case 0x1fd6f0u: goto label_1fd6f0;
        case 0x1fd6f4u: goto label_1fd6f4;
        case 0x1fd6f8u: goto label_1fd6f8;
        case 0x1fd6fcu: goto label_1fd6fc;
        case 0x1fd700u: goto label_1fd700;
        case 0x1fd704u: goto label_1fd704;
        case 0x1fd708u: goto label_1fd708;
        case 0x1fd70cu: goto label_1fd70c;
        case 0x1fd710u: goto label_1fd710;
        case 0x1fd714u: goto label_1fd714;
        case 0x1fd718u: goto label_1fd718;
        case 0x1fd71cu: goto label_1fd71c;
        case 0x1fd720u: goto label_1fd720;
        case 0x1fd724u: goto label_1fd724;
        case 0x1fd728u: goto label_1fd728;
        case 0x1fd72cu: goto label_1fd72c;
        case 0x1fd730u: goto label_1fd730;
        case 0x1fd734u: goto label_1fd734;
        case 0x1fd738u: goto label_1fd738;
        case 0x1fd73cu: goto label_1fd73c;
        case 0x1fd740u: goto label_1fd740;
        case 0x1fd744u: goto label_1fd744;
        case 0x1fd748u: goto label_1fd748;
        case 0x1fd74cu: goto label_1fd74c;
        case 0x1fd750u: goto label_1fd750;
        case 0x1fd754u: goto label_1fd754;
        case 0x1fd758u: goto label_1fd758;
        case 0x1fd75cu: goto label_1fd75c;
        case 0x1fd760u: goto label_1fd760;
        case 0x1fd764u: goto label_1fd764;
        case 0x1fd768u: goto label_1fd768;
        case 0x1fd76cu: goto label_1fd76c;
        case 0x1fd770u: goto label_1fd770;
        case 0x1fd774u: goto label_1fd774;
        case 0x1fd778u: goto label_1fd778;
        case 0x1fd77cu: goto label_1fd77c;
        case 0x1fd780u: goto label_1fd780;
        case 0x1fd784u: goto label_1fd784;
        case 0x1fd788u: goto label_1fd788;
        case 0x1fd78cu: goto label_1fd78c;
        case 0x1fd790u: goto label_1fd790;
        case 0x1fd794u: goto label_1fd794;
        case 0x1fd798u: goto label_1fd798;
        case 0x1fd79cu: goto label_1fd79c;
        case 0x1fd7a0u: goto label_1fd7a0;
        case 0x1fd7a4u: goto label_1fd7a4;
        case 0x1fd7a8u: goto label_1fd7a8;
        case 0x1fd7acu: goto label_1fd7ac;
        case 0x1fd7b0u: goto label_1fd7b0;
        case 0x1fd7b4u: goto label_1fd7b4;
        case 0x1fd7b8u: goto label_1fd7b8;
        case 0x1fd7bcu: goto label_1fd7bc;
        case 0x1fd7c0u: goto label_1fd7c0;
        case 0x1fd7c4u: goto label_1fd7c4;
        case 0x1fd7c8u: goto label_1fd7c8;
        case 0x1fd7ccu: goto label_1fd7cc;
        case 0x1fd7d0u: goto label_1fd7d0;
        case 0x1fd7d4u: goto label_1fd7d4;
        case 0x1fd7d8u: goto label_1fd7d8;
        case 0x1fd7dcu: goto label_1fd7dc;
        case 0x1fd7e0u: goto label_1fd7e0;
        case 0x1fd7e4u: goto label_1fd7e4;
        case 0x1fd7e8u: goto label_1fd7e8;
        case 0x1fd7ecu: goto label_1fd7ec;
        case 0x1fd7f0u: goto label_1fd7f0;
        case 0x1fd7f4u: goto label_1fd7f4;
        case 0x1fd7f8u: goto label_1fd7f8;
        case 0x1fd7fcu: goto label_1fd7fc;
        case 0x1fd800u: goto label_1fd800;
        case 0x1fd804u: goto label_1fd804;
        case 0x1fd808u: goto label_1fd808;
        case 0x1fd80cu: goto label_1fd80c;
        case 0x1fd810u: goto label_1fd810;
        case 0x1fd814u: goto label_1fd814;
        case 0x1fd818u: goto label_1fd818;
        case 0x1fd81cu: goto label_1fd81c;
        case 0x1fd820u: goto label_1fd820;
        case 0x1fd824u: goto label_1fd824;
        case 0x1fd828u: goto label_1fd828;
        case 0x1fd82cu: goto label_1fd82c;
        case 0x1fd830u: goto label_1fd830;
        case 0x1fd834u: goto label_1fd834;
        case 0x1fd838u: goto label_1fd838;
        case 0x1fd83cu: goto label_1fd83c;
        case 0x1fd840u: goto label_1fd840;
        case 0x1fd844u: goto label_1fd844;
        case 0x1fd848u: goto label_1fd848;
        case 0x1fd84cu: goto label_1fd84c;
        case 0x1fd850u: goto label_1fd850;
        case 0x1fd854u: goto label_1fd854;
        case 0x1fd858u: goto label_1fd858;
        case 0x1fd85cu: goto label_1fd85c;
        case 0x1fd860u: goto label_1fd860;
        case 0x1fd864u: goto label_1fd864;
        case 0x1fd868u: goto label_1fd868;
        case 0x1fd86cu: goto label_1fd86c;
        case 0x1fd870u: goto label_1fd870;
        case 0x1fd874u: goto label_1fd874;
        case 0x1fd878u: goto label_1fd878;
        case 0x1fd87cu: goto label_1fd87c;
        case 0x1fd880u: goto label_1fd880;
        case 0x1fd884u: goto label_1fd884;
        case 0x1fd888u: goto label_1fd888;
        case 0x1fd88cu: goto label_1fd88c;
        case 0x1fd890u: goto label_1fd890;
        case 0x1fd894u: goto label_1fd894;
        case 0x1fd898u: goto label_1fd898;
        case 0x1fd89cu: goto label_1fd89c;
        case 0x1fd8a0u: goto label_1fd8a0;
        case 0x1fd8a4u: goto label_1fd8a4;
        case 0x1fd8a8u: goto label_1fd8a8;
        case 0x1fd8acu: goto label_1fd8ac;
        case 0x1fd8b0u: goto label_1fd8b0;
        case 0x1fd8b4u: goto label_1fd8b4;
        case 0x1fd8b8u: goto label_1fd8b8;
        case 0x1fd8bcu: goto label_1fd8bc;
        case 0x1fd8c0u: goto label_1fd8c0;
        case 0x1fd8c4u: goto label_1fd8c4;
        case 0x1fd8c8u: goto label_1fd8c8;
        case 0x1fd8ccu: goto label_1fd8cc;
        case 0x1fd8d0u: goto label_1fd8d0;
        case 0x1fd8d4u: goto label_1fd8d4;
        case 0x1fd8d8u: goto label_1fd8d8;
        case 0x1fd8dcu: goto label_1fd8dc;
        case 0x1fd8e0u: goto label_1fd8e0;
        case 0x1fd8e4u: goto label_1fd8e4;
        case 0x1fd8e8u: goto label_1fd8e8;
        case 0x1fd8ecu: goto label_1fd8ec;
        case 0x1fd8f0u: goto label_1fd8f0;
        case 0x1fd8f4u: goto label_1fd8f4;
        case 0x1fd8f8u: goto label_1fd8f8;
        case 0x1fd8fcu: goto label_1fd8fc;
        case 0x1fd900u: goto label_1fd900;
        case 0x1fd904u: goto label_1fd904;
        case 0x1fd908u: goto label_1fd908;
        case 0x1fd90cu: goto label_1fd90c;
        case 0x1fd910u: goto label_1fd910;
        case 0x1fd914u: goto label_1fd914;
        case 0x1fd918u: goto label_1fd918;
        case 0x1fd91cu: goto label_1fd91c;
        case 0x1fd920u: goto label_1fd920;
        case 0x1fd924u: goto label_1fd924;
        case 0x1fd928u: goto label_1fd928;
        case 0x1fd92cu: goto label_1fd92c;
        case 0x1fd930u: goto label_1fd930;
        case 0x1fd934u: goto label_1fd934;
        case 0x1fd938u: goto label_1fd938;
        case 0x1fd93cu: goto label_1fd93c;
        case 0x1fd940u: goto label_1fd940;
        case 0x1fd944u: goto label_1fd944;
        case 0x1fd948u: goto label_1fd948;
        case 0x1fd94cu: goto label_1fd94c;
        case 0x1fd950u: goto label_1fd950;
        case 0x1fd954u: goto label_1fd954;
        case 0x1fd958u: goto label_1fd958;
        case 0x1fd95cu: goto label_1fd95c;
        case 0x1fd960u: goto label_1fd960;
        case 0x1fd964u: goto label_1fd964;
        case 0x1fd968u: goto label_1fd968;
        case 0x1fd96cu: goto label_1fd96c;
        case 0x1fd970u: goto label_1fd970;
        case 0x1fd974u: goto label_1fd974;
        case 0x1fd978u: goto label_1fd978;
        case 0x1fd97cu: goto label_1fd97c;
        case 0x1fd980u: goto label_1fd980;
        case 0x1fd984u: goto label_1fd984;
        case 0x1fd988u: goto label_1fd988;
        case 0x1fd98cu: goto label_1fd98c;
        case 0x1fd990u: goto label_1fd990;
        case 0x1fd994u: goto label_1fd994;
        case 0x1fd998u: goto label_1fd998;
        case 0x1fd99cu: goto label_1fd99c;
        case 0x1fd9a0u: goto label_1fd9a0;
        case 0x1fd9a4u: goto label_1fd9a4;
        case 0x1fd9a8u: goto label_1fd9a8;
        case 0x1fd9acu: goto label_1fd9ac;
        case 0x1fd9b0u: goto label_1fd9b0;
        case 0x1fd9b4u: goto label_1fd9b4;
        case 0x1fd9b8u: goto label_1fd9b8;
        case 0x1fd9bcu: goto label_1fd9bc;
        case 0x1fd9c0u: goto label_1fd9c0;
        case 0x1fd9c4u: goto label_1fd9c4;
        case 0x1fd9c8u: goto label_1fd9c8;
        case 0x1fd9ccu: goto label_1fd9cc;
        case 0x1fd9d0u: goto label_1fd9d0;
        case 0x1fd9d4u: goto label_1fd9d4;
        case 0x1fd9d8u: goto label_1fd9d8;
        case 0x1fd9dcu: goto label_1fd9dc;
        case 0x1fd9e0u: goto label_1fd9e0;
        case 0x1fd9e4u: goto label_1fd9e4;
        case 0x1fd9e8u: goto label_1fd9e8;
        case 0x1fd9ecu: goto label_1fd9ec;
        case 0x1fd9f0u: goto label_1fd9f0;
        case 0x1fd9f4u: goto label_1fd9f4;
        case 0x1fd9f8u: goto label_1fd9f8;
        case 0x1fd9fcu: goto label_1fd9fc;
        case 0x1fda00u: goto label_1fda00;
        case 0x1fda04u: goto label_1fda04;
        case 0x1fda08u: goto label_1fda08;
        case 0x1fda0cu: goto label_1fda0c;
        case 0x1fda10u: goto label_1fda10;
        case 0x1fda14u: goto label_1fda14;
        case 0x1fda18u: goto label_1fda18;
        case 0x1fda1cu: goto label_1fda1c;
        case 0x1fda20u: goto label_1fda20;
        case 0x1fda24u: goto label_1fda24;
        case 0x1fda28u: goto label_1fda28;
        case 0x1fda2cu: goto label_1fda2c;
        case 0x1fda30u: goto label_1fda30;
        case 0x1fda34u: goto label_1fda34;
        case 0x1fda38u: goto label_1fda38;
        case 0x1fda3cu: goto label_1fda3c;
        case 0x1fda40u: goto label_1fda40;
        case 0x1fda44u: goto label_1fda44;
        case 0x1fda48u: goto label_1fda48;
        case 0x1fda4cu: goto label_1fda4c;
        case 0x1fda50u: goto label_1fda50;
        case 0x1fda54u: goto label_1fda54;
        case 0x1fda58u: goto label_1fda58;
        case 0x1fda5cu: goto label_1fda5c;
        case 0x1fda60u: goto label_1fda60;
        case 0x1fda64u: goto label_1fda64;
        case 0x1fda68u: goto label_1fda68;
        case 0x1fda6cu: goto label_1fda6c;
        case 0x1fda70u: goto label_1fda70;
        case 0x1fda74u: goto label_1fda74;
        case 0x1fda78u: goto label_1fda78;
        case 0x1fda7cu: goto label_1fda7c;
        case 0x1fda80u: goto label_1fda80;
        case 0x1fda84u: goto label_1fda84;
        case 0x1fda88u: goto label_1fda88;
        case 0x1fda8cu: goto label_1fda8c;
        case 0x1fda90u: goto label_1fda90;
        case 0x1fda94u: goto label_1fda94;
        case 0x1fda98u: goto label_1fda98;
        case 0x1fda9cu: goto label_1fda9c;
        case 0x1fdaa0u: goto label_1fdaa0;
        case 0x1fdaa4u: goto label_1fdaa4;
        case 0x1fdaa8u: goto label_1fdaa8;
        case 0x1fdaacu: goto label_1fdaac;
        case 0x1fdab0u: goto label_1fdab0;
        case 0x1fdab4u: goto label_1fdab4;
        case 0x1fdab8u: goto label_1fdab8;
        case 0x1fdabcu: goto label_1fdabc;
        case 0x1fdac0u: goto label_1fdac0;
        case 0x1fdac4u: goto label_1fdac4;
        case 0x1fdac8u: goto label_1fdac8;
        case 0x1fdaccu: goto label_1fdacc;
        case 0x1fdad0u: goto label_1fdad0;
        case 0x1fdad4u: goto label_1fdad4;
        case 0x1fdad8u: goto label_1fdad8;
        case 0x1fdadcu: goto label_1fdadc;
        case 0x1fdae0u: goto label_1fdae0;
        case 0x1fdae4u: goto label_1fdae4;
        case 0x1fdae8u: goto label_1fdae8;
        case 0x1fdaecu: goto label_1fdaec;
        case 0x1fdaf0u: goto label_1fdaf0;
        case 0x1fdaf4u: goto label_1fdaf4;
        case 0x1fdaf8u: goto label_1fdaf8;
        case 0x1fdafcu: goto label_1fdafc;
        default: break;
    }

    ctx->pc = 0x1fd0d0u;

label_1fd0d0:
    // 0x1fd0d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1fd0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1fd0d4:
    // 0x1fd0d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1fd0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1fd0d8:
    // 0x1fd0d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fd0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1fd0dc:
    // 0x1fd0dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fd0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fd0e0:
    // 0x1fd0e0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1fd0e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fd0e4:
    // 0x1fd0e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fd0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fd0e8:
    // 0x1fd0e8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1fd0e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fd0ec:
    // 0x1fd0ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fd0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fd0f0:
    // 0x1fd0f0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1fd0f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fd0f4:
    // 0x1fd0f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fd0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fd0f8:
    // 0x1fd0f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fd0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fd0fc:
    // 0x1fd0fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fd0fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fd100:
    // 0x1fd100: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x1fd100u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fd104:
    // 0x1fd104: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fd104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fd108:
    // 0x1fd108: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1fd108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fd10c:
    // 0x1fd10c: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1fd10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1fd110:
    // 0x1fd110: 0xc0a456c  jal         func_2915B0
label_1fd114:
    if (ctx->pc == 0x1FD114u) {
        ctx->pc = 0x1FD114u;
            // 0x1fd114: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x1FD118u;
        goto label_1fd118;
    }
    ctx->pc = 0x1FD110u;
    SET_GPR_U32(ctx, 31, 0x1FD118u);
    ctx->pc = 0x1FD114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD110u;
            // 0x1fd114: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2915B0u;
    if (runtime->hasFunction(0x2915B0u)) {
        auto targetFn = runtime->lookupFunction(0x2915B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD118u; }
        if (ctx->pc != 0x1FD118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002915B0_0x2915b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD118u; }
        if (ctx->pc != 0x1FD118u) { return; }
    }
    ctx->pc = 0x1FD118u;
label_1fd118:
    // 0x1fd118: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1fd118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fd11c:
    // 0x1fd11c: 0xafb0007c  sw          $s0, 0x7C($sp)
    ctx->pc = 0x1fd11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 16));
label_1fd120:
    // 0x1fd120: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1fd120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1fd124:
    // 0x1fd124: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1fd124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fd128:
    // 0x1fd128: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1fd128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1fd12c:
    // 0x1fd12c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1fd12cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fd130:
    // 0x1fd130: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fd130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fd134:
    // 0x1fd134: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1fd134u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fd138:
    // 0x1fd138: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1fd138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_1fd13c:
    // 0x1fd13c: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1fd13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_1fd140:
    // 0x1fd140: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1fd140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1fd144:
    // 0x1fd144: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fd144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fd148:
    // 0x1fd148: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1fd148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1fd14c:
    // 0x1fd14c: 0x320f809  jalr        $t9
label_1fd150:
    if (ctx->pc == 0x1FD150u) {
        ctx->pc = 0x1FD150u;
            // 0x1fd150: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1FD154u;
        goto label_1fd154;
    }
    ctx->pc = 0x1FD14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FD154u);
        ctx->pc = 0x1FD150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD14Cu;
            // 0x1fd150: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD154u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD154u; }
            if (ctx->pc != 0x1FD154u) { return; }
        }
        }
    }
    ctx->pc = 0x1FD154u;
label_1fd154:
    // 0x1fd154: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1fd154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1fd158:
    // 0x1fd158: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fd158u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fd15c:
    // 0x1fd15c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fd15cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fd160:
    // 0x1fd160: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fd160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fd164:
    // 0x1fd164: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fd164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd168:
    // 0x1fd168: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fd168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd16c:
    // 0x1fd16c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fd16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd170:
    // 0x1fd170: 0x3e00008  jr          $ra
label_1fd174:
    if (ctx->pc == 0x1FD174u) {
        ctx->pc = 0x1FD174u;
            // 0x1fd174: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1FD178u;
        goto label_1fd178;
    }
    ctx->pc = 0x1FD170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD170u;
            // 0x1fd174: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD178u;
label_1fd178:
    // 0x1fd178: 0x0  nop
    ctx->pc = 0x1fd178u;
    // NOP
label_1fd17c:
    // 0x1fd17c: 0x0  nop
    ctx->pc = 0x1fd17cu;
    // NOP
label_1fd180:
    // 0x1fd180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fd184:
    // 0x1fd184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd188:
    // 0x1fd188: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1fd188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1fd18c:
    // 0x1fd18c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fd18cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fd190:
    // 0x1fd190: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1fd190u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1fd194:
    // 0x1fd194: 0x320f809  jalr        $t9
label_1fd198:
    if (ctx->pc == 0x1FD198u) {
        ctx->pc = 0x1FD19Cu;
        goto label_1fd19c;
    }
    ctx->pc = 0x1FD194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FD19Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD19Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD19Cu; }
            if (ctx->pc != 0x1FD19Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FD19Cu;
label_1fd19c:
    // 0x1fd19c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd1a0:
    // 0x1fd1a0: 0x3e00008  jr          $ra
label_1fd1a4:
    if (ctx->pc == 0x1FD1A4u) {
        ctx->pc = 0x1FD1A4u;
            // 0x1fd1a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FD1A8u;
        goto label_1fd1a8;
    }
    ctx->pc = 0x1FD1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD1A0u;
            // 0x1fd1a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD1A8u;
label_1fd1a8:
    // 0x1fd1a8: 0x0  nop
    ctx->pc = 0x1fd1a8u;
    // NOP
label_1fd1ac:
    // 0x1fd1ac: 0x0  nop
    ctx->pc = 0x1fd1acu;
    // NOP
label_1fd1b0:
    // 0x1fd1b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fd1b4:
    // 0x1fd1b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd1b8:
    // 0x1fd1b8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1fd1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1fd1bc:
    // 0x1fd1bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fd1bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fd1c0:
    // 0x1fd1c0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1fd1c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1fd1c4:
    // 0x1fd1c4: 0x320f809  jalr        $t9
label_1fd1c8:
    if (ctx->pc == 0x1FD1C8u) {
        ctx->pc = 0x1FD1CCu;
        goto label_1fd1cc;
    }
    ctx->pc = 0x1FD1C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FD1CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD1CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD1CCu; }
            if (ctx->pc != 0x1FD1CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1FD1CCu;
label_1fd1cc:
    // 0x1fd1cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd1d0:
    // 0x1fd1d0: 0x3e00008  jr          $ra
label_1fd1d4:
    if (ctx->pc == 0x1FD1D4u) {
        ctx->pc = 0x1FD1D4u;
            // 0x1fd1d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FD1D8u;
        goto label_1fd1d8;
    }
    ctx->pc = 0x1FD1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD1D0u;
            // 0x1fd1d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD1D8u;
label_1fd1d8:
    // 0x1fd1d8: 0x0  nop
    ctx->pc = 0x1fd1d8u;
    // NOP
label_1fd1dc:
    // 0x1fd1dc: 0x0  nop
    ctx->pc = 0x1fd1dcu;
    // NOP
label_1fd1e0:
    // 0x1fd1e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fd1e4:
    // 0x1fd1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd1e8:
    // 0x1fd1e8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1fd1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1fd1ec:
    // 0x1fd1ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fd1ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fd1f0:
    // 0x1fd1f0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1fd1f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1fd1f4:
    // 0x1fd1f4: 0x320f809  jalr        $t9
label_1fd1f8:
    if (ctx->pc == 0x1FD1F8u) {
        ctx->pc = 0x1FD1FCu;
        goto label_1fd1fc;
    }
    ctx->pc = 0x1FD1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FD1FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD1FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD1FCu; }
            if (ctx->pc != 0x1FD1FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1FD1FCu;
label_1fd1fc:
    // 0x1fd1fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd200:
    // 0x1fd200: 0x3e00008  jr          $ra
label_1fd204:
    if (ctx->pc == 0x1FD204u) {
        ctx->pc = 0x1FD204u;
            // 0x1fd204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FD208u;
        goto label_1fd208;
    }
    ctx->pc = 0x1FD200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD200u;
            // 0x1fd204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD208u;
label_1fd208:
    // 0x1fd208: 0x0  nop
    ctx->pc = 0x1fd208u;
    // NOP
label_1fd20c:
    // 0x1fd20c: 0x0  nop
    ctx->pc = 0x1fd20cu;
    // NOP
label_1fd210:
    // 0x1fd210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fd214:
    // 0x1fd214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd218:
    // 0x1fd218: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1fd218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1fd21c:
    // 0x1fd21c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fd21cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fd220:
    // 0x1fd220: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1fd220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1fd224:
    // 0x1fd224: 0x320f809  jalr        $t9
label_1fd228:
    if (ctx->pc == 0x1FD228u) {
        ctx->pc = 0x1FD22Cu;
        goto label_1fd22c;
    }
    ctx->pc = 0x1FD224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FD22Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD22Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD22Cu; }
            if (ctx->pc != 0x1FD22Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FD22Cu;
label_1fd22c:
    // 0x1fd22c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd230:
    // 0x1fd230: 0x3e00008  jr          $ra
label_1fd234:
    if (ctx->pc == 0x1FD234u) {
        ctx->pc = 0x1FD234u;
            // 0x1fd234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FD238u;
        goto label_1fd238;
    }
    ctx->pc = 0x1FD230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD230u;
            // 0x1fd234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD238u;
label_1fd238:
    // 0x1fd238: 0x0  nop
    ctx->pc = 0x1fd238u;
    // NOP
label_1fd23c:
    // 0x1fd23c: 0x0  nop
    ctx->pc = 0x1fd23cu;
    // NOP
label_1fd240:
    // 0x1fd240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fd244:
    // 0x1fd244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd248:
    // 0x1fd248: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1fd248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1fd24c:
    // 0x1fd24c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fd24cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fd250:
    // 0x1fd250: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1fd250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1fd254:
    // 0x1fd254: 0x320f809  jalr        $t9
label_1fd258:
    if (ctx->pc == 0x1FD258u) {
        ctx->pc = 0x1FD25Cu;
        goto label_1fd25c;
    }
    ctx->pc = 0x1FD254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FD25Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD25Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD25Cu; }
            if (ctx->pc != 0x1FD25Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FD25Cu;
label_1fd25c:
    // 0x1fd25c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd260:
    // 0x1fd260: 0x3e00008  jr          $ra
label_1fd264:
    if (ctx->pc == 0x1FD264u) {
        ctx->pc = 0x1FD264u;
            // 0x1fd264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FD268u;
        goto label_1fd268;
    }
    ctx->pc = 0x1FD260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD260u;
            // 0x1fd264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD268u;
label_1fd268:
    // 0x1fd268: 0x0  nop
    ctx->pc = 0x1fd268u;
    // NOP
label_1fd26c:
    // 0x1fd26c: 0x0  nop
    ctx->pc = 0x1fd26cu;
    // NOP
label_1fd270:
    // 0x1fd270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fd274:
    // 0x1fd274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fd274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fd278:
    // 0x1fd278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fd278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fd27c:
    // 0x1fd27c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fd280:
    // 0x1fd280: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
label_1fd284:
    if (ctx->pc == 0x1FD284u) {
        ctx->pc = 0x1FD284u;
            // 0x1fd284: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD288u;
        goto label_1fd288;
    }
    ctx->pc = 0x1FD280u;
    {
        const bool branch_taken_0x1fd280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd280) {
            ctx->pc = 0x1FD284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD280u;
            // 0x1fd284: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FD310u;
            goto label_1fd310;
        }
    }
    ctx->pc = 0x1FD288u;
label_1fd288:
    // 0x1fd288: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fd288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fd28c:
    // 0x1fd28c: 0x2442df00  addiu       $v0, $v0, -0x2100
    ctx->pc = 0x1fd28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958848));
label_1fd290:
    // 0x1fd290: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_1fd294:
    if (ctx->pc == 0x1FD294u) {
        ctx->pc = 0x1FD294u;
            // 0x1fd294: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FD298u;
        goto label_1fd298;
    }
    ctx->pc = 0x1FD290u;
    {
        const bool branch_taken_0x1fd290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD290u;
            // 0x1fd294: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd290) {
            ctx->pc = 0x1FD2E4u;
            goto label_1fd2e4;
        }
    }
    ctx->pc = 0x1FD298u;
label_1fd298:
    // 0x1fd298: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fd298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fd29c:
    // 0x1fd29c: 0x2442df40  addiu       $v0, $v0, -0x20C0
    ctx->pc = 0x1fd29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958912));
label_1fd2a0:
    // 0x1fd2a0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1fd2a4:
    if (ctx->pc == 0x1FD2A4u) {
        ctx->pc = 0x1FD2A4u;
            // 0x1fd2a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FD2A8u;
        goto label_1fd2a8;
    }
    ctx->pc = 0x1FD2A0u;
    {
        const bool branch_taken_0x1fd2a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD2A0u;
            // 0x1fd2a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2a0) {
            ctx->pc = 0x1FD2E4u;
            goto label_1fd2e4;
        }
    }
    ctx->pc = 0x1FD2A8u;
label_1fd2a8:
    // 0x1fd2a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fd2ac:
    // 0x1fd2ac: 0x2442dec0  addiu       $v0, $v0, -0x2140
    ctx->pc = 0x1fd2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958784));
label_1fd2b0:
    // 0x1fd2b0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1fd2b4:
    if (ctx->pc == 0x1FD2B4u) {
        ctx->pc = 0x1FD2B4u;
            // 0x1fd2b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FD2B8u;
        goto label_1fd2b8;
    }
    ctx->pc = 0x1FD2B0u;
    {
        const bool branch_taken_0x1fd2b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD2B0u;
            // 0x1fd2b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2b0) {
            ctx->pc = 0x1FD2E4u;
            goto label_1fd2e4;
        }
    }
    ctx->pc = 0x1FD2B8u;
label_1fd2b8:
    // 0x1fd2b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fd2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fd2bc:
    // 0x1fd2bc: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1fd2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1fd2c0:
    // 0x1fd2c0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1fd2c4:
    if (ctx->pc == 0x1FD2C4u) {
        ctx->pc = 0x1FD2C4u;
            // 0x1fd2c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FD2C8u;
        goto label_1fd2c8;
    }
    ctx->pc = 0x1FD2C0u;
    {
        const bool branch_taken_0x1fd2c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD2C0u;
            // 0x1fd2c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2c0) {
            ctx->pc = 0x1FD2E4u;
            goto label_1fd2e4;
        }
    }
    ctx->pc = 0x1FD2C8u;
label_1fd2c8:
    // 0x1fd2c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fd2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fd2cc:
    // 0x1fd2cc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1fd2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1fd2d0:
    // 0x1fd2d0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1fd2d4:
    if (ctx->pc == 0x1FD2D4u) {
        ctx->pc = 0x1FD2D4u;
            // 0x1fd2d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FD2D8u;
        goto label_1fd2d8;
    }
    ctx->pc = 0x1FD2D0u;
    {
        const bool branch_taken_0x1fd2d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD2D0u;
            // 0x1fd2d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2d0) {
            ctx->pc = 0x1FD2E4u;
            goto label_1fd2e4;
        }
    }
    ctx->pc = 0x1FD2D8u;
label_1fd2d8:
    // 0x1fd2d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fd2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fd2dc:
    // 0x1fd2dc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1fd2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1fd2e0:
    // 0x1fd2e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fd2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fd2e4:
    // 0x1fd2e4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1fd2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1fd2e8:
    // 0x1fd2e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1fd2e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1fd2ec:
    // 0x1fd2ec: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1fd2f0:
    if (ctx->pc == 0x1FD2F0u) {
        ctx->pc = 0x1FD2F4u;
        goto label_1fd2f4;
    }
    ctx->pc = 0x1FD2ECu;
    {
        const bool branch_taken_0x1fd2ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fd2ec) {
            ctx->pc = 0x1FD30Cu;
            goto label_1fd30c;
        }
    }
    ctx->pc = 0x1FD2F4u;
label_1fd2f4:
    // 0x1fd2f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fd2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fd2f8:
    // 0x1fd2f8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1fd2f8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1fd2fc:
    // 0x1fd2fc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1fd2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1fd300:
    // 0x1fd300: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd304:
    // 0x1fd304: 0xc0a7ab4  jal         func_29EAD0
label_1fd308:
    if (ctx->pc == 0x1FD308u) {
        ctx->pc = 0x1FD308u;
            // 0x1fd308: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1FD30Cu;
        goto label_1fd30c;
    }
    ctx->pc = 0x1FD304u;
    SET_GPR_U32(ctx, 31, 0x1FD30Cu);
    ctx->pc = 0x1FD308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD304u;
            // 0x1fd308: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD30Cu; }
        if (ctx->pc != 0x1FD30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD30Cu; }
        if (ctx->pc != 0x1FD30Cu) { return; }
    }
    ctx->pc = 0x1FD30Cu;
label_1fd30c:
    // 0x1fd30c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fd30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd310:
    // 0x1fd310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd314:
    // 0x1fd314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fd314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd318:
    // 0x1fd318: 0x3e00008  jr          $ra
label_1fd31c:
    if (ctx->pc == 0x1FD31Cu) {
        ctx->pc = 0x1FD31Cu;
            // 0x1fd31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FD320u;
        goto label_1fd320;
    }
    ctx->pc = 0x1FD318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD318u;
            // 0x1fd31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD320u;
label_1fd320:
    // 0x1fd320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fd320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fd324:
    // 0x1fd324: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1fd324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fd328:
    // 0x1fd328: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fd328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1fd32c:
    // 0x1fd32c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1fd32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fd330:
    // 0x1fd330: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fd330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fd334:
    // 0x1fd334: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1fd334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd338:
    // 0x1fd338: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fd338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fd33c:
    // 0x1fd33c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1fd33cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fd340:
    // 0x1fd340: 0x8d110000  lw          $s1, 0x0($t0)
    ctx->pc = 0x1fd340u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1fd344:
    // 0x1fd344: 0xc5143030  lwc1        $f20, 0x3030($t0)
    ctx->pc = 0x1fd344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fd348:
    // 0x1fd348: 0xc07f230  jal         func_1FC8C0
label_1fd34c:
    if (ctx->pc == 0x1FD34Cu) {
        ctx->pc = 0x1FD34Cu;
            // 0x1fd34c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD350u;
        goto label_1fd350;
    }
    ctx->pc = 0x1FD348u;
    SET_GPR_U32(ctx, 31, 0x1FD350u);
    ctx->pc = 0x1FD34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD348u;
            // 0x1fd34c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC8C0u;
    if (runtime->hasFunction(0x1FC8C0u)) {
        auto targetFn = runtime->lookupFunction(0x1FC8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD350u; }
        if (ctx->pc != 0x1FD350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FC8C0_0x1fc8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD350u; }
        if (ctx->pc != 0x1FD350u) { return; }
    }
    ctx->pc = 0x1FD350u;
label_1fd350:
    // 0x1fd350: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fd350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fd354:
    // 0x1fd354: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x1fd354u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fd358:
    // 0x1fd358: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_1fd35c:
    if (ctx->pc == 0x1FD35Cu) {
        ctx->pc = 0x1FD360u;
        goto label_1fd360;
    }
    ctx->pc = 0x1FD358u;
    {
        const bool branch_taken_0x1fd358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd358) {
            ctx->pc = 0x1FD3F8u;
            goto label_1fd3f8;
        }
    }
    ctx->pc = 0x1FD360u;
label_1fd360:
    // 0x1fd360: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1fd360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fd364:
    // 0x1fd364: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1fd364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd368:
    // 0x1fd368: 0xc623001c  lwc1        $f3, 0x1C($s1)
    ctx->pc = 0x1fd368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fd36c:
    // 0x1fd36c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1fd36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd370:
    // 0x1fd370: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fd370u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fd374:
    // 0x1fd374: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1fd374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1fd378:
    // 0x1fd378: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1fd378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1fd37c:
    // 0x1fd37c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1fd37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd380:
    // 0x1fd380: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1fd380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd384:
    // 0x1fd384: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fd384u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fd388:
    // 0x1fd388: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1fd388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1fd38c:
    // 0x1fd38c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1fd38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1fd390:
    // 0x1fd390: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1fd390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd394:
    // 0x1fd394: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1fd394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd398:
    // 0x1fd398: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fd398u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fd39c:
    // 0x1fd39c: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1fd39cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1fd3a0:
    // 0x1fd3a0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1fd3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1fd3a4:
    // 0x1fd3a4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1fd3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd3a8:
    // 0x1fd3a8: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1fd3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd3ac:
    // 0x1fd3ac: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fd3acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fd3b0:
    // 0x1fd3b0: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1fd3b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1fd3b4:
    // 0x1fd3b4: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1fd3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1fd3b8:
    // 0x1fd3b8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1fd3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd3bc:
    // 0x1fd3bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fd3bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1fd3c0:
    // 0x1fd3c0: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1fd3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1fd3c4:
    // 0x1fd3c4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1fd3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd3c8:
    // 0x1fd3c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fd3c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1fd3cc:
    // 0x1fd3cc: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1fd3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1fd3d0:
    // 0x1fd3d0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1fd3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd3d4:
    // 0x1fd3d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fd3d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1fd3d8:
    // 0x1fd3d8: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1fd3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1fd3dc:
    // 0x1fd3dc: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x1fd3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd3e0:
    // 0x1fd3e0: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1fd3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1fd3e4:
    // 0x1fd3e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fd3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fd3e8:
    // 0x1fd3e8: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1fd3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1fd3ec:
    // 0x1fd3ec: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1fd3ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fd3f0:
    // 0x1fd3f0: 0x5460ffdd  bnel        $v1, $zero, . + 4 + (-0x23 << 2)
label_1fd3f4:
    if (ctx->pc == 0x1FD3F4u) {
        ctx->pc = 0x1FD3F4u;
            // 0x1fd3f4: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1FD3F8u;
        goto label_1fd3f8;
    }
    ctx->pc = 0x1FD3F0u;
    {
        const bool branch_taken_0x1fd3f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd3f0) {
            ctx->pc = 0x1FD3F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD3F0u;
            // 0x1fd3f4: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FD368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fd368;
        }
    }
    ctx->pc = 0x1FD3F8u;
label_1fd3f8:
    // 0x1fd3f8: 0xc6003030  lwc1        $f0, 0x3030($s0)
    ctx->pc = 0x1fd3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd3fc:
    // 0x1fd3fc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1fd3fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fd400:
    // 0x1fd400: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
label_1fd404:
    if (ctx->pc == 0x1FD404u) {
        ctx->pc = 0x1FD404u;
            // 0x1fd404: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1FD408u;
        goto label_1fd408;
    }
    ctx->pc = 0x1FD400u;
    {
        const bool branch_taken_0x1fd400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fd400) {
            ctx->pc = 0x1FD404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD400u;
            // 0x1fd404: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FD4A8u;
            goto label_1fd4a8;
        }
    }
    ctx->pc = 0x1FD408u;
label_1fd408:
    // 0x1fd408: 0xc6003020  lwc1        $f0, 0x3020($s0)
    ctx->pc = 0x1fd408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd40c:
    // 0x1fd40c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fd40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fd410:
    // 0x1fd410: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fd410u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1fd414:
    // 0x1fd414: 0xe6003020  swc1        $f0, 0x3020($s0)
    ctx->pc = 0x1fd414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12320), bits); }
label_1fd418:
    // 0x1fd418: 0xc6003024  lwc1        $f0, 0x3024($s0)
    ctx->pc = 0x1fd418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd41c:
    // 0x1fd41c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fd41cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1fd420:
    // 0x1fd420: 0xe6003024  swc1        $f0, 0x3024($s0)
    ctx->pc = 0x1fd420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12324), bits); }
label_1fd424:
    // 0x1fd424: 0xc6003028  lwc1        $f0, 0x3028($s0)
    ctx->pc = 0x1fd424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd428:
    // 0x1fd428: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fd428u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1fd42c:
    // 0x1fd42c: 0xe6003028  swc1        $f0, 0x3028($s0)
    ctx->pc = 0x1fd42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12328), bits); }
label_1fd430:
    // 0x1fd430: 0xc600302c  lwc1        $f0, 0x302C($s0)
    ctx->pc = 0x1fd430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd434:
    // 0x1fd434: 0xe600302c  swc1        $f0, 0x302C($s0)
    ctx->pc = 0x1fd434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12332), bits); }
label_1fd438:
    // 0x1fd438: 0x92053042  lbu         $a1, 0x3042($s0)
    ctx->pc = 0x1fd438u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12354)));
label_1fd43c:
    // 0x1fd43c: 0x92043043  lbu         $a0, 0x3043($s0)
    ctx->pc = 0x1fd43cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12355)));
label_1fd440:
    // 0x1fd440: 0xa2043042  sb          $a0, 0x3042($s0)
    ctx->pc = 0x1fd440u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12354), (uint8_t)GPR_U32(ctx, 4));
label_1fd444:
    // 0x1fd444: 0xa2053043  sb          $a1, 0x3043($s0)
    ctx->pc = 0x1fd444u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12355), (uint8_t)GPR_U32(ctx, 5));
label_1fd448:
    // 0x1fd448: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1fd448u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1fd44c:
    // 0x1fd44c: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1fd44cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1fd450:
    // 0x1fd450: 0xa2043040  sb          $a0, 0x3040($s0)
    ctx->pc = 0x1fd450u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12352), (uint8_t)GPR_U32(ctx, 4));
label_1fd454:
    // 0x1fd454: 0xa2053041  sb          $a1, 0x3041($s0)
    ctx->pc = 0x1fd454u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12353), (uint8_t)GPR_U32(ctx, 5));
label_1fd458:
    // 0x1fd458: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1fd458u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1fd45c:
    // 0x1fd45c: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1fd45cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1fd460:
    // 0x1fd460: 0x96063038  lhu         $a2, 0x3038($s0)
    ctx->pc = 0x1fd460u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12344)));
label_1fd464:
    // 0x1fd464: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1fd464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1fd468:
    // 0x1fd468: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fd468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1fd46c:
    // 0x1fd46c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1fd46cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1fd470:
    // 0x1fd470: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1fd470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1fd474:
    // 0x1fd474: 0x94a43038  lhu         $a0, 0x3038($a1)
    ctx->pc = 0x1fd474u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12344)));
label_1fd478:
    // 0x1fd478: 0xa6043038  sh          $a0, 0x3038($s0)
    ctx->pc = 0x1fd478u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12344), (uint16_t)GPR_U32(ctx, 4));
label_1fd47c:
    // 0x1fd47c: 0xa4a63038  sh          $a2, 0x3038($a1)
    ctx->pc = 0x1fd47cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12344), (uint16_t)GPR_U32(ctx, 6));
label_1fd480:
    // 0x1fd480: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1fd480u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1fd484:
    // 0x1fd484: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1fd484u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1fd488:
    // 0x1fd488: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1fd488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1fd48c:
    // 0x1fd48c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1fd490:
    if (ctx->pc == 0x1FD490u) {
        ctx->pc = 0x1FD494u;
        goto label_1fd494;
    }
    ctx->pc = 0x1FD48Cu;
    {
        const bool branch_taken_0x1fd48c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fd48c) {
            ctx->pc = 0x1FD4A4u;
            goto label_1fd4a4;
        }
    }
    ctx->pc = 0x1FD494u;
label_1fd494:
    // 0x1fd494: 0x9604303a  lhu         $a0, 0x303A($s0)
    ctx->pc = 0x1fd494u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12346)));
label_1fd498:
    // 0x1fd498: 0x9603303c  lhu         $v1, 0x303C($s0)
    ctx->pc = 0x1fd498u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12348)));
label_1fd49c:
    // 0x1fd49c: 0xa603303a  sh          $v1, 0x303A($s0)
    ctx->pc = 0x1fd49cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12346), (uint16_t)GPR_U32(ctx, 3));
label_1fd4a0:
    // 0x1fd4a0: 0xa604303c  sh          $a0, 0x303C($s0)
    ctx->pc = 0x1fd4a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12348), (uint16_t)GPR_U32(ctx, 4));
label_1fd4a4:
    // 0x1fd4a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fd4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fd4a8:
    // 0x1fd4a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1fd4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fd4ac:
    // 0x1fd4ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fd4acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd4b0:
    // 0x1fd4b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fd4b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd4b4:
    // 0x1fd4b4: 0x3e00008  jr          $ra
label_1fd4b8:
    if (ctx->pc == 0x1FD4B8u) {
        ctx->pc = 0x1FD4B8u;
            // 0x1fd4b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1FD4BCu;
        goto label_1fd4bc;
    }
    ctx->pc = 0x1FD4B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4B4u;
            // 0x1fd4b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD4BCu;
label_1fd4bc:
    // 0x1fd4bc: 0x0  nop
    ctx->pc = 0x1fd4bcu;
    // NOP
label_1fd4c0:
    // 0x1fd4c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fd4c4:
    // 0x1fd4c4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1fd4c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fd4c8:
    // 0x1fd4c8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1fd4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fd4cc:
    // 0x1fd4cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd4d0:
    // 0x1fd4d0: 0xc07f434  jal         func_1FD0D0
label_1fd4d4:
    if (ctx->pc == 0x1FD4D4u) {
        ctx->pc = 0x1FD4D4u;
            // 0x1fd4d4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD4D8u;
        goto label_1fd4d8;
    }
    ctx->pc = 0x1FD4D0u;
    SET_GPR_U32(ctx, 31, 0x1FD4D8u);
    ctx->pc = 0x1FD4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4D0u;
            // 0x1fd4d4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD0D0u;
    goto label_1fd0d0;
    ctx->pc = 0x1FD4D8u;
label_1fd4d8:
    // 0x1fd4d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd4dc:
    // 0x1fd4dc: 0x3e00008  jr          $ra
label_1fd4e0:
    if (ctx->pc == 0x1FD4E0u) {
        ctx->pc = 0x1FD4E0u;
            // 0x1fd4e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FD4E4u;
        goto label_1fd4e4;
    }
    ctx->pc = 0x1FD4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4DCu;
            // 0x1fd4e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD4E4u;
label_1fd4e4:
    // 0x1fd4e4: 0x0  nop
    ctx->pc = 0x1fd4e4u;
    // NOP
label_1fd4e8:
    // 0x1fd4e8: 0x0  nop
    ctx->pc = 0x1fd4e8u;
    // NOP
label_1fd4ec:
    // 0x1fd4ec: 0x0  nop
    ctx->pc = 0x1fd4ecu;
    // NOP
label_1fd4f0:
    // 0x1fd4f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1fd4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1fd4f4:
    // 0x1fd4f4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1fd4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1fd4f8:
    // 0x1fd4f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd4fc:
    // 0x1fd4fc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1fd4fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fd500:
    // 0x1fd500: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1fd500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fd504:
    // 0x1fd504: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1fd504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1fd508:
    // 0x1fd508: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fd508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fd50c:
    // 0x1fd50c: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1fd50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
label_1fd510:
    // 0x1fd510: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1fd510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_1fd514:
    // 0x1fd514: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fd518:
    // 0x1fd518: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1fd518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd51c:
    // 0x1fd51c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1fd51cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1fd520:
    // 0x1fd520: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1fd520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1fd524:
    // 0x1fd524: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x1fd524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_1fd528:
    // 0x1fd528: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1fd528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1fd52c:
    // 0x1fd52c: 0xafa4007c  sw          $a0, 0x7C($sp)
    ctx->pc = 0x1fd52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
label_1fd530:
    // 0x1fd530: 0x80c40010  lb          $a0, 0x10($a2)
    ctx->pc = 0x1fd530u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_1fd534:
    // 0x1fd534: 0xa3a40080  sb          $a0, 0x80($sp)
    ctx->pc = 0x1fd534u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 4));
label_1fd538:
    // 0x1fd538: 0xc4c90020  lwc1        $f9, 0x20($a2)
    ctx->pc = 0x1fd538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1fd53c:
    // 0x1fd53c: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1fd53cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1fd540:
    // 0x1fd540: 0xc4c80024  lwc1        $f8, 0x24($a2)
    ctx->pc = 0x1fd540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1fd544:
    // 0x1fd544: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1fd544u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
label_1fd548:
    // 0x1fd548: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1fd548u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1fd54c:
    // 0x1fd54c: 0xc4c70028  lwc1        $f7, 0x28($a2)
    ctx->pc = 0x1fd54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1fd550:
    // 0x1fd550: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1fd550u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
label_1fd554:
    // 0x1fd554: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1fd554u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1fd558:
    // 0x1fd558: 0xc4c6002c  lwc1        $f6, 0x2C($a2)
    ctx->pc = 0x1fd558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fd55c:
    // 0x1fd55c: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1fd55cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
label_1fd560:
    // 0x1fd560: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1fd560u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1fd564:
    // 0x1fd564: 0xc4c50030  lwc1        $f5, 0x30($a2)
    ctx->pc = 0x1fd564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fd568:
    // 0x1fd568: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1fd568u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
label_1fd56c:
    // 0x1fd56c: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1fd56cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1fd570:
    // 0x1fd570: 0xc4c50034  lwc1        $f5, 0x34($a2)
    ctx->pc = 0x1fd570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fd574:
    // 0x1fd574: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1fd574u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1fd578:
    // 0x1fd578: 0x8cc40038  lw          $a0, 0x38($a2)
    ctx->pc = 0x1fd578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_1fd57c:
    // 0x1fd57c: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1fd57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_1fd580:
    // 0x1fd580: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1fd580u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1fd584:
    // 0x1fd584: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1fd584u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1fd588:
    // 0x1fd588: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1fd588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1fd58c:
    // 0x1fd58c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1fd58cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1fd590:
    // 0x1fd590: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1fd590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
label_1fd594:
    // 0x1fd594: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1fd594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1fd598:
    // 0x1fd598: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1fd598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1fd59c:
    // 0x1fd59c: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1fd59cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1fd5a0:
    // 0x1fd5a0: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1fd5a0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1fd5a4:
    // 0x1fd5a4: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1fd5a4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1fd5a8:
    // 0x1fd5a8: 0x11000012  beqz        $t0, . + 4 + (0x12 << 2)
label_1fd5ac:
    if (ctx->pc == 0x1FD5ACu) {
        ctx->pc = 0x1FD5ACu;
            // 0x1fd5ac: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x1FD5B0u;
        goto label_1fd5b0;
    }
    ctx->pc = 0x1FD5A8u;
    {
        const bool branch_taken_0x1fd5a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD5A8u;
            // 0x1fd5ac: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5a8) {
            ctx->pc = 0x1FD5F4u;
            goto label_1fd5f4;
        }
    }
    ctx->pc = 0x1FD5B0u;
label_1fd5b0:
    // 0x1fd5b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fd5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fd5b4:
    // 0x1fd5b4: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x1fd5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
label_1fd5b8:
    // 0x1fd5b8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1fd5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1fd5bc:
    // 0x1fd5bc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1fd5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1fd5c0:
    // 0x1fd5c0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1fd5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1fd5c4:
    // 0x1fd5c4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1fd5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fd5c8:
    // 0x1fd5c8: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1fd5c8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1fd5cc:
    // 0x1fd5cc: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1fd5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1fd5d0:
    // 0x1fd5d0: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1fd5d0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1fd5d4:
    // 0x1fd5d4: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1fd5d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fd5d8:
    // 0x1fd5d8: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1fd5d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1fd5dc:
    // 0x1fd5dc: 0xc07f33c  jal         func_1FCCF0
label_1fd5e0:
    if (ctx->pc == 0x1FD5E0u) {
        ctx->pc = 0x1FD5E0u;
            // 0x1fd5e0: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x1FD5E4u;
        goto label_1fd5e4;
    }
    ctx->pc = 0x1FD5DCu;
    SET_GPR_U32(ctx, 31, 0x1FD5E4u);
    ctx->pc = 0x1FD5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD5DCu;
            // 0x1fd5e0: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCCF0u;
    if (runtime->hasFunction(0x1FCCF0u)) {
        auto targetFn = runtime->lookupFunction(0x1FCCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD5E4u; }
        if (ctx->pc != 0x1FD5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCCF0_0x1fccf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD5E4u; }
        if (ctx->pc != 0x1FD5E4u) { return; }
    }
    ctx->pc = 0x1FD5E4u;
label_1fd5e4:
    // 0x1fd5e4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fd5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fd5e8:
    // 0x1fd5e8: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1fd5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1fd5ec:
    // 0x1fd5ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fd5f0:
    if (ctx->pc == 0x1FD5F0u) {
        ctx->pc = 0x1FD5F0u;
            // 0x1fd5f0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x1FD5F4u;
        goto label_1fd5f4;
    }
    ctx->pc = 0x1FD5ECu;
    {
        const bool branch_taken_0x1fd5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD5ECu;
            // 0x1fd5f0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5ec) {
            ctx->pc = 0x1FD60Cu;
            goto label_1fd60c;
        }
    }
    ctx->pc = 0x1FD5F4u;
label_1fd5f4:
    // 0x1fd5f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fd5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fd5f8:
    // 0x1fd5f8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1fd5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fd5fc:
    // 0x1fd5fc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1fd5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1fd600:
    // 0x1fd600: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1fd600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1fd604:
    // 0x1fd604: 0xc07f33c  jal         func_1FCCF0
label_1fd608:
    if (ctx->pc == 0x1FD608u) {
        ctx->pc = 0x1FD608u;
            // 0x1fd608: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD60Cu;
        goto label_1fd60c;
    }
    ctx->pc = 0x1FD604u;
    SET_GPR_U32(ctx, 31, 0x1FD60Cu);
    ctx->pc = 0x1FD608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD604u;
            // 0x1fd608: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCCF0u;
    if (runtime->hasFunction(0x1FCCF0u)) {
        auto targetFn = runtime->lookupFunction(0x1FCCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD60Cu; }
        if (ctx->pc != 0x1FD60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCCF0_0x1fccf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD60Cu; }
        if (ctx->pc != 0x1FD60Cu) { return; }
    }
    ctx->pc = 0x1FD60Cu;
label_1fd60c:
    // 0x1fd60c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fd60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fd610:
    // 0x1fd610: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1fd610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1fd614:
    // 0x1fd614: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1fd614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1fd618:
    // 0x1fd618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd61c:
    // 0x1fd61c: 0x3e00008  jr          $ra
label_1fd620:
    if (ctx->pc == 0x1FD620u) {
        ctx->pc = 0x1FD620u;
            // 0x1fd620: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1FD624u;
        goto label_1fd624;
    }
    ctx->pc = 0x1FD61Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD61Cu;
            // 0x1fd620: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD624u;
label_1fd624:
    // 0x1fd624: 0x0  nop
    ctx->pc = 0x1fd624u;
    // NOP
label_1fd628:
    // 0x1fd628: 0x0  nop
    ctx->pc = 0x1fd628u;
    // NOP
label_1fd62c:
    // 0x1fd62c: 0x0  nop
    ctx->pc = 0x1fd62cu;
    // NOP
label_1fd630:
    // 0x1fd630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fd634:
    // 0x1fd634: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1fd634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1fd638:
    // 0x1fd638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd63c:
    // 0x1fd63c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1fd63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1fd640:
    // 0x1fd640: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1fd640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_1fd644:
    // 0x1fd644: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fd644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fd648:
    // 0x1fd648: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1fd648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fd64c:
    // 0x1fd64c: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1fd64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
label_1fd650:
    // 0x1fd650: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fd650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fd654:
    // 0x1fd654: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1fd654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1fd658:
    // 0x1fd658: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1fd658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fd65c:
    // 0x1fd65c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1fd65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1fd660:
    // 0x1fd660: 0xc07f3a0  jal         func_1FCE80
label_1fd664:
    if (ctx->pc == 0x1FD664u) {
        ctx->pc = 0x1FD664u;
            // 0x1fd664: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FD668u;
        goto label_1fd668;
    }
    ctx->pc = 0x1FD660u;
    SET_GPR_U32(ctx, 31, 0x1FD668u);
    ctx->pc = 0x1FD664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD660u;
            // 0x1fd664: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCE80u;
    if (runtime->hasFunction(0x1FCE80u)) {
        auto targetFn = runtime->lookupFunction(0x1FCE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD668u; }
        if (ctx->pc != 0x1FD668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCE80_0x1fce80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD668u; }
        if (ctx->pc != 0x1FD668u) { return; }
    }
    ctx->pc = 0x1FD668u;
label_1fd668:
    // 0x1fd668: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fd668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fd66c:
    // 0x1fd66c: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1fd66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1fd670:
    // 0x1fd670: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1fd670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1fd674:
    // 0x1fd674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd678:
    // 0x1fd678: 0x3e00008  jr          $ra
label_1fd67c:
    if (ctx->pc == 0x1FD67Cu) {
        ctx->pc = 0x1FD67Cu;
            // 0x1fd67c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FD680u;
        goto label_1fd680;
    }
    ctx->pc = 0x1FD678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD678u;
            // 0x1fd67c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD680u;
label_1fd680:
    // 0x1fd680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fd684:
    // 0x1fd684: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1fd684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1fd688:
    // 0x1fd688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd68c:
    // 0x1fd68c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1fd68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1fd690:
    // 0x1fd690: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1fd690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1fd694:
    // 0x1fd694: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fd694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fd698:
    // 0x1fd698: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1fd698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fd69c:
    // 0x1fd69c: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1fd69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
label_1fd6a0:
    // 0x1fd6a0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1fd6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fd6a4:
    // 0x1fd6a4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1fd6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1fd6a8:
    // 0x1fd6a8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1fd6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fd6ac:
    // 0x1fd6ac: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1fd6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1fd6b0:
    // 0x1fd6b0: 0xc07f374  jal         func_1FCDD0
label_1fd6b4:
    if (ctx->pc == 0x1FD6B4u) {
        ctx->pc = 0x1FD6B4u;
            // 0x1fd6b4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FD6B8u;
        goto label_1fd6b8;
    }
    ctx->pc = 0x1FD6B0u;
    SET_GPR_U32(ctx, 31, 0x1FD6B8u);
    ctx->pc = 0x1FD6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD6B0u;
            // 0x1fd6b4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCDD0u;
    if (runtime->hasFunction(0x1FCDD0u)) {
        auto targetFn = runtime->lookupFunction(0x1FCDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD6B8u; }
        if (ctx->pc != 0x1FD6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCDD0_0x1fcdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD6B8u; }
        if (ctx->pc != 0x1FD6B8u) { return; }
    }
    ctx->pc = 0x1FD6B8u;
label_1fd6b8:
    // 0x1fd6b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fd6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fd6bc:
    // 0x1fd6bc: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1fd6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1fd6c0:
    // 0x1fd6c0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1fd6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1fd6c4:
    // 0x1fd6c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd6c8:
    // 0x1fd6c8: 0x3e00008  jr          $ra
label_1fd6cc:
    if (ctx->pc == 0x1FD6CCu) {
        ctx->pc = 0x1FD6CCu;
            // 0x1fd6cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FD6D0u;
        goto label_1fd6d0;
    }
    ctx->pc = 0x1FD6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD6C8u;
            // 0x1fd6cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD6D0u;
label_1fd6d0:
    // 0x1fd6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fd6d4:
    // 0x1fd6d4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1fd6d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fd6d8:
    // 0x1fd6d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd6dc:
    // 0x1fd6dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fd6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fd6e0:
    // 0x1fd6e0: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1fd6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_1fd6e4:
    // 0x1fd6e4: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1fd6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
label_1fd6e8:
    // 0x1fd6e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fd6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fd6ec:
    // 0x1fd6ec: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1fd6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1fd6f0:
    // 0x1fd6f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1fd6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1fd6f4:
    // 0x1fd6f4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1fd6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fd6f8:
    // 0x1fd6f8: 0xc07f400  jal         func_1FD000
label_1fd6fc:
    if (ctx->pc == 0x1FD6FCu) {
        ctx->pc = 0x1FD6FCu;
            // 0x1fd6fc: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1FD700u;
        goto label_1fd700;
    }
    ctx->pc = 0x1FD6F8u;
    SET_GPR_U32(ctx, 31, 0x1FD700u);
    ctx->pc = 0x1FD6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD6F8u;
            // 0x1fd6fc: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD000u;
    if (runtime->hasFunction(0x1FD000u)) {
        auto targetFn = runtime->lookupFunction(0x1FD000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD700u; }
        if (ctx->pc != 0x1FD700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD000_0x1fd000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD700u; }
        if (ctx->pc != 0x1FD700u) { return; }
    }
    ctx->pc = 0x1FD700u;
label_1fd700:
    // 0x1fd700: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fd700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fd704:
    // 0x1fd704: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1fd704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1fd708:
    // 0x1fd708: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1fd708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1fd70c:
    // 0x1fd70c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd710:
    // 0x1fd710: 0x3e00008  jr          $ra
label_1fd714:
    if (ctx->pc == 0x1FD714u) {
        ctx->pc = 0x1FD714u;
            // 0x1fd714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FD718u;
        goto label_1fd718;
    }
    ctx->pc = 0x1FD710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD710u;
            // 0x1fd714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD718u;
label_1fd718:
    // 0x1fd718: 0x0  nop
    ctx->pc = 0x1fd718u;
    // NOP
label_1fd71c:
    // 0x1fd71c: 0x0  nop
    ctx->pc = 0x1fd71cu;
    // NOP
label_1fd720:
    // 0x1fd720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fd724:
    // 0x1fd724: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1fd724u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fd728:
    // 0x1fd728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd72c:
    // 0x1fd72c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fd72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fd730:
    // 0x1fd730: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1fd730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1fd734:
    // 0x1fd734: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1fd734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
label_1fd738:
    // 0x1fd738: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1fd738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fd73c:
    // 0x1fd73c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1fd73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1fd740:
    // 0x1fd740: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1fd740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1fd744:
    // 0x1fd744: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1fd744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fd748:
    // 0x1fd748: 0xc07f3d4  jal         func_1FCF50
label_1fd74c:
    if (ctx->pc == 0x1FD74Cu) {
        ctx->pc = 0x1FD74Cu;
            // 0x1fd74c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1FD750u;
        goto label_1fd750;
    }
    ctx->pc = 0x1FD748u;
    SET_GPR_U32(ctx, 31, 0x1FD750u);
    ctx->pc = 0x1FD74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD748u;
            // 0x1fd74c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCF50u;
    if (runtime->hasFunction(0x1FCF50u)) {
        auto targetFn = runtime->lookupFunction(0x1FCF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD750u; }
        if (ctx->pc != 0x1FD750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCF50_0x1fcf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD750u; }
        if (ctx->pc != 0x1FD750u) { return; }
    }
    ctx->pc = 0x1FD750u;
label_1fd750:
    // 0x1fd750: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fd750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fd754:
    // 0x1fd754: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1fd754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1fd758:
    // 0x1fd758: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1fd758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1fd75c:
    // 0x1fd75c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd760:
    // 0x1fd760: 0x3e00008  jr          $ra
label_1fd764:
    if (ctx->pc == 0x1FD764u) {
        ctx->pc = 0x1FD764u;
            // 0x1fd764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FD768u;
        goto label_1fd768;
    }
    ctx->pc = 0x1FD760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD760u;
            // 0x1fd764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD768u;
label_1fd768:
    // 0x1fd768: 0x0  nop
    ctx->pc = 0x1fd768u;
    // NOP
label_1fd76c:
    // 0x1fd76c: 0x0  nop
    ctx->pc = 0x1fd76cu;
    // NOP
label_1fd770:
    // 0x1fd770: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1fd770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1fd774:
    // 0x1fd774: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1fd774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1fd778:
    // 0x1fd778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd77c:
    // 0x1fd77c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1fd77cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fd780:
    // 0x1fd780: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1fd780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fd784:
    // 0x1fd784: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1fd784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1fd788:
    // 0x1fd788: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fd788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fd78c:
    // 0x1fd78c: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1fd78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
label_1fd790:
    // 0x1fd790: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1fd790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_1fd794:
    // 0x1fd794: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fd798:
    // 0x1fd798: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1fd798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd79c:
    // 0x1fd79c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1fd79cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1fd7a0:
    // 0x1fd7a0: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1fd7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1fd7a4:
    // 0x1fd7a4: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x1fd7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
label_1fd7a8:
    // 0x1fd7a8: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x1fd7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1fd7ac:
    // 0x1fd7ac: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x1fd7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
label_1fd7b0:
    // 0x1fd7b0: 0x80e50010  lb          $a1, 0x10($a3)
    ctx->pc = 0x1fd7b0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_1fd7b4:
    // 0x1fd7b4: 0xa3a50080  sb          $a1, 0x80($sp)
    ctx->pc = 0x1fd7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 5));
label_1fd7b8:
    // 0x1fd7b8: 0xc4e90020  lwc1        $f9, 0x20($a3)
    ctx->pc = 0x1fd7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1fd7bc:
    // 0x1fd7bc: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1fd7bcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1fd7c0:
    // 0x1fd7c0: 0xc4e80024  lwc1        $f8, 0x24($a3)
    ctx->pc = 0x1fd7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1fd7c4:
    // 0x1fd7c4: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1fd7c4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
label_1fd7c8:
    // 0x1fd7c8: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1fd7c8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1fd7cc:
    // 0x1fd7cc: 0xc4e70028  lwc1        $f7, 0x28($a3)
    ctx->pc = 0x1fd7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1fd7d0:
    // 0x1fd7d0: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1fd7d0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
label_1fd7d4:
    // 0x1fd7d4: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1fd7d4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1fd7d8:
    // 0x1fd7d8: 0xc4e6002c  lwc1        $f6, 0x2C($a3)
    ctx->pc = 0x1fd7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fd7dc:
    // 0x1fd7dc: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1fd7dcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
label_1fd7e0:
    // 0x1fd7e0: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1fd7e0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1fd7e4:
    // 0x1fd7e4: 0xc4e50030  lwc1        $f5, 0x30($a3)
    ctx->pc = 0x1fd7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fd7e8:
    // 0x1fd7e8: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1fd7e8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
label_1fd7ec:
    // 0x1fd7ec: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1fd7ecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1fd7f0:
    // 0x1fd7f0: 0xc4e50034  lwc1        $f5, 0x34($a3)
    ctx->pc = 0x1fd7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fd7f4:
    // 0x1fd7f4: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1fd7f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1fd7f8:
    // 0x1fd7f8: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x1fd7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_1fd7fc:
    // 0x1fd7fc: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x1fd7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_1fd800:
    // 0x1fd800: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1fd800u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1fd804:
    // 0x1fd804: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1fd804u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1fd808:
    // 0x1fd808: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1fd808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1fd80c:
    // 0x1fd80c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1fd80cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1fd810:
    // 0x1fd810: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x1fd810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
label_1fd814:
    // 0x1fd814: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1fd814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1fd818:
    // 0x1fd818: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1fd818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1fd81c:
    // 0x1fd81c: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1fd81cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1fd820:
    // 0x1fd820: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1fd820u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1fd824:
    // 0x1fd824: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1fd824u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1fd828:
    // 0x1fd828: 0x11200012  beqz        $t1, . + 4 + (0x12 << 2)
label_1fd82c:
    if (ctx->pc == 0x1FD82Cu) {
        ctx->pc = 0x1FD82Cu;
            // 0x1fd82c: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x1FD830u;
        goto label_1fd830;
    }
    ctx->pc = 0x1FD828u;
    {
        const bool branch_taken_0x1fd828 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD828u;
            // 0x1fd82c: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd828) {
            ctx->pc = 0x1FD874u;
            goto label_1fd874;
        }
    }
    ctx->pc = 0x1FD830u;
label_1fd830:
    // 0x1fd830: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1fd830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fd834:
    // 0x1fd834: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x1fd834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
label_1fd838:
    // 0x1fd838: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1fd838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1fd83c:
    // 0x1fd83c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1fd83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1fd840:
    // 0x1fd840: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1fd840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1fd844:
    // 0x1fd844: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1fd844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fd848:
    // 0x1fd848: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1fd848u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1fd84c:
    // 0x1fd84c: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1fd84cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1fd850:
    // 0x1fd850: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1fd850u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1fd854:
    // 0x1fd854: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x1fd854u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fd858:
    // 0x1fd858: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1fd858u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1fd85c:
    // 0x1fd85c: 0xc07f30c  jal         func_1FCC30
label_1fd860:
    if (ctx->pc == 0x1FD860u) {
        ctx->pc = 0x1FD860u;
            // 0x1fd860: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x1FD864u;
        goto label_1fd864;
    }
    ctx->pc = 0x1FD85Cu;
    SET_GPR_U32(ctx, 31, 0x1FD864u);
    ctx->pc = 0x1FD860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD85Cu;
            // 0x1fd860: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCC30u;
    if (runtime->hasFunction(0x1FCC30u)) {
        auto targetFn = runtime->lookupFunction(0x1FCC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD864u; }
        if (ctx->pc != 0x1FD864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCC30_0x1fcc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD864u; }
        if (ctx->pc != 0x1FD864u) { return; }
    }
    ctx->pc = 0x1FD864u;
label_1fd864:
    // 0x1fd864: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fd864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fd868:
    // 0x1fd868: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1fd868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1fd86c:
    // 0x1fd86c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fd870:
    if (ctx->pc == 0x1FD870u) {
        ctx->pc = 0x1FD870u;
            // 0x1fd870: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x1FD874u;
        goto label_1fd874;
    }
    ctx->pc = 0x1FD86Cu;
    {
        const bool branch_taken_0x1fd86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD86Cu;
            // 0x1fd870: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd86c) {
            ctx->pc = 0x1FD88Cu;
            goto label_1fd88c;
        }
    }
    ctx->pc = 0x1FD874u;
label_1fd874:
    // 0x1fd874: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1fd874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fd878:
    // 0x1fd878: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1fd878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fd87c:
    // 0x1fd87c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1fd87cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1fd880:
    // 0x1fd880: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1fd880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1fd884:
    // 0x1fd884: 0xc07f30c  jal         func_1FCC30
label_1fd888:
    if (ctx->pc == 0x1FD888u) {
        ctx->pc = 0x1FD888u;
            // 0x1fd888: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD88Cu;
        goto label_1fd88c;
    }
    ctx->pc = 0x1FD884u;
    SET_GPR_U32(ctx, 31, 0x1FD88Cu);
    ctx->pc = 0x1FD888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD884u;
            // 0x1fd888: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCC30u;
    if (runtime->hasFunction(0x1FCC30u)) {
        auto targetFn = runtime->lookupFunction(0x1FCC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD88Cu; }
        if (ctx->pc != 0x1FD88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCC30_0x1fcc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD88Cu; }
        if (ctx->pc != 0x1FD88Cu) { return; }
    }
    ctx->pc = 0x1FD88Cu;
label_1fd88c:
    // 0x1fd88c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fd88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fd890:
    // 0x1fd890: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1fd890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1fd894:
    // 0x1fd894: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1fd894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1fd898:
    // 0x1fd898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd89c:
    // 0x1fd89c: 0x3e00008  jr          $ra
label_1fd8a0:
    if (ctx->pc == 0x1FD8A0u) {
        ctx->pc = 0x1FD8A0u;
            // 0x1fd8a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1FD8A4u;
        goto label_1fd8a4;
    }
    ctx->pc = 0x1FD89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD89Cu;
            // 0x1fd8a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD8A4u;
label_1fd8a4:
    // 0x1fd8a4: 0x0  nop
    ctx->pc = 0x1fd8a4u;
    // NOP
label_1fd8a8:
    // 0x1fd8a8: 0x0  nop
    ctx->pc = 0x1fd8a8u;
    // NOP
label_1fd8ac:
    // 0x1fd8ac: 0x0  nop
    ctx->pc = 0x1fd8acu;
    // NOP
label_1fd8b0:
    // 0x1fd8b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fd8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1fd8b4:
    // 0x1fd8b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fd8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1fd8b8:
    // 0x1fd8b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fd8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fd8bc:
    // 0x1fd8bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fd8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fd8c0:
    // 0x1fd8c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fd8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fd8c4:
    // 0x1fd8c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fd8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fd8c8:
    // 0x1fd8c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fd8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fd8cc:
    // 0x1fd8cc: 0x80a20005  lb          $v0, 0x5($a1)
    ctx->pc = 0x1fd8ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_1fd8d0:
    // 0x1fd8d0: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x1fd8d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1fd8d4:
    // 0x1fd8d4: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1fd8d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fd8d8:
    // 0x1fd8d8: 0x1260007d  beqz        $s3, . + 4 + (0x7D << 2)
label_1fd8dc:
    if (ctx->pc == 0x1FD8DCu) {
        ctx->pc = 0x1FD8DCu;
            // 0x1fd8dc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD8E0u;
        goto label_1fd8e0;
    }
    ctx->pc = 0x1FD8D8u;
    {
        const bool branch_taken_0x1fd8d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD8D8u;
            // 0x1fd8dc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd8d8) {
            ctx->pc = 0x1FDAD0u;
            goto label_1fdad0;
        }
    }
    ctx->pc = 0x1FD8E0u;
label_1fd8e0:
    // 0x1fd8e0: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1fd8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1fd8e4:
    // 0x1fd8e4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1fd8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1fd8e8:
    // 0x1fd8e8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1fd8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1fd8ec:
    // 0x1fd8ec: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1fd8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1fd8f0:
    // 0x1fd8f0: 0x38900  sll         $s1, $v1, 4
    ctx->pc = 0x1fd8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1fd8f4:
    // 0x1fd8f4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1fd8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1fd8f8:
    // 0x1fd8f8: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x1fd8f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fd8fc:
    // 0x1fd8fc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1fd8fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fd900:
    // 0x1fd900: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1fd900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1fd904:
    // 0x1fd904: 0x320f809  jalr        $t9
label_1fd908:
    if (ctx->pc == 0x1FD908u) {
        ctx->pc = 0x1FD908u;
            // 0x1fd908: 0x513021  addu        $a2, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x1FD90Cu;
        goto label_1fd90c;
    }
    ctx->pc = 0x1FD904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FD90Cu);
        ctx->pc = 0x1FD908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD904u;
            // 0x1fd908: 0x513021  addu        $a2, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD90Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD90Cu; }
            if (ctx->pc != 0x1FD90Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FD90Cu;
label_1fd90c:
    // 0x1fd90c: 0x27a2006c  addiu       $v0, $sp, 0x6C
    ctx->pc = 0x1fd90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1fd910:
    // 0x1fd910: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1fd910u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1fd914:
    // 0x1fd914: 0x5040006f  beql        $v0, $zero, . + 4 + (0x6F << 2)
label_1fd918:
    if (ctx->pc == 0x1FD918u) {
        ctx->pc = 0x1FD918u;
            // 0x1fd918: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x1FD91Cu;
        goto label_1fd91c;
    }
    ctx->pc = 0x1FD914u;
    {
        const bool branch_taken_0x1fd914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd914) {
            ctx->pc = 0x1FD918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD914u;
            // 0x1fd918: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDAD4u;
            goto label_1fdad4;
        }
    }
    ctx->pc = 0x1FD91Cu;
label_1fd91c:
    // 0x1fd91c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1fd91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1fd920:
    // 0x1fd920: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x1fd920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1fd924:
    // 0x1fd924: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x1fd924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1fd928:
    // 0x1fd928: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1fd928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1fd92c:
    // 0x1fd92c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fd92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1fd930:
    // 0x1fd930: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1fd930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd934:
    // 0x1fd934: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1fd934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fd938:
    // 0x1fd938: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x1fd938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fd93c:
    // 0x1fd93c: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x1fd93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fd940:
    // 0x1fd940: 0x46001141  sub.s       $f5, $f2, $f0
    ctx->pc = 0x1fd940u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1fd944:
    // 0x1fd944: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1fd944u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1fd948:
    // 0x1fd948: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1fd948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd94c:
    // 0x1fd94c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1fd94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd950:
    // 0x1fd950: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1fd950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fd954:
    // 0x1fd954: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1fd954u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fd958:
    // 0x1fd958: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1fd958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd95c:
    // 0x1fd95c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1fd95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd960:
    // 0x1fd960: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fd960u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fd964:
    // 0x1fd964: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fd964u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fd968:
    // 0x1fd968: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fd968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fd96c:
    // 0x1fd96c: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x1fd96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
label_1fd970:
    // 0x1fd970: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1fd970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd974:
    // 0x1fd974: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1fd974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd978:
    // 0x1fd978: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x1fd978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fd97c:
    // 0x1fd97c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fd97cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fd980:
    // 0x1fd980: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fd980u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fd984:
    // 0x1fd984: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fd984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fd988:
    // 0x1fd988: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x1fd988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
label_1fd98c:
    // 0x1fd98c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1fd98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd990:
    // 0x1fd990: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1fd990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd994:
    // 0x1fd994: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x1fd994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fd998:
    // 0x1fd998: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fd998u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fd99c:
    // 0x1fd99c: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fd99cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fd9a0:
    // 0x1fd9a0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fd9a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fd9a4:
    // 0x1fd9a4: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x1fd9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
label_1fd9a8:
    // 0x1fd9a8: 0xae80001c  sw          $zero, 0x1C($s4)
    ctx->pc = 0x1fd9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
label_1fd9ac:
    // 0x1fd9ac: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1fd9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1fd9b0:
    // 0x1fd9b0: 0xc6040030  lwc1        $f4, 0x30($s0)
    ctx->pc = 0x1fd9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fd9b4:
    // 0x1fd9b4: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x1fd9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fd9b8:
    // 0x1fd9b8: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1fd9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd9bc:
    // 0x1fd9bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fd9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1fd9c0:
    // 0x1fd9c0: 0xc4450010  lwc1        $f5, 0x10($v0)
    ctx->pc = 0x1fd9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fd9c4:
    // 0x1fd9c4: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x1fd9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fd9c8:
    // 0x1fd9c8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1fd9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd9cc:
    // 0x1fd9cc: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x1fd9ccu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1fd9d0:
    // 0x1fd9d0: 0x46021901  sub.s       $f4, $f3, $f2
    ctx->pc = 0x1fd9d0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1fd9d4:
    // 0x1fd9d4: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1fd9d4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fd9d8:
    // 0x1fd9d8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1fd9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd9dc:
    // 0x1fd9dc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1fd9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd9e0:
    // 0x1fd9e0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1fd9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fd9e4:
    // 0x1fd9e4: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fd9e4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fd9e8:
    // 0x1fd9e8: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fd9e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fd9ec:
    // 0x1fd9ec: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fd9ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fd9f0:
    // 0x1fd9f0: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x1fd9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_1fd9f4:
    // 0x1fd9f4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1fd9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fd9f8:
    // 0x1fd9f8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1fd9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fd9fc:
    // 0x1fd9fc: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x1fd9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fda00:
    // 0x1fda00: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fda00u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fda04:
    // 0x1fda04: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fda04u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fda08:
    // 0x1fda08: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fda08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fda0c:
    // 0x1fda0c: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x1fda0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_1fda10:
    // 0x1fda10: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1fda10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fda14:
    // 0x1fda14: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1fda14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fda18:
    // 0x1fda18: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x1fda18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fda1c:
    // 0x1fda1c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fda1cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fda20:
    // 0x1fda20: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fda20u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fda24:
    // 0x1fda24: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fda24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fda28:
    // 0x1fda28: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x1fda28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_1fda2c:
    // 0x1fda2c: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x1fda2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
label_1fda30:
    // 0x1fda30: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1fda30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1fda34:
    // 0x1fda34: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fda34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1fda38:
    // 0x1fda38: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1fda38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1fda3c:
    // 0x1fda3c: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x1fda3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
label_1fda40:
    // 0x1fda40: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1fda40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1fda44:
    // 0x1fda44: 0x8e87000c  lw          $a3, 0xC($s4)
    ctx->pc = 0x1fda44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1fda48:
    // 0x1fda48: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1fda48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1fda4c:
    // 0x1fda4c: 0x320f809  jalr        $t9
label_1fda50:
    if (ctx->pc == 0x1FDA50u) {
        ctx->pc = 0x1FDA50u;
            // 0x1fda50: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA54u;
        goto label_1fda54;
    }
    ctx->pc = 0x1FDA4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FDA54u);
        ctx->pc = 0x1FDA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDA4Cu;
            // 0x1fda50: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FDA54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA54u; }
            if (ctx->pc != 0x1FDA54u) { return; }
        }
        }
    }
    ctx->pc = 0x1FDA54u;
label_1fda54:
    // 0x1fda54: 0x83a20068  lb          $v0, 0x68($sp)
    ctx->pc = 0x1fda54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
label_1fda58:
    // 0x1fda58: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1fda5c:
    if (ctx->pc == 0x1FDA5Cu) {
        ctx->pc = 0x1FDA60u;
        goto label_1fda60;
    }
    ctx->pc = 0x1FDA58u;
    {
        const bool branch_taken_0x1fda58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fda58) {
            ctx->pc = 0x1FDAD0u;
            goto label_1fdad0;
        }
    }
    ctx->pc = 0x1FDA60u;
label_1fda60:
    // 0x1fda60: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1fda60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1fda64:
    // 0x1fda64: 0xac520050  sw          $s2, 0x50($v0)
    ctx->pc = 0x1fda64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 18));
label_1fda68:
    // 0x1fda68: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1fda68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1fda6c:
    // 0x1fda6c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1fda6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fda70:
    // 0x1fda70: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1fda70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fda74:
    // 0x1fda74: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x1fda74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fda78:
    // 0x1fda78: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x1fda78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fda7c:
    // 0x1fda7c: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x1fda7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fda80:
    // 0x1fda80: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1fda80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fda84:
    // 0x1fda84: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fda84u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fda88:
    // 0x1fda88: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fda88u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fda8c:
    // 0x1fda8c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fda8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fda90:
    // 0x1fda90: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1fda90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1fda94:
    // 0x1fda94: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1fda94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fda98:
    // 0x1fda98: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1fda98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fda9c:
    // 0x1fda9c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1fda9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fdaa0:
    // 0x1fdaa0: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fdaa0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fdaa4:
    // 0x1fdaa4: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fdaa4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fdaa8:
    // 0x1fdaa8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fdaa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fdaac:
    // 0x1fdaac: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1fdaacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1fdab0:
    // 0x1fdab0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1fdab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fdab4:
    // 0x1fdab4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1fdab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fdab8:
    // 0x1fdab8: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x1fdab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fdabc:
    // 0x1fdabc: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fdabcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fdac0:
    // 0x1fdac0: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fdac0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fdac4:
    // 0x1fdac4: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fdac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fdac8:
    // 0x1fdac8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1fdac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1fdacc:
    // 0x1fdacc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1fdaccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1fdad0:
    // 0x1fdad0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1fdad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1fdad4:
    // 0x1fdad4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fdad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1fdad8:
    // 0x1fdad8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fdad8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fdadc:
    // 0x1fdadc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fdadcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fdae0:
    // 0x1fdae0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1fdae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fdae4:
    // 0x1fdae4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fdae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fdae8:
    // 0x1fdae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fdae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fdaec:
    // 0x1fdaec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fdaecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fdaf0:
    // 0x1fdaf0: 0x3e00008  jr          $ra
label_1fdaf4:
    if (ctx->pc == 0x1FDAF4u) {
        ctx->pc = 0x1FDAF4u;
            // 0x1fdaf4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1FDAF8u;
        goto label_1fdaf8;
    }
    ctx->pc = 0x1FDAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDAF0u;
            // 0x1fdaf4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FDAF8u;
label_1fdaf8:
    // 0x1fdaf8: 0x0  nop
    ctx->pc = 0x1fdaf8u;
    // NOP
label_1fdafc:
    // 0x1fdafc: 0x0  nop
    ctx->pc = 0x1fdafcu;
    // NOP
}
