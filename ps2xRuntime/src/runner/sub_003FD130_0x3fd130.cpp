#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FD130
// Address: 0x3fd130 - 0x3fda80
void sub_003FD130_0x3fd130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FD130_0x3fd130");
#endif

    switch (ctx->pc) {
        case 0x3fd130u: goto label_3fd130;
        case 0x3fd134u: goto label_3fd134;
        case 0x3fd138u: goto label_3fd138;
        case 0x3fd13cu: goto label_3fd13c;
        case 0x3fd140u: goto label_3fd140;
        case 0x3fd144u: goto label_3fd144;
        case 0x3fd148u: goto label_3fd148;
        case 0x3fd14cu: goto label_3fd14c;
        case 0x3fd150u: goto label_3fd150;
        case 0x3fd154u: goto label_3fd154;
        case 0x3fd158u: goto label_3fd158;
        case 0x3fd15cu: goto label_3fd15c;
        case 0x3fd160u: goto label_3fd160;
        case 0x3fd164u: goto label_3fd164;
        case 0x3fd168u: goto label_3fd168;
        case 0x3fd16cu: goto label_3fd16c;
        case 0x3fd170u: goto label_3fd170;
        case 0x3fd174u: goto label_3fd174;
        case 0x3fd178u: goto label_3fd178;
        case 0x3fd17cu: goto label_3fd17c;
        case 0x3fd180u: goto label_3fd180;
        case 0x3fd184u: goto label_3fd184;
        case 0x3fd188u: goto label_3fd188;
        case 0x3fd18cu: goto label_3fd18c;
        case 0x3fd190u: goto label_3fd190;
        case 0x3fd194u: goto label_3fd194;
        case 0x3fd198u: goto label_3fd198;
        case 0x3fd19cu: goto label_3fd19c;
        case 0x3fd1a0u: goto label_3fd1a0;
        case 0x3fd1a4u: goto label_3fd1a4;
        case 0x3fd1a8u: goto label_3fd1a8;
        case 0x3fd1acu: goto label_3fd1ac;
        case 0x3fd1b0u: goto label_3fd1b0;
        case 0x3fd1b4u: goto label_3fd1b4;
        case 0x3fd1b8u: goto label_3fd1b8;
        case 0x3fd1bcu: goto label_3fd1bc;
        case 0x3fd1c0u: goto label_3fd1c0;
        case 0x3fd1c4u: goto label_3fd1c4;
        case 0x3fd1c8u: goto label_3fd1c8;
        case 0x3fd1ccu: goto label_3fd1cc;
        case 0x3fd1d0u: goto label_3fd1d0;
        case 0x3fd1d4u: goto label_3fd1d4;
        case 0x3fd1d8u: goto label_3fd1d8;
        case 0x3fd1dcu: goto label_3fd1dc;
        case 0x3fd1e0u: goto label_3fd1e0;
        case 0x3fd1e4u: goto label_3fd1e4;
        case 0x3fd1e8u: goto label_3fd1e8;
        case 0x3fd1ecu: goto label_3fd1ec;
        case 0x3fd1f0u: goto label_3fd1f0;
        case 0x3fd1f4u: goto label_3fd1f4;
        case 0x3fd1f8u: goto label_3fd1f8;
        case 0x3fd1fcu: goto label_3fd1fc;
        case 0x3fd200u: goto label_3fd200;
        case 0x3fd204u: goto label_3fd204;
        case 0x3fd208u: goto label_3fd208;
        case 0x3fd20cu: goto label_3fd20c;
        case 0x3fd210u: goto label_3fd210;
        case 0x3fd214u: goto label_3fd214;
        case 0x3fd218u: goto label_3fd218;
        case 0x3fd21cu: goto label_3fd21c;
        case 0x3fd220u: goto label_3fd220;
        case 0x3fd224u: goto label_3fd224;
        case 0x3fd228u: goto label_3fd228;
        case 0x3fd22cu: goto label_3fd22c;
        case 0x3fd230u: goto label_3fd230;
        case 0x3fd234u: goto label_3fd234;
        case 0x3fd238u: goto label_3fd238;
        case 0x3fd23cu: goto label_3fd23c;
        case 0x3fd240u: goto label_3fd240;
        case 0x3fd244u: goto label_3fd244;
        case 0x3fd248u: goto label_3fd248;
        case 0x3fd24cu: goto label_3fd24c;
        case 0x3fd250u: goto label_3fd250;
        case 0x3fd254u: goto label_3fd254;
        case 0x3fd258u: goto label_3fd258;
        case 0x3fd25cu: goto label_3fd25c;
        case 0x3fd260u: goto label_3fd260;
        case 0x3fd264u: goto label_3fd264;
        case 0x3fd268u: goto label_3fd268;
        case 0x3fd26cu: goto label_3fd26c;
        case 0x3fd270u: goto label_3fd270;
        case 0x3fd274u: goto label_3fd274;
        case 0x3fd278u: goto label_3fd278;
        case 0x3fd27cu: goto label_3fd27c;
        case 0x3fd280u: goto label_3fd280;
        case 0x3fd284u: goto label_3fd284;
        case 0x3fd288u: goto label_3fd288;
        case 0x3fd28cu: goto label_3fd28c;
        case 0x3fd290u: goto label_3fd290;
        case 0x3fd294u: goto label_3fd294;
        case 0x3fd298u: goto label_3fd298;
        case 0x3fd29cu: goto label_3fd29c;
        case 0x3fd2a0u: goto label_3fd2a0;
        case 0x3fd2a4u: goto label_3fd2a4;
        case 0x3fd2a8u: goto label_3fd2a8;
        case 0x3fd2acu: goto label_3fd2ac;
        case 0x3fd2b0u: goto label_3fd2b0;
        case 0x3fd2b4u: goto label_3fd2b4;
        case 0x3fd2b8u: goto label_3fd2b8;
        case 0x3fd2bcu: goto label_3fd2bc;
        case 0x3fd2c0u: goto label_3fd2c0;
        case 0x3fd2c4u: goto label_3fd2c4;
        case 0x3fd2c8u: goto label_3fd2c8;
        case 0x3fd2ccu: goto label_3fd2cc;
        case 0x3fd2d0u: goto label_3fd2d0;
        case 0x3fd2d4u: goto label_3fd2d4;
        case 0x3fd2d8u: goto label_3fd2d8;
        case 0x3fd2dcu: goto label_3fd2dc;
        case 0x3fd2e0u: goto label_3fd2e0;
        case 0x3fd2e4u: goto label_3fd2e4;
        case 0x3fd2e8u: goto label_3fd2e8;
        case 0x3fd2ecu: goto label_3fd2ec;
        case 0x3fd2f0u: goto label_3fd2f0;
        case 0x3fd2f4u: goto label_3fd2f4;
        case 0x3fd2f8u: goto label_3fd2f8;
        case 0x3fd2fcu: goto label_3fd2fc;
        case 0x3fd300u: goto label_3fd300;
        case 0x3fd304u: goto label_3fd304;
        case 0x3fd308u: goto label_3fd308;
        case 0x3fd30cu: goto label_3fd30c;
        case 0x3fd310u: goto label_3fd310;
        case 0x3fd314u: goto label_3fd314;
        case 0x3fd318u: goto label_3fd318;
        case 0x3fd31cu: goto label_3fd31c;
        case 0x3fd320u: goto label_3fd320;
        case 0x3fd324u: goto label_3fd324;
        case 0x3fd328u: goto label_3fd328;
        case 0x3fd32cu: goto label_3fd32c;
        case 0x3fd330u: goto label_3fd330;
        case 0x3fd334u: goto label_3fd334;
        case 0x3fd338u: goto label_3fd338;
        case 0x3fd33cu: goto label_3fd33c;
        case 0x3fd340u: goto label_3fd340;
        case 0x3fd344u: goto label_3fd344;
        case 0x3fd348u: goto label_3fd348;
        case 0x3fd34cu: goto label_3fd34c;
        case 0x3fd350u: goto label_3fd350;
        case 0x3fd354u: goto label_3fd354;
        case 0x3fd358u: goto label_3fd358;
        case 0x3fd35cu: goto label_3fd35c;
        case 0x3fd360u: goto label_3fd360;
        case 0x3fd364u: goto label_3fd364;
        case 0x3fd368u: goto label_3fd368;
        case 0x3fd36cu: goto label_3fd36c;
        case 0x3fd370u: goto label_3fd370;
        case 0x3fd374u: goto label_3fd374;
        case 0x3fd378u: goto label_3fd378;
        case 0x3fd37cu: goto label_3fd37c;
        case 0x3fd380u: goto label_3fd380;
        case 0x3fd384u: goto label_3fd384;
        case 0x3fd388u: goto label_3fd388;
        case 0x3fd38cu: goto label_3fd38c;
        case 0x3fd390u: goto label_3fd390;
        case 0x3fd394u: goto label_3fd394;
        case 0x3fd398u: goto label_3fd398;
        case 0x3fd39cu: goto label_3fd39c;
        case 0x3fd3a0u: goto label_3fd3a0;
        case 0x3fd3a4u: goto label_3fd3a4;
        case 0x3fd3a8u: goto label_3fd3a8;
        case 0x3fd3acu: goto label_3fd3ac;
        case 0x3fd3b0u: goto label_3fd3b0;
        case 0x3fd3b4u: goto label_3fd3b4;
        case 0x3fd3b8u: goto label_3fd3b8;
        case 0x3fd3bcu: goto label_3fd3bc;
        case 0x3fd3c0u: goto label_3fd3c0;
        case 0x3fd3c4u: goto label_3fd3c4;
        case 0x3fd3c8u: goto label_3fd3c8;
        case 0x3fd3ccu: goto label_3fd3cc;
        case 0x3fd3d0u: goto label_3fd3d0;
        case 0x3fd3d4u: goto label_3fd3d4;
        case 0x3fd3d8u: goto label_3fd3d8;
        case 0x3fd3dcu: goto label_3fd3dc;
        case 0x3fd3e0u: goto label_3fd3e0;
        case 0x3fd3e4u: goto label_3fd3e4;
        case 0x3fd3e8u: goto label_3fd3e8;
        case 0x3fd3ecu: goto label_3fd3ec;
        case 0x3fd3f0u: goto label_3fd3f0;
        case 0x3fd3f4u: goto label_3fd3f4;
        case 0x3fd3f8u: goto label_3fd3f8;
        case 0x3fd3fcu: goto label_3fd3fc;
        case 0x3fd400u: goto label_3fd400;
        case 0x3fd404u: goto label_3fd404;
        case 0x3fd408u: goto label_3fd408;
        case 0x3fd40cu: goto label_3fd40c;
        case 0x3fd410u: goto label_3fd410;
        case 0x3fd414u: goto label_3fd414;
        case 0x3fd418u: goto label_3fd418;
        case 0x3fd41cu: goto label_3fd41c;
        case 0x3fd420u: goto label_3fd420;
        case 0x3fd424u: goto label_3fd424;
        case 0x3fd428u: goto label_3fd428;
        case 0x3fd42cu: goto label_3fd42c;
        case 0x3fd430u: goto label_3fd430;
        case 0x3fd434u: goto label_3fd434;
        case 0x3fd438u: goto label_3fd438;
        case 0x3fd43cu: goto label_3fd43c;
        case 0x3fd440u: goto label_3fd440;
        case 0x3fd444u: goto label_3fd444;
        case 0x3fd448u: goto label_3fd448;
        case 0x3fd44cu: goto label_3fd44c;
        case 0x3fd450u: goto label_3fd450;
        case 0x3fd454u: goto label_3fd454;
        case 0x3fd458u: goto label_3fd458;
        case 0x3fd45cu: goto label_3fd45c;
        case 0x3fd460u: goto label_3fd460;
        case 0x3fd464u: goto label_3fd464;
        case 0x3fd468u: goto label_3fd468;
        case 0x3fd46cu: goto label_3fd46c;
        case 0x3fd470u: goto label_3fd470;
        case 0x3fd474u: goto label_3fd474;
        case 0x3fd478u: goto label_3fd478;
        case 0x3fd47cu: goto label_3fd47c;
        case 0x3fd480u: goto label_3fd480;
        case 0x3fd484u: goto label_3fd484;
        case 0x3fd488u: goto label_3fd488;
        case 0x3fd48cu: goto label_3fd48c;
        case 0x3fd490u: goto label_3fd490;
        case 0x3fd494u: goto label_3fd494;
        case 0x3fd498u: goto label_3fd498;
        case 0x3fd49cu: goto label_3fd49c;
        case 0x3fd4a0u: goto label_3fd4a0;
        case 0x3fd4a4u: goto label_3fd4a4;
        case 0x3fd4a8u: goto label_3fd4a8;
        case 0x3fd4acu: goto label_3fd4ac;
        case 0x3fd4b0u: goto label_3fd4b0;
        case 0x3fd4b4u: goto label_3fd4b4;
        case 0x3fd4b8u: goto label_3fd4b8;
        case 0x3fd4bcu: goto label_3fd4bc;
        case 0x3fd4c0u: goto label_3fd4c0;
        case 0x3fd4c4u: goto label_3fd4c4;
        case 0x3fd4c8u: goto label_3fd4c8;
        case 0x3fd4ccu: goto label_3fd4cc;
        case 0x3fd4d0u: goto label_3fd4d0;
        case 0x3fd4d4u: goto label_3fd4d4;
        case 0x3fd4d8u: goto label_3fd4d8;
        case 0x3fd4dcu: goto label_3fd4dc;
        case 0x3fd4e0u: goto label_3fd4e0;
        case 0x3fd4e4u: goto label_3fd4e4;
        case 0x3fd4e8u: goto label_3fd4e8;
        case 0x3fd4ecu: goto label_3fd4ec;
        case 0x3fd4f0u: goto label_3fd4f0;
        case 0x3fd4f4u: goto label_3fd4f4;
        case 0x3fd4f8u: goto label_3fd4f8;
        case 0x3fd4fcu: goto label_3fd4fc;
        case 0x3fd500u: goto label_3fd500;
        case 0x3fd504u: goto label_3fd504;
        case 0x3fd508u: goto label_3fd508;
        case 0x3fd50cu: goto label_3fd50c;
        case 0x3fd510u: goto label_3fd510;
        case 0x3fd514u: goto label_3fd514;
        case 0x3fd518u: goto label_3fd518;
        case 0x3fd51cu: goto label_3fd51c;
        case 0x3fd520u: goto label_3fd520;
        case 0x3fd524u: goto label_3fd524;
        case 0x3fd528u: goto label_3fd528;
        case 0x3fd52cu: goto label_3fd52c;
        case 0x3fd530u: goto label_3fd530;
        case 0x3fd534u: goto label_3fd534;
        case 0x3fd538u: goto label_3fd538;
        case 0x3fd53cu: goto label_3fd53c;
        case 0x3fd540u: goto label_3fd540;
        case 0x3fd544u: goto label_3fd544;
        case 0x3fd548u: goto label_3fd548;
        case 0x3fd54cu: goto label_3fd54c;
        case 0x3fd550u: goto label_3fd550;
        case 0x3fd554u: goto label_3fd554;
        case 0x3fd558u: goto label_3fd558;
        case 0x3fd55cu: goto label_3fd55c;
        case 0x3fd560u: goto label_3fd560;
        case 0x3fd564u: goto label_3fd564;
        case 0x3fd568u: goto label_3fd568;
        case 0x3fd56cu: goto label_3fd56c;
        case 0x3fd570u: goto label_3fd570;
        case 0x3fd574u: goto label_3fd574;
        case 0x3fd578u: goto label_3fd578;
        case 0x3fd57cu: goto label_3fd57c;
        case 0x3fd580u: goto label_3fd580;
        case 0x3fd584u: goto label_3fd584;
        case 0x3fd588u: goto label_3fd588;
        case 0x3fd58cu: goto label_3fd58c;
        case 0x3fd590u: goto label_3fd590;
        case 0x3fd594u: goto label_3fd594;
        case 0x3fd598u: goto label_3fd598;
        case 0x3fd59cu: goto label_3fd59c;
        case 0x3fd5a0u: goto label_3fd5a0;
        case 0x3fd5a4u: goto label_3fd5a4;
        case 0x3fd5a8u: goto label_3fd5a8;
        case 0x3fd5acu: goto label_3fd5ac;
        case 0x3fd5b0u: goto label_3fd5b0;
        case 0x3fd5b4u: goto label_3fd5b4;
        case 0x3fd5b8u: goto label_3fd5b8;
        case 0x3fd5bcu: goto label_3fd5bc;
        case 0x3fd5c0u: goto label_3fd5c0;
        case 0x3fd5c4u: goto label_3fd5c4;
        case 0x3fd5c8u: goto label_3fd5c8;
        case 0x3fd5ccu: goto label_3fd5cc;
        case 0x3fd5d0u: goto label_3fd5d0;
        case 0x3fd5d4u: goto label_3fd5d4;
        case 0x3fd5d8u: goto label_3fd5d8;
        case 0x3fd5dcu: goto label_3fd5dc;
        case 0x3fd5e0u: goto label_3fd5e0;
        case 0x3fd5e4u: goto label_3fd5e4;
        case 0x3fd5e8u: goto label_3fd5e8;
        case 0x3fd5ecu: goto label_3fd5ec;
        case 0x3fd5f0u: goto label_3fd5f0;
        case 0x3fd5f4u: goto label_3fd5f4;
        case 0x3fd5f8u: goto label_3fd5f8;
        case 0x3fd5fcu: goto label_3fd5fc;
        case 0x3fd600u: goto label_3fd600;
        case 0x3fd604u: goto label_3fd604;
        case 0x3fd608u: goto label_3fd608;
        case 0x3fd60cu: goto label_3fd60c;
        case 0x3fd610u: goto label_3fd610;
        case 0x3fd614u: goto label_3fd614;
        case 0x3fd618u: goto label_3fd618;
        case 0x3fd61cu: goto label_3fd61c;
        case 0x3fd620u: goto label_3fd620;
        case 0x3fd624u: goto label_3fd624;
        case 0x3fd628u: goto label_3fd628;
        case 0x3fd62cu: goto label_3fd62c;
        case 0x3fd630u: goto label_3fd630;
        case 0x3fd634u: goto label_3fd634;
        case 0x3fd638u: goto label_3fd638;
        case 0x3fd63cu: goto label_3fd63c;
        case 0x3fd640u: goto label_3fd640;
        case 0x3fd644u: goto label_3fd644;
        case 0x3fd648u: goto label_3fd648;
        case 0x3fd64cu: goto label_3fd64c;
        case 0x3fd650u: goto label_3fd650;
        case 0x3fd654u: goto label_3fd654;
        case 0x3fd658u: goto label_3fd658;
        case 0x3fd65cu: goto label_3fd65c;
        case 0x3fd660u: goto label_3fd660;
        case 0x3fd664u: goto label_3fd664;
        case 0x3fd668u: goto label_3fd668;
        case 0x3fd66cu: goto label_3fd66c;
        case 0x3fd670u: goto label_3fd670;
        case 0x3fd674u: goto label_3fd674;
        case 0x3fd678u: goto label_3fd678;
        case 0x3fd67cu: goto label_3fd67c;
        case 0x3fd680u: goto label_3fd680;
        case 0x3fd684u: goto label_3fd684;
        case 0x3fd688u: goto label_3fd688;
        case 0x3fd68cu: goto label_3fd68c;
        case 0x3fd690u: goto label_3fd690;
        case 0x3fd694u: goto label_3fd694;
        case 0x3fd698u: goto label_3fd698;
        case 0x3fd69cu: goto label_3fd69c;
        case 0x3fd6a0u: goto label_3fd6a0;
        case 0x3fd6a4u: goto label_3fd6a4;
        case 0x3fd6a8u: goto label_3fd6a8;
        case 0x3fd6acu: goto label_3fd6ac;
        case 0x3fd6b0u: goto label_3fd6b0;
        case 0x3fd6b4u: goto label_3fd6b4;
        case 0x3fd6b8u: goto label_3fd6b8;
        case 0x3fd6bcu: goto label_3fd6bc;
        case 0x3fd6c0u: goto label_3fd6c0;
        case 0x3fd6c4u: goto label_3fd6c4;
        case 0x3fd6c8u: goto label_3fd6c8;
        case 0x3fd6ccu: goto label_3fd6cc;
        case 0x3fd6d0u: goto label_3fd6d0;
        case 0x3fd6d4u: goto label_3fd6d4;
        case 0x3fd6d8u: goto label_3fd6d8;
        case 0x3fd6dcu: goto label_3fd6dc;
        case 0x3fd6e0u: goto label_3fd6e0;
        case 0x3fd6e4u: goto label_3fd6e4;
        case 0x3fd6e8u: goto label_3fd6e8;
        case 0x3fd6ecu: goto label_3fd6ec;
        case 0x3fd6f0u: goto label_3fd6f0;
        case 0x3fd6f4u: goto label_3fd6f4;
        case 0x3fd6f8u: goto label_3fd6f8;
        case 0x3fd6fcu: goto label_3fd6fc;
        case 0x3fd700u: goto label_3fd700;
        case 0x3fd704u: goto label_3fd704;
        case 0x3fd708u: goto label_3fd708;
        case 0x3fd70cu: goto label_3fd70c;
        case 0x3fd710u: goto label_3fd710;
        case 0x3fd714u: goto label_3fd714;
        case 0x3fd718u: goto label_3fd718;
        case 0x3fd71cu: goto label_3fd71c;
        case 0x3fd720u: goto label_3fd720;
        case 0x3fd724u: goto label_3fd724;
        case 0x3fd728u: goto label_3fd728;
        case 0x3fd72cu: goto label_3fd72c;
        case 0x3fd730u: goto label_3fd730;
        case 0x3fd734u: goto label_3fd734;
        case 0x3fd738u: goto label_3fd738;
        case 0x3fd73cu: goto label_3fd73c;
        case 0x3fd740u: goto label_3fd740;
        case 0x3fd744u: goto label_3fd744;
        case 0x3fd748u: goto label_3fd748;
        case 0x3fd74cu: goto label_3fd74c;
        case 0x3fd750u: goto label_3fd750;
        case 0x3fd754u: goto label_3fd754;
        case 0x3fd758u: goto label_3fd758;
        case 0x3fd75cu: goto label_3fd75c;
        case 0x3fd760u: goto label_3fd760;
        case 0x3fd764u: goto label_3fd764;
        case 0x3fd768u: goto label_3fd768;
        case 0x3fd76cu: goto label_3fd76c;
        case 0x3fd770u: goto label_3fd770;
        case 0x3fd774u: goto label_3fd774;
        case 0x3fd778u: goto label_3fd778;
        case 0x3fd77cu: goto label_3fd77c;
        case 0x3fd780u: goto label_3fd780;
        case 0x3fd784u: goto label_3fd784;
        case 0x3fd788u: goto label_3fd788;
        case 0x3fd78cu: goto label_3fd78c;
        case 0x3fd790u: goto label_3fd790;
        case 0x3fd794u: goto label_3fd794;
        case 0x3fd798u: goto label_3fd798;
        case 0x3fd79cu: goto label_3fd79c;
        case 0x3fd7a0u: goto label_3fd7a0;
        case 0x3fd7a4u: goto label_3fd7a4;
        case 0x3fd7a8u: goto label_3fd7a8;
        case 0x3fd7acu: goto label_3fd7ac;
        case 0x3fd7b0u: goto label_3fd7b0;
        case 0x3fd7b4u: goto label_3fd7b4;
        case 0x3fd7b8u: goto label_3fd7b8;
        case 0x3fd7bcu: goto label_3fd7bc;
        case 0x3fd7c0u: goto label_3fd7c0;
        case 0x3fd7c4u: goto label_3fd7c4;
        case 0x3fd7c8u: goto label_3fd7c8;
        case 0x3fd7ccu: goto label_3fd7cc;
        case 0x3fd7d0u: goto label_3fd7d0;
        case 0x3fd7d4u: goto label_3fd7d4;
        case 0x3fd7d8u: goto label_3fd7d8;
        case 0x3fd7dcu: goto label_3fd7dc;
        case 0x3fd7e0u: goto label_3fd7e0;
        case 0x3fd7e4u: goto label_3fd7e4;
        case 0x3fd7e8u: goto label_3fd7e8;
        case 0x3fd7ecu: goto label_3fd7ec;
        case 0x3fd7f0u: goto label_3fd7f0;
        case 0x3fd7f4u: goto label_3fd7f4;
        case 0x3fd7f8u: goto label_3fd7f8;
        case 0x3fd7fcu: goto label_3fd7fc;
        case 0x3fd800u: goto label_3fd800;
        case 0x3fd804u: goto label_3fd804;
        case 0x3fd808u: goto label_3fd808;
        case 0x3fd80cu: goto label_3fd80c;
        case 0x3fd810u: goto label_3fd810;
        case 0x3fd814u: goto label_3fd814;
        case 0x3fd818u: goto label_3fd818;
        case 0x3fd81cu: goto label_3fd81c;
        case 0x3fd820u: goto label_3fd820;
        case 0x3fd824u: goto label_3fd824;
        case 0x3fd828u: goto label_3fd828;
        case 0x3fd82cu: goto label_3fd82c;
        case 0x3fd830u: goto label_3fd830;
        case 0x3fd834u: goto label_3fd834;
        case 0x3fd838u: goto label_3fd838;
        case 0x3fd83cu: goto label_3fd83c;
        case 0x3fd840u: goto label_3fd840;
        case 0x3fd844u: goto label_3fd844;
        case 0x3fd848u: goto label_3fd848;
        case 0x3fd84cu: goto label_3fd84c;
        case 0x3fd850u: goto label_3fd850;
        case 0x3fd854u: goto label_3fd854;
        case 0x3fd858u: goto label_3fd858;
        case 0x3fd85cu: goto label_3fd85c;
        case 0x3fd860u: goto label_3fd860;
        case 0x3fd864u: goto label_3fd864;
        case 0x3fd868u: goto label_3fd868;
        case 0x3fd86cu: goto label_3fd86c;
        case 0x3fd870u: goto label_3fd870;
        case 0x3fd874u: goto label_3fd874;
        case 0x3fd878u: goto label_3fd878;
        case 0x3fd87cu: goto label_3fd87c;
        case 0x3fd880u: goto label_3fd880;
        case 0x3fd884u: goto label_3fd884;
        case 0x3fd888u: goto label_3fd888;
        case 0x3fd88cu: goto label_3fd88c;
        case 0x3fd890u: goto label_3fd890;
        case 0x3fd894u: goto label_3fd894;
        case 0x3fd898u: goto label_3fd898;
        case 0x3fd89cu: goto label_3fd89c;
        case 0x3fd8a0u: goto label_3fd8a0;
        case 0x3fd8a4u: goto label_3fd8a4;
        case 0x3fd8a8u: goto label_3fd8a8;
        case 0x3fd8acu: goto label_3fd8ac;
        case 0x3fd8b0u: goto label_3fd8b0;
        case 0x3fd8b4u: goto label_3fd8b4;
        case 0x3fd8b8u: goto label_3fd8b8;
        case 0x3fd8bcu: goto label_3fd8bc;
        case 0x3fd8c0u: goto label_3fd8c0;
        case 0x3fd8c4u: goto label_3fd8c4;
        case 0x3fd8c8u: goto label_3fd8c8;
        case 0x3fd8ccu: goto label_3fd8cc;
        case 0x3fd8d0u: goto label_3fd8d0;
        case 0x3fd8d4u: goto label_3fd8d4;
        case 0x3fd8d8u: goto label_3fd8d8;
        case 0x3fd8dcu: goto label_3fd8dc;
        case 0x3fd8e0u: goto label_3fd8e0;
        case 0x3fd8e4u: goto label_3fd8e4;
        case 0x3fd8e8u: goto label_3fd8e8;
        case 0x3fd8ecu: goto label_3fd8ec;
        case 0x3fd8f0u: goto label_3fd8f0;
        case 0x3fd8f4u: goto label_3fd8f4;
        case 0x3fd8f8u: goto label_3fd8f8;
        case 0x3fd8fcu: goto label_3fd8fc;
        case 0x3fd900u: goto label_3fd900;
        case 0x3fd904u: goto label_3fd904;
        case 0x3fd908u: goto label_3fd908;
        case 0x3fd90cu: goto label_3fd90c;
        case 0x3fd910u: goto label_3fd910;
        case 0x3fd914u: goto label_3fd914;
        case 0x3fd918u: goto label_3fd918;
        case 0x3fd91cu: goto label_3fd91c;
        case 0x3fd920u: goto label_3fd920;
        case 0x3fd924u: goto label_3fd924;
        case 0x3fd928u: goto label_3fd928;
        case 0x3fd92cu: goto label_3fd92c;
        case 0x3fd930u: goto label_3fd930;
        case 0x3fd934u: goto label_3fd934;
        case 0x3fd938u: goto label_3fd938;
        case 0x3fd93cu: goto label_3fd93c;
        case 0x3fd940u: goto label_3fd940;
        case 0x3fd944u: goto label_3fd944;
        case 0x3fd948u: goto label_3fd948;
        case 0x3fd94cu: goto label_3fd94c;
        case 0x3fd950u: goto label_3fd950;
        case 0x3fd954u: goto label_3fd954;
        case 0x3fd958u: goto label_3fd958;
        case 0x3fd95cu: goto label_3fd95c;
        case 0x3fd960u: goto label_3fd960;
        case 0x3fd964u: goto label_3fd964;
        case 0x3fd968u: goto label_3fd968;
        case 0x3fd96cu: goto label_3fd96c;
        case 0x3fd970u: goto label_3fd970;
        case 0x3fd974u: goto label_3fd974;
        case 0x3fd978u: goto label_3fd978;
        case 0x3fd97cu: goto label_3fd97c;
        case 0x3fd980u: goto label_3fd980;
        case 0x3fd984u: goto label_3fd984;
        case 0x3fd988u: goto label_3fd988;
        case 0x3fd98cu: goto label_3fd98c;
        case 0x3fd990u: goto label_3fd990;
        case 0x3fd994u: goto label_3fd994;
        case 0x3fd998u: goto label_3fd998;
        case 0x3fd99cu: goto label_3fd99c;
        case 0x3fd9a0u: goto label_3fd9a0;
        case 0x3fd9a4u: goto label_3fd9a4;
        case 0x3fd9a8u: goto label_3fd9a8;
        case 0x3fd9acu: goto label_3fd9ac;
        case 0x3fd9b0u: goto label_3fd9b0;
        case 0x3fd9b4u: goto label_3fd9b4;
        case 0x3fd9b8u: goto label_3fd9b8;
        case 0x3fd9bcu: goto label_3fd9bc;
        case 0x3fd9c0u: goto label_3fd9c0;
        case 0x3fd9c4u: goto label_3fd9c4;
        case 0x3fd9c8u: goto label_3fd9c8;
        case 0x3fd9ccu: goto label_3fd9cc;
        case 0x3fd9d0u: goto label_3fd9d0;
        case 0x3fd9d4u: goto label_3fd9d4;
        case 0x3fd9d8u: goto label_3fd9d8;
        case 0x3fd9dcu: goto label_3fd9dc;
        case 0x3fd9e0u: goto label_3fd9e0;
        case 0x3fd9e4u: goto label_3fd9e4;
        case 0x3fd9e8u: goto label_3fd9e8;
        case 0x3fd9ecu: goto label_3fd9ec;
        case 0x3fd9f0u: goto label_3fd9f0;
        case 0x3fd9f4u: goto label_3fd9f4;
        case 0x3fd9f8u: goto label_3fd9f8;
        case 0x3fd9fcu: goto label_3fd9fc;
        case 0x3fda00u: goto label_3fda00;
        case 0x3fda04u: goto label_3fda04;
        case 0x3fda08u: goto label_3fda08;
        case 0x3fda0cu: goto label_3fda0c;
        case 0x3fda10u: goto label_3fda10;
        case 0x3fda14u: goto label_3fda14;
        case 0x3fda18u: goto label_3fda18;
        case 0x3fda1cu: goto label_3fda1c;
        case 0x3fda20u: goto label_3fda20;
        case 0x3fda24u: goto label_3fda24;
        case 0x3fda28u: goto label_3fda28;
        case 0x3fda2cu: goto label_3fda2c;
        case 0x3fda30u: goto label_3fda30;
        case 0x3fda34u: goto label_3fda34;
        case 0x3fda38u: goto label_3fda38;
        case 0x3fda3cu: goto label_3fda3c;
        case 0x3fda40u: goto label_3fda40;
        case 0x3fda44u: goto label_3fda44;
        case 0x3fda48u: goto label_3fda48;
        case 0x3fda4cu: goto label_3fda4c;
        case 0x3fda50u: goto label_3fda50;
        case 0x3fda54u: goto label_3fda54;
        case 0x3fda58u: goto label_3fda58;
        case 0x3fda5cu: goto label_3fda5c;
        case 0x3fda60u: goto label_3fda60;
        case 0x3fda64u: goto label_3fda64;
        case 0x3fda68u: goto label_3fda68;
        case 0x3fda6cu: goto label_3fda6c;
        case 0x3fda70u: goto label_3fda70;
        case 0x3fda74u: goto label_3fda74;
        case 0x3fda78u: goto label_3fda78;
        case 0x3fda7cu: goto label_3fda7c;
        default: break;
    }

    ctx->pc = 0x3fd130u;

