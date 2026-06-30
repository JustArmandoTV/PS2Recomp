#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D9FC0
// Address: 0x1d9fc0 - 0x1da5f0
void sub_001D9FC0_0x1d9fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9FC0_0x1d9fc0");
#endif

    switch (ctx->pc) {
        case 0x1d9fc0u: goto label_1d9fc0;
        case 0x1d9fc4u: goto label_1d9fc4;
        case 0x1d9fc8u: goto label_1d9fc8;
        case 0x1d9fccu: goto label_1d9fcc;
        case 0x1d9fd0u: goto label_1d9fd0;
        case 0x1d9fd4u: goto label_1d9fd4;
        case 0x1d9fd8u: goto label_1d9fd8;
        case 0x1d9fdcu: goto label_1d9fdc;
        case 0x1d9fe0u: goto label_1d9fe0;
        case 0x1d9fe4u: goto label_1d9fe4;
        case 0x1d9fe8u: goto label_1d9fe8;
        case 0x1d9fecu: goto label_1d9fec;
        case 0x1d9ff0u: goto label_1d9ff0;
        case 0x1d9ff4u: goto label_1d9ff4;
        case 0x1d9ff8u: goto label_1d9ff8;
        case 0x1d9ffcu: goto label_1d9ffc;
        case 0x1da000u: goto label_1da000;
        case 0x1da004u: goto label_1da004;
        case 0x1da008u: goto label_1da008;
        case 0x1da00cu: goto label_1da00c;
        case 0x1da010u: goto label_1da010;
        case 0x1da014u: goto label_1da014;
        case 0x1da018u: goto label_1da018;
        case 0x1da01cu: goto label_1da01c;
        case 0x1da020u: goto label_1da020;
        case 0x1da024u: goto label_1da024;
        case 0x1da028u: goto label_1da028;
        case 0x1da02cu: goto label_1da02c;
        case 0x1da030u: goto label_1da030;
        case 0x1da034u: goto label_1da034;
        case 0x1da038u: goto label_1da038;
        case 0x1da03cu: goto label_1da03c;
        case 0x1da040u: goto label_1da040;
        case 0x1da044u: goto label_1da044;
        case 0x1da048u: goto label_1da048;
        case 0x1da04cu: goto label_1da04c;
        case 0x1da050u: goto label_1da050;
        case 0x1da054u: goto label_1da054;
        case 0x1da058u: goto label_1da058;
        case 0x1da05cu: goto label_1da05c;
        case 0x1da060u: goto label_1da060;
        case 0x1da064u: goto label_1da064;
        case 0x1da068u: goto label_1da068;
        case 0x1da06cu: goto label_1da06c;
        case 0x1da070u: goto label_1da070;
        case 0x1da074u: goto label_1da074;
        case 0x1da078u: goto label_1da078;
        case 0x1da07cu: goto label_1da07c;
        case 0x1da080u: goto label_1da080;
        case 0x1da084u: goto label_1da084;
        case 0x1da088u: goto label_1da088;
        case 0x1da08cu: goto label_1da08c;
        case 0x1da090u: goto label_1da090;
        case 0x1da094u: goto label_1da094;
        case 0x1da098u: goto label_1da098;
        case 0x1da09cu: goto label_1da09c;
        case 0x1da0a0u: goto label_1da0a0;
        case 0x1da0a4u: goto label_1da0a4;
        case 0x1da0a8u: goto label_1da0a8;
        case 0x1da0acu: goto label_1da0ac;
        case 0x1da0b0u: goto label_1da0b0;
        case 0x1da0b4u: goto label_1da0b4;
        case 0x1da0b8u: goto label_1da0b8;
        case 0x1da0bcu: goto label_1da0bc;
        case 0x1da0c0u: goto label_1da0c0;
        case 0x1da0c4u: goto label_1da0c4;
        case 0x1da0c8u: goto label_1da0c8;
        case 0x1da0ccu: goto label_1da0cc;
        case 0x1da0d0u: goto label_1da0d0;
        case 0x1da0d4u: goto label_1da0d4;
        case 0x1da0d8u: goto label_1da0d8;
        case 0x1da0dcu: goto label_1da0dc;
        case 0x1da0e0u: goto label_1da0e0;
        case 0x1da0e4u: goto label_1da0e4;
        case 0x1da0e8u: goto label_1da0e8;
        case 0x1da0ecu: goto label_1da0ec;
        case 0x1da0f0u: goto label_1da0f0;
        case 0x1da0f4u: goto label_1da0f4;
        case 0x1da0f8u: goto label_1da0f8;
        case 0x1da0fcu: goto label_1da0fc;
        case 0x1da100u: goto label_1da100;
        case 0x1da104u: goto label_1da104;
        case 0x1da108u: goto label_1da108;
        case 0x1da10cu: goto label_1da10c;
        case 0x1da110u: goto label_1da110;
        case 0x1da114u: goto label_1da114;
        case 0x1da118u: goto label_1da118;
        case 0x1da11cu: goto label_1da11c;
        case 0x1da120u: goto label_1da120;
        case 0x1da124u: goto label_1da124;
        case 0x1da128u: goto label_1da128;
        case 0x1da12cu: goto label_1da12c;
        case 0x1da130u: goto label_1da130;
        case 0x1da134u: goto label_1da134;
        case 0x1da138u: goto label_1da138;
        case 0x1da13cu: goto label_1da13c;
        case 0x1da140u: goto label_1da140;
        case 0x1da144u: goto label_1da144;
        case 0x1da148u: goto label_1da148;
        case 0x1da14cu: goto label_1da14c;
        case 0x1da150u: goto label_1da150;
        case 0x1da154u: goto label_1da154;
        case 0x1da158u: goto label_1da158;
        case 0x1da15cu: goto label_1da15c;
        case 0x1da160u: goto label_1da160;
        case 0x1da164u: goto label_1da164;
        case 0x1da168u: goto label_1da168;
        case 0x1da16cu: goto label_1da16c;
        case 0x1da170u: goto label_1da170;
        case 0x1da174u: goto label_1da174;
        case 0x1da178u: goto label_1da178;
        case 0x1da17cu: goto label_1da17c;
        case 0x1da180u: goto label_1da180;
        case 0x1da184u: goto label_1da184;
        case 0x1da188u: goto label_1da188;
        case 0x1da18cu: goto label_1da18c;
        case 0x1da190u: goto label_1da190;
        case 0x1da194u: goto label_1da194;
        case 0x1da198u: goto label_1da198;
        case 0x1da19cu: goto label_1da19c;
        case 0x1da1a0u: goto label_1da1a0;
        case 0x1da1a4u: goto label_1da1a4;
        case 0x1da1a8u: goto label_1da1a8;
        case 0x1da1acu: goto label_1da1ac;
        case 0x1da1b0u: goto label_1da1b0;
        case 0x1da1b4u: goto label_1da1b4;
        case 0x1da1b8u: goto label_1da1b8;
        case 0x1da1bcu: goto label_1da1bc;
        case 0x1da1c0u: goto label_1da1c0;
        case 0x1da1c4u: goto label_1da1c4;
        case 0x1da1c8u: goto label_1da1c8;
        case 0x1da1ccu: goto label_1da1cc;
        case 0x1da1d0u: goto label_1da1d0;
        case 0x1da1d4u: goto label_1da1d4;
        case 0x1da1d8u: goto label_1da1d8;
        case 0x1da1dcu: goto label_1da1dc;
        case 0x1da1e0u: goto label_1da1e0;
        case 0x1da1e4u: goto label_1da1e4;
        case 0x1da1e8u: goto label_1da1e8;
        case 0x1da1ecu: goto label_1da1ec;
        case 0x1da1f0u: goto label_1da1f0;
        case 0x1da1f4u: goto label_1da1f4;
        case 0x1da1f8u: goto label_1da1f8;
        case 0x1da1fcu: goto label_1da1fc;
        case 0x1da200u: goto label_1da200;
        case 0x1da204u: goto label_1da204;
        case 0x1da208u: goto label_1da208;
        case 0x1da20cu: goto label_1da20c;
        case 0x1da210u: goto label_1da210;
        case 0x1da214u: goto label_1da214;
        case 0x1da218u: goto label_1da218;
        case 0x1da21cu: goto label_1da21c;
        case 0x1da220u: goto label_1da220;
        case 0x1da224u: goto label_1da224;
        case 0x1da228u: goto label_1da228;
        case 0x1da22cu: goto label_1da22c;
        case 0x1da230u: goto label_1da230;
        case 0x1da234u: goto label_1da234;
        case 0x1da238u: goto label_1da238;
        case 0x1da23cu: goto label_1da23c;
        case 0x1da240u: goto label_1da240;
        case 0x1da244u: goto label_1da244;
        case 0x1da248u: goto label_1da248;
        case 0x1da24cu: goto label_1da24c;
        case 0x1da250u: goto label_1da250;
        case 0x1da254u: goto label_1da254;
        case 0x1da258u: goto label_1da258;
        case 0x1da25cu: goto label_1da25c;
        case 0x1da260u: goto label_1da260;
        case 0x1da264u: goto label_1da264;
        case 0x1da268u: goto label_1da268;
        case 0x1da26cu: goto label_1da26c;
        case 0x1da270u: goto label_1da270;
        case 0x1da274u: goto label_1da274;
        case 0x1da278u: goto label_1da278;
        case 0x1da27cu: goto label_1da27c;
        case 0x1da280u: goto label_1da280;
        case 0x1da284u: goto label_1da284;
        case 0x1da288u: goto label_1da288;
        case 0x1da28cu: goto label_1da28c;
        case 0x1da290u: goto label_1da290;
        case 0x1da294u: goto label_1da294;
        case 0x1da298u: goto label_1da298;
        case 0x1da29cu: goto label_1da29c;
        case 0x1da2a0u: goto label_1da2a0;
        case 0x1da2a4u: goto label_1da2a4;
        case 0x1da2a8u: goto label_1da2a8;
        case 0x1da2acu: goto label_1da2ac;
        case 0x1da2b0u: goto label_1da2b0;
        case 0x1da2b4u: goto label_1da2b4;
        case 0x1da2b8u: goto label_1da2b8;
        case 0x1da2bcu: goto label_1da2bc;
        case 0x1da2c0u: goto label_1da2c0;
        case 0x1da2c4u: goto label_1da2c4;
        case 0x1da2c8u: goto label_1da2c8;
        case 0x1da2ccu: goto label_1da2cc;
        case 0x1da2d0u: goto label_1da2d0;
        case 0x1da2d4u: goto label_1da2d4;
        case 0x1da2d8u: goto label_1da2d8;
        case 0x1da2dcu: goto label_1da2dc;
        case 0x1da2e0u: goto label_1da2e0;
        case 0x1da2e4u: goto label_1da2e4;
        case 0x1da2e8u: goto label_1da2e8;
        case 0x1da2ecu: goto label_1da2ec;
        case 0x1da2f0u: goto label_1da2f0;
        case 0x1da2f4u: goto label_1da2f4;
        case 0x1da2f8u: goto label_1da2f8;
        case 0x1da2fcu: goto label_1da2fc;
        case 0x1da300u: goto label_1da300;
        case 0x1da304u: goto label_1da304;
        case 0x1da308u: goto label_1da308;
        case 0x1da30cu: goto label_1da30c;
        case 0x1da310u: goto label_1da310;
        case 0x1da314u: goto label_1da314;
        case 0x1da318u: goto label_1da318;
        case 0x1da31cu: goto label_1da31c;
        case 0x1da320u: goto label_1da320;
        case 0x1da324u: goto label_1da324;
        case 0x1da328u: goto label_1da328;
        case 0x1da32cu: goto label_1da32c;
        case 0x1da330u: goto label_1da330;
        case 0x1da334u: goto label_1da334;
        case 0x1da338u: goto label_1da338;
        case 0x1da33cu: goto label_1da33c;
        case 0x1da340u: goto label_1da340;
        case 0x1da344u: goto label_1da344;
        case 0x1da348u: goto label_1da348;
        case 0x1da34cu: goto label_1da34c;
        case 0x1da350u: goto label_1da350;
        case 0x1da354u: goto label_1da354;
        case 0x1da358u: goto label_1da358;
        case 0x1da35cu: goto label_1da35c;
        case 0x1da360u: goto label_1da360;
        case 0x1da364u: goto label_1da364;
        case 0x1da368u: goto label_1da368;
        case 0x1da36cu: goto label_1da36c;
        case 0x1da370u: goto label_1da370;
        case 0x1da374u: goto label_1da374;
        case 0x1da378u: goto label_1da378;
        case 0x1da37cu: goto label_1da37c;
        case 0x1da380u: goto label_1da380;
        case 0x1da384u: goto label_1da384;
        case 0x1da388u: goto label_1da388;
        case 0x1da38cu: goto label_1da38c;
        case 0x1da390u: goto label_1da390;
        case 0x1da394u: goto label_1da394;
        case 0x1da398u: goto label_1da398;
        case 0x1da39cu: goto label_1da39c;
        case 0x1da3a0u: goto label_1da3a0;
        case 0x1da3a4u: goto label_1da3a4;
        case 0x1da3a8u: goto label_1da3a8;
        case 0x1da3acu: goto label_1da3ac;
        case 0x1da3b0u: goto label_1da3b0;
        case 0x1da3b4u: goto label_1da3b4;
        case 0x1da3b8u: goto label_1da3b8;
        case 0x1da3bcu: goto label_1da3bc;
        case 0x1da3c0u: goto label_1da3c0;
        case 0x1da3c4u: goto label_1da3c4;
        case 0x1da3c8u: goto label_1da3c8;
        case 0x1da3ccu: goto label_1da3cc;
        case 0x1da3d0u: goto label_1da3d0;
        case 0x1da3d4u: goto label_1da3d4;
        case 0x1da3d8u: goto label_1da3d8;
        case 0x1da3dcu: goto label_1da3dc;
        case 0x1da3e0u: goto label_1da3e0;
        case 0x1da3e4u: goto label_1da3e4;
        case 0x1da3e8u: goto label_1da3e8;
        case 0x1da3ecu: goto label_1da3ec;
        case 0x1da3f0u: goto label_1da3f0;
        case 0x1da3f4u: goto label_1da3f4;
        case 0x1da3f8u: goto label_1da3f8;
        case 0x1da3fcu: goto label_1da3fc;
        case 0x1da400u: goto label_1da400;
        case 0x1da404u: goto label_1da404;
        case 0x1da408u: goto label_1da408;
        case 0x1da40cu: goto label_1da40c;
        case 0x1da410u: goto label_1da410;
        case 0x1da414u: goto label_1da414;
        case 0x1da418u: goto label_1da418;
        case 0x1da41cu: goto label_1da41c;
        case 0x1da420u: goto label_1da420;
        case 0x1da424u: goto label_1da424;
        case 0x1da428u: goto label_1da428;
        case 0x1da42cu: goto label_1da42c;
        case 0x1da430u: goto label_1da430;
        case 0x1da434u: goto label_1da434;
        case 0x1da438u: goto label_1da438;
        case 0x1da43cu: goto label_1da43c;
        case 0x1da440u: goto label_1da440;
        case 0x1da444u: goto label_1da444;
        case 0x1da448u: goto label_1da448;
        case 0x1da44cu: goto label_1da44c;
        case 0x1da450u: goto label_1da450;
        case 0x1da454u: goto label_1da454;
        case 0x1da458u: goto label_1da458;
        case 0x1da45cu: goto label_1da45c;
        case 0x1da460u: goto label_1da460;
        case 0x1da464u: goto label_1da464;
        case 0x1da468u: goto label_1da468;
        case 0x1da46cu: goto label_1da46c;
        case 0x1da470u: goto label_1da470;
        case 0x1da474u: goto label_1da474;
        case 0x1da478u: goto label_1da478;
        case 0x1da47cu: goto label_1da47c;
        case 0x1da480u: goto label_1da480;
        case 0x1da484u: goto label_1da484;
        case 0x1da488u: goto label_1da488;
        case 0x1da48cu: goto label_1da48c;
        case 0x1da490u: goto label_1da490;
        case 0x1da494u: goto label_1da494;
        case 0x1da498u: goto label_1da498;
        case 0x1da49cu: goto label_1da49c;
        case 0x1da4a0u: goto label_1da4a0;
        case 0x1da4a4u: goto label_1da4a4;
        case 0x1da4a8u: goto label_1da4a8;
        case 0x1da4acu: goto label_1da4ac;
        case 0x1da4b0u: goto label_1da4b0;
        case 0x1da4b4u: goto label_1da4b4;
        case 0x1da4b8u: goto label_1da4b8;
        case 0x1da4bcu: goto label_1da4bc;
        case 0x1da4c0u: goto label_1da4c0;
        case 0x1da4c4u: goto label_1da4c4;
        case 0x1da4c8u: goto label_1da4c8;
        case 0x1da4ccu: goto label_1da4cc;
        case 0x1da4d0u: goto label_1da4d0;
        case 0x1da4d4u: goto label_1da4d4;
        case 0x1da4d8u: goto label_1da4d8;
        case 0x1da4dcu: goto label_1da4dc;
        case 0x1da4e0u: goto label_1da4e0;
        case 0x1da4e4u: goto label_1da4e4;
        case 0x1da4e8u: goto label_1da4e8;
        case 0x1da4ecu: goto label_1da4ec;
        case 0x1da4f0u: goto label_1da4f0;
        case 0x1da4f4u: goto label_1da4f4;
        case 0x1da4f8u: goto label_1da4f8;
        case 0x1da4fcu: goto label_1da4fc;
        case 0x1da500u: goto label_1da500;
        case 0x1da504u: goto label_1da504;
        case 0x1da508u: goto label_1da508;
        case 0x1da50cu: goto label_1da50c;
        case 0x1da510u: goto label_1da510;
        case 0x1da514u: goto label_1da514;
        case 0x1da518u: goto label_1da518;
        case 0x1da51cu: goto label_1da51c;
        case 0x1da520u: goto label_1da520;
        case 0x1da524u: goto label_1da524;
        case 0x1da528u: goto label_1da528;
        case 0x1da52cu: goto label_1da52c;
        case 0x1da530u: goto label_1da530;
        case 0x1da534u: goto label_1da534;
        case 0x1da538u: goto label_1da538;
        case 0x1da53cu: goto label_1da53c;
        case 0x1da540u: goto label_1da540;
        case 0x1da544u: goto label_1da544;
        case 0x1da548u: goto label_1da548;
        case 0x1da54cu: goto label_1da54c;
        case 0x1da550u: goto label_1da550;
        case 0x1da554u: goto label_1da554;
        case 0x1da558u: goto label_1da558;
        case 0x1da55cu: goto label_1da55c;
        case 0x1da560u: goto label_1da560;
        case 0x1da564u: goto label_1da564;
        case 0x1da568u: goto label_1da568;
        case 0x1da56cu: goto label_1da56c;
        case 0x1da570u: goto label_1da570;
        case 0x1da574u: goto label_1da574;
        case 0x1da578u: goto label_1da578;
        case 0x1da57cu: goto label_1da57c;
        case 0x1da580u: goto label_1da580;
        case 0x1da584u: goto label_1da584;
        case 0x1da588u: goto label_1da588;
        case 0x1da58cu: goto label_1da58c;
        case 0x1da590u: goto label_1da590;
        case 0x1da594u: goto label_1da594;
        case 0x1da598u: goto label_1da598;
        case 0x1da59cu: goto label_1da59c;
        case 0x1da5a0u: goto label_1da5a0;
        case 0x1da5a4u: goto label_1da5a4;
        case 0x1da5a8u: goto label_1da5a8;
        case 0x1da5acu: goto label_1da5ac;
        case 0x1da5b0u: goto label_1da5b0;
        case 0x1da5b4u: goto label_1da5b4;
        case 0x1da5b8u: goto label_1da5b8;
        case 0x1da5bcu: goto label_1da5bc;
        case 0x1da5c0u: goto label_1da5c0;
        case 0x1da5c4u: goto label_1da5c4;
        case 0x1da5c8u: goto label_1da5c8;
        case 0x1da5ccu: goto label_1da5cc;
        case 0x1da5d0u: goto label_1da5d0;
        case 0x1da5d4u: goto label_1da5d4;
        case 0x1da5d8u: goto label_1da5d8;
        case 0x1da5dcu: goto label_1da5dc;
        case 0x1da5e0u: goto label_1da5e0;
        case 0x1da5e4u: goto label_1da5e4;
        case 0x1da5e8u: goto label_1da5e8;
        case 0x1da5ecu: goto label_1da5ec;
        default: break;
    }

    ctx->pc = 0x1d9fc0u;

