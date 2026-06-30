#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EB200
// Address: 0x4eb200 - 0x4eb700
void sub_004EB200_0x4eb200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB200_0x4eb200");
#endif

    switch (ctx->pc) {
        case 0x4eb200u: goto label_4eb200;
        case 0x4eb204u: goto label_4eb204;
        case 0x4eb208u: goto label_4eb208;
        case 0x4eb20cu: goto label_4eb20c;
        case 0x4eb210u: goto label_4eb210;
        case 0x4eb214u: goto label_4eb214;
        case 0x4eb218u: goto label_4eb218;
        case 0x4eb21cu: goto label_4eb21c;
        case 0x4eb220u: goto label_4eb220;
        case 0x4eb224u: goto label_4eb224;
        case 0x4eb228u: goto label_4eb228;
        case 0x4eb22cu: goto label_4eb22c;
        case 0x4eb230u: goto label_4eb230;
        case 0x4eb234u: goto label_4eb234;
        case 0x4eb238u: goto label_4eb238;
        case 0x4eb23cu: goto label_4eb23c;
        case 0x4eb240u: goto label_4eb240;
        case 0x4eb244u: goto label_4eb244;
        case 0x4eb248u: goto label_4eb248;
        case 0x4eb24cu: goto label_4eb24c;
        case 0x4eb250u: goto label_4eb250;
        case 0x4eb254u: goto label_4eb254;
        case 0x4eb258u: goto label_4eb258;
        case 0x4eb25cu: goto label_4eb25c;
        case 0x4eb260u: goto label_4eb260;
        case 0x4eb264u: goto label_4eb264;
        case 0x4eb268u: goto label_4eb268;
        case 0x4eb26cu: goto label_4eb26c;
        case 0x4eb270u: goto label_4eb270;
        case 0x4eb274u: goto label_4eb274;
        case 0x4eb278u: goto label_4eb278;
        case 0x4eb27cu: goto label_4eb27c;
        case 0x4eb280u: goto label_4eb280;
        case 0x4eb284u: goto label_4eb284;
        case 0x4eb288u: goto label_4eb288;
        case 0x4eb28cu: goto label_4eb28c;
        case 0x4eb290u: goto label_4eb290;
        case 0x4eb294u: goto label_4eb294;
        case 0x4eb298u: goto label_4eb298;
        case 0x4eb29cu: goto label_4eb29c;
        case 0x4eb2a0u: goto label_4eb2a0;
        case 0x4eb2a4u: goto label_4eb2a4;
        case 0x4eb2a8u: goto label_4eb2a8;
        case 0x4eb2acu: goto label_4eb2ac;
        case 0x4eb2b0u: goto label_4eb2b0;
        case 0x4eb2b4u: goto label_4eb2b4;
        case 0x4eb2b8u: goto label_4eb2b8;
        case 0x4eb2bcu: goto label_4eb2bc;
        case 0x4eb2c0u: goto label_4eb2c0;
        case 0x4eb2c4u: goto label_4eb2c4;
        case 0x4eb2c8u: goto label_4eb2c8;
        case 0x4eb2ccu: goto label_4eb2cc;
        case 0x4eb2d0u: goto label_4eb2d0;
        case 0x4eb2d4u: goto label_4eb2d4;
        case 0x4eb2d8u: goto label_4eb2d8;
        case 0x4eb2dcu: goto label_4eb2dc;
        case 0x4eb2e0u: goto label_4eb2e0;
        case 0x4eb2e4u: goto label_4eb2e4;
        case 0x4eb2e8u: goto label_4eb2e8;
        case 0x4eb2ecu: goto label_4eb2ec;
        case 0x4eb2f0u: goto label_4eb2f0;
        case 0x4eb2f4u: goto label_4eb2f4;
        case 0x4eb2f8u: goto label_4eb2f8;
        case 0x4eb2fcu: goto label_4eb2fc;
        case 0x4eb300u: goto label_4eb300;
        case 0x4eb304u: goto label_4eb304;
        case 0x4eb308u: goto label_4eb308;
        case 0x4eb30cu: goto label_4eb30c;
        case 0x4eb310u: goto label_4eb310;
        case 0x4eb314u: goto label_4eb314;
        case 0x4eb318u: goto label_4eb318;
        case 0x4eb31cu: goto label_4eb31c;
        case 0x4eb320u: goto label_4eb320;
        case 0x4eb324u: goto label_4eb324;
        case 0x4eb328u: goto label_4eb328;
        case 0x4eb32cu: goto label_4eb32c;
        case 0x4eb330u: goto label_4eb330;
        case 0x4eb334u: goto label_4eb334;
        case 0x4eb338u: goto label_4eb338;
        case 0x4eb33cu: goto label_4eb33c;
        case 0x4eb340u: goto label_4eb340;
        case 0x4eb344u: goto label_4eb344;
        case 0x4eb348u: goto label_4eb348;
        case 0x4eb34cu: goto label_4eb34c;
        case 0x4eb350u: goto label_4eb350;
        case 0x4eb354u: goto label_4eb354;
        case 0x4eb358u: goto label_4eb358;
        case 0x4eb35cu: goto label_4eb35c;
        case 0x4eb360u: goto label_4eb360;
        case 0x4eb364u: goto label_4eb364;
        case 0x4eb368u: goto label_4eb368;
        case 0x4eb36cu: goto label_4eb36c;
        case 0x4eb370u: goto label_4eb370;
        case 0x4eb374u: goto label_4eb374;
        case 0x4eb378u: goto label_4eb378;
        case 0x4eb37cu: goto label_4eb37c;
        case 0x4eb380u: goto label_4eb380;
        case 0x4eb384u: goto label_4eb384;
        case 0x4eb388u: goto label_4eb388;
        case 0x4eb38cu: goto label_4eb38c;
        case 0x4eb390u: goto label_4eb390;
        case 0x4eb394u: goto label_4eb394;
        case 0x4eb398u: goto label_4eb398;
        case 0x4eb39cu: goto label_4eb39c;
        case 0x4eb3a0u: goto label_4eb3a0;
        case 0x4eb3a4u: goto label_4eb3a4;
        case 0x4eb3a8u: goto label_4eb3a8;
        case 0x4eb3acu: goto label_4eb3ac;
        case 0x4eb3b0u: goto label_4eb3b0;
        case 0x4eb3b4u: goto label_4eb3b4;
        case 0x4eb3b8u: goto label_4eb3b8;
        case 0x4eb3bcu: goto label_4eb3bc;
        case 0x4eb3c0u: goto label_4eb3c0;
        case 0x4eb3c4u: goto label_4eb3c4;
        case 0x4eb3c8u: goto label_4eb3c8;
        case 0x4eb3ccu: goto label_4eb3cc;
        case 0x4eb3d0u: goto label_4eb3d0;
        case 0x4eb3d4u: goto label_4eb3d4;
        case 0x4eb3d8u: goto label_4eb3d8;
        case 0x4eb3dcu: goto label_4eb3dc;
        case 0x4eb3e0u: goto label_4eb3e0;
        case 0x4eb3e4u: goto label_4eb3e4;
        case 0x4eb3e8u: goto label_4eb3e8;
        case 0x4eb3ecu: goto label_4eb3ec;
        case 0x4eb3f0u: goto label_4eb3f0;
        case 0x4eb3f4u: goto label_4eb3f4;
        case 0x4eb3f8u: goto label_4eb3f8;
        case 0x4eb3fcu: goto label_4eb3fc;
        case 0x4eb400u: goto label_4eb400;
        case 0x4eb404u: goto label_4eb404;
        case 0x4eb408u: goto label_4eb408;
        case 0x4eb40cu: goto label_4eb40c;
        case 0x4eb410u: goto label_4eb410;
        case 0x4eb414u: goto label_4eb414;
        case 0x4eb418u: goto label_4eb418;
        case 0x4eb41cu: goto label_4eb41c;
        case 0x4eb420u: goto label_4eb420;
        case 0x4eb424u: goto label_4eb424;
        case 0x4eb428u: goto label_4eb428;
        case 0x4eb42cu: goto label_4eb42c;
        case 0x4eb430u: goto label_4eb430;
        case 0x4eb434u: goto label_4eb434;
        case 0x4eb438u: goto label_4eb438;
        case 0x4eb43cu: goto label_4eb43c;
        case 0x4eb440u: goto label_4eb440;
        case 0x4eb444u: goto label_4eb444;
        case 0x4eb448u: goto label_4eb448;
        case 0x4eb44cu: goto label_4eb44c;
        case 0x4eb450u: goto label_4eb450;
        case 0x4eb454u: goto label_4eb454;
        case 0x4eb458u: goto label_4eb458;
        case 0x4eb45cu: goto label_4eb45c;
        case 0x4eb460u: goto label_4eb460;
        case 0x4eb464u: goto label_4eb464;
        case 0x4eb468u: goto label_4eb468;
        case 0x4eb46cu: goto label_4eb46c;
        case 0x4eb470u: goto label_4eb470;
        case 0x4eb474u: goto label_4eb474;
        case 0x4eb478u: goto label_4eb478;
        case 0x4eb47cu: goto label_4eb47c;
        case 0x4eb480u: goto label_4eb480;
        case 0x4eb484u: goto label_4eb484;
        case 0x4eb488u: goto label_4eb488;
        case 0x4eb48cu: goto label_4eb48c;
        case 0x4eb490u: goto label_4eb490;
        case 0x4eb494u: goto label_4eb494;
        case 0x4eb498u: goto label_4eb498;
        case 0x4eb49cu: goto label_4eb49c;
        case 0x4eb4a0u: goto label_4eb4a0;
        case 0x4eb4a4u: goto label_4eb4a4;
        case 0x4eb4a8u: goto label_4eb4a8;
        case 0x4eb4acu: goto label_4eb4ac;
        case 0x4eb4b0u: goto label_4eb4b0;
        case 0x4eb4b4u: goto label_4eb4b4;
        case 0x4eb4b8u: goto label_4eb4b8;
        case 0x4eb4bcu: goto label_4eb4bc;
        case 0x4eb4c0u: goto label_4eb4c0;
        case 0x4eb4c4u: goto label_4eb4c4;
        case 0x4eb4c8u: goto label_4eb4c8;
        case 0x4eb4ccu: goto label_4eb4cc;
        case 0x4eb4d0u: goto label_4eb4d0;
        case 0x4eb4d4u: goto label_4eb4d4;
        case 0x4eb4d8u: goto label_4eb4d8;
        case 0x4eb4dcu: goto label_4eb4dc;
        case 0x4eb4e0u: goto label_4eb4e0;
        case 0x4eb4e4u: goto label_4eb4e4;
        case 0x4eb4e8u: goto label_4eb4e8;
        case 0x4eb4ecu: goto label_4eb4ec;
        case 0x4eb4f0u: goto label_4eb4f0;
        case 0x4eb4f4u: goto label_4eb4f4;
        case 0x4eb4f8u: goto label_4eb4f8;
        case 0x4eb4fcu: goto label_4eb4fc;
        case 0x4eb500u: goto label_4eb500;
        case 0x4eb504u: goto label_4eb504;
        case 0x4eb508u: goto label_4eb508;
        case 0x4eb50cu: goto label_4eb50c;
        case 0x4eb510u: goto label_4eb510;
        case 0x4eb514u: goto label_4eb514;
        case 0x4eb518u: goto label_4eb518;
        case 0x4eb51cu: goto label_4eb51c;
        case 0x4eb520u: goto label_4eb520;
        case 0x4eb524u: goto label_4eb524;
        case 0x4eb528u: goto label_4eb528;
        case 0x4eb52cu: goto label_4eb52c;
        case 0x4eb530u: goto label_4eb530;
        case 0x4eb534u: goto label_4eb534;
        case 0x4eb538u: goto label_4eb538;
        case 0x4eb53cu: goto label_4eb53c;
        case 0x4eb540u: goto label_4eb540;
        case 0x4eb544u: goto label_4eb544;
        case 0x4eb548u: goto label_4eb548;
        case 0x4eb54cu: goto label_4eb54c;
        case 0x4eb550u: goto label_4eb550;
        case 0x4eb554u: goto label_4eb554;
        case 0x4eb558u: goto label_4eb558;
        case 0x4eb55cu: goto label_4eb55c;
        case 0x4eb560u: goto label_4eb560;
        case 0x4eb564u: goto label_4eb564;
        case 0x4eb568u: goto label_4eb568;
        case 0x4eb56cu: goto label_4eb56c;
        case 0x4eb570u: goto label_4eb570;
        case 0x4eb574u: goto label_4eb574;
        case 0x4eb578u: goto label_4eb578;
        case 0x4eb57cu: goto label_4eb57c;
        case 0x4eb580u: goto label_4eb580;
        case 0x4eb584u: goto label_4eb584;
        case 0x4eb588u: goto label_4eb588;
        case 0x4eb58cu: goto label_4eb58c;
        case 0x4eb590u: goto label_4eb590;
        case 0x4eb594u: goto label_4eb594;
        case 0x4eb598u: goto label_4eb598;
        case 0x4eb59cu: goto label_4eb59c;
        case 0x4eb5a0u: goto label_4eb5a0;
        case 0x4eb5a4u: goto label_4eb5a4;
        case 0x4eb5a8u: goto label_4eb5a8;
        case 0x4eb5acu: goto label_4eb5ac;
        case 0x4eb5b0u: goto label_4eb5b0;
        case 0x4eb5b4u: goto label_4eb5b4;
        case 0x4eb5b8u: goto label_4eb5b8;
        case 0x4eb5bcu: goto label_4eb5bc;
        case 0x4eb5c0u: goto label_4eb5c0;
        case 0x4eb5c4u: goto label_4eb5c4;
        case 0x4eb5c8u: goto label_4eb5c8;
        case 0x4eb5ccu: goto label_4eb5cc;
        case 0x4eb5d0u: goto label_4eb5d0;
        case 0x4eb5d4u: goto label_4eb5d4;
        case 0x4eb5d8u: goto label_4eb5d8;
        case 0x4eb5dcu: goto label_4eb5dc;
        case 0x4eb5e0u: goto label_4eb5e0;
        case 0x4eb5e4u: goto label_4eb5e4;
        case 0x4eb5e8u: goto label_4eb5e8;
        case 0x4eb5ecu: goto label_4eb5ec;
        case 0x4eb5f0u: goto label_4eb5f0;
        case 0x4eb5f4u: goto label_4eb5f4;
        case 0x4eb5f8u: goto label_4eb5f8;
        case 0x4eb5fcu: goto label_4eb5fc;
        case 0x4eb600u: goto label_4eb600;
        case 0x4eb604u: goto label_4eb604;
        case 0x4eb608u: goto label_4eb608;
        case 0x4eb60cu: goto label_4eb60c;
        case 0x4eb610u: goto label_4eb610;
        case 0x4eb614u: goto label_4eb614;
        case 0x4eb618u: goto label_4eb618;
        case 0x4eb61cu: goto label_4eb61c;
        case 0x4eb620u: goto label_4eb620;
        case 0x4eb624u: goto label_4eb624;
        case 0x4eb628u: goto label_4eb628;
        case 0x4eb62cu: goto label_4eb62c;
        case 0x4eb630u: goto label_4eb630;
        case 0x4eb634u: goto label_4eb634;
        case 0x4eb638u: goto label_4eb638;
        case 0x4eb63cu: goto label_4eb63c;
        case 0x4eb640u: goto label_4eb640;
        case 0x4eb644u: goto label_4eb644;
        case 0x4eb648u: goto label_4eb648;
        case 0x4eb64cu: goto label_4eb64c;
        case 0x4eb650u: goto label_4eb650;
        case 0x4eb654u: goto label_4eb654;
        case 0x4eb658u: goto label_4eb658;
        case 0x4eb65cu: goto label_4eb65c;
        case 0x4eb660u: goto label_4eb660;
        case 0x4eb664u: goto label_4eb664;
        case 0x4eb668u: goto label_4eb668;
        case 0x4eb66cu: goto label_4eb66c;
        case 0x4eb670u: goto label_4eb670;
        case 0x4eb674u: goto label_4eb674;
        case 0x4eb678u: goto label_4eb678;
        case 0x4eb67cu: goto label_4eb67c;
        case 0x4eb680u: goto label_4eb680;
        case 0x4eb684u: goto label_4eb684;
        case 0x4eb688u: goto label_4eb688;
        case 0x4eb68cu: goto label_4eb68c;
        case 0x4eb690u: goto label_4eb690;
        case 0x4eb694u: goto label_4eb694;
        case 0x4eb698u: goto label_4eb698;
        case 0x4eb69cu: goto label_4eb69c;
        case 0x4eb6a0u: goto label_4eb6a0;
        case 0x4eb6a4u: goto label_4eb6a4;
        case 0x4eb6a8u: goto label_4eb6a8;
        case 0x4eb6acu: goto label_4eb6ac;
        case 0x4eb6b0u: goto label_4eb6b0;
        case 0x4eb6b4u: goto label_4eb6b4;
        case 0x4eb6b8u: goto label_4eb6b8;
        case 0x4eb6bcu: goto label_4eb6bc;
        case 0x4eb6c0u: goto label_4eb6c0;
        case 0x4eb6c4u: goto label_4eb6c4;
        case 0x4eb6c8u: goto label_4eb6c8;
        case 0x4eb6ccu: goto label_4eb6cc;
        case 0x4eb6d0u: goto label_4eb6d0;
        case 0x4eb6d4u: goto label_4eb6d4;
        case 0x4eb6d8u: goto label_4eb6d8;
        case 0x4eb6dcu: goto label_4eb6dc;
        case 0x4eb6e0u: goto label_4eb6e0;
        case 0x4eb6e4u: goto label_4eb6e4;
        case 0x4eb6e8u: goto label_4eb6e8;
        case 0x4eb6ecu: goto label_4eb6ec;
        case 0x4eb6f0u: goto label_4eb6f0;
        case 0x4eb6f4u: goto label_4eb6f4;
        case 0x4eb6f8u: goto label_4eb6f8;
        case 0x4eb6fcu: goto label_4eb6fc;
        default: break;
    }

    ctx->pc = 0x4eb200u;

