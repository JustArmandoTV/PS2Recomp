#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DCFC0
// Address: 0x4dcfc0 - 0x4dd680
void sub_004DCFC0_0x4dcfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DCFC0_0x4dcfc0");
#endif

    switch (ctx->pc) {
        case 0x4dcfc0u: goto label_4dcfc0;
        case 0x4dcfc4u: goto label_4dcfc4;
        case 0x4dcfc8u: goto label_4dcfc8;
        case 0x4dcfccu: goto label_4dcfcc;
        case 0x4dcfd0u: goto label_4dcfd0;
        case 0x4dcfd4u: goto label_4dcfd4;
        case 0x4dcfd8u: goto label_4dcfd8;
        case 0x4dcfdcu: goto label_4dcfdc;
        case 0x4dcfe0u: goto label_4dcfe0;
        case 0x4dcfe4u: goto label_4dcfe4;
        case 0x4dcfe8u: goto label_4dcfe8;
        case 0x4dcfecu: goto label_4dcfec;
        case 0x4dcff0u: goto label_4dcff0;
        case 0x4dcff4u: goto label_4dcff4;
        case 0x4dcff8u: goto label_4dcff8;
        case 0x4dcffcu: goto label_4dcffc;
        case 0x4dd000u: goto label_4dd000;
        case 0x4dd004u: goto label_4dd004;
        case 0x4dd008u: goto label_4dd008;
        case 0x4dd00cu: goto label_4dd00c;
        case 0x4dd010u: goto label_4dd010;
        case 0x4dd014u: goto label_4dd014;
        case 0x4dd018u: goto label_4dd018;
        case 0x4dd01cu: goto label_4dd01c;
        case 0x4dd020u: goto label_4dd020;
        case 0x4dd024u: goto label_4dd024;
        case 0x4dd028u: goto label_4dd028;
        case 0x4dd02cu: goto label_4dd02c;
        case 0x4dd030u: goto label_4dd030;
        case 0x4dd034u: goto label_4dd034;
        case 0x4dd038u: goto label_4dd038;
        case 0x4dd03cu: goto label_4dd03c;
        case 0x4dd040u: goto label_4dd040;
        case 0x4dd044u: goto label_4dd044;
        case 0x4dd048u: goto label_4dd048;
        case 0x4dd04cu: goto label_4dd04c;
        case 0x4dd050u: goto label_4dd050;
        case 0x4dd054u: goto label_4dd054;
        case 0x4dd058u: goto label_4dd058;
        case 0x4dd05cu: goto label_4dd05c;
        case 0x4dd060u: goto label_4dd060;
        case 0x4dd064u: goto label_4dd064;
        case 0x4dd068u: goto label_4dd068;
        case 0x4dd06cu: goto label_4dd06c;
        case 0x4dd070u: goto label_4dd070;
        case 0x4dd074u: goto label_4dd074;
        case 0x4dd078u: goto label_4dd078;
        case 0x4dd07cu: goto label_4dd07c;
        case 0x4dd080u: goto label_4dd080;
        case 0x4dd084u: goto label_4dd084;
        case 0x4dd088u: goto label_4dd088;
        case 0x4dd08cu: goto label_4dd08c;
        case 0x4dd090u: goto label_4dd090;
        case 0x4dd094u: goto label_4dd094;
        case 0x4dd098u: goto label_4dd098;
        case 0x4dd09cu: goto label_4dd09c;
        case 0x4dd0a0u: goto label_4dd0a0;
        case 0x4dd0a4u: goto label_4dd0a4;
        case 0x4dd0a8u: goto label_4dd0a8;
        case 0x4dd0acu: goto label_4dd0ac;
        case 0x4dd0b0u: goto label_4dd0b0;
        case 0x4dd0b4u: goto label_4dd0b4;
        case 0x4dd0b8u: goto label_4dd0b8;
        case 0x4dd0bcu: goto label_4dd0bc;
        case 0x4dd0c0u: goto label_4dd0c0;
        case 0x4dd0c4u: goto label_4dd0c4;
        case 0x4dd0c8u: goto label_4dd0c8;
        case 0x4dd0ccu: goto label_4dd0cc;
        case 0x4dd0d0u: goto label_4dd0d0;
        case 0x4dd0d4u: goto label_4dd0d4;
        case 0x4dd0d8u: goto label_4dd0d8;
        case 0x4dd0dcu: goto label_4dd0dc;
        case 0x4dd0e0u: goto label_4dd0e0;
        case 0x4dd0e4u: goto label_4dd0e4;
        case 0x4dd0e8u: goto label_4dd0e8;
        case 0x4dd0ecu: goto label_4dd0ec;
        case 0x4dd0f0u: goto label_4dd0f0;
        case 0x4dd0f4u: goto label_4dd0f4;
        case 0x4dd0f8u: goto label_4dd0f8;
        case 0x4dd0fcu: goto label_4dd0fc;
        case 0x4dd100u: goto label_4dd100;
        case 0x4dd104u: goto label_4dd104;
        case 0x4dd108u: goto label_4dd108;
        case 0x4dd10cu: goto label_4dd10c;
        case 0x4dd110u: goto label_4dd110;
        case 0x4dd114u: goto label_4dd114;
        case 0x4dd118u: goto label_4dd118;
        case 0x4dd11cu: goto label_4dd11c;
        case 0x4dd120u: goto label_4dd120;
        case 0x4dd124u: goto label_4dd124;
        case 0x4dd128u: goto label_4dd128;
        case 0x4dd12cu: goto label_4dd12c;
        case 0x4dd130u: goto label_4dd130;
        case 0x4dd134u: goto label_4dd134;
        case 0x4dd138u: goto label_4dd138;
        case 0x4dd13cu: goto label_4dd13c;
        case 0x4dd140u: goto label_4dd140;
        case 0x4dd144u: goto label_4dd144;
        case 0x4dd148u: goto label_4dd148;
        case 0x4dd14cu: goto label_4dd14c;
        case 0x4dd150u: goto label_4dd150;
        case 0x4dd154u: goto label_4dd154;
        case 0x4dd158u: goto label_4dd158;
        case 0x4dd15cu: goto label_4dd15c;
        case 0x4dd160u: goto label_4dd160;
        case 0x4dd164u: goto label_4dd164;
        case 0x4dd168u: goto label_4dd168;
        case 0x4dd16cu: goto label_4dd16c;
        case 0x4dd170u: goto label_4dd170;
        case 0x4dd174u: goto label_4dd174;
        case 0x4dd178u: goto label_4dd178;
        case 0x4dd17cu: goto label_4dd17c;
        case 0x4dd180u: goto label_4dd180;
        case 0x4dd184u: goto label_4dd184;
        case 0x4dd188u: goto label_4dd188;
        case 0x4dd18cu: goto label_4dd18c;
        case 0x4dd190u: goto label_4dd190;
        case 0x4dd194u: goto label_4dd194;
        case 0x4dd198u: goto label_4dd198;
        case 0x4dd19cu: goto label_4dd19c;
        case 0x4dd1a0u: goto label_4dd1a0;
        case 0x4dd1a4u: goto label_4dd1a4;
        case 0x4dd1a8u: goto label_4dd1a8;
        case 0x4dd1acu: goto label_4dd1ac;
        case 0x4dd1b0u: goto label_4dd1b0;
        case 0x4dd1b4u: goto label_4dd1b4;
        case 0x4dd1b8u: goto label_4dd1b8;
        case 0x4dd1bcu: goto label_4dd1bc;
        case 0x4dd1c0u: goto label_4dd1c0;
        case 0x4dd1c4u: goto label_4dd1c4;
        case 0x4dd1c8u: goto label_4dd1c8;
        case 0x4dd1ccu: goto label_4dd1cc;
        case 0x4dd1d0u: goto label_4dd1d0;
        case 0x4dd1d4u: goto label_4dd1d4;
        case 0x4dd1d8u: goto label_4dd1d8;
        case 0x4dd1dcu: goto label_4dd1dc;
        case 0x4dd1e0u: goto label_4dd1e0;
        case 0x4dd1e4u: goto label_4dd1e4;
        case 0x4dd1e8u: goto label_4dd1e8;
        case 0x4dd1ecu: goto label_4dd1ec;
        case 0x4dd1f0u: goto label_4dd1f0;
        case 0x4dd1f4u: goto label_4dd1f4;
        case 0x4dd1f8u: goto label_4dd1f8;
        case 0x4dd1fcu: goto label_4dd1fc;
        case 0x4dd200u: goto label_4dd200;
        case 0x4dd204u: goto label_4dd204;
        case 0x4dd208u: goto label_4dd208;
        case 0x4dd20cu: goto label_4dd20c;
        case 0x4dd210u: goto label_4dd210;
        case 0x4dd214u: goto label_4dd214;
        case 0x4dd218u: goto label_4dd218;
        case 0x4dd21cu: goto label_4dd21c;
        case 0x4dd220u: goto label_4dd220;
        case 0x4dd224u: goto label_4dd224;
        case 0x4dd228u: goto label_4dd228;
        case 0x4dd22cu: goto label_4dd22c;
        case 0x4dd230u: goto label_4dd230;
        case 0x4dd234u: goto label_4dd234;
        case 0x4dd238u: goto label_4dd238;
        case 0x4dd23cu: goto label_4dd23c;
        case 0x4dd240u: goto label_4dd240;
        case 0x4dd244u: goto label_4dd244;
        case 0x4dd248u: goto label_4dd248;
        case 0x4dd24cu: goto label_4dd24c;
        case 0x4dd250u: goto label_4dd250;
        case 0x4dd254u: goto label_4dd254;
        case 0x4dd258u: goto label_4dd258;
        case 0x4dd25cu: goto label_4dd25c;
        case 0x4dd260u: goto label_4dd260;
        case 0x4dd264u: goto label_4dd264;
        case 0x4dd268u: goto label_4dd268;
        case 0x4dd26cu: goto label_4dd26c;
        case 0x4dd270u: goto label_4dd270;
        case 0x4dd274u: goto label_4dd274;
        case 0x4dd278u: goto label_4dd278;
        case 0x4dd27cu: goto label_4dd27c;
        case 0x4dd280u: goto label_4dd280;
        case 0x4dd284u: goto label_4dd284;
        case 0x4dd288u: goto label_4dd288;
        case 0x4dd28cu: goto label_4dd28c;
        case 0x4dd290u: goto label_4dd290;
        case 0x4dd294u: goto label_4dd294;
        case 0x4dd298u: goto label_4dd298;
        case 0x4dd29cu: goto label_4dd29c;
        case 0x4dd2a0u: goto label_4dd2a0;
        case 0x4dd2a4u: goto label_4dd2a4;
        case 0x4dd2a8u: goto label_4dd2a8;
        case 0x4dd2acu: goto label_4dd2ac;
        case 0x4dd2b0u: goto label_4dd2b0;
        case 0x4dd2b4u: goto label_4dd2b4;
        case 0x4dd2b8u: goto label_4dd2b8;
        case 0x4dd2bcu: goto label_4dd2bc;
        case 0x4dd2c0u: goto label_4dd2c0;
        case 0x4dd2c4u: goto label_4dd2c4;
        case 0x4dd2c8u: goto label_4dd2c8;
        case 0x4dd2ccu: goto label_4dd2cc;
        case 0x4dd2d0u: goto label_4dd2d0;
        case 0x4dd2d4u: goto label_4dd2d4;
        case 0x4dd2d8u: goto label_4dd2d8;
        case 0x4dd2dcu: goto label_4dd2dc;
        case 0x4dd2e0u: goto label_4dd2e0;
        case 0x4dd2e4u: goto label_4dd2e4;
        case 0x4dd2e8u: goto label_4dd2e8;
        case 0x4dd2ecu: goto label_4dd2ec;
        case 0x4dd2f0u: goto label_4dd2f0;
        case 0x4dd2f4u: goto label_4dd2f4;
        case 0x4dd2f8u: goto label_4dd2f8;
        case 0x4dd2fcu: goto label_4dd2fc;
        case 0x4dd300u: goto label_4dd300;
        case 0x4dd304u: goto label_4dd304;
        case 0x4dd308u: goto label_4dd308;
        case 0x4dd30cu: goto label_4dd30c;
        case 0x4dd310u: goto label_4dd310;
        case 0x4dd314u: goto label_4dd314;
        case 0x4dd318u: goto label_4dd318;
        case 0x4dd31cu: goto label_4dd31c;
        case 0x4dd320u: goto label_4dd320;
        case 0x4dd324u: goto label_4dd324;
        case 0x4dd328u: goto label_4dd328;
        case 0x4dd32cu: goto label_4dd32c;
        case 0x4dd330u: goto label_4dd330;
        case 0x4dd334u: goto label_4dd334;
        case 0x4dd338u: goto label_4dd338;
        case 0x4dd33cu: goto label_4dd33c;
        case 0x4dd340u: goto label_4dd340;
        case 0x4dd344u: goto label_4dd344;
        case 0x4dd348u: goto label_4dd348;
        case 0x4dd34cu: goto label_4dd34c;
        case 0x4dd350u: goto label_4dd350;
        case 0x4dd354u: goto label_4dd354;
        case 0x4dd358u: goto label_4dd358;
        case 0x4dd35cu: goto label_4dd35c;
        case 0x4dd360u: goto label_4dd360;
        case 0x4dd364u: goto label_4dd364;
        case 0x4dd368u: goto label_4dd368;
        case 0x4dd36cu: goto label_4dd36c;
        case 0x4dd370u: goto label_4dd370;
        case 0x4dd374u: goto label_4dd374;
        case 0x4dd378u: goto label_4dd378;
        case 0x4dd37cu: goto label_4dd37c;
        case 0x4dd380u: goto label_4dd380;
        case 0x4dd384u: goto label_4dd384;
        case 0x4dd388u: goto label_4dd388;
        case 0x4dd38cu: goto label_4dd38c;
        case 0x4dd390u: goto label_4dd390;
        case 0x4dd394u: goto label_4dd394;
        case 0x4dd398u: goto label_4dd398;
        case 0x4dd39cu: goto label_4dd39c;
        case 0x4dd3a0u: goto label_4dd3a0;
        case 0x4dd3a4u: goto label_4dd3a4;
        case 0x4dd3a8u: goto label_4dd3a8;
        case 0x4dd3acu: goto label_4dd3ac;
        case 0x4dd3b0u: goto label_4dd3b0;
        case 0x4dd3b4u: goto label_4dd3b4;
        case 0x4dd3b8u: goto label_4dd3b8;
        case 0x4dd3bcu: goto label_4dd3bc;
        case 0x4dd3c0u: goto label_4dd3c0;
        case 0x4dd3c4u: goto label_4dd3c4;
        case 0x4dd3c8u: goto label_4dd3c8;
        case 0x4dd3ccu: goto label_4dd3cc;
        case 0x4dd3d0u: goto label_4dd3d0;
        case 0x4dd3d4u: goto label_4dd3d4;
        case 0x4dd3d8u: goto label_4dd3d8;
        case 0x4dd3dcu: goto label_4dd3dc;
        case 0x4dd3e0u: goto label_4dd3e0;
        case 0x4dd3e4u: goto label_4dd3e4;
        case 0x4dd3e8u: goto label_4dd3e8;
        case 0x4dd3ecu: goto label_4dd3ec;
        case 0x4dd3f0u: goto label_4dd3f0;
        case 0x4dd3f4u: goto label_4dd3f4;
        case 0x4dd3f8u: goto label_4dd3f8;
        case 0x4dd3fcu: goto label_4dd3fc;
        case 0x4dd400u: goto label_4dd400;
        case 0x4dd404u: goto label_4dd404;
        case 0x4dd408u: goto label_4dd408;
        case 0x4dd40cu: goto label_4dd40c;
        case 0x4dd410u: goto label_4dd410;
        case 0x4dd414u: goto label_4dd414;
        case 0x4dd418u: goto label_4dd418;
        case 0x4dd41cu: goto label_4dd41c;
        case 0x4dd420u: goto label_4dd420;
        case 0x4dd424u: goto label_4dd424;
        case 0x4dd428u: goto label_4dd428;
        case 0x4dd42cu: goto label_4dd42c;
        case 0x4dd430u: goto label_4dd430;
        case 0x4dd434u: goto label_4dd434;
        case 0x4dd438u: goto label_4dd438;
        case 0x4dd43cu: goto label_4dd43c;
        case 0x4dd440u: goto label_4dd440;
        case 0x4dd444u: goto label_4dd444;
        case 0x4dd448u: goto label_4dd448;
        case 0x4dd44cu: goto label_4dd44c;
        case 0x4dd450u: goto label_4dd450;
        case 0x4dd454u: goto label_4dd454;
        case 0x4dd458u: goto label_4dd458;
        case 0x4dd45cu: goto label_4dd45c;
        case 0x4dd460u: goto label_4dd460;
        case 0x4dd464u: goto label_4dd464;
        case 0x4dd468u: goto label_4dd468;
        case 0x4dd46cu: goto label_4dd46c;
        case 0x4dd470u: goto label_4dd470;
        case 0x4dd474u: goto label_4dd474;
        case 0x4dd478u: goto label_4dd478;
        case 0x4dd47cu: goto label_4dd47c;
        case 0x4dd480u: goto label_4dd480;
        case 0x4dd484u: goto label_4dd484;
        case 0x4dd488u: goto label_4dd488;
        case 0x4dd48cu: goto label_4dd48c;
        case 0x4dd490u: goto label_4dd490;
        case 0x4dd494u: goto label_4dd494;
        case 0x4dd498u: goto label_4dd498;
        case 0x4dd49cu: goto label_4dd49c;
        case 0x4dd4a0u: goto label_4dd4a0;
        case 0x4dd4a4u: goto label_4dd4a4;
        case 0x4dd4a8u: goto label_4dd4a8;
        case 0x4dd4acu: goto label_4dd4ac;
        case 0x4dd4b0u: goto label_4dd4b0;
        case 0x4dd4b4u: goto label_4dd4b4;
        case 0x4dd4b8u: goto label_4dd4b8;
        case 0x4dd4bcu: goto label_4dd4bc;
        case 0x4dd4c0u: goto label_4dd4c0;
        case 0x4dd4c4u: goto label_4dd4c4;
        case 0x4dd4c8u: goto label_4dd4c8;
        case 0x4dd4ccu: goto label_4dd4cc;
        case 0x4dd4d0u: goto label_4dd4d0;
        case 0x4dd4d4u: goto label_4dd4d4;
        case 0x4dd4d8u: goto label_4dd4d8;
        case 0x4dd4dcu: goto label_4dd4dc;
        case 0x4dd4e0u: goto label_4dd4e0;
        case 0x4dd4e4u: goto label_4dd4e4;
        case 0x4dd4e8u: goto label_4dd4e8;
        case 0x4dd4ecu: goto label_4dd4ec;
        case 0x4dd4f0u: goto label_4dd4f0;
        case 0x4dd4f4u: goto label_4dd4f4;
        case 0x4dd4f8u: goto label_4dd4f8;
        case 0x4dd4fcu: goto label_4dd4fc;
        case 0x4dd500u: goto label_4dd500;
        case 0x4dd504u: goto label_4dd504;
        case 0x4dd508u: goto label_4dd508;
        case 0x4dd50cu: goto label_4dd50c;
        case 0x4dd510u: goto label_4dd510;
        case 0x4dd514u: goto label_4dd514;
        case 0x4dd518u: goto label_4dd518;
        case 0x4dd51cu: goto label_4dd51c;
        case 0x4dd520u: goto label_4dd520;
        case 0x4dd524u: goto label_4dd524;
        case 0x4dd528u: goto label_4dd528;
        case 0x4dd52cu: goto label_4dd52c;
        case 0x4dd530u: goto label_4dd530;
        case 0x4dd534u: goto label_4dd534;
        case 0x4dd538u: goto label_4dd538;
        case 0x4dd53cu: goto label_4dd53c;
        case 0x4dd540u: goto label_4dd540;
        case 0x4dd544u: goto label_4dd544;
        case 0x4dd548u: goto label_4dd548;
        case 0x4dd54cu: goto label_4dd54c;
        case 0x4dd550u: goto label_4dd550;
        case 0x4dd554u: goto label_4dd554;
        case 0x4dd558u: goto label_4dd558;
        case 0x4dd55cu: goto label_4dd55c;
        case 0x4dd560u: goto label_4dd560;
        case 0x4dd564u: goto label_4dd564;
        case 0x4dd568u: goto label_4dd568;
        case 0x4dd56cu: goto label_4dd56c;
        case 0x4dd570u: goto label_4dd570;
        case 0x4dd574u: goto label_4dd574;
        case 0x4dd578u: goto label_4dd578;
        case 0x4dd57cu: goto label_4dd57c;
        case 0x4dd580u: goto label_4dd580;
        case 0x4dd584u: goto label_4dd584;
        case 0x4dd588u: goto label_4dd588;
        case 0x4dd58cu: goto label_4dd58c;
        case 0x4dd590u: goto label_4dd590;
        case 0x4dd594u: goto label_4dd594;
        case 0x4dd598u: goto label_4dd598;
        case 0x4dd59cu: goto label_4dd59c;
        case 0x4dd5a0u: goto label_4dd5a0;
        case 0x4dd5a4u: goto label_4dd5a4;
        case 0x4dd5a8u: goto label_4dd5a8;
        case 0x4dd5acu: goto label_4dd5ac;
        case 0x4dd5b0u: goto label_4dd5b0;
        case 0x4dd5b4u: goto label_4dd5b4;
        case 0x4dd5b8u: goto label_4dd5b8;
        case 0x4dd5bcu: goto label_4dd5bc;
        case 0x4dd5c0u: goto label_4dd5c0;
        case 0x4dd5c4u: goto label_4dd5c4;
        case 0x4dd5c8u: goto label_4dd5c8;
        case 0x4dd5ccu: goto label_4dd5cc;
        case 0x4dd5d0u: goto label_4dd5d0;
        case 0x4dd5d4u: goto label_4dd5d4;
        case 0x4dd5d8u: goto label_4dd5d8;
        case 0x4dd5dcu: goto label_4dd5dc;
        case 0x4dd5e0u: goto label_4dd5e0;
        case 0x4dd5e4u: goto label_4dd5e4;
        case 0x4dd5e8u: goto label_4dd5e8;
        case 0x4dd5ecu: goto label_4dd5ec;
        case 0x4dd5f0u: goto label_4dd5f0;
        case 0x4dd5f4u: goto label_4dd5f4;
        case 0x4dd5f8u: goto label_4dd5f8;
        case 0x4dd5fcu: goto label_4dd5fc;
        case 0x4dd600u: goto label_4dd600;
        case 0x4dd604u: goto label_4dd604;
        case 0x4dd608u: goto label_4dd608;
        case 0x4dd60cu: goto label_4dd60c;
        case 0x4dd610u: goto label_4dd610;
        case 0x4dd614u: goto label_4dd614;
        case 0x4dd618u: goto label_4dd618;
        case 0x4dd61cu: goto label_4dd61c;
        case 0x4dd620u: goto label_4dd620;
        case 0x4dd624u: goto label_4dd624;
        case 0x4dd628u: goto label_4dd628;
        case 0x4dd62cu: goto label_4dd62c;
        case 0x4dd630u: goto label_4dd630;
        case 0x4dd634u: goto label_4dd634;
        case 0x4dd638u: goto label_4dd638;
        case 0x4dd63cu: goto label_4dd63c;
        case 0x4dd640u: goto label_4dd640;
        case 0x4dd644u: goto label_4dd644;
        case 0x4dd648u: goto label_4dd648;
        case 0x4dd64cu: goto label_4dd64c;
        case 0x4dd650u: goto label_4dd650;
        case 0x4dd654u: goto label_4dd654;
        case 0x4dd658u: goto label_4dd658;
        case 0x4dd65cu: goto label_4dd65c;
        case 0x4dd660u: goto label_4dd660;
        case 0x4dd664u: goto label_4dd664;
        case 0x4dd668u: goto label_4dd668;
        case 0x4dd66cu: goto label_4dd66c;
        case 0x4dd670u: goto label_4dd670;
        case 0x4dd674u: goto label_4dd674;
        case 0x4dd678u: goto label_4dd678;
        case 0x4dd67cu: goto label_4dd67c;
        default: break;
    }

    ctx->pc = 0x4dcfc0u;

