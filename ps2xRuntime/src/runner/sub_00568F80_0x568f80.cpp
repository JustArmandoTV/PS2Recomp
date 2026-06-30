#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00568F80
// Address: 0x568f80 - 0x5695d0
void sub_00568F80_0x568f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00568F80_0x568f80");
#endif

    switch (ctx->pc) {
        case 0x568f80u: goto label_568f80;
        case 0x568f84u: goto label_568f84;
        case 0x568f88u: goto label_568f88;
        case 0x568f8cu: goto label_568f8c;
        case 0x568f90u: goto label_568f90;
        case 0x568f94u: goto label_568f94;
        case 0x568f98u: goto label_568f98;
        case 0x568f9cu: goto label_568f9c;
        case 0x568fa0u: goto label_568fa0;
        case 0x568fa4u: goto label_568fa4;
        case 0x568fa8u: goto label_568fa8;
        case 0x568facu: goto label_568fac;
        case 0x568fb0u: goto label_568fb0;
        case 0x568fb4u: goto label_568fb4;
        case 0x568fb8u: goto label_568fb8;
        case 0x568fbcu: goto label_568fbc;
        case 0x568fc0u: goto label_568fc0;
        case 0x568fc4u: goto label_568fc4;
        case 0x568fc8u: goto label_568fc8;
        case 0x568fccu: goto label_568fcc;
        case 0x568fd0u: goto label_568fd0;
        case 0x568fd4u: goto label_568fd4;
        case 0x568fd8u: goto label_568fd8;
        case 0x568fdcu: goto label_568fdc;
        case 0x568fe0u: goto label_568fe0;
        case 0x568fe4u: goto label_568fe4;
        case 0x568fe8u: goto label_568fe8;
        case 0x568fecu: goto label_568fec;
        case 0x568ff0u: goto label_568ff0;
        case 0x568ff4u: goto label_568ff4;
        case 0x568ff8u: goto label_568ff8;
        case 0x568ffcu: goto label_568ffc;
        case 0x569000u: goto label_569000;
        case 0x569004u: goto label_569004;
        case 0x569008u: goto label_569008;
        case 0x56900cu: goto label_56900c;
        case 0x569010u: goto label_569010;
        case 0x569014u: goto label_569014;
        case 0x569018u: goto label_569018;
        case 0x56901cu: goto label_56901c;
        case 0x569020u: goto label_569020;
        case 0x569024u: goto label_569024;
        case 0x569028u: goto label_569028;
        case 0x56902cu: goto label_56902c;
        case 0x569030u: goto label_569030;
        case 0x569034u: goto label_569034;
        case 0x569038u: goto label_569038;
        case 0x56903cu: goto label_56903c;
        case 0x569040u: goto label_569040;
        case 0x569044u: goto label_569044;
        case 0x569048u: goto label_569048;
        case 0x56904cu: goto label_56904c;
        case 0x569050u: goto label_569050;
        case 0x569054u: goto label_569054;
        case 0x569058u: goto label_569058;
        case 0x56905cu: goto label_56905c;
        case 0x569060u: goto label_569060;
        case 0x569064u: goto label_569064;
        case 0x569068u: goto label_569068;
        case 0x56906cu: goto label_56906c;
        case 0x569070u: goto label_569070;
        case 0x569074u: goto label_569074;
        case 0x569078u: goto label_569078;
        case 0x56907cu: goto label_56907c;
        case 0x569080u: goto label_569080;
        case 0x569084u: goto label_569084;
        case 0x569088u: goto label_569088;
        case 0x56908cu: goto label_56908c;
        case 0x569090u: goto label_569090;
        case 0x569094u: goto label_569094;
        case 0x569098u: goto label_569098;
        case 0x56909cu: goto label_56909c;
        case 0x5690a0u: goto label_5690a0;
        case 0x5690a4u: goto label_5690a4;
        case 0x5690a8u: goto label_5690a8;
        case 0x5690acu: goto label_5690ac;
        case 0x5690b0u: goto label_5690b0;
        case 0x5690b4u: goto label_5690b4;
        case 0x5690b8u: goto label_5690b8;
        case 0x5690bcu: goto label_5690bc;
        case 0x5690c0u: goto label_5690c0;
        case 0x5690c4u: goto label_5690c4;
        case 0x5690c8u: goto label_5690c8;
        case 0x5690ccu: goto label_5690cc;
        case 0x5690d0u: goto label_5690d0;
        case 0x5690d4u: goto label_5690d4;
        case 0x5690d8u: goto label_5690d8;
        case 0x5690dcu: goto label_5690dc;
        case 0x5690e0u: goto label_5690e0;
        case 0x5690e4u: goto label_5690e4;
        case 0x5690e8u: goto label_5690e8;
        case 0x5690ecu: goto label_5690ec;
        case 0x5690f0u: goto label_5690f0;
        case 0x5690f4u: goto label_5690f4;
        case 0x5690f8u: goto label_5690f8;
        case 0x5690fcu: goto label_5690fc;
        case 0x569100u: goto label_569100;
        case 0x569104u: goto label_569104;
        case 0x569108u: goto label_569108;
        case 0x56910cu: goto label_56910c;
        case 0x569110u: goto label_569110;
        case 0x569114u: goto label_569114;
        case 0x569118u: goto label_569118;
        case 0x56911cu: goto label_56911c;
        case 0x569120u: goto label_569120;
        case 0x569124u: goto label_569124;
        case 0x569128u: goto label_569128;
        case 0x56912cu: goto label_56912c;
        case 0x569130u: goto label_569130;
        case 0x569134u: goto label_569134;
        case 0x569138u: goto label_569138;
        case 0x56913cu: goto label_56913c;
        case 0x569140u: goto label_569140;
        case 0x569144u: goto label_569144;
        case 0x569148u: goto label_569148;
        case 0x56914cu: goto label_56914c;
        case 0x569150u: goto label_569150;
        case 0x569154u: goto label_569154;
        case 0x569158u: goto label_569158;
        case 0x56915cu: goto label_56915c;
        case 0x569160u: goto label_569160;
        case 0x569164u: goto label_569164;
        case 0x569168u: goto label_569168;
        case 0x56916cu: goto label_56916c;
        case 0x569170u: goto label_569170;
        case 0x569174u: goto label_569174;
        case 0x569178u: goto label_569178;
        case 0x56917cu: goto label_56917c;
        case 0x569180u: goto label_569180;
        case 0x569184u: goto label_569184;
        case 0x569188u: goto label_569188;
        case 0x56918cu: goto label_56918c;
        case 0x569190u: goto label_569190;
        case 0x569194u: goto label_569194;
        case 0x569198u: goto label_569198;
        case 0x56919cu: goto label_56919c;
        case 0x5691a0u: goto label_5691a0;
        case 0x5691a4u: goto label_5691a4;
        case 0x5691a8u: goto label_5691a8;
        case 0x5691acu: goto label_5691ac;
        case 0x5691b0u: goto label_5691b0;
        case 0x5691b4u: goto label_5691b4;
        case 0x5691b8u: goto label_5691b8;
        case 0x5691bcu: goto label_5691bc;
        case 0x5691c0u: goto label_5691c0;
        case 0x5691c4u: goto label_5691c4;
        case 0x5691c8u: goto label_5691c8;
        case 0x5691ccu: goto label_5691cc;
        case 0x5691d0u: goto label_5691d0;
        case 0x5691d4u: goto label_5691d4;
        case 0x5691d8u: goto label_5691d8;
        case 0x5691dcu: goto label_5691dc;
        case 0x5691e0u: goto label_5691e0;
        case 0x5691e4u: goto label_5691e4;
        case 0x5691e8u: goto label_5691e8;
        case 0x5691ecu: goto label_5691ec;
        case 0x5691f0u: goto label_5691f0;
        case 0x5691f4u: goto label_5691f4;
        case 0x5691f8u: goto label_5691f8;
        case 0x5691fcu: goto label_5691fc;
        case 0x569200u: goto label_569200;
        case 0x569204u: goto label_569204;
        case 0x569208u: goto label_569208;
        case 0x56920cu: goto label_56920c;
        case 0x569210u: goto label_569210;
        case 0x569214u: goto label_569214;
        case 0x569218u: goto label_569218;
        case 0x56921cu: goto label_56921c;
        case 0x569220u: goto label_569220;
        case 0x569224u: goto label_569224;
        case 0x569228u: goto label_569228;
        case 0x56922cu: goto label_56922c;
        case 0x569230u: goto label_569230;
        case 0x569234u: goto label_569234;
        case 0x569238u: goto label_569238;
        case 0x56923cu: goto label_56923c;
        case 0x569240u: goto label_569240;
        case 0x569244u: goto label_569244;
        case 0x569248u: goto label_569248;
        case 0x56924cu: goto label_56924c;
        case 0x569250u: goto label_569250;
        case 0x569254u: goto label_569254;
        case 0x569258u: goto label_569258;
        case 0x56925cu: goto label_56925c;
        case 0x569260u: goto label_569260;
        case 0x569264u: goto label_569264;
        case 0x569268u: goto label_569268;
        case 0x56926cu: goto label_56926c;
        case 0x569270u: goto label_569270;
        case 0x569274u: goto label_569274;
        case 0x569278u: goto label_569278;
        case 0x56927cu: goto label_56927c;
        case 0x569280u: goto label_569280;
        case 0x569284u: goto label_569284;
        case 0x569288u: goto label_569288;
        case 0x56928cu: goto label_56928c;
        case 0x569290u: goto label_569290;
        case 0x569294u: goto label_569294;
        case 0x569298u: goto label_569298;
        case 0x56929cu: goto label_56929c;
        case 0x5692a0u: goto label_5692a0;
        case 0x5692a4u: goto label_5692a4;
        case 0x5692a8u: goto label_5692a8;
        case 0x5692acu: goto label_5692ac;
        case 0x5692b0u: goto label_5692b0;
        case 0x5692b4u: goto label_5692b4;
        case 0x5692b8u: goto label_5692b8;
        case 0x5692bcu: goto label_5692bc;
        case 0x5692c0u: goto label_5692c0;
        case 0x5692c4u: goto label_5692c4;
        case 0x5692c8u: goto label_5692c8;
        case 0x5692ccu: goto label_5692cc;
        case 0x5692d0u: goto label_5692d0;
        case 0x5692d4u: goto label_5692d4;
        case 0x5692d8u: goto label_5692d8;
        case 0x5692dcu: goto label_5692dc;
        case 0x5692e0u: goto label_5692e0;
        case 0x5692e4u: goto label_5692e4;
        case 0x5692e8u: goto label_5692e8;
        case 0x5692ecu: goto label_5692ec;
        case 0x5692f0u: goto label_5692f0;
        case 0x5692f4u: goto label_5692f4;
        case 0x5692f8u: goto label_5692f8;
        case 0x5692fcu: goto label_5692fc;
        case 0x569300u: goto label_569300;
        case 0x569304u: goto label_569304;
        case 0x569308u: goto label_569308;
        case 0x56930cu: goto label_56930c;
        case 0x569310u: goto label_569310;
        case 0x569314u: goto label_569314;
        case 0x569318u: goto label_569318;
        case 0x56931cu: goto label_56931c;
        case 0x569320u: goto label_569320;
        case 0x569324u: goto label_569324;
        case 0x569328u: goto label_569328;
        case 0x56932cu: goto label_56932c;
        case 0x569330u: goto label_569330;
        case 0x569334u: goto label_569334;
        case 0x569338u: goto label_569338;
        case 0x56933cu: goto label_56933c;
        case 0x569340u: goto label_569340;
        case 0x569344u: goto label_569344;
        case 0x569348u: goto label_569348;
        case 0x56934cu: goto label_56934c;
        case 0x569350u: goto label_569350;
        case 0x569354u: goto label_569354;
        case 0x569358u: goto label_569358;
        case 0x56935cu: goto label_56935c;
        case 0x569360u: goto label_569360;
        case 0x569364u: goto label_569364;
        case 0x569368u: goto label_569368;
        case 0x56936cu: goto label_56936c;
        case 0x569370u: goto label_569370;
        case 0x569374u: goto label_569374;
        case 0x569378u: goto label_569378;
        case 0x56937cu: goto label_56937c;
        case 0x569380u: goto label_569380;
        case 0x569384u: goto label_569384;
        case 0x569388u: goto label_569388;
        case 0x56938cu: goto label_56938c;
        case 0x569390u: goto label_569390;
        case 0x569394u: goto label_569394;
        case 0x569398u: goto label_569398;
        case 0x56939cu: goto label_56939c;
        case 0x5693a0u: goto label_5693a0;
        case 0x5693a4u: goto label_5693a4;
        case 0x5693a8u: goto label_5693a8;
        case 0x5693acu: goto label_5693ac;
        case 0x5693b0u: goto label_5693b0;
        case 0x5693b4u: goto label_5693b4;
        case 0x5693b8u: goto label_5693b8;
        case 0x5693bcu: goto label_5693bc;
        case 0x5693c0u: goto label_5693c0;
        case 0x5693c4u: goto label_5693c4;
        case 0x5693c8u: goto label_5693c8;
        case 0x5693ccu: goto label_5693cc;
        case 0x5693d0u: goto label_5693d0;
        case 0x5693d4u: goto label_5693d4;
        case 0x5693d8u: goto label_5693d8;
        case 0x5693dcu: goto label_5693dc;
        case 0x5693e0u: goto label_5693e0;
        case 0x5693e4u: goto label_5693e4;
        case 0x5693e8u: goto label_5693e8;
        case 0x5693ecu: goto label_5693ec;
        case 0x5693f0u: goto label_5693f0;
        case 0x5693f4u: goto label_5693f4;
        case 0x5693f8u: goto label_5693f8;
        case 0x5693fcu: goto label_5693fc;
        case 0x569400u: goto label_569400;
        case 0x569404u: goto label_569404;
        case 0x569408u: goto label_569408;
        case 0x56940cu: goto label_56940c;
        case 0x569410u: goto label_569410;
        case 0x569414u: goto label_569414;
        case 0x569418u: goto label_569418;
        case 0x56941cu: goto label_56941c;
        case 0x569420u: goto label_569420;
        case 0x569424u: goto label_569424;
        case 0x569428u: goto label_569428;
        case 0x56942cu: goto label_56942c;
        case 0x569430u: goto label_569430;
        case 0x569434u: goto label_569434;
        case 0x569438u: goto label_569438;
        case 0x56943cu: goto label_56943c;
        case 0x569440u: goto label_569440;
        case 0x569444u: goto label_569444;
        case 0x569448u: goto label_569448;
        case 0x56944cu: goto label_56944c;
        case 0x569450u: goto label_569450;
        case 0x569454u: goto label_569454;
        case 0x569458u: goto label_569458;
        case 0x56945cu: goto label_56945c;
        case 0x569460u: goto label_569460;
        case 0x569464u: goto label_569464;
        case 0x569468u: goto label_569468;
        case 0x56946cu: goto label_56946c;
        case 0x569470u: goto label_569470;
        case 0x569474u: goto label_569474;
        case 0x569478u: goto label_569478;
        case 0x56947cu: goto label_56947c;
        case 0x569480u: goto label_569480;
        case 0x569484u: goto label_569484;
        case 0x569488u: goto label_569488;
        case 0x56948cu: goto label_56948c;
        case 0x569490u: goto label_569490;
        case 0x569494u: goto label_569494;
        case 0x569498u: goto label_569498;
        case 0x56949cu: goto label_56949c;
        case 0x5694a0u: goto label_5694a0;
        case 0x5694a4u: goto label_5694a4;
        case 0x5694a8u: goto label_5694a8;
        case 0x5694acu: goto label_5694ac;
        case 0x5694b0u: goto label_5694b0;
        case 0x5694b4u: goto label_5694b4;
        case 0x5694b8u: goto label_5694b8;
        case 0x5694bcu: goto label_5694bc;
        case 0x5694c0u: goto label_5694c0;
        case 0x5694c4u: goto label_5694c4;
        case 0x5694c8u: goto label_5694c8;
        case 0x5694ccu: goto label_5694cc;
        case 0x5694d0u: goto label_5694d0;
        case 0x5694d4u: goto label_5694d4;
        case 0x5694d8u: goto label_5694d8;
        case 0x5694dcu: goto label_5694dc;
        case 0x5694e0u: goto label_5694e0;
        case 0x5694e4u: goto label_5694e4;
        case 0x5694e8u: goto label_5694e8;
        case 0x5694ecu: goto label_5694ec;
        case 0x5694f0u: goto label_5694f0;
        case 0x5694f4u: goto label_5694f4;
        case 0x5694f8u: goto label_5694f8;
        case 0x5694fcu: goto label_5694fc;
        case 0x569500u: goto label_569500;
        case 0x569504u: goto label_569504;
        case 0x569508u: goto label_569508;
        case 0x56950cu: goto label_56950c;
        case 0x569510u: goto label_569510;
        case 0x569514u: goto label_569514;
        case 0x569518u: goto label_569518;
        case 0x56951cu: goto label_56951c;
        case 0x569520u: goto label_569520;
        case 0x569524u: goto label_569524;
        case 0x569528u: goto label_569528;
        case 0x56952cu: goto label_56952c;
        case 0x569530u: goto label_569530;
        case 0x569534u: goto label_569534;
        case 0x569538u: goto label_569538;
        case 0x56953cu: goto label_56953c;
        case 0x569540u: goto label_569540;
        case 0x569544u: goto label_569544;
        case 0x569548u: goto label_569548;
        case 0x56954cu: goto label_56954c;
        case 0x569550u: goto label_569550;
        case 0x569554u: goto label_569554;
        case 0x569558u: goto label_569558;
        case 0x56955cu: goto label_56955c;
        case 0x569560u: goto label_569560;
        case 0x569564u: goto label_569564;
        case 0x569568u: goto label_569568;
        case 0x56956cu: goto label_56956c;
        case 0x569570u: goto label_569570;
        case 0x569574u: goto label_569574;
        case 0x569578u: goto label_569578;
        case 0x56957cu: goto label_56957c;
        case 0x569580u: goto label_569580;
        case 0x569584u: goto label_569584;
        case 0x569588u: goto label_569588;
        case 0x56958cu: goto label_56958c;
        case 0x569590u: goto label_569590;
        case 0x569594u: goto label_569594;
        case 0x569598u: goto label_569598;
        case 0x56959cu: goto label_56959c;
        case 0x5695a0u: goto label_5695a0;
        case 0x5695a4u: goto label_5695a4;
        case 0x5695a8u: goto label_5695a8;
        case 0x5695acu: goto label_5695ac;
        case 0x5695b0u: goto label_5695b0;
        case 0x5695b4u: goto label_5695b4;
        case 0x5695b8u: goto label_5695b8;
        case 0x5695bcu: goto label_5695bc;
        case 0x5695c0u: goto label_5695c0;
        case 0x5695c4u: goto label_5695c4;
        case 0x5695c8u: goto label_5695c8;
        case 0x5695ccu: goto label_5695cc;
        default: break;
    }

    ctx->pc = 0x568f80u;