label_1d9fc0:
    // 0x1d9fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d9fc4:
    // 0x1d9fc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d9fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d9fc8:
    // 0x1d9fc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d9fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d9fcc:
    // 0x1d9fcc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d9fccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d9fd0:
    // 0x1d9fd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d9fd4:
    // 0x1d9fd4: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1d9fd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_1d9fd8:
    // 0x1d9fd8: 0xc04cc70  jal         func_1331C0
label_1d9fdc:
    if (ctx->pc == 0x1D9FDCu) {
        ctx->pc = 0x1D9FDCu;
            // 0x1d9fdc: 0x26040360  addiu       $a0, $s0, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
        ctx->pc = 0x1D9FE0u;
        goto label_1d9fe0;
    }
    ctx->pc = 0x1D9FD8u;
    SET_GPR_U32(ctx, 31, 0x1D9FE0u);
    ctx->pc = 0x1D9FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9FD8u;
            // 0x1d9fdc: 0x26040360  addiu       $a0, $s0, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9FE0u; }
        if (ctx->pc != 0x1D9FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9FE0u; }
        if (ctx->pc != 0x1D9FE0u) { return; }
    }
    ctx->pc = 0x1D9FE0u;
label_1d9fe0:
    // 0x1d9fe0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d9fe4:
    // 0x1d9fe4: 0x26040370  addiu       $a0, $s0, 0x370
    ctx->pc = 0x1d9fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
