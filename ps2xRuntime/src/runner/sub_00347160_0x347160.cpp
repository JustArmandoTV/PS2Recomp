#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00347160
// Address: 0x347160 - 0x347670
void sub_00347160_0x347160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347160_0x347160");
#endif

    switch (ctx->pc) {
        case 0x347160u: goto label_347160;
        case 0x347164u: goto label_347164;
        case 0x347168u: goto label_347168;
        case 0x34716cu: goto label_34716c;
        case 0x347170u: goto label_347170;
        case 0x347174u: goto label_347174;
        case 0x347178u: goto label_347178;
        case 0x34717cu: goto label_34717c;
        case 0x347180u: goto label_347180;
        case 0x347184u: goto label_347184;
        case 0x347188u: goto label_347188;
        case 0x34718cu: goto label_34718c;
        case 0x347190u: goto label_347190;
        case 0x347194u: goto label_347194;
        case 0x347198u: goto label_347198;
        case 0x34719cu: goto label_34719c;
        case 0x3471a0u: goto label_3471a0;
        case 0x3471a4u: goto label_3471a4;
        case 0x3471a8u: goto label_3471a8;
        case 0x3471acu: goto label_3471ac;
        case 0x3471b0u: goto label_3471b0;
        case 0x3471b4u: goto label_3471b4;
        case 0x3471b8u: goto label_3471b8;
        case 0x3471bcu: goto label_3471bc;
        case 0x3471c0u: goto label_3471c0;
        case 0x3471c4u: goto label_3471c4;
        case 0x3471c8u: goto label_3471c8;
        case 0x3471ccu: goto label_3471cc;
        case 0x3471d0u: goto label_3471d0;
        case 0x3471d4u: goto label_3471d4;
        case 0x3471d8u: goto label_3471d8;
        case 0x3471dcu: goto label_3471dc;
        case 0x3471e0u: goto label_3471e0;
        case 0x3471e4u: goto label_3471e4;
        case 0x3471e8u: goto label_3471e8;
        case 0x3471ecu: goto label_3471ec;
        case 0x3471f0u: goto label_3471f0;
        case 0x3471f4u: goto label_3471f4;
        case 0x3471f8u: goto label_3471f8;
        case 0x3471fcu: goto label_3471fc;
        case 0x347200u: goto label_347200;
        case 0x347204u: goto label_347204;
        case 0x347208u: goto label_347208;
        case 0x34720cu: goto label_34720c;
        case 0x347210u: goto label_347210;
        case 0x347214u: goto label_347214;
        case 0x347218u: goto label_347218;
        case 0x34721cu: goto label_34721c;
        case 0x347220u: goto label_347220;
        case 0x347224u: goto label_347224;
        case 0x347228u: goto label_347228;
        case 0x34722cu: goto label_34722c;
        case 0x347230u: goto label_347230;
        case 0x347234u: goto label_347234;
        case 0x347238u: goto label_347238;
        case 0x34723cu: goto label_34723c;
        case 0x347240u: goto label_347240;
        case 0x347244u: goto label_347244;
        case 0x347248u: goto label_347248;
        case 0x34724cu: goto label_34724c;
        case 0x347250u: goto label_347250;
        case 0x347254u: goto label_347254;
        case 0x347258u: goto label_347258;
        case 0x34725cu: goto label_34725c;
        case 0x347260u: goto label_347260;
        case 0x347264u: goto label_347264;
        case 0x347268u: goto label_347268;
        case 0x34726cu: goto label_34726c;
        case 0x347270u: goto label_347270;
        case 0x347274u: goto label_347274;
        case 0x347278u: goto label_347278;
        case 0x34727cu: goto label_34727c;
        case 0x347280u: goto label_347280;
        case 0x347284u: goto label_347284;
        case 0x347288u: goto label_347288;
        case 0x34728cu: goto label_34728c;
        case 0x347290u: goto label_347290;
        case 0x347294u: goto label_347294;
        case 0x347298u: goto label_347298;
        case 0x34729cu: goto label_34729c;
        case 0x3472a0u: goto label_3472a0;
        case 0x3472a4u: goto label_3472a4;
        case 0x3472a8u: goto label_3472a8;
        case 0x3472acu: goto label_3472ac;
        case 0x3472b0u: goto label_3472b0;
        case 0x3472b4u: goto label_3472b4;
        case 0x3472b8u: goto label_3472b8;
        case 0x3472bcu: goto label_3472bc;
        case 0x3472c0u: goto label_3472c0;
        case 0x3472c4u: goto label_3472c4;
        case 0x3472c8u: goto label_3472c8;
        case 0x3472ccu: goto label_3472cc;
        case 0x3472d0u: goto label_3472d0;
        case 0x3472d4u: goto label_3472d4;
        case 0x3472d8u: goto label_3472d8;
        case 0x3472dcu: goto label_3472dc;
        case 0x3472e0u: goto label_3472e0;
        case 0x3472e4u: goto label_3472e4;
        case 0x3472e8u: goto label_3472e8;
        case 0x3472ecu: goto label_3472ec;
        case 0x3472f0u: goto label_3472f0;
        case 0x3472f4u: goto label_3472f4;
        case 0x3472f8u: goto label_3472f8;
        case 0x3472fcu: goto label_3472fc;
        case 0x347300u: goto label_347300;
        case 0x347304u: goto label_347304;
        case 0x347308u: goto label_347308;
        case 0x34730cu: goto label_34730c;
        case 0x347310u: goto label_347310;
        case 0x347314u: goto label_347314;
        case 0x347318u: goto label_347318;
        case 0x34731cu: goto label_34731c;
        case 0x347320u: goto label_347320;
        case 0x347324u: goto label_347324;
        case 0x347328u: goto label_347328;
        case 0x34732cu: goto label_34732c;
        case 0x347330u: goto label_347330;
        case 0x347334u: goto label_347334;
        case 0x347338u: goto label_347338;
        case 0x34733cu: goto label_34733c;
        case 0x347340u: goto label_347340;
        case 0x347344u: goto label_347344;
        case 0x347348u: goto label_347348;
        case 0x34734cu: goto label_34734c;
        case 0x347350u: goto label_347350;
        case 0x347354u: goto label_347354;
        case 0x347358u: goto label_347358;
        case 0x34735cu: goto label_34735c;
        case 0x347360u: goto label_347360;
        case 0x347364u: goto label_347364;
        case 0x347368u: goto label_347368;
        case 0x34736cu: goto label_34736c;
        case 0x347370u: goto label_347370;
        case 0x347374u: goto label_347374;
        case 0x347378u: goto label_347378;
        case 0x34737cu: goto label_34737c;
        case 0x347380u: goto label_347380;
        case 0x347384u: goto label_347384;
        case 0x347388u: goto label_347388;
        case 0x34738cu: goto label_34738c;
        case 0x347390u: goto label_347390;
        case 0x347394u: goto label_347394;
        case 0x347398u: goto label_347398;
        case 0x34739cu: goto label_34739c;
        case 0x3473a0u: goto label_3473a0;
        case 0x3473a4u: goto label_3473a4;
        case 0x3473a8u: goto label_3473a8;
        case 0x3473acu: goto label_3473ac;
        case 0x3473b0u: goto label_3473b0;
        case 0x3473b4u: goto label_3473b4;
        case 0x3473b8u: goto label_3473b8;
        case 0x3473bcu: goto label_3473bc;
        case 0x3473c0u: goto label_3473c0;
        case 0x3473c4u: goto label_3473c4;
        case 0x3473c8u: goto label_3473c8;
        case 0x3473ccu: goto label_3473cc;
        case 0x3473d0u: goto label_3473d0;
        case 0x3473d4u: goto label_3473d4;
        case 0x3473d8u: goto label_3473d8;
        case 0x3473dcu: goto label_3473dc;
        case 0x3473e0u: goto label_3473e0;
        case 0x3473e4u: goto label_3473e4;
        case 0x3473e8u: goto label_3473e8;
        case 0x3473ecu: goto label_3473ec;
        case 0x3473f0u: goto label_3473f0;
        case 0x3473f4u: goto label_3473f4;
        case 0x3473f8u: goto label_3473f8;
        case 0x3473fcu: goto label_3473fc;
        case 0x347400u: goto label_347400;
        case 0x347404u: goto label_347404;
        case 0x347408u: goto label_347408;
        case 0x34740cu: goto label_34740c;
        case 0x347410u: goto label_347410;
        case 0x347414u: goto label_347414;
        case 0x347418u: goto label_347418;
        case 0x34741cu: goto label_34741c;
        case 0x347420u: goto label_347420;
        case 0x347424u: goto label_347424;
        case 0x347428u: goto label_347428;
        case 0x34742cu: goto label_34742c;
        case 0x347430u: goto label_347430;
        case 0x347434u: goto label_347434;
        case 0x347438u: goto label_347438;
        case 0x34743cu: goto label_34743c;
        case 0x347440u: goto label_347440;
        case 0x347444u: goto label_347444;
        case 0x347448u: goto label_347448;
        case 0x34744cu: goto label_34744c;
        case 0x347450u: goto label_347450;
        case 0x347454u: goto label_347454;
        case 0x347458u: goto label_347458;
        case 0x34745cu: goto label_34745c;
        case 0x347460u: goto label_347460;
        case 0x347464u: goto label_347464;
        case 0x347468u: goto label_347468;
        case 0x34746cu: goto label_34746c;
        case 0x347470u: goto label_347470;
        case 0x347474u: goto label_347474;
        case 0x347478u: goto label_347478;
        case 0x34747cu: goto label_34747c;
        case 0x347480u: goto label_347480;
        case 0x347484u: goto label_347484;
        case 0x347488u: goto label_347488;
        case 0x34748cu: goto label_34748c;
        case 0x347490u: goto label_347490;
        case 0x347494u: goto label_347494;
        case 0x347498u: goto label_347498;
        case 0x34749cu: goto label_34749c;
        case 0x3474a0u: goto label_3474a0;
        case 0x3474a4u: goto label_3474a4;
        case 0x3474a8u: goto label_3474a8;
        case 0x3474acu: goto label_3474ac;
        case 0x3474b0u: goto label_3474b0;
        case 0x3474b4u: goto label_3474b4;
        case 0x3474b8u: goto label_3474b8;
        case 0x3474bcu: goto label_3474bc;
        case 0x3474c0u: goto label_3474c0;
        case 0x3474c4u: goto label_3474c4;
        case 0x3474c8u: goto label_3474c8;
        case 0x3474ccu: goto label_3474cc;
        case 0x3474d0u: goto label_3474d0;
        case 0x3474d4u: goto label_3474d4;
        case 0x3474d8u: goto label_3474d8;
        case 0x3474dcu: goto label_3474dc;
        case 0x3474e0u: goto label_3474e0;
        case 0x3474e4u: goto label_3474e4;
        case 0x3474e8u: goto label_3474e8;
        case 0x3474ecu: goto label_3474ec;
        case 0x3474f0u: goto label_3474f0;
        case 0x3474f4u: goto label_3474f4;
        case 0x3474f8u: goto label_3474f8;
        case 0x3474fcu: goto label_3474fc;
        case 0x347500u: goto label_347500;
        case 0x347504u: goto label_347504;
        case 0x347508u: goto label_347508;
        case 0x34750cu: goto label_34750c;
        case 0x347510u: goto label_347510;
        case 0x347514u: goto label_347514;
        case 0x347518u: goto label_347518;
        case 0x34751cu: goto label_34751c;
        case 0x347520u: goto label_347520;
        case 0x347524u: goto label_347524;
        case 0x347528u: goto label_347528;
        case 0x34752cu: goto label_34752c;
        case 0x347530u: goto label_347530;
        case 0x347534u: goto label_347534;
        case 0x347538u: goto label_347538;
        case 0x34753cu: goto label_34753c;
        case 0x347540u: goto label_347540;
        case 0x347544u: goto label_347544;
        case 0x347548u: goto label_347548;
        case 0x34754cu: goto label_34754c;
        case 0x347550u: goto label_347550;
        case 0x347554u: goto label_347554;
        case 0x347558u: goto label_347558;
        case 0x34755cu: goto label_34755c;
        case 0x347560u: goto label_347560;
        case 0x347564u: goto label_347564;
        case 0x347568u: goto label_347568;
        case 0x34756cu: goto label_34756c;
        case 0x347570u: goto label_347570;
        case 0x347574u: goto label_347574;
        case 0x347578u: goto label_347578;
        case 0x34757cu: goto label_34757c;
        case 0x347580u: goto label_347580;
        case 0x347584u: goto label_347584;
        case 0x347588u: goto label_347588;
        case 0x34758cu: goto label_34758c;
        case 0x347590u: goto label_347590;
        case 0x347594u: goto label_347594;
        case 0x347598u: goto label_347598;
        case 0x34759cu: goto label_34759c;
        case 0x3475a0u: goto label_3475a0;
        case 0x3475a4u: goto label_3475a4;
        case 0x3475a8u: goto label_3475a8;
        case 0x3475acu: goto label_3475ac;
        case 0x3475b0u: goto label_3475b0;
        case 0x3475b4u: goto label_3475b4;
        case 0x3475b8u: goto label_3475b8;
        case 0x3475bcu: goto label_3475bc;
        case 0x3475c0u: goto label_3475c0;
        case 0x3475c4u: goto label_3475c4;
        case 0x3475c8u: goto label_3475c8;
        case 0x3475ccu: goto label_3475cc;
        case 0x3475d0u: goto label_3475d0;
        case 0x3475d4u: goto label_3475d4;
        case 0x3475d8u: goto label_3475d8;
        case 0x3475dcu: goto label_3475dc;
        case 0x3475e0u: goto label_3475e0;
        case 0x3475e4u: goto label_3475e4;
        case 0x3475e8u: goto label_3475e8;
        case 0x3475ecu: goto label_3475ec;
        case 0x3475f0u: goto label_3475f0;
        case 0x3475f4u: goto label_3475f4;
        case 0x3475f8u: goto label_3475f8;
        case 0x3475fcu: goto label_3475fc;
        case 0x347600u: goto label_347600;
        case 0x347604u: goto label_347604;
        case 0x347608u: goto label_347608;
        case 0x34760cu: goto label_34760c;
        case 0x347610u: goto label_347610;
        case 0x347614u: goto label_347614;
        case 0x347618u: goto label_347618;
        case 0x34761cu: goto label_34761c;
        case 0x347620u: goto label_347620;
        case 0x347624u: goto label_347624;
        case 0x347628u: goto label_347628;
        case 0x34762cu: goto label_34762c;
        case 0x347630u: goto label_347630;
        case 0x347634u: goto label_347634;
        case 0x347638u: goto label_347638;
        case 0x34763cu: goto label_34763c;
        case 0x347640u: goto label_347640;
        case 0x347644u: goto label_347644;
        case 0x347648u: goto label_347648;
        case 0x34764cu: goto label_34764c;
        case 0x347650u: goto label_347650;
        case 0x347654u: goto label_347654;
        case 0x347658u: goto label_347658;
        case 0x34765cu: goto label_34765c;
        case 0x347660u: goto label_347660;
        case 0x347664u: goto label_347664;
        case 0x347668u: goto label_347668;
        case 0x34766cu: goto label_34766c;
        default: break;
    }

    ctx->pc = 0x347160u;

