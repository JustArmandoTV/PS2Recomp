#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00333000
// Address: 0x333000 - 0x333680
void sub_00333000_0x333000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333000_0x333000");
#endif

    switch (ctx->pc) {
        case 0x333000u: goto label_333000;
        case 0x333004u: goto label_333004;
        case 0x333008u: goto label_333008;
        case 0x33300cu: goto label_33300c;
        case 0x333010u: goto label_333010;
        case 0x333014u: goto label_333014;
        case 0x333018u: goto label_333018;
        case 0x33301cu: goto label_33301c;
        case 0x333020u: goto label_333020;
        case 0x333024u: goto label_333024;
        case 0x333028u: goto label_333028;
        case 0x33302cu: goto label_33302c;
        case 0x333030u: goto label_333030;
        case 0x333034u: goto label_333034;
        case 0x333038u: goto label_333038;
        case 0x33303cu: goto label_33303c;
        case 0x333040u: goto label_333040;
        case 0x333044u: goto label_333044;
        case 0x333048u: goto label_333048;
        case 0x33304cu: goto label_33304c;
        case 0x333050u: goto label_333050;
        case 0x333054u: goto label_333054;
        case 0x333058u: goto label_333058;
        case 0x33305cu: goto label_33305c;
        case 0x333060u: goto label_333060;
        case 0x333064u: goto label_333064;
        case 0x333068u: goto label_333068;
        case 0x33306cu: goto label_33306c;
        case 0x333070u: goto label_333070;
        case 0x333074u: goto label_333074;
        case 0x333078u: goto label_333078;
        case 0x33307cu: goto label_33307c;
        case 0x333080u: goto label_333080;
        case 0x333084u: goto label_333084;
        case 0x333088u: goto label_333088;
        case 0x33308cu: goto label_33308c;
        case 0x333090u: goto label_333090;
        case 0x333094u: goto label_333094;
        case 0x333098u: goto label_333098;
        case 0x33309cu: goto label_33309c;
        case 0x3330a0u: goto label_3330a0;
        case 0x3330a4u: goto label_3330a4;
        case 0x3330a8u: goto label_3330a8;
        case 0x3330acu: goto label_3330ac;
        case 0x3330b0u: goto label_3330b0;
        case 0x3330b4u: goto label_3330b4;
        case 0x3330b8u: goto label_3330b8;
        case 0x3330bcu: goto label_3330bc;
        case 0x3330c0u: goto label_3330c0;
        case 0x3330c4u: goto label_3330c4;
        case 0x3330c8u: goto label_3330c8;
        case 0x3330ccu: goto label_3330cc;
        case 0x3330d0u: goto label_3330d0;
        case 0x3330d4u: goto label_3330d4;
        case 0x3330d8u: goto label_3330d8;
        case 0x3330dcu: goto label_3330dc;
        case 0x3330e0u: goto label_3330e0;
        case 0x3330e4u: goto label_3330e4;
        case 0x3330e8u: goto label_3330e8;
        case 0x3330ecu: goto label_3330ec;
        case 0x3330f0u: goto label_3330f0;
        case 0x3330f4u: goto label_3330f4;
        case 0x3330f8u: goto label_3330f8;
        case 0x3330fcu: goto label_3330fc;
        case 0x333100u: goto label_333100;
        case 0x333104u: goto label_333104;
        case 0x333108u: goto label_333108;
        case 0x33310cu: goto label_33310c;
        case 0x333110u: goto label_333110;
        case 0x333114u: goto label_333114;
        case 0x333118u: goto label_333118;
        case 0x33311cu: goto label_33311c;
        case 0x333120u: goto label_333120;
        case 0x333124u: goto label_333124;
        case 0x333128u: goto label_333128;
        case 0x33312cu: goto label_33312c;
        case 0x333130u: goto label_333130;
        case 0x333134u: goto label_333134;
        case 0x333138u: goto label_333138;
        case 0x33313cu: goto label_33313c;
        case 0x333140u: goto label_333140;
        case 0x333144u: goto label_333144;
        case 0x333148u: goto label_333148;
        case 0x33314cu: goto label_33314c;
        case 0x333150u: goto label_333150;
        case 0x333154u: goto label_333154;
        case 0x333158u: goto label_333158;
        case 0x33315cu: goto label_33315c;
        case 0x333160u: goto label_333160;
        case 0x333164u: goto label_333164;
        case 0x333168u: goto label_333168;
        case 0x33316cu: goto label_33316c;
        case 0x333170u: goto label_333170;
        case 0x333174u: goto label_333174;
        case 0x333178u: goto label_333178;
        case 0x33317cu: goto label_33317c;
        case 0x333180u: goto label_333180;
        case 0x333184u: goto label_333184;
        case 0x333188u: goto label_333188;
        case 0x33318cu: goto label_33318c;
        case 0x333190u: goto label_333190;
        case 0x333194u: goto label_333194;
        case 0x333198u: goto label_333198;
        case 0x33319cu: goto label_33319c;
        case 0x3331a0u: goto label_3331a0;
        case 0x3331a4u: goto label_3331a4;
        case 0x3331a8u: goto label_3331a8;
        case 0x3331acu: goto label_3331ac;
        case 0x3331b0u: goto label_3331b0;
        case 0x3331b4u: goto label_3331b4;
        case 0x3331b8u: goto label_3331b8;
        case 0x3331bcu: goto label_3331bc;
        case 0x3331c0u: goto label_3331c0;
        case 0x3331c4u: goto label_3331c4;
        case 0x3331c8u: goto label_3331c8;
        case 0x3331ccu: goto label_3331cc;
        case 0x3331d0u: goto label_3331d0;
        case 0x3331d4u: goto label_3331d4;
        case 0x3331d8u: goto label_3331d8;
        case 0x3331dcu: goto label_3331dc;
        case 0x3331e0u: goto label_3331e0;
        case 0x3331e4u: goto label_3331e4;
        case 0x3331e8u: goto label_3331e8;
        case 0x3331ecu: goto label_3331ec;
        case 0x3331f0u: goto label_3331f0;
        case 0x3331f4u: goto label_3331f4;
        case 0x3331f8u: goto label_3331f8;
        case 0x3331fcu: goto label_3331fc;
        case 0x333200u: goto label_333200;
        case 0x333204u: goto label_333204;
        case 0x333208u: goto label_333208;
        case 0x33320cu: goto label_33320c;
        case 0x333210u: goto label_333210;
        case 0x333214u: goto label_333214;
        case 0x333218u: goto label_333218;
        case 0x33321cu: goto label_33321c;
        case 0x333220u: goto label_333220;
        case 0x333224u: goto label_333224;
        case 0x333228u: goto label_333228;
        case 0x33322cu: goto label_33322c;
        case 0x333230u: goto label_333230;
        case 0x333234u: goto label_333234;
        case 0x333238u: goto label_333238;
        case 0x33323cu: goto label_33323c;
        case 0x333240u: goto label_333240;
        case 0x333244u: goto label_333244;
        case 0x333248u: goto label_333248;
        case 0x33324cu: goto label_33324c;
        case 0x333250u: goto label_333250;
        case 0x333254u: goto label_333254;
        case 0x333258u: goto label_333258;
        case 0x33325cu: goto label_33325c;
        case 0x333260u: goto label_333260;
        case 0x333264u: goto label_333264;
        case 0x333268u: goto label_333268;
        case 0x33326cu: goto label_33326c;
        case 0x333270u: goto label_333270;
        case 0x333274u: goto label_333274;
        case 0x333278u: goto label_333278;
        case 0x33327cu: goto label_33327c;
        case 0x333280u: goto label_333280;
        case 0x333284u: goto label_333284;
        case 0x333288u: goto label_333288;
        case 0x33328cu: goto label_33328c;
        case 0x333290u: goto label_333290;
        case 0x333294u: goto label_333294;
        case 0x333298u: goto label_333298;
        case 0x33329cu: goto label_33329c;
        case 0x3332a0u: goto label_3332a0;
        case 0x3332a4u: goto label_3332a4;
        case 0x3332a8u: goto label_3332a8;
        case 0x3332acu: goto label_3332ac;
        case 0x3332b0u: goto label_3332b0;
        case 0x3332b4u: goto label_3332b4;
        case 0x3332b8u: goto label_3332b8;
        case 0x3332bcu: goto label_3332bc;
        case 0x3332c0u: goto label_3332c0;
        case 0x3332c4u: goto label_3332c4;
        case 0x3332c8u: goto label_3332c8;
        case 0x3332ccu: goto label_3332cc;
        case 0x3332d0u: goto label_3332d0;
        case 0x3332d4u: goto label_3332d4;
        case 0x3332d8u: goto label_3332d8;
        case 0x3332dcu: goto label_3332dc;
        case 0x3332e0u: goto label_3332e0;
        case 0x3332e4u: goto label_3332e4;
        case 0x3332e8u: goto label_3332e8;
        case 0x3332ecu: goto label_3332ec;
        case 0x3332f0u: goto label_3332f0;
        case 0x3332f4u: goto label_3332f4;
        case 0x3332f8u: goto label_3332f8;
        case 0x3332fcu: goto label_3332fc;
        case 0x333300u: goto label_333300;
        case 0x333304u: goto label_333304;
        case 0x333308u: goto label_333308;
        case 0x33330cu: goto label_33330c;
        case 0x333310u: goto label_333310;
        case 0x333314u: goto label_333314;
        case 0x333318u: goto label_333318;
        case 0x33331cu: goto label_33331c;
        case 0x333320u: goto label_333320;
        case 0x333324u: goto label_333324;
        case 0x333328u: goto label_333328;
        case 0x33332cu: goto label_33332c;
        case 0x333330u: goto label_333330;
        case 0x333334u: goto label_333334;
        case 0x333338u: goto label_333338;
        case 0x33333cu: goto label_33333c;
        case 0x333340u: goto label_333340;
        case 0x333344u: goto label_333344;
        case 0x333348u: goto label_333348;
        case 0x33334cu: goto label_33334c;
        case 0x333350u: goto label_333350;
        case 0x333354u: goto label_333354;
        case 0x333358u: goto label_333358;
        case 0x33335cu: goto label_33335c;
        case 0x333360u: goto label_333360;
        case 0x333364u: goto label_333364;
        case 0x333368u: goto label_333368;
        case 0x33336cu: goto label_33336c;
        case 0x333370u: goto label_333370;
        case 0x333374u: goto label_333374;
        case 0x333378u: goto label_333378;
        case 0x33337cu: goto label_33337c;
        case 0x333380u: goto label_333380;
        case 0x333384u: goto label_333384;
        case 0x333388u: goto label_333388;
        case 0x33338cu: goto label_33338c;
        case 0x333390u: goto label_333390;
        case 0x333394u: goto label_333394;
        case 0x333398u: goto label_333398;
        case 0x33339cu: goto label_33339c;
        case 0x3333a0u: goto label_3333a0;
        case 0x3333a4u: goto label_3333a4;
        case 0x3333a8u: goto label_3333a8;
        case 0x3333acu: goto label_3333ac;
        case 0x3333b0u: goto label_3333b0;
        case 0x3333b4u: goto label_3333b4;
        case 0x3333b8u: goto label_3333b8;
        case 0x3333bcu: goto label_3333bc;
        case 0x3333c0u: goto label_3333c0;
        case 0x3333c4u: goto label_3333c4;
        case 0x3333c8u: goto label_3333c8;
        case 0x3333ccu: goto label_3333cc;
        case 0x3333d0u: goto label_3333d0;
        case 0x3333d4u: goto label_3333d4;
        case 0x3333d8u: goto label_3333d8;
        case 0x3333dcu: goto label_3333dc;
        case 0x3333e0u: goto label_3333e0;
        case 0x3333e4u: goto label_3333e4;
        case 0x3333e8u: goto label_3333e8;
        case 0x3333ecu: goto label_3333ec;
        case 0x3333f0u: goto label_3333f0;
        case 0x3333f4u: goto label_3333f4;
        case 0x3333f8u: goto label_3333f8;
        case 0x3333fcu: goto label_3333fc;
        case 0x333400u: goto label_333400;
        case 0x333404u: goto label_333404;
        case 0x333408u: goto label_333408;
        case 0x33340cu: goto label_33340c;
        case 0x333410u: goto label_333410;
        case 0x333414u: goto label_333414;
        case 0x333418u: goto label_333418;
        case 0x33341cu: goto label_33341c;
        case 0x333420u: goto label_333420;
        case 0x333424u: goto label_333424;
        case 0x333428u: goto label_333428;
        case 0x33342cu: goto label_33342c;
        case 0x333430u: goto label_333430;
        case 0x333434u: goto label_333434;
        case 0x333438u: goto label_333438;
        case 0x33343cu: goto label_33343c;
        case 0x333440u: goto label_333440;
        case 0x333444u: goto label_333444;
        case 0x333448u: goto label_333448;
        case 0x33344cu: goto label_33344c;
        case 0x333450u: goto label_333450;
        case 0x333454u: goto label_333454;
        case 0x333458u: goto label_333458;
        case 0x33345cu: goto label_33345c;
        case 0x333460u: goto label_333460;
        case 0x333464u: goto label_333464;
        case 0x333468u: goto label_333468;
        case 0x33346cu: goto label_33346c;
        case 0x333470u: goto label_333470;
        case 0x333474u: goto label_333474;
        case 0x333478u: goto label_333478;
        case 0x33347cu: goto label_33347c;
        case 0x333480u: goto label_333480;
        case 0x333484u: goto label_333484;
        case 0x333488u: goto label_333488;
        case 0x33348cu: goto label_33348c;
        case 0x333490u: goto label_333490;
        case 0x333494u: goto label_333494;
        case 0x333498u: goto label_333498;
        case 0x33349cu: goto label_33349c;
        case 0x3334a0u: goto label_3334a0;
        case 0x3334a4u: goto label_3334a4;
        case 0x3334a8u: goto label_3334a8;
        case 0x3334acu: goto label_3334ac;
        case 0x3334b0u: goto label_3334b0;
        case 0x3334b4u: goto label_3334b4;
        case 0x3334b8u: goto label_3334b8;
        case 0x3334bcu: goto label_3334bc;
        case 0x3334c0u: goto label_3334c0;
        case 0x3334c4u: goto label_3334c4;
        case 0x3334c8u: goto label_3334c8;
        case 0x3334ccu: goto label_3334cc;
        case 0x3334d0u: goto label_3334d0;
        case 0x3334d4u: goto label_3334d4;
        case 0x3334d8u: goto label_3334d8;
        case 0x3334dcu: goto label_3334dc;
        case 0x3334e0u: goto label_3334e0;
        case 0x3334e4u: goto label_3334e4;
        case 0x3334e8u: goto label_3334e8;
        case 0x3334ecu: goto label_3334ec;
        case 0x3334f0u: goto label_3334f0;
        case 0x3334f4u: goto label_3334f4;
        case 0x3334f8u: goto label_3334f8;
        case 0x3334fcu: goto label_3334fc;
        case 0x333500u: goto label_333500;
        case 0x333504u: goto label_333504;
        case 0x333508u: goto label_333508;
        case 0x33350cu: goto label_33350c;
        case 0x333510u: goto label_333510;
        case 0x333514u: goto label_333514;
        case 0x333518u: goto label_333518;
        case 0x33351cu: goto label_33351c;
        case 0x333520u: goto label_333520;
        case 0x333524u: goto label_333524;
        case 0x333528u: goto label_333528;
        case 0x33352cu: goto label_33352c;
        case 0x333530u: goto label_333530;
        case 0x333534u: goto label_333534;
        case 0x333538u: goto label_333538;
        case 0x33353cu: goto label_33353c;
        case 0x333540u: goto label_333540;
        case 0x333544u: goto label_333544;
        case 0x333548u: goto label_333548;
        case 0x33354cu: goto label_33354c;
        case 0x333550u: goto label_333550;
        case 0x333554u: goto label_333554;
        case 0x333558u: goto label_333558;
        case 0x33355cu: goto label_33355c;
        case 0x333560u: goto label_333560;
        case 0x333564u: goto label_333564;
        case 0x333568u: goto label_333568;
        case 0x33356cu: goto label_33356c;
        case 0x333570u: goto label_333570;
        case 0x333574u: goto label_333574;
        case 0x333578u: goto label_333578;
        case 0x33357cu: goto label_33357c;
        case 0x333580u: goto label_333580;
        case 0x333584u: goto label_333584;
        case 0x333588u: goto label_333588;
        case 0x33358cu: goto label_33358c;
        case 0x333590u: goto label_333590;
        case 0x333594u: goto label_333594;
        case 0x333598u: goto label_333598;
        case 0x33359cu: goto label_33359c;
        case 0x3335a0u: goto label_3335a0;
        case 0x3335a4u: goto label_3335a4;
        case 0x3335a8u: goto label_3335a8;
        case 0x3335acu: goto label_3335ac;
        case 0x3335b0u: goto label_3335b0;
        case 0x3335b4u: goto label_3335b4;
        case 0x3335b8u: goto label_3335b8;
        case 0x3335bcu: goto label_3335bc;
        case 0x3335c0u: goto label_3335c0;
        case 0x3335c4u: goto label_3335c4;
        case 0x3335c8u: goto label_3335c8;
        case 0x3335ccu: goto label_3335cc;
        case 0x3335d0u: goto label_3335d0;
        case 0x3335d4u: goto label_3335d4;
        case 0x3335d8u: goto label_3335d8;
        case 0x3335dcu: goto label_3335dc;
        case 0x3335e0u: goto label_3335e0;
        case 0x3335e4u: goto label_3335e4;
        case 0x3335e8u: goto label_3335e8;
        case 0x3335ecu: goto label_3335ec;
        case 0x3335f0u: goto label_3335f0;
        case 0x3335f4u: goto label_3335f4;
        case 0x3335f8u: goto label_3335f8;
        case 0x3335fcu: goto label_3335fc;
        case 0x333600u: goto label_333600;
        case 0x333604u: goto label_333604;
        case 0x333608u: goto label_333608;
        case 0x33360cu: goto label_33360c;
        case 0x333610u: goto label_333610;
        case 0x333614u: goto label_333614;
        case 0x333618u: goto label_333618;
        case 0x33361cu: goto label_33361c;
        case 0x333620u: goto label_333620;
        case 0x333624u: goto label_333624;
        case 0x333628u: goto label_333628;
        case 0x33362cu: goto label_33362c;
        case 0x333630u: goto label_333630;
        case 0x333634u: goto label_333634;
        case 0x333638u: goto label_333638;
        case 0x33363cu: goto label_33363c;
        case 0x333640u: goto label_333640;
        case 0x333644u: goto label_333644;
        case 0x333648u: goto label_333648;
        case 0x33364cu: goto label_33364c;
        case 0x333650u: goto label_333650;
        case 0x333654u: goto label_333654;
        case 0x333658u: goto label_333658;
        case 0x33365cu: goto label_33365c;
        case 0x333660u: goto label_333660;
        case 0x333664u: goto label_333664;
        case 0x333668u: goto label_333668;
        case 0x33366cu: goto label_33366c;
        case 0x333670u: goto label_333670;
        case 0x333674u: goto label_333674;
        case 0x333678u: goto label_333678;
        case 0x33367cu: goto label_33367c;
        default: break;
    }

    ctx->pc = 0x333000u;

