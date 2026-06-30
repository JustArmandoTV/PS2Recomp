#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DB0C0
// Address: 0x4db0c0 - 0x4db580
void sub_004DB0C0_0x4db0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB0C0_0x4db0c0");
#endif

    switch (ctx->pc) {
        case 0x4db0c0u: goto label_4db0c0;
        case 0x4db0c4u: goto label_4db0c4;
        case 0x4db0c8u: goto label_4db0c8;
        case 0x4db0ccu: goto label_4db0cc;
        case 0x4db0d0u: goto label_4db0d0;
        case 0x4db0d4u: goto label_4db0d4;
        case 0x4db0d8u: goto label_4db0d8;
        case 0x4db0dcu: goto label_4db0dc;
        case 0x4db0e0u: goto label_4db0e0;
        case 0x4db0e4u: goto label_4db0e4;
        case 0x4db0e8u: goto label_4db0e8;
        case 0x4db0ecu: goto label_4db0ec;
        case 0x4db0f0u: goto label_4db0f0;
        case 0x4db0f4u: goto label_4db0f4;
        case 0x4db0f8u: goto label_4db0f8;
        case 0x4db0fcu: goto label_4db0fc;
        case 0x4db100u: goto label_4db100;
        case 0x4db104u: goto label_4db104;
        case 0x4db108u: goto label_4db108;
        case 0x4db10cu: goto label_4db10c;
        case 0x4db110u: goto label_4db110;
        case 0x4db114u: goto label_4db114;
        case 0x4db118u: goto label_4db118;
        case 0x4db11cu: goto label_4db11c;
        case 0x4db120u: goto label_4db120;
        case 0x4db124u: goto label_4db124;
        case 0x4db128u: goto label_4db128;
        case 0x4db12cu: goto label_4db12c;
        case 0x4db130u: goto label_4db130;
        case 0x4db134u: goto label_4db134;
        case 0x4db138u: goto label_4db138;
        case 0x4db13cu: goto label_4db13c;
        case 0x4db140u: goto label_4db140;
        case 0x4db144u: goto label_4db144;
        case 0x4db148u: goto label_4db148;
        case 0x4db14cu: goto label_4db14c;
        case 0x4db150u: goto label_4db150;
        case 0x4db154u: goto label_4db154;
        case 0x4db158u: goto label_4db158;
        case 0x4db15cu: goto label_4db15c;
        case 0x4db160u: goto label_4db160;
        case 0x4db164u: goto label_4db164;
        case 0x4db168u: goto label_4db168;
        case 0x4db16cu: goto label_4db16c;
        case 0x4db170u: goto label_4db170;
        case 0x4db174u: goto label_4db174;
        case 0x4db178u: goto label_4db178;
        case 0x4db17cu: goto label_4db17c;
        case 0x4db180u: goto label_4db180;
        case 0x4db184u: goto label_4db184;
        case 0x4db188u: goto label_4db188;
        case 0x4db18cu: goto label_4db18c;
        case 0x4db190u: goto label_4db190;
        case 0x4db194u: goto label_4db194;
        case 0x4db198u: goto label_4db198;
        case 0x4db19cu: goto label_4db19c;
        case 0x4db1a0u: goto label_4db1a0;
        case 0x4db1a4u: goto label_4db1a4;
        case 0x4db1a8u: goto label_4db1a8;
        case 0x4db1acu: goto label_4db1ac;
        case 0x4db1b0u: goto label_4db1b0;
        case 0x4db1b4u: goto label_4db1b4;
        case 0x4db1b8u: goto label_4db1b8;
        case 0x4db1bcu: goto label_4db1bc;
        case 0x4db1c0u: goto label_4db1c0;
        case 0x4db1c4u: goto label_4db1c4;
        case 0x4db1c8u: goto label_4db1c8;
        case 0x4db1ccu: goto label_4db1cc;
        case 0x4db1d0u: goto label_4db1d0;
        case 0x4db1d4u: goto label_4db1d4;
        case 0x4db1d8u: goto label_4db1d8;
        case 0x4db1dcu: goto label_4db1dc;
        case 0x4db1e0u: goto label_4db1e0;
        case 0x4db1e4u: goto label_4db1e4;
        case 0x4db1e8u: goto label_4db1e8;
        case 0x4db1ecu: goto label_4db1ec;
        case 0x4db1f0u: goto label_4db1f0;
        case 0x4db1f4u: goto label_4db1f4;
        case 0x4db1f8u: goto label_4db1f8;
        case 0x4db1fcu: goto label_4db1fc;
        case 0x4db200u: goto label_4db200;
        case 0x4db204u: goto label_4db204;
        case 0x4db208u: goto label_4db208;
        case 0x4db20cu: goto label_4db20c;
        case 0x4db210u: goto label_4db210;
        case 0x4db214u: goto label_4db214;
        case 0x4db218u: goto label_4db218;
        case 0x4db21cu: goto label_4db21c;
        case 0x4db220u: goto label_4db220;
        case 0x4db224u: goto label_4db224;
        case 0x4db228u: goto label_4db228;
        case 0x4db22cu: goto label_4db22c;
        case 0x4db230u: goto label_4db230;
        case 0x4db234u: goto label_4db234;
        case 0x4db238u: goto label_4db238;
        case 0x4db23cu: goto label_4db23c;
        case 0x4db240u: goto label_4db240;
        case 0x4db244u: goto label_4db244;
        case 0x4db248u: goto label_4db248;
        case 0x4db24cu: goto label_4db24c;
        case 0x4db250u: goto label_4db250;
        case 0x4db254u: goto label_4db254;
        case 0x4db258u: goto label_4db258;
        case 0x4db25cu: goto label_4db25c;
        case 0x4db260u: goto label_4db260;
        case 0x4db264u: goto label_4db264;
        case 0x4db268u: goto label_4db268;
        case 0x4db26cu: goto label_4db26c;
        case 0x4db270u: goto label_4db270;
        case 0x4db274u: goto label_4db274;
        case 0x4db278u: goto label_4db278;
        case 0x4db27cu: goto label_4db27c;
        case 0x4db280u: goto label_4db280;
        case 0x4db284u: goto label_4db284;
        case 0x4db288u: goto label_4db288;
        case 0x4db28cu: goto label_4db28c;
        case 0x4db290u: goto label_4db290;
        case 0x4db294u: goto label_4db294;
        case 0x4db298u: goto label_4db298;
        case 0x4db29cu: goto label_4db29c;
        case 0x4db2a0u: goto label_4db2a0;
        case 0x4db2a4u: goto label_4db2a4;
        case 0x4db2a8u: goto label_4db2a8;
        case 0x4db2acu: goto label_4db2ac;
        case 0x4db2b0u: goto label_4db2b0;
        case 0x4db2b4u: goto label_4db2b4;
        case 0x4db2b8u: goto label_4db2b8;
        case 0x4db2bcu: goto label_4db2bc;
        case 0x4db2c0u: goto label_4db2c0;
        case 0x4db2c4u: goto label_4db2c4;
        case 0x4db2c8u: goto label_4db2c8;
        case 0x4db2ccu: goto label_4db2cc;
        case 0x4db2d0u: goto label_4db2d0;
        case 0x4db2d4u: goto label_4db2d4;
        case 0x4db2d8u: goto label_4db2d8;
        case 0x4db2dcu: goto label_4db2dc;
        case 0x4db2e0u: goto label_4db2e0;
        case 0x4db2e4u: goto label_4db2e4;
        case 0x4db2e8u: goto label_4db2e8;
        case 0x4db2ecu: goto label_4db2ec;
        case 0x4db2f0u: goto label_4db2f0;
        case 0x4db2f4u: goto label_4db2f4;
        case 0x4db2f8u: goto label_4db2f8;
        case 0x4db2fcu: goto label_4db2fc;
        case 0x4db300u: goto label_4db300;
        case 0x4db304u: goto label_4db304;
        case 0x4db308u: goto label_4db308;
        case 0x4db30cu: goto label_4db30c;
        case 0x4db310u: goto label_4db310;
        case 0x4db314u: goto label_4db314;
        case 0x4db318u: goto label_4db318;
        case 0x4db31cu: goto label_4db31c;
        case 0x4db320u: goto label_4db320;
        case 0x4db324u: goto label_4db324;
        case 0x4db328u: goto label_4db328;
        case 0x4db32cu: goto label_4db32c;
        case 0x4db330u: goto label_4db330;
        case 0x4db334u: goto label_4db334;
        case 0x4db338u: goto label_4db338;
        case 0x4db33cu: goto label_4db33c;
        case 0x4db340u: goto label_4db340;
        case 0x4db344u: goto label_4db344;
        case 0x4db348u: goto label_4db348;
        case 0x4db34cu: goto label_4db34c;
        case 0x4db350u: goto label_4db350;
        case 0x4db354u: goto label_4db354;
        case 0x4db358u: goto label_4db358;
        case 0x4db35cu: goto label_4db35c;
        case 0x4db360u: goto label_4db360;
        case 0x4db364u: goto label_4db364;
        case 0x4db368u: goto label_4db368;
        case 0x4db36cu: goto label_4db36c;
        case 0x4db370u: goto label_4db370;
        case 0x4db374u: goto label_4db374;
        case 0x4db378u: goto label_4db378;
        case 0x4db37cu: goto label_4db37c;
        case 0x4db380u: goto label_4db380;
        case 0x4db384u: goto label_4db384;
        case 0x4db388u: goto label_4db388;
        case 0x4db38cu: goto label_4db38c;
        case 0x4db390u: goto label_4db390;
        case 0x4db394u: goto label_4db394;
        case 0x4db398u: goto label_4db398;
        case 0x4db39cu: goto label_4db39c;
        case 0x4db3a0u: goto label_4db3a0;
        case 0x4db3a4u: goto label_4db3a4;
        case 0x4db3a8u: goto label_4db3a8;
        case 0x4db3acu: goto label_4db3ac;
        case 0x4db3b0u: goto label_4db3b0;
        case 0x4db3b4u: goto label_4db3b4;
        case 0x4db3b8u: goto label_4db3b8;
        case 0x4db3bcu: goto label_4db3bc;
        case 0x4db3c0u: goto label_4db3c0;
        case 0x4db3c4u: goto label_4db3c4;
        case 0x4db3c8u: goto label_4db3c8;
        case 0x4db3ccu: goto label_4db3cc;
        case 0x4db3d0u: goto label_4db3d0;
        case 0x4db3d4u: goto label_4db3d4;
        case 0x4db3d8u: goto label_4db3d8;
        case 0x4db3dcu: goto label_4db3dc;
        case 0x4db3e0u: goto label_4db3e0;
        case 0x4db3e4u: goto label_4db3e4;
        case 0x4db3e8u: goto label_4db3e8;
        case 0x4db3ecu: goto label_4db3ec;
        case 0x4db3f0u: goto label_4db3f0;
        case 0x4db3f4u: goto label_4db3f4;
        case 0x4db3f8u: goto label_4db3f8;
        case 0x4db3fcu: goto label_4db3fc;
        case 0x4db400u: goto label_4db400;
        case 0x4db404u: goto label_4db404;
        case 0x4db408u: goto label_4db408;
        case 0x4db40cu: goto label_4db40c;
        case 0x4db410u: goto label_4db410;
        case 0x4db414u: goto label_4db414;
        case 0x4db418u: goto label_4db418;
        case 0x4db41cu: goto label_4db41c;
        case 0x4db420u: goto label_4db420;
        case 0x4db424u: goto label_4db424;
        case 0x4db428u: goto label_4db428;
        case 0x4db42cu: goto label_4db42c;
        case 0x4db430u: goto label_4db430;
        case 0x4db434u: goto label_4db434;
        case 0x4db438u: goto label_4db438;
        case 0x4db43cu: goto label_4db43c;
        case 0x4db440u: goto label_4db440;
        case 0x4db444u: goto label_4db444;
        case 0x4db448u: goto label_4db448;
        case 0x4db44cu: goto label_4db44c;
        case 0x4db450u: goto label_4db450;
        case 0x4db454u: goto label_4db454;
        case 0x4db458u: goto label_4db458;
        case 0x4db45cu: goto label_4db45c;
        case 0x4db460u: goto label_4db460;
        case 0x4db464u: goto label_4db464;
        case 0x4db468u: goto label_4db468;
        case 0x4db46cu: goto label_4db46c;
        case 0x4db470u: goto label_4db470;
        case 0x4db474u: goto label_4db474;
        case 0x4db478u: goto label_4db478;
        case 0x4db47cu: goto label_4db47c;
        case 0x4db480u: goto label_4db480;
        case 0x4db484u: goto label_4db484;
        case 0x4db488u: goto label_4db488;
        case 0x4db48cu: goto label_4db48c;
        case 0x4db490u: goto label_4db490;
        case 0x4db494u: goto label_4db494;
        case 0x4db498u: goto label_4db498;
        case 0x4db49cu: goto label_4db49c;
        case 0x4db4a0u: goto label_4db4a0;
        case 0x4db4a4u: goto label_4db4a4;
        case 0x4db4a8u: goto label_4db4a8;
        case 0x4db4acu: goto label_4db4ac;
        case 0x4db4b0u: goto label_4db4b0;
        case 0x4db4b4u: goto label_4db4b4;
        case 0x4db4b8u: goto label_4db4b8;
        case 0x4db4bcu: goto label_4db4bc;
        case 0x4db4c0u: goto label_4db4c0;
        case 0x4db4c4u: goto label_4db4c4;
        case 0x4db4c8u: goto label_4db4c8;
        case 0x4db4ccu: goto label_4db4cc;
        case 0x4db4d0u: goto label_4db4d0;
        case 0x4db4d4u: goto label_4db4d4;
        case 0x4db4d8u: goto label_4db4d8;
        case 0x4db4dcu: goto label_4db4dc;
        case 0x4db4e0u: goto label_4db4e0;
        case 0x4db4e4u: goto label_4db4e4;
        case 0x4db4e8u: goto label_4db4e8;
        case 0x4db4ecu: goto label_4db4ec;
        case 0x4db4f0u: goto label_4db4f0;
        case 0x4db4f4u: goto label_4db4f4;
        case 0x4db4f8u: goto label_4db4f8;
        case 0x4db4fcu: goto label_4db4fc;
        case 0x4db500u: goto label_4db500;
        case 0x4db504u: goto label_4db504;
        case 0x4db508u: goto label_4db508;
        case 0x4db50cu: goto label_4db50c;
        case 0x4db510u: goto label_4db510;
        case 0x4db514u: goto label_4db514;
        case 0x4db518u: goto label_4db518;
        case 0x4db51cu: goto label_4db51c;
        case 0x4db520u: goto label_4db520;
        case 0x4db524u: goto label_4db524;
        case 0x4db528u: goto label_4db528;
        case 0x4db52cu: goto label_4db52c;
        case 0x4db530u: goto label_4db530;
        case 0x4db534u: goto label_4db534;
        case 0x4db538u: goto label_4db538;
        case 0x4db53cu: goto label_4db53c;
        case 0x4db540u: goto label_4db540;
        case 0x4db544u: goto label_4db544;
        case 0x4db548u: goto label_4db548;
        case 0x4db54cu: goto label_4db54c;
        case 0x4db550u: goto label_4db550;
        case 0x4db554u: goto label_4db554;
        case 0x4db558u: goto label_4db558;
        case 0x4db55cu: goto label_4db55c;
        case 0x4db560u: goto label_4db560;
        case 0x4db564u: goto label_4db564;
        case 0x4db568u: goto label_4db568;
        case 0x4db56cu: goto label_4db56c;
        case 0x4db570u: goto label_4db570;
        case 0x4db574u: goto label_4db574;
        case 0x4db578u: goto label_4db578;
        case 0x4db57cu: goto label_4db57c;
        default: break;
    }

    ctx->pc = 0x4db0c0u;

