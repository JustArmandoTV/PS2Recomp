#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005650F0
// Address: 0x5650f0 - 0x565680
void sub_005650F0_0x5650f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005650F0_0x5650f0");
#endif

    switch (ctx->pc) {
        case 0x5650f0u: goto label_5650f0;
        case 0x5650f4u: goto label_5650f4;
        case 0x5650f8u: goto label_5650f8;
        case 0x5650fcu: goto label_5650fc;
        case 0x565100u: goto label_565100;
        case 0x565104u: goto label_565104;
        case 0x565108u: goto label_565108;
        case 0x56510cu: goto label_56510c;
        case 0x565110u: goto label_565110;
        case 0x565114u: goto label_565114;
        case 0x565118u: goto label_565118;
        case 0x56511cu: goto label_56511c;
        case 0x565120u: goto label_565120;
        case 0x565124u: goto label_565124;
        case 0x565128u: goto label_565128;
        case 0x56512cu: goto label_56512c;
        case 0x565130u: goto label_565130;
        case 0x565134u: goto label_565134;
        case 0x565138u: goto label_565138;
        case 0x56513cu: goto label_56513c;
        case 0x565140u: goto label_565140;
        case 0x565144u: goto label_565144;
        case 0x565148u: goto label_565148;
        case 0x56514cu: goto label_56514c;
        case 0x565150u: goto label_565150;
        case 0x565154u: goto label_565154;
        case 0x565158u: goto label_565158;
        case 0x56515cu: goto label_56515c;
        case 0x565160u: goto label_565160;
        case 0x565164u: goto label_565164;
        case 0x565168u: goto label_565168;
        case 0x56516cu: goto label_56516c;
        case 0x565170u: goto label_565170;
        case 0x565174u: goto label_565174;
        case 0x565178u: goto label_565178;
        case 0x56517cu: goto label_56517c;
        case 0x565180u: goto label_565180;
        case 0x565184u: goto label_565184;
        case 0x565188u: goto label_565188;
        case 0x56518cu: goto label_56518c;
        case 0x565190u: goto label_565190;
        case 0x565194u: goto label_565194;
        case 0x565198u: goto label_565198;
        case 0x56519cu: goto label_56519c;
        case 0x5651a0u: goto label_5651a0;
        case 0x5651a4u: goto label_5651a4;
        case 0x5651a8u: goto label_5651a8;
        case 0x5651acu: goto label_5651ac;
        case 0x5651b0u: goto label_5651b0;
        case 0x5651b4u: goto label_5651b4;
        case 0x5651b8u: goto label_5651b8;
        case 0x5651bcu: goto label_5651bc;
        case 0x5651c0u: goto label_5651c0;
        case 0x5651c4u: goto label_5651c4;
        case 0x5651c8u: goto label_5651c8;
        case 0x5651ccu: goto label_5651cc;
        case 0x5651d0u: goto label_5651d0;
        case 0x5651d4u: goto label_5651d4;
        case 0x5651d8u: goto label_5651d8;
        case 0x5651dcu: goto label_5651dc;
        case 0x5651e0u: goto label_5651e0;
        case 0x5651e4u: goto label_5651e4;
        case 0x5651e8u: goto label_5651e8;
        case 0x5651ecu: goto label_5651ec;
        case 0x5651f0u: goto label_5651f0;
        case 0x5651f4u: goto label_5651f4;
        case 0x5651f8u: goto label_5651f8;
        case 0x5651fcu: goto label_5651fc;
        case 0x565200u: goto label_565200;
        case 0x565204u: goto label_565204;
        case 0x565208u: goto label_565208;
        case 0x56520cu: goto label_56520c;
        case 0x565210u: goto label_565210;
        case 0x565214u: goto label_565214;
        case 0x565218u: goto label_565218;
        case 0x56521cu: goto label_56521c;
        case 0x565220u: goto label_565220;
        case 0x565224u: goto label_565224;
        case 0x565228u: goto label_565228;
        case 0x56522cu: goto label_56522c;
        case 0x565230u: goto label_565230;
        case 0x565234u: goto label_565234;
        case 0x565238u: goto label_565238;
        case 0x56523cu: goto label_56523c;
        case 0x565240u: goto label_565240;
        case 0x565244u: goto label_565244;
        case 0x565248u: goto label_565248;
        case 0x56524cu: goto label_56524c;
        case 0x565250u: goto label_565250;
        case 0x565254u: goto label_565254;
        case 0x565258u: goto label_565258;
        case 0x56525cu: goto label_56525c;
        case 0x565260u: goto label_565260;
        case 0x565264u: goto label_565264;
        case 0x565268u: goto label_565268;
        case 0x56526cu: goto label_56526c;
        case 0x565270u: goto label_565270;
        case 0x565274u: goto label_565274;
        case 0x565278u: goto label_565278;
        case 0x56527cu: goto label_56527c;
        case 0x565280u: goto label_565280;
        case 0x565284u: goto label_565284;
        case 0x565288u: goto label_565288;
        case 0x56528cu: goto label_56528c;
        case 0x565290u: goto label_565290;
        case 0x565294u: goto label_565294;
        case 0x565298u: goto label_565298;
        case 0x56529cu: goto label_56529c;
        case 0x5652a0u: goto label_5652a0;
        case 0x5652a4u: goto label_5652a4;
        case 0x5652a8u: goto label_5652a8;
        case 0x5652acu: goto label_5652ac;
        case 0x5652b0u: goto label_5652b0;
        case 0x5652b4u: goto label_5652b4;
        case 0x5652b8u: goto label_5652b8;
        case 0x5652bcu: goto label_5652bc;
        case 0x5652c0u: goto label_5652c0;
        case 0x5652c4u: goto label_5652c4;
        case 0x5652c8u: goto label_5652c8;
        case 0x5652ccu: goto label_5652cc;
        case 0x5652d0u: goto label_5652d0;
        case 0x5652d4u: goto label_5652d4;
        case 0x5652d8u: goto label_5652d8;
        case 0x5652dcu: goto label_5652dc;
        case 0x5652e0u: goto label_5652e0;
        case 0x5652e4u: goto label_5652e4;
        case 0x5652e8u: goto label_5652e8;
        case 0x5652ecu: goto label_5652ec;
        case 0x5652f0u: goto label_5652f0;
        case 0x5652f4u: goto label_5652f4;
        case 0x5652f8u: goto label_5652f8;
        case 0x5652fcu: goto label_5652fc;
        case 0x565300u: goto label_565300;
        case 0x565304u: goto label_565304;
        case 0x565308u: goto label_565308;
        case 0x56530cu: goto label_56530c;
        case 0x565310u: goto label_565310;
        case 0x565314u: goto label_565314;
        case 0x565318u: goto label_565318;
        case 0x56531cu: goto label_56531c;
        case 0x565320u: goto label_565320;
        case 0x565324u: goto label_565324;
        case 0x565328u: goto label_565328;
        case 0x56532cu: goto label_56532c;
        case 0x565330u: goto label_565330;
        case 0x565334u: goto label_565334;
        case 0x565338u: goto label_565338;
        case 0x56533cu: goto label_56533c;
        case 0x565340u: goto label_565340;
        case 0x565344u: goto label_565344;
        case 0x565348u: goto label_565348;
        case 0x56534cu: goto label_56534c;
        case 0x565350u: goto label_565350;
        case 0x565354u: goto label_565354;
        case 0x565358u: goto label_565358;
        case 0x56535cu: goto label_56535c;
        case 0x565360u: goto label_565360;
        case 0x565364u: goto label_565364;
        case 0x565368u: goto label_565368;
        case 0x56536cu: goto label_56536c;
        case 0x565370u: goto label_565370;
        case 0x565374u: goto label_565374;
        case 0x565378u: goto label_565378;
        case 0x56537cu: goto label_56537c;
        case 0x565380u: goto label_565380;
        case 0x565384u: goto label_565384;
        case 0x565388u: goto label_565388;
        case 0x56538cu: goto label_56538c;
        case 0x565390u: goto label_565390;
        case 0x565394u: goto label_565394;
        case 0x565398u: goto label_565398;
        case 0x56539cu: goto label_56539c;
        case 0x5653a0u: goto label_5653a0;
        case 0x5653a4u: goto label_5653a4;
        case 0x5653a8u: goto label_5653a8;
        case 0x5653acu: goto label_5653ac;
        case 0x5653b0u: goto label_5653b0;
        case 0x5653b4u: goto label_5653b4;
        case 0x5653b8u: goto label_5653b8;
        case 0x5653bcu: goto label_5653bc;
        case 0x5653c0u: goto label_5653c0;
        case 0x5653c4u: goto label_5653c4;
        case 0x5653c8u: goto label_5653c8;
        case 0x5653ccu: goto label_5653cc;
        case 0x5653d0u: goto label_5653d0;
        case 0x5653d4u: goto label_5653d4;
        case 0x5653d8u: goto label_5653d8;
        case 0x5653dcu: goto label_5653dc;
        case 0x5653e0u: goto label_5653e0;
        case 0x5653e4u: goto label_5653e4;
        case 0x5653e8u: goto label_5653e8;
        case 0x5653ecu: goto label_5653ec;
        case 0x5653f0u: goto label_5653f0;
        case 0x5653f4u: goto label_5653f4;
        case 0x5653f8u: goto label_5653f8;
        case 0x5653fcu: goto label_5653fc;
        case 0x565400u: goto label_565400;
        case 0x565404u: goto label_565404;
        case 0x565408u: goto label_565408;
        case 0x56540cu: goto label_56540c;
        case 0x565410u: goto label_565410;
        case 0x565414u: goto label_565414;
        case 0x565418u: goto label_565418;
        case 0x56541cu: goto label_56541c;
        case 0x565420u: goto label_565420;
        case 0x565424u: goto label_565424;
        case 0x565428u: goto label_565428;
        case 0x56542cu: goto label_56542c;
        case 0x565430u: goto label_565430;
        case 0x565434u: goto label_565434;
        case 0x565438u: goto label_565438;
        case 0x56543cu: goto label_56543c;
        case 0x565440u: goto label_565440;
        case 0x565444u: goto label_565444;
        case 0x565448u: goto label_565448;
        case 0x56544cu: goto label_56544c;
        case 0x565450u: goto label_565450;
        case 0x565454u: goto label_565454;
        case 0x565458u: goto label_565458;
        case 0x56545cu: goto label_56545c;
        case 0x565460u: goto label_565460;
        case 0x565464u: goto label_565464;
        case 0x565468u: goto label_565468;
        case 0x56546cu: goto label_56546c;
        case 0x565470u: goto label_565470;
        case 0x565474u: goto label_565474;
        case 0x565478u: goto label_565478;
        case 0x56547cu: goto label_56547c;
        case 0x565480u: goto label_565480;
        case 0x565484u: goto label_565484;
        case 0x565488u: goto label_565488;
        case 0x56548cu: goto label_56548c;
        case 0x565490u: goto label_565490;
        case 0x565494u: goto label_565494;
        case 0x565498u: goto label_565498;
        case 0x56549cu: goto label_56549c;
        case 0x5654a0u: goto label_5654a0;
        case 0x5654a4u: goto label_5654a4;
        case 0x5654a8u: goto label_5654a8;
        case 0x5654acu: goto label_5654ac;
        case 0x5654b0u: goto label_5654b0;
        case 0x5654b4u: goto label_5654b4;
        case 0x5654b8u: goto label_5654b8;
        case 0x5654bcu: goto label_5654bc;
        case 0x5654c0u: goto label_5654c0;
        case 0x5654c4u: goto label_5654c4;
        case 0x5654c8u: goto label_5654c8;
        case 0x5654ccu: goto label_5654cc;
        case 0x5654d0u: goto label_5654d0;
        case 0x5654d4u: goto label_5654d4;
        case 0x5654d8u: goto label_5654d8;
        case 0x5654dcu: goto label_5654dc;
        case 0x5654e0u: goto label_5654e0;
        case 0x5654e4u: goto label_5654e4;
        case 0x5654e8u: goto label_5654e8;
        case 0x5654ecu: goto label_5654ec;
        case 0x5654f0u: goto label_5654f0;
        case 0x5654f4u: goto label_5654f4;
        case 0x5654f8u: goto label_5654f8;
        case 0x5654fcu: goto label_5654fc;
        case 0x565500u: goto label_565500;
        case 0x565504u: goto label_565504;
        case 0x565508u: goto label_565508;
        case 0x56550cu: goto label_56550c;
        case 0x565510u: goto label_565510;
        case 0x565514u: goto label_565514;
        case 0x565518u: goto label_565518;
        case 0x56551cu: goto label_56551c;
        case 0x565520u: goto label_565520;
        case 0x565524u: goto label_565524;
        case 0x565528u: goto label_565528;
        case 0x56552cu: goto label_56552c;
        case 0x565530u: goto label_565530;
        case 0x565534u: goto label_565534;
        case 0x565538u: goto label_565538;
        case 0x56553cu: goto label_56553c;
        case 0x565540u: goto label_565540;
        case 0x565544u: goto label_565544;
        case 0x565548u: goto label_565548;
        case 0x56554cu: goto label_56554c;
        case 0x565550u: goto label_565550;
        case 0x565554u: goto label_565554;
        case 0x565558u: goto label_565558;
        case 0x56555cu: goto label_56555c;
        case 0x565560u: goto label_565560;
        case 0x565564u: goto label_565564;
        case 0x565568u: goto label_565568;
        case 0x56556cu: goto label_56556c;
        case 0x565570u: goto label_565570;
        case 0x565574u: goto label_565574;
        case 0x565578u: goto label_565578;
        case 0x56557cu: goto label_56557c;
        case 0x565580u: goto label_565580;
        case 0x565584u: goto label_565584;
        case 0x565588u: goto label_565588;
        case 0x56558cu: goto label_56558c;
        case 0x565590u: goto label_565590;
        case 0x565594u: goto label_565594;
        case 0x565598u: goto label_565598;
        case 0x56559cu: goto label_56559c;
        case 0x5655a0u: goto label_5655a0;
        case 0x5655a4u: goto label_5655a4;
        case 0x5655a8u: goto label_5655a8;
        case 0x5655acu: goto label_5655ac;
        case 0x5655b0u: goto label_5655b0;
        case 0x5655b4u: goto label_5655b4;
        case 0x5655b8u: goto label_5655b8;
        case 0x5655bcu: goto label_5655bc;
        case 0x5655c0u: goto label_5655c0;
        case 0x5655c4u: goto label_5655c4;
        case 0x5655c8u: goto label_5655c8;
        case 0x5655ccu: goto label_5655cc;
        case 0x5655d0u: goto label_5655d0;
        case 0x5655d4u: goto label_5655d4;
        case 0x5655d8u: goto label_5655d8;
        case 0x5655dcu: goto label_5655dc;
        case 0x5655e0u: goto label_5655e0;
        case 0x5655e4u: goto label_5655e4;
        case 0x5655e8u: goto label_5655e8;
        case 0x5655ecu: goto label_5655ec;
        case 0x5655f0u: goto label_5655f0;
        case 0x5655f4u: goto label_5655f4;
        case 0x5655f8u: goto label_5655f8;
        case 0x5655fcu: goto label_5655fc;
        case 0x565600u: goto label_565600;
        case 0x565604u: goto label_565604;
        case 0x565608u: goto label_565608;
        case 0x56560cu: goto label_56560c;
        case 0x565610u: goto label_565610;
        case 0x565614u: goto label_565614;
        case 0x565618u: goto label_565618;
        case 0x56561cu: goto label_56561c;
        case 0x565620u: goto label_565620;
        case 0x565624u: goto label_565624;
        case 0x565628u: goto label_565628;
        case 0x56562cu: goto label_56562c;
        case 0x565630u: goto label_565630;
        case 0x565634u: goto label_565634;
        case 0x565638u: goto label_565638;
        case 0x56563cu: goto label_56563c;
        case 0x565640u: goto label_565640;
        case 0x565644u: goto label_565644;
        case 0x565648u: goto label_565648;
        case 0x56564cu: goto label_56564c;
        case 0x565650u: goto label_565650;
        case 0x565654u: goto label_565654;
        case 0x565658u: goto label_565658;
        case 0x56565cu: goto label_56565c;
        case 0x565660u: goto label_565660;
        case 0x565664u: goto label_565664;
        case 0x565668u: goto label_565668;
        case 0x56566cu: goto label_56566c;
        case 0x565670u: goto label_565670;
        case 0x565674u: goto label_565674;
        case 0x565678u: goto label_565678;
        case 0x56567cu: goto label_56567c;
        default: break;
    }

    ctx->pc = 0x5650f0u;