label_4eb200:
    // 0x4eb200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4eb200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4eb204:
    // 0x4eb204: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4eb204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4eb208:
    // 0x4eb208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4eb208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4eb20c:
    // 0x4eb20c: 0x24633be0  addiu       $v1, $v1, 0x3BE0
    ctx->pc = 0x4eb20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15328));
label_4eb210:
    // 0x4eb210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4eb210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4eb214:
    // 0x4eb214: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x4eb214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_4eb218:
    // 0x4eb218: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4eb218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4eb21c:
    // 0x4eb21c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eb21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eb220:
    // 0x4eb220: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x4eb220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_4eb224:
    // 0x4eb224: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x4eb224u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
label_4eb228:
    // 0x4eb228: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x4eb228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
label_4eb22c:
    // 0x4eb22c: 0xa080000a  sb          $zero, 0xA($a0)
    ctx->pc = 0x4eb22cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
label_4eb230:
    // 0x4eb230: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x4eb230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_4eb234:
    // 0x4eb234: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x4eb234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_4eb238:
    // 0x4eb238: 0xc13ac20  jal         func_4EB080
label_4eb23c:
    if (ctx->pc == 0x4EB23Cu) {
        ctx->pc = 0x4EB23Cu;
            // 0x4eb23c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->pc = 0x4EB240u;
        goto label_4eb240;
    }
    ctx->pc = 0x4EB238u;
    SET_GPR_U32(ctx, 31, 0x4EB240u);
    ctx->pc = 0x4EB23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB238u;
            // 0x4eb23c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EB080u;
    if (runtime->hasFunction(0x4EB080u)) {
        auto targetFn = runtime->lookupFunction(0x4EB080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB240u; }
        if (ctx->pc != 0x4EB240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EB080_0x4eb080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB240u; }
        if (ctx->pc != 0x4EB240u) { return; }
    }
    ctx->pc = 0x4EB240u;