label_4db0c0:
    // 0x4db0c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4db0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4db0c4:
    // 0x4db0c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4db0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4db0c8:
    // 0x4db0c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4db0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4db0cc:
    // 0x4db0cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4db0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4db0d0:
    // 0x4db0d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4db0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4db0d4:
    // 0x4db0d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4db0d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4db0d8:
    // 0x4db0d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4db0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4db0dc:
    // 0x4db0dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4db0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4db0e0:
    // 0x4db0e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4db0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4db0e4:
    // 0x4db0e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4db0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4db0e8:
    // 0x4db0e8: 0xc10ca68  jal         func_4329A0
label_4db0ec:
    if (ctx->pc == 0x4DB0ECu) {
        ctx->pc = 0x4DB0ECu;
            // 0x4db0ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4DB0F0u;
        goto label_4db0f0;
    }
    ctx->pc = 0x4DB0E8u;
    SET_GPR_U32(ctx, 31, 0x4DB0F0u);
    ctx->pc = 0x4DB0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB0E8u;
            // 0x4db0ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB0F0u; }
        if (ctx->pc != 0x4DB0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB0F0u; }
        if (ctx->pc != 0x4DB0F0u) { return; }
    }
    ctx->pc = 0x4DB0F0u;
label_4db0f0:
    // 0x4db0f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4db0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4db0f4:
    // 0x4db0f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4db0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4db0f8:
    // 0x4db0f8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4db0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4db0fc:
    // 0x4db0fc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4db0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4db100:
    // 0x4db100: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4db100u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4db104:
    // 0x4db104: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4db104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4db108:
    // 0x4db108: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4db108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4db10c:
    // 0x4db10c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4db10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4db110:
    // 0x4db110: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4db110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4db114:
    // 0x4db114: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4db114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4db118:
    // 0x4db118: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4db118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4db11c:
    // 0x4db11c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4db11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4db120:
    // 0x4db120: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4db120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4db124:
    // 0x4db124: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4db124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4db128:
    // 0x4db128: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4db128u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4db12c:
    // 0x4db12c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4db12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4db130:
    // 0x4db130: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4db130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4db134:
    // 0x4db134: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4db134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4db138:
    // 0x4db138: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4db138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4db13c:
    // 0x4db13c: 0xc0582cc  jal         func_160B30
