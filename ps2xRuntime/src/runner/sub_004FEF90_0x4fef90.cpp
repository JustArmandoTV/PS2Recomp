#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004FEF90
// Address: 0x4fef90 - 0x4ffca0
void sub_004FEF90_0x4fef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FEF90_0x4fef90");
#endif

    switch (ctx->pc) {
        case 0x4fef90u: goto label_4fef90;
        case 0x4fef94u: goto label_4fef94;
        case 0x4fef98u: goto label_4fef98;
        case 0x4fef9cu: goto label_4fef9c;
        case 0x4fefa0u: goto label_4fefa0;
        case 0x4fefa4u: goto label_4fefa4;
        case 0x4fefa8u: goto label_4fefa8;
        case 0x4fefacu: goto label_4fefac;
        case 0x4fefb0u: goto label_4fefb0;
        case 0x4fefb4u: goto label_4fefb4;
        case 0x4fefb8u: goto label_4fefb8;
        case 0x4fefbcu: goto label_4fefbc;
        case 0x4fefc0u: goto label_4fefc0;
        case 0x4fefc4u: goto label_4fefc4;
        case 0x4fefc8u: goto label_4fefc8;
        case 0x4fefccu: goto label_4fefcc;
        case 0x4fefd0u: goto label_4fefd0;
        case 0x4fefd4u: goto label_4fefd4;
        case 0x4fefd8u: goto label_4fefd8;
        case 0x4fefdcu: goto label_4fefdc;
        case 0x4fefe0u: goto label_4fefe0;
        case 0x4fefe4u: goto label_4fefe4;
        case 0x4fefe8u: goto label_4fefe8;
        case 0x4fefecu: goto label_4fefec;
        case 0x4feff0u: goto label_4feff0;
        case 0x4feff4u: goto label_4feff4;
        case 0x4feff8u: goto label_4feff8;
        case 0x4feffcu: goto label_4feffc;
        case 0x4ff000u: goto label_4ff000;
        case 0x4ff004u: goto label_4ff004;
        case 0x4ff008u: goto label_4ff008;
        case 0x4ff00cu: goto label_4ff00c;
        case 0x4ff010u: goto label_4ff010;
        case 0x4ff014u: goto label_4ff014;
        case 0x4ff018u: goto label_4ff018;
        case 0x4ff01cu: goto label_4ff01c;
        case 0x4ff020u: goto label_4ff020;
        case 0x4ff024u: goto label_4ff024;
        case 0x4ff028u: goto label_4ff028;
        case 0x4ff02cu: goto label_4ff02c;
        case 0x4ff030u: goto label_4ff030;
        case 0x4ff034u: goto label_4ff034;
        case 0x4ff038u: goto label_4ff038;
        case 0x4ff03cu: goto label_4ff03c;
        case 0x4ff040u: goto label_4ff040;
        case 0x4ff044u: goto label_4ff044;
        case 0x4ff048u: goto label_4ff048;
        case 0x4ff04cu: goto label_4ff04c;
        case 0x4ff050u: goto label_4ff050;
        case 0x4ff054u: goto label_4ff054;
        case 0x4ff058u: goto label_4ff058;
        case 0x4ff05cu: goto label_4ff05c;
        case 0x4ff060u: goto label_4ff060;
        case 0x4ff064u: goto label_4ff064;
        case 0x4ff068u: goto label_4ff068;
        case 0x4ff06cu: goto label_4ff06c;
        case 0x4ff070u: goto label_4ff070;
        case 0x4ff074u: goto label_4ff074;
        case 0x4ff078u: goto label_4ff078;
        case 0x4ff07cu: goto label_4ff07c;
        case 0x4ff080u: goto label_4ff080;
        case 0x4ff084u: goto label_4ff084;
        case 0x4ff088u: goto label_4ff088;
        case 0x4ff08cu: goto label_4ff08c;
        case 0x4ff090u: goto label_4ff090;
        case 0x4ff094u: goto label_4ff094;
        case 0x4ff098u: goto label_4ff098;
        case 0x4ff09cu: goto label_4ff09c;
        case 0x4ff0a0u: goto label_4ff0a0;
        case 0x4ff0a4u: goto label_4ff0a4;
        case 0x4ff0a8u: goto label_4ff0a8;
        case 0x4ff0acu: goto label_4ff0ac;
        case 0x4ff0b0u: goto label_4ff0b0;
        case 0x4ff0b4u: goto label_4ff0b4;
        case 0x4ff0b8u: goto label_4ff0b8;
        case 0x4ff0bcu: goto label_4ff0bc;
        case 0x4ff0c0u: goto label_4ff0c0;
        case 0x4ff0c4u: goto label_4ff0c4;
        case 0x4ff0c8u: goto label_4ff0c8;
        case 0x4ff0ccu: goto label_4ff0cc;
        case 0x4ff0d0u: goto label_4ff0d0;
        case 0x4ff0d4u: goto label_4ff0d4;
        case 0x4ff0d8u: goto label_4ff0d8;
        case 0x4ff0dcu: goto label_4ff0dc;
        case 0x4ff0e0u: goto label_4ff0e0;
        case 0x4ff0e4u: goto label_4ff0e4;
        case 0x4ff0e8u: goto label_4ff0e8;
        case 0x4ff0ecu: goto label_4ff0ec;
        case 0x4ff0f0u: goto label_4ff0f0;
        case 0x4ff0f4u: goto label_4ff0f4;
        case 0x4ff0f8u: goto label_4ff0f8;
        case 0x4ff0fcu: goto label_4ff0fc;
        case 0x4ff100u: goto label_4ff100;
        case 0x4ff104u: goto label_4ff104;
        case 0x4ff108u: goto label_4ff108;
        case 0x4ff10cu: goto label_4ff10c;
        case 0x4ff110u: goto label_4ff110;
        case 0x4ff114u: goto label_4ff114;
        case 0x4ff118u: goto label_4ff118;
        case 0x4ff11cu: goto label_4ff11c;
        case 0x4ff120u: goto label_4ff120;
        case 0x4ff124u: goto label_4ff124;
        case 0x4ff128u: goto label_4ff128;
        case 0x4ff12cu: goto label_4ff12c;
        case 0x4ff130u: goto label_4ff130;
        case 0x4ff134u: goto label_4ff134;
        case 0x4ff138u: goto label_4ff138;
        case 0x4ff13cu: goto label_4ff13c;
        case 0x4ff140u: goto label_4ff140;
        case 0x4ff144u: goto label_4ff144;
        case 0x4ff148u: goto label_4ff148;
        case 0x4ff14cu: goto label_4ff14c;
        case 0x4ff150u: goto label_4ff150;
        case 0x4ff154u: goto label_4ff154;
        case 0x4ff158u: goto label_4ff158;
        case 0x4ff15cu: goto label_4ff15c;
        case 0x4ff160u: goto label_4ff160;
        case 0x4ff164u: goto label_4ff164;
        case 0x4ff168u: goto label_4ff168;
        case 0x4ff16cu: goto label_4ff16c;
        case 0x4ff170u: goto label_4ff170;
        case 0x4ff174u: goto label_4ff174;
        case 0x4ff178u: goto label_4ff178;
        case 0x4ff17cu: goto label_4ff17c;
        case 0x4ff180u: goto label_4ff180;
        case 0x4ff184u: goto label_4ff184;
        case 0x4ff188u: goto label_4ff188;
        case 0x4ff18cu: goto label_4ff18c;
        case 0x4ff190u: goto label_4ff190;
        case 0x4ff194u: goto label_4ff194;
        case 0x4ff198u: goto label_4ff198;
        case 0x4ff19cu: goto label_4ff19c;
        case 0x4ff1a0u: goto label_4ff1a0;
        case 0x4ff1a4u: goto label_4ff1a4;
        case 0x4ff1a8u: goto label_4ff1a8;
        case 0x4ff1acu: goto label_4ff1ac;
        case 0x4ff1b0u: goto label_4ff1b0;
        case 0x4ff1b4u: goto label_4ff1b4;
        case 0x4ff1b8u: goto label_4ff1b8;
        case 0x4ff1bcu: goto label_4ff1bc;
        case 0x4ff1c0u: goto label_4ff1c0;
        case 0x4ff1c4u: goto label_4ff1c4;
        case 0x4ff1c8u: goto label_4ff1c8;
        case 0x4ff1ccu: goto label_4ff1cc;
        case 0x4ff1d0u: goto label_4ff1d0;
        case 0x4ff1d4u: goto label_4ff1d4;
        case 0x4ff1d8u: goto label_4ff1d8;
        case 0x4ff1dcu: goto label_4ff1dc;
        case 0x4ff1e0u: goto label_4ff1e0;
        case 0x4ff1e4u: goto label_4ff1e4;
        case 0x4ff1e8u: goto label_4ff1e8;
        case 0x4ff1ecu: goto label_4ff1ec;
        case 0x4ff1f0u: goto label_4ff1f0;
        case 0x4ff1f4u: goto label_4ff1f4;
        case 0x4ff1f8u: goto label_4ff1f8;
        case 0x4ff1fcu: goto label_4ff1fc;
        case 0x4ff200u: goto label_4ff200;
        case 0x4ff204u: goto label_4ff204;
        case 0x4ff208u: goto label_4ff208;
        case 0x4ff20cu: goto label_4ff20c;
        case 0x4ff210u: goto label_4ff210;
        case 0x4ff214u: goto label_4ff214;
        case 0x4ff218u: goto label_4ff218;
        case 0x4ff21cu: goto label_4ff21c;
        case 0x4ff220u: goto label_4ff220;
        case 0x4ff224u: goto label_4ff224;
        case 0x4ff228u: goto label_4ff228;
        case 0x4ff22cu: goto label_4ff22c;
        case 0x4ff230u: goto label_4ff230;
        case 0x4ff234u: goto label_4ff234;
        case 0x4ff238u: goto label_4ff238;
        case 0x4ff23cu: goto label_4ff23c;
        case 0x4ff240u: goto label_4ff240;
        case 0x4ff244u: goto label_4ff244;
        case 0x4ff248u: goto label_4ff248;
        case 0x4ff24cu: goto label_4ff24c;
        case 0x4ff250u: goto label_4ff250;
        case 0x4ff254u: goto label_4ff254;
        case 0x4ff258u: goto label_4ff258;
        case 0x4ff25cu: goto label_4ff25c;
        case 0x4ff260u: goto label_4ff260;
        case 0x4ff264u: goto label_4ff264;
        case 0x4ff268u: goto label_4ff268;
        case 0x4ff26cu: goto label_4ff26c;
        case 0x4ff270u: goto label_4ff270;
        case 0x4ff274u: goto label_4ff274;
        case 0x4ff278u: goto label_4ff278;
        case 0x4ff27cu: goto label_4ff27c;
        case 0x4ff280u: goto label_4ff280;
        case 0x4ff284u: goto label_4ff284;
        case 0x4ff288u: goto label_4ff288;
        case 0x4ff28cu: goto label_4ff28c;
        case 0x4ff290u: goto label_4ff290;
        case 0x4ff294u: goto label_4ff294;
        case 0x4ff298u: goto label_4ff298;
        case 0x4ff29cu: goto label_4ff29c;
        case 0x4ff2a0u: goto label_4ff2a0;
        case 0x4ff2a4u: goto label_4ff2a4;
        case 0x4ff2a8u: goto label_4ff2a8;
        case 0x4ff2acu: goto label_4ff2ac;
        case 0x4ff2b0u: goto label_4ff2b0;
        case 0x4ff2b4u: goto label_4ff2b4;
        case 0x4ff2b8u: goto label_4ff2b8;
        case 0x4ff2bcu: goto label_4ff2bc;
        case 0x4ff2c0u: goto label_4ff2c0;
        case 0x4ff2c4u: goto label_4ff2c4;
        case 0x4ff2c8u: goto label_4ff2c8;
        case 0x4ff2ccu: goto label_4ff2cc;
        case 0x4ff2d0u: goto label_4ff2d0;
        case 0x4ff2d4u: goto label_4ff2d4;
        case 0x4ff2d8u: goto label_4ff2d8;
        case 0x4ff2dcu: goto label_4ff2dc;
        case 0x4ff2e0u: goto label_4ff2e0;
        case 0x4ff2e4u: goto label_4ff2e4;
        case 0x4ff2e8u: goto label_4ff2e8;
        case 0x4ff2ecu: goto label_4ff2ec;
        case 0x4ff2f0u: goto label_4ff2f0;
        case 0x4ff2f4u: goto label_4ff2f4;
        case 0x4ff2f8u: goto label_4ff2f8;
        case 0x4ff2fcu: goto label_4ff2fc;
        case 0x4ff300u: goto label_4ff300;
        case 0x4ff304u: goto label_4ff304;
        case 0x4ff308u: goto label_4ff308;
        case 0x4ff30cu: goto label_4ff30c;
        case 0x4ff310u: goto label_4ff310;
        case 0x4ff314u: goto label_4ff314;
        case 0x4ff318u: goto label_4ff318;
        case 0x4ff31cu: goto label_4ff31c;
        case 0x4ff320u: goto label_4ff320;
        case 0x4ff324u: goto label_4ff324;
        case 0x4ff328u: goto label_4ff328;
        case 0x4ff32cu: goto label_4ff32c;
        case 0x4ff330u: goto label_4ff330;
        case 0x4ff334u: goto label_4ff334;
        case 0x4ff338u: goto label_4ff338;
        case 0x4ff33cu: goto label_4ff33c;
        case 0x4ff340u: goto label_4ff340;
        case 0x4ff344u: goto label_4ff344;
        case 0x4ff348u: goto label_4ff348;
        case 0x4ff34cu: goto label_4ff34c;
        case 0x4ff350u: goto label_4ff350;
        case 0x4ff354u: goto label_4ff354;
        case 0x4ff358u: goto label_4ff358;
        case 0x4ff35cu: goto label_4ff35c;
        case 0x4ff360u: goto label_4ff360;
        case 0x4ff364u: goto label_4ff364;
        case 0x4ff368u: goto label_4ff368;
        case 0x4ff36cu: goto label_4ff36c;
        case 0x4ff370u: goto label_4ff370;
        case 0x4ff374u: goto label_4ff374;
        case 0x4ff378u: goto label_4ff378;
        case 0x4ff37cu: goto label_4ff37c;
        case 0x4ff380u: goto label_4ff380;
        case 0x4ff384u: goto label_4ff384;
        case 0x4ff388u: goto label_4ff388;
        case 0x4ff38cu: goto label_4ff38c;
        case 0x4ff390u: goto label_4ff390;
        case 0x4ff394u: goto label_4ff394;
        case 0x4ff398u: goto label_4ff398;
        case 0x4ff39cu: goto label_4ff39c;
        case 0x4ff3a0u: goto label_4ff3a0;
        case 0x4ff3a4u: goto label_4ff3a4;
        case 0x4ff3a8u: goto label_4ff3a8;
        case 0x4ff3acu: goto label_4ff3ac;
        case 0x4ff3b0u: goto label_4ff3b0;
        case 0x4ff3b4u: goto label_4ff3b4;
        case 0x4ff3b8u: goto label_4ff3b8;
        case 0x4ff3bcu: goto label_4ff3bc;
        case 0x4ff3c0u: goto label_4ff3c0;
        case 0x4ff3c4u: goto label_4ff3c4;
        case 0x4ff3c8u: goto label_4ff3c8;
        case 0x4ff3ccu: goto label_4ff3cc;
        case 0x4ff3d0u: goto label_4ff3d0;
        case 0x4ff3d4u: goto label_4ff3d4;
        case 0x4ff3d8u: goto label_4ff3d8;
        case 0x4ff3dcu: goto label_4ff3dc;
        case 0x4ff3e0u: goto label_4ff3e0;
        case 0x4ff3e4u: goto label_4ff3e4;
        case 0x4ff3e8u: goto label_4ff3e8;
        case 0x4ff3ecu: goto label_4ff3ec;
        case 0x4ff3f0u: goto label_4ff3f0;
        case 0x4ff3f4u: goto label_4ff3f4;
        case 0x4ff3f8u: goto label_4ff3f8;
        case 0x4ff3fcu: goto label_4ff3fc;
        case 0x4ff400u: goto label_4ff400;
        case 0x4ff404u: goto label_4ff404;
        case 0x4ff408u: goto label_4ff408;
        case 0x4ff40cu: goto label_4ff40c;
        case 0x4ff410u: goto label_4ff410;
        case 0x4ff414u: goto label_4ff414;
        case 0x4ff418u: goto label_4ff418;
        case 0x4ff41cu: goto label_4ff41c;
        case 0x4ff420u: goto label_4ff420;
        case 0x4ff424u: goto label_4ff424;
        case 0x4ff428u: goto label_4ff428;
        case 0x4ff42cu: goto label_4ff42c;
        case 0x4ff430u: goto label_4ff430;
        case 0x4ff434u: goto label_4ff434;
        case 0x4ff438u: goto label_4ff438;
        case 0x4ff43cu: goto label_4ff43c;
        case 0x4ff440u: goto label_4ff440;
        case 0x4ff444u: goto label_4ff444;
        case 0x4ff448u: goto label_4ff448;
        case 0x4ff44cu: goto label_4ff44c;
        case 0x4ff450u: goto label_4ff450;
        case 0x4ff454u: goto label_4ff454;
        case 0x4ff458u: goto label_4ff458;
        case 0x4ff45cu: goto label_4ff45c;
        case 0x4ff460u: goto label_4ff460;
        case 0x4ff464u: goto label_4ff464;
        case 0x4ff468u: goto label_4ff468;
        case 0x4ff46cu: goto label_4ff46c;
        case 0x4ff470u: goto label_4ff470;
        case 0x4ff474u: goto label_4ff474;
        case 0x4ff478u: goto label_4ff478;
        case 0x4ff47cu: goto label_4ff47c;
        case 0x4ff480u: goto label_4ff480;
        case 0x4ff484u: goto label_4ff484;
        case 0x4ff488u: goto label_4ff488;
        case 0x4ff48cu: goto label_4ff48c;
        case 0x4ff490u: goto label_4ff490;
        case 0x4ff494u: goto label_4ff494;
        case 0x4ff498u: goto label_4ff498;
        case 0x4ff49cu: goto label_4ff49c;
        case 0x4ff4a0u: goto label_4ff4a0;
        case 0x4ff4a4u: goto label_4ff4a4;
        case 0x4ff4a8u: goto label_4ff4a8;
        case 0x4ff4acu: goto label_4ff4ac;
        case 0x4ff4b0u: goto label_4ff4b0;
        case 0x4ff4b4u: goto label_4ff4b4;
        case 0x4ff4b8u: goto label_4ff4b8;
        case 0x4ff4bcu: goto label_4ff4bc;
        case 0x4ff4c0u: goto label_4ff4c0;
        case 0x4ff4c4u: goto label_4ff4c4;
        case 0x4ff4c8u: goto label_4ff4c8;
        case 0x4ff4ccu: goto label_4ff4cc;
        case 0x4ff4d0u: goto label_4ff4d0;
        case 0x4ff4d4u: goto label_4ff4d4;
        case 0x4ff4d8u: goto label_4ff4d8;
        case 0x4ff4dcu: goto label_4ff4dc;
        case 0x4ff4e0u: goto label_4ff4e0;
        case 0x4ff4e4u: goto label_4ff4e4;
        case 0x4ff4e8u: goto label_4ff4e8;
        case 0x4ff4ecu: goto label_4ff4ec;
        case 0x4ff4f0u: goto label_4ff4f0;
        case 0x4ff4f4u: goto label_4ff4f4;
        case 0x4ff4f8u: goto label_4ff4f8;
        case 0x4ff4fcu: goto label_4ff4fc;
        case 0x4ff500u: goto label_4ff500;
        case 0x4ff504u: goto label_4ff504;
        case 0x4ff508u: goto label_4ff508;
        case 0x4ff50cu: goto label_4ff50c;
        case 0x4ff510u: goto label_4ff510;
        case 0x4ff514u: goto label_4ff514;
        case 0x4ff518u: goto label_4ff518;
        case 0x4ff51cu: goto label_4ff51c;
        case 0x4ff520u: goto label_4ff520;
        case 0x4ff524u: goto label_4ff524;
        case 0x4ff528u: goto label_4ff528;
        case 0x4ff52cu: goto label_4ff52c;
        case 0x4ff530u: goto label_4ff530;
        case 0x4ff534u: goto label_4ff534;
        case 0x4ff538u: goto label_4ff538;
        case 0x4ff53cu: goto label_4ff53c;
        case 0x4ff540u: goto label_4ff540;
        case 0x4ff544u: goto label_4ff544;
        case 0x4ff548u: goto label_4ff548;
        case 0x4ff54cu: goto label_4ff54c;
        case 0x4ff550u: goto label_4ff550;
        case 0x4ff554u: goto label_4ff554;
        case 0x4ff558u: goto label_4ff558;
        case 0x4ff55cu: goto label_4ff55c;
        case 0x4ff560u: goto label_4ff560;
        case 0x4ff564u: goto label_4ff564;
        case 0x4ff568u: goto label_4ff568;
        case 0x4ff56cu: goto label_4ff56c;
        case 0x4ff570u: goto label_4ff570;
        case 0x4ff574u: goto label_4ff574;
        case 0x4ff578u: goto label_4ff578;
        case 0x4ff57cu: goto label_4ff57c;
        case 0x4ff580u: goto label_4ff580;
        case 0x4ff584u: goto label_4ff584;
        case 0x4ff588u: goto label_4ff588;
        case 0x4ff58cu: goto label_4ff58c;
        case 0x4ff590u: goto label_4ff590;
        case 0x4ff594u: goto label_4ff594;
        case 0x4ff598u: goto label_4ff598;
        case 0x4ff59cu: goto label_4ff59c;
        case 0x4ff5a0u: goto label_4ff5a0;
        case 0x4ff5a4u: goto label_4ff5a4;
        case 0x4ff5a8u: goto label_4ff5a8;
        case 0x4ff5acu: goto label_4ff5ac;
        case 0x4ff5b0u: goto label_4ff5b0;
        case 0x4ff5b4u: goto label_4ff5b4;
        case 0x4ff5b8u: goto label_4ff5b8;
        case 0x4ff5bcu: goto label_4ff5bc;
        case 0x4ff5c0u: goto label_4ff5c0;
        case 0x4ff5c4u: goto label_4ff5c4;
        case 0x4ff5c8u: goto label_4ff5c8;
        case 0x4ff5ccu: goto label_4ff5cc;
        case 0x4ff5d0u: goto label_4ff5d0;
        case 0x4ff5d4u: goto label_4ff5d4;
        case 0x4ff5d8u: goto label_4ff5d8;
        case 0x4ff5dcu: goto label_4ff5dc;
        case 0x4ff5e0u: goto label_4ff5e0;
        case 0x4ff5e4u: goto label_4ff5e4;
        case 0x4ff5e8u: goto label_4ff5e8;
        case 0x4ff5ecu: goto label_4ff5ec;
        case 0x4ff5f0u: goto label_4ff5f0;
        case 0x4ff5f4u: goto label_4ff5f4;
        case 0x4ff5f8u: goto label_4ff5f8;
        case 0x4ff5fcu: goto label_4ff5fc;
        case 0x4ff600u: goto label_4ff600;
        case 0x4ff604u: goto label_4ff604;
        case 0x4ff608u: goto label_4ff608;
        case 0x4ff60cu: goto label_4ff60c;
        case 0x4ff610u: goto label_4ff610;
        case 0x4ff614u: goto label_4ff614;
        case 0x4ff618u: goto label_4ff618;
        case 0x4ff61cu: goto label_4ff61c;
        case 0x4ff620u: goto label_4ff620;
        case 0x4ff624u: goto label_4ff624;
        case 0x4ff628u: goto label_4ff628;
        case 0x4ff62cu: goto label_4ff62c;
        case 0x4ff630u: goto label_4ff630;
        case 0x4ff634u: goto label_4ff634;
        case 0x4ff638u: goto label_4ff638;
        case 0x4ff63cu: goto label_4ff63c;
        case 0x4ff640u: goto label_4ff640;
        case 0x4ff644u: goto label_4ff644;
        case 0x4ff648u: goto label_4ff648;
        case 0x4ff64cu: goto label_4ff64c;
        case 0x4ff650u: goto label_4ff650;
        case 0x4ff654u: goto label_4ff654;
        case 0x4ff658u: goto label_4ff658;
        case 0x4ff65cu: goto label_4ff65c;
        case 0x4ff660u: goto label_4ff660;
        case 0x4ff664u: goto label_4ff664;
        case 0x4ff668u: goto label_4ff668;
        case 0x4ff66cu: goto label_4ff66c;
        case 0x4ff670u: goto label_4ff670;
        case 0x4ff674u: goto label_4ff674;
        case 0x4ff678u: goto label_4ff678;
        case 0x4ff67cu: goto label_4ff67c;
        case 0x4ff680u: goto label_4ff680;
        case 0x4ff684u: goto label_4ff684;
        case 0x4ff688u: goto label_4ff688;
        case 0x4ff68cu: goto label_4ff68c;
        case 0x4ff690u: goto label_4ff690;
        case 0x4ff694u: goto label_4ff694;
        case 0x4ff698u: goto label_4ff698;
        case 0x4ff69cu: goto label_4ff69c;
        case 0x4ff6a0u: goto label_4ff6a0;
        case 0x4ff6a4u: goto label_4ff6a4;
        case 0x4ff6a8u: goto label_4ff6a8;
        case 0x4ff6acu: goto label_4ff6ac;
        case 0x4ff6b0u: goto label_4ff6b0;
        case 0x4ff6b4u: goto label_4ff6b4;
        case 0x4ff6b8u: goto label_4ff6b8;
        case 0x4ff6bcu: goto label_4ff6bc;
        case 0x4ff6c0u: goto label_4ff6c0;
        case 0x4ff6c4u: goto label_4ff6c4;
        case 0x4ff6c8u: goto label_4ff6c8;
        case 0x4ff6ccu: goto label_4ff6cc;
        case 0x4ff6d0u: goto label_4ff6d0;
        case 0x4ff6d4u: goto label_4ff6d4;
        case 0x4ff6d8u: goto label_4ff6d8;
        case 0x4ff6dcu: goto label_4ff6dc;
        case 0x4ff6e0u: goto label_4ff6e0;
        case 0x4ff6e4u: goto label_4ff6e4;
        case 0x4ff6e8u: goto label_4ff6e8;
        case 0x4ff6ecu: goto label_4ff6ec;
        case 0x4ff6f0u: goto label_4ff6f0;
        case 0x4ff6f4u: goto label_4ff6f4;
        case 0x4ff6f8u: goto label_4ff6f8;
        case 0x4ff6fcu: goto label_4ff6fc;
        case 0x4ff700u: goto label_4ff700;
        case 0x4ff704u: goto label_4ff704;
        case 0x4ff708u: goto label_4ff708;
        case 0x4ff70cu: goto label_4ff70c;
        case 0x4ff710u: goto label_4ff710;
        case 0x4ff714u: goto label_4ff714;
        case 0x4ff718u: goto label_4ff718;
        case 0x4ff71cu: goto label_4ff71c;
        case 0x4ff720u: goto label_4ff720;
        case 0x4ff724u: goto label_4ff724;
        case 0x4ff728u: goto label_4ff728;
        case 0x4ff72cu: goto label_4ff72c;
        case 0x4ff730u: goto label_4ff730;
        case 0x4ff734u: goto label_4ff734;
        case 0x4ff738u: goto label_4ff738;
        case 0x4ff73cu: goto label_4ff73c;
        case 0x4ff740u: goto label_4ff740;
        case 0x4ff744u: goto label_4ff744;
        case 0x4ff748u: goto label_4ff748;
        case 0x4ff74cu: goto label_4ff74c;
        case 0x4ff750u: goto label_4ff750;
        case 0x4ff754u: goto label_4ff754;
        case 0x4ff758u: goto label_4ff758;
        case 0x4ff75cu: goto label_4ff75c;
        case 0x4ff760u: goto label_4ff760;
        case 0x4ff764u: goto label_4ff764;
        case 0x4ff768u: goto label_4ff768;
        case 0x4ff76cu: goto label_4ff76c;
        case 0x4ff770u: goto label_4ff770;
        case 0x4ff774u: goto label_4ff774;
        case 0x4ff778u: goto label_4ff778;
        case 0x4ff77cu: goto label_4ff77c;
        case 0x4ff780u: goto label_4ff780;
        case 0x4ff784u: goto label_4ff784;
        case 0x4ff788u: goto label_4ff788;
        case 0x4ff78cu: goto label_4ff78c;
        case 0x4ff790u: goto label_4ff790;
        case 0x4ff794u: goto label_4ff794;
        case 0x4ff798u: goto label_4ff798;
        case 0x4ff79cu: goto label_4ff79c;
        case 0x4ff7a0u: goto label_4ff7a0;
        case 0x4ff7a4u: goto label_4ff7a4;
        case 0x4ff7a8u: goto label_4ff7a8;
        case 0x4ff7acu: goto label_4ff7ac;
        case 0x4ff7b0u: goto label_4ff7b0;
        case 0x4ff7b4u: goto label_4ff7b4;
        case 0x4ff7b8u: goto label_4ff7b8;
        case 0x4ff7bcu: goto label_4ff7bc;
        case 0x4ff7c0u: goto label_4ff7c0;
        case 0x4ff7c4u: goto label_4ff7c4;
        case 0x4ff7c8u: goto label_4ff7c8;
        case 0x4ff7ccu: goto label_4ff7cc;
        case 0x4ff7d0u: goto label_4ff7d0;
        case 0x4ff7d4u: goto label_4ff7d4;
        case 0x4ff7d8u: goto label_4ff7d8;
        case 0x4ff7dcu: goto label_4ff7dc;
        case 0x4ff7e0u: goto label_4ff7e0;
        case 0x4ff7e4u: goto label_4ff7e4;
        case 0x4ff7e8u: goto label_4ff7e8;
        case 0x4ff7ecu: goto label_4ff7ec;
        case 0x4ff7f0u: goto label_4ff7f0;
        case 0x4ff7f4u: goto label_4ff7f4;
        case 0x4ff7f8u: goto label_4ff7f8;
        case 0x4ff7fcu: goto label_4ff7fc;
        case 0x4ff800u: goto label_4ff800;
        case 0x4ff804u: goto label_4ff804;
        case 0x4ff808u: goto label_4ff808;
        case 0x4ff80cu: goto label_4ff80c;
        case 0x4ff810u: goto label_4ff810;
        case 0x4ff814u: goto label_4ff814;
        case 0x4ff818u: goto label_4ff818;
        case 0x4ff81cu: goto label_4ff81c;
        case 0x4ff820u: goto label_4ff820;
        case 0x4ff824u: goto label_4ff824;
        case 0x4ff828u: goto label_4ff828;
        case 0x4ff82cu: goto label_4ff82c;
        case 0x4ff830u: goto label_4ff830;
        case 0x4ff834u: goto label_4ff834;
        case 0x4ff838u: goto label_4ff838;
        case 0x4ff83cu: goto label_4ff83c;
        case 0x4ff840u: goto label_4ff840;
        case 0x4ff844u: goto label_4ff844;
        case 0x4ff848u: goto label_4ff848;
        case 0x4ff84cu: goto label_4ff84c;
        case 0x4ff850u: goto label_4ff850;
        case 0x4ff854u: goto label_4ff854;
        case 0x4ff858u: goto label_4ff858;
        case 0x4ff85cu: goto label_4ff85c;
        case 0x4ff860u: goto label_4ff860;
        case 0x4ff864u: goto label_4ff864;
        case 0x4ff868u: goto label_4ff868;
        case 0x4ff86cu: goto label_4ff86c;
        case 0x4ff870u: goto label_4ff870;
        case 0x4ff874u: goto label_4ff874;
        case 0x4ff878u: goto label_4ff878;
        case 0x4ff87cu: goto label_4ff87c;
        case 0x4ff880u: goto label_4ff880;
        case 0x4ff884u: goto label_4ff884;
        case 0x4ff888u: goto label_4ff888;
        case 0x4ff88cu: goto label_4ff88c;
        case 0x4ff890u: goto label_4ff890;
        case 0x4ff894u: goto label_4ff894;
        case 0x4ff898u: goto label_4ff898;
        case 0x4ff89cu: goto label_4ff89c;
        case 0x4ff8a0u: goto label_4ff8a0;
        case 0x4ff8a4u: goto label_4ff8a4;
        case 0x4ff8a8u: goto label_4ff8a8;
        case 0x4ff8acu: goto label_4ff8ac;
        case 0x4ff8b0u: goto label_4ff8b0;
        case 0x4ff8b4u: goto label_4ff8b4;
        case 0x4ff8b8u: goto label_4ff8b8;
        case 0x4ff8bcu: goto label_4ff8bc;
        case 0x4ff8c0u: goto label_4ff8c0;
        case 0x4ff8c4u: goto label_4ff8c4;
        case 0x4ff8c8u: goto label_4ff8c8;
        case 0x4ff8ccu: goto label_4ff8cc;
        case 0x4ff8d0u: goto label_4ff8d0;
        case 0x4ff8d4u: goto label_4ff8d4;
        case 0x4ff8d8u: goto label_4ff8d8;
        case 0x4ff8dcu: goto label_4ff8dc;
        case 0x4ff8e0u: goto label_4ff8e0;
        case 0x4ff8e4u: goto label_4ff8e4;
        case 0x4ff8e8u: goto label_4ff8e8;
        case 0x4ff8ecu: goto label_4ff8ec;
        case 0x4ff8f0u: goto label_4ff8f0;
        case 0x4ff8f4u: goto label_4ff8f4;
        case 0x4ff8f8u: goto label_4ff8f8;
        case 0x4ff8fcu: goto label_4ff8fc;
        case 0x4ff900u: goto label_4ff900;
        case 0x4ff904u: goto label_4ff904;
        case 0x4ff908u: goto label_4ff908;
        case 0x4ff90cu: goto label_4ff90c;
        case 0x4ff910u: goto label_4ff910;
        case 0x4ff914u: goto label_4ff914;
        case 0x4ff918u: goto label_4ff918;
        case 0x4ff91cu: goto label_4ff91c;
        case 0x4ff920u: goto label_4ff920;
        case 0x4ff924u: goto label_4ff924;
        case 0x4ff928u: goto label_4ff928;
        case 0x4ff92cu: goto label_4ff92c;
        case 0x4ff930u: goto label_4ff930;
        case 0x4ff934u: goto label_4ff934;
        case 0x4ff938u: goto label_4ff938;
        case 0x4ff93cu: goto label_4ff93c;
        case 0x4ff940u: goto label_4ff940;
        case 0x4ff944u: goto label_4ff944;
        case 0x4ff948u: goto label_4ff948;
        case 0x4ff94cu: goto label_4ff94c;
        case 0x4ff950u: goto label_4ff950;
        case 0x4ff954u: goto label_4ff954;
        case 0x4ff958u: goto label_4ff958;
        case 0x4ff95cu: goto label_4ff95c;
        case 0x4ff960u: goto label_4ff960;
        case 0x4ff964u: goto label_4ff964;
        case 0x4ff968u: goto label_4ff968;
        case 0x4ff96cu: goto label_4ff96c;
        case 0x4ff970u: goto label_4ff970;
        case 0x4ff974u: goto label_4ff974;
        case 0x4ff978u: goto label_4ff978;
        case 0x4ff97cu: goto label_4ff97c;
        case 0x4ff980u: goto label_4ff980;
        case 0x4ff984u: goto label_4ff984;
        case 0x4ff988u: goto label_4ff988;
        case 0x4ff98cu: goto label_4ff98c;
        case 0x4ff990u: goto label_4ff990;
        case 0x4ff994u: goto label_4ff994;
        case 0x4ff998u: goto label_4ff998;
        case 0x4ff99cu: goto label_4ff99c;
        case 0x4ff9a0u: goto label_4ff9a0;
        case 0x4ff9a4u: goto label_4ff9a4;
        case 0x4ff9a8u: goto label_4ff9a8;
        case 0x4ff9acu: goto label_4ff9ac;
        case 0x4ff9b0u: goto label_4ff9b0;
        case 0x4ff9b4u: goto label_4ff9b4;
        case 0x4ff9b8u: goto label_4ff9b8;
        case 0x4ff9bcu: goto label_4ff9bc;
        case 0x4ff9c0u: goto label_4ff9c0;
        case 0x4ff9c4u: goto label_4ff9c4;
        case 0x4ff9c8u: goto label_4ff9c8;
        case 0x4ff9ccu: goto label_4ff9cc;
        case 0x4ff9d0u: goto label_4ff9d0;
        case 0x4ff9d4u: goto label_4ff9d4;
        case 0x4ff9d8u: goto label_4ff9d8;
        case 0x4ff9dcu: goto label_4ff9dc;
        case 0x4ff9e0u: goto label_4ff9e0;
        case 0x4ff9e4u: goto label_4ff9e4;
        case 0x4ff9e8u: goto label_4ff9e8;
        case 0x4ff9ecu: goto label_4ff9ec;
        case 0x4ff9f0u: goto label_4ff9f0;
        case 0x4ff9f4u: goto label_4ff9f4;
        case 0x4ff9f8u: goto label_4ff9f8;
        case 0x4ff9fcu: goto label_4ff9fc;
        case 0x4ffa00u: goto label_4ffa00;
        case 0x4ffa04u: goto label_4ffa04;
        case 0x4ffa08u: goto label_4ffa08;
        case 0x4ffa0cu: goto label_4ffa0c;
        case 0x4ffa10u: goto label_4ffa10;
        case 0x4ffa14u: goto label_4ffa14;
        case 0x4ffa18u: goto label_4ffa18;
        case 0x4ffa1cu: goto label_4ffa1c;
        case 0x4ffa20u: goto label_4ffa20;
        case 0x4ffa24u: goto label_4ffa24;
        case 0x4ffa28u: goto label_4ffa28;
        case 0x4ffa2cu: goto label_4ffa2c;
        case 0x4ffa30u: goto label_4ffa30;
        case 0x4ffa34u: goto label_4ffa34;
        case 0x4ffa38u: goto label_4ffa38;
        case 0x4ffa3cu: goto label_4ffa3c;
        case 0x4ffa40u: goto label_4ffa40;
        case 0x4ffa44u: goto label_4ffa44;
        case 0x4ffa48u: goto label_4ffa48;
        case 0x4ffa4cu: goto label_4ffa4c;
        case 0x4ffa50u: goto label_4ffa50;
        case 0x4ffa54u: goto label_4ffa54;
        case 0x4ffa58u: goto label_4ffa58;
        case 0x4ffa5cu: goto label_4ffa5c;
        case 0x4ffa60u: goto label_4ffa60;
        case 0x4ffa64u: goto label_4ffa64;
        case 0x4ffa68u: goto label_4ffa68;
        case 0x4ffa6cu: goto label_4ffa6c;
        case 0x4ffa70u: goto label_4ffa70;
        case 0x4ffa74u: goto label_4ffa74;
        case 0x4ffa78u: goto label_4ffa78;
        case 0x4ffa7cu: goto label_4ffa7c;
        case 0x4ffa80u: goto label_4ffa80;
        case 0x4ffa84u: goto label_4ffa84;
        case 0x4ffa88u: goto label_4ffa88;
        case 0x4ffa8cu: goto label_4ffa8c;
        case 0x4ffa90u: goto label_4ffa90;
        case 0x4ffa94u: goto label_4ffa94;
        case 0x4ffa98u: goto label_4ffa98;
        case 0x4ffa9cu: goto label_4ffa9c;
        case 0x4ffaa0u: goto label_4ffaa0;
        case 0x4ffaa4u: goto label_4ffaa4;
        case 0x4ffaa8u: goto label_4ffaa8;
        case 0x4ffaacu: goto label_4ffaac;
        case 0x4ffab0u: goto label_4ffab0;
        case 0x4ffab4u: goto label_4ffab4;
        case 0x4ffab8u: goto label_4ffab8;
        case 0x4ffabcu: goto label_4ffabc;
        case 0x4ffac0u: goto label_4ffac0;
        case 0x4ffac4u: goto label_4ffac4;
        case 0x4ffac8u: goto label_4ffac8;
        case 0x4ffaccu: goto label_4ffacc;
        case 0x4ffad0u: goto label_4ffad0;
        case 0x4ffad4u: goto label_4ffad4;
        case 0x4ffad8u: goto label_4ffad8;
        case 0x4ffadcu: goto label_4ffadc;
        case 0x4ffae0u: goto label_4ffae0;
        case 0x4ffae4u: goto label_4ffae4;
        case 0x4ffae8u: goto label_4ffae8;
        case 0x4ffaecu: goto label_4ffaec;
        case 0x4ffaf0u: goto label_4ffaf0;
        case 0x4ffaf4u: goto label_4ffaf4;
        case 0x4ffaf8u: goto label_4ffaf8;
        case 0x4ffafcu: goto label_4ffafc;
        case 0x4ffb00u: goto label_4ffb00;
        case 0x4ffb04u: goto label_4ffb04;
        case 0x4ffb08u: goto label_4ffb08;
        case 0x4ffb0cu: goto label_4ffb0c;
        case 0x4ffb10u: goto label_4ffb10;
        case 0x4ffb14u: goto label_4ffb14;
        case 0x4ffb18u: goto label_4ffb18;
        case 0x4ffb1cu: goto label_4ffb1c;
        case 0x4ffb20u: goto label_4ffb20;
        case 0x4ffb24u: goto label_4ffb24;
        case 0x4ffb28u: goto label_4ffb28;
        case 0x4ffb2cu: goto label_4ffb2c;
        case 0x4ffb30u: goto label_4ffb30;
        case 0x4ffb34u: goto label_4ffb34;
        case 0x4ffb38u: goto label_4ffb38;
        case 0x4ffb3cu: goto label_4ffb3c;
        case 0x4ffb40u: goto label_4ffb40;
        case 0x4ffb44u: goto label_4ffb44;
        case 0x4ffb48u: goto label_4ffb48;
        case 0x4ffb4cu: goto label_4ffb4c;
        case 0x4ffb50u: goto label_4ffb50;
        case 0x4ffb54u: goto label_4ffb54;
        case 0x4ffb58u: goto label_4ffb58;
        case 0x4ffb5cu: goto label_4ffb5c;
        case 0x4ffb60u: goto label_4ffb60;
        case 0x4ffb64u: goto label_4ffb64;
        case 0x4ffb68u: goto label_4ffb68;
        case 0x4ffb6cu: goto label_4ffb6c;
        case 0x4ffb70u: goto label_4ffb70;
        case 0x4ffb74u: goto label_4ffb74;
        case 0x4ffb78u: goto label_4ffb78;
        case 0x4ffb7cu: goto label_4ffb7c;
        case 0x4ffb80u: goto label_4ffb80;
        case 0x4ffb84u: goto label_4ffb84;
        case 0x4ffb88u: goto label_4ffb88;
        case 0x4ffb8cu: goto label_4ffb8c;
        case 0x4ffb90u: goto label_4ffb90;
        case 0x4ffb94u: goto label_4ffb94;
        case 0x4ffb98u: goto label_4ffb98;
        case 0x4ffb9cu: goto label_4ffb9c;
        case 0x4ffba0u: goto label_4ffba0;
        case 0x4ffba4u: goto label_4ffba4;
        case 0x4ffba8u: goto label_4ffba8;
        case 0x4ffbacu: goto label_4ffbac;
        case 0x4ffbb0u: goto label_4ffbb0;
        case 0x4ffbb4u: goto label_4ffbb4;
        case 0x4ffbb8u: goto label_4ffbb8;
        case 0x4ffbbcu: goto label_4ffbbc;
        case 0x4ffbc0u: goto label_4ffbc0;
        case 0x4ffbc4u: goto label_4ffbc4;
        case 0x4ffbc8u: goto label_4ffbc8;
        case 0x4ffbccu: goto label_4ffbcc;
        case 0x4ffbd0u: goto label_4ffbd0;
        case 0x4ffbd4u: goto label_4ffbd4;
        case 0x4ffbd8u: goto label_4ffbd8;
        case 0x4ffbdcu: goto label_4ffbdc;
        case 0x4ffbe0u: goto label_4ffbe0;
        case 0x4ffbe4u: goto label_4ffbe4;
        case 0x4ffbe8u: goto label_4ffbe8;
        case 0x4ffbecu: goto label_4ffbec;
        case 0x4ffbf0u: goto label_4ffbf0;
        case 0x4ffbf4u: goto label_4ffbf4;
        case 0x4ffbf8u: goto label_4ffbf8;
        case 0x4ffbfcu: goto label_4ffbfc;
        case 0x4ffc00u: goto label_4ffc00;
        case 0x4ffc04u: goto label_4ffc04;
        case 0x4ffc08u: goto label_4ffc08;
        case 0x4ffc0cu: goto label_4ffc0c;
        case 0x4ffc10u: goto label_4ffc10;
        case 0x4ffc14u: goto label_4ffc14;
        case 0x4ffc18u: goto label_4ffc18;
        case 0x4ffc1cu: goto label_4ffc1c;
        case 0x4ffc20u: goto label_4ffc20;
        case 0x4ffc24u: goto label_4ffc24;
        case 0x4ffc28u: goto label_4ffc28;
        case 0x4ffc2cu: goto label_4ffc2c;
        case 0x4ffc30u: goto label_4ffc30;
        case 0x4ffc34u: goto label_4ffc34;
        case 0x4ffc38u: goto label_4ffc38;
        case 0x4ffc3cu: goto label_4ffc3c;
        case 0x4ffc40u: goto label_4ffc40;
        case 0x4ffc44u: goto label_4ffc44;
        case 0x4ffc48u: goto label_4ffc48;
        case 0x4ffc4cu: goto label_4ffc4c;
        case 0x4ffc50u: goto label_4ffc50;
        case 0x4ffc54u: goto label_4ffc54;
        case 0x4ffc58u: goto label_4ffc58;
        case 0x4ffc5cu: goto label_4ffc5c;
        case 0x4ffc60u: goto label_4ffc60;
        case 0x4ffc64u: goto label_4ffc64;
        case 0x4ffc68u: goto label_4ffc68;
        case 0x4ffc6cu: goto label_4ffc6c;
        case 0x4ffc70u: goto label_4ffc70;
        case 0x4ffc74u: goto label_4ffc74;
        case 0x4ffc78u: goto label_4ffc78;
        case 0x4ffc7cu: goto label_4ffc7c;
        case 0x4ffc80u: goto label_4ffc80;
        case 0x4ffc84u: goto label_4ffc84;
        case 0x4ffc88u: goto label_4ffc88;
        case 0x4ffc8cu: goto label_4ffc8c;
        case 0x4ffc90u: goto label_4ffc90;
        case 0x4ffc94u: goto label_4ffc94;
        case 0x4ffc98u: goto label_4ffc98;
        case 0x4ffc9cu: goto label_4ffc9c;
        default: break;
    }

    ctx->pc = 0x4fef90u;