label_3fd130:
    // 0x3fd130: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3fd130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3fd134:
    // 0x3fd134: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3fd134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3fd138:
    // 0x3fd138: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3fd138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3fd13c:
    // 0x3fd13c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3fd13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3fd140:
    // 0x3fd140: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3fd140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3fd144:
    // 0x3fd144: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3fd144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3fd148:
    // 0x3fd148: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3fd148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3fd14c:
    // 0x3fd14c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3fd14cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3fd150:
    // 0x3fd150: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x3fd150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_3fd154:
    // 0x3fd154: 0x8c728a08  lw          $s2, -0x75F8($v1)
    ctx->pc = 0x3fd154u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3fd158:
    // 0x3fd158: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x3fd158u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3fd15c:
    // 0x3fd15c: 0x1020023d  beqz        $at, . + 4 + (0x23D << 2)
label_3fd160:
    if (ctx->pc == 0x3FD160u) {
        ctx->pc = 0x3FD160u;
            // 0x3fd160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FD164u;
        goto label_3fd164;
    }
    ctx->pc = 0x3FD15Cu;
    {
        const bool branch_taken_0x3fd15c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD15Cu;
            // 0x3fd160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd15c) {
            ctx->pc = 0x3FDA54u;
            goto label_3fda54;
        }
    }
    ctx->pc = 0x3FD164u;