label_333000:
    // 0x333000: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x333000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_333004:
    // 0x333004: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x333004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_333008:
    // 0x333008: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x333008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_33300c:
    // 0x33300c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x33300cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_333010:
    // 0x333010: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x333010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_333014:
    // 0x333014: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x333014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_333018:
    // 0x333018: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x333018u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33301c:
    // 0x33301c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33301cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_333020:
    // 0x333020: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x333020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_333024:
    // 0x333024: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x333024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_333028:
    // 0x333028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x333028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33302c:
    // 0x33302c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33302cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_333030:
    // 0x333030: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x333030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_333034:
    // 0x333034: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x333034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_333038:
    // 0x333038: 0xc0788fc  jal         func_1E23F0
label_33303c:
    if (ctx->pc == 0x33303Cu) {
        ctx->pc = 0x33303Cu;
            // 0x33303c: 0xafa00120  sw          $zero, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
        ctx->pc = 0x333040u;
        goto label_333040;
    }
    ctx->pc = 0x333038u;
    SET_GPR_U32(ctx, 31, 0x333040u);
    ctx->pc = 0x33303Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333038u;
            // 0x33303c: 0xafa00120  sw          $zero, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333040u; }
        if (ctx->pc != 0x333040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333040u; }
        if (ctx->pc != 0x333040u) { return; }
    }
    ctx->pc = 0x333040u;
label_333040:
    // 0x333040: 0x26a409dc  addiu       $a0, $s5, 0x9DC
    ctx->pc = 0x333040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2524));
label_333044:
    // 0x333044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x333044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_333048:
    // 0x333048: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x333048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_33304c:
    // 0x33304c: 0xc04a576  jal         func_1295D8
label_333050:
    if (ctx->pc == 0x333050u) {
        ctx->pc = 0x333050u;
            // 0x333050: 0xa2a00c69  sb          $zero, 0xC69($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 3177), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x333054u;
        goto label_333054;
    }
    ctx->pc = 0x33304Cu;
    SET_GPR_U32(ctx, 31, 0x333054u);
    ctx->pc = 0x333050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33304Cu;
            // 0x333050: 0xa2a00c69  sb          $zero, 0xC69($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 3177), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333054u; }
        if (ctx->pc != 0x333054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333054u; }
        if (ctx->pc != 0x333054u) { return; }
    }
    ctx->pc = 0x333054u;
