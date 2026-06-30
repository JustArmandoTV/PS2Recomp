#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DE110
// Address: 0x4de110 - 0x4de650
void sub_004DE110_0x4de110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE110_0x4de110");
#endif

    switch (ctx->pc) {
        case 0x4de110u: goto label_4de110;
        case 0x4de114u: goto label_4de114;
        case 0x4de118u: goto label_4de118;
        case 0x4de11cu: goto label_4de11c;
        case 0x4de120u: goto label_4de120;
        case 0x4de124u: goto label_4de124;
        case 0x4de128u: goto label_4de128;
        case 0x4de12cu: goto label_4de12c;
        case 0x4de130u: goto label_4de130;
        case 0x4de134u: goto label_4de134;
        case 0x4de138u: goto label_4de138;
        case 0x4de13cu: goto label_4de13c;
        case 0x4de140u: goto label_4de140;
        case 0x4de144u: goto label_4de144;
        case 0x4de148u: goto label_4de148;
        case 0x4de14cu: goto label_4de14c;
        case 0x4de150u: goto label_4de150;
        case 0x4de154u: goto label_4de154;
        case 0x4de158u: goto label_4de158;
        case 0x4de15cu: goto label_4de15c;
        case 0x4de160u: goto label_4de160;
        case 0x4de164u: goto label_4de164;
        case 0x4de168u: goto label_4de168;
        case 0x4de16cu: goto label_4de16c;
        case 0x4de170u: goto label_4de170;
        case 0x4de174u: goto label_4de174;
        case 0x4de178u: goto label_4de178;
        case 0x4de17cu: goto label_4de17c;
        case 0x4de180u: goto label_4de180;
        case 0x4de184u: goto label_4de184;
        case 0x4de188u: goto label_4de188;
        case 0x4de18cu: goto label_4de18c;
        case 0x4de190u: goto label_4de190;
        case 0x4de194u: goto label_4de194;
        case 0x4de198u: goto label_4de198;
        case 0x4de19cu: goto label_4de19c;
        case 0x4de1a0u: goto label_4de1a0;
        case 0x4de1a4u: goto label_4de1a4;
        case 0x4de1a8u: goto label_4de1a8;
        case 0x4de1acu: goto label_4de1ac;
        case 0x4de1b0u: goto label_4de1b0;
        case 0x4de1b4u: goto label_4de1b4;
        case 0x4de1b8u: goto label_4de1b8;
        case 0x4de1bcu: goto label_4de1bc;
        case 0x4de1c0u: goto label_4de1c0;
        case 0x4de1c4u: goto label_4de1c4;
        case 0x4de1c8u: goto label_4de1c8;
        case 0x4de1ccu: goto label_4de1cc;
        case 0x4de1d0u: goto label_4de1d0;
        case 0x4de1d4u: goto label_4de1d4;
        case 0x4de1d8u: goto label_4de1d8;
        case 0x4de1dcu: goto label_4de1dc;
        case 0x4de1e0u: goto label_4de1e0;
        case 0x4de1e4u: goto label_4de1e4;
        case 0x4de1e8u: goto label_4de1e8;
        case 0x4de1ecu: goto label_4de1ec;
        case 0x4de1f0u: goto label_4de1f0;
        case 0x4de1f4u: goto label_4de1f4;
        case 0x4de1f8u: goto label_4de1f8;
        case 0x4de1fcu: goto label_4de1fc;
        case 0x4de200u: goto label_4de200;
        case 0x4de204u: goto label_4de204;
        case 0x4de208u: goto label_4de208;
        case 0x4de20cu: goto label_4de20c;
        case 0x4de210u: goto label_4de210;
        case 0x4de214u: goto label_4de214;
        case 0x4de218u: goto label_4de218;
        case 0x4de21cu: goto label_4de21c;
        case 0x4de220u: goto label_4de220;
        case 0x4de224u: goto label_4de224;
        case 0x4de228u: goto label_4de228;
        case 0x4de22cu: goto label_4de22c;
        case 0x4de230u: goto label_4de230;
        case 0x4de234u: goto label_4de234;
        case 0x4de238u: goto label_4de238;
        case 0x4de23cu: goto label_4de23c;
        case 0x4de240u: goto label_4de240;
        case 0x4de244u: goto label_4de244;
        case 0x4de248u: goto label_4de248;
        case 0x4de24cu: goto label_4de24c;
        case 0x4de250u: goto label_4de250;
        case 0x4de254u: goto label_4de254;
        case 0x4de258u: goto label_4de258;
        case 0x4de25cu: goto label_4de25c;
        case 0x4de260u: goto label_4de260;
        case 0x4de264u: goto label_4de264;
        case 0x4de268u: goto label_4de268;
        case 0x4de26cu: goto label_4de26c;
        case 0x4de270u: goto label_4de270;
        case 0x4de274u: goto label_4de274;
        case 0x4de278u: goto label_4de278;
        case 0x4de27cu: goto label_4de27c;
        case 0x4de280u: goto label_4de280;
        case 0x4de284u: goto label_4de284;
        case 0x4de288u: goto label_4de288;
        case 0x4de28cu: goto label_4de28c;
        case 0x4de290u: goto label_4de290;
        case 0x4de294u: goto label_4de294;
        case 0x4de298u: goto label_4de298;
        case 0x4de29cu: goto label_4de29c;
        case 0x4de2a0u: goto label_4de2a0;
        case 0x4de2a4u: goto label_4de2a4;
        case 0x4de2a8u: goto label_4de2a8;
        case 0x4de2acu: goto label_4de2ac;
        case 0x4de2b0u: goto label_4de2b0;
        case 0x4de2b4u: goto label_4de2b4;
        case 0x4de2b8u: goto label_4de2b8;
        case 0x4de2bcu: goto label_4de2bc;
        case 0x4de2c0u: goto label_4de2c0;
        case 0x4de2c4u: goto label_4de2c4;
        case 0x4de2c8u: goto label_4de2c8;
        case 0x4de2ccu: goto label_4de2cc;
        case 0x4de2d0u: goto label_4de2d0;
        case 0x4de2d4u: goto label_4de2d4;
        case 0x4de2d8u: goto label_4de2d8;
        case 0x4de2dcu: goto label_4de2dc;
        case 0x4de2e0u: goto label_4de2e0;
        case 0x4de2e4u: goto label_4de2e4;
        case 0x4de2e8u: goto label_4de2e8;
        case 0x4de2ecu: goto label_4de2ec;
        case 0x4de2f0u: goto label_4de2f0;
        case 0x4de2f4u: goto label_4de2f4;
        case 0x4de2f8u: goto label_4de2f8;
        case 0x4de2fcu: goto label_4de2fc;
        case 0x4de300u: goto label_4de300;
        case 0x4de304u: goto label_4de304;
        case 0x4de308u: goto label_4de308;
        case 0x4de30cu: goto label_4de30c;
        case 0x4de310u: goto label_4de310;
        case 0x4de314u: goto label_4de314;
        case 0x4de318u: goto label_4de318;
        case 0x4de31cu: goto label_4de31c;
        case 0x4de320u: goto label_4de320;
        case 0x4de324u: goto label_4de324;
        case 0x4de328u: goto label_4de328;
        case 0x4de32cu: goto label_4de32c;
        case 0x4de330u: goto label_4de330;
        case 0x4de334u: goto label_4de334;
        case 0x4de338u: goto label_4de338;
        case 0x4de33cu: goto label_4de33c;
        case 0x4de340u: goto label_4de340;
        case 0x4de344u: goto label_4de344;
        case 0x4de348u: goto label_4de348;
        case 0x4de34cu: goto label_4de34c;
        case 0x4de350u: goto label_4de350;
        case 0x4de354u: goto label_4de354;
        case 0x4de358u: goto label_4de358;
        case 0x4de35cu: goto label_4de35c;
        case 0x4de360u: goto label_4de360;
        case 0x4de364u: goto label_4de364;
        case 0x4de368u: goto label_4de368;
        case 0x4de36cu: goto label_4de36c;
        case 0x4de370u: goto label_4de370;
        case 0x4de374u: goto label_4de374;
        case 0x4de378u: goto label_4de378;
        case 0x4de37cu: goto label_4de37c;
        case 0x4de380u: goto label_4de380;
        case 0x4de384u: goto label_4de384;
        case 0x4de388u: goto label_4de388;
        case 0x4de38cu: goto label_4de38c;
        case 0x4de390u: goto label_4de390;
        case 0x4de394u: goto label_4de394;
        case 0x4de398u: goto label_4de398;
        case 0x4de39cu: goto label_4de39c;
        case 0x4de3a0u: goto label_4de3a0;
        case 0x4de3a4u: goto label_4de3a4;
        case 0x4de3a8u: goto label_4de3a8;
        case 0x4de3acu: goto label_4de3ac;
        case 0x4de3b0u: goto label_4de3b0;
        case 0x4de3b4u: goto label_4de3b4;
        case 0x4de3b8u: goto label_4de3b8;
        case 0x4de3bcu: goto label_4de3bc;
        case 0x4de3c0u: goto label_4de3c0;
        case 0x4de3c4u: goto label_4de3c4;
        case 0x4de3c8u: goto label_4de3c8;
        case 0x4de3ccu: goto label_4de3cc;
        case 0x4de3d0u: goto label_4de3d0;
        case 0x4de3d4u: goto label_4de3d4;
        case 0x4de3d8u: goto label_4de3d8;
        case 0x4de3dcu: goto label_4de3dc;
        case 0x4de3e0u: goto label_4de3e0;
        case 0x4de3e4u: goto label_4de3e4;
        case 0x4de3e8u: goto label_4de3e8;
        case 0x4de3ecu: goto label_4de3ec;
        case 0x4de3f0u: goto label_4de3f0;
        case 0x4de3f4u: goto label_4de3f4;
        case 0x4de3f8u: goto label_4de3f8;
        case 0x4de3fcu: goto label_4de3fc;
        case 0x4de400u: goto label_4de400;
        case 0x4de404u: goto label_4de404;
        case 0x4de408u: goto label_4de408;
        case 0x4de40cu: goto label_4de40c;
        case 0x4de410u: goto label_4de410;
        case 0x4de414u: goto label_4de414;
        case 0x4de418u: goto label_4de418;
        case 0x4de41cu: goto label_4de41c;
        case 0x4de420u: goto label_4de420;
        case 0x4de424u: goto label_4de424;
        case 0x4de428u: goto label_4de428;
        case 0x4de42cu: goto label_4de42c;
        case 0x4de430u: goto label_4de430;
        case 0x4de434u: goto label_4de434;
        case 0x4de438u: goto label_4de438;
        case 0x4de43cu: goto label_4de43c;
        case 0x4de440u: goto label_4de440;
        case 0x4de444u: goto label_4de444;
        case 0x4de448u: goto label_4de448;
        case 0x4de44cu: goto label_4de44c;
        case 0x4de450u: goto label_4de450;
        case 0x4de454u: goto label_4de454;
        case 0x4de458u: goto label_4de458;
        case 0x4de45cu: goto label_4de45c;
        case 0x4de460u: goto label_4de460;
        case 0x4de464u: goto label_4de464;
        case 0x4de468u: goto label_4de468;
        case 0x4de46cu: goto label_4de46c;
        case 0x4de470u: goto label_4de470;
        case 0x4de474u: goto label_4de474;
        case 0x4de478u: goto label_4de478;
        case 0x4de47cu: goto label_4de47c;
        case 0x4de480u: goto label_4de480;
        case 0x4de484u: goto label_4de484;
        case 0x4de488u: goto label_4de488;
        case 0x4de48cu: goto label_4de48c;
        case 0x4de490u: goto label_4de490;
        case 0x4de494u: goto label_4de494;
        case 0x4de498u: goto label_4de498;
        case 0x4de49cu: goto label_4de49c;
        case 0x4de4a0u: goto label_4de4a0;
        case 0x4de4a4u: goto label_4de4a4;
        case 0x4de4a8u: goto label_4de4a8;
        case 0x4de4acu: goto label_4de4ac;
        case 0x4de4b0u: goto label_4de4b0;
        case 0x4de4b4u: goto label_4de4b4;
        case 0x4de4b8u: goto label_4de4b8;
        case 0x4de4bcu: goto label_4de4bc;
        case 0x4de4c0u: goto label_4de4c0;
        case 0x4de4c4u: goto label_4de4c4;
        case 0x4de4c8u: goto label_4de4c8;
        case 0x4de4ccu: goto label_4de4cc;
        case 0x4de4d0u: goto label_4de4d0;
        case 0x4de4d4u: goto label_4de4d4;
        case 0x4de4d8u: goto label_4de4d8;
        case 0x4de4dcu: goto label_4de4dc;
        case 0x4de4e0u: goto label_4de4e0;
        case 0x4de4e4u: goto label_4de4e4;
        case 0x4de4e8u: goto label_4de4e8;
        case 0x4de4ecu: goto label_4de4ec;
        case 0x4de4f0u: goto label_4de4f0;
        case 0x4de4f4u: goto label_4de4f4;
        case 0x4de4f8u: goto label_4de4f8;
        case 0x4de4fcu: goto label_4de4fc;
        case 0x4de500u: goto label_4de500;
        case 0x4de504u: goto label_4de504;
        case 0x4de508u: goto label_4de508;
        case 0x4de50cu: goto label_4de50c;
        case 0x4de510u: goto label_4de510;
        case 0x4de514u: goto label_4de514;
        case 0x4de518u: goto label_4de518;
        case 0x4de51cu: goto label_4de51c;
        case 0x4de520u: goto label_4de520;
        case 0x4de524u: goto label_4de524;
        case 0x4de528u: goto label_4de528;
        case 0x4de52cu: goto label_4de52c;
        case 0x4de530u: goto label_4de530;
        case 0x4de534u: goto label_4de534;
        case 0x4de538u: goto label_4de538;
        case 0x4de53cu: goto label_4de53c;
        case 0x4de540u: goto label_4de540;
        case 0x4de544u: goto label_4de544;
        case 0x4de548u: goto label_4de548;
        case 0x4de54cu: goto label_4de54c;
        case 0x4de550u: goto label_4de550;
        case 0x4de554u: goto label_4de554;
        case 0x4de558u: goto label_4de558;
        case 0x4de55cu: goto label_4de55c;
        case 0x4de560u: goto label_4de560;
        case 0x4de564u: goto label_4de564;
        case 0x4de568u: goto label_4de568;
        case 0x4de56cu: goto label_4de56c;
        case 0x4de570u: goto label_4de570;
        case 0x4de574u: goto label_4de574;
        case 0x4de578u: goto label_4de578;
        case 0x4de57cu: goto label_4de57c;
        case 0x4de580u: goto label_4de580;
        case 0x4de584u: goto label_4de584;
        case 0x4de588u: goto label_4de588;
        case 0x4de58cu: goto label_4de58c;
        case 0x4de590u: goto label_4de590;
        case 0x4de594u: goto label_4de594;
        case 0x4de598u: goto label_4de598;
        case 0x4de59cu: goto label_4de59c;
        case 0x4de5a0u: goto label_4de5a0;
        case 0x4de5a4u: goto label_4de5a4;
        case 0x4de5a8u: goto label_4de5a8;
        case 0x4de5acu: goto label_4de5ac;
        case 0x4de5b0u: goto label_4de5b0;
        case 0x4de5b4u: goto label_4de5b4;
        case 0x4de5b8u: goto label_4de5b8;
        case 0x4de5bcu: goto label_4de5bc;
        case 0x4de5c0u: goto label_4de5c0;
        case 0x4de5c4u: goto label_4de5c4;
        case 0x4de5c8u: goto label_4de5c8;
        case 0x4de5ccu: goto label_4de5cc;
        case 0x4de5d0u: goto label_4de5d0;
        case 0x4de5d4u: goto label_4de5d4;
        case 0x4de5d8u: goto label_4de5d8;
        case 0x4de5dcu: goto label_4de5dc;
        case 0x4de5e0u: goto label_4de5e0;
        case 0x4de5e4u: goto label_4de5e4;
        case 0x4de5e8u: goto label_4de5e8;
        case 0x4de5ecu: goto label_4de5ec;
        case 0x4de5f0u: goto label_4de5f0;
        case 0x4de5f4u: goto label_4de5f4;
        case 0x4de5f8u: goto label_4de5f8;
        case 0x4de5fcu: goto label_4de5fc;
        case 0x4de600u: goto label_4de600;
        case 0x4de604u: goto label_4de604;
        case 0x4de608u: goto label_4de608;
        case 0x4de60cu: goto label_4de60c;
        case 0x4de610u: goto label_4de610;
        case 0x4de614u: goto label_4de614;
        case 0x4de618u: goto label_4de618;
        case 0x4de61cu: goto label_4de61c;
        case 0x4de620u: goto label_4de620;
        case 0x4de624u: goto label_4de624;
        case 0x4de628u: goto label_4de628;
        case 0x4de62cu: goto label_4de62c;
        case 0x4de630u: goto label_4de630;
        case 0x4de634u: goto label_4de634;
        case 0x4de638u: goto label_4de638;
        case 0x4de63cu: goto label_4de63c;
        case 0x4de640u: goto label_4de640;
        case 0x4de644u: goto label_4de644;
        case 0x4de648u: goto label_4de648;
        case 0x4de64cu: goto label_4de64c;
        default: break;
    }

    ctx->pc = 0x4de110u;

