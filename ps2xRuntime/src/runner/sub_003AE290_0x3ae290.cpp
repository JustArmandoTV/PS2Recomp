#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AE290
// Address: 0x3ae290 - 0x3ae680
void sub_003AE290_0x3ae290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE290_0x3ae290");
#endif

    switch (ctx->pc) {
        case 0x3ae290u: goto label_3ae290;
        case 0x3ae294u: goto label_3ae294;
        case 0x3ae298u: goto label_3ae298;
        case 0x3ae29cu: goto label_3ae29c;
        case 0x3ae2a0u: goto label_3ae2a0;
        case 0x3ae2a4u: goto label_3ae2a4;
        case 0x3ae2a8u: goto label_3ae2a8;
        case 0x3ae2acu: goto label_3ae2ac;
        case 0x3ae2b0u: goto label_3ae2b0;
        case 0x3ae2b4u: goto label_3ae2b4;
        case 0x3ae2b8u: goto label_3ae2b8;
        case 0x3ae2bcu: goto label_3ae2bc;
        case 0x3ae2c0u: goto label_3ae2c0;
        case 0x3ae2c4u: goto label_3ae2c4;
        case 0x3ae2c8u: goto label_3ae2c8;
        case 0x3ae2ccu: goto label_3ae2cc;
        case 0x3ae2d0u: goto label_3ae2d0;
        case 0x3ae2d4u: goto label_3ae2d4;
        case 0x3ae2d8u: goto label_3ae2d8;
        case 0x3ae2dcu: goto label_3ae2dc;
        case 0x3ae2e0u: goto label_3ae2e0;
        case 0x3ae2e4u: goto label_3ae2e4;
        case 0x3ae2e8u: goto label_3ae2e8;
        case 0x3ae2ecu: goto label_3ae2ec;
        case 0x3ae2f0u: goto label_3ae2f0;
        case 0x3ae2f4u: goto label_3ae2f4;
        case 0x3ae2f8u: goto label_3ae2f8;
        case 0x3ae2fcu: goto label_3ae2fc;
        case 0x3ae300u: goto label_3ae300;
        case 0x3ae304u: goto label_3ae304;
        case 0x3ae308u: goto label_3ae308;
        case 0x3ae30cu: goto label_3ae30c;
        case 0x3ae310u: goto label_3ae310;
        case 0x3ae314u: goto label_3ae314;
        case 0x3ae318u: goto label_3ae318;
        case 0x3ae31cu: goto label_3ae31c;
        case 0x3ae320u: goto label_3ae320;
        case 0x3ae324u: goto label_3ae324;
        case 0x3ae328u: goto label_3ae328;
        case 0x3ae32cu: goto label_3ae32c;
        case 0x3ae330u: goto label_3ae330;
        case 0x3ae334u: goto label_3ae334;
        case 0x3ae338u: goto label_3ae338;
        case 0x3ae33cu: goto label_3ae33c;
        case 0x3ae340u: goto label_3ae340;
        case 0x3ae344u: goto label_3ae344;
        case 0x3ae348u: goto label_3ae348;
        case 0x3ae34cu: goto label_3ae34c;
        case 0x3ae350u: goto label_3ae350;
        case 0x3ae354u: goto label_3ae354;
        case 0x3ae358u: goto label_3ae358;
        case 0x3ae35cu: goto label_3ae35c;
        case 0x3ae360u: goto label_3ae360;
        case 0x3ae364u: goto label_3ae364;
        case 0x3ae368u: goto label_3ae368;
        case 0x3ae36cu: goto label_3ae36c;
        case 0x3ae370u: goto label_3ae370;
        case 0x3ae374u: goto label_3ae374;
        case 0x3ae378u: goto label_3ae378;
        case 0x3ae37cu: goto label_3ae37c;
        case 0x3ae380u: goto label_3ae380;
        case 0x3ae384u: goto label_3ae384;
        case 0x3ae388u: goto label_3ae388;
        case 0x3ae38cu: goto label_3ae38c;
        case 0x3ae390u: goto label_3ae390;
        case 0x3ae394u: goto label_3ae394;
        case 0x3ae398u: goto label_3ae398;
        case 0x3ae39cu: goto label_3ae39c;
        case 0x3ae3a0u: goto label_3ae3a0;
        case 0x3ae3a4u: goto label_3ae3a4;
        case 0x3ae3a8u: goto label_3ae3a8;
        case 0x3ae3acu: goto label_3ae3ac;
        case 0x3ae3b0u: goto label_3ae3b0;
        case 0x3ae3b4u: goto label_3ae3b4;
        case 0x3ae3b8u: goto label_3ae3b8;
        case 0x3ae3bcu: goto label_3ae3bc;
        case 0x3ae3c0u: goto label_3ae3c0;
        case 0x3ae3c4u: goto label_3ae3c4;
        case 0x3ae3c8u: goto label_3ae3c8;
        case 0x3ae3ccu: goto label_3ae3cc;
        case 0x3ae3d0u: goto label_3ae3d0;
        case 0x3ae3d4u: goto label_3ae3d4;
        case 0x3ae3d8u: goto label_3ae3d8;
        case 0x3ae3dcu: goto label_3ae3dc;
        case 0x3ae3e0u: goto label_3ae3e0;
        case 0x3ae3e4u: goto label_3ae3e4;
        case 0x3ae3e8u: goto label_3ae3e8;
        case 0x3ae3ecu: goto label_3ae3ec;
        case 0x3ae3f0u: goto label_3ae3f0;
        case 0x3ae3f4u: goto label_3ae3f4;
        case 0x3ae3f8u: goto label_3ae3f8;
        case 0x3ae3fcu: goto label_3ae3fc;
        case 0x3ae400u: goto label_3ae400;
        case 0x3ae404u: goto label_3ae404;
        case 0x3ae408u: goto label_3ae408;
        case 0x3ae40cu: goto label_3ae40c;
        case 0x3ae410u: goto label_3ae410;
        case 0x3ae414u: goto label_3ae414;
        case 0x3ae418u: goto label_3ae418;
        case 0x3ae41cu: goto label_3ae41c;
        case 0x3ae420u: goto label_3ae420;
        case 0x3ae424u: goto label_3ae424;
        case 0x3ae428u: goto label_3ae428;
        case 0x3ae42cu: goto label_3ae42c;
        case 0x3ae430u: goto label_3ae430;
        case 0x3ae434u: goto label_3ae434;
        case 0x3ae438u: goto label_3ae438;
        case 0x3ae43cu: goto label_3ae43c;
        case 0x3ae440u: goto label_3ae440;
        case 0x3ae444u: goto label_3ae444;
        case 0x3ae448u: goto label_3ae448;
        case 0x3ae44cu: goto label_3ae44c;
        case 0x3ae450u: goto label_3ae450;
        case 0x3ae454u: goto label_3ae454;
        case 0x3ae458u: goto label_3ae458;
        case 0x3ae45cu: goto label_3ae45c;
        case 0x3ae460u: goto label_3ae460;
        case 0x3ae464u: goto label_3ae464;
        case 0x3ae468u: goto label_3ae468;
        case 0x3ae46cu: goto label_3ae46c;
        case 0x3ae470u: goto label_3ae470;
        case 0x3ae474u: goto label_3ae474;
        case 0x3ae478u: goto label_3ae478;
        case 0x3ae47cu: goto label_3ae47c;
        case 0x3ae480u: goto label_3ae480;
        case 0x3ae484u: goto label_3ae484;
        case 0x3ae488u: goto label_3ae488;
        case 0x3ae48cu: goto label_3ae48c;
        case 0x3ae490u: goto label_3ae490;
        case 0x3ae494u: goto label_3ae494;
        case 0x3ae498u: goto label_3ae498;
        case 0x3ae49cu: goto label_3ae49c;
        case 0x3ae4a0u: goto label_3ae4a0;
        case 0x3ae4a4u: goto label_3ae4a4;
        case 0x3ae4a8u: goto label_3ae4a8;
        case 0x3ae4acu: goto label_3ae4ac;
        case 0x3ae4b0u: goto label_3ae4b0;
        case 0x3ae4b4u: goto label_3ae4b4;
        case 0x3ae4b8u: goto label_3ae4b8;
        case 0x3ae4bcu: goto label_3ae4bc;
        case 0x3ae4c0u: goto label_3ae4c0;
        case 0x3ae4c4u: goto label_3ae4c4;
        case 0x3ae4c8u: goto label_3ae4c8;
        case 0x3ae4ccu: goto label_3ae4cc;
        case 0x3ae4d0u: goto label_3ae4d0;
        case 0x3ae4d4u: goto label_3ae4d4;
        case 0x3ae4d8u: goto label_3ae4d8;
        case 0x3ae4dcu: goto label_3ae4dc;
        case 0x3ae4e0u: goto label_3ae4e0;
        case 0x3ae4e4u: goto label_3ae4e4;
        case 0x3ae4e8u: goto label_3ae4e8;
        case 0x3ae4ecu: goto label_3ae4ec;
        case 0x3ae4f0u: goto label_3ae4f0;
        case 0x3ae4f4u: goto label_3ae4f4;
        case 0x3ae4f8u: goto label_3ae4f8;
        case 0x3ae4fcu: goto label_3ae4fc;
        case 0x3ae500u: goto label_3ae500;
        case 0x3ae504u: goto label_3ae504;
        case 0x3ae508u: goto label_3ae508;
        case 0x3ae50cu: goto label_3ae50c;
        case 0x3ae510u: goto label_3ae510;
        case 0x3ae514u: goto label_3ae514;
        case 0x3ae518u: goto label_3ae518;
        case 0x3ae51cu: goto label_3ae51c;
        case 0x3ae520u: goto label_3ae520;
        case 0x3ae524u: goto label_3ae524;
        case 0x3ae528u: goto label_3ae528;
        case 0x3ae52cu: goto label_3ae52c;
        case 0x3ae530u: goto label_3ae530;
        case 0x3ae534u: goto label_3ae534;
        case 0x3ae538u: goto label_3ae538;
        case 0x3ae53cu: goto label_3ae53c;
        case 0x3ae540u: goto label_3ae540;
        case 0x3ae544u: goto label_3ae544;
        case 0x3ae548u: goto label_3ae548;
        case 0x3ae54cu: goto label_3ae54c;
        case 0x3ae550u: goto label_3ae550;
        case 0x3ae554u: goto label_3ae554;
        case 0x3ae558u: goto label_3ae558;
        case 0x3ae55cu: goto label_3ae55c;
        case 0x3ae560u: goto label_3ae560;
        case 0x3ae564u: goto label_3ae564;
        case 0x3ae568u: goto label_3ae568;
        case 0x3ae56cu: goto label_3ae56c;
        case 0x3ae570u: goto label_3ae570;
        case 0x3ae574u: goto label_3ae574;
        case 0x3ae578u: goto label_3ae578;
        case 0x3ae57cu: goto label_3ae57c;
        case 0x3ae580u: goto label_3ae580;
        case 0x3ae584u: goto label_3ae584;
        case 0x3ae588u: goto label_3ae588;
        case 0x3ae58cu: goto label_3ae58c;
        case 0x3ae590u: goto label_3ae590;
        case 0x3ae594u: goto label_3ae594;
        case 0x3ae598u: goto label_3ae598;
        case 0x3ae59cu: goto label_3ae59c;
        case 0x3ae5a0u: goto label_3ae5a0;
        case 0x3ae5a4u: goto label_3ae5a4;
        case 0x3ae5a8u: goto label_3ae5a8;
        case 0x3ae5acu: goto label_3ae5ac;
        case 0x3ae5b0u: goto label_3ae5b0;
        case 0x3ae5b4u: goto label_3ae5b4;
        case 0x3ae5b8u: goto label_3ae5b8;
        case 0x3ae5bcu: goto label_3ae5bc;
        case 0x3ae5c0u: goto label_3ae5c0;
        case 0x3ae5c4u: goto label_3ae5c4;
        case 0x3ae5c8u: goto label_3ae5c8;
        case 0x3ae5ccu: goto label_3ae5cc;
        case 0x3ae5d0u: goto label_3ae5d0;
        case 0x3ae5d4u: goto label_3ae5d4;
        case 0x3ae5d8u: goto label_3ae5d8;
        case 0x3ae5dcu: goto label_3ae5dc;
        case 0x3ae5e0u: goto label_3ae5e0;
        case 0x3ae5e4u: goto label_3ae5e4;
        case 0x3ae5e8u: goto label_3ae5e8;
        case 0x3ae5ecu: goto label_3ae5ec;
        case 0x3ae5f0u: goto label_3ae5f0;
        case 0x3ae5f4u: goto label_3ae5f4;
        case 0x3ae5f8u: goto label_3ae5f8;
        case 0x3ae5fcu: goto label_3ae5fc;
        case 0x3ae600u: goto label_3ae600;
        case 0x3ae604u: goto label_3ae604;
        case 0x3ae608u: goto label_3ae608;
        case 0x3ae60cu: goto label_3ae60c;
        case 0x3ae610u: goto label_3ae610;
        case 0x3ae614u: goto label_3ae614;
        case 0x3ae618u: goto label_3ae618;
        case 0x3ae61cu: goto label_3ae61c;
        case 0x3ae620u: goto label_3ae620;
        case 0x3ae624u: goto label_3ae624;
        case 0x3ae628u: goto label_3ae628;
        case 0x3ae62cu: goto label_3ae62c;
        case 0x3ae630u: goto label_3ae630;
        case 0x3ae634u: goto label_3ae634;
        case 0x3ae638u: goto label_3ae638;
        case 0x3ae63cu: goto label_3ae63c;
        case 0x3ae640u: goto label_3ae640;
        case 0x3ae644u: goto label_3ae644;
        case 0x3ae648u: goto label_3ae648;
        case 0x3ae64cu: goto label_3ae64c;
        case 0x3ae650u: goto label_3ae650;
        case 0x3ae654u: goto label_3ae654;
        case 0x3ae658u: goto label_3ae658;
        case 0x3ae65cu: goto label_3ae65c;
        case 0x3ae660u: goto label_3ae660;
        case 0x3ae664u: goto label_3ae664;
        case 0x3ae668u: goto label_3ae668;
        case 0x3ae66cu: goto label_3ae66c;
        case 0x3ae670u: goto label_3ae670;
        case 0x3ae674u: goto label_3ae674;
        case 0x3ae678u: goto label_3ae678;
        case 0x3ae67cu: goto label_3ae67c;
        default: break;
    }

    ctx->pc = 0x3ae290u;