label_4dcfc0:
    // 0x4dcfc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4dcfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4dcfc4:
    // 0x4dcfc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4dcfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4dcfc8:
    // 0x4dcfc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dcfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dcfcc:
    // 0x4dcfcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dcfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dcfd0:
    // 0x4dcfd0: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_4dcfd4:
    if (ctx->pc == 0x4DCFD4u) {
        ctx->pc = 0x4DCFD4u;
            // 0x4dcfd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DCFD8u;
        goto label_4dcfd8;
    }
    ctx->pc = 0x4DCFD0u;
    {
        const bool branch_taken_0x4dcfd0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4DCFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCFD0u;
            // 0x4dcfd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcfd0) {
            ctx->pc = 0x4DCFE4u;
            goto label_4dcfe4;
        }
    }
    ctx->pc = 0x4DCFD8u;
label_4dcfd8:
    // 0x4dcfd8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4dcfd8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dcfdc:
    // 0x4dcfdc: 0x10000008  b           . + 4 + (0x8 << 2)
label_4dcfe0:
    if (ctx->pc == 0x4DCFE0u) {
        ctx->pc = 0x4DCFE0u;
            // 0x4dcfe0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4DCFE4u;
        goto label_4dcfe4;
    }
    ctx->pc = 0x4DCFDCu;
    {
        const bool branch_taken_0x4dcfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DCFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCFDCu;
            // 0x4dcfe0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcfdc) {
            ctx->pc = 0x4DD000u;
            goto label_4dd000;
        }
    }
    ctx->pc = 0x4DCFE4u;