label_568f80:
    // 0x568f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x568f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_568f84:
    // 0x568f84: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x568f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_568f88:
    // 0x568f88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x568f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_568f8c:
    // 0x568f8c: 0x2442b0f8  addiu       $v0, $v0, -0x4F08
    ctx->pc = 0x568f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947064));
label_568f90:
    // 0x568f90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x568f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_568f94:
    // 0x568f94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x568f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_568f98:
    // 0x568f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x568f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_568f9c:
    // 0x568f9c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x568f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_568fa0:
    // 0x568fa0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x568fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_568fa4:
    // 0x568fa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x568fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_568fa8:
    // 0x568fa8: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x568fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
label_568fac:
    // 0x568fac: 0xa4800016  sh          $zero, 0x16($a0)
    ctx->pc = 0x568facu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 0));
label_568fb0:
    // 0x568fb0: 0xa4800018  sh          $zero, 0x18($a0)
    ctx->pc = 0x568fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 0));
label_568fb4:
    // 0x568fb4: 0xc04a576  jal         func_1295D8
label_568fb8:
    if (ctx->pc == 0x568FB8u) {
        ctx->pc = 0x568FB8u;
            // 0x568fb8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x568FBCu;
        goto label_568fbc;
    }
    ctx->pc = 0x568FB4u;
    SET_GPR_U32(ctx, 31, 0x568FBCu);
    ctx->pc = 0x568FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568FB4u;
            // 0x568fb8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568FBCu; }
        if (ctx->pc != 0x568FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568FBCu; }
        if (ctx->pc != 0x568FBCu) { return; }
    }
    ctx->pc = 0x568FBCu;