label_3fd164:
    // 0x3fd164: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3fd164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3fd168:
    // 0x3fd168: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3fd168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3fd16c:
    // 0x3fd16c: 0x24a5b860  addiu       $a1, $a1, -0x47A0
    ctx->pc = 0x3fd16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948960));
label_3fd170:
    // 0x3fd170: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3fd170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3fd174:
    // 0x3fd174: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3fd174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3fd178:
    // 0x3fd178: 0x600008  jr          $v1
label_3fd17c:
    if (ctx->pc == 0x3FD17Cu) {
        ctx->pc = 0x3FD180u;
        goto label_3fd180;
    }
    ctx->pc = 0x3FD178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3FD180u: goto label_3fd180;
            case 0x3FD18Cu: goto label_3fd18c;
            case 0x3FD3E8u: goto label_3fd3e8;
            case 0x3FD630u: goto label_3fd630;
            case 0x3FD860u: goto label_3fd860;
            case 0x3FDA28u: goto label_3fda28;
            case 0x3FDA54u: goto label_3fda54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3FD180u;
label_3fd180:
    // 0x3fd180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fd180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fd184:
    // 0x3fd184: 0x10000233  b           . + 4 + (0x233 << 2)
label_3fd188:
    if (ctx->pc == 0x3FD188u) {
        ctx->pc = 0x3FD188u;
            // 0x3fd188: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->pc = 0x3FD18Cu;
        goto label_3fd18c;
    }
    ctx->pc = 0x3FD184u;
    {
        const bool branch_taken_0x3fd184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD184u;
            // 0x3fd188: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd184) {
            ctx->pc = 0x3FDA54u;
            goto label_3fda54;
        }
    }
    ctx->pc = 0x3FD18Cu;
label_3fd18c:
    // 0x3fd18c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x3fd18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_3fd190:
    // 0x3fd190: 0xc04cc04  jal         func_133010
label_3fd194:
    if (ctx->pc == 0x3FD194u) {
        ctx->pc = 0x3FD194u;
            // 0x3fd194: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x3FD198u;
        goto label_3fd198;
    }
    ctx->pc = 0x3FD190u;
    SET_GPR_U32(ctx, 31, 0x3FD198u);
    ctx->pc = 0x3FD194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD190u;
            // 0x3fd194: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD198u; }
        if (ctx->pc != 0x3FD198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD198u; }
        if (ctx->pc != 0x3FD198u) { return; }
    }
    ctx->pc = 0x3FD198u;
label_3fd198:
    // 0x3fd198: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x3fd198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_3fd19c:
    // 0x3fd19c: 0xc04cc04  jal         func_133010
label_3fd1a0:
    if (ctx->pc == 0x3FD1A0u) {
        ctx->pc = 0x3FD1A0u;
            // 0x3fd1a0: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x3FD1A4u;
        goto label_3fd1a4;
    }
    ctx->pc = 0x3FD19Cu;
    SET_GPR_U32(ctx, 31, 0x3FD1A4u);
    ctx->pc = 0x3FD1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD19Cu;
            // 0x3fd1a0: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD1A4u; }
        if (ctx->pc != 0x3FD1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD1A4u; }
        if (ctx->pc != 0x3FD1A4u) { return; }
    }
    ctx->pc = 0x3FD1A4u;
label_3fd1a4:
    // 0x3fd1a4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3fd1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3fd1a8:
    // 0x3fd1a8: 0xc04cc04  jal         func_133010
label_3fd1ac:
    if (ctx->pc == 0x3FD1ACu) {
        ctx->pc = 0x3FD1ACu;
            // 0x3fd1ac: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x3FD1B0u;
        goto label_3fd1b0;
    }
    ctx->pc = 0x3FD1A8u;
    SET_GPR_U32(ctx, 31, 0x3FD1B0u);
    ctx->pc = 0x3FD1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD1A8u;
            // 0x3fd1ac: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD1B0u; }
        if (ctx->pc != 0x3FD1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD1B0u; }
        if (ctx->pc != 0x3FD1B0u) { return; }
    }
    ctx->pc = 0x3FD1B0u;
label_3fd1b0:
    // 0x3fd1b0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3fd1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3fd1b4:
    // 0x3fd1b4: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x3fd1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_3fd1b8:
    // 0x3fd1b8: 0xc04cc90  jal         func_133240
label_3fd1bc:
    if (ctx->pc == 0x3FD1BCu) {
        ctx->pc = 0x3FD1BCu;
            // 0x3fd1bc: 0x26060080  addiu       $a2, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x3FD1C0u;
        goto label_3fd1c0;
    }
    ctx->pc = 0x3FD1B8u;
    SET_GPR_U32(ctx, 31, 0x3FD1C0u);
    ctx->pc = 0x3FD1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD1B8u;
            // 0x3fd1bc: 0x26060080  addiu       $a2, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD1C0u; }
        if (ctx->pc != 0x3FD1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD1C0u; }
        if (ctx->pc != 0x3FD1C0u) { return; }
    }
    ctx->pc = 0x3FD1C0u;
label_3fd1c0:
    // 0x3fd1c0: 0xc04cc14  jal         func_133050
label_3fd1c4:
    if (ctx->pc == 0x3FD1C4u) {
        ctx->pc = 0x3FD1C4u;
            // 0x3fd1c4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x3FD1C8u;
        goto label_3fd1c8;
    }
    ctx->pc = 0x3FD1C0u;
    SET_GPR_U32(ctx, 31, 0x3FD1C8u);
    ctx->pc = 0x3FD1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD1C0u;
            // 0x3fd1c4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD1C8u; }
        if (ctx->pc != 0x3FD1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD1C8u; }
        if (ctx->pc != 0x3FD1C8u) { return; }
    }
    ctx->pc = 0x3FD1C8u;
label_3fd1c8:
    // 0x3fd1c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3fd1c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3fd1cc:
    // 0x3fd1cc: 0x8e11010c  lw          $s1, 0x10C($s0)
    ctx->pc = 0x3fd1ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3fd1d0:
    // 0x3fd1d0: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x3fd1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd1d4:
    // 0x3fd1d4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3fd1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3fd1d8:
    // 0x3fd1d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fd1dc:
    // 0x3fd1dc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3fd1dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3fd1e0:
    // 0x3fd1e0: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x3fd1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
label_3fd1e4:
    // 0x3fd1e4: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x3fd1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd1e8:
    // 0x3fd1e8: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x3fd1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
label_3fd1ec:
    // 0x3fd1ec: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x3fd1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd1f0:
    // 0x3fd1f0: 0xe62000e8  swc1        $f0, 0xE8($s1)
    ctx->pc = 0x3fd1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
label_3fd1f4:
    // 0x3fd1f4: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x3fd1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd1f8:
    // 0x3fd1f8: 0xe62000ec  swc1        $f0, 0xEC($s1)
    ctx->pc = 0x3fd1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
label_3fd1fc:
    // 0x3fd1fc: 0xc62600e8  lwc1        $f6, 0xE8($s1)
    ctx->pc = 0x3fd1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3fd200:
    // 0x3fd200: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3fd200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3fd204:
    // 0x3fd204: 0xc62500e4  lwc1        $f5, 0xE4($s1)
    ctx->pc = 0x3fd204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3fd208:
    // 0x3fd208: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fd208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fd20c:
    // 0x3fd20c: 0xc62400e0  lwc1        $f4, 0xE0($s1)
    ctx->pc = 0x3fd20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fd210:
    // 0x3fd210: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x3fd210u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3fd214:
    // 0x3fd214: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3fd214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3fd218:
    // 0x3fd218: 0xe7a500d4  swc1        $f5, 0xD4($sp)
    ctx->pc = 0x3fd218u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_3fd21c:
    // 0x3fd21c: 0xe7a600d8  swc1        $f6, 0xD8($sp)
    ctx->pc = 0x3fd21cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3fd220:
    // 0x3fd220: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3fd220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd224:
    // 0x3fd224: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x3fd224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd228:
    // 0x3fd228: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x3fd228u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3fd22c:
    // 0x3fd22c: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x3fd22cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3fd230:
    // 0x3fd230: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x3fd230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3fd234:
    // 0x3fd234: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x3fd234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3fd238:
    // 0x3fd238: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x3fd238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_3fd23c:
    // 0x3fd23c: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x3fd23cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_3fd240:
    // 0x3fd240: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x3fd240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3fd244:
    // 0x3fd244: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x3fd244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3fd248:
    // 0x3fd248: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x3fd248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_3fd24c:
    // 0x3fd24c: 0x8e330050  lw          $s3, 0x50($s1)
    ctx->pc = 0x3fd24cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3fd250:
    // 0x3fd250: 0xc088b74  jal         func_222DD0