label_4dcfe4:
    // 0x4dcfe4: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x4dcfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_4dcfe8:
    // 0x4dcfe8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x4dcfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_4dcfec:
    // 0x4dcfec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4dcfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4dcff0:
    // 0x4dcff0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4dcff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dcff4:
    // 0x4dcff4: 0x0  nop
    ctx->pc = 0x4dcff4u;
    // NOP
label_4dcff8:
    // 0x4dcff8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4dcff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4dcffc:
    // 0x4dcffc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4dcffcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4dd000:
    // 0x4dd000: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x4dd000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dd004:
    // 0x4dd004: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4dd004u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4dd008:
    // 0x4dd008: 0x45020064  bc1fl       . + 4 + (0x64 << 2)
label_4dd00c:
    if (ctx->pc == 0x4DD00Cu) {
        ctx->pc = 0x4DD00Cu;
            // 0x4dd00c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD010u;
        goto label_4dd010;
    }
    ctx->pc = 0x4DD008u;
    {
        const bool branch_taken_0x4dd008 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4dd008) {
            ctx->pc = 0x4DD00Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD008u;
            // 0x4dd00c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD19Cu;
            goto label_4dd19c;
        }
    }
    ctx->pc = 0x4DD010u;
label_4dd010:
    // 0x4dd010: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_4dd014:
    if (ctx->pc == 0x4DD014u) {
        ctx->pc = 0x4DD014u;
            // 0x4dd014: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x4DD018u;
        goto label_4dd018;
    }
    ctx->pc = 0x4DD010u;
    {
        const bool branch_taken_0x4dd010 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x4dd010) {
            ctx->pc = 0x4DD014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD010u;
            // 0x4dd014: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD024u;
            goto label_4dd024;
        }
    }
    ctx->pc = 0x4DD018u;
label_4dd018:
    // 0x4dd018: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4dd018u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dd01c:
    // 0x4dd01c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4dd020:
    if (ctx->pc == 0x4DD020u) {
        ctx->pc = 0x4DD020u;
            // 0x4dd020: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4DD024u;
        goto label_4dd024;
    }
    ctx->pc = 0x4DD01Cu;
    {
        const bool branch_taken_0x4dd01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD01Cu;
            // 0x4dd020: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd01c) {
            ctx->pc = 0x4DD03Cu;
            goto label_4dd03c;
        }
    }
    ctx->pc = 0x4DD024u;
label_4dd024:
    // 0x4dd024: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x4dd024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_4dd028:
    // 0x4dd028: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4dd028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4dd02c:
    // 0x4dd02c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4dd02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dd030:
    // 0x4dd030: 0x0  nop
    ctx->pc = 0x4dd030u;
    // NOP
label_4dd034:
    // 0x4dd034: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4dd034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4dd038:
    // 0x4dd038: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4dd038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4dd03c:
    // 0x4dd03c: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x4dd03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dd040:
    // 0x4dd040: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4dd040u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4dd044:
    // 0x4dd044: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_4dd048:
    if (ctx->pc == 0x4DD048u) {
        ctx->pc = 0x4DD04Cu;
        goto label_4dd04c;
    }
    ctx->pc = 0x4DD044u;
    {
        const bool branch_taken_0x4dd044 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4dd044) {
            ctx->pc = 0x4DD088u;
            goto label_4dd088;
        }
    }
    ctx->pc = 0x4DD04Cu;
label_4dd04c:
    // 0x4dd04c: 0x4e20004  bltzl       $a3, . + 4 + (0x4 << 2)
label_4dd050:
    if (ctx->pc == 0x4DD050u) {
        ctx->pc = 0x4DD050u;
            // 0x4dd050: 0x71842  srl         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x4DD054u;
        goto label_4dd054;
    }
    ctx->pc = 0x4DD04Cu;
    {
        const bool branch_taken_0x4dd04c = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x4dd04c) {
            ctx->pc = 0x4DD050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD04Cu;
            // 0x4dd050: 0x71842  srl         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD060u;
            goto label_4dd060;
        }
    }
    ctx->pc = 0x4DD054u;
label_4dd054:
    // 0x4dd054: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x4dd054u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dd058:
    // 0x4dd058: 0x10000007  b           . + 4 + (0x7 << 2)
label_4dd05c:
    if (ctx->pc == 0x4DD05Cu) {
        ctx->pc = 0x4DD05Cu;
            // 0x4dd05c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4DD060u;
        goto label_4dd060;
    }
    ctx->pc = 0x4DD058u;
    {
        const bool branch_taken_0x4dd058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD058u;
            // 0x4dd05c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd058) {
            ctx->pc = 0x4DD078u;
            goto label_4dd078;
        }
    }
    ctx->pc = 0x4DD060u;
label_4dd060:
    // 0x4dd060: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x4dd060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_4dd064:
    // 0x4dd064: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4dd064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4dd068:
    // 0x4dd068: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4dd068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dd06c:
    // 0x4dd06c: 0x0  nop
    ctx->pc = 0x4dd06cu;
    // NOP