label_333054:
    // 0x333054: 0x26a409fc  addiu       $a0, $s5, 0x9FC
    ctx->pc = 0x333054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2556));
label_333058:
    // 0x333058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x333058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33305c:
    // 0x33305c: 0xc04a576  jal         func_1295D8
label_333060:
    if (ctx->pc == 0x333060u) {
        ctx->pc = 0x333060u;
            // 0x333060: 0x24060260  addiu       $a2, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->pc = 0x333064u;
        goto label_333064;
    }
    ctx->pc = 0x33305Cu;
    SET_GPR_U32(ctx, 31, 0x333064u);
    ctx->pc = 0x333060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33305Cu;
            // 0x333060: 0x24060260  addiu       $a2, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333064u; }
        if (ctx->pc != 0x333064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333064u; }
        if (ctx->pc != 0x333064u) { return; }
    }
    ctx->pc = 0x333064u;
label_333064:
    // 0x333064: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x333064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_333068:
    // 0x333068: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x333068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33306c:
    // 0x33306c: 0x26020758  addiu       $v0, $s0, 0x758
    ctx->pc = 0x33306cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1880));
label_333070:
    // 0x333070: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x333070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_333074:
    // 0x333074: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x333074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_333078:
    // 0x333078: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x333078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_33307c:
    // 0x33307c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x33307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_333080:
    // 0x333080: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x333080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333084:
    // 0x333084: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x333084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_333088:
    // 0x333088: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x333088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_33308c:
    // 0x33308c: 0xc0a997c  jal         func_2A65F0
label_333090:
    if (ctx->pc == 0x333090u) {
        ctx->pc = 0x333090u;
            // 0x333090: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x333094u;
        goto label_333094;
    }
    ctx->pc = 0x33308Cu;
    SET_GPR_U32(ctx, 31, 0x333094u);
    ctx->pc = 0x333090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33308Cu;
            // 0x333090: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333094u; }
        if (ctx->pc != 0x333094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333094u; }
        if (ctx->pc != 0x333094u) { return; }
    }
    ctx->pc = 0x333094u;
label_333094:
    // 0x333094: 0x8ea2077c  lw          $v0, 0x77C($s5)
    ctx->pc = 0x333094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
label_333098:
    // 0x333098: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x333098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_33309c:
    // 0x33309c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x33309cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3330a0:
    // 0x3330a0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3330a4:
    if (ctx->pc == 0x3330A4u) {
        ctx->pc = 0x3330A4u;
            // 0x3330a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x3330A8u;
        goto label_3330a8;
    }
    ctx->pc = 0x3330A0u;
    {
        const bool branch_taken_0x3330a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3330A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3330A0u;
            // 0x3330a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3330a0) {
            ctx->pc = 0x33306Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33306c;
        }
    }
    ctx->pc = 0x3330A8u;
label_3330a8:
    // 0x3330a8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3330a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3330ac:
    // 0x3330ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3330acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3330b0:
    // 0x3330b0: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x3330b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_3330b4:
    // 0x3330b4: 0x320f809  jalr        $t9
label_3330b8:
    if (ctx->pc == 0x3330B8u) {
        ctx->pc = 0x3330B8u;
            // 0x3330b8: 0x27a50118  addiu       $a1, $sp, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
        ctx->pc = 0x3330BCu;
        goto label_3330bc;
    }
    ctx->pc = 0x3330B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3330BCu);
        ctx->pc = 0x3330B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3330B4u;
            // 0x3330b8: 0x27a50118  addiu       $a1, $sp, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3330BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3330BCu; }
            if (ctx->pc != 0x3330BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3330BCu;
label_3330bc:
    // 0x3330bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3330bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3330c0:
    // 0x3330c0: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x3330c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_3330c4:
    // 0x3330c4: 0x8c477378  lw          $a3, 0x7378($v0)
    ctx->pc = 0x3330c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_3330c8:
    // 0x3330c8: 0x27a50128  addiu       $a1, $sp, 0x128
    ctx->pc = 0x3330c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_3330cc:
    // 0x3330cc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3330ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3330d0:
    // 0x3330d0: 0x27a60134  addiu       $a2, $sp, 0x134
    ctx->pc = 0x3330d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_3330d4:
    // 0x3330d4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3330d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3330d8:
    // 0x3330d8: 0xafa70134  sw          $a3, 0x134($sp)
    ctx->pc = 0x3330d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 7));
label_3330dc:
    // 0x3330dc: 0xc0cd5a0  jal         func_335680
label_3330e0:
    if (ctx->pc == 0x3330E0u) {
        ctx->pc = 0x3330E0u;
            // 0x3330e0: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3330E4u;
        goto label_3330e4;
    }
    ctx->pc = 0x3330DCu;
    SET_GPR_U32(ctx, 31, 0x3330E4u);
    ctx->pc = 0x3330E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3330DCu;
            // 0x3330e0: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335680u;
    if (runtime->hasFunction(0x335680u)) {
        auto targetFn = runtime->lookupFunction(0x335680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3330E4u; }
        if (ctx->pc != 0x3330E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335680_0x335680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3330E4u; }
        if (ctx->pc != 0x3330E4u) { return; }
    }
    ctx->pc = 0x3330E4u;
label_3330e4:
    // 0x3330e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3330e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3330e8:
    // 0x3330e8: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x3330e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3330ec:
    // 0x3330ec: 0x8c477378  lw          $a3, 0x7378($v0)
    ctx->pc = 0x3330ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_3330f0:
    // 0x3330f0: 0x27a50124  addiu       $a1, $sp, 0x124
    ctx->pc = 0x3330f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_3330f4:
    // 0x3330f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3330f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3330f8:
    // 0x3330f8: 0x27a6012c  addiu       $a2, $sp, 0x12C
    ctx->pc = 0x3330f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_3330fc:
    // 0x3330fc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3330fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_333100:
    // 0x333100: 0xafa7012c  sw          $a3, 0x12C($sp)
    ctx->pc = 0x333100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 7));
label_333104:
    // 0x333104: 0xc0cd5a0  jal         func_335680
label_333108:
    if (ctx->pc == 0x333108u) {
        ctx->pc = 0x333108u;
            // 0x333108: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x33310Cu;
        goto label_33310c;
    }
    ctx->pc = 0x333104u;
    SET_GPR_U32(ctx, 31, 0x33310Cu);
    ctx->pc = 0x333108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333104u;
            // 0x333108: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335680u;
    if (runtime->hasFunction(0x335680u)) {
        auto targetFn = runtime->lookupFunction(0x335680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33310Cu; }
        if (ctx->pc != 0x33310Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335680_0x335680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33310Cu; }
        if (ctx->pc != 0x33310Cu) { return; }
    }
    ctx->pc = 0x33310Cu;
label_33310c:
    // 0x33310c: 0x8fb00120  lw          $s0, 0x120($sp)
    ctx->pc = 0x33310cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_333110:
    // 0x333110: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x333110u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_333114:
    // 0x333114: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x333114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_333118:
    // 0x333118: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x333118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_33311c:
    // 0x33311c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x33311cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_333120:
    // 0x333120: 0x24631490  addiu       $v1, $v1, 0x1490
    ctx->pc = 0x333120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5264));
label_333124:
    // 0x333124: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x333124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_333128:
    // 0x333128: 0x8ea20780  lw          $v0, 0x780($s5)
    ctx->pc = 0x333128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
label_33312c:
    // 0x33312c: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x33312cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_333130:
    // 0x333130: 0x2c2882b  sltu        $s1, $s6, $v0
    ctx->pc = 0x333130u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_333134:
    // 0x333134: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x333134u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_333138:
    // 0x333138: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x333138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_33313c:
    // 0x33313c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x33313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_333140:
    // 0x333140: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x333140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_333144:
    // 0x333144: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x333144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_333148:
    // 0x333148: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x333148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_33314c:
    // 0x33314c: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x33314cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
label_333150:
    // 0x333150: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x333150u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_333154:
    // 0x333154: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x333154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_333158:
    // 0x333158: 0x2862002f  slti        $v0, $v1, 0x2F
    ctx->pc = 0x333158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)47) ? 1 : 0);
label_33315c:
    // 0x33315c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_333160:
    if (ctx->pc == 0x333160u) {
        ctx->pc = 0x333164u;
        goto label_333164;
    }
    ctx->pc = 0x33315Cu;
    {
        const bool branch_taken_0x33315c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33315c) {
            ctx->pc = 0x333210u;
            goto label_333210;
        }
    }
    ctx->pc = 0x333164u;
label_333164:
    // 0x333164: 0x28610032  slti        $at, $v1, 0x32
    ctx->pc = 0x333164u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
label_333168:
    // 0x333168: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_33316c:
    if (ctx->pc == 0x33316Cu) {
        ctx->pc = 0x333170u;
        goto label_333170;
    }
    ctx->pc = 0x333168u;
    {
        const bool branch_taken_0x333168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333168) {
            ctx->pc = 0x333210u;
            goto label_333210;
        }
    }
    ctx->pc = 0x333170u;
label_333170:
    // 0x333170: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x333170u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_333174:
    // 0x333174: 0x27a4015c  addiu       $a0, $sp, 0x15C
    ctx->pc = 0x333174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_333178:
    // 0x333178: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x333178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_33317c:
    // 0x33317c: 0xc0cd304  jal         func_334C10
label_333180:
    if (ctx->pc == 0x333180u) {
        ctx->pc = 0x333180u;
            // 0x333180: 0x24c606f8  addiu       $a2, $a2, 0x6F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1784));
        ctx->pc = 0x333184u;
        goto label_333184;
    }
    ctx->pc = 0x33317Cu;
    SET_GPR_U32(ctx, 31, 0x333184u);
    ctx->pc = 0x333180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33317Cu;
            // 0x333180: 0x24c606f8  addiu       $a2, $a2, 0x6F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334C10u;
    if (runtime->hasFunction(0x334C10u)) {
        auto targetFn = runtime->lookupFunction(0x334C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333184u; }
        if (ctx->pc != 0x333184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334C10_0x334c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333184u; }
        if (ctx->pc != 0x333184u) { return; }
    }
    ctx->pc = 0x333184u;
label_333184:
    // 0x333184: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x333184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_333188:
    // 0x333188: 0x27a200ac  addiu       $v0, $sp, 0xAC
    ctx->pc = 0x333188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_33318c:
    // 0x33318c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_333190:
    if (ctx->pc == 0x333190u) {
        ctx->pc = 0x333194u;
        goto label_333194;
    }
    ctx->pc = 0x33318Cu;
    {
        const bool branch_taken_0x33318c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33318c) {
            ctx->pc = 0x3331B8u;
            goto label_3331b8;
        }
    }
    ctx->pc = 0x333194u;