label_1d9fe8:
    // 0x1d9fe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d9fec:
    // 0x1d9fec: 0x26050360  addiu       $a1, $s0, 0x360
    ctx->pc = 0x1d9fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_1d9ff0:
    // 0x1d9ff0: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x1d9ff0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[20];
label_1d9ff4:
    // 0x1d9ff4: 0x0  nop
    ctx->pc = 0x1d9ff4u;
    // NOP
label_1d9ff8:
    // 0x1d9ff8: 0x0  nop
    ctx->pc = 0x1d9ff8u;
    // NOP
label_1d9ffc:
    // 0x1d9ffc: 0xc04cc70  jal         func_1331C0
label_1da000:
    if (ctx->pc == 0x1DA000u) {
        ctx->pc = 0x1DA004u;
        goto label_1da004;
    }
    ctx->pc = 0x1D9FFCu;
    SET_GPR_U32(ctx, 31, 0x1DA004u);
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA004u; }
        if (ctx->pc != 0x1DA004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA004u; }
        if (ctx->pc != 0x1DA004u) { return; }
    }
    ctx->pc = 0x1DA004u;
label_1da004:
    // 0x1da004: 0xe6140e2c  swc1        $f20, 0xE2C($s0)
    ctx->pc = 0x1da004u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3628), bits); }
label_1da008:
    // 0x1da008: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1da008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1da00c:
    // 0x1da00c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1da00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1da010:
    // 0x1da010: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1da010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1da014:
    // 0x1da014: 0x3e00008  jr          $ra
label_1da018:
    if (ctx->pc == 0x1DA018u) {
        ctx->pc = 0x1DA018u;
            // 0x1da018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1DA01Cu;
        goto label_1da01c;
    }
    ctx->pc = 0x1DA014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA014u;
            // 0x1da018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DA01Cu;
label_1da01c:
    // 0x1da01c: 0x0  nop
    ctx->pc = 0x1da01cu;
    // NOP
label_1da020:
    // 0x1da020: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1da020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_1da024:
    // 0x1da024: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1da024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1da028:
    // 0x1da028: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1da028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1da02c:
    // 0x1da02c: 0x24a5c8f0  addiu       $a1, $a1, -0x3710
    ctx->pc = 0x1da02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
label_1da030:
    // 0x1da030: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1da030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1da034:
    // 0x1da034: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1da034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1da038:
    // 0x1da038: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1da038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1da03c:
    // 0x1da03c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1da03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1da040:
    // 0x1da040: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1da040u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da044:
    // 0x1da044: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1da044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1da048:
    // 0x1da048: 0x26640350  addiu       $a0, $s3, 0x350
    ctx->pc = 0x1da048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 848));
label_1da04c:
    // 0x1da04c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1da04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1da050:
    // 0x1da050: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1da050u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1da054:
    // 0x1da054: 0xc04cc04  jal         func_133010
label_1da058:
    if (ctx->pc == 0x1DA058u) {
        ctx->pc = 0x1DA058u;
            // 0x1da058: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x1DA05Cu;
        goto label_1da05c;
    }
    ctx->pc = 0x1DA054u;
    SET_GPR_U32(ctx, 31, 0x1DA05Cu);
    ctx->pc = 0x1DA058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA054u;
            // 0x1da058: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA05Cu; }
        if (ctx->pc != 0x1DA05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA05Cu; }
        if (ctx->pc != 0x1DA05Cu) { return; }
    }
    ctx->pc = 0x1DA05Cu;
label_1da05c:
    // 0x1da05c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1da05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1da060:
    // 0x1da060: 0x92640014  lbu         $a0, 0x14($s3)
    ctx->pc = 0x1da060u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
label_1da064:
    // 0x1da064: 0x8c70e418  lw          $s0, -0x1BE8($v1)
    ctx->pc = 0x1da064u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960152)));
label_1da068:
    // 0x1da068: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1da068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1da06c:
    // 0x1da06c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_1da070:
    if (ctx->pc == 0x1DA070u) {
        ctx->pc = 0x1DA074u;
        goto label_1da074;
    }
    ctx->pc = 0x1DA06Cu;
    {
        const bool branch_taken_0x1da06c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1da06c) {
            ctx->pc = 0x1DA0A0u;
            goto label_1da0a0;
        }
    }
    ctx->pc = 0x1DA074u;
label_1da074:
    // 0x1da074: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1da074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1da078:
    // 0x1da078: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_1da07c:
    if (ctx->pc == 0x1DA07Cu) {
        ctx->pc = 0x1DA07Cu;
            // 0x1da07c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1DA080u;
        goto label_1da080;
    }
    ctx->pc = 0x1DA078u;
    {
        const bool branch_taken_0x1da078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1da078) {
            ctx->pc = 0x1DA07Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA078u;
            // 0x1da07c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA088u;
            goto label_1da088;
        }
    }
    ctx->pc = 0x1DA080u;
label_1da080:
    // 0x1da080: 0x1000014e  b           . + 4 + (0x14E << 2)
label_1da084:
    if (ctx->pc == 0x1DA084u) {
        ctx->pc = 0x1DA084u;
            // 0x1da084: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x1DA088u;
        goto label_1da088;
    }
    ctx->pc = 0x1DA080u;
    {
        const bool branch_taken_0x1da080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA080u;
            // 0x1da084: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da080) {
            ctx->pc = 0x1DA5BCu;
            goto label_1da5bc;
        }
    }
    ctx->pc = 0x1DA088u;
label_1da088:
    // 0x1da088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da08c:
    // 0x1da08c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1da08cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1da090:
    // 0x1da090: 0x320f809  jalr        $t9
label_1da094:
    if (ctx->pc == 0x1DA094u) {
        ctx->pc = 0x1DA094u;
            // 0x1da094: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA098u;
        goto label_1da098;
    }
    ctx->pc = 0x1DA090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DA098u);
        ctx->pc = 0x1DA094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA090u;
            // 0x1da094: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA098u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA098u; }
            if (ctx->pc != 0x1DA098u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA098u;
label_1da098:
    // 0x1da098: 0x10000147  b           . + 4 + (0x147 << 2)
label_1da09c:
    if (ctx->pc == 0x1DA09Cu) {
        ctx->pc = 0x1DA0A0u;
        goto label_1da0a0;
    }
    ctx->pc = 0x1DA098u;
    {
        const bool branch_taken_0x1da098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da098) {
            ctx->pc = 0x1DA5B8u;
            goto label_1da5b8;
        }
    }
    ctx->pc = 0x1DA0A0u;
label_1da0a0:
    // 0x1da0a0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x1da0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_1da0a4:
    // 0x1da0a4: 0x926411a1  lbu         $a0, 0x11A1($s3)
    ctx->pc = 0x1da0a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4513)));
label_1da0a8:
    // 0x1da0a8: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x1da0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_1da0ac:
    // 0x1da0ac: 0x10800142  beqz        $a0, . + 4 + (0x142 << 2)
label_1da0b0:
    if (ctx->pc == 0x1DA0B0u) {
        ctx->pc = 0x1DA0B0u;
            // 0x1da0b0: 0x8c750130  lw          $s5, 0x130($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
        ctx->pc = 0x1DA0B4u;
        goto label_1da0b4;
    }
    ctx->pc = 0x1DA0ACu;
    {
        const bool branch_taken_0x1da0ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0ACu;
            // 0x1da0b0: 0x8c750130  lw          $s5, 0x130($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da0ac) {
            ctx->pc = 0x1DA5B8u;
            goto label_1da5b8;
        }
    }
    ctx->pc = 0x1DA0B4u;
label_1da0b4:
    // 0x1da0b4: 0x826311aa  lb          $v1, 0x11AA($s3)
    ctx->pc = 0x1da0b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
label_1da0b8:
    // 0x1da0b8: 0x52a30008  beql        $s5, $v1, . + 4 + (0x8 << 2)
label_1da0bc:
    if (ctx->pc == 0x1DA0BCu) {
        ctx->pc = 0x1DA0BCu;
            // 0x1da0bc: 0x826311ab  lb          $v1, 0x11AB($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4523)));
        ctx->pc = 0x1DA0C0u;
        goto label_1da0c0;
    }
    ctx->pc = 0x1DA0B8u;
    {
        const bool branch_taken_0x1da0b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x1da0b8) {
            ctx->pc = 0x1DA0BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0B8u;
            // 0x1da0bc: 0x826311ab  lb          $v1, 0x11AB($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4523)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA0DCu;
            goto label_1da0dc;
        }
    }
    ctx->pc = 0x1DA0C0u;
label_1da0c0:
    // 0x1da0c0: 0xc0754b4  jal         func_1D52D0
label_1da0c4:
    if (ctx->pc == 0x1DA0C4u) {
        ctx->pc = 0x1DA0C4u;
            // 0x1da0c4: 0x26640440  addiu       $a0, $s3, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
        ctx->pc = 0x1DA0C8u;
        goto label_1da0c8;
    }
    ctx->pc = 0x1DA0C0u;
    SET_GPR_U32(ctx, 31, 0x1DA0C8u);
    ctx->pc = 0x1DA0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0C0u;
            // 0x1da0c4: 0x26640440  addiu       $a0, $s3, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0C8u; }
        if (ctx->pc != 0x1DA0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0C8u; }
        if (ctx->pc != 0x1DA0C8u) { return; }
    }
    ctx->pc = 0x1DA0C8u;