label_4db140:
    if (ctx->pc == 0x4DB140u) {
        ctx->pc = 0x4DB140u;
            // 0x4db140: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4DB144u;
        goto label_4db144;
    }
    ctx->pc = 0x4DB13Cu;
    SET_GPR_U32(ctx, 31, 0x4DB144u);
    ctx->pc = 0x4DB140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB13Cu;
            // 0x4db140: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB144u; }
        if (ctx->pc != 0x4DB144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB144u; }
        if (ctx->pc != 0x4DB144u) { return; }
    }
    ctx->pc = 0x4DB144u;
label_4db144:
    // 0x4db144: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4db144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4db148:
    // 0x4db148: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4db148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4db14c:
    // 0x4db14c: 0x24632ad8  addiu       $v1, $v1, 0x2AD8
    ctx->pc = 0x4db14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10968));
label_4db150:
    // 0x4db150: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4db150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4db154:
    // 0x4db154: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4db154u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4db158:
    // 0x4db158: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4db158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4db15c:
    // 0x4db15c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4db15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4db160:
    // 0x4db160: 0xac4464b8  sw          $a0, 0x64B8($v0)
    ctx->pc = 0x4db160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25784), GPR_U32(ctx, 4));
label_4db164:
    // 0x4db164: 0x24632af0  addiu       $v1, $v1, 0x2AF0
    ctx->pc = 0x4db164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10992));
