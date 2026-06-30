#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00195000
// Address: 0x195000 - 0x1955e8
void sub_00195000_0x195000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195000_0x195000");
#endif

    switch (ctx->pc) {
        case 0x195000u: goto label_195000;
        case 0x195004u: goto label_195004;
        case 0x195008u: goto label_195008;
        case 0x19500cu: goto label_19500c;
        case 0x195010u: goto label_195010;
        case 0x195014u: goto label_195014;
        case 0x195018u: goto label_195018;
        case 0x19501cu: goto label_19501c;
        case 0x195020u: goto label_195020;
        case 0x195024u: goto label_195024;
        case 0x195028u: goto label_195028;
        case 0x19502cu: goto label_19502c;
        case 0x195030u: goto label_195030;
        case 0x195034u: goto label_195034;
        case 0x195038u: goto label_195038;
        case 0x19503cu: goto label_19503c;
        case 0x195040u: goto label_195040;
        case 0x195044u: goto label_195044;
        case 0x195048u: goto label_195048;
        case 0x19504cu: goto label_19504c;
        case 0x195050u: goto label_195050;
        case 0x195054u: goto label_195054;
        case 0x195058u: goto label_195058;
        case 0x19505cu: goto label_19505c;
        case 0x195060u: goto label_195060;
        case 0x195064u: goto label_195064;
        case 0x195068u: goto label_195068;
        case 0x19506cu: goto label_19506c;
        case 0x195070u: goto label_195070;
        case 0x195074u: goto label_195074;
        case 0x195078u: goto label_195078;
        case 0x19507cu: goto label_19507c;
        case 0x195080u: goto label_195080;
        case 0x195084u: goto label_195084;
        case 0x195088u: goto label_195088;
        case 0x19508cu: goto label_19508c;
        case 0x195090u: goto label_195090;
        case 0x195094u: goto label_195094;
        case 0x195098u: goto label_195098;
        case 0x19509cu: goto label_19509c;
        case 0x1950a0u: goto label_1950a0;
        case 0x1950a4u: goto label_1950a4;
        case 0x1950a8u: goto label_1950a8;
        case 0x1950acu: goto label_1950ac;
        case 0x1950b0u: goto label_1950b0;
        case 0x1950b4u: goto label_1950b4;
        case 0x1950b8u: goto label_1950b8;
        case 0x1950bcu: goto label_1950bc;
        case 0x1950c0u: goto label_1950c0;
        case 0x1950c4u: goto label_1950c4;
        case 0x1950c8u: goto label_1950c8;
        case 0x1950ccu: goto label_1950cc;
        case 0x1950d0u: goto label_1950d0;
        case 0x1950d4u: goto label_1950d4;
        case 0x1950d8u: goto label_1950d8;
        case 0x1950dcu: goto label_1950dc;
        case 0x1950e0u: goto label_1950e0;
        case 0x1950e4u: goto label_1950e4;
        case 0x1950e8u: goto label_1950e8;
        case 0x1950ecu: goto label_1950ec;
        case 0x1950f0u: goto label_1950f0;
        case 0x1950f4u: goto label_1950f4;
        case 0x1950f8u: goto label_1950f8;
        case 0x1950fcu: goto label_1950fc;
        case 0x195100u: goto label_195100;
        case 0x195104u: goto label_195104;
        case 0x195108u: goto label_195108;
        case 0x19510cu: goto label_19510c;
        case 0x195110u: goto label_195110;
        case 0x195114u: goto label_195114;
        case 0x195118u: goto label_195118;
        case 0x19511cu: goto label_19511c;
        case 0x195120u: goto label_195120;
        case 0x195124u: goto label_195124;
        case 0x195128u: goto label_195128;
        case 0x19512cu: goto label_19512c;
        case 0x195130u: goto label_195130;
        case 0x195134u: goto label_195134;
        case 0x195138u: goto label_195138;
        case 0x19513cu: goto label_19513c;
        case 0x195140u: goto label_195140;
        case 0x195144u: goto label_195144;
        case 0x195148u: goto label_195148;
        case 0x19514cu: goto label_19514c;
        case 0x195150u: goto label_195150;
        case 0x195154u: goto label_195154;
        case 0x195158u: goto label_195158;
        case 0x19515cu: goto label_19515c;
        case 0x195160u: goto label_195160;
        case 0x195164u: goto label_195164;
        case 0x195168u: goto label_195168;
        case 0x19516cu: goto label_19516c;
        case 0x195170u: goto label_195170;
        case 0x195174u: goto label_195174;
        case 0x195178u: goto label_195178;
        case 0x19517cu: goto label_19517c;
        case 0x195180u: goto label_195180;
        case 0x195184u: goto label_195184;
        case 0x195188u: goto label_195188;
        case 0x19518cu: goto label_19518c;
        case 0x195190u: goto label_195190;
        case 0x195194u: goto label_195194;
        case 0x195198u: goto label_195198;
        case 0x19519cu: goto label_19519c;
        case 0x1951a0u: goto label_1951a0;
        case 0x1951a4u: goto label_1951a4;
        case 0x1951a8u: goto label_1951a8;
        case 0x1951acu: goto label_1951ac;
        case 0x1951b0u: goto label_1951b0;
        case 0x1951b4u: goto label_1951b4;
        case 0x1951b8u: goto label_1951b8;
        case 0x1951bcu: goto label_1951bc;
        case 0x1951c0u: goto label_1951c0;
        case 0x1951c4u: goto label_1951c4;
        case 0x1951c8u: goto label_1951c8;
        case 0x1951ccu: goto label_1951cc;
        case 0x1951d0u: goto label_1951d0;
        case 0x1951d4u: goto label_1951d4;
        case 0x1951d8u: goto label_1951d8;
        case 0x1951dcu: goto label_1951dc;
        case 0x1951e0u: goto label_1951e0;
        case 0x1951e4u: goto label_1951e4;
        case 0x1951e8u: goto label_1951e8;
        case 0x1951ecu: goto label_1951ec;
        case 0x1951f0u: goto label_1951f0;
        case 0x1951f4u: goto label_1951f4;
        case 0x1951f8u: goto label_1951f8;
        case 0x1951fcu: goto label_1951fc;
        case 0x195200u: goto label_195200;
        case 0x195204u: goto label_195204;
        case 0x195208u: goto label_195208;
        case 0x19520cu: goto label_19520c;
        case 0x195210u: goto label_195210;
        case 0x195214u: goto label_195214;
        case 0x195218u: goto label_195218;
        case 0x19521cu: goto label_19521c;
        case 0x195220u: goto label_195220;
        case 0x195224u: goto label_195224;
        case 0x195228u: goto label_195228;
        case 0x19522cu: goto label_19522c;
        case 0x195230u: goto label_195230;
        case 0x195234u: goto label_195234;
        case 0x195238u: goto label_195238;
        case 0x19523cu: goto label_19523c;
        case 0x195240u: goto label_195240;
        case 0x195244u: goto label_195244;
        case 0x195248u: goto label_195248;
        case 0x19524cu: goto label_19524c;
        case 0x195250u: goto label_195250;
        case 0x195254u: goto label_195254;
        case 0x195258u: goto label_195258;
        case 0x19525cu: goto label_19525c;
        case 0x195260u: goto label_195260;
        case 0x195264u: goto label_195264;
        case 0x195268u: goto label_195268;
        case 0x19526cu: goto label_19526c;
        case 0x195270u: goto label_195270;
        case 0x195274u: goto label_195274;
        case 0x195278u: goto label_195278;
        case 0x19527cu: goto label_19527c;
        case 0x195280u: goto label_195280;
        case 0x195284u: goto label_195284;
        case 0x195288u: goto label_195288;
        case 0x19528cu: goto label_19528c;
        case 0x195290u: goto label_195290;
        case 0x195294u: goto label_195294;
        case 0x195298u: goto label_195298;
        case 0x19529cu: goto label_19529c;
        case 0x1952a0u: goto label_1952a0;
        case 0x1952a4u: goto label_1952a4;
        case 0x1952a8u: goto label_1952a8;
        case 0x1952acu: goto label_1952ac;
        case 0x1952b0u: goto label_1952b0;
        case 0x1952b4u: goto label_1952b4;
        case 0x1952b8u: goto label_1952b8;
        case 0x1952bcu: goto label_1952bc;
        case 0x1952c0u: goto label_1952c0;
        case 0x1952c4u: goto label_1952c4;
        case 0x1952c8u: goto label_1952c8;
        case 0x1952ccu: goto label_1952cc;
        case 0x1952d0u: goto label_1952d0;
        case 0x1952d4u: goto label_1952d4;
        case 0x1952d8u: goto label_1952d8;
        case 0x1952dcu: goto label_1952dc;
        case 0x1952e0u: goto label_1952e0;
        case 0x1952e4u: goto label_1952e4;
        case 0x1952e8u: goto label_1952e8;
        case 0x1952ecu: goto label_1952ec;
        case 0x1952f0u: goto label_1952f0;
        case 0x1952f4u: goto label_1952f4;
        case 0x1952f8u: goto label_1952f8;
        case 0x1952fcu: goto label_1952fc;
        case 0x195300u: goto label_195300;
        case 0x195304u: goto label_195304;
        case 0x195308u: goto label_195308;
        case 0x19530cu: goto label_19530c;
        case 0x195310u: goto label_195310;
        case 0x195314u: goto label_195314;
        case 0x195318u: goto label_195318;
        case 0x19531cu: goto label_19531c;
        case 0x195320u: goto label_195320;
        case 0x195324u: goto label_195324;
        case 0x195328u: goto label_195328;
        case 0x19532cu: goto label_19532c;
        case 0x195330u: goto label_195330;
        case 0x195334u: goto label_195334;
        case 0x195338u: goto label_195338;
        case 0x19533cu: goto label_19533c;
        case 0x195340u: goto label_195340;
        case 0x195344u: goto label_195344;
        case 0x195348u: goto label_195348;
        case 0x19534cu: goto label_19534c;
        case 0x195350u: goto label_195350;
        case 0x195354u: goto label_195354;
        case 0x195358u: goto label_195358;
        case 0x19535cu: goto label_19535c;
        case 0x195360u: goto label_195360;
        case 0x195364u: goto label_195364;
        case 0x195368u: goto label_195368;
        case 0x19536cu: goto label_19536c;
        case 0x195370u: goto label_195370;
        case 0x195374u: goto label_195374;
        case 0x195378u: goto label_195378;
        case 0x19537cu: goto label_19537c;
        case 0x195380u: goto label_195380;
        case 0x195384u: goto label_195384;
        case 0x195388u: goto label_195388;
        case 0x19538cu: goto label_19538c;
        case 0x195390u: goto label_195390;
        case 0x195394u: goto label_195394;
        case 0x195398u: goto label_195398;
        case 0x19539cu: goto label_19539c;
        case 0x1953a0u: goto label_1953a0;
        case 0x1953a4u: goto label_1953a4;
        case 0x1953a8u: goto label_1953a8;
        case 0x1953acu: goto label_1953ac;
        case 0x1953b0u: goto label_1953b0;
        case 0x1953b4u: goto label_1953b4;
        case 0x1953b8u: goto label_1953b8;
        case 0x1953bcu: goto label_1953bc;
        case 0x1953c0u: goto label_1953c0;
        case 0x1953c4u: goto label_1953c4;
        case 0x1953c8u: goto label_1953c8;
        case 0x1953ccu: goto label_1953cc;
        case 0x1953d0u: goto label_1953d0;
        case 0x1953d4u: goto label_1953d4;
        case 0x1953d8u: goto label_1953d8;
        case 0x1953dcu: goto label_1953dc;
        case 0x1953e0u: goto label_1953e0;
        case 0x1953e4u: goto label_1953e4;
        case 0x1953e8u: goto label_1953e8;
        case 0x1953ecu: goto label_1953ec;
        case 0x1953f0u: goto label_1953f0;
        case 0x1953f4u: goto label_1953f4;
        case 0x1953f8u: goto label_1953f8;
        case 0x1953fcu: goto label_1953fc;
        case 0x195400u: goto label_195400;
        case 0x195404u: goto label_195404;
        case 0x195408u: goto label_195408;
        case 0x19540cu: goto label_19540c;
        case 0x195410u: goto label_195410;
        case 0x195414u: goto label_195414;
        case 0x195418u: goto label_195418;
        case 0x19541cu: goto label_19541c;
        case 0x195420u: goto label_195420;
        case 0x195424u: goto label_195424;
        case 0x195428u: goto label_195428;
        case 0x19542cu: goto label_19542c;
        case 0x195430u: goto label_195430;
        case 0x195434u: goto label_195434;
        case 0x195438u: goto label_195438;
        case 0x19543cu: goto label_19543c;
        case 0x195440u: goto label_195440;
        case 0x195444u: goto label_195444;
        case 0x195448u: goto label_195448;
        case 0x19544cu: goto label_19544c;
        case 0x195450u: goto label_195450;
        case 0x195454u: goto label_195454;
        case 0x195458u: goto label_195458;
        case 0x19545cu: goto label_19545c;
        case 0x195460u: goto label_195460;
        case 0x195464u: goto label_195464;
        case 0x195468u: goto label_195468;
        case 0x19546cu: goto label_19546c;
        case 0x195470u: goto label_195470;
        case 0x195474u: goto label_195474;
        case 0x195478u: goto label_195478;
        case 0x19547cu: goto label_19547c;
        case 0x195480u: goto label_195480;
        case 0x195484u: goto label_195484;
        case 0x195488u: goto label_195488;
        case 0x19548cu: goto label_19548c;
        case 0x195490u: goto label_195490;
        case 0x195494u: goto label_195494;
        case 0x195498u: goto label_195498;
        case 0x19549cu: goto label_19549c;
        case 0x1954a0u: goto label_1954a0;
        case 0x1954a4u: goto label_1954a4;
        case 0x1954a8u: goto label_1954a8;
        case 0x1954acu: goto label_1954ac;
        case 0x1954b0u: goto label_1954b0;
        case 0x1954b4u: goto label_1954b4;
        case 0x1954b8u: goto label_1954b8;
        case 0x1954bcu: goto label_1954bc;
        case 0x1954c0u: goto label_1954c0;
        case 0x1954c4u: goto label_1954c4;
        case 0x1954c8u: goto label_1954c8;
        case 0x1954ccu: goto label_1954cc;
        case 0x1954d0u: goto label_1954d0;
        case 0x1954d4u: goto label_1954d4;
        case 0x1954d8u: goto label_1954d8;
        case 0x1954dcu: goto label_1954dc;
        case 0x1954e0u: goto label_1954e0;
        case 0x1954e4u: goto label_1954e4;
        case 0x1954e8u: goto label_1954e8;
        case 0x1954ecu: goto label_1954ec;
        case 0x1954f0u: goto label_1954f0;
        case 0x1954f4u: goto label_1954f4;
        case 0x1954f8u: goto label_1954f8;
        case 0x1954fcu: goto label_1954fc;
        case 0x195500u: goto label_195500;
        case 0x195504u: goto label_195504;
        case 0x195508u: goto label_195508;
        case 0x19550cu: goto label_19550c;
        case 0x195510u: goto label_195510;
        case 0x195514u: goto label_195514;
        case 0x195518u: goto label_195518;
        case 0x19551cu: goto label_19551c;
        case 0x195520u: goto label_195520;
        case 0x195524u: goto label_195524;
        case 0x195528u: goto label_195528;
        case 0x19552cu: goto label_19552c;
        case 0x195530u: goto label_195530;
        case 0x195534u: goto label_195534;
        case 0x195538u: goto label_195538;
        case 0x19553cu: goto label_19553c;
        case 0x195540u: goto label_195540;
        case 0x195544u: goto label_195544;
        case 0x195548u: goto label_195548;
        case 0x19554cu: goto label_19554c;
        case 0x195550u: goto label_195550;
        case 0x195554u: goto label_195554;
        case 0x195558u: goto label_195558;
        case 0x19555cu: goto label_19555c;
        case 0x195560u: goto label_195560;
        case 0x195564u: goto label_195564;
        case 0x195568u: goto label_195568;
        case 0x19556cu: goto label_19556c;
        case 0x195570u: goto label_195570;
        case 0x195574u: goto label_195574;
        case 0x195578u: goto label_195578;
        case 0x19557cu: goto label_19557c;
        case 0x195580u: goto label_195580;
        case 0x195584u: goto label_195584;
        case 0x195588u: goto label_195588;
        case 0x19558cu: goto label_19558c;
        case 0x195590u: goto label_195590;
        case 0x195594u: goto label_195594;
        case 0x195598u: goto label_195598;
        case 0x19559cu: goto label_19559c;
        case 0x1955a0u: goto label_1955a0;
        case 0x1955a4u: goto label_1955a4;
        case 0x1955a8u: goto label_1955a8;
        case 0x1955acu: goto label_1955ac;
        case 0x1955b0u: goto label_1955b0;
        case 0x1955b4u: goto label_1955b4;
        case 0x1955b8u: goto label_1955b8;
        case 0x1955bcu: goto label_1955bc;
        case 0x1955c0u: goto label_1955c0;
        case 0x1955c4u: goto label_1955c4;
        case 0x1955c8u: goto label_1955c8;
        case 0x1955ccu: goto label_1955cc;
        case 0x1955d0u: goto label_1955d0;
        case 0x1955d4u: goto label_1955d4;
        case 0x1955d8u: goto label_1955d8;
        case 0x1955dcu: goto label_1955dc;
        case 0x1955e0u: goto label_1955e0;
        case 0x1955e4u: goto label_1955e4;
        default: break;
    }

    ctx->pc = 0x195000u;

