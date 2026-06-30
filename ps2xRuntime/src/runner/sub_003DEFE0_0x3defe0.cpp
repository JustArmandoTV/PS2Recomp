#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DEFE0
// Address: 0x3defe0 - 0x3dfd20
void sub_003DEFE0_0x3defe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DEFE0_0x3defe0");
#endif

    switch (ctx->pc) {
        case 0x3defe0u: goto label_3defe0;
        case 0x3defe4u: goto label_3defe4;
        case 0x3defe8u: goto label_3defe8;
        case 0x3defecu: goto label_3defec;
        case 0x3deff0u: goto label_3deff0;
        case 0x3deff4u: goto label_3deff4;
        case 0x3deff8u: goto label_3deff8;
        case 0x3deffcu: goto label_3deffc;
        case 0x3df000u: goto label_3df000;
        case 0x3df004u: goto label_3df004;
        case 0x3df008u: goto label_3df008;
        case 0x3df00cu: goto label_3df00c;
        case 0x3df010u: goto label_3df010;
        case 0x3df014u: goto label_3df014;
        case 0x3df018u: goto label_3df018;
        case 0x3df01cu: goto label_3df01c;
        case 0x3df020u: goto label_3df020;
        case 0x3df024u: goto label_3df024;
        case 0x3df028u: goto label_3df028;
        case 0x3df02cu: goto label_3df02c;
        case 0x3df030u: goto label_3df030;
        case 0x3df034u: goto label_3df034;
        case 0x3df038u: goto label_3df038;
        case 0x3df03cu: goto label_3df03c;
        case 0x3df040u: goto label_3df040;
        case 0x3df044u: goto label_3df044;
        case 0x3df048u: goto label_3df048;
        case 0x3df04cu: goto label_3df04c;
        case 0x3df050u: goto label_3df050;
        case 0x3df054u: goto label_3df054;
        case 0x3df058u: goto label_3df058;
        case 0x3df05cu: goto label_3df05c;
        case 0x3df060u: goto label_3df060;
        case 0x3df064u: goto label_3df064;
        case 0x3df068u: goto label_3df068;
        case 0x3df06cu: goto label_3df06c;
        case 0x3df070u: goto label_3df070;
        case 0x3df074u: goto label_3df074;
        case 0x3df078u: goto label_3df078;
        case 0x3df07cu: goto label_3df07c;
        case 0x3df080u: goto label_3df080;
        case 0x3df084u: goto label_3df084;
        case 0x3df088u: goto label_3df088;
        case 0x3df08cu: goto label_3df08c;
        case 0x3df090u: goto label_3df090;
        case 0x3df094u: goto label_3df094;
        case 0x3df098u: goto label_3df098;
        case 0x3df09cu: goto label_3df09c;
        case 0x3df0a0u: goto label_3df0a0;
        case 0x3df0a4u: goto label_3df0a4;
        case 0x3df0a8u: goto label_3df0a8;
        case 0x3df0acu: goto label_3df0ac;
        case 0x3df0b0u: goto label_3df0b0;
        case 0x3df0b4u: goto label_3df0b4;
        case 0x3df0b8u: goto label_3df0b8;
        case 0x3df0bcu: goto label_3df0bc;
        case 0x3df0c0u: goto label_3df0c0;
        case 0x3df0c4u: goto label_3df0c4;
        case 0x3df0c8u: goto label_3df0c8;
        case 0x3df0ccu: goto label_3df0cc;
        case 0x3df0d0u: goto label_3df0d0;
        case 0x3df0d4u: goto label_3df0d4;
        case 0x3df0d8u: goto label_3df0d8;
        case 0x3df0dcu: goto label_3df0dc;
        case 0x3df0e0u: goto label_3df0e0;
        case 0x3df0e4u: goto label_3df0e4;
        case 0x3df0e8u: goto label_3df0e8;
        case 0x3df0ecu: goto label_3df0ec;
        case 0x3df0f0u: goto label_3df0f0;
        case 0x3df0f4u: goto label_3df0f4;
        case 0x3df0f8u: goto label_3df0f8;
        case 0x3df0fcu: goto label_3df0fc;
        case 0x3df100u: goto label_3df100;
        case 0x3df104u: goto label_3df104;
        case 0x3df108u: goto label_3df108;
        case 0x3df10cu: goto label_3df10c;
        case 0x3df110u: goto label_3df110;
        case 0x3df114u: goto label_3df114;
        case 0x3df118u: goto label_3df118;
        case 0x3df11cu: goto label_3df11c;
        case 0x3df120u: goto label_3df120;
        case 0x3df124u: goto label_3df124;
        case 0x3df128u: goto label_3df128;
        case 0x3df12cu: goto label_3df12c;
        case 0x3df130u: goto label_3df130;
        case 0x3df134u: goto label_3df134;
        case 0x3df138u: goto label_3df138;
        case 0x3df13cu: goto label_3df13c;
        case 0x3df140u: goto label_3df140;
        case 0x3df144u: goto label_3df144;
        case 0x3df148u: goto label_3df148;
        case 0x3df14cu: goto label_3df14c;
        case 0x3df150u: goto label_3df150;
        case 0x3df154u: goto label_3df154;
        case 0x3df158u: goto label_3df158;
        case 0x3df15cu: goto label_3df15c;
        case 0x3df160u: goto label_3df160;
        case 0x3df164u: goto label_3df164;
        case 0x3df168u: goto label_3df168;
        case 0x3df16cu: goto label_3df16c;
        case 0x3df170u: goto label_3df170;
        case 0x3df174u: goto label_3df174;
        case 0x3df178u: goto label_3df178;
        case 0x3df17cu: goto label_3df17c;
        case 0x3df180u: goto label_3df180;
        case 0x3df184u: goto label_3df184;
        case 0x3df188u: goto label_3df188;
        case 0x3df18cu: goto label_3df18c;
        case 0x3df190u: goto label_3df190;
        case 0x3df194u: goto label_3df194;
        case 0x3df198u: goto label_3df198;
        case 0x3df19cu: goto label_3df19c;
        case 0x3df1a0u: goto label_3df1a0;
        case 0x3df1a4u: goto label_3df1a4;
        case 0x3df1a8u: goto label_3df1a8;
        case 0x3df1acu: goto label_3df1ac;
        case 0x3df1b0u: goto label_3df1b0;
        case 0x3df1b4u: goto label_3df1b4;
        case 0x3df1b8u: goto label_3df1b8;
        case 0x3df1bcu: goto label_3df1bc;
        case 0x3df1c0u: goto label_3df1c0;
        case 0x3df1c4u: goto label_3df1c4;
        case 0x3df1c8u: goto label_3df1c8;
        case 0x3df1ccu: goto label_3df1cc;
        case 0x3df1d0u: goto label_3df1d0;
        case 0x3df1d4u: goto label_3df1d4;
        case 0x3df1d8u: goto label_3df1d8;
        case 0x3df1dcu: goto label_3df1dc;
        case 0x3df1e0u: goto label_3df1e0;
        case 0x3df1e4u: goto label_3df1e4;
        case 0x3df1e8u: goto label_3df1e8;
        case 0x3df1ecu: goto label_3df1ec;
        case 0x3df1f0u: goto label_3df1f0;
        case 0x3df1f4u: goto label_3df1f4;
        case 0x3df1f8u: goto label_3df1f8;
        case 0x3df1fcu: goto label_3df1fc;
        case 0x3df200u: goto label_3df200;
        case 0x3df204u: goto label_3df204;
        case 0x3df208u: goto label_3df208;
        case 0x3df20cu: goto label_3df20c;
        case 0x3df210u: goto label_3df210;
        case 0x3df214u: goto label_3df214;
        case 0x3df218u: goto label_3df218;
        case 0x3df21cu: goto label_3df21c;
        case 0x3df220u: goto label_3df220;
        case 0x3df224u: goto label_3df224;
        case 0x3df228u: goto label_3df228;
        case 0x3df22cu: goto label_3df22c;
        case 0x3df230u: goto label_3df230;
        case 0x3df234u: goto label_3df234;
        case 0x3df238u: goto label_3df238;
        case 0x3df23cu: goto label_3df23c;
        case 0x3df240u: goto label_3df240;
        case 0x3df244u: goto label_3df244;
        case 0x3df248u: goto label_3df248;
        case 0x3df24cu: goto label_3df24c;
        case 0x3df250u: goto label_3df250;
        case 0x3df254u: goto label_3df254;
        case 0x3df258u: goto label_3df258;
        case 0x3df25cu: goto label_3df25c;
        case 0x3df260u: goto label_3df260;
        case 0x3df264u: goto label_3df264;
        case 0x3df268u: goto label_3df268;
        case 0x3df26cu: goto label_3df26c;
        case 0x3df270u: goto label_3df270;
        case 0x3df274u: goto label_3df274;
        case 0x3df278u: goto label_3df278;
        case 0x3df27cu: goto label_3df27c;
        case 0x3df280u: goto label_3df280;
        case 0x3df284u: goto label_3df284;
        case 0x3df288u: goto label_3df288;
        case 0x3df28cu: goto label_3df28c;
        case 0x3df290u: goto label_3df290;
        case 0x3df294u: goto label_3df294;
        case 0x3df298u: goto label_3df298;
        case 0x3df29cu: goto label_3df29c;
        case 0x3df2a0u: goto label_3df2a0;
        case 0x3df2a4u: goto label_3df2a4;
        case 0x3df2a8u: goto label_3df2a8;
        case 0x3df2acu: goto label_3df2ac;
        case 0x3df2b0u: goto label_3df2b0;
        case 0x3df2b4u: goto label_3df2b4;
        case 0x3df2b8u: goto label_3df2b8;
        case 0x3df2bcu: goto label_3df2bc;
        case 0x3df2c0u: goto label_3df2c0;
        case 0x3df2c4u: goto label_3df2c4;
        case 0x3df2c8u: goto label_3df2c8;
        case 0x3df2ccu: goto label_3df2cc;
        case 0x3df2d0u: goto label_3df2d0;
        case 0x3df2d4u: goto label_3df2d4;
        case 0x3df2d8u: goto label_3df2d8;
        case 0x3df2dcu: goto label_3df2dc;
        case 0x3df2e0u: goto label_3df2e0;
        case 0x3df2e4u: goto label_3df2e4;
        case 0x3df2e8u: goto label_3df2e8;
        case 0x3df2ecu: goto label_3df2ec;
        case 0x3df2f0u: goto label_3df2f0;
        case 0x3df2f4u: goto label_3df2f4;
        case 0x3df2f8u: goto label_3df2f8;
        case 0x3df2fcu: goto label_3df2fc;
        case 0x3df300u: goto label_3df300;
        case 0x3df304u: goto label_3df304;
        case 0x3df308u: goto label_3df308;
        case 0x3df30cu: goto label_3df30c;
        case 0x3df310u: goto label_3df310;
        case 0x3df314u: goto label_3df314;
        case 0x3df318u: goto label_3df318;
        case 0x3df31cu: goto label_3df31c;
        case 0x3df320u: goto label_3df320;
        case 0x3df324u: goto label_3df324;
        case 0x3df328u: goto label_3df328;
        case 0x3df32cu: goto label_3df32c;
        case 0x3df330u: goto label_3df330;
        case 0x3df334u: goto label_3df334;
        case 0x3df338u: goto label_3df338;
        case 0x3df33cu: goto label_3df33c;
        case 0x3df340u: goto label_3df340;
        case 0x3df344u: goto label_3df344;
        case 0x3df348u: goto label_3df348;
        case 0x3df34cu: goto label_3df34c;
        case 0x3df350u: goto label_3df350;
        case 0x3df354u: goto label_3df354;
        case 0x3df358u: goto label_3df358;
        case 0x3df35cu: goto label_3df35c;
        case 0x3df360u: goto label_3df360;
        case 0x3df364u: goto label_3df364;
        case 0x3df368u: goto label_3df368;
        case 0x3df36cu: goto label_3df36c;
        case 0x3df370u: goto label_3df370;
        case 0x3df374u: goto label_3df374;
        case 0x3df378u: goto label_3df378;
        case 0x3df37cu: goto label_3df37c;
        case 0x3df380u: goto label_3df380;
        case 0x3df384u: goto label_3df384;
        case 0x3df388u: goto label_3df388;
        case 0x3df38cu: goto label_3df38c;
        case 0x3df390u: goto label_3df390;
        case 0x3df394u: goto label_3df394;
        case 0x3df398u: goto label_3df398;
        case 0x3df39cu: goto label_3df39c;
        case 0x3df3a0u: goto label_3df3a0;
        case 0x3df3a4u: goto label_3df3a4;
        case 0x3df3a8u: goto label_3df3a8;
        case 0x3df3acu: goto label_3df3ac;
        case 0x3df3b0u: goto label_3df3b0;
        case 0x3df3b4u: goto label_3df3b4;
        case 0x3df3b8u: goto label_3df3b8;
        case 0x3df3bcu: goto label_3df3bc;
        case 0x3df3c0u: goto label_3df3c0;
        case 0x3df3c4u: goto label_3df3c4;
        case 0x3df3c8u: goto label_3df3c8;
        case 0x3df3ccu: goto label_3df3cc;
        case 0x3df3d0u: goto label_3df3d0;
        case 0x3df3d4u: goto label_3df3d4;
        case 0x3df3d8u: goto label_3df3d8;
        case 0x3df3dcu: goto label_3df3dc;
        case 0x3df3e0u: goto label_3df3e0;
        case 0x3df3e4u: goto label_3df3e4;
        case 0x3df3e8u: goto label_3df3e8;
        case 0x3df3ecu: goto label_3df3ec;
        case 0x3df3f0u: goto label_3df3f0;
        case 0x3df3f4u: goto label_3df3f4;
        case 0x3df3f8u: goto label_3df3f8;
        case 0x3df3fcu: goto label_3df3fc;
        case 0x3df400u: goto label_3df400;
        case 0x3df404u: goto label_3df404;
        case 0x3df408u: goto label_3df408;
        case 0x3df40cu: goto label_3df40c;
        case 0x3df410u: goto label_3df410;
        case 0x3df414u: goto label_3df414;
        case 0x3df418u: goto label_3df418;
        case 0x3df41cu: goto label_3df41c;
        case 0x3df420u: goto label_3df420;
        case 0x3df424u: goto label_3df424;
        case 0x3df428u: goto label_3df428;
        case 0x3df42cu: goto label_3df42c;
        case 0x3df430u: goto label_3df430;
        case 0x3df434u: goto label_3df434;
        case 0x3df438u: goto label_3df438;
        case 0x3df43cu: goto label_3df43c;
        case 0x3df440u: goto label_3df440;
        case 0x3df444u: goto label_3df444;
        case 0x3df448u: goto label_3df448;
        case 0x3df44cu: goto label_3df44c;
        case 0x3df450u: goto label_3df450;
        case 0x3df454u: goto label_3df454;
        case 0x3df458u: goto label_3df458;
        case 0x3df45cu: goto label_3df45c;
        case 0x3df460u: goto label_3df460;
        case 0x3df464u: goto label_3df464;
        case 0x3df468u: goto label_3df468;
        case 0x3df46cu: goto label_3df46c;
        case 0x3df470u: goto label_3df470;
        case 0x3df474u: goto label_3df474;
        case 0x3df478u: goto label_3df478;
        case 0x3df47cu: goto label_3df47c;
        case 0x3df480u: goto label_3df480;
        case 0x3df484u: goto label_3df484;
        case 0x3df488u: goto label_3df488;
        case 0x3df48cu: goto label_3df48c;
        case 0x3df490u: goto label_3df490;
        case 0x3df494u: goto label_3df494;
        case 0x3df498u: goto label_3df498;
        case 0x3df49cu: goto label_3df49c;
        case 0x3df4a0u: goto label_3df4a0;
        case 0x3df4a4u: goto label_3df4a4;
        case 0x3df4a8u: goto label_3df4a8;
        case 0x3df4acu: goto label_3df4ac;
        case 0x3df4b0u: goto label_3df4b0;
        case 0x3df4b4u: goto label_3df4b4;
        case 0x3df4b8u: goto label_3df4b8;
        case 0x3df4bcu: goto label_3df4bc;
        case 0x3df4c0u: goto label_3df4c0;
        case 0x3df4c4u: goto label_3df4c4;
        case 0x3df4c8u: goto label_3df4c8;
        case 0x3df4ccu: goto label_3df4cc;
        case 0x3df4d0u: goto label_3df4d0;
        case 0x3df4d4u: goto label_3df4d4;
        case 0x3df4d8u: goto label_3df4d8;
        case 0x3df4dcu: goto label_3df4dc;
        case 0x3df4e0u: goto label_3df4e0;
        case 0x3df4e4u: goto label_3df4e4;
        case 0x3df4e8u: goto label_3df4e8;
        case 0x3df4ecu: goto label_3df4ec;
        case 0x3df4f0u: goto label_3df4f0;
        case 0x3df4f4u: goto label_3df4f4;
        case 0x3df4f8u: goto label_3df4f8;
        case 0x3df4fcu: goto label_3df4fc;
        case 0x3df500u: goto label_3df500;
        case 0x3df504u: goto label_3df504;
        case 0x3df508u: goto label_3df508;
        case 0x3df50cu: goto label_3df50c;
        case 0x3df510u: goto label_3df510;
        case 0x3df514u: goto label_3df514;
        case 0x3df518u: goto label_3df518;
        case 0x3df51cu: goto label_3df51c;
        case 0x3df520u: goto label_3df520;
        case 0x3df524u: goto label_3df524;
        case 0x3df528u: goto label_3df528;
        case 0x3df52cu: goto label_3df52c;
        case 0x3df530u: goto label_3df530;
        case 0x3df534u: goto label_3df534;
        case 0x3df538u: goto label_3df538;
        case 0x3df53cu: goto label_3df53c;
        case 0x3df540u: goto label_3df540;
        case 0x3df544u: goto label_3df544;
        case 0x3df548u: goto label_3df548;
        case 0x3df54cu: goto label_3df54c;
        case 0x3df550u: goto label_3df550;
        case 0x3df554u: goto label_3df554;
        case 0x3df558u: goto label_3df558;
        case 0x3df55cu: goto label_3df55c;
        case 0x3df560u: goto label_3df560;
        case 0x3df564u: goto label_3df564;
        case 0x3df568u: goto label_3df568;
        case 0x3df56cu: goto label_3df56c;
        case 0x3df570u: goto label_3df570;
        case 0x3df574u: goto label_3df574;
        case 0x3df578u: goto label_3df578;
        case 0x3df57cu: goto label_3df57c;
        case 0x3df580u: goto label_3df580;
        case 0x3df584u: goto label_3df584;
        case 0x3df588u: goto label_3df588;
        case 0x3df58cu: goto label_3df58c;
        case 0x3df590u: goto label_3df590;
        case 0x3df594u: goto label_3df594;
        case 0x3df598u: goto label_3df598;
        case 0x3df59cu: goto label_3df59c;
        case 0x3df5a0u: goto label_3df5a0;
        case 0x3df5a4u: goto label_3df5a4;
        case 0x3df5a8u: goto label_3df5a8;
        case 0x3df5acu: goto label_3df5ac;
        case 0x3df5b0u: goto label_3df5b0;
        case 0x3df5b4u: goto label_3df5b4;
        case 0x3df5b8u: goto label_3df5b8;
        case 0x3df5bcu: goto label_3df5bc;
        case 0x3df5c0u: goto label_3df5c0;
        case 0x3df5c4u: goto label_3df5c4;
        case 0x3df5c8u: goto label_3df5c8;
        case 0x3df5ccu: goto label_3df5cc;
        case 0x3df5d0u: goto label_3df5d0;
        case 0x3df5d4u: goto label_3df5d4;
        case 0x3df5d8u: goto label_3df5d8;
        case 0x3df5dcu: goto label_3df5dc;
        case 0x3df5e0u: goto label_3df5e0;
        case 0x3df5e4u: goto label_3df5e4;
        case 0x3df5e8u: goto label_3df5e8;
        case 0x3df5ecu: goto label_3df5ec;
        case 0x3df5f0u: goto label_3df5f0;
        case 0x3df5f4u: goto label_3df5f4;
        case 0x3df5f8u: goto label_3df5f8;
        case 0x3df5fcu: goto label_3df5fc;
        case 0x3df600u: goto label_3df600;
        case 0x3df604u: goto label_3df604;
        case 0x3df608u: goto label_3df608;
        case 0x3df60cu: goto label_3df60c;
        case 0x3df610u: goto label_3df610;
        case 0x3df614u: goto label_3df614;
        case 0x3df618u: goto label_3df618;
        case 0x3df61cu: goto label_3df61c;
        case 0x3df620u: goto label_3df620;
        case 0x3df624u: goto label_3df624;
        case 0x3df628u: goto label_3df628;
        case 0x3df62cu: goto label_3df62c;
        case 0x3df630u: goto label_3df630;
        case 0x3df634u: goto label_3df634;
        case 0x3df638u: goto label_3df638;
        case 0x3df63cu: goto label_3df63c;
        case 0x3df640u: goto label_3df640;
        case 0x3df644u: goto label_3df644;
        case 0x3df648u: goto label_3df648;
        case 0x3df64cu: goto label_3df64c;
        case 0x3df650u: goto label_3df650;
        case 0x3df654u: goto label_3df654;
        case 0x3df658u: goto label_3df658;
        case 0x3df65cu: goto label_3df65c;
        case 0x3df660u: goto label_3df660;
        case 0x3df664u: goto label_3df664;
        case 0x3df668u: goto label_3df668;
        case 0x3df66cu: goto label_3df66c;
        case 0x3df670u: goto label_3df670;
        case 0x3df674u: goto label_3df674;
        case 0x3df678u: goto label_3df678;
        case 0x3df67cu: goto label_3df67c;
        case 0x3df680u: goto label_3df680;
        case 0x3df684u: goto label_3df684;
        case 0x3df688u: goto label_3df688;
        case 0x3df68cu: goto label_3df68c;
        case 0x3df690u: goto label_3df690;
        case 0x3df694u: goto label_3df694;
        case 0x3df698u: goto label_3df698;
        case 0x3df69cu: goto label_3df69c;
        case 0x3df6a0u: goto label_3df6a0;
        case 0x3df6a4u: goto label_3df6a4;
        case 0x3df6a8u: goto label_3df6a8;
        case 0x3df6acu: goto label_3df6ac;
        case 0x3df6b0u: goto label_3df6b0;
        case 0x3df6b4u: goto label_3df6b4;
        case 0x3df6b8u: goto label_3df6b8;
        case 0x3df6bcu: goto label_3df6bc;
        case 0x3df6c0u: goto label_3df6c0;
        case 0x3df6c4u: goto label_3df6c4;
        case 0x3df6c8u: goto label_3df6c8;
        case 0x3df6ccu: goto label_3df6cc;
        case 0x3df6d0u: goto label_3df6d0;
        case 0x3df6d4u: goto label_3df6d4;
        case 0x3df6d8u: goto label_3df6d8;
        case 0x3df6dcu: goto label_3df6dc;
        case 0x3df6e0u: goto label_3df6e0;
        case 0x3df6e4u: goto label_3df6e4;
        case 0x3df6e8u: goto label_3df6e8;
        case 0x3df6ecu: goto label_3df6ec;
        case 0x3df6f0u: goto label_3df6f0;
        case 0x3df6f4u: goto label_3df6f4;
        case 0x3df6f8u: goto label_3df6f8;
        case 0x3df6fcu: goto label_3df6fc;
        case 0x3df700u: goto label_3df700;
        case 0x3df704u: goto label_3df704;
        case 0x3df708u: goto label_3df708;
        case 0x3df70cu: goto label_3df70c;
        case 0x3df710u: goto label_3df710;
        case 0x3df714u: goto label_3df714;
        case 0x3df718u: goto label_3df718;
        case 0x3df71cu: goto label_3df71c;
        case 0x3df720u: goto label_3df720;
        case 0x3df724u: goto label_3df724;
        case 0x3df728u: goto label_3df728;
        case 0x3df72cu: goto label_3df72c;
        case 0x3df730u: goto label_3df730;
        case 0x3df734u: goto label_3df734;
        case 0x3df738u: goto label_3df738;
        case 0x3df73cu: goto label_3df73c;
        case 0x3df740u: goto label_3df740;
        case 0x3df744u: goto label_3df744;
        case 0x3df748u: goto label_3df748;
        case 0x3df74cu: goto label_3df74c;
        case 0x3df750u: goto label_3df750;
        case 0x3df754u: goto label_3df754;
        case 0x3df758u: goto label_3df758;
        case 0x3df75cu: goto label_3df75c;
        case 0x3df760u: goto label_3df760;
        case 0x3df764u: goto label_3df764;
        case 0x3df768u: goto label_3df768;
        case 0x3df76cu: goto label_3df76c;
        case 0x3df770u: goto label_3df770;
        case 0x3df774u: goto label_3df774;
        case 0x3df778u: goto label_3df778;
        case 0x3df77cu: goto label_3df77c;
        case 0x3df780u: goto label_3df780;
        case 0x3df784u: goto label_3df784;
        case 0x3df788u: goto label_3df788;
        case 0x3df78cu: goto label_3df78c;
        case 0x3df790u: goto label_3df790;
        case 0x3df794u: goto label_3df794;
        case 0x3df798u: goto label_3df798;
        case 0x3df79cu: goto label_3df79c;
        case 0x3df7a0u: goto label_3df7a0;
        case 0x3df7a4u: goto label_3df7a4;
        case 0x3df7a8u: goto label_3df7a8;
        case 0x3df7acu: goto label_3df7ac;
        case 0x3df7b0u: goto label_3df7b0;
        case 0x3df7b4u: goto label_3df7b4;
        case 0x3df7b8u: goto label_3df7b8;
        case 0x3df7bcu: goto label_3df7bc;
        case 0x3df7c0u: goto label_3df7c0;
        case 0x3df7c4u: goto label_3df7c4;
        case 0x3df7c8u: goto label_3df7c8;
        case 0x3df7ccu: goto label_3df7cc;
        case 0x3df7d0u: goto label_3df7d0;
        case 0x3df7d4u: goto label_3df7d4;
        case 0x3df7d8u: goto label_3df7d8;
        case 0x3df7dcu: goto label_3df7dc;
        case 0x3df7e0u: goto label_3df7e0;
        case 0x3df7e4u: goto label_3df7e4;
        case 0x3df7e8u: goto label_3df7e8;
        case 0x3df7ecu: goto label_3df7ec;
        case 0x3df7f0u: goto label_3df7f0;
        case 0x3df7f4u: goto label_3df7f4;
        case 0x3df7f8u: goto label_3df7f8;
        case 0x3df7fcu: goto label_3df7fc;
        case 0x3df800u: goto label_3df800;
        case 0x3df804u: goto label_3df804;
        case 0x3df808u: goto label_3df808;
        case 0x3df80cu: goto label_3df80c;
        case 0x3df810u: goto label_3df810;
        case 0x3df814u: goto label_3df814;
        case 0x3df818u: goto label_3df818;
        case 0x3df81cu: goto label_3df81c;
        case 0x3df820u: goto label_3df820;
        case 0x3df824u: goto label_3df824;
        case 0x3df828u: goto label_3df828;
        case 0x3df82cu: goto label_3df82c;
        case 0x3df830u: goto label_3df830;
        case 0x3df834u: goto label_3df834;
        case 0x3df838u: goto label_3df838;
        case 0x3df83cu: goto label_3df83c;
        case 0x3df840u: goto label_3df840;
        case 0x3df844u: goto label_3df844;
        case 0x3df848u: goto label_3df848;
        case 0x3df84cu: goto label_3df84c;
        case 0x3df850u: goto label_3df850;
        case 0x3df854u: goto label_3df854;
        case 0x3df858u: goto label_3df858;
        case 0x3df85cu: goto label_3df85c;
        case 0x3df860u: goto label_3df860;
        case 0x3df864u: goto label_3df864;
        case 0x3df868u: goto label_3df868;
        case 0x3df86cu: goto label_3df86c;
        case 0x3df870u: goto label_3df870;
        case 0x3df874u: goto label_3df874;
        case 0x3df878u: goto label_3df878;
        case 0x3df87cu: goto label_3df87c;
        case 0x3df880u: goto label_3df880;
        case 0x3df884u: goto label_3df884;
        case 0x3df888u: goto label_3df888;
        case 0x3df88cu: goto label_3df88c;
        case 0x3df890u: goto label_3df890;
        case 0x3df894u: goto label_3df894;
        case 0x3df898u: goto label_3df898;
        case 0x3df89cu: goto label_3df89c;
        case 0x3df8a0u: goto label_3df8a0;
        case 0x3df8a4u: goto label_3df8a4;
        case 0x3df8a8u: goto label_3df8a8;
        case 0x3df8acu: goto label_3df8ac;
        case 0x3df8b0u: goto label_3df8b0;
        case 0x3df8b4u: goto label_3df8b4;
        case 0x3df8b8u: goto label_3df8b8;
        case 0x3df8bcu: goto label_3df8bc;
        case 0x3df8c0u: goto label_3df8c0;
        case 0x3df8c4u: goto label_3df8c4;
        case 0x3df8c8u: goto label_3df8c8;
        case 0x3df8ccu: goto label_3df8cc;
        case 0x3df8d0u: goto label_3df8d0;
        case 0x3df8d4u: goto label_3df8d4;
        case 0x3df8d8u: goto label_3df8d8;
        case 0x3df8dcu: goto label_3df8dc;
        case 0x3df8e0u: goto label_3df8e0;
        case 0x3df8e4u: goto label_3df8e4;
        case 0x3df8e8u: goto label_3df8e8;
        case 0x3df8ecu: goto label_3df8ec;
        case 0x3df8f0u: goto label_3df8f0;
        case 0x3df8f4u: goto label_3df8f4;
        case 0x3df8f8u: goto label_3df8f8;
        case 0x3df8fcu: goto label_3df8fc;
        case 0x3df900u: goto label_3df900;
        case 0x3df904u: goto label_3df904;
        case 0x3df908u: goto label_3df908;
        case 0x3df90cu: goto label_3df90c;
        case 0x3df910u: goto label_3df910;
        case 0x3df914u: goto label_3df914;
        case 0x3df918u: goto label_3df918;
        case 0x3df91cu: goto label_3df91c;
        case 0x3df920u: goto label_3df920;
        case 0x3df924u: goto label_3df924;
        case 0x3df928u: goto label_3df928;
        case 0x3df92cu: goto label_3df92c;
        case 0x3df930u: goto label_3df930;
        case 0x3df934u: goto label_3df934;
        case 0x3df938u: goto label_3df938;
        case 0x3df93cu: goto label_3df93c;
        case 0x3df940u: goto label_3df940;
        case 0x3df944u: goto label_3df944;
        case 0x3df948u: goto label_3df948;
        case 0x3df94cu: goto label_3df94c;
        case 0x3df950u: goto label_3df950;
        case 0x3df954u: goto label_3df954;
        case 0x3df958u: goto label_3df958;
        case 0x3df95cu: goto label_3df95c;
        case 0x3df960u: goto label_3df960;
        case 0x3df964u: goto label_3df964;
        case 0x3df968u: goto label_3df968;
        case 0x3df96cu: goto label_3df96c;
        case 0x3df970u: goto label_3df970;
        case 0x3df974u: goto label_3df974;
        case 0x3df978u: goto label_3df978;
        case 0x3df97cu: goto label_3df97c;
        case 0x3df980u: goto label_3df980;
        case 0x3df984u: goto label_3df984;
        case 0x3df988u: goto label_3df988;
        case 0x3df98cu: goto label_3df98c;
        case 0x3df990u: goto label_3df990;
        case 0x3df994u: goto label_3df994;
        case 0x3df998u: goto label_3df998;
        case 0x3df99cu: goto label_3df99c;
        case 0x3df9a0u: goto label_3df9a0;
        case 0x3df9a4u: goto label_3df9a4;
        case 0x3df9a8u: goto label_3df9a8;
        case 0x3df9acu: goto label_3df9ac;
        case 0x3df9b0u: goto label_3df9b0;
        case 0x3df9b4u: goto label_3df9b4;
        case 0x3df9b8u: goto label_3df9b8;
        case 0x3df9bcu: goto label_3df9bc;
        case 0x3df9c0u: goto label_3df9c0;
        case 0x3df9c4u: goto label_3df9c4;
        case 0x3df9c8u: goto label_3df9c8;
        case 0x3df9ccu: goto label_3df9cc;
        case 0x3df9d0u: goto label_3df9d0;
        case 0x3df9d4u: goto label_3df9d4;
        case 0x3df9d8u: goto label_3df9d8;
        case 0x3df9dcu: goto label_3df9dc;
        case 0x3df9e0u: goto label_3df9e0;
        case 0x3df9e4u: goto label_3df9e4;
        case 0x3df9e8u: goto label_3df9e8;
        case 0x3df9ecu: goto label_3df9ec;
        case 0x3df9f0u: goto label_3df9f0;
        case 0x3df9f4u: goto label_3df9f4;
        case 0x3df9f8u: goto label_3df9f8;
        case 0x3df9fcu: goto label_3df9fc;
        case 0x3dfa00u: goto label_3dfa00;
        case 0x3dfa04u: goto label_3dfa04;
        case 0x3dfa08u: goto label_3dfa08;
        case 0x3dfa0cu: goto label_3dfa0c;
        case 0x3dfa10u: goto label_3dfa10;
        case 0x3dfa14u: goto label_3dfa14;
        case 0x3dfa18u: goto label_3dfa18;
        case 0x3dfa1cu: goto label_3dfa1c;
        case 0x3dfa20u: goto label_3dfa20;
        case 0x3dfa24u: goto label_3dfa24;
        case 0x3dfa28u: goto label_3dfa28;
        case 0x3dfa2cu: goto label_3dfa2c;
        case 0x3dfa30u: goto label_3dfa30;
        case 0x3dfa34u: goto label_3dfa34;
        case 0x3dfa38u: goto label_3dfa38;
        case 0x3dfa3cu: goto label_3dfa3c;
        case 0x3dfa40u: goto label_3dfa40;
        case 0x3dfa44u: goto label_3dfa44;
        case 0x3dfa48u: goto label_3dfa48;
        case 0x3dfa4cu: goto label_3dfa4c;
        case 0x3dfa50u: goto label_3dfa50;
        case 0x3dfa54u: goto label_3dfa54;
        case 0x3dfa58u: goto label_3dfa58;
        case 0x3dfa5cu: goto label_3dfa5c;
        case 0x3dfa60u: goto label_3dfa60;
        case 0x3dfa64u: goto label_3dfa64;
        case 0x3dfa68u: goto label_3dfa68;
        case 0x3dfa6cu: goto label_3dfa6c;
        case 0x3dfa70u: goto label_3dfa70;
        case 0x3dfa74u: goto label_3dfa74;
        case 0x3dfa78u: goto label_3dfa78;
        case 0x3dfa7cu: goto label_3dfa7c;
        case 0x3dfa80u: goto label_3dfa80;
        case 0x3dfa84u: goto label_3dfa84;
        case 0x3dfa88u: goto label_3dfa88;
        case 0x3dfa8cu: goto label_3dfa8c;
        case 0x3dfa90u: goto label_3dfa90;
        case 0x3dfa94u: goto label_3dfa94;
        case 0x3dfa98u: goto label_3dfa98;
        case 0x3dfa9cu: goto label_3dfa9c;
        case 0x3dfaa0u: goto label_3dfaa0;
        case 0x3dfaa4u: goto label_3dfaa4;
        case 0x3dfaa8u: goto label_3dfaa8;
        case 0x3dfaacu: goto label_3dfaac;
        case 0x3dfab0u: goto label_3dfab0;
        case 0x3dfab4u: goto label_3dfab4;
        case 0x3dfab8u: goto label_3dfab8;
        case 0x3dfabcu: goto label_3dfabc;
        case 0x3dfac0u: goto label_3dfac0;
        case 0x3dfac4u: goto label_3dfac4;
        case 0x3dfac8u: goto label_3dfac8;
        case 0x3dfaccu: goto label_3dfacc;
        case 0x3dfad0u: goto label_3dfad0;
        case 0x3dfad4u: goto label_3dfad4;
        case 0x3dfad8u: goto label_3dfad8;
        case 0x3dfadcu: goto label_3dfadc;
        case 0x3dfae0u: goto label_3dfae0;
        case 0x3dfae4u: goto label_3dfae4;
        case 0x3dfae8u: goto label_3dfae8;
        case 0x3dfaecu: goto label_3dfaec;
        case 0x3dfaf0u: goto label_3dfaf0;
        case 0x3dfaf4u: goto label_3dfaf4;
        case 0x3dfaf8u: goto label_3dfaf8;
        case 0x3dfafcu: goto label_3dfafc;
        case 0x3dfb00u: goto label_3dfb00;
        case 0x3dfb04u: goto label_3dfb04;
        case 0x3dfb08u: goto label_3dfb08;
        case 0x3dfb0cu: goto label_3dfb0c;
        case 0x3dfb10u: goto label_3dfb10;
        case 0x3dfb14u: goto label_3dfb14;
        case 0x3dfb18u: goto label_3dfb18;
        case 0x3dfb1cu: goto label_3dfb1c;
        case 0x3dfb20u: goto label_3dfb20;
        case 0x3dfb24u: goto label_3dfb24;
        case 0x3dfb28u: goto label_3dfb28;
        case 0x3dfb2cu: goto label_3dfb2c;
        case 0x3dfb30u: goto label_3dfb30;
        case 0x3dfb34u: goto label_3dfb34;
        case 0x3dfb38u: goto label_3dfb38;
        case 0x3dfb3cu: goto label_3dfb3c;
        case 0x3dfb40u: goto label_3dfb40;
        case 0x3dfb44u: goto label_3dfb44;
        case 0x3dfb48u: goto label_3dfb48;
        case 0x3dfb4cu: goto label_3dfb4c;
        case 0x3dfb50u: goto label_3dfb50;
        case 0x3dfb54u: goto label_3dfb54;
        case 0x3dfb58u: goto label_3dfb58;
        case 0x3dfb5cu: goto label_3dfb5c;
        case 0x3dfb60u: goto label_3dfb60;
        case 0x3dfb64u: goto label_3dfb64;
        case 0x3dfb68u: goto label_3dfb68;
        case 0x3dfb6cu: goto label_3dfb6c;
        case 0x3dfb70u: goto label_3dfb70;
        case 0x3dfb74u: goto label_3dfb74;
        case 0x3dfb78u: goto label_3dfb78;
        case 0x3dfb7cu: goto label_3dfb7c;
        case 0x3dfb80u: goto label_3dfb80;
        case 0x3dfb84u: goto label_3dfb84;
        case 0x3dfb88u: goto label_3dfb88;
        case 0x3dfb8cu: goto label_3dfb8c;
        case 0x3dfb90u: goto label_3dfb90;
        case 0x3dfb94u: goto label_3dfb94;
        case 0x3dfb98u: goto label_3dfb98;
        case 0x3dfb9cu: goto label_3dfb9c;
        case 0x3dfba0u: goto label_3dfba0;
        case 0x3dfba4u: goto label_3dfba4;
        case 0x3dfba8u: goto label_3dfba8;
        case 0x3dfbacu: goto label_3dfbac;
        case 0x3dfbb0u: goto label_3dfbb0;
        case 0x3dfbb4u: goto label_3dfbb4;
        case 0x3dfbb8u: goto label_3dfbb8;
        case 0x3dfbbcu: goto label_3dfbbc;
        case 0x3dfbc0u: goto label_3dfbc0;
        case 0x3dfbc4u: goto label_3dfbc4;
        case 0x3dfbc8u: goto label_3dfbc8;
        case 0x3dfbccu: goto label_3dfbcc;
        case 0x3dfbd0u: goto label_3dfbd0;
        case 0x3dfbd4u: goto label_3dfbd4;
        case 0x3dfbd8u: goto label_3dfbd8;
        case 0x3dfbdcu: goto label_3dfbdc;
        case 0x3dfbe0u: goto label_3dfbe0;
        case 0x3dfbe4u: goto label_3dfbe4;
        case 0x3dfbe8u: goto label_3dfbe8;
        case 0x3dfbecu: goto label_3dfbec;
        case 0x3dfbf0u: goto label_3dfbf0;
        case 0x3dfbf4u: goto label_3dfbf4;
        case 0x3dfbf8u: goto label_3dfbf8;
        case 0x3dfbfcu: goto label_3dfbfc;
        case 0x3dfc00u: goto label_3dfc00;
        case 0x3dfc04u: goto label_3dfc04;
        case 0x3dfc08u: goto label_3dfc08;
        case 0x3dfc0cu: goto label_3dfc0c;
        case 0x3dfc10u: goto label_3dfc10;
        case 0x3dfc14u: goto label_3dfc14;
        case 0x3dfc18u: goto label_3dfc18;
        case 0x3dfc1cu: goto label_3dfc1c;
        case 0x3dfc20u: goto label_3dfc20;
        case 0x3dfc24u: goto label_3dfc24;
        case 0x3dfc28u: goto label_3dfc28;
        case 0x3dfc2cu: goto label_3dfc2c;
        case 0x3dfc30u: goto label_3dfc30;
        case 0x3dfc34u: goto label_3dfc34;
        case 0x3dfc38u: goto label_3dfc38;
        case 0x3dfc3cu: goto label_3dfc3c;
        case 0x3dfc40u: goto label_3dfc40;
        case 0x3dfc44u: goto label_3dfc44;
        case 0x3dfc48u: goto label_3dfc48;
        case 0x3dfc4cu: goto label_3dfc4c;
        case 0x3dfc50u: goto label_3dfc50;
        case 0x3dfc54u: goto label_3dfc54;
        case 0x3dfc58u: goto label_3dfc58;
        case 0x3dfc5cu: goto label_3dfc5c;
        case 0x3dfc60u: goto label_3dfc60;
        case 0x3dfc64u: goto label_3dfc64;
        case 0x3dfc68u: goto label_3dfc68;
        case 0x3dfc6cu: goto label_3dfc6c;
        case 0x3dfc70u: goto label_3dfc70;
        case 0x3dfc74u: goto label_3dfc74;
        case 0x3dfc78u: goto label_3dfc78;
        case 0x3dfc7cu: goto label_3dfc7c;
        case 0x3dfc80u: goto label_3dfc80;
        case 0x3dfc84u: goto label_3dfc84;
        case 0x3dfc88u: goto label_3dfc88;
        case 0x3dfc8cu: goto label_3dfc8c;
        case 0x3dfc90u: goto label_3dfc90;
        case 0x3dfc94u: goto label_3dfc94;
        case 0x3dfc98u: goto label_3dfc98;
        case 0x3dfc9cu: goto label_3dfc9c;
        case 0x3dfca0u: goto label_3dfca0;
        case 0x3dfca4u: goto label_3dfca4;
        case 0x3dfca8u: goto label_3dfca8;
        case 0x3dfcacu: goto label_3dfcac;
        case 0x3dfcb0u: goto label_3dfcb0;
        case 0x3dfcb4u: goto label_3dfcb4;
        case 0x3dfcb8u: goto label_3dfcb8;
        case 0x3dfcbcu: goto label_3dfcbc;
        case 0x3dfcc0u: goto label_3dfcc0;
        case 0x3dfcc4u: goto label_3dfcc4;
        case 0x3dfcc8u: goto label_3dfcc8;
        case 0x3dfcccu: goto label_3dfccc;
        case 0x3dfcd0u: goto label_3dfcd0;
        case 0x3dfcd4u: goto label_3dfcd4;
        case 0x3dfcd8u: goto label_3dfcd8;
        case 0x3dfcdcu: goto label_3dfcdc;
        case 0x3dfce0u: goto label_3dfce0;
        case 0x3dfce4u: goto label_3dfce4;
        case 0x3dfce8u: goto label_3dfce8;
        case 0x3dfcecu: goto label_3dfcec;
        case 0x3dfcf0u: goto label_3dfcf0;
        case 0x3dfcf4u: goto label_3dfcf4;
        case 0x3dfcf8u: goto label_3dfcf8;
        case 0x3dfcfcu: goto label_3dfcfc;
        case 0x3dfd00u: goto label_3dfd00;
        case 0x3dfd04u: goto label_3dfd04;
        case 0x3dfd08u: goto label_3dfd08;
        case 0x3dfd0cu: goto label_3dfd0c;
        case 0x3dfd10u: goto label_3dfd10;
        case 0x3dfd14u: goto label_3dfd14;
        case 0x3dfd18u: goto label_3dfd18;
        case 0x3dfd1cu: goto label_3dfd1c;
        default: break;
    }

    ctx->pc = 0x3defe0u;