label_568fbc:
    // 0x568fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x568fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_568fc0:
    // 0x568fc0: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x568fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_568fc4:
    // 0x568fc4: 0xa2020024  sb          $v0, 0x24($s0)
    ctx->pc = 0x568fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 2));
label_568fc8:
    // 0x568fc8: 0xc0b1370  jal         func_2C4DC0
label_568fcc:
    if (ctx->pc == 0x568FCCu) {
        ctx->pc = 0x568FCCu;
            // 0x568fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x568FD0u;
        goto label_568fd0;
    }
    ctx->pc = 0x568FC8u;
    SET_GPR_U32(ctx, 31, 0x568FD0u);
    ctx->pc = 0x568FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568FC8u;
            // 0x568fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568FD0u; }
        if (ctx->pc != 0x568FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568FD0u; }
        if (ctx->pc != 0x568FD0u) { return; }
    }
    ctx->pc = 0x568FD0u;
label_568fd0:
    // 0x568fd0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x568fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_568fd4:
    // 0x568fd4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x568fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_568fd8:
    // 0x568fd8: 0x24639320  addiu       $v1, $v1, -0x6CE0
    ctx->pc = 0x568fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939424));
label_568fdc:
    // 0x568fdc: 0x24429360  addiu       $v0, $v0, -0x6CA0
    ctx->pc = 0x568fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939488));
label_568fe0:
    // 0x568fe0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x568fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_568fe4:
    // 0x568fe4: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x568fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_568fe8:
    // 0x568fe8: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x568fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_568fec:
    // 0x568fec: 0xc0adb98  jal         func_2B6E60
label_568ff0:
    if (ctx->pc == 0x568FF0u) {
        ctx->pc = 0x568FF0u;
            // 0x568ff0: 0xae2000e0  sw          $zero, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
        ctx->pc = 0x568FF4u;
        goto label_568ff4;
    }
    ctx->pc = 0x568FECu;
    SET_GPR_U32(ctx, 31, 0x568FF4u);
    ctx->pc = 0x568FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568FECu;
            // 0x568ff0: 0xae2000e0  sw          $zero, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6E60u;
    if (runtime->hasFunction(0x2B6E60u)) {
        auto targetFn = runtime->lookupFunction(0x2B6E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568FF4u; }
        if (ctx->pc != 0x568FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6E60_0x2b6e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568FF4u; }
        if (ctx->pc != 0x568FF4u) { return; }
    }
    ctx->pc = 0x568FF4u;
label_568ff4:
    // 0x568ff4: 0xc0ada8c  jal         func_2B6A30
label_568ff8:
    if (ctx->pc == 0x568FF8u) {
        ctx->pc = 0x568FF8u;
            // 0x568ff8: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->pc = 0x568FFCu;
        goto label_568ffc;
    }
    ctx->pc = 0x568FF4u;
    SET_GPR_U32(ctx, 31, 0x568FFCu);
    ctx->pc = 0x568FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568FF4u;
            // 0x568ff8: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A30u;
    if (runtime->hasFunction(0x2B6A30u)) {
        auto targetFn = runtime->lookupFunction(0x2B6A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568FFCu; }
        if (ctx->pc != 0x568FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6A30_0x2b6a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568FFCu; }
        if (ctx->pc != 0x568FFCu) { return; }
    }
    ctx->pc = 0x568FFCu;
label_568ffc:
    // 0x568ffc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x568ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_569000:
    // 0x569000: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x569000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_569004:
    // 0x569004: 0xae220218  sw          $v0, 0x218($s1)
    ctx->pc = 0x569004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 2));
label_569008:
    // 0x569008: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x569008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
label_56900c:
    // 0x56900c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56900cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_569010:
    // 0x569010: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x569010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_569014:
    // 0x569014: 0x244281bc  addiu       $v0, $v0, -0x7E44
    ctx->pc = 0x569014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934972));
label_569018:
    // 0x569018: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x569018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_56901c:
    // 0x56901c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x56901cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_569020:
    // 0x569020: 0x246381fc  addiu       $v1, $v1, -0x7E04
    ctx->pc = 0x569020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935036));
label_569024:
    // 0x569024: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x569024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
label_569028:
    // 0x569028: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x569028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_56902c:
    // 0x56902c: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x56902cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
label_569030:
    // 0x569030: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x569030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_569034:
    // 0x569034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x569034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_569038:
    // 0x569038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x569038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_56903c:
    // 0x56903c: 0x3e00008  jr          $ra
label_569040:
    if (ctx->pc == 0x569040u) {
        ctx->pc = 0x569040u;
            // 0x569040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x569044u;
        goto label_569044;
    }
    ctx->pc = 0x56903Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x569040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56903Cu;
            // 0x569040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x569044u;
label_569044:
    // 0x569044: 0x0  nop
    ctx->pc = 0x569044u;
    // NOP
label_569048:
    // 0x569048: 0x0  nop
    ctx->pc = 0x569048u;
    // NOP
label_56904c:
    // 0x56904c: 0x0  nop
    ctx->pc = 0x56904cu;
    // NOP
label_569050:
    // 0x569050: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x569050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_569054:
    // 0x569054: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x569054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_569058:
    // 0x569058: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x569058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_56905c:
    // 0x56905c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x56905cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_569060:
    // 0x569060: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x569060u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_569064:
    // 0x569064: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x569064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_569068:
    // 0x569068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x569068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_56906c:
    // 0x56906c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56906cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_569070:
    // 0x569070: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x569070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_569074:
    // 0x569074: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_569078:
    if (ctx->pc == 0x569078u) {
        ctx->pc = 0x569078u;
            // 0x569078: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56907Cu;
        goto label_56907c;
    }
    ctx->pc = 0x569074u;
    {
        const bool branch_taken_0x569074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x569078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569074u;
            // 0x569078: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x569074) {
            ctx->pc = 0x5690B8u;
            goto label_5690b8;
        }
    }
    ctx->pc = 0x56907Cu;
label_56907c:
    // 0x56907c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x56907cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_569080:
    // 0x569080: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x569080u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_569084:
    // 0x569084: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x569084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_569088:
    // 0x569088: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x569088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_56908c:
    // 0x56908c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x56908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_569090:
    // 0x569090: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x569090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_569094:
    // 0x569094: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x569094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_569098:
    // 0x569098: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x569098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_56909c:
    // 0x56909c: 0x320f809  jalr        $t9
label_5690a0:
    if (ctx->pc == 0x5690A0u) {
        ctx->pc = 0x5690A0u;
            // 0x5690a0: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x5690A4u;
        goto label_5690a4;
    }
    ctx->pc = 0x56909Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5690A4u);
        ctx->pc = 0x5690A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56909Cu;
            // 0x5690a0: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5690A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5690A4u; }
            if (ctx->pc != 0x5690A4u) { return; }
        }
        }
    }
    ctx->pc = 0x5690A4u;
label_5690a4:
    // 0x5690a4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x5690a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_5690a8:
    // 0x5690a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x5690a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_5690ac:
    // 0x5690ac: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x5690acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_5690b0:
    // 0x5690b0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_5690b4:
    if (ctx->pc == 0x5690B4u) {
        ctx->pc = 0x5690B4u;
            // 0x5690b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x5690B8u;
        goto label_5690b8;
    }
    ctx->pc = 0x5690B0u;
    {
        const bool branch_taken_0x5690b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5690B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5690B0u;
            // 0x5690b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5690b0) {
            ctx->pc = 0x569088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_569088;
        }
    }
    ctx->pc = 0x5690B8u;