label_195000:
    // 0x195000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_195004:
    // 0x195004: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x195004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_195008:
    // 0x195008: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x195008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_19500c:
    // 0x19500c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19500cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_195010:
    // 0x195010: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x195010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_195014:
    // 0x195014: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x195014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_195018:
    // 0x195018: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x195018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19501c:
    // 0x19501c: 0x261203ac  addiu       $s2, $s0, 0x3AC
    ctx->pc = 0x19501cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 940));
label_195020:
    // 0x195020: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x195020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_195024:
    // 0x195024: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x195024u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_195028:
    // 0x195028: 0xae0203d8  sw          $v0, 0x3D8($s0)
    ctx->pc = 0x195028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 984), GPR_U32(ctx, 2));
label_19502c:
    // 0x19502c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19502cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195030:
    // 0x195030: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x195030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_195034:
    // 0x195034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195038:
    // 0x195038: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x195038u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_19503c:
    // 0x19503c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x19503cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_195040:
    // 0x195040: 0x40f809  jalr        $v0
label_195044:
    if (ctx->pc == 0x195044u) {
        ctx->pc = 0x195044u;
            // 0x195044: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x195048u;
        goto label_195048;
    }
    ctx->pc = 0x195040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195048u);
        ctx->pc = 0x195044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195040u;
            // 0x195044: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x195048u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x195048u; }
            if (ctx->pc != 0x195048u) { return; }
        }
        }
    }
    ctx->pc = 0x195048u;