label_4fef90:
    // 0x4fef90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4fef90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4fef94:
    // 0x4fef94: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x4fef94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_4fef98:
    // 0x4fef98: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4fef98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4fef9c:
    // 0x4fef9c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4fef9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4fefa0:
    // 0x4fefa0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4fefa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4fefa4:
    // 0x4fefa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4fefa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fefa8:
    // 0x4fefa8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4fefa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4fefac:
    // 0x4fefac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4fefacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4fefb0:
    // 0x4fefb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4fefb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4fefb4:
    // 0x4fefb4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4fefb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4fefb8:
    // 0x4fefb8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4fefb8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4fefbc:
    // 0x4fefbc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4fefbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4fefc0:
    // 0x4fefc0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4fefc0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4fefc4:
    // 0x4fefc4: 0x3445282e  ori         $a1, $v0, 0x282E
    ctx->pc = 0x4fefc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10286);
label_4fefc8:
    // 0x4fefc8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4fefc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4fefcc:
    // 0x4fefcc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4fefccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4fefd0:
    // 0x4fefd0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4fefd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4fefd4:
    // 0x4fefd4: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x4fefd4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_4fefd8:
    // 0x4fefd8: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x4fefd8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_4fefdc:
    // 0x4fefdc: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x4fefdcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