label_5650f0:
    // 0x5650f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x5650f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_5650f4:
    // 0x5650f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5650f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5650f8:
    // 0x5650f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x5650f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_5650fc:
    // 0x5650fc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x5650fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_565100:
    // 0x565100: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x565100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_565104:
    // 0x565104: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x565104u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_565108:
    // 0x565108: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x565108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_56510c:
    // 0x56510c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x56510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_565110:
    // 0x565110: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x565110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_565114:
    // 0x565114: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x565114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_565118:
    // 0x565118: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x565118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_56511c:
    // 0x56511c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x56511cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_565120:
    // 0x565120: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x565120u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_565124:
    // 0x565124: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x565124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_565128:
    // 0x565128: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x565128u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_56512c:
    // 0x56512c: 0x8486f780  lh          $a2, -0x880($a0)
    ctx->pc = 0x56512cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294965120)));
label_565130:
    // 0x565130: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x565130u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_565134:
    // 0x565134: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x565134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_565138:
    // 0x565138: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x565138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_56513c:
    // 0x56513c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56513cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_565140:
    // 0x565140: 0x8c740060  lw          $s4, 0x60($v1)
    ctx->pc = 0x565140u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_565144:
    // 0x565144: 0x8c4589e0  lw          $a1, -0x7620($v0)
    ctx->pc = 0x565144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_565148:
    // 0x565148: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x565148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_56514c:
    // 0x56514c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x56514cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_565150:
    // 0x565150: 0xa0a00004  sb          $zero, 0x4($a1)
    ctx->pc = 0x565150u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 0));