label_195048:
    // 0x195048: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x195048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19504c:
    // 0x19504c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x19504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_195050:
    // 0x195050: 0x260901dc  addiu       $t1, $s0, 0x1DC
    ctx->pc = 0x195050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
label_195054:
    // 0x195054: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x195054u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_195058:
    // 0x195058: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x195058u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_19505c:
    // 0x19505c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x19505cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_195060:
    // 0x195060: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x195060u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195064:
    // 0x195064: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195068:
    // 0x195068: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x195068u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19506c:
    // 0x19506c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19506cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195070:
    // 0x195070: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x195070u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195074:
    // 0x195074: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x195074u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195078:
    // 0x195078: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x195078u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_19507c:
    // 0x19507c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19507cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195080:
    // 0x195080: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x195080u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195084:
    // 0x195084: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x195084u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195088:
    // 0x195088: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x195088u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_19508c:
    // 0x19508c: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x19508cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_195090:
    // 0x195090: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x195090u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195094:
    // 0x195094: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195098:
    // 0x195098: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x195098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_19509c:
    // 0x19509c: 0x38a30000  xori        $v1, $a1, 0x0
    ctx->pc = 0x19509cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)0);
label_1950a0:
    // 0x1950a0: 0xa61004  sllv        $v0, $a2, $a1
    ctx->pc = 0x1950a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_1950a4:
    // 0x1950a4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1950a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1950a8:
    // 0x1950a8: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1950a8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1950ac:
    // 0x1950ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1950acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1950b0:
    // 0x1950b0: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x1950b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_1950b4:
    // 0x1950b4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1950b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1950b8:
    // 0x1950b8: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1950b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1950bc:
    // 0x1950bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1950bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1950c0:
    // 0x1950c0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1950c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1950c4:
    // 0x1950c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1950c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1950c8:
    // 0x1950c8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1950c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1950cc:
    // 0x1950cc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1950ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1950d0:
    // 0x1950d0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1950d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1950d4:
    // 0x1950d4: 0x28a40016  slti        $a0, $a1, 0x16
    ctx->pc = 0x1950d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
label_1950d8:
    // 0x1950d8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1950d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1950dc:
    // 0x1950dc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1950dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1950e0:
    // 0x1950e0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1950e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1950e4:
    // 0x1950e4: 0x1480001e  bnez        $a0, . + 4 + (0x1E << 2)