label_4fefe0:
    // 0x4fefe0: 0xc0d1570  jal         func_3455C0
label_4fefe4:
    if (ctx->pc == 0x4FEFE4u) {
        ctx->pc = 0x4FEFE4u;
            // 0x4fefe4: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x4FEFE8u;
        goto label_4fefe8;
    }
    ctx->pc = 0x4FEFE0u;
    SET_GPR_U32(ctx, 31, 0x4FEFE8u);
    ctx->pc = 0x4FEFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FEFE0u;
            // 0x4fefe4: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3455C0u;
    if (runtime->hasFunction(0x3455C0u)) {
        auto targetFn = runtime->lookupFunction(0x3455C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FEFE8u; }
        if (ctx->pc != 0x4FEFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003455C0_0x3455c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FEFE8u; }
        if (ctx->pc != 0x4FEFE8u) { return; }
    }
    ctx->pc = 0x4FEFE8u;
label_4fefe8:
    // 0x4fefe8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4fefe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4fefec:
    // 0x4fefec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4fefecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4feff0:
    // 0x4feff0: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x4feff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
label_4feff4:
    // 0x4feff4: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x4feff4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4feff8:
    // 0x4feff8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4feff8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4feffc:
    // 0x4feffc: 0xae7200d0  sw          $s2, 0xD0($s3)
    ctx->pc = 0x4feffcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 18));
label_4ff000:
    // 0x4ff000: 0xa27100d4  sb          $s1, 0xD4($s3)
    ctx->pc = 0x4ff000u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 212), (uint8_t)GPR_U32(ctx, 17));
label_4ff004:
    // 0x4ff004: 0xe67700e8  swc1        $f23, 0xE8($s3)
    ctx->pc = 0x4ff004u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 232), bits); }
label_4ff008:
    // 0x4ff008: 0xe67600ec  swc1        $f22, 0xEC($s3)
    ctx->pc = 0x4ff008u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 236), bits); }
label_4ff00c:
    // 0x4ff00c: 0xe67500f0  swc1        $f21, 0xF0($s3)
    ctx->pc = 0x4ff00cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 240), bits); }
label_4ff010:
    // 0x4ff010: 0xe67400f4  swc1        $f20, 0xF4($s3)
    ctx->pc = 0x4ff010u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 244), bits); }
label_4ff014:
    // 0x4ff014: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4ff014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4ff018:
    // 0x4ff018: 0xac7000d8  sw          $s0, 0xD8($v1)
    ctx->pc = 0x4ff018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 16));
label_4ff01c:
    // 0x4ff01c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x4ff01cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_4ff020:
    // 0x4ff020: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4ff020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4ff024:
    // 0x4ff024: 0x0  nop
    ctx->pc = 0x4ff024u;
    // NOP
label_4ff028:
    // 0x4ff028: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4ff02c:
    if (ctx->pc == 0x4FF02Cu) {
        ctx->pc = 0x4FF030u;
        goto label_4ff030;
    }
    ctx->pc = 0x4FF028u;
    {
        const bool branch_taken_0x4ff028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ff028) {
            ctx->pc = 0x4FF014u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ff014;
        }
    }
    ctx->pc = 0x4FF030u;
label_4ff030:
    // 0x4ff030: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4ff030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ff034:
    // 0x4ff034: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4ff034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4ff038:
    // 0x4ff038: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ff038u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ff03c:
    // 0x4ff03c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4ff03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4ff040:
    // 0x4ff040: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ff040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ff044:
    // 0x4ff044: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4ff044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4ff048:
    // 0x4ff048: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ff048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ff04c:
    // 0x4ff04c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4ff04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4ff050:
    // 0x4ff050: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ff050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ff054:
    // 0x4ff054: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4ff054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4ff058:
    // 0x4ff058: 0x3e00008  jr          $ra
label_4ff05c:
    if (ctx->pc == 0x4FF05Cu) {
        ctx->pc = 0x4FF05Cu;
            // 0x4ff05c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4FF060u;
        goto label_4ff060;
    }
    ctx->pc = 0x4FF058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF058u;
            // 0x4ff05c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FF060u;
label_4ff060:
    // 0x4ff060: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x4ff060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_4ff064:
    // 0x4ff064: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4ff068:
    if (ctx->pc == 0x4FF068u) {
        ctx->pc = 0x4FF068u;
            // 0x4ff068: 0x8c830084  lw          $v1, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->pc = 0x4FF06Cu;
        goto label_4ff06c;
    }
    ctx->pc = 0x4FF064u;
    {
        const bool branch_taken_0x4ff064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FF068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF064u;
            // 0x4ff068: 0x8c830084  lw          $v1, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff064) {
            ctx->pc = 0x4FF088u;
            goto label_4ff088;
        }
    }
    ctx->pc = 0x4FF06Cu;
label_4ff06c:
    // 0x4ff06c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x4ff06cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_4ff070:
    // 0x4ff070: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4ff070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4ff074:
    // 0x4ff074: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x4ff074u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_4ff078:
    // 0x4ff078: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x4ff078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_4ff07c:
    // 0x4ff07c: 0x0  nop
    ctx->pc = 0x4ff07cu;
    // NOP
label_4ff080:
    // 0x4ff080: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4ff084:
    if (ctx->pc == 0x4FF084u) {
        ctx->pc = 0x4FF088u;
        goto label_4ff088;
    }
    ctx->pc = 0x4FF080u;
    {
        const bool branch_taken_0x4ff080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ff080) {
            ctx->pc = 0x4FF06Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ff06c;
        }
    }
    ctx->pc = 0x4FF088u;
label_4ff088:
    // 0x4ff088: 0x3e00008  jr          $ra
label_4ff08c:
    if (ctx->pc == 0x4FF08Cu) {
        ctx->pc = 0x4FF090u;
        goto label_4ff090;
    }
    ctx->pc = 0x4FF088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FF090u;
label_4ff090:
    // 0x4ff090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ff090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ff094:
    // 0x4ff094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ff094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ff098:
    // 0x4ff098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ff098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ff09c:
    // 0x4ff09c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ff09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ff0a0:
    // 0x4ff0a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ff0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ff0a4:
    // 0x4ff0a4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_4ff0a8:
    if (ctx->pc == 0x4FF0A8u) {
        ctx->pc = 0x4FF0A8u;
            // 0x4ff0a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF0ACu;
        goto label_4ff0ac;
    }
    ctx->pc = 0x4FF0A4u;
    {
        const bool branch_taken_0x4ff0a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FF0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF0A4u;
            // 0x4ff0a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff0a4) {
            ctx->pc = 0x4FF110u;
            goto label_4ff110;
        }
    }
    ctx->pc = 0x4FF0ACu;
label_4ff0ac:
    // 0x4ff0ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ff0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ff0b0:
    // 0x4ff0b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ff0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ff0b4:
    // 0x4ff0b4: 0x24634750  addiu       $v1, $v1, 0x4750
    ctx->pc = 0x4ff0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18256));
label_4ff0b8:
    // 0x4ff0b8: 0x24424788  addiu       $v0, $v0, 0x4788
    ctx->pc = 0x4ff0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18312));
label_4ff0bc:
    // 0x4ff0bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ff0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4ff0c0:
    // 0x4ff0c0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4ff0c4:
    if (ctx->pc == 0x4FF0C4u) {
        ctx->pc = 0x4FF0C4u;
            // 0x4ff0c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4FF0C8u;
        goto label_4ff0c8;
    }
    ctx->pc = 0x4FF0C0u;
    {
        const bool branch_taken_0x4ff0c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FF0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF0C0u;
            // 0x4ff0c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff0c0) {
            ctx->pc = 0x4FF0F8u;
            goto label_4ff0f8;
        }
    }
    ctx->pc = 0x4FF0C8u;
label_4ff0c8:
    // 0x4ff0c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4ff0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4ff0cc:
    // 0x4ff0cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ff0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ff0d0:
    // 0x4ff0d0: 0x24630a80  addiu       $v1, $v1, 0xA80
    ctx->pc = 0x4ff0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2688));
label_4ff0d4:
    // 0x4ff0d4: 0x24420ab8  addiu       $v0, $v0, 0xAB8
    ctx->pc = 0x4ff0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2744));
label_4ff0d8:
    // 0x4ff0d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ff0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4ff0dc:
    // 0x4ff0dc: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x4ff0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_4ff0e0:
    // 0x4ff0e0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4ff0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_4ff0e4:
    // 0x4ff0e4: 0xc0aed1c  jal         func_2BB470
label_4ff0e8:
    if (ctx->pc == 0x4FF0E8u) {
        ctx->pc = 0x4FF0E8u;
            // 0x4ff0e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF0ECu;
        goto label_4ff0ec;
    }
    ctx->pc = 0x4FF0E4u;
    SET_GPR_U32(ctx, 31, 0x4FF0ECu);
    ctx->pc = 0x4FF0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF0E4u;
            // 0x4ff0e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF0ECu; }
        if (ctx->pc != 0x4FF0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF0ECu; }
        if (ctx->pc != 0x4FF0ECu) { return; }
    }
    ctx->pc = 0x4FF0ECu;
label_4ff0ec:
    // 0x4ff0ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ff0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ff0f0:
    // 0x4ff0f0: 0xc0b1b60  jal         func_2C6D80
label_4ff0f4:
    if (ctx->pc == 0x4FF0F4u) {
        ctx->pc = 0x4FF0F4u;
            // 0x4ff0f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF0F8u;
        goto label_4ff0f8;
    }
    ctx->pc = 0x4FF0F0u;
    SET_GPR_U32(ctx, 31, 0x4FF0F8u);
    ctx->pc = 0x4FF0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF0F0u;
            // 0x4ff0f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C6D80u;
    if (runtime->hasFunction(0x2C6D80u)) {
        auto targetFn = runtime->lookupFunction(0x2C6D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF0F8u; }
        if (ctx->pc != 0x4FF0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C6D80_0x2c6d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF0F8u; }
        if (ctx->pc != 0x4FF0F8u) { return; }
    }
    ctx->pc = 0x4FF0F8u;
label_4ff0f8:
    // 0x4ff0f8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4ff0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4ff0fc:
    // 0x4ff0fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ff0fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ff100:
    // 0x4ff100: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4ff104:
    if (ctx->pc == 0x4FF104u) {
        ctx->pc = 0x4FF104u;
            // 0x4ff104: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF108u;
        goto label_4ff108;
    }
    ctx->pc = 0x4FF100u;
    {
        const bool branch_taken_0x4ff100 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ff100) {
            ctx->pc = 0x4FF104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF100u;
            // 0x4ff104: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FF114u;
            goto label_4ff114;
        }
    }
    ctx->pc = 0x4FF108u;
label_4ff108:
    // 0x4ff108: 0xc0400a8  jal         func_1002A0
label_4ff10c:
    if (ctx->pc == 0x4FF10Cu) {
        ctx->pc = 0x4FF10Cu;
            // 0x4ff10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF110u;
        goto label_4ff110;
    }
    ctx->pc = 0x4FF108u;
    SET_GPR_U32(ctx, 31, 0x4FF110u);
    ctx->pc = 0x4FF10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF108u;
            // 0x4ff10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF110u; }
        if (ctx->pc != 0x4FF110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF110u; }
        if (ctx->pc != 0x4FF110u) { return; }
    }
    ctx->pc = 0x4FF110u;
label_4ff110:
    // 0x4ff110: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ff110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ff114:
    // 0x4ff114: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ff114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ff118:
    // 0x4ff118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ff118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ff11c:
    // 0x4ff11c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ff11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ff120:
    // 0x4ff120: 0x3e00008  jr          $ra
label_4ff124:
    if (ctx->pc == 0x4FF124u) {
        ctx->pc = 0x4FF124u;
            // 0x4ff124: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4FF128u;
        goto label_4ff128;
    }
    ctx->pc = 0x4FF120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF120u;
            // 0x4ff124: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FF128u;
label_4ff128:
    // 0x4ff128: 0x0  nop
    ctx->pc = 0x4ff128u;
    // NOP
label_4ff12c:
    // 0x4ff12c: 0x0  nop
    ctx->pc = 0x4ff12cu;
    // NOP
label_4ff130:
    // 0x4ff130: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x4ff130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_4ff134:
    // 0x4ff134: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4ff134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4ff138:
    // 0x4ff138: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4ff138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4ff13c:
    // 0x4ff13c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4ff13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4ff140:
    // 0x4ff140: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4ff140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4ff144:
    // 0x4ff144: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4ff144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4ff148:
    // 0x4ff148: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4ff148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4ff14c:
    // 0x4ff14c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4ff14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4ff150:
    // 0x4ff150: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4ff150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4ff154:
    // 0x4ff154: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4ff154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4ff158:
    // 0x4ff158: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ff158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ff15c:
    // 0x4ff15c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ff15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4ff160:
    // 0x4ff160: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4ff160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4ff164:
    // 0x4ff164: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4ff164u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4ff168:
    // 0x4ff168: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4ff16c:
    if (ctx->pc == 0x4FF16Cu) {
        ctx->pc = 0x4FF16Cu;
            // 0x4ff16c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF170u;
        goto label_4ff170;
    }
    ctx->pc = 0x4FF168u;
    {
        const bool branch_taken_0x4ff168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4FF16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF168u;
            // 0x4ff16c: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff168) {
            ctx->pc = 0x4FF1B8u;
            goto label_4ff1b8;
        }
    }
    ctx->pc = 0x4FF170u;
label_4ff170:
    // 0x4ff170: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4ff170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ff174:
    // 0x4ff174: 0x10a3007c  beq         $a1, $v1, . + 4 + (0x7C << 2)
label_4ff178:
    if (ctx->pc == 0x4FF178u) {
        ctx->pc = 0x4FF17Cu;
        goto label_4ff17c;
    }
    ctx->pc = 0x4FF174u;
    {
        const bool branch_taken_0x4ff174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ff174) {
            ctx->pc = 0x4FF368u;
            goto label_4ff368;
        }
    }
    ctx->pc = 0x4FF17Cu;
label_4ff17c:
    // 0x4ff17c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4ff17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ff180:
    // 0x4ff180: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4ff184:
    if (ctx->pc == 0x4FF184u) {
        ctx->pc = 0x4FF188u;
        goto label_4ff188;
    }
    ctx->pc = 0x4FF180u;
    {
        const bool branch_taken_0x4ff180 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ff180) {
            ctx->pc = 0x4FF190u;
            goto label_4ff190;
        }
    }
    ctx->pc = 0x4FF188u;
label_4ff188:
    // 0x4ff188: 0x10000077  b           . + 4 + (0x77 << 2)
label_4ff18c:
    if (ctx->pc == 0x4FF18Cu) {
        ctx->pc = 0x4FF190u;
        goto label_4ff190;
    }
    ctx->pc = 0x4FF188u;
    {
        const bool branch_taken_0x4ff188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ff188) {
            ctx->pc = 0x4FF368u;
            goto label_4ff368;
        }
    }
    ctx->pc = 0x4FF190u;
label_4ff190:
    // 0x4ff190: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ff190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ff194:
    // 0x4ff194: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ff194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ff198:
    // 0x4ff198: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4ff198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4ff19c:
    // 0x4ff19c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4ff19cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4ff1a0:
    // 0x4ff1a0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4ff1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4ff1a4:
    // 0x4ff1a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4ff1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4ff1a8:
    // 0x4ff1a8: 0x320f809  jalr        $t9
label_4ff1ac:
    if (ctx->pc == 0x4FF1ACu) {
        ctx->pc = 0x4FF1ACu;
            // 0x4ff1ac: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4FF1B0u;
        goto label_4ff1b0;
    }
    ctx->pc = 0x4FF1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FF1B0u);
        ctx->pc = 0x4FF1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF1A8u;
            // 0x4ff1ac: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FF1B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FF1B0u; }
            if (ctx->pc != 0x4FF1B0u) { return; }
        }
        }
    }
    ctx->pc = 0x4FF1B0u;
label_4ff1b0:
    // 0x4ff1b0: 0x1000006d  b           . + 4 + (0x6D << 2)
label_4ff1b4:
    if (ctx->pc == 0x4FF1B4u) {
        ctx->pc = 0x4FF1B8u;
        goto label_4ff1b8;
    }
    ctx->pc = 0x4FF1B0u;
    {
        const bool branch_taken_0x4ff1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ff1b0) {
            ctx->pc = 0x4FF368u;
            goto label_4ff368;
        }
    }
    ctx->pc = 0x4FF1B8u;
label_4ff1b8:
    // 0x4ff1b8: 0x8fc30070  lw          $v1, 0x70($fp)
    ctx->pc = 0x4ff1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_4ff1bc:
    // 0x4ff1bc: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