label_3ae290:
    // 0x3ae290: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3ae290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3ae294:
    // 0x3ae294: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3ae294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_3ae298:
    // 0x3ae298: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3ae298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3ae29c:
    // 0x3ae29c: 0x2442a3e0  addiu       $v0, $v0, -0x5C20
    ctx->pc = 0x3ae29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943712));
label_3ae2a0:
    // 0x3ae2a0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3ae2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3ae2a4:
    // 0x3ae2a4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3ae2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3ae2a8:
    // 0x3ae2a8: 0x3c1e0067  lui         $fp, 0x67
    ctx->pc = 0x3ae2a8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)103 << 16));
label_3ae2ac:
    // 0x3ae2ac: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3ae2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3ae2b0:
    // 0x3ae2b0: 0x3c170064  lui         $s7, 0x64
    ctx->pc = 0x3ae2b0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)100 << 16));
label_3ae2b4:
    // 0x3ae2b4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3ae2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3ae2b8:
    // 0x3ae2b8: 0x27dea2a0  addiu       $fp, $fp, -0x5D60
    ctx->pc = 0x3ae2b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294943392));
label_3ae2bc:
    // 0x3ae2bc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ae2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3ae2c0:
    // 0x3ae2c0: 0x26f72120  addiu       $s7, $s7, 0x2120
    ctx->pc = 0x3ae2c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8480));