label_1950e8:
    if (ctx->pc == 0x1950E8u) {
        ctx->pc = 0x1950E8u;
            // 0x1950e8: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->pc = 0x1950ECu;
        goto label_1950ec;
    }
    ctx->pc = 0x1950E4u;
    {
        const bool branch_taken_0x1950e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1950E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1950E4u;
            // 0x1950e8: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950e4) {
            ctx->pc = 0x195160u;
            goto label_195160;
        }
    }
    ctx->pc = 0x1950ECu;
label_1950ec:
    // 0x1950ec: 0x24a5ffea  addiu       $a1, $a1, -0x16
    ctx->pc = 0x1950ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967274));
label_1950f0:
    // 0x1950f0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1950f4:
    if (ctx->pc == 0x1950F4u) {
        ctx->pc = 0x1950F4u;
            // 0x1950f4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1950F8u;
        goto label_1950f8;
    }
    ctx->pc = 0x1950F0u;
    {
        const bool branch_taken_0x1950f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1950F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1950F0u;
            // 0x1950f4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950f0) {
            ctx->pc = 0x195118u;
            goto label_195118;
        }
    }
    ctx->pc = 0x1950F8u;
label_1950f8:
    // 0x1950f8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1950f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1950fc:
    // 0x1950fc: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x1950fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_195100:
    // 0x195100: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x195100u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_195104:
    // 0x195104: 0x71d82  srl         $v1, $a3, 22
    ctx->pc = 0x195104u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_195108:
    // 0x195108: 0xa63804  sllv        $a3, $a2, $a1
    ctx->pc = 0x195108u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_19510c:
    // 0x19510c: 0x10000005  b           . + 4 + (0x5 << 2)
label_195110:
    if (ctx->pc == 0x195110u) {
        ctx->pc = 0x195110u;
            // 0x195110: 0xad230014  sw          $v1, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x195114u;
        goto label_195114;
    }
    ctx->pc = 0x19510Cu;
    {
        const bool branch_taken_0x19510c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19510Cu;
            // 0x195110: 0xad230014  sw          $v1, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19510c) {
            ctx->pc = 0x195124u;
            goto label_195124;
        }
    }
    ctx->pc = 0x195114u;
label_195114:
    // 0x195114: 0x0  nop
    ctx->pc = 0x195114u;
    // NOP
label_195118:
    // 0x195118: 0x71582  srl         $v0, $a3, 22
    ctx->pc = 0x195118u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_19511c:
    // 0x19511c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x19511cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_195120:
    // 0x195120: 0xad220014  sw          $v0, 0x14($t1)
    ctx->pc = 0x195120u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_195124:
    // 0x195124: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x195124u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195128:
    // 0x195128: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19512c:
    // 0x19512c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x19512cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195130:
    // 0x195130: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195134:
    // 0x195134: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x195134u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195138:
    // 0x195138: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x195138u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19513c:
    // 0x19513c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x19513cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_195140:
    // 0x195140: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195144:
    // 0x195144: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x195144u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195148:
    // 0x195148: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x195148u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19514c:
    // 0x19514c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x19514cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_195150:
    // 0x195150: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195154:
    // 0x195154: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x195154u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195158:
    // 0x195158: 0x10000005  b           . + 4 + (0x5 << 2)
label_19515c:
    if (ctx->pc == 0x19515Cu) {
        ctx->pc = 0x19515Cu;
            // 0x19515c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->pc = 0x195160u;
        goto label_195160;
    }
    ctx->pc = 0x195158u;
    {
        const bool branch_taken_0x195158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19515Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195158u;
            // 0x19515c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195158) {
            ctx->pc = 0x195170u;
            goto label_195170;
        }
    }
    ctx->pc = 0x195160u;
label_195160:
    // 0x195160: 0x71582  srl         $v0, $a3, 22
    ctx->pc = 0x195160u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_195164:
    // 0x195164: 0x73a80  sll         $a3, $a3, 10
    ctx->pc = 0x195164u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
label_195168:
    // 0x195168: 0xad220014  sw          $v0, 0x14($t1)
    ctx->pc = 0x195168u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_19516c:
    // 0x19516c: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x19516cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
label_195170:
    // 0x195170: 0x28a2001d  slti        $v0, $a1, 0x1D
    ctx->pc = 0x195170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
label_195174:
    // 0x195174: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_195178:
    if (ctx->pc == 0x195178u) {
        ctx->pc = 0x195178u;
            // 0x195178: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->pc = 0x19517Cu;
        goto label_19517c;
    }
    ctx->pc = 0x195174u;
    {
        const bool branch_taken_0x195174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195174u;
            // 0x195178: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195174) {
            ctx->pc = 0x1951E0u;
            goto label_1951e0;
        }
    }
    ctx->pc = 0x19517Cu;
label_19517c:
    // 0x19517c: 0x24a5ffe3  addiu       $a1, $a1, -0x1D
    ctx->pc = 0x19517cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967267));
label_195180:
    // 0x195180: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_195184:
    if (ctx->pc == 0x195184u) {
        ctx->pc = 0x195184u;
            // 0x195184: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x195188u;
        goto label_195188;
    }
    ctx->pc = 0x195180u;
    {
        const bool branch_taken_0x195180 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x195184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195180u;
            // 0x195184: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195180) {
            ctx->pc = 0x1951A0u;
            goto label_1951a0;
        }
    }
    ctx->pc = 0x195188u;
label_195188:
    // 0x195188: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x195188u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19518c:
    // 0x19518c: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x19518cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_195190:
    // 0x195190: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x195190u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_195194:
    // 0x195194: 0x72742  srl         $a0, $a3, 29
    ctx->pc = 0x195194u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
label_195198:
    // 0x195198: 0x10000002  b           . + 4 + (0x2 << 2)
label_19519c:
    if (ctx->pc == 0x19519Cu) {
        ctx->pc = 0x19519Cu;
            // 0x19519c: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x1951A0u;
        goto label_1951a0;
    }
    ctx->pc = 0x195198u;
    {
        const bool branch_taken_0x195198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19519Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195198u;
            // 0x19519c: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195198) {
            ctx->pc = 0x1951A4u;
            goto label_1951a4;
        }
    }
    ctx->pc = 0x1951A0u;
label_1951a0:
    // 0x1951a0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1951a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1951a4:
    // 0x1951a4: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1951a4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1951a8:
    // 0x1951a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1951a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1951ac:
    // 0x1951ac: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1951acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1951b0:
    // 0x1951b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1951b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1951b4:
    // 0x1951b4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1951b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1951b8:
    // 0x1951b8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1951b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1951bc:
    // 0x1951bc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1951bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1951c0:
    // 0x1951c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1951c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1951c4:
    // 0x1951c4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1951c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1951c8:
    // 0x1951c8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1951c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1951cc:
    // 0x1951cc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1951ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1951d0:
    // 0x1951d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1951d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1951d4:
    // 0x1951d4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1951d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1951d8:
    // 0x1951d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1951dc:
    if (ctx->pc == 0x1951DCu) {
        ctx->pc = 0x1951DCu;
            // 0x1951dc: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->pc = 0x1951E0u;
        goto label_1951e0;
    }
    ctx->pc = 0x1951D8u;
    {
        const bool branch_taken_0x1951d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1951DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1951D8u;
            // 0x1951dc: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951d8) {
            ctx->pc = 0x1951E8u;
            goto label_1951e8;
        }
    }
    ctx->pc = 0x1951E0u;