label_4dd070:
    // 0x4dd070: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4dd070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4dd074:
    // 0x4dd074: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4dd074u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4dd078:
    // 0x4dd078: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x4dd078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dd07c:
    // 0x4dd07c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4dd07cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4dd080:
    // 0x4dd080: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_4dd084:
    if (ctx->pc == 0x4DD084u) {
        ctx->pc = 0x4DD084u;
            // 0x4dd084: 0x92020100  lbu         $v0, 0x100($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->pc = 0x4DD088u;
        goto label_4dd088;
    }
    ctx->pc = 0x4DD080u;
    {
        const bool branch_taken_0x4dd080 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4dd080) {
            ctx->pc = 0x4DD084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD080u;
            // 0x4dd084: 0x92020100  lbu         $v0, 0x100($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD094u;
            goto label_4dd094;
        }
    }
    ctx->pc = 0x4DD088u;
label_4dd088:
    // 0x4dd088: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4dd088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dd08c:
    // 0x4dd08c: 0x10000043  b           . + 4 + (0x43 << 2)
label_4dd090:
    if (ctx->pc == 0x4DD090u) {
        ctx->pc = 0x4DD094u;
        goto label_4dd094;
    }
    ctx->pc = 0x4DD08Cu;
    {
        const bool branch_taken_0x4dd08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd08c) {
            ctx->pc = 0x4DD19Cu;
            goto label_4dd19c;
        }
    }
    ctx->pc = 0x4DD094u;
label_4dd094:
    // 0x4dd094: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_4dd098:
    if (ctx->pc == 0x4DD098u) {
        ctx->pc = 0x4DD098u;
            // 0x4dd098: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4DD09Cu;
        goto label_4dd09c;
    }
    ctx->pc = 0x4DD094u;
    {
        const bool branch_taken_0x4dd094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dd094) {
            ctx->pc = 0x4DD098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD094u;
            // 0x4dd098: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD0A4u;
            goto label_4dd0a4;
        }
    }
    ctx->pc = 0x4DD09Cu;
label_4dd09c:
    // 0x4dd09c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_4dd0a0:
    if (ctx->pc == 0x4DD0A0u) {
        ctx->pc = 0x4DD0A0u;
            // 0x4dd0a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DD0A4u;
        goto label_4dd0a4;
    }
    ctx->pc = 0x4DD09Cu;
    {
        const bool branch_taken_0x4dd09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD09Cu;
            // 0x4dd0a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd09c) {
            ctx->pc = 0x4DD19Cu;
            goto label_4dd19c;
        }
    }
    ctx->pc = 0x4DD0A4u;
label_4dd0a4:
    // 0x4dd0a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4dd0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dd0a8:
    // 0x4dd0a8: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x4dd0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
label_4dd0ac:
    // 0x4dd0ac: 0x8e040190  lw          $a0, 0x190($s0)
    ctx->pc = 0x4dd0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_4dd0b0:
    // 0x4dd0b0: 0xc122d2c  jal         func_48B4B0
label_4dd0b4:
    if (ctx->pc == 0x4DD0B4u) {
        ctx->pc = 0x4DD0B4u;
            // 0x4dd0b4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4DD0B8u;
        goto label_4dd0b8;
    }
    ctx->pc = 0x4DD0B0u;
    SET_GPR_U32(ctx, 31, 0x4DD0B8u);
    ctx->pc = 0x4DD0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD0B0u;
            // 0x4dd0b4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD0B8u; }
        if (ctx->pc != 0x4DD0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD0B8u; }
        if (ctx->pc != 0x4DD0B8u) { return; }
    }
    ctx->pc = 0x4DD0B8u;
label_4dd0b8:
    // 0x4dd0b8: 0xc6060110  lwc1        $f6, 0x110($s0)
    ctx->pc = 0x4dd0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4dd0bc:
    // 0x4dd0bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4dd0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4dd0c0:
    // 0x4dd0c0: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x4dd0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4dd0c4:
    // 0x4dd0c4: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x4dd0c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4dd0c8:
    // 0x4dd0c8: 0xc6050114  lwc1        $f5, 0x114($s0)
    ctx->pc = 0x4dd0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4dd0cc:
    // 0x4dd0cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dd0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dd0d0:
    // 0x4dd0d0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4dd0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4dd0d4:
    // 0x4dd0d4: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x4dd0d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4dd0d8:
    // 0x4dd0d8: 0xc6040118  lwc1        $f4, 0x118($s0)
    ctx->pc = 0x4dd0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4dd0dc:
    // 0x4dd0dc: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x4dd0dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4dd0e0:
    // 0x4dd0e0: 0xc603011c  lwc1        $f3, 0x11C($s0)
    ctx->pc = 0x4dd0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4dd0e4:
    // 0x4dd0e4: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x4dd0e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_4dd0e8:
    // 0x4dd0e8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4dd0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dd0ec:
    // 0x4dd0ec: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x4dd0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dd0f0:
    // 0x4dd0f0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x4dd0f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4dd0f4:
    // 0x4dd0f4: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x4dd0f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_4dd0f8:
    // 0x4dd0f8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4dd0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4dd0fc:
    // 0x4dd0fc: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x4dd0fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_4dd100:
    // 0x4dd100: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x4dd100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4dd104:
    // 0x4dd104: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x4dd104u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4dd108:
    // 0x4dd108: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x4dd108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4dd10c:
    // 0x4dd10c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x4dd10cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4dd110:
    // 0x4dd110: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x4dd110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_4dd114:
    // 0x4dd114: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4dd114u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4dd118:
    // 0x4dd118: 0xc088b74  jal         func_222DD0
label_4dd11c:
    if (ctx->pc == 0x4DD11Cu) {
        ctx->pc = 0x4DD11Cu;
            // 0x4dd11c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD120u;
        goto label_4dd120;
    }
    ctx->pc = 0x4DD118u;
    SET_GPR_U32(ctx, 31, 0x4DD120u);
    ctx->pc = 0x4DD11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD118u;
            // 0x4dd11c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD120u; }
        if (ctx->pc != 0x4DD120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD120u; }
        if (ctx->pc != 0x4DD120u) { return; }
    }
    ctx->pc = 0x4DD120u;
label_4dd120:
    // 0x4dd120: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4dd120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4dd124:
    // 0x4dd124: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4dd124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4dd128:
    // 0x4dd128: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4dd128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4dd12c:
    // 0x4dd12c: 0x320f809  jalr        $t9
label_4dd130:
    if (ctx->pc == 0x4DD130u) {
        ctx->pc = 0x4DD130u;
            // 0x4dd130: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DD134u;
        goto label_4dd134;
    }
    ctx->pc = 0x4DD12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DD134u);
        ctx->pc = 0x4DD130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD12Cu;
            // 0x4dd130: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DD134u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DD134u; }
            if (ctx->pc != 0x4DD134u) { return; }
        }
        }
    }
    ctx->pc = 0x4DD134u;
label_4dd134:
    // 0x4dd134: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x4dd134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_4dd138:
    // 0x4dd138: 0xc04f278  jal         func_13C9E0
label_4dd13c:
    if (ctx->pc == 0x4DD13Cu) {
        ctx->pc = 0x4DD13Cu;
            // 0x4dd13c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4DD140u;
        goto label_4dd140;
    }
    ctx->pc = 0x4DD138u;
    SET_GPR_U32(ctx, 31, 0x4DD140u);
    ctx->pc = 0x4DD13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD138u;
            // 0x4dd13c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD140u; }
        if (ctx->pc != 0x4DD140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD140u; }
        if (ctx->pc != 0x4DD140u) { return; }
    }
    ctx->pc = 0x4DD140u;
label_4dd140:
    // 0x4dd140: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4dd140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4dd144:
    // 0x4dd144: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4dd144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4dd148:
    // 0x4dd148: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x4dd148u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_4dd14c:
    // 0x4dd14c: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x4dd14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_4dd150:
    // 0x4dd150: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x4dd150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_4dd154:
    // 0x4dd154: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x4dd154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4dd158:
    // 0x4dd158: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4dd158u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dd15c:
    // 0x4dd15c: 0xc0bb404  jal         func_2ED010
label_4dd160:
    if (ctx->pc == 0x4DD160u) {
        ctx->pc = 0x4DD160u;
            // 0x4dd160: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4DD164u;
        goto label_4dd164;
    }
    ctx->pc = 0x4DD15Cu;
    SET_GPR_U32(ctx, 31, 0x4DD164u);
    ctx->pc = 0x4DD160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD15Cu;
            // 0x4dd160: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD164u; }
        if (ctx->pc != 0x4DD164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD164u; }
        if (ctx->pc != 0x4DD164u) { return; }
    }
    ctx->pc = 0x4DD164u;
label_4dd164:
    // 0x4dd164: 0xc088b74  jal         func_222DD0
label_4dd168:
    if (ctx->pc == 0x4DD168u) {
        ctx->pc = 0x4DD168u;
            // 0x4dd168: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x4DD16Cu;
        goto label_4dd16c;
    }
    ctx->pc = 0x4DD164u;
    SET_GPR_U32(ctx, 31, 0x4DD16Cu);
    ctx->pc = 0x4DD168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD164u;
            // 0x4dd168: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD16Cu; }
        if (ctx->pc != 0x4DD16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD16Cu; }
        if (ctx->pc != 0x4DD16Cu) { return; }
    }
    ctx->pc = 0x4DD16Cu;
label_4dd16c:
    // 0x4dd16c: 0xa2000100  sb          $zero, 0x100($s0)
    ctx->pc = 0x4dd16cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 256), (uint8_t)GPR_U32(ctx, 0));
label_4dd170:
    // 0x4dd170: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4dd170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4dd174:
    // 0x4dd174: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x4dd174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
label_4dd178:
    // 0x4dd178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4dd178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dd17c:
    // 0x4dd17c: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x4dd17cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_4dd180:
    // 0x4dd180: 0xa2030066  sb          $v1, 0x66($s0)
    ctx->pc = 0x4dd180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 3));
label_4dd184:
    // 0x4dd184: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x4dd184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
label_4dd188:
    // 0x4dd188: 0xa2030068  sb          $v1, 0x68($s0)
    ctx->pc = 0x4dd188u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 3));
label_4dd18c:
    // 0x4dd18c: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x4dd18cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_4dd190:
    // 0x4dd190: 0xa203006a  sb          $v1, 0x6A($s0)
    ctx->pc = 0x4dd190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 3));
label_4dd194:
    // 0x4dd194: 0xa200006b  sb          $zero, 0x6B($s0)
    ctx->pc = 0x4dd194u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
label_4dd198:
    // 0x4dd198: 0xa20000d1  sb          $zero, 0xD1($s0)
    ctx->pc = 0x4dd198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