label_4ff1c0:
    if (ctx->pc == 0x4FF1C0u) {
        ctx->pc = 0x4FF1C0u;
            // 0x4ff1c0: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->pc = 0x4FF1C4u;
        goto label_4ff1c4;
    }
    ctx->pc = 0x4FF1BCu;
    {
        const bool branch_taken_0x4ff1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FF1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF1BCu;
            // 0x4ff1c0: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff1bc) {
            ctx->pc = 0x4FF368u;
            goto label_4ff368;
        }
    }
    ctx->pc = 0x4FF1C4u;
label_4ff1c4:
    // 0x4ff1c4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4ff1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4ff1c8:
    // 0x4ff1c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ff1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ff1cc:
    // 0x4ff1cc: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x4ff1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4ff1d0:
    // 0x4ff1d0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4ff1d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ff1d4:
    // 0x4ff1d4: 0x8c75e378  lw          $s5, -0x1C88($v1)
    ctx->pc = 0x4ff1d4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4ff1d8:
    // 0x4ff1d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4ff1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ff1dc:
    // 0x4ff1dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ff1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ff1e0:
    // 0x4ff1e0: 0x8c56e370  lw          $s6, -0x1C90($v0)
    ctx->pc = 0x4ff1e0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4ff1e4:
    // 0x4ff1e4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4ff1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4ff1e8:
    // 0x4ff1e8: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x4ff1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4ff1ec:
    // 0x4ff1ec: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x4ff1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4ff1f0:
    // 0x4ff1f0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4ff1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4ff1f4:
    // 0x4ff1f4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x4ff1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_4ff1f8:
    // 0x4ff1f8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4ff1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4ff1fc:
    // 0x4ff1fc: 0xc454af20  lwc1        $f20, -0x50E0($v0)
    ctx->pc = 0x4ff1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4ff200:
    // 0x4ff200: 0x8fc20088  lw          $v0, 0x88($fp)
    ctx->pc = 0x4ff200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
label_4ff204:
    // 0x4ff204: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x4ff204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_4ff208:
    // 0x4ff208: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x4ff208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_4ff20c:
    // 0x4ff20c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ff20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ff210:
    // 0x4ff210: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4ff210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ff214:
    // 0x4ff214: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4ff214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ff218:
    // 0x4ff218: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4ff218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4ff21c:
    // 0x4ff21c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x4ff21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_4ff220:
    // 0x4ff220: 0x8fc20074  lw          $v0, 0x74($fp)
    ctx->pc = 0x4ff220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_4ff224:
    // 0x4ff224: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4ff224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4ff228:
    // 0x4ff228: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4ff228u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ff22c:
    // 0x4ff22c: 0xc0d1c14  jal         func_347050
label_4ff230:
    if (ctx->pc == 0x4FF230u) {
        ctx->pc = 0x4FF230u;
            // 0x4ff230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF234u;
        goto label_4ff234;
    }
    ctx->pc = 0x4FF22Cu;
    SET_GPR_U32(ctx, 31, 0x4FF234u);
    ctx->pc = 0x4FF230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF22Cu;
            // 0x4ff230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF234u; }
        if (ctx->pc != 0x4FF234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF234u; }
        if (ctx->pc != 0x4FF234u) { return; }
    }
    ctx->pc = 0x4FF234u;
label_4ff234:
    // 0x4ff234: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ff234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ff238:
    // 0x4ff238: 0xc04f278  jal         func_13C9E0
label_4ff23c:
    if (ctx->pc == 0x4FF23Cu) {
        ctx->pc = 0x4FF23Cu;
            // 0x4ff23c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4FF240u;
        goto label_4ff240;
    }
    ctx->pc = 0x4FF238u;
    SET_GPR_U32(ctx, 31, 0x4FF240u);
    ctx->pc = 0x4FF23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF238u;
            // 0x4ff23c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF240u; }
        if (ctx->pc != 0x4FF240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF240u; }
        if (ctx->pc != 0x4FF240u) { return; }
    }
    ctx->pc = 0x4FF240u;
label_4ff240:
    // 0x4ff240: 0xc0d1dc8  jal         func_347720
label_4ff244:
    if (ctx->pc == 0x4FF244u) {
        ctx->pc = 0x4FF244u;
            // 0x4ff244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF248u;
        goto label_4ff248;
    }
    ctx->pc = 0x4FF240u;
    SET_GPR_U32(ctx, 31, 0x4FF248u);
    ctx->pc = 0x4FF244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF240u;
            // 0x4ff244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF248u; }
        if (ctx->pc != 0x4FF248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF248u; }
        if (ctx->pc != 0x4FF248u) { return; }
    }
    ctx->pc = 0x4FF248u;
label_4ff248:
    // 0x4ff248: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x4ff248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4ff24c:
    // 0x4ff24c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4ff24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4ff250:
    // 0x4ff250: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x4ff250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4ff254:
    // 0x4ff254: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x4ff254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4ff258:
    // 0x4ff258: 0xc04ce50  jal         func_133940
label_4ff25c:
    if (ctx->pc == 0x4FF25Cu) {
        ctx->pc = 0x4FF25Cu;
            // 0x4ff25c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4FF260u;
        goto label_4ff260;
    }
    ctx->pc = 0x4FF258u;
    SET_GPR_U32(ctx, 31, 0x4FF260u);
    ctx->pc = 0x4FF25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF258u;
            // 0x4ff25c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF260u; }
        if (ctx->pc != 0x4FF260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF260u; }
        if (ctx->pc != 0x4FF260u) { return; }
    }
    ctx->pc = 0x4FF260u;
label_4ff260:
    // 0x4ff260: 0xc0d1c10  jal         func_347040
label_4ff264:
    if (ctx->pc == 0x4FF264u) {
        ctx->pc = 0x4FF264u;
            // 0x4ff264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF268u;
        goto label_4ff268;
    }
    ctx->pc = 0x4FF260u;
    SET_GPR_U32(ctx, 31, 0x4FF268u);
    ctx->pc = 0x4FF264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF260u;
            // 0x4ff264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF268u; }
        if (ctx->pc != 0x4FF268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF268u; }
        if (ctx->pc != 0x4FF268u) { return; }
    }
    ctx->pc = 0x4FF268u;
label_4ff268:
    // 0x4ff268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ff268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ff26c:
    // 0x4ff26c: 0xc04ce80  jal         func_133A00
label_4ff270:
    if (ctx->pc == 0x4FF270u) {
        ctx->pc = 0x4FF270u;
            // 0x4ff270: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x4FF274u;
        goto label_4ff274;
    }
    ctx->pc = 0x4FF26Cu;
    SET_GPR_U32(ctx, 31, 0x4FF274u);
    ctx->pc = 0x4FF270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF26Cu;
            // 0x4ff270: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF274u; }
        if (ctx->pc != 0x4FF274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF274u; }
        if (ctx->pc != 0x4FF274u) { return; }
    }
    ctx->pc = 0x4FF274u;
label_4ff274:
    // 0x4ff274: 0xc0d63d8  jal         func_358F60
label_4ff278:
    if (ctx->pc == 0x4FF278u) {
        ctx->pc = 0x4FF278u;
            // 0x4ff278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF27Cu;
        goto label_4ff27c;
    }
    ctx->pc = 0x4FF274u;
    SET_GPR_U32(ctx, 31, 0x4FF27Cu);
    ctx->pc = 0x4FF278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF274u;
            // 0x4ff278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358F60u;
    if (runtime->hasFunction(0x358F60u)) {
        auto targetFn = runtime->lookupFunction(0x358F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF27Cu; }
        if (ctx->pc != 0x4FF27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358F60_0x358f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF27Cu; }
        if (ctx->pc != 0x4FF27Cu) { return; }
    }
    ctx->pc = 0x4FF27Cu;
label_4ff27c:
    // 0x4ff27c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x4ff27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4ff280:
    // 0x4ff280: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x4ff280u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4ff284:
    // 0x4ff284: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x4ff284u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ff288:
    // 0x4ff288: 0xc0d4108  jal         func_350420
label_4ff28c:
    if (ctx->pc == 0x4FF28Cu) {
        ctx->pc = 0x4FF28Cu;
            // 0x4ff28c: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4FF290u;
        goto label_4ff290;
    }
    ctx->pc = 0x4FF288u;
    SET_GPR_U32(ctx, 31, 0x4FF290u);
    ctx->pc = 0x4FF28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF288u;
            // 0x4ff28c: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF290u; }
        if (ctx->pc != 0x4FF290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF290u; }
        if (ctx->pc != 0x4FF290u) { return; }
    }
    ctx->pc = 0x4FF290u;
label_4ff290:
    // 0x4ff290: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4ff290u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ff294:
    // 0x4ff294: 0xc0d4104  jal         func_350410
label_4ff298:
    if (ctx->pc == 0x4FF298u) {
        ctx->pc = 0x4FF298u;
            // 0x4ff298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF29Cu;
        goto label_4ff29c;
    }
    ctx->pc = 0x4FF294u;
    SET_GPR_U32(ctx, 31, 0x4FF29Cu);
    ctx->pc = 0x4FF298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF294u;
            // 0x4ff298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF29Cu; }
        if (ctx->pc != 0x4FF29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF29Cu; }
        if (ctx->pc != 0x4FF29Cu) { return; }
    }
    ctx->pc = 0x4FF29Cu;
label_4ff29c:
    // 0x4ff29c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x4ff29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_4ff2a0:
    // 0x4ff2a0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4ff2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4ff2a4:
    // 0x4ff2a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4ff2a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ff2a8:
    // 0x4ff2a8: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x4ff2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4ff2ac:
    // 0x4ff2ac: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4ff2acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ff2b0:
    // 0x4ff2b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4ff2b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ff2b4:
    // 0x4ff2b4: 0xc0d40ac  jal         func_3502B0
label_4ff2b8:
    if (ctx->pc == 0x4FF2B8u) {
        ctx->pc = 0x4FF2B8u;
            // 0x4ff2b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4FF2BCu;
        goto label_4ff2bc;
    }
    ctx->pc = 0x4FF2B4u;
    SET_GPR_U32(ctx, 31, 0x4FF2BCu);
    ctx->pc = 0x4FF2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF2B4u;
            // 0x4ff2b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF2BCu; }
        if (ctx->pc != 0x4FF2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF2BCu; }
        if (ctx->pc != 0x4FF2BCu) { return; }
    }
    ctx->pc = 0x4FF2BCu;
label_4ff2bc:
    // 0x4ff2bc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4ff2bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4ff2c0:
    // 0x4ff2c0: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_4ff2c4:
    if (ctx->pc == 0x4FF2C4u) {
        ctx->pc = 0x4FF2C4u;
            // 0x4ff2c4: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4FF2C8u;
        goto label_4ff2c8;
    }
    ctx->pc = 0x4FF2C0u;
    {
        const bool branch_taken_0x4ff2c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FF2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF2C0u;
            // 0x4ff2c4: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff2c0) {
            ctx->pc = 0x4FF350u;
            goto label_4ff350;
        }
    }
    ctx->pc = 0x4FF2C8u;
label_4ff2c8:
    // 0x4ff2c8: 0xc04e738  jal         func_139CE0
label_4ff2cc:
    if (ctx->pc == 0x4FF2CCu) {
        ctx->pc = 0x4FF2CCu;
            // 0x4ff2cc: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x4FF2D0u;
        goto label_4ff2d0;
    }
    ctx->pc = 0x4FF2C8u;
    SET_GPR_U32(ctx, 31, 0x4FF2D0u);
    ctx->pc = 0x4FF2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF2C8u;
            // 0x4ff2cc: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF2D0u; }
        if (ctx->pc != 0x4FF2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF2D0u; }
        if (ctx->pc != 0x4FF2D0u) { return; }
    }
    ctx->pc = 0x4FF2D0u;
label_4ff2d0:
    // 0x4ff2d0: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x4ff2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_4ff2d4:
    // 0x4ff2d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ff2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4ff2d8:
    // 0x4ff2d8: 0xc04e4a4  jal         func_139290
label_4ff2dc:
    if (ctx->pc == 0x4FF2DCu) {
        ctx->pc = 0x4FF2DCu;
            // 0x4ff2dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF2E0u;
        goto label_4ff2e0;
    }
    ctx->pc = 0x4FF2D8u;
    SET_GPR_U32(ctx, 31, 0x4FF2E0u);
    ctx->pc = 0x4FF2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF2D8u;
            // 0x4ff2dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF2E0u; }
        if (ctx->pc != 0x4FF2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF2E0u; }
        if (ctx->pc != 0x4FF2E0u) { return; }
    }
    ctx->pc = 0x4FF2E0u;
label_4ff2e0:
    // 0x4ff2e0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x4ff2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_4ff2e4:
    // 0x4ff2e4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4ff2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4ff2e8:
    // 0x4ff2e8: 0xc04cd60  jal         func_133580
label_4ff2ec:
    if (ctx->pc == 0x4FF2ECu) {
        ctx->pc = 0x4FF2ECu;
            // 0x4ff2ec: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x4FF2F0u;
        goto label_4ff2f0;
    }
    ctx->pc = 0x4FF2E8u;
    SET_GPR_U32(ctx, 31, 0x4FF2F0u);
    ctx->pc = 0x4FF2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF2E8u;
            // 0x4ff2ec: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF2F0u; }
        if (ctx->pc != 0x4FF2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF2F0u; }
        if (ctx->pc != 0x4FF2F0u) { return; }
    }
    ctx->pc = 0x4FF2F0u;
label_4ff2f0:
    // 0x4ff2f0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4ff2f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ff2f4:
    // 0x4ff2f4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4ff2f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4ff2f8:
    // 0x4ff2f8: 0x320f809  jalr        $t9
label_4ff2fc:
    if (ctx->pc == 0x4FF2FCu) {
        ctx->pc = 0x4FF2FCu;
            // 0x4ff2fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF300u;
        goto label_4ff300;
    }
    ctx->pc = 0x4FF2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FF300u);
        ctx->pc = 0x4FF2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF2F8u;
            // 0x4ff2fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FF300u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FF300u; }
            if (ctx->pc != 0x4FF300u) { return; }
        }
        }
    }
    ctx->pc = 0x4FF300u;
label_4ff300:
    // 0x4ff300: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x4ff300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_4ff304:
    // 0x4ff304: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4ff304u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4ff308:
    // 0x4ff308: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4ff308u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ff30c:
    // 0x4ff30c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4ff30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4ff310:
    // 0x4ff310: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4ff310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4ff314:
    // 0x4ff314: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x4ff314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4ff318:
    // 0x4ff318: 0xc04cfcc  jal         func_133F30
label_4ff31c:
    if (ctx->pc == 0x4FF31Cu) {
        ctx->pc = 0x4FF31Cu;
            // 0x4ff31c: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x4FF320u;
        goto label_4ff320;
    }
    ctx->pc = 0x4FF318u;
    SET_GPR_U32(ctx, 31, 0x4FF320u);
    ctx->pc = 0x4FF31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF318u;
            // 0x4ff31c: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF320u; }
        if (ctx->pc != 0x4FF320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF320u; }
        if (ctx->pc != 0x4FF320u) { return; }
    }
    ctx->pc = 0x4FF320u;
label_4ff320:
    // 0x4ff320: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x4ff320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_4ff324:
    // 0x4ff324: 0xc66c001c  lwc1        $f12, 0x1C($s3)
    ctx->pc = 0x4ff324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4ff328:
    // 0x4ff328: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x4ff328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_4ff32c:
    // 0x4ff32c: 0xc054bbc  jal         func_152EF0
label_4ff330:
    if (ctx->pc == 0x4FF330u) {
        ctx->pc = 0x4FF330u;
            // 0x4ff330: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF334u;
        goto label_4ff334;
    }
    ctx->pc = 0x4FF32Cu;
    SET_GPR_U32(ctx, 31, 0x4FF334u);
    ctx->pc = 0x4FF330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF32Cu;
            // 0x4ff330: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF334u; }
        if (ctx->pc != 0x4FF334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF334u; }
        if (ctx->pc != 0x4FF334u) { return; }
    }
    ctx->pc = 0x4FF334u;
label_4ff334:
    // 0x4ff334: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x4ff334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_4ff338:
    // 0x4ff338: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4ff338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4ff33c:
    // 0x4ff33c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4ff33cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4ff340:
    // 0x4ff340: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4ff340u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4ff344:
    // 0x4ff344: 0xc054c2c  jal         func_1530B0
label_4ff348:
    if (ctx->pc == 0x4FF348u) {
        ctx->pc = 0x4FF348u;
            // 0x4ff348: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4FF34Cu;
        goto label_4ff34c;
    }
    ctx->pc = 0x4FF344u;
    SET_GPR_U32(ctx, 31, 0x4FF34Cu);
    ctx->pc = 0x4FF348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF344u;
            // 0x4ff348: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF34Cu; }
        if (ctx->pc != 0x4FF34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF34Cu; }
        if (ctx->pc != 0x4FF34Cu) { return; }
    }
    ctx->pc = 0x4FF34Cu;
label_4ff34c:
    // 0x4ff34c: 0x0  nop
    ctx->pc = 0x4ff34cu;
    // NOP
label_4ff350:
    // 0x4ff350: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x4ff350u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4ff354:
    // 0x4ff354: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4ff354u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4ff358:
    // 0x4ff358: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x4ff358u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ff35c:
    // 0x4ff35c: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
label_4ff360:
    if (ctx->pc == 0x4FF360u) {
        ctx->pc = 0x4FF360u;
            // 0x4ff360: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4FF364u;
        goto label_4ff364;
    }
    ctx->pc = 0x4FF35Cu;
    {
        const bool branch_taken_0x4ff35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FF360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF35Cu;
            // 0x4ff360: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff35c) {
            ctx->pc = 0x4FF220u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ff220;
        }
    }
    ctx->pc = 0x4FF364u;
label_4ff364:
    // 0x4ff364: 0x0  nop
    ctx->pc = 0x4ff364u;
    // NOP
label_4ff368:
    // 0x4ff368: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4ff368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4ff36c:
    // 0x4ff36c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4ff36cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4ff370:
    // 0x4ff370: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4ff370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4ff374:
    // 0x4ff374: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4ff374u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4ff378:
    // 0x4ff378: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4ff378u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4ff37c:
    // 0x4ff37c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4ff37cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4ff380:
    // 0x4ff380: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4ff380u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ff384:
    // 0x4ff384: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ff384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ff388:
    // 0x4ff388: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ff388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ff38c:
    // 0x4ff38c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ff38cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ff390:
    // 0x4ff390: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ff390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ff394:
    // 0x4ff394: 0x3e00008  jr          $ra
label_4ff398:
    if (ctx->pc == 0x4FF398u) {
        ctx->pc = 0x4FF398u;
            // 0x4ff398: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x4FF39Cu;
        goto label_4ff39c;
    }
    ctx->pc = 0x4FF394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF394u;
            // 0x4ff398: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FF39Cu;
label_4ff39c:
    // 0x4ff39c: 0x0  nop
    ctx->pc = 0x4ff39cu;
    // NOP
label_4ff3a0:
    // 0x4ff3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ff3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ff3a4:
    // 0x4ff3a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4ff3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4ff3a8:
    // 0x4ff3a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ff3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ff3ac:
    // 0x4ff3ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ff3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ff3b0:
    // 0x4ff3b0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4ff3b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4ff3b4:
    // 0x4ff3b4: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4ff3b8:
    if (ctx->pc == 0x4FF3B8u) {
        ctx->pc = 0x4FF3B8u;
            // 0x4ff3b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF3BCu;
        goto label_4ff3bc;
    }
    ctx->pc = 0x4FF3B4u;
    {
        const bool branch_taken_0x4ff3b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4FF3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF3B4u;
            // 0x4ff3b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff3b4) {
            ctx->pc = 0x4FF3E8u;
            goto label_4ff3e8;
        }
    }
    ctx->pc = 0x4FF3BCu;
label_4ff3bc:
    // 0x4ff3bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4ff3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ff3c0:
    // 0x4ff3c0: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4ff3c4:
    if (ctx->pc == 0x4FF3C4u) {
        ctx->pc = 0x4FF3C4u;
            // 0x4ff3c4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4FF3C8u;
        goto label_4ff3c8;
    }
    ctx->pc = 0x4FF3C0u;
    {
        const bool branch_taken_0x4ff3c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ff3c0) {
            ctx->pc = 0x4FF3C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF3C0u;
            // 0x4ff3c4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FF3DCu;
            goto label_4ff3dc;
        }
    }
    ctx->pc = 0x4FF3C8u;
label_4ff3c8:
    // 0x4ff3c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4ff3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ff3cc:
    // 0x4ff3cc: 0x10a30028  beq         $a1, $v1, . + 4 + (0x28 << 2)
label_4ff3d0:
    if (ctx->pc == 0x4FF3D0u) {
        ctx->pc = 0x4FF3D4u;
        goto label_4ff3d4;
    }
    ctx->pc = 0x4FF3CCu;
    {
        const bool branch_taken_0x4ff3cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ff3cc) {
            ctx->pc = 0x4FF470u;
            goto label_4ff470;
        }
    }
    ctx->pc = 0x4FF3D4u;
label_4ff3d4:
    // 0x4ff3d4: 0x10000026  b           . + 4 + (0x26 << 2)
label_4ff3d8:
    if (ctx->pc == 0x4FF3D8u) {
        ctx->pc = 0x4FF3DCu;
        goto label_4ff3dc;
    }
    ctx->pc = 0x4FF3D4u;
    {
        const bool branch_taken_0x4ff3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ff3d4) {
            ctx->pc = 0x4FF470u;
            goto label_4ff470;
        }
    }
    ctx->pc = 0x4FF3DCu;
label_4ff3dc:
    // 0x4ff3dc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4ff3dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4ff3e0:
    // 0x4ff3e0: 0x320f809  jalr        $t9