label_347160:
    // 0x347160: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x347160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_347164:
    // 0x347164: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x347164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_347168:
    // 0x347168: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x347168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_34716c:
    // 0x34716c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x34716cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_347170:
    // 0x347170: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x347170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_347174:
    // 0x347174: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x347174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_347178:
    // 0x347178: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x347178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_34717c:
    // 0x34717c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x34717cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_347180:
    // 0x347180: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x347180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_347184:
    // 0x347184: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x347184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_347188:
    // 0x347188: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x347188u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_34718c:
    // 0x34718c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x34718cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_347190:
    // 0x347190: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x347190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_347194:
    // 0x347194: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x347194u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_347198:
    // 0x347198: 0x26520e84  addiu       $s2, $s2, 0xE84
    ctx->pc = 0x347198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3716));
label_34719c:
    // 0x34719c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x34719cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3471a0:
    // 0x3471a0: 0x26710084  addiu       $s1, $s3, 0x84
    ctx->pc = 0x3471a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_3471a4:
    // 0x3471a4: 0x8c840e80  lw          $a0, 0xE80($a0)
    ctx->pc = 0x3471a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3712)));
label_3471a8:
    // 0x3471a8: 0xc4741360  lwc1        $f20, 0x1360($v1)
    ctx->pc = 0x3471a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3471ac:
    // 0x3471ac: 0x8c96077c  lw          $s6, 0x77C($a0)
    ctx->pc = 0x3471acu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