label_4eb240:
    // 0x4eb240: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4eb240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eb244:
    // 0x4eb244: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4eb244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4eb248:
    // 0x4eb248: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4eb248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4eb24c:
    // 0x4eb24c: 0x3e00008  jr          $ra
label_4eb250:
    if (ctx->pc == 0x4EB250u) {
        ctx->pc = 0x4EB250u;
            // 0x4eb250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4EB254u;
        goto label_4eb254;
    }
    ctx->pc = 0x4EB24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB24Cu;
            // 0x4eb250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EB254u;
label_4eb254:
    // 0x4eb254: 0x0  nop
    ctx->pc = 0x4eb254u;
    // NOP
label_4eb258:
    // 0x4eb258: 0x0  nop
    ctx->pc = 0x4eb258u;
    // NOP
label_4eb25c:
    // 0x4eb25c: 0x0  nop
    ctx->pc = 0x4eb25cu;
    // NOP
label_4eb260:
    // 0x4eb260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4eb260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4eb264:
    // 0x4eb264: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4eb264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4eb268:
    // 0x4eb268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4eb268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4eb26c:
    // 0x4eb26c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4eb26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4eb270:
    // 0x4eb270: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4eb270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eb274:
    // 0x4eb274: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
label_4eb278:
    if (ctx->pc == 0x4EB278u) {
        ctx->pc = 0x4EB278u;
            // 0x4eb278: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EB27Cu;
        goto label_4eb27c;
    }
    ctx->pc = 0x4EB274u;
    {
        const bool branch_taken_0x4eb274 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB274u;
            // 0x4eb278: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb274) {
            ctx->pc = 0x4EB368u;
            goto label_4eb368;
        }
    }
    ctx->pc = 0x4EB27Cu;
label_4eb27c:
    // 0x4eb27c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4eb27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4eb280:
    // 0x4eb280: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4eb280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4eb284:
    // 0x4eb284: 0x24633bf0  addiu       $v1, $v1, 0x3BF0
    ctx->pc = 0x4eb284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15344));
label_4eb288:
    // 0x4eb288: 0x24423c28  addiu       $v0, $v0, 0x3C28
    ctx->pc = 0x4eb288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15400));
label_4eb28c:
    // 0x4eb28c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4eb28cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4eb290:
    // 0x4eb290: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4eb290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4eb294:
    // 0x4eb294: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_4eb298:
    if (ctx->pc == 0x4EB298u) {
        ctx->pc = 0x4EB298u;
            // 0x4eb298: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4EB29Cu;
        goto label_4eb29c;
    }
    ctx->pc = 0x4EB294u;
    {
        const bool branch_taken_0x4eb294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB294u;
            // 0x4eb298: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb294) {
            ctx->pc = 0x4EB2E4u;
            goto label_4eb2e4;
        }
    }
    ctx->pc = 0x4EB29Cu;
label_4eb29c:
    // 0x4eb29c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4eb29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4eb2a0:
    // 0x4eb2a0: 0x24428220  addiu       $v0, $v0, -0x7DE0
    ctx->pc = 0x4eb2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935072));
label_4eb2a4:
    // 0x4eb2a4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_4eb2a8:
    if (ctx->pc == 0x4EB2A8u) {
        ctx->pc = 0x4EB2A8u;
            // 0x4eb2a8: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x4EB2ACu;
        goto label_4eb2ac;
    }
    ctx->pc = 0x4EB2A4u;
    {
        const bool branch_taken_0x4eb2a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB2A4u;
            // 0x4eb2a8: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb2a4) {
            ctx->pc = 0x4EB2E4u;
            goto label_4eb2e4;
        }
    }
    ctx->pc = 0x4EB2ACu;
label_4eb2ac:
    // 0x4eb2ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4eb2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4eb2b0:
    // 0x4eb2b0: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x4eb2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_4eb2b4:
    // 0x4eb2b4: 0xc0d37dc  jal         func_34DF70
label_4eb2b8:
    if (ctx->pc == 0x4EB2B8u) {
        ctx->pc = 0x4EB2B8u;
            // 0x4eb2b8: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x4EB2BCu;
        goto label_4eb2bc;
    }
    ctx->pc = 0x4EB2B4u;
    SET_GPR_U32(ctx, 31, 0x4EB2BCu);
    ctx->pc = 0x4EB2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB2B4u;
            // 0x4eb2b8: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB2BCu; }
        if (ctx->pc != 0x4EB2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB2BCu; }
        if (ctx->pc != 0x4EB2BCu) { return; }
    }
    ctx->pc = 0x4EB2BCu;
label_4eb2bc:
    // 0x4eb2bc: 0x262300a0  addiu       $v1, $s1, 0xA0
    ctx->pc = 0x4eb2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4eb2c0:
    // 0x4eb2c0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_4eb2c4:
    if (ctx->pc == 0x4EB2C4u) {
        ctx->pc = 0x4EB2C8u;
        goto label_4eb2c8;
    }
    ctx->pc = 0x4EB2C0u;
    {
        const bool branch_taken_0x4eb2c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb2c0) {
            ctx->pc = 0x4EB2E4u;
            goto label_4eb2e4;
        }
    }
    ctx->pc = 0x4EB2C8u;