label_4dd19c:
    // 0x4dd19c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4dd19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4dd1a0:
    // 0x4dd1a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dd1a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dd1a4:
    // 0x4dd1a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dd1a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dd1a8:
    // 0x4dd1a8: 0x3e00008  jr          $ra
label_4dd1ac:
    if (ctx->pc == 0x4DD1ACu) {
        ctx->pc = 0x4DD1ACu;
            // 0x4dd1ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4DD1B0u;
        goto label_4dd1b0;
    }
    ctx->pc = 0x4DD1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD1A8u;
            // 0x4dd1ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DD1B0u;
label_4dd1b0:
    // 0x4dd1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dd1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4dd1b4:
    // 0x4dd1b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4dd1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4dd1b8:
    // 0x4dd1b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4dd1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4dd1bc:
    // 0x4dd1bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4dd1bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dd1c0:
    // 0x4dd1c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dd1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dd1c4:
    // 0x4dd1c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dd1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dd1c8:
    // 0x4dd1c8: 0x8c4264b0  lw          $v0, 0x64B0($v0)
    ctx->pc = 0x4dd1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25776)));
label_4dd1cc:
    // 0x4dd1cc: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x4dd1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4dd1d0:
    // 0x4dd1d0: 0xc12e608  jal         func_4B9820
label_4dd1d4:
    if (ctx->pc == 0x4DD1D4u) {
        ctx->pc = 0x4DD1D4u;
            // 0x4dd1d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD1D8u;
        goto label_4dd1d8;
    }
    ctx->pc = 0x4DD1D0u;
    SET_GPR_U32(ctx, 31, 0x4DD1D8u);
    ctx->pc = 0x4DD1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD1D0u;
            // 0x4dd1d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9820u;
    if (runtime->hasFunction(0x4B9820u)) {
        auto targetFn = runtime->lookupFunction(0x4B9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD1D8u; }
        if (ctx->pc != 0x4DD1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9820_0x4b9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD1D8u; }
        if (ctx->pc != 0x4DD1D8u) { return; }
    }
    ctx->pc = 0x4DD1D8u;
label_4dd1d8:
    // 0x4dd1d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4dd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dd1dc:
    // 0x4dd1dc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4dd1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4dd1e0:
    // 0x4dd1e0: 0xc040180  jal         func_100600
label_4dd1e4:
    if (ctx->pc == 0x4DD1E4u) {
        ctx->pc = 0x4DD1E4u;
            // 0x4dd1e4: 0xa20200d1  sb          $v0, 0xD1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4DD1E8u;
        goto label_4dd1e8;
    }
    ctx->pc = 0x4DD1E0u;
    SET_GPR_U32(ctx, 31, 0x4DD1E8u);
    ctx->pc = 0x4DD1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD1E0u;
            // 0x4dd1e4: 0xa20200d1  sb          $v0, 0xD1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD1E8u; }
        if (ctx->pc != 0x4DD1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD1E8u; }
        if (ctx->pc != 0x4DD1E8u) { return; }
    }
    ctx->pc = 0x4DD1E8u;
label_4dd1e8:
    // 0x4dd1e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4dd1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dd1ec:
    // 0x4dd1ec: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_4dd1f0:
    if (ctx->pc == 0x4DD1F0u) {
        ctx->pc = 0x4DD1F0u;
            // 0x4dd1f0: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x4DD1F4u;
        goto label_4dd1f4;
    }
    ctx->pc = 0x4DD1ECu;
    {
        const bool branch_taken_0x4dd1ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd1ec) {
            ctx->pc = 0x4DD1F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD1ECu;
            // 0x4dd1f0: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD22Cu;
            goto label_4dd22c;
        }
    }
    ctx->pc = 0x4DD1F4u;
label_4dd1f4:
    // 0x4dd1f4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4dd1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4dd1f8:
    // 0x4dd1f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4dd1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dd1fc:
    // 0x4dd1fc: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4dd1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_4dd200:
    // 0x4dd200: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4dd200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4dd204:
    // 0x4dd204: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dd204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4dd208:
    // 0x4dd208: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4dd208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_4dd20c:
    // 0x4dd20c: 0xc040138  jal         func_1004E0
label_4dd210:
    if (ctx->pc == 0x4DD210u) {
        ctx->pc = 0x4DD210u;
            // 0x4dd210: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4DD214u;
        goto label_4dd214;
    }
    ctx->pc = 0x4DD20Cu;
    SET_GPR_U32(ctx, 31, 0x4DD214u);
    ctx->pc = 0x4DD210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD20Cu;
            // 0x4dd210: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD214u; }
        if (ctx->pc != 0x4DD214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD214u; }
        if (ctx->pc != 0x4DD214u) { return; }
    }
    ctx->pc = 0x4DD214u;
label_4dd214:
    // 0x4dd214: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4dd214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_4dd218:
    // 0x4dd218: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x4dd218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_4dd21c:
    // 0x4dd21c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4dd21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dd220:
    // 0x4dd220: 0xc04a576  jal         func_1295D8
label_4dd224:
    if (ctx->pc == 0x4DD224u) {
        ctx->pc = 0x4DD224u;
            // 0x4dd224: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4DD228u;
        goto label_4dd228;
    }
    ctx->pc = 0x4DD220u;
    SET_GPR_U32(ctx, 31, 0x4DD228u);
    ctx->pc = 0x4DD224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD220u;
            // 0x4dd224: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD228u; }
        if (ctx->pc != 0x4DD228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD228u; }
        if (ctx->pc != 0x4DD228u) { return; }
    }
    ctx->pc = 0x4DD228u;
label_4dd228:
    // 0x4dd228: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4dd228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4dd22c:
    // 0x4dd22c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x4dd22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_4dd230:
    // 0x4dd230: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4dd230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4dd234:
    // 0x4dd234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4dd234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dd238:
    // 0x4dd238: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4dd238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dd23c:
    // 0x4dd23c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4dd23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dd240:
    // 0x4dd240: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x4dd240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_4dd244:
    // 0x4dd244: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4dd244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dd248:
    // 0x4dd248: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4dd248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4dd24c:
    // 0x4dd24c: 0x344610ae  ori         $a2, $v0, 0x10AE
    ctx->pc = 0x4dd24cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4270);
label_4dd250:
    // 0x4dd250: 0xc122cd8  jal         func_48B360
label_4dd254:
    if (ctx->pc == 0x4DD254u) {
        ctx->pc = 0x4DD254u;
            // 0x4dd254: 0xae110190  sw          $s1, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 17));
        ctx->pc = 0x4DD258u;
        goto label_4dd258;
    }
    ctx->pc = 0x4DD250u;
    SET_GPR_U32(ctx, 31, 0x4DD258u);
    ctx->pc = 0x4DD254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD250u;
            // 0x4dd254: 0xae110190  sw          $s1, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD258u; }
        if (ctx->pc != 0x4DD258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD258u; }
        if (ctx->pc != 0x4DD258u) { return; }
    }
    ctx->pc = 0x4DD258u;
label_4dd258:
    // 0x4dd258: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x4dd258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
label_4dd25c:
    // 0x4dd25c: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x4dd25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_4dd260:
    // 0x4dd260: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x4dd260u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_4dd264:
    // 0x4dd264: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x4dd264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4dd268:
    // 0x4dd268: 0xa2000066  sb          $zero, 0x66($s0)
    ctx->pc = 0x4dd268u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 0));
label_4dd26c:
    // 0x4dd26c: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x4dd26cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
label_4dd270:
    // 0x4dd270: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x4dd270u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
label_4dd274:
    // 0x4dd274: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x4dd274u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_4dd278:
    // 0x4dd278: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x4dd278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
label_4dd27c:
    // 0x4dd27c: 0xc04cc04  jal         func_133010
label_4dd280:
    if (ctx->pc == 0x4DD280u) {
        ctx->pc = 0x4DD280u;
            // 0x4dd280: 0xa200006b  sb          $zero, 0x6B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4DD284u;
        goto label_4dd284;
    }
    ctx->pc = 0x4DD27Cu;
    SET_GPR_U32(ctx, 31, 0x4DD284u);
    ctx->pc = 0x4DD280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD27Cu;
            // 0x4dd280: 0xa200006b  sb          $zero, 0x6B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD284u; }
        if (ctx->pc != 0x4DD284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD284u; }
        if (ctx->pc != 0x4DD284u) { return; }
    }
    ctx->pc = 0x4DD284u;
label_4dd284:
    // 0x4dd284: 0x26040130  addiu       $a0, $s0, 0x130
    ctx->pc = 0x4dd284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_4dd288:
    // 0x4dd288: 0xc04c720  jal         func_131C80
label_4dd28c:
    if (ctx->pc == 0x4DD28Cu) {
        ctx->pc = 0x4DD28Cu;
            // 0x4dd28c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4DD290u;
        goto label_4dd290;
    }
    ctx->pc = 0x4DD288u;
    SET_GPR_U32(ctx, 31, 0x4DD290u);
    ctx->pc = 0x4DD28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD288u;
            // 0x4dd28c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD290u; }
        if (ctx->pc != 0x4DD290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD290u; }
        if (ctx->pc != 0x4DD290u) { return; }
    }
    ctx->pc = 0x4DD290u;
label_4dd290:
    // 0x4dd290: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x4dd290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4dd294:
    // 0x4dd294: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4dd294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4dd298:
    // 0x4dd298: 0x0  nop
    ctx->pc = 0x4dd298u;
    // NOP
label_4dd29c:
    // 0x4dd29c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4dd29cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4dd2a0:
    // 0x4dd2a0: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_4dd2a4:
    if (ctx->pc == 0x4DD2A4u) {
        ctx->pc = 0x4DD2A4u;
            // 0x4dd2a4: 0x3c03419c  lui         $v1, 0x419C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16796 << 16));
        ctx->pc = 0x4DD2A8u;
        goto label_4dd2a8;
    }
    ctx->pc = 0x4DD2A0u;
    {
        const bool branch_taken_0x4dd2a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4dd2a0) {
            ctx->pc = 0x4DD2A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD2A0u;
            // 0x4dd2a4: 0x3c03419c  lui         $v1, 0x419C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16796 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD2B4u;
            goto label_4dd2b4;
        }
    }
    ctx->pc = 0x4DD2A8u;
label_4dd2a8:
    // 0x4dd2a8: 0x3c03c19c  lui         $v1, 0xC19C
    ctx->pc = 0x4dd2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49564 << 16));