label_3471b0:
    // 0x3471b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3471b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3471b4:
    // 0x3471b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3471b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3471b8:
    // 0x3471b8: 0x1083003f  beq         $a0, $v1, . + 4 + (0x3F << 2)
label_3471bc:
    if (ctx->pc == 0x3471BCu) {
        ctx->pc = 0x3471C0u;
        goto label_3471c0;
    }
    ctx->pc = 0x3471B8u;
    {
        const bool branch_taken_0x3471b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3471b8) {
            ctx->pc = 0x3472B8u;
            goto label_3472b8;
        }
    }
    ctx->pc = 0x3471C0u;
label_3471c0:
    // 0x3471c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3471c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3471c4:
    // 0x3471c4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_3471c8:
    if (ctx->pc == 0x3471C8u) {
        ctx->pc = 0x3471CCu;
        goto label_3471cc;
    }
    ctx->pc = 0x3471C4u;
    {
        const bool branch_taken_0x3471c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3471c4) {
            ctx->pc = 0x3471E0u;
            goto label_3471e0;
        }
    }
    ctx->pc = 0x3471CCu;
label_3471cc:
    // 0x3471cc: 0x10800116  beqz        $a0, . + 4 + (0x116 << 2)
label_3471d0:
    if (ctx->pc == 0x3471D0u) {
        ctx->pc = 0x3471D4u;
        goto label_3471d4;
    }
    ctx->pc = 0x3471CCu;
    {
        const bool branch_taken_0x3471cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3471cc) {
            ctx->pc = 0x347628u;
            goto label_347628;
        }
    }
    ctx->pc = 0x3471D4u;
label_3471d4:
    // 0x3471d4: 0x10000114  b           . + 4 + (0x114 << 2)
label_3471d8:
    if (ctx->pc == 0x3471D8u) {
        ctx->pc = 0x3471DCu;
        goto label_3471dc;
    }
    ctx->pc = 0x3471D4u;
    {
        const bool branch_taken_0x3471d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3471d4) {
            ctx->pc = 0x347628u;
            goto label_347628;
        }
    }
    ctx->pc = 0x3471DCu;
label_3471dc:
    // 0x3471dc: 0x0  nop
    ctx->pc = 0x3471dcu;
    // NOP
label_3471e0:
    // 0x3471e0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x3471e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3471e4:
    // 0x3471e4: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x3471e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_3471e8:
    // 0x3471e8: 0x26650070  addiu       $a1, $s3, 0x70
    ctx->pc = 0x3471e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_3471ec:
    // 0x3471ec: 0x8e030d9c  lw          $v1, 0xD9C($s0)
    ctx->pc = 0x3471ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3484)));
label_3471f0:
    // 0x3471f0: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x3471f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_3471f4:
    // 0x3471f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3471f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3471f8:
    // 0x3471f8: 0xc04cc34  jal         func_1330D0
label_3471fc:
    if (ctx->pc == 0x3471FCu) {
        ctx->pc = 0x3471FCu;
            // 0x3471fc: 0xae020d9c  sw          $v0, 0xD9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 2));
        ctx->pc = 0x347200u;
        goto label_347200;
    }
    ctx->pc = 0x3471F8u;
    SET_GPR_U32(ctx, 31, 0x347200u);
    ctx->pc = 0x3471FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3471F8u;
            // 0x3471fc: 0xae020d9c  sw          $v0, 0xD9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347200u; }
        if (ctx->pc != 0x347200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347200u; }
        if (ctx->pc != 0x347200u) { return; }
    }
    ctx->pc = 0x347200u;
label_347200:
    // 0x347200: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x347200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
label_347204:
    // 0x347204: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x347204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_347208:
    // 0x347208: 0x0  nop
    ctx->pc = 0x347208u;
    // NOP
label_34720c:
    // 0x34720c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34720cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_347210:
    // 0x347210: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_347214:
    if (ctx->pc == 0x347214u) {
        ctx->pc = 0x347218u;
        goto label_347218;
    }
    ctx->pc = 0x347210u;
    {
        const bool branch_taken_0x347210 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x347210) {
            ctx->pc = 0x347228u;
            goto label_347228;
        }
    }
    ctx->pc = 0x347218u;
label_347218:
    // 0x347218: 0xae000de4  sw          $zero, 0xDE4($s0)
    ctx->pc = 0x347218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 0));
label_34721c:
    // 0x34721c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34721cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_347220:
    // 0x347220: 0x10000101  b           . + 4 + (0x101 << 2)
label_347224:
    if (ctx->pc == 0x347224u) {
        ctx->pc = 0x347224u;
            // 0x347224: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x347228u;
        goto label_347228;
    }
    ctx->pc = 0x347220u;
    {
        const bool branch_taken_0x347220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347220u;
            // 0x347224: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347220) {
            ctx->pc = 0x347628u;
            goto label_347628;
        }
    }
    ctx->pc = 0x347228u;
label_347228:
    // 0x347228: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x347228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_34722c:
    // 0x34722c: 0x26650070  addiu       $a1, $s3, 0x70
    ctx->pc = 0x34722cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_347230:
    // 0x347230: 0xc04cc90  jal         func_133240
label_347234:
    if (ctx->pc == 0x347234u) {
        ctx->pc = 0x347234u;
            // 0x347234: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x347238u;
        goto label_347238;
    }
    ctx->pc = 0x347230u;
    SET_GPR_U32(ctx, 31, 0x347238u);
    ctx->pc = 0x347234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347230u;
            // 0x347234: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347238u; }
        if (ctx->pc != 0x347238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347238u; }
        if (ctx->pc != 0x347238u) { return; }
    }
    ctx->pc = 0x347238u;
label_347238:
    // 0x347238: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x347238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_34723c:
    // 0x34723c: 0xc04cc44  jal         func_133110
label_347240:
    if (ctx->pc == 0x347240u) {
        ctx->pc = 0x347240u;
            // 0x347240: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x347244u;
        goto label_347244;
    }
    ctx->pc = 0x34723Cu;
    SET_GPR_U32(ctx, 31, 0x347244u);
    ctx->pc = 0x347240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34723Cu;
            // 0x347240: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347244u; }
        if (ctx->pc != 0x347244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347244u; }
        if (ctx->pc != 0x347244u) { return; }
    }
    ctx->pc = 0x347244u;
label_347244:
    // 0x347244: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x347244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_347248:
    // 0x347248: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x347248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_34724c:
    // 0x34724c: 0xc075378  jal         func_1D4DE0