label_3defe0:
    // 0x3defe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3defe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3defe4:
    // 0x3defe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3defe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3defe8:
    // 0x3defe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3defe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3defec:
    // 0x3defec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3defecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3deff0:
    // 0x3deff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3deff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3deff4:
    // 0x3deff4: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x3deff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3deff8:
    // 0x3deff8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3deff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3deffc:
    // 0x3deffc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3deffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3df000:
    // 0x3df000: 0x320f809  jalr        $t9
label_3df004:
    if (ctx->pc == 0x3DF004u) {
        ctx->pc = 0x3DF004u;
            // 0x3df004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DF008u;
        goto label_3df008;
    }
    ctx->pc = 0x3DF000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DF008u);
        ctx->pc = 0x3DF004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF000u;
            // 0x3df004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DF008u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DF008u; }
            if (ctx->pc != 0x3DF008u) { return; }
        }
        }
    }
    ctx->pc = 0x3DF008u;
label_3df008:
    // 0x3df008: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3df008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3df00c:
    // 0x3df00c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3df00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3df010:
    // 0x3df010: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3df010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3df014:
    // 0x3df014: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3df014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3df018:
    // 0x3df018: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x3df018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3df01c:
    // 0x3df01c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3df01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3df020:
    // 0x3df020: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3df020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_3df024:
    // 0x3df024: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3df024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3df028:
    // 0x3df028: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3df028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3df02c:
    // 0x3df02c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3df02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3df030:
    // 0x3df030: 0x3e00008  jr          $ra