label_4de110:
    // 0x4de110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4de110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4de114:
    // 0x4de114: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4de114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4de118:
    // 0x4de118: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4de118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4de11c:
    // 0x4de11c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4de11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4de120:
    // 0x4de120: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4de120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4de124:
    // 0x4de124: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4de124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4de128:
    // 0x4de128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4de128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4de12c:
    // 0x4de12c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4de12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4de130:
    // 0x4de130: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4de130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4de134:
    // 0x4de134: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4de134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4de138:
    // 0x4de138: 0xc10ca68  jal         func_4329A0
label_4de13c:
    if (ctx->pc == 0x4DE13Cu) {
        ctx->pc = 0x4DE13Cu;
            // 0x4de13c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4DE140u;
        goto label_4de140;
    }
    ctx->pc = 0x4DE138u;
    SET_GPR_U32(ctx, 31, 0x4DE140u);
    ctx->pc = 0x4DE13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE138u;
            // 0x4de13c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE140u; }
        if (ctx->pc != 0x4DE140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE140u; }
        if (ctx->pc != 0x4DE140u) { return; }
    }
    ctx->pc = 0x4DE140u;
label_4de140:
    // 0x4de140: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4de140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4de144:
    // 0x4de144: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4de144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4de148:
    // 0x4de148: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4de148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4de14c:
    // 0x4de14c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4de14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4de150:
    // 0x4de150: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4de150u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4de154:
    // 0x4de154: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4de154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4de158:
    // 0x4de158: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4de158u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4de15c:
    // 0x4de15c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4de15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4de160:
    // 0x4de160: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4de160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4de164:
    // 0x4de164: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4de164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4de168:
    // 0x4de168: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4de168u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4de16c:
    // 0x4de16c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4de16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4de170:
    // 0x4de170: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4de170u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4de174:
    // 0x4de174: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4de174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4de178:
    // 0x4de178: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4de178u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4de17c:
    // 0x4de17c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4de17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4de180:
    // 0x4de180: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4de180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4de184:
    // 0x4de184: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4de184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4de188:
    // 0x4de188: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4de188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4de18c:
    // 0x4de18c: 0xc0582cc  jal         func_160B30