label_347250:
    if (ctx->pc == 0x347250u) {
        ctx->pc = 0x347250u;
            // 0x347250: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->pc = 0x347254u;
        goto label_347254;
    }
    ctx->pc = 0x34724Cu;
    SET_GPR_U32(ctx, 31, 0x347254u);
    ctx->pc = 0x347250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34724Cu;
            // 0x347250: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347254u; }
        if (ctx->pc != 0x347254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347254u; }
        if (ctx->pc != 0x347254u) { return; }
    }
    ctx->pc = 0x347254u;
label_347254:
    // 0x347254: 0xc6010880  lwc1        $f1, 0x880($s0)
    ctx->pc = 0x347254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_347258:
    // 0x347258: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x347258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
label_34725c:
    // 0x34725c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x34725cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_347260:
    // 0x347260: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x347260u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_347264:
    // 0x347264: 0xc0c753c  jal         func_31D4F0
label_347268:
    if (ctx->pc == 0x347268u) {
        ctx->pc = 0x347268u;
            // 0x347268: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x34726Cu;
        goto label_34726c;
    }
    ctx->pc = 0x347264u;
    SET_GPR_U32(ctx, 31, 0x34726Cu);
    ctx->pc = 0x347268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347264u;
            // 0x347268: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34726Cu; }
        if (ctx->pc != 0x34726Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34726Cu; }
        if (ctx->pc != 0x34726Cu) { return; }
    }
    ctx->pc = 0x34726Cu;
label_34726c:
    // 0x34726c: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x34726cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_347270:
    // 0x347270: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x347270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_347274:
    // 0x347274: 0xc60c0930  lwc1        $f12, 0x930($s0)
    ctx->pc = 0x347274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_347278:
    // 0x347278: 0xc60d0880  lwc1        $f13, 0x880($s0)
    ctx->pc = 0x347278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_34727c:
    // 0x34727c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x34727cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_347280:
    // 0x347280: 0xc0c753c  jal         func_31D4F0
label_347284:
    if (ctx->pc == 0x347284u) {
        ctx->pc = 0x347284u;
            // 0x347284: 0x2604092c  addiu       $a0, $s0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
        ctx->pc = 0x347288u;
        goto label_347288;
    }
    ctx->pc = 0x347280u;
    SET_GPR_U32(ctx, 31, 0x347288u);
    ctx->pc = 0x347284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347280u;
            // 0x347284: 0x2604092c  addiu       $a0, $s0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347288u; }
        if (ctx->pc != 0x347288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347288u; }
        if (ctx->pc != 0x347288u) { return; }
    }
    ctx->pc = 0x347288u;
label_347288:
    // 0x347288: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x347288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_34728c:
    // 0x34728c: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x34728cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_347290:
    // 0x347290: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x347290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_347294:
    // 0x347294: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x347294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_347298:
    // 0x347298: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x347298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34729c:
    // 0x34729c: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x34729cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_3472a0:
    // 0x3472a0: 0xc0c6250  jal         func_318940
label_3472a4:
    if (ctx->pc == 0x3472A4u) {
        ctx->pc = 0x3472A4u;
            // 0x3472a4: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->pc = 0x3472A8u;
        goto label_3472a8;
    }
    ctx->pc = 0x3472A0u;
    SET_GPR_U32(ctx, 31, 0x3472A8u);
    ctx->pc = 0x3472A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3472A0u;
            // 0x3472a4: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3472A8u; }
        if (ctx->pc != 0x3472A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3472A8u; }
        if (ctx->pc != 0x3472A8u) { return; }
    }
    ctx->pc = 0x3472A8u;
label_3472a8:
    // 0x3472a8: 0x3c033e6d  lui         $v1, 0x3E6D
    ctx->pc = 0x3472a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
label_3472ac:
    // 0x3472ac: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x3472acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_3472b0:
    // 0x3472b0: 0x100000dd  b           . + 4 + (0xDD << 2)
label_3472b4:
    if (ctx->pc == 0x3472B4u) {
        ctx->pc = 0x3472B4u;
            // 0x3472b4: 0xae030de4  sw          $v1, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 3));
        ctx->pc = 0x3472B8u;
        goto label_3472b8;
    }
    ctx->pc = 0x3472B0u;
    {
        const bool branch_taken_0x3472b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3472B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3472B0u;
            // 0x3472b4: 0xae030de4  sw          $v1, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3472b0) {
            ctx->pc = 0x347628u;
            goto label_347628;
        }
    }
    ctx->pc = 0x3472B8u;
label_3472b8:
    // 0x3472b8: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x3472b8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3472bc:
    // 0x3472bc: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x3472bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_3472c0:
    // 0x3472c0: 0x8ea40d9c  lw          $a0, 0xD9C($s5)
    ctx->pc = 0x3472c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3484)));
label_3472c4:
    // 0x3472c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3472c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3472c8:
    // 0x3472c8: 0xaea30d9c  sw          $v1, 0xD9C($s5)
    ctx->pc = 0x3472c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3484), GPR_U32(ctx, 3));
label_3472cc:
    // 0x3472cc: 0x8e6600a8  lw          $a2, 0xA8($s3)
    ctx->pc = 0x3472ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
label_3472d0:
    // 0x3472d0: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
label_3472d4:
    if (ctx->pc == 0x3472D4u) {
        ctx->pc = 0x3472D8u;
        goto label_3472d8;
    }
    ctx->pc = 0x3472D0u;
    {
        const bool branch_taken_0x3472d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3472d0) {
            ctx->pc = 0x347310u;
            goto label_347310;
        }
    }
    ctx->pc = 0x3472D8u;
label_3472d8:
    // 0x3472d8: 0x8e6500b8  lw          $a1, 0xB8($s3)
    ctx->pc = 0x3472d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_3472dc:
    // 0x3472dc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3472dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3472e0:
    // 0x3472e0: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x3472e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3472e4:
    // 0x3472e4: 0x8e0401c4  lw          $a0, 0x1C4($s0)
    ctx->pc = 0x3472e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_3472e8:
    // 0x3472e8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_3472ec:
    if (ctx->pc == 0x3472ECu) {
        ctx->pc = 0x3472F0u;
        goto label_3472f0;
    }
    ctx->pc = 0x3472E8u;
    {
        const bool branch_taken_0x3472e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3472e8) {
            ctx->pc = 0x3472F8u;
            goto label_3472f8;
        }
    }
    ctx->pc = 0x3472F0u;
label_3472f0:
    // 0x3472f0: 0x10000009  b           . + 4 + (0x9 << 2)
label_3472f4:
    if (ctx->pc == 0x3472F4u) {
        ctx->pc = 0x3472F8u;
        goto label_3472f8;
    }
    ctx->pc = 0x3472F0u;
    {
        const bool branch_taken_0x3472f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3472f0) {
            ctx->pc = 0x347318u;
            goto label_347318;
        }
    }
    ctx->pc = 0x3472F8u;
label_3472f8:
    // 0x3472f8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3472f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3472fc:
    // 0x3472fc: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
label_347300:
    if (ctx->pc == 0x347300u) {
        ctx->pc = 0x347300u;
            // 0x347300: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x347304u;
        goto label_347304;
    }
    ctx->pc = 0x3472FCu;
    {
        const bool branch_taken_0x3472fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x347300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3472FCu;
            // 0x347300: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3472fc) {
            ctx->pc = 0x3472E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3472e0;
        }
    }
    ctx->pc = 0x347304u;
label_347304:
    // 0x347304: 0x10000004  b           . + 4 + (0x4 << 2)
label_347308:
    if (ctx->pc == 0x347308u) {
        ctx->pc = 0x347308u;
            // 0x347308: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34730Cu;
        goto label_34730c;
    }
    ctx->pc = 0x347304u;
    {
        const bool branch_taken_0x347304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347304u;
            // 0x347308: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347304) {
            ctx->pc = 0x347318u;
            goto label_347318;
        }
    }
    ctx->pc = 0x34730Cu;