label_565154:
    // 0x565154: 0xc443f7e0  lwc1        $f3, -0x820($v0)
    ctx->pc = 0x565154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_565158:
    // 0x565158: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x565158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_56515c:
    // 0x56515c: 0xc461f7e8  lwc1        $f1, -0x818($v1)
    ctx->pc = 0x56515cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_565160:
    // 0x565160: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x565160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_565164:
    // 0x565164: 0xc442f7e4  lwc1        $f2, -0x81C($v0)
    ctx->pc = 0x565164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_565168:
    // 0x565168: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x565168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_56516c:
    // 0x56516c: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x56516cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_565170:
    // 0x565170: 0x8463f782  lh          $v1, -0x87E($v1)
    ctx->pc = 0x565170u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294965122)));
label_565174:
    // 0x565174: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x565174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_565178:
    // 0x565178: 0xc440f7ec  lwc1        $f0, -0x814($v0)
    ctx->pc = 0x565178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_56517c:
    // 0x56517c: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x56517cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_565180:
    // 0x565180: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x565180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_565184:
    // 0x565184: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x565184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_565188:
    // 0x565188: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x565188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_56518c:
    // 0x56518c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x56518cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_565190:
    // 0x565190: 0x8c440eb8  lw          $a0, 0xEB8($v0)
    ctx->pc = 0x565190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3768)));
label_565194:
    // 0x565194: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x565194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_565198:
    // 0x565198: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x565198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_56519c:
    // 0x56519c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x56519cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5651a0:
    // 0x5651a0: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x5651a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_5651a4:
    // 0x5651a4: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x5651a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[0];
label_5651a8:
    // 0x5651a8: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x5651a8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[0];
label_5651ac:
    // 0x5651ac: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x5651acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_5651b0:
    // 0x5651b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5651b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5651b4:
    // 0x5651b4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x5651b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5651b8:
    // 0x5651b8: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x5651b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5651bc:
    // 0x5651bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5651bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5651c0:
    // 0x5651c0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x5651c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_5651c4:
    // 0x5651c4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x5651c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_5651c8:
    // 0x5651c8: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x5651c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_5651cc:
    // 0x5651cc: 0xe7a300a8  swc1        $f3, 0xA8($sp)
    ctx->pc = 0x5651ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_5651d0:
    // 0x5651d0: 0x0  nop
    ctx->pc = 0x5651d0u;
    // NOP
label_5651d4:
    // 0x5651d4: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x5651d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_5651d8:
    // 0x5651d8: 0xc0506ac  jal         func_141AB0
label_5651dc:
    if (ctx->pc == 0x5651DCu) {
        ctx->pc = 0x5651DCu;
            // 0x5651dc: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->pc = 0x5651E0u;
        goto label_5651e0;
    }
    ctx->pc = 0x5651D8u;
    SET_GPR_U32(ctx, 31, 0x5651E0u);
    ctx->pc = 0x5651DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5651D8u;
            // 0x5651dc: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5651E0u; }
        if (ctx->pc != 0x5651E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5651E0u; }
        if (ctx->pc != 0x5651E0u) { return; }
    }
    ctx->pc = 0x5651E0u;
label_5651e0:
    // 0x5651e0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5651e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5651e4:
    // 0x5651e4: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x5651e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_5651e8:
    // 0x5651e8: 0x8453fb1e  lh          $s3, -0x4E2($v0)
    ctx->pc = 0x5651e8u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294966046)));
label_5651ec:
    // 0x5651ec: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x5651ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_5651f0:
    // 0x5651f0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_5651f4:
    if (ctx->pc == 0x5651F4u) {
        ctx->pc = 0x5651F4u;
            // 0x5651f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x5651F8u;
        goto label_5651f8;
    }
    ctx->pc = 0x5651F0u;
    {
        const bool branch_taken_0x5651f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x5651f0) {
            ctx->pc = 0x5651F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5651F0u;
            // 0x5651f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x565204u;
            goto label_565204;
        }
    }
    ctx->pc = 0x5651F8u;