label_4db168:
    // 0x4db168: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4db168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4db16c:
    // 0x4db16c: 0x24422b28  addiu       $v0, $v0, 0x2B28
    ctx->pc = 0x4db16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11048));
label_4db170:
    // 0x4db170: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4db170u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4db174:
    // 0x4db174: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4db174u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4db178:
    // 0x4db178: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4db178u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4db17c:
    // 0x4db17c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4db17cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4db180:
    // 0x4db180: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4db180u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4db184:
    // 0x4db184: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4db184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4db188:
    // 0x4db188: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4db188u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4db18c:
    // 0x4db18c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4db18cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4db190:
    // 0x4db190: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4db190u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4db194:
    // 0x4db194: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4db194u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4db198:
    // 0x4db198: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4db198u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4db19c:
    // 0x4db19c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4db19cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_4db1a0:
    // 0x4db1a0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x4db1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_4db1a4:
    // 0x4db1a4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x4db1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_4db1a8:
    // 0x4db1a8: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x4db1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
label_4db1ac:
    // 0x4db1ac: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x4db1acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
label_4db1b0:
    // 0x4db1b0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x4db1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
label_4db1b4:
    // 0x4db1b4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x4db1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
label_4db1b8:
    // 0x4db1b8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x4db1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4db1bc:
    // 0x4db1bc: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_4db1c0:
    if (ctx->pc == 0x4DB1C0u) {
        ctx->pc = 0x4DB1C4u;
        goto label_4db1c4;
    }
    ctx->pc = 0x4DB1BCu;
    {
        const bool branch_taken_0x4db1bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4db1bc) {
            ctx->pc = 0x4DB258u;
            goto label_4db258;
        }
    }
    ctx->pc = 0x4DB1C4u;
label_4db1c4:
    // 0x4db1c4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x4db1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_4db1c8:
    // 0x4db1c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4db1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4db1cc:
    // 0x4db1cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4db1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4db1d0:
    // 0x4db1d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4db1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4db1d4:
    // 0x4db1d4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4db1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4db1d8:
    // 0x4db1d8: 0xc040138  jal         func_1004E0
label_4db1dc:
    if (ctx->pc == 0x4DB1DCu) {
        ctx->pc = 0x4DB1DCu;
            // 0x4db1dc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4DB1E0u;
        goto label_4db1e0;
    }
    ctx->pc = 0x4DB1D8u;
    SET_GPR_U32(ctx, 31, 0x4DB1E0u);
    ctx->pc = 0x4DB1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB1D8u;
            // 0x4db1dc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB1E0u; }
        if (ctx->pc != 0x4DB1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB1E0u; }
        if (ctx->pc != 0x4DB1E0u) { return; }
    }
    ctx->pc = 0x4DB1E0u;
label_4db1e0:
    // 0x4db1e0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4db1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4db1e4:
    // 0x4db1e4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x4db1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_4db1e8:
    // 0x4db1e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4db1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4db1ec:
    // 0x4db1ec: 0x24a5b280  addiu       $a1, $a1, -0x4D80
    ctx->pc = 0x4db1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947456));
label_4db1f0:
    // 0x4db1f0: 0x24c6a700  addiu       $a2, $a2, -0x5900
    ctx->pc = 0x4db1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944512));
label_4db1f4:
    // 0x4db1f4: 0x240701a0  addiu       $a3, $zero, 0x1A0
    ctx->pc = 0x4db1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
label_4db1f8:
    // 0x4db1f8: 0xc040840  jal         func_102100
label_4db1fc:
    if (ctx->pc == 0x4DB1FCu) {
        ctx->pc = 0x4DB1FCu;
            // 0x4db1fc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB200u;
        goto label_4db200;
    }
    ctx->pc = 0x4DB1F8u;
    SET_GPR_U32(ctx, 31, 0x4DB200u);
    ctx->pc = 0x4DB1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB1F8u;
            // 0x4db1fc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB200u; }
        if (ctx->pc != 0x4DB200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB200u; }
        if (ctx->pc != 0x4DB200u) { return; }
    }
    ctx->pc = 0x4DB200u;
label_4db200:
    // 0x4db200: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4db200u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4db204:
    // 0x4db204: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4db204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4db208:
    // 0x4db208: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4db208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4db20c:
    // 0x4db20c: 0xc0788fc  jal         func_1E23F0
label_4db210:
    if (ctx->pc == 0x4DB210u) {
        ctx->pc = 0x4DB210u;
            // 0x4db210: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB214u;
        goto label_4db214;
    }
    ctx->pc = 0x4DB20Cu;
    SET_GPR_U32(ctx, 31, 0x4DB214u);
    ctx->pc = 0x4DB210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB20Cu;
            // 0x4db210: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB214u; }
        if (ctx->pc != 0x4DB214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB214u; }
        if (ctx->pc != 0x4DB214u) { return; }
    }
    ctx->pc = 0x4DB214u;
label_4db214:
    // 0x4db214: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4db214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4db218:
    // 0x4db218: 0xc0788fc  jal         func_1E23F0
label_4db21c:
    if (ctx->pc == 0x4DB21Cu) {
        ctx->pc = 0x4DB21Cu;
            // 0x4db21c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB220u;
        goto label_4db220;
    }
    ctx->pc = 0x4DB218u;
    SET_GPR_U32(ctx, 31, 0x4DB220u);
    ctx->pc = 0x4DB21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB218u;
            // 0x4db21c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB220u; }
        if (ctx->pc != 0x4DB220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB220u; }
        if (ctx->pc != 0x4DB220u) { return; }
    }
    ctx->pc = 0x4DB220u;
label_4db220:
    // 0x4db220: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4db220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4db224:
    // 0x4db224: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4db224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4db228:
    // 0x4db228: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4db228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4db22c:
    // 0x4db22c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4db22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4db230:
    // 0x4db230: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4db230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4db234:
    // 0x4db234: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4db234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4db238:
    // 0x4db238: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4db238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4db23c:
    // 0x4db23c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4db23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4db240:
    // 0x4db240: 0xc0a997c  jal         func_2A65F0