label_34730c:
    // 0x34730c: 0x0  nop
    ctx->pc = 0x34730cu;
    // NOP
label_347310:
    // 0x347310: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x347310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347314:
    // 0x347314: 0x0  nop
    ctx->pc = 0x347314u;
    // NOP
label_347318:
    // 0x347318: 0x120000c3  beqz        $s0, . + 4 + (0xC3 << 2)
label_34731c:
    if (ctx->pc == 0x34731Cu) {
        ctx->pc = 0x347320u;
        goto label_347320;
    }
    ctx->pc = 0x347318u;
    {
        const bool branch_taken_0x347318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x347318) {
            ctx->pc = 0x347628u;
            goto label_347628;
        }
    }
    ctx->pc = 0x347320u;
label_347320:
    // 0x347320: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x347320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_347324:
    // 0x347324: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x347324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_347328:
    // 0x347328: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x347328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_34732c:
    // 0x34732c: 0x320f809  jalr        $t9
label_347330:
    if (ctx->pc == 0x347330u) {
        ctx->pc = 0x347330u;
            // 0x347330: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x347334u;
        goto label_347334;
    }
    ctx->pc = 0x34732Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x347334u);
        ctx->pc = 0x347330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34732Cu;
            // 0x347330: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x347334u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x347334u; }
            if (ctx->pc != 0x347334u) { return; }
        }
        }
    }
    ctx->pc = 0x347334u;
label_347334:
    // 0x347334: 0x8eb40550  lw          $s4, 0x550($s5)
    ctx->pc = 0x347334u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1360)));
label_347338:
    // 0x347338: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x347338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_34733c:
    // 0x34733c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34733cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_347340:
    // 0x347340: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x347340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_347344:
    // 0x347344: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x347344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_347348:
    // 0x347348: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x347348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_34734c:
    // 0x34734c: 0x8282010c  lb          $v0, 0x10C($s4)
    ctx->pc = 0x34734cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 268)));
label_347350:
    // 0x347350: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x347350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_347354:
    // 0x347354: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x347354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_347358:
    // 0x347358: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x347358u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_34735c:
    // 0x34735c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x34735cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_347360:
    // 0x347360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x347360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_347364:
    // 0x347364: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x347364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_347368:
    // 0x347368: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x347368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_34736c:
    // 0x34736c: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x34736cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_347370:
    // 0x347370: 0x8e990058  lw          $t9, 0x58($s4)
    ctx->pc = 0x347370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_347374:
    // 0x347374: 0x8285010d  lb          $a1, 0x10D($s4)
    ctx->pc = 0x347374u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 269)));
label_347378:
    // 0x347378: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x347378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_34737c:
    // 0x34737c: 0x320f809  jalr        $t9
label_347380:
    if (ctx->pc == 0x347380u) {
        ctx->pc = 0x347380u;
            // 0x347380: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x347384u;
        goto label_347384;
    }
    ctx->pc = 0x34737Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x347384u);
        ctx->pc = 0x347380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34737Cu;
            // 0x347380: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x347384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x347384u; }
            if (ctx->pc != 0x347384u) { return; }
        }
        }
    }
    ctx->pc = 0x347384u;
label_347384:
    // 0x347384: 0x8e990058  lw          $t9, 0x58($s4)
    ctx->pc = 0x347384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_347388:
    // 0x347388: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x347388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34738c:
    // 0x34738c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x34738cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_347390:
    // 0x347390: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x347390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_347394:
    // 0x347394: 0x320f809  jalr        $t9
label_347398:
    if (ctx->pc == 0x347398u) {
        ctx->pc = 0x347398u;
            // 0x347398: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x34739Cu;
        goto label_34739c;
    }
    ctx->pc = 0x347394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34739Cu);
        ctx->pc = 0x347398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347394u;
            // 0x347398: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34739Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34739Cu; }
            if (ctx->pc != 0x34739Cu) { return; }
        }
        }
    }
    ctx->pc = 0x34739Cu;
label_34739c:
    // 0x34739c: 0x26a402c0  addiu       $a0, $s5, 0x2C0
    ctx->pc = 0x34739cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 704));
label_3473a0:
    // 0x3473a0: 0xc04cc34  jal         func_1330D0
label_3473a4:
    if (ctx->pc == 0x3473A4u) {
        ctx->pc = 0x3473A4u;
            // 0x3473a4: 0x26650070  addiu       $a1, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->pc = 0x3473A8u;
        goto label_3473a8;
    }
    ctx->pc = 0x3473A0u;
    SET_GPR_U32(ctx, 31, 0x3473A8u);
    ctx->pc = 0x3473A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3473A0u;
            // 0x3473a4: 0x26650070  addiu       $a1, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3473A8u; }
        if (ctx->pc != 0x3473A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3473A8u; }
        if (ctx->pc != 0x3473A8u) { return; }
    }
    ctx->pc = 0x3473A8u;
label_3473a8:
    // 0x3473a8: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x3473a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_3473ac:
    // 0x3473ac: 0xaea00de8  sw          $zero, 0xDE8($s5)
    ctx->pc = 0x3473acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3560), GPR_U32(ctx, 0));
label_3473b0:
    // 0x3473b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3473b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3473b4:
    // 0x3473b4: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3473b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3473b8:
    // 0x3473b8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3473b8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3473bc:
    // 0x3473bc: 0x26a40320  addiu       $a0, $s5, 0x320
    ctx->pc = 0x3473bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 800));
label_3473c0:
    // 0x3473c0: 0xaea20de4  sw          $v0, 0xDE4($s5)
    ctx->pc = 0x3473c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3556), GPR_U32(ctx, 2));
label_3473c4:
    // 0x3473c4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3473c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3473c8:
    // 0x3473c8: 0xc04cbd8  jal         func_132F60
label_3473cc:
    if (ctx->pc == 0x3473CCu) {
        ctx->pc = 0x3473CCu;
            // 0x3473cc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3473D0u;
        goto label_3473d0;
    }
    ctx->pc = 0x3473C8u;
    SET_GPR_U32(ctx, 31, 0x3473D0u);
    ctx->pc = 0x3473CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3473C8u;
            // 0x3473cc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3473D0u; }
        if (ctx->pc != 0x3473D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3473D0u; }
        if (ctx->pc != 0x3473D0u) { return; }
    }
    ctx->pc = 0x3473D0u;
label_3473d0:
    // 0x3473d0: 0x0  nop
    ctx->pc = 0x3473d0u;
    // NOP
label_3473d4:
    // 0x3473d4: 0x0  nop
    ctx->pc = 0x3473d4u;
    // NOP
label_3473d8:
    // 0x3473d8: 0x46150044  c1          0x150044
    ctx->pc = 0x3473d8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_3473dc:
    // 0x3473dc: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x3473dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_3473e0:
    // 0x3473e0: 0x3443097b  ori         $v1, $v0, 0x97B
    ctx->pc = 0x3473e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3473e4:
    // 0x3473e4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3473e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3473e8:
    // 0x3473e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3473e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3473ec:
    // 0x3473ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3473ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3473f0:
    // 0x3473f0: 0x0  nop
    ctx->pc = 0x3473f0u;
    // NOP
label_3473f4:
    // 0x3473f4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3473f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3473f8:
    // 0x3473f8: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x3473f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3473fc:
    // 0x3473fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3473fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_347400:
    // 0x347400: 0x0  nop
    ctx->pc = 0x347400u;
    // NOP
label_347404:
    // 0x347404: 0x46010342  mul.s       $f13, $f0, $f1
    ctx->pc = 0x347404u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_347408:
    // 0x347408: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x347408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34740c:
    // 0x34740c: 0xc04cbd8  jal         func_132F60