label_4eb2c8:
    // 0x4eb2c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4eb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4eb2cc:
    // 0x4eb2cc: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x4eb2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_4eb2d0:
    // 0x4eb2d0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4eb2d4:
    if (ctx->pc == 0x4EB2D4u) {
        ctx->pc = 0x4EB2D4u;
            // 0x4eb2d4: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x4EB2D8u;
        goto label_4eb2d8;
    }
    ctx->pc = 0x4EB2D0u;
    {
        const bool branch_taken_0x4eb2d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB2D0u;
            // 0x4eb2d4: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb2d0) {
            ctx->pc = 0x4EB2E4u;
            goto label_4eb2e4;
        }
    }
    ctx->pc = 0x4EB2D8u;
label_4eb2d8:
    // 0x4eb2d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4eb2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4eb2dc:
    // 0x4eb2dc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4eb2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4eb2e0:
    // 0x4eb2e0: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x4eb2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_4eb2e4:
    // 0x4eb2e4: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
label_4eb2e8:
    if (ctx->pc == 0x4EB2E8u) {
        ctx->pc = 0x4EB2E8u;
            // 0x4eb2e8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4EB2ECu;
        goto label_4eb2ec;
    }
    ctx->pc = 0x4EB2E4u;
    {
        const bool branch_taken_0x4eb2e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb2e4) {
            ctx->pc = 0x4EB2E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB2E4u;
            // 0x4eb2e8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EB354u;
            goto label_4eb354;
        }
    }
    ctx->pc = 0x4EB2ECu;
label_4eb2ec:
    // 0x4eb2ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4eb2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4eb2f0:
    // 0x4eb2f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4eb2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4eb2f4:
    // 0x4eb2f4: 0x246324d0  addiu       $v1, $v1, 0x24D0
    ctx->pc = 0x4eb2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9424));
label_4eb2f8:
    // 0x4eb2f8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x4eb2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_4eb2fc:
    // 0x4eb2fc: 0x24422508  addiu       $v0, $v0, 0x2508
    ctx->pc = 0x4eb2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
label_4eb300:
    // 0x4eb300: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4eb300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4eb304:
    // 0x4eb304: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4eb304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4eb308:
    // 0x4eb308: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4eb308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4eb30c:
    // 0x4eb30c: 0xc0407c0  jal         func_101F00
label_4eb310:
    if (ctx->pc == 0x4EB310u) {
        ctx->pc = 0x4EB310u;
            // 0x4eb310: 0x24a5a610  addiu       $a1, $a1, -0x59F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944272));
        ctx->pc = 0x4EB314u;
        goto label_4eb314;
    }
    ctx->pc = 0x4EB30Cu;
    SET_GPR_U32(ctx, 31, 0x4EB314u);
    ctx->pc = 0x4EB310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB30Cu;
            // 0x4eb310: 0x24a5a610  addiu       $a1, $a1, -0x59F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB314u; }
        if (ctx->pc != 0x4EB314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB314u; }
        if (ctx->pc != 0x4EB314u) { return; }
    }
    ctx->pc = 0x4EB314u;
label_4eb314:
    // 0x4eb314: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x4eb314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4eb318:
    // 0x4eb318: 0xc0ae928  jal         func_2BA4A0
label_4eb31c:
    if (ctx->pc == 0x4EB31Cu) {
        ctx->pc = 0x4EB31Cu;
            // 0x4eb31c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4EB320u;
        goto label_4eb320;
    }
    ctx->pc = 0x4EB318u;
    SET_GPR_U32(ctx, 31, 0x4EB320u);
    ctx->pc = 0x4EB31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB318u;
            // 0x4eb31c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA4A0u;
    if (runtime->hasFunction(0x2BA4A0u)) {
        auto targetFn = runtime->lookupFunction(0x2BA4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB320u; }
        if (ctx->pc != 0x4EB320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BA4A0_0x2ba4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB320u; }
        if (ctx->pc != 0x4EB320u) { return; }
    }
    ctx->pc = 0x4EB320u;
label_4eb320:
    // 0x4eb320: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x4eb320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4eb324:
    // 0x4eb324: 0xc0ae944  jal         func_2BA510
label_4eb328:
    if (ctx->pc == 0x4EB328u) {
        ctx->pc = 0x4EB328u;
            // 0x4eb328: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4EB32Cu;
        goto label_4eb32c;
    }
    ctx->pc = 0x4EB324u;
    SET_GPR_U32(ctx, 31, 0x4EB32Cu);
    ctx->pc = 0x4EB328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB324u;
            // 0x4eb328: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA510u;
    if (runtime->hasFunction(0x2BA510u)) {
        auto targetFn = runtime->lookupFunction(0x2BA510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB32Cu; }
        if (ctx->pc != 0x4EB32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BA510_0x2ba510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB32Cu; }
        if (ctx->pc != 0x4EB32Cu) { return; }
    }
    ctx->pc = 0x4EB32Cu;
label_4eb32c:
    // 0x4eb32c: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x4eb32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4eb330:
    // 0x4eb330: 0xc0ae944  jal         func_2BA510
label_4eb334:
    if (ctx->pc == 0x4EB334u) {
        ctx->pc = 0x4EB334u;
            // 0x4eb334: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4EB338u;
        goto label_4eb338;
    }
    ctx->pc = 0x4EB330u;
    SET_GPR_U32(ctx, 31, 0x4EB338u);
    ctx->pc = 0x4EB334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB330u;
            // 0x4eb334: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA510u;
    if (runtime->hasFunction(0x2BA510u)) {
        auto targetFn = runtime->lookupFunction(0x2BA510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB338u; }
        if (ctx->pc != 0x4EB338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BA510_0x2ba510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB338u; }
        if (ctx->pc != 0x4EB338u) { return; }
    }
    ctx->pc = 0x4EB338u;
label_4eb338:
    // 0x4eb338: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x4eb338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4eb33c:
    // 0x4eb33c: 0xc0ae960  jal         func_2BA580
label_4eb340:
    if (ctx->pc == 0x4EB340u) {
        ctx->pc = 0x4EB340u;
            // 0x4eb340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EB344u;
        goto label_4eb344;
    }
    ctx->pc = 0x4EB33Cu;
    SET_GPR_U32(ctx, 31, 0x4EB344u);
    ctx->pc = 0x4EB340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB33Cu;
            // 0x4eb340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA580u;
    if (runtime->hasFunction(0x2BA580u)) {
        auto targetFn = runtime->lookupFunction(0x2BA580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB344u; }
        if (ctx->pc != 0x4EB344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BA580_0x2ba580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB344u; }
        if (ctx->pc != 0x4EB344u) { return; }
    }
    ctx->pc = 0x4EB344u;
label_4eb344:
    // 0x4eb344: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4eb344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eb348:
    // 0x4eb348: 0xc0ae1c0  jal         func_2B8700
label_4eb34c:
    if (ctx->pc == 0x4EB34Cu) {
        ctx->pc = 0x4EB34Cu;
            // 0x4eb34c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EB350u;
        goto label_4eb350;
    }
    ctx->pc = 0x4EB348u;
    SET_GPR_U32(ctx, 31, 0x4EB350u);
    ctx->pc = 0x4EB34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB348u;
            // 0x4eb34c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB350u; }
        if (ctx->pc != 0x4EB350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB350u; }
        if (ctx->pc != 0x4EB350u) { return; }
    }
    ctx->pc = 0x4EB350u;
label_4eb350:
    // 0x4eb350: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4eb350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4eb354:
    // 0x4eb354: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4eb354u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4eb358:
    // 0x4eb358: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4eb35c:
    if (ctx->pc == 0x4EB35Cu) {
        ctx->pc = 0x4EB35Cu;
            // 0x4eb35c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EB360u;
        goto label_4eb360;
    }
    ctx->pc = 0x4EB358u;
    {
        const bool branch_taken_0x4eb358 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4eb358) {
            ctx->pc = 0x4EB35Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB358u;
            // 0x4eb35c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EB36Cu;
            goto label_4eb36c;
        }
    }
    ctx->pc = 0x4EB360u;
label_4eb360:
    // 0x4eb360: 0xc0400a8  jal         func_1002A0
label_4eb364:
    if (ctx->pc == 0x4EB364u) {
        ctx->pc = 0x4EB364u;
            // 0x4eb364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EB368u;
        goto label_4eb368;
    }
    ctx->pc = 0x4EB360u;
    SET_GPR_U32(ctx, 31, 0x4EB368u);
    ctx->pc = 0x4EB364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB360u;
            // 0x4eb364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB368u; }
        if (ctx->pc != 0x4EB368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB368u; }
        if (ctx->pc != 0x4EB368u) { return; }
    }
    ctx->pc = 0x4EB368u;