label_3df034:
    if (ctx->pc == 0x3DF034u) {
        ctx->pc = 0x3DF034u;
            // 0x3df034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3DF038u;
        goto label_3df038;
    }
    ctx->pc = 0x3DF030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF030u;
            // 0x3df034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DF038u;
label_3df038:
    // 0x3df038: 0x0  nop
    ctx->pc = 0x3df038u;
    // NOP
label_3df03c:
    // 0x3df03c: 0x0  nop
    ctx->pc = 0x3df03cu;
    // NOP
label_3df040:
    // 0x3df040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3df040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3df044:
    // 0x3df044: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3df044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3df048:
    // 0x3df048: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3df048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3df04c:
    // 0x3df04c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3df04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3df050:
    // 0x3df050: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3df050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3df054:
    // 0x3df054: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3df054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3df058:
    // 0x3df058: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3df058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3df05c:
    // 0x3df05c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_3df060:
    if (ctx->pc == 0x3DF060u) {
        ctx->pc = 0x3DF060u;
            // 0x3df060: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DF064u;
        goto label_3df064;
    }
    ctx->pc = 0x3DF05Cu;
    {
        const bool branch_taken_0x3df05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF05Cu;
            // 0x3df060: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df05c) {
            ctx->pc = 0x3DF0C8u;
            goto label_3df0c8;
        }
    }
    ctx->pc = 0x3DF064u;
label_3df064:
    // 0x3df064: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x3df064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3df068:
    // 0x3df068: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3df068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3df06c:
    // 0x3df06c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3df06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3df070:
    // 0x3df070: 0x54500012  bnel        $v0, $s0, . + 4 + (0x12 << 2)
label_3df074:
    if (ctx->pc == 0x3DF074u) {
        ctx->pc = 0x3DF074u;
            // 0x3df074: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x3DF078u;
        goto label_3df078;
    }
    ctx->pc = 0x3DF070u;
    {
        const bool branch_taken_0x3df070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3df070) {
            ctx->pc = 0x3DF074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF070u;
            // 0x3df074: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF0BCu;
            goto label_3df0bc;
        }
    }
    ctx->pc = 0x3DF078u;
label_3df078:
    // 0x3df078: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3df078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3df07c:
    // 0x3df07c: 0xc2082b  sltu        $at, $a2, $v0
    ctx->pc = 0x3df07cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3df080:
    // 0x3df080: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
label_3df084:
    if (ctx->pc == 0x3DF084u) {
        ctx->pc = 0x3DF084u;
            // 0x3df084: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x3DF088u;
        goto label_3df088;
    }
    ctx->pc = 0x3DF080u;
    {
        const bool branch_taken_0x3df080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df080) {
            ctx->pc = 0x3DF084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF080u;
            // 0x3df084: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF0B0u;
            goto label_3df0b0;
        }
    }
    ctx->pc = 0x3DF088u;
label_3df088:
    // 0x3df088: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x3df088u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3df08c:
    // 0x3df08c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3df08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3df090:
    // 0x3df090: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3df090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3df094:
    // 0x3df094: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x3df094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3df098:
    // 0x3df098: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x3df098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3df09c:
    // 0x3df09c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3df09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3df0a0:
    // 0x3df0a0: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x3df0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3df0a4:
    // 0x3df0a4: 0xc04a508  jal         func_129420
label_3df0a8:
    if (ctx->pc == 0x3DF0A8u) {
        ctx->pc = 0x3DF0A8u;
            // 0x3df0a8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x3DF0ACu;
        goto label_3df0ac;
    }
    ctx->pc = 0x3DF0A4u;
    SET_GPR_U32(ctx, 31, 0x3DF0ACu);
    ctx->pc = 0x3DF0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF0A4u;
            // 0x3df0a8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF0ACu; }
        if (ctx->pc != 0x3DF0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF0ACu; }
        if (ctx->pc != 0x3DF0ACu) { return; }
    }
    ctx->pc = 0x3DF0ACu;
label_3df0ac:
    // 0x3df0ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3df0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3df0b0:
    // 0x3df0b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3df0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3df0b4:
    // 0x3df0b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3df0b8:
    if (ctx->pc == 0x3DF0B8u) {
        ctx->pc = 0x3DF0B8u;
            // 0x3df0b8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x3DF0BCu;
        goto label_3df0bc;
    }
    ctx->pc = 0x3DF0B4u;
    {
        const bool branch_taken_0x3df0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF0B4u;
            // 0x3df0b8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df0b4) {
            ctx->pc = 0x3DF0C8u;
            goto label_3df0c8;
        }
    }
    ctx->pc = 0x3DF0BCu;
label_3df0bc:
    // 0x3df0bc: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x3df0bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3df0c0:
    // 0x3df0c0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_3df0c4:
    if (ctx->pc == 0x3DF0C4u) {
        ctx->pc = 0x3DF0C4u;
            // 0x3df0c4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x3DF0C8u;
        goto label_3df0c8;
    }
    ctx->pc = 0x3DF0C0u;
    {
        const bool branch_taken_0x3df0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF0C0u;
            // 0x3df0c4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df0c0) {
            ctx->pc = 0x3DF06Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3df06c;
        }
    }
    ctx->pc = 0x3DF0C8u;
label_3df0c8:
    // 0x3df0c8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3df0c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3df0cc:
    // 0x3df0cc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3df0ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3df0d0:
    // 0x3df0d0: 0x320f809  jalr        $t9
label_3df0d4:
    if (ctx->pc == 0x3DF0D4u) {
        ctx->pc = 0x3DF0D4u;
            // 0x3df0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DF0D8u;
        goto label_3df0d8;
    }
    ctx->pc = 0x3DF0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DF0D8u);
        ctx->pc = 0x3DF0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF0D0u;
            // 0x3df0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DF0D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DF0D8u; }
            if (ctx->pc != 0x3DF0D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3DF0D8u;
label_3df0d8:
    // 0x3df0d8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3df0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3df0dc:
    // 0x3df0dc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3df0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3df0e0:
    // 0x3df0e0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3df0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3df0e4:
    // 0x3df0e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3df0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3df0e8:
    // 0x3df0e8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x3df0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3df0ec:
    // 0x3df0ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3df0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3df0f0:
    // 0x3df0f0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3df0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_3df0f4:
    // 0x3df0f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3df0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3df0f8:
    // 0x3df0f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3df0f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3df0fc:
    // 0x3df0fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3df0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3df100:
    // 0x3df100: 0x3e00008  jr          $ra
label_3df104:
    if (ctx->pc == 0x3DF104u) {
        ctx->pc = 0x3DF104u;
            // 0x3df104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3DF108u;
        goto label_3df108;
    }
    ctx->pc = 0x3DF100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF100u;
            // 0x3df104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DF108u;
label_3df108:
    // 0x3df108: 0x0  nop
    ctx->pc = 0x3df108u;
    // NOP
label_3df10c:
    // 0x3df10c: 0x0  nop
    ctx->pc = 0x3df10cu;
    // NOP
label_3df110:
    // 0x3df110: 0x80f6d90  j           func_3DB640
label_3df114:
    if (ctx->pc == 0x3DF114u) {
        ctx->pc = 0x3DF114u;
            // 0x3df114: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x3DF118u;
        goto label_3df118;
    }
    ctx->pc = 0x3DF110u;
    ctx->pc = 0x3DF114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF110u;
            // 0x3df114: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DB640u;
    {
        auto targetFn = runtime->lookupFunction(0x3DB640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3DF118u;
label_3df118:
    // 0x3df118: 0x0  nop
    ctx->pc = 0x3df118u;
    // NOP
label_3df11c:
    // 0x3df11c: 0x0  nop
    ctx->pc = 0x3df11cu;
    // NOP
label_3df120:
    // 0x3df120: 0x80f7130  j           func_3DC4C0
label_3df124:
    if (ctx->pc == 0x3DF124u) {
        ctx->pc = 0x3DF124u;
            // 0x3df124: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3DF128u;
        goto label_3df128;
    }
    ctx->pc = 0x3DF120u;
    ctx->pc = 0x3DF124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF120u;
            // 0x3df124: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DC4C0u;
    {
        auto targetFn = runtime->lookupFunction(0x3DC4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3DF128u;
label_3df128:
    // 0x3df128: 0x0  nop
    ctx->pc = 0x3df128u;
    // NOP
label_3df12c:
    // 0x3df12c: 0x0  nop
    ctx->pc = 0x3df12cu;
    // NOP
label_3df130:
    // 0x3df130: 0x80f6d38  j           func_3DB4E0
label_3df134:
    if (ctx->pc == 0x3DF134u) {
        ctx->pc = 0x3DF134u;
            // 0x3df134: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3DF138u;
        goto label_3df138;
    }
    ctx->pc = 0x3DF130u;
    ctx->pc = 0x3DF134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF130u;
            // 0x3df134: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DB4E0u;
    if (runtime->hasFunction(0x3DB4E0u)) {
        auto targetFn = runtime->lookupFunction(0x3DB4E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003DB4E0_0x3db4e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3DF138u;
label_3df138:
    // 0x3df138: 0x0  nop
    ctx->pc = 0x3df138u;
    // NOP
label_3df13c:
    // 0x3df13c: 0x0  nop
    ctx->pc = 0x3df13cu;
    // NOP
label_3df140:
    // 0x3df140: 0x80f6d14  j           func_3DB450
label_3df144:
    if (ctx->pc == 0x3DF144u) {
        ctx->pc = 0x3DF144u;
            // 0x3df144: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3DF148u;
        goto label_3df148;
    }
    ctx->pc = 0x3DF140u;
    ctx->pc = 0x3DF144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF140u;
            // 0x3df144: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DB450u;
    {
        auto targetFn = runtime->lookupFunction(0x3DB450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3DF148u;
label_3df148:
    // 0x3df148: 0x0  nop
    ctx->pc = 0x3df148u;
    // NOP
label_3df14c:
    // 0x3df14c: 0x0  nop
    ctx->pc = 0x3df14cu;
    // NOP
label_3df150:
    // 0x3df150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3df150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3df154:
    // 0x3df154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3df154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3df158:
    // 0x3df158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3df158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3df15c:
    // 0x3df15c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3df15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3df160:
    // 0x3df160: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3df160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3df164:
    // 0x3df164: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_3df168:
    if (ctx->pc == 0x3DF168u) {
        ctx->pc = 0x3DF168u;
            // 0x3df168: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DF16Cu;
        goto label_3df16c;
    }
    ctx->pc = 0x3DF164u;
    {
        const bool branch_taken_0x3df164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF164u;
            // 0x3df168: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df164) {
            ctx->pc = 0x3DF1C8u;
            goto label_3df1c8;
        }
    }
    ctx->pc = 0x3DF16Cu;
label_3df16c:
    // 0x3df16c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3df16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3df170:
    // 0x3df170: 0x24429a90  addiu       $v0, $v0, -0x6570
    ctx->pc = 0x3df170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941328));
label_3df174:
    // 0x3df174: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_3df178:
    if (ctx->pc == 0x3DF178u) {
        ctx->pc = 0x3DF178u;
            // 0x3df178: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3DF17Cu;
        goto label_3df17c;
    }
    ctx->pc = 0x3DF174u;
    {
        const bool branch_taken_0x3df174 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF174u;
            // 0x3df178: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df174) {
            ctx->pc = 0x3DF1B0u;
            goto label_3df1b0;
        }
    }
    ctx->pc = 0x3DF17Cu;
label_3df17c:
    // 0x3df17c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3df17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3df180:
    // 0x3df180: 0x24424490  addiu       $v0, $v0, 0x4490
    ctx->pc = 0x3df180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17552));
label_3df184:
    // 0x3df184: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_3df188:
    if (ctx->pc == 0x3DF188u) {
        ctx->pc = 0x3DF188u;
            // 0x3df188: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3DF18Cu;
        goto label_3df18c;
    }
    ctx->pc = 0x3DF184u;
    {
        const bool branch_taken_0x3df184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF184u;
            // 0x3df188: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df184) {
            ctx->pc = 0x3DF1B0u;
            goto label_3df1b0;
        }
    }
    ctx->pc = 0x3DF18Cu;
label_3df18c:
    // 0x3df18c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3df18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3df190:
    // 0x3df190: 0x24422a20  addiu       $v0, $v0, 0x2A20
    ctx->pc = 0x3df190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10784));
label_3df194:
    // 0x3df194: 0xc0c6064  jal         func_318190
label_3df198:
    if (ctx->pc == 0x3DF198u) {
        ctx->pc = 0x3DF198u;
            // 0x3df198: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3DF19Cu;
        goto label_3df19c;
    }
    ctx->pc = 0x3DF194u;
    SET_GPR_U32(ctx, 31, 0x3DF19Cu);
    ctx->pc = 0x3DF198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF194u;
            // 0x3df198: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318190u;
    if (runtime->hasFunction(0x318190u)) {
        auto targetFn = runtime->lookupFunction(0x318190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF19Cu; }
        if (ctx->pc != 0x3DF19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318190_0x318190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF19Cu; }
        if (ctx->pc != 0x3DF19Cu) { return; }
    }
    ctx->pc = 0x3DF19Cu;
label_3df19c:
    // 0x3df19c: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_3df1a0:
    if (ctx->pc == 0x3DF1A0u) {
        ctx->pc = 0x3DF1A0u;
            // 0x3df1a0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x3DF1A4u;
        goto label_3df1a4;
    }
    ctx->pc = 0x3DF19Cu;
    {
        const bool branch_taken_0x3df19c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df19c) {
            ctx->pc = 0x3DF1A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF19Cu;
            // 0x3df1a0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF1B4u;
            goto label_3df1b4;
        }
    }
    ctx->pc = 0x3DF1A4u;
label_3df1a4:
    // 0x3df1a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3df1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3df1a8:
    // 0x3df1a8: 0x24422a10  addiu       $v0, $v0, 0x2A10
    ctx->pc = 0x3df1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10768));
label_3df1ac:
    // 0x3df1ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3df1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3df1b0:
    // 0x3df1b0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3df1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3df1b4:
    // 0x3df1b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3df1b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3df1b8:
    // 0x3df1b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3df1bc:
    if (ctx->pc == 0x3DF1BCu) {
        ctx->pc = 0x3DF1BCu;
            // 0x3df1bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DF1C0u;
        goto label_3df1c0;
    }
    ctx->pc = 0x3DF1B8u;
    {
        const bool branch_taken_0x3df1b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3df1b8) {
            ctx->pc = 0x3DF1BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF1B8u;
            // 0x3df1bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF1CCu;
            goto label_3df1cc;
        }
    }
    ctx->pc = 0x3DF1C0u;
label_3df1c0:
    // 0x3df1c0: 0xc0400a8  jal         func_1002A0