label_347410:
    if (ctx->pc == 0x347410u) {
        ctx->pc = 0x347410u;
            // 0x347410: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x347414u;
        goto label_347414;
    }
    ctx->pc = 0x34740Cu;
    SET_GPR_U32(ctx, 31, 0x347414u);
    ctx->pc = 0x347410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34740Cu;
            // 0x347410: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347414u; }
        if (ctx->pc != 0x347414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347414u; }
        if (ctx->pc != 0x347414u) { return; }
    }
    ctx->pc = 0x347414u;
label_347414:
    // 0x347414: 0x26a40320  addiu       $a0, $s5, 0x320
    ctx->pc = 0x347414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 800));
label_347418:
    // 0x347418: 0x26a507e0  addiu       $a1, $s5, 0x7E0
    ctx->pc = 0x347418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2016));
label_34741c:
    // 0x34741c: 0xc04cca0  jal         func_133280
label_347420:
    if (ctx->pc == 0x347420u) {
        ctx->pc = 0x347420u;
            // 0x347420: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x347424u;
        goto label_347424;
    }
    ctx->pc = 0x34741Cu;
    SET_GPR_U32(ctx, 31, 0x347424u);
    ctx->pc = 0x347420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34741Cu;
            // 0x347420: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347424u; }
        if (ctx->pc != 0x347424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347424u; }
        if (ctx->pc != 0x347424u) { return; }
    }
    ctx->pc = 0x347424u;
label_347424:
    // 0x347424: 0xc0d1dc8  jal         func_347720
label_347428:
    if (ctx->pc == 0x347428u) {
        ctx->pc = 0x347428u;
            // 0x347428: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34742Cu;
        goto label_34742c;
    }
    ctx->pc = 0x347424u;
    SET_GPR_U32(ctx, 31, 0x34742Cu);
    ctx->pc = 0x347428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347424u;
            // 0x347428: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34742Cu; }
        if (ctx->pc != 0x34742Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34742Cu; }
        if (ctx->pc != 0x34742Cu) { return; }
    }
    ctx->pc = 0x34742Cu;
label_34742c:
    // 0x34742c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x34742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_347430:
    // 0x347430: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x347430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_347434:
    // 0x347434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_347438:
    // 0x347438: 0x0  nop
    ctx->pc = 0x347438u;
    // NOP
label_34743c:
    // 0x34743c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34743cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_347440:
    // 0x347440: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_347444:
    if (ctx->pc == 0x347444u) {
        ctx->pc = 0x347444u;
            // 0x347444: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x347448u;
        goto label_347448;
    }
    ctx->pc = 0x347440u;
    {
        const bool branch_taken_0x347440 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x347440) {
            ctx->pc = 0x347444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x347440u;
            // 0x347444: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x347458u;
            goto label_347458;
        }
    }
    ctx->pc = 0x347448u;
label_347448:
    // 0x347448: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x347448u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_34744c:
    // 0x34744c: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x34744cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_347450:
    // 0x347450: 0x10000007  b           . + 4 + (0x7 << 2)
label_347454:
    if (ctx->pc == 0x347454u) {
        ctx->pc = 0x347454u;
            // 0x347454: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x347458u;
        goto label_347458;
    }
    ctx->pc = 0x347450u;
    {
        const bool branch_taken_0x347450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347450u;
            // 0x347454: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347450) {
            ctx->pc = 0x347470u;
            goto label_347470;
        }
    }
    ctx->pc = 0x347458u;
label_347458:
    // 0x347458: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x347458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_34745c:
    // 0x34745c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34745cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_347460:
    // 0x347460: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x347460u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_347464:
    // 0x347464: 0x0  nop
    ctx->pc = 0x347464u;
    // NOP
label_347468:
    // 0x347468: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x347468u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_34746c:
    // 0x34746c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34746cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_347470:
    // 0x347470: 0xc0d1dc4  jal         func_347710
label_347474:
    if (ctx->pc == 0x347474u) {
        ctx->pc = 0x347478u;
        goto label_347478;
    }
    ctx->pc = 0x347470u;
    SET_GPR_U32(ctx, 31, 0x347478u);
    ctx->pc = 0x347710u;
    if (runtime->hasFunction(0x347710u)) {
        auto targetFn = runtime->lookupFunction(0x347710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347478u; }
        if (ctx->pc != 0x347478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347710_0x347710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347478u; }
        if (ctx->pc != 0x347478u) { return; }
    }
    ctx->pc = 0x347478u;
label_347478:
    // 0x347478: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x347478u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_34747c:
    // 0x34747c: 0xc0d1dc8  jal         func_347720
label_347480:
    if (ctx->pc == 0x347480u) {
        ctx->pc = 0x347480u;
            // 0x347480: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x347484u;
        goto label_347484;
    }
    ctx->pc = 0x34747Cu;
    SET_GPR_U32(ctx, 31, 0x347484u);
    ctx->pc = 0x347480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34747Cu;
            // 0x347480: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347484u; }
        if (ctx->pc != 0x347484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347484u; }
        if (ctx->pc != 0x347484u) { return; }
    }
    ctx->pc = 0x347484u;
label_347484:
    // 0x347484: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x347484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_347488:
    // 0x347488: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x347488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34748c:
    // 0x34748c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x34748cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_347490:
    // 0x347490: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x347490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_347494:
    // 0x347494: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x347494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_347498:
    // 0x347498: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x347498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_34749c:
    // 0x34749c: 0xc122b58  jal         func_48AD60
label_3474a0:
    if (ctx->pc == 0x3474A0u) {
        ctx->pc = 0x3474A0u;
            // 0x3474a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3474A4u;
        goto label_3474a4;
    }
    ctx->pc = 0x34749Cu;
    SET_GPR_U32(ctx, 31, 0x3474A4u);
    ctx->pc = 0x3474A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34749Cu;
            // 0x3474a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3474A4u; }
        if (ctx->pc != 0x3474A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3474A4u; }
        if (ctx->pc != 0x3474A4u) { return; }
    }
    ctx->pc = 0x3474A4u;
label_3474a4:
    // 0x3474a4: 0x260401d0  addiu       $a0, $s0, 0x1D0
    ctx->pc = 0x3474a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
label_3474a8:
    // 0x3474a8: 0xc04cc04  jal         func_133010
label_3474ac:
    if (ctx->pc == 0x3474ACu) {
        ctx->pc = 0x3474ACu;
            // 0x3474ac: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3474B0u;
        goto label_3474b0;
    }
    ctx->pc = 0x3474A8u;
    SET_GPR_U32(ctx, 31, 0x3474B0u);
    ctx->pc = 0x3474ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3474A8u;
            // 0x3474ac: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3474B0u; }
        if (ctx->pc != 0x3474B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3474B0u; }
        if (ctx->pc != 0x3474B0u) { return; }
    }
    ctx->pc = 0x3474B0u;
label_3474b0:
    // 0x3474b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3474b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3474b4:
    // 0x3474b4: 0xc0d1dc0  jal         func_347700
label_3474b8:
    if (ctx->pc == 0x3474B8u) {
        ctx->pc = 0x3474B8u;
            // 0x3474b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3474BCu;
        goto label_3474bc;
    }
    ctx->pc = 0x3474B4u;
    SET_GPR_U32(ctx, 31, 0x3474BCu);
    ctx->pc = 0x3474B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3474B4u;
            // 0x3474b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347700u;
    if (runtime->hasFunction(0x347700u)) {
        auto targetFn = runtime->lookupFunction(0x347700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3474BCu; }
        if (ctx->pc != 0x3474BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347700_0x347700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3474BCu; }
        if (ctx->pc != 0x3474BCu) { return; }
    }
    ctx->pc = 0x3474BCu;
label_3474bc:
    // 0x3474bc: 0xae1301c8  sw          $s3, 0x1C8($s0)
    ctx->pc = 0x3474bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 19));
label_3474c0:
    // 0x3474c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3474c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3474c4:
    // 0x3474c4: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x3474c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
label_3474c8:
    // 0x3474c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3474c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3474cc:
    // 0x3474cc: 0xae0301c4  sw          $v1, 0x1C4($s0)
    ctx->pc = 0x3474ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 3));
