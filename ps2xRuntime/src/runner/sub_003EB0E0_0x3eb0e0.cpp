#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003EB0E0
// Address: 0x3eb0e0 - 0x3eb670
void sub_003EB0E0_0x3eb0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB0E0_0x3eb0e0");
#endif

    switch (ctx->pc) {
        case 0x3eb0e0u: goto label_3eb0e0;
        case 0x3eb0e4u: goto label_3eb0e4;
        case 0x3eb0e8u: goto label_3eb0e8;
        case 0x3eb0ecu: goto label_3eb0ec;
        case 0x3eb0f0u: goto label_3eb0f0;
        case 0x3eb0f4u: goto label_3eb0f4;
        case 0x3eb0f8u: goto label_3eb0f8;
        case 0x3eb0fcu: goto label_3eb0fc;
        case 0x3eb100u: goto label_3eb100;
        case 0x3eb104u: goto label_3eb104;
        case 0x3eb108u: goto label_3eb108;
        case 0x3eb10cu: goto label_3eb10c;
        case 0x3eb110u: goto label_3eb110;
        case 0x3eb114u: goto label_3eb114;
        case 0x3eb118u: goto label_3eb118;
        case 0x3eb11cu: goto label_3eb11c;
        case 0x3eb120u: goto label_3eb120;
        case 0x3eb124u: goto label_3eb124;
        case 0x3eb128u: goto label_3eb128;
        case 0x3eb12cu: goto label_3eb12c;
        case 0x3eb130u: goto label_3eb130;
        case 0x3eb134u: goto label_3eb134;
        case 0x3eb138u: goto label_3eb138;
        case 0x3eb13cu: goto label_3eb13c;
        case 0x3eb140u: goto label_3eb140;
        case 0x3eb144u: goto label_3eb144;
        case 0x3eb148u: goto label_3eb148;
        case 0x3eb14cu: goto label_3eb14c;
        case 0x3eb150u: goto label_3eb150;
        case 0x3eb154u: goto label_3eb154;
        case 0x3eb158u: goto label_3eb158;
        case 0x3eb15cu: goto label_3eb15c;
        case 0x3eb160u: goto label_3eb160;
        case 0x3eb164u: goto label_3eb164;
        case 0x3eb168u: goto label_3eb168;
        case 0x3eb16cu: goto label_3eb16c;
        case 0x3eb170u: goto label_3eb170;
        case 0x3eb174u: goto label_3eb174;
        case 0x3eb178u: goto label_3eb178;
        case 0x3eb17cu: goto label_3eb17c;
        case 0x3eb180u: goto label_3eb180;
        case 0x3eb184u: goto label_3eb184;
        case 0x3eb188u: goto label_3eb188;
        case 0x3eb18cu: goto label_3eb18c;
        case 0x3eb190u: goto label_3eb190;
        case 0x3eb194u: goto label_3eb194;
        case 0x3eb198u: goto label_3eb198;
        case 0x3eb19cu: goto label_3eb19c;
        case 0x3eb1a0u: goto label_3eb1a0;
        case 0x3eb1a4u: goto label_3eb1a4;
        case 0x3eb1a8u: goto label_3eb1a8;
        case 0x3eb1acu: goto label_3eb1ac;
        case 0x3eb1b0u: goto label_3eb1b0;
        case 0x3eb1b4u: goto label_3eb1b4;
        case 0x3eb1b8u: goto label_3eb1b8;
        case 0x3eb1bcu: goto label_3eb1bc;
        case 0x3eb1c0u: goto label_3eb1c0;
        case 0x3eb1c4u: goto label_3eb1c4;
        case 0x3eb1c8u: goto label_3eb1c8;
        case 0x3eb1ccu: goto label_3eb1cc;
        case 0x3eb1d0u: goto label_3eb1d0;
        case 0x3eb1d4u: goto label_3eb1d4;
        case 0x3eb1d8u: goto label_3eb1d8;
        case 0x3eb1dcu: goto label_3eb1dc;
        case 0x3eb1e0u: goto label_3eb1e0;
        case 0x3eb1e4u: goto label_3eb1e4;
        case 0x3eb1e8u: goto label_3eb1e8;
        case 0x3eb1ecu: goto label_3eb1ec;
        case 0x3eb1f0u: goto label_3eb1f0;
        case 0x3eb1f4u: goto label_3eb1f4;
        case 0x3eb1f8u: goto label_3eb1f8;
        case 0x3eb1fcu: goto label_3eb1fc;
        case 0x3eb200u: goto label_3eb200;
        case 0x3eb204u: goto label_3eb204;
        case 0x3eb208u: goto label_3eb208;
        case 0x3eb20cu: goto label_3eb20c;
        case 0x3eb210u: goto label_3eb210;
        case 0x3eb214u: goto label_3eb214;
        case 0x3eb218u: goto label_3eb218;
        case 0x3eb21cu: goto label_3eb21c;
        case 0x3eb220u: goto label_3eb220;
        case 0x3eb224u: goto label_3eb224;
        case 0x3eb228u: goto label_3eb228;
        case 0x3eb22cu: goto label_3eb22c;
        case 0x3eb230u: goto label_3eb230;
        case 0x3eb234u: goto label_3eb234;
        case 0x3eb238u: goto label_3eb238;
        case 0x3eb23cu: goto label_3eb23c;
        case 0x3eb240u: goto label_3eb240;
        case 0x3eb244u: goto label_3eb244;
        case 0x3eb248u: goto label_3eb248;
        case 0x3eb24cu: goto label_3eb24c;
        case 0x3eb250u: goto label_3eb250;
        case 0x3eb254u: goto label_3eb254;
        case 0x3eb258u: goto label_3eb258;
        case 0x3eb25cu: goto label_3eb25c;
        case 0x3eb260u: goto label_3eb260;
        case 0x3eb264u: goto label_3eb264;
        case 0x3eb268u: goto label_3eb268;
        case 0x3eb26cu: goto label_3eb26c;
        case 0x3eb270u: goto label_3eb270;
        case 0x3eb274u: goto label_3eb274;
        case 0x3eb278u: goto label_3eb278;
        case 0x3eb27cu: goto label_3eb27c;
        case 0x3eb280u: goto label_3eb280;
        case 0x3eb284u: goto label_3eb284;
        case 0x3eb288u: goto label_3eb288;
        case 0x3eb28cu: goto label_3eb28c;
        case 0x3eb290u: goto label_3eb290;
        case 0x3eb294u: goto label_3eb294;
        case 0x3eb298u: goto label_3eb298;
        case 0x3eb29cu: goto label_3eb29c;
        case 0x3eb2a0u: goto label_3eb2a0;
        case 0x3eb2a4u: goto label_3eb2a4;
        case 0x3eb2a8u: goto label_3eb2a8;
        case 0x3eb2acu: goto label_3eb2ac;
        case 0x3eb2b0u: goto label_3eb2b0;
        case 0x3eb2b4u: goto label_3eb2b4;
        case 0x3eb2b8u: goto label_3eb2b8;
        case 0x3eb2bcu: goto label_3eb2bc;
        case 0x3eb2c0u: goto label_3eb2c0;
        case 0x3eb2c4u: goto label_3eb2c4;
        case 0x3eb2c8u: goto label_3eb2c8;
        case 0x3eb2ccu: goto label_3eb2cc;
        case 0x3eb2d0u: goto label_3eb2d0;
        case 0x3eb2d4u: goto label_3eb2d4;
        case 0x3eb2d8u: goto label_3eb2d8;
        case 0x3eb2dcu: goto label_3eb2dc;
        case 0x3eb2e0u: goto label_3eb2e0;
        case 0x3eb2e4u: goto label_3eb2e4;
        case 0x3eb2e8u: goto label_3eb2e8;
        case 0x3eb2ecu: goto label_3eb2ec;
        case 0x3eb2f0u: goto label_3eb2f0;
        case 0x3eb2f4u: goto label_3eb2f4;
        case 0x3eb2f8u: goto label_3eb2f8;
        case 0x3eb2fcu: goto label_3eb2fc;
        case 0x3eb300u: goto label_3eb300;
        case 0x3eb304u: goto label_3eb304;
        case 0x3eb308u: goto label_3eb308;
        case 0x3eb30cu: goto label_3eb30c;
        case 0x3eb310u: goto label_3eb310;
        case 0x3eb314u: goto label_3eb314;
        case 0x3eb318u: goto label_3eb318;
        case 0x3eb31cu: goto label_3eb31c;
        case 0x3eb320u: goto label_3eb320;
        case 0x3eb324u: goto label_3eb324;
        case 0x3eb328u: goto label_3eb328;
        case 0x3eb32cu: goto label_3eb32c;
        case 0x3eb330u: goto label_3eb330;
        case 0x3eb334u: goto label_3eb334;
        case 0x3eb338u: goto label_3eb338;
        case 0x3eb33cu: goto label_3eb33c;
        case 0x3eb340u: goto label_3eb340;
        case 0x3eb344u: goto label_3eb344;
        case 0x3eb348u: goto label_3eb348;
        case 0x3eb34cu: goto label_3eb34c;
        case 0x3eb350u: goto label_3eb350;
        case 0x3eb354u: goto label_3eb354;
        case 0x3eb358u: goto label_3eb358;
        case 0x3eb35cu: goto label_3eb35c;
        case 0x3eb360u: goto label_3eb360;
        case 0x3eb364u: goto label_3eb364;
        case 0x3eb368u: goto label_3eb368;
        case 0x3eb36cu: goto label_3eb36c;
        case 0x3eb370u: goto label_3eb370;
        case 0x3eb374u: goto label_3eb374;
        case 0x3eb378u: goto label_3eb378;
        case 0x3eb37cu: goto label_3eb37c;
        case 0x3eb380u: goto label_3eb380;
        case 0x3eb384u: goto label_3eb384;
        case 0x3eb388u: goto label_3eb388;
        case 0x3eb38cu: goto label_3eb38c;
        case 0x3eb390u: goto label_3eb390;
        case 0x3eb394u: goto label_3eb394;
        case 0x3eb398u: goto label_3eb398;
        case 0x3eb39cu: goto label_3eb39c;
        case 0x3eb3a0u: goto label_3eb3a0;
        case 0x3eb3a4u: goto label_3eb3a4;
        case 0x3eb3a8u: goto label_3eb3a8;
        case 0x3eb3acu: goto label_3eb3ac;
        case 0x3eb3b0u: goto label_3eb3b0;
        case 0x3eb3b4u: goto label_3eb3b4;
        case 0x3eb3b8u: goto label_3eb3b8;
        case 0x3eb3bcu: goto label_3eb3bc;
        case 0x3eb3c0u: goto label_3eb3c0;
        case 0x3eb3c4u: goto label_3eb3c4;
        case 0x3eb3c8u: goto label_3eb3c8;
        case 0x3eb3ccu: goto label_3eb3cc;
        case 0x3eb3d0u: goto label_3eb3d0;
        case 0x3eb3d4u: goto label_3eb3d4;
        case 0x3eb3d8u: goto label_3eb3d8;
        case 0x3eb3dcu: goto label_3eb3dc;
        case 0x3eb3e0u: goto label_3eb3e0;
        case 0x3eb3e4u: goto label_3eb3e4;
        case 0x3eb3e8u: goto label_3eb3e8;
        case 0x3eb3ecu: goto label_3eb3ec;
        case 0x3eb3f0u: goto label_3eb3f0;
        case 0x3eb3f4u: goto label_3eb3f4;
        case 0x3eb3f8u: goto label_3eb3f8;
        case 0x3eb3fcu: goto label_3eb3fc;
        case 0x3eb400u: goto label_3eb400;
        case 0x3eb404u: goto label_3eb404;
        case 0x3eb408u: goto label_3eb408;
        case 0x3eb40cu: goto label_3eb40c;
        case 0x3eb410u: goto label_3eb410;
        case 0x3eb414u: goto label_3eb414;
        case 0x3eb418u: goto label_3eb418;
        case 0x3eb41cu: goto label_3eb41c;
        case 0x3eb420u: goto label_3eb420;
        case 0x3eb424u: goto label_3eb424;
        case 0x3eb428u: goto label_3eb428;
        case 0x3eb42cu: goto label_3eb42c;
        case 0x3eb430u: goto label_3eb430;
        case 0x3eb434u: goto label_3eb434;
        case 0x3eb438u: goto label_3eb438;
        case 0x3eb43cu: goto label_3eb43c;
        case 0x3eb440u: goto label_3eb440;
        case 0x3eb444u: goto label_3eb444;
        case 0x3eb448u: goto label_3eb448;
        case 0x3eb44cu: goto label_3eb44c;
        case 0x3eb450u: goto label_3eb450;
        case 0x3eb454u: goto label_3eb454;
        case 0x3eb458u: goto label_3eb458;
        case 0x3eb45cu: goto label_3eb45c;
        case 0x3eb460u: goto label_3eb460;
        case 0x3eb464u: goto label_3eb464;
        case 0x3eb468u: goto label_3eb468;
        case 0x3eb46cu: goto label_3eb46c;
        case 0x3eb470u: goto label_3eb470;
        case 0x3eb474u: goto label_3eb474;
        case 0x3eb478u: goto label_3eb478;
        case 0x3eb47cu: goto label_3eb47c;
        case 0x3eb480u: goto label_3eb480;
        case 0x3eb484u: goto label_3eb484;
        case 0x3eb488u: goto label_3eb488;
        case 0x3eb48cu: goto label_3eb48c;
        case 0x3eb490u: goto label_3eb490;
        case 0x3eb494u: goto label_3eb494;
        case 0x3eb498u: goto label_3eb498;
        case 0x3eb49cu: goto label_3eb49c;
        case 0x3eb4a0u: goto label_3eb4a0;
        case 0x3eb4a4u: goto label_3eb4a4;
        case 0x3eb4a8u: goto label_3eb4a8;
        case 0x3eb4acu: goto label_3eb4ac;
        case 0x3eb4b0u: goto label_3eb4b0;
        case 0x3eb4b4u: goto label_3eb4b4;
        case 0x3eb4b8u: goto label_3eb4b8;
        case 0x3eb4bcu: goto label_3eb4bc;
        case 0x3eb4c0u: goto label_3eb4c0;
        case 0x3eb4c4u: goto label_3eb4c4;
        case 0x3eb4c8u: goto label_3eb4c8;
        case 0x3eb4ccu: goto label_3eb4cc;
        case 0x3eb4d0u: goto label_3eb4d0;
        case 0x3eb4d4u: goto label_3eb4d4;
        case 0x3eb4d8u: goto label_3eb4d8;
        case 0x3eb4dcu: goto label_3eb4dc;
        case 0x3eb4e0u: goto label_3eb4e0;
        case 0x3eb4e4u: goto label_3eb4e4;
        case 0x3eb4e8u: goto label_3eb4e8;
        case 0x3eb4ecu: goto label_3eb4ec;
        case 0x3eb4f0u: goto label_3eb4f0;
        case 0x3eb4f4u: goto label_3eb4f4;
        case 0x3eb4f8u: goto label_3eb4f8;
        case 0x3eb4fcu: goto label_3eb4fc;
        case 0x3eb500u: goto label_3eb500;
        case 0x3eb504u: goto label_3eb504;
        case 0x3eb508u: goto label_3eb508;
        case 0x3eb50cu: goto label_3eb50c;
        case 0x3eb510u: goto label_3eb510;
        case 0x3eb514u: goto label_3eb514;
        case 0x3eb518u: goto label_3eb518;
        case 0x3eb51cu: goto label_3eb51c;
        case 0x3eb520u: goto label_3eb520;
        case 0x3eb524u: goto label_3eb524;
        case 0x3eb528u: goto label_3eb528;
        case 0x3eb52cu: goto label_3eb52c;
        case 0x3eb530u: goto label_3eb530;
        case 0x3eb534u: goto label_3eb534;
        case 0x3eb538u: goto label_3eb538;
        case 0x3eb53cu: goto label_3eb53c;
        case 0x3eb540u: goto label_3eb540;
        case 0x3eb544u: goto label_3eb544;
        case 0x3eb548u: goto label_3eb548;
        case 0x3eb54cu: goto label_3eb54c;
        case 0x3eb550u: goto label_3eb550;
        case 0x3eb554u: goto label_3eb554;
        case 0x3eb558u: goto label_3eb558;
        case 0x3eb55cu: goto label_3eb55c;
        case 0x3eb560u: goto label_3eb560;
        case 0x3eb564u: goto label_3eb564;
        case 0x3eb568u: goto label_3eb568;
        case 0x3eb56cu: goto label_3eb56c;
        case 0x3eb570u: goto label_3eb570;
        case 0x3eb574u: goto label_3eb574;
        case 0x3eb578u: goto label_3eb578;
        case 0x3eb57cu: goto label_3eb57c;
        case 0x3eb580u: goto label_3eb580;
        case 0x3eb584u: goto label_3eb584;
        case 0x3eb588u: goto label_3eb588;
        case 0x3eb58cu: goto label_3eb58c;
        case 0x3eb590u: goto label_3eb590;
        case 0x3eb594u: goto label_3eb594;
        case 0x3eb598u: goto label_3eb598;
        case 0x3eb59cu: goto label_3eb59c;
        case 0x3eb5a0u: goto label_3eb5a0;
        case 0x3eb5a4u: goto label_3eb5a4;
        case 0x3eb5a8u: goto label_3eb5a8;
        case 0x3eb5acu: goto label_3eb5ac;
        case 0x3eb5b0u: goto label_3eb5b0;
        case 0x3eb5b4u: goto label_3eb5b4;
        case 0x3eb5b8u: goto label_3eb5b8;
        case 0x3eb5bcu: goto label_3eb5bc;
        case 0x3eb5c0u: goto label_3eb5c0;
        case 0x3eb5c4u: goto label_3eb5c4;
        case 0x3eb5c8u: goto label_3eb5c8;
        case 0x3eb5ccu: goto label_3eb5cc;
        case 0x3eb5d0u: goto label_3eb5d0;
        case 0x3eb5d4u: goto label_3eb5d4;
        case 0x3eb5d8u: goto label_3eb5d8;
        case 0x3eb5dcu: goto label_3eb5dc;
        case 0x3eb5e0u: goto label_3eb5e0;
        case 0x3eb5e4u: goto label_3eb5e4;
        case 0x3eb5e8u: goto label_3eb5e8;
        case 0x3eb5ecu: goto label_3eb5ec;
        case 0x3eb5f0u: goto label_3eb5f0;
        case 0x3eb5f4u: goto label_3eb5f4;
        case 0x3eb5f8u: goto label_3eb5f8;
        case 0x3eb5fcu: goto label_3eb5fc;
        case 0x3eb600u: goto label_3eb600;
        case 0x3eb604u: goto label_3eb604;
        case 0x3eb608u: goto label_3eb608;
        case 0x3eb60cu: goto label_3eb60c;
        case 0x3eb610u: goto label_3eb610;
        case 0x3eb614u: goto label_3eb614;
        case 0x3eb618u: goto label_3eb618;
        case 0x3eb61cu: goto label_3eb61c;
        case 0x3eb620u: goto label_3eb620;
        case 0x3eb624u: goto label_3eb624;
        case 0x3eb628u: goto label_3eb628;
        case 0x3eb62cu: goto label_3eb62c;
        case 0x3eb630u: goto label_3eb630;
        case 0x3eb634u: goto label_3eb634;
        case 0x3eb638u: goto label_3eb638;
        case 0x3eb63cu: goto label_3eb63c;
        case 0x3eb640u: goto label_3eb640;
        case 0x3eb644u: goto label_3eb644;
        case 0x3eb648u: goto label_3eb648;
        case 0x3eb64cu: goto label_3eb64c;
        case 0x3eb650u: goto label_3eb650;
        case 0x3eb654u: goto label_3eb654;
        case 0x3eb658u: goto label_3eb658;
        case 0x3eb65cu: goto label_3eb65c;
        case 0x3eb660u: goto label_3eb660;
        case 0x3eb664u: goto label_3eb664;
        case 0x3eb668u: goto label_3eb668;
        case 0x3eb66cu: goto label_3eb66c;
        default: break;
    }

    ctx->pc = 0x3eb0e0u;