label_3fd254:
    if (ctx->pc == 0x3FD254u) {
        ctx->pc = 0x3FD254u;
            // 0x3fd254: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FD258u;
        goto label_3fd258;
    }
    ctx->pc = 0x3FD250u;
    SET_GPR_U32(ctx, 31, 0x3FD258u);
    ctx->pc = 0x3FD254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD250u;
            // 0x3fd254: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD258u; }
        if (ctx->pc != 0x3FD258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD258u; }
        if (ctx->pc != 0x3FD258u) { return; }
    }
    ctx->pc = 0x3FD258u;
label_3fd258:
    // 0x3fd258: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x3fd258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_3fd25c:
    // 0x3fd25c: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x3fd25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_3fd260:
    // 0x3fd260: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3fd260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3fd264:
    // 0x3fd264: 0x320f809  jalr        $t9
label_3fd268:
    if (ctx->pc == 0x3FD268u) {
        ctx->pc = 0x3FD268u;
            // 0x3fd268: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3FD26Cu;
        goto label_3fd26c;
    }
    ctx->pc = 0x3FD264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FD26Cu);
        ctx->pc = 0x3FD268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD264u;
            // 0x3fd268: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FD26Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FD26Cu; }
            if (ctx->pc != 0x3FD26Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3FD26Cu;
label_3fd26c:
    // 0x3fd26c: 0xc088b74  jal         func_222DD0
label_3fd270:
    if (ctx->pc == 0x3FD270u) {
        ctx->pc = 0x3FD270u;
            // 0x3fd270: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x3FD274u;
        goto label_3fd274;
    }
    ctx->pc = 0x3FD26Cu;
    SET_GPR_U32(ctx, 31, 0x3FD274u);
    ctx->pc = 0x3FD270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD26Cu;
            // 0x3fd270: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD274u; }
        if (ctx->pc != 0x3FD274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD274u; }
        if (ctx->pc != 0x3FD274u) { return; }
    }
    ctx->pc = 0x3FD274u;
label_3fd274:
    // 0x3fd274: 0x8e110110  lw          $s1, 0x110($s0)
    ctx->pc = 0x3fd274u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_3fd278:
    // 0x3fd278: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x3fd278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd27c:
    // 0x3fd27c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3fd27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3fd280:
    // 0x3fd280: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fd280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fd284:
    // 0x3fd284: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3fd284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3fd288:
    // 0x3fd288: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x3fd288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
label_3fd28c:
    // 0x3fd28c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x3fd28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd290:
    // 0x3fd290: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x3fd290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
label_3fd294:
    // 0x3fd294: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x3fd294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd298:
    // 0x3fd298: 0xe62000e8  swc1        $f0, 0xE8($s1)
    ctx->pc = 0x3fd298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
label_3fd29c:
    // 0x3fd29c: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x3fd29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd2a0:
    // 0x3fd2a0: 0xe62000ec  swc1        $f0, 0xEC($s1)
    ctx->pc = 0x3fd2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
label_3fd2a4:
    // 0x3fd2a4: 0xc62600e8  lwc1        $f6, 0xE8($s1)
    ctx->pc = 0x3fd2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3fd2a8:
    // 0x3fd2a8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3fd2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3fd2ac:
    // 0x3fd2ac: 0xc62500e4  lwc1        $f5, 0xE4($s1)
    ctx->pc = 0x3fd2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3fd2b0:
    // 0x3fd2b0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fd2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fd2b4:
    // 0x3fd2b4: 0xc62400e0  lwc1        $f4, 0xE0($s1)
    ctx->pc = 0x3fd2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fd2b8:
    // 0x3fd2b8: 0xe7a400c0  swc1        $f4, 0xC0($sp)
    ctx->pc = 0x3fd2b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3fd2bc:
    // 0x3fd2bc: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x3fd2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_3fd2c0:
    // 0x3fd2c0: 0xe7a500c4  swc1        $f5, 0xC4($sp)
    ctx->pc = 0x3fd2c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_3fd2c4:
    // 0x3fd2c4: 0xe7a600c8  swc1        $f6, 0xC8($sp)
    ctx->pc = 0x3fd2c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_3fd2c8:
    // 0x3fd2c8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3fd2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd2cc:
    // 0x3fd2cc: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x3fd2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd2d0:
    // 0x3fd2d0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x3fd2d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3fd2d4:
    // 0x3fd2d4: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x3fd2d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3fd2d8:
    // 0x3fd2d8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x3fd2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3fd2dc:
    // 0x3fd2dc: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x3fd2dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3fd2e0:
    // 0x3fd2e0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x3fd2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_3fd2e4:
    // 0x3fd2e4: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x3fd2e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_3fd2e8:
    // 0x3fd2e8: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x3fd2e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3fd2ec:
    // 0x3fd2ec: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x3fd2ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_3fd2f0:
    // 0x3fd2f0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x3fd2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_3fd2f4:
    // 0x3fd2f4: 0x8e330050  lw          $s3, 0x50($s1)
    ctx->pc = 0x3fd2f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3fd2f8:
    // 0x3fd2f8: 0xc088b74  jal         func_222DD0
label_3fd2fc:
    if (ctx->pc == 0x3FD2FCu) {
        ctx->pc = 0x3FD2FCu;
            // 0x3fd2fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FD300u;
        goto label_3fd300;
    }
    ctx->pc = 0x3FD2F8u;
    SET_GPR_U32(ctx, 31, 0x3FD300u);
    ctx->pc = 0x3FD2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD2F8u;
            // 0x3fd2fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD300u; }
        if (ctx->pc != 0x3FD300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD300u; }
        if (ctx->pc != 0x3FD300u) { return; }
    }
    ctx->pc = 0x3FD300u;
label_3fd300:
    // 0x3fd300: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x3fd300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_3fd304:
    // 0x3fd304: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x3fd304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_3fd308:
    // 0x3fd308: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3fd308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3fd30c:
    // 0x3fd30c: 0x320f809  jalr        $t9
label_3fd310:
    if (ctx->pc == 0x3FD310u) {
        ctx->pc = 0x3FD310u;
            // 0x3fd310: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3FD314u;
        goto label_3fd314;
    }
    ctx->pc = 0x3FD30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FD314u);
        ctx->pc = 0x3FD310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD30Cu;
            // 0x3fd310: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FD314u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FD314u; }
            if (ctx->pc != 0x3FD314u) { return; }
        }
        }
    }
    ctx->pc = 0x3FD314u;
label_3fd314:
    // 0x3fd314: 0xc088b74  jal         func_222DD0
label_3fd318:
    if (ctx->pc == 0x3FD318u) {
        ctx->pc = 0x3FD318u;
            // 0x3fd318: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x3FD31Cu;
        goto label_3fd31c;
    }
    ctx->pc = 0x3FD314u;
    SET_GPR_U32(ctx, 31, 0x3FD31Cu);
    ctx->pc = 0x3FD318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD314u;
            // 0x3fd318: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD31Cu; }
        if (ctx->pc != 0x3FD31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD31Cu; }
        if (ctx->pc != 0x3FD31Cu) { return; }
    }
    ctx->pc = 0x3FD31Cu;
label_3fd31c:
    // 0x3fd31c: 0x3c044170  lui         $a0, 0x4170
    ctx->pc = 0x3fd31cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16752 << 16));
label_3fd320:
    // 0x3fd320: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3fd320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_3fd324:
    // 0x3fd324: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3fd324u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fd328:
    // 0x3fd328: 0x0  nop
    ctx->pc = 0x3fd328u;
    // NOP
label_3fd32c:
    // 0x3fd32c: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x3fd32cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[0];
label_3fd330:
    // 0x3fd330: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3fd330u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fd334:
    // 0x3fd334: 0x0  nop
    ctx->pc = 0x3fd334u;
    // NOP
label_3fd338:
    // 0x3fd338: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3fd338u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3fd33c:
    // 0x3fd33c: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x3fd33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd340:
    // 0x3fd340: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3fd340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3fd344:
    // 0x3fd344: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x3fd344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_3fd348:
    // 0x3fd348: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x3fd348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd34c:
    // 0x3fd34c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3fd34cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3fd350:
    // 0x3fd350: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x3fd350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
label_3fd354:
    // 0x3fd354: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3fd354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd358:
    // 0x3fd358: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x3fd358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd35c:
    // 0x3fd35c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3fd35cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3fd360:
    // 0x3fd360: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x3fd360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
label_3fd364:
    // 0x3fd364: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x3fd364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_3fd368:
    // 0x3fd368: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x3fd368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd36c:
    // 0x3fd36c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x3fd36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3fd370:
    // 0x3fd370: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3fd370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd374:
    // 0x3fd374: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3fd374u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fd378:
    // 0x3fd378: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_3fd37c:
    if (ctx->pc == 0x3FD37Cu) {
        ctx->pc = 0x3FD37Cu;
            // 0x3fd37c: 0xc60100f0  lwc1        $f1, 0xF0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3FD380u;
        goto label_3fd380;
    }
    ctx->pc = 0x3FD378u;
    {
        const bool branch_taken_0x3fd378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fd378) {
            ctx->pc = 0x3FD37Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD378u;
            // 0x3fd37c: 0xc60100f0  lwc1        $f1, 0xF0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FD388u;
            goto label_3fd388;
        }
    }
    ctx->pc = 0x3FD380u;
label_3fd380:
    // 0x3fd380: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x3fd380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_3fd384:
    // 0x3fd384: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x3fd384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd388:
    // 0x3fd388: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3fd388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_3fd38c:
    // 0x3fd38c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3fd38cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fd390:
    // 0x3fd390: 0x0  nop
    ctx->pc = 0x3fd390u;
    // NOP
label_3fd394:
    // 0x3fd394: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3fd394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fd398:
    // 0x3fd398: 0x450301af  bc1tl       . + 4 + (0x1AF << 2)
label_3fd39c:
    if (ctx->pc == 0x3FD39Cu) {
        ctx->pc = 0x3FD39Cu;
            // 0x3fd39c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3FD3A0u;
        goto label_3fd3a0;
    }
    ctx->pc = 0x3FD398u;
    {
        const bool branch_taken_0x3fd398 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fd398) {
            ctx->pc = 0x3FD39Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD398u;
            // 0x3fd39c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FDA58u;
            goto label_3fda58;
        }
    }
    ctx->pc = 0x3FD3A0u;
label_3fd3a0:
    // 0x3fd3a0: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x3fd3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_3fd3a4:
    // 0x3fd3a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fd3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd3a8:
    // 0x3fd3a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fd3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3fd3ac:
    // 0x3fd3ac: 0xc0ff6dc  jal         func_3FDB70
label_3fd3b0:
    if (ctx->pc == 0x3FD3B0u) {
        ctx->pc = 0x3FD3B0u;
            // 0x3fd3b0: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->pc = 0x3FD3B4u;
        goto label_3fd3b4;
    }
    ctx->pc = 0x3FD3ACu;
    SET_GPR_U32(ctx, 31, 0x3FD3B4u);
    ctx->pc = 0x3FD3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD3ACu;
            // 0x3fd3b0: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FDB70u;
    if (runtime->hasFunction(0x3FDB70u)) {
        auto targetFn = runtime->lookupFunction(0x3FDB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD3B4u; }
        if (ctx->pc != 0x3FD3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FDB70_0x3fdb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD3B4u; }
        if (ctx->pc != 0x3FD3B4u) { return; }
    }
    ctx->pc = 0x3FD3B4u;
label_3fd3b4:
    // 0x3fd3b4: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x3fd3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd3b8:
    // 0x3fd3b8: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3fd3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_3fd3bc:
    // 0x3fd3bc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3fd3bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3fd3c0:
    // 0x3fd3c0: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x3fd3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_3fd3c4:
    // 0x3fd3c4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3fd3c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3fd3c8:
    // 0x3fd3c8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x3fd3c8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_3fd3cc:
    // 0x3fd3cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3fd3ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fd3d0:
    // 0x3fd3d0: 0x0  nop
    ctx->pc = 0x3fd3d0u;
    // NOP
label_3fd3d4:
    // 0x3fd3d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3fd3d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3fd3d8:
    // 0x3fd3d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3fd3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3fd3dc:
    // 0x3fd3dc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3fd3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_3fd3e0:
    // 0x3fd3e0: 0x1000019c  b           . + 4 + (0x19C << 2)
label_3fd3e4:
    if (ctx->pc == 0x3FD3E4u) {
        ctx->pc = 0x3FD3E4u;
            // 0x3fd3e4: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->pc = 0x3FD3E8u;
        goto label_3fd3e8;
    }
    ctx->pc = 0x3FD3E0u;
    {
        const bool branch_taken_0x3fd3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD3E0u;
            // 0x3fd3e4: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd3e0) {
            ctx->pc = 0x3FDA54u;
            goto label_3fda54;
        }
    }
    ctx->pc = 0x3FD3E8u;
label_3fd3e8:
    // 0x3fd3e8: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3fd3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd3ec:
    // 0x3fd3ec: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x3fd3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd3f0:
    // 0x3fd3f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3fd3f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3fd3f4:
    // 0x3fd3f4: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x3fd3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