label_4de190:
    if (ctx->pc == 0x4DE190u) {
        ctx->pc = 0x4DE190u;
            // 0x4de190: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4DE194u;
        goto label_4de194;
    }
    ctx->pc = 0x4DE18Cu;
    SET_GPR_U32(ctx, 31, 0x4DE194u);
    ctx->pc = 0x4DE190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE18Cu;
            // 0x4de190: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE194u; }
        if (ctx->pc != 0x4DE194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE194u; }
        if (ctx->pc != 0x4DE194u) { return; }
    }
    ctx->pc = 0x4DE194u;
label_4de194:
    // 0x4de194: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4de194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4de198:
    // 0x4de198: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4de198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4de19c:
    // 0x4de19c: 0x24632eb8  addiu       $v1, $v1, 0x2EB8
    ctx->pc = 0x4de19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11960));
label_4de1a0:
    // 0x4de1a0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4de1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4de1a4:
    // 0x4de1a4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4de1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4de1a8:
    // 0x4de1a8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4de1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4de1ac:
    // 0x4de1ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4de1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4de1b0:
    // 0x4de1b0: 0xac44aa70  sw          $a0, -0x5590($v0)
    ctx->pc = 0x4de1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945392), GPR_U32(ctx, 4));
label_4de1b4:
    // 0x4de1b4: 0x24632ed0  addiu       $v1, $v1, 0x2ED0
    ctx->pc = 0x4de1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11984));