label_4db244:
    if (ctx->pc == 0x4DB244u) {
        ctx->pc = 0x4DB244u;
            // 0x4db244: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4DB248u;
        goto label_4db248;
    }
    ctx->pc = 0x4DB240u;
    SET_GPR_U32(ctx, 31, 0x4DB248u);
    ctx->pc = 0x4DB244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB240u;
            // 0x4db244: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB248u; }
        if (ctx->pc != 0x4DB248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB248u; }
        if (ctx->pc != 0x4DB248u) { return; }
    }
    ctx->pc = 0x4DB248u;
label_4db248:
    // 0x4db248: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4db248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4db24c:
    // 0x4db24c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4db24cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4db250:
    // 0x4db250: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4db254:
    if (ctx->pc == 0x4DB254u) {
        ctx->pc = 0x4DB254u;
            // 0x4db254: 0x265201a0  addiu       $s2, $s2, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
        ctx->pc = 0x4DB258u;
        goto label_4db258;
    }
    ctx->pc = 0x4DB250u;
    {
        const bool branch_taken_0x4db250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DB254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB250u;
            // 0x4db254: 0x265201a0  addiu       $s2, $s2, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db250) {
            ctx->pc = 0x4DB224u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4db224;
        }
    }
    ctx->pc = 0x4DB258u;
label_4db258:
    // 0x4db258: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4db258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4db25c:
    // 0x4db25c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4db25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4db260:
    // 0x4db260: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4db260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4db264:
    // 0x4db264: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4db264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4db268:
    // 0x4db268: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4db268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4db26c:
    // 0x4db26c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4db26cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4db270:
    // 0x4db270: 0x3e00008  jr          $ra
label_4db274:
    if (ctx->pc == 0x4DB274u) {
        ctx->pc = 0x4DB274u;
            // 0x4db274: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4DB278u;
        goto label_4db278;
    }
    ctx->pc = 0x4DB270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB270u;
            // 0x4db274: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DB278u;
label_4db278:
    // 0x4db278: 0x0  nop
    ctx->pc = 0x4db278u;
    // NOP
label_4db27c:
    // 0x4db27c: 0x0  nop
    ctx->pc = 0x4db27cu;
    // NOP
label_4db280:
    // 0x4db280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4db280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4db284:
    // 0x4db284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4db284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4db288:
    // 0x4db288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4db288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4db28c:
    // 0x4db28c: 0xc12e6bc  jal         func_4B9AF0
label_4db290:
    if (ctx->pc == 0x4DB290u) {
        ctx->pc = 0x4DB290u;
            // 0x4db290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB294u;
        goto label_4db294;
    }
    ctx->pc = 0x4DB28Cu;
    SET_GPR_U32(ctx, 31, 0x4DB294u);
    ctx->pc = 0x4DB290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB28Cu;
            // 0x4db290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF0u;
    if (runtime->hasFunction(0x4B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x4B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB294u; }
        if (ctx->pc != 0x4DB294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9AF0_0x4b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB294u; }
        if (ctx->pc != 0x4DB294u) { return; }
    }
    ctx->pc = 0x4DB294u;
label_4db294:
    // 0x4db294: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4db294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4db298:
    // 0x4db298: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4db298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4db29c:
    // 0x4db29c: 0x24632c30  addiu       $v1, $v1, 0x2C30
    ctx->pc = 0x4db29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11312));
label_4db2a0:
    // 0x4db2a0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4db2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_4db2a4:
    // 0x4db2a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4db2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4db2a8:
    // 0x4db2a8: 0x24422c70  addiu       $v0, $v0, 0x2C70
    ctx->pc = 0x4db2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
label_4db2ac:
    // 0x4db2ac: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4db2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4db2b0:
    // 0x4db2b0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4db2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4db2b4:
    // 0x4db2b4: 0x24842b90  addiu       $a0, $a0, 0x2B90
    ctx->pc = 0x4db2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11152));
label_4db2b8:
    // 0x4db2b8: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x4db2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
label_4db2bc:
    // 0x4db2bc: 0x24632bd0  addiu       $v1, $v1, 0x2BD0
    ctx->pc = 0x4db2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11216));
label_4db2c0:
    // 0x4db2c0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4db2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4db2c4:
    // 0x4db2c4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4db2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_4db2c8:
    // 0x4db2c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4db2c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4db2cc:
    // 0x4db2cc: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x4db2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
label_4db2d0:
    // 0x4db2d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4db2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4db2d4:
    // 0x4db2d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4db2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4db2d8:
    // 0x4db2d8: 0x3e00008  jr          $ra
label_4db2dc:
    if (ctx->pc == 0x4DB2DCu) {
        ctx->pc = 0x4DB2DCu;
            // 0x4db2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4DB2E0u;
        goto label_4db2e0;
    }
    ctx->pc = 0x4DB2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB2D8u;
            // 0x4db2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DB2E0u;
label_4db2e0:
    // 0x4db2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4db2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4db2e4:
    // 0x4db2e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4db2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4db2e8:
    // 0x4db2e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4db2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4db2ec:
    // 0x4db2ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4db2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4db2f0:
    // 0x4db2f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4db2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4db2f4:
    // 0x4db2f4: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_4db2f8:
    if (ctx->pc == 0x4DB2F8u) {
        ctx->pc = 0x4DB2F8u;
            // 0x4db2f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB2FCu;
        goto label_4db2fc;
    }
    ctx->pc = 0x4DB2F4u;
    {
        const bool branch_taken_0x4db2f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB2F4u;
            // 0x4db2f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db2f4) {
            ctx->pc = 0x4DB334u;
            goto label_4db334;
        }
    }
    ctx->pc = 0x4DB2FCu;
label_4db2fc:
    // 0x4db2fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4db2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4db300:
    // 0x4db300: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4db300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4db304:
    // 0x4db304: 0x24632c30  addiu       $v1, $v1, 0x2C30
    ctx->pc = 0x4db304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11312));
label_4db308:
    // 0x4db308: 0x24422c70  addiu       $v0, $v0, 0x2C70
    ctx->pc = 0x4db308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
label_4db30c:
    // 0x4db30c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4db30cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4db310:
    // 0x4db310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4db310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4db314:
    // 0x4db314: 0xc12e684  jal         func_4B9A10