label_1da0c8:
    // 0x1da0c8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1da0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1da0cc:
    // 0x1da0cc: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1da0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1da0d0:
    // 0x1da0d0: 0x14600139  bnez        $v1, . + 4 + (0x139 << 2)
label_1da0d4:
    if (ctx->pc == 0x1DA0D4u) {
        ctx->pc = 0x1DA0D8u;
        goto label_1da0d8;
    }
    ctx->pc = 0x1DA0D0u;
    {
        const bool branch_taken_0x1da0d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da0d0) {
            ctx->pc = 0x1DA5B8u;
            goto label_1da5b8;
        }
    }
    ctx->pc = 0x1DA0D8u;
label_1da0d8:
    // 0x1da0d8: 0x826311ab  lb          $v1, 0x11AB($s3)
    ctx->pc = 0x1da0d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4523)));
label_1da0dc:
    // 0x1da0dc: 0x56a30006  bnel        $s5, $v1, . + 4 + (0x6 << 2)
label_1da0e0:
    if (ctx->pc == 0x1DA0E0u) {
        ctx->pc = 0x1DA0E0u;
            // 0x1da0e0: 0x92640e3d  lbu         $a0, 0xE3D($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3645)));
        ctx->pc = 0x1DA0E4u;
        goto label_1da0e4;
    }
    ctx->pc = 0x1DA0DCu;
    {
        const bool branch_taken_0x1da0dc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x1da0dc) {
            ctx->pc = 0x1DA0E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0DCu;
            // 0x1da0e0: 0x92640e3d  lbu         $a0, 0xE3D($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3645)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA0F8u;
            goto label_1da0f8;
        }
    }
    ctx->pc = 0x1DA0E4u;
label_1da0e4:
    // 0x1da0e4: 0x15a080  sll         $s4, $s5, 2
    ctx->pc = 0x1da0e4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1da0e8:
    // 0x1da0e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1da0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da0ec:
    // 0x1da0ec: 0x2931821  addu        $v1, $s4, $s3
    ctx->pc = 0x1da0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_1da0f0:
    // 0x1da0f0: 0x10000052  b           . + 4 + (0x52 << 2)
label_1da0f4:
    if (ctx->pc == 0x1DA0F4u) {
        ctx->pc = 0x1DA0F4u;
            // 0x1da0f4: 0xac641160  sw          $a0, 0x1160($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4448), GPR_U32(ctx, 4));
        ctx->pc = 0x1DA0F8u;
        goto label_1da0f8;
    }
    ctx->pc = 0x1DA0F0u;
    {
        const bool branch_taken_0x1da0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0F0u;
            // 0x1da0f4: 0xac641160  sw          $a0, 0x1160($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4448), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da0f0) {
            ctx->pc = 0x1DA23Cu;
            goto label_1da23c;
        }
    }
    ctx->pc = 0x1DA0F8u;
label_1da0f8:
    // 0x1da0f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1da0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1da0fc:
    // 0x1da0fc: 0x8e630d6c  lw          $v1, 0xD6C($s3)
    ctx->pc = 0x1da0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3436)));
label_1da100:
    // 0x1da100: 0x15a080  sll         $s4, $s5, 2
    ctx->pc = 0x1da100u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1da104:
    // 0x1da104: 0xc6751170  lwc1        $f21, 0x1170($s3)
    ctx->pc = 0x1da104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1da108:
    // 0x1da108: 0x43180  sll         $a2, $a0, 6
    ctx->pc = 0x1da108u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_1da10c:
    // 0x1da10c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x1da10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_1da110:
    // 0x1da110: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1da110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1da114:
    // 0x1da114: 0x2661021  addu        $v0, $s3, $a2
    ctx->pc = 0x1da114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_1da118:
    // 0x1da118: 0x245200c0  addiu       $s2, $v0, 0xC0
    ctx->pc = 0x1da118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1da11c:
    // 0x1da11c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1da11cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1da120:
    // 0x1da120: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x1da120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1da124:
    // 0x1da124: 0x9046007d  lbu         $a2, 0x7D($v0)
    ctx->pc = 0x1da124u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 125)));
label_1da128:
    // 0x1da128: 0xc07698c  jal         func_1DA630
label_1da12c:
    if (ctx->pc == 0x1DA12Cu) {
        ctx->pc = 0x1DA12Cu;
            // 0x1da12c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA130u;
        goto label_1da130;
    }
    ctx->pc = 0x1DA128u;
    SET_GPR_U32(ctx, 31, 0x1DA130u);
    ctx->pc = 0x1DA12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA128u;
            // 0x1da12c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA130u; }
        if (ctx->pc != 0x1DA130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA130u; }
        if (ctx->pc != 0x1DA130u) { return; }
    }
    ctx->pc = 0x1DA130u;
label_1da130:
    // 0x1da130: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1da130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1da134:
    // 0x1da134: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_1da138:
    if (ctx->pc == 0x1DA138u) {
        ctx->pc = 0x1DA13Cu;
        goto label_1da13c;
    }
    ctx->pc = 0x1DA134u;
    {
        const bool branch_taken_0x1da134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1da134) {
            ctx->pc = 0x1DA150u;
            goto label_1da150;
        }
    }
    ctx->pc = 0x1DA13Cu;
label_1da13c:
    // 0x1da13c: 0x3c034cbe  lui         $v1, 0x4CBE
    ctx->pc = 0x1da13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19646 << 16));
label_1da140:
    // 0x1da140: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1da140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1da144:
    // 0x1da144: 0x3463bc20  ori         $v1, $v1, 0xBC20
    ctx->pc = 0x1da144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48160);
label_1da148:
    // 0x1da148: 0x10000034  b           . + 4 + (0x34 << 2)
label_1da14c:
    if (ctx->pc == 0x1DA14Cu) {
        ctx->pc = 0x1DA14Cu;
            // 0x1da14c: 0xafa3015c  sw          $v1, 0x15C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
        ctx->pc = 0x1DA150u;
        goto label_1da150;
    }
    ctx->pc = 0x1DA148u;
    {
        const bool branch_taken_0x1da148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA148u;
            // 0x1da14c: 0xafa3015c  sw          $v1, 0x15C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da148) {
            ctx->pc = 0x1DA21Cu;
            goto label_1da21c;
        }
    }
    ctx->pc = 0x1DA150u;
label_1da150:
    // 0x1da150: 0xc0576f4  jal         func_15DBD0
label_1da154:
    if (ctx->pc == 0x1DA154u) {
        ctx->pc = 0x1DA158u;
        goto label_1da158;
    }
    ctx->pc = 0x1DA150u;
    SET_GPR_U32(ctx, 31, 0x1DA158u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA158u; }
        if (ctx->pc != 0x1DA158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA158u; }
        if (ctx->pc != 0x1DA158u) { return; }
    }
    ctx->pc = 0x1DA158u;
label_1da158:
    // 0x1da158: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1da158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1da15c:
    // 0x1da15c: 0xc076984  jal         func_1DA610
label_1da160:
    if (ctx->pc == 0x1DA160u) {
        ctx->pc = 0x1DA160u;
            // 0x1da160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA164u;
        goto label_1da164;
    }
    ctx->pc = 0x1DA15Cu;
    SET_GPR_U32(ctx, 31, 0x1DA164u);
    ctx->pc = 0x1DA160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA15Cu;
            // 0x1da160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA164u; }
        if (ctx->pc != 0x1DA164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA164u; }
        if (ctx->pc != 0x1DA164u) { return; }
    }
    ctx->pc = 0x1DA164u;
label_1da164:
    // 0x1da164: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1da164u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1da168:
    // 0x1da168: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1da168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1da16c:
    // 0x1da16c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1da16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1da170:
    // 0x1da170: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1da170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1da174:
    // 0x1da174: 0xc442a7d0  lwc1        $f2, -0x5830($v0)
    ctx->pc = 0x1da174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1da178:
    // 0x1da178: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1da178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da17c:
    // 0x1da17c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1da17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1da180:
    // 0x1da180: 0xc441a7d8  lwc1        $f1, -0x5828($v0)
    ctx->pc = 0x1da180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1da184:
    // 0x1da184: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x1da184u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1da188:
    // 0x1da188: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1da188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1da18c:
    // 0x1da18c: 0xc440a7dc  lwc1        $f0, -0x5824($v0)
    ctx->pc = 0x1da18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1da190:
    // 0x1da190: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x1da190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1da194:
    // 0x1da194: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1da194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1da198:
    // 0x1da198: 0x8c42a7d4  lw          $v0, -0x582C($v0)
    ctx->pc = 0x1da198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944724)));
label_1da19c:
    // 0x1da19c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1da19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1da1a0:
    // 0x1da1a0: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x1da1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_1da1a4:
    // 0x1da1a4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1da1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1da1a8:
    // 0x1da1a8: 0xc04cca0  jal         func_133280
label_1da1ac:
    if (ctx->pc == 0x1DA1ACu) {
        ctx->pc = 0x1DA1ACu;
            // 0x1da1ac: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->pc = 0x1DA1B0u;
        goto label_1da1b0;
    }
    ctx->pc = 0x1DA1A8u;
    SET_GPR_U32(ctx, 31, 0x1DA1B0u);
    ctx->pc = 0x1DA1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1A8u;
            // 0x1da1ac: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1B0u; }
        if (ctx->pc != 0x1DA1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1B0u; }
        if (ctx->pc != 0x1DA1B0u) { return; }
    }
    ctx->pc = 0x1DA1B0u;
label_1da1b0:
    // 0x1da1b0: 0xc076980  jal         func_1DA600
label_1da1b4:
    if (ctx->pc == 0x1DA1B4u) {
        ctx->pc = 0x1DA1B4u;
            // 0x1da1b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1B8u;
        goto label_1da1b8;
    }
    ctx->pc = 0x1DA1B0u;
    SET_GPR_U32(ctx, 31, 0x1DA1B8u);
    ctx->pc = 0x1DA1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1B0u;
            // 0x1da1b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1B8u; }
        if (ctx->pc != 0x1DA1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1B8u; }
        if (ctx->pc != 0x1DA1B8u) { return; }
    }
    ctx->pc = 0x1DA1B8u;