label_4de1b8:
    // 0x4de1b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4de1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4de1bc:
    // 0x4de1bc: 0x24422f08  addiu       $v0, $v0, 0x2F08
    ctx->pc = 0x4de1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12040));
label_4de1c0:
    // 0x4de1c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4de1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4de1c4:
    // 0x4de1c4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4de1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4de1c8:
    // 0x4de1c8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4de1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4de1cc:
    // 0x4de1cc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4de1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4de1d0:
    // 0x4de1d0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4de1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4de1d4:
    // 0x4de1d4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4de1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4de1d8:
    // 0x4de1d8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4de1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4de1dc:
    // 0x4de1dc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4de1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4de1e0:
    // 0x4de1e0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4de1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4de1e4:
    // 0x4de1e4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4de1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4de1e8:
    // 0x4de1e8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4de1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4de1ec:
    // 0x4de1ec: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4de1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4de1f0:
    // 0x4de1f0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4de1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4de1f4:
    // 0x4de1f4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_4de1f8:
    if (ctx->pc == 0x4DE1F8u) {
        ctx->pc = 0x4DE1FCu;
        goto label_4de1fc;
    }
    ctx->pc = 0x4DE1F4u;
    {
        const bool branch_taken_0x4de1f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de1f4) {
            ctx->pc = 0x4DE288u;
            goto label_4de288;
        }
    }
    ctx->pc = 0x4DE1FCu;
label_4de1fc:
    // 0x4de1fc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4de1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_4de200:
    // 0x4de200: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4de200u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4de204:
    // 0x4de204: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4de204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4de208:
    // 0x4de208: 0xc040138  jal         func_1004E0
label_4de20c:
    if (ctx->pc == 0x4DE20Cu) {
        ctx->pc = 0x4DE20Cu;
            // 0x4de20c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4DE210u;
        goto label_4de210;
    }
    ctx->pc = 0x4DE208u;
    SET_GPR_U32(ctx, 31, 0x4DE210u);
    ctx->pc = 0x4DE20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE208u;
            // 0x4de20c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE210u; }
        if (ctx->pc != 0x4DE210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE210u; }
        if (ctx->pc != 0x4DE210u) { return; }
    }
    ctx->pc = 0x4DE210u;
label_4de210:
    // 0x4de210: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4de210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4de214:
    // 0x4de214: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x4de214u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_4de218:
    // 0x4de218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4de218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4de21c:
    // 0x4de21c: 0x24a5e2b0  addiu       $a1, $a1, -0x1D50
    ctx->pc = 0x4de21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959792));
label_4de220:
    // 0x4de220: 0x24c6d7e0  addiu       $a2, $a2, -0x2820
    ctx->pc = 0x4de220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957024));
label_4de224:
    // 0x4de224: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x4de224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_4de228:
    // 0x4de228: 0xc040840  jal         func_102100
label_4de22c:
    if (ctx->pc == 0x4DE22Cu) {
        ctx->pc = 0x4DE22Cu;
            // 0x4de22c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE230u;
        goto label_4de230;
    }
    ctx->pc = 0x4DE228u;
    SET_GPR_U32(ctx, 31, 0x4DE230u);
    ctx->pc = 0x4DE22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE228u;
            // 0x4de22c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE230u; }
        if (ctx->pc != 0x4DE230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE230u; }
        if (ctx->pc != 0x4DE230u) { return; }
    }
    ctx->pc = 0x4DE230u;
label_4de230:
    // 0x4de230: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4de230u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4de234:
    // 0x4de234: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4de234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4de238:
    // 0x4de238: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4de238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4de23c:
    // 0x4de23c: 0xc0788fc  jal         func_1E23F0
label_4de240:
    if (ctx->pc == 0x4DE240u) {
        ctx->pc = 0x4DE240u;
            // 0x4de240: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE244u;
        goto label_4de244;
    }
    ctx->pc = 0x4DE23Cu;
    SET_GPR_U32(ctx, 31, 0x4DE244u);
    ctx->pc = 0x4DE240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE23Cu;
            // 0x4de240: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE244u; }
        if (ctx->pc != 0x4DE244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE244u; }
        if (ctx->pc != 0x4DE244u) { return; }
    }
    ctx->pc = 0x4DE244u;
label_4de244:
    // 0x4de244: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4de244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4de248:
    // 0x4de248: 0xc0788fc  jal         func_1E23F0
label_4de24c:
    if (ctx->pc == 0x4DE24Cu) {
        ctx->pc = 0x4DE24Cu;
            // 0x4de24c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE250u;
        goto label_4de250;
    }
    ctx->pc = 0x4DE248u;
    SET_GPR_U32(ctx, 31, 0x4DE250u);
    ctx->pc = 0x4DE24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE248u;
            // 0x4de24c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE250u; }
        if (ctx->pc != 0x4DE250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE250u; }
        if (ctx->pc != 0x4DE250u) { return; }
    }
    ctx->pc = 0x4DE250u;
label_4de250:
    // 0x4de250: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4de250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4de254:
    // 0x4de254: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4de254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4de258:
    // 0x4de258: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4de258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4de25c:
    // 0x4de25c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4de25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4de260:
    // 0x4de260: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4de260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4de264:
    // 0x4de264: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4de264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4de268:
    // 0x4de268: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4de268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4de26c:
    // 0x4de26c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4de26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4de270:
    // 0x4de270: 0xc0a997c  jal         func_2A65F0
label_4de274:
    if (ctx->pc == 0x4DE274u) {
        ctx->pc = 0x4DE274u;
            // 0x4de274: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4DE278u;
        goto label_4de278;
    }
    ctx->pc = 0x4DE270u;
    SET_GPR_U32(ctx, 31, 0x4DE278u);
    ctx->pc = 0x4DE274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE270u;
            // 0x4de274: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE278u; }
        if (ctx->pc != 0x4DE278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE278u; }
        if (ctx->pc != 0x4DE278u) { return; }
    }
    ctx->pc = 0x4DE278u;
label_4de278:
    // 0x4de278: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4de278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4de27c:
    // 0x4de27c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4de27cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4de280:
    // 0x4de280: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4de284:
    if (ctx->pc == 0x4DE284u) {
        ctx->pc = 0x4DE284u;
            // 0x4de284: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x4DE288u;
        goto label_4de288;
    }
    ctx->pc = 0x4DE280u;
    {
        const bool branch_taken_0x4de280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DE284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE280u;
            // 0x4de284: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de280) {
            ctx->pc = 0x4DE254u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4de254;
        }
    }
    ctx->pc = 0x4DE288u;
label_4de288:
    // 0x4de288: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4de288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4de28c:
    // 0x4de28c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4de28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4de290:
    // 0x4de290: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4de290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4de294:
    // 0x4de294: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4de294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4de298:
    // 0x4de298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4de298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4de29c:
    // 0x4de29c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4de29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4de2a0:
    // 0x4de2a0: 0x3e00008  jr          $ra