label_3fd3f8:
    // 0x3fd3f8: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x3fd3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_3fd3fc:
    // 0x3fd3fc: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x3fd3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd400:
    // 0x3fd400: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3fd400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3fd404:
    // 0x3fd404: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3fd404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd408:
    // 0x3fd408: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3fd408u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fd40c:
    // 0x3fd40c: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_3fd410:
    if (ctx->pc == 0x3FD410u) {
        ctx->pc = 0x3FD410u;
            // 0x3fd410: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x3FD414u;
        goto label_3fd414;
    }
    ctx->pc = 0x3FD40Cu;
    {
        const bool branch_taken_0x3fd40c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fd40c) {
            ctx->pc = 0x3FD410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD40Cu;
            // 0x3fd410: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FD41Cu;
            goto label_3fd41c;
        }
    }
    ctx->pc = 0x3FD414u;
label_3fd414:
    // 0x3fd414: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x3fd414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_3fd418:
    // 0x3fd418: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x3fd418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_3fd41c:
    // 0x3fd41c: 0xc04cc04  jal         func_133010
label_3fd420:
    if (ctx->pc == 0x3FD420u) {
        ctx->pc = 0x3FD420u;
            // 0x3fd420: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x3FD424u;
        goto label_3fd424;
    }
    ctx->pc = 0x3FD41Cu;
    SET_GPR_U32(ctx, 31, 0x3FD424u);
    ctx->pc = 0x3FD420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD41Cu;
            // 0x3fd420: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD424u; }
        if (ctx->pc != 0x3FD424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD424u; }
        if (ctx->pc != 0x3FD424u) { return; }
    }
    ctx->pc = 0x3FD424u;
label_3fd424:
    // 0x3fd424: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x3fd424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_3fd428:
    // 0x3fd428: 0xc04cc04  jal         func_133010
label_3fd42c:
    if (ctx->pc == 0x3FD42Cu) {
        ctx->pc = 0x3FD42Cu;
            // 0x3fd42c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x3FD430u;
        goto label_3fd430;
    }
    ctx->pc = 0x3FD428u;
    SET_GPR_U32(ctx, 31, 0x3FD430u);
    ctx->pc = 0x3FD42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD428u;
            // 0x3fd42c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD430u; }
        if (ctx->pc != 0x3FD430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD430u; }
        if (ctx->pc != 0x3FD430u) { return; }
    }
    ctx->pc = 0x3FD430u;
label_3fd430:
    // 0x3fd430: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3fd430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3fd434:
    // 0x3fd434: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x3fd434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_3fd438:
    // 0x3fd438: 0xc04cc90  jal         func_133240
label_3fd43c:
    if (ctx->pc == 0x3FD43Cu) {
        ctx->pc = 0x3FD43Cu;
            // 0x3fd43c: 0x26060080  addiu       $a2, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x3FD440u;
        goto label_3fd440;
    }
    ctx->pc = 0x3FD438u;
    SET_GPR_U32(ctx, 31, 0x3FD440u);
    ctx->pc = 0x3FD43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD438u;
            // 0x3fd43c: 0x26060080  addiu       $a2, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD440u; }
        if (ctx->pc != 0x3FD440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD440u; }
        if (ctx->pc != 0x3FD440u) { return; }
    }
    ctx->pc = 0x3FD440u;
label_3fd440:
    // 0x3fd440: 0x8e11010c  lw          $s1, 0x10C($s0)
    ctx->pc = 0x3fd440u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3fd444:
    // 0x3fd444: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x3fd444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd448:
    // 0x3fd448: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3fd448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3fd44c:
    // 0x3fd44c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fd44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fd450:
    // 0x3fd450: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3fd450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3fd454:
    // 0x3fd454: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x3fd454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
label_3fd458:
    // 0x3fd458: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x3fd458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd45c:
    // 0x3fd45c: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x3fd45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
label_3fd460:
    // 0x3fd460: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x3fd460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd464:
    // 0x3fd464: 0xe62000e8  swc1        $f0, 0xE8($s1)
    ctx->pc = 0x3fd464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
label_3fd468:
    // 0x3fd468: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x3fd468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd46c:
    // 0x3fd46c: 0xe62000ec  swc1        $f0, 0xEC($s1)
    ctx->pc = 0x3fd46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
label_3fd470:
    // 0x3fd470: 0xc62600e8  lwc1        $f6, 0xE8($s1)
    ctx->pc = 0x3fd470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3fd474:
    // 0x3fd474: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3fd474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3fd478:
    // 0x3fd478: 0xc62500e4  lwc1        $f5, 0xE4($s1)
    ctx->pc = 0x3fd478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3fd47c:
    // 0x3fd47c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fd47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fd480:
    // 0x3fd480: 0xc62400e0  lwc1        $f4, 0xE0($s1)
    ctx->pc = 0x3fd480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fd484:
    // 0x3fd484: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x3fd484u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3fd488:
    // 0x3fd488: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x3fd488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_3fd48c:
    // 0x3fd48c: 0xe7a500b4  swc1        $f5, 0xB4($sp)
    ctx->pc = 0x3fd48cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3fd490:
    // 0x3fd490: 0xe7a600b8  swc1        $f6, 0xB8($sp)
    ctx->pc = 0x3fd490u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3fd494:
    // 0x3fd494: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3fd494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd498:
    // 0x3fd498: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x3fd498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd49c:
    // 0x3fd49c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x3fd49cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3fd4a0:
    // 0x3fd4a0: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x3fd4a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3fd4a4:
    // 0x3fd4a4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x3fd4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3fd4a8:
    // 0x3fd4a8: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x3fd4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3fd4ac:
    // 0x3fd4ac: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x3fd4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3fd4b0:
    // 0x3fd4b0: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x3fd4b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_3fd4b4:
    // 0x3fd4b4: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x3fd4b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3fd4b8:
    // 0x3fd4b8: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x3fd4b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3fd4bc:
    // 0x3fd4bc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x3fd4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_3fd4c0:
    // 0x3fd4c0: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x3fd4c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3fd4c4:
    // 0x3fd4c4: 0xc088b74  jal         func_222DD0
label_3fd4c8:
    if (ctx->pc == 0x3FD4C8u) {
        ctx->pc = 0x3FD4C8u;
            // 0x3fd4c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FD4CCu;
        goto label_3fd4cc;
    }
    ctx->pc = 0x3FD4C4u;
    SET_GPR_U32(ctx, 31, 0x3FD4CCu);
    ctx->pc = 0x3FD4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD4C4u;
            // 0x3fd4c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD4CCu; }
        if (ctx->pc != 0x3FD4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD4CCu; }
        if (ctx->pc != 0x3FD4CCu) { return; }
    }
    ctx->pc = 0x3FD4CCu;
label_3fd4cc:
    // 0x3fd4cc: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x3fd4ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_3fd4d0:
    // 0x3fd4d0: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x3fd4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_3fd4d4:
    // 0x3fd4d4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3fd4d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3fd4d8:
    // 0x3fd4d8: 0x320f809  jalr        $t9
label_3fd4dc:
    if (ctx->pc == 0x3FD4DCu) {
        ctx->pc = 0x3FD4DCu;
            // 0x3fd4dc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3FD4E0u;
        goto label_3fd4e0;
    }
    ctx->pc = 0x3FD4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FD4E0u);
        ctx->pc = 0x3FD4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD4D8u;
            // 0x3fd4dc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FD4E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FD4E0u; }
            if (ctx->pc != 0x3FD4E0u) { return; }
        }
        }
    }
    ctx->pc = 0x3FD4E0u;
label_3fd4e0:
    // 0x3fd4e0: 0xc088b74  jal         func_222DD0
label_3fd4e4:
    if (ctx->pc == 0x3FD4E4u) {
        ctx->pc = 0x3FD4E4u;
            // 0x3fd4e4: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x3FD4E8u;
        goto label_3fd4e8;
    }
    ctx->pc = 0x3FD4E0u;
    SET_GPR_U32(ctx, 31, 0x3FD4E8u);
    ctx->pc = 0x3FD4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD4E0u;
            // 0x3fd4e4: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD4E8u; }
        if (ctx->pc != 0x3FD4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD4E8u; }
        if (ctx->pc != 0x3FD4E8u) { return; }
    }
    ctx->pc = 0x3FD4E8u;
label_3fd4e8:
    // 0x3fd4e8: 0x8e110110  lw          $s1, 0x110($s0)
    ctx->pc = 0x3fd4e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_3fd4ec:
    // 0x3fd4ec: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x3fd4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd4f0:
    // 0x3fd4f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3fd4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3fd4f4:
    // 0x3fd4f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fd4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fd4f8:
    // 0x3fd4f8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3fd4f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3fd4fc:
    // 0x3fd4fc: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x3fd4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
label_3fd500:
    // 0x3fd500: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x3fd500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd504:
    // 0x3fd504: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x3fd504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
label_3fd508:
    // 0x3fd508: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x3fd508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd50c:
    // 0x3fd50c: 0xe62000e8  swc1        $f0, 0xE8($s1)
    ctx->pc = 0x3fd50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
label_3fd510:
    // 0x3fd510: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x3fd510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd514:
    // 0x3fd514: 0xe62000ec  swc1        $f0, 0xEC($s1)
    ctx->pc = 0x3fd514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
label_3fd518:
    // 0x3fd518: 0xc62600e8  lwc1        $f6, 0xE8($s1)
    ctx->pc = 0x3fd518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3fd51c:
    // 0x3fd51c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3fd51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3fd520:
    // 0x3fd520: 0xc62500e4  lwc1        $f5, 0xE4($s1)
    ctx->pc = 0x3fd520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3fd524:
    // 0x3fd524: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fd524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fd528:
    // 0x3fd528: 0xc62400e0  lwc1        $f4, 0xE0($s1)
    ctx->pc = 0x3fd528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fd52c:
    // 0x3fd52c: 0xe7a400a0  swc1        $f4, 0xA0($sp)
    ctx->pc = 0x3fd52cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3fd530:
    // 0x3fd530: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x3fd530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_3fd534:
    // 0x3fd534: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x3fd534u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3fd538:
    // 0x3fd538: 0xe7a600a8  swc1        $f6, 0xA8($sp)
    ctx->pc = 0x3fd538u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3fd53c:
    // 0x3fd53c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3fd53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd540:
    // 0x3fd540: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x3fd540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd544:
    // 0x3fd544: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x3fd544u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3fd548:
    // 0x3fd548: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x3fd548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3fd54c:
    // 0x3fd54c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3fd54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3fd550:
    // 0x3fd550: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x3fd550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3fd554:
    // 0x3fd554: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x3fd554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3fd558:
    // 0x3fd558: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x3fd558u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_3fd55c:
    // 0x3fd55c: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x3fd55cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3fd560:
    // 0x3fd560: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x3fd560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3fd564:
    // 0x3fd564: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x3fd564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_3fd568:
    // 0x3fd568: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x3fd568u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3fd56c:
    // 0x3fd56c: 0xc088b74  jal         func_222DD0
label_3fd570:
    if (ctx->pc == 0x3FD570u) {
        ctx->pc = 0x3FD570u;
            // 0x3fd570: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FD574u;
        goto label_3fd574;
    }
    ctx->pc = 0x3FD56Cu;
    SET_GPR_U32(ctx, 31, 0x3FD574u);
    ctx->pc = 0x3FD570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD56Cu;
            // 0x3fd570: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD574u; }
        if (ctx->pc != 0x3FD574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD574u; }
        if (ctx->pc != 0x3FD574u) { return; }
    }
    ctx->pc = 0x3FD574u;
label_3fd574:
    // 0x3fd574: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x3fd574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_3fd578:
    // 0x3fd578: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x3fd578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_3fd57c:
    // 0x3fd57c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3fd57cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3fd580:
    // 0x3fd580: 0x320f809  jalr        $t9
label_3fd584:
    if (ctx->pc == 0x3FD584u) {
        ctx->pc = 0x3FD584u;
            // 0x3fd584: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3FD588u;
        goto label_3fd588;
    }
    ctx->pc = 0x3FD580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FD588u);
        ctx->pc = 0x3FD584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD580u;
            // 0x3fd584: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FD588u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FD588u; }
            if (ctx->pc != 0x3FD588u) { return; }
        }
        }
    }
    ctx->pc = 0x3FD588u;
label_3fd588:
    // 0x3fd588: 0xc088b74  jal         func_222DD0
label_3fd58c:
    if (ctx->pc == 0x3FD58Cu) {
        ctx->pc = 0x3FD58Cu;
            // 0x3fd58c: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x3FD590u;
        goto label_3fd590;
    }
    ctx->pc = 0x3FD588u;
    SET_GPR_U32(ctx, 31, 0x3FD590u);
    ctx->pc = 0x3FD58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD588u;
            // 0x3fd58c: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD590u; }
        if (ctx->pc != 0x3FD590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD590u; }
        if (ctx->pc != 0x3FD590u) { return; }
    }
    ctx->pc = 0x3FD590u;
label_3fd590:
    // 0x3fd590: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x3fd590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_3fd594:
    // 0x3fd594: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x3fd594u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3fd598:
    // 0x3fd598: 0x1020012e  beqz        $at, . + 4 + (0x12E << 2)
label_3fd59c:
    if (ctx->pc == 0x3FD59Cu) {
        ctx->pc = 0x3FD5A0u;
        goto label_3fd5a0;
    }
    ctx->pc = 0x3FD598u;
    {
        const bool branch_taken_0x3fd598 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fd598) {
            ctx->pc = 0x3FDA54u;
            goto label_3fda54;
        }
    }
    ctx->pc = 0x3FD5A0u;
label_3fd5a0:
    // 0x3fd5a0: 0xc04cc14  jal         func_133050
label_3fd5a4:
    if (ctx->pc == 0x3FD5A4u) {
        ctx->pc = 0x3FD5A4u;
            // 0x3fd5a4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x3FD5A8u;
        goto label_3fd5a8;
    }
    ctx->pc = 0x3FD5A0u;
    SET_GPR_U32(ctx, 31, 0x3FD5A8u);
    ctx->pc = 0x3FD5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD5A0u;
            // 0x3fd5a4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD5A8u; }
        if (ctx->pc != 0x3FD5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD5A8u; }
        if (ctx->pc != 0x3FD5A8u) { return; }
    }
    ctx->pc = 0x3FD5A8u;