label_1da1b8:
    // 0x1da1b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1da1bc:
    // 0x1da1bc: 0xc04cc34  jal         func_1330D0
label_1da1c0:
    if (ctx->pc == 0x1DA1C0u) {
        ctx->pc = 0x1DA1C0u;
            // 0x1da1c0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1DA1C4u;
        goto label_1da1c4;
    }
    ctx->pc = 0x1DA1BCu;
    SET_GPR_U32(ctx, 31, 0x1DA1C4u);
    ctx->pc = 0x1DA1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1BCu;
            // 0x1da1c0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1C4u; }
        if (ctx->pc != 0x1DA1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1C4u; }
        if (ctx->pc != 0x1DA1C4u) { return; }
    }
    ctx->pc = 0x1DA1C4u;
label_1da1c4:
    // 0x1da1c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1da1c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1da1c8:
    // 0x1da1c8: 0xc04c710  jal         func_131C40
label_1da1cc:
    if (ctx->pc == 0x1DA1CCu) {
        ctx->pc = 0x1DA1CCu;
            // 0x1da1cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1DA1D0u;
        goto label_1da1d0;
    }
    ctx->pc = 0x1DA1C8u;
    SET_GPR_U32(ctx, 31, 0x1DA1D0u);
    ctx->pc = 0x1DA1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1C8u;
            // 0x1da1cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1D0u; }
        if (ctx->pc != 0x1DA1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1D0u; }
        if (ctx->pc != 0x1DA1D0u) { return; }
    }
    ctx->pc = 0x1DA1D0u;
label_1da1d0:
    // 0x1da1d0: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x1da1d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1da1d4:
    // 0x1da1d4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1da1d8:
    if (ctx->pc == 0x1DA1D8u) {
        ctx->pc = 0x1DA1D8u;
            // 0x1da1d8: 0xe7a0015c  swc1        $f0, 0x15C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
        ctx->pc = 0x1DA1DCu;
        goto label_1da1dc;
    }
    ctx->pc = 0x1DA1D4u;
    {
        const bool branch_taken_0x1da1d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DA1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1D4u;
            // 0x1da1d8: 0xe7a0015c  swc1        $f0, 0x15C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1d4) {
            ctx->pc = 0x1DA1E4u;
            goto label_1da1e4;
        }
    }
    ctx->pc = 0x1DA1DCu;
label_1da1dc:
    // 0x1da1dc: 0x1000000f  b           . + 4 + (0xF << 2)
label_1da1e0:
    if (ctx->pc == 0x1DA1E0u) {
        ctx->pc = 0x1DA1E0u;
            // 0x1da1e0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1DA1E4u;
        goto label_1da1e4;
    }
    ctx->pc = 0x1DA1DCu;
    {
        const bool branch_taken_0x1da1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1DCu;
            // 0x1da1e0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1dc) {
            ctx->pc = 0x1DA21Cu;
            goto label_1da21c;
        }
    }
    ctx->pc = 0x1DA1E4u;
label_1da1e4:
    // 0x1da1e4: 0xc07697c  jal         func_1DA5F0
label_1da1e8:
    if (ctx->pc == 0x1DA1E8u) {
        ctx->pc = 0x1DA1E8u;
            // 0x1da1e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1ECu;
        goto label_1da1ec;
    }
    ctx->pc = 0x1DA1E4u;
    SET_GPR_U32(ctx, 31, 0x1DA1ECu);
    ctx->pc = 0x1DA1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1E4u;
            // 0x1da1e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1ECu; }
        if (ctx->pc != 0x1DA1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1ECu; }
        if (ctx->pc != 0x1DA1ECu) { return; }
    }
    ctx->pc = 0x1DA1ECu;
label_1da1ec:
    // 0x1da1ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1da1f0:
    // 0x1da1f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1da1f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1da1f4:
    // 0x1da1f4: 0xc04cd60  jal         func_133580
label_1da1f8:
    if (ctx->pc == 0x1DA1F8u) {
        ctx->pc = 0x1DA1F8u;
            // 0x1da1f8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1DA1FCu;
        goto label_1da1fc;
    }
    ctx->pc = 0x1DA1F4u;
    SET_GPR_U32(ctx, 31, 0x1DA1FCu);
    ctx->pc = 0x1DA1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1F4u;
            // 0x1da1f8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1FCu; }
        if (ctx->pc != 0x1DA1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1FCu; }
        if (ctx->pc != 0x1DA1FCu) { return; }
    }
    ctx->pc = 0x1DA1FCu;
label_1da1fc:
    // 0x1da1fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1da200:
    // 0x1da200: 0xc04c650  jal         func_131940
label_1da204:
    if (ctx->pc == 0x1DA204u) {
        ctx->pc = 0x1DA204u;
            // 0x1da204: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1DA208u;
        goto label_1da208;
    }
    ctx->pc = 0x1DA200u;
    SET_GPR_U32(ctx, 31, 0x1DA208u);
    ctx->pc = 0x1DA204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA200u;
            // 0x1da204: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA208u; }
        if (ctx->pc != 0x1DA208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA208u; }
        if (ctx->pc != 0x1DA208u) { return; }
    }
    ctx->pc = 0x1DA208u;
label_1da208:
    // 0x1da208: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x1da208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_1da20c:
    // 0x1da20c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1da20cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1da210:
    // 0x1da210: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x1da210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_1da214:
    // 0x1da214: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1da214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1da218:
    // 0x1da218: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1da218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1da21c:
    // 0x1da21c: 0x2931821  addu        $v1, $s4, $s3
    ctx->pc = 0x1da21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_1da220:
    // 0x1da220: 0xac641160  sw          $a0, 0x1160($v1)
    ctx->pc = 0x1da220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4448), GPR_U32(ctx, 4));
label_1da224:
    // 0x1da224: 0xc7a1015c  lwc1        $f1, 0x15C($sp)
    ctx->pc = 0x1da224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1da228:
    // 0x1da228: 0xc6601178  lwc1        $f0, 0x1178($s3)
    ctx->pc = 0x1da228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1da22c:
    // 0x1da22c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1da22cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1da230:
    // 0x1da230: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_1da234:
    if (ctx->pc == 0x1DA234u) {
        ctx->pc = 0x1DA234u;
            // 0x1da234: 0x2931821  addu        $v1, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->pc = 0x1DA238u;
        goto label_1da238;
    }
    ctx->pc = 0x1DA230u;
    {
        const bool branch_taken_0x1da230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da230) {
            ctx->pc = 0x1DA234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA230u;
            // 0x1da234: 0x2931821  addu        $v1, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA240u;
            goto label_1da240;
        }
    }
    ctx->pc = 0x1DA238u;
label_1da238:
    // 0x1da238: 0xe6611178  swc1        $f1, 0x1178($s3)
    ctx->pc = 0x1da238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4472), bits); }
label_1da23c:
    // 0x1da23c: 0x2931821  addu        $v1, $s4, $s3
    ctx->pc = 0x1da23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_1da240:
    // 0x1da240: 0x24711160  addiu       $s1, $v1, 0x1160
    ctx->pc = 0x1da240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4448));
label_1da244:
    // 0x1da244: 0x8c631160  lw          $v1, 0x1160($v1)
    ctx->pc = 0x1da244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4448)));
label_1da248:
    // 0x1da248: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1da248u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1da24c:
    // 0x1da24c: 0x54200040  bnel        $at, $zero, . + 4 + (0x40 << 2)
label_1da250:
    if (ctx->pc == 0x1DA250u) {
        ctx->pc = 0x1DA250u;
            // 0x1da250: 0x8e630da0  lw          $v1, 0xDA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3488)));
        ctx->pc = 0x1DA254u;
        goto label_1da254;
    }
    ctx->pc = 0x1DA24Cu;
    {
        const bool branch_taken_0x1da24c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da24c) {
            ctx->pc = 0x1DA250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA24Cu;
            // 0x1da250: 0x8e630da0  lw          $v1, 0xDA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA350u;
            goto label_1da350;
        }
    }
    ctx->pc = 0x1DA254u;
label_1da254:
    // 0x1da254: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x1da254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_1da258:
    // 0x1da258: 0x8e640e34  lw          $a0, 0xE34($s3)
    ctx->pc = 0x1da258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_1da25c:
    // 0x1da25c: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x1da25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_1da260:
    // 0x1da260: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1da260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1da264:
    // 0x1da264: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_1da268:
    if (ctx->pc == 0x1DA268u) {
        ctx->pc = 0x1DA268u;
            // 0x1da268: 0x8e630d98  lw          $v1, 0xD98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
        ctx->pc = 0x1DA26Cu;
        goto label_1da26c;
    }
    ctx->pc = 0x1DA264u;
    {
        const bool branch_taken_0x1da264 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1da264) {
            ctx->pc = 0x1DA268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA264u;
            // 0x1da268: 0x8e630d98  lw          $v1, 0xD98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA274u;
            goto label_1da274;
        }
    }
    ctx->pc = 0x1DA26Cu;
label_1da26c:
    // 0x1da26c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1da270:
    if (ctx->pc == 0x1DA270u) {
        ctx->pc = 0x1DA270u;
            // 0x1da270: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA274u;
        goto label_1da274;
    }
    ctx->pc = 0x1DA26Cu;
    {
        const bool branch_taken_0x1da26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA26Cu;
            // 0x1da270: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da26c) {
            ctx->pc = 0x1DA31Cu;
            goto label_1da31c;
        }
    }
    ctx->pc = 0x1DA274u;
label_1da274:
    // 0x1da274: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1da274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1da278:
    // 0x1da278: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1da278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1da27c:
    // 0x1da27c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1da280:
    // 0x1da280: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1da280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1da284:
    // 0x1da284: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1da284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1da288:
    // 0x1da288: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1da288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1da28c:
    // 0x1da28c: 0x320f809  jalr        $t9