label_5690b8:
    // 0x5690b8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x5690b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5690bc:
    // 0x5690bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x5690bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_5690c0:
    // 0x5690c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5690c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5690c4:
    // 0x5690c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5690c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5690c8:
    // 0x5690c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5690c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5690cc:
    // 0x5690cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5690ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5690d0:
    // 0x5690d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5690d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5690d4:
    // 0x5690d4: 0x3e00008  jr          $ra
label_5690d8:
    if (ctx->pc == 0x5690D8u) {
        ctx->pc = 0x5690D8u;
            // 0x5690d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x5690DCu;
        goto label_5690dc;
    }
    ctx->pc = 0x5690D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5690D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5690D4u;
            // 0x5690d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5690DCu;
label_5690dc:
    // 0x5690dc: 0x0  nop
    ctx->pc = 0x5690dcu;
    // NOP
label_5690e0:
    // 0x5690e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5690e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5690e4:
    // 0x5690e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5690e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5690e8:
    // 0x5690e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5690e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5690ec:
    // 0x5690ec: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x5690ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_5690f0:
    // 0x5690f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5690f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5690f4:
    // 0x5690f4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x5690f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_5690f8:
    // 0x5690f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x5690f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5690fc:
    // 0x5690fc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x5690fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_569100:
    // 0x569100: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x569100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_569104:
    // 0x569104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x569104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_569108:
    // 0x569108: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x569108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_56910c:
    // 0x56910c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x56910cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_569110:
    // 0x569110: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x569110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_569114:
    // 0x569114: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x569114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_569118:
    // 0x569118: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x569118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_56911c:
    // 0x56911c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x56911cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_569120:
    // 0x569120: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x569120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_569124:
    // 0x569124: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x569124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_569128:
    // 0x569128: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x569128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_56912c:
    // 0x56912c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x56912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_569130:
    // 0x569130: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x569130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_569134:
    // 0x569134: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x569134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_569138:
    // 0x569138: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x569138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_56913c:
    // 0x56913c: 0xc0a997c  jal         func_2A65F0
label_569140:
    if (ctx->pc == 0x569140u) {
        ctx->pc = 0x569140u;
            // 0x569140: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x569144u;
        goto label_569144;
    }
    ctx->pc = 0x56913Cu;
    SET_GPR_U32(ctx, 31, 0x569144u);
    ctx->pc = 0x569140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56913Cu;
            // 0x569140: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569144u; }
        if (ctx->pc != 0x569144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569144u; }
        if (ctx->pc != 0x569144u) { return; }
    }
    ctx->pc = 0x569144u;
label_569144:
    // 0x569144: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x569144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_569148:
    // 0x569148: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x569148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_56914c:
    // 0x56914c: 0xc0d879c  jal         func_361E70
label_569150:
    if (ctx->pc == 0x569150u) {
        ctx->pc = 0x569150u;
            // 0x569150: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x569154u;
        goto label_569154;
    }
    ctx->pc = 0x56914Cu;
    SET_GPR_U32(ctx, 31, 0x569154u);
    ctx->pc = 0x569150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56914Cu;
            // 0x569150: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569154u; }
        if (ctx->pc != 0x569154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569154u; }
        if (ctx->pc != 0x569154u) { return; }
    }
    ctx->pc = 0x569154u;
label_569154:
    // 0x569154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x569154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_569158:
    // 0x569158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x569158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_56915c:
    // 0x56915c: 0x3e00008  jr          $ra
label_569160:
    if (ctx->pc == 0x569160u) {
        ctx->pc = 0x569160u;
            // 0x569160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x569164u;
        goto label_569164;
    }
    ctx->pc = 0x56915Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x569160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56915Cu;
            // 0x569160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x569164u;
label_569164:
    // 0x569164: 0x0  nop
    ctx->pc = 0x569164u;
    // NOP
label_569168:
    // 0x569168: 0x0  nop
    ctx->pc = 0x569168u;
    // NOP
label_56916c:
    // 0x56916c: 0x0  nop
    ctx->pc = 0x56916cu;
    // NOP
label_569170:
    // 0x569170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x569170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_569174:
    // 0x569174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x569174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_569178:
    // 0x569178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x569178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_56917c:
    // 0x56917c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x56917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_569180:
    // 0x569180: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_569184:
    if (ctx->pc == 0x569184u) {
        ctx->pc = 0x569184u;
            // 0x569184: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x569188u;
        goto label_569188;
    }
    ctx->pc = 0x569180u;
    {
        const bool branch_taken_0x569180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x569184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569180u;
            // 0x569184: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x569180) {
            ctx->pc = 0x5692A0u;
            goto label_5692a0;
        }
    }
    ctx->pc = 0x569188u;
label_569188:
    // 0x569188: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x569188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_56918c:
    // 0x56918c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x56918cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_569190:
    // 0x569190: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x569190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_569194:
    // 0x569194: 0xc075128  jal         func_1D44A0
label_569198:
    if (ctx->pc == 0x569198u) {
        ctx->pc = 0x569198u;
            // 0x569198: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x56919Cu;
        goto label_56919c;
    }
    ctx->pc = 0x569194u;
    SET_GPR_U32(ctx, 31, 0x56919Cu);
    ctx->pc = 0x569198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569194u;
            // 0x569198: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56919Cu; }
        if (ctx->pc != 0x56919Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56919Cu; }
        if (ctx->pc != 0x56919Cu) { return; }
    }
    ctx->pc = 0x56919Cu;
label_56919c:
    // 0x56919c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x56919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_5691a0:
    // 0x5691a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5691a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5691a4:
    // 0x5691a4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x5691a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_5691a8:
    // 0x5691a8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x5691a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_5691ac:
    // 0x5691ac: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x5691acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_5691b0:
    // 0x5691b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_5691b4:
    if (ctx->pc == 0x5691B4u) {
        ctx->pc = 0x5691B4u;
            // 0x5691b4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x5691B8u;
        goto label_5691b8;
    }
    ctx->pc = 0x5691B0u;
    {
        const bool branch_taken_0x5691b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x5691B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5691B0u;
            // 0x5691b4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5691b0) {
            ctx->pc = 0x5691C0u;
            goto label_5691c0;
        }
    }
    ctx->pc = 0x5691B8u;
label_5691b8:
    // 0x5691b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5691b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5691bc:
    // 0x5691bc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x5691bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_5691c0:
    // 0x5691c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x5691c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5691c4:
    // 0x5691c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5691c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5691c8:
    // 0x5691c8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x5691c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_5691cc:
    // 0x5691cc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x5691ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_5691d0:
    // 0x5691d0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x5691d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_5691d4:
    // 0x5691d4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_5691d8:
    if (ctx->pc == 0x5691D8u) {
        ctx->pc = 0x5691D8u;
            // 0x5691d8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x5691DCu;
        goto label_5691dc;
    }
    ctx->pc = 0x5691D4u;
    {
        const bool branch_taken_0x5691d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5691d4) {
            ctx->pc = 0x5691D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5691D4u;
            // 0x5691d8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5691E8u;
            goto label_5691e8;
        }
    }
    ctx->pc = 0x5691DCu;
label_5691dc:
    // 0x5691dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5691dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5691e0:
    // 0x5691e0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x5691e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_5691e4:
    // 0x5691e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x5691e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5691e8:
    // 0x5691e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5691e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5691ec:
    // 0x5691ec: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x5691ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_5691f0:
    // 0x5691f0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x5691f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_5691f4:
    // 0x5691f4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x5691f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_5691f8:
    // 0x5691f8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_5691fc:
    if (ctx->pc == 0x5691FCu) {
        ctx->pc = 0x5691FCu;
            // 0x5691fc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x569200u;
        goto label_569200;
    }
    ctx->pc = 0x5691F8u;
    {
        const bool branch_taken_0x5691f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5691f8) {
            ctx->pc = 0x5691FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5691F8u;
            // 0x5691fc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56920Cu;
            goto label_56920c;
        }
    }
    ctx->pc = 0x569200u;
label_569200:
    // 0x569200: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x569200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_569204:
    // 0x569204: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x569204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_569208:
    // 0x569208: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x569208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_56920c:
    // 0x56920c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x56920cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_569210:
    // 0x569210: 0x320f809  jalr        $t9
label_569214:
    if (ctx->pc == 0x569214u) {
        ctx->pc = 0x569214u;
            // 0x569214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x569218u;
        goto label_569218;
    }
    ctx->pc = 0x569210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x569218u);
        ctx->pc = 0x569214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569210u;
            // 0x569214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x569218u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x569218u; }
            if (ctx->pc != 0x569218u) { return; }
        }
        }
    }
    ctx->pc = 0x569218u;
label_569218:
    // 0x569218: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x569218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_56921c:
    // 0x56921c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x56921cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_569220:
    // 0x569220: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x569220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_569224:
    // 0x569224: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x569224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_569228:
    // 0x569228: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x569228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_56922c:
    // 0x56922c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x56922cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_569230:
    // 0x569230: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_569234:
    if (ctx->pc == 0x569234u) {
        ctx->pc = 0x569234u;
            // 0x569234: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x569238u;
        goto label_569238;
    }
    ctx->pc = 0x569230u;
    {
        const bool branch_taken_0x569230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x569230) {
            ctx->pc = 0x569234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569230u;
            // 0x569234: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x569244u;
            goto label_569244;
        }
    }
    ctx->pc = 0x569238u;