label_4dd2ac:
    // 0x4dd2ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_4dd2b0:
    if (ctx->pc == 0x4DD2B0u) {
        ctx->pc = 0x4DD2B0u;
            // 0x4dd2b0: 0xae030128  sw          $v1, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
        ctx->pc = 0x4DD2B4u;
        goto label_4dd2b4;
    }
    ctx->pc = 0x4DD2ACu;
    {
        const bool branch_taken_0x4dd2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD2ACu;
            // 0x4dd2b0: 0xae030128  sw          $v1, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd2ac) {
            ctx->pc = 0x4DD2B8u;
            goto label_4dd2b8;
        }
    }
    ctx->pc = 0x4DD2B4u;
label_4dd2b4:
    // 0x4dd2b4: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x4dd2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
label_4dd2b8:
    // 0x4dd2b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4dd2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4dd2bc:
    // 0x4dd2bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dd2bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dd2c0:
    // 0x4dd2c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dd2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dd2c4:
    // 0x4dd2c4: 0x3e00008  jr          $ra
label_4dd2c8:
    if (ctx->pc == 0x4DD2C8u) {
        ctx->pc = 0x4DD2C8u;
            // 0x4dd2c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DD2CCu;
        goto label_4dd2cc;
    }
    ctx->pc = 0x4DD2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD2C4u;
            // 0x4dd2c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DD2CCu;
label_4dd2cc:
    // 0x4dd2cc: 0x0  nop
    ctx->pc = 0x4dd2ccu;
    // NOP
label_4dd2d0:
    // 0x4dd2d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4dd2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4dd2d4:
    // 0x4dd2d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4dd2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4dd2d8:
    // 0x4dd2d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4dd2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4dd2dc:
    // 0x4dd2dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4dd2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4dd2e0:
    // 0x4dd2e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4dd2e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dd2e4:
    // 0x4dd2e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4dd2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4dd2e8:
    // 0x4dd2e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dd2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dd2ec:
    // 0x4dd2ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dd2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dd2f0:
    // 0x4dd2f0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4dd2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4dd2f4:
    // 0x4dd2f4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4dd2f8:
    if (ctx->pc == 0x4DD2F8u) {
        ctx->pc = 0x4DD2F8u;
            // 0x4dd2f8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD2FCu;
        goto label_4dd2fc;
    }
    ctx->pc = 0x4DD2F4u;
    {
        const bool branch_taken_0x4dd2f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD2F4u;
            // 0x4dd2f8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd2f4) {
            ctx->pc = 0x4DD338u;
            goto label_4dd338;
        }
    }
    ctx->pc = 0x4DD2FCu;
label_4dd2fc:
    // 0x4dd2fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4dd2fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dd300:
    // 0x4dd300: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4dd300u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dd304:
    // 0x4dd304: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4dd304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dd308:
    // 0x4dd308: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4dd308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4dd30c:
    // 0x4dd30c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4dd30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4dd310:
    // 0x4dd310: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4dd310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4dd314:
    // 0x4dd314: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dd314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dd318:
    // 0x4dd318: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4dd318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4dd31c:
    // 0x4dd31c: 0x320f809  jalr        $t9
label_4dd320:
    if (ctx->pc == 0x4DD320u) {
        ctx->pc = 0x4DD324u;
        goto label_4dd324;
    }
    ctx->pc = 0x4DD31Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DD324u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DD324u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DD324u; }
            if (ctx->pc != 0x4DD324u) { return; }
        }
        }
    }
    ctx->pc = 0x4DD324u;
label_4dd324:
    // 0x4dd324: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4dd324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4dd328:
    // 0x4dd328: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4dd328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4dd32c:
    // 0x4dd32c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4dd32cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4dd330:
    // 0x4dd330: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4dd334:
    if (ctx->pc == 0x4DD334u) {
        ctx->pc = 0x4DD334u;
            // 0x4dd334: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4DD338u;
        goto label_4dd338;
    }
    ctx->pc = 0x4DD330u;
    {
        const bool branch_taken_0x4dd330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DD334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD330u;
            // 0x4dd334: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd330) {
            ctx->pc = 0x4DD308u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4dd308;
        }
    }
    ctx->pc = 0x4DD338u;
label_4dd338:
    // 0x4dd338: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4dd338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4dd33c:
    // 0x4dd33c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4dd33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4dd340:
    // 0x4dd340: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4dd340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dd344:
    // 0x4dd344: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4dd344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dd348:
    // 0x4dd348: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4dd348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dd34c:
    // 0x4dd34c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dd34cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dd350:
    // 0x4dd350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dd350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dd354:
    // 0x4dd354: 0x3e00008  jr          $ra
label_4dd358:
    if (ctx->pc == 0x4DD358u) {
        ctx->pc = 0x4DD358u;
            // 0x4dd358: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4DD35Cu;
        goto label_4dd35c;
    }
    ctx->pc = 0x4DD354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD354u;
            // 0x4dd358: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DD35Cu;
label_4dd35c:
    // 0x4dd35c: 0x0  nop
    ctx->pc = 0x4dd35cu;
    // NOP
label_4dd360:
    // 0x4dd360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dd360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4dd364:
    // 0x4dd364: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4dd364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dd368:
    // 0x4dd368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4dd368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4dd36c:
    // 0x4dd36c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4dd36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4dd370:
    // 0x4dd370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dd370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dd374:
    // 0x4dd374: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4dd374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4dd378:
    // 0x4dd378: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4dd378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dd37c:
    // 0x4dd37c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4dd37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4dd380:
    // 0x4dd380: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4dd380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4dd384:
    // 0x4dd384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4dd384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4dd388:
    // 0x4dd388: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4dd388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4dd38c:
    // 0x4dd38c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4dd38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4dd390:
    // 0x4dd390: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4dd390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4dd394:
    // 0x4dd394: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4dd394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4dd398:
    // 0x4dd398: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4dd398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4dd39c:
    // 0x4dd39c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4dd39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4dd3a0:
    // 0x4dd3a0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4dd3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4dd3a4:
    // 0x4dd3a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4dd3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4dd3a8:
    // 0x4dd3a8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4dd3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4dd3ac:
    // 0x4dd3ac: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4dd3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4dd3b0:
    // 0x4dd3b0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4dd3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4dd3b4:
    // 0x4dd3b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4dd3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4dd3b8:
    // 0x4dd3b8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4dd3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4dd3bc:
    // 0x4dd3bc: 0xc0a997c  jal         func_2A65F0
label_4dd3c0:
    if (ctx->pc == 0x4DD3C0u) {
        ctx->pc = 0x4DD3C0u;
            // 0x4dd3c0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4DD3C4u;
        goto label_4dd3c4;
    }
    ctx->pc = 0x4DD3BCu;
    SET_GPR_U32(ctx, 31, 0x4DD3C4u);
    ctx->pc = 0x4DD3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD3BCu;
            // 0x4dd3c0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD3C4u; }
        if (ctx->pc != 0x4DD3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD3C4u; }
        if (ctx->pc != 0x4DD3C4u) { return; }
    }
    ctx->pc = 0x4DD3C4u;
label_4dd3c4:
    // 0x4dd3c4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4dd3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4dd3c8:
    // 0x4dd3c8: 0xc0d879c  jal         func_361E70
label_4dd3cc:
    if (ctx->pc == 0x4DD3CCu) {
        ctx->pc = 0x4DD3CCu;
            // 0x4dd3cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD3D0u;
        goto label_4dd3d0;
    }
    ctx->pc = 0x4DD3C8u;
    SET_GPR_U32(ctx, 31, 0x4DD3D0u);
    ctx->pc = 0x4DD3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD3C8u;
            // 0x4dd3cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD3D0u; }
        if (ctx->pc != 0x4DD3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD3D0u; }
        if (ctx->pc != 0x4DD3D0u) { return; }
    }
    ctx->pc = 0x4DD3D0u;
label_4dd3d0:
    // 0x4dd3d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4dd3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4dd3d4:
    // 0x4dd3d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dd3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dd3d8:
    // 0x4dd3d8: 0x3e00008  jr          $ra
label_4dd3dc:
    if (ctx->pc == 0x4DD3DCu) {
        ctx->pc = 0x4DD3DCu;
            // 0x4dd3dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DD3E0u;
        goto label_4dd3e0;
    }
    ctx->pc = 0x4DD3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD3D8u;
            // 0x4dd3dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DD3E0u;
label_4dd3e0:
    // 0x4dd3e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4dd3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4dd3e4:
    // 0x4dd3e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4dd3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4dd3e8:
    // 0x4dd3e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dd3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dd3ec:
    // 0x4dd3ec: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4dd3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4dd3f0:
    // 0x4dd3f0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4dd3f4:
    if (ctx->pc == 0x4DD3F4u) {
        ctx->pc = 0x4DD3F4u;
            // 0x4dd3f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD3F8u;
        goto label_4dd3f8;
    }
    ctx->pc = 0x4DD3F0u;
    {
        const bool branch_taken_0x4dd3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD3F0u;
            // 0x4dd3f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd3f0) {
            ctx->pc = 0x4DD510u;
            goto label_4dd510;
        }
    }
    ctx->pc = 0x4DD3F8u;
label_4dd3f8:
    // 0x4dd3f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4dd3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4dd3fc:
    // 0x4dd3fc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4dd3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4dd400:
    // 0x4dd400: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4dd400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4dd404:
    // 0x4dd404: 0xc075128  jal         func_1D44A0
label_4dd408:
    if (ctx->pc == 0x4DD408u) {
        ctx->pc = 0x4DD408u;
            // 0x4dd408: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4DD40Cu;
        goto label_4dd40c;
    }
    ctx->pc = 0x4DD404u;
    SET_GPR_U32(ctx, 31, 0x4DD40Cu);
    ctx->pc = 0x4DD408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD404u;
            // 0x4dd408: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD40Cu; }
        if (ctx->pc != 0x4DD40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD40Cu; }
        if (ctx->pc != 0x4DD40Cu) { return; }
    }
    ctx->pc = 0x4DD40Cu;
label_4dd40c:
    // 0x4dd40c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4dd40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4dd410:
    // 0x4dd410: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dd410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dd414:
    // 0x4dd414: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4dd414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4dd418:
    // 0x4dd418: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4dd418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4dd41c:
    // 0x4dd41c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4dd41cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4dd420:
    // 0x4dd420: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4dd424:
    if (ctx->pc == 0x4DD424u) {
        ctx->pc = 0x4DD424u;
            // 0x4dd424: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4DD428u;
        goto label_4dd428;
    }
    ctx->pc = 0x4DD420u;
    {
        const bool branch_taken_0x4dd420 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD420u;
            // 0x4dd424: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd420) {
            ctx->pc = 0x4DD430u;
            goto label_4dd430;
        }
    }
    ctx->pc = 0x4DD428u;