label_3ae2c4:
    // 0x3ae2c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ae2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3ae2c8:
    // 0x3ae2c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ae2c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ae2cc:
    // 0x3ae2cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ae2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3ae2d0:
    // 0x3ae2d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3ae2d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ae2d4:
    // 0x3ae2d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ae2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3ae2d8:
    // 0x3ae2d8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3ae2d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ae2dc:
    // 0x3ae2dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ae2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3ae2e0:
    // 0x3ae2e0: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x3ae2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_3ae2e4:
    // 0x3ae2e4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3ae2e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3ae2e8:
    // 0x3ae2e8: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3ae2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3ae2ec:
    // 0x3ae2ec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ae2ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3ae2f0:
    // 0x3ae2f0: 0xafa900f8  sw          $t1, 0xF8($sp)
    ctx->pc = 0x3ae2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 9));
label_3ae2f4:
    // 0x3ae2f4: 0x8d030d70  lw          $v1, 0xD70($t0)
    ctx->pc = 0x3ae2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3440)));
label_3ae2f8:
    // 0x3ae2f8: 0x2631211c  addiu       $s1, $s1, 0x211C
    ctx->pc = 0x3ae2f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8476));
label_3ae2fc:
    // 0x3ae2fc: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x3ae2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3ae300:
    // 0x3ae300: 0xafa800fc  sw          $t0, 0xFC($sp)
    ctx->pc = 0x3ae300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 8));