label_3eb0e0:
    // 0x3eb0e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3eb0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3eb0e4:
    // 0x3eb0e4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3eb0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3eb0e8:
    // 0x3eb0e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3eb0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3eb0ec:
    // 0x3eb0ec: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3eb0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3eb0f0:
    // 0x3eb0f0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3eb0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3eb0f4:
    // 0x3eb0f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3eb0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3eb0f8:
    // 0x3eb0f8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3eb0f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3eb0fc:
    // 0x3eb0fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3eb0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3eb100:
    // 0x3eb100: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3eb100u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3eb104:
    // 0x3eb104: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3eb104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3eb108:
    // 0x3eb108: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3eb108u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb10c:
    // 0x3eb10c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3eb10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3eb110:
    // 0x3eb110: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3eb110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eb114:
    // 0x3eb114: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3eb114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3eb118:
    // 0x3eb118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3eb118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3eb11c:
    // 0x3eb11c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3eb11cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb120:
    // 0x3eb120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3eb120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3eb124:
    // 0x3eb124: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3eb124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb128:
    // 0x3eb128: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x3eb128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_3eb12c:
    // 0x3eb12c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3eb12cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb130:
    // 0x3eb130: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3eb130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3eb134:
    // 0x3eb134: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x3eb134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_3eb138:
    // 0x3eb138: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x3eb138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_3eb13c:
    // 0x3eb13c: 0x10000128  b           . + 4 + (0x128 << 2)