label_1951e0:
    // 0x1951e0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1951e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1951e4:
    // 0x1951e4: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x1951e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_1951e8:
    // 0x1951e8: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x1951e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
label_1951ec:
    // 0x1951ec: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1951f0:
    if (ctx->pc == 0x1951F0u) {
        ctx->pc = 0x1951F0u;
            // 0x1951f0: 0xad240018  sw          $a0, 0x18($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 4));
        ctx->pc = 0x1951F4u;
        goto label_1951f4;
    }
    ctx->pc = 0x1951ECu;
    {
        const bool branch_taken_0x1951ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1951F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1951ECu;
            // 0x1951f0: 0xad240018  sw          $a0, 0x18($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951ec) {
            ctx->pc = 0x195268u;
            goto label_195268;
        }
    }
    ctx->pc = 0x1951F4u;
label_1951f4:
    // 0x1951f4: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x1951f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_1951f8:
    // 0x1951f8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1951fc:
    if (ctx->pc == 0x1951FCu) {
        ctx->pc = 0x1951FCu;
            // 0x1951fc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x195200u;
        goto label_195200;
    }
    ctx->pc = 0x1951F8u;
    {
        const bool branch_taken_0x1951f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1951FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1951F8u;
            // 0x1951fc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951f8) {
            ctx->pc = 0x195220u;
            goto label_195220;
        }
    }
    ctx->pc = 0x195200u;
label_195200:
    // 0x195200: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x195200u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_195204:
    // 0x195204: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x195204u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_195208:
    // 0x195208: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x195208u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_19520c:
    // 0x19520c: 0x71c02  srl         $v1, $a3, 16
    ctx->pc = 0x19520cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_195210:
    // 0x195210: 0xa63804  sllv        $a3, $a2, $a1
    ctx->pc = 0x195210u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_195214:
    // 0x195214: 0x10000005  b           . + 4 + (0x5 << 2)
label_195218:
    if (ctx->pc == 0x195218u) {
        ctx->pc = 0x195218u;
            // 0x195218: 0xae0302dc  sw          $v1, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 3));
        ctx->pc = 0x19521Cu;
        goto label_19521c;
    }
    ctx->pc = 0x195214u;
    {
        const bool branch_taken_0x195214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195214u;
            // 0x195218: 0xae0302dc  sw          $v1, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195214) {
            ctx->pc = 0x19522Cu;
            goto label_19522c;
        }
    }
    ctx->pc = 0x19521Cu;
label_19521c:
    // 0x19521c: 0x0  nop
    ctx->pc = 0x19521cu;
    // NOP
label_195220:
    // 0x195220: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x195220u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_195224:
    // 0x195224: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x195224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_195228:
    // 0x195228: 0xae0202dc  sw          $v0, 0x2DC($s0)
    ctx->pc = 0x195228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
label_19522c:
    // 0x19522c: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x19522cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195230:
    // 0x195230: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195234:
    // 0x195234: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x195234u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195238:
    // 0x195238: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19523c:
    // 0x19523c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x19523cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195240:
    // 0x195240: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x195240u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195244:
    // 0x195244: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x195244u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_195248:
    // 0x195248: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19524c:
    // 0x19524c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x19524cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195250:
    // 0x195250: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x195250u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195254:
    // 0x195254: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x195254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_195258:
    // 0x195258: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19525c:
    // 0x19525c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x19525cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195260:
    // 0x195260: 0x10000005  b           . + 4 + (0x5 << 2)
label_195264:
    if (ctx->pc == 0x195264u) {
        ctx->pc = 0x195264u;
            // 0x195264: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->pc = 0x195268u;
        goto label_195268;
    }
    ctx->pc = 0x195260u;
    {
        const bool branch_taken_0x195260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195260u;
            // 0x195264: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195260) {
            ctx->pc = 0x195278u;
            goto label_195278;
        }
    }
    ctx->pc = 0x195268u;
label_195268:
    // 0x195268: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x195268u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_19526c:
    // 0x19526c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x19526cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_195270:
    // 0x195270: 0xae0202dc  sw          $v0, 0x2DC($s0)
    ctx->pc = 0x195270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
label_195274:
    // 0x195274: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x195274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_195278:
    // 0x195278: 0x8d2a0018  lw          $t2, 0x18($t1)
    ctx->pc = 0x195278u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
label_19527c:
    // 0x19527c: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x19527cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_195280:
    // 0x195280: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x195280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_195284:
    // 0x195284: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_195288:
    if (ctx->pc == 0x195288u) {
        ctx->pc = 0x195288u;
            // 0x195288: 0x8e02041c  lw          $v0, 0x41C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
        ctx->pc = 0x19528Cu;
        goto label_19528c;
    }
    ctx->pc = 0x195284u;
    {
        const bool branch_taken_0x195284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195284u;
            // 0x195288: 0x8e02041c  lw          $v0, 0x41C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195284) {
            ctx->pc = 0x1952A8u;
            goto label_1952a8;
        }
    }
    ctx->pc = 0x19528Cu;
label_19528c:
    // 0x19528c: 0xae000420  sw          $zero, 0x420($s0)
    ctx->pc = 0x19528cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 0));
label_195290:
    // 0x195290: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x195290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_195294:
    // 0x195294: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x195294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_195298:
    // 0x195298: 0xae02041c  sw          $v0, 0x41C($s0)
    ctx->pc = 0x195298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 2));
label_19529c:
    // 0x19529c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1952a0:
    if (ctx->pc == 0x1952A0u) {
        ctx->pc = 0x1952A0u;
            // 0x1952a0: 0xad230068  sw          $v1, 0x68($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 3));
        ctx->pc = 0x1952A4u;
        goto label_1952a4;
    }
    ctx->pc = 0x19529Cu;
    {
        const bool branch_taken_0x19529c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1952A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19529Cu;
            // 0x1952a0: 0xad230068  sw          $v1, 0x68($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19529c) {
            ctx->pc = 0x1952C4u;
            goto label_1952c4;
        }
    }
    ctx->pc = 0x1952A4u;
label_1952a4:
    // 0x1952a4: 0x0  nop
    ctx->pc = 0x1952a4u;
    // NOP
label_1952a8:
    // 0x1952a8: 0x8e030420  lw          $v1, 0x420($s0)
    ctx->pc = 0x1952a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1056)));
label_1952ac:
    // 0x1952ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1952acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1952b0:
    // 0x1952b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1952b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1952b4:
    // 0x1952b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1952b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1952b8:
    // 0x1952b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1952b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1952bc:
    // 0x1952bc: 0xae030420  sw          $v1, 0x420($s0)
    ctx->pc = 0x1952bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 3));
label_1952c0:
    // 0x1952c0: 0xad220068  sw          $v0, 0x68($t1)
    ctx->pc = 0x1952c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 2));
label_1952c4:
    // 0x1952c4: 0x2542fffe  addiu       $v0, $t2, -0x2
    ctx->pc = 0x1952c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
label_1952c8:
    // 0x1952c8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1952c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1952cc:
    // 0x1952cc: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_1952d0:
    if (ctx->pc == 0x1952D0u) {
        ctx->pc = 0x1952D0u;
            // 0x1952d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1952D4u;
        goto label_1952d4;
    }
    ctx->pc = 0x1952CCu;
    {
        const bool branch_taken_0x1952cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1952D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1952CCu;
            // 0x1952d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952cc) {
            ctx->pc = 0x1953D4u;
            goto label_1953d4;
        }
    }
    ctx->pc = 0x1952D4u;