label_3ae304:
    // 0x3ae304: 0x246200e8  addiu       $v0, $v1, 0xE8
    ctx->pc = 0x3ae304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
label_3ae308:
    // 0x3ae308: 0x8c650104  lw          $a1, 0x104($v1)
    ctx->pc = 0x3ae308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_3ae30c:
    // 0x3ae30c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3ae30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ae310:
    // 0x3ae310: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3ae310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3ae314:
    // 0x3ae314: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x3ae314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
label_3ae318:
    // 0x3ae318: 0x24b5ffff  addiu       $s5, $a1, -0x1
    ctx->pc = 0x3ae318u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3ae31c:
    // 0x3ae31c: 0x90960116  lbu         $s6, 0x116($a0)
    ctx->pc = 0x3ae31cu;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 278)));
label_3ae320:
    // 0x3ae320: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3ae320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3ae324:
    // 0x3ae324: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ae324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ae328:
    // 0x3ae328: 0x8c6489e0  lw          $a0, -0x7620($v1)
    ctx->pc = 0x3ae328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_3ae32c:
    // 0x3ae32c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ae32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ae330:
    // 0x3ae330: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ae330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ae334:
    // 0x3ae334: 0x320f809  jalr        $t9
label_3ae338:
    if (ctx->pc == 0x3AE338u) {
        ctx->pc = 0x3AE338u;
            // 0x3ae338: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->pc = 0x3AE33Cu;
        goto label_3ae33c;
    }
    ctx->pc = 0x3AE334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AE33Cu);
        ctx->pc = 0x3AE338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE334u;
            // 0x3ae338: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AE33Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AE33Cu; }
            if (ctx->pc != 0x3AE33Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3AE33Cu;
label_3ae33c:
    // 0x3ae33c: 0x6a2005a  bltzl       $s5, . + 4 + (0x5A << 2)
label_3ae340:
    if (ctx->pc == 0x3AE340u) {
        ctx->pc = 0x3AE340u;
            // 0x3ae340: 0x7ba300b0  lq          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x3AE344u;
        goto label_3ae344;
    }
    ctx->pc = 0x3AE33Cu;
    {
        const bool branch_taken_0x3ae33c = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x3ae33c) {
            ctx->pc = 0x3AE340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE33Cu;
            // 0x3ae340: 0x7ba300b0  lq          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AE4A8u;
            goto label_3ae4a8;
        }
    }
    ctx->pc = 0x3AE344u;
label_3ae344:
    // 0x3ae344: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x3ae344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ae348:
    // 0x3ae348: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x3ae348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_3ae34c:
    // 0x3ae34c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3ae34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ae350:
    // 0x3ae350: 0x8c55000c  lw          $s5, 0xC($v0)
    ctx->pc = 0x3ae350u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3ae354:
    // 0x3ae354: 0x2aa1000e  slti        $at, $s5, 0xE
    ctx->pc = 0x3ae354u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)14) ? 1 : 0);
label_3ae358:
    // 0x3ae358: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_3ae35c:
    if (ctx->pc == 0x3AE35Cu) {
        ctx->pc = 0x3AE360u;
        goto label_3ae360;
    }
    ctx->pc = 0x3AE358u;
    {
        const bool branch_taken_0x3ae358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae358) {
            ctx->pc = 0x3AE388u;
            goto label_3ae388;
        }
    }
    ctx->pc = 0x3AE360u;
label_3ae360:
    // 0x3ae360: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ae360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ae364:
    // 0x3ae364: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3ae364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3ae368:
    // 0x3ae368: 0xc0506ac  jal         func_141AB0
label_3ae36c:
    if (ctx->pc == 0x3AE36Cu) {
        ctx->pc = 0x3AE36Cu;
            // 0x3ae36c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x3AE370u;
        goto label_3ae370;
    }
    ctx->pc = 0x3AE368u;
    SET_GPR_U32(ctx, 31, 0x3AE370u);
    ctx->pc = 0x3AE36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE368u;
            // 0x3ae36c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE370u; }
        if (ctx->pc != 0x3AE370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE370u; }
        if (ctx->pc != 0x3AE370u) { return; }
    }
    ctx->pc = 0x3AE370u;
label_3ae370:
    // 0x3ae370: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x3ae370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3ae374:
    // 0x3ae374: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ae374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3ae378:
    // 0x3ae378: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x3ae378u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ae37c:
    // 0x3ae37c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x3ae37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_3ae380:
    // 0x3ae380: 0x1000000b  b           . + 4 + (0xB << 2)