label_3eb140:
    if (ctx->pc == 0x3EB140u) {
        ctx->pc = 0x3EB140u;
            // 0x3eb140: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x3EB144u;
        goto label_3eb144;
    }
    ctx->pc = 0x3EB13Cu;
    {
        const bool branch_taken_0x3eb13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB13Cu;
            // 0x3eb140: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb13c) {
            ctx->pc = 0x3EB5E0u;
            goto label_3eb5e0;
        }
    }
    ctx->pc = 0x3EB144u;
label_3eb144:
    // 0x3eb144: 0x0  nop
    ctx->pc = 0x3eb144u;
    // NOP
label_3eb148:
    // 0x3eb148: 0x8ee40020  lw          $a0, 0x20($s7)
    ctx->pc = 0x3eb148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
label_3eb14c:
    // 0x3eb14c: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x3eb14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_3eb150:
    // 0x3eb150: 0x9e082b  sltu        $at, $a0, $fp
    ctx->pc = 0x3eb150u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_3eb154:
    // 0x3eb154: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x3eb154u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3eb158:
    // 0x3eb158: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x3eb158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_3eb15c:
    // 0x3eb15c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3eb160:
    if (ctx->pc == 0x3EB160u) {
        ctx->pc = 0x3EB160u;
            // 0x3eb160: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->pc = 0x3EB164u;
        goto label_3eb164;
    }
    ctx->pc = 0x3EB15Cu;
    {
        const bool branch_taken_0x3eb15c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB15Cu;
            // 0x3eb160: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb15c) {
            ctx->pc = 0x3EB168u;
            goto label_3eb168;
        }
    }
    ctx->pc = 0x3EB164u;
label_3eb164:
    // 0x3eb164: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x3eb164u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb168:
    // 0x3eb168: 0x8ee40010  lw          $a0, 0x10($s7)
    ctx->pc = 0x3eb168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_3eb16c:
    // 0x3eb16c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3eb16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3eb170:
    // 0x3eb170: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3eb170u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3eb174:
    // 0x3eb174: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3eb174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb178:
    // 0x3eb178: 0xaee30010  sw          $v1, 0x10($s7)
    ctx->pc = 0x3eb178u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 3));
label_3eb17c:
    // 0x3eb17c: 0x8ee40020  lw          $a0, 0x20($s7)
    ctx->pc = 0x3eb17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
label_3eb180:
    // 0x3eb180: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3eb180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3eb184:
    // 0x3eb184: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3eb184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb188:
    // 0x3eb188: 0xaee30020  sw          $v1, 0x20($s7)
    ctx->pc = 0x3eb188u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 3));
label_3eb18c:
    // 0x3eb18c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3eb18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3eb190:
    // 0x3eb190: 0x1c60000f  bgtz        $v1, . + 4 + (0xF << 2)
label_3eb194:
    if (ctx->pc == 0x3EB194u) {
        ctx->pc = 0x3EB198u;
        goto label_3eb198;
    }
    ctx->pc = 0x3EB190u;
    {
        const bool branch_taken_0x3eb190 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3eb190) {
            ctx->pc = 0x3EB1D0u;
            goto label_3eb1d0;
        }
    }
    ctx->pc = 0x3EB198u;
label_3eb198:
    // 0x3eb198: 0x8ee30028  lw          $v1, 0x28($s7)
    ctx->pc = 0x3eb198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
label_3eb19c:
    // 0x3eb19c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3eb1a0:
    if (ctx->pc == 0x3EB1A0u) {
        ctx->pc = 0x3EB1A4u;
        goto label_3eb1a4;
    }
    ctx->pc = 0x3EB19Cu;
    {
        const bool branch_taken_0x3eb19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb19c) {
            ctx->pc = 0x3EB1C0u;
            goto label_3eb1c0;
        }
    }
    ctx->pc = 0x3EB1A4u;
label_3eb1a4:
    // 0x3eb1a4: 0x8ee40020  lw          $a0, 0x20($s7)
    ctx->pc = 0x3eb1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
label_3eb1a8:
    // 0x3eb1a8: 0x8ee30024  lw          $v1, 0x24($s7)
    ctx->pc = 0x3eb1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_3eb1ac:
    // 0x3eb1ac: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x3eb1acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3eb1b0:
    // 0x3eb1b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3eb1b4:
    if (ctx->pc == 0x3EB1B4u) {
        ctx->pc = 0x3EB1B8u;
        goto label_3eb1b8;
    }
    ctx->pc = 0x3EB1B0u;
    {
        const bool branch_taken_0x3eb1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb1b0) {
            ctx->pc = 0x3EB1C0u;
            goto label_3eb1c0;
        }
    }
    ctx->pc = 0x3EB1B8u;
label_3eb1b8:
    // 0x3eb1b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3eb1bc:
    if (ctx->pc == 0x3EB1BCu) {
        ctx->pc = 0x3EB1BCu;
            // 0x3eb1bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3EB1C0u;
        goto label_3eb1c0;
    }
    ctx->pc = 0x3EB1B8u;
    {
        const bool branch_taken_0x3eb1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB1B8u;
            // 0x3eb1bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb1b8) {
            ctx->pc = 0x3EB1C8u;
            goto label_3eb1c8;
        }
    }
    ctx->pc = 0x3EB1C0u;