label_5651f8:
    // 0x5651f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5651f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5651fc:
    // 0x5651fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_565200:
    if (ctx->pc == 0x565200u) {
        ctx->pc = 0x565200u;
            // 0x565200: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x565204u;
        goto label_565204;
    }
    ctx->pc = 0x5651FCu;
    {
        const bool branch_taken_0x5651fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x565200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5651FCu;
            // 0x565200: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5651fc) {
            ctx->pc = 0x56521Cu;
            goto label_56521c;
        }
    }
    ctx->pc = 0x565204u;
label_565204:
    // 0x565204: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x565204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_565208:
    // 0x565208: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x565208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_56520c:
    // 0x56520c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x56520cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_565210:
    // 0x565210: 0x0  nop
    ctx->pc = 0x565210u;
    // NOP
label_565214:
    // 0x565214: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x565214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_565218:
    // 0x565218: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x565218u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_56521c:
    // 0x56521c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x56521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_565220:
    // 0x565220: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x565220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_565224:
    // 0x565224: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_565228:
    if (ctx->pc == 0x565228u) {
        ctx->pc = 0x565228u;
            // 0x565228: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x56522Cu;
        goto label_56522c;
    }
    ctx->pc = 0x565224u;
    {
        const bool branch_taken_0x565224 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x565224) {
            ctx->pc = 0x565228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x565224u;
            // 0x565228: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x565238u;
            goto label_565238;
        }
    }
    ctx->pc = 0x56522Cu;
label_56522c:
    // 0x56522c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x56522cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_565230:
    // 0x565230: 0x10000007  b           . + 4 + (0x7 << 2)
label_565234:
    if (ctx->pc == 0x565234u) {
        ctx->pc = 0x565234u;
            // 0x565234: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x565238u;
        goto label_565238;
    }
    ctx->pc = 0x565230u;
    {
        const bool branch_taken_0x565230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x565234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565230u;
            // 0x565234: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x565230) {
            ctx->pc = 0x565250u;
            goto label_565250;
        }
    }
    ctx->pc = 0x565238u;
label_565238:
    // 0x565238: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x565238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_56523c:
    // 0x56523c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x56523cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_565240:
    // 0x565240: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x565240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_565244:
    // 0x565244: 0x0  nop
    ctx->pc = 0x565244u;
    // NOP
label_565248:
    // 0x565248: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x565248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_56524c:
    // 0x56524c: 0x4616b580  add.s       $f22, $f22, $f22
    ctx->pc = 0x56524cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
label_565250:
    // 0x565250: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x565250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_565254:
    // 0x565254: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_565258:
    if (ctx->pc == 0x565258u) {
        ctx->pc = 0x565258u;
            // 0x565258: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x56525Cu;
        goto label_56525c;
    }
    ctx->pc = 0x565254u;
    {
        const bool branch_taken_0x565254 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x565254) {
            ctx->pc = 0x565258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x565254u;
            // 0x565258: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x565268u;
            goto label_565268;
        }
    }
    ctx->pc = 0x56525Cu;
label_56525c:
    // 0x56525c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x56525cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_565260:
    // 0x565260: 0x10000007  b           . + 4 + (0x7 << 2)
label_565264:
    if (ctx->pc == 0x565264u) {
        ctx->pc = 0x565264u;
            // 0x565264: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x565268u;
        goto label_565268;
    }
    ctx->pc = 0x565260u;
    {
        const bool branch_taken_0x565260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x565264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565260u;
            // 0x565264: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x565260) {
            ctx->pc = 0x565280u;
            goto label_565280;
        }
    }
    ctx->pc = 0x565268u;
label_565268:
    // 0x565268: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x565268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_56526c:
    // 0x56526c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x56526cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_565270:
    // 0x565270: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x565270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_565274:
    // 0x565274: 0x0  nop
    ctx->pc = 0x565274u;
    // NOP
label_565278:
    // 0x565278: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x565278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_56527c:
    // 0x56527c: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x56527cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_565280:
    // 0x565280: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x565280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_565284:
    // 0x565284: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x565284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_565288:
    // 0x565288: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x565288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_56528c:
    // 0x56528c: 0x8c590008  lw          $t9, 0x8($v0)
    ctx->pc = 0x56528cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_565290:
    // 0x565290: 0x24540004  addiu       $s4, $v0, 0x4
    ctx->pc = 0x565290u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_565294:
    // 0x565294: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x565294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_565298:
    // 0x565298: 0x320f809  jalr        $t9
label_56529c:
    if (ctx->pc == 0x56529Cu) {
        ctx->pc = 0x56529Cu;
            // 0x56529c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5652A0u;
        goto label_5652a0;
    }
    ctx->pc = 0x565298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5652A0u);
        ctx->pc = 0x56529Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565298u;
            // 0x56529c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5652A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5652A0u; }
            if (ctx->pc != 0x5652A0u) { return; }
        }
        }
    }
    ctx->pc = 0x5652A0u;
label_5652a0:
    // 0x5652a0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x5652a0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5652a4:
    // 0x5652a4: 0x8e990004  lw          $t9, 0x4($s4)
    ctx->pc = 0x5652a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_5652a8:
    // 0x5652a8: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x5652a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_5652ac:
    // 0x5652ac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5652acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5652b0:
    // 0x5652b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x5652b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_5652b4:
    // 0x5652b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x5652b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5652b8:
    // 0x5652b8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x5652b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_5652bc:
    // 0x5652bc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x5652bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_5652c0:
    // 0x5652c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5652c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5652c4:
    // 0x5652c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x5652c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_5652c8:
    // 0x5652c8: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x5652c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_5652cc:
    // 0x5652cc: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x5652ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_5652d0:
    // 0x5652d0: 0x320f809  jalr        $t9
label_5652d4:
    if (ctx->pc == 0x5652D4u) {
        ctx->pc = 0x5652D4u;
            // 0x5652d4: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x5652D8u;
        goto label_5652d8;
    }
    ctx->pc = 0x5652D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5652D8u);
        ctx->pc = 0x5652D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5652D0u;
            // 0x5652d4: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5652D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5652D8u; }
            if (ctx->pc != 0x5652D8u) { return; }
        }
        }
    }
    ctx->pc = 0x5652D8u;
label_5652d8:
    // 0x5652d8: 0x8e990004  lw          $t9, 0x4($s4)
    ctx->pc = 0x5652d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_5652dc:
    // 0x5652dc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x5652dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_5652e0:
    // 0x5652e0: 0x320f809  jalr        $t9
label_5652e4:
    if (ctx->pc == 0x5652E4u) {
        ctx->pc = 0x5652E4u;
            // 0x5652e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5652E8u;
        goto label_5652e8;
    }
    ctx->pc = 0x5652E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5652E8u);
        ctx->pc = 0x5652E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5652E0u;
            // 0x5652e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5652E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5652E8u; }
            if (ctx->pc != 0x5652E8u) { return; }
        }
        }
    }
    ctx->pc = 0x5652E8u;
label_5652e8:
    // 0x5652e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5652e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5652ec:
    // 0x5652ec: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x5652ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_5652f0:
    // 0x5652f0: 0x8c4589e0  lw          $a1, -0x7620($v0)
    ctx->pc = 0x5652f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5652f4:
    // 0x5652f4: 0x2463fb50  addiu       $v1, $v1, -0x4B0
    ctx->pc = 0x5652f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966096));
label_5652f8:
    // 0x5652f8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x5652f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5652fc:
    // 0x5652fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x5652fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_565300:
    // 0x565300: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x565300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_565304:
    // 0x565304: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x565304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_565308:
    // 0x565308: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x565308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_56530c:
    // 0x56530c: 0xa0a90004  sb          $t1, 0x4($a1)
    ctx->pc = 0x56530cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 9));