label_3df1c4:
    if (ctx->pc == 0x3DF1C4u) {
        ctx->pc = 0x3DF1C4u;
            // 0x3df1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DF1C8u;
        goto label_3df1c8;
    }
    ctx->pc = 0x3DF1C0u;
    SET_GPR_U32(ctx, 31, 0x3DF1C8u);
    ctx->pc = 0x3DF1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF1C0u;
            // 0x3df1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF1C8u; }
        if (ctx->pc != 0x3DF1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF1C8u; }
        if (ctx->pc != 0x3DF1C8u) { return; }
    }
    ctx->pc = 0x3DF1C8u;
label_3df1c8:
    // 0x3df1c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3df1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df1cc:
    // 0x3df1cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3df1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3df1d0:
    // 0x3df1d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3df1d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3df1d4:
    // 0x3df1d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3df1d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3df1d8:
    // 0x3df1d8: 0x3e00008  jr          $ra
label_3df1dc:
    if (ctx->pc == 0x3DF1DCu) {
        ctx->pc = 0x3DF1DCu;
            // 0x3df1dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3DF1E0u;
        goto label_3df1e0;
    }
    ctx->pc = 0x3DF1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF1D8u;
            // 0x3df1dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DF1E0u;
label_3df1e0:
    // 0x3df1e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3df1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3df1e4:
    // 0x3df1e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3df1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3df1e8:
    // 0x3df1e8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3df1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3df1ec:
    // 0x3df1ec: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3df1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3df1f0:
    // 0x3df1f0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3df1f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3df1f4:
    // 0x3df1f4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3df1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3df1f8:
    // 0x3df1f8: 0x24b502c0  addiu       $s5, $a1, 0x2C0
    ctx->pc = 0x3df1f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
label_3df1fc:
    // 0x3df1fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3df1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3df200:
    // 0x3df200: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3df200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3df204:
    // 0x3df204: 0x24b30c6c  addiu       $s3, $a1, 0xC6C
    ctx->pc = 0x3df204u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 3180));
label_3df208:
    // 0x3df208: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3df208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3df20c:
    // 0x3df20c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3df20cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3df210:
    // 0x3df210: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3df210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3df214:
    // 0x3df214: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3df214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3df218:
    // 0x3df218: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3df218u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3df21c:
    // 0x3df21c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3df21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3df220:
    // 0x3df220: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3df220u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3df224:
    // 0x3df224: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x3df224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3df228:
    // 0x3df228: 0x8c940008  lw          $s4, 0x8($a0)
    ctx->pc = 0x3df228u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3df22c:
    // 0x3df22c: 0x94a30c7e  lhu         $v1, 0xC7E($a1)
    ctx->pc = 0x3df22cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 3198)));
label_3df230:
    // 0x3df230: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x3df230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3df234:
    // 0x3df234: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3df234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3df238:
    // 0x3df238: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3df238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_3df23c:
    // 0x3df23c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3df23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3df240:
    // 0x3df240: 0xc4550020  lwc1        $f21, 0x20($v0)
    ctx->pc = 0x3df240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3df244:
    // 0x3df244: 0xc04cc90  jal         func_133240
label_3df248:
    if (ctx->pc == 0x3DF248u) {
        ctx->pc = 0x3DF248u;
            // 0x3df248: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DF24Cu;
        goto label_3df24c;
    }
    ctx->pc = 0x3DF244u;
    SET_GPR_U32(ctx, 31, 0x3DF24Cu);
    ctx->pc = 0x3DF248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF244u;
            // 0x3df248: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF24Cu; }
        if (ctx->pc != 0x3DF24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF24Cu; }
        if (ctx->pc != 0x3DF24Cu) { return; }
    }
    ctx->pc = 0x3DF24Cu;
label_3df24c:
    // 0x3df24c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3df24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3df250:
    // 0x3df250: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3df250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_3df254:
    // 0x3df254: 0xc04cc44  jal         func_133110
label_3df258:
    if (ctx->pc == 0x3DF258u) {
        ctx->pc = 0x3DF258u;
            // 0x3df258: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DF25Cu;
        goto label_3df25c;
    }
    ctx->pc = 0x3DF254u;
    SET_GPR_U32(ctx, 31, 0x3DF25Cu);
    ctx->pc = 0x3DF258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF254u;
            // 0x3df258: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF25Cu; }
        if (ctx->pc != 0x3DF25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF25Cu; }
        if (ctx->pc != 0x3DF25Cu) { return; }
    }
    ctx->pc = 0x3DF25Cu;
label_3df25c:
    // 0x3df25c: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x3df25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_3df260:
    // 0x3df260: 0xc04cc08  jal         func_133020
label_3df264:
    if (ctx->pc == 0x3DF264u) {
        ctx->pc = 0x3DF264u;
            // 0x3df264: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3DF268u;
        goto label_3df268;
    }
    ctx->pc = 0x3DF260u;
    SET_GPR_U32(ctx, 31, 0x3DF268u);
    ctx->pc = 0x3DF264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF260u;
            // 0x3df264: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF268u; }
        if (ctx->pc != 0x3DF268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF268u; }
        if (ctx->pc != 0x3DF268u) { return; }
    }
    ctx->pc = 0x3DF268u;
label_3df268:
    // 0x3df268: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3df268u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3df26c:
    // 0x3df26c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3df26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3df270:
    // 0x3df270: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3df270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3df274:
    // 0x3df274: 0xc04cc90  jal         func_133240
label_3df278:
    if (ctx->pc == 0x3DF278u) {
        ctx->pc = 0x3DF278u;
            // 0x3df278: 0x26460070  addiu       $a2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->pc = 0x3DF27Cu;
        goto label_3df27c;
    }
    ctx->pc = 0x3DF274u;
    SET_GPR_U32(ctx, 31, 0x3DF27Cu);
    ctx->pc = 0x3DF278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF274u;
            // 0x3df278: 0x26460070  addiu       $a2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF27Cu; }
        if (ctx->pc != 0x3DF27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF27Cu; }
        if (ctx->pc != 0x3DF27Cu) { return; }
    }
    ctx->pc = 0x3DF27Cu;
label_3df27c:
    // 0x3df27c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3df27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3df280:
    // 0x3df280: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x3df280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_3df284:
    // 0x3df284: 0xc04cc44  jal         func_133110
label_3df288:
    if (ctx->pc == 0x3DF288u) {
        ctx->pc = 0x3DF288u;
            // 0x3df288: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DF28Cu;
        goto label_3df28c;
    }
    ctx->pc = 0x3DF284u;
    SET_GPR_U32(ctx, 31, 0x3DF28Cu);
    ctx->pc = 0x3DF288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF284u;
            // 0x3df288: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF28Cu; }
        if (ctx->pc != 0x3DF28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF28Cu; }
        if (ctx->pc != 0x3DF28Cu) { return; }
    }
    ctx->pc = 0x3DF28Cu;
label_3df28c:
    // 0x3df28c: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x3df28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_3df290:
    // 0x3df290: 0xc04cc08  jal         func_133020
label_3df294:
    if (ctx->pc == 0x3DF294u) {
        ctx->pc = 0x3DF294u;
            // 0x3df294: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3DF298u;
        goto label_3df298;
    }
    ctx->pc = 0x3DF290u;
    SET_GPR_U32(ctx, 31, 0x3DF298u);
    ctx->pc = 0x3DF294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF290u;
            // 0x3df294: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF298u; }
        if (ctx->pc != 0x3DF298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF298u; }
        if (ctx->pc != 0x3DF298u) { return; }
    }
    ctx->pc = 0x3DF298u;
label_3df298:
    // 0x3df298: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3df298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3df29c:
    // 0x3df29c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3df29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3df2a0:
    // 0x3df2a0: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3df2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3df2a4:
    // 0x3df2a4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3df2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3df2a8:
    // 0x3df2a8: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
label_3df2ac:
    if (ctx->pc == 0x3DF2ACu) {
        ctx->pc = 0x3DF2B0u;
        goto label_3df2b0;
    }
    ctx->pc = 0x3DF2A8u;
    {
        const bool branch_taken_0x3df2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3df2a8) {
            ctx->pc = 0x3DF2FCu;
            goto label_3df2fc;
        }
    }
    ctx->pc = 0x3DF2B0u;
label_3df2b0:
    // 0x3df2b0: 0x96620012  lhu         $v0, 0x12($s3)
    ctx->pc = 0x3df2b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_3df2b4:
    // 0x3df2b4: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x3df2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3df2b8:
    // 0x3df2b8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3df2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3df2bc:
    // 0x3df2bc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3df2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3df2c0:
    // 0x3df2c0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3df2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3df2c4:
    // 0x3df2c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3df2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3df2c8:
    // 0x3df2c8: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x3df2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3df2cc:
    // 0x3df2cc: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x3df2ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df2d0:
    // 0x3df2d0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_3df2d4:
    if (ctx->pc == 0x3DF2D4u) {
        ctx->pc = 0x3DF2D8u;
        goto label_3df2d8;
    }
    ctx->pc = 0x3DF2D0u;
    {
        const bool branch_taken_0x3df2d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df2d0) {
            ctx->pc = 0x3DF2FCu;
            goto label_3df2fc;
        }
    }
    ctx->pc = 0x3DF2D8u;
label_3df2d8:
    // 0x3df2d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3df2d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3df2dc:
    // 0x3df2dc: 0x0  nop
    ctx->pc = 0x3df2dcu;
    // NOP
label_3df2e0:
    // 0x3df2e0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x3df2e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df2e4:
    // 0x3df2e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3df2e8:
    if (ctx->pc == 0x3DF2E8u) {
        ctx->pc = 0x3DF2ECu;
        goto label_3df2ec;
    }
    ctx->pc = 0x3DF2E4u;
    {
        const bool branch_taken_0x3df2e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df2e4) {
            ctx->pc = 0x3DF2FCu;
            goto label_3df2fc;
        }
    }
    ctx->pc = 0x3DF2ECu;
label_3df2ec:
    // 0x3df2ec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3df2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3df2f0:
    // 0x3df2f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3df2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3df2f4:
    // 0x3df2f4: 0x0  nop
    ctx->pc = 0x3df2f4u;
    // NOP
label_3df2f8:
    // 0x3df2f8: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x3df2f8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_3df2fc:
    // 0x3df2fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3df2fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3df300:
    // 0x3df300: 0x0  nop
    ctx->pc = 0x3df300u;
    // NOP
label_3df304:
    // 0x3df304: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x3df304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df308:
    // 0x3df308: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_3df30c:
    if (ctx->pc == 0x3DF30Cu) {
        ctx->pc = 0x3DF30Cu;
            // 0x3df30c: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x3DF310u;
        goto label_3df310;
    }
    ctx->pc = 0x3DF308u;
    {
        const bool branch_taken_0x3df308 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df308) {
            ctx->pc = 0x3DF30Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF308u;
            // 0x3df30c: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF324u;
            goto label_3df324;
        }
    }
    ctx->pc = 0x3DF310u;
label_3df310:
    // 0x3df310: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x3df310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3df314:
    // 0x3df314: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x3df314u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df318:
    // 0x3df318: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
label_3df31c:
    if (ctx->pc == 0x3DF31Cu) {
        ctx->pc = 0x3DF31Cu;
            // 0x3df31c: 0xc64100a0  lwc1        $f1, 0xA0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3DF320u;
        goto label_3df320;
    }
    ctx->pc = 0x3DF318u;
    {
        const bool branch_taken_0x3df318 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df318) {
            ctx->pc = 0x3DF31Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF318u;
            // 0x3df31c: 0xc64100a0  lwc1        $f1, 0xA0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF394u;
            goto label_3df394;
        }
    }
    ctx->pc = 0x3DF320u;
label_3df320:
    // 0x3df320: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3df320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_3df324:
    // 0x3df324: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_3df328:
    if (ctx->pc == 0x3DF328u) {
        ctx->pc = 0x3DF32Cu;
        goto label_3df32c;
    }
    ctx->pc = 0x3DF324u;
    {
        const bool branch_taken_0x3df324 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3df324) {
            ctx->pc = 0x3DF338u;
            goto label_3df338;
        }
    }
    ctx->pc = 0x3DF32Cu;
label_3df32c:
    // 0x3df32c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3df330:
    if (ctx->pc == 0x3DF330u) {
        ctx->pc = 0x3DF334u;
        goto label_3df334;
    }
    ctx->pc = 0x3DF32Cu;
    {
        const bool branch_taken_0x3df32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df32c) {
            ctx->pc = 0x3DF338u;
            goto label_3df338;
        }
    }
    ctx->pc = 0x3DF334u;
label_3df334:
    // 0x3df334: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3df334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3df338:
    // 0x3df338: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_3df33c:
    if (ctx->pc == 0x3DF33Cu) {
        ctx->pc = 0x3DF33Cu;
            // 0x3df33c: 0xc6220000  lwc1        $f2, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3DF340u;
        goto label_3df340;
    }
    ctx->pc = 0x3DF338u;
    {
        const bool branch_taken_0x3df338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df338) {
            ctx->pc = 0x3DF33Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF338u;
            // 0x3df33c: 0xc6220000  lwc1        $f2, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF36Cu;
            goto label_3df36c;
        }
    }
    ctx->pc = 0x3DF340u;
label_3df340:
    // 0x3df340: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x3df340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3df344:
    // 0x3df344: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3df344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3df348:
    // 0x3df348: 0x0  nop
    ctx->pc = 0x3df348u;
    // NOP
label_3df34c:
    // 0x3df34c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3df34cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df350:
    // 0x3df350: 0x45030033  bc1tl       . + 4 + (0x33 << 2)
label_3df354:
    if (ctx->pc == 0x3DF354u) {
        ctx->pc = 0x3DF354u;
            // 0x3df354: 0xe6340000  swc1        $f20, 0x0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x3DF358u;
        goto label_3df358;
    }
    ctx->pc = 0x3DF350u;
    {
        const bool branch_taken_0x3df350 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df350) {
            ctx->pc = 0x3DF354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF350u;
            // 0x3df354: 0xe6340000  swc1        $f20, 0x0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF420u;
            goto label_3df420;
        }
    }
    ctx->pc = 0x3DF358u;
label_3df358:
    // 0x3df358: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x3df358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df35c:
    // 0x3df35c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_3df360:
    if (ctx->pc == 0x3DF360u) {
        ctx->pc = 0x3DF364u;
        goto label_3df364;
    }
    ctx->pc = 0x3DF35Cu;
    {
        const bool branch_taken_0x3df35c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df35c) {
            ctx->pc = 0x3DF41Cu;
            goto label_3df41c;
        }
    }
    ctx->pc = 0x3DF364u;
label_3df364:
    // 0x3df364: 0x1000002d  b           . + 4 + (0x2D << 2)
label_3df368:
    if (ctx->pc == 0x3DF368u) {
        ctx->pc = 0x3DF368u;
            // 0x3df368: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3DF36Cu;
        goto label_3df36c;
    }
    ctx->pc = 0x3DF364u;
    {
        const bool branch_taken_0x3df364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF364u;
            // 0x3df368: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df364) {
            ctx->pc = 0x3DF41Cu;
            goto label_3df41c;
        }
    }
    ctx->pc = 0x3DF36Cu;
label_3df36c:
    // 0x3df36c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3df36cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3df370:
    // 0x3df370: 0x0  nop
    ctx->pc = 0x3df370u;
    // NOP
label_3df374:
    // 0x3df374: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3df374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df378:
    // 0x3df378: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_3df37c:
    if (ctx->pc == 0x3DF37Cu) {
        ctx->pc = 0x3DF380u;
        goto label_3df380;
    }
    ctx->pc = 0x3DF378u;
    {
        const bool branch_taken_0x3df378 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df378) {
            ctx->pc = 0x3DF41Cu;
            goto label_3df41c;
        }
    }
    ctx->pc = 0x3DF380u;
label_3df380:
    // 0x3df380: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x3df380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df384:
    // 0x3df384: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_3df388:
    if (ctx->pc == 0x3DF388u) {
        ctx->pc = 0x3DF38Cu;
        goto label_3df38c;
    }
    ctx->pc = 0x3DF384u;
    {
        const bool branch_taken_0x3df384 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df384) {
            ctx->pc = 0x3DF41Cu;
            goto label_3df41c;
        }
    }
    ctx->pc = 0x3DF38Cu;
label_3df38c:
    // 0x3df38c: 0x10000023  b           . + 4 + (0x23 << 2)
label_3df390:
    if (ctx->pc == 0x3DF390u) {
        ctx->pc = 0x3DF390u;
            // 0x3df390: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DF394u;
        goto label_3df394;
    }
    ctx->pc = 0x3DF38Cu;
    {
        const bool branch_taken_0x3df38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF38Cu;
            // 0x3df390: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df38c) {
            ctx->pc = 0x3DF41Cu;
            goto label_3df41c;
        }
    }
    ctx->pc = 0x3DF394u;
label_3df394:
    // 0x3df394: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x3df394u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df398:
    // 0x3df398: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_3df39c:
    if (ctx->pc == 0x3DF39Cu) {
        ctx->pc = 0x3DF3A0u;
        goto label_3df3a0;
    }
    ctx->pc = 0x3DF398u;
    {
        const bool branch_taken_0x3df398 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df398) {
            ctx->pc = 0x3DF41Cu;
            goto label_3df41c;
        }
    }
    ctx->pc = 0x3DF3A0u;
label_3df3a0:
    // 0x3df3a0: 0xc64100a4  lwc1        $f1, 0xA4($s2)
    ctx->pc = 0x3df3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3df3a4:
    // 0x3df3a4: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x3df3a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df3a8:
    // 0x3df3a8: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_3df3ac:
    if (ctx->pc == 0x3DF3ACu) {
        ctx->pc = 0x3DF3B0u;
        goto label_3df3b0;
    }
    ctx->pc = 0x3DF3A8u;
    {
        const bool branch_taken_0x3df3a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df3a8) {
            ctx->pc = 0x3DF41Cu;
            goto label_3df41c;
        }
    }
    ctx->pc = 0x3DF3B0u;
label_3df3b0:
    // 0x3df3b0: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_3df3b4:
    if (ctx->pc == 0x3DF3B4u) {
        ctx->pc = 0x3DF3B4u;
            // 0x3df3b4: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x3DF3B8u;
        goto label_3df3b8;
    }
    ctx->pc = 0x3DF3B0u;
    {
        const bool branch_taken_0x3df3b0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3DF3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF3B0u;
            // 0x3df3b4: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df3b0) {
            ctx->pc = 0x3DF3C4u;
            goto label_3df3c4;
        }
    }
    ctx->pc = 0x3DF3B8u;
label_3df3b8:
    // 0x3df3b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3df3bc:
    if (ctx->pc == 0x3DF3BCu) {
        ctx->pc = 0x3DF3C0u;
        goto label_3df3c0;
    }
    ctx->pc = 0x3DF3B8u;
    {
        const bool branch_taken_0x3df3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df3b8) {
            ctx->pc = 0x3DF3C4u;
            goto label_3df3c4;
        }
    }
    ctx->pc = 0x3DF3C0u;
label_3df3c0:
    // 0x3df3c0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3df3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3df3c4:
    // 0x3df3c4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_3df3c8:
    if (ctx->pc == 0x3DF3C8u) {
        ctx->pc = 0x3DF3C8u;
            // 0x3df3c8: 0xc6220004  lwc1        $f2, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x3DF3CCu;
        goto label_3df3cc;
    }
    ctx->pc = 0x3DF3C4u;
    {
        const bool branch_taken_0x3df3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df3c4) {
            ctx->pc = 0x3DF3C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF3C4u;
            // 0x3df3c8: 0xc6220004  lwc1        $f2, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF3F8u;
            goto label_3df3f8;
        }
    }
    ctx->pc = 0x3DF3CCu;
label_3df3cc:
    // 0x3df3cc: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x3df3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3df3d0:
    // 0x3df3d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3df3d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3df3d4:
    // 0x3df3d4: 0x0  nop
    ctx->pc = 0x3df3d4u;
    // NOP
label_3df3d8:
    // 0x3df3d8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3df3d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df3dc:
    // 0x3df3dc: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_3df3e0:
    if (ctx->pc == 0x3DF3E0u) {
        ctx->pc = 0x3DF3E4u;
        goto label_3df3e4;
    }
    ctx->pc = 0x3DF3DCu;
    {
        const bool branch_taken_0x3df3dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df3dc) {
            ctx->pc = 0x3DF41Cu;
            goto label_3df41c;
        }
    }
    ctx->pc = 0x3DF3E4u;