label_3eb1c0:
    // 0x3eb1c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3eb1c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb1c4:
    // 0x3eb1c4: 0x0  nop
    ctx->pc = 0x3eb1c4u;
    // NOP
label_3eb1c8:
    // 0x3eb1c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3eb1cc:
    if (ctx->pc == 0x3EB1CCu) {
        ctx->pc = 0x3EB1D0u;
        goto label_3eb1d0;
    }
    ctx->pc = 0x3EB1C8u;
    {
        const bool branch_taken_0x3eb1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb1c8) {
            ctx->pc = 0x3EB1D8u;
            goto label_3eb1d8;
        }
    }
    ctx->pc = 0x3EB1D0u;
label_3eb1d0:
    // 0x3eb1d0: 0x1000000d  b           . + 4 + (0xD << 2)
label_3eb1d4:
    if (ctx->pc == 0x3EB1D4u) {
        ctx->pc = 0x3EB1D8u;
        goto label_3eb1d8;
    }
    ctx->pc = 0x3EB1D0u;
    {
        const bool branch_taken_0x3eb1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb1d0) {
            ctx->pc = 0x3EB208u;
            goto label_3eb208;
        }
    }
    ctx->pc = 0x3EB1D8u;
label_3eb1d8:
    // 0x3eb1d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3eb1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3eb1dc:
    // 0x3eb1dc: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x3eb1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_3eb1e0:
    // 0x3eb1e0: 0x40f809  jalr        $v0
label_3eb1e4:
    if (ctx->pc == 0x3EB1E4u) {
        ctx->pc = 0x3EB1E4u;
            // 0x3eb1e4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3EB1E8u;
        goto label_3eb1e8;
    }
    ctx->pc = 0x3EB1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB1E8u);
        ctx->pc = 0x3EB1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB1E0u;
            // 0x3eb1e4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EB1E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EB1E8u; }
            if (ctx->pc != 0x3EB1E8u) { return; }
        }
        }
    }
    ctx->pc = 0x3EB1E8u;
label_3eb1e8:
    // 0x3eb1e8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3eb1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3eb1ec:
    // 0x3eb1ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3eb1ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3eb1f0:
    // 0x3eb1f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3eb1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3eb1f4:
    // 0x3eb1f4: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_3eb1f8:
    if (ctx->pc == 0x3EB1F8u) {
        ctx->pc = 0x3EB1FCu;
        goto label_3eb1fc;
    }
    ctx->pc = 0x3EB1F4u;
    {
        const bool branch_taken_0x3eb1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb1f4) {
            ctx->pc = 0x3EB148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb148;
        }
    }
    ctx->pc = 0x3EB1FCu;
label_3eb1fc:
    // 0x3eb1fc: 0x2402ff3c  addiu       $v0, $zero, -0xC4
    ctx->pc = 0x3eb1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967100));
label_3eb200:
    // 0x3eb200: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x3eb200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_3eb204:
    // 0x3eb204: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3eb204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb208:
    // 0x3eb208: 0x10400109  beqz        $v0, . + 4 + (0x109 << 2)
label_3eb20c:
    if (ctx->pc == 0x3EB20Cu) {
        ctx->pc = 0x3EB20Cu;
            // 0x3eb20c: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->pc = 0x3EB210u;
        goto label_3eb210;
    }
    ctx->pc = 0x3EB208u;
    {
        const bool branch_taken_0x3eb208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB208u;
            // 0x3eb20c: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb208) {
            ctx->pc = 0x3EB630u;
            goto label_3eb630;
        }
    }
    ctx->pc = 0x3EB210u;
label_3eb210:
    // 0x3eb210: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x3eb210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3eb214:
    // 0x3eb214: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3eb218:
    if (ctx->pc == 0x3EB218u) {
        ctx->pc = 0x3EB21Cu;
        goto label_3eb21c;
    }
    ctx->pc = 0x3EB214u;
    {
        const bool branch_taken_0x3eb214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb214) {
            ctx->pc = 0x3EB238u;
            goto label_3eb238;
        }
    }
    ctx->pc = 0x3EB21Cu;
label_3eb21c:
    // 0x3eb21c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3eb21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3eb220:
    // 0x3eb220: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3eb220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_3eb224:
    // 0x3eb224: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3eb224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3eb228:
    // 0x3eb228: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3eb228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3eb22c:
    // 0x3eb22c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x3eb22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_3eb230:
    // 0x3eb230: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3eb230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3eb234:
    // 0x3eb234: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x3eb234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_3eb238:
    // 0x3eb238: 0x16400017  bnez        $s2, . + 4 + (0x17 << 2)
label_3eb23c:
    if (ctx->pc == 0x3EB23Cu) {
        ctx->pc = 0x3EB240u;
        goto label_3eb240;
    }
    ctx->pc = 0x3EB238u;
    {
        const bool branch_taken_0x3eb238 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb238) {
            ctx->pc = 0x3EB298u;
            goto label_3eb298;
        }
    }
    ctx->pc = 0x3EB240u;
label_3eb240:
    // 0x3eb240: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x3eb240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3eb244:
    // 0x3eb244: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3eb244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3eb248:
    // 0x3eb248: 0x8e930014  lw          $s3, 0x14($s4)
    ctx->pc = 0x3eb248u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3eb24c:
    // 0x3eb24c: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x3eb24cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3eb250:
    // 0x3eb250: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x3eb250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3eb254:
    // 0x3eb254: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3eb254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3eb258:
    // 0x3eb258: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3eb25c:
    if (ctx->pc == 0x3EB25Cu) {
        ctx->pc = 0x3EB260u;
        goto label_3eb260;
    }
    ctx->pc = 0x3EB258u;
    {
        const bool branch_taken_0x3eb258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb258) {
            ctx->pc = 0x3EB268u;
            goto label_3eb268;
        }
    }
    ctx->pc = 0x3EB260u;
label_3eb260:
    // 0x3eb260: 0x1000000b  b           . + 4 + (0xB << 2)
label_3eb264:
    if (ctx->pc == 0x3EB264u) {
        ctx->pc = 0x3EB268u;
        goto label_3eb268;
    }
    ctx->pc = 0x3EB260u;
    {
        const bool branch_taken_0x3eb260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb260) {
            ctx->pc = 0x3EB290u;
            goto label_3eb290;
        }
    }
    ctx->pc = 0x3EB268u;
label_3eb268:
    // 0x3eb268: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3eb268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3eb26c:
    // 0x3eb26c: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x3eb26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_3eb270:
    // 0x3eb270: 0x40f809  jalr        $v0
label_3eb274:
    if (ctx->pc == 0x3EB274u) {
        ctx->pc = 0x3EB274u;
            // 0x3eb274: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3EB278u;
        goto label_3eb278;
    }
    ctx->pc = 0x3EB270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB278u);
        ctx->pc = 0x3EB274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB270u;
            // 0x3eb274: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EB278u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EB278u; }
            if (ctx->pc != 0x3EB278u) { return; }
        }
        }
    }
    ctx->pc = 0x3EB278u;
label_3eb278:
    // 0x3eb278: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3eb278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3eb27c:
    // 0x3eb27c: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
label_3eb280:
    if (ctx->pc == 0x3EB280u) {
        ctx->pc = 0x3EB284u;
        goto label_3eb284;
    }
    ctx->pc = 0x3EB27Cu;
    {
        const bool branch_taken_0x3eb27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb27c) {
            ctx->pc = 0x3EB240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb240;
        }
    }
    ctx->pc = 0x3EB284u;
label_3eb284:
    // 0x3eb284: 0x2402ff3c  addiu       $v0, $zero, -0xC4
    ctx->pc = 0x3eb284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967100));
label_3eb288:
    // 0x3eb288: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3eb288u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb28c:
    // 0x3eb28c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x3eb28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_3eb290:
    // 0x3eb290: 0x526000e8  beql        $s3, $zero, . + 4 + (0xE8 << 2)
label_3eb294:
    if (ctx->pc == 0x3EB294u) {
        ctx->pc = 0x3EB294u;
            // 0x3eb294: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3EB298u;
        goto label_3eb298;
    }
    ctx->pc = 0x3EB290u;
    {
        const bool branch_taken_0x3eb290 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb290) {
            ctx->pc = 0x3EB294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB290u;
            // 0x3eb294: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EB634u;
            goto label_3eb634;
        }
    }
    ctx->pc = 0x3EB298u;
label_3eb298:
    // 0x3eb298: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3eb298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3eb29c:
    // 0x3eb29c: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_3eb2a0:
    if (ctx->pc == 0x3EB2A0u) {
        ctx->pc = 0x3EB2A4u;
        goto label_3eb2a4;
    }
    ctx->pc = 0x3EB29Cu;
    {
        const bool branch_taken_0x3eb29c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3eb29c) {
            ctx->pc = 0x3EB2C0u;
            goto label_3eb2c0;
        }
    }
    ctx->pc = 0x3EB2A4u;