label_565310:
    // 0x565310: 0x8c420e68  lw          $v0, 0xE68($v0)
    ctx->pc = 0x565310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_565314:
    // 0x565314: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x565314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_565318:
    // 0x565318: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x565318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_56531c:
    // 0x56531c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x56531cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_565320:
    // 0x565320: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x565320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_565324:
    // 0x565324: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x565324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_565328:
    // 0x565328: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x565328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_56532c:
    // 0x56532c: 0xe4430014  swc1        $f3, 0x14($v0)
    ctx->pc = 0x56532cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_565330:
    // 0x565330: 0xe4420018  swc1        $f2, 0x18($v0)
    ctx->pc = 0x565330u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_565334:
    // 0x565334: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x565334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_565338:
    // 0x565338: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x565338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_56533c:
    // 0x56533c: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x56533cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_565340:
    // 0x565340: 0xc1595a0  jal         func_565680
label_565344:
    if (ctx->pc == 0x565344u) {
        ctx->pc = 0x565344u;
            // 0x565344: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x565348u;
        goto label_565348;
    }
    ctx->pc = 0x565340u;
    SET_GPR_U32(ctx, 31, 0x565348u);
    ctx->pc = 0x565344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565340u;
            // 0x565344: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565680u;
    if (runtime->hasFunction(0x565680u)) {
        auto targetFn = runtime->lookupFunction(0x565680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565348u; }
        if (ctx->pc != 0x565348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565680_0x565680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565348u; }
        if (ctx->pc != 0x565348u) { return; }
    }
    ctx->pc = 0x565348u;
label_565348:
    // 0x565348: 0x9243007f  lbu         $v1, 0x7F($s2)
    ctx->pc = 0x565348u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 127)));
label_56534c:
    // 0x56534c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_565350:
    if (ctx->pc == 0x565350u) {
        ctx->pc = 0x565354u;
        goto label_565354;
    }
    ctx->pc = 0x56534Cu;
    {
        const bool branch_taken_0x56534c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x56534c) {
            ctx->pc = 0x565360u;
            goto label_565360;
        }
    }
    ctx->pc = 0x565354u;
label_565354:
    // 0x565354: 0x8243007c  lb          $v1, 0x7C($s2)
    ctx->pc = 0x565354u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 124)));
label_565358:
    // 0x565358: 0x5460001c  bnel        $v1, $zero, . + 4 + (0x1C << 2)
label_56535c:
    if (ctx->pc == 0x56535Cu) {
        ctx->pc = 0x56535Cu;
            // 0x56535c: 0x38640003  xori        $a0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
        ctx->pc = 0x565360u;
        goto label_565360;
    }
    ctx->pc = 0x565358u;
    {
        const bool branch_taken_0x565358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x565358) {
            ctx->pc = 0x56535Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x565358u;
            // 0x56535c: 0x38640003  xori        $a0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
            ctx->pc = 0x5653CCu;
            goto label_5653cc;
        }
    }
    ctx->pc = 0x565360u;
label_565360:
    // 0x565360: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x565360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_565364:
    // 0x565364: 0x8e460060  lw          $a2, 0x60($s2)
    ctx->pc = 0x565364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_565368:
    // 0x565368: 0x8c650e68  lw          $a1, 0xE68($v1)
    ctx->pc = 0x565368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_56536c:
    // 0x56536c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x56536cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_565370:
    // 0x565370: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_565374:
    if (ctx->pc == 0x565374u) {
        ctx->pc = 0x565374u;
            // 0x565374: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x565378u;
        goto label_565378;
    }
    ctx->pc = 0x565370u;
    {
        const bool branch_taken_0x565370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x565374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565370u;
            // 0x565374: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565370) {
            ctx->pc = 0x565394u;
            goto label_565394;
        }
    }
    ctx->pc = 0x565378u;
label_565378:
    // 0x565378: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x565378u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_56537c:
    // 0x56537c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x56537cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_565380:
    // 0x565380: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x565380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_565384:
    // 0x565384: 0x0  nop
    ctx->pc = 0x565384u;
    // NOP
label_565388:
    // 0x565388: 0x0  nop
    ctx->pc = 0x565388u;
    // NOP
label_56538c:
    // 0x56538c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_565390:
    if (ctx->pc == 0x565390u) {
        ctx->pc = 0x565394u;
        goto label_565394;
    }
    ctx->pc = 0x56538Cu;
    {
        const bool branch_taken_0x56538c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x56538c) {
            ctx->pc = 0x565378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_565378;
        }
    }
    ctx->pc = 0x565394u;
label_565394:
    // 0x565394: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x565394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_565398:
    // 0x565398: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x565398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_56539c:
    // 0x56539c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x56539cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_5653a0:
    // 0x5653a0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x5653a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_5653a4:
    // 0x5653a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5653a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5653a8:
    // 0x5653a8: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x5653a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
label_5653ac:
    // 0x5653ac: 0xafa50094  sw          $a1, 0x94($sp)
    ctx->pc = 0x5653acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 5));
label_5653b0:
    // 0x5653b0: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x5653b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
label_5653b4:
    // 0x5653b4: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x5653b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
label_5653b8:
    // 0x5653b8: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x5653b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
label_5653bc:
    // 0x5653bc: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x5653bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
label_5653c0:
    // 0x5653c0: 0xafa5009c  sw          $a1, 0x9C($sp)
    ctx->pc = 0x5653c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 5));
label_5653c4:
    // 0x5653c4: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_5653c8:
    if (ctx->pc == 0x5653C8u) {
        ctx->pc = 0x5653C8u;
            // 0x5653c8: 0xac650020  sw          $a1, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
        ctx->pc = 0x5653CCu;
        goto label_5653cc;
    }
    ctx->pc = 0x5653C4u;
    {
        const bool branch_taken_0x5653c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5653C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5653C4u;
            // 0x5653c8: 0xac650020  sw          $a1, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5653c4) {
            ctx->pc = 0x565650u;
            goto label_565650;
        }
    }
    ctx->pc = 0x5653CCu;
label_5653cc:
    // 0x5653cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x5653ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5653d0:
    // 0x5653d0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x5653d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_5653d4:
    // 0x5653d4: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x5653d4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_5653d8:
    // 0x5653d8: 0x2463fb30  addiu       $v1, $v1, -0x4D0
    ctx->pc = 0x5653d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966064));
label_5653dc:
    // 0x5653dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x5653dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_5653e0:
    // 0x5653e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5653e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_5653e4:
    // 0x5653e4: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x5653e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5653e8:
    // 0x5653e8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x5653e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5653ec:
    // 0x5653ec: 0x8243007d  lb          $v1, 0x7D($s2)
    ctx->pc = 0x5653ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 125)));
label_5653f0:
    // 0x5653f0: 0x741826  xor         $v1, $v1, $s4
    ctx->pc = 0x5653f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 20));
label_5653f4:
    // 0x5653f4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x5653f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_5653f8:
    // 0x5653f8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_5653fc:
    if (ctx->pc == 0x5653FCu) {
        ctx->pc = 0x5653FCu;
            // 0x5653fc: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x565400u;
        goto label_565400;
    }
    ctx->pc = 0x5653F8u;
    {
        const bool branch_taken_0x5653f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5653f8) {
            ctx->pc = 0x5653FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5653F8u;
            // 0x5653fc: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x56540Cu;
            goto label_56540c;
        }
    }
    ctx->pc = 0x565400u;
label_565400:
    // 0x565400: 0x2801827  not         $v1, $s4
    ctx->pc = 0x565400u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 20) | GPR_U64(ctx, 0)));