label_3ae384:
    if (ctx->pc == 0x3AE384u) {
        ctx->pc = 0x3AE384u;
            // 0x3ae384: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x3AE388u;
        goto label_3ae388;
    }
    ctx->pc = 0x3AE380u;
    {
        const bool branch_taken_0x3ae380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE380u;
            // 0x3ae384: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae380) {
            ctx->pc = 0x3AE3B0u;
            goto label_3ae3b0;
        }
    }
    ctx->pc = 0x3AE388u;
label_3ae388:
    // 0x3ae388: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ae388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ae38c:
    // 0x3ae38c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3ae38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3ae390:
    // 0x3ae390: 0xc0506ac  jal         func_141AB0
label_3ae394:
    if (ctx->pc == 0x3AE394u) {
        ctx->pc = 0x3AE394u;
            // 0x3ae394: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3AE398u;
        goto label_3ae398;
    }
    ctx->pc = 0x3AE390u;
    SET_GPR_U32(ctx, 31, 0x3AE398u);
    ctx->pc = 0x3AE394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE390u;
            // 0x3ae394: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE398u; }
        if (ctx->pc != 0x3AE398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE398u; }
        if (ctx->pc != 0x3AE398u) { return; }
    }
    ctx->pc = 0x3AE398u;
label_3ae398:
    // 0x3ae398: 0x26a2fff2  addiu       $v0, $s5, -0xE
    ctx->pc = 0x3ae398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967282));
label_3ae39c:
    // 0x3ae39c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3ae39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3ae3a0:
    // 0x3ae3a0: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x3ae3a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3ae3a4:
    // 0x3ae3a4: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x3ae3a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3ae3a8:
    // 0x3ae3a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ae3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ae3ac:
    // 0x3ae3ac: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3ae3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_3ae3b0:
    // 0x3ae3b0: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x3ae3b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_3ae3b4:
    // 0x3ae3b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ae3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ae3b8:
    // 0x3ae3b8: 0x82050050  lb          $a1, 0x50($s0)
    ctx->pc = 0x3ae3b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_3ae3bc:
    // 0x3ae3bc: 0x92040051  lbu         $a0, 0x51($s0)
    ctx->pc = 0x3ae3bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 81)));
label_3ae3c0:
    // 0x3ae3c0: 0x723018  mult        $a2, $v1, $s2
    ctx->pc = 0x3ae3c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3ae3c4:
    // 0x3ae3c4: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x3ae3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_3ae3c8:
    // 0x3ae3c8: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x3ae3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3ae3cc:
    // 0x3ae3cc: 0x86030024  lh          $v1, 0x24($s0)
    ctx->pc = 0x3ae3ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_3ae3d0:
    // 0x3ae3d0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x3ae3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ae3d4:
    // 0x3ae3d4: 0x2862021  addu        $a0, $s4, $a2
    ctx->pc = 0x3ae3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_3ae3d8:
    // 0x3ae3d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ae3d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae3dc:
    // 0x3ae3dc: 0x0  nop
    ctx->pc = 0x3ae3dcu;
    // NOP
label_3ae3e0:
    // 0x3ae3e0: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x3ae3e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_3ae3e4:
    // 0x3ae3e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ae3e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae3e8:
    // 0x3ae3e8: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
label_3ae3ec:
    if (ctx->pc == 0x3AE3ECu) {
        ctx->pc = 0x3AE3ECu;
            // 0x3ae3ec: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3AE3F0u;
        goto label_3ae3f0;
    }
    ctx->pc = 0x3AE3E8u;
    {
        const bool branch_taken_0x3ae3e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AE3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE3E8u;
            // 0x3ae3ec: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae3e8) {
            ctx->pc = 0x3AE404u;
            goto label_3ae404;
        }
    }
    ctx->pc = 0x3AE3F0u;
label_3ae3f0:
    // 0x3ae3f0: 0x86020020  lh          $v0, 0x20($s0)
    ctx->pc = 0x3ae3f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_3ae3f4:
    // 0x3ae3f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ae3f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae3f8:
    // 0x3ae3f8: 0x0  nop
    ctx->pc = 0x3ae3f8u;
    // NOP
label_3ae3fc:
    // 0x3ae3fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ae3fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ae400:
    // 0x3ae400: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x3ae400u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_3ae404:
    // 0x3ae404: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ae404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ae408:
    // 0x3ae408: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ae408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ae40c:
    // 0x3ae40c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ae40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ae410:
    // 0x3ae410: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3ae410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3ae414:
    // 0x3ae414: 0x320f809  jalr        $t9