label_3eb2a4:
    // 0x3eb2a4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3eb2a8:
    if (ctx->pc == 0x3EB2A8u) {
        ctx->pc = 0x3EB2ACu;
        goto label_3eb2ac;
    }
    ctx->pc = 0x3EB2A4u;
    {
        const bool branch_taken_0x3eb2a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb2a4) {
            ctx->pc = 0x3EB2B8u;
            goto label_3eb2b8;
        }
    }
    ctx->pc = 0x3EB2ACu;
label_3eb2ac:
    // 0x3eb2ac: 0x10000014  b           . + 4 + (0x14 << 2)
label_3eb2b0:
    if (ctx->pc == 0x3EB2B0u) {
        ctx->pc = 0x3EB2B4u;
        goto label_3eb2b4;
    }
    ctx->pc = 0x3EB2ACu;
    {
        const bool branch_taken_0x3eb2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb2ac) {
            ctx->pc = 0x3EB300u;
            goto label_3eb300;
        }
    }
    ctx->pc = 0x3EB2B4u;
label_3eb2b4:
    // 0x3eb2b4: 0x0  nop
    ctx->pc = 0x3eb2b4u;
    // NOP
label_3eb2b8:
    // 0x3eb2b8: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3eb2bc:
    if (ctx->pc == 0x3EB2BCu) {
        ctx->pc = 0x3EB2BCu;
            // 0x3eb2bc: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3EB2C0u;
        goto label_3eb2c0;
    }
    ctx->pc = 0x3EB2B8u;
    {
        const bool branch_taken_0x3eb2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB2B8u;
            // 0x3eb2bc: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb2b8) {
            ctx->pc = 0x3EB368u;
            goto label_3eb368;
        }
    }
    ctx->pc = 0x3EB2C0u;
label_3eb2c0:
    // 0x3eb2c0: 0x1a400027  blez        $s2, . + 4 + (0x27 << 2)
label_3eb2c4:
    if (ctx->pc == 0x3EB2C4u) {
        ctx->pc = 0x3EB2C8u;
        goto label_3eb2c8;
    }
    ctx->pc = 0x3EB2C0u;
    {
        const bool branch_taken_0x3eb2c0 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3eb2c0) {
            ctx->pc = 0x3EB360u;
            goto label_3eb360;
        }
    }
    ctx->pc = 0x3EB2C8u;
label_3eb2c8:
    // 0x3eb2c8: 0xa2700000  sb          $s0, 0x0($s3)
    ctx->pc = 0x3eb2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 16));
label_3eb2cc:
    // 0x3eb2cc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3eb2ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3eb2d0:
    // 0x3eb2d0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3eb2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3eb2d4:
    // 0x3eb2d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3eb2d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3eb2d8:
    // 0x3eb2d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3eb2d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb2dc:
    // 0x3eb2dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3eb2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb2e0:
    // 0x3eb2e0: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x3eb2e0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3eb2e4:
    // 0x3eb2e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3eb2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3eb2e8:
    // 0x3eb2e8: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3eb2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3eb2ec:
    // 0x3eb2ec: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3eb2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3eb2f0:
    // 0x3eb2f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3eb2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3eb2f4:
    // 0x3eb2f4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3eb2f8:
    if (ctx->pc == 0x3EB2F8u) {
        ctx->pc = 0x3EB2F8u;
            // 0x3eb2f8: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x3EB2FCu;
        goto label_3eb2fc;
    }
    ctx->pc = 0x3EB2F4u;
    {
        const bool branch_taken_0x3eb2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB2F4u;
            // 0x3eb2f8: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb2f4) {
            ctx->pc = 0x3EB368u;
            goto label_3eb368;
        }
    }
    ctx->pc = 0x3EB2FCu;
label_3eb2fc:
    // 0x3eb2fc: 0x0  nop
    ctx->pc = 0x3eb2fcu;
    // NOP
label_3eb300:
    // 0x3eb300: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x3eb300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3eb304:
    // 0x3eb304: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_3eb308:
    if (ctx->pc == 0x3EB308u) {
        ctx->pc = 0x3EB30Cu;
        goto label_3eb30c;
    }
    ctx->pc = 0x3EB304u;
    {
        const bool branch_taken_0x3eb304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb304) {
            ctx->pc = 0x3EB360u;
            goto label_3eb360;
        }
    }
    ctx->pc = 0x3EB30Cu;
label_3eb30c:
    // 0x3eb30c: 0x2711823  subu        $v1, $s3, $s1
    ctx->pc = 0x3eb30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_3eb310:
    // 0x3eb310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eb310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eb314:
    // 0x3eb314: 0x0  nop
    ctx->pc = 0x3eb314u;
    // NOP
label_3eb318:
    // 0x3eb318: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3eb318u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb31c:
    // 0x3eb31c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3eb31cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3eb320:
    // 0x3eb320: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eb320u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eb324:
    // 0x3eb324: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3eb324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3eb328:
    // 0x3eb328: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3eb328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3eb32c:
    // 0x3eb32c: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
label_3eb330:
    if (ctx->pc == 0x3EB330u) {
        ctx->pc = 0x3EB334u;
        goto label_3eb334;
    }
    ctx->pc = 0x3EB32Cu;
    {
        const bool branch_taken_0x3eb32c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x3eb32c) {
            ctx->pc = 0x3EB318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb318;
        }
    }
    ctx->pc = 0x3EB334u;
label_3eb334:
    // 0x3eb334: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3eb334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3eb338:
    // 0x3eb338: 0x2449023  subu        $s2, $s2, $a0
    ctx->pc = 0x3eb338u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_3eb33c:
    // 0x3eb33c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3eb33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb340:
    // 0x3eb340: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3eb340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb344:
    // 0x3eb344: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x3eb344u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3eb348:
    // 0x3eb348: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3eb348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3eb34c:
    // 0x3eb34c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3eb34cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3eb350:
    // 0x3eb350: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3eb350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3eb354:
    // 0x3eb354: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3eb354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3eb358:
    // 0x3eb358: 0x10000003  b           . + 4 + (0x3 << 2)
label_3eb35c:
    if (ctx->pc == 0x3EB35Cu) {
        ctx->pc = 0x3EB35Cu;
            // 0x3eb35c: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x3EB360u;
        goto label_3eb360;
    }
    ctx->pc = 0x3EB358u;
    {
        const bool branch_taken_0x3eb358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB358u;
            // 0x3eb35c: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb358) {
            ctx->pc = 0x3EB368u;
            goto label_3eb368;
        }
    }
    ctx->pc = 0x3EB360u;
label_3eb360:
    // 0x3eb360: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3eb360u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb364:
    // 0x3eb364: 0x0  nop
    ctx->pc = 0x3eb364u;
    // NOP
label_3eb368:
    // 0x3eb368: 0x1060ffb3  beqz        $v1, . + 4 + (-0x4D << 2)
label_3eb36c:
    if (ctx->pc == 0x3EB36Cu) {
        ctx->pc = 0x3EB370u;
        goto label_3eb370;
    }
    ctx->pc = 0x3EB368u;
    {
        const bool branch_taken_0x3eb368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb368) {
            ctx->pc = 0x3EB238u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb238;
        }
    }
    ctx->pc = 0x3EB370u;
label_3eb370:
    // 0x3eb370: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3eb370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3eb374:
    // 0x3eb374: 0x1860009a  blez        $v1, . + 4 + (0x9A << 2)
label_3eb378:
    if (ctx->pc == 0x3EB378u) {
        ctx->pc = 0x3EB37Cu;
        goto label_3eb37c;
    }
    ctx->pc = 0x3EB374u;
    {
        const bool branch_taken_0x3eb374 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3eb374) {
            ctx->pc = 0x3EB5E0u;
            goto label_3eb5e0;
        }
    }
    ctx->pc = 0x3EB37Cu;
label_3eb37c:
    // 0x3eb37c: 0x0  nop
    ctx->pc = 0x3eb37cu;
    // NOP
label_3eb380:
    // 0x3eb380: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_3eb384:
    if (ctx->pc == 0x3EB384u) {
        ctx->pc = 0x3EB388u;
        goto label_3eb388;
    }
    ctx->pc = 0x3EB380u;
    {
        const bool branch_taken_0x3eb380 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3eb380) {
            ctx->pc = 0x3EB390u;
            goto label_3eb390;
        }
    }
    ctx->pc = 0x3EB388u;
label_3eb388:
    // 0x3eb388: 0x10000051  b           . + 4 + (0x51 << 2)
label_3eb38c:
    if (ctx->pc == 0x3EB38Cu) {
        ctx->pc = 0x3EB38Cu;
            // 0x3eb38c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EB390u;
        goto label_3eb390;
    }
    ctx->pc = 0x3EB388u;
    {
        const bool branch_taken_0x3eb388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB388u;
            // 0x3eb38c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb388) {
            ctx->pc = 0x3EB4D0u;
            goto label_3eb4d0;
        }
    }
    ctx->pc = 0x3EB390u;