label_565404:
    // 0x565404: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x565404u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_565408:
    // 0x565408: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x565408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_56540c:
    // 0x56540c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x56540cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_565410:
    // 0x565410: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x565410u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_565414:
    // 0x565414: 0x2484fb40  addiu       $a0, $a0, -0x4C0
    ctx->pc = 0x565414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966080));
label_565418:
    // 0x565418: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x565418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_56541c:
    // 0x56541c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x56541cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_565420:
    // 0x565420: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x565420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_565424:
    // 0x565424: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x565424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_565428:
    // 0x565428: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x565428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_56542c:
    // 0x56542c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x56542cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_565430:
    // 0x565430: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x565430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_565434:
    // 0x565434: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x565434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_565438:
    // 0x565438: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x565438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_56543c:
    // 0x56543c: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x56543cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_565440:
    // 0x565440: 0xe4620018  swc1        $f2, 0x18($v1)
    ctx->pc = 0x565440u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_565444:
    // 0x565444: 0xe461001c  swc1        $f1, 0x1C($v1)
    ctx->pc = 0x565444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_565448:
    // 0x565448: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x565448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_56544c:
    // 0x56544c: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x56544cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_565450:
    // 0x565450: 0x2c61000e  sltiu       $at, $v1, 0xE
    ctx->pc = 0x565450u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_565454:
    // 0x565454: 0x1020005e  beqz        $at, . + 4 + (0x5E << 2)
label_565458:
    if (ctx->pc == 0x565458u) {
        ctx->pc = 0x56545Cu;
        goto label_56545c;
    }
    ctx->pc = 0x565454u;
    {
        const bool branch_taken_0x565454 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x565454) {
            ctx->pc = 0x5655D0u;
            goto label_5655d0;
        }
    }
    ctx->pc = 0x56545Cu;
label_56545c:
    // 0x56545c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x56545cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_565460:
    // 0x565460: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x565460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_565464:
    // 0x565464: 0x2484fb60  addiu       $a0, $a0, -0x4A0
    ctx->pc = 0x565464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966112));
label_565468:
    // 0x565468: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x565468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_56546c:
    // 0x56546c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x56546cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_565470:
    // 0x565470: 0x600008  jr          $v1
label_565474:
    if (ctx->pc == 0x565474u) {
        ctx->pc = 0x565478u;
        goto label_565478;
    }
    ctx->pc = 0x565470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x565478u: goto label_565478;
            case 0x565498u: goto label_565498;
            case 0x5654B8u: goto label_5654b8;
            case 0x5654D8u: goto label_5654d8;
            case 0x5654F8u: goto label_5654f8;
            case 0x565518u: goto label_565518;
            case 0x565538u: goto label_565538;
            case 0x565558u: goto label_565558;
            case 0x565578u: goto label_565578;
            case 0x565598u: goto label_565598;
            case 0x5655B8u: goto label_5655b8;
            case 0x5655D0u: goto label_5655d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x565478u;
label_565478:
    // 0x565478: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x565478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_56547c:
    // 0x56547c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x56547cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_565480:
    // 0x565480: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x565480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_565484:
    // 0x565484: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x565484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_565488:
    // 0x565488: 0xc1595a0  jal         func_565680
label_56548c:
    if (ctx->pc == 0x56548Cu) {
        ctx->pc = 0x56548Cu;
            // 0x56548c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x565490u;
        goto label_565490;
    }
    ctx->pc = 0x565488u;
    SET_GPR_U32(ctx, 31, 0x565490u);
    ctx->pc = 0x56548Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565488u;
            // 0x56548c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565680u;
    if (runtime->hasFunction(0x565680u)) {
        auto targetFn = runtime->lookupFunction(0x565680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565490u; }
        if (ctx->pc != 0x565490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565680_0x565680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565490u; }
        if (ctx->pc != 0x565490u) { return; }
    }
    ctx->pc = 0x565490u;
label_565490:
    // 0x565490: 0x1000004f  b           . + 4 + (0x4F << 2)
label_565494:
    if (ctx->pc == 0x565494u) {
        ctx->pc = 0x565498u;
        goto label_565498;
    }
    ctx->pc = 0x565490u;
    {
        const bool branch_taken_0x565490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x565490) {
            ctx->pc = 0x5655D0u;
            goto label_5655d0;
        }
    }
    ctx->pc = 0x565498u;
label_565498:
    // 0x565498: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x565498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_56549c:
    // 0x56549c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x56549cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5654a0:
    // 0x5654a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x5654a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5654a4:
    // 0x5654a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x5654a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5654a8:
    // 0x5654a8: 0xc1595a0  jal         func_565680
label_5654ac:
    if (ctx->pc == 0x5654ACu) {
        ctx->pc = 0x5654ACu;
            // 0x5654ac: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5654B0u;
        goto label_5654b0;
    }
    ctx->pc = 0x5654A8u;
    SET_GPR_U32(ctx, 31, 0x5654B0u);
    ctx->pc = 0x5654ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5654A8u;
            // 0x5654ac: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565680u;
    if (runtime->hasFunction(0x565680u)) {
        auto targetFn = runtime->lookupFunction(0x565680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5654B0u; }
        if (ctx->pc != 0x5654B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565680_0x565680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5654B0u; }
        if (ctx->pc != 0x5654B0u) { return; }
    }
    ctx->pc = 0x5654B0u;
label_5654b0:
    // 0x5654b0: 0x10000047  b           . + 4 + (0x47 << 2)
label_5654b4:
    if (ctx->pc == 0x5654B4u) {
        ctx->pc = 0x5654B8u;
        goto label_5654b8;
    }
    ctx->pc = 0x5654B0u;
    {
        const bool branch_taken_0x5654b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5654b0) {
            ctx->pc = 0x5655D0u;
            goto label_5655d0;
        }
    }
    ctx->pc = 0x5654B8u;
label_5654b8:
    // 0x5654b8: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x5654b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_5654bc:
    // 0x5654bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5654bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5654c0:
    // 0x5654c0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x5654c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_5654c4:
    // 0x5654c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x5654c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5654c8:
    // 0x5654c8: 0xc1595a0  jal         func_565680
label_5654cc:
    if (ctx->pc == 0x5654CCu) {
        ctx->pc = 0x5654CCu;
            // 0x5654cc: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5654D0u;
        goto label_5654d0;
    }
    ctx->pc = 0x5654C8u;
    SET_GPR_U32(ctx, 31, 0x5654D0u);
    ctx->pc = 0x5654CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5654C8u;
            // 0x5654cc: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565680u;
    if (runtime->hasFunction(0x565680u)) {
        auto targetFn = runtime->lookupFunction(0x565680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5654D0u; }
        if (ctx->pc != 0x5654D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565680_0x565680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5654D0u; }
        if (ctx->pc != 0x5654D0u) { return; }
    }
    ctx->pc = 0x5654D0u;
label_5654d0:
    // 0x5654d0: 0x1000003f  b           . + 4 + (0x3F << 2)
label_5654d4:
    if (ctx->pc == 0x5654D4u) {
        ctx->pc = 0x5654D8u;
        goto label_5654d8;
    }
    ctx->pc = 0x5654D0u;
    {
        const bool branch_taken_0x5654d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5654d0) {
            ctx->pc = 0x5655D0u;
            goto label_5655d0;
        }
    }
    ctx->pc = 0x5654D8u;
label_5654d8:
    // 0x5654d8: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x5654d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_5654dc:
    // 0x5654dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5654dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5654e0:
    // 0x5654e0: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x5654e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_5654e4:
    // 0x5654e4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x5654e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5654e8:
    // 0x5654e8: 0xc1595a0  jal         func_565680