label_3df3e4:
    // 0x3df3e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3df3e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df3e8:
    // 0x3df3e8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_3df3ec:
    if (ctx->pc == 0x3DF3ECu) {
        ctx->pc = 0x3DF3F0u;
        goto label_3df3f0;
    }
    ctx->pc = 0x3DF3E8u;
    {
        const bool branch_taken_0x3df3e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df3e8) {
            ctx->pc = 0x3DF41Cu;
            goto label_3df41c;
        }
    }
    ctx->pc = 0x3DF3F0u;
label_3df3f0:
    // 0x3df3f0: 0x1000000a  b           . + 4 + (0xA << 2)
label_3df3f4:
    if (ctx->pc == 0x3DF3F4u) {
        ctx->pc = 0x3DF3F4u;
            // 0x3df3f4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DF3F8u;
        goto label_3df3f8;
    }
    ctx->pc = 0x3DF3F0u;
    {
        const bool branch_taken_0x3df3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF3F0u;
            // 0x3df3f4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df3f0) {
            ctx->pc = 0x3DF41Cu;
            goto label_3df41c;
        }
    }
    ctx->pc = 0x3DF3F8u;
label_3df3f8:
    // 0x3df3f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3df3f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3df3fc:
    // 0x3df3fc: 0x0  nop
    ctx->pc = 0x3df3fcu;
    // NOP
label_3df400:
    // 0x3df400: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3df400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df404:
    // 0x3df404: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3df408:
    if (ctx->pc == 0x3DF408u) {
        ctx->pc = 0x3DF40Cu;
        goto label_3df40c;
    }
    ctx->pc = 0x3DF404u;
    {
        const bool branch_taken_0x3df404 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df404) {
            ctx->pc = 0x3DF41Cu;
            goto label_3df41c;
        }
    }
    ctx->pc = 0x3DF40Cu;
label_3df40c:
    // 0x3df40c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3df40cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df410:
    // 0x3df410: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3df414:
    if (ctx->pc == 0x3DF414u) {
        ctx->pc = 0x3DF418u;
        goto label_3df418;
    }
    ctx->pc = 0x3DF410u;
    {
        const bool branch_taken_0x3df410 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df410) {
            ctx->pc = 0x3DF41Cu;
            goto label_3df41c;
        }
    }
    ctx->pc = 0x3DF418u;
label_3df418:
    // 0x3df418: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3df418u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3df41c:
    // 0x3df41c: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x3df41cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_3df420:
    // 0x3df420: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x3df420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3df424:
    // 0x3df424: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3df424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3df428:
    // 0x3df428: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3df428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3df42c:
    // 0x3df42c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3df42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3df430:
    // 0x3df430: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3df430u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3df434:
    // 0x3df434: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3df434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3df438:
    // 0x3df438: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3df438u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3df43c:
    // 0x3df43c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3df43cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3df440:
    // 0x3df440: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3df440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3df444:
    // 0x3df444: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3df444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3df448:
    // 0x3df448: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3df448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3df44c:
    // 0x3df44c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3df44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3df450:
    // 0x3df450: 0x3e00008  jr          $ra
label_3df454:
    if (ctx->pc == 0x3DF454u) {
        ctx->pc = 0x3DF454u;
            // 0x3df454: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3DF458u;
        goto label_3df458;
    }
    ctx->pc = 0x3DF450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF450u;
            // 0x3df454: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DF458u;
label_3df458:
    // 0x3df458: 0x0  nop
    ctx->pc = 0x3df458u;
    // NOP
label_3df45c:
    // 0x3df45c: 0x0  nop
    ctx->pc = 0x3df45cu;
    // NOP
label_3df460:
    // 0x3df460: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3df460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3df464:
    // 0x3df464: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3df464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3df468:
    // 0x3df468: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3df468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3df46c:
    // 0x3df46c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3df46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3df470:
    // 0x3df470: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3df470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3df474:
    // 0x3df474: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3df474u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3df478:
    // 0x3df478: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3df478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3df47c:
    // 0x3df47c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3df47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3df480:
    // 0x3df480: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3df480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3df484:
    // 0x3df484: 0xc0c5fe8  jal         func_317FA0
label_3df488:
    if (ctx->pc == 0x3DF488u) {
        ctx->pc = 0x3DF488u;
            // 0x3df488: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3DF48Cu;
        goto label_3df48c;
    }
    ctx->pc = 0x3DF484u;
    SET_GPR_U32(ctx, 31, 0x3DF48Cu);
    ctx->pc = 0x3DF488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF484u;
            // 0x3df488: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317FA0u;
    if (runtime->hasFunction(0x317FA0u)) {
        auto targetFn = runtime->lookupFunction(0x317FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF48Cu; }
        if (ctx->pc != 0x3DF48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00317FA0_0x317fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF48Cu; }
        if (ctx->pc != 0x3DF48Cu) { return; }
    }
    ctx->pc = 0x3DF48Cu;
label_3df48c:
    // 0x3df48c: 0x8eb10008  lw          $s1, 0x8($s5)
    ctx->pc = 0x3df48cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3df490:
    // 0x3df490: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3df490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3df494:
    // 0x3df494: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3df494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3df498:
    // 0x3df498: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3df498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3df49c:
    // 0x3df49c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3df49cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3df4a0:
    // 0x3df4a0: 0x26b30070  addiu       $s3, $s5, 0x70
    ctx->pc = 0x3df4a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_3df4a4:
    // 0x3df4a4: 0x8e34000c  lw          $s4, 0xC($s1)
    ctx->pc = 0x3df4a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3df4a8:
    // 0x3df4a8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3df4a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3df4ac:
    // 0x3df4ac: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x3df4acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3df4b0:
    // 0x3df4b0: 0x26b60080  addiu       $s6, $s5, 0x80
    ctx->pc = 0x3df4b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
label_3df4b4:
    // 0x3df4b4: 0xc04cbd8  jal         func_132F60
label_3df4b8:
    if (ctx->pc == 0x3DF4B8u) {
        ctx->pc = 0x3DF4B8u;
            // 0x3df4b8: 0x26b20090  addiu       $s2, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->pc = 0x3DF4BCu;
        goto label_3df4bc;
    }
    ctx->pc = 0x3DF4B4u;
    SET_GPR_U32(ctx, 31, 0x3DF4BCu);
    ctx->pc = 0x3DF4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF4B4u;
            // 0x3df4b8: 0x26b20090  addiu       $s2, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF4BCu; }
        if (ctx->pc != 0x3DF4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF4BCu; }
        if (ctx->pc != 0x3DF4BCu) { return; }
    }
    ctx->pc = 0x3DF4BCu;
label_3df4bc:
    // 0x3df4bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3df4bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3df4c0:
    // 0x3df4c0: 0x96820006  lhu         $v0, 0x6($s4)
    ctx->pc = 0x3df4c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_3df4c4:
    // 0x3df4c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3df4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3df4c8:
    // 0x3df4c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3df4c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3df4cc:
    // 0x3df4cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3df4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3df4d0:
    // 0x3df4d0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_3df4d4:
    if (ctx->pc == 0x3DF4D4u) {
        ctx->pc = 0x3DF4D4u;
            // 0x3df4d4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3DF4D8u;
        goto label_3df4d8;
    }
    ctx->pc = 0x3DF4D0u;
    {
        const bool branch_taken_0x3df4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3df4d0) {
            ctx->pc = 0x3DF4D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF4D0u;
            // 0x3df4d4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF514u;
            goto label_3df514;
        }
    }
    ctx->pc = 0x3DF4D8u;
label_3df4d8:
    // 0x3df4d8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x3df4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3df4dc:
    // 0x3df4dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3df4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3df4e0:
    // 0x3df4e0: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x3df4e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_3df4e4:
    // 0x3df4e4: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x3df4e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_3df4e8:
    // 0x3df4e8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_3df4ec:
    if (ctx->pc == 0x3DF4ECu) {
        ctx->pc = 0x3DF4F0u;
        goto label_3df4f0;
    }
    ctx->pc = 0x3DF4E8u;
    {
        const bool branch_taken_0x3df4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3df4e8) {
            ctx->pc = 0x3DF500u;
            goto label_3df500;
        }
    }
    ctx->pc = 0x3DF4F0u;
label_3df4f0:
    // 0x3df4f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3df4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3df4f4:
    // 0x3df4f4: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x3df4f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3df4f8:
    // 0x3df4f8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3df4fc:
    if (ctx->pc == 0x3DF4FCu) {
        ctx->pc = 0x3DF4FCu;
            // 0x3df4fc: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->pc = 0x3DF500u;
        goto label_3df500;
    }
    ctx->pc = 0x3DF4F8u;
    {
        const bool branch_taken_0x3df4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF4F8u;
            // 0x3df4fc: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df4f8) {
            ctx->pc = 0x3DF4E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3df4e4;
        }
    }
    ctx->pc = 0x3DF500u;
label_3df500:
    // 0x3df500: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x3df500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3df504:
    // 0x3df504: 0xe6a000a0  swc1        $f0, 0xA0($s5)
    ctx->pc = 0x3df504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 160), bits); }
label_3df508:
    // 0x3df508: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x3df508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3df50c:
    // 0x3df50c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3df510:
    if (ctx->pc == 0x3DF510u) {
        ctx->pc = 0x3DF510u;
            // 0x3df510: 0xe6a000a4  swc1        $f0, 0xA4($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 164), bits); }
        ctx->pc = 0x3DF514u;
        goto label_3df514;
    }
    ctx->pc = 0x3DF50Cu;
    {
        const bool branch_taken_0x3df50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF50Cu;
            // 0x3df510: 0xe6a000a4  swc1        $f0, 0xA4($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df50c) {
            ctx->pc = 0x3DF520u;
            goto label_3df520;
        }
    }
    ctx->pc = 0x3DF514u;
label_3df514:
    // 0x3df514: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x3df514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3df518:
    // 0x3df518: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_3df51c:
    if (ctx->pc == 0x3DF51Cu) {
        ctx->pc = 0x3DF51Cu;
            // 0x3df51c: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->pc = 0x3DF520u;
        goto label_3df520;
    }
    ctx->pc = 0x3DF518u;
    {
        const bool branch_taken_0x3df518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF518u;
            // 0x3df51c: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df518) {
            ctx->pc = 0x3DF4C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3df4c0;
        }
    }
    ctx->pc = 0x3DF520u;
label_3df520:
    // 0x3df520: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x3df520u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_3df524:
    // 0x3df524: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3df524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3df528:
    // 0x3df528: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3df528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3df52c:
    // 0x3df52c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3df52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3df530:
    // 0x3df530: 0xc04cc04  jal         func_133010
label_3df534:
    if (ctx->pc == 0x3DF534u) {
        ctx->pc = 0x3DF534u;
            // 0x3df534: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3DF538u;
        goto label_3df538;
    }
    ctx->pc = 0x3DF530u;
    SET_GPR_U32(ctx, 31, 0x3DF538u);
    ctx->pc = 0x3DF534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF530u;
            // 0x3df534: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF538u; }
        if (ctx->pc != 0x3DF538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF538u; }
        if (ctx->pc != 0x3DF538u) { return; }
    }
    ctx->pc = 0x3DF538u;
label_3df538:
    // 0x3df538: 0x96830002  lhu         $v1, 0x2($s4)
    ctx->pc = 0x3df538u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_3df53c:
    // 0x3df53c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3df53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3df540:
    // 0x3df540: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x3df540u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_3df544:
    // 0x3df544: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3df544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3df548:
    // 0x3df548: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3df548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3df54c:
    // 0x3df54c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3df54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3df550:
    // 0x3df550: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x3df550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3df554:
    // 0x3df554: 0xc04cc90  jal         func_133240
label_3df558:
    if (ctx->pc == 0x3DF558u) {
        ctx->pc = 0x3DF558u;
            // 0x3df558: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x3DF55Cu;
        goto label_3df55c;
    }
    ctx->pc = 0x3DF554u;
    SET_GPR_U32(ctx, 31, 0x3DF55Cu);
    ctx->pc = 0x3DF558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF554u;
            // 0x3df558: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF55Cu; }
        if (ctx->pc != 0x3DF55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF55Cu; }
        if (ctx->pc != 0x3DF55Cu) { return; }
    }
    ctx->pc = 0x3DF55Cu;
label_3df55c:
    // 0x3df55c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3df55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3df560:
    // 0x3df560: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3df560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3df564:
    // 0x3df564: 0xc04cc44  jal         func_133110
label_3df568:
    if (ctx->pc == 0x3DF568u) {
        ctx->pc = 0x3DF568u;
            // 0x3df568: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x3DF56Cu;
        goto label_3df56c;
    }
    ctx->pc = 0x3DF564u;
    SET_GPR_U32(ctx, 31, 0x3DF56Cu);
    ctx->pc = 0x3DF568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF564u;
            // 0x3df568: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF56Cu; }
        if (ctx->pc != 0x3DF56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF56Cu; }
        if (ctx->pc != 0x3DF56Cu) { return; }
    }
    ctx->pc = 0x3DF56Cu;
label_3df56c:
    // 0x3df56c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3df56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3df570:
    // 0x3df570: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3df570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3df574:
    // 0x3df574: 0xc04cbf0  jal         func_132FC0
label_3df578:
    if (ctx->pc == 0x3DF578u) {
        ctx->pc = 0x3DF578u;
            // 0x3df578: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3DF57Cu;
        goto label_3df57c;
    }
    ctx->pc = 0x3DF574u;
    SET_GPR_U32(ctx, 31, 0x3DF57Cu);
    ctx->pc = 0x3DF578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF574u;
            // 0x3df578: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF57Cu; }
        if (ctx->pc != 0x3DF57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF57Cu; }
        if (ctx->pc != 0x3DF57Cu) { return; }
    }
    ctx->pc = 0x3DF57Cu;
label_3df57c:
    // 0x3df57c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3df57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3df580:
    // 0x3df580: 0xc04cc44  jal         func_133110
label_3df584:
    if (ctx->pc == 0x3DF584u) {
        ctx->pc = 0x3DF584u;
            // 0x3df584: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DF588u;
        goto label_3df588;
    }
    ctx->pc = 0x3DF580u;
    SET_GPR_U32(ctx, 31, 0x3DF588u);
    ctx->pc = 0x3DF584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF580u;
            // 0x3df584: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF588u; }
        if (ctx->pc != 0x3DF588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF588u; }
        if (ctx->pc != 0x3DF588u) { return; }
    }
    ctx->pc = 0x3DF588u;
label_3df588:
    // 0x3df588: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3df588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3df58c:
    // 0x3df58c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3df58cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3df590:
    // 0x3df590: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3df590u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3df594:
    // 0x3df594: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3df594u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3df598:
    // 0x3df598: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3df598u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3df59c:
    // 0x3df59c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3df59cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3df5a0:
    // 0x3df5a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3df5a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3df5a4:
    // 0x3df5a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3df5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3df5a8:
    // 0x3df5a8: 0x3e00008  jr          $ra
label_3df5ac:
    if (ctx->pc == 0x3DF5ACu) {
        ctx->pc = 0x3DF5ACu;
            // 0x3df5ac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3DF5B0u;
        goto label_3df5b0;
    }
    ctx->pc = 0x3DF5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF5A8u;
            // 0x3df5ac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DF5B0u;
label_3df5b0:
    // 0x3df5b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3df5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3df5b4:
    // 0x3df5b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3df5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3df5b8:
    // 0x3df5b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3df5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3df5bc:
    // 0x3df5bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3df5bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3df5c0:
    // 0x3df5c0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_3df5c4:
    if (ctx->pc == 0x3DF5C4u) {
        ctx->pc = 0x3DF5C4u;
            // 0x3df5c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DF5C8u;
        goto label_3df5c8;
    }
    ctx->pc = 0x3DF5C0u;
    {
        const bool branch_taken_0x3df5c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df5c0) {
            ctx->pc = 0x3DF5C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF5C0u;
            // 0x3df5c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF600u;
            goto label_3df600;
        }
    }
    ctx->pc = 0x3DF5C8u;
label_3df5c8:
    // 0x3df5c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3df5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3df5cc:
    // 0x3df5cc: 0x24429ab0  addiu       $v0, $v0, -0x6550
    ctx->pc = 0x3df5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941360));
label_3df5d0:
    // 0x3df5d0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_3df5d4:
    if (ctx->pc == 0x3DF5D4u) {
        ctx->pc = 0x3DF5D4u;
            // 0x3df5d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3DF5D8u;
        goto label_3df5d8;
    }
    ctx->pc = 0x3DF5D0u;
    {
        const bool branch_taken_0x3df5d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF5D0u;
            // 0x3df5d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df5d0) {
            ctx->pc = 0x3DF5E4u;
            goto label_3df5e4;
        }
    }
    ctx->pc = 0x3DF5D8u;
label_3df5d8:
    // 0x3df5d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3df5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3df5dc:
    // 0x3df5dc: 0x24424690  addiu       $v0, $v0, 0x4690
    ctx->pc = 0x3df5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18064));
label_3df5e0:
    // 0x3df5e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3df5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3df5e4:
    // 0x3df5e4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3df5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_3df5e8:
    // 0x3df5e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3df5e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3df5ec:
    // 0x3df5ec: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_3df5f0:
    if (ctx->pc == 0x3DF5F0u) {
        ctx->pc = 0x3DF5F4u;
        goto label_3df5f4;
    }
    ctx->pc = 0x3DF5ECu;
    {
        const bool branch_taken_0x3df5ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3df5ec) {
            ctx->pc = 0x3DF5FCu;
            goto label_3df5fc;
        }
    }
    ctx->pc = 0x3DF5F4u;
label_3df5f4:
    // 0x3df5f4: 0xc0400a8  jal         func_1002A0
label_3df5f8:
    if (ctx->pc == 0x3DF5F8u) {
        ctx->pc = 0x3DF5F8u;
            // 0x3df5f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DF5FCu;
        goto label_3df5fc;
    }
    ctx->pc = 0x3DF5F4u;
    SET_GPR_U32(ctx, 31, 0x3DF5FCu);
    ctx->pc = 0x3DF5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF5F4u;
            // 0x3df5f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF5FCu; }
        if (ctx->pc != 0x3DF5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF5FCu; }
        if (ctx->pc != 0x3DF5FCu) { return; }
    }
    ctx->pc = 0x3DF5FCu;
label_3df5fc:
    // 0x3df5fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3df5fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df600:
    // 0x3df600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3df600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3df604:
    // 0x3df604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3df604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3df608:
    // 0x3df608: 0x3e00008  jr          $ra
label_3df60c:
    if (ctx->pc == 0x3DF60Cu) {
        ctx->pc = 0x3DF60Cu;
            // 0x3df60c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3DF610u;
        goto label_3df610;
    }
    ctx->pc = 0x3DF608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF608u;
            // 0x3df60c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DF610u;
label_3df610:
    // 0x3df610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3df610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3df614:
    // 0x3df614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3df614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3df618:
    // 0x3df618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3df618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3df61c:
    // 0x3df61c: 0xc0ca7c8  jal         func_329F20
label_3df620:
    if (ctx->pc == 0x3DF620u) {
        ctx->pc = 0x3DF620u;
            // 0x3df620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DF624u;
        goto label_3df624;
    }
    ctx->pc = 0x3DF61Cu;
    SET_GPR_U32(ctx, 31, 0x3DF624u);
    ctx->pc = 0x3DF620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF61Cu;
            // 0x3df620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329F20u;
    if (runtime->hasFunction(0x329F20u)) {
        auto targetFn = runtime->lookupFunction(0x329F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF624u; }
        if (ctx->pc != 0x3DF624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329F20_0x329f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF624u; }
        if (ctx->pc != 0x3DF624u) { return; }
    }
    ctx->pc = 0x3DF624u;
label_3df624:
    // 0x3df624: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x3df624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_3df628:
    // 0x3df628: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3df628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3df62c:
    // 0x3df62c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3df62cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3df630:
    // 0x3df630: 0x3e00008  jr          $ra
label_3df634:
    if (ctx->pc == 0x3DF634u) {
        ctx->pc = 0x3DF634u;
            // 0x3df634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3DF638u;
        goto label_3df638;
    }
    ctx->pc = 0x3DF630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF630u;
            // 0x3df634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DF638u;
label_3df638:
    // 0x3df638: 0x0  nop
    ctx->pc = 0x3df638u;
    // NOP
label_3df63c:
    // 0x3df63c: 0x0  nop
    ctx->pc = 0x3df63cu;
    // NOP