label_4dd428:
    // 0x4dd428: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dd428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dd42c:
    // 0x4dd42c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4dd42cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4dd430:
    // 0x4dd430: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4dd430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dd434:
    // 0x4dd434: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dd434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dd438:
    // 0x4dd438: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4dd438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4dd43c:
    // 0x4dd43c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4dd43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4dd440:
    // 0x4dd440: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4dd440u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4dd444:
    // 0x4dd444: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4dd448:
    if (ctx->pc == 0x4DD448u) {
        ctx->pc = 0x4DD448u;
            // 0x4dd448: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4DD44Cu;
        goto label_4dd44c;
    }
    ctx->pc = 0x4DD444u;
    {
        const bool branch_taken_0x4dd444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd444) {
            ctx->pc = 0x4DD448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD444u;
            // 0x4dd448: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD458u;
            goto label_4dd458;
        }
    }
    ctx->pc = 0x4DD44Cu;
label_4dd44c:
    // 0x4dd44c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dd44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dd450:
    // 0x4dd450: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4dd450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4dd454:
    // 0x4dd454: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4dd454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dd458:
    // 0x4dd458: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dd458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dd45c:
    // 0x4dd45c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4dd45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4dd460:
    // 0x4dd460: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4dd460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4dd464:
    // 0x4dd464: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4dd464u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4dd468:
    // 0x4dd468: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4dd46c:
    if (ctx->pc == 0x4DD46Cu) {
        ctx->pc = 0x4DD46Cu;
            // 0x4dd46c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4DD470u;
        goto label_4dd470;
    }
    ctx->pc = 0x4DD468u;
    {
        const bool branch_taken_0x4dd468 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd468) {
            ctx->pc = 0x4DD46Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD468u;
            // 0x4dd46c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD47Cu;
            goto label_4dd47c;
        }
    }
    ctx->pc = 0x4DD470u;
label_4dd470:
    // 0x4dd470: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dd470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dd474:
    // 0x4dd474: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4dd474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4dd478:
    // 0x4dd478: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4dd478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4dd47c:
    // 0x4dd47c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4dd47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4dd480:
    // 0x4dd480: 0x320f809  jalr        $t9
label_4dd484:
    if (ctx->pc == 0x4DD484u) {
        ctx->pc = 0x4DD484u;
            // 0x4dd484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD488u;
        goto label_4dd488;
    }
    ctx->pc = 0x4DD480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DD488u);
        ctx->pc = 0x4DD484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD480u;
            // 0x4dd484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DD488u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DD488u; }
            if (ctx->pc != 0x4DD488u) { return; }
        }
        }
    }
    ctx->pc = 0x4DD488u;
label_4dd488:
    // 0x4dd488: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4dd488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4dd48c:
    // 0x4dd48c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dd48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dd490:
    // 0x4dd490: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4dd490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4dd494:
    // 0x4dd494: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4dd494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4dd498:
    // 0x4dd498: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4dd498u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4dd49c:
    // 0x4dd49c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4dd49cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4dd4a0:
    // 0x4dd4a0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4dd4a4:
    if (ctx->pc == 0x4DD4A4u) {
        ctx->pc = 0x4DD4A4u;
            // 0x4dd4a4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4DD4A8u;
        goto label_4dd4a8;
    }
    ctx->pc = 0x4DD4A0u;
    {
        const bool branch_taken_0x4dd4a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd4a0) {
            ctx->pc = 0x4DD4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD4A0u;
            // 0x4dd4a4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD4B4u;
            goto label_4dd4b4;
        }
    }
    ctx->pc = 0x4DD4A8u;
label_4dd4a8:
    // 0x4dd4a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dd4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dd4ac:
    // 0x4dd4ac: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4dd4acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4dd4b0:
    // 0x4dd4b0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4dd4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4dd4b4:
    // 0x4dd4b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dd4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dd4b8:
    // 0x4dd4b8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4dd4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4dd4bc:
    // 0x4dd4bc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4dd4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4dd4c0:
    // 0x4dd4c0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4dd4c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4dd4c4:
    // 0x4dd4c4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4dd4c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4dd4c8:
    // 0x4dd4c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4dd4cc:
    if (ctx->pc == 0x4DD4CCu) {
        ctx->pc = 0x4DD4D0u;
        goto label_4dd4d0;
    }
    ctx->pc = 0x4DD4C8u;
    {
        const bool branch_taken_0x4dd4c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd4c8) {
            ctx->pc = 0x4DD4D8u;
            goto label_4dd4d8;
        }
    }
    ctx->pc = 0x4DD4D0u;
label_4dd4d0:
    // 0x4dd4d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dd4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dd4d4:
    // 0x4dd4d4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4dd4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4dd4d8:
    // 0x4dd4d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dd4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dd4dc:
    // 0x4dd4dc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4dd4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4dd4e0:
    // 0x4dd4e0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4dd4e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4dd4e4:
    // 0x4dd4e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4dd4e8:
    if (ctx->pc == 0x4DD4E8u) {
        ctx->pc = 0x4DD4ECu;
        goto label_4dd4ec;
    }
    ctx->pc = 0x4DD4E4u;
    {
        const bool branch_taken_0x4dd4e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd4e4) {
            ctx->pc = 0x4DD4F4u;
            goto label_4dd4f4;
        }
    }
    ctx->pc = 0x4DD4ECu;
label_4dd4ec:
    // 0x4dd4ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dd4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dd4f0:
    // 0x4dd4f0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4dd4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4dd4f4:
    // 0x4dd4f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dd4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dd4f8:
    // 0x4dd4f8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4dd4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4dd4fc:
    // 0x4dd4fc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4dd4fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4dd500:
    // 0x4dd500: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4dd504:
    if (ctx->pc == 0x4DD504u) {
        ctx->pc = 0x4DD504u;
            // 0x4dd504: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4DD508u;
        goto label_4dd508;
    }
    ctx->pc = 0x4DD500u;
    {
        const bool branch_taken_0x4dd500 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd500) {
            ctx->pc = 0x4DD504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD500u;
            // 0x4dd504: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD514u;
            goto label_4dd514;
        }
    }
    ctx->pc = 0x4DD508u;
label_4dd508:
    // 0x4dd508: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dd508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dd50c:
    // 0x4dd50c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4dd50cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4dd510:
    // 0x4dd510: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4dd510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4dd514:
    // 0x4dd514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dd514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dd518:
    // 0x4dd518: 0x3e00008  jr          $ra
label_4dd51c:
    if (ctx->pc == 0x4DD51Cu) {
        ctx->pc = 0x4DD51Cu;
            // 0x4dd51c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4DD520u;
        goto label_4dd520;
    }
    ctx->pc = 0x4DD518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD518u;
            // 0x4dd51c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DD520u;
label_4dd520:
    // 0x4dd520: 0x8137048  j           func_4DC120
label_4dd524:
    if (ctx->pc == 0x4DD524u) {
        ctx->pc = 0x4DD524u;
            // 0x4dd524: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4DD528u;
        goto label_4dd528;
    }
    ctx->pc = 0x4DD520u;
    ctx->pc = 0x4DD524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD520u;
            // 0x4dd524: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DC120u;
    {
        auto targetFn = runtime->lookupFunction(0x4DC120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4DD528u;
label_4dd528:
    // 0x4dd528: 0x0  nop
    ctx->pc = 0x4dd528u;
    // NOP
label_4dd52c:
    // 0x4dd52c: 0x0  nop
    ctx->pc = 0x4dd52cu;
    // NOP
label_4dd530:
    // 0x4dd530: 0x8137270  j           func_4DC9C0
label_4dd534:
    if (ctx->pc == 0x4DD534u) {
        ctx->pc = 0x4DD534u;
            // 0x4dd534: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4DD538u;
        goto label_4dd538;
    }
    ctx->pc = 0x4DD530u;
    ctx->pc = 0x4DD534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD530u;
            // 0x4dd534: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DC9C0u;
    {
        auto targetFn = runtime->lookupFunction(0x4DC9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4DD538u;
label_4dd538:
    // 0x4dd538: 0x0  nop
    ctx->pc = 0x4dd538u;
    // NOP
label_4dd53c:
    // 0x4dd53c: 0x0  nop
    ctx->pc = 0x4dd53cu;
    // NOP
label_4dd540:
    // 0x4dd540: 0x8136ff0  j           func_4DBFC0
label_4dd544:
    if (ctx->pc == 0x4DD544u) {
        ctx->pc = 0x4DD544u;
            // 0x4dd544: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4DD548u;
        goto label_4dd548;
    }
    ctx->pc = 0x4DD540u;
    ctx->pc = 0x4DD544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD540u;
            // 0x4dd544: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DBFC0u;
    if (runtime->hasFunction(0x4DBFC0u)) {
        auto targetFn = runtime->lookupFunction(0x4DBFC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004DBFC0_0x4dbfc0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4DD548u;
label_4dd548:
    // 0x4dd548: 0x0  nop
    ctx->pc = 0x4dd548u;
    // NOP
label_4dd54c:
    // 0x4dd54c: 0x0  nop
    ctx->pc = 0x4dd54cu;
    // NOP
label_4dd550:
    // 0x4dd550: 0x8136fb8  j           func_4DBEE0
label_4dd554:
    if (ctx->pc == 0x4DD554u) {
        ctx->pc = 0x4DD554u;
            // 0x4dd554: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4DD558u;
        goto label_4dd558;
    }
    ctx->pc = 0x4DD550u;
    ctx->pc = 0x4DD554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD550u;
            // 0x4dd554: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DBEE0u;
    {
        auto targetFn = runtime->lookupFunction(0x4DBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4DD558u;
label_4dd558:
    // 0x4dd558: 0x0  nop
    ctx->pc = 0x4dd558u;
    // NOP
label_4dd55c:
    // 0x4dd55c: 0x0  nop
    ctx->pc = 0x4dd55cu;
    // NOP
label_4dd560:
    // 0x4dd560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dd560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4dd564:
    // 0x4dd564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4dd564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4dd568:
    // 0x4dd568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dd568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dd56c:
    // 0x4dd56c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dd56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dd570:
    // 0x4dd570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4dd570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dd574:
    // 0x4dd574: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
label_4dd578:
    if (ctx->pc == 0x4DD578u) {
        ctx->pc = 0x4DD578u;
            // 0x4dd578: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD57Cu;
        goto label_4dd57c;
    }
    ctx->pc = 0x4DD574u;
    {
        const bool branch_taken_0x4dd574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD574u;
            // 0x4dd578: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd574) {
            ctx->pc = 0x4DD660u;
            goto label_4dd660;
        }
    }
    ctx->pc = 0x4DD57Cu;
label_4dd57c:
    // 0x4dd57c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dd57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dd580:
    // 0x4dd580: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dd580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dd584:
    // 0x4dd584: 0x24632e70  addiu       $v1, $v1, 0x2E70
    ctx->pc = 0x4dd584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11888));
label_4dd588:
    // 0x4dd588: 0x24422ea8  addiu       $v0, $v0, 0x2EA8
    ctx->pc = 0x4dd588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11944));
label_4dd58c:
    // 0x4dd58c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dd58cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4dd590:
    // 0x4dd590: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4dd590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4dd594:
    // 0x4dd594: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x4dd594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_4dd598:
    // 0x4dd598: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x4dd598u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_4dd59c:
    // 0x4dd59c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_4dd5a0:
    if (ctx->pc == 0x4DD5A0u) {
        ctx->pc = 0x4DD5A0u;
            // 0x4dd5a0: 0x8e240094  lw          $a0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->pc = 0x4DD5A4u;
        goto label_4dd5a4;
    }
    ctx->pc = 0x4DD59Cu;
    {
        const bool branch_taken_0x4dd59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd59c) {
            ctx->pc = 0x4DD5A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD59Cu;
            // 0x4dd5a0: 0x8e240094  lw          $a0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD5DCu;
            goto label_4dd5dc;
        }
    }
    ctx->pc = 0x4DD5A4u;
label_4dd5a4:
    // 0x4dd5a4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x4dd5a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_4dd5a8:
    // 0x4dd5a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4dd5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4dd5ac:
    // 0x4dd5ac: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x4dd5acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_4dd5b0:
    // 0x4dd5b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4dd5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4dd5b4:
    // 0x4dd5b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4dd5b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4dd5b8:
    // 0x4dd5b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4dd5bc:
    if (ctx->pc == 0x4DD5BCu) {
        ctx->pc = 0x4DD5C0u;
        goto label_4dd5c0;
    }
    ctx->pc = 0x4DD5B8u;
    {
        const bool branch_taken_0x4dd5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dd5b8) {
            ctx->pc = 0x4DD5D8u;
            goto label_4dd5d8;
        }
    }
    ctx->pc = 0x4DD5C0u;
label_4dd5c0:
    // 0x4dd5c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4dd5c4:
    if (ctx->pc == 0x4DD5C4u) {
        ctx->pc = 0x4DD5C8u;
        goto label_4dd5c8;
    }
    ctx->pc = 0x4DD5C0u;
    {
        const bool branch_taken_0x4dd5c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd5c0) {
            ctx->pc = 0x4DD5D8u;
            goto label_4dd5d8;
        }
    }
    ctx->pc = 0x4DD5C8u;