label_5654ec:
    if (ctx->pc == 0x5654ECu) {
        ctx->pc = 0x5654ECu;
            // 0x5654ec: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5654F0u;
        goto label_5654f0;
    }
    ctx->pc = 0x5654E8u;
    SET_GPR_U32(ctx, 31, 0x5654F0u);
    ctx->pc = 0x5654ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5654E8u;
            // 0x5654ec: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565680u;
    if (runtime->hasFunction(0x565680u)) {
        auto targetFn = runtime->lookupFunction(0x565680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5654F0u; }
        if (ctx->pc != 0x5654F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565680_0x565680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5654F0u; }
        if (ctx->pc != 0x5654F0u) { return; }
    }
    ctx->pc = 0x5654F0u;
label_5654f0:
    // 0x5654f0: 0x10000037  b           . + 4 + (0x37 << 2)
label_5654f4:
    if (ctx->pc == 0x5654F4u) {
        ctx->pc = 0x5654F8u;
        goto label_5654f8;
    }
    ctx->pc = 0x5654F0u;
    {
        const bool branch_taken_0x5654f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5654f0) {
            ctx->pc = 0x5655D0u;
            goto label_5655d0;
        }
    }
    ctx->pc = 0x5654F8u;
label_5654f8:
    // 0x5654f8: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x5654f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_5654fc:
    // 0x5654fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5654fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_565500:
    // 0x565500: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x565500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_565504:
    // 0x565504: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x565504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_565508:
    // 0x565508: 0xc1595a0  jal         func_565680
label_56550c:
    if (ctx->pc == 0x56550Cu) {
        ctx->pc = 0x56550Cu;
            // 0x56550c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x565510u;
        goto label_565510;
    }
    ctx->pc = 0x565508u;
    SET_GPR_U32(ctx, 31, 0x565510u);
    ctx->pc = 0x56550Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565508u;
            // 0x56550c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565680u;
    if (runtime->hasFunction(0x565680u)) {
        auto targetFn = runtime->lookupFunction(0x565680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565510u; }
        if (ctx->pc != 0x565510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565680_0x565680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565510u; }
        if (ctx->pc != 0x565510u) { return; }
    }
    ctx->pc = 0x565510u;
label_565510:
    // 0x565510: 0x1000002f  b           . + 4 + (0x2F << 2)
label_565514:
    if (ctx->pc == 0x565514u) {
        ctx->pc = 0x565518u;
        goto label_565518;
    }
    ctx->pc = 0x565510u;
    {
        const bool branch_taken_0x565510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x565510) {
            ctx->pc = 0x5655D0u;
            goto label_5655d0;
        }
    }
    ctx->pc = 0x565518u;
label_565518:
    // 0x565518: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x565518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_56551c:
    // 0x56551c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x56551cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_565520:
    // 0x565520: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x565520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_565524:
    // 0x565524: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x565524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_565528:
    // 0x565528: 0xc1595a0  jal         func_565680
label_56552c:
    if (ctx->pc == 0x56552Cu) {
        ctx->pc = 0x56552Cu;
            // 0x56552c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x565530u;
        goto label_565530;
    }
    ctx->pc = 0x565528u;
    SET_GPR_U32(ctx, 31, 0x565530u);
    ctx->pc = 0x56552Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565528u;
            // 0x56552c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565680u;
    if (runtime->hasFunction(0x565680u)) {
        auto targetFn = runtime->lookupFunction(0x565680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565530u; }
        if (ctx->pc != 0x565530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565680_0x565680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565530u; }
        if (ctx->pc != 0x565530u) { return; }
    }
    ctx->pc = 0x565530u;
label_565530:
    // 0x565530: 0x10000027  b           . + 4 + (0x27 << 2)
label_565534:
    if (ctx->pc == 0x565534u) {
        ctx->pc = 0x565538u;
        goto label_565538;
    }
    ctx->pc = 0x565530u;
    {
        const bool branch_taken_0x565530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x565530) {
            ctx->pc = 0x5655D0u;
            goto label_5655d0;
        }
    }
    ctx->pc = 0x565538u;
label_565538:
    // 0x565538: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x565538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_56553c:
    // 0x56553c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x56553cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_565540:
    // 0x565540: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x565540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_565544:
    // 0x565544: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x565544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_565548:
    // 0x565548: 0xc1595a0  jal         func_565680
label_56554c:
    if (ctx->pc == 0x56554Cu) {
        ctx->pc = 0x56554Cu;
            // 0x56554c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x565550u;
        goto label_565550;
    }
    ctx->pc = 0x565548u;
    SET_GPR_U32(ctx, 31, 0x565550u);
    ctx->pc = 0x56554Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565548u;
            // 0x56554c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565680u;
    if (runtime->hasFunction(0x565680u)) {
        auto targetFn = runtime->lookupFunction(0x565680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565550u; }
        if (ctx->pc != 0x565550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565680_0x565680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565550u; }
        if (ctx->pc != 0x565550u) { return; }
    }
    ctx->pc = 0x565550u;
label_565550:
    // 0x565550: 0x1000001f  b           . + 4 + (0x1F << 2)
label_565554:
    if (ctx->pc == 0x565554u) {
        ctx->pc = 0x565558u;
        goto label_565558;
    }
    ctx->pc = 0x565550u;
    {
        const bool branch_taken_0x565550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x565550) {
            ctx->pc = 0x5655D0u;
            goto label_5655d0;
        }
    }
    ctx->pc = 0x565558u;
label_565558:
    // 0x565558: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x565558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_56555c:
    // 0x56555c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x56555cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_565560:
    // 0x565560: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x565560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_565564:
    // 0x565564: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x565564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_565568:
    // 0x565568: 0xc1595a0  jal         func_565680
label_56556c:
    if (ctx->pc == 0x56556Cu) {
        ctx->pc = 0x56556Cu;
            // 0x56556c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x565570u;
        goto label_565570;
    }
    ctx->pc = 0x565568u;
    SET_GPR_U32(ctx, 31, 0x565570u);
    ctx->pc = 0x56556Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565568u;
            // 0x56556c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565680u;
    if (runtime->hasFunction(0x565680u)) {
        auto targetFn = runtime->lookupFunction(0x565680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565570u; }
        if (ctx->pc != 0x565570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565680_0x565680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565570u; }
        if (ctx->pc != 0x565570u) { return; }
    }
    ctx->pc = 0x565570u;
label_565570:
    // 0x565570: 0x10000017  b           . + 4 + (0x17 << 2)
label_565574:
    if (ctx->pc == 0x565574u) {
        ctx->pc = 0x565578u;
        goto label_565578;
    }
    ctx->pc = 0x565570u;
    {
        const bool branch_taken_0x565570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x565570) {
            ctx->pc = 0x5655D0u;
            goto label_5655d0;
        }
    }
    ctx->pc = 0x565578u;
label_565578:
    // 0x565578: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x565578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_56557c:
    // 0x56557c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x56557cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_565580:
    // 0x565580: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x565580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_565584:
    // 0x565584: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x565584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_565588:
    // 0x565588: 0xc1595a0  jal         func_565680
label_56558c:
    if (ctx->pc == 0x56558Cu) {
        ctx->pc = 0x56558Cu;
            // 0x56558c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x565590u;
        goto label_565590;
    }
    ctx->pc = 0x565588u;
    SET_GPR_U32(ctx, 31, 0x565590u);
    ctx->pc = 0x56558Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565588u;
            // 0x56558c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565680u;
    if (runtime->hasFunction(0x565680u)) {
        auto targetFn = runtime->lookupFunction(0x565680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565590u; }
        if (ctx->pc != 0x565590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565680_0x565680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565590u; }
        if (ctx->pc != 0x565590u) { return; }
    }
    ctx->pc = 0x565590u;