label_1da290:
    if (ctx->pc == 0x1DA290u) {
        ctx->pc = 0x1DA294u;
        goto label_1da294;
    }
    ctx->pc = 0x1DA28Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DA294u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA294u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA294u; }
            if (ctx->pc != 0x1DA294u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA294u;
label_1da294:
    // 0x1da294: 0x8c540014  lw          $s4, 0x14($v0)
    ctx->pc = 0x1da294u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1da298:
    // 0x1da298: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
label_1da29c:
    if (ctx->pc == 0x1DA29Cu) {
        ctx->pc = 0x1DA29Cu;
            // 0x1da29c: 0x8c520018  lw          $s2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x1DA2A0u;
        goto label_1da2a0;
    }
    ctx->pc = 0x1DA298u;
    {
        const bool branch_taken_0x1da298 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA298u;
            // 0x1da29c: 0x8c520018  lw          $s2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da298) {
            ctx->pc = 0x1DA2D8u;
            goto label_1da2d8;
        }
    }
    ctx->pc = 0x1DA2A0u;
label_1da2a0:
    // 0x1da2a0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x1da2a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1da2a4:
    // 0x1da2a4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1da2a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1da2a8:
    // 0x1da2a8: 0x320f809  jalr        $t9
label_1da2ac:
    if (ctx->pc == 0x1DA2ACu) {
        ctx->pc = 0x1DA2ACu;
            // 0x1da2ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA2B0u;
        goto label_1da2b0;
    }
    ctx->pc = 0x1DA2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DA2B0u);
        ctx->pc = 0x1DA2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2A8u;
            // 0x1da2ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA2B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2B0u; }
            if (ctx->pc != 0x1DA2B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA2B0u;
label_1da2b0:
    // 0x1da2b0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1da2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1da2b4:
    // 0x1da2b4: 0x50430019  beql        $v0, $v1, . + 4 + (0x19 << 2)
label_1da2b8:
    if (ctx->pc == 0x1DA2B8u) {
        ctx->pc = 0x1DA2B8u;
            // 0x1da2b8: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x1DA2BCu;
        goto label_1da2bc;
    }
    ctx->pc = 0x1DA2B4u;
    {
        const bool branch_taken_0x1da2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1da2b4) {
            ctx->pc = 0x1DA2B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2B4u;
            // 0x1da2b8: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA31Cu;
            goto label_1da31c;
        }
    }
    ctx->pc = 0x1DA2BCu;
label_1da2bc:
    // 0x1da2bc: 0x96840004  lhu         $a0, 0x4($s4)
    ctx->pc = 0x1da2bcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_1da2c0:
    // 0x1da2c0: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1da2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1da2c4:
    // 0x1da2c4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_1da2c8:
    if (ctx->pc == 0x1DA2C8u) {
        ctx->pc = 0x1DA2CCu;
        goto label_1da2cc;
    }
    ctx->pc = 0x1DA2C4u;
    {
        const bool branch_taken_0x1da2c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1da2c4) {
            ctx->pc = 0x1DA2D8u;
            goto label_1da2d8;
        }
    }
    ctx->pc = 0x1DA2CCu;
label_1da2cc:
    // 0x1da2cc: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x1da2ccu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1da2d0:
    // 0x1da2d0: 0x10000012  b           . + 4 + (0x12 << 2)
label_1da2d4:
    if (ctx->pc == 0x1DA2D4u) {
        ctx->pc = 0x1DA2D8u;
        goto label_1da2d8;
    }
    ctx->pc = 0x1DA2D0u;
    {
        const bool branch_taken_0x1da2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da2d0) {
            ctx->pc = 0x1DA31Cu;
            goto label_1da31c;
        }
    }
    ctx->pc = 0x1DA2D8u;
label_1da2d8:
    // 0x1da2d8: 0x52400010  beql        $s2, $zero, . + 4 + (0x10 << 2)
label_1da2dc:
    if (ctx->pc == 0x1DA2DCu) {
        ctx->pc = 0x1DA2DCu;
            // 0x1da2dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA2E0u;
        goto label_1da2e0;
    }
    ctx->pc = 0x1DA2D8u;
    {
        const bool branch_taken_0x1da2d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da2d8) {
            ctx->pc = 0x1DA2DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2D8u;
            // 0x1da2dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA31Cu;
            goto label_1da31c;
        }
    }
    ctx->pc = 0x1DA2E0u;
label_1da2e0:
    // 0x1da2e0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1da2e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1da2e4:
    // 0x1da2e4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1da2e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1da2e8:
    // 0x1da2e8: 0x320f809  jalr        $t9
label_1da2ec:
    if (ctx->pc == 0x1DA2ECu) {
        ctx->pc = 0x1DA2ECu;
            // 0x1da2ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA2F0u;
        goto label_1da2f0;
    }
    ctx->pc = 0x1DA2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DA2F0u);
        ctx->pc = 0x1DA2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2E8u;
            // 0x1da2ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA2F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2F0u; }
            if (ctx->pc != 0x1DA2F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA2F0u;
label_1da2f0:
    // 0x1da2f0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1da2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1da2f4:
    // 0x1da2f4: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
label_1da2f8:
    if (ctx->pc == 0x1DA2F8u) {
        ctx->pc = 0x1DA2F8u;
            // 0x1da2f8: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x1DA2FCu;
        goto label_1da2fc;
    }
    ctx->pc = 0x1DA2F4u;
    {
        const bool branch_taken_0x1da2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1da2f4) {
            ctx->pc = 0x1DA2F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2F4u;
            // 0x1da2f8: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA31Cu;
            goto label_1da31c;
        }
    }
    ctx->pc = 0x1DA2FCu;
label_1da2fc:
    // 0x1da2fc: 0x96440004  lhu         $a0, 0x4($s2)
    ctx->pc = 0x1da2fcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_1da300:
    // 0x1da300: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1da300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1da304:
    // 0x1da304: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_1da308:
    if (ctx->pc == 0x1DA308u) {
        ctx->pc = 0x1DA30Cu;
        goto label_1da30c;
    }
    ctx->pc = 0x1DA304u;
    {
        const bool branch_taken_0x1da304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1da304) {
            ctx->pc = 0x1DA318u;
            goto label_1da318;
        }
    }
    ctx->pc = 0x1DA30Cu;
label_1da30c:
    // 0x1da30c: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x1da30cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1da310:
    // 0x1da310: 0x10000002  b           . + 4 + (0x2 << 2)
label_1da314:
    if (ctx->pc == 0x1DA314u) {
        ctx->pc = 0x1DA318u;
        goto label_1da318;
    }
    ctx->pc = 0x1DA310u;
    {
        const bool branch_taken_0x1da310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da310) {
            ctx->pc = 0x1DA31Cu;
            goto label_1da31c;
        }
    }
    ctx->pc = 0x1DA318u;
label_1da318:
    // 0x1da318: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1da318u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da31c:
    // 0x1da31c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_1da320:
    if (ctx->pc == 0x1DA320u) {
        ctx->pc = 0x1DA324u;
        goto label_1da324;
    }
    ctx->pc = 0x1DA31Cu;
    {
        const bool branch_taken_0x1da31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da31c) {
            ctx->pc = 0x1DA34Cu;
            goto label_1da34c;
        }
    }
    ctx->pc = 0x1DA324u;
label_1da324:
    // 0x1da324: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x1da324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_1da328:
    // 0x1da328: 0x8e640d98  lw          $a0, 0xD98($s3)
    ctx->pc = 0x1da328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_1da32c:
    // 0x1da32c: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x1da32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_1da330:
    // 0x1da330: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1da330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_1da334:
    // 0x1da334: 0x146400a0  bne         $v1, $a0, . + 4 + (0xA0 << 2)
label_1da338:
    if (ctx->pc == 0x1DA338u) {
        ctx->pc = 0x1DA33Cu;
        goto label_1da33c;
    }
    ctx->pc = 0x1DA334u;
    {
        const bool branch_taken_0x1da334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1da334) {
            ctx->pc = 0x1DA5B8u;
            goto label_1da5b8;
        }
    }
    ctx->pc = 0x1DA33Cu;
label_1da33c:
    // 0x1da33c: 0x8e640e34  lw          $a0, 0xE34($s3)
    ctx->pc = 0x1da33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_1da340:
    // 0x1da340: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1da340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1da344:
    // 0x1da344: 0x1483009c  bne         $a0, $v1, . + 4 + (0x9C << 2)
label_1da348:
    if (ctx->pc == 0x1DA348u) {
        ctx->pc = 0x1DA34Cu;
        goto label_1da34c;
    }
    ctx->pc = 0x1DA344u;
    {
        const bool branch_taken_0x1da344 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1da344) {
            ctx->pc = 0x1DA5B8u;
            goto label_1da5b8;
        }
    }
    ctx->pc = 0x1DA34Cu;
label_1da34c:
    // 0x1da34c: 0x8e630da0  lw          $v1, 0xDA0($s3)
    ctx->pc = 0x1da34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3488)));
label_1da350:
    // 0x1da350: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1da350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1da354:
    // 0x1da354: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
label_1da358:
    if (ctx->pc == 0x1DA358u) {
        ctx->pc = 0x1DA358u;
            // 0x1da358: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1DA35Cu;
        goto label_1da35c;
    }
    ctx->pc = 0x1DA354u;
    {
        const bool branch_taken_0x1da354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da354) {
            ctx->pc = 0x1DA358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA354u;
            // 0x1da358: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA3ACu;
            goto label_1da3ac;
        }
    }
    ctx->pc = 0x1DA35Cu;
label_1da35c:
    // 0x1da35c: 0xc6610e48  lwc1        $f1, 0xE48($s3)
    ctx->pc = 0x1da35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1da360:
    // 0x1da360: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1da360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1da364:
    // 0x1da364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1da364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1da368:
    // 0x1da368: 0x0  nop
    ctx->pc = 0x1da368u;
    // NOP
label_1da36c:
    // 0x1da36c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1da36cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1da370:
    // 0x1da370: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_1da374:
    if (ctx->pc == 0x1DA374u) {
        ctx->pc = 0x1DA374u;
            // 0x1da374: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1DA378u;
        goto label_1da378;
    }
    ctx->pc = 0x1DA370u;
    {
        const bool branch_taken_0x1da370 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da370) {
            ctx->pc = 0x1DA374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA370u;
            // 0x1da374: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA388u;
            goto label_1da388;
        }
    }
    ctx->pc = 0x1DA378u;
label_1da378:
    // 0x1da378: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1da378u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1da37c:
    // 0x1da37c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1da37cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1da380:
    // 0x1da380: 0x10000007  b           . + 4 + (0x7 << 2)