label_333194:
    // 0x333194: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x333194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_333198:
    // 0x333198: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x333198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_33319c:
    // 0x33319c: 0x8c420700  lw          $v0, 0x700($v0)
    ctx->pc = 0x33319cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1792)));
label_3331a0:
    // 0x3331a0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3331a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3331a4:
    // 0x3331a4: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x3331a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_3331a8:
    // 0x3331a8: 0xafb1010c  sw          $s1, 0x10C($sp)
    ctx->pc = 0x3331a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 17));
label_3331ac:
    // 0x3331ac: 0xc0cd570  jal         func_3355C0
label_3331b0:
    if (ctx->pc == 0x3331B0u) {
        ctx->pc = 0x3331B0u;
            // 0x3331b0: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->pc = 0x3331B4u;
        goto label_3331b4;
    }
    ctx->pc = 0x3331ACu;
    SET_GPR_U32(ctx, 31, 0x3331B4u);
    ctx->pc = 0x3331B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3331ACu;
            // 0x3331b0: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3355C0u;
    if (runtime->hasFunction(0x3355C0u)) {
        auto targetFn = runtime->lookupFunction(0x3355C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3331B4u; }
        if (ctx->pc != 0x3331B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003355C0_0x3355c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3331B4u; }
        if (ctx->pc != 0x3331B4u) { return; }
    }
    ctx->pc = 0x3331B4u;
label_3331b4:
    // 0x3331b4: 0x0  nop
    ctx->pc = 0x3331b4u;
    // NOP
label_3331b8:
    // 0x3331b8: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x3331b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_3331bc:
    // 0x3331bc: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x3331bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_3331c0:
    // 0x3331c0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3331c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3331c4:
    // 0x3331c4: 0x27a60154  addiu       $a2, $sp, 0x154
    ctx->pc = 0x3331c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_3331c8:
    // 0x3331c8: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x3331c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
label_3331cc:
    // 0x3331cc: 0xc0cd304  jal         func_334C10
label_3331d0:
    if (ctx->pc == 0x3331D0u) {
        ctx->pc = 0x3331D0u;
            // 0x3331d0: 0xafa20154  sw          $v0, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
        ctx->pc = 0x3331D4u;
        goto label_3331d4;
    }
    ctx->pc = 0x3331CCu;
    SET_GPR_U32(ctx, 31, 0x3331D4u);
    ctx->pc = 0x3331D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3331CCu;
            // 0x3331d0: 0xafa20154  sw          $v0, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334C10u;
    if (runtime->hasFunction(0x334C10u)) {
        auto targetFn = runtime->lookupFunction(0x334C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3331D4u; }
        if (ctx->pc != 0x3331D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334C10_0x334c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3331D4u; }
        if (ctx->pc != 0x3331D4u) { return; }
    }
    ctx->pc = 0x3331D4u;
label_3331d4:
    // 0x3331d4: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x3331d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_3331d8:
    // 0x3331d8: 0x27a2008c  addiu       $v0, $sp, 0x8C
    ctx->pc = 0x3331d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_3331dc:
    // 0x3331dc: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
label_3331e0:
    if (ctx->pc == 0x3331E0u) {
        ctx->pc = 0x3331E4u;
        goto label_3331e4;
    }
    ctx->pc = 0x3331DCu;
    {
        const bool branch_taken_0x3331dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3331dc) {
            ctx->pc = 0x333298u;
            goto label_333298;
        }
    }
    ctx->pc = 0x3331E4u;
label_3331e4:
    // 0x3331e4: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x3331e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_3331e8:
    // 0x3331e8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x3331e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3331ec:
    // 0x3331ec: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3331ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3331f0:
    // 0x3331f0: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x3331f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_3331f4:
    // 0x3331f4: 0xafb100fc  sw          $s1, 0xFC($sp)
    ctx->pc = 0x3331f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 17));
label_3331f8:
    // 0x3331f8: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x3331f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
label_3331fc:
    // 0x3331fc: 0xc0cd570  jal         func_3355C0
label_333200:
    if (ctx->pc == 0x333200u) {
        ctx->pc = 0x333200u;
            // 0x333200: 0xafa200f8  sw          $v0, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
        ctx->pc = 0x333204u;
        goto label_333204;
    }
    ctx->pc = 0x3331FCu;
    SET_GPR_U32(ctx, 31, 0x333204u);
    ctx->pc = 0x333200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3331FCu;
            // 0x333200: 0xafa200f8  sw          $v0, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3355C0u;
    if (runtime->hasFunction(0x3355C0u)) {
        auto targetFn = runtime->lookupFunction(0x3355C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333204u; }
        if (ctx->pc != 0x333204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003355C0_0x3355c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333204u; }
        if (ctx->pc != 0x333204u) { return; }
    }
    ctx->pc = 0x333204u;
label_333204:
    // 0x333204: 0x10000024  b           . + 4 + (0x24 << 2)
label_333208:
    if (ctx->pc == 0x333208u) {
        ctx->pc = 0x33320Cu;
        goto label_33320c;
    }
    ctx->pc = 0x333204u;
    {
        const bool branch_taken_0x333204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333204) {
            ctx->pc = 0x333298u;
            goto label_333298;
        }
    }
    ctx->pc = 0x33320Cu;
label_33320c:
    // 0x33320c: 0x0  nop
    ctx->pc = 0x33320cu;
    // NOP
label_333210:
    // 0x333210: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x333210u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_333214:
    // 0x333214: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x333214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_333218:
    // 0x333218: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x333218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_33321c:
    // 0x33321c: 0xc0cd304  jal         func_334C10
label_333220:
    if (ctx->pc == 0x333220u) {
        ctx->pc = 0x333220u;
            // 0x333220: 0x24c60708  addiu       $a2, $a2, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1800));
        ctx->pc = 0x333224u;
        goto label_333224;
    }
    ctx->pc = 0x33321Cu;
    SET_GPR_U32(ctx, 31, 0x333224u);
    ctx->pc = 0x333220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33321Cu;
            // 0x333220: 0x24c60708  addiu       $a2, $a2, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334C10u;
    if (runtime->hasFunction(0x334C10u)) {
        auto targetFn = runtime->lookupFunction(0x334C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333224u; }
        if (ctx->pc != 0x333224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334C10_0x334c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333224u; }
        if (ctx->pc != 0x333224u) { return; }
    }
    ctx->pc = 0x333224u;
label_333224:
    // 0x333224: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x333224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_333228:
    // 0x333228: 0x27a200ac  addiu       $v0, $sp, 0xAC
    ctx->pc = 0x333228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_33322c:
    // 0x33322c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_333230:
    if (ctx->pc == 0x333230u) {
        ctx->pc = 0x333234u;
        goto label_333234;
    }
    ctx->pc = 0x33322Cu;
    {
        const bool branch_taken_0x33322c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33322c) {
            ctx->pc = 0x333258u;
            goto label_333258;
        }
    }
    ctx->pc = 0x333234u;
label_333234:
    // 0x333234: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x333234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_333238:
    // 0x333238: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x333238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_33323c:
    // 0x33323c: 0x8c420710  lw          $v0, 0x710($v0)
    ctx->pc = 0x33323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1808)));
label_333240:
    // 0x333240: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x333240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_333244:
    // 0x333244: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x333244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_333248:
    // 0x333248: 0xafb100ec  sw          $s1, 0xEC($sp)
    ctx->pc = 0x333248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 17));
label_33324c:
    // 0x33324c: 0xc0cd570  jal         func_3355C0
label_333250:
    if (ctx->pc == 0x333250u) {
        ctx->pc = 0x333250u;
            // 0x333250: 0xafa200e8  sw          $v0, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x333254u;
        goto label_333254;
    }
    ctx->pc = 0x33324Cu;
    SET_GPR_U32(ctx, 31, 0x333254u);
    ctx->pc = 0x333250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33324Cu;
            // 0x333250: 0xafa200e8  sw          $v0, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3355C0u;
    if (runtime->hasFunction(0x3355C0u)) {
        auto targetFn = runtime->lookupFunction(0x3355C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333254u; }
        if (ctx->pc != 0x333254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003355C0_0x3355c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333254u; }
        if (ctx->pc != 0x333254u) { return; }
    }
    ctx->pc = 0x333254u;
label_333254:
    // 0x333254: 0x0  nop
    ctx->pc = 0x333254u;
    // NOP
label_333258:
    // 0x333258: 0x27a4014c  addiu       $a0, $sp, 0x14C
    ctx->pc = 0x333258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_33325c:
    // 0x33325c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x33325cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_333260:
    // 0x333260: 0xc0cd304  jal         func_334C10
label_333264:
    if (ctx->pc == 0x333264u) {
        ctx->pc = 0x333264u;
            // 0x333264: 0x27a60168  addiu       $a2, $sp, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
        ctx->pc = 0x333268u;
        goto label_333268;
    }
    ctx->pc = 0x333260u;
    SET_GPR_U32(ctx, 31, 0x333268u);
    ctx->pc = 0x333264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333260u;
            // 0x333264: 0x27a60168  addiu       $a2, $sp, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334C10u;
    if (runtime->hasFunction(0x334C10u)) {
        auto targetFn = runtime->lookupFunction(0x334C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333268u; }
        if (ctx->pc != 0x333268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334C10_0x334c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333268u; }
        if (ctx->pc != 0x333268u) { return; }
    }
    ctx->pc = 0x333268u;
label_333268:
    // 0x333268: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x333268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_33326c:
    // 0x33326c: 0x27a2008c  addiu       $v0, $sp, 0x8C
    ctx->pc = 0x33326cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_333270:
    // 0x333270: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_333274:
    if (ctx->pc == 0x333274u) {
        ctx->pc = 0x333278u;
        goto label_333278;
    }
    ctx->pc = 0x333270u;
    {
        const bool branch_taken_0x333270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x333270) {
            ctx->pc = 0x333298u;
            goto label_333298;
        }
    }
    ctx->pc = 0x333278u;
label_333278:
    // 0x333278: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x333278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_33327c:
    // 0x33327c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x33327cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_333280:
    // 0x333280: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x333280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_333284:
    // 0x333284: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x333284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_333288:
    // 0x333288: 0xafb100dc  sw          $s1, 0xDC($sp)
    ctx->pc = 0x333288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 17));
label_33328c:
    // 0x33328c: 0xc0cd570  jal         func_3355C0