label_4eb368:
    // 0x4eb368: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4eb368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eb36c:
    // 0x4eb36c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4eb36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4eb370:
    // 0x4eb370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4eb370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eb374:
    // 0x4eb374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4eb374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4eb378:
    // 0x4eb378: 0x3e00008  jr          $ra
label_4eb37c:
    if (ctx->pc == 0x4EB37Cu) {
        ctx->pc = 0x4EB37Cu;
            // 0x4eb37c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4EB380u;
        goto label_4eb380;
    }
    ctx->pc = 0x4EB378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB378u;
            // 0x4eb37c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EB380u;
label_4eb380:
    // 0x4eb380: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x4eb380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_4eb384:
    // 0x4eb384: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4eb384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4eb388:
    // 0x4eb388: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4eb388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4eb38c:
    // 0x4eb38c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4eb38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4eb390:
    // 0x4eb390: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4eb390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4eb394:
    // 0x4eb394: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4eb394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4eb398:
    // 0x4eb398: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4eb398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4eb39c:
    // 0x4eb39c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4eb39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4eb3a0:
    // 0x4eb3a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4eb3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4eb3a4:
    // 0x4eb3a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4eb3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4eb3a8:
    // 0x4eb3a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4eb3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4eb3ac:
    // 0x4eb3ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4eb3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4eb3b0:
    // 0x4eb3b0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4eb3b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4eb3b4:
    // 0x4eb3b4: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4eb3b8:
    if (ctx->pc == 0x4EB3B8u) {
        ctx->pc = 0x4EB3B8u;
            // 0x4eb3b8: 0xafa400cc  sw          $a0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
        ctx->pc = 0x4EB3BCu;
        goto label_4eb3bc;
    }
    ctx->pc = 0x4EB3B4u;
    {
        const bool branch_taken_0x4eb3b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4EB3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB3B4u;
            // 0x4eb3b8: 0xafa400cc  sw          $a0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb3b4) {
            ctx->pc = 0x4EB404u;
            goto label_4eb404;
        }
    }
    ctx->pc = 0x4EB3BCu;
label_4eb3bc:
    // 0x4eb3bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4eb3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4eb3c0:
    // 0x4eb3c0: 0x10a30047  beq         $a1, $v1, . + 4 + (0x47 << 2)
label_4eb3c4:
    if (ctx->pc == 0x4EB3C4u) {
        ctx->pc = 0x4EB3C8u;
        goto label_4eb3c8;
    }
    ctx->pc = 0x4EB3C0u;
    {
        const bool branch_taken_0x4eb3c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4eb3c0) {
            ctx->pc = 0x4EB4E0u;
            goto label_4eb4e0;
        }
    }
    ctx->pc = 0x4EB3C8u;
label_4eb3c8:
    // 0x4eb3c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4eb3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4eb3cc:
    // 0x4eb3cc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4eb3d0:
    if (ctx->pc == 0x4EB3D0u) {
        ctx->pc = 0x4EB3D4u;
        goto label_4eb3d4;
    }
    ctx->pc = 0x4EB3CCu;
    {
        const bool branch_taken_0x4eb3cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4eb3cc) {
            ctx->pc = 0x4EB3DCu;
            goto label_4eb3dc;
        }
    }
    ctx->pc = 0x4EB3D4u;
label_4eb3d4:
    // 0x4eb3d4: 0x10000042  b           . + 4 + (0x42 << 2)
label_4eb3d8:
    if (ctx->pc == 0x4EB3D8u) {
        ctx->pc = 0x4EB3DCu;
        goto label_4eb3dc;
    }
    ctx->pc = 0x4EB3D4u;
    {
        const bool branch_taken_0x4eb3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb3d4) {
            ctx->pc = 0x4EB4E0u;
            goto label_4eb4e0;
        }
    }
    ctx->pc = 0x4EB3DCu;
label_4eb3dc:
    // 0x4eb3dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4eb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4eb3e0:
    // 0x4eb3e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4eb3e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4eb3e4:
    // 0x4eb3e4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4eb3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4eb3e8:
    // 0x4eb3e8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4eb3e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4eb3ec:
    // 0x4eb3ec: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4eb3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4eb3f0:
    // 0x4eb3f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4eb3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4eb3f4:
    // 0x4eb3f4: 0x320f809  jalr        $t9
label_4eb3f8:
    if (ctx->pc == 0x4EB3F8u) {
        ctx->pc = 0x4EB3F8u;
            // 0x4eb3f8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4EB3FCu;
        goto label_4eb3fc;
    }
    ctx->pc = 0x4EB3F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EB3FCu);
        ctx->pc = 0x4EB3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB3F4u;
            // 0x4eb3f8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EB3FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EB3FCu; }
            if (ctx->pc != 0x4EB3FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4EB3FCu;
label_4eb3fc:
    // 0x4eb3fc: 0x10000038  b           . + 4 + (0x38 << 2)
label_4eb400:
    if (ctx->pc == 0x4EB400u) {
        ctx->pc = 0x4EB404u;
        goto label_4eb404;
    }
    ctx->pc = 0x4EB3FCu;
    {
        const bool branch_taken_0x4eb3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb3fc) {
            ctx->pc = 0x4EB4E0u;
            goto label_4eb4e0;
        }
    }
    ctx->pc = 0x4EB404u;
label_4eb404:
    // 0x4eb404: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4eb404u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eb408:
    // 0x4eb408: 0x8c710070  lw          $s1, 0x70($v1)
    ctx->pc = 0x4eb408u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_4eb40c:
    // 0x4eb40c: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
label_4eb410:
    if (ctx->pc == 0x4EB410u) {
        ctx->pc = 0x4EB414u;
        goto label_4eb414;
    }
    ctx->pc = 0x4EB40Cu;
    {
        const bool branch_taken_0x4eb40c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb40c) {
            ctx->pc = 0x4EB4E0u;
            goto label_4eb4e0;
        }
    }
    ctx->pc = 0x4EB414u;
label_4eb414:
    // 0x4eb414: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4eb414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4eb418:
    // 0x4eb418: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x4eb418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_4eb41c:
    // 0x4eb41c: 0x8c77e378  lw          $s7, -0x1C88($v1)
    ctx->pc = 0x4eb41cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4eb420:
    // 0x4eb420: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4eb420u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eb424:
    // 0x4eb424: 0x8c86d130  lw          $a2, -0x2ED0($a0)
    ctx->pc = 0x4eb424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_4eb428:
    // 0x4eb428: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4eb428u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eb42c:
    // 0x4eb42c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4eb42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4eb430:
    // 0x4eb430: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x4eb430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4eb434:
    // 0x4eb434: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4eb434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4eb438:
    // 0x4eb438: 0x8c9ee370  lw          $fp, -0x1C90($a0)
    ctx->pc = 0x4eb438u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959984)));
label_4eb43c:
    // 0x4eb43c: 0x8cd00130  lw          $s0, 0x130($a2)
    ctx->pc = 0x4eb43cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_4eb440:
    // 0x4eb440: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x4eb440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_4eb444:
    // 0x4eb444: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x4eb444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4eb448:
    // 0x4eb448: 0x24630084  addiu       $v1, $v1, 0x84
    ctx->pc = 0x4eb448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_4eb44c:
    // 0x4eb44c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x4eb44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_4eb450:
    // 0x4eb450: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x4eb450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_4eb454:
    // 0x4eb454: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4eb454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4eb458:
    // 0x4eb458: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4eb458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4eb45c:
    // 0x4eb45c: 0x24760010  addiu       $s6, $v1, 0x10
    ctx->pc = 0x4eb45cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4eb460:
    // 0x4eb460: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x4eb460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_4eb464:
    // 0x4eb464: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x4eb464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_4eb468:
    // 0x4eb468: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4eb468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4eb46c:
    // 0x4eb46c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4eb46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4eb470:
    // 0x4eb470: 0x8c740068  lw          $s4, 0x68($v1)
    ctx->pc = 0x4eb470u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_4eb474:
    // 0x4eb474: 0x12800016  beqz        $s4, . + 4 + (0x16 << 2)