label_3fd5a8:
    // 0x3fd5a8: 0xc6020104  lwc1        $f2, 0x104($s0)
    ctx->pc = 0x3fd5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3fd5ac:
    // 0x3fd5ac: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3fd5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_3fd5b0:
    // 0x3fd5b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3fd5b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fd5b4:
    // 0x3fd5b4: 0x0  nop
    ctx->pc = 0x3fd5b4u;
    // NOP
label_3fd5b8:
    // 0x3fd5b8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3fd5b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3fd5bc:
    // 0x3fd5bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3fd5bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fd5c0:
    // 0x3fd5c0: 0x45010124  bc1t        . + 4 + (0x124 << 2)
label_3fd5c4:
    if (ctx->pc == 0x3FD5C4u) {
        ctx->pc = 0x3FD5C4u;
            // 0x3fd5c4: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
        ctx->pc = 0x3FD5C8u;
        goto label_3fd5c8;
    }
    ctx->pc = 0x3FD5C0u;
    {
        const bool branch_taken_0x3fd5c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FD5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD5C0u;
            // 0x3fd5c4: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd5c0) {
            ctx->pc = 0x3FDA54u;
            goto label_3fda54;
        }
    }
    ctx->pc = 0x3FD5C8u;
label_3fd5c8:
    // 0x3fd5c8: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x3fd5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_3fd5cc:
    // 0x3fd5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fd5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd5d0:
    // 0x3fd5d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fd5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3fd5d4:
    // 0x3fd5d4: 0xc0ff6dc  jal         func_3FDB70
label_3fd5d8:
    if (ctx->pc == 0x3FD5D8u) {
        ctx->pc = 0x3FD5D8u;
            // 0x3fd5d8: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->pc = 0x3FD5DCu;
        goto label_3fd5dc;
    }
    ctx->pc = 0x3FD5D4u;
    SET_GPR_U32(ctx, 31, 0x3FD5DCu);
    ctx->pc = 0x3FD5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD5D4u;
            // 0x3fd5d8: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FDB70u;
    if (runtime->hasFunction(0x3FDB70u)) {
        auto targetFn = runtime->lookupFunction(0x3FDB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD5DCu; }
        if (ctx->pc != 0x3FD5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FDB70_0x3fdb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD5DCu; }
        if (ctx->pc != 0x3FD5DCu) { return; }
    }
    ctx->pc = 0x3FD5DCu;
label_3fd5dc:
    // 0x3fd5dc: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x3fd5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd5e0:
    // 0x3fd5e0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3fd5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_3fd5e4:
    // 0x3fd5e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3fd5e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fd5e8:
    // 0x3fd5e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3fd5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fd5ec:
    // 0x3fd5ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3fd5ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3fd5f0:
    // 0x3fd5f0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3fd5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_3fd5f4:
    // 0x3fd5f4: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x3fd5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_3fd5f8:
    // 0x3fd5f8: 0x14830116  bne         $a0, $v1, . + 4 + (0x116 << 2)
label_3fd5fc:
    if (ctx->pc == 0x3FD5FCu) {
        ctx->pc = 0x3FD600u;
        goto label_3fd600;
    }
    ctx->pc = 0x3FD5F8u;
    {
        const bool branch_taken_0x3fd5f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3fd5f8) {
            ctx->pc = 0x3FDA54u;
            goto label_3fda54;
        }
    }
    ctx->pc = 0x3FD600u;
label_3fd600:
    // 0x3fd600: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3fd600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3fd604:
    // 0x3fd604: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x3fd604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_3fd608:
    // 0x3fd608: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x3fd608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_3fd60c:
    // 0x3fd60c: 0xc04cc04  jal         func_133010
label_3fd610:
    if (ctx->pc == 0x3FD610u) {
        ctx->pc = 0x3FD610u;
            // 0x3fd610: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x3FD614u;
        goto label_3fd614;
    }
    ctx->pc = 0x3FD60Cu;
    SET_GPR_U32(ctx, 31, 0x3FD614u);
    ctx->pc = 0x3FD610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD60Cu;
            // 0x3fd610: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD614u; }
        if (ctx->pc != 0x3FD614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD614u; }
        if (ctx->pc != 0x3FD614u) { return; }
    }
    ctx->pc = 0x3FD614u;
label_3fd614:
    // 0x3fd614: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x3fd614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_3fd618:
    // 0x3fd618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fd618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd61c:
    // 0x3fd61c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fd61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3fd620:
    // 0x3fd620: 0xc0ff6dc  jal         func_3FDB70
label_3fd624:
    if (ctx->pc == 0x3FD624u) {
        ctx->pc = 0x3FD624u;
            // 0x3fd624: 0xae0200fc  sw          $v0, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
        ctx->pc = 0x3FD628u;
        goto label_3fd628;
    }
    ctx->pc = 0x3FD620u;
    SET_GPR_U32(ctx, 31, 0x3FD628u);
    ctx->pc = 0x3FD624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD620u;
            // 0x3fd624: 0xae0200fc  sw          $v0, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FDB70u;
    if (runtime->hasFunction(0x3FDB70u)) {
        auto targetFn = runtime->lookupFunction(0x3FDB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD628u; }
        if (ctx->pc != 0x3FD628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FDB70_0x3fdb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD628u; }
        if (ctx->pc != 0x3FD628u) { return; }
    }
    ctx->pc = 0x3FD628u;
label_3fd628:
    // 0x3fd628: 0x1000010a  b           . + 4 + (0x10A << 2)
label_3fd62c:
    if (ctx->pc == 0x3FD62Cu) {
        ctx->pc = 0x3FD630u;
        goto label_3fd630;
    }
    ctx->pc = 0x3FD628u;
    {
        const bool branch_taken_0x3fd628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fd628) {
            ctx->pc = 0x3FDA54u;
            goto label_3fda54;
        }
    }
    ctx->pc = 0x3FD630u;
label_3fd630:
    // 0x3fd630: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3fd630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd634:
    // 0x3fd634: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x3fd634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd638:
    // 0x3fd638: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3fd638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3fd63c:
    // 0x3fd63c: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x3fd63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
label_3fd640:
    // 0x3fd640: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x3fd640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_3fd644:
    // 0x3fd644: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x3fd644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd648:
    // 0x3fd648: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3fd648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3fd64c:
    // 0x3fd64c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3fd64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd650:
    // 0x3fd650: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3fd650u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fd654:
    // 0x3fd654: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_3fd658:
    if (ctx->pc == 0x3FD658u) {
        ctx->pc = 0x3FD658u;
            // 0x3fd658: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x3FD65Cu;
        goto label_3fd65c;
    }
    ctx->pc = 0x3FD654u;
    {
        const bool branch_taken_0x3fd654 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fd654) {
            ctx->pc = 0x3FD658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD654u;
            // 0x3fd658: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FD664u;
            goto label_3fd664;
        }
    }
    ctx->pc = 0x3FD65Cu;
label_3fd65c:
    // 0x3fd65c: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x3fd65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_3fd660:
    // 0x3fd660: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x3fd660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_3fd664:
    // 0x3fd664: 0xc04cc04  jal         func_133010
label_3fd668:
    if (ctx->pc == 0x3FD668u) {
        ctx->pc = 0x3FD668u;
            // 0x3fd668: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x3FD66Cu;
        goto label_3fd66c;
    }
    ctx->pc = 0x3FD664u;
    SET_GPR_U32(ctx, 31, 0x3FD66Cu);
    ctx->pc = 0x3FD668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD664u;
            // 0x3fd668: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD66Cu; }
        if (ctx->pc != 0x3FD66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD66Cu; }
        if (ctx->pc != 0x3FD66Cu) { return; }
    }
    ctx->pc = 0x3FD66Cu;
label_3fd66c:
    // 0x3fd66c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x3fd66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_3fd670:
    // 0x3fd670: 0xc04cc04  jal         func_133010
label_3fd674:
    if (ctx->pc == 0x3FD674u) {
        ctx->pc = 0x3FD674u;
            // 0x3fd674: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x3FD678u;
        goto label_3fd678;
    }
    ctx->pc = 0x3FD670u;
    SET_GPR_U32(ctx, 31, 0x3FD678u);
    ctx->pc = 0x3FD674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD670u;
            // 0x3fd674: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD678u; }
        if (ctx->pc != 0x3FD678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD678u; }
        if (ctx->pc != 0x3FD678u) { return; }
    }
    ctx->pc = 0x3FD678u;
label_3fd678:
    // 0x3fd678: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3fd678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3fd67c:
    // 0x3fd67c: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x3fd67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_3fd680:
    // 0x3fd680: 0xc04cc90  jal         func_133240
label_3fd684:
    if (ctx->pc == 0x3FD684u) {
        ctx->pc = 0x3FD684u;
            // 0x3fd684: 0x26060080  addiu       $a2, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x3FD688u;
        goto label_3fd688;
    }
    ctx->pc = 0x3FD680u;
    SET_GPR_U32(ctx, 31, 0x3FD688u);
    ctx->pc = 0x3FD684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD680u;
            // 0x3fd684: 0x26060080  addiu       $a2, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD688u; }
        if (ctx->pc != 0x3FD688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD688u; }
        if (ctx->pc != 0x3FD688u) { return; }
    }
    ctx->pc = 0x3FD688u;
label_3fd688:
    // 0x3fd688: 0xc04cc14  jal         func_133050
label_3fd68c:
    if (ctx->pc == 0x3FD68Cu) {
        ctx->pc = 0x3FD68Cu;
            // 0x3fd68c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x3FD690u;
        goto label_3fd690;
    }
    ctx->pc = 0x3FD688u;
    SET_GPR_U32(ctx, 31, 0x3FD690u);
    ctx->pc = 0x3FD68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD688u;
            // 0x3fd68c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD690u; }
        if (ctx->pc != 0x3FD690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD690u; }
        if (ctx->pc != 0x3FD690u) { return; }
    }
    ctx->pc = 0x3FD690u;
label_3fd690:
    // 0x3fd690: 0x8e11010c  lw          $s1, 0x10C($s0)
    ctx->pc = 0x3fd690u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3fd694:
    // 0x3fd694: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x3fd694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd698:
    // 0x3fd698: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3fd698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3fd69c:
    // 0x3fd69c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fd69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fd6a0:
    // 0x3fd6a0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3fd6a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3fd6a4:
    // 0x3fd6a4: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x3fd6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
label_3fd6a8:
    // 0x3fd6a8: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x3fd6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd6ac:
    // 0x3fd6ac: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x3fd6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
label_3fd6b0:
    // 0x3fd6b0: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x3fd6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd6b4:
    // 0x3fd6b4: 0xe62000e8  swc1        $f0, 0xE8($s1)
    ctx->pc = 0x3fd6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
label_3fd6b8:
    // 0x3fd6b8: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x3fd6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd6bc:
    // 0x3fd6bc: 0xe62000ec  swc1        $f0, 0xEC($s1)
    ctx->pc = 0x3fd6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
label_3fd6c0:
    // 0x3fd6c0: 0xc62600e8  lwc1        $f6, 0xE8($s1)
    ctx->pc = 0x3fd6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3fd6c4:
    // 0x3fd6c4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3fd6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3fd6c8:
    // 0x3fd6c8: 0xc62500e4  lwc1        $f5, 0xE4($s1)
    ctx->pc = 0x3fd6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3fd6cc:
    // 0x3fd6cc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fd6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fd6d0:
    // 0x3fd6d0: 0xc62400e0  lwc1        $f4, 0xE0($s1)
    ctx->pc = 0x3fd6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fd6d4:
    // 0x3fd6d4: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x3fd6d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3fd6d8:
    // 0x3fd6d8: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x3fd6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_3fd6dc:
    // 0x3fd6dc: 0xe7a50094  swc1        $f5, 0x94($sp)
    ctx->pc = 0x3fd6dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3fd6e0:
    // 0x3fd6e0: 0xe7a60098  swc1        $f6, 0x98($sp)
    ctx->pc = 0x3fd6e0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3fd6e4:
    // 0x3fd6e4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3fd6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd6e8:
    // 0x3fd6e8: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x3fd6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd6ec:
    // 0x3fd6ec: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x3fd6ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3fd6f0:
    // 0x3fd6f0: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x3fd6f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3fd6f4:
    // 0x3fd6f4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3fd6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3fd6f8:
    // 0x3fd6f8: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x3fd6f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3fd6fc:
    // 0x3fd6fc: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x3fd6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3fd700:
    // 0x3fd700: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x3fd700u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_3fd704:
    // 0x3fd704: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x3fd704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3fd708:
    // 0x3fd708: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x3fd708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3fd70c:
    // 0x3fd70c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x3fd70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_3fd710:
    // 0x3fd710: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x3fd710u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3fd714:
    // 0x3fd714: 0xc088b74  jal         func_222DD0
label_3fd718:
    if (ctx->pc == 0x3FD718u) {
        ctx->pc = 0x3FD718u;
            // 0x3fd718: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FD71Cu;
        goto label_3fd71c;
    }
    ctx->pc = 0x3FD714u;
    SET_GPR_U32(ctx, 31, 0x3FD71Cu);
    ctx->pc = 0x3FD718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD714u;
            // 0x3fd718: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD71Cu; }
        if (ctx->pc != 0x3FD71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD71Cu; }
        if (ctx->pc != 0x3FD71Cu) { return; }
    }
    ctx->pc = 0x3FD71Cu;
label_3fd71c:
    // 0x3fd71c: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x3fd71cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_3fd720:
    // 0x3fd720: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x3fd720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_3fd724:
    // 0x3fd724: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3fd724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3fd728:
    // 0x3fd728: 0x320f809  jalr        $t9
label_3fd72c:
    if (ctx->pc == 0x3FD72Cu) {
        ctx->pc = 0x3FD72Cu;
            // 0x3fd72c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3FD730u;
        goto label_3fd730;
    }
    ctx->pc = 0x3FD728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FD730u);
        ctx->pc = 0x3FD72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD728u;
            // 0x3fd72c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FD730u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FD730u; }
            if (ctx->pc != 0x3FD730u) { return; }
        }
        }
    }
    ctx->pc = 0x3FD730u;
label_3fd730:
    // 0x3fd730: 0xc088b74  jal         func_222DD0