label_1da384:
    if (ctx->pc == 0x1DA384u) {
        ctx->pc = 0x1DA384u;
            // 0x1da384: 0x30830008  andi        $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x1DA388u;
        goto label_1da388;
    }
    ctx->pc = 0x1DA380u;
    {
        const bool branch_taken_0x1da380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA380u;
            // 0x1da384: 0x30830008  andi        $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da380) {
            ctx->pc = 0x1DA3A0u;
            goto label_1da3a0;
        }
    }
    ctx->pc = 0x1DA388u;
label_1da388:
    // 0x1da388: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1da388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1da38c:
    // 0x1da38c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1da38cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1da390:
    // 0x1da390: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1da390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1da394:
    // 0x1da394: 0x0  nop
    ctx->pc = 0x1da394u;
    // NOP
label_1da398:
    // 0x1da398: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1da398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1da39c:
    // 0x1da39c: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x1da39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_1da3a0:
    // 0x1da3a0: 0x14600085  bnez        $v1, . + 4 + (0x85 << 2)
label_1da3a4:
    if (ctx->pc == 0x1DA3A4u) {
        ctx->pc = 0x1DA3A8u;
        goto label_1da3a8;
    }
    ctx->pc = 0x1DA3A0u;
    {
        const bool branch_taken_0x1da3a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da3a0) {
            ctx->pc = 0x1DA5B8u;
            goto label_1da5b8;
        }
    }
    ctx->pc = 0x1DA3A8u;
label_1da3a8:
    // 0x1da3a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1da3a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1da3ac:
    // 0x1da3ac: 0x926511a5  lbu         $a1, 0x11A5($s3)
    ctx->pc = 0x1da3acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4517)));
label_1da3b0:
    // 0x1da3b0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1da3b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1da3b4:
    // 0x1da3b4: 0x320f809  jalr        $t9
label_1da3b8:
    if (ctx->pc == 0x1DA3B8u) {
        ctx->pc = 0x1DA3B8u;
            // 0x1da3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3BCu;
        goto label_1da3bc;
    }
    ctx->pc = 0x1DA3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DA3BCu);
        ctx->pc = 0x1DA3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA3B4u;
            // 0x1da3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA3BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA3BCu; }
            if (ctx->pc != 0x1DA3BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1DA3BCu;
label_1da3bc:
    // 0x1da3bc: 0x926211a9  lbu         $v0, 0x11A9($s3)
    ctx->pc = 0x1da3bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4521)));
label_1da3c0:
    // 0x1da3c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1da3c4:
    if (ctx->pc == 0x1DA3C4u) {
        ctx->pc = 0x1DA3C8u;
        goto label_1da3c8;
    }
    ctx->pc = 0x1DA3C0u;
    {
        const bool branch_taken_0x1da3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da3c0) {
            ctx->pc = 0x1DA3E0u;
            goto label_1da3e0;
        }
    }
    ctx->pc = 0x1DA3C8u;
label_1da3c8:
    // 0x1da3c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1da3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1da3cc:
    // 0x1da3cc: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x1da3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_1da3d0:
    // 0x1da3d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1da3d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1da3d4:
    // 0x1da3d4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x1da3d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_1da3d8:
    // 0x1da3d8: 0x320f809  jalr        $t9
label_1da3dc:
    if (ctx->pc == 0x1DA3DCu) {
        ctx->pc = 0x1DA3E0u;
        goto label_1da3e0;
    }
    ctx->pc = 0x1DA3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DA3E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA3E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA3E0u; }
            if (ctx->pc != 0x1DA3E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA3E0u;
label_1da3e0:
    // 0x1da3e0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x1da3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_1da3e4:
    // 0x1da3e4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1da3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1da3e8:
    // 0x1da3e8: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x1da3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_1da3ec:
    // 0x1da3ec: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1da3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1da3f0:
    // 0x1da3f0: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x1da3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_1da3f4:
    // 0x1da3f4: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x1da3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_1da3f8:
    // 0x1da3f8: 0x92620e3d  lbu         $v0, 0xE3D($s3)
    ctx->pc = 0x1da3f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3645)));
label_1da3fc:
    // 0x1da3fc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1da3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1da400:
    // 0x1da400: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1da400u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1da404:
    // 0x1da404: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1da404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1da408:
    // 0x1da408: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1da408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1da40c:
    // 0x1da40c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1da40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1da410:
    // 0x1da410: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x1da410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1da414:
    // 0x1da414: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1da414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1da418:
    // 0x1da418: 0xc04cd60  jal         func_133580
label_1da41c:
    if (ctx->pc == 0x1DA41Cu) {
        ctx->pc = 0x1DA41Cu;
            // 0x1da41c: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x1DA420u;
        goto label_1da420;
    }
    ctx->pc = 0x1DA418u;
    SET_GPR_U32(ctx, 31, 0x1DA420u);
    ctx->pc = 0x1DA41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA418u;
            // 0x1da41c: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA420u; }
        if (ctx->pc != 0x1DA420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA420u; }
        if (ctx->pc != 0x1DA420u) { return; }
    }
    ctx->pc = 0x1DA420u;
label_1da420:
    // 0x1da420: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1da420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1da424:
    // 0x1da424: 0x8e630550  lw          $v1, 0x550($s3)
    ctx->pc = 0x1da424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1360)));
label_1da428:
    // 0x1da428: 0x8c44e370  lw          $a0, -0x1C90($v0)
    ctx->pc = 0x1da428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_1da42c:
    // 0x1da42c: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1da42cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1da430:
    // 0x1da430: 0x8e620d6c  lw          $v0, 0xD6C($s3)
    ctx->pc = 0x1da430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3436)));
label_1da434:
    // 0x1da434: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1da434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1da438:
    // 0x1da438: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1da438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1da43c:
    // 0x1da43c: 0x8c470034  lw          $a3, 0x34($v0)
    ctx->pc = 0x1da43cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1da440:
    // 0x1da440: 0xc04e4cc  jal         func_139330
label_1da444:
    if (ctx->pc == 0x1DA444u) {
        ctx->pc = 0x1DA444u;
            // 0x1da444: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1DA448u;
        goto label_1da448;
    }
    ctx->pc = 0x1DA440u;
    SET_GPR_U32(ctx, 31, 0x1DA448u);
    ctx->pc = 0x1DA444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA440u;
            // 0x1da444: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139330u;
    if (runtime->hasFunction(0x139330u)) {
        auto targetFn = runtime->lookupFunction(0x139330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA448u; }
        if (ctx->pc != 0x1DA448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139330_0x139330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA448u; }
        if (ctx->pc != 0x1DA448u) { return; }
    }
    ctx->pc = 0x1DA448u;
label_1da448:
    // 0x1da448: 0x8e640d6c  lw          $a0, 0xD6C($s3)
    ctx->pc = 0x1da448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3436)));
label_1da44c:
    // 0x1da44c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1da44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1da450:
    // 0x1da450: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x1da450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_1da454:
    // 0x1da454: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1da454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1da458:
    // 0x1da458: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1da458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1da45c:
    // 0x1da45c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1da45cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1da460:
    // 0x1da460: 0x2a040  sll         $s4, $v0, 1
    ctx->pc = 0x1da460u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1da464:
    // 0x1da464: 0x320f809  jalr        $t9
label_1da468:
    if (ctx->pc == 0x1DA468u) {
        ctx->pc = 0x1DA468u;
            // 0x1da468: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA46Cu;
        goto label_1da46c;
    }
    ctx->pc = 0x1DA464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DA46Cu);
        ctx->pc = 0x1DA468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA464u;
            // 0x1da468: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA46Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA46Cu; }
            if (ctx->pc != 0x1DA46Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DA46Cu;
label_1da46c:
    // 0x1da46c: 0x8e710d6c  lw          $s1, 0xD6C($s3)
    ctx->pc = 0x1da46cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3436)));
label_1da470:
    // 0x1da470: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x1da470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_1da474:
    // 0x1da474: 0x8e390054  lw          $t9, 0x54($s1)
    ctx->pc = 0x1da474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_1da478:
    // 0x1da478: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1da478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1da47c:
    // 0x1da47c: 0x320f809  jalr        $t9
label_1da480:
    if (ctx->pc == 0x1DA480u) {
        ctx->pc = 0x1DA480u;
            // 0x1da480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA484u;
        goto label_1da484;
    }
    ctx->pc = 0x1DA47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DA484u);
        ctx->pc = 0x1DA480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA47Cu;
            // 0x1da480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA484u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA484u; }
            if (ctx->pc != 0x1DA484u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA484u;
label_1da484:
    // 0x1da484: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1da484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1da488:
    // 0x1da488: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x1da488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_1da48c:
    // 0x1da48c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1da48cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_1da490:
    // 0x1da490: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1da490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1da494:
    // 0x1da494: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1da494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1da498:
    // 0x1da498: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1da498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1da49c:
    // 0x1da49c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1da49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1da4a0:
    // 0x1da4a0: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1da4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1da4a4:
    // 0x1da4a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1da4a8:
    // 0x1da4a8: 0x84520004  lh          $s2, 0x4($v0)
    ctx->pc = 0x1da4a8u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_1da4ac:
    // 0x1da4ac: 0x6430011  bgezl       $s2, . + 4 + (0x11 << 2)
label_1da4b0:
    if (ctx->pc == 0x1DA4B0u) {
        ctx->pc = 0x1DA4B0u;
            // 0x1da4b0: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1DA4B4u;
        goto label_1da4b4;
    }
    ctx->pc = 0x1DA4ACu;
    {
        const bool branch_taken_0x1da4ac = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1da4ac) {
            ctx->pc = 0x1DA4B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA4ACu;
            // 0x1da4b0: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA4F4u;
            goto label_1da4f4;
        }
    }
    ctx->pc = 0x1DA4B4u;
label_1da4b4:
    // 0x1da4b4: 0x8e390054  lw          $t9, 0x54($s1)
    ctx->pc = 0x1da4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_1da4b8:
    // 0x1da4b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1da4bc:
    // 0x1da4bc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1da4bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1da4c0:
    // 0x1da4c0: 0x320f809  jalr        $t9