label_3eb390:
    // 0x3eb390: 0x8fa800cc  lw          $t0, 0xCC($sp)
    ctx->pc = 0x3eb390u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_3eb394:
    // 0x3eb394: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x3eb394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_3eb398:
    // 0x3eb398: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3eb398u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3eb39c:
    // 0x3eb39c: 0x2487ffff  addiu       $a3, $a0, -0x1
    ctx->pc = 0x3eb39cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3eb3a0:
    // 0x3eb3a0: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3eb3a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
label_3eb3a4:
    // 0x3eb3a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3eb3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3eb3a8:
    // 0x3eb3a8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_3eb3ac:
    if (ctx->pc == 0x3EB3ACu) {
        ctx->pc = 0x3EB3B0u;
        goto label_3eb3b0;
    }
    ctx->pc = 0x3EB3A8u;
    {
        const bool branch_taken_0x3eb3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb3a8) {
            ctx->pc = 0x3EB440u;
            goto label_3eb440;
        }
    }
    ctx->pc = 0x3EB3B0u;
label_3eb3b0:
    // 0x3eb3b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eb3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3eb3b4:
    // 0x3eb3b4: 0x92a20009  lbu         $v0, 0x9($s5)
    ctx->pc = 0x3eb3b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 9)));
label_3eb3b8:
    // 0x3eb3b8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3eb3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3eb3bc:
    // 0x3eb3bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3eb3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb3c0:
    // 0x3eb3c0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3eb3c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3eb3c4:
    // 0x3eb3c4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3eb3c8:
    if (ctx->pc == 0x3EB3C8u) {
        ctx->pc = 0x3EB3CCu;
        goto label_3eb3cc;
    }
    ctx->pc = 0x3EB3C4u;
    {
        const bool branch_taken_0x3eb3c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb3c4) {
            ctx->pc = 0x3EB3D8u;
            goto label_3eb3d8;
        }
    }
    ctx->pc = 0x3EB3CCu;
label_3eb3cc:
    // 0x3eb3cc: 0x10000040  b           . + 4 + (0x40 << 2)
label_3eb3d0:
    if (ctx->pc == 0x3EB3D0u) {
        ctx->pc = 0x3EB3D0u;
            // 0x3eb3d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EB3D4u;
        goto label_3eb3d4;
    }
    ctx->pc = 0x3EB3CCu;
    {
        const bool branch_taken_0x3eb3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB3CCu;
            // 0x3eb3d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb3cc) {
            ctx->pc = 0x3EB4D0u;
            goto label_3eb4d0;
        }
    }
    ctx->pc = 0x3EB3D4u;
label_3eb3d4:
    // 0x3eb3d4: 0x0  nop
    ctx->pc = 0x3eb3d4u;
    // NOP
label_3eb3d8:
    // 0x3eb3d8: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
label_3eb3dc:
    if (ctx->pc == 0x3EB3DCu) {
        ctx->pc = 0x3EB3DCu;
            // 0x3eb3dc: 0xafa700c4  sw          $a3, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 7));
        ctx->pc = 0x3EB3E0u;
        goto label_3eb3e0;
    }
    ctx->pc = 0x3EB3D8u;
    {
        const bool branch_taken_0x3eb3d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB3D8u;
            // 0x3eb3dc: 0xafa700c4  sw          $a3, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb3d8) {
            ctx->pc = 0x3EB400u;
            goto label_3eb400;
        }
    }
    ctx->pc = 0x3EB3E0u;
label_3eb3e0:
    // 0x3eb3e0: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x3eb3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3eb3e4:
    // 0x3eb3e4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3eb3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3eb3e8:
    // 0x3eb3e8: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3eb3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_3eb3ec:
    // 0x3eb3ec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3eb3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3eb3f0:
    // 0x3eb3f0: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x3eb3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
label_3eb3f4:
    // 0x3eb3f4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3eb3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3eb3f8:
    // 0x3eb3f8: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x3eb3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_3eb3fc:
    // 0x3eb3fc: 0x0  nop
    ctx->pc = 0x3eb3fcu;
    // NOP
label_3eb400:
    // 0x3eb400: 0x92a80004  lbu         $t0, 0x4($s5)
    ctx->pc = 0x3eb400u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
label_3eb404:
    // 0x3eb404: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3eb404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3eb408:
    // 0x3eb408: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x3eb408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_3eb40c:
    // 0x3eb40c: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x3eb40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_3eb410:
    // 0x3eb410: 0xc0fad9c  jal         func_3EB670
label_3eb414:
    if (ctx->pc == 0x3EB414u) {
        ctx->pc = 0x3EB414u;
            // 0x3eb414: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->pc = 0x3EB418u;
        goto label_3eb418;
    }
    ctx->pc = 0x3EB410u;
    SET_GPR_U32(ctx, 31, 0x3EB418u);
    ctx->pc = 0x3EB414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB410u;
            // 0x3eb414: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EB670u;
    if (runtime->hasFunction(0x3EB670u)) {
        auto targetFn = runtime->lookupFunction(0x3EB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EB418u; }
        if (ctx->pc != 0x3EB418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EB670_0x3eb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EB418u; }
        if (ctx->pc != 0x3EB418u) { return; }
    }
    ctx->pc = 0x3EB418u;
label_3eb418:
    // 0x3eb418: 0x92a80005  lbu         $t0, 0x5($s5)
    ctx->pc = 0x3eb418u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
label_3eb41c:
    // 0x3eb41c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3eb41cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eb420:
    // 0x3eb420: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3eb420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3eb424:
    // 0x3eb424: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x3eb424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_3eb428:
    // 0x3eb428: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x3eb428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_3eb42c:
    // 0x3eb42c: 0xc0fad9c  jal         func_3EB670
label_3eb430:
    if (ctx->pc == 0x3EB430u) {
        ctx->pc = 0x3EB430u;
            // 0x3eb430: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->pc = 0x3EB434u;
        goto label_3eb434;
    }
    ctx->pc = 0x3EB42Cu;
    SET_GPR_U32(ctx, 31, 0x3EB434u);
    ctx->pc = 0x3EB430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB42Cu;
            // 0x3eb430: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EB670u;
    if (runtime->hasFunction(0x3EB670u)) {
        auto targetFn = runtime->lookupFunction(0x3EB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EB434u; }
        if (ctx->pc != 0x3EB434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EB670_0x3eb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EB434u; }
        if (ctx->pc != 0x3EB434u) { return; }
    }
    ctx->pc = 0x3EB434u;
label_3eb434:
    // 0x3eb434: 0x10000024  b           . + 4 + (0x24 << 2)
label_3eb438:
    if (ctx->pc == 0x3EB438u) {
        ctx->pc = 0x3EB438u;
            // 0x3eb438: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EB43Cu;
        goto label_3eb43c;
    }
    ctx->pc = 0x3EB434u;
    {
        const bool branch_taken_0x3eb434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB434u;
            // 0x3eb438: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb434) {
            ctx->pc = 0x3EB4C8u;
            goto label_3eb4c8;
        }
    }
    ctx->pc = 0x3EB43Cu;
label_3eb43c:
    // 0x3eb43c: 0x0  nop
    ctx->pc = 0x3eb43cu;
    // NOP
label_3eb440:
    // 0x3eb440: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3eb440u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3eb444:
    // 0x3eb444: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3eb448:
    if (ctx->pc == 0x3EB448u) {
        ctx->pc = 0x3EB44Cu;
        goto label_3eb44c;
    }
    ctx->pc = 0x3EB444u;
    {
        const bool branch_taken_0x3eb444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb444) {
            ctx->pc = 0x3EB458u;
            goto label_3eb458;
        }
    }
    ctx->pc = 0x3EB44Cu;
label_3eb44c:
    // 0x3eb44c: 0x10000020  b           . + 4 + (0x20 << 2)
label_3eb450:
    if (ctx->pc == 0x3EB450u) {
        ctx->pc = 0x3EB450u;
            // 0x3eb450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EB454u;
        goto label_3eb454;
    }
    ctx->pc = 0x3EB44Cu;
    {
        const bool branch_taken_0x3eb44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB44Cu;
            // 0x3eb450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb44c) {
            ctx->pc = 0x3EB4D0u;
            goto label_3eb4d0;
        }
    }
    ctx->pc = 0x3EB454u;
label_3eb454:
    // 0x3eb454: 0x0  nop
    ctx->pc = 0x3eb454u;
    // NOP
label_3eb458:
    // 0x3eb458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eb458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eb45c:
    // 0x3eb45c: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_3eb460:
    if (ctx->pc == 0x3EB460u) {
        ctx->pc = 0x3EB464u;
        goto label_3eb464;
    }
    ctx->pc = 0x3EB45Cu;
    {
        const bool branch_taken_0x3eb45c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eb45c) {
            ctx->pc = 0x3EB488u;
            goto label_3eb488;
        }
    }
    ctx->pc = 0x3EB464u;