label_569238:
    // 0x569238: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x569238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_56923c:
    // 0x56923c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x56923cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_569240:
    // 0x569240: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x569240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_569244:
    // 0x569244: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x569244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_569248:
    // 0x569248: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x569248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_56924c:
    // 0x56924c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x56924cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_569250:
    // 0x569250: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x569250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_569254:
    // 0x569254: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x569254u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_569258:
    // 0x569258: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_56925c:
    if (ctx->pc == 0x56925Cu) {
        ctx->pc = 0x569260u;
        goto label_569260;
    }
    ctx->pc = 0x569258u;
    {
        const bool branch_taken_0x569258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x569258) {
            ctx->pc = 0x569268u;
            goto label_569268;
        }
    }
    ctx->pc = 0x569260u;
label_569260:
    // 0x569260: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x569260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_569264:
    // 0x569264: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x569264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_569268:
    // 0x569268: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x569268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_56926c:
    // 0x56926c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x56926cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_569270:
    // 0x569270: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x569270u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_569274:
    // 0x569274: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_569278:
    if (ctx->pc == 0x569278u) {
        ctx->pc = 0x56927Cu;
        goto label_56927c;
    }
    ctx->pc = 0x569274u;
    {
        const bool branch_taken_0x569274 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x569274) {
            ctx->pc = 0x569284u;
            goto label_569284;
        }
    }
    ctx->pc = 0x56927Cu;
label_56927c:
    // 0x56927c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x56927cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_569280:
    // 0x569280: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x569280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_569284:
    // 0x569284: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x569284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_569288:
    // 0x569288: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x569288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_56928c:
    // 0x56928c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x56928cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_569290:
    // 0x569290: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_569294:
    if (ctx->pc == 0x569294u) {
        ctx->pc = 0x569294u;
            // 0x569294: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x569298u;
        goto label_569298;
    }
    ctx->pc = 0x569290u;
    {
        const bool branch_taken_0x569290 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x569290) {
            ctx->pc = 0x569294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569290u;
            // 0x569294: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5692A4u;
            goto label_5692a4;
        }
    }
    ctx->pc = 0x569298u;
label_569298:
    // 0x569298: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x569298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_56929c:
    // 0x56929c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x56929cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_5692a0:
    // 0x5692a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5692a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5692a4:
    // 0x5692a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5692a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5692a8:
    // 0x5692a8: 0x3e00008  jr          $ra
label_5692ac:
    if (ctx->pc == 0x5692ACu) {
        ctx->pc = 0x5692ACu;
            // 0x5692ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5692B0u;
        goto label_5692b0;
    }
    ctx->pc = 0x5692A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5692ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5692A8u;
            // 0x5692ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5692B0u;
label_5692b0:
    // 0x5692b0: 0x81056c0  j           func_415B00