label_4ff3e4:
    if (ctx->pc == 0x4FF3E4u) {
        ctx->pc = 0x4FF3E8u;
        goto label_4ff3e8;
    }
    ctx->pc = 0x4FF3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FF3E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FF3E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FF3E8u; }
            if (ctx->pc != 0x4FF3E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4FF3E8u;
label_4ff3e8:
    // 0x4ff3e8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4ff3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4ff3ec:
    // 0x4ff3ec: 0x8e090088  lw          $t1, 0x88($s0)
    ctx->pc = 0x4ff3ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_4ff3f0:
    // 0x4ff3f0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4ff3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4ff3f4:
    // 0x4ff3f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4ff3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ff3f8:
    // 0x4ff3f8: 0x8e080084  lw          $t0, 0x84($s0)
    ctx->pc = 0x4ff3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4ff3fc:
    // 0x4ff3fc: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4ff3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ff400:
    // 0x4ff400: 0xc520001c  lwc1        $f0, 0x1C($t1)
    ctx->pc = 0x4ff400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ff404:
    // 0x4ff404: 0x2527001c  addiu       $a3, $t1, 0x1C
    ctx->pc = 0x4ff404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 28));
label_4ff408:
    // 0x4ff408: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4ff408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_4ff40c:
    // 0x4ff40c: 0xe520001c  swc1        $f0, 0x1C($t1)
    ctx->pc = 0x4ff40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 28), bits); }
label_4ff410:
    // 0x4ff410: 0x8d230014  lw          $v1, 0x14($t1)
    ctx->pc = 0x4ff410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
label_4ff414:
    // 0x4ff414: 0xc520001c  lwc1        $f0, 0x1C($t1)
    ctx->pc = 0x4ff414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ff418:
    // 0x4ff418: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4ff418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ff41c:
    // 0x4ff41c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4ff41cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ff420:
    // 0x4ff420: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4ff424:
    if (ctx->pc == 0x4FF424u) {
        ctx->pc = 0x4FF424u;
            // 0x4ff424: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF428u;
        goto label_4ff428;
    }
    ctx->pc = 0x4FF420u;
    {
        const bool branch_taken_0x4ff420 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4FF424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF420u;
            // 0x4ff424: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff420) {
            ctx->pc = 0x4FF42Cu;
            goto label_4ff42c;
        }
    }
    ctx->pc = 0x4FF428u;
label_4ff428:
    // 0x4ff428: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ff428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ff42c:
    // 0x4ff42c: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_4ff430:
    if (ctx->pc == 0x4FF430u) {
        ctx->pc = 0x4FF430u;
            // 0x4ff430: 0x62042  srl         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x4FF434u;
        goto label_4ff434;
    }
    ctx->pc = 0x4FF42Cu;
    {
        const bool branch_taken_0x4ff42c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x4ff42c) {
            ctx->pc = 0x4FF430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF42Cu;
            // 0x4ff430: 0x62042  srl         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FF440u;
            goto label_4ff440;
        }
    }
    ctx->pc = 0x4FF434u;
label_4ff434:
    // 0x4ff434: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4ff434u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ff438:
    // 0x4ff438: 0x10000007  b           . + 4 + (0x7 << 2)
label_4ff43c:
    if (ctx->pc == 0x4FF43Cu) {
        ctx->pc = 0x4FF43Cu;
            // 0x4ff43c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4FF440u;
        goto label_4ff440;
    }
    ctx->pc = 0x4FF438u;
    {
        const bool branch_taken_0x4ff438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FF43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF438u;
            // 0x4ff43c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff438) {
            ctx->pc = 0x4FF458u;
            goto label_4ff458;
        }
    }
    ctx->pc = 0x4FF440u;
label_4ff440:
    // 0x4ff440: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x4ff440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_4ff444:
    // 0x4ff444: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4ff444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4ff448:
    // 0x4ff448: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4ff448u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ff44c:
    // 0x4ff44c: 0x0  nop
    ctx->pc = 0x4ff44cu;
    // NOP
label_4ff450:
    // 0x4ff450: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4ff450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4ff454:
    // 0x4ff454: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4ff454u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4ff458:
    // 0x4ff458: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x4ff458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ff45c:
    // 0x4ff45c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4ff45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_4ff460:
    // 0x4ff460: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x4ff460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_4ff464:
    // 0x4ff464: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4ff464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4ff468:
    // 0x4ff468: 0x1500ffe5  bnez        $t0, . + 4 + (-0x1B << 2)
label_4ff46c:
    if (ctx->pc == 0x4FF46Cu) {
        ctx->pc = 0x4FF46Cu;
            // 0x4ff46c: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->pc = 0x4FF470u;
        goto label_4ff470;
    }
    ctx->pc = 0x4FF468u;
    {
        const bool branch_taken_0x4ff468 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FF46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF468u;
            // 0x4ff46c: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff468) {
            ctx->pc = 0x4FF400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ff400;
        }
    }
    ctx->pc = 0x4FF470u;
label_4ff470:
    // 0x4ff470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ff470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ff474:
    // 0x4ff474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ff474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ff478:
    // 0x4ff478: 0x3e00008  jr          $ra
label_4ff47c:
    if (ctx->pc == 0x4FF47Cu) {
        ctx->pc = 0x4FF47Cu;
            // 0x4ff47c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4FF480u;
        goto label_4ff480;
    }
    ctx->pc = 0x4FF478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF478u;
            // 0x4ff47c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FF480u;
label_4ff480:
    // 0x4ff480: 0x813fc24  j           func_4FF090
label_4ff484:
    if (ctx->pc == 0x4FF484u) {
        ctx->pc = 0x4FF484u;
            // 0x4ff484: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4FF488u;
        goto label_4ff488;
    }
    ctx->pc = 0x4FF480u;
    ctx->pc = 0x4FF484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF480u;
            // 0x4ff484: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FF090u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_4ff090;
    ctx->pc = 0x4FF488u;
label_4ff488:
    // 0x4ff488: 0x0  nop
    ctx->pc = 0x4ff488u;
    // NOP
label_4ff48c:
    // 0x4ff48c: 0x0  nop
    ctx->pc = 0x4ff48cu;
    // NOP
label_4ff490:
    // 0x4ff490: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4ff490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4ff494:
    // 0x4ff494: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4ff494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4ff498:
    // 0x4ff498: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4ff498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4ff49c:
    // 0x4ff49c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4ff49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4ff4a0:
    // 0x4ff4a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4ff4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4ff4a4:
    // 0x4ff4a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ff4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ff4a8:
    // 0x4ff4a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ff4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ff4ac:
    // 0x4ff4ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ff4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ff4b0:
    // 0x4ff4b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ff4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ff4b4:
    // 0x4ff4b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ff4b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ff4b8:
    // 0x4ff4b8: 0x8c728a08  lw          $s2, -0x75F8($v1)
    ctx->pc = 0x4ff4b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4ff4bc:
    // 0x4ff4bc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4ff4bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4ff4c0:
    // 0x4ff4c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ff4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ff4c4:
    // 0x4ff4c4: 0x10a300d5  beq         $a1, $v1, . + 4 + (0xD5 << 2)
label_4ff4c8:
    if (ctx->pc == 0x4FF4C8u) {
        ctx->pc = 0x4FF4C8u;
            // 0x4ff4c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF4CCu;
        goto label_4ff4cc;
    }
    ctx->pc = 0x4FF4C4u;
    {
        const bool branch_taken_0x4ff4c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4FF4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF4C4u;
            // 0x4ff4c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff4c4) {
            ctx->pc = 0x4FF81Cu;
            goto label_4ff81c;
        }
    }
    ctx->pc = 0x4FF4CCu;
label_4ff4cc:
    // 0x4ff4cc: 0x50a000ce  beql        $a1, $zero, . + 4 + (0xCE << 2)
label_4ff4d0:
    if (ctx->pc == 0x4FF4D0u) {
        ctx->pc = 0x4FF4D0u;
            // 0x4ff4d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4FF4D4u;
        goto label_4ff4d4;
    }
    ctx->pc = 0x4FF4CCu;
    {
        const bool branch_taken_0x4ff4cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ff4cc) {
            ctx->pc = 0x4FF4D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF4CCu;
            // 0x4ff4d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FF808u;
            goto label_4ff808;
        }
    }
    ctx->pc = 0x4FF4D4u;
label_4ff4d4:
    // 0x4ff4d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4ff4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4ff4d8:
    // 0x4ff4d8: 0x50a30094  beql        $a1, $v1, . + 4 + (0x94 << 2)
label_4ff4dc:
    if (ctx->pc == 0x4FF4DCu) {
        ctx->pc = 0x4FF4DCu;
            // 0x4ff4dc: 0x9242007d  lbu         $v0, 0x7D($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 125)));
        ctx->pc = 0x4FF4E0u;
        goto label_4ff4e0;
    }
    ctx->pc = 0x4FF4D8u;
    {
        const bool branch_taken_0x4ff4d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ff4d8) {
            ctx->pc = 0x4FF4DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF4D8u;
            // 0x4ff4dc: 0x9242007d  lbu         $v0, 0x7D($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 125)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FF72Cu;
            goto label_4ff72c;
        }
    }
    ctx->pc = 0x4FF4E0u;
label_4ff4e0:
    // 0x4ff4e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4ff4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ff4e4:
    // 0x4ff4e4: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
label_4ff4e8:
    if (ctx->pc == 0x4FF4E8u) {
        ctx->pc = 0x4FF4ECu;
        goto label_4ff4ec;
    }
    ctx->pc = 0x4FF4E4u;
    {
        const bool branch_taken_0x4ff4e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ff4e4) {
            ctx->pc = 0x4FF54Cu;
            goto label_4ff54c;
        }
    }
    ctx->pc = 0x4FF4ECu;
label_4ff4ec:
    // 0x4ff4ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4ff4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ff4f0:
    // 0x4ff4f0: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4ff4f4:
    if (ctx->pc == 0x4FF4F4u) {
        ctx->pc = 0x4FF4F4u;
            // 0x4ff4f4: 0x9243007d  lbu         $v1, 0x7D($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 125)));
        ctx->pc = 0x4FF4F8u;
        goto label_4ff4f8;
    }
    ctx->pc = 0x4FF4F0u;
    {
        const bool branch_taken_0x4ff4f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ff4f0) {
            ctx->pc = 0x4FF4F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF4F0u;
            // 0x4ff4f4: 0x9243007d  lbu         $v1, 0x7D($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 125)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FF500u;
            goto label_4ff500;
        }
    }
    ctx->pc = 0x4FF4F8u;
label_4ff4f8:
    // 0x4ff4f8: 0x100000ce  b           . + 4 + (0xCE << 2)
label_4ff4fc:
    if (ctx->pc == 0x4FF4FCu) {
        ctx->pc = 0x4FF4FCu;
            // 0x4ff4fc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x4FF500u;
        goto label_4ff500;
    }
    ctx->pc = 0x4FF4F8u;
    {
        const bool branch_taken_0x4ff4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FF4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF4F8u;
            // 0x4ff4fc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff4f8) {
            ctx->pc = 0x4FF834u;
            goto label_4ff834;
        }
    }
    ctx->pc = 0x4FF500u;
label_4ff500:
    // 0x4ff500: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_4ff504:
    if (ctx->pc == 0x4FF504u) {
        ctx->pc = 0x4FF504u;
            // 0x4ff504: 0xc6420018  lwc1        $f2, 0x18($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x4FF508u;
        goto label_4ff508;
    }
    ctx->pc = 0x4FF500u;
    {
        const bool branch_taken_0x4ff500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ff500) {
            ctx->pc = 0x4FF504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF500u;
            // 0x4ff504: 0xc6420018  lwc1        $f2, 0x18($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FF520u;
            goto label_4ff520;
        }
    }
    ctx->pc = 0x4FF508u;
label_4ff508:
    // 0x4ff508: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ff508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ff50c:
    // 0x4ff50c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ff50cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ff510:
    // 0x4ff510: 0x320f809  jalr        $t9
label_4ff514:
    if (ctx->pc == 0x4FF514u) {
        ctx->pc = 0x4FF514u;
            // 0x4ff514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF518u;
        goto label_4ff518;
    }
    ctx->pc = 0x4FF510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FF518u);
        ctx->pc = 0x4FF514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF510u;
            // 0x4ff514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FF518u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FF518u; }
            if (ctx->pc != 0x4FF518u) { return; }
        }
        }
    }
    ctx->pc = 0x4FF518u;
label_4ff518:
    // 0x4ff518: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_4ff51c:
    if (ctx->pc == 0x4FF51Cu) {
        ctx->pc = 0x4FF520u;
        goto label_4ff520;
    }
    ctx->pc = 0x4FF518u;
    {
        const bool branch_taken_0x4ff518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ff518) {
            ctx->pc = 0x4FF830u;
            goto label_4ff830;
        }
    }
    ctx->pc = 0x4FF520u;
label_4ff520:
    // 0x4ff520: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x4ff520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ff524:
    // 0x4ff524: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ff524u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ff528:
    // 0x4ff528: 0x0  nop
    ctx->pc = 0x4ff528u;
    // NOP
label_4ff52c:
    // 0x4ff52c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4ff52cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4ff530:
    // 0x4ff530: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4ff530u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ff534:
    // 0x4ff534: 0x450000be  bc1f        . + 4 + (0xBE << 2)
label_4ff538:
    if (ctx->pc == 0x4FF538u) {
        ctx->pc = 0x4FF538u;
            // 0x4ff538: 0xe6210058  swc1        $f1, 0x58($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->pc = 0x4FF53Cu;
        goto label_4ff53c;
    }
    ctx->pc = 0x4FF534u;
    {
        const bool branch_taken_0x4ff534 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4FF538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF534u;
            // 0x4ff538: 0xe6210058  swc1        $f1, 0x58($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff534) {
            ctx->pc = 0x4FF830u;
            goto label_4ff830;
        }
    }
    ctx->pc = 0x4FF53Cu;
label_4ff53c:
    // 0x4ff53c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ff53cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ff540:
    // 0x4ff540: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4ff540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4ff544:
    // 0x4ff544: 0x320f809  jalr        $t9
label_4ff548:
    if (ctx->pc == 0x4FF548u) {
        ctx->pc = 0x4FF54Cu;
        goto label_4ff54c;
    }
    ctx->pc = 0x4FF544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FF54Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FF54Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FF54Cu; }
            if (ctx->pc != 0x4FF54Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4FF54Cu;
label_4ff54c:
    // 0x4ff54c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4ff54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4ff550:
    // 0x4ff550: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x4ff550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4ff554:
    // 0x4ff554: 0x9083007d  lbu         $v1, 0x7D($a0)
    ctx->pc = 0x4ff554u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 125)));
label_4ff558:
    // 0x4ff558: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_4ff55c:
    if (ctx->pc == 0x4FF55Cu) {
        ctx->pc = 0x4FF560u;
        goto label_4ff560;
    }
    ctx->pc = 0x4FF558u;
    {
        const bool branch_taken_0x4ff558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ff558) {
            ctx->pc = 0x4FF57Cu;
            goto label_4ff57c;
        }
    }
    ctx->pc = 0x4FF560u;
label_4ff560:
    // 0x4ff560: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4ff560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ff564:
    // 0x4ff564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ff564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ff568:
    // 0x4ff568: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ff568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ff56c:
    // 0x4ff56c: 0x320f809  jalr        $t9
label_4ff570:
    if (ctx->pc == 0x4FF570u) {
        ctx->pc = 0x4FF570u;
            // 0x4ff570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF574u;
        goto label_4ff574;
    }
    ctx->pc = 0x4FF56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FF574u);
        ctx->pc = 0x4FF570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF56Cu;
            // 0x4ff570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FF574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FF574u; }
            if (ctx->pc != 0x4FF574u) { return; }
        }
        }
    }
    ctx->pc = 0x4FF574u;
label_4ff574:
    // 0x4ff574: 0x100000ae  b           . + 4 + (0xAE << 2)
label_4ff578:
    if (ctx->pc == 0x4FF578u) {
        ctx->pc = 0x4FF57Cu;
        goto label_4ff57c;
    }
    ctx->pc = 0x4FF574u;
    {
        const bool branch_taken_0x4ff574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ff574) {
            ctx->pc = 0x4FF830u;
            goto label_4ff830;
        }
    }
    ctx->pc = 0x4FF57Cu;
label_4ff57c:
    // 0x4ff57c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4ff57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4ff580:
    // 0x4ff580: 0x9063f2f8  lbu         $v1, -0xD08($v1)
    ctx->pc = 0x4ff580u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294963960)));
label_4ff584:
    // 0x4ff584: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_4ff588:
    if (ctx->pc == 0x4FF588u) {
        ctx->pc = 0x4FF588u;
            // 0x4ff588: 0xc4830018  lwc1        $f3, 0x18($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x4FF58Cu;
        goto label_4ff58c;
    }
    ctx->pc = 0x4FF584u;
    {
        const bool branch_taken_0x4ff584 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4FF588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF584u;
            // 0x4ff588: 0xc4830018  lwc1        $f3, 0x18($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff584) {
            ctx->pc = 0x4FF598u;
            goto label_4ff598;
        }
    }
    ctx->pc = 0x4FF58Cu;
label_4ff58c:
    // 0x4ff58c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ff58cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ff590:
    // 0x4ff590: 0x10000008  b           . + 4 + (0x8 << 2)
label_4ff594:
    if (ctx->pc == 0x4FF594u) {
        ctx->pc = 0x4FF594u;
            // 0x4ff594: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4FF598u;
        goto label_4ff598;
    }
    ctx->pc = 0x4FF590u;
    {
        const bool branch_taken_0x4ff590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FF594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF590u;
            // 0x4ff594: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff590) {
            ctx->pc = 0x4FF5B4u;
            goto label_4ff5b4;
        }
    }
    ctx->pc = 0x4FF598u;
label_4ff598:
    // 0x4ff598: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x4ff598u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_4ff59c:
    // 0x4ff59c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4ff59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4ff5a0:
    // 0x4ff5a0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4ff5a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4ff5a4:
    // 0x4ff5a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4ff5a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ff5a8:
    // 0x4ff5a8: 0x0  nop
    ctx->pc = 0x4ff5a8u;
    // NOP
label_4ff5ac:
    // 0x4ff5ac: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4ff5acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4ff5b0:
    // 0x4ff5b0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4ff5b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4ff5b4:
    // 0x4ff5b4: 0x92230068  lbu         $v1, 0x68($s1)
    ctx->pc = 0x4ff5b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
label_4ff5b8:
    // 0x4ff5b8: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4ff5bc:
    if (ctx->pc == 0x4FF5BCu) {
        ctx->pc = 0x4FF5BCu;
            // 0x4ff5bc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4FF5C0u;
        goto label_4ff5c0;
    }
    ctx->pc = 0x4FF5B8u;
    {
        const bool branch_taken_0x4ff5b8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4ff5b8) {
            ctx->pc = 0x4FF5BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF5B8u;
            // 0x4ff5bc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FF5CCu;
            goto label_4ff5cc;
        }
    }
    ctx->pc = 0x4FF5C0u;
label_4ff5c0:
    // 0x4ff5c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ff5c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ff5c4:
    // 0x4ff5c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4ff5c8:
    if (ctx->pc == 0x4FF5C8u) {
        ctx->pc = 0x4FF5C8u;
            // 0x4ff5c8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4FF5CCu;
        goto label_4ff5cc;
    }
    ctx->pc = 0x4FF5C4u;
    {
        const bool branch_taken_0x4ff5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FF5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF5C4u;
            // 0x4ff5c8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff5c4) {
            ctx->pc = 0x4FF5E4u;
            goto label_4ff5e4;
        }
    }
    ctx->pc = 0x4FF5CCu;
label_4ff5cc:
    // 0x4ff5cc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4ff5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4ff5d0:
    // 0x4ff5d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4ff5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4ff5d4:
    // 0x4ff5d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4ff5d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ff5d8:
    // 0x4ff5d8: 0x0  nop
    ctx->pc = 0x4ff5d8u;
    // NOP
label_4ff5dc:
    // 0x4ff5dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4ff5dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4ff5e0:
    // 0x4ff5e0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4ff5e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4ff5e4:
    // 0x4ff5e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ff5e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ff5e8:
    // 0x4ff5e8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4ff5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4ff5ec:
    // 0x4ff5ec: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4ff5ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4ff5f0:
    // 0x4ff5f0: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x4ff5f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4ff5f4:
    // 0x4ff5f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ff5f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ff5f8:
    // 0x4ff5f8: 0x0  nop
    ctx->pc = 0x4ff5f8u;
    // NOP
label_4ff5fc:
    // 0x4ff5fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4ff5fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ff600:
    // 0x4ff600: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4ff604:
    if (ctx->pc == 0x4FF604u) {
        ctx->pc = 0x4FF604u;
            // 0x4ff604: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4FF608u;
        goto label_4ff608;
    }
    ctx->pc = 0x4FF600u;
    {
        const bool branch_taken_0x4ff600 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ff600) {
            ctx->pc = 0x4FF604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF600u;
            // 0x4ff604: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FF618u;
            goto label_4ff618;
        }
    }
    ctx->pc = 0x4FF608u;
label_4ff608:
    // 0x4ff608: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ff608u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ff60c:
    // 0x4ff60c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4ff60cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4ff610:
    // 0x4ff610: 0x10000007  b           . + 4 + (0x7 << 2)
label_4ff614:
    if (ctx->pc == 0x4FF614u) {
        ctx->pc = 0x4FF614u;
            // 0x4ff614: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4FF618u;
        goto label_4ff618;
    }
    ctx->pc = 0x4FF610u;
    {
        const bool branch_taken_0x4ff610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FF614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF610u;
            // 0x4ff614: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff610) {
            ctx->pc = 0x4FF630u;
            goto label_4ff630;
        }
    }
    ctx->pc = 0x4FF618u;