label_4de2a4:
    if (ctx->pc == 0x4DE2A4u) {
        ctx->pc = 0x4DE2A4u;
            // 0x4de2a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4DE2A8u;
        goto label_4de2a8;
    }
    ctx->pc = 0x4DE2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE2A0u;
            // 0x4de2a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DE2A8u;
label_4de2a8:
    // 0x4de2a8: 0x0  nop
    ctx->pc = 0x4de2a8u;
    // NOP
label_4de2ac:
    // 0x4de2ac: 0x0  nop
    ctx->pc = 0x4de2acu;
    // NOP
label_4de2b0:
    // 0x4de2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4de2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4de2b4:
    // 0x4de2b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4de2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4de2b8:
    // 0x4de2b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4de2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4de2bc:
    // 0x4de2bc: 0xc12e6bc  jal         func_4B9AF0
label_4de2c0:
    if (ctx->pc == 0x4DE2C0u) {
        ctx->pc = 0x4DE2C0u;
            // 0x4de2c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE2C4u;
        goto label_4de2c4;
    }
    ctx->pc = 0x4DE2BCu;
    SET_GPR_U32(ctx, 31, 0x4DE2C4u);
    ctx->pc = 0x4DE2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE2BCu;
            // 0x4de2c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF0u;
    if (runtime->hasFunction(0x4B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x4B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE2C4u; }
        if (ctx->pc != 0x4DE2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9AF0_0x4b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE2C4u; }
        if (ctx->pc != 0x4DE2C4u) { return; }
    }
    ctx->pc = 0x4DE2C4u;
label_4de2c4:
    // 0x4de2c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4de2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4de2c8:
    // 0x4de2c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4de2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4de2cc:
    // 0x4de2cc: 0x24422f70  addiu       $v0, $v0, 0x2F70
    ctx->pc = 0x4de2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12144));
label_4de2d0:
    // 0x4de2d0: 0x24632fb0  addiu       $v1, $v1, 0x2FB0
    ctx->pc = 0x4de2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12208));
label_4de2d4:
    // 0x4de2d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4de2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4de2d8:
    // 0x4de2d8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4de2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4de2dc:
    // 0x4de2dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4de2dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4de2e0:
    // 0x4de2e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4de2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4de2e4:
    // 0x4de2e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4de2e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4de2e8:
    // 0x4de2e8: 0x3e00008  jr          $ra
label_4de2ec:
    if (ctx->pc == 0x4DE2ECu) {
        ctx->pc = 0x4DE2ECu;
            // 0x4de2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4DE2F0u;
        goto label_4de2f0;
    }
    ctx->pc = 0x4DE2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE2E8u;
            // 0x4de2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DE2F0u;
label_4de2f0:
    // 0x4de2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4de2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4de2f4:
    // 0x4de2f4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4de2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4de2f8:
    // 0x4de2f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4de2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4de2fc:
    // 0x4de2fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4de2fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4de300:
    // 0x4de300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4de300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4de304:
    // 0x4de304: 0x8c42aa70  lw          $v0, -0x5590($v0)
    ctx->pc = 0x4de304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945392)));
label_4de308:
    // 0x4de308: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x4de308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4de30c:
    // 0x4de30c: 0xc12e608  jal         func_4B9820
label_4de310:
    if (ctx->pc == 0x4DE310u) {
        ctx->pc = 0x4DE310u;
            // 0x4de310: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE314u;
        goto label_4de314;
    }
    ctx->pc = 0x4DE30Cu;
    SET_GPR_U32(ctx, 31, 0x4DE314u);
    ctx->pc = 0x4DE310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE30Cu;
            // 0x4de310: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9820u;
    if (runtime->hasFunction(0x4B9820u)) {
        auto targetFn = runtime->lookupFunction(0x4B9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE314u; }
        if (ctx->pc != 0x4DE314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9820_0x4b9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE314u; }
        if (ctx->pc != 0x4DE314u) { return; }
    }
    ctx->pc = 0x4DE314u;
label_4de314:
    // 0x4de314: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4de314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4de318:
    // 0x4de318: 0xa20300d1  sb          $v1, 0xD1($s0)
    ctx->pc = 0x4de318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 3));
label_4de31c:
    // 0x4de31c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4de31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4de320:
    // 0x4de320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4de320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4de324:
    // 0x4de324: 0x3e00008  jr          $ra
label_4de328:
    if (ctx->pc == 0x4DE328u) {
        ctx->pc = 0x4DE328u;
            // 0x4de328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4DE32Cu;
        goto label_4de32c;
    }
    ctx->pc = 0x4DE324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE324u;
            // 0x4de328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DE32Cu;
label_4de32c:
    // 0x4de32c: 0x0  nop
    ctx->pc = 0x4de32cu;
    // NOP
label_4de330:
    // 0x4de330: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4de330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4de334:
    // 0x4de334: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4de334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4de338:
    // 0x4de338: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4de338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4de33c:
    // 0x4de33c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4de33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4de340:
    // 0x4de340: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4de340u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4de344:
    // 0x4de344: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4de344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4de348:
    // 0x4de348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4de348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4de34c:
    // 0x4de34c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4de34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4de350:
    // 0x4de350: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4de350u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4de354:
    // 0x4de354: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4de358:
    if (ctx->pc == 0x4DE358u) {
        ctx->pc = 0x4DE358u;
            // 0x4de358: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE35Cu;
        goto label_4de35c;
    }
    ctx->pc = 0x4DE354u;
    {
        const bool branch_taken_0x4de354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE354u;
            // 0x4de358: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de354) {
            ctx->pc = 0x4DE398u;
            goto label_4de398;
        }
    }
    ctx->pc = 0x4DE35Cu;
label_4de35c:
    // 0x4de35c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4de35cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4de360:
    // 0x4de360: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4de360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4de364:
    // 0x4de364: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4de364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4de368:
    // 0x4de368: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4de368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4de36c:
    // 0x4de36c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4de36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4de370:
    // 0x4de370: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4de370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4de374:
    // 0x4de374: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4de374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4de378:
    // 0x4de378: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4de378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4de37c:
    // 0x4de37c: 0x320f809  jalr        $t9
label_4de380:
    if (ctx->pc == 0x4DE380u) {
        ctx->pc = 0x4DE384u;
        goto label_4de384;
    }
    ctx->pc = 0x4DE37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DE384u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DE384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DE384u; }
            if (ctx->pc != 0x4DE384u) { return; }
        }
        }
    }
    ctx->pc = 0x4DE384u;
label_4de384:
    // 0x4de384: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4de384u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4de388:
    // 0x4de388: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4de388u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4de38c:
    // 0x4de38c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4de38cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4de390:
    // 0x4de390: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4de394:
    if (ctx->pc == 0x4DE394u) {
        ctx->pc = 0x4DE394u;
            // 0x4de394: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4DE398u;
        goto label_4de398;
    }
    ctx->pc = 0x4DE390u;
    {
        const bool branch_taken_0x4de390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DE394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE390u;
            // 0x4de394: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de390) {
            ctx->pc = 0x4DE368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4de368;
        }
    }
    ctx->pc = 0x4DE398u;