label_5692b4:
    if (ctx->pc == 0x5692B4u) {
        ctx->pc = 0x5692B4u;
            // 0x5692b4: 0x2484ff80  addiu       $a0, $a0, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
        ctx->pc = 0x5692B8u;
        goto label_5692b8;
    }
    ctx->pc = 0x5692B0u;
    ctx->pc = 0x5692B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5692B0u;
            // 0x5692b4: 0x2484ff80  addiu       $a0, $a0, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x415B00u;
    {
        auto targetFn = runtime->lookupFunction(0x415B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x5692B8u;
label_5692b8:
    // 0x5692b8: 0x0  nop
    ctx->pc = 0x5692b8u;
    // NOP
label_5692bc:
    // 0x5692bc: 0x0  nop
    ctx->pc = 0x5692bcu;
    // NOP
label_5692c0:
    // 0x5692c0: 0x815a21c  j           func_568870
label_5692c4:
    if (ctx->pc == 0x5692C4u) {
        ctx->pc = 0x5692C4u;
            // 0x5692c4: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->pc = 0x5692C8u;
        goto label_5692c8;
    }
    ctx->pc = 0x5692C0u;
    ctx->pc = 0x5692C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5692C0u;
            // 0x5692c4: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x568870u;
    if (runtime->hasFunction(0x568870u)) {
        auto targetFn = runtime->lookupFunction(0x568870u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00568870_0x568870(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x5692C8u;
label_5692c8:
    // 0x5692c8: 0x0  nop
    ctx->pc = 0x5692c8u;
    // NOP
label_5692cc:
    // 0x5692cc: 0x0  nop
    ctx->pc = 0x5692ccu;
    // NOP
label_5692d0:
    // 0x5692d0: 0x815a23c  j           func_5688F0
label_5692d4:
    if (ctx->pc == 0x5692D4u) {
        ctx->pc = 0x5692D4u;
            // 0x5692d4: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->pc = 0x5692D8u;
        goto label_5692d8;
    }
    ctx->pc = 0x5692D0u;
    ctx->pc = 0x5692D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5692D0u;
            // 0x5692d4: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5688F0u;
    {
        auto targetFn = runtime->lookupFunction(0x5688F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x5692D8u;
label_5692d8:
    // 0x5692d8: 0x0  nop
    ctx->pc = 0x5692d8u;
    // NOP
label_5692dc:
    // 0x5692dc: 0x0  nop
    ctx->pc = 0x5692dcu;
    // NOP
label_5692e0:
    // 0x5692e0: 0x815a088  j           func_568220
label_5692e4:
    if (ctx->pc == 0x5692E4u) {
        ctx->pc = 0x5692E4u;
            // 0x5692e4: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->pc = 0x5692E8u;
        goto label_5692e8;
    }
    ctx->pc = 0x5692E0u;
    ctx->pc = 0x5692E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5692E0u;
            // 0x5692e4: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x568220u;
    if (runtime->hasFunction(0x568220u)) {
        auto targetFn = runtime->lookupFunction(0x568220u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00568220_0x568220(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x5692E8u;
label_5692e8:
    // 0x5692e8: 0x0  nop
    ctx->pc = 0x5692e8u;
    // NOP
label_5692ec:
    // 0x5692ec: 0x0  nop
    ctx->pc = 0x5692ecu;
    // NOP
label_5692f0:
    // 0x5692f0: 0x815a334  j           func_568CD0
label_5692f4:
    if (ctx->pc == 0x5692F4u) {
        ctx->pc = 0x5692F4u;
            // 0x5692f4: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->pc = 0x5692F8u;
        goto label_5692f8;
    }
    ctx->pc = 0x5692F0u;
    ctx->pc = 0x5692F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5692F0u;
            // 0x5692f4: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x568CD0u;
    if (runtime->hasFunction(0x568CD0u)) {
        auto targetFn = runtime->lookupFunction(0x568CD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00568CD0_0x568cd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x5692F8u;
label_5692f8:
    // 0x5692f8: 0x0  nop
    ctx->pc = 0x5692f8u;
    // NOP
label_5692fc:
    // 0x5692fc: 0x0  nop
    ctx->pc = 0x5692fcu;
    // NOP
label_569300:
    // 0x569300: 0x815a3c8  j           func_568F20
label_569304:
    if (ctx->pc == 0x569304u) {
        ctx->pc = 0x569304u;
            // 0x569304: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->pc = 0x569308u;
        goto label_569308;
    }
    ctx->pc = 0x569300u;
    ctx->pc = 0x569304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569300u;
            // 0x569304: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x568F20u;
    if (runtime->hasFunction(0x568F20u)) {
        auto targetFn = runtime->lookupFunction(0x568F20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00568F20_0x568f20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x569308u;
label_569308:
    // 0x569308: 0x0  nop
    ctx->pc = 0x569308u;
    // NOP
label_56930c:
    // 0x56930c: 0x0  nop
    ctx->pc = 0x56930cu;
    // NOP
label_569310:
    // 0x569310: 0x81056c0  j           func_415B00
label_569314:
    if (ctx->pc == 0x569314u) {
        ctx->pc = 0x569314u;
            // 0x569314: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->pc = 0x569318u;
        goto label_569318;
    }
    ctx->pc = 0x569310u;
    ctx->pc = 0x569314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569310u;
            // 0x569314: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x415B00u;
    {
        auto targetFn = runtime->lookupFunction(0x415B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x569318u;
label_569318:
    // 0x569318: 0x0  nop
    ctx->pc = 0x569318u;
    // NOP
label_56931c:
    // 0x56931c: 0x0  nop
    ctx->pc = 0x56931cu;
    // NOP
label_569320:
    // 0x569320: 0x8159fb4  j           func_567ED0
label_569324:
    if (ctx->pc == 0x569324u) {
        ctx->pc = 0x569324u;
            // 0x569324: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x569328u;
        goto label_569328;
    }
    ctx->pc = 0x569320u;
    ctx->pc = 0x569324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569320u;
            // 0x569324: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x567ED0u;
    {
        auto targetFn = runtime->lookupFunction(0x567ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x569328u;
label_569328:
    // 0x569328: 0x0  nop
    ctx->pc = 0x569328u;
    // NOP
label_56932c:
    // 0x56932c: 0x0  nop
    ctx->pc = 0x56932cu;
    // NOP
label_569330:
    // 0x569330: 0x8159e4c  j           func_567930
label_569334:
    if (ctx->pc == 0x569334u) {
        ctx->pc = 0x569334u;
            // 0x569334: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x569338u;
        goto label_569338;
    }
    ctx->pc = 0x569330u;
    ctx->pc = 0x569334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569330u;
            // 0x569334: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x567930u;
    if (runtime->hasFunction(0x567930u)) {
        auto targetFn = runtime->lookupFunction(0x567930u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00567930_0x567930(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x569338u;
label_569338:
    // 0x569338: 0x0  nop
    ctx->pc = 0x569338u;
    // NOP
label_56933c:
    // 0x56933c: 0x0  nop
    ctx->pc = 0x56933cu;
    // NOP
label_569340:
    // 0x569340: 0x8159e18  j           func_567860
label_569344:
    if (ctx->pc == 0x569344u) {
        ctx->pc = 0x569344u;
            // 0x569344: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x569348u;
        goto label_569348;
    }
    ctx->pc = 0x569340u;
    ctx->pc = 0x569344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569340u;
            // 0x569344: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x567860u;
    {
        auto targetFn = runtime->lookupFunction(0x567860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x569348u;
label_569348:
    // 0x569348: 0x0  nop
    ctx->pc = 0x569348u;
    // NOP
label_56934c:
    // 0x56934c: 0x0  nop
    ctx->pc = 0x56934cu;
    // NOP
label_569350:
    // 0x569350: 0x8159f58  j           func_567D60
label_569354:
    if (ctx->pc == 0x569354u) {
        ctx->pc = 0x569354u;
            // 0x569354: 0x2484ff70  addiu       $a0, $a0, -0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
        ctx->pc = 0x569358u;
        goto label_569358;
    }
    ctx->pc = 0x569350u;
    ctx->pc = 0x569354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569350u;
            // 0x569354: 0x2484ff70  addiu       $a0, $a0, -0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x567D60u;
    {
        auto targetFn = runtime->lookupFunction(0x567D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x569358u;
label_569358:
    // 0x569358: 0x0  nop
    ctx->pc = 0x569358u;
    // NOP
label_56935c:
    // 0x56935c: 0x0  nop
    ctx->pc = 0x56935cu;
    // NOP
label_569360:
    // 0x569360: 0x8159f60  j           func_567D80
label_569364:
    if (ctx->pc == 0x569364u) {
        ctx->pc = 0x569364u;
            // 0x569364: 0x2484ff70  addiu       $a0, $a0, -0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
        ctx->pc = 0x569368u;
        goto label_569368;
    }
    ctx->pc = 0x569360u;
    ctx->pc = 0x569364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569360u;
            // 0x569364: 0x2484ff70  addiu       $a0, $a0, -0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x567D80u;
    {
        auto targetFn = runtime->lookupFunction(0x567D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x569368u;
label_569368:
    // 0x569368: 0x0  nop
    ctx->pc = 0x569368u;
    // NOP
label_56936c:
    // 0x56936c: 0x0  nop
    ctx->pc = 0x56936cu;
    // NOP
label_569370:
    // 0x569370: 0x8159e18  j           func_567860
label_569374:
    if (ctx->pc == 0x569374u) {
        ctx->pc = 0x569374u;
            // 0x569374: 0x2484ff70  addiu       $a0, $a0, -0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
        ctx->pc = 0x569378u;
        goto label_569378;
    }
    ctx->pc = 0x569370u;
    ctx->pc = 0x569374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569370u;
            // 0x569374: 0x2484ff70  addiu       $a0, $a0, -0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x567860u;
    {
        auto targetFn = runtime->lookupFunction(0x567860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x569378u;
label_569378:
    // 0x569378: 0x0  nop
    ctx->pc = 0x569378u;
    // NOP
label_56937c:
    // 0x56937c: 0x0  nop
    ctx->pc = 0x56937cu;
    // NOP
label_569380:
    // 0x569380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x569380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_569384:
    // 0x569384: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x569384u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_569388:
    // 0x569388: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x569388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_56938c:
    // 0x56938c: 0x24c60e84  addiu       $a2, $a2, 0xE84
    ctx->pc = 0x56938cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3716));
label_569390:
    // 0x569390: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x569390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_569394:
    // 0x569394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x569394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_569398:
    // 0x569398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x569398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_56939c:
    // 0x56939c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56939cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5693a0:
    // 0x5693a0: 0x8c870060  lw          $a3, 0x60($a0)
    ctx->pc = 0x5693a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_5693a4:
    // 0x5693a4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x5693a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_5693a8:
    // 0x5693a8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x5693a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_5693ac:
    // 0x5693ac: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x5693acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_5693b0:
    // 0x5693b0: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x5693b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_5693b4:
    // 0x5693b4: 0x10a3004e  beq         $a1, $v1, . + 4 + (0x4E << 2)
label_5693b8:
    if (ctx->pc == 0x5693B8u) {
        ctx->pc = 0x5693B8u;
            // 0x5693b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5693BCu;
        goto label_5693bc;
    }
    ctx->pc = 0x5693B4u;
    {
        const bool branch_taken_0x5693b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x5693B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5693B4u;
            // 0x5693b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5693b4) {
            ctx->pc = 0x5694F0u;
            goto label_5694f0;
        }
    }
    ctx->pc = 0x5693BCu;
label_5693bc:
    // 0x5693bc: 0x50a00047  beql        $a1, $zero, . + 4 + (0x47 << 2)
label_5693c0:
    if (ctx->pc == 0x5693C0u) {
        ctx->pc = 0x5693C0u;
            // 0x5693c0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x5693C4u;
        goto label_5693c4;
    }
    ctx->pc = 0x5693BCu;
    {
        const bool branch_taken_0x5693bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x5693bc) {
            ctx->pc = 0x5693C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5693BCu;
            // 0x5693c0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5694DCu;
            goto label_5694dc;
        }
    }
    ctx->pc = 0x5693C4u;
label_5693c4:
    // 0x5693c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x5693c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5693c8:
    // 0x5693c8: 0x50a3003a  beql        $a1, $v1, . + 4 + (0x3A << 2)
label_5693cc:
    if (ctx->pc == 0x5693CCu) {
        ctx->pc = 0x5693CCu;
            // 0x5693cc: 0x8e23005c  lw          $v1, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->pc = 0x5693D0u;
        goto label_5693d0;
    }
    ctx->pc = 0x5693C8u;
    {
        const bool branch_taken_0x5693c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5693c8) {
            ctx->pc = 0x5693CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5693C8u;
            // 0x5693cc: 0x8e23005c  lw          $v1, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5694B4u;
            goto label_5694b4;
        }
    }
    ctx->pc = 0x5693D0u;
label_5693d0:
    // 0x5693d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x5693d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5693d4:
    // 0x5693d4: 0x50a30019  beql        $a1, $v1, . + 4 + (0x19 << 2)
label_5693d8:
    if (ctx->pc == 0x5693D8u) {
        ctx->pc = 0x5693D8u;
            // 0x5693d8: 0x8e230058  lw          $v1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x5693DCu;
        goto label_5693dc;
    }
    ctx->pc = 0x5693D4u;
    {
        const bool branch_taken_0x5693d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5693d4) {
            ctx->pc = 0x5693D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5693D4u;
            // 0x5693d8: 0x8e230058  lw          $v1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56943Cu;
            goto label_56943c;
        }
    }
    ctx->pc = 0x5693DCu;
label_5693dc:
    // 0x5693dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5693dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5693e0:
    // 0x5693e0: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_5693e4:
    if (ctx->pc == 0x5693E4u) {
        ctx->pc = 0x5693E4u;
            // 0x5693e4: 0x240400c8  addiu       $a0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->pc = 0x5693E8u;
        goto label_5693e8;
    }
    ctx->pc = 0x5693E0u;
    {
        const bool branch_taken_0x5693e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5693e0) {
            ctx->pc = 0x5693E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5693E0u;
            // 0x5693e4: 0x240400c8  addiu       $a0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5693F0u;
            goto label_5693f0;
        }
    }
    ctx->pc = 0x5693E8u;
label_5693e8:
    // 0x5693e8: 0x1000005a  b           . + 4 + (0x5A << 2)
label_5693ec:
    if (ctx->pc == 0x5693ECu) {
        ctx->pc = 0x5693ECu;
            // 0x5693ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x5693F0u;
        goto label_5693f0;
    }
    ctx->pc = 0x5693E8u;
    {
        const bool branch_taken_0x5693e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5693ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5693E8u;
            // 0x5693ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5693e8) {
            ctx->pc = 0x569554u;
            goto label_569554;
        }
    }
    ctx->pc = 0x5693F0u;
label_5693f0:
    // 0x5693f0: 0xc040180  jal         func_100600
label_5693f4:
    if (ctx->pc == 0x5693F4u) {
        ctx->pc = 0x5693F8u;
        goto label_5693f8;
    }
    ctx->pc = 0x5693F0u;
    SET_GPR_U32(ctx, 31, 0x5693F8u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5693F8u; }
        if (ctx->pc != 0x5693F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5693F8u; }
        if (ctx->pc != 0x5693F8u) { return; }
    }
    ctx->pc = 0x5693F8u;
label_5693f8:
    // 0x5693f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_5693fc:
    if (ctx->pc == 0x5693FCu) {
        ctx->pc = 0x5693FCu;
            // 0x5693fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x569400u;
        goto label_569400;
    }
    ctx->pc = 0x5693F8u;
    {
        const bool branch_taken_0x5693f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5693FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5693F8u;
            // 0x5693fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5693f8) {
            ctx->pc = 0x56941Cu;
            goto label_56941c;
        }
    }
    ctx->pc = 0x569400u;
label_569400:
    // 0x569400: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x569400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_569404:
    // 0x569404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x569404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_569408:
    // 0x569408: 0xc0f19fc  jal         func_3C67F0
label_56940c:
    if (ctx->pc == 0x56940Cu) {
        ctx->pc = 0x56940Cu;
            // 0x56940c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x569410u;
        goto label_569410;
    }
    ctx->pc = 0x569408u;
    SET_GPR_U32(ctx, 31, 0x569410u);
    ctx->pc = 0x56940Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569408u;
            // 0x56940c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C67F0u;
    if (runtime->hasFunction(0x3C67F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C67F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569410u; }
        if (ctx->pc != 0x569410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C67F0_0x3c67f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569410u; }
        if (ctx->pc != 0x569410u) { return; }
    }
    ctx->pc = 0x569410u;
label_569410:
    // 0x569410: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x569410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_569414:
    // 0x569414: 0x2442e020  addiu       $v0, $v0, -0x1FE0
    ctx->pc = 0x569414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959136));
label_569418:
    // 0x569418: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x569418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_56941c:
    // 0x56941c: 0xae300058  sw          $s0, 0x58($s1)
    ctx->pc = 0x56941cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 16));
label_569420:
    // 0x569420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x569420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_569424:
    // 0x569424: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x569424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_569428:
    // 0x569428: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x569428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_56942c:
    // 0x56942c: 0x320f809  jalr        $t9
label_569430:
    if (ctx->pc == 0x569430u) {
        ctx->pc = 0x569430u;
            // 0x569430: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x569434u;
        goto label_569434;
    }
    ctx->pc = 0x56942Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x569434u);
        ctx->pc = 0x569430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56942Cu;
            // 0x569430: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x569434u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x569434u; }
            if (ctx->pc != 0x569434u) { return; }
        }
        }
    }
    ctx->pc = 0x569434u;
label_569434:
    // 0x569434: 0x10000046  b           . + 4 + (0x46 << 2)
label_569438:
    if (ctx->pc == 0x569438u) {
        ctx->pc = 0x56943Cu;
        goto label_56943c;
    }
    ctx->pc = 0x569434u;
    {
        const bool branch_taken_0x569434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x569434) {
            ctx->pc = 0x569550u;
            goto label_569550;
        }
    }
    ctx->pc = 0x56943Cu;
label_56943c:
    // 0x56943c: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x56943cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_569440:
    // 0x569440: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x569440u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_569444:
    // 0x569444: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
label_569448:
    if (ctx->pc == 0x569448u) {
        ctx->pc = 0x56944Cu;
        goto label_56944c;
    }
    ctx->pc = 0x569444u;
    {
        const bool branch_taken_0x569444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x569444) {
            ctx->pc = 0x569550u;
            goto label_569550;
        }
    }
    ctx->pc = 0x56944Cu;
label_56944c:
    // 0x56944c: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x56944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_569450:
    // 0x569450: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
label_569454:
    if (ctx->pc == 0x569454u) {
        ctx->pc = 0x569454u;
            // 0x569454: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x569458u;
        goto label_569458;
    }
    ctx->pc = 0x569450u;
    {
        const bool branch_taken_0x569450 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x569450) {
            ctx->pc = 0x569454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569450u;
            // 0x569454: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
            ctx->pc = 0x569470u;
            goto label_569470;
        }
    }
    ctx->pc = 0x569458u;
label_569458:
    // 0x569458: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x569458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_56945c:
    // 0x56945c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x56945cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_569460:
    // 0x569460: 0x320f809  jalr        $t9
label_569464:
    if (ctx->pc == 0x569464u) {
        ctx->pc = 0x569464u;
            // 0x569464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x569468u;
        goto label_569468;
    }
    ctx->pc = 0x569460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x569468u);
        ctx->pc = 0x569464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569460u;
            // 0x569464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x569468u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x569468u; }
            if (ctx->pc != 0x569468u) { return; }
        }
        }
    }
    ctx->pc = 0x569468u;
label_569468:
    // 0x569468: 0x10000039  b           . + 4 + (0x39 << 2)
label_56946c:
    if (ctx->pc == 0x56946Cu) {
        ctx->pc = 0x569470u;
        goto label_569470;
    }
    ctx->pc = 0x569468u;
    {
        const bool branch_taken_0x569468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x569468) {
            ctx->pc = 0x569550u;
            goto label_569550;
        }
    }
    ctx->pc = 0x569470u;
label_569470:
    // 0x569470: 0xc040180  jal         func_100600
label_569474:
    if (ctx->pc == 0x569474u) {
        ctx->pc = 0x569478u;
        goto label_569478;
    }
    ctx->pc = 0x569470u;
    SET_GPR_U32(ctx, 31, 0x569478u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569478u; }
        if (ctx->pc != 0x569478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569478u; }
        if (ctx->pc != 0x569478u) { return; }
    }
    ctx->pc = 0x569478u;
label_569478:
    // 0x569478: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_56947c:
    if (ctx->pc == 0x56947Cu) {
        ctx->pc = 0x56947Cu;
            // 0x56947c: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x569480u;
        goto label_569480;
    }
    ctx->pc = 0x569478u;
    {
        const bool branch_taken_0x569478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x569478) {
            ctx->pc = 0x56947Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x569478u;
            // 0x56947c: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x569498u;
            goto label_569498;
        }
    }
    ctx->pc = 0x569480u;
label_569480:
    // 0x569480: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x569480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_569484:
    // 0x569484: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x569484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_569488:
    // 0x569488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x569488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_56948c:
    // 0x56948c: 0xc12ae68  jal         func_4AB9A0
label_569490:
    if (ctx->pc == 0x569490u) {
        ctx->pc = 0x569490u;
            // 0x569490: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x569494u;
        goto label_569494;
    }
    ctx->pc = 0x56948Cu;
    SET_GPR_U32(ctx, 31, 0x569494u);
    ctx->pc = 0x569490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56948Cu;
            // 0x569490: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AB9A0u;
    if (runtime->hasFunction(0x4AB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x4AB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569494u; }
        if (ctx->pc != 0x569494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AB9A0_0x4ab9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569494u; }
        if (ctx->pc != 0x569494u) { return; }
    }
    ctx->pc = 0x569494u;
label_569494:
    // 0x569494: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x569494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_569498:
    // 0x569498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x569498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_56949c:
    // 0x56949c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x56949cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5694a0:
    // 0x5694a0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x5694a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_5694a4:
    // 0x5694a4: 0x320f809  jalr        $t9
label_5694a8:
    if (ctx->pc == 0x5694A8u) {
        ctx->pc = 0x5694A8u;
            // 0x5694a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x5694ACu;
        goto label_5694ac;
    }
    ctx->pc = 0x5694A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5694ACu);
        ctx->pc = 0x5694A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5694A4u;
            // 0x5694a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5694ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5694ACu; }
            if (ctx->pc != 0x5694ACu) { return; }
        }
        }
    }
    ctx->pc = 0x5694ACu;