label_4ff618:
    // 0x4ff618: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x4ff618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_4ff61c:
    // 0x4ff61c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ff61cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ff620:
    // 0x4ff620: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4ff620u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4ff624:
    // 0x4ff624: 0x0  nop
    ctx->pc = 0x4ff624u;
    // NOP
label_4ff628:
    // 0x4ff628: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4ff628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4ff62c:
    // 0x4ff62c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4ff62cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4ff630:
    // 0x4ff630: 0xa2240068  sb          $a0, 0x68($s1)
    ctx->pc = 0x4ff630u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 4));
label_4ff634:
    // 0x4ff634: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4ff634u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ff638:
    // 0x4ff638: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x4ff638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ff63c:
    // 0x4ff63c: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x4ff63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_4ff640:
    // 0x4ff640: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x4ff640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_4ff644:
    // 0x4ff644: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
label_4ff648:
    if (ctx->pc == 0x4FF648u) {
        ctx->pc = 0x4FF648u;
            // 0x4ff648: 0x26530074  addiu       $s3, $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
        ctx->pc = 0x4FF64Cu;
        goto label_4ff64c;
    }
    ctx->pc = 0x4FF644u;
    {
        const bool branch_taken_0x4ff644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FF648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF644u;
            // 0x4ff648: 0x26530074  addiu       $s3, $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff644) {
            ctx->pc = 0x4FF6F8u;
            goto label_4ff6f8;
        }
    }
    ctx->pc = 0x4FF64Cu;
label_4ff64c:
    // 0x4ff64c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ff64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ff650:
    // 0x4ff650: 0xc11e5a0  jal         func_479680
label_4ff654:
    if (ctx->pc == 0x4FF654u) {
        ctx->pc = 0x4FF654u;
            // 0x4ff654: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF658u;
        goto label_4ff658;
    }
    ctx->pc = 0x4FF650u;
    SET_GPR_U32(ctx, 31, 0x4FF658u);
    ctx->pc = 0x4FF654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF650u;
            // 0x4ff654: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x479680u;
    if (runtime->hasFunction(0x479680u)) {
        auto targetFn = runtime->lookupFunction(0x479680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF658u; }
        if (ctx->pc != 0x4FF658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00479680_0x479680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF658u; }
        if (ctx->pc != 0x4FF658u) { return; }
    }
    ctx->pc = 0x4FF658u;
label_4ff658:
    // 0x4ff658: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_4ff65c:
    if (ctx->pc == 0x4FF65Cu) {
        ctx->pc = 0x4FF660u;
        goto label_4ff660;
    }
    ctx->pc = 0x4FF658u;
    {
        const bool branch_taken_0x4ff658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ff658) {
            ctx->pc = 0x4FF6F8u;
            goto label_4ff6f8;
        }
    }
    ctx->pc = 0x4FF660u;
label_4ff660:
    // 0x4ff660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ff660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ff664:
    // 0x4ff664: 0xc11e56c  jal         func_4795B0
label_4ff668:
    if (ctx->pc == 0x4FF668u) {
        ctx->pc = 0x4FF668u;
            // 0x4ff668: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF66Cu;
        goto label_4ff66c;
    }
    ctx->pc = 0x4FF664u;
    SET_GPR_U32(ctx, 31, 0x4FF66Cu);
    ctx->pc = 0x4FF668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF664u;
            // 0x4ff668: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4795B0u;
    if (runtime->hasFunction(0x4795B0u)) {
        auto targetFn = runtime->lookupFunction(0x4795B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF66Cu; }
        if (ctx->pc != 0x4FF66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004795B0_0x4795b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF66Cu; }
        if (ctx->pc != 0x4FF66Cu) { return; }
    }
    ctx->pc = 0x4FF66Cu;
label_4ff66c:
    // 0x4ff66c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4ff66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4ff670:
    // 0x4ff670: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x4ff670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_4ff674:
    // 0x4ff674: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4ff678:
    if (ctx->pc == 0x4FF678u) {
        ctx->pc = 0x4FF67Cu;
        goto label_4ff67c;
    }
    ctx->pc = 0x4FF674u;
    {
        const bool branch_taken_0x4ff674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ff674) {
            ctx->pc = 0x4FF688u;
            goto label_4ff688;
        }
    }
    ctx->pc = 0x4FF67Cu;
label_4ff67c:
    // 0x4ff67c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ff67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ff680:
    // 0x4ff680: 0xc11e55c  jal         func_479570
label_4ff684:
    if (ctx->pc == 0x4FF684u) {
        ctx->pc = 0x4FF684u;
            // 0x4ff684: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF688u;
        goto label_4ff688;
    }
    ctx->pc = 0x4FF680u;
    SET_GPR_U32(ctx, 31, 0x4FF688u);
    ctx->pc = 0x4FF684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF680u;
            // 0x4ff684: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x479570u;
    if (runtime->hasFunction(0x479570u)) {
        auto targetFn = runtime->lookupFunction(0x479570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF688u; }
        if (ctx->pc != 0x4FF688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00479570_0x479570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF688u; }
        if (ctx->pc != 0x4FF688u) { return; }
    }
    ctx->pc = 0x4FF688u;
label_4ff688:
    // 0x4ff688: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4ff688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4ff68c:
    // 0x4ff68c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x4ff68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_4ff690:
    // 0x4ff690: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4ff694:
    if (ctx->pc == 0x4FF694u) {
        ctx->pc = 0x4FF698u;
        goto label_4ff698;
    }
    ctx->pc = 0x4FF690u;
    {
        const bool branch_taken_0x4ff690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ff690) {
            ctx->pc = 0x4FF6A8u;
            goto label_4ff6a8;
        }
    }
    ctx->pc = 0x4FF698u;
label_4ff698:
    // 0x4ff698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ff698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ff69c:
    // 0x4ff69c: 0xc11e54c  jal         func_479530
label_4ff6a0:
    if (ctx->pc == 0x4FF6A0u) {
        ctx->pc = 0x4FF6A0u;
            // 0x4ff6a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF6A4u;
        goto label_4ff6a4;
    }
    ctx->pc = 0x4FF69Cu;
    SET_GPR_U32(ctx, 31, 0x4FF6A4u);
    ctx->pc = 0x4FF6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF69Cu;
            // 0x4ff6a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x479530u;
    if (runtime->hasFunction(0x479530u)) {
        auto targetFn = runtime->lookupFunction(0x479530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF6A4u; }
        if (ctx->pc != 0x4FF6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00479530_0x479530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF6A4u; }
        if (ctx->pc != 0x4FF6A4u) { return; }
    }
    ctx->pc = 0x4FF6A4u;
label_4ff6a4:
    // 0x4ff6a4: 0x0  nop
    ctx->pc = 0x4ff6a4u;
    // NOP
label_4ff6a8:
    // 0x4ff6a8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4ff6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4ff6ac:
    // 0x4ff6ac: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x4ff6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_4ff6b0:
    // 0x4ff6b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4ff6b4:
    if (ctx->pc == 0x4FF6B4u) {
        ctx->pc = 0x4FF6B8u;
        goto label_4ff6b8;
    }
    ctx->pc = 0x4FF6B0u;
    {
        const bool branch_taken_0x4ff6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ff6b0) {
            ctx->pc = 0x4FF6C8u;
            goto label_4ff6c8;
        }
    }
    ctx->pc = 0x4FF6B8u;
label_4ff6b8:
    // 0x4ff6b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ff6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ff6bc:
    // 0x4ff6bc: 0xc11e53c  jal         func_4794F0
label_4ff6c0:
    if (ctx->pc == 0x4FF6C0u) {
        ctx->pc = 0x4FF6C0u;
            // 0x4ff6c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF6C4u;
        goto label_4ff6c4;
    }
    ctx->pc = 0x4FF6BCu;
    SET_GPR_U32(ctx, 31, 0x4FF6C4u);
    ctx->pc = 0x4FF6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF6BCu;
            // 0x4ff6c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4794F0u;
    if (runtime->hasFunction(0x4794F0u)) {
        auto targetFn = runtime->lookupFunction(0x4794F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF6C4u; }
        if (ctx->pc != 0x4FF6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004794F0_0x4794f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF6C4u; }
        if (ctx->pc != 0x4FF6C4u) { return; }
    }
    ctx->pc = 0x4FF6C4u;
label_4ff6c4:
    // 0x4ff6c4: 0x0  nop
    ctx->pc = 0x4ff6c4u;
    // NOP
label_4ff6c8:
    // 0x4ff6c8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4ff6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4ff6cc:
    // 0x4ff6cc: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x4ff6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_4ff6d0:
    // 0x4ff6d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4ff6d4:
    if (ctx->pc == 0x4FF6D4u) {
        ctx->pc = 0x4FF6D8u;
        goto label_4ff6d8;
    }
    ctx->pc = 0x4FF6D0u;
    {
        const bool branch_taken_0x4ff6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ff6d0) {
            ctx->pc = 0x4FF6E8u;
            goto label_4ff6e8;
        }
    }
    ctx->pc = 0x4FF6D8u;
label_4ff6d8:
    // 0x4ff6d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ff6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ff6dc:
    // 0x4ff6dc: 0xc11e524  jal         func_479490
label_4ff6e0:
    if (ctx->pc == 0x4FF6E0u) {
        ctx->pc = 0x4FF6E0u;
            // 0x4ff6e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF6E4u;
        goto label_4ff6e4;
    }
    ctx->pc = 0x4FF6DCu;
    SET_GPR_U32(ctx, 31, 0x4FF6E4u);
    ctx->pc = 0x4FF6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF6DCu;
            // 0x4ff6e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x479490u;
    if (runtime->hasFunction(0x479490u)) {
        auto targetFn = runtime->lookupFunction(0x479490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF6E4u; }
        if (ctx->pc != 0x4FF6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00479490_0x479490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF6E4u; }
        if (ctx->pc != 0x4FF6E4u) { return; }
    }
    ctx->pc = 0x4FF6E4u;
label_4ff6e4:
    // 0x4ff6e4: 0x0  nop
    ctx->pc = 0x4ff6e4u;
    // NOP
label_4ff6e8:
    // 0x4ff6e8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4ff6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4ff6ec:
    // 0x4ff6ec: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x4ff6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_4ff6f0:
    // 0x4ff6f0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x4ff6f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ff6f4:
    // 0x4ff6f4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x4ff6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4ff6f8:
    // 0x4ff6f8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4ff6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4ff6fc:
    // 0x4ff6fc: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4ff6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4ff700:
    // 0x4ff700: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4ff700u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4ff704:
    // 0x4ff704: 0x8c640780  lw          $a0, 0x780($v1)
    ctx->pc = 0x4ff704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
label_4ff708:
    // 0x4ff708: 0x284182a  slt         $v1, $s4, $a0
    ctx->pc = 0x4ff708u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4ff70c:
    // 0x4ff70c: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
label_4ff710:
    if (ctx->pc == 0x4FF710u) {
        ctx->pc = 0x4FF710u;
            // 0x4ff710: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->pc = 0x4FF714u;
        goto label_4ff714;
    }
    ctx->pc = 0x4FF70Cu;
    {
        const bool branch_taken_0x4ff70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FF710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF70Cu;
            // 0x4ff710: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff70c) {
            ctx->pc = 0x4FF63Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ff63c;
        }
    }
    ctx->pc = 0x4FF714u;
label_4ff714:
    // 0x4ff714: 0x16040046  bne         $s0, $a0, . + 4 + (0x46 << 2)
label_4ff718:
    if (ctx->pc == 0x4FF718u) {
        ctx->pc = 0x4FF71Cu;
        goto label_4ff71c;
    }
    ctx->pc = 0x4FF714u;
    {
        const bool branch_taken_0x4ff714 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x4ff714) {
            ctx->pc = 0x4FF830u;
            goto label_4ff830;
        }
    }
    ctx->pc = 0x4FF71Cu;
label_4ff71c:
    // 0x4ff71c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x4ff71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_4ff720:
    // 0x4ff720: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x4ff720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_4ff724:
    // 0x4ff724: 0x10000042  b           . + 4 + (0x42 << 2)
label_4ff728:
    if (ctx->pc == 0x4FF728u) {
        ctx->pc = 0x4FF728u;
            // 0x4ff728: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x4FF72Cu;
        goto label_4ff72c;
    }
    ctx->pc = 0x4FF724u;
    {
        const bool branch_taken_0x4ff724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FF728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF724u;
            // 0x4ff728: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff724) {
            ctx->pc = 0x4FF830u;
            goto label_4ff830;
        }
    }
    ctx->pc = 0x4FF72Cu;
label_4ff72c:
    // 0x4ff72c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_4ff730:
    if (ctx->pc == 0x4FF730u) {
        ctx->pc = 0x4FF730u;
            // 0x4ff730: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF734u;
        goto label_4ff734;
    }
    ctx->pc = 0x4FF72Cu;
    {
        const bool branch_taken_0x4ff72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ff72c) {
            ctx->pc = 0x4FF730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF72Cu;
            // 0x4ff730: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FF74Cu;
            goto label_4ff74c;
        }
    }
    ctx->pc = 0x4FF734u;
label_4ff734:
    // 0x4ff734: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ff734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ff738:
    // 0x4ff738: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ff738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ff73c:
    // 0x4ff73c: 0x320f809  jalr        $t9
label_4ff740:
    if (ctx->pc == 0x4FF740u) {
        ctx->pc = 0x4FF740u;
            // 0x4ff740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF744u;
        goto label_4ff744;
    }
    ctx->pc = 0x4FF73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FF744u);
        ctx->pc = 0x4FF740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF73Cu;
            // 0x4ff740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FF744u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FF744u; }
            if (ctx->pc != 0x4FF744u) { return; }
        }
        }
    }
    ctx->pc = 0x4FF744u;
label_4ff744:
    // 0x4ff744: 0x1000003a  b           . + 4 + (0x3A << 2)
label_4ff748:
    if (ctx->pc == 0x4FF748u) {
        ctx->pc = 0x4FF74Cu;
        goto label_4ff74c;
    }
    ctx->pc = 0x4FF744u;
    {
        const bool branch_taken_0x4ff744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ff744) {
            ctx->pc = 0x4FF830u;
            goto label_4ff830;
        }
    }
    ctx->pc = 0x4FF74Cu;
label_4ff74c:
    // 0x4ff74c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x4ff74cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ff750:
    // 0x4ff750: 0x26950074  addiu       $s5, $s4, 0x74
    ctx->pc = 0x4ff750u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 116));
label_4ff754:
    // 0x4ff754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ff754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ff758:
    // 0x4ff758: 0xc11e5a0  jal         func_479680
label_4ff75c:
    if (ctx->pc == 0x4FF75Cu) {
        ctx->pc = 0x4FF75Cu;
            // 0x4ff75c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF760u;
        goto label_4ff760;
    }
    ctx->pc = 0x4FF758u;
    SET_GPR_U32(ctx, 31, 0x4FF760u);
    ctx->pc = 0x4FF75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF758u;
            // 0x4ff75c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x479680u;
    if (runtime->hasFunction(0x479680u)) {
        auto targetFn = runtime->lookupFunction(0x479680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF760u; }
        if (ctx->pc != 0x4FF760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00479680_0x479680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF760u; }
        if (ctx->pc != 0x4FF760u) { return; }
    }
    ctx->pc = 0x4FF760u;
label_4ff760:
    // 0x4ff760: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_4ff764:
    if (ctx->pc == 0x4FF764u) {
        ctx->pc = 0x4FF768u;
        goto label_4ff768;
    }
    ctx->pc = 0x4FF760u;
    {
        const bool branch_taken_0x4ff760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ff760) {
            ctx->pc = 0x4FF7C8u;
            goto label_4ff7c8;
        }
    }
    ctx->pc = 0x4FF768u;
label_4ff768:
    // 0x4ff768: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x4ff768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ff76c:
    // 0x4ff76c: 0xc6a00030  lwc1        $f0, 0x30($s5)
    ctx->pc = 0x4ff76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ff770:
    // 0x4ff770: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x4ff770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4ff774:
    // 0x4ff774: 0xe6a10030  swc1        $f1, 0x30($s5)
    ctx->pc = 0x4ff774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
label_4ff778:
    // 0x4ff778: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x4ff778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ff77c:
    // 0x4ff77c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4ff77cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ff780:
    // 0x4ff780: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_4ff784:
    if (ctx->pc == 0x4FF784u) {
        ctx->pc = 0x4FF788u;
        goto label_4ff788;
    }
    ctx->pc = 0x4FF780u;
    {
        const bool branch_taken_0x4ff780 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ff780) {
            ctx->pc = 0x4FF7A8u;
            goto label_4ff7a8;
        }
    }
    ctx->pc = 0x4FF788u;
label_4ff788:
    // 0x4ff788: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4ff788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4ff78c:
    // 0x4ff78c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4ff78cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4ff790:
    // 0x4ff790: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x4ff790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_4ff794:
    // 0x4ff794: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4ff794u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_4ff798:
    // 0x4ff798: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x4ff798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ff79c:
    // 0x4ff79c: 0x1000000a  b           . + 4 + (0xA << 2)
label_4ff7a0:
    if (ctx->pc == 0x4FF7A0u) {
        ctx->pc = 0x4FF7A0u;
            // 0x4ff7a0: 0xe6a00030  swc1        $f0, 0x30($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
        ctx->pc = 0x4FF7A4u;
        goto label_4ff7a4;
    }
    ctx->pc = 0x4FF79Cu;
    {
        const bool branch_taken_0x4ff79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FF7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF79Cu;
            // 0x4ff7a0: 0xe6a00030  swc1        $f0, 0x30($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff79c) {
            ctx->pc = 0x4FF7C8u;
            goto label_4ff7c8;
        }
    }
    ctx->pc = 0x4FF7A4u;
label_4ff7a4:
    // 0x4ff7a4: 0x0  nop
    ctx->pc = 0x4ff7a4u;
    // NOP
label_4ff7a8:
    // 0x4ff7a8: 0xe6a10034  swc1        $f1, 0x34($s5)
    ctx->pc = 0x4ff7a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
label_4ff7ac:
    // 0x4ff7ac: 0xc11088c  jal         func_442230
label_4ff7b0:
    if (ctx->pc == 0x4FF7B0u) {
        ctx->pc = 0x4FF7B0u;
            // 0x4ff7b0: 0x8ea40038  lw          $a0, 0x38($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
        ctx->pc = 0x4FF7B4u;
        goto label_4ff7b4;
    }
    ctx->pc = 0x4FF7ACu;
    SET_GPR_U32(ctx, 31, 0x4FF7B4u);
    ctx->pc = 0x4FF7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF7ACu;
            // 0x4ff7b0: 0x8ea40038  lw          $a0, 0x38($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF7B4u; }
        if (ctx->pc != 0x4FF7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF7B4u; }
        if (ctx->pc != 0x4FF7B4u) { return; }
    }
    ctx->pc = 0x4FF7B4u;
label_4ff7b4:
    // 0x4ff7b4: 0x8ea4003c  lw          $a0, 0x3C($s5)
    ctx->pc = 0x4ff7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_4ff7b8:
    // 0x4ff7b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4ff7bc:
    if (ctx->pc == 0x4FF7BCu) {
        ctx->pc = 0x4FF7C0u;
        goto label_4ff7c0;
    }
    ctx->pc = 0x4FF7B8u;
    {
        const bool branch_taken_0x4ff7b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ff7b8) {
            ctx->pc = 0x4FF7C8u;
            goto label_4ff7c8;
        }
    }
    ctx->pc = 0x4FF7C0u;
label_4ff7c0:
    // 0x4ff7c0: 0xc11088c  jal         func_442230
label_4ff7c4:
    if (ctx->pc == 0x4FF7C4u) {
        ctx->pc = 0x4FF7C8u;
        goto label_4ff7c8;
    }
    ctx->pc = 0x4FF7C0u;
    SET_GPR_U32(ctx, 31, 0x4FF7C8u);
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF7C8u; }
        if (ctx->pc != 0x4FF7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF7C8u; }
        if (ctx->pc != 0x4FF7C8u) { return; }
    }
    ctx->pc = 0x4FF7C8u;
label_4ff7c8:
    // 0x4ff7c8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4ff7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4ff7cc:
    // 0x4ff7cc: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4ff7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4ff7d0:
    // 0x4ff7d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4ff7d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4ff7d4:
    // 0x4ff7d4: 0x8c640780  lw          $a0, 0x780($v1)
    ctx->pc = 0x4ff7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
label_4ff7d8:
    // 0x4ff7d8: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x4ff7d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4ff7dc:
    // 0x4ff7dc: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_4ff7e0:
    if (ctx->pc == 0x4FF7E0u) {
        ctx->pc = 0x4FF7E0u;
            // 0x4ff7e0: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->pc = 0x4FF7E4u;
        goto label_4ff7e4;
    }
    ctx->pc = 0x4FF7DCu;
    {
        const bool branch_taken_0x4ff7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FF7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF7DCu;
            // 0x4ff7e0: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff7dc) {
            ctx->pc = 0x4FF750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ff750;
        }
    }
    ctx->pc = 0x4FF7E4u;
label_4ff7e4:
    // 0x4ff7e4: 0x16040012  bne         $s0, $a0, . + 4 + (0x12 << 2)
label_4ff7e8:
    if (ctx->pc == 0x4FF7E8u) {
        ctx->pc = 0x4FF7ECu;
        goto label_4ff7ec;
    }
    ctx->pc = 0x4FF7E4u;
    {
        const bool branch_taken_0x4ff7e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x4ff7e4) {
            ctx->pc = 0x4FF830u;
            goto label_4ff830;
        }
    }
    ctx->pc = 0x4FF7ECu;