label_333290:
    if (ctx->pc == 0x333290u) {
        ctx->pc = 0x333290u;
            // 0x333290: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x333294u;
        goto label_333294;
    }
    ctx->pc = 0x33328Cu;
    SET_GPR_U32(ctx, 31, 0x333294u);
    ctx->pc = 0x333290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33328Cu;
            // 0x333290: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3355C0u;
    if (runtime->hasFunction(0x3355C0u)) {
        auto targetFn = runtime->lookupFunction(0x3355C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333294u; }
        if (ctx->pc != 0x333294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003355C0_0x3355c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333294u; }
        if (ctx->pc != 0x333294u) { return; }
    }
    ctx->pc = 0x333294u;
label_333294:
    // 0x333294: 0x0  nop
    ctx->pc = 0x333294u;
    // NOP
label_333298:
    // 0x333298: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x333298u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33329c:
    // 0x33329c: 0x0  nop
    ctx->pc = 0x33329cu;
    // NOP
label_3332a0:
    // 0x3332a0: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x3332a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_3332a4:
    // 0x3332a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3332a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3332a8:
    // 0x3332a8: 0x10430075  beq         $v0, $v1, . + 4 + (0x75 << 2)
label_3332ac:
    if (ctx->pc == 0x3332ACu) {
        ctx->pc = 0x3332B0u;
        goto label_3332b0;
    }
    ctx->pc = 0x3332A8u;
    {
        const bool branch_taken_0x3332a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3332a8) {
            ctx->pc = 0x333480u;
            goto label_333480;
        }
    }
    ctx->pc = 0x3332B0u;
label_3332b0:
    // 0x3332b0: 0x28430034  slti        $v1, $v0, 0x34
    ctx->pc = 0x3332b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)52) ? 1 : 0);
label_3332b4:
    // 0x3332b4: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_3332b8:
    if (ctx->pc == 0x3332B8u) {
        ctx->pc = 0x3332B8u;
            // 0x3332b8: 0x2843001a  slti        $v1, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
        ctx->pc = 0x3332BCu;
        goto label_3332bc;
    }
    ctx->pc = 0x3332B4u;
    {
        const bool branch_taken_0x3332b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3332b4) {
            ctx->pc = 0x3332B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3332B4u;
            // 0x3332b8: 0x2843001a  slti        $v1, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3332CCu;
            goto label_3332cc;
        }
    }
    ctx->pc = 0x3332BCu;
label_3332bc:
    // 0x3332bc: 0x28430036  slti        $v1, $v0, 0x36
    ctx->pc = 0x3332bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)54) ? 1 : 0);
label_3332c0:
    // 0x3332c0: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
label_3332c4:
    if (ctx->pc == 0x3332C4u) {
        ctx->pc = 0x3332C8u;
        goto label_3332c8;
    }
    ctx->pc = 0x3332C0u;
    {
        const bool branch_taken_0x3332c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3332c0) {
            ctx->pc = 0x3333D0u;
            goto label_3333d0;
        }
    }
    ctx->pc = 0x3332C8u;
label_3332c8:
    // 0x3332c8: 0x2843001a  slti        $v1, $v0, 0x1A
    ctx->pc = 0x3332c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
label_3332cc:
    // 0x3332cc: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_3332d0:
    if (ctx->pc == 0x3332D0u) {
        ctx->pc = 0x3332D0u;
            // 0x3332d0: 0x28430032  slti        $v1, $v0, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->pc = 0x3332D4u;
        goto label_3332d4;
    }
    ctx->pc = 0x3332CCu;
    {
        const bool branch_taken_0x3332cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3332cc) {
            ctx->pc = 0x3332D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3332CCu;
            // 0x3332d0: 0x28430032  slti        $v1, $v0, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3332E4u;
            goto label_3332e4;
        }
    }
    ctx->pc = 0x3332D4u;
label_3332d4:
    // 0x3332d4: 0x2843002f  slti        $v1, $v0, 0x2F
    ctx->pc = 0x3332d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)47) ? 1 : 0);
label_3332d8:
    // 0x3332d8: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
label_3332dc:
    if (ctx->pc == 0x3332DCu) {
        ctx->pc = 0x3332E0u;
        goto label_3332e0;
    }
    ctx->pc = 0x3332D8u;
    {
        const bool branch_taken_0x3332d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3332d8) {
            ctx->pc = 0x3333C8u;
            goto label_3333c8;
        }
    }
    ctx->pc = 0x3332E0u;
label_3332e0:
    // 0x3332e0: 0x28430032  slti        $v1, $v0, 0x32
    ctx->pc = 0x3332e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
label_3332e4:
    // 0x3332e4: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_3332e8:
    if (ctx->pc == 0x3332E8u) {
        ctx->pc = 0x3332E8u;
            // 0x3332e8: 0x2843002f  slti        $v1, $v0, 0x2F (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)47) ? 1 : 0);
        ctx->pc = 0x3332ECu;
        goto label_3332ec;
    }
    ctx->pc = 0x3332E4u;
    {
        const bool branch_taken_0x3332e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3332e4) {
            ctx->pc = 0x3332E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3332E4u;
            // 0x3332e8: 0x2843002f  slti        $v1, $v0, 0x2F (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)47) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3332FCu;
            goto label_3332fc;
        }
    }
    ctx->pc = 0x3332ECu;
label_3332ec:
    // 0x3332ec: 0x28430034  slti        $v1, $v0, 0x34
    ctx->pc = 0x3332ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)52) ? 1 : 0);
label_3332f0:
    // 0x3332f0: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
label_3332f4:
    if (ctx->pc == 0x3332F4u) {
        ctx->pc = 0x3332F8u;
        goto label_3332f8;
    }
    ctx->pc = 0x3332F0u;
    {
        const bool branch_taken_0x3332f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3332f0) {
            ctx->pc = 0x3333C0u;
            goto label_3333c0;
        }
    }
    ctx->pc = 0x3332F8u;
label_3332f8:
    // 0x3332f8: 0x2843002f  slti        $v1, $v0, 0x2F
    ctx->pc = 0x3332f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)47) ? 1 : 0);
label_3332fc:
    // 0x3332fc: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_333300:
    if (ctx->pc == 0x333300u) {
        ctx->pc = 0x333300u;
            // 0x333300: 0x28430016  slti        $v1, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->pc = 0x333304u;
        goto label_333304;
    }
    ctx->pc = 0x3332FCu;
    {
        const bool branch_taken_0x3332fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3332fc) {
            ctx->pc = 0x333300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3332FCu;
            // 0x333300: 0x28430016  slti        $v1, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x333314u;
            goto label_333314;
        }
    }
    ctx->pc = 0x333304u;
label_333304:
    // 0x333304: 0x28430032  slti        $v1, $v0, 0x32
    ctx->pc = 0x333304u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
label_333308:
    // 0x333308: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_33330c:
    if (ctx->pc == 0x33330Cu) {
        ctx->pc = 0x333310u;
        goto label_333310;
    }
    ctx->pc = 0x333308u;
    {
        const bool branch_taken_0x333308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x333308) {
            ctx->pc = 0x3333B8u;
            goto label_3333b8;
        }
    }
    ctx->pc = 0x333310u;
label_333310:
    // 0x333310: 0x28430016  slti        $v1, $v0, 0x16
    ctx->pc = 0x333310u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)22) ? 1 : 0);
label_333314:
    // 0x333314: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_333318:
    if (ctx->pc == 0x333318u) {
        ctx->pc = 0x333318u;
            // 0x333318: 0x28430013  slti        $v1, $v0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->pc = 0x33331Cu;
        goto label_33331c;
    }
    ctx->pc = 0x333314u;
    {
        const bool branch_taken_0x333314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x333314) {
            ctx->pc = 0x333318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333314u;
            // 0x333318: 0x28430013  slti        $v1, $v0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x33332Cu;
            goto label_33332c;
        }
    }
    ctx->pc = 0x33331Cu;
label_33331c:
    // 0x33331c: 0x2843001a  slti        $v1, $v0, 0x1A
    ctx->pc = 0x33331cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
label_333320:
    // 0x333320: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
label_333324:
    if (ctx->pc == 0x333324u) {
        ctx->pc = 0x333328u;
        goto label_333328;
    }
    ctx->pc = 0x333320u;
    {
        const bool branch_taken_0x333320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x333320) {
            ctx->pc = 0x3333B0u;
            goto label_3333b0;
        }
    }
    ctx->pc = 0x333328u;
label_333328:
    // 0x333328: 0x28430013  slti        $v1, $v0, 0x13
    ctx->pc = 0x333328u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)19) ? 1 : 0);
label_33332c:
    // 0x33332c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_333330:
    if (ctx->pc == 0x333330u) {
        ctx->pc = 0x333330u;
            // 0x333330: 0x2843000f  slti        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->pc = 0x333334u;
        goto label_333334;
    }
    ctx->pc = 0x33332Cu;
    {
        const bool branch_taken_0x33332c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33332c) {
            ctx->pc = 0x333330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33332Cu;
            // 0x333330: 0x2843000f  slti        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x333344u;
            goto label_333344;
        }
    }
    ctx->pc = 0x333334u;
label_333334:
    // 0x333334: 0x28430016  slti        $v1, $v0, 0x16
    ctx->pc = 0x333334u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)22) ? 1 : 0);
label_333338:
    // 0x333338: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
label_33333c:
    if (ctx->pc == 0x33333Cu) {
        ctx->pc = 0x333340u;
        goto label_333340;
    }
    ctx->pc = 0x333338u;
    {
        const bool branch_taken_0x333338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x333338) {
            ctx->pc = 0x3333A8u;
            goto label_3333a8;
        }
    }
    ctx->pc = 0x333340u;
label_333340:
    // 0x333340: 0x2843000f  slti        $v1, $v0, 0xF
    ctx->pc = 0x333340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_333344:
    // 0x333344: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_333348:
    if (ctx->pc == 0x333348u) {
        ctx->pc = 0x333348u;
            // 0x333348: 0x2843000a  slti        $v1, $v0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->pc = 0x33334Cu;
        goto label_33334c;
    }
    ctx->pc = 0x333344u;
    {
        const bool branch_taken_0x333344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x333344) {
            ctx->pc = 0x333348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333344u;
            // 0x333348: 0x2843000a  slti        $v1, $v0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x33335Cu;
            goto label_33335c;
        }
    }
    ctx->pc = 0x33334Cu;
label_33334c:
    // 0x33334c: 0x28430013  slti        $v1, $v0, 0x13
    ctx->pc = 0x33334cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)19) ? 1 : 0);
label_333350:
    // 0x333350: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_333354:
    if (ctx->pc == 0x333354u) {
        ctx->pc = 0x333358u;
        goto label_333358;
    }
    ctx->pc = 0x333350u;
    {
        const bool branch_taken_0x333350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x333350) {
            ctx->pc = 0x3333A0u;
            goto label_3333a0;
        }
    }
    ctx->pc = 0x333358u;