label_3eb464:
    // 0x3eb464: 0x91100001  lbu         $s0, 0x1($t0)
    ctx->pc = 0x3eb464u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_3eb468:
    // 0x3eb468: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x3eb468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_3eb46c:
    // 0x3eb46c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3eb46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3eb470:
    // 0x3eb470: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3eb470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3eb474:
    // 0x3eb474: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x3eb474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_3eb478:
    // 0x3eb478: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x3eb478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3eb47c:
    // 0x3eb47c: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x3eb47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_3eb480:
    // 0x3eb480: 0x1000000f  b           . + 4 + (0xF << 2)
label_3eb484:
    if (ctx->pc == 0x3EB484u) {
        ctx->pc = 0x3EB484u;
            // 0x3eb484: 0xafa300c8  sw          $v1, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
        ctx->pc = 0x3EB488u;
        goto label_3eb488;
    }
    ctx->pc = 0x3EB480u;
    {
        const bool branch_taken_0x3eb480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB480u;
            // 0x3eb484: 0xafa300c8  sw          $v1, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb480) {
            ctx->pc = 0x3EB4C0u;
            goto label_3eb4c0;
        }
    }
    ctx->pc = 0x3EB488u;
label_3eb488:
    // 0x3eb488: 0xafa700c4  sw          $a3, 0xC4($sp)
    ctx->pc = 0x3eb488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 7));
label_3eb48c:
    // 0x3eb48c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3eb48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3eb490:
    // 0x3eb490: 0x91040001  lbu         $a0, 0x1($t0)
    ctx->pc = 0x3eb490u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_3eb494:
    // 0x3eb494: 0x472823  subu        $a1, $v0, $a3
    ctx->pc = 0x3eb494u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3eb498:
    // 0x3eb498: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x3eb498u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3eb49c:
    // 0x3eb49c: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x3eb49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3eb4a0:
    // 0x3eb4a0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3eb4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3eb4a4:
    // 0x3eb4a4: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x3eb4a4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
label_3eb4a8:
    // 0x3eb4a8: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x3eb4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_3eb4ac:
    // 0x3eb4ac: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x3eb4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_3eb4b0:
    // 0x3eb4b0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3eb4b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3eb4b4:
    // 0x3eb4b4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3eb4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3eb4b8:
    // 0x3eb4b8: 0xa48025  or          $s0, $a1, $a0
    ctx->pc = 0x3eb4b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_3eb4bc:
    // 0x3eb4bc: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x3eb4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_3eb4c0:
    // 0x3eb4c0: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x3eb4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3eb4c4:
    // 0x3eb4c4: 0x0  nop
    ctx->pc = 0x3eb4c4u;
    // NOP
label_3eb4c8:
    // 0x3eb4c8: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3eb4c8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3eb4cc:
    // 0x3eb4cc: 0x0  nop
    ctx->pc = 0x3eb4ccu;
    // NOP
label_3eb4d0:
    // 0x3eb4d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3eb4d4:
    if (ctx->pc == 0x3EB4D4u) {
        ctx->pc = 0x3EB4D8u;
        goto label_3eb4d8;
    }
    ctx->pc = 0x3EB4D0u;
    {
        const bool branch_taken_0x3eb4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb4d0) {
            ctx->pc = 0x3EB4E8u;
            goto label_3eb4e8;
        }
    }
    ctx->pc = 0x3EB4D8u;
label_3eb4d8:
    // 0x3eb4d8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3eb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3eb4dc:
    // 0x3eb4dc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3eb4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_3eb4e0:
    // 0x3eb4e0: 0x1000003f  b           . + 4 + (0x3F << 2)
label_3eb4e4:
    if (ctx->pc == 0x3EB4E4u) {
        ctx->pc = 0x3EB4E4u;
            // 0x3eb4e4: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->pc = 0x3EB4E8u;
        goto label_3eb4e8;
    }
    ctx->pc = 0x3EB4E0u;
    {
        const bool branch_taken_0x3eb4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB4E0u;
            // 0x3eb4e4: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb4e0) {
            ctx->pc = 0x3EB5E0u;
            goto label_3eb5e0;
        }
    }
    ctx->pc = 0x3EB4E8u;
label_3eb4e8:
    // 0x3eb4e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3eb4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3eb4ec:
    // 0x3eb4ec: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_3eb4f0:
    if (ctx->pc == 0x3EB4F0u) {
        ctx->pc = 0x3EB4F4u;
        goto label_3eb4f4;
    }
    ctx->pc = 0x3EB4ECu;
    {
        const bool branch_taken_0x3eb4ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3eb4ec) {
            ctx->pc = 0x3EB510u;
            goto label_3eb510;
        }
    }
    ctx->pc = 0x3EB4F4u;
label_3eb4f4:
    // 0x3eb4f4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3eb4f8:
    if (ctx->pc == 0x3EB4F8u) {
        ctx->pc = 0x3EB4FCu;
        goto label_3eb4fc;
    }
    ctx->pc = 0x3EB4F4u;
    {
        const bool branch_taken_0x3eb4f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb4f4) {
            ctx->pc = 0x3EB508u;
            goto label_3eb508;
        }
    }
    ctx->pc = 0x3EB4FCu;
label_3eb4fc:
    // 0x3eb4fc: 0x10000014  b           . + 4 + (0x14 << 2)
label_3eb500:
    if (ctx->pc == 0x3EB500u) {
        ctx->pc = 0x3EB504u;
        goto label_3eb504;
    }
    ctx->pc = 0x3EB4FCu;
    {
        const bool branch_taken_0x3eb4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb4fc) {
            ctx->pc = 0x3EB550u;
            goto label_3eb550;
        }
    }
    ctx->pc = 0x3EB504u;
label_3eb504:
    // 0x3eb504: 0x0  nop
    ctx->pc = 0x3eb504u;
    // NOP
label_3eb508:
    // 0x3eb508: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3eb50c:
    if (ctx->pc == 0x3EB50Cu) {
        ctx->pc = 0x3EB50Cu;
            // 0x3eb50c: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3EB510u;
        goto label_3eb510;
    }
    ctx->pc = 0x3EB508u;
    {
        const bool branch_taken_0x3eb508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB508u;
            // 0x3eb50c: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb508) {
            ctx->pc = 0x3EB5B8u;
            goto label_3eb5b8;
        }
    }
    ctx->pc = 0x3EB510u;
label_3eb510:
    // 0x3eb510: 0x1a400027  blez        $s2, . + 4 + (0x27 << 2)
label_3eb514:
    if (ctx->pc == 0x3EB514u) {
        ctx->pc = 0x3EB518u;
        goto label_3eb518;
    }
    ctx->pc = 0x3EB510u;
    {
        const bool branch_taken_0x3eb510 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3eb510) {
            ctx->pc = 0x3EB5B0u;
            goto label_3eb5b0;
        }
    }
    ctx->pc = 0x3EB518u;
label_3eb518:
    // 0x3eb518: 0xa2700000  sb          $s0, 0x0($s3)
    ctx->pc = 0x3eb518u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 16));
label_3eb51c:
    // 0x3eb51c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3eb51cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3eb520:
    // 0x3eb520: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3eb520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3eb524:
    // 0x3eb524: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3eb524u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3eb528:
    // 0x3eb528: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3eb528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb52c:
    // 0x3eb52c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3eb52cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb530:
    // 0x3eb530: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x3eb530u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3eb534:
    // 0x3eb534: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3eb534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3eb538:
    // 0x3eb538: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3eb538u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3eb53c:
    // 0x3eb53c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3eb53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3eb540:
    // 0x3eb540: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3eb540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3eb544:
    // 0x3eb544: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3eb548:
    if (ctx->pc == 0x3EB548u) {
        ctx->pc = 0x3EB548u;
            // 0x3eb548: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x3EB54Cu;
        goto label_3eb54c;
    }
    ctx->pc = 0x3EB544u;
    {
        const bool branch_taken_0x3eb544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB544u;
            // 0x3eb548: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb544) {
            ctx->pc = 0x3EB5B8u;
            goto label_3eb5b8;
        }
    }
    ctx->pc = 0x3EB54Cu;
label_3eb54c:
    // 0x3eb54c: 0x0  nop
    ctx->pc = 0x3eb54cu;
    // NOP
label_3eb550:
    // 0x3eb550: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x3eb550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3eb554:
    // 0x3eb554: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_3eb558:
    if (ctx->pc == 0x3EB558u) {
        ctx->pc = 0x3EB55Cu;
        goto label_3eb55c;
    }
    ctx->pc = 0x3EB554u;
    {
        const bool branch_taken_0x3eb554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb554) {
            ctx->pc = 0x3EB5B0u;
            goto label_3eb5b0;
        }
    }
    ctx->pc = 0x3EB55Cu;
label_3eb55c:
    // 0x3eb55c: 0x2711823  subu        $v1, $s3, $s1
    ctx->pc = 0x3eb55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_3eb560:
    // 0x3eb560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eb560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eb564:
    // 0x3eb564: 0x0  nop
    ctx->pc = 0x3eb564u;
    // NOP