label_4de398:
    // 0x4de398: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4de398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4de39c:
    // 0x4de39c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4de39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4de3a0:
    // 0x4de3a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4de3a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4de3a4:
    // 0x4de3a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4de3a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4de3a8:
    // 0x4de3a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4de3a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4de3ac:
    // 0x4de3ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4de3acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4de3b0:
    // 0x4de3b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4de3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4de3b4:
    // 0x4de3b4: 0x3e00008  jr          $ra
label_4de3b8:
    if (ctx->pc == 0x4DE3B8u) {
        ctx->pc = 0x4DE3B8u;
            // 0x4de3b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4DE3BCu;
        goto label_4de3bc;
    }
    ctx->pc = 0x4DE3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE3B4u;
            // 0x4de3b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DE3BCu;
label_4de3bc:
    // 0x4de3bc: 0x0  nop
    ctx->pc = 0x4de3bcu;
    // NOP
label_4de3c0:
    // 0x4de3c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4de3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4de3c4:
    // 0x4de3c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4de3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4de3c8:
    // 0x4de3c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4de3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4de3cc:
    // 0x4de3cc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4de3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4de3d0:
    // 0x4de3d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4de3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4de3d4:
    // 0x4de3d4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4de3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4de3d8:
    // 0x4de3d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4de3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4de3dc:
    // 0x4de3dc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4de3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4de3e0:
    // 0x4de3e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4de3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4de3e4:
    // 0x4de3e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4de3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4de3e8:
    // 0x4de3e8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4de3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4de3ec:
    // 0x4de3ec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4de3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4de3f0:
    // 0x4de3f0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4de3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4de3f4:
    // 0x4de3f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4de3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4de3f8:
    // 0x4de3f8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4de3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4de3fc:
    // 0x4de3fc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4de3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4de400:
    // 0x4de400: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4de400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4de404:
    // 0x4de404: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4de404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4de408:
    // 0x4de408: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4de408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4de40c:
    // 0x4de40c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4de40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4de410:
    // 0x4de410: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4de410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4de414:
    // 0x4de414: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4de414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4de418:
    // 0x4de418: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4de418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4de41c:
    // 0x4de41c: 0xc0a997c  jal         func_2A65F0
label_4de420:
    if (ctx->pc == 0x4DE420u) {
        ctx->pc = 0x4DE420u;
            // 0x4de420: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4DE424u;
        goto label_4de424;
    }
    ctx->pc = 0x4DE41Cu;
    SET_GPR_U32(ctx, 31, 0x4DE424u);
    ctx->pc = 0x4DE420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE41Cu;
            // 0x4de420: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE424u; }
        if (ctx->pc != 0x4DE424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE424u; }
        if (ctx->pc != 0x4DE424u) { return; }
    }
    ctx->pc = 0x4DE424u;
label_4de424:
    // 0x4de424: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4de424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4de428:
    // 0x4de428: 0xc0d879c  jal         func_361E70
label_4de42c:
    if (ctx->pc == 0x4DE42Cu) {
        ctx->pc = 0x4DE42Cu;
            // 0x4de42c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE430u;
        goto label_4de430;
    }
    ctx->pc = 0x4DE428u;
    SET_GPR_U32(ctx, 31, 0x4DE430u);
    ctx->pc = 0x4DE42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE428u;
            // 0x4de42c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE430u; }
        if (ctx->pc != 0x4DE430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE430u; }
        if (ctx->pc != 0x4DE430u) { return; }
    }
    ctx->pc = 0x4DE430u;
label_4de430:
    // 0x4de430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4de430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4de434:
    // 0x4de434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4de434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4de438:
    // 0x4de438: 0x3e00008  jr          $ra
label_4de43c:
    if (ctx->pc == 0x4DE43Cu) {
        ctx->pc = 0x4DE43Cu;
            // 0x4de43c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DE440u;
        goto label_4de440;
    }
    ctx->pc = 0x4DE438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE438u;
            // 0x4de43c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DE440u;
label_4de440:
    // 0x4de440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4de440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4de444:
    // 0x4de444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4de444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4de448:
    // 0x4de448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4de448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4de44c:
    // 0x4de44c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4de44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4de450:
    // 0x4de450: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4de454:
    if (ctx->pc == 0x4DE454u) {
        ctx->pc = 0x4DE454u;
            // 0x4de454: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE458u;
        goto label_4de458;
    }
    ctx->pc = 0x4DE450u;
    {
        const bool branch_taken_0x4de450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE450u;
            // 0x4de454: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de450) {
            ctx->pc = 0x4DE570u;
            goto label_4de570;
        }
    }
    ctx->pc = 0x4DE458u;
label_4de458:
    // 0x4de458: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4de458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4de45c:
    // 0x4de45c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4de45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4de460:
    // 0x4de460: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4de460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4de464:
    // 0x4de464: 0xc075128  jal         func_1D44A0
label_4de468:
    if (ctx->pc == 0x4DE468u) {
        ctx->pc = 0x4DE468u;
            // 0x4de468: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4DE46Cu;
        goto label_4de46c;
    }
    ctx->pc = 0x4DE464u;
    SET_GPR_U32(ctx, 31, 0x4DE46Cu);
    ctx->pc = 0x4DE468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE464u;
            // 0x4de468: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE46Cu; }
        if (ctx->pc != 0x4DE46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE46Cu; }
        if (ctx->pc != 0x4DE46Cu) { return; }
    }
    ctx->pc = 0x4DE46Cu;
label_4de46c:
    // 0x4de46c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4de46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4de470:
    // 0x4de470: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4de470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4de474:
    // 0x4de474: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4de474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4de478:
    // 0x4de478: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4de478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4de47c:
    // 0x4de47c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4de47cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4de480:
    // 0x4de480: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4de484:
    if (ctx->pc == 0x4DE484u) {
        ctx->pc = 0x4DE484u;
            // 0x4de484: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4DE488u;
        goto label_4de488;
    }
    ctx->pc = 0x4DE480u;
    {
        const bool branch_taken_0x4de480 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE480u;
            // 0x4de484: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de480) {
            ctx->pc = 0x4DE490u;
            goto label_4de490;
        }
    }
    ctx->pc = 0x4DE488u;
label_4de488:
    // 0x4de488: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4de488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4de48c:
    // 0x4de48c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4de48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4de490:
    // 0x4de490: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4de490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4de494:
    // 0x4de494: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4de494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4de498:
    // 0x4de498: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4de498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4de49c:
    // 0x4de49c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4de49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4de4a0:
    // 0x4de4a0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4de4a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4de4a4:
    // 0x4de4a4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4de4a8:
    if (ctx->pc == 0x4DE4A8u) {
        ctx->pc = 0x4DE4A8u;
            // 0x4de4a8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4DE4ACu;
        goto label_4de4ac;
    }
    ctx->pc = 0x4DE4A4u;
    {
        const bool branch_taken_0x4de4a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de4a4) {
            ctx->pc = 0x4DE4A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE4A4u;
            // 0x4de4a8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE4B8u;
            goto label_4de4b8;
        }
    }
    ctx->pc = 0x4DE4ACu;