label_5694ac:
    // 0x5694ac: 0x10000028  b           . + 4 + (0x28 << 2)
label_5694b0:
    if (ctx->pc == 0x5694B0u) {
        ctx->pc = 0x5694B4u;
        goto label_5694b4;
    }
    ctx->pc = 0x5694ACu;
    {
        const bool branch_taken_0x5694ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5694ac) {
            ctx->pc = 0x569550u;
            goto label_569550;
        }
    }
    ctx->pc = 0x5694B4u;
label_5694b4:
    // 0x5694b4: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x5694b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_5694b8:
    // 0x5694b8: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x5694b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_5694bc:
    // 0x5694bc: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_5694c0:
    if (ctx->pc == 0x5694C0u) {
        ctx->pc = 0x5694C4u;
        goto label_5694c4;
    }
    ctx->pc = 0x5694BCu;
    {
        const bool branch_taken_0x5694bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5694bc) {
            ctx->pc = 0x569550u;
            goto label_569550;
        }
    }
    ctx->pc = 0x5694C4u;
label_5694c4:
    // 0x5694c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5694c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5694c8:
    // 0x5694c8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x5694c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_5694cc:
    // 0x5694cc: 0x320f809  jalr        $t9
label_5694d0:
    if (ctx->pc == 0x5694D0u) {
        ctx->pc = 0x5694D0u;
            // 0x5694d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5694D4u;
        goto label_5694d4;
    }
    ctx->pc = 0x5694CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5694D4u);
        ctx->pc = 0x5694D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5694CCu;
            // 0x5694d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5694D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5694D4u; }
            if (ctx->pc != 0x5694D4u) { return; }
        }
        }
    }
    ctx->pc = 0x5694D4u;
label_5694d4:
    // 0x5694d4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_5694d8:
    if (ctx->pc == 0x5694D8u) {
        ctx->pc = 0x5694DCu;
        goto label_5694dc;
    }
    ctx->pc = 0x5694D4u;
    {
        const bool branch_taken_0x5694d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5694d4) {
            ctx->pc = 0x569550u;
            goto label_569550;
        }
    }
    ctx->pc = 0x5694DCu;
label_5694dc:
    // 0x5694dc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x5694dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_5694e0:
    // 0x5694e0: 0x320f809  jalr        $t9