label_4db318:
    if (ctx->pc == 0x4DB318u) {
        ctx->pc = 0x4DB318u;
            // 0x4db318: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x4DB31Cu;
        goto label_4db31c;
    }
    ctx->pc = 0x4DB314u;
    SET_GPR_U32(ctx, 31, 0x4DB31Cu);
    ctx->pc = 0x4DB318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB314u;
            // 0x4db318: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9A10u;
    if (runtime->hasFunction(0x4B9A10u)) {
        auto targetFn = runtime->lookupFunction(0x4B9A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB31Cu; }
        if (ctx->pc != 0x4DB31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9A10_0x4b9a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB31Cu; }
        if (ctx->pc != 0x4DB31Cu) { return; }
    }
    ctx->pc = 0x4DB31Cu;
label_4db31c:
    // 0x4db31c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4db31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4db320:
    // 0x4db320: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4db320u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4db324:
    // 0x4db324: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4db328:
    if (ctx->pc == 0x4DB328u) {
        ctx->pc = 0x4DB328u;
            // 0x4db328: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB32Cu;
        goto label_4db32c;
    }
    ctx->pc = 0x4DB324u;
    {
        const bool branch_taken_0x4db324 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4db324) {
            ctx->pc = 0x4DB328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB324u;
            // 0x4db328: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DB338u;
            goto label_4db338;
        }
    }
    ctx->pc = 0x4DB32Cu;
label_4db32c:
    // 0x4db32c: 0xc0400a8  jal         func_1002A0
label_4db330:
    if (ctx->pc == 0x4DB330u) {
        ctx->pc = 0x4DB330u;
            // 0x4db330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB334u;
        goto label_4db334;
    }
    ctx->pc = 0x4DB32Cu;
    SET_GPR_U32(ctx, 31, 0x4DB334u);
    ctx->pc = 0x4DB330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB32Cu;
            // 0x4db330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB334u; }
        if (ctx->pc != 0x4DB334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB334u; }
        if (ctx->pc != 0x4DB334u) { return; }
    }
    ctx->pc = 0x4DB334u;
label_4db334:
    // 0x4db334: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4db334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4db338:
    // 0x4db338: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4db338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4db33c:
    // 0x4db33c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4db33cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4db340:
    // 0x4db340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4db340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4db344:
    // 0x4db344: 0x3e00008  jr          $ra
label_4db348:
    if (ctx->pc == 0x4DB348u) {
        ctx->pc = 0x4DB348u;
            // 0x4db348: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DB34Cu;
        goto label_4db34c;
    }
    ctx->pc = 0x4DB344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB344u;
            // 0x4db348: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DB34Cu;
label_4db34c:
    // 0x4db34c: 0x0  nop
    ctx->pc = 0x4db34cu;
    // NOP
label_4db350:
    // 0x4db350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4db350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4db354:
    // 0x4db354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4db354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4db358:
    // 0x4db358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4db358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4db35c:
    // 0x4db35c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4db35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4db360:
    // 0x4db360: 0x8c840190  lw          $a0, 0x190($a0)
    ctx->pc = 0x4db360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
label_4db364:
    // 0x4db364: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4db368:
    if (ctx->pc == 0x4DB368u) {
        ctx->pc = 0x4DB368u;
            // 0x4db368: 0xae000190  sw          $zero, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
        ctx->pc = 0x4DB36Cu;
        goto label_4db36c;
    }
    ctx->pc = 0x4DB364u;
    {
        const bool branch_taken_0x4db364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4db364) {
            ctx->pc = 0x4DB368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB364u;
            // 0x4db368: 0xae000190  sw          $zero, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DB380u;
            goto label_4db380;
        }
    }
    ctx->pc = 0x4DB36Cu;
label_4db36c:
    // 0x4db36c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4db36cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4db370:
    // 0x4db370: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4db370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4db374:
    // 0x4db374: 0x320f809  jalr        $t9
label_4db378:
    if (ctx->pc == 0x4DB378u) {
        ctx->pc = 0x4DB378u;
            // 0x4db378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DB37Cu;
        goto label_4db37c;
    }
    ctx->pc = 0x4DB374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DB37Cu);
        ctx->pc = 0x4DB378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB374u;
            // 0x4db378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DB37Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DB37Cu; }
            if (ctx->pc != 0x4DB37Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4DB37Cu;
label_4db37c:
    // 0x4db37c: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x4db37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
label_4db380:
    // 0x4db380: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4db380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4db384:
    // 0x4db384: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4db388:
    if (ctx->pc == 0x4DB388u) {
        ctx->pc = 0x4DB388u;
            // 0x4db388: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4DB38Cu;
        goto label_4db38c;
    }
    ctx->pc = 0x4DB384u;
    {
        const bool branch_taken_0x4db384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4db384) {
            ctx->pc = 0x4DB388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB384u;
            // 0x4db388: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DB3A0u;
            goto label_4db3a0;
        }
    }
    ctx->pc = 0x4DB38Cu;
label_4db38c:
    // 0x4db38c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4db38cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4db390:
    // 0x4db390: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4db390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4db394:
    // 0x4db394: 0x320f809  jalr        $t9