label_4de4ac:
    // 0x4de4ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4de4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4de4b0:
    // 0x4de4b0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4de4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4de4b4:
    // 0x4de4b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4de4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4de4b8:
    // 0x4de4b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4de4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4de4bc:
    // 0x4de4bc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4de4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4de4c0:
    // 0x4de4c0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4de4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4de4c4:
    // 0x4de4c4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4de4c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4de4c8:
    // 0x4de4c8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4de4cc:
    if (ctx->pc == 0x4DE4CCu) {
        ctx->pc = 0x4DE4CCu;
            // 0x4de4cc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4DE4D0u;
        goto label_4de4d0;
    }
    ctx->pc = 0x4DE4C8u;
    {
        const bool branch_taken_0x4de4c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de4c8) {
            ctx->pc = 0x4DE4CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE4C8u;
            // 0x4de4cc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE4DCu;
            goto label_4de4dc;
        }
    }
    ctx->pc = 0x4DE4D0u;
label_4de4d0:
    // 0x4de4d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4de4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4de4d4:
    // 0x4de4d4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4de4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4de4d8:
    // 0x4de4d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4de4d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4de4dc:
    // 0x4de4dc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4de4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4de4e0:
    // 0x4de4e0: 0x320f809  jalr        $t9
label_4de4e4:
    if (ctx->pc == 0x4DE4E4u) {
        ctx->pc = 0x4DE4E4u;
            // 0x4de4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE4E8u;
        goto label_4de4e8;
    }
    ctx->pc = 0x4DE4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DE4E8u);
        ctx->pc = 0x4DE4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE4E0u;
            // 0x4de4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DE4E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DE4E8u; }
            if (ctx->pc != 0x4DE4E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4DE4E8u;
label_4de4e8:
    // 0x4de4e8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4de4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4de4ec:
    // 0x4de4ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4de4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4de4f0:
    // 0x4de4f0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4de4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4de4f4:
    // 0x4de4f4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4de4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4de4f8:
    // 0x4de4f8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4de4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4de4fc:
    // 0x4de4fc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4de4fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4de500:
    // 0x4de500: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4de504:
    if (ctx->pc == 0x4DE504u) {
        ctx->pc = 0x4DE504u;
            // 0x4de504: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4DE508u;
        goto label_4de508;
    }
    ctx->pc = 0x4DE500u;
    {
        const bool branch_taken_0x4de500 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de500) {
            ctx->pc = 0x4DE504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE500u;
            // 0x4de504: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE514u;
            goto label_4de514;
        }
    }
    ctx->pc = 0x4DE508u;
label_4de508:
    // 0x4de508: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4de508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4de50c:
    // 0x4de50c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4de50cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4de510:
    // 0x4de510: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4de510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4de514:
    // 0x4de514: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4de514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4de518:
    // 0x4de518: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4de518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4de51c:
    // 0x4de51c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4de51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4de520:
    // 0x4de520: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4de520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4de524:
    // 0x4de524: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4de524u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4de528:
    // 0x4de528: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4de52c:
    if (ctx->pc == 0x4DE52Cu) {
        ctx->pc = 0x4DE530u;
        goto label_4de530;
    }
    ctx->pc = 0x4DE528u;
    {
        const bool branch_taken_0x4de528 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de528) {
            ctx->pc = 0x4DE538u;
            goto label_4de538;
        }
    }
    ctx->pc = 0x4DE530u;
label_4de530:
    // 0x4de530: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4de530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4de534:
    // 0x4de534: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4de534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4de538:
    // 0x4de538: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4de538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4de53c:
    // 0x4de53c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4de53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4de540:
    // 0x4de540: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4de540u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4de544:
    // 0x4de544: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4de548:
    if (ctx->pc == 0x4DE548u) {
        ctx->pc = 0x4DE54Cu;
        goto label_4de54c;
    }
    ctx->pc = 0x4DE544u;
    {
        const bool branch_taken_0x4de544 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de544) {
            ctx->pc = 0x4DE554u;
            goto label_4de554;
        }
    }
    ctx->pc = 0x4DE54Cu;
label_4de54c:
    // 0x4de54c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4de54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4de550:
    // 0x4de550: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4de550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4de554:
    // 0x4de554: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4de554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4de558:
    // 0x4de558: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4de558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4de55c:
    // 0x4de55c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4de55cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4de560:
    // 0x4de560: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4de564:
    if (ctx->pc == 0x4DE564u) {
        ctx->pc = 0x4DE564u;
            // 0x4de564: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4DE568u;
        goto label_4de568;
    }
    ctx->pc = 0x4DE560u;
    {
        const bool branch_taken_0x4de560 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4de560) {
            ctx->pc = 0x4DE564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE560u;
            // 0x4de564: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE574u;
            goto label_4de574;
        }
    }
    ctx->pc = 0x4DE568u;
label_4de568:
    // 0x4de568: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4de568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4de56c:
    // 0x4de56c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4de56cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4de570:
    // 0x4de570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4de570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4de574:
    // 0x4de574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4de574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4de578:
    // 0x4de578: 0x3e00008  jr          $ra
label_4de57c:
    if (ctx->pc == 0x4DE57Cu) {
        ctx->pc = 0x4DE57Cu;
            // 0x4de57c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4DE580u;
        goto label_4de580;
    }
    ctx->pc = 0x4DE578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE578u;
            // 0x4de57c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DE580u;
label_4de580:
    // 0x4de580: 0x81375f8  j           func_4DD7E0