label_1952d4:
    // 0x1952d4: 0x26090310  addiu       $t1, $s0, 0x310
    ctx->pc = 0x1952d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_1952d8:
    // 0x1952d8: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x1952d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_1952dc:
    // 0x1952dc: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1952dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1952e0:
    // 0x1952e0: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_1952e4:
    if (ctx->pc == 0x1952E4u) {
        ctx->pc = 0x1952E4u;
            // 0x1952e4: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1952E8u;
        goto label_1952e8;
    }
    ctx->pc = 0x1952E0u;
    {
        const bool branch_taken_0x1952e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1952E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1952E0u;
            // 0x1952e4: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952e0) {
            ctx->pc = 0x195330u;
            goto label_195330;
        }
    }
    ctx->pc = 0x1952E8u;
label_1952e8:
    // 0x1952e8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1952e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1952ec:
    // 0x1952ec: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1952ecu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1952f0:
    // 0x1952f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1952f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1952f4:
    // 0x1952f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1952f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1952f8:
    // 0x1952f8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1952f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1952fc:
    // 0x1952fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1952fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195300:
    // 0x195300: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x195300u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195304:
    // 0x195304: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x195304u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195308:
    // 0x195308: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x195308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_19530c:
    // 0x19530c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19530cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195310:
    // 0x195310: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x195310u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195314:
    // 0x195314: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x195314u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195318:
    // 0x195318: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x195318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_19531c:
    // 0x19531c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19531cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195320:
    // 0x195320: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x195320u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195324:
    // 0x195324: 0x10000004  b           . + 4 + (0x4 << 2)
label_195328:
    if (ctx->pc == 0x195328u) {
        ctx->pc = 0x195328u;
            // 0x195328: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->pc = 0x19532Cu;
        goto label_19532c;
    }
    ctx->pc = 0x195324u;
    {
        const bool branch_taken_0x195324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195324u;
            // 0x195328: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195324) {
            ctx->pc = 0x195338u;
            goto label_195338;
        }
    }
    ctx->pc = 0x19532Cu;
label_19532c:
    // 0x19532c: 0x0  nop
    ctx->pc = 0x19532cu;
    // NOP
label_195330:
    // 0x195330: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x195330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_195334:
    // 0x195334: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x195334u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_195338:
    // 0x195338: 0x28a2001d  slti        $v0, $a1, 0x1D
    ctx->pc = 0x195338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
label_19533c:
    // 0x19533c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_195340:
    if (ctx->pc == 0x195340u) {
        ctx->pc = 0x195340u;
            // 0x195340: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->pc = 0x195344u;
        goto label_195344;
    }
    ctx->pc = 0x19533Cu;
    {
        const bool branch_taken_0x19533c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19533Cu;
            // 0x195340: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19533c) {
            ctx->pc = 0x1953A8u;
            goto label_1953a8;
        }
    }
    ctx->pc = 0x195344u;
label_195344:
    // 0x195344: 0x24a5ffe3  addiu       $a1, $a1, -0x1D
    ctx->pc = 0x195344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967267));
label_195348:
    // 0x195348: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_19534c:
    if (ctx->pc == 0x19534Cu) {
        ctx->pc = 0x19534Cu;
            // 0x19534c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x195350u;
        goto label_195350;
    }
    ctx->pc = 0x195348u;
    {
        const bool branch_taken_0x195348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19534Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195348u;
            // 0x19534c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195348) {
            ctx->pc = 0x195368u;
            goto label_195368;
        }
    }
    ctx->pc = 0x195350u;
label_195350:
    // 0x195350: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x195350u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_195354:
    // 0x195354: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x195354u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_195358:
    // 0x195358: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x195358u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_19535c:
    // 0x19535c: 0x72742  srl         $a0, $a3, 29
    ctx->pc = 0x19535cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
label_195360:
    // 0x195360: 0x10000002  b           . + 4 + (0x2 << 2)
label_195364:
    if (ctx->pc == 0x195364u) {
        ctx->pc = 0x195364u;
            // 0x195364: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x195368u;
        goto label_195368;
    }
    ctx->pc = 0x195360u;
    {
        const bool branch_taken_0x195360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195360u;
            // 0x195364: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195360) {
            ctx->pc = 0x19536Cu;
            goto label_19536c;
        }
    }
    ctx->pc = 0x195368u;
label_195368:
    // 0x195368: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x195368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19536c:
    // 0x19536c: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x19536cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195370:
    // 0x195370: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195374:
    // 0x195374: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x195374u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195378:
    // 0x195378: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19537c:
    // 0x19537c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x19537cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195380:
    // 0x195380: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x195380u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195384:
    // 0x195384: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x195384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_195388:
    // 0x195388: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19538c:
    // 0x19538c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x19538cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195390:
    // 0x195390: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x195390u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195394:
    // 0x195394: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x195394u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_195398:
    // 0x195398: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19539c:
    // 0x19539c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x19539cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1953a0:
    // 0x1953a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1953a4:
    if (ctx->pc == 0x1953A4u) {
        ctx->pc = 0x1953A4u;
            // 0x1953a4: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->pc = 0x1953A8u;
        goto label_1953a8;
    }
    ctx->pc = 0x1953A0u;
    {
        const bool branch_taken_0x1953a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1953A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1953A0u;
            // 0x1953a4: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1953a0) {
            ctx->pc = 0x1953B0u;
            goto label_1953b0;
        }
    }
    ctx->pc = 0x1953A8u;
label_1953a8:
    // 0x1953a8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1953a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1953ac:
    // 0x1953ac: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x1953acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_1953b0:
    // 0x1953b0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1953b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1953b4:
    // 0x1953b4: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1953b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1953b8:
    // 0x1953b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1953b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1953bc:
    // 0x1953bc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1953bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1953c0:
    // 0x1953c0: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1953c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1953c4:
    // 0x1953c4: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x1953c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
label_1953c8:
    // 0x1953c8: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x1953c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_1953cc:
    // 0x1953cc: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x1953ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_1953d0:
    // 0x1953d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1953d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1953d4:
    // 0x1953d4: 0x55420043  bnel        $t2, $v0, . + 4 + (0x43 << 2)
label_1953d8:
    if (ctx->pc == 0x1953D8u) {
        ctx->pc = 0x1953D8u;
            // 0x1953d8: 0x8e0202fc  lw          $v0, 0x2FC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 764)));
        ctx->pc = 0x1953DCu;
        goto label_1953dc;
    }
    ctx->pc = 0x1953D4u;
    {
        const bool branch_taken_0x1953d4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x1953d4) {
            ctx->pc = 0x1953D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1953D4u;
            // 0x1953d8: 0x8e0202fc  lw          $v0, 0x2FC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 764)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1954E4u;
            goto label_1954e4;
        }
    }
    ctx->pc = 0x1953DCu;
label_1953dc:
    // 0x1953dc: 0x26090334  addiu       $t1, $s0, 0x334
    ctx->pc = 0x1953dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 820));