label_1da4c4:
    if (ctx->pc == 0x1DA4C4u) {
        ctx->pc = 0x1DA4C4u;
            // 0x1da4c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1DA4C8u;
        goto label_1da4c8;
    }
    ctx->pc = 0x1DA4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DA4C8u);
        ctx->pc = 0x1DA4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA4C0u;
            // 0x1da4c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA4C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4C8u; }
            if (ctx->pc != 0x1DA4C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA4C8u;
label_1da4c8:
    // 0x1da4c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1da4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1da4cc:
    // 0x1da4cc: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x1da4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_1da4d0:
    // 0x1da4d0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1da4d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_1da4d4:
    // 0x1da4d4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1da4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1da4d8:
    // 0x1da4d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1da4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1da4dc:
    // 0x1da4dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1da4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1da4e0:
    // 0x1da4e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1da4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1da4e4:
    // 0x1da4e4: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1da4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1da4e8:
    // 0x1da4e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1da4ec:
    // 0x1da4ec: 0x84520004  lh          $s2, 0x4($v0)
    ctx->pc = 0x1da4ecu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_1da4f0:
    // 0x1da4f0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1da4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1da4f4:
    // 0x1da4f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da4f8:
    // 0x1da4f8: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x1da4f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_1da4fc:
    // 0x1da4fc: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_1da500:
    if (ctx->pc == 0x1DA500u) {
        ctx->pc = 0x1DA504u;
        goto label_1da504;
    }
    ctx->pc = 0x1DA4FCu;
    {
        const bool branch_taken_0x1da4fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da4fc) {
            ctx->pc = 0x1DA558u;
            goto label_1da558;
        }
    }
    ctx->pc = 0x1DA504u;
label_1da504:
    // 0x1da504: 0xc0bd780  jal         func_2F5E00
label_1da508:
    if (ctx->pc == 0x1DA508u) {
        ctx->pc = 0x1DA508u;
            // 0x1da508: 0x8e640d70  lw          $a0, 0xD70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3440)));
        ctx->pc = 0x1DA50Cu;
        goto label_1da50c;
    }
    ctx->pc = 0x1DA504u;
    SET_GPR_U32(ctx, 31, 0x1DA50Cu);
    ctx->pc = 0x1DA508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA504u;
            // 0x1da508: 0x8e640d70  lw          $a0, 0xD70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA50Cu; }
        if (ctx->pc != 0x1DA50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA50Cu; }
        if (ctx->pc != 0x1DA50Cu) { return; }
    }
    ctx->pc = 0x1DA50Cu;
label_1da50c:
    // 0x1da50c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1da50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1da510:
    // 0x1da510: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
label_1da514:
    if (ctx->pc == 0x1DA514u) {
        ctx->pc = 0x1DA518u;
        goto label_1da518;
    }
    ctx->pc = 0x1DA510u;
    {
        const bool branch_taken_0x1da510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1da510) {
            ctx->pc = 0x1DA558u;
            goto label_1da558;
        }
    }
    ctx->pc = 0x1DA518u;
label_1da518:
    // 0x1da518: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1da518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1da51c:
    // 0x1da51c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1da51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_1da520:
    // 0x1da520: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1da520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1da524:
    // 0x1da524: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1da524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1da528:
    // 0x1da528: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1da528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1da52c:
    // 0x1da52c: 0xc04f3f4  jal         func_13CFD0
label_1da530:
    if (ctx->pc == 0x1DA530u) {
        ctx->pc = 0x1DA530u;
            // 0x1da530: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1DA534u;
        goto label_1da534;
    }
    ctx->pc = 0x1DA52Cu;
    SET_GPR_U32(ctx, 31, 0x1DA534u);
    ctx->pc = 0x1DA530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA52Cu;
            // 0x1da530: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFD0u;
    if (runtime->hasFunction(0x13CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA534u; }
        if (ctx->pc != 0x1DA534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFD0_0x13cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA534u; }
        if (ctx->pc != 0x1DA534u) { return; }
    }
    ctx->pc = 0x1DA534u;
label_1da534:
    // 0x1da534: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1da534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1da538:
    // 0x1da538: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x1da538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_1da53c:
    // 0x1da53c: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x1da53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_1da540:
    // 0x1da540: 0x26640280  addiu       $a0, $s3, 0x280
    ctx->pc = 0x1da540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
label_1da544:
    // 0x1da544: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1da544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1da548:
    // 0x1da548: 0xc04cd60  jal         func_133580
label_1da54c:
    if (ctx->pc == 0x1DA54Cu) {
        ctx->pc = 0x1DA54Cu;
            // 0x1da54c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1DA550u;
        goto label_1da550;
    }
    ctx->pc = 0x1DA548u;
    SET_GPR_U32(ctx, 31, 0x1DA550u);
    ctx->pc = 0x1DA54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA548u;
            // 0x1da54c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA550u; }
        if (ctx->pc != 0x1DA550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA550u; }
        if (ctx->pc != 0x1DA550u) { return; }
    }
    ctx->pc = 0x1DA550u;
label_1da550:
    // 0x1da550: 0x10000008  b           . + 4 + (0x8 << 2)
label_1da554:
    if (ctx->pc == 0x1DA554u) {
        ctx->pc = 0x1DA554u;
            // 0x1da554: 0x8e640d70  lw          $a0, 0xD70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3440)));
        ctx->pc = 0x1DA558u;
        goto label_1da558;
    }
    ctx->pc = 0x1DA550u;
    {
        const bool branch_taken_0x1da550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA550u;
            // 0x1da554: 0x8e640d70  lw          $a0, 0xD70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da550) {
            ctx->pc = 0x1DA574u;
            goto label_1da574;
        }
    }
    ctx->pc = 0x1DA558u;
label_1da558:
    // 0x1da558: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1da558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1da55c:
    // 0x1da55c: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x1da55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_1da560:
    // 0x1da560: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x1da560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_1da564:
    // 0x1da564: 0x26640280  addiu       $a0, $s3, 0x280
    ctx->pc = 0x1da564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
label_1da568:
    // 0x1da568: 0xc04cce8  jal         func_1333A0
label_1da56c:
    if (ctx->pc == 0x1DA56Cu) {
        ctx->pc = 0x1DA56Cu;
            // 0x1da56c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1DA570u;
        goto label_1da570;
    }
    ctx->pc = 0x1DA568u;
    SET_GPR_U32(ctx, 31, 0x1DA570u);
    ctx->pc = 0x1DA56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA568u;
            // 0x1da56c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA570u; }
        if (ctx->pc != 0x1DA570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA570u; }
        if (ctx->pc != 0x1DA570u) { return; }
    }
    ctx->pc = 0x1DA570u;
label_1da570:
    // 0x1da570: 0x8e640d70  lw          $a0, 0xD70($s3)
    ctx->pc = 0x1da570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3440)));
label_1da574:
    // 0x1da574: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1da574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1da578:
    // 0x1da578: 0xc0bdba8  jal         func_2F6EA0
label_1da57c:
    if (ctx->pc == 0x1DA57Cu) {
        ctx->pc = 0x1DA57Cu;
            // 0x1da57c: 0x26650280  addiu       $a1, $s3, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
        ctx->pc = 0x1DA580u;
        goto label_1da580;
    }
    ctx->pc = 0x1DA578u;
    SET_GPR_U32(ctx, 31, 0x1DA580u);
    ctx->pc = 0x1DA57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA578u;
            // 0x1da57c: 0x26650280  addiu       $a1, $s3, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6EA0u;
    if (runtime->hasFunction(0x2F6EA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA580u; }
        if (ctx->pc != 0x1DA580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6EA0_0x2f6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA580u; }
        if (ctx->pc != 0x1DA580u) { return; }
    }
    ctx->pc = 0x1DA580u;
label_1da580:
    // 0x1da580: 0x926211a9  lbu         $v0, 0x11A9($s3)
    ctx->pc = 0x1da580u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4521)));
label_1da584:
    // 0x1da584: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1da588:
    if (ctx->pc == 0x1DA588u) {
        ctx->pc = 0x1DA588u;
            // 0x1da588: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1DA58Cu;
        goto label_1da58c;
    }
    ctx->pc = 0x1DA584u;
    {
        const bool branch_taken_0x1da584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da584) {
            ctx->pc = 0x1DA588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA584u;
            // 0x1da588: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA5A8u;
            goto label_1da5a8;
        }
    }
    ctx->pc = 0x1DA58Cu;
label_1da58c:
    // 0x1da58c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1da58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1da590:
    // 0x1da590: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x1da590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_1da594:
    // 0x1da594: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1da594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1da598:
    // 0x1da598: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1da598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1da59c:
    // 0x1da59c: 0x320f809  jalr        $t9
label_1da5a0:
    if (ctx->pc == 0x1DA5A0u) {
        ctx->pc = 0x1DA5A4u;
        goto label_1da5a4;
    }
    ctx->pc = 0x1DA59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DA5A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA5A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA5A4u; }
            if (ctx->pc != 0x1DA5A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA5A4u;
label_1da5a4:
    // 0x1da5a4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1da5a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1da5a8:
    // 0x1da5a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da5ac:
    // 0x1da5ac: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1da5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1da5b0:
    // 0x1da5b0: 0x320f809  jalr        $t9
label_1da5b4:
    if (ctx->pc == 0x1DA5B4u) {
        ctx->pc = 0x1DA5B4u;
            // 0x1da5b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA5B8u;
        goto label_1da5b8;
    }
    ctx->pc = 0x1DA5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DA5B8u);
        ctx->pc = 0x1DA5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA5B0u;
            // 0x1da5b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA5B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA5B8u; }
            if (ctx->pc != 0x1DA5B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA5B8u;
label_1da5b8:
    // 0x1da5b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1da5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1da5bc:
    // 0x1da5bc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1da5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1da5c0:
    // 0x1da5c0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1da5c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1da5c4:
    // 0x1da5c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1da5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1da5c8:
    // 0x1da5c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1da5c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1da5cc:
    // 0x1da5cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1da5ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1da5d0:
    // 0x1da5d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1da5d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1da5d4:
    // 0x1da5d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1da5d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1da5d8:
    // 0x1da5d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1da5d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1da5dc:
    // 0x1da5dc: 0x3e00008  jr          $ra
label_1da5e0:
    if (ctx->pc == 0x1DA5E0u) {
        ctx->pc = 0x1DA5E0u;
            // 0x1da5e0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x1DA5E4u;
        goto label_1da5e4;
    }
    ctx->pc = 0x1DA5DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA5DCu;
            // 0x1da5e0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DA5E4u;
label_1da5e4:
    // 0x1da5e4: 0x0  nop
    ctx->pc = 0x1da5e4u;
    // NOP
label_1da5e8:
    // 0x1da5e8: 0x0  nop
    ctx->pc = 0x1da5e8u;
    // NOP
label_1da5ec:
    // 0x1da5ec: 0x0  nop
    ctx->pc = 0x1da5ecu;
    // NOP
}