label_4eb478:
    if (ctx->pc == 0x4EB478u) {
        ctx->pc = 0x4EB478u;
            // 0x4eb478: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->pc = 0x4EB47Cu;
        goto label_4eb47c;
    }
    ctx->pc = 0x4EB474u;
    {
        const bool branch_taken_0x4eb474 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB474u;
            // 0x4eb478: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb474) {
            ctx->pc = 0x4EB4D0u;
            goto label_4eb4d0;
        }
    }
    ctx->pc = 0x4EB47Cu;
label_4eb47c:
    // 0x4eb47c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4eb47cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4eb480:
    // 0x4eb480: 0x8c530078  lw          $s3, 0x78($v0)
    ctx->pc = 0x4eb480u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_4eb484:
    // 0x4eb484: 0x0  nop
    ctx->pc = 0x4eb484u;
    // NOP
label_4eb488:
    // 0x4eb488: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x4eb488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4eb48c:
    // 0x4eb48c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4eb48cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eb490:
    // 0x4eb490: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x4eb490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4eb494:
    // 0x4eb494: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4eb494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4eb498:
    // 0x4eb498: 0x320f809  jalr        $t9
label_4eb49c:
    if (ctx->pc == 0x4EB49Cu) {
        ctx->pc = 0x4EB4A0u;
        goto label_4eb4a0;
    }
    ctx->pc = 0x4EB498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EB4A0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EB4A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EB4A0u; }
            if (ctx->pc != 0x4EB4A0u) { return; }
        }
        }
    }
    ctx->pc = 0x4EB4A0u;
label_4eb4a0:
    // 0x4eb4a0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4eb4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4eb4a4:
    // 0x4eb4a4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4eb4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4eb4a8:
    // 0x4eb4a8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x4eb4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_4eb4ac:
    // 0x4eb4ac: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4eb4acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4eb4b0:
    // 0x4eb4b0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4eb4b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4eb4b4:
    // 0x4eb4b4: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x4eb4b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4eb4b8:
    // 0x4eb4b8: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x4eb4b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eb4bc:
    // 0x4eb4bc: 0xc13b0a0  jal         func_4EC280
label_4eb4c0:
    if (ctx->pc == 0x4EB4C0u) {
        ctx->pc = 0x4EB4C0u;
            // 0x4eb4c0: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EB4C4u;
        goto label_4eb4c4;
    }
    ctx->pc = 0x4EB4BCu;
    SET_GPR_U32(ctx, 31, 0x4EB4C4u);
    ctx->pc = 0x4EB4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB4BCu;
            // 0x4eb4c0: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EC280u;
    if (runtime->hasFunction(0x4EC280u)) {
        auto targetFn = runtime->lookupFunction(0x4EC280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB4C4u; }
        if (ctx->pc != 0x4EB4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EC280_0x4ec280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB4C4u; }
        if (ctx->pc != 0x4EB4C4u) { return; }
    }
    ctx->pc = 0x4EB4C4u;
label_4eb4c4:
    // 0x4eb4c4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4eb4c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_4eb4c8:
    // 0x4eb4c8: 0x1680ffef  bnez        $s4, . + 4 + (-0x11 << 2)
label_4eb4cc:
    if (ctx->pc == 0x4EB4CCu) {
        ctx->pc = 0x4EB4CCu;
            // 0x4eb4cc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4EB4D0u;
        goto label_4eb4d0;
    }
    ctx->pc = 0x4EB4C8u;
    {
        const bool branch_taken_0x4eb4c8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EB4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB4C8u;
            // 0x4eb4cc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb4c8) {
            ctx->pc = 0x4EB488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4eb488;
        }
    }
    ctx->pc = 0x4EB4D0u;
label_4eb4d0:
    // 0x4eb4d0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4eb4d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4eb4d4:
    // 0x4eb4d4: 0x2b1182b  sltu        $v1, $s5, $s1
    ctx->pc = 0x4eb4d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4eb4d8:
    // 0x4eb4d8: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_4eb4dc:
    if (ctx->pc == 0x4EB4DCu) {
        ctx->pc = 0x4EB4DCu;
            // 0x4eb4dc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4EB4E0u;
        goto label_4eb4e0;
    }
    ctx->pc = 0x4EB4D8u;
    {
        const bool branch_taken_0x4eb4d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EB4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB4D8u;
            // 0x4eb4dc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb4d8) {
            ctx->pc = 0x4EB460u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4eb460;
        }
    }
    ctx->pc = 0x4EB4E0u;
label_4eb4e0:
    // 0x4eb4e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4eb4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4eb4e4:
    // 0x4eb4e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4eb4e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4eb4e8:
    // 0x4eb4e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4eb4e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4eb4ec:
    // 0x4eb4ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4eb4ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4eb4f0:
    // 0x4eb4f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4eb4f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4eb4f4:
    // 0x4eb4f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4eb4f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4eb4f8:
    // 0x4eb4f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4eb4f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4eb4fc:
    // 0x4eb4fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4eb4fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4eb500:
    // 0x4eb500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4eb500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eb504:
    // 0x4eb504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4eb504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4eb508:
    // 0x4eb508: 0x3e00008  jr          $ra
label_4eb50c:
    if (ctx->pc == 0x4EB50Cu) {
        ctx->pc = 0x4EB50Cu;
            // 0x4eb50c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x4EB510u;
        goto label_4eb510;
    }
    ctx->pc = 0x4EB508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB508u;
            // 0x4eb50c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EB510u;
label_4eb510:
    // 0x4eb510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4eb510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4eb514:
    // 0x4eb514: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4eb514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4eb518:
    // 0x4eb518: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4eb518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4eb51c:
    // 0x4eb51c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4eb51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4eb520:
    // 0x4eb520: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4eb520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4eb524:
    // 0x4eb524: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4eb524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4eb528:
    // 0x4eb528: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4eb528u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eb52c:
    // 0x4eb52c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4eb52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4eb530:
    // 0x4eb530: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4eb530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4eb534:
    // 0x4eb534: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4eb534u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4eb538:
    // 0x4eb538: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_4eb53c:
    if (ctx->pc == 0x4EB53Cu) {
        ctx->pc = 0x4EB540u;
        goto label_4eb540;
    }
    ctx->pc = 0x4EB538u;
    {
        const bool branch_taken_0x4eb538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4eb538) {
            ctx->pc = 0x4EB584u;
            goto label_4eb584;
        }
    }
    ctx->pc = 0x4EB540u;
label_4eb540:
    // 0x4eb540: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4eb540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4eb544:
    // 0x4eb544: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_4eb548:
    if (ctx->pc == 0x4EB548u) {
        ctx->pc = 0x4EB548u;
            // 0x4eb548: 0x3c024198  lui         $v0, 0x4198 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
        ctx->pc = 0x4EB54Cu;
        goto label_4eb54c;
    }
    ctx->pc = 0x4EB544u;
    {
        const bool branch_taken_0x4eb544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4eb544) {
            ctx->pc = 0x4EB548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB544u;
            // 0x4eb548: 0x3c024198  lui         $v0, 0x4198 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EB560u;
            goto label_4eb560;
        }
    }
    ctx->pc = 0x4EB54Cu;
label_4eb54c:
    // 0x4eb54c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4eb54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4eb550:
    // 0x4eb550: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
label_4eb554:
    if (ctx->pc == 0x4EB554u) {
        ctx->pc = 0x4EB558u;
        goto label_4eb558;
    }
    ctx->pc = 0x4EB550u;
    {
        const bool branch_taken_0x4eb550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4eb550) {
            ctx->pc = 0x4EB6D8u;
            goto label_4eb6d8;
        }
    }
    ctx->pc = 0x4EB558u;
label_4eb558:
    // 0x4eb558: 0x1000005f  b           . + 4 + (0x5F << 2)
label_4eb55c:
    if (ctx->pc == 0x4EB55Cu) {
        ctx->pc = 0x4EB560u;
        goto label_4eb560;
    }
    ctx->pc = 0x4EB558u;
    {
        const bool branch_taken_0x4eb558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb558) {
            ctx->pc = 0x4EB6D8u;
            goto label_4eb6d8;
        }
    }
    ctx->pc = 0x4EB560u;
label_4eb560:
    // 0x4eb560: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4eb560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4eb564:
    // 0x4eb564: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x4eb564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_4eb568:
    // 0x4eb568: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4eb568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4eb56c:
    // 0x4eb56c: 0xc0e62a0  jal         func_398A80