label_4db398:
    if (ctx->pc == 0x4DB398u) {
        ctx->pc = 0x4DB398u;
            // 0x4db398: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DB39Cu;
        goto label_4db39c;
    }
    ctx->pc = 0x4DB394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DB39Cu);
        ctx->pc = 0x4DB398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB394u;
            // 0x4db398: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DB39Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DB39Cu; }
            if (ctx->pc != 0x4DB39Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4DB39Cu;
label_4db39c:
    // 0x4db39c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4db39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4db3a0:
    // 0x4db3a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4db3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4db3a4:
    // 0x4db3a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4db3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4db3a8:
    // 0x4db3a8: 0x3e00008  jr          $ra
label_4db3ac:
    if (ctx->pc == 0x4DB3ACu) {
        ctx->pc = 0x4DB3ACu;
            // 0x4db3ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4DB3B0u;
        goto label_4db3b0;
    }
    ctx->pc = 0x4DB3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB3A8u;
            // 0x4db3ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DB3B0u;
label_4db3b0:
    // 0x4db3b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4db3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4db3b4:
    // 0x4db3b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4db3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4db3b8:
    // 0x4db3b8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4db3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4db3bc:
    // 0x4db3bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4db3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4db3c0:
    // 0x4db3c0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4db3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4db3c4:
    // 0x4db3c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4db3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4db3c8:
    // 0x4db3c8: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x4db3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4db3cc:
    // 0x4db3cc: 0xc4820128  lwc1        $f2, 0x128($a0)
    ctx->pc = 0x4db3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4db3d0:
    // 0x4db3d0: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x4db3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4db3d4:
    // 0x4db3d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4db3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4db3d8:
    // 0x4db3d8: 0xc4800120  lwc1        $f0, 0x120($a0)
    ctx->pc = 0x4db3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4db3dc:
    // 0x4db3dc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x4db3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_4db3e0:
    // 0x4db3e0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x4db3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_4db3e4:
    // 0x4db3e4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x4db3e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_4db3e8:
    // 0x4db3e8: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x4db3e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_4db3ec:
    // 0x4db3ec: 0xc483013c  lwc1        $f3, 0x13C($a0)
    ctx->pc = 0x4db3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4db3f0:
    // 0x4db3f0: 0xc4820138  lwc1        $f2, 0x138($a0)
    ctx->pc = 0x4db3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4db3f4:
    // 0x4db3f4: 0xc4810134  lwc1        $f1, 0x134($a0)
    ctx->pc = 0x4db3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4db3f8:
    // 0x4db3f8: 0xc4800130  lwc1        $f0, 0x130($a0)
    ctx->pc = 0x4db3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4db3fc:
    // 0x4db3fc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4db3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4db400:
    // 0x4db400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4db400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4db404:
    // 0x4db404: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4db404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4db408:
    // 0x4db408: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4db408u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4db40c:
    // 0x4db40c: 0xc0892b0  jal         func_224AC0
label_4db410:
    if (ctx->pc == 0x4DB410u) {
        ctx->pc = 0x4DB410u;
            // 0x4db410: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x4DB414u;
        goto label_4db414;
    }
    ctx->pc = 0x4DB40Cu;
    SET_GPR_U32(ctx, 31, 0x4DB414u);
    ctx->pc = 0x4DB410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB40Cu;
            // 0x4db410: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB414u; }
        if (ctx->pc != 0x4DB414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB414u; }
        if (ctx->pc != 0x4DB414u) { return; }
    }
    ctx->pc = 0x4DB414u;
label_4db414:
    // 0x4db414: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4db414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4db418:
    // 0x4db418: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4db418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4db41c:
    // 0x4db41c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4db41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4db420:
    // 0x4db420: 0xc08914c  jal         func_224530
label_4db424:
    if (ctx->pc == 0x4DB424u) {
        ctx->pc = 0x4DB424u;
            // 0x4db424: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB428u;
        goto label_4db428;
    }
    ctx->pc = 0x4DB420u;
    SET_GPR_U32(ctx, 31, 0x4DB428u);
    ctx->pc = 0x4DB424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB420u;
            // 0x4db424: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB428u; }
        if (ctx->pc != 0x4DB428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB428u; }
        if (ctx->pc != 0x4DB428u) { return; }
    }
    ctx->pc = 0x4DB428u;
label_4db428:
    // 0x4db428: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x4db428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4db42c:
    // 0x4db42c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4db42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4db430:
    // 0x4db430: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4db430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4db434:
    // 0x4db434: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4db434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4db438:
    // 0x4db438: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4db438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_4db43c:
    // 0x4db43c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4db43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4db440:
    // 0x4db440: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4db440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4db444:
    // 0x4db444: 0xc08bff0  jal         func_22FFC0
label_4db448:
    if (ctx->pc == 0x4DB448u) {
        ctx->pc = 0x4DB448u;
            // 0x4db448: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB44Cu;
        goto label_4db44c;
    }
    ctx->pc = 0x4DB444u;
    SET_GPR_U32(ctx, 31, 0x4DB44Cu);
    ctx->pc = 0x4DB448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB444u;
            // 0x4db448: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB44Cu; }
        if (ctx->pc != 0x4DB44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB44Cu; }
        if (ctx->pc != 0x4DB44Cu) { return; }
    }
    ctx->pc = 0x4DB44Cu;
label_4db44c:
    // 0x4db44c: 0xc0e393c  jal         func_38E4F0
label_4db450:
    if (ctx->pc == 0x4DB450u) {
        ctx->pc = 0x4DB450u;
            // 0x4db450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB454u;
        goto label_4db454;
    }
    ctx->pc = 0x4DB44Cu;
    SET_GPR_U32(ctx, 31, 0x4DB454u);
    ctx->pc = 0x4DB450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB44Cu;
            // 0x4db450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB454u; }
        if (ctx->pc != 0x4DB454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB454u; }
        if (ctx->pc != 0x4DB454u) { return; }
    }
    ctx->pc = 0x4DB454u;
label_4db454:
    // 0x4db454: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4db454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4db458:
    // 0x4db458: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x4db458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_4db45c:
    // 0x4db45c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x4db45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_4db460:
    // 0x4db460: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x4db460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_4db464:
    // 0x4db464: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4db464u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4db468:
    // 0x4db468: 0xc088b74  jal         func_222DD0
label_4db46c:
    if (ctx->pc == 0x4DB46Cu) {
        ctx->pc = 0x4DB46Cu;
            // 0x4db46c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DB470u;
        goto label_4db470;
    }
    ctx->pc = 0x4DB468u;
    SET_GPR_U32(ctx, 31, 0x4DB470u);
    ctx->pc = 0x4DB46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB468u;
            // 0x4db46c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB470u; }
        if (ctx->pc != 0x4DB470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB470u; }
        if (ctx->pc != 0x4DB470u) { return; }
    }
    ctx->pc = 0x4DB470u;
label_4db470:
    // 0x4db470: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4db470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4db474:
    // 0x4db474: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4db474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4db478:
    // 0x4db478: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4db478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4db47c:
    // 0x4db47c: 0x320f809  jalr        $t9
label_4db480:
    if (ctx->pc == 0x4DB480u) {
        ctx->pc = 0x4DB480u;
            // 0x4db480: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4DB484u;
        goto label_4db484;
    }
    ctx->pc = 0x4DB47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DB484u);
        ctx->pc = 0x4DB480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB47Cu;
            // 0x4db480: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DB484u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DB484u; }
            if (ctx->pc != 0x4DB484u) { return; }
        }
        }
    }
    ctx->pc = 0x4DB484u;
label_4db484:
    // 0x4db484: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4db484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4db488:
    // 0x4db488: 0xc603013c  lwc1        $f3, 0x13C($s0)
    ctx->pc = 0x4db488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4db48c:
    // 0x4db48c: 0xc6020138  lwc1        $f2, 0x138($s0)
    ctx->pc = 0x4db48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4db490:
    // 0x4db490: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4db490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4db494:
    // 0x4db494: 0xc6010134  lwc1        $f1, 0x134($s0)
    ctx->pc = 0x4db494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4db498:
    // 0x4db498: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x4db498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4db49c:
    // 0x4db49c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4db49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4db4a0:
    // 0x4db4a0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4db4a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4db4a4:
    // 0x4db4a4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4db4a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4db4a8:
    // 0x4db4a8: 0xc0892a0  jal         func_224A80