label_4dd5c8:
    // 0x4dd5c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dd5c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dd5cc:
    // 0x4dd5cc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4dd5ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4dd5d0:
    // 0x4dd5d0: 0x320f809  jalr        $t9
label_4dd5d4:
    if (ctx->pc == 0x4DD5D4u) {
        ctx->pc = 0x4DD5D4u;
            // 0x4dd5d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DD5D8u;
        goto label_4dd5d8;
    }
    ctx->pc = 0x4DD5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DD5D8u);
        ctx->pc = 0x4DD5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD5D0u;
            // 0x4dd5d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DD5D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DD5D8u; }
            if (ctx->pc != 0x4DD5D8u) { return; }
        }
        }
    }
    ctx->pc = 0x4DD5D8u;
label_4dd5d8:
    // 0x4dd5d8: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x4dd5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_4dd5dc:
    // 0x4dd5dc: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x4dd5dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_4dd5e0:
    // 0x4dd5e0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4dd5e4:
    if (ctx->pc == 0x4DD5E4u) {
        ctx->pc = 0x4DD5E8u;
        goto label_4dd5e8;
    }
    ctx->pc = 0x4DD5E0u;
    {
        const bool branch_taken_0x4dd5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd5e0) {
            ctx->pc = 0x4DD61Cu;
            goto label_4dd61c;
        }
    }
    ctx->pc = 0x4DD5E8u;
label_4dd5e8:
    // 0x4dd5e8: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x4dd5e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_4dd5ec:
    // 0x4dd5ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4dd5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4dd5f0:
    // 0x4dd5f0: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x4dd5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_4dd5f4:
    // 0x4dd5f4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4dd5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4dd5f8:
    // 0x4dd5f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4dd5f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4dd5fc:
    // 0x4dd5fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4dd600:
    if (ctx->pc == 0x4DD600u) {
        ctx->pc = 0x4DD604u;
        goto label_4dd604;
    }
    ctx->pc = 0x4DD5FCu;
    {
        const bool branch_taken_0x4dd5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dd5fc) {
            ctx->pc = 0x4DD61Cu;
            goto label_4dd61c;
        }
    }
    ctx->pc = 0x4DD604u;
label_4dd604:
    // 0x4dd604: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4dd608:
    if (ctx->pc == 0x4DD608u) {
        ctx->pc = 0x4DD60Cu;
        goto label_4dd60c;
    }
    ctx->pc = 0x4DD604u;
    {
        const bool branch_taken_0x4dd604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd604) {
            ctx->pc = 0x4DD61Cu;
            goto label_4dd61c;
        }
    }
    ctx->pc = 0x4DD60Cu;
label_4dd60c:
    // 0x4dd60c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dd60cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dd610:
    // 0x4dd610: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4dd610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4dd614:
    // 0x4dd614: 0x320f809  jalr        $t9
label_4dd618:
    if (ctx->pc == 0x4DD618u) {
        ctx->pc = 0x4DD618u;
            // 0x4dd618: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DD61Cu;
        goto label_4dd61c;
    }
    ctx->pc = 0x4DD614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DD61Cu);
        ctx->pc = 0x4DD618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD614u;
            // 0x4dd618: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DD61Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DD61Cu; }
            if (ctx->pc != 0x4DD61Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4DD61Cu;
label_4dd61c:
    // 0x4dd61c: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_4dd620:
    if (ctx->pc == 0x4DD620u) {
        ctx->pc = 0x4DD620u;
            // 0x4dd620: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4DD624u;
        goto label_4dd624;
    }
    ctx->pc = 0x4DD61Cu;
    {
        const bool branch_taken_0x4dd61c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd61c) {
            ctx->pc = 0x4DD620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD61Cu;
            // 0x4dd620: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD64Cu;
            goto label_4dd64c;
        }
    }
    ctx->pc = 0x4DD624u;
label_4dd624:
    // 0x4dd624: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dd624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dd628:
    // 0x4dd628: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dd628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dd62c:
    // 0x4dd62c: 0x24632f20  addiu       $v1, $v1, 0x2F20
    ctx->pc = 0x4dd62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12064));
label_4dd630:
    // 0x4dd630: 0x24422f58  addiu       $v0, $v0, 0x2F58
    ctx->pc = 0x4dd630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12120));
label_4dd634:
    // 0x4dd634: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dd634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4dd638:
    // 0x4dd638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4dd638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dd63c:
    // 0x4dd63c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4dd63cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4dd640:
    // 0x4dd640: 0xc1375a0  jal         func_4DD680
label_4dd644:
    if (ctx->pc == 0x4DD644u) {
        ctx->pc = 0x4DD644u;
            // 0x4dd644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD648u;
        goto label_4dd648;
    }
    ctx->pc = 0x4DD640u;
    SET_GPR_U32(ctx, 31, 0x4DD648u);
    ctx->pc = 0x4DD644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD640u;
            // 0x4dd644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DD680u;
    if (runtime->hasFunction(0x4DD680u)) {
        auto targetFn = runtime->lookupFunction(0x4DD680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD648u; }
        if (ctx->pc != 0x4DD648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DD680_0x4dd680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD648u; }
        if (ctx->pc != 0x4DD648u) { return; }
    }
    ctx->pc = 0x4DD648u;
label_4dd648:
    // 0x4dd648: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4dd648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4dd64c:
    // 0x4dd64c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4dd64cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4dd650:
    // 0x4dd650: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4dd654:
    if (ctx->pc == 0x4DD654u) {
        ctx->pc = 0x4DD654u;
            // 0x4dd654: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD658u;
        goto label_4dd658;
    }
    ctx->pc = 0x4DD650u;
    {
        const bool branch_taken_0x4dd650 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4dd650) {
            ctx->pc = 0x4DD654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD650u;
            // 0x4dd654: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DD664u;
            goto label_4dd664;
        }
    }
    ctx->pc = 0x4DD658u;
label_4dd658:
    // 0x4dd658: 0xc0400a8  jal         func_1002A0
label_4dd65c:
    if (ctx->pc == 0x4DD65Cu) {
        ctx->pc = 0x4DD65Cu;
            // 0x4dd65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DD660u;
        goto label_4dd660;
    }
    ctx->pc = 0x4DD658u;
    SET_GPR_U32(ctx, 31, 0x4DD660u);
    ctx->pc = 0x4DD65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD658u;
            // 0x4dd65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD660u; }
        if (ctx->pc != 0x4DD660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DD660u; }
        if (ctx->pc != 0x4DD660u) { return; }
    }
    ctx->pc = 0x4DD660u;
label_4dd660:
    // 0x4dd660: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4dd660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dd664:
    // 0x4dd664: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4dd664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4dd668:
    // 0x4dd668: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dd668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dd66c:
    // 0x4dd66c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dd66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dd670:
    // 0x4dd670: 0x3e00008  jr          $ra
label_4dd674:
    if (ctx->pc == 0x4DD674u) {
        ctx->pc = 0x4DD674u;
            // 0x4dd674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DD678u;
        goto label_4dd678;
    }
    ctx->pc = 0x4DD670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DD670u;
            // 0x4dd674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DD678u;
label_4dd678:
    // 0x4dd678: 0x0  nop
    ctx->pc = 0x4dd678u;
    // NOP
label_4dd67c:
    // 0x4dd67c: 0x0  nop
    ctx->pc = 0x4dd67cu;
    // NOP
}