label_333358:
    // 0x333358: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x333358u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_33335c:
    // 0x33335c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_333360:
    if (ctx->pc == 0x333360u) {
        ctx->pc = 0x333364u;
        goto label_333364;
    }
    ctx->pc = 0x33335Cu;
    {
        const bool branch_taken_0x33335c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33335c) {
            ctx->pc = 0x333370u;
            goto label_333370;
        }
    }
    ctx->pc = 0x333364u;
label_333364:
    // 0x333364: 0x2843000f  slti        $v1, $v0, 0xF
    ctx->pc = 0x333364u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_333368:
    // 0x333368: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_33336c:
    if (ctx->pc == 0x33336Cu) {
        ctx->pc = 0x333370u;
        goto label_333370;
    }
    ctx->pc = 0x333368u;
    {
        const bool branch_taken_0x333368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x333368) {
            ctx->pc = 0x333398u;
            goto label_333398;
        }
    }
    ctx->pc = 0x333370u;
label_333370:
    // 0x333370: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
label_333374:
    if (ctx->pc == 0x333374u) {
        ctx->pc = 0x333378u;
        goto label_333378;
    }
    ctx->pc = 0x333370u;
    {
        const bool branch_taken_0x333370 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x333370) {
            ctx->pc = 0x3333D8u;
            goto label_3333d8;
        }
    }
    ctx->pc = 0x333378u;
label_333378:
    // 0x333378: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x333378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_33337c:
    // 0x33337c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_333380:
    if (ctx->pc == 0x333380u) {
        ctx->pc = 0x333384u;
        goto label_333384;
    }
    ctx->pc = 0x33337Cu;
    {
        const bool branch_taken_0x33337c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33337c) {
            ctx->pc = 0x333390u;
            goto label_333390;
        }
    }
    ctx->pc = 0x333384u;
label_333384:
    // 0x333384: 0x10000014  b           . + 4 + (0x14 << 2)
label_333388:
    if (ctx->pc == 0x333388u) {
        ctx->pc = 0x33338Cu;
        goto label_33338c;
    }
    ctx->pc = 0x333384u;
    {
        const bool branch_taken_0x333384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333384) {
            ctx->pc = 0x3333D8u;
            goto label_3333d8;
        }
    }
    ctx->pc = 0x33338Cu;
label_33338c:
    // 0x33338c: 0x0  nop
    ctx->pc = 0x33338cu;
    // NOP
label_333390:
    // 0x333390: 0x10000011  b           . + 4 + (0x11 << 2)
label_333394:
    if (ctx->pc == 0x333394u) {
        ctx->pc = 0x333394u;
            // 0x333394: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x333398u;
        goto label_333398;
    }
    ctx->pc = 0x333390u;
    {
        const bool branch_taken_0x333390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333390u;
            // 0x333394: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333390) {
            ctx->pc = 0x3333D8u;
            goto label_3333d8;
        }
    }
    ctx->pc = 0x333398u;
label_333398:
    // 0x333398: 0x1000000f  b           . + 4 + (0xF << 2)
label_33339c:
    if (ctx->pc == 0x33339Cu) {
        ctx->pc = 0x33339Cu;
            // 0x33339c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3333A0u;
        goto label_3333a0;
    }
    ctx->pc = 0x333398u;
    {
        const bool branch_taken_0x333398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33339Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333398u;
            // 0x33339c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333398) {
            ctx->pc = 0x3333D8u;
            goto label_3333d8;
        }
    }
    ctx->pc = 0x3333A0u;
label_3333a0:
    // 0x3333a0: 0x1000000d  b           . + 4 + (0xD << 2)
label_3333a4:
    if (ctx->pc == 0x3333A4u) {
        ctx->pc = 0x3333A4u;
            // 0x3333a4: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3333A8u;
        goto label_3333a8;
    }
    ctx->pc = 0x3333A0u;
    {
        const bool branch_taken_0x3333a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3333A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3333A0u;
            // 0x3333a4: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3333a0) {
            ctx->pc = 0x3333D8u;
            goto label_3333d8;
        }
    }
    ctx->pc = 0x3333A8u;
label_3333a8:
    // 0x3333a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_3333ac:
    if (ctx->pc == 0x3333ACu) {
        ctx->pc = 0x3333ACu;
            // 0x3333ac: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3333B0u;
        goto label_3333b0;
    }
    ctx->pc = 0x3333A8u;
    {
        const bool branch_taken_0x3333a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3333ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3333A8u;
            // 0x3333ac: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3333a8) {
            ctx->pc = 0x3333D8u;
            goto label_3333d8;
        }
    }
    ctx->pc = 0x3333B0u;
label_3333b0:
    // 0x3333b0: 0x10000009  b           . + 4 + (0x9 << 2)
label_3333b4:
    if (ctx->pc == 0x3333B4u) {
        ctx->pc = 0x3333B4u;
            // 0x3333b4: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3333B8u;
        goto label_3333b8;
    }
    ctx->pc = 0x3333B0u;
    {
        const bool branch_taken_0x3333b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3333B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3333B0u;
            // 0x3333b4: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3333b0) {
            ctx->pc = 0x3333D8u;
            goto label_3333d8;
        }
    }
    ctx->pc = 0x3333B8u;
label_3333b8:
    // 0x3333b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3333bc:
    if (ctx->pc == 0x3333BCu) {
        ctx->pc = 0x3333BCu;
            // 0x3333bc: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3333C0u;
        goto label_3333c0;
    }
    ctx->pc = 0x3333B8u;
    {
        const bool branch_taken_0x3333b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3333BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3333B8u;
            // 0x3333bc: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3333b8) {
            ctx->pc = 0x3333D8u;
            goto label_3333d8;
        }
    }
    ctx->pc = 0x3333C0u;
label_3333c0:
    // 0x3333c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3333c4:
    if (ctx->pc == 0x3333C4u) {
        ctx->pc = 0x3333C4u;
            // 0x3333c4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3333C8u;
        goto label_3333c8;
    }
    ctx->pc = 0x3333C0u;
    {
        const bool branch_taken_0x3333c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3333C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3333C0u;
            // 0x3333c4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3333c0) {
            ctx->pc = 0x3333D8u;
            goto label_3333d8;
        }
    }
    ctx->pc = 0x3333C8u;
label_3333c8:
    // 0x3333c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3333cc:
    if (ctx->pc == 0x3333CCu) {
        ctx->pc = 0x3333CCu;
            // 0x3333cc: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3333D0u;
        goto label_3333d0;
    }
    ctx->pc = 0x3333C8u;
    {
        const bool branch_taken_0x3333c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3333CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3333C8u;
            // 0x3333cc: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3333c8) {
            ctx->pc = 0x3333D8u;
            goto label_3333d8;
        }
    }
    ctx->pc = 0x3333D0u;
label_3333d0:
    // 0x3333d0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3333d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3333d4:
    // 0x3333d4: 0x0  nop
    ctx->pc = 0x3333d4u;
    // NOP
label_3333d8:
    // 0x3333d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3333d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3333dc:
    // 0x3333dc: 0x12420024  beq         $s2, $v0, . + 4 + (0x24 << 2)
label_3333e0:
    if (ctx->pc == 0x3333E0u) {
        ctx->pc = 0x3333E4u;
        goto label_3333e4;
    }
    ctx->pc = 0x3333DCu;
    {
        const bool branch_taken_0x3333dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3333dc) {
            ctx->pc = 0x333470u;
            goto label_333470;
        }
    }
    ctx->pc = 0x3333E4u;
label_3333e4:
    // 0x3333e4: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x3333e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_3333e8:
    // 0x3333e8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3333e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3333ec:
    // 0x3333ec: 0x27a60144  addiu       $a2, $sp, 0x144
    ctx->pc = 0x3333ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_3333f0:
    // 0x3333f0: 0xc0cd304  jal         func_334C10
label_3333f4:
    if (ctx->pc == 0x3333F4u) {
        ctx->pc = 0x3333F4u;
            // 0x3333f4: 0xafb20144  sw          $s2, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 18));
        ctx->pc = 0x3333F8u;
        goto label_3333f8;
    }
    ctx->pc = 0x3333F0u;
    SET_GPR_U32(ctx, 31, 0x3333F8u);
    ctx->pc = 0x3333F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3333F0u;
            // 0x3333f4: 0xafb20144  sw          $s2, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334C10u;
    if (runtime->hasFunction(0x334C10u)) {
        auto targetFn = runtime->lookupFunction(0x334C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3333F8u; }
        if (ctx->pc != 0x3333F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334C10_0x334c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3333F8u; }
        if (ctx->pc != 0x3333F8u) { return; }
    }
    ctx->pc = 0x3333F8u;
label_3333f8:
    // 0x3333f8: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x3333f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_3333fc:
    // 0x3333fc: 0x27a200ac  addiu       $v0, $sp, 0xAC
    ctx->pc = 0x3333fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_333400:
    // 0x333400: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_333404:
    if (ctx->pc == 0x333404u) {
        ctx->pc = 0x333408u;
        goto label_333408;
    }
    ctx->pc = 0x333400u;
    {
        const bool branch_taken_0x333400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x333400) {
            ctx->pc = 0x333420u;
            goto label_333420;
        }
    }
    ctx->pc = 0x333408u;
label_333408:
    // 0x333408: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x333408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_33340c:
    // 0x33340c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x33340cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_333410:
    // 0x333410: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x333410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_333414:
    // 0x333414: 0xafb200c8  sw          $s2, 0xC8($sp)
    ctx->pc = 0x333414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 18));
label_333418:
    // 0x333418: 0xc0cd570  jal         func_3355C0
label_33341c:
    if (ctx->pc == 0x33341Cu) {
        ctx->pc = 0x33341Cu;
            // 0x33341c: 0xafb100cc  sw          $s1, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 17));
        ctx->pc = 0x333420u;
        goto label_333420;
    }
    ctx->pc = 0x333418u;
    SET_GPR_U32(ctx, 31, 0x333420u);
    ctx->pc = 0x33341Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333418u;
            // 0x33341c: 0xafb100cc  sw          $s1, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3355C0u;
    if (runtime->hasFunction(0x3355C0u)) {
        auto targetFn = runtime->lookupFunction(0x3355C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333420u; }
        if (ctx->pc != 0x333420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003355C0_0x3355c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333420u; }
        if (ctx->pc != 0x333420u) { return; }
    }
    ctx->pc = 0x333420u;
label_333420:
    // 0x333420: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x333420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_333424:
    // 0x333424: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x333424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_333428:
    // 0x333428: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x333428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_33342c:
    // 0x33342c: 0x27a6013c  addiu       $a2, $sp, 0x13C
    ctx->pc = 0x33342cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_333430:
    // 0x333430: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x333430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_333434:
    // 0x333434: 0xc0cd304  jal         func_334C10