label_4db4ac:
    if (ctx->pc == 0x4DB4ACu) {
        ctx->pc = 0x4DB4ACu;
            // 0x4db4ac: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4DB4B0u;
        goto label_4db4b0;
    }
    ctx->pc = 0x4DB4A8u;
    SET_GPR_U32(ctx, 31, 0x4DB4B0u);
    ctx->pc = 0x4DB4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB4A8u;
            // 0x4db4ac: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB4B0u; }
        if (ctx->pc != 0x4DB4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A80_0x224a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB4B0u; }
        if (ctx->pc != 0x4DB4B0u) { return; }
    }
    ctx->pc = 0x4DB4B0u;
label_4db4b0:
    // 0x4db4b0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4db4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4db4b4:
    // 0x4db4b4: 0xc6020128  lwc1        $f2, 0x128($s0)
    ctx->pc = 0x4db4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4db4b8:
    // 0x4db4b8: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x4db4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4db4bc:
    // 0x4db4bc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x4db4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4db4c0:
    // 0x4db4c0: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x4db4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4db4c4:
    // 0x4db4c4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4db4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4db4c8:
    // 0x4db4c8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x4db4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_4db4cc:
    // 0x4db4cc: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4db4ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4db4d0:
    // 0x4db4d0: 0xc089290  jal         func_224A40
label_4db4d4:
    if (ctx->pc == 0x4DB4D4u) {
        ctx->pc = 0x4DB4D4u;
            // 0x4db4d4: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x4DB4D8u;
        goto label_4db4d8;
    }
    ctx->pc = 0x4DB4D0u;
    SET_GPR_U32(ctx, 31, 0x4DB4D8u);
    ctx->pc = 0x4DB4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB4D0u;
            // 0x4db4d4: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB4D8u; }
        if (ctx->pc != 0x4DB4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB4D8u; }
        if (ctx->pc != 0x4DB4D8u) { return; }
    }
    ctx->pc = 0x4DB4D8u;
label_4db4d8:
    // 0x4db4d8: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x4db4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4db4dc:
    // 0x4db4dc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x4db4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_4db4e0:
    // 0x4db4e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4db4e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4db4e4:
    // 0x4db4e4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4db4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4db4e8:
    // 0x4db4e8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4db4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4db4ec:
    // 0x4db4ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4db4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4db4f0:
    // 0x4db4f0: 0xe60100f0  swc1        $f1, 0xF0($s0)
    ctx->pc = 0x4db4f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
label_4db4f4:
    // 0x4db4f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4db4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4db4f8:
    // 0x4db4f8: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x4db4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4db4fc:
    // 0x4db4fc: 0xe60100f4  swc1        $f1, 0xF4($s0)
    ctx->pc = 0x4db4fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_4db500:
    // 0x4db500: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x4db500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4db504:
    // 0x4db504: 0xe60100f8  swc1        $f1, 0xF8($s0)
    ctx->pc = 0x4db504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
label_4db508:
    // 0x4db508: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x4db508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_4db50c:
    // 0x4db50c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x4db50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_4db510:
    // 0x4db510: 0x8c8464b8  lw          $a0, 0x64B8($a0)
    ctx->pc = 0x4db510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25784)));
label_4db514:
    // 0x4db514: 0x8c840098  lw          $a0, 0x98($a0)
    ctx->pc = 0x4db514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_4db518:
    // 0x4db518: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x4db518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4db51c:
    // 0x4db51c: 0xe60100e8  swc1        $f1, 0xE8($s0)
    ctx->pc = 0x4db51cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_4db520:
    // 0x4db520: 0x8c6364b8  lw          $v1, 0x64B8($v1)
    ctx->pc = 0x4db520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25784)));
label_4db524:
    // 0x4db524: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x4db524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_4db528:
    // 0x4db528: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4db528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4db52c:
    // 0x4db52c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4db52cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4db530:
    // 0x4db530: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x4db530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
label_4db534:
    // 0x4db534: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x4db534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
label_4db538:
    // 0x4db538: 0xa2060100  sb          $a2, 0x100($s0)
    ctx->pc = 0x4db538u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 256), (uint8_t)GPR_U32(ctx, 6));
label_4db53c:
    // 0x4db53c: 0xa2050064  sb          $a1, 0x64($s0)
    ctx->pc = 0x4db53cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 5));
label_4db540:
    // 0x4db540: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x4db540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_4db544:
    // 0x4db544: 0xa2050066  sb          $a1, 0x66($s0)
    ctx->pc = 0x4db544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 5));
label_4db548:
    // 0x4db548: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x4db548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
label_4db54c:
    // 0x4db54c: 0xa2050068  sb          $a1, 0x68($s0)
    ctx->pc = 0x4db54cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 5));
label_4db550:
    // 0x4db550: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x4db550u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_4db554:
    // 0x4db554: 0xa205006a  sb          $a1, 0x6A($s0)
    ctx->pc = 0x4db554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 5));
label_4db558:
    // 0x4db558: 0xa200006b  sb          $zero, 0x6B($s0)
    ctx->pc = 0x4db558u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 0));
label_4db55c:
    // 0x4db55c: 0xa20600d1  sb          $a2, 0xD1($s0)
    ctx->pc = 0x4db55cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 6));
label_4db560:
    // 0x4db560: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4db560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4db564:
    // 0x4db564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4db564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4db568:
    // 0x4db568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4db568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4db56c:
    // 0x4db56c: 0x3e00008  jr          $ra
label_4db570:
    if (ctx->pc == 0x4DB570u) {
        ctx->pc = 0x4DB570u;
            // 0x4db570: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4DB574u;
        goto label_4db574;
    }
    ctx->pc = 0x4DB56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB56Cu;
            // 0x4db570: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DB574u;
label_4db574:
    // 0x4db574: 0x0  nop
    ctx->pc = 0x4db574u;
    // NOP
label_4db578:
    // 0x4db578: 0x0  nop
    ctx->pc = 0x4db578u;
    // NOP
label_4db57c:
    // 0x4db57c: 0x0  nop
    ctx->pc = 0x4db57cu;
    // NOP
}