label_4ff7ec:
    // 0x4ff7ec: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4ff7ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ff7f0:
    // 0x4ff7f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ff7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ff7f4:
    // 0x4ff7f4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ff7f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ff7f8:
    // 0x4ff7f8: 0x320f809  jalr        $t9
label_4ff7fc:
    if (ctx->pc == 0x4FF7FCu) {
        ctx->pc = 0x4FF7FCu;
            // 0x4ff7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FF800u;
        goto label_4ff800;
    }
    ctx->pc = 0x4FF7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FF800u);
        ctx->pc = 0x4FF7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF7F8u;
            // 0x4ff7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FF800u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FF800u; }
            if (ctx->pc != 0x4FF800u) { return; }
        }
        }
    }
    ctx->pc = 0x4FF800u;
label_4ff800:
    // 0x4ff800: 0x1000000b  b           . + 4 + (0xB << 2)
label_4ff804:
    if (ctx->pc == 0x4FF804u) {
        ctx->pc = 0x4FF808u;
        goto label_4ff808;
    }
    ctx->pc = 0x4FF800u;
    {
        const bool branch_taken_0x4ff800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ff800) {
            ctx->pc = 0x4FF830u;
            goto label_4ff830;
        }
    }
    ctx->pc = 0x4FF808u;
label_4ff808:
    // 0x4ff808: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4ff808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4ff80c:
    // 0x4ff80c: 0x320f809  jalr        $t9
label_4ff810:
    if (ctx->pc == 0x4FF810u) {
        ctx->pc = 0x4FF814u;
        goto label_4ff814;
    }
    ctx->pc = 0x4FF80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FF814u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FF814u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FF814u; }
            if (ctx->pc != 0x4FF814u) { return; }
        }
        }
    }
    ctx->pc = 0x4FF814u;
label_4ff814:
    // 0x4ff814: 0x10000006  b           . + 4 + (0x6 << 2)
label_4ff818:
    if (ctx->pc == 0x4FF818u) {
        ctx->pc = 0x4FF81Cu;
        goto label_4ff81c;
    }
    ctx->pc = 0x4FF814u;
    {
        const bool branch_taken_0x4ff814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ff814) {
            ctx->pc = 0x4FF830u;
            goto label_4ff830;
        }
    }
    ctx->pc = 0x4FF81Cu;
label_4ff81c:
    // 0x4ff81c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4ff81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4ff820:
    // 0x4ff820: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4ff820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ff824:
    // 0x4ff824: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4ff824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4ff828:
    // 0x4ff828: 0xc057b7c  jal         func_15EDF0
label_4ff82c:
    if (ctx->pc == 0x4FF82Cu) {
        ctx->pc = 0x4FF82Cu;
            // 0x4ff82c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4FF830u;
        goto label_4ff830;
    }
    ctx->pc = 0x4FF828u;
    SET_GPR_U32(ctx, 31, 0x4FF830u);
    ctx->pc = 0x4FF82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF828u;
            // 0x4ff82c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF830u; }
        if (ctx->pc != 0x4FF830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FF830u; }
        if (ctx->pc != 0x4FF830u) { return; }
    }
    ctx->pc = 0x4FF830u;
label_4ff830:
    // 0x4ff830: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4ff830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4ff834:
    // 0x4ff834: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4ff834u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ff838:
    // 0x4ff838: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4ff838u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ff83c:
    // 0x4ff83c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ff83cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ff840:
    // 0x4ff840: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ff840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ff844:
    // 0x4ff844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ff844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ff848:
    // 0x4ff848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ff848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ff84c:
    // 0x4ff84c: 0x3e00008  jr          $ra
label_4ff850:
    if (ctx->pc == 0x4FF850u) {
        ctx->pc = 0x4FF850u;
            // 0x4ff850: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4FF854u;
        goto label_4ff854;
    }
    ctx->pc = 0x4FF84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF84Cu;
            // 0x4ff850: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FF854u;
label_4ff854:
    // 0x4ff854: 0x0  nop
    ctx->pc = 0x4ff854u;
    // NOP
label_4ff858:
    // 0x4ff858: 0x0  nop
    ctx->pc = 0x4ff858u;
    // NOP
label_4ff85c:
    // 0x4ff85c: 0x0  nop
    ctx->pc = 0x4ff85cu;
    // NOP
label_4ff860:
    // 0x4ff860: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4ff860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4ff864:
    // 0x4ff864: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ff864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ff868:
    // 0x4ff868: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4ff868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4ff86c:
    // 0x4ff86c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4ff86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4ff870:
    // 0x4ff870: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4ff870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4ff874:
    // 0x4ff874: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x4ff874u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ff878:
    // 0x4ff878: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4ff878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4ff87c:
    // 0x4ff87c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4ff87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4ff880:
    // 0x4ff880: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4ff880u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ff884:
    // 0x4ff884: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4ff884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4ff888:
    // 0x4ff888: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4ff888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4ff88c:
    // 0x4ff88c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ff88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ff890:
    // 0x4ff890: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ff890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ff894:
    // 0x4ff894: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ff894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ff898:
    // 0x4ff898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ff898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ff89c:
    // 0x4ff89c: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x4ff89cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
label_4ff8a0:
    // 0x4ff8a0: 0x8c420eac  lw          $v0, 0xEAC($v0)
    ctx->pc = 0x4ff8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_4ff8a4:
    // 0x4ff8a4: 0x2631f300  addiu       $s1, $s1, -0xD00
    ctx->pc = 0x4ff8a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963968));
label_4ff8a8:
    // 0x4ff8a8: 0x8c6689d0  lw          $a2, -0x7630($v1)
    ctx->pc = 0x4ff8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_4ff8ac:
    // 0x4ff8ac: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x4ff8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_4ff8b0:
    // 0x4ff8b0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4ff8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4ff8b4:
    // 0x4ff8b4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4ff8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4ff8b8:
    // 0x4ff8b8: 0x9445f304  lhu         $a1, -0xCFC($v0)
    ctx->pc = 0x4ff8b8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963972)));
label_4ff8bc:
    // 0x4ff8bc: 0x9463f306  lhu         $v1, -0xCFA($v1)
    ctx->pc = 0x4ff8bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963974)));
label_4ff8c0:
    // 0x4ff8c0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4ff8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4ff8c4:
    // 0x4ff8c4: 0x54043  sra         $t0, $a1, 1
    ctx->pc = 0x4ff8c4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 1));
label_4ff8c8:
    // 0x4ff8c8: 0x9447f300  lhu         $a3, -0xD00($v0)
    ctx->pc = 0x4ff8c8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963968)));
label_4ff8cc:
    // 0x4ff8cc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x4ff8ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_4ff8d0:
    // 0x4ff8d0: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x4ff8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_4ff8d4:
    // 0x4ff8d4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x4ff8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_4ff8d8:
    // 0x4ff8d8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x4ff8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_4ff8dc:
    // 0x4ff8dc: 0x8c49007c  lw          $t1, 0x7C($v0)
    ctx->pc = 0x4ff8dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_4ff8e0:
    // 0x4ff8e0: 0x8c5e0058  lw          $fp, 0x58($v0)
    ctx->pc = 0x4ff8e0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_4ff8e4:
    // 0x4ff8e4: 0x1233021  addu        $a2, $t1, $v1
    ctx->pc = 0x4ff8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_4ff8e8:
    // 0x4ff8e8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x4ff8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_4ff8ec:
    // 0x4ff8ec: 0x3c95823  subu        $t3, $fp, $t1
    ctx->pc = 0x4ff8ecu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 9)));
label_4ff8f0:
    // 0x4ff8f0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4ff8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4ff8f4:
    // 0x4ff8f4: 0x9445f302  lhu         $a1, -0xCFE($v0)
    ctx->pc = 0x4ff8f4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963970)));
label_4ff8f8:
    // 0x4ff8f8: 0x8c690080  lw          $t1, 0x80($v1)
    ctx->pc = 0x4ff8f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_4ff8fc:
    // 0x4ff8fc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x4ff8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_4ff900:
    // 0x4ff900: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x4ff900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4ff904:
    // 0x4ff904: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4ff904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4ff908:
    // 0x4ff908: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x4ff908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
label_4ff90c:
    // 0x4ff90c: 0xc461f368  lwc1        $f1, -0xC98($v1)
    ctx->pc = 0x4ff90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ff910:
    // 0x4ff910: 0x1284023  subu        $t0, $t1, $t0
    ctx->pc = 0x4ff910u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_4ff914:
    // 0x4ff914: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4ff914u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ff918:
    // 0x4ff918: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x4ff918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_4ff91c:
    // 0x4ff91c: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x4ff91cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_4ff920:
    // 0x4ff920: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4ff920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4ff924:
    // 0x4ff924: 0x906af366  lbu         $t2, -0xC9A($v1)
    ctx->pc = 0x4ff924u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964070)));
label_4ff928:
    // 0x4ff928: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4ff928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4ff92c:
    // 0x4ff92c: 0xac87005c  sw          $a3, 0x5C($a0)
    ctx->pc = 0x4ff92cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 7));
label_4ff930:
    // 0x4ff930: 0xac860060  sw          $a2, 0x60($a0)
    ctx->pc = 0x4ff930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 6));
label_4ff934:
    // 0x4ff934: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4ff934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4ff938:
    // 0x4ff938: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x4ff938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
label_4ff93c:
    // 0x4ff93c: 0x8469f362  lh          $t1, -0xC9E($v1)
    ctx->pc = 0x4ff93cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964066)));
label_4ff940:
    // 0x4ff940: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x4ff940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
label_4ff944:
    // 0x4ff944: 0xac800274  sw          $zero, 0x274($a0)
    ctx->pc = 0x4ff944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 0));
label_4ff948:
    // 0x4ff948: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4ff948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4ff94c:
    // 0x4ff94c: 0xa48b027c  sh          $t3, 0x27C($a0)
    ctx->pc = 0x4ff94cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 636), (uint16_t)GPR_U32(ctx, 11));
label_4ff950:
    // 0x4ff950: 0x8467f35c  lh          $a3, -0xCA4($v1)
    ctx->pc = 0x4ff950u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964060)));
label_4ff954:
    // 0x4ff954: 0x12a4023  subu        $t0, $t1, $t2
    ctx->pc = 0x4ff954u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_4ff958:
    // 0x4ff958: 0xa48b0278  sh          $t3, 0x278($a0)
    ctx->pc = 0x4ff958u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 632), (uint16_t)GPR_U32(ctx, 11));
label_4ff95c:
    // 0x4ff95c: 0xa488027a  sh          $t0, 0x27A($a0)
    ctx->pc = 0x4ff95cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 634), (uint16_t)GPR_U32(ctx, 8));
label_4ff960:
    // 0x4ff960: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4ff960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4ff964:
    // 0x4ff964: 0xa489027e  sh          $t1, 0x27E($a0)
    ctx->pc = 0x4ff964u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 638), (uint16_t)GPR_U32(ctx, 9));
label_4ff968:
    // 0x4ff968: 0x8466f35e  lh          $a2, -0xCA2($v1)
    ctx->pc = 0x4ff968u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964062)));
label_4ff96c:
    // 0x4ff96c: 0xe4810280  swc1        $f1, 0x280($a0)
    ctx->pc = 0x4ff96cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 640), bits); }
label_4ff970:
    // 0x4ff970: 0xa4870288  sh          $a3, 0x288($a0)
    ctx->pc = 0x4ff970u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 648), (uint16_t)GPR_U32(ctx, 7));
label_4ff974:
    // 0x4ff974: 0xa4870284  sh          $a3, 0x284($a0)
    ctx->pc = 0x4ff974u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 644), (uint16_t)GPR_U32(ctx, 7));
label_4ff978:
    // 0x4ff978: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4ff978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4ff97c:
    // 0x4ff97c: 0xa4880286  sh          $t0, 0x286($a0)
    ctx->pc = 0x4ff97cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 646), (uint16_t)GPR_U32(ctx, 8));
label_4ff980:
    // 0x4ff980: 0x8465f364  lh          $a1, -0xC9C($v1)
    ctx->pc = 0x4ff980u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964068)));
label_4ff984:
    // 0x4ff984: 0xa489028a  sh          $t1, 0x28A($a0)
    ctx->pc = 0x4ff984u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 650), (uint16_t)GPR_U32(ctx, 9));
label_4ff988:
    // 0x4ff988: 0xe481028c  swc1        $f1, 0x28C($a0)
    ctx->pc = 0x4ff988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 652), bits); }
label_4ff98c:
    // 0x4ff98c: 0xa4860294  sh          $a2, 0x294($a0)
    ctx->pc = 0x4ff98cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 660), (uint16_t)GPR_U32(ctx, 6));
label_4ff990:
    // 0x4ff990: 0xaa1823  subu        $v1, $a1, $t2
    ctx->pc = 0x4ff990u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_4ff994:
    // 0x4ff994: 0xa4860290  sh          $a2, 0x290($a0)
    ctx->pc = 0x4ff994u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 656), (uint16_t)GPR_U32(ctx, 6));
label_4ff998:
    // 0x4ff998: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x4ff998u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4ff99c:
    // 0x4ff99c: 0xa4830292  sh          $v1, 0x292($a0)
    ctx->pc = 0x4ff99cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 658), (uint16_t)GPR_U32(ctx, 3));
label_4ff9a0:
    // 0x4ff9a0: 0xa4850296  sh          $a1, 0x296($a0)
    ctx->pc = 0x4ff9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 662), (uint16_t)GPR_U32(ctx, 5));
label_4ff9a4:
    // 0x4ff9a4: 0xe4810298  swc1        $f1, 0x298($a0)
    ctx->pc = 0x4ff9a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 664), bits); }
label_4ff9a8:
    // 0x4ff9a8: 0xa48202a0  sh          $v0, 0x2A0($a0)
    ctx->pc = 0x4ff9a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 672), (uint16_t)GPR_U32(ctx, 2));
label_4ff9ac:
    // 0x4ff9ac: 0xa482029c  sh          $v0, 0x29C($a0)
    ctx->pc = 0x4ff9acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 668), (uint16_t)GPR_U32(ctx, 2));
label_4ff9b0:
    // 0x4ff9b0: 0xa483029e  sh          $v1, 0x29E($a0)
    ctx->pc = 0x4ff9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 670), (uint16_t)GPR_U32(ctx, 3));
label_4ff9b4:
    // 0x4ff9b4: 0xa48502a2  sh          $a1, 0x2A2($a0)
    ctx->pc = 0x4ff9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 674), (uint16_t)GPR_U32(ctx, 5));
label_4ff9b8:
    // 0x4ff9b8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4ff9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4ff9bc:
    // 0x4ff9bc: 0xad430074  sw          $v1, 0x74($t2)
    ctx->pc = 0x4ff9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 116), GPR_U32(ctx, 3));
label_4ff9c0:
    // 0x4ff9c0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4ff9c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_4ff9c4:
    // 0x4ff9c4: 0xad4000ac  sw          $zero, 0xAC($t2)
    ctx->pc = 0x4ff9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 172), GPR_U32(ctx, 0));
label_4ff9c8:
    // 0x4ff9c8: 0x29820008  slti        $v0, $t4, 0x8
    ctx->pc = 0x4ff9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)8) ? 1 : 0);
label_4ff9cc:
    // 0x4ff9cc: 0xad4000b0  sw          $zero, 0xB0($t2)
    ctx->pc = 0x4ff9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 176), GPR_U32(ctx, 0));
label_4ff9d0:
    // 0x4ff9d0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4ff9d4:
    if (ctx->pc == 0x4FF9D4u) {
        ctx->pc = 0x4FF9D4u;
            // 0x4ff9d4: 0x254a0040  addiu       $t2, $t2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
        ctx->pc = 0x4FF9D8u;
        goto label_4ff9d8;
    }
    ctx->pc = 0x4FF9D0u;
    {
        const bool branch_taken_0x4ff9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FF9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FF9D0u;
            // 0x4ff9d4: 0x254a0040  addiu       $t2, $t2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ff9d0) {
            ctx->pc = 0x4FF9BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ff9bc;
        }
    }
    ctx->pc = 0x4FF9D8u;
label_4ff9d8:
    // 0x4ff9d8: 0x8fb400c0  lw          $s4, 0xC0($sp)
    ctx->pc = 0x4ff9d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_4ff9dc:
    // 0x4ff9dc: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x4ff9dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
label_4ff9e0:
    // 0x4ff9e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4ff9e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ff9e4:
    // 0x4ff9e4: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x4ff9e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4ff9e8:
    // 0x4ff9e8: 0x26730e80  addiu       $s3, $s3, 0xE80
    ctx->pc = 0x4ff9e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3712));
label_4ff9ec:
    // 0x4ff9ec: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x4ff9ecu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ff9f0:
    // 0x4ff9f0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x4ff9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_4ff9f4:
    // 0x4ff9f4: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x4ff9f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_4ff9f8:
    // 0x4ff9f8: 0xaea00074  sw          $zero, 0x74($s5)
    ctx->pc = 0x4ff9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 0));
label_4ff9fc:
    // 0x4ff9fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4ff9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4ffa00:
    // 0x4ffa00: 0x26b00074  addiu       $s0, $s5, 0x74
    ctx->pc = 0x4ffa00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
label_4ffa04:
    // 0x4ffa04: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x4ffa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4ffa08:
    // 0x4ffa08: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4ffa08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ffa0c:
    // 0x4ffa0c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4ffa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ffa10:
    // 0x4ffa10: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x4ffa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_4ffa14:
    // 0x4ffa14: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x4ffa14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_4ffa18:
    // 0x4ffa18: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x4ffa18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_4ffa1c:
    // 0x4ffa1c: 0xe6a20078  swc1        $f2, 0x78($s5)
    ctx->pc = 0x4ffa1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 120), bits); }
label_4ffa20:
    // 0x4ffa20: 0xe6a1007c  swc1        $f1, 0x7C($s5)
    ctx->pc = 0x4ffa20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 124), bits); }
label_4ffa24:
    // 0x4ffa24: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x4ffa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ffa28:
    // 0x4ffa28: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x4ffa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ffa2c:
    // 0x4ffa2c: 0xe6a00080  swc1        $f0, 0x80($s5)
    ctx->pc = 0x4ffa2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 128), bits); }
label_4ffa30:
    // 0x4ffa30: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4ffa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ffa34:
    // 0x4ffa34: 0xe6a10084  swc1        $f1, 0x84($s5)
    ctx->pc = 0x4ffa34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 132), bits); }
label_4ffa38:
    // 0x4ffa38: 0xe6a00088  swc1        $f0, 0x88($s5)
    ctx->pc = 0x4ffa38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 136), bits); }
label_4ffa3c:
    // 0x4ffa3c: 0xa6be0090  sh          $fp, 0x90($s5)
    ctx->pc = 0x4ffa3cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 144), (uint16_t)GPR_U32(ctx, 30));
label_4ffa40:
    // 0x4ffa40: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x4ffa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_4ffa44:
    // 0x4ffa44: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
label_4ffa48:
    if (ctx->pc == 0x4FFA48u) {
        ctx->pc = 0x4FFA48u;
            // 0x4ffa48: 0x26850094  addiu       $a1, $s4, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 148));
        ctx->pc = 0x4FFA4Cu;
        goto label_4ffa4c;
    }
    ctx->pc = 0x4FFA44u;
    {
        const bool branch_taken_0x4ffa44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4FFA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFA44u;
            // 0x4ffa48: 0x26850094  addiu       $a1, $s4, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ffa44) {
            ctx->pc = 0x4FFAB8u;
            goto label_4ffab8;
        }
    }
    ctx->pc = 0x4FFA4Cu;
label_4ffa4c:
    // 0x4ffa4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4ffa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ffa50:
    // 0x4ffa50: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
label_4ffa54:
    if (ctx->pc == 0x4FFA54u) {
        ctx->pc = 0x4FFA58u;
        goto label_4ffa58;
    }
    ctx->pc = 0x4FFA50u;
    {
        const bool branch_taken_0x4ffa50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ffa50) {
            ctx->pc = 0x4FFAB8u;
            goto label_4ffab8;
        }
    }
    ctx->pc = 0x4FFA58u;
label_4ffa58:
    // 0x4ffa58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4ffa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ffa5c:
    // 0x4ffa5c: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
label_4ffa60:
    if (ctx->pc == 0x4FFA60u) {
        ctx->pc = 0x4FFA64u;
        goto label_4ffa64;
    }
    ctx->pc = 0x4FFA5Cu;
    {
        const bool branch_taken_0x4ffa5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ffa5c) {
            ctx->pc = 0x4FFA98u;
            goto label_4ffa98;
        }
    }
    ctx->pc = 0x4FFA64u;
label_4ffa64:
    // 0x4ffa64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ffa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ffa68:
    // 0x4ffa68: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_4ffa6c:
    if (ctx->pc == 0x4FFA6Cu) {
        ctx->pc = 0x4FFA70u;
        goto label_4ffa70;
    }
    ctx->pc = 0x4FFA68u;
    {
        const bool branch_taken_0x4ffa68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ffa68) {
            ctx->pc = 0x4FFA78u;
            goto label_4ffa78;
        }
    }
    ctx->pc = 0x4FFA70u;
label_4ffa70:
    // 0x4ffa70: 0x10000013  b           . + 4 + (0x13 << 2)
label_4ffa74:
    if (ctx->pc == 0x4FFA74u) {
        ctx->pc = 0x4FFA78u;
        goto label_4ffa78;
    }
    ctx->pc = 0x4FFA70u;
    {
        const bool branch_taken_0x4ffa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ffa70) {
            ctx->pc = 0x4FFAC0u;
            goto label_4ffac0;
        }
    }
    ctx->pc = 0x4FFA78u;