label_1953e0:
    // 0x1953e0: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x1953e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_1953e4:
    // 0x1953e4: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1953e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1953e8:
    // 0x1953e8: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_1953ec:
    if (ctx->pc == 0x1953ECu) {
        ctx->pc = 0x1953ECu;
            // 0x1953ec: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1953F0u;
        goto label_1953f0;
    }
    ctx->pc = 0x1953E8u;
    {
        const bool branch_taken_0x1953e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1953ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1953E8u;
            // 0x1953ec: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1953e8) {
            ctx->pc = 0x195438u;
            goto label_195438;
        }
    }
    ctx->pc = 0x1953F0u;
label_1953f0:
    // 0x1953f0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1953f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1953f4:
    // 0x1953f4: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x1953f4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1953f8:
    // 0x1953f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1953f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1953fc:
    // 0x1953fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1953fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195400:
    // 0x195400: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x195400u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195404:
    // 0x195404: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195408:
    // 0x195408: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x195408u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_19540c:
    // 0x19540c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x19540cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195410:
    // 0x195410: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x195410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_195414:
    // 0x195414: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195418:
    // 0x195418: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x195418u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_19541c:
    // 0x19541c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x19541cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195420:
    // 0x195420: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x195420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_195424:
    // 0x195424: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195428:
    // 0x195428: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x195428u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_19542c:
    // 0x19542c: 0x10000004  b           . + 4 + (0x4 << 2)
label_195430:
    if (ctx->pc == 0x195430u) {
        ctx->pc = 0x195430u;
            // 0x195430: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->pc = 0x195434u;
        goto label_195434;
    }
    ctx->pc = 0x19542Cu;
    {
        const bool branch_taken_0x19542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19542Cu;
            // 0x195430: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19542c) {
            ctx->pc = 0x195440u;
            goto label_195440;
        }
    }
    ctx->pc = 0x195434u;
label_195434:
    // 0x195434: 0x0  nop
    ctx->pc = 0x195434u;
    // NOP
label_195438:
    // 0x195438: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x195438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_19543c:
    // 0x19543c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x19543cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_195440:
    // 0x195440: 0x28a2001d  slti        $v0, $a1, 0x1D
    ctx->pc = 0x195440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
label_195444:
    // 0x195444: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_195448:
    if (ctx->pc == 0x195448u) {
        ctx->pc = 0x195448u;
            // 0x195448: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->pc = 0x19544Cu;
        goto label_19544c;
    }
    ctx->pc = 0x195444u;
    {
        const bool branch_taken_0x195444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195444u;
            // 0x195448: 0x72742  srl         $a0, $a3, 29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195444) {
            ctx->pc = 0x1954B8u;
            goto label_1954b8;
        }
    }
    ctx->pc = 0x19544Cu;
label_19544c:
    // 0x19544c: 0x24a5ffe3  addiu       $a1, $a1, -0x1D
    ctx->pc = 0x19544cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967267));
label_195450:
    // 0x195450: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_195454:
    if (ctx->pc == 0x195454u) {
        ctx->pc = 0x195454u;
            // 0x195454: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x195458u;
        goto label_195458;
    }
    ctx->pc = 0x195450u;
    {
        const bool branch_taken_0x195450 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x195454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195450u;
            // 0x195454: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195450) {
            ctx->pc = 0x195470u;
            goto label_195470;
        }
    }
    ctx->pc = 0x195458u;
label_195458:
    // 0x195458: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x195458u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19545c:
    // 0x19545c: 0x461006  srlv        $v0, $a2, $v0
    ctx->pc = 0x19545cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_195460:
    // 0x195460: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x195460u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_195464:
    // 0x195464: 0x72742  srl         $a0, $a3, 29
    ctx->pc = 0x195464u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 29));
label_195468:
    // 0x195468: 0x10000002  b           . + 4 + (0x2 << 2)
label_19546c:
    if (ctx->pc == 0x19546Cu) {
        ctx->pc = 0x19546Cu;
            // 0x19546c: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x195470u;
        goto label_195470;
    }
    ctx->pc = 0x195468u;
    {
        const bool branch_taken_0x195468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19546Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195468u;
            // 0x19546c: 0xa63804  sllv        $a3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195468) {
            ctx->pc = 0x195474u;
            goto label_195474;
        }
    }
    ctx->pc = 0x195470u;
label_195470:
    // 0x195470: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x195470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_195474:
    // 0x195474: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x195474u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195478:
    // 0x195478: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19547c:
    // 0x19547c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x19547cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195480:
    // 0x195480: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195484:
    // 0x195484: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x195484u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195488:
    // 0x195488: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x195488u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19548c:
    // 0x19548c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x19548cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_195490:
    // 0x195490: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195494:
    // 0x195494: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x195494u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195498:
    // 0x195498: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x195498u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19549c:
    // 0x19549c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x19549cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1954a0:
    // 0x1954a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1954a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1954a4:
    // 0x1954a4: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1954a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1954a8:
    // 0x1954a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1954ac:
    if (ctx->pc == 0x1954ACu) {
        ctx->pc = 0x1954ACu;
            // 0x1954ac: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->pc = 0x1954B0u;
        goto label_1954b0;
    }
    ctx->pc = 0x1954A8u;
    {
        const bool branch_taken_0x1954a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1954A8u;
            // 0x1954ac: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954a8) {
            ctx->pc = 0x1954C0u;
            goto label_1954c0;
        }
    }
    ctx->pc = 0x1954B0u;
label_1954b0:
    // 0x1954b0: 0x10000031  b           . + 4 + (0x31 << 2)
label_1954b4:
    if (ctx->pc == 0x1954B4u) {
        ctx->pc = 0x1954B4u;
            // 0x1954b4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->pc = 0x1954B8u;
        goto label_1954b8;
    }
    ctx->pc = 0x1954B0u;
    {
        const bool branch_taken_0x1954b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1954B0u;
            // 0x1954b4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954b0) {
            ctx->pc = 0x195578u;
            goto label_195578;
        }
    }
    ctx->pc = 0x1954B8u;
label_1954b8:
    // 0x1954b8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1954b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1954bc:
    // 0x1954bc: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x1954bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_1954c0:
    // 0x1954c0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1954c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1954c4:
    // 0x1954c4: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1954c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1954c8:
    // 0x1954c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1954c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1954cc:
    // 0x1954cc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1954ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1954d0:
    // 0x1954d0: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1954d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1954d4:
    // 0x1954d4: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x1954d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
label_1954d8:
    // 0x1954d8: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x1954d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_1954dc:
    // 0x1954dc: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x1954dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_1954e0:
    // 0x1954e0: 0x8e0202fc  lw          $v0, 0x2FC($s0)
    ctx->pc = 0x1954e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 764)));
label_1954e4:
    // 0x1954e4: 0xae0202f4  sw          $v0, 0x2F4($s0)
    ctx->pc = 0x1954e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 2));
label_1954e8:
    // 0x1954e8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1954ec:
    if (ctx->pc == 0x1954ECu) {
        ctx->pc = 0x1954ECu;
            // 0x1954ec: 0x8e0903ac  lw          $t1, 0x3AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->pc = 0x1954F0u;
        goto label_1954f0;
    }
    ctx->pc = 0x1954E8u;
    {
        const bool branch_taken_0x1954e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1954E8u;
            // 0x1954ec: 0x8e0903ac  lw          $t1, 0x3AC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954e8) {
            ctx->pc = 0x195560u;
            goto label_195560;
        }
    }
    ctx->pc = 0x1954F0u;