label_4de584:
    if (ctx->pc == 0x4DE584u) {
        ctx->pc = 0x4DE584u;
            // 0x4de584: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4DE588u;
        goto label_4de588;
    }
    ctx->pc = 0x4DE580u;
    ctx->pc = 0x4DE584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE580u;
            // 0x4de584: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DD7E0u;
    {
        auto targetFn = runtime->lookupFunction(0x4DD7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4DE588u;
label_4de588:
    // 0x4de588: 0x0  nop
    ctx->pc = 0x4de588u;
    // NOP
label_4de58c:
    // 0x4de58c: 0x0  nop
    ctx->pc = 0x4de58cu;
    // NOP
label_4de590:
    // 0x4de590: 0x81377d8  j           func_4DDF60
label_4de594:
    if (ctx->pc == 0x4DE594u) {
        ctx->pc = 0x4DE594u;
            // 0x4de594: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4DE598u;
        goto label_4de598;
    }
    ctx->pc = 0x4DE590u;
    ctx->pc = 0x4DE594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE590u;
            // 0x4de594: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DDF60u;
    {
        auto targetFn = runtime->lookupFunction(0x4DDF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4DE598u;
label_4de598:
    // 0x4de598: 0x0  nop
    ctx->pc = 0x4de598u;
    // NOP
label_4de59c:
    // 0x4de59c: 0x0  nop
    ctx->pc = 0x4de59cu;
    // NOP
label_4de5a0:
    // 0x4de5a0: 0x81375a0  j           func_4DD680
label_4de5a4:
    if (ctx->pc == 0x4DE5A4u) {
        ctx->pc = 0x4DE5A4u;
            // 0x4de5a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4DE5A8u;
        goto label_4de5a8;
    }
    ctx->pc = 0x4DE5A0u;
    ctx->pc = 0x4DE5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE5A0u;
            // 0x4de5a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DD680u;
    if (runtime->hasFunction(0x4DD680u)) {
        auto targetFn = runtime->lookupFunction(0x4DD680u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004DD680_0x4dd680(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4DE5A8u;
label_4de5a8:
    // 0x4de5a8: 0x0  nop
    ctx->pc = 0x4de5a8u;
    // NOP
label_4de5ac:
    // 0x4de5ac: 0x0  nop
    ctx->pc = 0x4de5acu;
    // NOP
label_4de5b0:
    // 0x4de5b0: 0x8137558  j           func_4DD560
label_4de5b4:
    if (ctx->pc == 0x4DE5B4u) {
        ctx->pc = 0x4DE5B4u;
            // 0x4de5b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4DE5B8u;
        goto label_4de5b8;
    }
    ctx->pc = 0x4DE5B0u;
    ctx->pc = 0x4DE5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE5B0u;
            // 0x4de5b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DD560u;
    {
        auto targetFn = runtime->lookupFunction(0x4DD560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4DE5B8u;
label_4de5b8:
    // 0x4de5b8: 0x0  nop
    ctx->pc = 0x4de5b8u;
    // NOP
label_4de5bc:
    // 0x4de5bc: 0x0  nop
    ctx->pc = 0x4de5bcu;
    // NOP
label_4de5c0:
    // 0x4de5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4de5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4de5c4:
    // 0x4de5c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4de5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4de5c8:
    // 0x4de5c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4de5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4de5cc:
    // 0x4de5cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4de5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4de5d0:
    // 0x4de5d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4de5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4de5d4:
    // 0x4de5d4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4de5d8:
    if (ctx->pc == 0x4DE5D8u) {
        ctx->pc = 0x4DE5D8u;
            // 0x4de5d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE5DCu;
        goto label_4de5dc;
    }
    ctx->pc = 0x4DE5D4u;
    {
        const bool branch_taken_0x4de5d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE5D4u;
            // 0x4de5d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de5d4) {
            ctx->pc = 0x4DE630u;
            goto label_4de630;
        }
    }
    ctx->pc = 0x4DE5DCu;
label_4de5dc:
    // 0x4de5dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4de5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4de5e0:
    // 0x4de5e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4de5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4de5e4:
    // 0x4de5e4: 0x24633010  addiu       $v1, $v1, 0x3010
    ctx->pc = 0x4de5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12304));
label_4de5e8:
    // 0x4de5e8: 0x24423048  addiu       $v0, $v0, 0x3048
    ctx->pc = 0x4de5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12360));
label_4de5ec:
    // 0x4de5ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4de5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4de5f0:
    // 0x4de5f0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4de5f4:
    if (ctx->pc == 0x4DE5F4u) {
        ctx->pc = 0x4DE5F4u;
            // 0x4de5f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4DE5F8u;
        goto label_4de5f8;
    }
    ctx->pc = 0x4DE5F0u;
    {
        const bool branch_taken_0x4de5f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE5F0u;
            // 0x4de5f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de5f0) {
            ctx->pc = 0x4DE618u;
            goto label_4de618;
        }
    }
    ctx->pc = 0x4DE5F8u;
label_4de5f8:
    // 0x4de5f8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4de5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4de5fc:
    // 0x4de5fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4de5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4de600:
    // 0x4de600: 0x246330c0  addiu       $v1, $v1, 0x30C0
    ctx->pc = 0x4de600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12480));
label_4de604:
    // 0x4de604: 0x244230f8  addiu       $v0, $v0, 0x30F8
    ctx->pc = 0x4de604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12536));
label_4de608:
    // 0x4de608: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4de608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4de60c:
    // 0x4de60c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4de60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4de610:
    // 0x4de610: 0xc137994  jal         func_4DE650
label_4de614:
    if (ctx->pc == 0x4DE614u) {
        ctx->pc = 0x4DE614u;
            // 0x4de614: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4DE618u;
        goto label_4de618;
    }
    ctx->pc = 0x4DE610u;
    SET_GPR_U32(ctx, 31, 0x4DE618u);
    ctx->pc = 0x4DE614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE610u;
            // 0x4de614: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DE650u;
    if (runtime->hasFunction(0x4DE650u)) {
        auto targetFn = runtime->lookupFunction(0x4DE650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE618u; }
        if (ctx->pc != 0x4DE618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DE650_0x4de650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE618u; }
        if (ctx->pc != 0x4DE618u) { return; }
    }
    ctx->pc = 0x4DE618u;
label_4de618:
    // 0x4de618: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4de618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4de61c:
    // 0x4de61c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4de61cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4de620:
    // 0x4de620: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4de624:
    if (ctx->pc == 0x4DE624u) {
        ctx->pc = 0x4DE624u;
            // 0x4de624: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE628u;
        goto label_4de628;
    }
    ctx->pc = 0x4DE620u;
    {
        const bool branch_taken_0x4de620 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4de620) {
            ctx->pc = 0x4DE624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE620u;
            // 0x4de624: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE634u;
            goto label_4de634;
        }
    }
    ctx->pc = 0x4DE628u;
label_4de628:
    // 0x4de628: 0xc0400a8  jal         func_1002A0
label_4de62c:
    if (ctx->pc == 0x4DE62Cu) {
        ctx->pc = 0x4DE62Cu;
            // 0x4de62c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE630u;
        goto label_4de630;
    }
    ctx->pc = 0x4DE628u;
    SET_GPR_U32(ctx, 31, 0x4DE630u);
    ctx->pc = 0x4DE62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE628u;
            // 0x4de62c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE630u; }
        if (ctx->pc != 0x4DE630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE630u; }
        if (ctx->pc != 0x4DE630u) { return; }
    }
    ctx->pc = 0x4DE630u;
label_4de630:
    // 0x4de630: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4de630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4de634:
    // 0x4de634: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4de634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4de638:
    // 0x4de638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4de638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4de63c:
    // 0x4de63c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4de63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4de640:
    // 0x4de640: 0x3e00008  jr          $ra
label_4de644:
    if (ctx->pc == 0x4DE644u) {
        ctx->pc = 0x4DE644u;
            // 0x4de644: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DE648u;
        goto label_4de648;
    }
    ctx->pc = 0x4DE640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE640u;
            // 0x4de644: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DE648u;
label_4de648:
    // 0x4de648: 0x0  nop
    ctx->pc = 0x4de648u;
    // NOP
label_4de64c:
    // 0x4de64c: 0x0  nop
    ctx->pc = 0x4de64cu;
    // NOP
}