label_3eb568:
    // 0x3eb568: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3eb568u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb56c:
    // 0x3eb56c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3eb56cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3eb570:
    // 0x3eb570: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eb570u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eb574:
    // 0x3eb574: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3eb574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3eb578:
    // 0x3eb578: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3eb578u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3eb57c:
    // 0x3eb57c: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
label_3eb580:
    if (ctx->pc == 0x3EB580u) {
        ctx->pc = 0x3EB584u;
        goto label_3eb584;
    }
    ctx->pc = 0x3EB57Cu;
    {
        const bool branch_taken_0x3eb57c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x3eb57c) {
            ctx->pc = 0x3EB568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb568;
        }
    }
    ctx->pc = 0x3EB584u;
label_3eb584:
    // 0x3eb584: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3eb584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3eb588:
    // 0x3eb588: 0x2449023  subu        $s2, $s2, $a0
    ctx->pc = 0x3eb588u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_3eb58c:
    // 0x3eb58c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3eb58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb590:
    // 0x3eb590: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3eb590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb594:
    // 0x3eb594: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x3eb594u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3eb598:
    // 0x3eb598: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3eb598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3eb59c:
    // 0x3eb59c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3eb59cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3eb5a0:
    // 0x3eb5a0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3eb5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3eb5a4:
    // 0x3eb5a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3eb5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3eb5a8:
    // 0x3eb5a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3eb5ac:
    if (ctx->pc == 0x3EB5ACu) {
        ctx->pc = 0x3EB5ACu;
            // 0x3eb5ac: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x3EB5B0u;
        goto label_3eb5b0;
    }
    ctx->pc = 0x3EB5A8u;
    {
        const bool branch_taken_0x3eb5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB5A8u;
            // 0x3eb5ac: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb5a8) {
            ctx->pc = 0x3EB5B8u;
            goto label_3eb5b8;
        }
    }
    ctx->pc = 0x3EB5B0u;
label_3eb5b0:
    // 0x3eb5b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3eb5b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb5b4:
    // 0x3eb5b4: 0x0  nop
    ctx->pc = 0x3eb5b4u;
    // NOP
label_3eb5b8:
    // 0x3eb5b8: 0x1060ff1f  beqz        $v1, . + 4 + (-0xE1 << 2)
label_3eb5bc:
    if (ctx->pc == 0x3EB5BCu) {
        ctx->pc = 0x3EB5C0u;
        goto label_3eb5c0;
    }
    ctx->pc = 0x3EB5B8u;
    {
        const bool branch_taken_0x3eb5b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb5b8) {
            ctx->pc = 0x3EB238u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb238;
        }
    }
    ctx->pc = 0x3EB5C0u;
label_3eb5c0:
    // 0x3eb5c0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3eb5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3eb5c4:
    // 0x3eb5c4: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
label_3eb5c8:
    if (ctx->pc == 0x3EB5C8u) {
        ctx->pc = 0x3EB5CCu;
        goto label_3eb5cc;
    }
    ctx->pc = 0x3EB5C4u;
    {
        const bool branch_taken_0x3eb5c4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3eb5c4) {
            ctx->pc = 0x3EB5E0u;
            goto label_3eb5e0;
        }
    }
    ctx->pc = 0x3EB5CCu;
label_3eb5cc:
    // 0x3eb5cc: 0x1e40ff6c  bgtz        $s2, . + 4 + (-0x94 << 2)
label_3eb5d0:
    if (ctx->pc == 0x3EB5D0u) {
        ctx->pc = 0x3EB5D4u;
        goto label_3eb5d4;
    }
    ctx->pc = 0x3EB5CCu;
    {
        const bool branch_taken_0x3eb5cc = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3eb5cc) {
            ctx->pc = 0x3EB380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb380;
        }
    }
    ctx->pc = 0x3EB5D4u;
label_3eb5d4:
    // 0x3eb5d4: 0x1000ff18  b           . + 4 + (-0xE8 << 2)
label_3eb5d8:
    if (ctx->pc == 0x3EB5D8u) {
        ctx->pc = 0x3EB5DCu;
        goto label_3eb5dc;
    }
    ctx->pc = 0x3EB5D4u;
    {
        const bool branch_taken_0x3eb5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb5d4) {
            ctx->pc = 0x3EB238u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb238;
        }
    }
    ctx->pc = 0x3EB5DCu;
label_3eb5dc:
    // 0x3eb5dc: 0x0  nop
    ctx->pc = 0x3eb5dcu;
    // NOP
label_3eb5e0:
    // 0x3eb5e0: 0x8ee20028  lw          $v0, 0x28($s7)
    ctx->pc = 0x3eb5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
label_3eb5e4:
    // 0x3eb5e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3eb5e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3eb5e8:
    // 0x3eb5e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3eb5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3eb5ec:
    // 0x3eb5ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3eb5f0:
    if (ctx->pc == 0x3EB5F0u) {
        ctx->pc = 0x3EB5F4u;
        goto label_3eb5f4;
    }
    ctx->pc = 0x3EB5ECu;
    {
        const bool branch_taken_0x3eb5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb5ec) {
            ctx->pc = 0x3EB610u;
            goto label_3eb610;
        }
    }
    ctx->pc = 0x3EB5F4u;
label_3eb5f4:
    // 0x3eb5f4: 0x8ee30020  lw          $v1, 0x20($s7)
    ctx->pc = 0x3eb5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
label_3eb5f8:
    // 0x3eb5f8: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x3eb5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_3eb5fc:
    // 0x3eb5fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3eb5fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3eb600:
    // 0x3eb600: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3eb604:
    if (ctx->pc == 0x3EB604u) {
        ctx->pc = 0x3EB608u;
        goto label_3eb608;
    }
    ctx->pc = 0x3EB600u;
    {
        const bool branch_taken_0x3eb600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb600) {
            ctx->pc = 0x3EB610u;
            goto label_3eb610;
        }
    }
    ctx->pc = 0x3EB608u;
label_3eb608:
    // 0x3eb608: 0x10000003  b           . + 4 + (0x3 << 2)
label_3eb60c:
    if (ctx->pc == 0x3EB60Cu) {
        ctx->pc = 0x3EB60Cu;
            // 0x3eb60c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3EB610u;
        goto label_3eb610;
    }
    ctx->pc = 0x3EB608u;
    {
        const bool branch_taken_0x3eb608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB608u;
            // 0x3eb60c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb608) {
            ctx->pc = 0x3EB618u;
            goto label_3eb618;
        }
    }
    ctx->pc = 0x3EB610u;
label_3eb610:
    // 0x3eb610: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3eb610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb614:
    // 0x3eb614: 0x0  nop
    ctx->pc = 0x3eb614u;
    // NOP
label_3eb618:
    // 0x3eb618: 0x5040feca  beql        $v0, $zero, . + 4 + (-0x136 << 2)
label_3eb61c:
    if (ctx->pc == 0x3EB61Cu) {
        ctx->pc = 0x3EB61Cu;
            // 0x3eb61c: 0x8fbe00b0  lw          $fp, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x3EB620u;
        goto label_3eb620;
    }
    ctx->pc = 0x3EB618u;
    {
        const bool branch_taken_0x3eb618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb618) {
            ctx->pc = 0x3EB61Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB618u;
            // 0x3eb61c: 0x8fbe00b0  lw          $fp, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EB144u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb144;
        }
    }
    ctx->pc = 0x3EB620u;
label_3eb620:
    // 0x3eb620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eb620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eb624:
    // 0x3eb624: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x3eb624u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_3eb628:
    // 0x3eb628: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3eb628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3eb62c:
    // 0x3eb62c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x3eb62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_3eb630:
    // 0x3eb630: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3eb630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3eb634:
    // 0x3eb634: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3eb634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3eb638:
    // 0x3eb638: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3eb638u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3eb63c:
    // 0x3eb63c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3eb63cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3eb640:
    // 0x3eb640: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3eb640u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3eb644:
    // 0x3eb644: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3eb644u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3eb648:
    // 0x3eb648: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3eb648u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3eb64c:
    // 0x3eb64c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3eb64cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3eb650:
    // 0x3eb650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3eb650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eb654:
    // 0x3eb654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3eb654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eb658:
    // 0x3eb658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3eb658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb65c:
    // 0x3eb65c: 0x3e00008  jr          $ra
label_3eb660:
    if (ctx->pc == 0x3EB660u) {
        ctx->pc = 0x3EB660u;
            // 0x3eb660: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3EB664u;
        goto label_3eb664;
    }
    ctx->pc = 0x3EB65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB65Cu;
            // 0x3eb660: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EB664u;
label_3eb664:
    // 0x3eb664: 0x0  nop
    ctx->pc = 0x3eb664u;
    // NOP
label_3eb668:
    // 0x3eb668: 0x0  nop
    ctx->pc = 0x3eb668u;
    // NOP
label_3eb66c:
    // 0x3eb66c: 0x0  nop
    ctx->pc = 0x3eb66cu;
    // NOP
}