label_4eb570:
    if (ctx->pc == 0x4EB570u) {
        ctx->pc = 0x4EB570u;
            // 0x4eb570: 0x24a587b8  addiu       $a1, $a1, -0x7848 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936504));
        ctx->pc = 0x4EB574u;
        goto label_4eb574;
    }
    ctx->pc = 0x4EB56Cu;
    SET_GPR_U32(ctx, 31, 0x4EB574u);
    ctx->pc = 0x4EB570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB56Cu;
            // 0x4eb570: 0x24a587b8  addiu       $a1, $a1, -0x7848 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x398A80u;
    if (runtime->hasFunction(0x398A80u)) {
        auto targetFn = runtime->lookupFunction(0x398A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB574u; }
        if (ctx->pc != 0x4EB574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00398A80_0x398a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB574u; }
        if (ctx->pc != 0x4EB574u) { return; }
    }
    ctx->pc = 0x4EB574u;
label_4eb574:
    // 0x4eb574: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4eb574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4eb578:
    // 0x4eb578: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4eb578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4eb57c:
    // 0x4eb57c: 0x320f809  jalr        $t9
label_4eb580:
    if (ctx->pc == 0x4EB580u) {
        ctx->pc = 0x4EB580u;
            // 0x4eb580: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EB584u;
        goto label_4eb584;
    }
    ctx->pc = 0x4EB57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EB584u);
        ctx->pc = 0x4EB580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB57Cu;
            // 0x4eb580: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EB584u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EB584u; }
            if (ctx->pc != 0x4EB584u) { return; }
        }
        }
    }
    ctx->pc = 0x4EB584u;
label_4eb584:
    // 0x4eb584: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4eb584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4eb588:
    // 0x4eb588: 0x26640084  addiu       $a0, $s3, 0x84
    ctx->pc = 0x4eb588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_4eb58c:
    // 0x4eb58c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4eb58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4eb590:
    // 0x4eb590: 0xc6600090  lwc1        $f0, 0x90($s3)
    ctx->pc = 0x4eb590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4eb594:
    // 0x4eb594: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x4eb594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_4eb598:
    // 0x4eb598: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4eb598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4eb59c:
    // 0x4eb59c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4eb59cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4eb5a0:
    // 0x4eb5a0: 0xe6600090  swc1        $f0, 0x90($s3)
    ctx->pc = 0x4eb5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 144), bits); }
label_4eb5a4:
    // 0x4eb5a4: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x4eb5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_4eb5a8:
    // 0x4eb5a8: 0xc6600090  lwc1        $f0, 0x90($s3)
    ctx->pc = 0x4eb5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4eb5ac:
    // 0x4eb5ac: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4eb5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4eb5b0:
    // 0x4eb5b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4eb5b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4eb5b4:
    // 0x4eb5b4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4eb5b8:
    if (ctx->pc == 0x4EB5B8u) {
        ctx->pc = 0x4EB5B8u;
            // 0x4eb5b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4EB5BCu;
        goto label_4eb5bc;
    }
    ctx->pc = 0x4EB5B4u;
    {
        const bool branch_taken_0x4eb5b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4EB5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB5B4u;
            // 0x4eb5b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb5b4) {
            ctx->pc = 0x4EB5C0u;
            goto label_4eb5c0;
        }
    }
    ctx->pc = 0x4EB5BCu;
label_4eb5bc:
    // 0x4eb5bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4eb5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eb5c0:
    // 0x4eb5c0: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_4eb5c4:
    if (ctx->pc == 0x4EB5C4u) {
        ctx->pc = 0x4EB5C4u;
            // 0x4eb5c4: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x4EB5C8u;
        goto label_4eb5c8;
    }
    ctx->pc = 0x4EB5C0u;
    {
        const bool branch_taken_0x4eb5c0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x4eb5c0) {
            ctx->pc = 0x4EB5C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB5C0u;
            // 0x4eb5c4: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EB5D4u;
            goto label_4eb5d4;
        }
    }
    ctx->pc = 0x4EB5C8u;
label_4eb5c8:
    // 0x4eb5c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4eb5c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eb5cc:
    // 0x4eb5cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_4eb5d0:
    if (ctx->pc == 0x4EB5D0u) {
        ctx->pc = 0x4EB5D0u;
            // 0x4eb5d0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4EB5D4u;
        goto label_4eb5d4;
    }
    ctx->pc = 0x4EB5CCu;
    {
        const bool branch_taken_0x4eb5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB5CCu;
            // 0x4eb5d0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb5cc) {
            ctx->pc = 0x4EB5ECu;
            goto label_4eb5ec;
        }
    }
    ctx->pc = 0x4EB5D4u;
label_4eb5d4:
    // 0x4eb5d4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x4eb5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_4eb5d8:
    // 0x4eb5d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4eb5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4eb5dc:
    // 0x4eb5dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4eb5dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eb5e0:
    // 0x4eb5e0: 0x0  nop
    ctx->pc = 0x4eb5e0u;
    // NOP
label_4eb5e4:
    // 0x4eb5e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4eb5e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4eb5e8:
    // 0x4eb5e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4eb5e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4eb5ec:
    // 0x4eb5ec: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4eb5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4eb5f0:
    // 0x4eb5f0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4eb5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4eb5f4:
    // 0x4eb5f4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4eb5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4eb5f8:
    // 0x4eb5f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4eb5f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4eb5fc:
    // 0x4eb5fc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x4eb5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_4eb600:
    // 0x4eb600: 0x8c840e80  lw          $a0, 0xE80($a0)
    ctx->pc = 0x4eb600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3712)));
label_4eb604:
    // 0x4eb604: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4eb604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4eb608:
    // 0x4eb608: 0x8c840cb4  lw          $a0, 0xCB4($a0)
    ctx->pc = 0x4eb608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
label_4eb60c:
    // 0x4eb60c: 0xc4630018  lwc1        $f3, 0x18($v1)
    ctx->pc = 0x4eb60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4eb610:
    // 0x4eb610: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x4eb610u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_4eb614:
    // 0x4eb614: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4eb614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_4eb618:
    // 0x4eb618: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4eb61c:
    if (ctx->pc == 0x4EB61Cu) {
        ctx->pc = 0x4EB61Cu;
            // 0x4eb61c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4EB620u;
        goto label_4eb620;
    }
    ctx->pc = 0x4EB618u;
    {
        const bool branch_taken_0x4eb618 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4eb618) {
            ctx->pc = 0x4EB61Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB618u;
            // 0x4eb61c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EB62Cu;
            goto label_4eb62c;
        }
    }
    ctx->pc = 0x4EB620u;
label_4eb620:
    // 0x4eb620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4eb620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eb624:
    // 0x4eb624: 0x10000007  b           . + 4 + (0x7 << 2)
label_4eb628:
    if (ctx->pc == 0x4EB628u) {
        ctx->pc = 0x4EB628u;
            // 0x4eb628: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4EB62Cu;
        goto label_4eb62c;
    }
    ctx->pc = 0x4EB624u;
    {
        const bool branch_taken_0x4eb624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB624u;
            // 0x4eb628: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb624) {
            ctx->pc = 0x4EB644u;
            goto label_4eb644;
        }
    }
    ctx->pc = 0x4EB62Cu;
label_4eb62c:
    // 0x4eb62c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4eb62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4eb630:
    // 0x4eb630: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4eb630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4eb634:
    // 0x4eb634: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4eb634u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eb638:
    // 0x4eb638: 0x0  nop
    ctx->pc = 0x4eb638u;
    // NOP
label_4eb63c:
    // 0x4eb63c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4eb63cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4eb640:
    // 0x4eb640: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4eb640u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4eb644:
    // 0x4eb644: 0xc66100ac  lwc1        $f1, 0xAC($s3)
    ctx->pc = 0x4eb644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4eb648:
    // 0x4eb648: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4eb648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4eb64c:
    // 0x4eb64c: 0x0  nop
    ctx->pc = 0x4eb64cu;
    // NOP
label_4eb650:
    // 0x4eb650: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4eb650u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4eb654:
    // 0x4eb654: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x4eb654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_4eb658:
    // 0x4eb658: 0xe66000ac  swc1        $f0, 0xAC($s3)
    ctx->pc = 0x4eb658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 172), bits); }
label_4eb65c:
    // 0x4eb65c: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x4eb65cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_4eb660:
    // 0x4eb660: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_4eb664:
    if (ctx->pc == 0x4EB664u) {
        ctx->pc = 0x4EB668u;
        goto label_4eb668;
    }
    ctx->pc = 0x4EB660u;
    {
        const bool branch_taken_0x4eb660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb660) {
            ctx->pc = 0x4EB6D8u;
            goto label_4eb6d8;
        }
    }
    ctx->pc = 0x4EB668u;