label_333438:
    if (ctx->pc == 0x333438u) {
        ctx->pc = 0x333438u;
            // 0x333438: 0xafa2013c  sw          $v0, 0x13C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
        ctx->pc = 0x33343Cu;
        goto label_33343c;
    }
    ctx->pc = 0x333434u;
    SET_GPR_U32(ctx, 31, 0x33343Cu);
    ctx->pc = 0x333438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333434u;
            // 0x333438: 0xafa2013c  sw          $v0, 0x13C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334C10u;
    if (runtime->hasFunction(0x334C10u)) {
        auto targetFn = runtime->lookupFunction(0x334C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33343Cu; }
        if (ctx->pc != 0x33343Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334C10_0x334c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33343Cu; }
        if (ctx->pc != 0x33343Cu) { return; }
    }
    ctx->pc = 0x33343Cu;
label_33343c:
    // 0x33343c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x33343cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_333440:
    // 0x333440: 0x27a2008c  addiu       $v0, $sp, 0x8C
    ctx->pc = 0x333440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_333444:
    // 0x333444: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_333448:
    if (ctx->pc == 0x333448u) {
        ctx->pc = 0x33344Cu;
        goto label_33344c;
    }
    ctx->pc = 0x333444u;
    {
        const bool branch_taken_0x333444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x333444) {
            ctx->pc = 0x333470u;
            goto label_333470;
        }
    }
    ctx->pc = 0x33344Cu;
label_33344c:
    // 0x33344c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x33344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_333450:
    // 0x333450: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x333450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_333454:
    // 0x333454: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x333454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_333458:
    // 0x333458: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x333458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_33345c:
    // 0x33345c: 0xafb100bc  sw          $s1, 0xBC($sp)
    ctx->pc = 0x33345cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 17));
label_333460:
    // 0x333460: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x333460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_333464:
    // 0x333464: 0xc0cd570  jal         func_3355C0
label_333468:
    if (ctx->pc == 0x333468u) {
        ctx->pc = 0x333468u;
            // 0x333468: 0xafa200b8  sw          $v0, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
        ctx->pc = 0x33346Cu;
        goto label_33346c;
    }
    ctx->pc = 0x333464u;
    SET_GPR_U32(ctx, 31, 0x33346Cu);
    ctx->pc = 0x333468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333464u;
            // 0x333468: 0xafa200b8  sw          $v0, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3355C0u;
    if (runtime->hasFunction(0x3355C0u)) {
        auto targetFn = runtime->lookupFunction(0x3355C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33346Cu; }
        if (ctx->pc != 0x33346Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003355C0_0x3355c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33346Cu; }
        if (ctx->pc != 0x33346Cu) { return; }
    }
    ctx->pc = 0x33346Cu;
label_33346c:
    // 0x33346c: 0x0  nop
    ctx->pc = 0x33346cu;
    // NOP
label_333470:
    // 0x333470: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x333470u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_333474:
    // 0x333474: 0x2e820004  sltiu       $v0, $s4, 0x4
    ctx->pc = 0x333474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_333478:
    // 0x333478: 0x1440ff89  bnez        $v0, . + 4 + (-0x77 << 2)
label_33347c:
    if (ctx->pc == 0x33347Cu) {
        ctx->pc = 0x33347Cu;
            // 0x33347c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x333480u;
        goto label_333480;
    }
    ctx->pc = 0x333478u;
    {
        const bool branch_taken_0x333478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33347Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333478u;
            // 0x33347c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333478) {
            ctx->pc = 0x3332A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3332a0;
        }
    }
    ctx->pc = 0x333480u;
label_333480:
    // 0x333480: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x333480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_333484:
    // 0x333484: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x333484u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_333488:
    // 0x333488: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x333488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_33348c:
    // 0x33348c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x33348cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_333490:
    // 0x333490: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x333490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_333494:
    // 0x333494: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x333494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_333498:
    // 0x333498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33349c:
    // 0x33349c: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x33349cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_3334a0:
    // 0x3334a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3334a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3334a4:
    // 0x3334a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3334a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3334a8:
    // 0x3334a8: 0x1440ff1a  bnez        $v0, . + 4 + (-0xE6 << 2)
label_3334ac:
    if (ctx->pc == 0x3334ACu) {
        ctx->pc = 0x3334ACu;
            // 0x3334ac: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x3334B0u;
        goto label_3334b0;
    }
    ctx->pc = 0x3334A8u;
    {
        const bool branch_taken_0x3334a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3334ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3334A8u;
            // 0x3334ac: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3334a8) {
            ctx->pc = 0x333114u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_333114;
        }
    }
    ctx->pc = 0x3334B0u;
label_3334b0:
    // 0x3334b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3334b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3334b4:
    // 0x3334b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3334b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3334b8:
    // 0x3334b8: 0x8c520ed0  lw          $s2, 0xED0($v0)
    ctx->pc = 0x3334b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_3334bc:
    // 0x3334bc: 0x3c110065  lui         $s1, 0x65
    ctx->pc = 0x3334bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)101 << 16));
label_3334c0:
    // 0x3334c0: 0x8c70a348  lw          $s0, -0x5CB8($v1)
    ctx->pc = 0x3334c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_3334c4:
    // 0x3334c4: 0x2631d340  addiu       $s1, $s1, -0x2CC0
    ctx->pc = 0x3334c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955840));
label_3334c8:
    // 0x3334c8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x3334c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_3334cc:
    // 0x3334cc: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x3334ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_3334d0:
    // 0x3334d0: 0x8fa30164  lw          $v1, 0x164($sp)
    ctx->pc = 0x3334d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_3334d4:
    // 0x3334d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3334d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3334d8:
    // 0x3334d8: 0x92a20c69  lbu         $v0, 0xC69($s5)
    ctx->pc = 0x3334d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3177)));
label_3334dc:
    // 0x3334dc: 0x3405ffdc  ori         $a1, $zero, 0xFFDC
    ctx->pc = 0x3334dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65500);
label_3334e0:
    // 0x3334e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3334e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3334e4:
    // 0x3334e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3334e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3334e8:
    // 0x3334e8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x3334e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3334ec:
    // 0x3334ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3334ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3334f0:
    // 0x3334f0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3334f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3334f4:
    // 0x3334f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3334f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3334f8:
    // 0x3334f8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x3334f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_3334fc:
    // 0x3334fc: 0x246309dc  addiu       $v1, $v1, 0x9DC
    ctx->pc = 0x3334fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2524));
label_333500:
    // 0x333500: 0xac43085c  sw          $v1, 0x85C($v0)
    ctx->pc = 0x333500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2140), GPR_U32(ctx, 3));
label_333504:
    // 0x333504: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x333504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_333508:
    // 0x333508: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x333508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_33350c:
    // 0x33350c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x33350cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_333510:
    // 0x333510: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x333510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_333514:
    // 0x333514: 0xc0b3a28  jal         func_2CE8A0
label_333518:
    if (ctx->pc == 0x333518u) {
        ctx->pc = 0x333518u;
            // 0x333518: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->pc = 0x33351Cu;
        goto label_33351c;
    }
    ctx->pc = 0x333514u;
    SET_GPR_U32(ctx, 31, 0x33351Cu);
    ctx->pc = 0x333518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333514u;
            // 0x333518: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33351Cu; }
        if (ctx->pc != 0x33351Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33351Cu; }
        if (ctx->pc != 0x33351Cu) { return; }
    }
    ctx->pc = 0x33351Cu;
label_33351c:
    // 0x33351c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33351cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_333520:
    // 0x333520: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x333520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_333524:
    // 0x333524: 0x92a20c69  lbu         $v0, 0xC69($s5)
    ctx->pc = 0x333524u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3177)));
label_333528:
    // 0x333528: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x333528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_33352c:
    // 0x33352c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33352cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_333530:
    // 0x333530: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x333530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_333534:
    // 0x333534: 0x8c46085c  lw          $a2, 0x85C($v0)
    ctx->pc = 0x333534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2140)));
label_333538:
    // 0x333538: 0xc0aa5d8  jal         func_2A9760
label_33353c:
    if (ctx->pc == 0x33353Cu) {
        ctx->pc = 0x33353Cu;
            // 0x33353c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x333540u;
        goto label_333540;
    }
    ctx->pc = 0x333538u;
    SET_GPR_U32(ctx, 31, 0x333540u);
    ctx->pc = 0x33353Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333538u;
            // 0x33353c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333540u; }
        if (ctx->pc != 0x333540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333540u; }
        if (ctx->pc != 0x333540u) { return; }
    }
    ctx->pc = 0x333540u;
label_333540:
    // 0x333540: 0x92a20c69  lbu         $v0, 0xC69($s5)
    ctx->pc = 0x333540u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3177)));
label_333544:
    // 0x333544: 0x27a40164  addiu       $a0, $sp, 0x164
    ctx->pc = 0x333544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_333548:
    // 0x333548: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x333548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33354c:
    // 0x33354c: 0xc057fa4  jal         func_15FE90
label_333550:
    if (ctx->pc == 0x333550u) {
        ctx->pc = 0x333550u;
            // 0x333550: 0xa2a20c69  sb          $v0, 0xC69($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 3177), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x333554u;
        goto label_333554;
    }
    ctx->pc = 0x33354Cu;
    SET_GPR_U32(ctx, 31, 0x333554u);
    ctx->pc = 0x333550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33354Cu;
            // 0x333550: 0xa2a20c69  sb          $v0, 0xC69($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 3177), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FE90u;
    if (runtime->hasFunction(0x15FE90u)) {
        auto targetFn = runtime->lookupFunction(0x15FE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333554u; }
        if (ctx->pc != 0x333554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FE90_0x15fe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333554u; }
        if (ctx->pc != 0x333554u) { return; }
    }
    ctx->pc = 0x333554u;
label_333554:
    // 0x333554: 0x8fa30164  lw          $v1, 0x164($sp)
    ctx->pc = 0x333554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_333558:
    // 0x333558: 0x27a200ac  addiu       $v0, $sp, 0xAC
    ctx->pc = 0x333558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_33355c:
    // 0x33355c: 0x5462ffdd  bnel        $v1, $v0, . + 4 + (-0x23 << 2)
label_333560:
    if (ctx->pc == 0x333560u) {
        ctx->pc = 0x333560u;
            // 0x333560: 0x8fa30164  lw          $v1, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->pc = 0x333564u;
        goto label_333564;
    }
    ctx->pc = 0x33355Cu;
    {
        const bool branch_taken_0x33355c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33355c) {
            ctx->pc = 0x333560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33355Cu;
            // 0x333560: 0x8fa30164  lw          $v1, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3334D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3334d4;
        }
    }
    ctx->pc = 0x333564u;