label_3df640:
    // 0x3df640: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3df640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3df644:
    // 0x3df644: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3df644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3df648:
    // 0x3df648: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3df648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3df64c:
    // 0x3df64c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3df64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3df650:
    // 0x3df650: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3df650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3df654:
    // 0x3df654: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3df654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3df658:
    // 0x3df658: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3df658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3df65c:
    // 0x3df65c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3df65cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3df660:
    // 0x3df660: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x3df660u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3df664:
    // 0x3df664: 0x8c430ea4  lw          $v1, 0xEA4($v0)
    ctx->pc = 0x3df664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3df668:
    // 0x3df668: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x3df668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3df66c:
    // 0x3df66c: 0x8e470048  lw          $a3, 0x48($s2)
    ctx->pc = 0x3df66cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_3df670:
    // 0x3df670: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3df670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df674:
    // 0x3df674: 0x8c70012c  lw          $s0, 0x12C($v1)
    ctx->pc = 0x3df674u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
label_3df678:
    // 0x3df678: 0x96220c7e  lhu         $v0, 0xC7E($s1)
    ctx->pc = 0x3df678u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 3198)));
label_3df67c:
    // 0x3df67c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3df67cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3df680:
    // 0x3df680: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3df680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_3df684:
    // 0x3df684: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3df684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3df688:
    // 0x3df688: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3df688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3df68c:
    // 0x3df68c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3df68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3df690:
    // 0x3df690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3df690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3df694:
    // 0x3df694: 0xc4540020  lwc1        $f20, 0x20($v0)
    ctx->pc = 0x3df694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3df698:
    // 0x3df698: 0x320f809  jalr        $t9
label_3df69c:
    if (ctx->pc == 0x3DF69Cu) {
        ctx->pc = 0x3DF69Cu;
            // 0x3df69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DF6A0u;
        goto label_3df6a0;
    }
    ctx->pc = 0x3DF698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DF6A0u);
        ctx->pc = 0x3DF69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF698u;
            // 0x3df69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DF6A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DF6A0u; }
            if (ctx->pc != 0x3DF6A0u) { return; }
        }
        }
    }
    ctx->pc = 0x3DF6A0u;
label_3df6a0:
    // 0x3df6a0: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x3df6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_3df6a4:
    // 0x3df6a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3df6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df6a8:
    // 0x3df6a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3df6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3df6ac:
    // 0x3df6ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3df6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3df6b0:
    // 0x3df6b0: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x3df6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
label_3df6b4:
    // 0x3df6b4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3df6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3df6b8:
    // 0x3df6b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3df6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3df6bc:
    // 0x3df6bc: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x3df6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_3df6c0:
    // 0x3df6c0: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x3df6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3df6c4:
    // 0x3df6c4: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x3df6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_3df6c8:
    // 0x3df6c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3df6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3df6cc:
    // 0x3df6cc: 0xc0c5eec  jal         func_317BB0
label_3df6d0:
    if (ctx->pc == 0x3DF6D0u) {
        ctx->pc = 0x3DF6D0u;
            // 0x3df6d0: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x3DF6D4u;
        goto label_3df6d4;
    }
    ctx->pc = 0x3DF6CCu;
    SET_GPR_U32(ctx, 31, 0x3DF6D4u);
    ctx->pc = 0x3DF6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF6CCu;
            // 0x3df6d0: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317BB0u;
    if (runtime->hasFunction(0x317BB0u)) {
        auto targetFn = runtime->lookupFunction(0x317BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF6D4u; }
        if (ctx->pc != 0x3DF6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00317BB0_0x317bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF6D4u; }
        if (ctx->pc != 0x3DF6D4u) { return; }
    }
    ctx->pc = 0x3DF6D4u;
label_3df6d4:
    // 0x3df6d4: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x3df6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_3df6d8:
    // 0x3df6d8: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x3df6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3df6dc:
    // 0x3df6dc: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_3df6e0:
    if (ctx->pc == 0x3DF6E0u) {
        ctx->pc = 0x3DF6E0u;
            // 0x3df6e0: 0x8e420034  lw          $v0, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->pc = 0x3DF6E4u;
        goto label_3df6e4;
    }
    ctx->pc = 0x3DF6DCu;
    {
        const bool branch_taken_0x3df6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df6dc) {
            ctx->pc = 0x3DF6E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF6DCu;
            // 0x3df6e0: 0x8e420034  lw          $v0, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF78Cu;
            goto label_3df78c;
        }
    }
    ctx->pc = 0x3DF6E4u;
label_3df6e4:
    // 0x3df6e4: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x3df6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3df6e8:
    // 0x3df6e8: 0xc6430038  lwc1        $f3, 0x38($s2)
    ctx->pc = 0x3df6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3df6ec:
    // 0x3df6ec: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x3df6ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df6f0:
    // 0x3df6f0: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
label_3df6f4:
    if (ctx->pc == 0x3DF6F4u) {
        ctx->pc = 0x3DF6F4u;
            // 0x3df6f4: 0x3c0241a0  lui         $v0, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
        ctx->pc = 0x3DF6F8u;
        goto label_3df6f8;
    }
    ctx->pc = 0x3DF6F0u;
    {
        const bool branch_taken_0x3df6f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df6f0) {
            ctx->pc = 0x3DF6F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF6F0u;
            // 0x3df6f4: 0x3c0241a0  lui         $v0, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF73Cu;
            goto label_3df73c;
        }
    }
    ctx->pc = 0x3DF6F8u;
label_3df6f8:
    // 0x3df6f8: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x3df6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3df6fc:
    // 0x3df6fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3df6fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3df700:
    // 0x3df700: 0x0  nop
    ctx->pc = 0x3df700u;
    // NOP
label_3df704:
    // 0x3df704: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3df704u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df708:
    // 0x3df708: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_3df70c:
    if (ctx->pc == 0x3DF70Cu) {
        ctx->pc = 0x3DF710u;
        goto label_3df710;
    }
    ctx->pc = 0x3DF708u;
    {
        const bool branch_taken_0x3df708 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df708) {
            ctx->pc = 0x3DF738u;
            goto label_3df738;
        }
    }
    ctx->pc = 0x3DF710u;
label_3df710:
    // 0x3df710: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3df710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3df714:
    // 0x3df714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3df714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3df718:
    // 0x3df718: 0x0  nop
    ctx->pc = 0x3df718u;
    // NOP
label_3df71c:
    // 0x3df71c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3df71cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df720:
    // 0x3df720: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3df724:
    if (ctx->pc == 0x3DF724u) {
        ctx->pc = 0x3DF724u;
            // 0x3df724: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x3DF728u;
        goto label_3df728;
    }
    ctx->pc = 0x3DF720u;
    {
        const bool branch_taken_0x3df720 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df720) {
            ctx->pc = 0x3DF724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF720u;
            // 0x3df724: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF730u;
            goto label_3df730;
        }
    }
    ctx->pc = 0x3DF728u;
label_3df728:
    // 0x3df728: 0x10000017  b           . + 4 + (0x17 << 2)
label_3df72c:
    if (ctx->pc == 0x3DF72Cu) {
        ctx->pc = 0x3DF72Cu;
            // 0x3df72c: 0xe6430044  swc1        $f3, 0x44($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->pc = 0x3DF730u;
        goto label_3df730;
    }
    ctx->pc = 0x3DF728u;
    {
        const bool branch_taken_0x3df728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF728u;
            // 0x3df72c: 0xe6430044  swc1        $f3, 0x44($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df728) {
            ctx->pc = 0x3DF788u;
            goto label_3df788;
        }
    }
    ctx->pc = 0x3DF730u;
label_3df730:
    // 0x3df730: 0x10000015  b           . + 4 + (0x15 << 2)
label_3df734:
    if (ctx->pc == 0x3DF734u) {
        ctx->pc = 0x3DF734u;
            // 0x3df734: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->pc = 0x3DF738u;
        goto label_3df738;
    }
    ctx->pc = 0x3DF730u;
    {
        const bool branch_taken_0x3df730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF730u;
            // 0x3df734: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df730) {
            ctx->pc = 0x3DF788u;
            goto label_3df788;
        }
    }
    ctx->pc = 0x3DF738u;
label_3df738:
    // 0x3df738: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3df738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3df73c:
    // 0x3df73c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3df73cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3df740:
    // 0x3df740: 0x0  nop
    ctx->pc = 0x3df740u;
    // NOP
label_3df744:
    // 0x3df744: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3df744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3df748:
    // 0x3df748: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x3df748u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df74c:
    // 0x3df74c: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_3df750:
    if (ctx->pc == 0x3DF750u) {
        ctx->pc = 0x3DF750u;
            // 0x3df750: 0xe6430044  swc1        $f3, 0x44($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->pc = 0x3DF754u;
        goto label_3df754;
    }
    ctx->pc = 0x3DF74Cu;
    {
        const bool branch_taken_0x3df74c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df74c) {
            ctx->pc = 0x3DF750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF74Cu;
            // 0x3df750: 0xe6430044  swc1        $f3, 0x44($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF788u;
            goto label_3df788;
        }
    }
    ctx->pc = 0x3DF754u;
label_3df754:
    // 0x3df754: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x3df754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3df758:
    // 0x3df758: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3df758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3df75c:
    // 0x3df75c: 0x0  nop
    ctx->pc = 0x3df75cu;
    // NOP
label_3df760:
    // 0x3df760: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3df760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df764:
    // 0x3df764: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_3df768:
    if (ctx->pc == 0x3DF768u) {
        ctx->pc = 0x3DF76Cu;
        goto label_3df76c;
    }
    ctx->pc = 0x3DF764u;
    {
        const bool branch_taken_0x3df764 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df764) {
            ctx->pc = 0x3DF784u;
            goto label_3df784;
        }
    }
    ctx->pc = 0x3DF76Cu;
label_3df76c:
    // 0x3df76c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3df76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3df770:
    // 0x3df770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3df770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3df774:
    // 0x3df774: 0x0  nop
    ctx->pc = 0x3df774u;
    // NOP
label_3df778:
    // 0x3df778: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3df778u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3df77c:
    // 0x3df77c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3df780:
    if (ctx->pc == 0x3DF780u) {
        ctx->pc = 0x3DF780u;
            // 0x3df780: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->pc = 0x3DF784u;
        goto label_3df784;
    }
    ctx->pc = 0x3DF77Cu;
    {
        const bool branch_taken_0x3df77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF77Cu;
            // 0x3df780: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df77c) {
            ctx->pc = 0x3DF788u;
            goto label_3df788;
        }
    }
    ctx->pc = 0x3DF784u;
label_3df784:
    // 0x3df784: 0xe6430044  swc1        $f3, 0x44($s2)
    ctx->pc = 0x3df784u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_3df788:
    // 0x3df788: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x3df788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3df78c:
    // 0x3df78c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3df78cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3df790:
    // 0x3df790: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3df790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3df794:
    // 0x3df794: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3df794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df798:
    // 0x3df798: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_3df79c:
    if (ctx->pc == 0x3DF79Cu) {
        ctx->pc = 0x3DF79Cu;
            // 0x3df79c: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->pc = 0x3DF7A0u;
        goto label_3df7a0;
    }
    ctx->pc = 0x3DF798u;
    {
        const bool branch_taken_0x3df798 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df798) {
            ctx->pc = 0x3DF79Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF798u;
            // 0x3df79c: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF7C8u;
            goto label_3df7c8;
        }
    }
    ctx->pc = 0x3DF7A0u;
label_3df7a0:
    // 0x3df7a0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x3df7a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3df7a4:
    // 0x3df7a4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_3df7a8:
    if (ctx->pc == 0x3DF7A8u) {
        ctx->pc = 0x3DF7ACu;
        goto label_3df7ac;
    }
    ctx->pc = 0x3DF7A4u;
    {
        const bool branch_taken_0x3df7a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3df7a4) {
            ctx->pc = 0x3DF7C4u;
            goto label_3df7c4;
        }
    }
    ctx->pc = 0x3DF7ACu;
label_3df7ac:
    // 0x3df7ac: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x3df7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3df7b0:
    // 0x3df7b0: 0x3c024366  lui         $v0, 0x4366
    ctx->pc = 0x3df7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17254 << 16));
label_3df7b4:
    // 0x3df7b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3df7b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3df7b8:
    // 0x3df7b8: 0x0  nop
    ctx->pc = 0x3df7b8u;
    // NOP
label_3df7bc:
    // 0x3df7bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3df7bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3df7c0:
    // 0x3df7c0: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x3df7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_3df7c4:
    // 0x3df7c4: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x3df7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_3df7c8:
    // 0x3df7c8: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x3df7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_3df7cc:
    // 0x3df7cc: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x3df7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3df7d0:
    // 0x3df7d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3df7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3df7d4:
    // 0x3df7d4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3df7d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3df7d8:
    // 0x3df7d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3df7d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3df7dc:
    // 0x3df7dc: 0x0  nop
    ctx->pc = 0x3df7dcu;
    // NOP
label_3df7e0:
    // 0x3df7e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3df7e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3df7e4:
    // 0x3df7e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3df7e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3df7e8:
    // 0x3df7e8: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x3df7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_3df7ec:
    // 0x3df7ec: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x3df7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3df7f0:
    // 0x3df7f0: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x3df7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_3df7f4:
    // 0x3df7f4: 0x8c423da0  lw          $v0, 0x3DA0($v0)
    ctx->pc = 0x3df7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3df7f8:
    // 0x3df7f8: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_3df7fc:
    if (ctx->pc == 0x3DF7FCu) {
        ctx->pc = 0x3DF800u;
        goto label_3df800;
    }
    ctx->pc = 0x3DF7F8u;
    {
        const bool branch_taken_0x3df7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df7f8) {
            ctx->pc = 0x3DF8F8u;
            goto label_3df8f8;
        }
    }
    ctx->pc = 0x3DF800u;
label_3df800:
    // 0x3df800: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x3df800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3df804:
    // 0x3df804: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3df804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3df808:
    // 0x3df808: 0x8e230d98  lw          $v1, 0xD98($s1)
    ctx->pc = 0x3df808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_3df80c:
    // 0x3df80c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3df80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3df810:
    // 0x3df810: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x3df810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_3df814:
    // 0x3df814: 0x602027  not         $a0, $v1
    ctx->pc = 0x3df814u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_3df818:
    // 0x3df818: 0x8c4302e0  lw          $v1, 0x2E0($v0)
    ctx->pc = 0x3df818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
label_3df81c:
    // 0x3df81c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3df81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3df820:
    // 0x3df820: 0xac4302e0  sw          $v1, 0x2E0($v0)
    ctx->pc = 0x3df820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 736), GPR_U32(ctx, 3));
label_3df824:
    // 0x3df824: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x3df824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_3df828:
    // 0x3df828: 0x8c4302c8  lw          $v1, 0x2C8($v0)
    ctx->pc = 0x3df828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 712)));
label_3df82c:
    // 0x3df82c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x3df82cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3df830:
    // 0x3df830: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_3df834:
    if (ctx->pc == 0x3DF834u) {
        ctx->pc = 0x3DF834u;
            // 0x3df834: 0x8e250d98  lw          $a1, 0xD98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
        ctx->pc = 0x3DF838u;
        goto label_3df838;
    }
    ctx->pc = 0x3DF830u;
    {
        const bool branch_taken_0x3df830 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF830u;
            // 0x3df834: 0x8e250d98  lw          $a1, 0xD98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df830) {
            ctx->pc = 0x3DF864u;
            goto label_3df864;
        }
    }
    ctx->pc = 0x3DF838u;
label_3df838:
    // 0x3df838: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x3df838u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_3df83c:
    // 0x3df83c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_3df840:
    if (ctx->pc == 0x3DF840u) {
        ctx->pc = 0x3DF840u;
            // 0x3df840: 0xac4402c8  sw          $a0, 0x2C8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 712), GPR_U32(ctx, 4));
        ctx->pc = 0x3DF844u;
        goto label_3df844;
    }
    ctx->pc = 0x3DF83Cu;
    {
        const bool branch_taken_0x3df83c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF83Cu;
            // 0x3df840: 0xac4402c8  sw          $a0, 0x2C8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 712), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df83c) {
            ctx->pc = 0x3DF84Cu;
            goto label_3df84c;
        }
    }
    ctx->pc = 0x3DF844u;
label_3df844:
    // 0x3df844: 0xa04602db  sb          $a2, 0x2DB($v0)
    ctx->pc = 0x3df844u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 731), (uint8_t)GPR_U32(ctx, 6));
label_3df848:
    // 0x3df848: 0xac4502dc  sw          $a1, 0x2DC($v0)
    ctx->pc = 0x3df848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 732), GPR_U32(ctx, 5));
label_3df84c:
    // 0x3df84c: 0x8c4302e0  lw          $v1, 0x2E0($v0)
    ctx->pc = 0x3df84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
label_3df850:
    // 0x3df850: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3df850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3df854:
    // 0x3df854: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x3df854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_3df858:
    // 0x3df858: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3df858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3df85c:
    // 0x3df85c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3df860:
    if (ctx->pc == 0x3DF860u) {
        ctx->pc = 0x3DF860u;
            // 0x3df860: 0xac4302e0  sw          $v1, 0x2E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 736), GPR_U32(ctx, 3));
        ctx->pc = 0x3DF864u;
        goto label_3df864;
    }
    ctx->pc = 0x3DF85Cu;
    {
        const bool branch_taken_0x3df85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF85Cu;
            // 0x3df860: 0xac4302e0  sw          $v1, 0x2E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 736), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df85c) {
            ctx->pc = 0x3DF87Cu;
            goto label_3df87c;
        }
    }
    ctx->pc = 0x3DF864u;
label_3df864:
    // 0x3df864: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
label_3df868:
    if (ctx->pc == 0x3DF868u) {
        ctx->pc = 0x3DF868u;
            // 0x3df868: 0x8e460048  lw          $a2, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->pc = 0x3DF86Cu;
        goto label_3df86c;
    }
    ctx->pc = 0x3DF864u;
    {
        const bool branch_taken_0x3df864 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3df864) {
            ctx->pc = 0x3DF868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF864u;
            // 0x3df868: 0x8e460048  lw          $a2, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF880u;
            goto label_3df880;
        }
    }
    ctx->pc = 0x3DF86Cu;
label_3df86c:
    // 0x3df86c: 0x8c4302e0  lw          $v1, 0x2E0($v0)
    ctx->pc = 0x3df86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
label_3df870:
    // 0x3df870: 0xa62004  sllv        $a0, $a2, $a1
    ctx->pc = 0x3df870u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_3df874:
    // 0x3df874: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3df874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3df878:
    // 0x3df878: 0xac4302e0  sw          $v1, 0x2E0($v0)
    ctx->pc = 0x3df878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 736), GPR_U32(ctx, 3));
label_3df87c:
    // 0x3df87c: 0x8e460048  lw          $a2, 0x48($s2)
    ctx->pc = 0x3df87cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_3df880:
    // 0x3df880: 0x58c0001b  blezl       $a2, . + 4 + (0x1B << 2)
label_3df884:
    if (ctx->pc == 0x3DF884u) {
        ctx->pc = 0x3DF884u;
            // 0x3df884: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DF888u;
        goto label_3df888;
    }
    ctx->pc = 0x3DF880u;
    {
        const bool branch_taken_0x3df880 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x3df880) {
            ctx->pc = 0x3DF884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF880u;
            // 0x3df884: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF8F0u;
            goto label_3df8f0;
        }
    }
    ctx->pc = 0x3DF888u;
label_3df888:
    // 0x3df888: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3df888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3df88c:
    // 0x3df88c: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x3df88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_3df890:
    // 0x3df890: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3df890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3df894:
    // 0x3df894: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3df894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3df898:
    // 0x3df898: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x3df898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_3df89c:
    // 0x3df89c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3df89cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3df8a0:
    // 0x3df8a0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3df8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3df8a4:
    // 0x3df8a4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_3df8a8:
    if (ctx->pc == 0x3DF8A8u) {
        ctx->pc = 0x3DF8A8u;
            // 0x3df8a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3DF8ACu;
        goto label_3df8ac;
    }
    ctx->pc = 0x3DF8A4u;
    {
        const bool branch_taken_0x3df8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF8A4u;
            // 0x3df8a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df8a4) {
            ctx->pc = 0x3DF8F0u;
            goto label_3df8f0;
        }
    }
    ctx->pc = 0x3DF8ACu;