label_5694e4:
    if (ctx->pc == 0x5694E4u) {
        ctx->pc = 0x5694E8u;
        goto label_5694e8;
    }
    ctx->pc = 0x5694E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5694E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5694E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5694E8u; }
            if (ctx->pc != 0x5694E8u) { return; }
        }
        }
    }
    ctx->pc = 0x5694E8u;
label_5694e8:
    // 0x5694e8: 0x10000019  b           . + 4 + (0x19 << 2)
label_5694ec:
    if (ctx->pc == 0x5694ECu) {
        ctx->pc = 0x5694F0u;
        goto label_5694f0;
    }
    ctx->pc = 0x5694E8u;
    {
        const bool branch_taken_0x5694e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5694e8) {
            ctx->pc = 0x569550u;
            goto label_569550;
        }
    }
    ctx->pc = 0x5694F0u;
label_5694f0:
    // 0x5694f0: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x5694f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_5694f4:
    // 0x5694f4: 0x80102a  slt         $v0, $a0, $zero
    ctx->pc = 0x5694f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_5694f8:
    // 0x5694f8: 0x38830005  xori        $v1, $a0, 0x5
    ctx->pc = 0x5694f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)5);
label_5694fc:
    // 0x5694fc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x5694fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_569500:
    // 0x569500: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_569504:
    if (ctx->pc == 0x569504u) {
        ctx->pc = 0x569504u;
            // 0x569504: 0x2c720001  sltiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x569508u;
        goto label_569508;
    }
    ctx->pc = 0x569500u;
    {
        const bool branch_taken_0x569500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x569504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569500u;
            // 0x569504: 0x2c720001  sltiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x569500) {
            ctx->pc = 0x56950Cu;
            goto label_56950c;
        }
    }
    ctx->pc = 0x569508u;
label_569508:
    // 0x569508: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x569508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_56950c:
    // 0x56950c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_569510:
    if (ctx->pc == 0x569510u) {
        ctx->pc = 0x569510u;
            // 0x569510: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x569514u;
        goto label_569514;
    }
    ctx->pc = 0x56950Cu;
    {
        const bool branch_taken_0x56950c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x56950c) {
            ctx->pc = 0x569510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56950Cu;
            // 0x569510: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x569524u;
            goto label_569524;
        }
    }
    ctx->pc = 0x569514u;
label_569514:
    // 0x569514: 0xc075eb4  jal         func_1D7AD0
label_569518:
    if (ctx->pc == 0x569518u) {
        ctx->pc = 0x569518u;
            // 0x569518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56951Cu;
        goto label_56951c;
    }
    ctx->pc = 0x569514u;
    SET_GPR_U32(ctx, 31, 0x56951Cu);
    ctx->pc = 0x569518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569514u;
            // 0x569518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56951Cu; }
        if (ctx->pc != 0x56951Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56951Cu; }
        if (ctx->pc != 0x56951Cu) { return; }
    }
    ctx->pc = 0x56951Cu;
label_56951c:
    // 0x56951c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x56951cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_569520:
    // 0x569520: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x569520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_569524:
    // 0x569524: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x569524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_569528:
    // 0x569528: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x569528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_56952c:
    // 0x56952c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_569530:
    if (ctx->pc == 0x569530u) {
        ctx->pc = 0x569534u;
        goto label_569534;
    }
    ctx->pc = 0x56952Cu;
    {
        const bool branch_taken_0x56952c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x56952c) {
            ctx->pc = 0x56953Cu;
            goto label_56953c;
        }
    }
    ctx->pc = 0x569534u;
label_569534:
    // 0x569534: 0xc072aaa  jal         func_1CAAA8
label_569538:
    if (ctx->pc == 0x569538u) {
        ctx->pc = 0x569538u;
            // 0x569538: 0x92040068  lbu         $a0, 0x68($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->pc = 0x56953Cu;
        goto label_56953c;
    }
    ctx->pc = 0x569534u;
    SET_GPR_U32(ctx, 31, 0x56953Cu);
    ctx->pc = 0x569538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569534u;
            // 0x569538: 0x92040068  lbu         $a0, 0x68($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56953Cu; }
        if (ctx->pc != 0x56953Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56953Cu; }
        if (ctx->pc != 0x56953Cu) { return; }
    }
    ctx->pc = 0x56953Cu;
label_56953c:
    // 0x56953c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x56953cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_569540:
    // 0x569540: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x569540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_569544:
    // 0x569544: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x569544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_569548:
    // 0x569548: 0xc057b7c  jal         func_15EDF0
label_56954c:
    if (ctx->pc == 0x56954Cu) {
        ctx->pc = 0x56954Cu;
            // 0x56954c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x569550u;
        goto label_569550;
    }
    ctx->pc = 0x569548u;
    SET_GPR_U32(ctx, 31, 0x569550u);
    ctx->pc = 0x56954Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569548u;
            // 0x56954c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569550u; }
        if (ctx->pc != 0x569550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x569550u; }
        if (ctx->pc != 0x569550u) { return; }
    }
    ctx->pc = 0x569550u;
label_569550:
    // 0x569550: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x569550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_569554:
    // 0x569554: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x569554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_569558:
    // 0x569558: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x569558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_56955c:
    // 0x56955c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x56955cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_569560:
    // 0x569560: 0x3e00008  jr          $ra
label_569564:
    if (ctx->pc == 0x569564u) {
        ctx->pc = 0x569564u;
            // 0x569564: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x569568u;
        goto label_569568;
    }
    ctx->pc = 0x569560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x569564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569560u;
            // 0x569564: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x569568u;
label_569568:
    // 0x569568: 0x0  nop
    ctx->pc = 0x569568u;
    // NOP
label_56956c:
    // 0x56956c: 0x0  nop
    ctx->pc = 0x56956cu;
    // NOP
label_569570:
    // 0x569570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x569570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_569574:
    // 0x569574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x569574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_569578:
    // 0x569578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x569578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_56957c:
    // 0x56957c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56957cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_569580:
    // 0x569580: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x569580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_569584:
    // 0x569584: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_569588:
    if (ctx->pc == 0x569588u) {
        ctx->pc = 0x569588u;
            // 0x569588: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56958Cu;
        goto label_56958c;
    }
    ctx->pc = 0x569584u;
    {
        const bool branch_taken_0x569584 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x569588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x569584u;
            // 0x569588: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x569584) {
            ctx->pc = 0x5695B8u;
            goto label_5695b8;
        }
    }
    ctx->pc = 0x56958Cu;
label_56958c:
    // 0x56958c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56958cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_569590:
    // 0x569590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x569590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_569594:
    // 0x569594: 0x24428280  addiu       $v0, $v0, -0x7D80
    ctx->pc = 0x569594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935168));
label_569598:
    // 0x569598: 0xc0ee744  jal         func_3B9D10
label_56959c:
    if (ctx->pc == 0x56959Cu) {
        ctx->pc = 0x56959Cu;
            // 0x56959c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x5695A0u;
        goto label_5695a0;
    }
    ctx->pc = 0x569598u;
    SET_GPR_U32(ctx, 31, 0x5695A0u);
    ctx->pc = 0x56959Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x569598u;
            // 0x56959c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D10u;
    if (runtime->hasFunction(0x3B9D10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5695A0u; }
        if (ctx->pc != 0x5695A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D10_0x3b9d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5695A0u; }
        if (ctx->pc != 0x5695A0u) { return; }
    }
    ctx->pc = 0x5695A0u;
label_5695a0:
    // 0x5695a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5695a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5695a4:
    // 0x5695a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5695a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5695a8:
    // 0x5695a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5695ac:
    if (ctx->pc == 0x5695ACu) {
        ctx->pc = 0x5695ACu;
            // 0x5695ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5695B0u;
        goto label_5695b0;
    }
    ctx->pc = 0x5695A8u;
    {
        const bool branch_taken_0x5695a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5695a8) {
            ctx->pc = 0x5695ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5695A8u;
            // 0x5695ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5695BCu;
            goto label_5695bc;
        }
    }
    ctx->pc = 0x5695B0u;
label_5695b0:
    // 0x5695b0: 0xc0400a8  jal         func_1002A0
label_5695b4:
    if (ctx->pc == 0x5695B4u) {
        ctx->pc = 0x5695B4u;
            // 0x5695b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5695B8u;
        goto label_5695b8;
    }
    ctx->pc = 0x5695B0u;
    SET_GPR_U32(ctx, 31, 0x5695B8u);
    ctx->pc = 0x5695B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5695B0u;
            // 0x5695b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5695B8u; }
        if (ctx->pc != 0x5695B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5695B8u; }
        if (ctx->pc != 0x5695B8u) { return; }
    }
    ctx->pc = 0x5695B8u;
label_5695b8:
    // 0x5695b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5695b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5695bc:
    // 0x5695bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5695bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5695c0:
    // 0x5695c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5695c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5695c4:
    // 0x5695c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5695c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5695c8:
    // 0x5695c8: 0x3e00008  jr          $ra
label_5695cc:
    if (ctx->pc == 0x5695CCu) {
        ctx->pc = 0x5695CCu;
            // 0x5695cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5695D0u;
        goto label_fallthrough_0x5695c8;
    }
    ctx->pc = 0x5695C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5695CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5695C8u;
            // 0x5695cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x5695c8:
    ctx->pc = 0x5695D0u;
}