label_4ffa78:
    // 0x4ffa78: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4ffa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4ffa7c:
    // 0x4ffa7c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x4ffa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_4ffa80:
    // 0x4ffa80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4ffa80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ffa84:
    // 0x4ffa84: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4ffa84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_4ffa88:
    // 0x4ffa88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4ffa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ffa8c:
    // 0x4ffa8c: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x4ffa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
label_4ffa90:
    // 0x4ffa90: 0x1000000d  b           . + 4 + (0xD << 2)
label_4ffa94:
    if (ctx->pc == 0x4FFA94u) {
        ctx->pc = 0x4FFA94u;
            // 0x4ffa94: 0xa602001e  sh          $v0, 0x1E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4FFA98u;
        goto label_4ffa98;
    }
    ctx->pc = 0x4FFA90u;
    {
        const bool branch_taken_0x4ffa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FFA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFA90u;
            // 0x4ffa94: 0xa602001e  sh          $v0, 0x1E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ffa90) {
            ctx->pc = 0x4FFAC8u;
            goto label_4ffac8;
        }
    }
    ctx->pc = 0x4FFA98u;
label_4ffa98:
    // 0x4ffa98: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4ffa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4ffa9c:
    // 0x4ffa9c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x4ffa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_4ffaa0:
    // 0x4ffaa0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4ffaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ffaa4:
    // 0x4ffaa4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4ffaa4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_4ffaa8:
    // 0x4ffaa8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4ffaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ffaac:
    // 0x4ffaac: 0x10000006  b           . + 4 + (0x6 << 2)
label_4ffab0:
    if (ctx->pc == 0x4FFAB0u) {
        ctx->pc = 0x4FFAB0u;
            // 0x4ffab0: 0xa602001e  sh          $v0, 0x1E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4FFAB4u;
        goto label_4ffab4;
    }
    ctx->pc = 0x4FFAACu;
    {
        const bool branch_taken_0x4ffaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FFAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFAACu;
            // 0x4ffab0: 0xa602001e  sh          $v0, 0x1E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ffaac) {
            ctx->pc = 0x4FFAC8u;
            goto label_4ffac8;
        }
    }
    ctx->pc = 0x4FFAB4u;
label_4ffab4:
    // 0x4ffab4: 0x0  nop
    ctx->pc = 0x4ffab4u;
    // NOP
label_4ffab8:
    // 0x4ffab8: 0x10000003  b           . + 4 + (0x3 << 2)
label_4ffabc:
    if (ctx->pc == 0x4FFABCu) {
        ctx->pc = 0x4FFABCu;
            // 0x4ffabc: 0xa600001e  sh          $zero, 0x1E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4FFAC0u;
        goto label_4ffac0;
    }
    ctx->pc = 0x4FFAB8u;
    {
        const bool branch_taken_0x4ffab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FFABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFAB8u;
            // 0x4ffabc: 0xa600001e  sh          $zero, 0x1E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ffab8) {
            ctx->pc = 0x4FFAC8u;
            goto label_4ffac8;
        }
    }
    ctx->pc = 0x4FFAC0u;
label_4ffac0:
    // 0x4ffac0: 0xa600001e  sh          $zero, 0x1E($s0)
    ctx->pc = 0x4ffac0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 0));
label_4ffac4:
    // 0x4ffac4: 0x0  nop
    ctx->pc = 0x4ffac4u;
    // NOP
label_4ffac8:
    // 0x4ffac8: 0x8602001e  lh          $v0, 0x1E($s0)
    ctx->pc = 0x4ffac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
label_4ffacc:
    // 0x4ffacc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x4ffaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_4ffad0:
    // 0x4ffad0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x4ffad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4ffad4:
    // 0x4ffad4: 0x52b021  addu        $s6, $v0, $s2
    ctx->pc = 0x4ffad4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4ffad8:
    // 0x4ffad8: 0x92c30015  lbu         $v1, 0x15($s6)
    ctx->pc = 0x4ffad8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 21)));
label_4ffadc:
    // 0x4ffadc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x4ffadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4ffae0:
    // 0x4ffae0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4ffae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4ffae4:
    // 0x4ffae4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x4ffae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_4ffae8:
    // 0x4ffae8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x4ffae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4ffaec:
    // 0x4ffaec: 0x8c830d6c  lw          $v1, 0xD6C($a0)
    ctx->pc = 0x4ffaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
label_4ffaf0:
    // 0x4ffaf0: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x4ffaf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_4ffaf4:
    // 0x4ffaf4: 0xa6030024  sh          $v1, 0x24($s0)
    ctx->pc = 0x4ffaf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 3));
label_4ffaf8:
    // 0x4ffaf8: 0x96030024  lhu         $v1, 0x24($s0)
    ctx->pc = 0x4ffaf8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_4ffafc:
    // 0x4ffafc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_4ffb00:
    if (ctx->pc == 0x4FFB00u) {
        ctx->pc = 0x4FFB04u;
        goto label_4ffb04;
    }
    ctx->pc = 0x4FFAFCu;
    {
        const bool branch_taken_0x4ffafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ffafc) {
            ctx->pc = 0x4FFB08u;
            goto label_4ffb08;
        }
    }
    ctx->pc = 0x4FFB04u;
label_4ffb04:
    // 0x4ffb04: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x4ffb04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_4ffb08:
    // 0x4ffb08: 0x8c840d78  lw          $a0, 0xD78($a0)
    ctx->pc = 0x4ffb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3448)));
label_4ffb0c:
    // 0x4ffb0c: 0xc0ca680  jal         func_329A00
label_4ffb10:
    if (ctx->pc == 0x4FFB10u) {
        ctx->pc = 0x4FFB10u;
            // 0x4ffb10: 0x27a500dc  addiu       $a1, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->pc = 0x4FFB14u;
        goto label_4ffb14;
    }
    ctx->pc = 0x4FFB0Cu;
    SET_GPR_U32(ctx, 31, 0x4FFB14u);
    ctx->pc = 0x4FFB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFB0Cu;
            // 0x4ffb10: 0x27a500dc  addiu       $a1, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329A00u;
    if (runtime->hasFunction(0x329A00u)) {
        auto targetFn = runtime->lookupFunction(0x329A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFB14u; }
        if (ctx->pc != 0x4FFB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329A00_0x329a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFB14u; }
        if (ctx->pc != 0x4FFB14u) { return; }
    }
    ctx->pc = 0x4FFB14u;
label_4ffb14:
    // 0x4ffb14: 0x93a200dc  lbu         $v0, 0xDC($sp)
    ctx->pc = 0x4ffb14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 220)));
label_4ffb18:
    // 0x4ffb18: 0xa2020026  sb          $v0, 0x26($s0)
    ctx->pc = 0x4ffb18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 2));
label_4ffb1c:
    // 0x4ffb1c: 0x93a200dd  lbu         $v0, 0xDD($sp)
    ctx->pc = 0x4ffb1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 221)));
label_4ffb20:
    // 0x4ffb20: 0xa2020027  sb          $v0, 0x27($s0)
    ctx->pc = 0x4ffb20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 39), (uint8_t)GPR_U32(ctx, 2));
label_4ffb24:
    // 0x4ffb24: 0x97a200de  lhu         $v0, 0xDE($sp)
    ctx->pc = 0x4ffb24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 222)));
label_4ffb28:
    // 0x4ffb28: 0xa6020028  sh          $v0, 0x28($s0)
    ctx->pc = 0x4ffb28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
label_4ffb2c:
    // 0x4ffb2c: 0x8ee30054  lw          $v1, 0x54($s7)
    ctx->pc = 0x4ffb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 84)));
label_4ffb30:
    // 0x4ffb30: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x4ffb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_4ffb34:
    // 0x4ffb34: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_4ffb38:
    if (ctx->pc == 0x4FFB38u) {
        ctx->pc = 0x4FFB3Cu;
        goto label_4ffb3c;
    }
    ctx->pc = 0x4FFB34u;
    {
        const bool branch_taken_0x4ffb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ffb34) {
            ctx->pc = 0x4FFB80u;
            goto label_4ffb80;
        }
    }
    ctx->pc = 0x4FFB3Cu;
label_4ffb3c:
    // 0x4ffb3c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x4ffb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_4ffb40:
    // 0x4ffb40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4ffb44:
    if (ctx->pc == 0x4FFB44u) {
        ctx->pc = 0x4FFB48u;
        goto label_4ffb48;
    }
    ctx->pc = 0x4FFB40u;
    {
        const bool branch_taken_0x4ffb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ffb40) {
            ctx->pc = 0x4FFB60u;
            goto label_4ffb60;
        }
    }
    ctx->pc = 0x4FFB48u;
label_4ffb48:
    // 0x4ffb48: 0x92c3000d  lbu         $v1, 0xD($s6)
    ctx->pc = 0x4ffb48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 13)));
label_4ffb4c:
    // 0x4ffb4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4ffb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ffb50:
    // 0x4ffb50: 0xa603002a  sh          $v1, 0x2A($s0)
    ctx->pc = 0x4ffb50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 3));
label_4ffb54:
    // 0x4ffb54: 0x1000000e  b           . + 4 + (0xE << 2)
label_4ffb58:
    if (ctx->pc == 0x4FFB58u) {
        ctx->pc = 0x4FFB58u;
            // 0x4ffb58: 0xa602002c  sh          $v0, 0x2C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4FFB5Cu;
        goto label_4ffb5c;
    }
    ctx->pc = 0x4FFB54u;
    {
        const bool branch_taken_0x4ffb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FFB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFB54u;
            // 0x4ffb58: 0xa602002c  sh          $v0, 0x2C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ffb54) {
            ctx->pc = 0x4FFB90u;
            goto label_4ffb90;
        }
    }
    ctx->pc = 0x4FFB5Cu;
label_4ffb5c:
    // 0x4ffb5c: 0x0  nop
    ctx->pc = 0x4ffb5cu;
    // NOP
label_4ffb60:
    // 0x4ffb60: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x4ffb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4ffb64:
    // 0x4ffb64: 0xc13d7a4  jal         func_4F5E90
label_4ffb68:
    if (ctx->pc == 0x4FFB68u) {
        ctx->pc = 0x4FFB68u;
            // 0x4ffb68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FFB6Cu;
        goto label_4ffb6c;
    }
    ctx->pc = 0x4FFB64u;
    SET_GPR_U32(ctx, 31, 0x4FFB6Cu);
    ctx->pc = 0x4FFB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFB64u;
            // 0x4ffb68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E90u;
    if (runtime->hasFunction(0x4F5E90u)) {
        auto targetFn = runtime->lookupFunction(0x4F5E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFB6Cu; }
        if (ctx->pc != 0x4FFB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5E90_0x4f5e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFB6Cu; }
        if (ctx->pc != 0x4FFB6Cu) { return; }
    }
    ctx->pc = 0x4FFB6Cu;
label_4ffb6c:
    // 0x4ffb6c: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x4ffb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
label_4ffb70:
    // 0x4ffb70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4ffb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ffb74:
    // 0x4ffb74: 0x10000006  b           . + 4 + (0x6 << 2)
label_4ffb78:
    if (ctx->pc == 0x4FFB78u) {
        ctx->pc = 0x4FFB78u;
            // 0x4ffb78: 0xa602002c  sh          $v0, 0x2C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4FFB7Cu;
        goto label_4ffb7c;
    }
    ctx->pc = 0x4FFB74u;
    {
        const bool branch_taken_0x4ffb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FFB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFB74u;
            // 0x4ffb78: 0xa602002c  sh          $v0, 0x2C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ffb74) {
            ctx->pc = 0x4FFB90u;
            goto label_4ffb90;
        }
    }
    ctx->pc = 0x4FFB7Cu;
label_4ffb7c:
    // 0x4ffb7c: 0x0  nop
    ctx->pc = 0x4ffb7cu;
    // NOP
label_4ffb80:
    // 0x4ffb80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4ffb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ffb84:
    // 0x4ffb84: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x4ffb84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
label_4ffb88:
    // 0x4ffb88: 0xa602002c  sh          $v0, 0x2C($s0)
    ctx->pc = 0x4ffb88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
label_4ffb8c:
    // 0x4ffb8c: 0x0  nop
    ctx->pc = 0x4ffb8cu;
    // NOP
label_4ffb90:
    // 0x4ffb90: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x4ffb90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_4ffb94:
    // 0x4ffb94: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4ffb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4ffb98:
    // 0x4ffb98: 0xc040180  jal         func_100600
label_4ffb9c:
    if (ctx->pc == 0x4FFB9Cu) {
        ctx->pc = 0x4FFB9Cu;
            // 0x4ffb9c: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x4FFBA0u;
        goto label_4ffba0;
    }
    ctx->pc = 0x4FFB98u;
    SET_GPR_U32(ctx, 31, 0x4FFBA0u);
    ctx->pc = 0x4FFB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFB98u;
            // 0x4ffb9c: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFBA0u; }
        if (ctx->pc != 0x4FFBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFBA0u; }
        if (ctx->pc != 0x4FFBA0u) { return; }
    }
    ctx->pc = 0x4FFBA0u;
label_4ffba0:
    // 0x4ffba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ffba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ffba4:
    // 0x4ffba4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_4ffba8:
    if (ctx->pc == 0x4FFBA8u) {
        ctx->pc = 0x4FFBACu;
        goto label_4ffbac;
    }
    ctx->pc = 0x4FFBA4u;
    {
        const bool branch_taken_0x4ffba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ffba4) {
            ctx->pc = 0x4FFBD8u;
            goto label_4ffbd8;
        }
    }
    ctx->pc = 0x4FFBACu;
label_4ffbac:
    // 0x4ffbac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ffbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ffbb0:
    // 0x4ffbb0: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x4ffbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_4ffbb4:
    // 0x4ffbb4: 0x8c4a0eac  lw          $t2, 0xEAC($v0)
    ctx->pc = 0x4ffbb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_4ffbb8:
    // 0x4ffbb8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4ffbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4ffbbc:
    // 0x4ffbbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ffbbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ffbc0:
    // 0x4ffbc0: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x4ffbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_4ffbc4:
    // 0x4ffbc4: 0x26e80274  addiu       $t0, $s7, 0x274
    ctx->pc = 0x4ffbc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 628));
label_4ffbc8:
    // 0x4ffbc8: 0xc1109e0  jal         func_442780
label_4ffbcc:
    if (ctx->pc == 0x4FFBCCu) {
        ctx->pc = 0x4FFBCCu;
            // 0x4ffbcc: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4FFBD0u;
        goto label_4ffbd0;
    }
    ctx->pc = 0x4FFBC8u;
    SET_GPR_U32(ctx, 31, 0x4FFBD0u);
    ctx->pc = 0x4FFBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFBC8u;
            // 0x4ffbcc: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442780u;
    if (runtime->hasFunction(0x442780u)) {
        auto targetFn = runtime->lookupFunction(0x442780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFBD0u; }
        if (ctx->pc != 0x4FFBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442780_0x442780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFBD0u; }
        if (ctx->pc != 0x4FFBD0u) { return; }
    }
    ctx->pc = 0x4FFBD0u;
label_4ffbd0:
    // 0x4ffbd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ffbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ffbd4:
    // 0x4ffbd4: 0x0  nop
    ctx->pc = 0x4ffbd4u;
    // NOP
label_4ffbd8:
    // 0x4ffbd8: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x4ffbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
label_4ffbdc:
    // 0x4ffbdc: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x4ffbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4ffbe0:
    // 0x4ffbe0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4ffbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4ffbe4:
    // 0x4ffbe4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4ffbe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4ffbe8:
    // 0x4ffbe8: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x4ffbe8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_4ffbec:
    // 0x4ffbec: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x4ffbecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_4ffbf0:
    // 0x4ffbf0: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x4ffbf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_4ffbf4:
    // 0x4ffbf4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x4ffbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_4ffbf8:
    // 0x4ffbf8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4ffbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4ffbfc:
    // 0x4ffbfc: 0x8c630780  lw          $v1, 0x780($v1)
    ctx->pc = 0x4ffbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
label_4ffc00:
    // 0x4ffc00: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x4ffc00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4ffc04:
    // 0x4ffc04: 0x1460ff79  bnez        $v1, . + 4 + (-0x87 << 2)
label_4ffc08:
    if (ctx->pc == 0x4FFC08u) {
        ctx->pc = 0x4FFC08u;
            // 0x4ffc08: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4FFC0Cu;
        goto label_4ffc0c;
    }
    ctx->pc = 0x4FFC04u;
    {
        const bool branch_taken_0x4ffc04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FFC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFC04u;
            // 0x4ffc08: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ffc04) {
            ctx->pc = 0x4FF9ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ff9ec;
        }
    }
    ctx->pc = 0x4FFC0Cu;
label_4ffc0c:
    // 0x4ffc0c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4ffc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4ffc10:
    // 0x4ffc10: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4ffc10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4ffc14:
    // 0x4ffc14: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4ffc14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4ffc18:
    // 0x4ffc18: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4ffc18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4ffc1c:
    // 0x4ffc1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4ffc1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ffc20:
    // 0x4ffc20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4ffc20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ffc24:
    // 0x4ffc24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ffc24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ffc28:
    // 0x4ffc28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ffc28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ffc2c:
    // 0x4ffc2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ffc2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ffc30:
    // 0x4ffc30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ffc30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ffc34:
    // 0x4ffc34: 0x3e00008  jr          $ra
label_4ffc38:
    if (ctx->pc == 0x4FFC38u) {
        ctx->pc = 0x4FFC38u;
            // 0x4ffc38: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4FFC3Cu;
        goto label_4ffc3c;
    }
    ctx->pc = 0x4FFC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FFC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFC34u;
            // 0x4ffc38: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FFC3Cu;
label_4ffc3c:
    // 0x4ffc3c: 0x0  nop
    ctx->pc = 0x4ffc3cu;
    // NOP
label_4ffc40:
    // 0x4ffc40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ffc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ffc44:
    // 0x4ffc44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ffc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ffc48:
    // 0x4ffc48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ffc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ffc4c:
    // 0x4ffc4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ffc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ffc50:
    // 0x4ffc50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ffc50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ffc54:
    // 0x4ffc54: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4ffc58:
    if (ctx->pc == 0x4FFC58u) {
        ctx->pc = 0x4FFC58u;
            // 0x4ffc58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FFC5Cu;
        goto label_4ffc5c;
    }
    ctx->pc = 0x4FFC54u;
    {
        const bool branch_taken_0x4ffc54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FFC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFC54u;
            // 0x4ffc58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ffc54) {
            ctx->pc = 0x4FFC88u;
            goto label_4ffc88;
        }
    }
    ctx->pc = 0x4FFC5Cu;
label_4ffc5c:
    // 0x4ffc5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ffc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ffc60:
    // 0x4ffc60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ffc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ffc64:
    // 0x4ffc64: 0x244247a0  addiu       $v0, $v0, 0x47A0
    ctx->pc = 0x4ffc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18336));
label_4ffc68:
    // 0x4ffc68: 0xc11e778  jal         func_479DE0
label_4ffc6c:
    if (ctx->pc == 0x4FFC6Cu) {
        ctx->pc = 0x4FFC6Cu;
            // 0x4ffc6c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4FFC70u;
        goto label_4ffc70;
    }
    ctx->pc = 0x4FFC68u;
    SET_GPR_U32(ctx, 31, 0x4FFC70u);
    ctx->pc = 0x4FFC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFC68u;
            // 0x4ffc6c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x479DE0u;
    if (runtime->hasFunction(0x479DE0u)) {
        auto targetFn = runtime->lookupFunction(0x479DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFC70u; }
        if (ctx->pc != 0x4FFC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00479DE0_0x479de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFC70u; }
        if (ctx->pc != 0x4FFC70u) { return; }
    }
    ctx->pc = 0x4FFC70u;
label_4ffc70:
    // 0x4ffc70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4ffc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4ffc74:
    // 0x4ffc74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ffc74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ffc78:
    // 0x4ffc78: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4ffc7c:
    if (ctx->pc == 0x4FFC7Cu) {
        ctx->pc = 0x4FFC7Cu;
            // 0x4ffc7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FFC80u;
        goto label_4ffc80;
    }
    ctx->pc = 0x4FFC78u;
    {
        const bool branch_taken_0x4ffc78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ffc78) {
            ctx->pc = 0x4FFC7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFC78u;
            // 0x4ffc7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FFC8Cu;
            goto label_4ffc8c;
        }
    }
    ctx->pc = 0x4FFC80u;
label_4ffc80:
    // 0x4ffc80: 0xc0400a8  jal         func_1002A0
label_4ffc84:
    if (ctx->pc == 0x4FFC84u) {
        ctx->pc = 0x4FFC84u;
            // 0x4ffc84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FFC88u;
        goto label_4ffc88;
    }
    ctx->pc = 0x4FFC80u;
    SET_GPR_U32(ctx, 31, 0x4FFC88u);
    ctx->pc = 0x4FFC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFC80u;
            // 0x4ffc84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFC88u; }
        if (ctx->pc != 0x4FFC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFC88u; }
        if (ctx->pc != 0x4FFC88u) { return; }
    }
    ctx->pc = 0x4FFC88u;
label_4ffc88:
    // 0x4ffc88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4ffc88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ffc8c:
    // 0x4ffc8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ffc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ffc90:
    // 0x4ffc90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ffc90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ffc94:
    // 0x4ffc94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ffc94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ffc98:
    // 0x4ffc98: 0x3e00008  jr          $ra
label_4ffc9c:
    if (ctx->pc == 0x4FFC9Cu) {
        ctx->pc = 0x4FFC9Cu;
            // 0x4ffc9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4FFCA0u;
        goto label_fallthrough_0x4ffc98;
    }
    ctx->pc = 0x4FFC98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FFC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFC98u;
            // 0x4ffc9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4ffc98:
    ctx->pc = 0x4FFCA0u;
}