label_565590:
    // 0x565590: 0x1000000f  b           . + 4 + (0xF << 2)
label_565594:
    if (ctx->pc == 0x565594u) {
        ctx->pc = 0x565598u;
        goto label_565598;
    }
    ctx->pc = 0x565590u;
    {
        const bool branch_taken_0x565590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x565590) {
            ctx->pc = 0x5655D0u;
            goto label_5655d0;
        }
    }
    ctx->pc = 0x565598u;
label_565598:
    // 0x565598: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x565598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_56559c:
    // 0x56559c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x56559cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5655a0:
    // 0x5655a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x5655a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5655a4:
    // 0x5655a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x5655a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5655a8:
    // 0x5655a8: 0xc1595a0  jal         func_565680
label_5655ac:
    if (ctx->pc == 0x5655ACu) {
        ctx->pc = 0x5655ACu;
            // 0x5655ac: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5655B0u;
        goto label_5655b0;
    }
    ctx->pc = 0x5655A8u;
    SET_GPR_U32(ctx, 31, 0x5655B0u);
    ctx->pc = 0x5655ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5655A8u;
            // 0x5655ac: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565680u;
    if (runtime->hasFunction(0x565680u)) {
        auto targetFn = runtime->lookupFunction(0x565680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5655B0u; }
        if (ctx->pc != 0x5655B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565680_0x565680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5655B0u; }
        if (ctx->pc != 0x5655B0u) { return; }
    }
    ctx->pc = 0x5655B0u;
label_5655b0:
    // 0x5655b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_5655b4:
    if (ctx->pc == 0x5655B4u) {
        ctx->pc = 0x5655B8u;
        goto label_5655b8;
    }
    ctx->pc = 0x5655B0u;
    {
        const bool branch_taken_0x5655b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5655b0) {
            ctx->pc = 0x5655D0u;
            goto label_5655d0;
        }
    }
    ctx->pc = 0x5655B8u;
label_5655b8:
    // 0x5655b8: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x5655b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_5655bc:
    // 0x5655bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5655bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5655c0:
    // 0x5655c0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x5655c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_5655c4:
    // 0x5655c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x5655c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5655c8:
    // 0x5655c8: 0xc1595a0  jal         func_565680
label_5655cc:
    if (ctx->pc == 0x5655CCu) {
        ctx->pc = 0x5655CCu;
            // 0x5655cc: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5655D0u;
        goto label_5655d0;
    }
    ctx->pc = 0x5655C8u;
    SET_GPR_U32(ctx, 31, 0x5655D0u);
    ctx->pc = 0x5655CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5655C8u;
            // 0x5655cc: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565680u;
    if (runtime->hasFunction(0x565680u)) {
        auto targetFn = runtime->lookupFunction(0x565680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5655D0u; }
        if (ctx->pc != 0x5655D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00565680_0x565680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5655D0u; }
        if (ctx->pc != 0x5655D0u) { return; }
    }
    ctx->pc = 0x5655D0u;
label_5655d0:
    // 0x5655d0: 0x8243007c  lb          $v1, 0x7C($s2)
    ctx->pc = 0x5655d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 124)));
label_5655d4:
    // 0x5655d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x5655d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_5655d8:
    // 0x5655d8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x5655d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_5655dc:
    // 0x5655dc: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x5655dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_5655e0:
    // 0x5655e0: 0x1460ff82  bnez        $v1, . + 4 + (-0x7E << 2)
label_5655e4:
    if (ctx->pc == 0x5655E4u) {
        ctx->pc = 0x5655E4u;
            // 0x5655e4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x5655E8u;
        goto label_5655e8;
    }
    ctx->pc = 0x5655E0u;
    {
        const bool branch_taken_0x5655e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5655E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5655E0u;
            // 0x5655e4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5655e0) {
            ctx->pc = 0x5653ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5653ec;
        }
    }
    ctx->pc = 0x5655E8u;
label_5655e8:
    // 0x5655e8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5655e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5655ec:
    // 0x5655ec: 0x8e460060  lw          $a2, 0x60($s2)
    ctx->pc = 0x5655ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_5655f0:
    // 0x5655f0: 0x8c650e68  lw          $a1, 0xE68($v1)
    ctx->pc = 0x5655f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
label_5655f4:
    // 0x5655f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x5655f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_5655f8:
    // 0x5655f8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_5655fc:
    if (ctx->pc == 0x5655FCu) {
        ctx->pc = 0x5655FCu;
            // 0x5655fc: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x565600u;
        goto label_565600;
    }
    ctx->pc = 0x5655F8u;
    {
        const bool branch_taken_0x5655f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x5655FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5655F8u;
            // 0x5655fc: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5655f8) {
            ctx->pc = 0x56561Cu;
            goto label_56561c;
        }
    }
    ctx->pc = 0x565600u;
label_565600:
    // 0x565600: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x565600u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_565604:
    // 0x565604: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x565604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_565608:
    // 0x565608: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x565608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_56560c:
    // 0x56560c: 0x0  nop
    ctx->pc = 0x56560cu;
    // NOP
label_565610:
    // 0x565610: 0x0  nop
    ctx->pc = 0x565610u;
    // NOP
label_565614:
    // 0x565614: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_565618:
    if (ctx->pc == 0x565618u) {
        ctx->pc = 0x56561Cu;
        goto label_56561c;
    }
    ctx->pc = 0x565614u;
    {
        const bool branch_taken_0x565614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x565614) {
            ctx->pc = 0x565600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_565600;
        }
    }
    ctx->pc = 0x56561Cu;
label_56561c:
    // 0x56561c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x56561cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_565620:
    // 0x565620: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x565620u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_565624:
    // 0x565624: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x565624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_565628:
    // 0x565628: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x565628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_56562c:
    // 0x56562c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x56562cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_565630:
    // 0x565630: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x565630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_565634:
    // 0x565634: 0xafa50084  sw          $a1, 0x84($sp)
    ctx->pc = 0x565634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 5));
label_565638:
    // 0x565638: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x565638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
label_56563c:
    // 0x56563c: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x56563cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
label_565640:
    // 0x565640: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x565640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
label_565644:
    // 0x565644: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x565644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
label_565648:
    // 0x565648: 0xafa5008c  sw          $a1, 0x8C($sp)
    ctx->pc = 0x565648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 5));
label_56564c:
    // 0x56564c: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x56564cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
label_565650:
    // 0x565650: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x565650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_565654:
    // 0x565654: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x565654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_565658:
    // 0x565658: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x565658u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_56565c:
    // 0x56565c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x56565cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_565660:
    // 0x565660: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x565660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_565664:
    // 0x565664: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x565664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_565668:
    // 0x565668: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x565668u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_56566c:
    // 0x56566c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x56566cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_565670:
    // 0x565670: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x565670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_565674:
    // 0x565674: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x565674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_565678:
    // 0x565678: 0x3e00008  jr          $ra
label_56567c:
    if (ctx->pc == 0x56567Cu) {
        ctx->pc = 0x56567Cu;
            // 0x56567c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x565680u;
        goto label_fallthrough_0x565678;
    }
    ctx->pc = 0x565678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56567Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565678u;
            // 0x56567c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x565678:
    ctx->pc = 0x565680u;
}