label_333564:
    // 0x333564: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x333564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_333568:
    // 0x333568: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x333568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_33356c:
    // 0x33356c: 0x8fa60164  lw          $a2, 0x164($sp)
    ctx->pc = 0x33356cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_333570:
    // 0x333570: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x333570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_333574:
    // 0x333574: 0x92a30c69  lbu         $v1, 0xC69($s5)
    ctx->pc = 0x333574u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3177)));
label_333578:
    // 0x333578: 0x2442a7e0  addiu       $v0, $v0, -0x5820
    ctx->pc = 0x333578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944736));
label_33357c:
    // 0x33357c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33357cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_333580:
    // 0x333580: 0x3405ffdc  ori         $a1, $zero, 0xFFDC
    ctx->pc = 0x333580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65500);
label_333584:
    // 0x333584: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x333584u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_333588:
    // 0x333588: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x333588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33358c:
    // 0x33358c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33358cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_333590:
    // 0x333590: 0x2a33021  addu        $a2, $s5, $v1
    ctx->pc = 0x333590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_333594:
    // 0x333594: 0x30e9ffff  andi        $t1, $a3, 0xFFFF
    ctx->pc = 0x333594u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_333598:
    // 0x333598: 0x71c02  srl         $v1, $a3, 16
    ctx->pc = 0x333598u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_33359c:
    // 0x33359c: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x33359cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_3335a0:
    // 0x3335a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3335a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3335a4:
    // 0x3335a4: 0x2a73821  addu        $a3, $s5, $a3
    ctx->pc = 0x3335a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_3335a8:
    // 0x3335a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3335a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3335ac:
    // 0x3335ac: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x3335acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_3335b0:
    // 0x3335b0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x3335b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_3335b4:
    // 0x3335b4: 0x246309fc  addiu       $v1, $v1, 0x9FC
    ctx->pc = 0x3335b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2556));
label_3335b8:
    // 0x3335b8: 0xacc3085c  sw          $v1, 0x85C($a2)
    ctx->pc = 0x3335b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2140), GPR_U32(ctx, 3));
label_3335bc:
    // 0x3335bc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x3335bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3335c0:
    // 0x3335c0: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x3335c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_3335c4:
    // 0x3335c4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3335c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3335c8:
    // 0x3335c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3335c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3335cc:
    // 0x3335cc: 0xc0b3a28  jal         func_2CE8A0
label_3335d0:
    if (ctx->pc == 0x3335D0u) {
        ctx->pc = 0x3335D0u;
            // 0x3335d0: 0x1223025  or          $a2, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->pc = 0x3335D4u;
        goto label_3335d4;
    }
    ctx->pc = 0x3335CCu;
    SET_GPR_U32(ctx, 31, 0x3335D4u);
    ctx->pc = 0x3335D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3335CCu;
            // 0x3335d0: 0x1223025  or          $a2, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3335D4u; }
        if (ctx->pc != 0x3335D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3335D4u; }
        if (ctx->pc != 0x3335D4u) { return; }
    }
    ctx->pc = 0x3335D4u;
label_3335d4:
    // 0x3335d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3335d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3335d8:
    // 0x3335d8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x3335d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3335dc:
    // 0x3335dc: 0x92a20c69  lbu         $v0, 0xC69($s5)
    ctx->pc = 0x3335dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3177)));
label_3335e0:
    // 0x3335e0: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x3335e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3335e4:
    // 0x3335e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3335e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3335e8:
    // 0x3335e8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3335e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3335ec:
    // 0x3335ec: 0x8c46085c  lw          $a2, 0x85C($v0)
    ctx->pc = 0x3335ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2140)));
label_3335f0:
    // 0x3335f0: 0xc0aa5d8  jal         func_2A9760
label_3335f4:
    if (ctx->pc == 0x3335F4u) {
        ctx->pc = 0x3335F4u;
            // 0x3335f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3335F8u;
        goto label_3335f8;
    }
    ctx->pc = 0x3335F0u;
    SET_GPR_U32(ctx, 31, 0x3335F8u);
    ctx->pc = 0x3335F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3335F0u;
            // 0x3335f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3335F8u; }
        if (ctx->pc != 0x3335F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3335F8u; }
        if (ctx->pc != 0x3335F8u) { return; }
    }
    ctx->pc = 0x3335F8u;
label_3335f8:
    // 0x3335f8: 0x92a20c69  lbu         $v0, 0xC69($s5)
    ctx->pc = 0x3335f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3177)));
label_3335fc:
    // 0x3335fc: 0x27a40164  addiu       $a0, $sp, 0x164
    ctx->pc = 0x3335fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_333600:
    // 0x333600: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x333600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_333604:
    // 0x333604: 0xc057fa4  jal         func_15FE90
label_333608:
    if (ctx->pc == 0x333608u) {
        ctx->pc = 0x333608u;
            // 0x333608: 0xa2a20c69  sb          $v0, 0xC69($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 3177), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x33360Cu;
        goto label_33360c;
    }
    ctx->pc = 0x333604u;
    SET_GPR_U32(ctx, 31, 0x33360Cu);
    ctx->pc = 0x333608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333604u;
            // 0x333608: 0xa2a20c69  sb          $v0, 0xC69($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 3177), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FE90u;
    if (runtime->hasFunction(0x15FE90u)) {
        auto targetFn = runtime->lookupFunction(0x15FE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33360Cu; }
        if (ctx->pc != 0x33360Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FE90_0x15fe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33360Cu; }
        if (ctx->pc != 0x33360Cu) { return; }
    }
    ctx->pc = 0x33360Cu;
label_33360c:
    // 0x33360c: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x33360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_333610:
    // 0x333610: 0x27a3008c  addiu       $v1, $sp, 0x8C
    ctx->pc = 0x333610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_333614:
    // 0x333614: 0x5483ffd6  bnel        $a0, $v1, . + 4 + (-0x2A << 2)
label_333618:
    if (ctx->pc == 0x333618u) {
        ctx->pc = 0x333618u;
            // 0x333618: 0x8fa60164  lw          $a2, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->pc = 0x33361Cu;
        goto label_33361c;
    }
    ctx->pc = 0x333614u;
    {
        const bool branch_taken_0x333614 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x333614) {
            ctx->pc = 0x333618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333614u;
            // 0x333618: 0x8fa60164  lw          $a2, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_333570;
        }
    }
    ctx->pc = 0x33361Cu;
label_33361c:
    // 0x33361c: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x33361cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_333620:
    // 0x333620: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_333624:
    if (ctx->pc == 0x333624u) {
        ctx->pc = 0x333624u;
            // 0x333624: 0x8fa500ac  lw          $a1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->pc = 0x333628u;
        goto label_333628;
    }
    ctx->pc = 0x333620u;
    {
        const bool branch_taken_0x333620 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x333620) {
            ctx->pc = 0x333624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333620u;
            // 0x333624: 0x8fa500ac  lw          $a1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333634u;
            goto label_333634;
        }
    }
    ctx->pc = 0x333628u;
label_333628:
    // 0x333628: 0xc0cd4c8  jal         func_335320
label_33362c:
    if (ctx->pc == 0x33362Cu) {
        ctx->pc = 0x33362Cu;
            // 0x33362c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x333630u;
        goto label_333630;
    }
    ctx->pc = 0x333628u;
    SET_GPR_U32(ctx, 31, 0x333630u);
    ctx->pc = 0x33362Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333628u;
            // 0x33362c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335320u;
    if (runtime->hasFunction(0x335320u)) {
        auto targetFn = runtime->lookupFunction(0x335320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333630u; }
        if (ctx->pc != 0x333630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335320_0x335320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333630u; }
        if (ctx->pc != 0x333630u) { return; }
    }
    ctx->pc = 0x333630u;
label_333630:
    // 0x333630: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x333630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_333634:
    // 0x333634: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_333638:
    if (ctx->pc == 0x333638u) {
        ctx->pc = 0x333638u;
            // 0x333638: 0x8fa40120  lw          $a0, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->pc = 0x33363Cu;
        goto label_33363c;
    }
    ctx->pc = 0x333634u;
    {
        const bool branch_taken_0x333634 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x333634) {
            ctx->pc = 0x333638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333634u;
            // 0x333638: 0x8fa40120  lw          $a0, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333648u;
            goto label_333648;
        }
    }
    ctx->pc = 0x33363Cu;
label_33363c:
    // 0x33363c: 0xc0cd4c8  jal         func_335320
label_333640:
    if (ctx->pc == 0x333640u) {
        ctx->pc = 0x333640u;
            // 0x333640: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x333644u;
        goto label_333644;
    }
    ctx->pc = 0x33363Cu;
    SET_GPR_U32(ctx, 31, 0x333644u);
    ctx->pc = 0x333640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33363Cu;
            // 0x333640: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335320u;
    if (runtime->hasFunction(0x335320u)) {
        auto targetFn = runtime->lookupFunction(0x335320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333644u; }
        if (ctx->pc != 0x333644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335320_0x335320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333644u; }
        if (ctx->pc != 0x333644u) { return; }
    }
    ctx->pc = 0x333644u;
label_333644:
    // 0x333644: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x333644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_333648:
    // 0x333648: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_33364c:
    if (ctx->pc == 0x33364Cu) {
        ctx->pc = 0x33364Cu;
            // 0x33364c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x333650u;
        goto label_333650;
    }
    ctx->pc = 0x333648u;
    {
        const bool branch_taken_0x333648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x333648) {
            ctx->pc = 0x33364Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333648u;
            // 0x33364c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33365Cu;
            goto label_33365c;
        }
    }
    ctx->pc = 0x333650u;
label_333650:
    // 0x333650: 0xc0400a8  jal         func_1002A0
label_333654:
    if (ctx->pc == 0x333654u) {
        ctx->pc = 0x333658u;
        goto label_333658;
    }
    ctx->pc = 0x333650u;
    SET_GPR_U32(ctx, 31, 0x333658u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333658u; }
        if (ctx->pc != 0x333658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333658u; }
        if (ctx->pc != 0x333658u) { return; }
    }
    ctx->pc = 0x333658u;
label_333658:
    // 0x333658: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x333658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_33365c:
    // 0x33365c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x33365cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_333660:
    // 0x333660: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x333660u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_333664:
    // 0x333664: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x333664u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_333668:
    // 0x333668: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x333668u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33366c:
    // 0x33366c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33366cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_333670:
    // 0x333670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x333670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_333674:
    // 0x333674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x333674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_333678:
    // 0x333678: 0x3e00008  jr          $ra
label_33367c:
    if (ctx->pc == 0x33367Cu) {
        ctx->pc = 0x33367Cu;
            // 0x33367c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x333680u;
        goto label_fallthrough_0x333678;
    }
    ctx->pc = 0x333678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33367Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333678u;
            // 0x33367c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x333678:
    ctx->pc = 0x333680u;
}