label_3ae418:
    if (ctx->pc == 0x3AE418u) {
        ctx->pc = 0x3AE418u;
            // 0x3ae418: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3AE41Cu;
        goto label_3ae41c;
    }
    ctx->pc = 0x3AE414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AE41Cu);
        ctx->pc = 0x3AE418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE414u;
            // 0x3ae418: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AE41Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AE41Cu; }
            if (ctx->pc != 0x3AE41Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3AE41Cu;
label_3ae41c:
    // 0x3ae41c: 0x86040022  lh          $a0, 0x22($s0)
    ctx->pc = 0x3ae41cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
label_3ae420:
    // 0x3ae420: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x3ae420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_3ae424:
    // 0x3ae424: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3ae424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3ae428:
    // 0x3ae428: 0x86090020  lh          $t1, 0x20($s0)
    ctx->pc = 0x3ae428u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_3ae42c:
    // 0x3ae42c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3ae42cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ae430:
    // 0x3ae430: 0x86a80000  lh          $t0, 0x0($s5)
    ctx->pc = 0x3ae430u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_3ae434:
    // 0x3ae434: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ae434u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae438:
    // 0x3ae438: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ae438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3ae43c:
    // 0x3ae43c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ae43cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ae440:
    // 0x3ae440: 0x86a30002  lh          $v1, 0x2($s5)
    ctx->pc = 0x3ae440u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_3ae444:
    // 0x3ae444: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x3ae444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3ae448:
    // 0x3ae448: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ae448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ae44c:
    // 0x3ae44c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ae44cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ae450:
    // 0x3ae450: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x3ae450u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3ae454:
    // 0x3ae454: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3ae454u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae458:
    // 0x3ae458: 0x0  nop
    ctx->pc = 0x3ae458u;
    // NOP
label_3ae45c:
    // 0x3ae45c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ae45cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ae460:
    // 0x3ae460: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3ae460u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3ae464:
    // 0x3ae464: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3ae464u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae468:
    // 0x3ae468: 0x0  nop
    ctx->pc = 0x3ae468u;
    // NOP
label_3ae46c:
    // 0x3ae46c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ae46cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3ae470:
    // 0x3ae470: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ae470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae474:
    // 0x3ae474: 0x0  nop
    ctx->pc = 0x3ae474u;
    // NOP
label_3ae478:
    // 0x3ae478: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ae478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3ae47c:
    // 0x3ae47c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3ae47cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3ae480:
    // 0x3ae480: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3ae480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3ae484:
    // 0x3ae484: 0xc0bc284  jal         func_2F0A10
label_3ae488:
    if (ctx->pc == 0x3AE488u) {
        ctx->pc = 0x3AE488u;
            // 0x3ae488: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3AE48Cu;
        goto label_3ae48c;
    }
    ctx->pc = 0x3AE484u;
    SET_GPR_U32(ctx, 31, 0x3AE48Cu);
    ctx->pc = 0x3AE488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE484u;
            // 0x3ae488: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE48Cu; }
        if (ctx->pc != 0x3AE48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE48Cu; }
        if (ctx->pc != 0x3AE48Cu) { return; }
    }
    ctx->pc = 0x3AE48Cu;
label_3ae48c:
    // 0x3ae48c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ae48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ae490:
    // 0x3ae490: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ae490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ae494:
    // 0x3ae494: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ae494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ae498:
    // 0x3ae498: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ae498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ae49c:
    // 0x3ae49c: 0x320f809  jalr        $t9
label_3ae4a0:
    if (ctx->pc == 0x3AE4A0u) {
        ctx->pc = 0x3AE4A4u;
        goto label_3ae4a4;
    }
    ctx->pc = 0x3AE49Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AE4A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AE4A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AE4A4u; }
            if (ctx->pc != 0x3AE4A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3AE4A4u;
label_3ae4a4:
    // 0x3ae4a4: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3ae4a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3ae4a8:
    // 0x3ae4a8: 0x4620067  bltzl       $v1, . + 4 + (0x67 << 2)
label_3ae4ac:
    if (ctx->pc == 0x3AE4ACu) {
        ctx->pc = 0x3AE4ACu;
            // 0x3ae4ac: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3AE4B0u;
        goto label_3ae4b0;
    }
    ctx->pc = 0x3AE4A8u;
    {
        const bool branch_taken_0x3ae4a8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3ae4a8) {
            ctx->pc = 0x3AE4ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE4A8u;
            // 0x3ae4ac: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AE648u;
            goto label_3ae648;
        }
    }
    ctx->pc = 0x3AE4B0u;
label_3ae4b0:
    // 0x3ae4b0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x3ae4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_3ae4b4:
    // 0x3ae4b4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3ae4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3ae4b8:
    // 0x3ae4b8: 0x9044000d  lbu         $a0, 0xD($v0)
    ctx->pc = 0x3ae4b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
label_3ae4bc:
    // 0x3ae4bc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3ae4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ae4c0:
    // 0x3ae4c0: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x3ae4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_3ae4c4:
    // 0x3ae4c4: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x3ae4c4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ae4c8:
    // 0x3ae4c8: 0x55082a  slt         $at, $v0, $s5
    ctx->pc = 0x3ae4c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_3ae4cc:
    // 0x3ae4cc: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_3ae4d0:
    if (ctx->pc == 0x3AE4D0u) {
        ctx->pc = 0x3AE4D0u;
            // 0x3ae4d0: 0x82040050  lb          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x3AE4D4u;
        goto label_3ae4d4;
    }
    ctx->pc = 0x3AE4CCu;
    {
        const bool branch_taken_0x3ae4cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae4cc) {
            ctx->pc = 0x3AE4D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE4CCu;
            // 0x3ae4d0: 0x82040050  lb          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AE4DCu;
            goto label_3ae4dc;
        }
    }
    ctx->pc = 0x3AE4D4u;
label_3ae4d4:
    // 0x3ae4d4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3ae4d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ae4d8:
    // 0x3ae4d8: 0x82040050  lb          $a0, 0x50($s0)
    ctx->pc = 0x3ae4d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_3ae4dc:
    // 0x3ae4dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ae4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ae4e0:
    // 0x3ae4e0: 0x86050024  lh          $a1, 0x24($s0)
    ctx->pc = 0x3ae4e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_3ae4e4:
    // 0x3ae4e4: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x3ae4e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_3ae4e8:
    // 0x3ae4e8: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x3ae4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_3ae4ec:
    // 0x3ae4ec: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3ae4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3ae4f0:
    // 0x3ae4f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ae4f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae4f4:
    // 0x3ae4f4: 0x0  nop
    ctx->pc = 0x3ae4f4u;
    // NOP