label_1954f0:
    // 0x1954f0: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1954f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1954f4:
    // 0x1954f4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1954f8:
    if (ctx->pc == 0x1954F8u) {
        ctx->pc = 0x1954F8u;
            // 0x1954f8: 0x73a40  sll         $a3, $a3, 9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 9));
        ctx->pc = 0x1954FCu;
        goto label_1954fc;
    }
    ctx->pc = 0x1954F4u;
    {
        const bool branch_taken_0x1954f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1954f4) {
            ctx->pc = 0x1954F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1954F4u;
            // 0x1954f8: 0x73a40  sll         $a3, $a3, 9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19553Cu;
            goto label_19553c;
        }
    }
    ctx->pc = 0x1954FCu;
label_1954fc:
    // 0x1954fc: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1954fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_195500:
    // 0x195500: 0xa63804  sllv        $a3, $a2, $a1
    ctx->pc = 0x195500u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_195504:
    // 0x195504: 0x81060000  lb          $a2, 0x0($t0)
    ctx->pc = 0x195504u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195508:
    // 0x195508: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_19550c:
    // 0x19550c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x19550cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_195510:
    // 0x195510: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195514:
    // 0x195514: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x195514u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195518:
    // 0x195518: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x195518u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19551c:
    // 0x19551c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x19551cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_195520:
    // 0x195520: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195524:
    // 0x195524: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x195524u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195528:
    // 0x195528: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x195528u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_19552c:
    // 0x19552c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x19552cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_195530:
    // 0x195530: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x195530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_195534:
    // 0x195534: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x195534u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_195538:
    // 0x195538: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x195538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_19553c:
    // 0x19553c: 0x24a30007  addiu       $v1, $a1, 0x7
    ctx->pc = 0x19553cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_195540:
    // 0x195540: 0x8e0403b0  lw          $a0, 0x3B0($s0)
    ctx->pc = 0x195540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
label_195544:
    // 0x195544: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x195544u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_195548:
    // 0x195548: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x195548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_19554c:
    // 0x19554c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x19554cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_195550:
    // 0x195550: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x195550u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_195554:
    // 0x195554: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x195554u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_195558:
    // 0x195558: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_19555c:
    if (ctx->pc == 0x19555Cu) {
        ctx->pc = 0x19555Cu;
            // 0x19555c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x195560u;
        goto label_195560;
    }
    ctx->pc = 0x195558u;
    {
        const bool branch_taken_0x195558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19555Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195558u;
            // 0x19555c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195558) {
            ctx->pc = 0x1955D0u;
            goto label_1955d0;
        }
    }
    ctx->pc = 0x195560u;
label_195560:
    // 0x195560: 0x4e2ffe3  bltzl       $a3, . + 4 + (-0x1D << 2)
label_195564:
    if (ctx->pc == 0x195564u) {
        ctx->pc = 0x195564u;
            // 0x195564: 0x24a50009  addiu       $a1, $a1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
        ctx->pc = 0x195568u;
        goto label_195568;
    }
    ctx->pc = 0x195560u;
    {
        const bool branch_taken_0x195560 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x195560) {
            ctx->pc = 0x195564u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x195560u;
            // 0x195564: 0x24a50009  addiu       $a1, $a1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1954F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1954f0;
        }
    }
    ctx->pc = 0x195568u;
label_195568:
    // 0x195568: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x195568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_19556c:
    // 0x19556c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x19556cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_195570:
    // 0x195570: 0x5040ffcf  beql        $v0, $zero, . + 4 + (-0x31 << 2)
label_195574:
    if (ctx->pc == 0x195574u) {
        ctx->pc = 0x195574u;
            // 0x195574: 0x24a5ffe0  addiu       $a1, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->pc = 0x195578u;
        goto label_195578;
    }
    ctx->pc = 0x195570u;
    {
        const bool branch_taken_0x195570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195570) {
            ctx->pc = 0x195574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x195570u;
            // 0x195574: 0x24a5ffe0  addiu       $a1, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1954B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1954b0;
        }
    }
    ctx->pc = 0x195578u;
label_195578:
    // 0x195578: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x195578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_19557c:
    // 0x19557c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x19557cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_195580:
    // 0x195580: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x195580u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_195584:
    // 0x195584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x195584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_195588:
    // 0x195588: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x195588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_19558c:
    // 0x19558c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19558cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_195590:
    // 0x195590: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x195590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_195594:
    // 0x195594: 0xc061c20  jal         func_187080
label_195598:
    if (ctx->pc == 0x195598u) {
        ctx->pc = 0x195598u;
            // 0x195598: 0xa92823  subu        $a1, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->pc = 0x19559Cu;
        goto label_19559c;
    }
    ctx->pc = 0x195594u;
    SET_GPR_U32(ctx, 31, 0x19559Cu);
    ctx->pc = 0x195598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195594u;
            // 0x195598: 0xa92823  subu        $a1, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19559Cu; }
        if (ctx->pc != 0x19559Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19559Cu; }
        if (ctx->pc != 0x19559Cu) { return; }
    }
    ctx->pc = 0x19559Cu;
label_19559c:
    // 0x19559c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x19559cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1955a0:
    // 0x1955a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1955a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1955a4:
    // 0x1955a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1955a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1955a8:
    // 0x1955a8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1955a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1955ac:
    // 0x1955ac: 0x40f809  jalr        $v0
label_1955b0:
    if (ctx->pc == 0x1955B0u) {
        ctx->pc = 0x1955B0u;
            // 0x1955b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1955B4u;
        goto label_1955b4;
    }
    ctx->pc = 0x1955ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1955B4u);
        ctx->pc = 0x1955B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1955ACu;
            // 0x1955b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1955B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1955B4u; }
            if (ctx->pc != 0x1955B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1955B4u;
label_1955b4:
    // 0x1955b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1955b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1955b8:
    // 0x1955b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1955b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1955bc:
    // 0x1955bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1955bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1955c0:
    // 0x1955c0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1955c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1955c4:
    // 0x1955c4: 0x40f809  jalr        $v0
label_1955c8:
    if (ctx->pc == 0x1955C8u) {
        ctx->pc = 0x1955C8u;
            // 0x1955c8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1955CCu;
        goto label_1955cc;
    }
    ctx->pc = 0x1955C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1955CCu);
        ctx->pc = 0x1955C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1955C4u;
            // 0x1955c8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1955CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1955CCu; }
            if (ctx->pc != 0x1955CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1955CCu;
label_1955cc:
    // 0x1955cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1955ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1955d0:
    // 0x1955d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1955d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1955d4:
    // 0x1955d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1955d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1955d8:
    // 0x1955d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1955d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1955dc:
    // 0x1955dc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1955dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1955e0:
    // 0x1955e0: 0x3e00008  jr          $ra
label_1955e4:
    if (ctx->pc == 0x1955E4u) {
        ctx->pc = 0x1955E4u;
            // 0x1955e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1955E8u;
        goto label_fallthrough_0x1955e0;
    }
    ctx->pc = 0x1955E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1955E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1955E0u;
            // 0x1955e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1955e0:
    ctx->pc = 0x1955E8u;
}