label_3df8ac:
    // 0x3df8ac: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x3df8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
label_3df8b0:
    // 0x3df8b0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3df8b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_3df8b4:
    // 0x3df8b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3df8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3df8b8:
    // 0x3df8b8: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x3df8b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3df8bc:
    // 0x3df8bc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_3df8c0:
    if (ctx->pc == 0x3DF8C0u) {
        ctx->pc = 0x3DF8C4u;
        goto label_3df8c4;
    }
    ctx->pc = 0x3DF8BCu;
    {
        const bool branch_taken_0x3df8bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df8bc) {
            ctx->pc = 0x3DF8F0u;
            goto label_3df8f0;
        }
    }
    ctx->pc = 0x3DF8C4u;
label_3df8c4:
    // 0x3df8c4: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x3df8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3df8c8:
    // 0x3df8c8: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x3df8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_3df8cc:
    // 0x3df8cc: 0x8c44007c  lw          $a0, 0x7C($v0)
    ctx->pc = 0x3df8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3df8d0:
    // 0x3df8d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3df8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3df8d4:
    // 0x3df8d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3df8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3df8d8:
    // 0x3df8d8: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x3df8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_3df8dc:
    // 0x3df8dc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3df8dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3df8e0:
    // 0x3df8e0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3df8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3df8e4:
    // 0x3df8e4: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_3df8e8:
    if (ctx->pc == 0x3DF8E8u) {
        ctx->pc = 0x3DF8E8u;
            // 0x3df8e8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x3DF8ECu;
        goto label_3df8ec;
    }
    ctx->pc = 0x3DF8E4u;
    {
        const bool branch_taken_0x3df8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF8E4u;
            // 0x3df8e8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df8e4) {
            ctx->pc = 0x3DF8ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3df8ac;
        }
    }
    ctx->pc = 0x3DF8ECu;
label_3df8ec:
    // 0x3df8ec: 0x0  nop
    ctx->pc = 0x3df8ecu;
    // NOP
label_3df8f0:
    // 0x3df8f0: 0x10000011  b           . + 4 + (0x11 << 2)
label_3df8f4:
    if (ctx->pc == 0x3DF8F4u) {
        ctx->pc = 0x3DF8F4u;
            // 0x3df8f4: 0xae470020  sw          $a3, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 7));
        ctx->pc = 0x3DF8F8u;
        goto label_3df8f8;
    }
    ctx->pc = 0x3DF8F0u;
    {
        const bool branch_taken_0x3df8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF8F0u;
            // 0x3df8f4: 0xae470020  sw          $a3, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df8f0) {
            ctx->pc = 0x3DF938u;
            goto label_3df938;
        }
    }
    ctx->pc = 0x3DF8F8u;
label_3df8f8:
    // 0x3df8f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3df8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3df8fc:
    // 0x3df8fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3df8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3df900:
    // 0x3df900: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3df900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3df904:
    // 0x3df904: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x3df904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3df908:
    // 0x3df908: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_3df90c:
    if (ctx->pc == 0x3DF90Cu) {
        ctx->pc = 0x3DF90Cu;
            // 0x3df90c: 0x8e420048  lw          $v0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->pc = 0x3DF910u;
        goto label_3df910;
    }
    ctx->pc = 0x3DF908u;
    {
        const bool branch_taken_0x3df908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3df908) {
            ctx->pc = 0x3DF90Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF908u;
            // 0x3df90c: 0x8e420048  lw          $v0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF920u;
            goto label_3df920;
        }
    }
    ctx->pc = 0x3DF910u;
label_3df910:
    // 0x3df910: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3df910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3df914:
    // 0x3df914: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
label_3df918:
    if (ctx->pc == 0x3DF918u) {
        ctx->pc = 0x3DF918u;
            // 0x3df918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DF91Cu;
        goto label_3df91c;
    }
    ctx->pc = 0x3DF914u;
    {
        const bool branch_taken_0x3df914 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3df914) {
            ctx->pc = 0x3DF918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF914u;
            // 0x3df918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DF93Cu;
            goto label_3df93c;
        }
    }
    ctx->pc = 0x3DF91Cu;
label_3df91c:
    // 0x3df91c: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x3df91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_3df920:
    // 0x3df920: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3df920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3df924:
    // 0x3df924: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_3df928:
    if (ctx->pc == 0x3DF928u) {
        ctx->pc = 0x3DF928u;
            // 0x3df928: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->pc = 0x3DF92Cu;
        goto label_3df92c;
    }
    ctx->pc = 0x3DF924u;
    {
        const bool branch_taken_0x3df924 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3DF928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF924u;
            // 0x3df928: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df924) {
            ctx->pc = 0x3DF934u;
            goto label_3df934;
        }
    }
    ctx->pc = 0x3DF92Cu;
label_3df92c:
    // 0x3df92c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3df92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3df930:
    // 0x3df930: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3df930u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3df934:
    // 0x3df934: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x3df934u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_3df938:
    // 0x3df938: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3df938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3df93c:
    // 0x3df93c: 0xc0ca718  jal         func_329C60
label_3df940:
    if (ctx->pc == 0x3DF940u) {
        ctx->pc = 0x3DF944u;
        goto label_3df944;
    }
    ctx->pc = 0x3DF93Cu;
    SET_GPR_U32(ctx, 31, 0x3DF944u);
    ctx->pc = 0x329C60u;
    if (runtime->hasFunction(0x329C60u)) {
        auto targetFn = runtime->lookupFunction(0x329C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF944u; }
        if (ctx->pc != 0x3DF944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329C60_0x329c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF944u; }
        if (ctx->pc != 0x3DF944u) { return; }
    }
    ctx->pc = 0x3DF944u;
label_3df944:
    // 0x3df944: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3df944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3df948:
    // 0x3df948: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3df948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3df94c:
    // 0x3df94c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3df94cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3df950:
    // 0x3df950: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3df950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3df954:
    // 0x3df954: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3df954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3df958:
    // 0x3df958: 0x3e00008  jr          $ra
label_3df95c:
    if (ctx->pc == 0x3DF95Cu) {
        ctx->pc = 0x3DF95Cu;
            // 0x3df95c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3DF960u;
        goto label_3df960;
    }
    ctx->pc = 0x3DF958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF958u;
            // 0x3df95c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DF960u;
label_3df960:
    // 0x3df960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3df960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3df964:
    // 0x3df964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3df964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3df968:
    // 0x3df968: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3df968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3df96c:
    // 0x3df96c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3df96cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3df970:
    // 0x3df970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3df970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3df974:
    // 0x3df974: 0xc0be258  jal         func_2F8960
label_3df978:
    if (ctx->pc == 0x3DF978u) {
        ctx->pc = 0x3DF978u;
            // 0x3df978: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->pc = 0x3DF97Cu;
        goto label_3df97c;
    }
    ctx->pc = 0x3DF974u;
    SET_GPR_U32(ctx, 31, 0x3DF97Cu);
    ctx->pc = 0x3DF978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF974u;
            // 0x3df978: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8960u;
    if (runtime->hasFunction(0x2F8960u)) {
        auto targetFn = runtime->lookupFunction(0x2F8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF97Cu; }
        if (ctx->pc != 0x3DF97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8960_0x2f8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF97Cu; }
        if (ctx->pc != 0x3DF97Cu) { return; }
    }
    ctx->pc = 0x3DF97Cu;
label_3df97c:
    // 0x3df97c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3df97cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3df980:
    // 0x3df980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3df980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3df984:
    // 0x3df984: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x3df984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_3df988:
    // 0x3df988: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3df988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3df98c:
    // 0x3df98c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3df98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3df990:
    // 0x3df990: 0x320f809  jalr        $t9
label_3df994:
    if (ctx->pc == 0x3DF994u) {
        ctx->pc = 0x3DF994u;
            // 0x3df994: 0xc6140de8  lwc1        $f20, 0xDE8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x3DF998u;
        goto label_3df998;
    }
    ctx->pc = 0x3DF990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DF998u);
        ctx->pc = 0x3DF994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF990u;
            // 0x3df994: 0xc6140de8  lwc1        $f20, 0xDE8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DF998u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DF998u; }
            if (ctx->pc != 0x3DF998u) { return; }
        }
        }
    }
    ctx->pc = 0x3DF998u;
label_3df998:
    // 0x3df998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3df998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3df99c:
    // 0x3df99c: 0xc0c0e74  jal         func_3039D0
label_3df9a0:
    if (ctx->pc == 0x3DF9A0u) {
        ctx->pc = 0x3DF9A0u;
            // 0x3df9a0: 0xe6140de8  swc1        $f20, 0xDE8($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
        ctx->pc = 0x3DF9A4u;
        goto label_3df9a4;
    }
    ctx->pc = 0x3DF99Cu;
    SET_GPR_U32(ctx, 31, 0x3DF9A4u);
    ctx->pc = 0x3DF9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF99Cu;
            // 0x3df9a0: 0xe6140de8  swc1        $f20, 0xDE8($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3039D0u;
    if (runtime->hasFunction(0x3039D0u)) {
        auto targetFn = runtime->lookupFunction(0x3039D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF9A4u; }
        if (ctx->pc != 0x3DF9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003039D0_0x3039d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF9A4u; }
        if (ctx->pc != 0x3DF9A4u) { return; }
    }
    ctx->pc = 0x3DF9A4u;
label_3df9a4:
    // 0x3df9a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3df9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3df9a8:
    // 0x3df9a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3df9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3df9ac:
    // 0x3df9ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3df9acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3df9b0:
    // 0x3df9b0: 0x3e00008  jr          $ra
label_3df9b4:
    if (ctx->pc == 0x3DF9B4u) {
        ctx->pc = 0x3DF9B4u;
            // 0x3df9b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3DF9B8u;
        goto label_3df9b8;
    }
    ctx->pc = 0x3DF9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF9B0u;
            // 0x3df9b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DF9B8u;
label_3df9b8:
    // 0x3df9b8: 0x0  nop
    ctx->pc = 0x3df9b8u;
    // NOP
label_3df9bc:
    // 0x3df9bc: 0x0  nop
    ctx->pc = 0x3df9bcu;
    // NOP
label_3df9c0:
    // 0x3df9c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3df9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3df9c4:
    // 0x3df9c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3df9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3df9c8:
    // 0x3df9c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3df9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3df9cc:
    // 0x3df9cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3df9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3df9d0:
    // 0x3df9d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3df9d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3df9d4:
    // 0x3df9d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3df9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3df9d8:
    // 0x3df9d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3df9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3df9dc:
    // 0x3df9dc: 0x8c920550  lw          $s2, 0x550($a0)
    ctx->pc = 0x3df9dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_3df9e0:
    // 0x3df9e0: 0x26700580  addiu       $s0, $s3, 0x580
    ctx->pc = 0x3df9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1408));
label_3df9e4:
    // 0x3df9e4: 0x8c910d74  lw          $s1, 0xD74($a0)
    ctx->pc = 0x3df9e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3444)));
label_3df9e8:
    // 0x3df9e8: 0xc0754b4  jal         func_1D52D0
label_3df9ec:
    if (ctx->pc == 0x3DF9ECu) {
        ctx->pc = 0x3DF9ECu;
            // 0x3df9ec: 0x26640440  addiu       $a0, $s3, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
        ctx->pc = 0x3DF9F0u;
        goto label_3df9f0;
    }
    ctx->pc = 0x3DF9E8u;
    SET_GPR_U32(ctx, 31, 0x3DF9F0u);
    ctx->pc = 0x3DF9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DF9E8u;
            // 0x3df9ec: 0x26640440  addiu       $a0, $s3, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF9F0u; }
        if (ctx->pc != 0x3DF9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DF9F0u; }
        if (ctx->pc != 0x3DF9F0u) { return; }
    }
    ctx->pc = 0x3DF9F0u;
label_3df9f0:
    // 0x3df9f0: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x3df9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_3df9f4:
    // 0x3df9f4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3df9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3df9f8:
    // 0x3df9f8: 0xae660dbc  sw          $a2, 0xDBC($s3)
    ctx->pc = 0x3df9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3516), GPR_U32(ctx, 6));
label_3df9fc:
    // 0x3df9fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3df9fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dfa00:
    // 0x3dfa00: 0xae660694  sw          $a2, 0x694($s3)
    ctx->pc = 0x3dfa00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1684), GPR_U32(ctx, 6));
label_3dfa04:
    // 0x3dfa04: 0xc441c6b8  lwc1        $f1, -0x3948($v0)
    ctx->pc = 0x3dfa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dfa08:
    // 0x3dfa08: 0x8e650550  lw          $a1, 0x550($s3)
    ctx->pc = 0x3dfa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1360)));
label_3dfa0c:
    // 0x3dfa0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dfa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dfa10:
    // 0x3dfa10: 0x26640320  addiu       $a0, $s3, 0x320
    ctx->pc = 0x3dfa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
label_3dfa14:
    // 0x3dfa14: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3dfa14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3dfa18:
    // 0x3dfa18: 0xaca6002c  sw          $a2, 0x2C($a1)
    ctx->pc = 0x3dfa18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 6));
label_3dfa1c:
    // 0x3dfa1c: 0xc4401360  lwc1        $f0, 0x1360($v0)
    ctx->pc = 0x3dfa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3dfa20:
    // 0x3dfa20: 0xe6610ddc  swc1        $f1, 0xDDC($s3)
    ctx->pc = 0x3dfa20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3548), bits); }
label_3dfa24:
    // 0x3dfa24: 0xae600dc4  sw          $zero, 0xDC4($s3)
    ctx->pc = 0x3dfa24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3524), GPR_U32(ctx, 0));
label_3dfa28:
    // 0x3dfa28: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3dfa28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3dfa2c:
    // 0x3dfa2c: 0xae030118  sw          $v1, 0x118($s0)
    ctx->pc = 0x3dfa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 3));
label_3dfa30:
    // 0x3dfa30: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3dfa30u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3dfa34:
    // 0x3dfa34: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x3dfa34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_3dfa38:
    // 0x3dfa38: 0xc04cbd8  jal         func_132F60
label_3dfa3c:
    if (ctx->pc == 0x3DFA3Cu) {
        ctx->pc = 0x3DFA3Cu;
            // 0x3dfa3c: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x3DFA40u;
        goto label_3dfa40;
    }
    ctx->pc = 0x3DFA38u;
    SET_GPR_U32(ctx, 31, 0x3DFA40u);
    ctx->pc = 0x3DFA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFA38u;
            // 0x3dfa3c: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFA40u; }
        if (ctx->pc != 0x3DFA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFA40u; }
        if (ctx->pc != 0x3DFA40u) { return; }
    }
    ctx->pc = 0x3DFA40u;
label_3dfa40:
    // 0x3dfa40: 0x8e650da0  lw          $a1, 0xDA0($s3)
    ctx->pc = 0x3dfa40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3488)));
label_3dfa44:
    // 0x3dfa44: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x3dfa44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_3dfa48:
    // 0x3dfa48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3dfa48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dfa4c:
    // 0x3dfa4c: 0x26630890  addiu       $v1, $s3, 0x890
    ctx->pc = 0x3dfa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
label_3dfa50:
    // 0x3dfa50: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3dfa50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dfa54:
    // 0x3dfa54: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x3dfa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_3dfa58:
    // 0x3dfa58: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x3dfa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_3dfa5c:
    // 0x3dfa5c: 0x26660560  addiu       $a2, $s3, 0x560
    ctx->pc = 0x3dfa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_3dfa60:
    // 0x3dfa60: 0xae620da0  sw          $v0, 0xDA0($s3)
    ctx->pc = 0x3dfa60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3488), GPR_U32(ctx, 2));
label_3dfa64:
    // 0x3dfa64: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x3dfa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_3dfa68:
    // 0x3dfa68: 0xc0c6250  jal         func_318940
label_3dfa6c:
    if (ctx->pc == 0x3DFA6Cu) {
        ctx->pc = 0x3DFA6Cu;
            // 0x3dfa6c: 0xae2702b0  sw          $a3, 0x2B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 7));
        ctx->pc = 0x3DFA70u;
        goto label_3dfa70;
    }
    ctx->pc = 0x3DFA68u;
    SET_GPR_U32(ctx, 31, 0x3DFA70u);
    ctx->pc = 0x3DFA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFA68u;
            // 0x3dfa6c: 0xae2702b0  sw          $a3, 0x2B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFA70u; }
        if (ctx->pc != 0x3DFA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFA70u; }
        if (ctx->pc != 0x3DFA70u) { return; }
    }
    ctx->pc = 0x3DFA70u;
label_3dfa70:
    // 0x3dfa70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3dfa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dfa74:
    // 0x3dfa74: 0xc07649c  jal         func_1D9270
label_3dfa78:
    if (ctx->pc == 0x3DFA78u) {
        ctx->pc = 0x3DFA78u;
            // 0x3dfa78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DFA7Cu;
        goto label_3dfa7c;
    }
    ctx->pc = 0x3DFA74u;
    SET_GPR_U32(ctx, 31, 0x3DFA7Cu);
    ctx->pc = 0x3DFA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFA74u;
            // 0x3dfa78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFA7Cu; }
        if (ctx->pc != 0x3DFA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFA7Cu; }
        if (ctx->pc != 0x3DFA7Cu) { return; }
    }
    ctx->pc = 0x3DFA7Cu;
label_3dfa7c:
    // 0x3dfa7c: 0x8e630c30  lw          $v1, 0xC30($s3)
    ctx->pc = 0x3dfa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3120)));
label_3dfa80:
    // 0x3dfa80: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x3dfa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_3dfa84:
    // 0x3dfa84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3dfa84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3dfa88:
    // 0x3dfa88: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x3dfa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_3dfa8c:
    // 0x3dfa8c: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x3dfa8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_3dfa90:
    // 0x3dfa90: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3dfa90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_3dfa94:
    // 0x3dfa94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dfa94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dfa98:
    // 0x3dfa98: 0x801826  xor         $v1, $a0, $zero
    ctx->pc = 0x3dfa98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
label_3dfa9c:
    // 0x3dfa9c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3dfa9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3dfaa0:
    // 0x3dfaa0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3dfaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3dfaa4:
    // 0x3dfaa4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3dfaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3dfaa8:
    // 0x3dfaa8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3dfaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3dfaac:
    // 0x3dfaac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3dfaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3dfab0:
    // 0x3dfab0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3dfab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3dfab4:
    // 0x3dfab4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3dfab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3dfab8:
    // 0x3dfab8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3dfab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3dfabc:
    // 0x3dfabc: 0x0  nop
    ctx->pc = 0x3dfabcu;
    // NOP
label_3dfac0:
    // 0x3dfac0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3dfac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3dfac4:
    // 0x3dfac4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3dfac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3dfac8:
    // 0x3dfac8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3dfac8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3dfacc:
    // 0x3dfacc: 0xe6600de0  swc1        $f0, 0xDE0($s3)
    ctx->pc = 0x3dfaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3552), bits); }
label_3dfad0:
    // 0x3dfad0: 0x8e620c30  lw          $v0, 0xC30($s3)
    ctx->pc = 0x3dfad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3120)));
label_3dfad4:
    // 0x3dfad4: 0x8442002a  lh          $v0, 0x2A($v0)
    ctx->pc = 0x3dfad4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
label_3dfad8:
    // 0x3dfad8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_3dfadc:
    if (ctx->pc == 0x3DFADCu) {
        ctx->pc = 0x3DFADCu;
            // 0x3dfadc: 0xc6600de0  lwc1        $f0, 0xDE0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3DFAE0u;
        goto label_3dfae0;
    }
    ctx->pc = 0x3DFAD8u;
    {
        const bool branch_taken_0x3dfad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfad8) {
            ctx->pc = 0x3DFADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFAD8u;
            // 0x3dfadc: 0xc6600de0  lwc1        $f0, 0xDE0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DFB18u;
            goto label_3dfb18;
        }
    }
    ctx->pc = 0x3DFAE0u;
label_3dfae0:
    // 0x3dfae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dfae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dfae4:
    // 0x3dfae4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3dfae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3dfae8:
    // 0x3dfae8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3dfae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3dfaec:
    // 0x3dfaec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3dfaecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3dfaf0:
    // 0x3dfaf0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3dfaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dfaf4:
    // 0x3dfaf4: 0xc6630de0  lwc1        $f3, 0xDE0($s3)
    ctx->pc = 0x3dfaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3dfaf8:
    // 0x3dfaf8: 0xc6620de4  lwc1        $f2, 0xDE4($s3)
    ctx->pc = 0x3dfaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3dfafc:
    // 0x3dfafc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3dfafcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_3dfb00:
    // 0x3dfb00: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x3dfb00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3dfb04:
    // 0x3dfb04: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3dfb04u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3dfb08:
    // 0x3dfb08: 0x0  nop
    ctx->pc = 0x3dfb08u;
    // NOP