label_4eb668:
    // 0x4eb668: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4eb668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eb66c:
    // 0x4eb66c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4eb66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4eb670:
    // 0x4eb670: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x4eb670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4eb674:
    // 0x4eb674: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4eb674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4eb678:
    // 0x4eb678: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x4eb678u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4eb67c:
    // 0x4eb67c: 0xc13aeac  jal         func_4EBAB0
label_4eb680:
    if (ctx->pc == 0x4EB680u) {
        ctx->pc = 0x4EB680u;
            // 0x4eb680: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EB684u;
        goto label_4eb684;
    }
    ctx->pc = 0x4EB67Cu;
    SET_GPR_U32(ctx, 31, 0x4EB684u);
    ctx->pc = 0x4EB680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB67Cu;
            // 0x4eb680: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EBAB0u;
    if (runtime->hasFunction(0x4EBAB0u)) {
        auto targetFn = runtime->lookupFunction(0x4EBAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB684u; }
        if (ctx->pc != 0x4EB684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EBAB0_0x4ebab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB684u; }
        if (ctx->pc != 0x4EB684u) { return; }
    }
    ctx->pc = 0x4EB684u;
label_4eb684:
    // 0x4eb684: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4eb684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4eb688:
    // 0x4eb688: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_4eb68c:
    if (ctx->pc == 0x4EB68Cu) {
        ctx->pc = 0x4EB690u;
        goto label_4eb690;
    }
    ctx->pc = 0x4EB688u;
    {
        const bool branch_taken_0x4eb688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4eb688) {
            ctx->pc = 0x4EB6B8u;
            goto label_4eb6b8;
        }
    }
    ctx->pc = 0x4EB690u;
label_4eb690:
    // 0x4eb690: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4eb694:
    if (ctx->pc == 0x4EB694u) {
        ctx->pc = 0x4EB698u;
        goto label_4eb698;
    }
    ctx->pc = 0x4EB690u;
    {
        const bool branch_taken_0x4eb690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb690) {
            ctx->pc = 0x4EB6A0u;
            goto label_4eb6a0;
        }
    }
    ctx->pc = 0x4EB698u;
label_4eb698:
    // 0x4eb698: 0x1000000b  b           . + 4 + (0xB << 2)
label_4eb69c:
    if (ctx->pc == 0x4EB69Cu) {
        ctx->pc = 0x4EB6A0u;
        goto label_4eb6a0;
    }
    ctx->pc = 0x4EB698u;
    {
        const bool branch_taken_0x4eb698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb698) {
            ctx->pc = 0x4EB6C8u;
            goto label_4eb6c8;
        }
    }
    ctx->pc = 0x4EB6A0u;
label_4eb6a0:
    // 0x4eb6a0: 0xc13b09c  jal         func_4EC270
label_4eb6a4:
    if (ctx->pc == 0x4EB6A4u) {
        ctx->pc = 0x4EB6A4u;
            // 0x4eb6a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EB6A8u;
        goto label_4eb6a8;
    }
    ctx->pc = 0x4EB6A0u;
    SET_GPR_U32(ctx, 31, 0x4EB6A8u);
    ctx->pc = 0x4EB6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB6A0u;
            // 0x4eb6a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EC270u;
    if (runtime->hasFunction(0x4EC270u)) {
        auto targetFn = runtime->lookupFunction(0x4EC270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB6A8u; }
        if (ctx->pc != 0x4EB6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EC270_0x4ec270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB6A8u; }
        if (ctx->pc != 0x4EB6A8u) { return; }
    }
    ctx->pc = 0x4EB6A8u;
label_4eb6a8:
    // 0x4eb6a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4eb6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4eb6ac:
    // 0x4eb6ac: 0xc13aea8  jal         func_4EBAA0
label_4eb6b0:
    if (ctx->pc == 0x4EB6B0u) {
        ctx->pc = 0x4EB6B0u;
            // 0x4eb6b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4EB6B4u;
        goto label_4eb6b4;
    }
    ctx->pc = 0x4EB6ACu;
    SET_GPR_U32(ctx, 31, 0x4EB6B4u);
    ctx->pc = 0x4EB6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB6ACu;
            // 0x4eb6b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EBAA0u;
    if (runtime->hasFunction(0x4EBAA0u)) {
        auto targetFn = runtime->lookupFunction(0x4EBAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB6B4u; }
        if (ctx->pc != 0x4EB6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EBAA0_0x4ebaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB6B4u; }
        if (ctx->pc != 0x4EB6B4u) { return; }
    }
    ctx->pc = 0x4EB6B4u;
label_4eb6b4:
    // 0x4eb6b4: 0x0  nop
    ctx->pc = 0x4eb6b4u;
    // NOP
label_4eb6b8:
    // 0x4eb6b8: 0xc13adc0  jal         func_4EB700
label_4eb6bc:
    if (ctx->pc == 0x4EB6BCu) {
        ctx->pc = 0x4EB6BCu;
            // 0x4eb6bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EB6C0u;
        goto label_4eb6c0;
    }
    ctx->pc = 0x4EB6B8u;
    SET_GPR_U32(ctx, 31, 0x4EB6C0u);
    ctx->pc = 0x4EB6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB6B8u;
            // 0x4eb6bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EB700u;
    if (runtime->hasFunction(0x4EB700u)) {
        auto targetFn = runtime->lookupFunction(0x4EB700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB6C0u; }
        if (ctx->pc != 0x4EB6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EB700_0x4eb700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB6C0u; }
        if (ctx->pc != 0x4EB6C0u) { return; }
    }
    ctx->pc = 0x4EB6C0u;
label_4eb6c0:
    // 0x4eb6c0: 0xc13b4e4  jal         func_4ED390
label_4eb6c4:
    if (ctx->pc == 0x4EB6C4u) {
        ctx->pc = 0x4EB6C4u;
            // 0x4eb6c4: 0x26840064  addiu       $a0, $s4, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
        ctx->pc = 0x4EB6C8u;
        goto label_4eb6c8;
    }
    ctx->pc = 0x4EB6C0u;
    SET_GPR_U32(ctx, 31, 0x4EB6C8u);
    ctx->pc = 0x4EB6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB6C0u;
            // 0x4eb6c4: 0x26840064  addiu       $a0, $s4, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ED390u;
    if (runtime->hasFunction(0x4ED390u)) {
        auto targetFn = runtime->lookupFunction(0x4ED390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB6C8u; }
        if (ctx->pc != 0x4EB6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ED390_0x4ed390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EB6C8u; }
        if (ctx->pc != 0x4EB6C8u) { return; }
    }
    ctx->pc = 0x4EB6C8u;
label_4eb6c8:
    // 0x4eb6c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4eb6c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4eb6cc:
    // 0x4eb6cc: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4eb6ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4eb6d0:
    // 0x4eb6d0: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_4eb6d4:
    if (ctx->pc == 0x4EB6D4u) {
        ctx->pc = 0x4EB6D4u;
            // 0x4eb6d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4EB6D8u;
        goto label_4eb6d8;
    }
    ctx->pc = 0x4EB6D0u;
    {
        const bool branch_taken_0x4eb6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EB6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB6D0u;
            // 0x4eb6d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb6d0) {
            ctx->pc = 0x4EB670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4eb670;
        }
    }
    ctx->pc = 0x4EB6D8u;
label_4eb6d8:
    // 0x4eb6d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4eb6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4eb6dc:
    // 0x4eb6dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4eb6dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4eb6e0:
    // 0x4eb6e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4eb6e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4eb6e4:
    // 0x4eb6e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4eb6e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4eb6e8:
    // 0x4eb6e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4eb6e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eb6ec:
    // 0x4eb6ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4eb6ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4eb6f0:
    // 0x4eb6f0: 0x3e00008  jr          $ra
label_4eb6f4:
    if (ctx->pc == 0x4EB6F4u) {
        ctx->pc = 0x4EB6F4u;
            // 0x4eb6f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4EB6F8u;
        goto label_4eb6f8;
    }
    ctx->pc = 0x4EB6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB6F0u;
            // 0x4eb6f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EB6F8u;
label_4eb6f8:
    // 0x4eb6f8: 0x0  nop
    ctx->pc = 0x4eb6f8u;
    // NOP
label_4eb6fc:
    // 0x4eb6fc: 0x0  nop
    ctx->pc = 0x4eb6fcu;
    // NOP
}