label_3fd734:
    if (ctx->pc == 0x3FD734u) {
        ctx->pc = 0x3FD734u;
            // 0x3fd734: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x3FD738u;
        goto label_3fd738;
    }
    ctx->pc = 0x3FD730u;
    SET_GPR_U32(ctx, 31, 0x3FD738u);
    ctx->pc = 0x3FD734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD730u;
            // 0x3fd734: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD738u; }
        if (ctx->pc != 0x3FD738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD738u; }
        if (ctx->pc != 0x3FD738u) { return; }
    }
    ctx->pc = 0x3FD738u;
label_3fd738:
    // 0x3fd738: 0x8e110110  lw          $s1, 0x110($s0)
    ctx->pc = 0x3fd738u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_3fd73c:
    // 0x3fd73c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x3fd73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd740:
    // 0x3fd740: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3fd740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3fd744:
    // 0x3fd744: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fd744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fd748:
    // 0x3fd748: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3fd748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3fd74c:
    // 0x3fd74c: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x3fd74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
label_3fd750:
    // 0x3fd750: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x3fd750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd754:
    // 0x3fd754: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x3fd754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
label_3fd758:
    // 0x3fd758: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x3fd758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd75c:
    // 0x3fd75c: 0xe62000e8  swc1        $f0, 0xE8($s1)
    ctx->pc = 0x3fd75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
label_3fd760:
    // 0x3fd760: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x3fd760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd764:
    // 0x3fd764: 0xe62000ec  swc1        $f0, 0xEC($s1)
    ctx->pc = 0x3fd764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
label_3fd768:
    // 0x3fd768: 0xc62600e8  lwc1        $f6, 0xE8($s1)
    ctx->pc = 0x3fd768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3fd76c:
    // 0x3fd76c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3fd76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3fd770:
    // 0x3fd770: 0xc62500e4  lwc1        $f5, 0xE4($s1)
    ctx->pc = 0x3fd770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3fd774:
    // 0x3fd774: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fd774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fd778:
    // 0x3fd778: 0xc62400e0  lwc1        $f4, 0xE0($s1)
    ctx->pc = 0x3fd778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fd77c:
    // 0x3fd77c: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x3fd77cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3fd780:
    // 0x3fd780: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x3fd780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_3fd784:
    // 0x3fd784: 0xe7a50084  swc1        $f5, 0x84($sp)
    ctx->pc = 0x3fd784u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3fd788:
    // 0x3fd788: 0xe7a60088  swc1        $f6, 0x88($sp)
    ctx->pc = 0x3fd788u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3fd78c:
    // 0x3fd78c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3fd78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd790:
    // 0x3fd790: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x3fd790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd794:
    // 0x3fd794: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x3fd794u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3fd798:
    // 0x3fd798: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x3fd798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3fd79c:
    // 0x3fd79c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x3fd79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3fd7a0:
    // 0x3fd7a0: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x3fd7a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3fd7a4:
    // 0x3fd7a4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x3fd7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3fd7a8:
    // 0x3fd7a8: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x3fd7a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_3fd7ac:
    // 0x3fd7ac: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x3fd7acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3fd7b0:
    // 0x3fd7b0: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x3fd7b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3fd7b4:
    // 0x3fd7b4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x3fd7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_3fd7b8:
    // 0x3fd7b8: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x3fd7b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3fd7bc:
    // 0x3fd7bc: 0xc088b74  jal         func_222DD0
label_3fd7c0:
    if (ctx->pc == 0x3FD7C0u) {
        ctx->pc = 0x3FD7C0u;
            // 0x3fd7c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FD7C4u;
        goto label_3fd7c4;
    }
    ctx->pc = 0x3FD7BCu;
    SET_GPR_U32(ctx, 31, 0x3FD7C4u);
    ctx->pc = 0x3FD7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD7BCu;
            // 0x3fd7c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD7C4u; }
        if (ctx->pc != 0x3FD7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD7C4u; }
        if (ctx->pc != 0x3FD7C4u) { return; }
    }
    ctx->pc = 0x3FD7C4u;
label_3fd7c4:
    // 0x3fd7c4: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x3fd7c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_3fd7c8:
    // 0x3fd7c8: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x3fd7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_3fd7cc:
    // 0x3fd7cc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3fd7ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3fd7d0:
    // 0x3fd7d0: 0x320f809  jalr        $t9
label_3fd7d4:
    if (ctx->pc == 0x3FD7D4u) {
        ctx->pc = 0x3FD7D4u;
            // 0x3fd7d4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3FD7D8u;
        goto label_3fd7d8;
    }
    ctx->pc = 0x3FD7D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FD7D8u);
        ctx->pc = 0x3FD7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD7D0u;
            // 0x3fd7d4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FD7D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FD7D8u; }
            if (ctx->pc != 0x3FD7D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3FD7D8u;
label_3fd7d8:
    // 0x3fd7d8: 0xc088b74  jal         func_222DD0
label_3fd7dc:
    if (ctx->pc == 0x3FD7DCu) {
        ctx->pc = 0x3FD7DCu;
            // 0x3fd7dc: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x3FD7E0u;
        goto label_3fd7e0;
    }
    ctx->pc = 0x3FD7D8u;
    SET_GPR_U32(ctx, 31, 0x3FD7E0u);
    ctx->pc = 0x3FD7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD7D8u;
            // 0x3fd7dc: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD7E0u; }
        if (ctx->pc != 0x3FD7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD7E0u; }
        if (ctx->pc != 0x3FD7E0u) { return; }
    }
    ctx->pc = 0x3FD7E0u;
label_3fd7e0:
    // 0x3fd7e0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3fd7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3fd7e4:
    // 0x3fd7e4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x3fd7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3fd7e8:
    // 0x3fd7e8: 0xc04cbe0  jal         func_132F80
label_3fd7ec:
    if (ctx->pc == 0x3FD7ECu) {
        ctx->pc = 0x3FD7ECu;
            // 0x3fd7ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FD7F0u;
        goto label_3fd7f0;
    }
    ctx->pc = 0x3FD7E8u;
    SET_GPR_U32(ctx, 31, 0x3FD7F0u);
    ctx->pc = 0x3FD7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD7E8u;
            // 0x3fd7ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD7F0u; }
        if (ctx->pc != 0x3FD7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD7F0u; }
        if (ctx->pc != 0x3FD7F0u) { return; }
    }
    ctx->pc = 0x3FD7F0u;
label_3fd7f0:
    // 0x3fd7f0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3fd7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3fd7f4:
    // 0x3fd7f4: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x3fd7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_3fd7f8:
    // 0x3fd7f8: 0xc04cc90  jal         func_133240
label_3fd7fc:
    if (ctx->pc == 0x3FD7FCu) {
        ctx->pc = 0x3FD7FCu;
            // 0x3fd7fc: 0x260600b0  addiu       $a2, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->pc = 0x3FD800u;
        goto label_3fd800;
    }
    ctx->pc = 0x3FD7F8u;
    SET_GPR_U32(ctx, 31, 0x3FD800u);
    ctx->pc = 0x3FD7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD7F8u;
            // 0x3fd7fc: 0x260600b0  addiu       $a2, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD800u; }
        if (ctx->pc != 0x3FD800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD800u; }
        if (ctx->pc != 0x3FD800u) { return; }
    }
    ctx->pc = 0x3FD800u;
label_3fd800:
    // 0x3fd800: 0xc04cc14  jal         func_133050
label_3fd804:
    if (ctx->pc == 0x3FD804u) {
        ctx->pc = 0x3FD804u;
            // 0x3fd804: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3FD808u;
        goto label_3fd808;
    }
    ctx->pc = 0x3FD800u;
    SET_GPR_U32(ctx, 31, 0x3FD808u);
    ctx->pc = 0x3FD804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD800u;
            // 0x3fd804: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD808u; }
        if (ctx->pc != 0x3FD808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD808u; }
        if (ctx->pc != 0x3FD808u) { return; }
    }
    ctx->pc = 0x3FD808u;
label_3fd808:
    // 0x3fd808: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3fd808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_3fd80c:
    // 0x3fd80c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3fd80cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fd810:
    // 0x3fd810: 0x0  nop
    ctx->pc = 0x3fd810u;
    // NOP
label_3fd814:
    // 0x3fd814: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3fd814u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fd818:
    // 0x3fd818: 0x4501008e  bc1t        . + 4 + (0x8E << 2)
label_3fd81c:
    if (ctx->pc == 0x3FD81Cu) {
        ctx->pc = 0x3FD820u;
        goto label_3fd820;
    }
    ctx->pc = 0x3FD818u;
    {
        const bool branch_taken_0x3fd818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fd818) {
            ctx->pc = 0x3FDA54u;
            goto label_3fda54;
        }
    }
    ctx->pc = 0x3FD820u;
label_3fd820:
    // 0x3fd820: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x3fd820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_3fd824:
    // 0x3fd824: 0x8e0300fc  lw          $v1, 0xFC($s0)
    ctx->pc = 0x3fd824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_3fd828:
    // 0x3fd828: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x3fd828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_3fd82c:
    // 0x3fd82c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3fd82cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3fd830:
    // 0x3fd830: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_3fd834:
    if (ctx->pc == 0x3FD834u) {
        ctx->pc = 0x3FD834u;
            // 0x3fd834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FD838u;
        goto label_3fd838;
    }
    ctx->pc = 0x3FD830u;
    {
        const bool branch_taken_0x3fd830 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fd830) {
            ctx->pc = 0x3FD834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD830u;
            // 0x3fd834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FD844u;
            goto label_3fd844;
        }
    }
    ctx->pc = 0x3FD838u;
label_3fd838:
    // 0x3fd838: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3fd838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3fd83c:
    // 0x3fd83c: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x3fd83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
label_3fd840:
    // 0x3fd840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fd840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fd844:
    // 0x3fd844: 0xc0ff6dc  jal         func_3FDB70
label_3fd848:
    if (ctx->pc == 0x3FD848u) {
        ctx->pc = 0x3FD84Cu;
        goto label_3fd84c;
    }
    ctx->pc = 0x3FD844u;
    SET_GPR_U32(ctx, 31, 0x3FD84Cu);
    ctx->pc = 0x3FDB70u;
    if (runtime->hasFunction(0x3FDB70u)) {
        auto targetFn = runtime->lookupFunction(0x3FDB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD84Cu; }
        if (ctx->pc != 0x3FD84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FDB70_0x3fdb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD84Cu; }
        if (ctx->pc != 0x3FD84Cu) { return; }
    }
    ctx->pc = 0x3FD84Cu;
label_3fd84c:
    // 0x3fd84c: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x3fd84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_3fd850:
    // 0x3fd850: 0xc04cc04  jal         func_133010
label_3fd854:
    if (ctx->pc == 0x3FD854u) {
        ctx->pc = 0x3FD854u;
            // 0x3fd854: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x3FD858u;
        goto label_3fd858;
    }
    ctx->pc = 0x3FD850u;
    SET_GPR_U32(ctx, 31, 0x3FD858u);
    ctx->pc = 0x3FD854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD850u;
            // 0x3fd854: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD858u; }
        if (ctx->pc != 0x3FD858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD858u; }
        if (ctx->pc != 0x3FD858u) { return; }
    }
    ctx->pc = 0x3FD858u;
label_3fd858:
    // 0x3fd858: 0x1000007e  b           . + 4 + (0x7E << 2)
label_3fd85c:
    if (ctx->pc == 0x3FD85Cu) {
        ctx->pc = 0x3FD860u;
        goto label_3fd860;
    }
    ctx->pc = 0x3FD858u;
    {
        const bool branch_taken_0x3fd858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fd858) {
            ctx->pc = 0x3FDA54u;
            goto label_3fda54;
        }
    }
    ctx->pc = 0x3FD860u;
label_3fd860:
    // 0x3fd860: 0x3c023bc4  lui         $v0, 0x3BC4
    ctx->pc = 0x3fd860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15300 << 16));
label_3fd864:
    // 0x3fd864: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3fd864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3fd868:
    // 0x3fd868: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x3fd868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
label_3fd86c:
    // 0x3fd86c: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x3fd86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd870:
    // 0x3fd870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3fd870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fd874:
    // 0x3fd874: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3fd874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fd878:
    // 0x3fd878: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3fd878u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3fd87c:
    // 0x3fd87c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x3fd87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_3fd880:
    // 0x3fd880: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3fd880u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3fd884:
    // 0x3fd884: 0xc04cbd8  jal         func_132F60
label_3fd888:
    if (ctx->pc == 0x3FD888u) {
        ctx->pc = 0x3FD888u;
            // 0x3fd888: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3FD88Cu;
        goto label_3fd88c;
    }
    ctx->pc = 0x3FD884u;
    SET_GPR_U32(ctx, 31, 0x3FD88Cu);
    ctx->pc = 0x3FD888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD884u;
            // 0x3fd888: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD88Cu; }
        if (ctx->pc != 0x3FD88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD88Cu; }
        if (ctx->pc != 0x3FD88Cu) { return; }
    }
    ctx->pc = 0x3FD88Cu;
label_3fd88c:
    // 0x3fd88c: 0x8e11010c  lw          $s1, 0x10C($s0)
    ctx->pc = 0x3fd88cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3fd890:
    // 0x3fd890: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x3fd890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd894:
    // 0x3fd894: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3fd894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3fd898:
    // 0x3fd898: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fd898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fd89c:
    // 0x3fd89c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3fd89cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3fd8a0:
    // 0x3fd8a0: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x3fd8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
label_3fd8a4:
    // 0x3fd8a4: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x3fd8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd8a8:
    // 0x3fd8a8: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x3fd8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
label_3fd8ac:
    // 0x3fd8ac: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x3fd8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd8b0:
    // 0x3fd8b0: 0xe62000e8  swc1        $f0, 0xE8($s1)
    ctx->pc = 0x3fd8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
label_3fd8b4:
    // 0x3fd8b4: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x3fd8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd8b8:
    // 0x3fd8b8: 0xe62000ec  swc1        $f0, 0xEC($s1)
    ctx->pc = 0x3fd8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