label_3474d0:
    // 0x3474d0: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x3474d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
label_3474d4:
    // 0x3474d4: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x3474d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
label_3474d8:
    // 0x3474d8: 0x8c540e80  lw          $s4, 0xE80($v0)
    ctx->pc = 0x3474d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3474dc:
    // 0x3474dc: 0xc040180  jal         func_100600
label_3474e0:
    if (ctx->pc == 0x3474E0u) {
        ctx->pc = 0x3474E0u;
            // 0x3474e0: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x3474E4u;
        goto label_3474e4;
    }
    ctx->pc = 0x3474DCu;
    SET_GPR_U32(ctx, 31, 0x3474E4u);
    ctx->pc = 0x3474E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3474DCu;
            // 0x3474e0: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3474E4u; }
        if (ctx->pc != 0x3474E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3474E4u; }
        if (ctx->pc != 0x3474E4u) { return; }
    }
    ctx->pc = 0x3474E4u;
label_3474e4:
    // 0x3474e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3474e8:
    if (ctx->pc == 0x3474E8u) {
        ctx->pc = 0x3474ECu;
        goto label_3474ec;
    }
    ctx->pc = 0x3474E4u;
    {
        const bool branch_taken_0x3474e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3474e4) {
            ctx->pc = 0x3474F8u;
            goto label_3474f8;
        }
    }
    ctx->pc = 0x3474ECu;
label_3474ec:
    // 0x3474ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3474ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3474f0:
    // 0x3474f0: 0xc0d1da8  jal         func_3476A0
label_3474f4:
    if (ctx->pc == 0x3474F4u) {
        ctx->pc = 0x3474F4u;
            // 0x3474f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3474F8u;
        goto label_3474f8;
    }
    ctx->pc = 0x3474F0u;
    SET_GPR_U32(ctx, 31, 0x3474F8u);
    ctx->pc = 0x3474F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3474F0u;
            // 0x3474f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3476A0u;
    if (runtime->hasFunction(0x3476A0u)) {
        auto targetFn = runtime->lookupFunction(0x3476A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3474F8u; }
        if (ctx->pc != 0x3474F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003476A0_0x3476a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3474F8u; }
        if (ctx->pc != 0x3474F8u) { return; }
    }
    ctx->pc = 0x3474F8u;
label_3474f8:
    // 0x3474f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3474f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3474fc:
    // 0x3474fc: 0xc0d1da4  jal         func_347690
label_347500:
    if (ctx->pc == 0x347500u) {
        ctx->pc = 0x347500u;
            // 0x347500: 0xae020238  sw          $v0, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 2));
        ctx->pc = 0x347504u;
        goto label_347504;
    }
    ctx->pc = 0x3474FCu;
    SET_GPR_U32(ctx, 31, 0x347504u);
    ctx->pc = 0x347500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3474FCu;
            // 0x347500: 0xae020238  sw          $v0, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347690u;
    if (runtime->hasFunction(0x347690u)) {
        auto targetFn = runtime->lookupFunction(0x347690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347504u; }
        if (ctx->pc != 0x347504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347690_0x347690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347504u; }
        if (ctx->pc != 0x347504u) { return; }
    }
    ctx->pc = 0x347504u;
label_347504:
    // 0x347504: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x347504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_347508:
    // 0x347508: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x347508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
label_34750c:
    // 0x34750c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34750cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_347510:
    // 0x347510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x347510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347514:
    // 0x347514: 0x24422f20  addiu       $v0, $v0, 0x2F20
    ctx->pc = 0x347514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12064));
label_347518:
    // 0x347518: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x347518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34751c:
    // 0x34751c: 0x3c02471c  lui         $v0, 0x471C
    ctx->pc = 0x34751cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18204 << 16));
label_347520:
    // 0x347520: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x347520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_347524:
    // 0x347524: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x347524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_347528:
    // 0x347528: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x347528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34752c:
    // 0x34752c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x34752cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_347530:
    // 0x347530: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x347530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_347534:
    // 0x347534: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x347534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_347538:
    // 0x347538: 0xc122cd8  jal         func_48B360
label_34753c:
    if (ctx->pc == 0x34753Cu) {
        ctx->pc = 0x34753Cu;
            // 0x34753c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x347540u;
        goto label_347540;
    }
    ctx->pc = 0x347538u;
    SET_GPR_U32(ctx, 31, 0x347540u);
    ctx->pc = 0x34753Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347538u;
            // 0x34753c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347540u; }
        if (ctx->pc != 0x347540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347540u; }
        if (ctx->pc != 0x347540u) { return; }
    }
    ctx->pc = 0x347540u;
label_347540:
    // 0x347540: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x347540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_347544:
    // 0x347544: 0x260401f0  addiu       $a0, $s0, 0x1F0
    ctx->pc = 0x347544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_347548:
    // 0x347548: 0xc04cce8  jal         func_1333A0
label_34754c:
    if (ctx->pc == 0x34754Cu) {
        ctx->pc = 0x34754Cu;
            // 0x34754c: 0x24a52f80  addiu       $a1, $a1, 0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12160));
        ctx->pc = 0x347550u;
        goto label_347550;
    }
    ctx->pc = 0x347548u;
    SET_GPR_U32(ctx, 31, 0x347550u);
    ctx->pc = 0x34754Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347548u;
            // 0x34754c: 0x24a52f80  addiu       $a1, $a1, 0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347550u; }
        if (ctx->pc != 0x347550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347550u; }
        if (ctx->pc != 0x347550u) { return; }
    }
    ctx->pc = 0x347550u;
label_347550:
    // 0x347550: 0xc0d1da0  jal         func_347680
label_347554:
    if (ctx->pc == 0x347554u) {
        ctx->pc = 0x347558u;
        goto label_347558;
    }
    ctx->pc = 0x347550u;
    SET_GPR_U32(ctx, 31, 0x347558u);
    ctx->pc = 0x347680u;
    if (runtime->hasFunction(0x347680u)) {
        auto targetFn = runtime->lookupFunction(0x347680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347558u; }
        if (ctx->pc != 0x347558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347680_0x347680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347558u; }
        if (ctx->pc != 0x347558u) { return; }
    }
    ctx->pc = 0x347558u;
label_347558:
    // 0x347558: 0xc0d1d9c  jal         func_347670
label_34755c:
    if (ctx->pc == 0x34755Cu) {
        ctx->pc = 0x34755Cu;
            // 0x34755c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x347560u;
        goto label_347560;
    }
    ctx->pc = 0x347558u;
    SET_GPR_U32(ctx, 31, 0x347560u);
    ctx->pc = 0x34755Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347558u;
            // 0x34755c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347670u;
    if (runtime->hasFunction(0x347670u)) {
        auto targetFn = runtime->lookupFunction(0x347670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347560u; }
        if (ctx->pc != 0x347560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347670_0x347670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347560u; }
        if (ctx->pc != 0x347560u) { return; }
    }
    ctx->pc = 0x347560u;
label_347560:
    // 0x347560: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x347560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_347564:
    // 0x347564: 0xc0d20fc  jal         func_3483F0
label_347568:
    if (ctx->pc == 0x347568u) {
        ctx->pc = 0x347568u;
            // 0x347568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34756Cu;
        goto label_34756c;
    }
    ctx->pc = 0x347564u;
    SET_GPR_U32(ctx, 31, 0x34756Cu);
    ctx->pc = 0x347568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347564u;
            // 0x347568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3483F0u;
    if (runtime->hasFunction(0x3483F0u)) {
        auto targetFn = runtime->lookupFunction(0x3483F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34756Cu; }
        if (ctx->pc != 0x34756Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003483F0_0x3483f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34756Cu; }
        if (ctx->pc != 0x34756Cu) { return; }
    }
    ctx->pc = 0x34756Cu;