label_3ae4f8:
    // 0x3ae4f8: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x3ae4f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3ae4fc:
    // 0x3ae4fc: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x3ae4fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3ae500:
    // 0x3ae500: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x3ae500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_3ae504:
    // 0x3ae504: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ae504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae508:
    // 0x3ae508: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
label_3ae50c:
    if (ctx->pc == 0x3AE50Cu) {
        ctx->pc = 0x3AE50Cu;
            // 0x3ae50c: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3AE510u;
        goto label_3ae510;
    }
    ctx->pc = 0x3AE508u;
    {
        const bool branch_taken_0x3ae508 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AE50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE508u;
            // 0x3ae50c: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae508) {
            ctx->pc = 0x3AE524u;
            goto label_3ae524;
        }
    }
    ctx->pc = 0x3AE510u;
label_3ae510:
    // 0x3ae510: 0x86020020  lh          $v0, 0x20($s0)
    ctx->pc = 0x3ae510u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_3ae514:
    // 0x3ae514: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ae514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae518:
    // 0x3ae518: 0x0  nop
    ctx->pc = 0x3ae518u;
    // NOP
label_3ae51c:
    // 0x3ae51c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ae51cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ae520:
    // 0x3ae520: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x3ae520u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_3ae524:
    // 0x3ae524: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3ae524u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3ae528:
    // 0x3ae528: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3ae528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ae52c:
    // 0x3ae52c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x3ae52cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ae530:
    // 0x3ae530: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3ae530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ae534:
    // 0x3ae534: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x3ae534u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3ae538:
    // 0x3ae538: 0x2a41000e  slti        $at, $s2, 0xE
    ctx->pc = 0x3ae538u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)14) ? 1 : 0);
label_3ae53c:
    // 0x3ae53c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_3ae540:
    if (ctx->pc == 0x3AE540u) {
        ctx->pc = 0x3AE544u;
        goto label_3ae544;
    }
    ctx->pc = 0x3AE53Cu;
    {
        const bool branch_taken_0x3ae53c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae53c) {
            ctx->pc = 0x3AE564u;
            goto label_3ae564;
        }
    }
    ctx->pc = 0x3AE544u;
label_3ae544:
    // 0x3ae544: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ae544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ae548:
    // 0x3ae548: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3ae548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3ae54c:
    // 0x3ae54c: 0xc0506ac  jal         func_141AB0
label_3ae550:
    if (ctx->pc == 0x3AE550u) {
        ctx->pc = 0x3AE550u;
            // 0x3ae550: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x3AE554u;
        goto label_3ae554;
    }
    ctx->pc = 0x3AE54Cu;
    SET_GPR_U32(ctx, 31, 0x3AE554u);
    ctx->pc = 0x3AE550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE54Cu;
            // 0x3ae550: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE554u; }
        if (ctx->pc != 0x3AE554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE554u; }
        if (ctx->pc != 0x3AE554u) { return; }
    }
    ctx->pc = 0x3AE554u;
label_3ae554:
    // 0x3ae554: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x3ae554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3ae558:
    // 0x3ae558: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3ae558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3ae55c:
    // 0x3ae55c: 0x1000000a  b           . + 4 + (0xA << 2)
label_3ae560:
    if (ctx->pc == 0x3AE560u) {
        ctx->pc = 0x3AE560u;
            // 0x3ae560: 0x3c39021  addu        $s2, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->pc = 0x3AE564u;
        goto label_3ae564;
    }
    ctx->pc = 0x3AE55Cu;
    {
        const bool branch_taken_0x3ae55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE55Cu;
            // 0x3ae560: 0x3c39021  addu        $s2, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae55c) {
            ctx->pc = 0x3AE588u;
            goto label_3ae588;
        }
    }
    ctx->pc = 0x3AE564u;
label_3ae564:
    // 0x3ae564: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ae564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ae568:
    // 0x3ae568: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3ae568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3ae56c:
    // 0x3ae56c: 0xc0506ac  jal         func_141AB0
label_3ae570:
    if (ctx->pc == 0x3AE570u) {
        ctx->pc = 0x3AE570u;
            // 0x3ae570: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3AE574u;
        goto label_3ae574;
    }
    ctx->pc = 0x3AE56Cu;
    SET_GPR_U32(ctx, 31, 0x3AE574u);
    ctx->pc = 0x3AE570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE56Cu;
            // 0x3ae570: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE574u; }
        if (ctx->pc != 0x3AE574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE574u; }
        if (ctx->pc != 0x3AE574u) { return; }
    }
    ctx->pc = 0x3AE574u;
label_3ae574:
    // 0x3ae574: 0x2643fff2  addiu       $v1, $s2, -0xE
    ctx->pc = 0x3ae574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967282));
label_3ae578:
    // 0x3ae578: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x3ae578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3ae57c:
    // 0x3ae57c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3ae57cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3ae580:
    // 0x3ae580: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x3ae580u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3ae584:
    // 0x3ae584: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x3ae584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ae588:
    // 0x3ae588: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x3ae588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3ae58c:
    // 0x3ae58c: 0x8c640da0  lw          $a0, 0xDA0($v1)
    ctx->pc = 0x3ae58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3488)));
label_3ae590:
    // 0x3ae590: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3ae590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3ae594:
    // 0x3ae594: 0x8c63f518  lw          $v1, -0xAE8($v1)
    ctx->pc = 0x3ae594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964504)));