label_3dfb0c:
    // 0x3dfb0c: 0x0  nop
    ctx->pc = 0x3dfb0cu;
    // NOP
label_3dfb10:
    // 0x3dfb10: 0x10000002  b           . + 4 + (0x2 << 2)
label_3dfb14:
    if (ctx->pc == 0x3DFB14u) {
        ctx->pc = 0x3DFB14u;
            // 0x3dfb14: 0xe6600de8  swc1        $f0, 0xDE8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3560), bits); }
        ctx->pc = 0x3DFB18u;
        goto label_3dfb18;
    }
    ctx->pc = 0x3DFB10u;
    {
        const bool branch_taken_0x3dfb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFB10u;
            // 0x3dfb14: 0xe6600de8  swc1        $f0, 0xDE8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfb10) {
            ctx->pc = 0x3DFB1Cu;
            goto label_3dfb1c;
        }
    }
    ctx->pc = 0x3DFB18u;
label_3dfb18:
    // 0x3dfb18: 0xe6600de4  swc1        $f0, 0xDE4($s3)
    ctx->pc = 0x3dfb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
label_3dfb1c:
    // 0x3dfb1c: 0x8e660d9c  lw          $a2, 0xD9C($s3)
    ctx->pc = 0x3dfb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3484)));
label_3dfb20:
    // 0x3dfb20: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x3dfb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_3dfb24:
    // 0x3dfb24: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3dfb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3dfb28:
    // 0x3dfb28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dfb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dfb2c:
    // 0x3dfb2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3dfb2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3dfb30:
    // 0x3dfb30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3dfb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3dfb34:
    // 0x3dfb34: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x3dfb34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_3dfb38:
    // 0x3dfb38: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3dfb38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3dfb3c:
    // 0x3dfb3c: 0xae660d9c  sw          $a2, 0xD9C($s3)
    ctx->pc = 0x3dfb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3484), GPR_U32(ctx, 6));
label_3dfb40:
    // 0x3dfb40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3dfb40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dfb44:
    // 0x3dfb44: 0x8242010c  lb          $v0, 0x10C($s2)
    ctx->pc = 0x3dfb44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
label_3dfb48:
    // 0x3dfb48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dfb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dfb4c:
    // 0x3dfb4c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3dfb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3dfb50:
    // 0x3dfb50: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3dfb50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3dfb54:
    // 0x3dfb54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3dfb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3dfb58:
    // 0x3dfb58: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3dfb58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3dfb5c:
    // 0x3dfb5c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3dfb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3dfb60:
    // 0x3dfb60: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x3dfb60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_3dfb64:
    // 0x3dfb64: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x3dfb64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3dfb68:
    // 0x3dfb68: 0x8245010d  lb          $a1, 0x10D($s2)
    ctx->pc = 0x3dfb68u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 269)));
label_3dfb6c:
    // 0x3dfb6c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3dfb6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3dfb70:
    // 0x3dfb70: 0x320f809  jalr        $t9
label_3dfb74:
    if (ctx->pc == 0x3DFB74u) {
        ctx->pc = 0x3DFB74u;
            // 0x3dfb74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB78u;
        goto label_3dfb78;
    }
    ctx->pc = 0x3DFB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DFB78u);
        ctx->pc = 0x3DFB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFB70u;
            // 0x3dfb74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DFB78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DFB78u; }
            if (ctx->pc != 0x3DFB78u) { return; }
        }
        }
    }
    ctx->pc = 0x3DFB78u;
label_3dfb78:
    // 0x3dfb78: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x3dfb78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3dfb7c:
    // 0x3dfb7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3dfb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dfb80:
    // 0x3dfb80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dfb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dfb84:
    // 0x3dfb84: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3dfb84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3dfb88:
    // 0x3dfb88: 0x320f809  jalr        $t9
label_3dfb8c:
    if (ctx->pc == 0x3DFB8Cu) {
        ctx->pc = 0x3DFB8Cu;
            // 0x3dfb8c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB90u;
        goto label_3dfb90;
    }
    ctx->pc = 0x3DFB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DFB90u);
        ctx->pc = 0x3DFB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFB88u;
            // 0x3dfb8c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DFB90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DFB90u; }
            if (ctx->pc != 0x3DFB90u) { return; }
        }
        }
    }
    ctx->pc = 0x3DFB90u;
label_3dfb90:
    // 0x3dfb90: 0xc0c0f84  jal         func_303E10
label_3dfb94:
    if (ctx->pc == 0x3DFB94u) {
        ctx->pc = 0x3DFB94u;
            // 0x3dfb94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DFB98u;
        goto label_3dfb98;
    }
    ctx->pc = 0x3DFB90u;
    SET_GPR_U32(ctx, 31, 0x3DFB98u);
    ctx->pc = 0x3DFB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFB90u;
            // 0x3dfb94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303E10u;
    if (runtime->hasFunction(0x303E10u)) {
        auto targetFn = runtime->lookupFunction(0x303E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFB98u; }
        if (ctx->pc != 0x3DFB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303E10_0x303e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFB98u; }
        if (ctx->pc != 0x3DFB98u) { return; }
    }
    ctx->pc = 0x3DFB98u;
label_3dfb98:
    // 0x3dfb98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3dfb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3dfb9c:
    // 0x3dfb9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3dfb9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dfba0:
    // 0x3dfba0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dfba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dfba4:
    // 0x3dfba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dfba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dfba8:
    // 0x3dfba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dfba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dfbac:
    // 0x3dfbac: 0x3e00008  jr          $ra
label_3dfbb0:
    if (ctx->pc == 0x3DFBB0u) {
        ctx->pc = 0x3DFBB0u;
            // 0x3dfbb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3DFBB4u;
        goto label_3dfbb4;
    }
    ctx->pc = 0x3DFBACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFBACu;
            // 0x3dfbb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DFBB4u;
label_3dfbb4:
    // 0x3dfbb4: 0x0  nop
    ctx->pc = 0x3dfbb4u;
    // NOP
label_3dfbb8:
    // 0x3dfbb8: 0x0  nop
    ctx->pc = 0x3dfbb8u;
    // NOP
label_3dfbbc:
    // 0x3dfbbc: 0x0  nop
    ctx->pc = 0x3dfbbcu;
    // NOP
label_3dfbc0:
    // 0x3dfbc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3dfbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3dfbc4:
    // 0x3dfbc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3dfbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3dfbc8:
    // 0x3dfbc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3dfbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3dfbcc:
    // 0x3dfbcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3dfbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3dfbd0:
    // 0x3dfbd0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3dfbd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dfbd4:
    // 0x3dfbd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dfbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3dfbd8:
    // 0x3dfbd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dfbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3dfbdc:
    // 0x3dfbdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dfbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dfbe0:
    // 0x3dfbe0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3dfbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3dfbe4:
    // 0x3dfbe4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3dfbe8:
    if (ctx->pc == 0x3DFBE8u) {
        ctx->pc = 0x3DFBE8u;
            // 0x3dfbe8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DFBECu;
        goto label_3dfbec;
    }
    ctx->pc = 0x3DFBE4u;
    {
        const bool branch_taken_0x3dfbe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFBE4u;
            // 0x3dfbe8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfbe4) {
            ctx->pc = 0x3DFC28u;
            goto label_3dfc28;
        }
    }
    ctx->pc = 0x3DFBECu;
label_3dfbec:
    // 0x3dfbec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3dfbecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dfbf0:
    // 0x3dfbf0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3dfbf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dfbf4:
    // 0x3dfbf4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3dfbf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dfbf8:
    // 0x3dfbf8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3dfbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3dfbfc:
    // 0x3dfbfc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3dfbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3dfc00:
    // 0x3dfc00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3dfc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3dfc04:
    // 0x3dfc04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3dfc04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3dfc08:
    // 0x3dfc08: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3dfc08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3dfc0c:
    // 0x3dfc0c: 0x320f809  jalr        $t9
label_3dfc10:
    if (ctx->pc == 0x3DFC10u) {
        ctx->pc = 0x3DFC14u;
        goto label_3dfc14;
    }
    ctx->pc = 0x3DFC0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DFC14u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DFC14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DFC14u; }
            if (ctx->pc != 0x3DFC14u) { return; }
        }
        }
    }
    ctx->pc = 0x3DFC14u;
label_3dfc14:
    // 0x3dfc14: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3dfc14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3dfc18:
    // 0x3dfc18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3dfc18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3dfc1c:
    // 0x3dfc1c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3dfc1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3dfc20:
    // 0x3dfc20: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3dfc24:
    if (ctx->pc == 0x3DFC24u) {
        ctx->pc = 0x3DFC24u;
            // 0x3dfc24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3DFC28u;
        goto label_3dfc28;
    }
    ctx->pc = 0x3DFC20u;
    {
        const bool branch_taken_0x3dfc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DFC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFC20u;
            // 0x3dfc24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfc20) {
            ctx->pc = 0x3DFBF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3dfbf8;
        }
    }
    ctx->pc = 0x3DFC28u;
label_3dfc28:
    // 0x3dfc28: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3dfc28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dfc2c:
    // 0x3dfc2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3dfc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3dfc30:
    // 0x3dfc30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3dfc30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dfc34:
    // 0x3dfc34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3dfc34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dfc38:
    // 0x3dfc38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dfc38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dfc3c:
    // 0x3dfc3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dfc3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dfc40:
    // 0x3dfc40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dfc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dfc44:
    // 0x3dfc44: 0x3e00008  jr          $ra
label_3dfc48:
    if (ctx->pc == 0x3DFC48u) {
        ctx->pc = 0x3DFC48u;
            // 0x3dfc48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3DFC4Cu;
        goto label_3dfc4c;
    }
    ctx->pc = 0x3DFC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFC44u;
            // 0x3dfc48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DFC4Cu;
label_3dfc4c:
    // 0x3dfc4c: 0x0  nop
    ctx->pc = 0x3dfc4cu;
    // NOP
label_3dfc50:
    // 0x3dfc50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dfc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3dfc54:
    // 0x3dfc54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dfc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3dfc58:
    // 0x3dfc58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dfc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3dfc5c:
    // 0x3dfc5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dfc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dfc60:
    // 0x3dfc60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dfc60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dfc64:
    // 0x3dfc64: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_3dfc68:
    if (ctx->pc == 0x3DFC68u) {
        ctx->pc = 0x3DFC68u;
            // 0x3dfc68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DFC6Cu;
        goto label_3dfc6c;
    }
    ctx->pc = 0x3DFC64u;
    {
        const bool branch_taken_0x3dfc64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFC64u;
            // 0x3dfc68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfc64) {
            ctx->pc = 0x3DFD04u;
            goto label_3dfd04;
        }
    }
    ctx->pc = 0x3DFC6Cu;
label_3dfc6c:
    // 0x3dfc6c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3dfc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3dfc70:
    // 0x3dfc70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3dfc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3dfc74:
    // 0x3dfc74: 0x24639ad0  addiu       $v1, $v1, -0x6530
    ctx->pc = 0x3dfc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941392));
label_3dfc78:
    // 0x3dfc78: 0x24429b08  addiu       $v0, $v0, -0x64F8
    ctx->pc = 0x3dfc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941448));
label_3dfc7c:
    // 0x3dfc7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3dfc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3dfc80:
    // 0x3dfc80: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_3dfc84:
    if (ctx->pc == 0x3DFC84u) {
        ctx->pc = 0x3DFC84u;
            // 0x3dfc84: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3DFC88u;
        goto label_3dfc88;
    }
    ctx->pc = 0x3DFC80u;
    {
        const bool branch_taken_0x3dfc80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFC80u;
            // 0x3dfc84: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfc80) {
            ctx->pc = 0x3DFCECu;
            goto label_3dfcec;
        }
    }
    ctx->pc = 0x3DFC88u;
label_3dfc88:
    // 0x3dfc88: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3dfc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3dfc8c:
    // 0x3dfc8c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3dfc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3dfc90:
    // 0x3dfc90: 0x24639b30  addiu       $v1, $v1, -0x64D0
    ctx->pc = 0x3dfc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941488));
label_3dfc94:
    // 0x3dfc94: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3dfc94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_3dfc98:
    // 0x3dfc98: 0x24429b68  addiu       $v0, $v0, -0x6498
    ctx->pc = 0x3dfc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941544));
label_3dfc9c:
    // 0x3dfc9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3dfc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3dfca0:
    // 0x3dfca0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3dfca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_3dfca4:
    // 0x3dfca4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3dfca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_3dfca8:
    // 0x3dfca8: 0xc0407c0  jal         func_101F00
label_3dfcac:
    if (ctx->pc == 0x3DFCACu) {
        ctx->pc = 0x3DFCACu;
            // 0x3dfcac: 0x24a5fe50  addiu       $a1, $a1, -0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966864));
        ctx->pc = 0x3DFCB0u;
        goto label_3dfcb0;
    }
    ctx->pc = 0x3DFCA8u;
    SET_GPR_U32(ctx, 31, 0x3DFCB0u);
    ctx->pc = 0x3DFCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFCA8u;
            // 0x3dfcac: 0x24a5fe50  addiu       $a1, $a1, -0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFCB0u; }
        if (ctx->pc != 0x3DFCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFCB0u; }
        if (ctx->pc != 0x3DFCB0u) { return; }
    }
    ctx->pc = 0x3DFCB0u;
label_3dfcb0:
    // 0x3dfcb0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3dfcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_3dfcb4:
    // 0x3dfcb4: 0xc0f7f7c  jal         func_3DFDF0
label_3dfcb8:
    if (ctx->pc == 0x3DFCB8u) {
        ctx->pc = 0x3DFCB8u;
            // 0x3dfcb8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3DFCBCu;
        goto label_3dfcbc;
    }
    ctx->pc = 0x3DFCB4u;
    SET_GPR_U32(ctx, 31, 0x3DFCBCu);
    ctx->pc = 0x3DFCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFCB4u;
            // 0x3dfcb8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DFDF0u;
    if (runtime->hasFunction(0x3DFDF0u)) {
        auto targetFn = runtime->lookupFunction(0x3DFDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFCBCu; }
        if (ctx->pc != 0x3DFCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DFDF0_0x3dfdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFCBCu; }
        if (ctx->pc != 0x3DFCBCu) { return; }
    }
    ctx->pc = 0x3DFCBCu;
label_3dfcbc:
    // 0x3dfcbc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x3dfcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_3dfcc0:
    // 0x3dfcc0: 0xc0f7f60  jal         func_3DFD80
label_3dfcc4:
    if (ctx->pc == 0x3DFCC4u) {
        ctx->pc = 0x3DFCC4u;
            // 0x3dfcc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3DFCC8u;
        goto label_3dfcc8;
    }
    ctx->pc = 0x3DFCC0u;
    SET_GPR_U32(ctx, 31, 0x3DFCC8u);
    ctx->pc = 0x3DFCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFCC0u;
            // 0x3dfcc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DFD80u;
    if (runtime->hasFunction(0x3DFD80u)) {
        auto targetFn = runtime->lookupFunction(0x3DFD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFCC8u; }
        if (ctx->pc != 0x3DFCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DFD80_0x3dfd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFCC8u; }
        if (ctx->pc != 0x3DFCC8u) { return; }
    }
    ctx->pc = 0x3DFCC8u;
label_3dfcc8:
    // 0x3dfcc8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3dfcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3dfccc:
    // 0x3dfccc: 0xc0f7f60  jal         func_3DFD80
label_3dfcd0:
    if (ctx->pc == 0x3DFCD0u) {
        ctx->pc = 0x3DFCD0u;
            // 0x3dfcd0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3DFCD4u;
        goto label_3dfcd4;
    }
    ctx->pc = 0x3DFCCCu;
    SET_GPR_U32(ctx, 31, 0x3DFCD4u);
    ctx->pc = 0x3DFCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFCCCu;
            // 0x3dfcd0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DFD80u;
    if (runtime->hasFunction(0x3DFD80u)) {
        auto targetFn = runtime->lookupFunction(0x3DFD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFCD4u; }
        if (ctx->pc != 0x3DFCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DFD80_0x3dfd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFCD4u; }
        if (ctx->pc != 0x3DFCD4u) { return; }
    }
    ctx->pc = 0x3DFCD4u;
label_3dfcd4:
    // 0x3dfcd4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x3dfcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_3dfcd8:
    // 0x3dfcd8: 0xc0f7f48  jal         func_3DFD20
label_3dfcdc:
    if (ctx->pc == 0x3DFCDCu) {
        ctx->pc = 0x3DFCDCu;
            // 0x3dfcdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DFCE0u;
        goto label_3dfce0;
    }
    ctx->pc = 0x3DFCD8u;
    SET_GPR_U32(ctx, 31, 0x3DFCE0u);
    ctx->pc = 0x3DFCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFCD8u;
            // 0x3dfcdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DFD20u;
    if (runtime->hasFunction(0x3DFD20u)) {
        auto targetFn = runtime->lookupFunction(0x3DFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFCE0u; }
        if (ctx->pc != 0x3DFCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DFD20_0x3dfd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFCE0u; }
        if (ctx->pc != 0x3DFCE0u) { return; }
    }
    ctx->pc = 0x3DFCE0u;
label_3dfce0:
    // 0x3dfce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dfce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dfce4:
    // 0x3dfce4: 0xc0ae1c0  jal         func_2B8700
label_3dfce8:
    if (ctx->pc == 0x3DFCE8u) {
        ctx->pc = 0x3DFCE8u;
            // 0x3dfce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DFCECu;
        goto label_3dfcec;
    }
    ctx->pc = 0x3DFCE4u;
    SET_GPR_U32(ctx, 31, 0x3DFCECu);
    ctx->pc = 0x3DFCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFCE4u;
            // 0x3dfce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFCECu; }
        if (ctx->pc != 0x3DFCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFCECu; }
        if (ctx->pc != 0x3DFCECu) { return; }
    }
    ctx->pc = 0x3DFCECu;
label_3dfcec:
    // 0x3dfcec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3dfcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3dfcf0:
    // 0x3dfcf0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3dfcf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3dfcf4:
    // 0x3dfcf4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3dfcf8:
    if (ctx->pc == 0x3DFCF8u) {
        ctx->pc = 0x3DFCF8u;
            // 0x3dfcf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DFCFCu;
        goto label_3dfcfc;
    }
    ctx->pc = 0x3DFCF4u;
    {
        const bool branch_taken_0x3dfcf4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3dfcf4) {
            ctx->pc = 0x3DFCF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFCF4u;
            // 0x3dfcf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DFD08u;
            goto label_3dfd08;
        }
    }
    ctx->pc = 0x3DFCFCu;
label_3dfcfc:
    // 0x3dfcfc: 0xc0400a8  jal         func_1002A0
label_3dfd00:
    if (ctx->pc == 0x3DFD00u) {
        ctx->pc = 0x3DFD00u;
            // 0x3dfd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DFD04u;
        goto label_3dfd04;
    }
    ctx->pc = 0x3DFCFCu;
    SET_GPR_U32(ctx, 31, 0x3DFD04u);
    ctx->pc = 0x3DFD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFCFCu;
            // 0x3dfd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFD04u; }
        if (ctx->pc != 0x3DFD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DFD04u; }
        if (ctx->pc != 0x3DFD04u) { return; }
    }
    ctx->pc = 0x3DFD04u;
label_3dfd04:
    // 0x3dfd04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3dfd04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dfd08:
    // 0x3dfd08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dfd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3dfd0c:
    // 0x3dfd0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dfd0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dfd10:
    // 0x3dfd10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dfd10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dfd14:
    // 0x3dfd14: 0x3e00008  jr          $ra
label_3dfd18:
    if (ctx->pc == 0x3DFD18u) {
        ctx->pc = 0x3DFD18u;
            // 0x3dfd18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3DFD1Cu;
        goto label_3dfd1c;
    }
    ctx->pc = 0x3DFD14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DFD14u;
            // 0x3dfd18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DFD1Cu;
label_3dfd1c:
    // 0x3dfd1c: 0x0  nop
    ctx->pc = 0x3dfd1cu;
    // NOP
}