label_34756c:
    // 0x34756c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x34756cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_347570:
    // 0x347570: 0x267000a4  addiu       $s0, $s3, 0xA4
    ctx->pc = 0x347570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 164));
label_347574:
    // 0x347574: 0x8ea50d98  lw          $a1, 0xD98($s5)
    ctx->pc = 0x347574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3480)));
label_347578:
    // 0x347578: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x347578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34757c:
    // 0x34757c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x34757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_347580:
    // 0x347580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_347584:
    // 0x347584: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x347584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_347588:
    // 0x347588: 0x601827  not         $v1, $v1
    ctx->pc = 0x347588u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_34758c:
    // 0x34758c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x34758cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_347590:
    // 0x347590: 0xc0d21cc  jal         func_348730
label_347594:
    if (ctx->pc == 0x347594u) {
        ctx->pc = 0x347594u;
            // 0x347594: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x347598u;
        goto label_347598;
    }
    ctx->pc = 0x347590u;
    SET_GPR_U32(ctx, 31, 0x347598u);
    ctx->pc = 0x347594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347590u;
            // 0x347594: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348730u;
    if (runtime->hasFunction(0x348730u)) {
        auto targetFn = runtime->lookupFunction(0x348730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347598u; }
        if (ctx->pc != 0x347598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348730_0x348730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347598u; }
        if (ctx->pc != 0x347598u) { return; }
    }
    ctx->pc = 0x347598u;
label_347598:
    // 0x347598: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x347598u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34759c:
    // 0x34759c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x34759cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3475a0:
    // 0x3475a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3475a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3475a4:
    // 0x3475a4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3475a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_3475a8:
    // 0x3475a8: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x3475a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3475ac:
    // 0x3475ac: 0x24a52f18  addiu       $a1, $a1, 0x2F18
    ctx->pc = 0x3475acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12056));
label_3475b0:
    // 0x3475b0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3475b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3475b4:
    // 0x3475b4: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x3475b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_3475b8:
    // 0x3475b8: 0x8cc60968  lw          $a2, 0x968($a2)
    ctx->pc = 0x3475b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
label_3475bc:
    // 0x3475bc: 0x3444097b  ori         $a0, $v0, 0x97B
    ctx->pc = 0x3475bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3475c0:
    // 0x3475c0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x3475c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_3475c4:
    // 0x3475c4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x3475c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_3475c8:
    // 0x3475c8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3475c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3475cc:
    // 0x3475cc: 0x38c20009  xori        $v0, $a2, 0x9
    ctx->pc = 0x3475ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)9);
label_3475d0:
    // 0x3475d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3475d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3475d4:
    // 0x3475d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3475d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3475d8:
    // 0x3475d8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3475d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3475dc:
    // 0x3475dc: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x3475dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3475e0:
    // 0x3475e0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x3475e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3475e4:
    // 0x3475e4: 0xc122b58  jal         func_48AD60
label_3475e8:
    if (ctx->pc == 0x3475E8u) {
        ctx->pc = 0x3475E8u;
            // 0x3475e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3475ECu;
        goto label_3475ec;
    }
    ctx->pc = 0x3475E4u;
    SET_GPR_U32(ctx, 31, 0x3475ECu);
    ctx->pc = 0x3475E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3475E4u;
            // 0x3475e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3475ECu; }
        if (ctx->pc != 0x3475ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3475ECu; }
        if (ctx->pc != 0x3475ECu) { return; }
    }
    ctx->pc = 0x3475ECu;
label_3475ec:
    // 0x3475ec: 0x268401d0  addiu       $a0, $s4, 0x1D0
    ctx->pc = 0x3475ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 464));
label_3475f0:
    // 0x3475f0: 0xc04cc04  jal         func_133010
label_3475f4:
    if (ctx->pc == 0x3475F4u) {
        ctx->pc = 0x3475F4u;
            // 0x3475f4: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x3475F8u;
        goto label_3475f8;
    }
    ctx->pc = 0x3475F0u;
    SET_GPR_U32(ctx, 31, 0x3475F8u);
    ctx->pc = 0x3475F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3475F0u;
            // 0x3475f4: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3475F8u; }
        if (ctx->pc != 0x3475F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3475F8u; }
        if (ctx->pc != 0x3475F8u) { return; }
    }
    ctx->pc = 0x3475F8u;
label_3475f8:
    // 0x3475f8: 0xae9301c8  sw          $s3, 0x1C8($s4)
    ctx->pc = 0x3475f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 456), GPR_U32(ctx, 19));
label_3475fc:
    // 0x3475fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3475fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_347600:
    // 0x347600: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x347600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_347604:
    // 0x347604: 0xae8301c0  sw          $v1, 0x1C0($s4)
    ctx->pc = 0x347604u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 448), GPR_U32(ctx, 3));
label_347608:
    // 0x347608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34760c:
    // 0x34760c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x34760cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_347610:
    // 0x347610: 0xc0d21d8  jal         func_348760
label_347614:
    if (ctx->pc == 0x347614u) {
        ctx->pc = 0x347614u;
            // 0x347614: 0xae8201c4  sw          $v0, 0x1C4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
        ctx->pc = 0x347618u;
        goto label_347618;
    }
    ctx->pc = 0x347610u;
    SET_GPR_U32(ctx, 31, 0x347618u);
    ctx->pc = 0x347614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347610u;
            // 0x347614: 0xae8201c4  sw          $v0, 0x1C4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348760u;
    if (runtime->hasFunction(0x348760u)) {
        auto targetFn = runtime->lookupFunction(0x348760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347618u; }
        if (ctx->pc != 0x347618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348760_0x348760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347618u; }
        if (ctx->pc != 0x347618u) { return; }
    }
    ctx->pc = 0x347618u;
label_347618:
    // 0x347618: 0x8ea30d9c  lw          $v1, 0xD9C($s5)
    ctx->pc = 0x347618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3484)));
label_34761c:
    // 0x34761c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x34761cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_347620:
    // 0x347620: 0xaea30d9c  sw          $v1, 0xD9C($s5)
    ctx->pc = 0x347620u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3484), GPR_U32(ctx, 3));
label_347624:
    // 0x347624: 0x0  nop
    ctx->pc = 0x347624u;
    // NOP
label_347628:
    // 0x347628: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x347628u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_34762c:
    // 0x34762c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x34762cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_347630:
    // 0x347630: 0x16c0fedf  bnez        $s6, . + 4 + (-0x121 << 2)
label_347634:
    if (ctx->pc == 0x347634u) {
        ctx->pc = 0x347634u;
            // 0x347634: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x347638u;
        goto label_347638;
    }
    ctx->pc = 0x347630u;
    {
        const bool branch_taken_0x347630 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x347634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347630u;
            // 0x347634: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347630) {
            ctx->pc = 0x3471B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3471b0;
        }
    }
    ctx->pc = 0x347638u;
label_347638:
    // 0x347638: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x347638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_34763c:
    // 0x34763c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x34763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_347640:
    // 0x347640: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x347640u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_347644:
    // 0x347644: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x347644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_347648:
    // 0x347648: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x347648u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_34764c:
    // 0x34764c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x34764cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_347650:
    // 0x347650: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x347650u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_347654:
    // 0x347654: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x347654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_347658:
    // 0x347658: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x347658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34765c:
    // 0x34765c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34765cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_347660:
    // 0x347660: 0x3e00008  jr          $ra
label_347664:
    if (ctx->pc == 0x347664u) {
        ctx->pc = 0x347664u;
            // 0x347664: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x347668u;
        goto label_347668;
    }
    ctx->pc = 0x347660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347660u;
            // 0x347664: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347668u;
label_347668:
    // 0x347668: 0x0  nop
    ctx->pc = 0x347668u;
    // NOP
label_34766c:
    // 0x34766c: 0x0  nop
    ctx->pc = 0x34766cu;
    // NOP
}