label_3ae598:
    // 0x3ae598: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ae598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3ae59c:
    // 0x3ae59c: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_3ae5a0:
    if (ctx->pc == 0x3AE5A0u) {
        ctx->pc = 0x3AE5A4u;
        goto label_3ae5a4;
    }
    ctx->pc = 0x3AE59Cu;
    {
        const bool branch_taken_0x3ae59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae59c) {
            ctx->pc = 0x3AE644u;
            goto label_3ae644;
        }
    }
    ctx->pc = 0x3AE5A4u;
label_3ae5a4:
    // 0x3ae5a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ae5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ae5a8:
    // 0x3ae5a8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ae5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ae5ac:
    // 0x3ae5ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ae5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ae5b0:
    // 0x3ae5b0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3ae5b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3ae5b4:
    // 0x3ae5b4: 0x320f809  jalr        $t9
label_3ae5b8:
    if (ctx->pc == 0x3AE5B8u) {
        ctx->pc = 0x3AE5B8u;
            // 0x3ae5b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3AE5BCu;
        goto label_3ae5bc;
    }
    ctx->pc = 0x3AE5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AE5BCu);
        ctx->pc = 0x3AE5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE5B4u;
            // 0x3ae5b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AE5BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AE5BCu; }
            if (ctx->pc != 0x3AE5BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3AE5BCu;
label_3ae5bc:
    // 0x3ae5bc: 0x86040020  lh          $a0, 0x20($s0)
    ctx->pc = 0x3ae5bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_3ae5c0:
    // 0x3ae5c0: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x3ae5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_3ae5c4:
    // 0x3ae5c4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3ae5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3ae5c8:
    // 0x3ae5c8: 0x86090022  lh          $t1, 0x22($s0)
    ctx->pc = 0x3ae5c8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
label_3ae5cc:
    // 0x3ae5cc: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3ae5ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ae5d0:
    // 0x3ae5d0: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x3ae5d0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3ae5d4:
    // 0x3ae5d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ae5d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae5d8:
    // 0x3ae5d8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ae5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3ae5dc:
    // 0x3ae5dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ae5dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ae5e0:
    // 0x3ae5e0: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3ae5e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3ae5e4:
    // 0x3ae5e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ae5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ae5e8:
    // 0x3ae5e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ae5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ae5ec:
    // 0x3ae5ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ae5ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ae5f0:
    // 0x3ae5f0: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x3ae5f0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3ae5f4:
    // 0x3ae5f4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3ae5f4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae5f8:
    // 0x3ae5f8: 0x0  nop
    ctx->pc = 0x3ae5f8u;
    // NOP
label_3ae5fc:
    // 0x3ae5fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ae5fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ae600:
    // 0x3ae600: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x3ae600u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3ae604:
    // 0x3ae604: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3ae604u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae608:
    // 0x3ae608: 0x0  nop
    ctx->pc = 0x3ae608u;
    // NOP
label_3ae60c:
    // 0x3ae60c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ae60cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3ae610:
    // 0x3ae610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ae610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae614:
    // 0x3ae614: 0x0  nop
    ctx->pc = 0x3ae614u;
    // NOP
label_3ae618:
    // 0x3ae618: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ae618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3ae61c:
    // 0x3ae61c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3ae61cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3ae620:
    // 0x3ae620: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3ae620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3ae624:
    // 0x3ae624: 0xc0bc284  jal         func_2F0A10
label_3ae628:
    if (ctx->pc == 0x3AE628u) {
        ctx->pc = 0x3AE628u;
            // 0x3ae628: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3AE62Cu;
        goto label_3ae62c;
    }
    ctx->pc = 0x3AE624u;
    SET_GPR_U32(ctx, 31, 0x3AE62Cu);
    ctx->pc = 0x3AE628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE624u;
            // 0x3ae628: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE62Cu; }
        if (ctx->pc != 0x3AE62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AE62Cu; }
        if (ctx->pc != 0x3AE62Cu) { return; }
    }
    ctx->pc = 0x3AE62Cu;
label_3ae62c:
    // 0x3ae62c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ae62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ae630:
    // 0x3ae630: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ae630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ae634:
    // 0x3ae634: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ae634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ae638:
    // 0x3ae638: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ae638u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ae63c:
    // 0x3ae63c: 0x320f809  jalr        $t9
label_3ae640:
    if (ctx->pc == 0x3AE640u) {
        ctx->pc = 0x3AE644u;
        goto label_3ae644;
    }
    ctx->pc = 0x3AE63Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AE644u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AE644u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AE644u; }
            if (ctx->pc != 0x3AE644u) { return; }
        }
        }
    }
    ctx->pc = 0x3AE644u;
label_3ae644:
    // 0x3ae644: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3ae644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3ae648:
    // 0x3ae648: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3ae648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ae64c:
    // 0x3ae64c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3ae64cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ae650:
    // 0x3ae650: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ae650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ae654:
    // 0x3ae654: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3ae654u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ae658:
    // 0x3ae658: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3ae658u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ae65c:
    // 0x3ae65c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3ae65cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ae660:
    // 0x3ae660: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3ae660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ae664:
    // 0x3ae664: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ae664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ae668:
    // 0x3ae668: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ae668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ae66c:
    // 0x3ae66c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ae66cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ae670:
    // 0x3ae670: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ae670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ae674:
    // 0x3ae674: 0x3e00008  jr          $ra
label_3ae678:
    if (ctx->pc == 0x3AE678u) {
        ctx->pc = 0x3AE678u;
            // 0x3ae678: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3AE67Cu;
        goto label_3ae67c;
    }
    ctx->pc = 0x3AE674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AE674u;
            // 0x3ae678: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AE67Cu;
label_3ae67c:
    // 0x3ae67c: 0x0  nop
    ctx->pc = 0x3ae67cu;
    // NOP
}