label_3fd8bc:
    // 0x3fd8bc: 0xc62600e8  lwc1        $f6, 0xE8($s1)
    ctx->pc = 0x3fd8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3fd8c0:
    // 0x3fd8c0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3fd8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3fd8c4:
    // 0x3fd8c4: 0xc62500e4  lwc1        $f5, 0xE4($s1)
    ctx->pc = 0x3fd8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3fd8c8:
    // 0x3fd8c8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fd8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fd8cc:
    // 0x3fd8cc: 0xc62400e0  lwc1        $f4, 0xE0($s1)
    ctx->pc = 0x3fd8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fd8d0:
    // 0x3fd8d0: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x3fd8d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3fd8d4:
    // 0x3fd8d4: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x3fd8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_3fd8d8:
    // 0x3fd8d8: 0xe7a50074  swc1        $f5, 0x74($sp)
    ctx->pc = 0x3fd8d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3fd8dc:
    // 0x3fd8dc: 0xe7a60078  swc1        $f6, 0x78($sp)
    ctx->pc = 0x3fd8dcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3fd8e0:
    // 0x3fd8e0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3fd8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd8e4:
    // 0x3fd8e4: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x3fd8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd8e8:
    // 0x3fd8e8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x3fd8e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3fd8ec:
    // 0x3fd8ec: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x3fd8ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3fd8f0:
    // 0x3fd8f0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3fd8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3fd8f4:
    // 0x3fd8f4: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x3fd8f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3fd8f8:
    // 0x3fd8f8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3fd8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3fd8fc:
    // 0x3fd8fc: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x3fd8fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_3fd900:
    // 0x3fd900: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x3fd900u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3fd904:
    // 0x3fd904: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x3fd904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3fd908:
    // 0x3fd908: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x3fd908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_3fd90c:
    // 0x3fd90c: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x3fd90cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3fd910:
    // 0x3fd910: 0xc088b74  jal         func_222DD0
label_3fd914:
    if (ctx->pc == 0x3FD914u) {
        ctx->pc = 0x3FD914u;
            // 0x3fd914: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FD918u;
        goto label_3fd918;
    }
    ctx->pc = 0x3FD910u;
    SET_GPR_U32(ctx, 31, 0x3FD918u);
    ctx->pc = 0x3FD914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD910u;
            // 0x3fd914: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD918u; }
        if (ctx->pc != 0x3FD918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD918u; }
        if (ctx->pc != 0x3FD918u) { return; }
    }
    ctx->pc = 0x3FD918u;
label_3fd918:
    // 0x3fd918: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x3fd918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_3fd91c:
    // 0x3fd91c: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x3fd91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_3fd920:
    // 0x3fd920: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3fd920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3fd924:
    // 0x3fd924: 0x320f809  jalr        $t9
label_3fd928:
    if (ctx->pc == 0x3FD928u) {
        ctx->pc = 0x3FD928u;
            // 0x3fd928: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3FD92Cu;
        goto label_3fd92c;
    }
    ctx->pc = 0x3FD924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FD92Cu);
        ctx->pc = 0x3FD928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD924u;
            // 0x3fd928: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FD92Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FD92Cu; }
            if (ctx->pc != 0x3FD92Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3FD92Cu;
label_3fd92c:
    // 0x3fd92c: 0xc088b74  jal         func_222DD0
label_3fd930:
    if (ctx->pc == 0x3FD930u) {
        ctx->pc = 0x3FD930u;
            // 0x3fd930: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x3FD934u;
        goto label_3fd934;
    }
    ctx->pc = 0x3FD92Cu;
    SET_GPR_U32(ctx, 31, 0x3FD934u);
    ctx->pc = 0x3FD930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD92Cu;
            // 0x3fd930: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD934u; }
        if (ctx->pc != 0x3FD934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD934u; }
        if (ctx->pc != 0x3FD934u) { return; }
    }
    ctx->pc = 0x3FD934u;
label_3fd934:
    // 0x3fd934: 0x8e110110  lw          $s1, 0x110($s0)
    ctx->pc = 0x3fd934u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_3fd938:
    // 0x3fd938: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x3fd938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd93c:
    // 0x3fd93c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3fd93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3fd940:
    // 0x3fd940: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fd940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fd944:
    // 0x3fd944: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3fd944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3fd948:
    // 0x3fd948: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x3fd948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
label_3fd94c:
    // 0x3fd94c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x3fd94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd950:
    // 0x3fd950: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x3fd950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
label_3fd954:
    // 0x3fd954: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x3fd954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd958:
    // 0x3fd958: 0xe62000e8  swc1        $f0, 0xE8($s1)
    ctx->pc = 0x3fd958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
label_3fd95c:
    // 0x3fd95c: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x3fd95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd960:
    // 0x3fd960: 0xe62000ec  swc1        $f0, 0xEC($s1)
    ctx->pc = 0x3fd960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
label_3fd964:
    // 0x3fd964: 0xc62600e8  lwc1        $f6, 0xE8($s1)
    ctx->pc = 0x3fd964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3fd968:
    // 0x3fd968: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3fd968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3fd96c:
    // 0x3fd96c: 0xc62500e4  lwc1        $f5, 0xE4($s1)
    ctx->pc = 0x3fd96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3fd970:
    // 0x3fd970: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fd970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fd974:
    // 0x3fd974: 0xc62400e0  lwc1        $f4, 0xE0($s1)
    ctx->pc = 0x3fd974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3fd978:
    // 0x3fd978: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x3fd978u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3fd97c:
    // 0x3fd97c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x3fd97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_3fd980:
    // 0x3fd980: 0xe7a50064  swc1        $f5, 0x64($sp)
    ctx->pc = 0x3fd980u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3fd984:
    // 0x3fd984: 0xe7a60068  swc1        $f6, 0x68($sp)
    ctx->pc = 0x3fd984u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3fd988:
    // 0x3fd988: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3fd988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd98c:
    // 0x3fd98c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x3fd98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3fd990:
    // 0x3fd990: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x3fd990u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3fd994:
    // 0x3fd994: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x3fd994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3fd998:
    // 0x3fd998: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3fd998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3fd99c:
    // 0x3fd99c: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x3fd99cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3fd9a0:
    // 0x3fd9a0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3fd9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3fd9a4:
    // 0x3fd9a4: 0x46023042  mul.s       $f1, $f6, $f2
    ctx->pc = 0x3fd9a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_3fd9a8:
    // 0x3fd9a8: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x3fd9a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3fd9ac:
    // 0x3fd9ac: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x3fd9acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3fd9b0:
    // 0x3fd9b0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x3fd9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_3fd9b4:
    // 0x3fd9b4: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x3fd9b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3fd9b8:
    // 0x3fd9b8: 0xc088b74  jal         func_222DD0
label_3fd9bc:
    if (ctx->pc == 0x3FD9BCu) {
        ctx->pc = 0x3FD9BCu;
            // 0x3fd9bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FD9C0u;
        goto label_3fd9c0;
    }
    ctx->pc = 0x3FD9B8u;
    SET_GPR_U32(ctx, 31, 0x3FD9C0u);
    ctx->pc = 0x3FD9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD9B8u;
            // 0x3fd9bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD9C0u; }
        if (ctx->pc != 0x3FD9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD9C0u; }
        if (ctx->pc != 0x3FD9C0u) { return; }
    }
    ctx->pc = 0x3FD9C0u;
label_3fd9c0:
    // 0x3fd9c0: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x3fd9c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_3fd9c4:
    // 0x3fd9c4: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x3fd9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_3fd9c8:
    // 0x3fd9c8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3fd9c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3fd9cc:
    // 0x3fd9cc: 0x320f809  jalr        $t9
label_3fd9d0:
    if (ctx->pc == 0x3FD9D0u) {
        ctx->pc = 0x3FD9D0u;
            // 0x3fd9d0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3FD9D4u;
        goto label_3fd9d4;
    }
    ctx->pc = 0x3FD9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FD9D4u);
        ctx->pc = 0x3FD9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD9CCu;
            // 0x3fd9d0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FD9D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FD9D4u; }
            if (ctx->pc != 0x3FD9D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3FD9D4u;
label_3fd9d4:
    // 0x3fd9d4: 0xc088b74  jal         func_222DD0
label_3fd9d8:
    if (ctx->pc == 0x3FD9D8u) {
        ctx->pc = 0x3FD9D8u;
            // 0x3fd9d8: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x3FD9DCu;
        goto label_3fd9dc;
    }
    ctx->pc = 0x3FD9D4u;
    SET_GPR_U32(ctx, 31, 0x3FD9DCu);
    ctx->pc = 0x3FD9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD9D4u;
            // 0x3fd9d8: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD9DCu; }
        if (ctx->pc != 0x3FD9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FD9DCu; }
        if (ctx->pc != 0x3FD9DCu) { return; }
    }
    ctx->pc = 0x3FD9DCu;
label_3fd9dc:
    // 0x3fd9dc: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x3fd9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_3fd9e0:
    // 0x3fd9e0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3fd9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_3fd9e4:
    // 0x3fd9e4: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x3fd9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fd9e8:
    // 0x3fd9e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3fd9e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fd9ec:
    // 0x3fd9ec: 0x0  nop
    ctx->pc = 0x3fd9ecu;
    // NOP
label_3fd9f0:
    // 0x3fd9f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3fd9f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fd9f4:
    // 0x3fd9f4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_3fd9f8:
    if (ctx->pc == 0x3FD9F8u) {
        ctx->pc = 0x3FD9F8u;
            // 0x3fd9f8: 0xc6010094  lwc1        $f1, 0x94($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3FD9FCu;
        goto label_3fd9fc;
    }
    ctx->pc = 0x3FD9F4u;
    {
        const bool branch_taken_0x3fd9f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fd9f4) {
            ctx->pc = 0x3FD9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD9F4u;
            // 0x3fd9f8: 0xc6010094  lwc1        $f1, 0x94($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FDA08u;
            goto label_3fda08;
        }
    }
    ctx->pc = 0x3FD9FCu;
label_3fd9fc:
    // 0x3fd9fc: 0xc0ff6a0  jal         func_3FDA80
label_3fda00:
    if (ctx->pc == 0x3FDA00u) {
        ctx->pc = 0x3FDA00u;
            // 0x3fda00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FDA04u;
        goto label_3fda04;
    }
    ctx->pc = 0x3FD9FCu;
    SET_GPR_U32(ctx, 31, 0x3FDA04u);
    ctx->pc = 0x3FDA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FD9FCu;
            // 0x3fda00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FDA80u;
    if (runtime->hasFunction(0x3FDA80u)) {
        auto targetFn = runtime->lookupFunction(0x3FDA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDA04u; }
        if (ctx->pc != 0x3FDA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FDA80_0x3fda80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDA04u; }
        if (ctx->pc != 0x3FDA04u) { return; }
    }
    ctx->pc = 0x3FDA04u;
label_3fda04:
    // 0x3fda04: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x3fda04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3fda08:
    // 0x3fda08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3fda08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fda0c:
    // 0x3fda0c: 0x0  nop
    ctx->pc = 0x3fda0cu;
    // NOP
label_3fda10:
    // 0x3fda10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3fda10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fda14:
    // 0x3fda14: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_3fda18:
    if (ctx->pc == 0x3FDA18u) {
        ctx->pc = 0x3FDA1Cu;
        goto label_3fda1c;
    }
    ctx->pc = 0x3FDA14u;
    {
        const bool branch_taken_0x3fda14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3fda14) {
            ctx->pc = 0x3FDA54u;
            goto label_3fda54;
        }
    }
    ctx->pc = 0x3FDA1Cu;
label_3fda1c:
    // 0x3fda1c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3fda1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3fda20:
    // 0x3fda20: 0x1000000c  b           . + 4 + (0xC << 2)
label_3fda24:
    if (ctx->pc == 0x3FDA24u) {
        ctx->pc = 0x3FDA24u;
            // 0x3fda24: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->pc = 0x3FDA28u;
        goto label_3fda28;
    }
    ctx->pc = 0x3FDA20u;
    {
        const bool branch_taken_0x3fda20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDA20u;
            // 0x3fda24: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fda20) {
            ctx->pc = 0x3FDA54u;
            goto label_3fda54;
        }
    }
    ctx->pc = 0x3FDA28u;
label_3fda28:
    // 0x3fda28: 0xc0ff6a0  jal         func_3FDA80
label_3fda2c:
    if (ctx->pc == 0x3FDA2Cu) {
        ctx->pc = 0x3FDA30u;
        goto label_3fda30;
    }
    ctx->pc = 0x3FDA28u;
    SET_GPR_U32(ctx, 31, 0x3FDA30u);
    ctx->pc = 0x3FDA80u;
    if (runtime->hasFunction(0x3FDA80u)) {
        auto targetFn = runtime->lookupFunction(0x3FDA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDA30u; }
        if (ctx->pc != 0x3FDA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FDA80_0x3fda80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FDA30u; }
        if (ctx->pc != 0x3FDA30u) { return; }
    }
    ctx->pc = 0x3FDA30u;
label_3fda30:
    // 0x3fda30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3fda30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fda34:
    // 0x3fda34: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3fda34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3fda38:
    // 0x3fda38: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x3fda38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
label_3fda3c:
    // 0x3fda3c: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x3fda3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_3fda40:
    // 0x3fda40: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x3fda40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
label_3fda44:
    // 0x3fda44: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x3fda44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_3fda48:
    // 0x3fda48: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x3fda48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
label_3fda4c:
    // 0x3fda4c: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x3fda4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_3fda50:
    // 0x3fda50: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x3fda50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_3fda54:
    // 0x3fda54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3fda54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3fda58:
    // 0x3fda58: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3fda58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3fda5c:
    // 0x3fda5c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3fda5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3fda60:
    // 0x3fda60: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3fda60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fda64:
    // 0x3fda64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3fda64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fda68:
    // 0x3fda68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3fda68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fda6c:
    // 0x3fda6c: 0x3e00008  jr          $ra
label_3fda70:
    if (ctx->pc == 0x3FDA70u) {
        ctx->pc = 0x3FDA70u;
            // 0x3fda70: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3FDA74u;
        goto label_3fda74;
    }
    ctx->pc = 0x3FDA6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FDA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FDA6Cu;
            // 0x3fda70: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FDA74u;
label_3fda74:
    // 0x3fda74: 0x0  nop
    ctx->pc = 0x3fda74u;
    // NOP
label_3fda78:
    // 0x3fda78: 0x0  nop
    ctx->pc = 0x3fda78u;
    // NOP
label_3fda7c:
    // 0x3fda7c: 0x0  nop
    ctx->pc = 0x3fda7cu;
    // NOP
}
